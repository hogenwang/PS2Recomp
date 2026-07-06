#include "ps2_runtime.h"
#include "ps2_log.h"
#include "ps2_stubs.h"
#include "ps2_syscalls.h"
#include "game_overrides.h"
#include "ps2_runtime_macros.h"
#include "runtime/ps2_gs_gpu.h"
#include "ThreadNaming.h"
#include "Kernel/Stubs/Audio.h"
#include "Kernel/Stubs/GS.h"
#include "Kernel/Stubs/MPEG.h"
#include "ps2_host_backend.h"

#include <iostream>
#include <fstream>
#include <algorithm>
#include <array>
#include <cctype>
#include <cstring>
#include <limits>
#include <chrono>
#include <atomic>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
#include <cstdlib>
#include <optional>
#include <iomanip>

#include "Kernel/Syscalls/Helpers/State.h"

namespace ps2_stubs
{
    void resetSifState();
    void pumpSifPadScriptInput(uint8_t *rdram);
}

#define ELF_MAGIC 0x464C457F // "\x7FELF" in little endian
#define ET_EXEC 2            // Executable file
#define EM_MIPS 8            // MIPS architecture
#define PT_LOAD 1            // Loadable segment

static constexpr int FB_WIDTH = 640;
static constexpr int FB_HEIGHT = 512;
static constexpr int DEFAULT_DISPLAY_HEIGHT = 448;
static constexpr uint32_t DEFAULT_FB_SIZE = FB_WIDTH * FB_HEIGHT * 4;

namespace
{
    bool isRuntimeEnvEnabled(const char *name)
    {
        const char *value = std::getenv(name);
        if (!value || value[0] == '\0')
        {
            return false;
        }

        return std::strcmp(value, "0") != 0 &&
               std::strcmp(value, "false") != 0 &&
               std::strcmp(value, "FALSE") != 0 &&
               std::strcmp(value, "off") != 0 &&
               std::strcmp(value, "OFF") != 0;
    }

    bool serialGuestThreadsEnabled()
    {
        static const bool enabled = isRuntimeEnvEnabled("PS2X_SERIAL_GUEST_THREADS");
        return enabled;
    }

    uint32_t serialGuestContendedYieldInterval()
    {
        static const uint32_t interval = []()
        {
            const char *value = std::getenv("PS2X_SERIAL_CONTENDED_YIELD_INTERVAL");
            if (!value || value[0] == '\0')
            {
                return 1u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 1u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 65536ul));
        }();
        return interval;
    }

    uint32_t serialGuestContendedPreemptInterval()
    {
        static const uint32_t interval = []()
        {
            const char *value = std::getenv("PS2X_SERIAL_CONTENDED_PREEMPT_INTERVAL");
            if (!value || value[0] == '\0')
            {
                return 1u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 1u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 65536ul));
        }();
        return interval;
    }

    uint32_t serialGuestYieldHandoffMicros()
    {
        static const uint32_t micros = []()
        {
            const char *value = std::getenv("PS2X_SERIAL_YIELD_HANDOFF_US");
            if (!value || value[0] == '\0')
            {
                return 1000u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 1000u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 0ul, 100000ul));
        }();
        return micros;
    }

    void yieldSerialGuestExecutionIfContended(PS2Runtime *runtime)
    {
        if (!runtime || runtime->guestExecutionWaiterCountForTesting() == 0u)
        {
            return;
        }

        thread_local uint32_t s_serialYieldCounter = 0u;
        const uint32_t interval = serialGuestContendedYieldInterval();
        if ((++s_serialYieldCounter % interval) != 0u)
        {
            return;
        }

        PS2Runtime::GuestExecutionReleaseScope releaseGuestExecution(runtime);
        const uint32_t handoffMicros = serialGuestYieldHandoffMicros();
        if (handoffMicros != 0u)
        {
            std::this_thread::sleep_for(std::chrono::microseconds(handoffMicros));
        }
        else
        {
            std::this_thread::yield();
        }
    }

    bool traceThreadHeartbeatEnabled()
    {
        static const bool enabled = isRuntimeEnvEnabled("PS2X_TRACE_THREAD_HEARTBEAT");
        return enabled;
    }

    bool traceMainThreadEnabled()
    {
        static const bool enabled = isRuntimeEnvEnabled("PS2X_TRACE_MAIN_THREAD");
        return enabled;
    }

    bool traceKofxiFrameStateEnabled()
    {
        static const bool enabled = isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_FRAME_STATE");
        return enabled;
    }

    std::shared_ptr<ThreadInfo> lookupCurrentThreadInfoForDebug()
    {
        std::lock_guard<std::mutex> lock(g_thread_map_mutex);
        auto it = g_threads.find(g_currentThreadId);
        if (it == g_threads.end())
        {
            return nullptr;
        }
        return it->second;
    }

    void updateThreadDebugState(const std::shared_ptr<ThreadInfo> &info, const R5900Context *ctx, uint64_t step)
    {
        if (!info || !ctx)
        {
            return;
        }

        info->debugPc.store(ctx->pc, std::memory_order_relaxed);
        info->debugRa.store(static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0)), std::memory_order_relaxed);
        info->debugSp.store(static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0)), std::memory_order_relaxed);
        info->debugGp.store(static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0)), std::memory_order_relaxed);
        info->debugStep.store(step, std::memory_order_relaxed);
    }

    void maybeTraceThreadHeartbeat(int tid,
                                   const std::shared_ptr<ThreadInfo> &info,
                                   const R5900Context *ctx,
                                   uint64_t step)
    {
        if (!traceThreadHeartbeatEnabled() || !info || !ctx)
        {
            return;
        }

        if ((step & 0xFFFFFu) != 0u)
        {
            return;
        }

        int status = 0;
        int waitType = 0;
        int waitId = 0;
        int wakeupCount = 0;
        {
            std::lock_guard<std::mutex> lock(info->m);
            status = info->status;
            waitType = info->waitType;
            waitId = info->waitId;
            wakeupCount = info->wakeupCount;
        }

        std::cout << "[ThreadHeartbeat] tid=" << tid
                  << " step=" << step
                  << " pc=0x" << std::hex << ctx->pc
                  << " ra=0x" << static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0))
                  << " sp=0x" << static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0))
                  << " gp=0x" << static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0))
                  << std::dec
                  << " status=0x" << std::hex << status
                  << " waitType=0x" << waitType
                  << " waitId=0x" << waitId
                  << std::dec
                  << " wakeupCount=" << wakeupCount
                  << std::endl;
    }
}
static constexpr uint32_t DEFAULT_FB_ADDR = (PS2_RAM_SIZE - DEFAULT_FB_SIZE - 0x10000u);
#if defined(PLATFORM_VITA)
static constexpr int HOST_WINDOW_WIDTH = 960;
static constexpr int HOST_WINDOW_HEIGHT = 544;
#else
static constexpr int HOST_WINDOW_WIDTH = FB_WIDTH;
static constexpr int HOST_WINDOW_HEIGHT = DEFAULT_DISPLAY_HEIGHT;
#endif
struct ElfHeader
{
    uint32_t magic;
    uint8_t elf_class;
    uint8_t endianness;
    uint8_t version;
    uint8_t os_abi;
    uint8_t abi_version;
    uint8_t padding[7];
    uint16_t type;
    uint16_t machine;
    uint32_t version2;
    uint32_t entry;
    uint32_t phoff;
    uint32_t shoff;
    uint32_t flags;
    uint16_t ehsize;
    uint16_t phentsize;
    uint16_t phnum;
    uint16_t shentsize;
    uint16_t shnum;
    uint16_t shstrndx;
};

struct ProgramHeader
{
    uint32_t type;
    uint32_t offset;
    uint32_t vaddr;
    uint32_t paddr;
    uint32_t filesz;
    uint32_t memsz;
    uint32_t flags;
    uint32_t align;
};

namespace
{
    constexpr uint32_t kGuestHeapDefaultBase = 0x00100000u;
    constexpr uint32_t kGuestHeapDefaultAlignment = 16u;
    constexpr uint32_t kGuestHeapSafetyPad = 0x1000u;
    constexpr uint32_t kGuestHeapHardLimit = 0x01F00000u;

    constexpr uint32_t COP0_CAUSE_EXCCODE_MASK = 0x0000007Cu;
    constexpr uint32_t COP0_CAUSE_BD = 0x80000000u;
    constexpr uint32_t COP0_STATUS_EXL = 0x00000002u;
    constexpr uint32_t COP0_STATUS_BEV = 0x00400000u;
    constexpr uint32_t EXCEPTION_VECTOR_GENERAL = 0x80000080u;
    constexpr uint32_t EXCEPTION_VECTOR_TLB_REFILL = 0x80000000u;
    constexpr uint32_t EXCEPTION_VECTOR_BOOT = 0xBFC00200u;

    struct HostFrameProbePoint
    {
        uint32_t x;
        uint32_t y;
    };

    constexpr HostFrameProbePoint kGhostProbePoints[] = {
        {220u, 176u},
        {260u, 208u},
        {320u, 208u},
        {260u, 240u},
        {320u, 240u},
        {260u, 272u},
        {320u, 272u},
    };

    uint32_t sampleHostFramePixel(const std::vector<uint8_t> &pixels,
                                  uint32_t width,
                                  uint32_t height,
                                  uint32_t x,
                                  uint32_t y)
    {
        if (x >= width || y >= height)
        {
            return 0u;
        }

        const size_t offset = (static_cast<size_t>(y) * static_cast<size_t>(width) + static_cast<size_t>(x)) * 4u;
        if (offset + 4u > pixels.size())
        {
            return 0u;
        }

        return static_cast<uint32_t>(pixels[offset + 0u]) |
               (static_cast<uint32_t>(pixels[offset + 1u]) << 8) |
               (static_cast<uint32_t>(pixels[offset + 2u]) << 16) |
               (static_cast<uint32_t>(pixels[offset + 3u]) << 24);
    }

    struct HostFrameRgbBounds
    {
        uint32_t rgbCount = 0u;
        uint32_t minX = 0u;
        uint32_t minY = 0u;
        uint32_t maxX = 0u;
        uint32_t maxY = 0u;
    };

    HostFrameRgbBounds measureHostFrameRgbBounds(const std::vector<uint8_t> &pixels,
                                                 uint32_t width,
                                                 uint32_t height)
    {
        HostFrameRgbBounds bounds{};
        uint32_t minX = std::numeric_limits<uint32_t>::max();
        uint32_t minY = std::numeric_limits<uint32_t>::max();
        uint32_t maxX = 0u;
        uint32_t maxY = 0u;

        for (uint32_t y = 0u; y < height; ++y)
        {
            for (uint32_t x = 0u; x < width; ++x)
            {
                const size_t offset = (static_cast<size_t>(y) * static_cast<size_t>(width) + static_cast<size_t>(x)) * 4u;
                if (offset + 4u > pixels.size())
                {
                    return bounds;
                }

                const uint8_t r = pixels[offset + 0u];
                const uint8_t g = pixels[offset + 1u];
                const uint8_t b = pixels[offset + 2u];
                if (r == 0u && g == 0u && b == 0u)
                {
                    continue;
                }

                ++bounds.rgbCount;
                minX = std::min(minX, x);
                minY = std::min(minY, y);
                maxX = std::max(maxX, x);
                maxY = std::max(maxY, y);
            }
        }

        if (bounds.rgbCount != 0u)
        {
            bounds.minX = minX;
            bounds.minY = minY;
            bounds.maxX = maxX;
            bounds.maxY = maxY;
        }

        return bounds;
    }

    uint32_t runtimeEnvU32(const char *name, uint32_t defaultValue, uint32_t minValue, uint32_t maxValue)
    {
        const char *value = std::getenv(name);
        if (!value || value[0] == '\0')
        {
            return defaultValue;
        }

        char *end = nullptr;
        const unsigned long parsed = std::strtoul(value, &end, 0);
        if (end == value)
        {
            return defaultValue;
        }

        return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, minValue, maxValue));
    }

    std::filesystem::path runtimeScreenshotDirectory()
    {
        const char *value = std::getenv("PS2X_SCREENSHOT_DIR");
        if (!value || value[0] == '\0')
        {
            return {};
        }

        std::error_code ec;
        std::filesystem::path dir(value);
        if (dir.is_relative())
        {
            dir = std::filesystem::current_path(ec) / dir;
        }
        return dir.lexically_normal();
    }

    std::string runtimeScreenshotPrefix()
    {
        const char *value = std::getenv("PS2X_SCREENSHOT_PREFIX");
        if (!value || value[0] == '\0')
        {
            return "ps2x_frame";
        }

        std::string prefix(value);
        for (char &ch : prefix)
        {
            const unsigned char uch = static_cast<unsigned char>(ch);
            if (!std::isalnum(uch) && ch != '_' && ch != '-')
            {
                ch = '_';
            }
        }
        return prefix.empty() ? std::string("ps2x_frame") : prefix;
    }

    void maybeSaveRuntimeScreenshot(const std::vector<uint8_t> &pixels,
                                    uint32_t width,
                                    uint32_t height,
                                    uint64_t tick,
                                    uint32_t displayFbp,
                                    uint32_t sourceFbp)
    {
        if (pixels.empty() || width == 0u || height == 0u)
        {
            return;
        }

        static const std::filesystem::path s_dir = runtimeScreenshotDirectory();
        if (s_dir.empty())
        {
            return;
        }

        static const uint32_t s_every = runtimeEnvU32("PS2X_SCREENSHOT_EVERY", 60u, 1u, 36000u);
        static const uint32_t s_limit = runtimeEnvU32("PS2X_SCREENSHOT_LIMIT", 16u, 1u, 100000u);
        static const uint32_t s_start = runtimeEnvU32("PS2X_SCREENSHOT_START", 0u, 0u, 1000000000u);
        static const std::string s_prefix = runtimeScreenshotPrefix();
        static uint64_t s_seenFrames = 0u;
        static uint32_t s_savedFrames = 0u;
        static bool s_loggedConfig = false;
        static bool s_loggedDone = false;

        const uint64_t frameIndex = s_seenFrames++;
        if (!s_loggedConfig)
        {
            std::error_code ec;
            std::filesystem::create_directories(s_dir, ec);
            std::cout << "[screenshot] dir=\"" << s_dir.string()
                      << "\" every=" << s_every
                      << " start=" << s_start
                      << " limit=" << s_limit
                      << (ec ? " create_failed=1" : "")
                      << std::endl;
            s_loggedConfig = true;
        }

        if (s_savedFrames >= s_limit)
        {
            if (!s_loggedDone)
            {
                std::cout << "[screenshot] limit reached saved=" << s_savedFrames << std::endl;
                s_loggedDone = true;
            }
            return;
        }

        if (frameIndex < s_start || ((frameIndex - s_start) % s_every) != 0u)
        {
            return;
        }

        std::error_code ec;
        std::filesystem::create_directories(s_dir, ec);
        if (ec)
        {
            std::cerr << "[screenshot] failed to create dir \"" << s_dir.string()
                      << "\": " << ec.message() << std::endl;
            return;
        }

        std::ostringstream name;
        name << s_prefix
             << "_" << std::setw(6) << std::setfill('0') << s_savedFrames
             << "_frame" << frameIndex
             << "_tick" << tick
             << "_dfb" << displayFbp
             << "_sfb" << sourceFbp
             << ".png";

        const std::filesystem::path path = s_dir / name.str();
        Image image{};
        image.data = const_cast<uint8_t *>(pixels.data());
        image.width = static_cast<int>(width);
        image.height = static_cast<int>(height);
        image.mipmaps = 1;
        image.format = PIXELFORMAT_UNCOMPRESSED_R8G8B8A8;

        if (ExportImage(image, path.string().c_str()))
        {
            std::cout << "[screenshot] saved=\"" << path.string()
                      << "\" frame=" << frameIndex
                      << " tick=" << tick
                      << " size=" << width << "x" << height
                      << " displayFbp=" << displayFbp
                      << " sourceFbp=" << sourceFbp
                      << std::endl;
            ++s_savedFrames;
        }
        else
        {
            std::cerr << "[screenshot] failed path=\"" << path.string() << "\"" << std::endl;
        }
    }

    struct RuntimeDispFbFields
    {
        uint32_t fbp = 0u;
        uint32_t fbw = 0u;
        uint32_t psm = 0u;
        uint32_t dbx = 0u;
        uint32_t dby = 0u;
    };

    RuntimeDispFbFields decodeRuntimeDispFb(uint64_t value)
    {
        RuntimeDispFbFields fields{};
        fields.fbp = static_cast<uint32_t>(value & 0x1FFu);
        fields.fbw = static_cast<uint32_t>((value >> 9) & 0x3Fu);
        fields.psm = static_cast<uint32_t>((value >> 15) & 0x1Fu);
        fields.dbx = static_cast<uint32_t>((value >> 32) & 0x7FFu);
        fields.dby = static_cast<uint32_t>((value >> 43) & 0x7FFu);
        return fields;
    }

    struct RuntimeDisplayFields
    {
        uint32_t dx = 0u;
        uint32_t dy = 0u;
        uint32_t magh = 0u;
        uint32_t magv = 0u;
        uint32_t dw = 0u;
        uint32_t dh = 0u;
        uint32_t width = 0u;
        uint32_t height = 0u;
    };

    RuntimeDisplayFields decodeRuntimeDisplay(uint64_t value)
    {
        RuntimeDisplayFields fields{};
        fields.dx = static_cast<uint32_t>((value >> 0) & 0x0FFFu);
        fields.dy = static_cast<uint32_t>((value >> 12) & 0x07FFu);
        fields.magh = static_cast<uint32_t>((value >> 23) & 0x0Fu);
        fields.magv = static_cast<uint32_t>((value >> 27) & 0x03u);
        fields.dw = static_cast<uint32_t>((value >> 32) & 0x0FFFu);
        fields.dh = static_cast<uint32_t>((value >> 44) & 0x07FFu);
        fields.width = (fields.dw + 1u) / (fields.magh + 1u);
        fields.height = fields.dh + 1u;
        return fields;
    }

    struct DispatchHistory
    {
        std::array<uint32_t, 64> pcs{};
        uint32_t next = 0u;
        bool wrapped = false;
    };

    struct KofxiObjectPoolSnapshot
    {
        uint32_t w0 = 0u;
        uint32_t w8 = 0u;
        uint32_t w14 = 0u;
        uint32_t w24 = 0u;
        uint32_t w34 = 0u;
        uint32_t w4c = 0u;
        uint32_t w58 = 0u;
        uint32_t w5c = 0u;
        uint8_t b0 = 0u;
        uint8_t b1 = 0u;
        uint8_t b2 = 0u;
        uint8_t b3 = 0u;
        uint8_t b45 = 0u;
        uint8_t b46 = 0u;
        uint8_t b47 = 0u;
        uint8_t b48 = 0u;
        uint8_t b49 = 0u;
    };

    thread_local DispatchHistory g_dispatchHistory;
    thread_local R5900Context *g_activeLookupContext = nullptr;
    thread_local uint8_t *g_activeLookupRdram = nullptr;
    thread_local bool g_lookupWatchInitialized = false;
    thread_local uint32_t g_lookupWatchAddr = 0u;
    thread_local uint32_t g_lookupWatchLastValue = 0u;
    thread_local uint32_t g_lookupWatchLogCount = 0u;
    struct LookupWatchMultiState
    {
        bool initialized = false;
        uint32_t count = 0u;
        uint32_t logCount = 0u;
        uint32_t limit = 512u;
        std::array<uint32_t, 16> addrs{};
        std::array<uint32_t, 16> lastValues{};
    };
    thread_local LookupWatchMultiState g_lookupWatchMulti;
    thread_local bool g_kofxiResourceSlotActive = false;
    thread_local uint32_t g_kofxiResourceSlotAddr = 0u;
    thread_local uint32_t g_kofxiResourceSlotLastValue = 0u;
    thread_local uint32_t g_kofxiResourceSlotSession = 0u;
    thread_local uint32_t g_kofxiResourceSlotLogCount = 0u;
    thread_local uint32_t g_kofxiCallbackResourcePcLogCount = 0u;
    thread_local uint32_t g_kofxiUpperResourcePcLogCount = 0u;
    thread_local uint32_t g_kofxiUpperResourceScannerPcLogCount = 0u;
    thread_local uint32_t g_kofxiUpperResourceCommandPcLogCount = 0u;
    thread_local uint32_t g_kofxiResourceObjectPcLogCount = 0u;
    thread_local uint32_t g_kofxiObjectManagerPcLogCount = 0u;
    thread_local uint32_t g_kofxiChildResourcePcLogCount = 0u;
    thread_local uint32_t g_kofxiResourceHandlePoolPcLogCount = 0u;
    thread_local uint32_t g_kofxiActiveLoaderObjectPcLogCount = 0u;
    thread_local uint32_t g_kofxiAdxStreamPcLogCount = 0u;
    thread_local uint32_t g_kofxiMainFramePcLogCount = 0u;
    thread_local uint32_t g_kofxiFrontendTaskLoopPcLogCount = 0u;
    thread_local bool g_kofxiObjectPoolChangeTraceInitialized = false;
    thread_local std::array<KofxiObjectPoolSnapshot, 40> g_kofxiObjectPoolLastSnapshots{};
    thread_local uint32_t g_kofxiObjectPoolChangeLogCount = 0u;
    thread_local std::unordered_map<PS2Runtime *, uint32_t> g_guestExecutionDepths;

    void pushDispatchPc(uint32_t pc)
    {
        DispatchHistory &h = g_dispatchHistory;
        h.pcs[h.next] = pc;
        h.next = (h.next + 1u) % static_cast<uint32_t>(h.pcs.size());
        if (h.next == 0u)
        {
            h.wrapped = true;
        }
    }

    std::string formatDispatchHistory()
    {
        const DispatchHistory &h = g_dispatchHistory;
        const uint32_t count = h.wrapped ? static_cast<uint32_t>(h.pcs.size()) : h.next;
        if (count == 0u)
        {
            return "(empty)";
        }

        std::ostringstream oss;
        bool first = true;
        for (uint32_t i = 0u; i < count; ++i)
        {
            const uint32_t idx = (h.next + h.pcs.size() - count + i) % static_cast<uint32_t>(h.pcs.size());
            if (!first)
            {
                oss << " -> ";
            }
            first = false;
            oss << "0x" << std::hex << h.pcs[idx];
        }
        return oss.str();
    }

    uint32_t selectDispatchRecoveryPc(const PS2Runtime *runtime)
    {
        if (!runtime)
        {
            return 0u;
        }

        const DispatchHistory &h = g_dispatchHistory;
        const uint32_t count = h.wrapped ? static_cast<uint32_t>(h.pcs.size()) : h.next;
        for (uint32_t step = 1u; step <= count; ++step)
        {
            const uint32_t idx = (h.next + static_cast<uint32_t>(h.pcs.size()) - step) %
                                 static_cast<uint32_t>(h.pcs.size());
            const uint32_t previousPc = h.pcs[idx];
            if (previousPc != 0u && runtime->hasFunction(previousPc))
            {
                return previousPc;
            }
        }

        return 0u;
    }

    uint32_t selectExceptionVector(const R5900Context *ctx, bool tlbRefill)
    {
        if (ctx->cop0_status & COP0_STATUS_BEV)
        {
            return EXCEPTION_VECTOR_BOOT;
        }
        return tlbRefill ? EXCEPTION_VECTOR_TLB_REFILL : EXCEPTION_VECTOR_GENERAL;
    }

    void seedVu0IdleSuccess(R5900Context *ctx)
    {
        if (!ctx)
        {
            return;
        }

        ctx->vu0_clip_flags = 0;
        ctx->vu0_clip_flags2 = 0;
        ctx->vu0_mac_flags = 0;
        ctx->vu0_status = 0;
        ctx->vu0_q = 1.0f;
        ctx->vu0_vpu_stat = 0;
        ctx->vu0_vpu_stat2 = 0;
    }

    void copyVu0ContextToState(const R5900Context *ctx, VU1State &state)
    {
        std::memset(&state, 0, sizeof(state));

        for (uint32_t i = 0; i < 32u; ++i)
        {
            _mm_storeu_ps(state.vf[i], ctx->vu0_vf[i]);
        }
        for (uint32_t i = 0; i < 16u; ++i)
        {
            state.vi[i] = static_cast<int16_t>(ctx->vi[i]);
        }

        _mm_storeu_ps(state.acc, ctx->vu0_acc);
        state.q = ctx->vu0_q;
        state.p = ctx->vu0_p;
        state.i = ctx->vu0_i;
        state.pc = ctx->vu0_pc;
        state.mac = ctx->vu0_mac_flags;
        state.clip = ctx->vu0_clip_flags;
        state.status = ctx->vu0_status;
        state.itop = ctx->vu0_itop;

        state.vf[0][0] = 0.0f;
        state.vf[0][1] = 0.0f;
        state.vf[0][2] = 0.0f;
        state.vf[0][3] = 1.0f;
        state.vi[0] = 0;
    }

    void copyVu0StateToContext(const VU1State &state, R5900Context *ctx)
    {
        for (uint32_t i = 0; i < 32u; ++i)
        {
            ctx->vu0_vf[i] = _mm_loadu_ps(state.vf[i]);
        }
        for (uint32_t i = 0; i < 16u; ++i)
        {
            ctx->vi[i] = static_cast<uint16_t>(state.vi[i]);
        }

        ctx->vu0_acc = _mm_loadu_ps(state.acc);
        ctx->vu0_q = state.q;
        ctx->vu0_p = state.p;
        ctx->vu0_i = state.i;
        ctx->vu0_mac_flags = state.mac;
        ctx->vu0_clip_flags = state.clip;
        ctx->vu0_clip_flags2 = state.clip;
        ctx->vu0_status = static_cast<uint16_t>(state.status);
        ctx->vu0_itop = state.itop;
        ctx->vu0_pc = state.pc;
        ctx->vu0_tpc = state.pc;
        ctx->vu0_vpu_stat = 0;
        ctx->vu0_vpu_stat2 = 0;

        ctx->vu0_vf[0] = _mm_set_ps(1.0f, 0.0f, 0.0f, 0.0f);
        ctx->vi[0] = 0;
    }

    void raiseCop0Exception(R5900Context *ctx, uint32_t exceptionCode, bool tlbRefill = false)
    {
        if (ctx->in_delay_slot)
        {
            ctx->cop0_epc = ctx->branch_pc;
            ctx->cop0_cause = (ctx->cop0_cause & ~COP0_CAUSE_EXCCODE_MASK) |
                              ((exceptionCode << 2) & COP0_CAUSE_EXCCODE_MASK) |
                              COP0_CAUSE_BD;
        }
        else
        {
            ctx->cop0_epc = ctx->pc;
            ctx->cop0_cause = (ctx->cop0_cause & ~(COP0_CAUSE_EXCCODE_MASK | COP0_CAUSE_BD)) |
                              ((exceptionCode << 2) & COP0_CAUSE_EXCCODE_MASK);
        }

        ctx->cop0_status |= COP0_STATUS_EXL;
        ctx->pc = selectExceptionVector(ctx, tlbRefill);
        ctx->in_delay_slot = false;
    }

    std::filesystem::path normalizeAbsolutePath(const std::filesystem::path &path)
    {
        if (path.empty())
        {
            return {};
        }

#if defined(PLATFORM_VITA)
        const std::string generic = path.generic_string();
        const std::size_t colon = generic.find(':');
        if (colon != std::string::npos && colon != 0u)
        {
            const std::size_t slash = generic.find_first_of("/\\");
            if (slash == std::string::npos || colon < slash)
            {
                return path.lexically_normal();
            }
        }
#endif

        std::error_code ec;
        const std::filesystem::path absolute = std::filesystem::absolute(path, ec);
        if (ec)
        {
            return path.lexically_normal();
        }
        return absolute.lexically_normal();
    }

    PS2Runtime::IoPaths &runtimeIoPaths()
    {
        static PS2Runtime::IoPaths paths = []()
        {
            PS2Runtime::IoPaths defaults;
            std::error_code ec;
            const std::filesystem::path cwd = std::filesystem::current_path(ec);
            defaults.elfDirectory = ec ? std::filesystem::path(".") : cwd.lexically_normal();
            defaults.hostRoot = defaults.elfDirectory;
            defaults.cdRoot = defaults.elfDirectory;
            defaults.mcRoot = defaults.elfDirectory / "mc0";
            return defaults;
        }();

        return paths;
    }

    uint32_t readGuestU32Wrapped(const uint8_t *rdram, uint32_t addr)
    {
        if (!rdram)
        {
            return 0;
        }

        uint32_t value = 0;
        value |= static_cast<uint32_t>(rdram[(addr + 0u) & PS2_RAM_MASK]) << 0;
        value |= static_cast<uint32_t>(rdram[(addr + 1u) & PS2_RAM_MASK]) << 8;
        value |= static_cast<uint32_t>(rdram[(addr + 2u) & PS2_RAM_MASK]) << 16;
        value |= static_cast<uint32_t>(rdram[(addr + 3u) & PS2_RAM_MASK]) << 24;
        return value;
    }

    uint8_t readGuestU8Wrapped(const uint8_t *rdram, uint32_t addr)
    {
        if (!rdram)
        {
            return 0;
        }

        return rdram[addr & PS2_RAM_MASK];
    }

    bool isKofxiCallbackResourceSlotAddress(uint32_t addr);
    void appendKofxiUpperResourceSlotDetail(std::ostream &out, const uint8_t *rdram, uint32_t slot);
    uint32_t parseRuntimeEnvU32(const char *name, uint32_t defaultValue);

    uint16_t readGuestU16Wrapped(const uint8_t *rdram, uint32_t addr)
    {
        if (!rdram)
        {
            return 0;
        }

        uint16_t value = 0;
        value |= static_cast<uint16_t>(rdram[(addr + 0u) & PS2_RAM_MASK]) << 0;
        value |= static_cast<uint16_t>(rdram[(addr + 1u) & PS2_RAM_MASK]) << 8;
        return value;
    }

    bool hasKofxiUpperResourceSlotState(const uint8_t *rdram)
    {
        constexpr uint32_t kResourceSlotBase = 0x0037F1D0u;
        constexpr uint32_t kResourceSlotStride = 0x238u;
        constexpr uint32_t kResourceSlotCount = 32u;

        for (uint32_t slot = 0u; slot < kResourceSlotCount; ++slot)
        {
            const uint32_t base = kResourceSlotBase + slot * kResourceSlotStride;
            if (readGuestU8Wrapped(rdram, base) != 0u ||
                readGuestU8Wrapped(rdram, base + 1u) != 0u ||
                readGuestU8Wrapped(rdram, base + 2u) != 0u ||
                readGuestU8Wrapped(rdram, base + 4u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x08u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x14u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x18u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x1Cu) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x20u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x24u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x28u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x2Cu) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x34u) != 0u)
            {
                return true;
            }
        }

        return false;
    }

    bool hasKofxiResourceCallbackSlotState(const uint8_t *rdram)
    {
        constexpr uint32_t kSlotBase = 0x00372368u;
        constexpr uint32_t kSlotStride = 0xC8u;
        constexpr uint32_t kSlotCount = 16u;

        for (uint32_t slot = 0u; slot < kSlotCount; ++slot)
        {
            const uint32_t base = kSlotBase + slot * kSlotStride;
            if (readGuestU8Wrapped(rdram, base) != 0u ||
                readGuestU8Wrapped(rdram, base + 3u) != 0u ||
                readGuestU32Wrapped(rdram, base + 4u) != 0u ||
                readGuestU32Wrapped(rdram, base + 8u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x0Cu) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x10u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x14u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x20u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x24u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x2Cu) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x30u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x34u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0x94u) != 0u ||
                readGuestU32Wrapped(rdram, base + 0xB0u) != 0u)
            {
                return true;
            }
        }

        return false;
    }

    bool hasKofxiResourceTraceState(const uint8_t *rdram)
    {
        return hasKofxiUpperResourceSlotState(rdram) || hasKofxiResourceCallbackSlotState(rdram);
    }

    void appendKofxiResourceSlotSummary(std::ostream &out, const uint8_t *rdram)
    {
        constexpr uint32_t kResourceSlotBase = 0x0037F1D0u;
        constexpr uint32_t kResourceSlotStride = 0x238u;
        constexpr uint32_t kResourceSlotCount = 32u;

        const auto originalFlags = out.flags();
        const char originalFill = out.fill();

        uint32_t activeCount = 0u;
        out << " resourceSlots=";
        for (uint32_t slot = 0u; slot < kResourceSlotCount; ++slot)
        {
            const uint32_t base = kResourceSlotBase + slot * kResourceSlotStride;
            const uint32_t state0 = readGuestU8Wrapped(rdram, base);
            const uint32_t state1 = readGuestU8Wrapped(rdram, base + 1u);
            const uint32_t state2 = readGuestU8Wrapped(rdram, base + 2u);
            const uint32_t state4 = readGuestU8Wrapped(rdram, base + 4u);
            const uint32_t source = readGuestU32Wrapped(rdram, base + 0x08u);
            const uint32_t step = readGuestU32Wrapped(rdram, base + 0x14u);
            const uint32_t total = readGuestU32Wrapped(rdram, base + 0x18u);
            const uint32_t cursor1C = readGuestU32Wrapped(rdram, base + 0x1Cu);
            const uint32_t cursor20 = readGuestU32Wrapped(rdram, base + 0x20u);
            const uint32_t cursor24 = readGuestU32Wrapped(rdram, base + 0x24u);
            const uint32_t child28 = readGuestU32Wrapped(rdram, base + 0x28u);
            const uint32_t child2C = readGuestU32Wrapped(rdram, base + 0x2Cu);
            const uint32_t child34 = readGuestU32Wrapped(rdram, base + 0x34u);
            if (state0 == 0u && state1 == 0u && state2 == 0u && state4 == 0u &&
                source == 0u && step == 0u && total == 0u &&
                cursor1C == 0u && cursor20 == 0u && cursor24 == 0u &&
                child28 == 0u && child2C == 0u && child34 == 0u)
            {
                continue;
            }

            if (activeCount != 0u)
            {
                out << ",";
            }
            out << std::hex << slot
                << ":st=" << state0 << "/" << state1 << "/" << state2 << "/" << state4
                << " src=" << source
                << " amt=" << step << "/" << total
                << " pos=" << cursor1C << "/" << cursor20 << "/" << cursor24
                << " child=" << child28 << "/" << child2C << "/" << child34;
            ++activeCount;
            if (activeCount >= 8u)
            {
                out << ",...";
                break;
            }
        }

        if (activeCount == 0u)
        {
            out << "none";
        }

        out.flags(originalFlags);
        out.fill(originalFill);
    }

    void appendKofxiResourceCallbackSlotSummary(std::ostream &out, const uint8_t *rdram)
    {
        constexpr uint32_t kSlotBase = 0x00372368u;
        constexpr uint32_t kSlotStride = 0xC8u;
        constexpr uint32_t kSlotCount = 16u;

        const auto originalFlags = out.flags();
        const char originalFill = out.fill();

        uint32_t activeCount = 0u;
        out << " resourceCbSlots=";
        for (uint32_t slot = 0u; slot < kSlotCount; ++slot)
        {
            const uint32_t base = kSlotBase + slot * kSlotStride;
            const uint32_t state0 = readGuestU8Wrapped(rdram, base);
            const uint32_t mode3 = readGuestU8Wrapped(rdram, base + 3u);
            const uint32_t queue4 = readGuestU32Wrapped(rdram, base + 4u);
            const uint32_t queue8 = readGuestU32Wrapped(rdram, base + 8u);
            const uint32_t queueC = readGuestU32Wrapped(rdram, base + 0xCu);
            const uint32_t object10 = readGuestU32Wrapped(rdram, base + 0x10u);
            const uint32_t object14 = readGuestU32Wrapped(rdram, base + 0x14u);
            const uint32_t buffer20 = readGuestU32Wrapped(rdram, base + 0x20u);
            const uint32_t cursor24 = readGuestU32Wrapped(rdram, base + 0x24u);
            const uint32_t source2C = readGuestU32Wrapped(rdram, base + 0x2Cu);
            const uint32_t step30 = readGuestU32Wrapped(rdram, base + 0x30u);
            const uint32_t span34 = readGuestU32Wrapped(rdram, base + 0x34u);
            const uint32_t event94 = readGuestU32Wrapped(rdram, base + 0x94u);
            const uint32_t tailB0 = readGuestU32Wrapped(rdram, base + 0xB0u);
            const uint32_t object10Flags = object10 ? readGuestU32Wrapped(rdram, object10) : 0u;
            const uint32_t object10Link = object10 ? readGuestU32Wrapped(rdram, object10 + 0x4u) : 0u;
            const uint32_t object10State48 = object10 ? readGuestU8Wrapped(rdram, object10 + 0x48u) : 0u;
            const uint32_t object10Busy49 = object10 ? readGuestU8Wrapped(rdram, object10 + 0x49u) : 0u;
            const uint32_t object14Flags = object14 ? readGuestU32Wrapped(rdram, object14) : 0u;
            const uint32_t object14Link = object14 ? readGuestU32Wrapped(rdram, object14 + 0x4u) : 0u;
            const uint32_t object14State48 = object14 ? readGuestU8Wrapped(rdram, object14 + 0x48u) : 0u;
            const uint32_t object14Busy49 = object14 ? readGuestU8Wrapped(rdram, object14 + 0x49u) : 0u;
            if (state0 == 0u && mode3 == 0u && queue4 == 0u && queue8 == 0u &&
                queueC == 0u && object10 == 0u && object14 == 0u && buffer20 == 0u &&
                cursor24 == 0u && source2C == 0u && step30 == 0u && span34 == 0u &&
                event94 == 0u && tailB0 == 0u)
            {
                continue;
            }

            if (activeCount != 0u)
            {
                out << ",";
            }
            out << std::hex << slot << ":"
                << state0 << "/" << mode3
                << " q=" << queue4 << "/" << queue8 << "/" << queueC
                << " obj=" << object10 << "/" << object14
                << " obj10s=" << object10Flags << "/" << object10Link << "/"
                << object10State48 << "/" << object10Busy49
                << " obj14s=" << object14Flags << "/" << object14Link << "/"
                << object14State48 << "/" << object14Busy49
                << " buf=" << buffer20 << "/" << cursor24 << "/" << source2C
                << " step=" << step30 << "/" << span34
                << " ev=" << event94 << "/" << tailB0;
            ++activeCount;
            if (activeCount >= 6u)
            {
                out << ",...";
                break;
            }
        }

        if (activeCount == 0u)
        {
            out << "none";
        }

        out.flags(originalFlags);
        out.fill(originalFill);
    }

    void appendKofxiRenderObjectQueueSummary(std::ostream &out, const uint8_t *rdram)
    {
        constexpr uint32_t kObjectQueueCount = 0x01D11530u;
        constexpr uint32_t kObjectQueueBase = 0x01D11540u;
        constexpr uint32_t kObjectQueueStride = 8u;

        const auto originalFlags = out.flags();
        const char originalFill = out.fill();

        const uint32_t count16 = readGuestU16Wrapped(rdram, kObjectQueueCount);
        const uint32_t countWord = readGuestU32Wrapped(rdram, kObjectQueueCount);
        out << std::hex
            << " objRenderQ=0x" << count16
            << "/0x" << countWord
            << " entries=";

        for (uint32_t i = 0u; i < 4u; ++i)
        {
            if (i != 0u)
            {
                out << ",";
            }

            const uint32_t entry = kObjectQueueBase + i * kObjectQueueStride;
            const uint32_t object = readGuestU32Wrapped(rdram, entry);
            out << i << ":0x" << object
                << "/0x" << readGuestU16Wrapped(rdram, entry + 4u);
            const uint32_t objectPhys = object & PS2_RAM_MASK;
            if (object != 0u && objectPhys + 0x2C0u <= PS2_RAM_SIZE)
            {
                out << ":f=0x" << readGuestU32Wrapped(rdram, object + 0x00u)
                    << "/" << readGuestU32Wrapped(rdram, object + 0x04u)
                    << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x8Bu))
                    << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x2BCu))
                    << " pos=0x" << readGuestU32Wrapped(rdram, object + 0x78u)
                    << "/0x" << readGuestU32Wrapped(rdram, object + 0x7Cu)
                    << "/0x" << readGuestU32Wrapped(rdram, object + 0x80u);
            }
        }

        out << " objLoop=0x" << readGuestU32Wrapped(rdram, 0x009BFFD0u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x009BFFD4u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x0093F370u)
            << " objCounters=0x" << readGuestU32Wrapped(rdram, 0x0093F770u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x0093F774u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x0093F778u);

        out.flags(originalFlags);
        out.fill(originalFill);
    }

    void appendKofxiMainFrameGlobals(std::ostream &out, const uint8_t *rdram)
    {
        const auto originalFlags = out.flags();
        const char originalFill = out.fill();

        out << std::hex
            << " main=0x" << readGuestU32Wrapped(rdram, 0x009BDA70u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x009BDA28u)
            << " loop=0x" << readGuestU32Wrapped(rdram, 0x009BE498u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x009BE680u)
            << " flags=0x" << readGuestU32Wrapped(rdram, 0x009BE470u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x009BE490u)
            << " gates=0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, 0x009E9738u))
            << "/0x" << readGuestU32Wrapped(rdram, 0x009E9478u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x009E9728u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x009E9768u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x009E9778u)
            << " render=0x" << readGuestU32Wrapped(rdram, 0x01DA29E0u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x0092F0F8u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x0092F0F0u)
            << "/0x" << readGuestU32Wrapped(rdram, 0x0092EFF0u);

        out << " mainSlots=";
        for (uint32_t slot = 0; slot < 2u; ++slot)
        {
            if (slot != 0u)
            {
                out << ",";
            }

            const uint32_t wordOffset = slot * sizeof(uint32_t);
            const uint32_t mainStruct = 0x009BE8C0u + slot * 0xA0u;
            out << slot
                << ":p=0x" << readGuestU32Wrapped(rdram, 0x009BEA38u + wordOffset)
                << " st=0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, 0x009BEA10u + wordOffset))
                << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, 0x009BEA18u + wordOffset))
                << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, 0x009BEA08u + wordOffset))
                << " w=0x" << readGuestU32Wrapped(rdram, 0x009BEA00u + wordOffset)
                << "/0x" << readGuestU32Wrapped(rdram, 0x009BEA20u + wordOffset)
                << " obj=0x" << readGuestU32Wrapped(rdram, mainStruct)
                << "/0x" << readGuestU32Wrapped(rdram, mainStruct + 0x04u)
                << "/0x" << readGuestU32Wrapped(rdram, mainStruct + 0x20u)
                << "/0x" << readGuestU32Wrapped(rdram, mainStruct + 0x24u);
        }

        appendKofxiRenderObjectQueueSummary(out, rdram);

        out.flags(originalFlags);
        out.fill(originalFill);
    }

    void traceKofxiMainFramePc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_MAIN_FRAME_PC") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        const bool traceRenderObjectPc = isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_RENDER_OBJECT_PC");
        switch (lookupAddress)
        {
        case 0x001A1600u:
        case 0x001A1910u:
        case 0x001A1918u:
        case 0x001A1920u:
        case 0x001A1928u:
        case 0x001A1948u:
        case 0x001A1954u:
        case 0x001A1968u:
        case 0x001A1970u:
        case 0x001A1978u:
        case 0x001A1998u:
        case 0x001A19A0u:
        case 0x001A19A8u:
        case 0x001A19B0u:
        case 0x001A19BCu:
        case 0x001A19D0u:
        case 0x001A19E4u:
        case 0x001A19F4u:
        case 0x001A19FCu:
        case 0x001A1A14u:
        case 0x001A1A1Cu:
        case 0x001A1A34u:
        case 0x001A1A3Cu:
        case 0x001A1A44u:
        case 0x001A1A4Cu:
        case 0x001A1A54u:
        case 0x001A1A5Cu:
        case 0x001A1A64u:
        case 0x001A1A74u:
        case 0x0031F390u:
        case 0x0031F3B0u:
        case 0x0031F3C8u:
        case 0x0031F3D0u:
        case 0x0031F3E8u:
        case 0x0031F3F0u:
        case 0x0031F3F8u:
        case 0x0031F400u:
        case 0x0031F408u:
        case 0x0031F420u:
        case 0x0031F428u:
        case 0x0031F430u:
        case 0x0031F438u:
        case 0x0031F450u:
        case 0x00152220u:
        case 0x00152290u:
        case 0x001522E0u:
        case 0x0031E590u:
        case 0x0031B310u:
            break;
        case 0x00151CB0u:
        case 0x001520E0u:
        case 0x00152108u:
        case 0x00152138u:
        case 0x00155DD0u:
        case 0x00155E08u:
        case 0x00155E7Cu:
        case 0x00155F14u:
        case 0x00155FA0u:
        case 0x00303750u:
        case 0x003037C0u:
        case 0x00303830u:
        case 0x00324260u:
        case 0x00324E0Cu:
        case 0x00324E30u:
        case 0x003250B0u:
        case 0x003250B8u:
        case 0x00327CA0u:
        case 0x00328170u:
        case 0x00328188u:
        case 0x0032AA30u:
        case 0x0032B174u:
            if (!traceRenderObjectPc)
            {
                return;
            }
            break;
        default:
            return;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_MAIN_FRAME_PC_LIMIT", 512u));
        if (g_kofxiMainFramePcLogCount >= limit)
        {
            return;
        }
        ++g_kofxiMainFramePcLogCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t s2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0));
        const uint32_t s3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0));

        std::cerr << "[KOFXI:main-frame-pc] #" << g_kofxiMainFramePcLogCount
                  << " lookup=0x" << std::hex << lookupAddress
                  << " tid=" << std::dec << g_currentThreadId
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " s0-s3=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3
                  << " stack0/8/10/18/20/28=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 8u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x10u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x18u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x20u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x28u);
        appendKofxiMainFrameGlobals(std::cerr, g_activeLookupRdram);
        appendKofxiResourceSlotSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, g_activeLookupRdram);
        std::cerr << " trace=" << formatDispatchHistory() << std::dec << std::endl;
    }

    void appendKofxiResourceHandlePoolSummary(std::ostream &out, const uint8_t *rdram)
    {
        constexpr uint32_t kHandleBase = 0x0036F818u;
        constexpr uint32_t kHandleStride = 0x48u;
        constexpr uint32_t kHandleCount = 16u;

        const auto originalFlags = out.flags();
        const char originalFill = out.fill();

        uint32_t activeCount = 0u;
        out << " resourceHandles=";
        for (uint32_t slot = 0u; slot < kHandleCount; ++slot)
        {
            const uint32_t base = kHandleBase + slot * kHandleStride;
            const uint32_t state0 = readGuestU8Wrapped(rdram, base);
            const uint32_t state1 = readGuestU8Wrapped(rdram, base + 1u);
            const uint32_t state2 = readGuestU8Wrapped(rdram, base + 2u);
            const uint32_t state3 = readGuestU8Wrapped(rdram, base + 3u);
            const uint32_t object = readGuestU32Wrapped(rdram, base + 0x04u);
            const uint32_t progress = readGuestU32Wrapped(rdram, base + 0x0Cu);
            const uint32_t field18 = readGuestU32Wrapped(rdram, base + 0x18u);
            const uint32_t field1C = readGuestU32Wrapped(rdram, base + 0x1Cu);
            const uint32_t field20 = readGuestU32Wrapped(rdram, base + 0x20u);
            const uint32_t field24 = readGuestU32Wrapped(rdram, base + 0x24u);
            const uint32_t field30 = readGuestU32Wrapped(rdram, base + 0x30u);
            const uint32_t objectWord0 = object ? readGuestU32Wrapped(rdram, object) : 0u;
            const uint32_t objectState1 = object ? readGuestU8Wrapped(rdram, object + 0x01u) : 0u;
            const uint32_t objectWait45 = object ? readGuestU8Wrapped(rdram, object + 0x45u) : 0u;
            const uint32_t objectFlag47 = object ? readGuestU8Wrapped(rdram, object + 0x47u) : 0u;
            const uint32_t objectFlag48 = object ? readGuestU8Wrapped(rdram, object + 0x48u) : 0u;
            const uint32_t objectFlag49 = object ? readGuestU8Wrapped(rdram, object + 0x49u) : 0u;
            const uint32_t objectWord8 = object ? readGuestU32Wrapped(rdram, object + 0x08u) : 0u;
            const uint32_t objectWord58 = object ? readGuestU32Wrapped(rdram, object + 0x58u) : 0u;
            const uint32_t objectWord5C = object ? readGuestU32Wrapped(rdram, object + 0x5Cu) : 0u;
            if (state0 == 0u && state1 == 0u && state2 == 0u && state3 == 0u &&
                object == 0u && progress == 0u && field18 == 0u && field1C == 0u &&
                field20 == 0u && field24 == 0u && field30 == 0u)
            {
                continue;
            }

            if (activeCount != 0u)
            {
                out << ",";
            }
            out << std::hex << slot
                << ":st=" << state0 << "/" << state1 << "/" << state2 << "/" << state3
                << " obj=" << object
                << " prog=" << progress
                << " f18-24=" << field18 << "/" << field1C << "/" << field20 << "/" << field24
                << " cap=" << field30
                << " objf=" << objectWord0 << "/" << objectState1 << "/" << objectWait45
                << "/" << objectFlag47 << "/" << objectFlag48 << "/" << objectFlag49
                << " objp=" << objectWord8 << "/" << objectWord58 << "/" << objectWord5C;
            ++activeCount;
        }

        if (activeCount == 0u)
        {
            out << "none";
        }
        else
        {
            out << " active=" << std::dec << activeCount << "/" << kHandleCount;
        }

        out.flags(originalFlags);
        out.fill(originalFill);
    }

    bool isKofxiResourceHandleEntry(uint32_t addr)
    {
        constexpr uint32_t kHandleBase = 0x0036F818u;
        constexpr uint32_t kHandleStride = 0x48u;
        constexpr uint32_t kHandleCount = 16u;
        if (addr < kHandleBase || addr >= kHandleBase + kHandleStride * kHandleCount)
        {
            return false;
        }

        return ((addr - kHandleBase) % kHandleStride) == 0u;
    }

    bool isKofxiResourceObjectCandidate(uint32_t addr)
    {
        const uint32_t phys = addr & 0x1FFFFFFFu;
        return phys >= 0x00370000u && phys < 0x02000000u;
    }

    void appendKofxiObjectManagerSlotDetail(std::ostream &out, const uint8_t *rdram, const char *label, uint32_t slot)
    {
        if (!isKofxiCallbackResourceSlotAddress(slot))
        {
            return;
        }

        const uint32_t child = readGuestU32Wrapped(rdram, slot + 4u);
        const uint32_t linked = readGuestU32Wrapped(rdram, slot + 0x0Cu);
        const uint32_t source = readGuestU32Wrapped(rdram, slot + 0x10u);
        const uint32_t source2 = readGuestU32Wrapped(rdram, slot + 0x14u);
        const uint32_t upperSlot = readGuestU32Wrapped(rdram, slot + 0x94u);
        const uint32_t childObject = child ? readGuestU32Wrapped(rdram, child + 4u) : 0u;

        out << " " << label << "Cb=0x" << std::hex << slot
            << ":st=0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot + 1u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot + 2u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot + 3u))
            << " child/link/src=0x" << child << "/0x" << linked << "/0x" << source
            << " src2=0x" << source2
            << " b6c/6d/ad=0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot + 0x6Cu))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot + 0x6Du))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot + 0xADu))
            << " h40/42/44/46=0x" << readGuestU16Wrapped(rdram, slot + 0x40u)
            << "/0x" << readGuestU16Wrapped(rdram, slot + 0x42u)
            << "/0x" << readGuestU16Wrapped(rdram, slot + 0x44u)
            << "/0x" << readGuestU16Wrapped(rdram, slot + 0x46u)
            << " tail74/90/94/b0=0x" << readGuestU32Wrapped(rdram, slot + 0x74u)
            << "/0x" << readGuestU32Wrapped(rdram, slot + 0x90u)
            << "/0x" << upperSlot
            << "/0x" << readGuestU32Wrapped(rdram, slot + 0xB0u);
        if (child)
        {
            out << " child=0x" << child
                << ":st=0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, child))
                << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, child + 1u))
                << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, child + 2u))
                << " obj=0x" << childObject
                << " w24/40/44=0x" << readGuestU32Wrapped(rdram, child + 0x24u)
                << "/0x" << readGuestU32Wrapped(rdram, child + 0x40u)
                << "/0x" << readGuestU32Wrapped(rdram, child + 0x44u);
        }
        if (childObject)
        {
            out << " childObj=0x" << childObject
                << ":b0d/0e/0f=0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, childObject + 0x0Du))
                << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, childObject + 0x0Eu))
                << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, childObject + 0x0Fu))
                << " w10/98/9c/cc/e8=0x" << readGuestU32Wrapped(rdram, childObject + 0x10u)
                << "/0x" << readGuestU16Wrapped(rdram, childObject + 0x98u)
                << "/0x" << readGuestU16Wrapped(rdram, childObject + 0x9Cu)
                << "/0x" << readGuestU32Wrapped(rdram, childObject + 0xCCu)
                << "/0x" << readGuestU32Wrapped(rdram, childObject + 0xE8u);
        }
        appendKofxiUpperResourceSlotDetail(out, rdram, upperSlot);
    }

    uint32_t selectKofxiObjectManagerCallbackSlot(const R5900Context *ctx)
    {
        if (!ctx)
        {
            return 0u;
        }

        const uint32_t regs[] = {
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0)),
        };
        for (uint32_t value : regs)
        {
            if (isKofxiCallbackResourceSlotAddress(value))
            {
                return value;
            }
        }
        return 0u;
    }

    void appendKofxiResourceObjectDetail(std::ostream &out, const uint8_t *rdram, const char *label, uint32_t object)
    {
        if (!object || !isKofxiResourceObjectCandidate(object))
        {
            return;
        }

        const uint32_t source = readGuestU32Wrapped(rdram, object + 0x08u);
        const uint32_t sourceVtable = isKofxiResourceObjectCandidate(source)
            ? readGuestU32Wrapped(rdram, source)
            : 0u;

        out << " " << label << "Obj=0x" << std::hex << object
            << ":w0/b1/b2/b45/b47/b48/b49=0x" << readGuestU32Wrapped(rdram, object)
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x01u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x02u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x45u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x47u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x48u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x49u))
            << " w4/8/c/10/14/18/1c/20/24/2c/30/40/58/5c=0x"
            << readGuestU32Wrapped(rdram, object + 0x04u)
            << "/0x" << source
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x0Cu)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x10u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x14u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x18u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x1Cu)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x20u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x24u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x2Cu)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x30u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x40u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x58u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x5Cu);

        if (source != 0u && isKofxiResourceObjectCandidate(source))
        {
            out << " src=0x" << source
                << ":vt=0x" << sourceVtable
                << " s4/8/c/10/14=0x" << readGuestU32Wrapped(rdram, source + 0x04u)
                << "/0x" << readGuestU32Wrapped(rdram, source + 0x08u)
                << "/0x" << readGuestU32Wrapped(rdram, source + 0x0Cu)
                << "/0x" << readGuestU32Wrapped(rdram, source + 0x10u)
                << "/0x" << readGuestU32Wrapped(rdram, source + 0x14u);
        }

        if (sourceVtable != 0u && isKofxiResourceObjectCandidate(sourceVtable))
        {
            out << " vt18/1c/24/2c/40/60=0x"
                << readGuestU32Wrapped(rdram, sourceVtable + 0x18u)
                << "/0x" << readGuestU32Wrapped(rdram, sourceVtable + 0x1Cu)
                << "/0x" << readGuestU32Wrapped(rdram, sourceVtable + 0x24u)
                << "/0x" << readGuestU32Wrapped(rdram, sourceVtable + 0x2Cu)
                << "/0x" << readGuestU32Wrapped(rdram, sourceVtable + 0x40u)
                << "/0x" << readGuestU32Wrapped(rdram, sourceVtable + 0x60u);
        }
    }

    void appendKofxiResourceHandleDetail(std::ostream &out, const uint8_t *rdram, const char *label, uint32_t handle)
    {
        if (!isKofxiResourceHandleEntry(handle))
        {
            return;
        }

        const uint32_t object = readGuestU32Wrapped(rdram, handle + 0x04u);
        out << " " << label << "Handle=0x" << std::hex << handle
            << ":st=" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, handle + 0x00u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, handle + 0x01u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, handle + 0x02u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, handle + 0x03u))
            << " h0c/18/24=0x" << readGuestU32Wrapped(rdram, handle + 0x0Cu)
            << "/0x" << readGuestU32Wrapped(rdram, handle + 0x18u)
            << "/0x" << readGuestU32Wrapped(rdram, handle + 0x24u)
            << " obj=0x" << object;
        if (object != 0u)
        {
            out << ":w0/b1/b45/b47/b48/b49/w8/w58=0x" << readGuestU32Wrapped(rdram, object)
                << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x01u))
                << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x45u))
                << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x47u))
                << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x48u))
                << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x49u))
                << "/0x" << readGuestU32Wrapped(rdram, object + 0x08u)
                << "/0x" << readGuestU32Wrapped(rdram, object + 0x58u);
            appendKofxiResourceObjectDetail(out, rdram, label, object);
        }
    }

    bool isKofxiChildResourceAddress(uint32_t addr)
    {
        constexpr uint32_t kChildBase = 0x0037B428u;
        constexpr uint32_t kChildStride = 0x60u;
        constexpr uint32_t kChildCount = 40u;
        return addr >= kChildBase && addr < kChildBase + kChildStride * kChildCount;
    }

    void appendKofxiChildResourceDetail(std::ostream &out, const uint8_t *rdram, uint32_t child)
    {
        if (!child || !isKofxiChildResourceAddress(child))
        {
            return;
        }

        out << " child=0x" << std::hex << child
            << " st=0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, child))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, child + 1u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, child + 2u))
            << " flags0=0x" << readGuestU32Wrapped(rdram, child)
            << " async8=0x" << readGuestU32Wrapped(rdram, child + 0x08u)
            << " range=0x" << readGuestU32Wrapped(rdram, child + 0x0Cu)
            << "/0x" << readGuestU32Wrapped(rdram, child + 0x10u)
            << "/0x" << readGuestU32Wrapped(rdram, child + 0x14u)
            << " wait24=0x" << readGuestU32Wrapped(rdram, child + 0x24u)
            << " obj44=0x" << readGuestU32Wrapped(rdram, child + 0x44u)
            << " mode45-49=0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, child + 0x45u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, child + 0x46u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, child + 0x47u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, child + 0x48u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, child + 0x49u))
            << " io=0x" << readGuestU32Wrapped(rdram, child + 0x50u)
            << "/0x" << readGuestU32Wrapped(rdram, child + 0x54u);
    }

    void appendKofxiChildResourceSummary(std::ostream &out, const uint8_t *rdram)
    {
        constexpr uint32_t kChildBase = 0x0037B428u;
        constexpr uint32_t kChildStride = 0x60u;
        constexpr uint32_t kChildCount = 40u;

        const auto originalFlags = out.flags();
        const char originalFill = out.fill();

        uint32_t activeCount = 0u;
        out << " childResources=";
        for (uint32_t index = 0u; index < kChildCount; ++index)
        {
            const uint32_t child = kChildBase + index * kChildStride;
            const uint32_t flags0 = readGuestU32Wrapped(rdram, child);
            const uint32_t async8 = readGuestU32Wrapped(rdram, child + 0x08u);
            const uint32_t wait24 = readGuestU32Wrapped(rdram, child + 0x24u);
            const uint32_t obj44 = readGuestU32Wrapped(rdram, child + 0x44u);
            const uint32_t io50 = readGuestU32Wrapped(rdram, child + 0x50u);
            const uint32_t io54 = readGuestU32Wrapped(rdram, child + 0x54u);
            const uint32_t state0 = readGuestU8Wrapped(rdram, child);
            const uint32_t state1 = readGuestU8Wrapped(rdram, child + 1u);
            const uint32_t state2 = readGuestU8Wrapped(rdram, child + 2u);
            const uint32_t mode45 = readGuestU8Wrapped(rdram, child + 0x45u);
            const uint32_t mode46 = readGuestU8Wrapped(rdram, child + 0x46u);
            const uint32_t mode47 = readGuestU8Wrapped(rdram, child + 0x47u);
            const uint32_t mode48 = readGuestU8Wrapped(rdram, child + 0x48u);
            const uint32_t mode49 = readGuestU8Wrapped(rdram, child + 0x49u);
            if (flags0 == 0u && async8 == 0u && wait24 == 0u && obj44 == 0u &&
                io50 == 0u && io54 == 0u && state0 == 0u && state1 == 0u &&
                state2 == 0u && mode45 == 0u && mode46 == 0u && mode47 == 0u &&
                mode48 == 0u && mode49 == 0u)
            {
                continue;
            }

            if (activeCount != 0u)
            {
                out << ",";
            }
            out << std::hex << index
                << ":st=" << state0 << "/" << state1 << "/" << state2
                << " async=" << async8
                << " wait=" << wait24
                << " m=" << mode45 << "/" << mode46 << "/" << mode47 << "/" << mode48 << "/" << mode49
                << " io=" << io50 << "/" << io54;
            ++activeCount;
            if (activeCount >= 8u)
            {
                out << ",...";
                break;
            }
        }

        if (activeCount == 0u)
        {
            out << "none";
        }

        out.flags(originalFlags);
        out.fill(originalFill);
    }

    uint32_t parseRuntimeEnvU32(const char *name, uint32_t defaultValue)
    {
        const char *value = std::getenv(name);
        if (!value || value[0] == '\0')
        {
            return defaultValue;
        }

        char *end = nullptr;
        const unsigned long parsed = std::strtoul(value, &end, 0);
        if (end == value)
        {
            return defaultValue;
        }
        return static_cast<uint32_t>(parsed);
    }

    bool shouldTraceSyscall(uint32_t encodedSyscallId, uint32_t syscallFromV1)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_SYSCALL"))
        {
            return false;
        }

        const char *filter = std::getenv("PS2X_TRACE_SYSCALL_FILTER");
        if (!filter || filter[0] == '\0')
        {
            return true;
        }

        char *end = nullptr;
        const unsigned long parsed = std::strtoul(filter, &end, 0);
        if (end == filter)
        {
            return true;
        }

        const uint32_t target = static_cast<uint32_t>(parsed);
        const uint32_t chosenSyscall = encodedSyscallId != 0u ? encodedSyscallId : syscallFromV1;
        return chosenSyscall == target;
    }

    KofxiObjectPoolSnapshot readKofxiObjectPoolSnapshot(const uint8_t *rdram, uint32_t object)
    {
        KofxiObjectPoolSnapshot snap{};
        snap.w0 = readGuestU32Wrapped(rdram, object + 0x00u);
        snap.w8 = readGuestU32Wrapped(rdram, object + 0x08u);
        snap.w14 = readGuestU32Wrapped(rdram, object + 0x14u);
        snap.w24 = readGuestU32Wrapped(rdram, object + 0x24u);
        snap.w34 = readGuestU32Wrapped(rdram, object + 0x34u);
        snap.w4c = readGuestU32Wrapped(rdram, object + 0x4Cu);
        snap.w58 = readGuestU32Wrapped(rdram, object + 0x58u);
        snap.w5c = readGuestU32Wrapped(rdram, object + 0x5Cu);
        snap.b0 = readGuestU8Wrapped(rdram, object + 0x00u);
        snap.b1 = readGuestU8Wrapped(rdram, object + 0x01u);
        snap.b2 = readGuestU8Wrapped(rdram, object + 0x02u);
        snap.b3 = readGuestU8Wrapped(rdram, object + 0x03u);
        snap.b45 = readGuestU8Wrapped(rdram, object + 0x45u);
        snap.b46 = readGuestU8Wrapped(rdram, object + 0x46u);
        snap.b47 = readGuestU8Wrapped(rdram, object + 0x47u);
        snap.b48 = readGuestU8Wrapped(rdram, object + 0x48u);
        snap.b49 = readGuestU8Wrapped(rdram, object + 0x49u);
        return snap;
    }

    bool kofxiObjectPoolSnapshotEquals(const KofxiObjectPoolSnapshot &lhs,
                                       const KofxiObjectPoolSnapshot &rhs)
    {
        return lhs.w0 == rhs.w0 &&
               lhs.w8 == rhs.w8 &&
               lhs.w14 == rhs.w14 &&
               lhs.w24 == rhs.w24 &&
               lhs.w34 == rhs.w34 &&
               lhs.w4c == rhs.w4c &&
               lhs.w58 == rhs.w58 &&
               lhs.w5c == rhs.w5c &&
               lhs.b0 == rhs.b0 &&
               lhs.b1 == rhs.b1 &&
               lhs.b2 == rhs.b2 &&
               lhs.b3 == rhs.b3 &&
               lhs.b45 == rhs.b45 &&
               lhs.b46 == rhs.b46 &&
               lhs.b47 == rhs.b47 &&
               lhs.b48 == rhs.b48 &&
               lhs.b49 == rhs.b49;
    }

    bool kofxiObjectPoolSnapshotIsEmpty(const KofxiObjectPoolSnapshot &snap)
    {
        return snap.w0 == 0u &&
               snap.w8 == 0u &&
               snap.w14 == 0u &&
               snap.w24 == 0u &&
               snap.w34 == 0u &&
               snap.w4c == 0u &&
               snap.w58 == 0u &&
               snap.w5c == 0u &&
               snap.b0 == 0u &&
               snap.b1 == 0u &&
               snap.b2 == 0u &&
               snap.b3 == 0u &&
               snap.b45 == 0u &&
               snap.b46 == 0u &&
               snap.b47 == 0u &&
               snap.b48 == 0u &&
               snap.b49 == 0u;
    }

    void appendKofxiObjectPoolSnapshot(std::ostream &out, const KofxiObjectPoolSnapshot &snap)
    {
        out << " w0/8/14/24/34/4c/58/5c=0x" << std::hex
            << snap.w0 << "/0x" << snap.w8
            << "/0x" << snap.w14 << "/0x" << snap.w24
            << "/0x" << snap.w34 << "/0x" << snap.w4c
            << "/0x" << snap.w58 << "/0x" << snap.w5c
            << " b0/1/2/3/45/46/47/48/49=0x"
            << static_cast<uint32_t>(snap.b0)
            << "/0x" << static_cast<uint32_t>(snap.b1)
            << "/0x" << static_cast<uint32_t>(snap.b2)
            << "/0x" << static_cast<uint32_t>(snap.b3)
            << "/0x" << static_cast<uint32_t>(snap.b45)
            << "/0x" << static_cast<uint32_t>(snap.b46)
            << "/0x" << static_cast<uint32_t>(snap.b47)
            << "/0x" << static_cast<uint32_t>(snap.b48)
            << "/0x" << static_cast<uint32_t>(snap.b49);
    }

    void traceKofxiObjectPoolChanges(uint32_t address, const char *phase)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_OBJECT_POOL_CHANGES") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        constexpr uint32_t kObjectBase = 0x0037B428u;
        constexpr uint32_t kObjectStride = 0x60u;
        constexpr uint32_t kObjectCount = 40u;

        if (!g_kofxiObjectPoolChangeTraceInitialized)
        {
            for (uint32_t index = 0u; index < kObjectCount; ++index)
            {
                g_kofxiObjectPoolLastSnapshots[index] =
                    readKofxiObjectPoolSnapshot(g_activeLookupRdram, kObjectBase + index * kObjectStride);
            }
            g_kofxiObjectPoolChangeTraceInitialized = true;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_OBJECT_POOL_CHANGES_LIMIT", 512u));
        if (g_kofxiObjectPoolChangeLogCount >= limit)
        {
            return;
        }

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));

        for (uint32_t index = 0u; index < kObjectCount && g_kofxiObjectPoolChangeLogCount < limit; ++index)
        {
            const uint32_t object = kObjectBase + index * kObjectStride;
            const KofxiObjectPoolSnapshot snap = readKofxiObjectPoolSnapshot(g_activeLookupRdram, object);
            KofxiObjectPoolSnapshot &previous = g_kofxiObjectPoolLastSnapshots[index];
            if (kofxiObjectPoolSnapshotEquals(snap, previous))
            {
                continue;
            }

            ++g_kofxiObjectPoolChangeLogCount;
            std::cerr << "[KOFXI:object-pool-change] #" << g_kofxiObjectPoolChangeLogCount
                      << " phase=" << (phase ? phase : "?")
                      << " addr=0x" << std::hex << address
                      << " tid=" << std::dec << g_currentThreadId
                      << " pc=0x" << std::hex << pc
                      << " ra=0x" << ra
                      << " sp=0x" << sp
                      << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                      << " obj=" << index << "@0x" << object
                      << " prevEmpty=" << std::dec << (kofxiObjectPoolSnapshotIsEmpty(previous) ? 1 : 0)
                      << " prev";
            appendKofxiObjectPoolSnapshot(std::cerr, previous);
            std::cerr << " now";
            appendKofxiObjectPoolSnapshot(std::cerr, snap);
            appendKofxiResourceHandlePoolSummary(std::cerr, g_activeLookupRdram);
            std::cerr << " trace=" << formatDispatchHistory() << std::dec << std::endl;

            previous = snap;
        }
    }

    bool lookupWatchEnabled()
    {
        return std::getenv("PS2X_TRACE_GUEST_WORD_ADDR") != nullptr;
    }

    bool lookupMultiWatchEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_GUEST_WORD_ADDRS");
        return value && value[0] != '\0';
    }

    bool guestReadTraceEnabled()
    {
        return std::getenv("PS2X_TRACE_GUEST_READ_ADDR") != nullptr;
    }

    bool rangesOverlap(uint32_t lhsStart, uint32_t lhsSize, uint32_t rhsStart, uint32_t rhsSize)
    {
        const uint64_t lhsEnd = static_cast<uint64_t>(lhsStart) + std::max<uint32_t>(lhsSize, 1u);
        const uint64_t rhsEnd = static_cast<uint64_t>(rhsStart) + std::max<uint32_t>(rhsSize, 1u);
        return static_cast<uint64_t>(lhsStart) < rhsEnd && static_cast<uint64_t>(rhsStart) < lhsEnd;
    }

    void traceGuestReadAccess(const char *op,
                              R5900Context *ctx,
                              uint32_t vaddr,
                              uint32_t byteCount,
                              uint64_t valueLo,
                              uint64_t valueHi)
    {
        if (!guestReadTraceEnabled())
        {
            return;
        }

        struct GuestReadTraceConfig
        {
            uint32_t watchAddr;
            uint32_t watchSize;
            uint32_t limit;
        };

        static const GuestReadTraceConfig config = []()
        {
            GuestReadTraceConfig parsed{};
            parsed.watchAddr = parseRuntimeEnvU32("PS2X_TRACE_GUEST_READ_ADDR", 0u) & PS2_RAM_MASK;
            parsed.watchSize = std::max<uint32_t>(1u, parseRuntimeEnvU32("PS2X_TRACE_GUEST_READ_SIZE", 4u));
            parsed.limit = std::max<uint32_t>(1u, parseRuntimeEnvU32("PS2X_TRACE_GUEST_READ_LIMIT", 512u));

            std::cout << "[watch:guest-read-init] addr=0x" << std::hex << parsed.watchAddr
                      << " size=0x" << parsed.watchSize
                      << " limit=" << std::dec << parsed.limit
                      << std::endl;
            return parsed;
        }();
        static std::atomic<uint32_t> logCount{0u};

        const uint32_t phys = vaddr & PS2_RAM_MASK;
        if (!rangesOverlap(phys, byteCount, config.watchAddr, config.watchSize))
        {
            return;
        }

        const uint32_t index = logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= config.limit)
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0)) : 0u;
        const uint32_t sp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0)) : 0u;
        const uint32_t gp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0)) : 0u;
        const uint32_t a0 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0)) : 0u;
        const uint32_t a1 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0)) : 0u;
        const uint32_t a2 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0)) : 0u;
        const uint32_t a3 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0)) : 0u;

        std::cout << "[watch:guest-read] #" << (index + 1u)
                  << " op=" << (op ? op : "?")
                  << " vaddr=0x" << std::hex << vaddr
                  << " phys=0x" << phys
                  << " bytes=" << std::dec << byteCount
                  << " value=0x" << std::hex << valueLo;
        if (byteCount > 8u)
        {
            std::cout << "/0x" << valueHi;
        }
        std::cout << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " trace=" << formatDispatchHistory()
                  << std::dec << std::endl;
    }

    void traceLookupWatch(uint32_t lookupAddress)
    {
        if (!lookupWatchEnabled() || !g_activeLookupRdram)
        {
            return;
        }

        if (!g_lookupWatchInitialized)
        {
            g_lookupWatchAddr = parseRuntimeEnvU32("PS2X_TRACE_GUEST_WORD_ADDR", 0u) & PS2_RAM_MASK;
            g_lookupWatchLastValue = readGuestU32Wrapped(g_activeLookupRdram, g_lookupWatchAddr);
            g_lookupWatchInitialized = true;

            std::cout << "[watch:lookup-init] addr=0x" << std::hex << g_lookupWatchAddr
                      << " value=0x" << g_lookupWatchLastValue
                      << std::dec << std::endl;
        }

        const uint32_t value = readGuestU32Wrapped(g_activeLookupRdram, g_lookupWatchAddr);
        if (value == g_lookupWatchLastValue)
        {
            return;
        }

        if (g_lookupWatchLogCount < 256u)
        {
            const R5900Context *ctx = g_activeLookupContext;
            const uint32_t pc = ctx ? ctx->pc : 0u;
            const uint32_t ra = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0)) : 0u;
            const uint32_t sp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0)) : 0u;

            std::cout << "[watch:lookup-change] #" << (g_lookupWatchLogCount + 1u)
                      << " lookup=0x" << std::hex << lookupAddress
                      << " ctxPc=0x" << pc
                      << " ra=0x" << ra
                      << " sp=0x" << sp
                      << " addr=0x" << g_lookupWatchAddr
                      << " value=0x" << g_lookupWatchLastValue << "->0x" << value
                      << " trace=" << formatDispatchHistory()
                      << std::dec << std::endl;
        }
        ++g_lookupWatchLogCount;
        g_lookupWatchLastValue = value;
    }

    void initializeLookupWatchMulti()
    {
        LookupWatchMultiState &state = g_lookupWatchMulti;
        state.initialized = true;
        state.limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_GUEST_WORD_ADDRS_LIMIT", 512u));

        const char *cursor = std::getenv("PS2X_TRACE_GUEST_WORD_ADDRS");
        while (cursor && *cursor != '\0' && state.count < state.addrs.size())
        {
            while (*cursor != '\0' &&
                   (*cursor == ',' || *cursor == ';' ||
                    std::isspace(static_cast<unsigned char>(*cursor))))
            {
                ++cursor;
            }
            if (*cursor == '\0')
            {
                break;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(cursor, &end, 0);
            if (end == cursor)
            {
                ++cursor;
                continue;
            }

            const uint32_t addr = static_cast<uint32_t>(parsed) & PS2_RAM_MASK;
            state.addrs[state.count] = addr;
            state.lastValues[state.count] = readGuestU32Wrapped(g_activeLookupRdram, addr);
            ++state.count;
            cursor = end;
        }

        std::cout << "[watch:lookup-multi-init] count=" << std::dec << state.count
                  << " limit=" << state.limit
                  << " addrs=";
        for (uint32_t i = 0u; i < state.count; ++i)
        {
            if (i != 0u)
            {
                std::cout << ",";
            }
            std::cout << std::hex << "0x" << state.addrs[i]
                      << "=0x" << state.lastValues[i];
        }
        std::cout << std::dec << std::endl;
    }

    void traceLookupWatchMulti(uint32_t lookupAddress)
    {
        if (!lookupMultiWatchEnabled() || !g_activeLookupRdram)
        {
            return;
        }

        LookupWatchMultiState &state = g_lookupWatchMulti;
        if (!state.initialized)
        {
            initializeLookupWatchMulti();
        }
        if (state.count == 0u)
        {
            return;
        }

        for (uint32_t i = 0u; i < state.count; ++i)
        {
            const uint32_t value = readGuestU32Wrapped(g_activeLookupRdram, state.addrs[i]);
            if (value == state.lastValues[i])
            {
                continue;
            }

            const uint32_t previousValue = state.lastValues[i];
            state.lastValues[i] = value;
            const uint32_t index = state.logCount++;
            if (index >= state.limit)
            {
                continue;
            }

            const R5900Context *ctx = g_activeLookupContext;
            const uint32_t pc = ctx ? ctx->pc : 0u;
            const uint32_t ra = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0)) : 0u;
            const uint32_t sp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0)) : 0u;
            const uint32_t gp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0)) : 0u;
            const uint32_t a0 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0)) : 0u;
            const uint32_t a1 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0)) : 0u;
            const uint32_t a2 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0)) : 0u;
            const uint32_t a3 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0)) : 0u;

            std::cout << "[watch:lookup-multi-change] #" << (index + 1u)
                      << " slot=" << std::dec << i
                      << " lookup=0x" << std::hex << lookupAddress
                      << " ctxPc=0x" << pc
                      << " ra=0x" << ra
                      << " sp=0x" << sp
                      << " gp=0x" << gp
                      << " addr=0x" << state.addrs[i]
                      << " value=0x" << previousValue << "->0x" << value
                      << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                      << " values=";
            for (uint32_t j = 0u; j < state.count; ++j)
            {
                if (j != 0u)
                {
                    std::cout << ",";
                }
                std::cout << j << ":0x" << readGuestU32Wrapped(g_activeLookupRdram, state.addrs[j]);
            }
            std::cout << " trace=" << formatDispatchHistory()
                      << std::dec << std::endl;
        }
    }

    const char *kofxiFrontendTaskLoopPcName(uint32_t address)
    {
        switch (address)
        {
        case 0x00307994u:
            return "bootstrapBodyReturn";
        case 0x003079D4u:
            return "bootstrapPostBody";
        case 0x003079ECu:
            return "bootstrapReturn";
        case 0x0014C760u:
            return "taskLoopEntry";
        case 0x0014C7B4u:
            return "taskLoopSlot";
        case 0x0014C80Cu:
            return "taskLoopStatusReturn";
        case 0x0014C828u:
            return "taskLoopStatusBranch";
        case 0x0014C848u:
            return "taskLoopClearStatus";
        case 0x0014C88Cu:
            return "taskLoopFunc14D660Return";
        case 0x0014C8B0u:
            return "taskLoopFlag4000Return";
        case 0x0014C8CCu:
            return "taskLoopFlag2000Return";
        case 0x0014C948u:
            return "taskLoopPostObject";
        case 0x0014C970u:
            return "taskLoopMaskScan";
        case 0x0014C9B8u:
            return "taskLoopMaskUpdateReturn";
        case 0x0014C9C0u:
            return "taskLoopFlag4000Check";
        case 0x0014C9ECu:
            return "taskLoopFlag4000UpdateReturn";
        case 0x0014C9F4u:
            return "taskLoopFlag4000ClearReturn";
        case 0x0014CA24u:
            return "taskLoopFlag2000UpdateReturn";
        case 0x0014CA2Cu:
            return "taskLoopFlag2000ClearReturn";
        case 0x0014CA70u:
            return "taskLoopClearSlot";
        case 0x001B9280u:
            return "taskLoopObjectUpdate";
        case 0x001B9370u:
            return "taskLoopObjectStatus";
        default:
            return nullptr;
        }
    }

    bool isKofxiFrontendTaskLoopHelperFromTask(uint32_t address, uint32_t ra)
    {
        if (address != 0x001B9280u && address != 0x001B9370u && address != 0x0014CA70u)
        {
            return false;
        }

        return ra >= 0x0014C800u && ra < 0x0014CA40u;
    }

    void traceKofxiFrontendTaskLoopPc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_FRONTEND_TASK_LOOP") ||
            !g_activeLookupRdram || !g_activeLookupContext)
        {
            return;
        }

        R5900Context *ctx = g_activeLookupContext;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const char *name = kofxiFrontendTaskLoopPcName(lookupAddress);
        if (!name)
        {
            return;
        }
        if ((lookupAddress == 0x001B9280u || lookupAddress == 0x001B9370u || lookupAddress == 0x0014CA70u) &&
            !isKofxiFrontendTaskLoopHelperFromTask(lookupAddress, ra))
        {
            return;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_FRONTEND_TASK_LOOP_LIMIT", 512u));
        const uint32_t index = g_kofxiFrontendTaskLoopPcLogCount++;
        if (index >= limit)
        {
            return;
        }

        const uint8_t *rdram = g_activeLookupRdram;
        const uint32_t pc = ctx->pc;
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t s2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0));
        const uint32_t s3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0));
        const uint32_t s4 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[20], 0));
        uint32_t f20Bits = 0u;
        std::memcpy(&f20Bits, &ctx->f[20], sizeof(f20Bits));

        constexpr uint32_t kSlotBase = 0x00415DC0u;
        constexpr uint32_t kSlotStride = 0x4180u;
        constexpr uint32_t kSlotCount = 14u;
        const bool s4LooksLikeSlot = s4 >= kSlotBase &&
                                     s4 < kSlotBase + kSlotStride * kSlotCount &&
                                     ((s4 - kSlotBase) % kSlotStride) == 0u;
        const uint32_t slotFromS4 = s4LooksLikeSlot ? (s4 - kSlotBase) / kSlotStride : 0xFFFFFFFFu;
        const uint32_t slot = slotFromS4 != 0xFFFFFFFFu ? slotFromS4 : (s2 & 0xFFu);
        const uint32_t slotBase = slot < kSlotCount ? kSlotBase + slot * kSlotStride : 0u;
        const uint32_t slotObject = slotBase ? readGuestU32Wrapped(rdram, slotBase + 0x04u) : 0u;
        const uint32_t slotResource = slotBase ? readGuestU32Wrapped(rdram, slotBase + 0x4140u) : 0u;
        const uint32_t slotFlags = slotBase ? readGuestU32Wrapped(rdram, slotBase + 0x4144u) : 0u;
        const uint32_t objectForHelper = (lookupAddress == 0x001B9280u || lookupAddress == 0x001B9370u) ? a0 : slotObject;

        std::cerr << "[KOFXI:frontend-task-loop] #" << std::dec << (index + 1u)
                  << " " << name
                  << " lookup=0x" << std::hex << lookupAddress
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " v=0x" << v0 << "/0x" << v1
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " s=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3 << "/0x" << s4
                  << " f20=0x" << f20Bits
                  << " slot=" << std::dec << slot
                  << "@0x" << std::hex << slotBase
                  << " slotFields=0x" << static_cast<uint32_t>(slotBase ? readGuestU8Wrapped(rdram, slotBase) : 0u)
                  << "/0x" << slotObject
                  << "/0x" << slotResource
                  << "/0x" << slotFlags
                  << "/0x" << (slotBase ? readGuestU32Wrapped(rdram, slotBase + 0x4148u) : 0u)
                  << "/0x" << (slotBase ? readGuestU32Wrapped(rdram, slotBase + 0x414Cu) : 0u)
                  << " slotBytes=0x" << static_cast<uint32_t>(slotBase ? readGuestU8Wrapped(rdram, slotBase + 0x4155u) : 0u)
                  << "/0x" << static_cast<uint32_t>(slotBase ? readGuestU8Wrapped(rdram, slotBase + 0x4156u) : 0u)
                  << " slotTail=0x" << (slotBase ? readGuestU32Wrapped(rdram, slotBase + 0x4158u) : 0u)
                  << "/0x" << (slotBase ? readGuestU32Wrapped(rdram, slotBase + 0x415Cu) : 0u)
                  << " obj=0x" << objectForHelper;
        if (objectForHelper)
        {
            std::cerr << ":0x" << readGuestU32Wrapped(rdram, objectForHelper + 0x00u)
                      << "/0x" << readGuestU32Wrapped(rdram, objectForHelper + 0x04u)
                      << "/0x" << readGuestU32Wrapped(rdram, objectForHelper + 0x08u)
                      << "/0x" << readGuestU32Wrapped(rdram, objectForHelper + 0x58u);
        }
        if (slotResource)
        {
            std::cerr << " res=0x" << readGuestU32Wrapped(rdram, slotResource + 0x00u)
                      << "/0x" << readGuestU32Wrapped(rdram, slotResource + 0xECu)
                      << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slotResource + 0x286u))
                      << "/0x" << readGuestU32Wrapped(rdram, slotResource + 0x494u);
        }
        std::cerr << " frontend=0x" << readGuestU32Wrapped(rdram, 0x0092F788u)
                  << "/0x" << readGuestU32Wrapped(rdram, 0x0092F78Cu)
                  << "/0x" << readGuestU32Wrapped(rdram, 0x0092F788u + 0x08u)
                  << " gates=0x" << readGuestU32Wrapped(rdram, 0x009E9728u)
                  << "/0x" << readGuestU32Wrapped(rdram, 0x009E9738u)
                  << "/0x" << readGuestU32Wrapped(rdram, 0x009E9780u)
                  << " queues=0x" << readGuestU32Wrapped(rdram, 0x009AFFD0u)
                  << "/0x" << readGuestU32Wrapped(rdram, 0x01D11530u)
                  << "/0x" << readGuestU32Wrapped(rdram, 0x0092F0F8u)
                  << "/0x" << readGuestU32Wrapped(rdram, 0x0092EFF0u)
                  << " stack=0x" << readGuestU32Wrapped(rdram, sp)
                  << "/0x" << readGuestU32Wrapped(rdram, sp + 0x20u)
                  << "/0x" << readGuestU32Wrapped(rdram, sp + 0x60u)
                  << " trace=" << formatDispatchHistory()
                  << std::dec << std::endl;
    }

    void logKofxiResourceSlot(const char *event,
                              uint32_t lookupAddress,
                              uint32_t value,
                              uint32_t previousValue,
                              bool hasPreviousValue)
    {
        if (g_kofxiResourceSlotLogCount >= 256u)
        {
            return;
        }
        ++g_kofxiResourceSlotLogCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0)) : 0u;
        const uint32_t sp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0)) : 0u;
        const uint32_t gp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0)) : 0u;
        const uint32_t a0 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0)) : 0u;
        const uint32_t a1 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0)) : 0u;
        const uint32_t a2 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0)) : 0u;
        const uint32_t a3 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0)) : 0u;
        const uint32_t t0 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[8], 0)) : 0u;
        const uint32_t t1 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[9], 0)) : 0u;
        const uint32_t t2 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[10], 0)) : 0u;
        const uint32_t t3 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[11], 0)) : 0u;
        const uint32_t s0 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0)) : 0u;
        const uint32_t s1 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0)) : 0u;
        const uint32_t s4 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[20], 0)) : 0u;
        const uint32_t s6 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[22], 0)) : 0u;
        const uint32_t s7 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[23], 0)) : 0u;
        const uint32_t fp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[30], 0)) : 0u;

        std::cerr << "[kofxi:resource-slot] #" << g_kofxiResourceSlotLogCount
                  << " session=" << g_kofxiResourceSlotSession
                  << " tid=" << g_currentThreadId
                  << " event=" << (event ? event : "?")
                  << " lookup=0x" << std::hex << lookupAddress
                  << " ctxPc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " slot=0x" << g_kofxiResourceSlotAddr
                  << " value=0x" << value
                  << " a0=0x" << a0
                  << " a1=0x" << a1
                  << " a2=0x" << a2
                  << " a3=0x" << a3
                  << " t0=0x" << t0
                  << " t1=0x" << t1
                  << " t2=0x" << t2
                  << " t3=0x" << t3
                  << " s0=0x" << s0
                  << " s1=0x" << s1
                  << " s4=0x" << s4
                  << " s6=0x" << s6
                  << " s7=0x" << s7
                  << " fp=0x" << fp;
        if (hasPreviousValue)
        {
            std::cerr << " prev=0x" << previousValue;
        }
        std::cerr << " trace=" << formatDispatchHistory()
                  << std::dec << std::endl;
    }

    void traceKofxiResourceSlot(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_RESOURCE_SLOT") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        if (lookupAddress == 0x001AF5A8u)
        {
            const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(g_activeLookupContext->r[29], 0));
            g_kofxiResourceSlotActive = true;
            g_kofxiResourceSlotAddr = (sp + 0x20u) & PS2_RAM_MASK;
            g_kofxiResourceSlotLastValue = readGuestU32Wrapped(g_activeLookupRdram, g_kofxiResourceSlotAddr);
            ++g_kofxiResourceSlotSession;
            logKofxiResourceSlot("start", lookupAddress, g_kofxiResourceSlotLastValue, 0u, false);
            return;
        }

        if (!g_kofxiResourceSlotActive)
        {
            return;
        }

        const uint32_t value = readGuestU32Wrapped(g_activeLookupRdram, g_kofxiResourceSlotAddr);
        const bool changed = value != g_kofxiResourceSlotLastValue;
        const bool checkpoint =
            lookupAddress == 0x001AE828u ||
            lookupAddress == 0x001CDC78u ||
            lookupAddress == 0x0012E610u ||
            lookupAddress == 0x0012BEC8u ||
            lookupAddress == 0x001AF77Cu ||
            lookupAddress == 0x001AF330u;

        if (changed)
        {
            const uint32_t previousValue = g_kofxiResourceSlotLastValue;
            g_kofxiResourceSlotLastValue = value;
            logKofxiResourceSlot("change", lookupAddress, value, previousValue, true);
        }
        else if (checkpoint)
        {
            logKofxiResourceSlot("checkpoint", lookupAddress, value, 0u, false);
        }

        if (lookupAddress == 0x001AF330u)
        {
            g_kofxiResourceSlotActive = false;
        }
    }

    bool isKofxiCallbackResourceSlotAddress(uint32_t addr)
    {
        constexpr uint32_t kSlotBase = 0x00372368u;
        constexpr uint32_t kSlotStride = 0xC8u;
        constexpr uint32_t kSlotCount = 16u;
        return addr >= kSlotBase && addr < kSlotBase + kSlotStride * kSlotCount;
    }

    bool isKofxiUpperResourceSlotAddress(uint32_t addr)
    {
        constexpr uint32_t kSlotBase = 0x0037F1D0u;
        constexpr uint32_t kSlotStride = 0x238u;
        constexpr uint32_t kSlotCount = 32u;
        return addr >= kSlotBase && addr < kSlotBase + kSlotStride * kSlotCount;
    }

    uint32_t selectKofxiUpperResourceSlotFromContext(const R5900Context *ctx)
    {
        if (!ctx)
        {
            return 0u;
        }

        const uint32_t regs[] = {
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0)),
        };
        for (uint32_t value : regs)
        {
            if (isKofxiUpperResourceSlotAddress(value))
            {
                return value;
            }
        }
        return 0u;
    }

    void appendKofxiUpperResourceSlotDetail(std::ostream &out, const uint8_t *rdram, uint32_t slot)
    {
        if (!slot || !isKofxiUpperResourceSlotAddress(slot))
        {
            return;
        }

        const auto appendWorkItem = [&](const char *label, uint32_t index)
        {
            if (index >= 16u)
            {
                return;
            }

            const uint32_t item = slot + 0x38u + index * 0x20u;
            const uint32_t item0 = readGuestU32Wrapped(rdram, item + 0x00u);
            const uint32_t item4 = readGuestU32Wrapped(rdram, item + 0x04u);
            const uint32_t item8 = readGuestU32Wrapped(rdram, item + 0x08u);
            const uint32_t itemC = readGuestU32Wrapped(rdram, item + 0x0Cu);
            const uint32_t item10 = readGuestU32Wrapped(rdram, item + 0x10u);
            const uint32_t item14 = readGuestU32Wrapped(rdram, item + 0x14u);
            const uint32_t item18 = readGuestU32Wrapped(rdram, item + 0x18u);
            const uint32_t item1C = readGuestU32Wrapped(rdram, item + 0x1Cu);
            if (item0 == 0u && item4 == 0u && item8 == 0u && itemC == 0u &&
                item10 == 0u && item14 == 0u && item18 == 0u && item1C == 0u)
            {
                return;
            }

            out << " " << label << index << "=0x" << item
                << "[0/4/8/c/10/14/18/1c]=0x"
                << item0 << "/0x" << item4 << "/0x" << item8 << "/0x" << itemC
                << "/0x" << item10 << "/0x" << item14
                << "/0x" << item18 << "/0x" << item1C;
        };

        const uint32_t source = readGuestU32Wrapped(rdram, slot + 0x08u);
        const uint32_t sourceVtable = source ? readGuestU32Wrapped(rdram, source) : 0u;
        const uint32_t sourceCallback24 = sourceVtable ? readGuestU32Wrapped(rdram, sourceVtable + 0x24u) : 0u;
        const uint32_t cursor20 = readGuestU32Wrapped(rdram, slot + 0x20u);
        const uint32_t pendingCount = readGuestU32Wrapped(rdram, slot + 0x24u);

        out << " upperSlot=0x" << std::hex << slot
            << " st=0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot + 1u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot + 2u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot + 3u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, slot + 4u))
            << " src=0x" << source
            << " vtbl/cb24=0x" << sourceVtable << "/0x" << sourceCallback24
            << " amt=0x" << readGuestU32Wrapped(rdram, slot + 0x14u)
            << "/0x" << readGuestU32Wrapped(rdram, slot + 0x18u)
            << " pos=0x" << readGuestU32Wrapped(rdram, slot + 0x1Cu)
            << "/0x" << cursor20
            << "/0x" << pendingCount
            << " child=0x" << readGuestU32Wrapped(rdram, slot + 0x28u)
            << "/0x" << readGuestU32Wrapped(rdram, slot + 0x2Cu)
            << "/0x" << readGuestU32Wrapped(rdram, slot + 0x34u)
            << " tail=0x" << readGuestU32Wrapped(rdram, slot + 0x230u);

        if (cursor20 < 16u)
        {
            appendWorkItem(" curItem", cursor20);
        }

        for (uint32_t index = 0u; index < 4u; ++index)
        {
            if (index != cursor20)
            {
                appendWorkItem(" item", index);
            }
        }
    }

    void appendKofxiUpperResourceScannerStats(std::ostream &out, const uint8_t *rdram)
    {
        constexpr uint32_t kSlotBase = 0x0037F1D0u;
        constexpr uint32_t kSlotStride = 0x238u;
        constexpr uint32_t kSlotCount = 32u;

        const auto originalFlags = out.flags();
        const char originalFill = out.fill();

        uint32_t activeCount = 0u;
        uint32_t scanReadyCount = 0u;
        uint32_t state11Count = 0u;
        uint32_t state12Count = 0u;
        uint32_t pendingWorkCount = 0u;
        uint32_t childCount = 0u;
        uint32_t emitted = 0u;

        out << " upperScanSlots=";
        for (uint32_t index = 0u; index < kSlotCount; ++index)
        {
            const uint32_t slot = kSlotBase + index * kSlotStride;
            const uint32_t state0 = readGuestU8Wrapped(rdram, slot);
            const uint32_t state1 = readGuestU8Wrapped(rdram, slot + 1u);
            const uint32_t state2 = readGuestU8Wrapped(rdram, slot + 2u);
            const uint32_t state4 = readGuestU8Wrapped(rdram, slot + 4u);
            const uint32_t source = readGuestU32Wrapped(rdram, slot + 0x08u);
            const uint32_t amount14 = readGuestU32Wrapped(rdram, slot + 0x14u);
            const uint32_t amount18 = readGuestU32Wrapped(rdram, slot + 0x18u);
            const uint32_t cursor1C = readGuestU32Wrapped(rdram, slot + 0x1Cu);
            const uint32_t cursor20 = readGuestU32Wrapped(rdram, slot + 0x20u);
            const uint32_t pending24 = readGuestU32Wrapped(rdram, slot + 0x24u);
            const uint32_t child28 = readGuestU32Wrapped(rdram, slot + 0x28u);
            const uint32_t child2C = readGuestU32Wrapped(rdram, slot + 0x2Cu);
            const uint32_t child34 = readGuestU32Wrapped(rdram, slot + 0x34u);
            if (state0 == 0u && state1 == 0u && state2 == 0u && state4 == 0u &&
                source == 0u && amount14 == 0u && amount18 == 0u &&
                cursor1C == 0u && cursor20 == 0u && pending24 == 0u &&
                child28 == 0u && child2C == 0u && child34 == 0u)
            {
                continue;
            }

            ++activeCount;
            if (state0 == 1u)
            {
                ++scanReadyCount;
            }
            if (state0 == 1u && state1 == 1u)
            {
                ++state11Count;
            }
            if (state0 == 1u && state1 == 2u)
            {
                ++state12Count;
            }
            if (pending24 != 0u)
            {
                ++pendingWorkCount;
            }
            if (child28 != 0u || child2C != 0u || child34 != 0u)
            {
                ++childCount;
            }

            if (emitted < 6u)
            {
                if (emitted != 0u)
                {
                    out << ",";
                }
                out << std::hex << index << ":0x" << slot
                    << " st=" << state0 << "/" << state1 << "/" << state2 << "/" << state4
                    << " src=" << source
                    << " amt=" << amount14 << "/" << amount18
                    << " pos=" << cursor1C << "/" << cursor20 << "/" << pending24
                    << " child=" << child28 << "/" << child2C << "/" << child34;
                ++emitted;
            }
        }

        if (emitted == 0u)
        {
            out << "none";
        }
        out << " upperScanTotals=0x" << std::hex
            << activeCount << "/" << scanReadyCount << "/" << state11Count
            << "/" << state12Count << "/" << pendingWorkCount << "/" << childCount;

        out.flags(originalFlags);
        out.fill(originalFill);
    }

    bool isKofxiLikelyDataPointer(uint32_t addr)
    {
        return addr >= 0x00100000u && addr <= (PS2_RAM_MASK - 0x200u);
    }

    void appendKofxiPointerFields(std::ostream &out, const uint8_t *rdram, const char *name, uint32_t addr)
    {
        if (!isKofxiLikelyDataPointer(addr))
        {
            return;
        }

        out << " " << name << "=0x" << std::hex << addr
            << "[0/4/8/c/10/14/34/40/94/b0]=0x"
            << readGuestU32Wrapped(rdram, addr + 0x00u)
            << "/0x" << readGuestU32Wrapped(rdram, addr + 0x04u)
            << "/0x" << readGuestU32Wrapped(rdram, addr + 0x08u)
            << "/0x" << readGuestU32Wrapped(rdram, addr + 0x0Cu)
            << "/0x" << readGuestU32Wrapped(rdram, addr + 0x10u)
            << "/0x" << readGuestU32Wrapped(rdram, addr + 0x14u)
            << "/0x" << readGuestU32Wrapped(rdram, addr + 0x34u)
            << "/0x" << readGuestU32Wrapped(rdram, addr + 0x40u)
            << "/0x" << readGuestU32Wrapped(rdram, addr + 0x94u)
            << "/0x" << readGuestU32Wrapped(rdram, addr + 0xB0u);
    }

    void appendKofxiManagerFields(std::ostream &out, const uint8_t *rdram, const char *name, uint32_t addr)
    {
        if (!isKofxiLikelyDataPointer(addr))
        {
            return;
        }

        const uint32_t commandBase = readGuestU32Wrapped(rdram, addr + 0x3708u);
        const uint32_t owner = readGuestU32Wrapped(rdram, addr + 0x205Cu);
        if (!commandBase && !owner)
        {
            return;
        }

        out << " " << name << "=0x" << std::hex << addr
            << " mgr3708=0x" << commandBase
            << " mgr205c=0x" << owner;
        if (isKofxiLikelyDataPointer(owner))
        {
            out << " owner[0/34/3c/40]=0x"
                << readGuestU32Wrapped(rdram, owner + 0x00u)
                << "/0x" << readGuestU32Wrapped(rdram, owner + 0x34u)
                << "/0x" << readGuestU32Wrapped(rdram, owner + 0x3Cu)
                << "/0x" << readGuestU32Wrapped(rdram, owner + 0x40u);
        }
        if (isKofxiLikelyDataPointer(commandBase))
        {
            const uint32_t command = commandBase + 0xD0Cu;
            out << " cmdD0c=0x" << command
                << "[0/c/10/14]=0x"
                << readGuestU32Wrapped(rdram, command + 0x00u)
                << "/0x" << readGuestU32Wrapped(rdram, command + 0x0Cu)
                << "/0x" << readGuestU32Wrapped(rdram, command + 0x10u)
                << "/0x" << readGuestU32Wrapped(rdram, command + 0x14u);
        }
    }

    uint32_t selectKofxiResourceObjectFromContext(const R5900Context *ctx)
    {
        if (!ctx)
        {
            return 0u;
        }

        const uint32_t regs[] = {
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0)),
        };
        for (uint32_t value : regs)
        {
            if (isKofxiCallbackResourceSlotAddress(value))
            {
                return value;
            }
        }
        return 0u;
    }

    void appendKofxiResourceObjectDetail(std::ostream &out, const uint8_t *rdram, uint32_t object)
    {
        if (!object || !isKofxiCallbackResourceSlotAddress(object))
        {
            return;
        }

        const uint32_t source = readGuestU32Wrapped(rdram, object + 0x2Cu);
        const uint32_t sourceVtable = source ? readGuestU32Wrapped(rdram, source) : 0u;
        const uint32_t upperSlot = readGuestU32Wrapped(rdram, object + 0x94u);
        const uint32_t queue8 = readGuestU32Wrapped(rdram, object + 0x08u);
        const uint32_t object10 = readGuestU32Wrapped(rdram, object + 0x10u);
        const uint32_t object14 = readGuestU32Wrapped(rdram, object + 0x14u);

        out << " resObj=0x" << std::hex << object
            << " st=0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 1u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 2u))
            << "/" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 3u))
            << " q=0x" << readGuestU32Wrapped(rdram, object + 4u)
            << "/0x" << queue8
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x0Cu)
            << " obj=0x" << object10 << "/0x" << object14
            << " buf=0x" << readGuestU32Wrapped(rdram, object + 0x20u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x24u)
            << " src=0x" << source
            << " srcV/cb24=0x" << sourceVtable
            << "/0x" << (sourceVtable ? readGuestU32Wrapped(rdram, sourceVtable + 0x24u) : 0u)
            << " step=0x" << readGuestU32Wrapped(rdram, object + 0x30u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x34u)
            << " f40/44/48/49=0x" << readGuestU32Wrapped(rdram, object + 0x40u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x44u)
            << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x48u))
            << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, object + 0x49u))
            << " tail74/90/94/b0=0x" << readGuestU32Wrapped(rdram, object + 0x74u)
            << "/0x" << readGuestU32Wrapped(rdram, object + 0x90u)
            << "/0x" << upperSlot
            << "/0x" << readGuestU32Wrapped(rdram, object + 0xB0u);
        if (object10)
        {
            appendKofxiPointerFields(out, rdram, "obj10", object10);
        }
        if (object14)
        {
            appendKofxiPointerFields(out, rdram, "obj14", object14);
        }
        appendKofxiUpperResourceSlotDetail(out, rdram, upperSlot);
    }

    void appendKofxiResourceObjectGlobals(std::ostream &out, const uint8_t *rdram)
    {
        const uint32_t primary = readGuestU32Wrapped(rdram, 0x0090E4C0u);
        const uint32_t secondary = readGuestU32Wrapped(rdram, 0x0088EAE0u);
        out << " objGlobals=main0x90e4c0=0x" << std::hex << primary
            << "/main0x88eae0=0x" << secondary
            << " tableObjs=";

        uint32_t emitted = 0u;
        constexpr uint32_t kTableBase = 0x00415DC0u;
        constexpr uint32_t kStride = 0x4180u;
        for (uint32_t index = 0u; index < 14u; ++index)
        {
            const uint32_t entry = kTableBase + index * kStride;
            const uint32_t object = readGuestU32Wrapped(rdram, entry + 4u);
            if (!object)
            {
                continue;
            }
            if (emitted != 0u)
            {
                out << ",";
            }
            out << index << ":0x" << object;
            ++emitted;
            if (emitted >= 6u)
            {
                out << ",...";
                break;
            }
        }
        if (emitted == 0u)
        {
            out << "none";
        }
    }

    void appendKofxiObjectTaskTableSummary(std::ostream &out, const uint8_t *rdram)
    {
        constexpr uint32_t kTaskBase = 0x00387780u;
        constexpr uint32_t kTaskStride = 0x64u;
        constexpr uint32_t kTaskCount = 16u;
        constexpr uint32_t kEntryBase = 0x0037C868u;
        constexpr uint32_t kEntryStride = 0x40u;
        constexpr uint32_t kEntryCount = 32u;

        out << " objTasks=";
        uint32_t emitted = 0u;
        for (uint32_t index = 0u; index < kTaskCount; ++index)
        {
            const uint32_t entry = kTaskBase + index * kTaskStride;
            const uint32_t state0 = readGuestU8Wrapped(rdram, entry);
            const uint32_t state1 = readGuestU8Wrapped(rdram, entry + 1u);
            const uint32_t field4 = readGuestU32Wrapped(rdram, entry + 4u);
            const uint32_t field8 = readGuestU32Wrapped(rdram, entry + 8u);
            const uint32_t field10 = readGuestU32Wrapped(rdram, entry + 0x10u);
            const uint32_t field20 = readGuestU32Wrapped(rdram, entry + 0x20u);
            const uint32_t field30 = readGuestU32Wrapped(rdram, entry + 0x30u);
            const uint32_t field38 = readGuestU32Wrapped(rdram, entry + 0x38u);
            if (state0 == 0u && state1 == 0u && field4 == 0u && field8 == 0u &&
                field10 == 0u && field20 == 0u && field30 == 0u && field38 == 0u)
            {
                continue;
            }

            if (emitted != 0u)
            {
                out << ",";
            }
            out << std::hex << index << ":"
                << state0 << "/" << state1
                << " f4/8=0x" << field4 << "/0x" << field8
                << " f10/20=0x" << field10 << "/0x" << field20
                << " f30/38=0x" << field30 << "/0x" << field38;
            ++emitted;
            if (emitted >= 6u)
            {
                out << ",...";
                break;
            }
        }
        if (emitted == 0u)
        {
            out << "none";
        }

        out << " objTaskEntries=";
        emitted = 0u;
        for (uint32_t index = 0u; index < kEntryCount; ++index)
        {
            const uint32_t entry = kEntryBase + index * kEntryStride;
            const uint32_t state0 = readGuestU8Wrapped(rdram, entry);
            const uint32_t state1 = readGuestU8Wrapped(rdram, entry + 1u);
            const uint32_t field4 = readGuestU32Wrapped(rdram, entry + 4u);
            const uint32_t field8 = readGuestU32Wrapped(rdram, entry + 8u);
            const uint32_t field30 = readGuestU32Wrapped(rdram, entry + 0x30u);
            const uint32_t field34 = readGuestU32Wrapped(rdram, entry + 0x34u);
            const uint32_t field38 = readGuestU32Wrapped(rdram, entry + 0x38u);
            if (state0 == 0u && state1 == 0u && field4 == 0u && field8 == 0u &&
                field30 == 0u && field34 == 0u && field38 == 0u)
            {
                continue;
            }

            if (emitted != 0u)
            {
                out << ",";
            }
            out << std::hex << index << ":"
                << state0 << "/" << state1
                << " f4/8=0x" << field4 << "/0x" << field8
                << " f30/34/38=0x" << field30 << "/0x" << field34 << "/0x" << field38;
            ++emitted;
            if (emitted >= 6u)
            {
                out << ",...";
                break;
            }
        }
        if (emitted == 0u)
        {
            out << "none";
        }
    }

    void appendKofxiObjectPoolSummary(std::ostream &out, const uint8_t *rdram)
    {
        constexpr uint32_t kPoolBase = 0x00388BD0u;
        constexpr uint32_t kPoolStride = 0x40u;
        constexpr uint32_t kPoolCount = 0x100u;

        out << " objPool=";
        uint32_t emitted = 0u;
        for (uint32_t index = 0u; index < kPoolCount; ++index)
        {
            const uint32_t object = kPoolBase + index * kPoolStride;
            const uint32_t vtable = readGuestU32Wrapped(rdram, object);
            const uint32_t state4 = readGuestU32Wrapped(rdram, object + 4u);
            const uint32_t field8 = readGuestU32Wrapped(rdram, object + 8u);
            const uint32_t field10 = readGuestU32Wrapped(rdram, object + 0x10u);
            const uint32_t field14 = readGuestU32Wrapped(rdram, object + 0x14u);
            const uint32_t field1C = readGuestU32Wrapped(rdram, object + 0x1Cu);
            const uint32_t field20 = readGuestU32Wrapped(rdram, object + 0x20u);
            const uint32_t field24 = readGuestU32Wrapped(rdram, object + 0x24u);
            const uint32_t method38 = readGuestU32Wrapped(rdram, object + 0x38u);
            const uint32_t self3C = readGuestU32Wrapped(rdram, object + 0x3Cu);
            if (vtable == 0u && state4 == 0u && field8 == 0u && field10 == 0u &&
                field14 == 0u && field1C == 0u && field20 == 0u && field24 == 0u &&
                method38 == 0u && self3C == 0u)
            {
                continue;
            }

            if (emitted != 0u)
            {
                out << ",";
            }
            out << std::hex << index << ":0x" << object
                << " v=0x" << vtable
                << " f4/8=0x" << state4 << "/0x" << field8
                << " f10/14=0x" << field10 << "/0x" << field14
                << " f1c/20/24=0x" << field1C << "/0x" << field20 << "/0x" << field24
                << " m38/self=0x" << method38 << "/0x" << self3C;
            ++emitted;
            if (emitted >= 6u)
            {
                out << ",...";
                break;
            }
        }
        if (emitted == 0u)
        {
            out << "none";
        }
    }

    void appendKofxiDeferredSchedulerTables(std::ostream &out, const uint8_t *rdram)
    {
        constexpr uint32_t kGroupTableBase = 0x01BF7D60u;
        constexpr uint32_t kGroupStride = 0x48u;
        constexpr uint32_t kGroupCount = 8u;
        constexpr uint32_t kGroupSlotStride = 0x0Cu;
        constexpr uint32_t kGroupSlotCount = 6u;
        constexpr uint32_t kGroupActiveBase = 0x0039E588u;
        constexpr uint32_t kGroupTickBase = 0x0039E568u;
        constexpr uint32_t kSingleBases[] = {0x01BF7FE0u, 0x01BF7FE8u, 0x01BF7FF0u};

        out << " deferGroups=";
        bool emittedGroup = false;
        for (uint32_t group = 0; group < kGroupCount; ++group)
        {
            const uint32_t groupBase = kGroupTableBase + group * kGroupStride;
            bool groupHasFunction = false;
            for (uint32_t slot = 0; slot < kGroupSlotCount; ++slot)
            {
                if (readGuestU32Wrapped(rdram, groupBase + slot * kGroupSlotStride) != 0u)
                {
                    groupHasFunction = true;
                    break;
                }
            }
            if (!groupHasFunction)
            {
                continue;
            }

            if (emittedGroup)
            {
                out << ",";
            }
            emittedGroup = true;
            out << group
                << ":active=0x" << readGuestU32Wrapped(rdram, kGroupActiveBase + group * 4u)
                << "/tick=0x" << readGuestU32Wrapped(rdram, kGroupTickBase + group * 4u)
                << "[";
            for (uint32_t slot = 0; slot < kGroupSlotCount; ++slot)
            {
                if (slot != 0u)
                {
                    out << ";";
                }
                const uint32_t entry = groupBase + slot * kGroupSlotStride;
                out << "0x" << readGuestU32Wrapped(rdram, entry)
                    << "/0x" << readGuestU32Wrapped(rdram, entry + 4u)
                    << "/0x" << readGuestU32Wrapped(rdram, entry + 8u);
            }
            out << "]";
        }
        if (!emittedGroup)
        {
            out << "none";
        }

        out << " deferSingles=";
        for (uint32_t index = 0; index < static_cast<uint32_t>(std::size(kSingleBases)); ++index)
        {
            if (index != 0u)
            {
                out << ",";
            }
            const uint32_t base = kSingleBases[index];
            out << index << ":0x" << readGuestU32Wrapped(rdram, base)
                << "/0x" << readGuestU32Wrapped(rdram, base + 4u);
        }
    }

    void appendKofxiSchedulerGlobals(std::ostream &out, const uint8_t *rdram)
    {
        out << " schedGlobals="
            << "mode=0x" << readGuestU32Wrapped(rdram, 0x00372FE8u)
            << "/flag2ff4=0x" << readGuestU32Wrapped(rdram, 0x00372FF4u)
            << "/prio3000=0x" << readGuestU32Wrapped(rdram, 0x00373000u)
            << "/nest3030=0x" << readGuestU32Wrapped(rdram, 0x00373030u)
            << "/spin3034=0x" << readGuestU32Wrapped(rdram, 0x00373034u)
            << "/thread3088=0x" << readGuestU32Wrapped(rdram, 0x00373088u)
            << "/savedTid=0x" << readGuestU32Wrapped(rdram, 0x0037A920u)
            << "/savedPrio=0x" << readGuestU32Wrapped(rdram, 0x0037A924u);
    }

    void appendKofxiWorkerSchedulerState(std::ostream &out, const uint8_t *rdram)
    {
        out << " workerSched="
            << "frameCtr=0x" << readGuestU32Wrapped(rdram, 0x00372360u)
            << "/waitA=0x" << readGuestU32Wrapped(rdram, 0x00373018u)
            << "/waitB=0x" << readGuestU32Wrapped(rdram, 0x0037301Cu)
            << "/scope=0x" << readGuestU32Wrapped(rdram, 0x00373030u)
            << "/loopGate=0x" << readGuestU32Wrapped(rdram, 0x00373034u)
            << "/vblankA=0x" << readGuestU32Wrapped(rdram, 0x00373038u)
            << "/schedMirror=0x" << readGuestU32Wrapped(rdram, 0x0037303Cu)
            << "/vblankB=0x" << readGuestU32Wrapped(rdram, 0x00373040u)
            << "/frameSleep=0x" << readGuestU32Wrapped(rdram, 0x0037304Cu)
            << "/ticks=0x" << readGuestU32Wrapped(rdram, 0x00373050u)
            << "," << readGuestU32Wrapped(rdram, 0x00373058u)
            << "," << readGuestU32Wrapped(rdram, 0x00373060u)
            << "," << readGuestU32Wrapped(rdram, 0x00373068u)
            << "," << readGuestU32Wrapped(rdram, 0x00373070u)
            << "," << readGuestU32Wrapped(rdram, 0x00373078u)
            << "/frameTid=0x" << readGuestU32Wrapped(rdram, 0x00373098u)
            << "/workerA=0x" << readGuestU32Wrapped(rdram, 0x0037309Cu)
            << "/workerB=0x" << readGuestU32Wrapped(rdram, 0x003730A0u)
            << "/workerInput=0x" << readGuestU32Wrapped(rdram, 0x00373114u)
            << "/worker2Pending=0x" << readGuestU32Wrapped(rdram, 0x00373118u)
            << "/irqGate=0x" << readGuestU32Wrapped(rdram, 0x0037310Cu)
            << "/vblankCallback=0x" << readGuestU32Wrapped(rdram, 0x00373110u);
    }

    bool isKofxiSchedulerWorkerLookup(uint32_t lookupAddress)
    {
        switch (lookupAddress)
        {
        case 0x001B2CD8u:
        case 0x001B2D40u:
        case 0x001B2D54u:
        case 0x001B2D68u:
        case 0x001B2D74u:
        case 0x001B2D84u:
        case 0x001B2D8Cu:
        case 0x001B2D94u:
        case 0x001B2D9Cu:
        case 0x001B2ED0u:
        case 0x001B2F38u:
        case 0x001B2F44u:
        case 0x001B2F4Cu:
        case 0x001B2F68u:
        case 0x001B2F70u:
        case 0x001B2F78u:
        case 0x001B2F84u:
        case 0x001B2F8Cu:
        case 0x001B2F98u:
        case 0x001B2FA0u:
        case 0x001B2FB0u:
        case 0x001B2FB8u:
        case 0x001B2FBCu:
        case 0x001B2FC4u:
        case 0x001B3130u:
        case 0x001B3180u:
        case 0x001B3198u:
        case 0x001B3200u:
        case 0x001B3FA8u:
        case 0x001B3FC0u:
        case 0x001B4048u:
        case 0x001B40F0u:
        case 0x001B45C8u:
        case 0x001B45F8u:
        case 0x001B464Cu:
        case 0x001B4654u:
        case 0x001B4688u:
        case 0x001B46F8u:
        case 0x001B2718u:
        case 0x001B27B8u:
        case 0x001B2968u:
        case 0x001B3638u:
        case 0x001CE5E8u:
        case 0x001CE618u:
        case 0x001CE630u:
        case 0x001CE648u:
        case 0x001CE660u:
        case 0x001CE458u:
        case 0x001B1CC8u:
        case 0x001B1CE8u:
        case 0x001B1D08u:
            return true;
        default:
            return false;
        }
    }

    void traceKofxiSchedulerWorkerPc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_SCHED_WORKER_PC") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext ||
            !isKofxiSchedulerWorkerLookup(lookupAddress))
        {
            return;
        }

        const bool hasResourceTraceState = hasKofxiResourceTraceState(g_activeLookupRdram);
        if (isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_SCHED_WORKER_PC_AFTER_RESOURCE") &&
            !hasResourceTraceState)
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_SCHED_WORKER_PC_LIMIT", 512u));
        if (index >= limit)
        {
            return;
        }

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t s2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0));
        const uint32_t s3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0));

        std::cerr << "[KOFXI:sched-worker-pc] #" << (index + 1u)
                  << " lookup=0x" << std::hex << lookupAddress
                  << " tid=" << std::dec << g_currentThreadId
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " s0-s3=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3
                  << " stack0/8/10/18=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 8u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x10u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x18u);
        appendKofxiSchedulerGlobals(std::cerr, g_activeLookupRdram);
        appendKofxiWorkerSchedulerState(std::cerr, g_activeLookupRdram);
        appendKofxiDeferredSchedulerTables(std::cerr, g_activeLookupRdram);
        appendKofxiResourceSlotSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, g_activeLookupRdram);
        std::cerr << " trace=" << formatDispatchHistory() << std::dec << std::endl;
    }

    bool isKofxiNoisyDeferredSchedulerLookup(uint32_t lookupAddress)
    {
        switch (lookupAddress)
        {
        case 0x001B29A0u:
        case 0x001B2A28u:
        case 0x001B2A98u:
        case 0x001B2B80u:
        case 0x001CDA58u:
        case 0x001CDA80u:
        case 0x001CDAB8u:
        case 0x001CDB24u:
        case 0x001CDB28u:
        case 0x001CDB30u:
        case 0x001CDB48u:
        case 0x001CDB60u:
            return true;
        default:
            return false;
        }
    }

    void traceKofxiUpperResourcePc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_UPPER_RESOURCE_PC") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        switch (lookupAddress)
        {
        case 0x001C5CC8u:
        case 0x001B2718u:
        case 0x001B2728u:
        case 0x001B2738u:
        case 0x001B2740u:
        case 0x001B2788u:
        case 0x001B2790u:
        case 0x001B27B8u:
        case 0x001B27C8u:
        case 0x001B27D0u:
        case 0x001B2808u:
        case 0x001B2818u:
        case 0x001B2820u:
        case 0x001B2828u:
        case 0x001B2830u:
        case 0x001B2838u:
        case 0x001B2840u:
        case 0x001B3F90u:
        case 0x001B3FA8u:
        case 0x001CE350u:
        case 0x001CE3C4u:
        case 0x001CE3D0u:
        case 0x001CE3D8u:
        case 0x001CE3E8u:
        case 0x001CE414u:
        case 0x001CE428u:
        case 0x001CE440u:
        case 0x001CE458u:
        case 0x001CE4B0u:
        case 0x001CE4C0u:
        case 0x001CE4C8u:
        case 0x001CE520u:
        case 0x001CE58Cu:
        case 0x001CE598u:
        case 0x001CE5A0u:
        case 0x001CE5B8u:
        case 0x001CE5C8u:
        case 0x001CE5D0u:
        case 0x001CE5E0u:
        case 0x001CE5E8u:
        case 0x001CE5F8u:
        case 0x001CE610u:
        case 0x001CE628u:
        case 0x001CE640u:
        case 0x001CE658u:
        case 0x001CE670u:
        case 0x001B1CC8u:
        case 0x001B26D8u:
        case 0x001B2700u:
        case 0x001B29A0u:
        case 0x001B2A28u:
        case 0x001B2A98u:
        case 0x001B2B80u:
        case 0x001CDA58u:
        case 0x001CDA80u:
        case 0x001CDAB8u:
        case 0x001CDB24u:
        case 0x001CDB28u:
        case 0x001CDB30u:
        case 0x001CDB48u:
        case 0x001CDB60u:
        case 0x001B8298u:
        case 0x001B82BCu:
        case 0x001B82C4u:
        case 0x001B8428u:
        case 0x001B8450u:
        case 0x001B8458u:
        case 0x001B8464u:
        case 0x001B8478u:
        case 0x001B1FE0u:
        case 0x001B2004u:
        case 0x001B2010u:
        case 0x001B2028u:
        case 0x001B2048u:
        case 0x001B2074u:
        case 0x001B20A8u:
        case 0x001B20E8u:
        case 0x001B20F0u:
        case 0x001B2118u:
        case 0x001B213Cu:
        case 0x001B2168u:
        case 0x001B21B0u:
        case 0x001B21C4u:
        case 0x001B21E0u:
        case 0x001B21F0u:
        case 0x001B21F8u:
        case 0x001B2260u:
        case 0x001B2298u:
        case 0x001B22E8u:
        case 0x001B22F0u:
        case 0x001B2380u:
        case 0x001B239Cu:
        case 0x001B23A0u:
        case 0x001B23A8u:
        case 0x001B23C0u:
        case 0x001B23D8u:
        case 0x001B240Cu:
        case 0x001B2418u:
        case 0x001B2420u:
        case 0x001B2440u:
        case 0x001B24A0u:
        case 0x001B24A8u:
        case 0x001B24B4u:
        case 0x001B24BCu:
        case 0x001B24C0u:
        case 0x001B24C8u:
        case 0x001B24E4u:
        case 0x001B2540u:
        case 0x001B25A8u:
        case 0x001B25B0u:
        case 0x001B25B8u:
        case 0x001B25C0u:
        case 0x001B25C4u:
        case 0x001B25CCu:
        case 0x001B25E4u:
        case 0x001B2630u:
        case 0x001B84A0u:
        case 0x001B84A8u:
        case 0x001B84ACu:
        case 0x001B84B4u:
        case 0x001B84C8u:
        case 0x001B84F0u:
        case 0x001B84F8u:
        case 0x001B84FCu:
        case 0x001B8504u:
        case 0x001B8518u:
        case 0x001B8528u:
        case 0x001E9890u:
        case 0x001E9960u:
        case 0x001E9970u:
        case 0x001E9978u:
        case 0x001E9984u:
        case 0x001E9990u:
        case 0x001E9998u:
        case 0x001E99A4u:
        case 0x001E99ACu:
        case 0x001E99B4u:
        case 0x001E99C8u:
        case 0x001E99D8u:
        case 0x001E99F0u:
        case 0x001E99F8u:
        case 0x001E99FCu:
        case 0x001E9A04u:
        case 0x001E9A18u:
        case 0x001E53A0u:
        case 0x001E53BCu:
        case 0x001E53E8u:
        case 0x001E53F8u:
        case 0x001E5540u:
        case 0x001E5554u:
        case 0x001E5580u:
        case 0x001E5670u:
        case 0x001E5698u:
        case 0x001E56C8u:
        case 0x001E56D0u:
        case 0x001E56E0u:
        case 0x001E56ECu:
        case 0x001E56F4u:
        case 0x001E5730u:
        case 0x001E575Cu:
        case 0x001E5798u:
        case 0x001E57B0u:
        case 0x001C5D20u:
        case 0x001C5D28u:
        case 0x001C5D60u:
        case 0x001C5DA0u:
        case 0x001C5E40u:
        case 0x001C5E4Cu:
        case 0x001C5E68u:
        case 0x001C5E7Cu:
        case 0x001C5E84u:
        case 0x001C5E98u:
        case 0x001C5EB4u:
        case 0x001C5ECCu:
        case 0x001C5ED8u:
        case 0x001C5F28u:
        case 0x001C5F2Cu:
        case 0x001C5FA0u:
        case 0x001C5FD4u:
        case 0x001C5FECu:
        case 0x001C5FF4u:
        case 0x001C6018u:
        case 0x001C6068u:
        case 0x001C60F8u:
        case 0x001C6128u:
        case 0x001C617Cu:
        case 0x001C6184u:
        case 0x001C61B0u:
        case 0x001C61C4u:
        case 0x001C61CCu:
        case 0x001C61E0u:
        case 0x001C6200u:
        case 0x001C6220u:
        case 0x001C6234u:
        case 0x001C623Cu:
        case 0x001C6250u:
        case 0x001C6280u:
        case 0x001C6294u:
        case 0x001C62A4u:
        case 0x001C62B8u:
        case 0x001C62E8u:
        case 0x001C6318u:
        case 0x001C6348u:
        case 0x001C6358u:
        case 0x001C6370u:
        case 0x001C638Cu:
        case 0x001C6398u:
        case 0x001C63B0u:
        case 0x001C63D0u:
        case 0x001C63F0u:
        case 0x001C6400u:
        case 0x001C6408u:
        case 0x001C6418u:
        case 0x001C6440u:
        case 0x001C6454u:
        case 0x001C6A10u:
        case 0x001C6A38u:
        case 0x001C6A48u:
        case 0x001C6A64u:
        case 0x001C6A68u:
        case 0x001C6A70u:
        case 0x001C6A88u:
        case 0x001C6AA8u:
        case 0x001C6AACu:
        case 0x001C6AB0u:
        case 0x001C6D00u:
        case 0x001C6D30u:
        case 0x001C6D38u:
        case 0x001C6D40u:
        case 0x001C6DA8u:
        case 0x001C6E10u:
        case 0x001C6E28u:
        case 0x001C6E68u:
        case 0x001C6E78u:
        case 0x001C6EC8u:
        case 0x001C6EF0u:
        case 0x001C6F98u:
        case 0x001C6FA0u:
        case 0x001C6FC8u:
        case 0x001C6FF8u:
        case 0x001C7020u:
        case 0x001C702Cu:
        case 0x001C7038u:
        case 0x001C7054u:
        case 0x001C705Cu:
        case 0x001C7074u:
        case 0x001C707Cu:
        case 0x001C7094u:
        case 0x001C70A8u:
        case 0x001C70B0u:
            break;
        default:
            return;
        }

        const bool hasResourceTraceState = hasKofxiResourceTraceState(g_activeLookupRdram);
        if (isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_UPPER_RESOURCE_PC_AFTER_RESOURCE") &&
            !hasResourceTraceState)
        {
            return;
        }

        if (isKofxiNoisyDeferredSchedulerLookup(lookupAddress) &&
            !isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_UPPER_RESOURCE_PC_EARLY") &&
            !hasResourceTraceState)
        {
            return;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_UPPER_RESOURCE_PC_LIMIT", 512u));
        if (g_kofxiUpperResourcePcLogCount >= limit)
        {
            return;
        }
        ++g_kofxiUpperResourcePcLogCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t t0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[8], 0));
        const uint32_t t1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[9], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t s2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0));
        const uint32_t s3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0));
        const uint32_t slot = selectKofxiUpperResourceSlotFromContext(ctx);

        std::cerr << "[KOFXI:upper-resource-pc] #" << g_kofxiUpperResourcePcLogCount
                  << " lookup=0x" << std::hex << lookupAddress
                  << " tid=" << std::dec << g_currentThreadId
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " t0/t1=0x" << t0 << "/0x" << t1
                  << " s0-s3=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3
                  << " stack0=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp)
                  << " stack8=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 8u)
                  << " stack10=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x10u)
                  << " stack14=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x14u)
                  << " stack18=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x18u);
        appendKofxiUpperResourceSlotDetail(std::cerr, g_activeLookupRdram, slot);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "recA0", a0);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "recA1", a1);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "recA2", a2);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "recA3", a3);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "recT0", t0);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "recS0", s0);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "recS1", s1);
        appendKofxiManagerFields(std::cerr, g_activeLookupRdram, "mgrA0", a0);
        appendKofxiManagerFields(std::cerr, g_activeLookupRdram, "mgrS0", s0);
        appendKofxiSchedulerGlobals(std::cerr, g_activeLookupRdram);
        appendKofxiDeferredSchedulerTables(std::cerr, g_activeLookupRdram);
        std::cerr << " trace=" << formatDispatchHistory();
        appendKofxiResourceSlotSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, g_activeLookupRdram);
        std::cerr << std::dec << std::endl;
    }

    void traceKofxiUpperResourceScannerPc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_UPPER_RESOURCE_SCANNER_PC") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        switch (lookupAddress)
        {
        case 0x001C6418u:
        case 0x001C6440u:
        case 0x001C6454u:
        case 0x001C6FF8u:
        case 0x001C7020u:
        case 0x001C702Cu:
        case 0x001C7054u:
        case 0x001C7074u:
        case 0x001C70A8u:
        case 0x001C6D00u:
            break;
        default:
            return;
        }

        const bool hasResourceTraceState = hasKofxiResourceTraceState(g_activeLookupRdram);
        if (isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_UPPER_RESOURCE_SCANNER_PC_AFTER_RESOURCE") &&
            !hasResourceTraceState)
        {
            return;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_UPPER_RESOURCE_SCANNER_PC_LIMIT", 512u));
        if (g_kofxiUpperResourceScannerPcLogCount >= limit)
        {
            return;
        }
        ++g_kofxiUpperResourceScannerPcLogCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t s2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0));
        const uint32_t slot = selectKofxiUpperResourceSlotFromContext(ctx);

        std::cerr << "[KOFXI:upper-resource-scanner-pc] #" << g_kofxiUpperResourceScannerPcLogCount
                  << " lookup=0x" << std::hex << lookupAddress
                  << " tid=" << std::dec << g_currentThreadId
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " s0-s2=0x" << s0 << "/0x" << s1 << "/0x" << s2
                  << " stack0/8/10/18=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 8u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x10u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x18u);
        appendKofxiUpperResourceSlotDetail(std::cerr, g_activeLookupRdram, slot);
        appendKofxiUpperResourceScannerStats(std::cerr, g_activeLookupRdram);
        appendKofxiSchedulerGlobals(std::cerr, g_activeLookupRdram);
        appendKofxiDeferredSchedulerTables(std::cerr, g_activeLookupRdram);
        std::cerr << std::dec << std::endl;
    }

    void traceKofxiUpperResourceCommandPc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_UPPER_RESOURCE_COMMAND_PC") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        switch (lookupAddress)
        {
        case 0x001E9890u:
        case 0x001E9960u:
        case 0x001E9978u:
        case 0x001E9984u:
        case 0x001E9990u:
        case 0x001E9998u:
        case 0x001E99A4u:
        case 0x001E99ACu:
        case 0x001E99B4u:
        case 0x001E99D8u:
        case 0x001E99F0u:
        case 0x001E9A04u:
        case 0x001E9A18u:
        case 0x001B1FE0u:
        case 0x001B2004u:
        case 0x001B2010u:
        case 0x001B2028u:
        case 0x001B2048u:
        case 0x001B2074u:
        case 0x001B20A8u:
        case 0x001B20E8u:
        case 0x001B20F0u:
        case 0x001B2118u:
        case 0x001B213Cu:
        case 0x001B2168u:
        case 0x001B21B0u:
        case 0x001B21C4u:
        case 0x001B21E0u:
        case 0x001B21F0u:
        case 0x001B21F8u:
        case 0x001B2260u:
        case 0x001B2298u:
        case 0x001B22E8u:
        case 0x001B22F0u:
        case 0x001C5FA0u:
        case 0x001C5FD4u:
        case 0x001C5FECu:
        case 0x001C5FF4u:
        case 0x001C6018u:
        case 0x001C6068u:
        case 0x001C60F8u:
        case 0x001C6128u:
        case 0x001C617Cu:
        case 0x001C6184u:
        case 0x001C6220u:
        case 0x001C6234u:
        case 0x001C623Cu:
        case 0x001C6250u:
        case 0x001C6280u:
        case 0x001C6294u:
        case 0x001C62A4u:
            break;
        default:
            return;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_UPPER_RESOURCE_COMMAND_PC_LIMIT", 512u));
        if (g_kofxiUpperResourceCommandPcLogCount >= limit)
        {
            return;
        }
        ++g_kofxiUpperResourceCommandPcLogCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t t0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[8], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t slot = selectKofxiUpperResourceSlotFromContext(ctx);

        std::cerr << "[KOFXI:upper-resource-command-pc] #" << g_kofxiUpperResourceCommandPcLogCount
                  << " lookup=0x" << std::hex << lookupAddress
                  << " tid=" << std::dec << g_currentThreadId
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " t0=0x" << t0
                  << " s0/s1=0x" << s0 << "/0x" << s1
                  << " stack0/8/10/18=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 8u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x10u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x18u);
        appendKofxiUpperResourceSlotDetail(std::cerr, g_activeLookupRdram, slot);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "cmdA0", a0);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "cmdA1", a1);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "cmdA2", a2);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "cmdA3", a3);
        appendKofxiManagerFields(std::cerr, g_activeLookupRdram, "mgrA0", a0);
        appendKofxiManagerFields(std::cerr, g_activeLookupRdram, "mgrS0", s0);
        appendKofxiResourceSlotSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, g_activeLookupRdram);
        std::cerr << " trace=" << formatDispatchHistory() << std::dec << std::endl;
    }

    void traceKofxiObjectManagerPc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_OBJECT_MANAGER_PC") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        switch (lookupAddress)
        {
        case 0x0014C130u:
        case 0x0014C648u:
        case 0x001BBB70u:
        case 0x001BBBA0u:
        case 0x001BBBC0u:
        case 0x001BBBC8u:
        case 0x001BBBD4u:
        case 0x001BBBDCu:
        case 0x001BBBECu:
        case 0x001BBBF4u:
        case 0x001BBBFCu:
        case 0x001BBC00u:
        case 0x001BBC20u:
        case 0x001B9F18u:
        case 0x001B9DB8u:
        case 0x001B9E08u:
        case 0x001B9E20u:
        case 0x001B9E58u:
        case 0x001B9E74u:
        case 0x001B9E94u:
        case 0x001B9E9Cu:
        case 0x001B6418u:
        case 0x001B6438u:
        case 0x001B6460u:
        case 0x001B6270u:
        case 0x001AB940u:
        case 0x001AB964u:
        case 0x001AB984u:
        case 0x001BA058u:
        case 0x001B9F98u:
        case 0x001B4CC0u:
        case 0x001B4CD8u:
        case 0x001CA338u:
        case 0x001CA388u:
        case 0x001BA088u:
        case 0x001BA0C8u:
            break;
        default:
            return;
        }

        if (isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_OBJECT_MANAGER_PC_AFTER_RESOURCE") &&
            !hasKofxiResourceTraceState(g_activeLookupRdram))
        {
            return;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_OBJECT_MANAGER_PC_LIMIT", 768u));
        if (g_kofxiObjectManagerPcLogCount >= limit)
        {
            return;
        }
        ++g_kofxiObjectManagerPcLogCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t s2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0));
        const uint32_t s3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0));
        const uint32_t slot = selectKofxiObjectManagerCallbackSlot(ctx);
        const uint32_t a0ChildObject =
            isKofxiResourceObjectCandidate(a0) ? readGuestU32Wrapped(g_activeLookupRdram, a0 + 4u) : 0u;

        std::cerr << "[KOFXI:object-manager-pc] #" << g_kofxiObjectManagerPcLogCount
                  << " lookup=0x" << std::hex << lookupAddress
                  << " tid=" << std::dec << g_currentThreadId
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " s0-s3=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3
                  << " stack0/8/10/18/20/28=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 8u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x10u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x18u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x20u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x28u);
        appendKofxiObjectManagerSlotDetail(std::cerr, g_activeLookupRdram, "cur", slot);
        appendKofxiObjectManagerSlotDetail(std::cerr, g_activeLookupRdram, "a0", a0);
        appendKofxiObjectManagerSlotDetail(std::cerr, g_activeLookupRdram, "s0", s0);
        appendKofxiObjectManagerSlotDetail(std::cerr, g_activeLookupRdram, "s1", s1);
        if (a0ChildObject)
        {
            std::cerr << " a0ChildObj=0x" << a0ChildObject
                      << ":b0d/0e/0f=0x" << static_cast<uint32_t>(readGuestU8Wrapped(g_activeLookupRdram, a0ChildObject + 0x0Du))
                      << "/" << static_cast<uint32_t>(readGuestU8Wrapped(g_activeLookupRdram, a0ChildObject + 0x0Eu))
                      << "/" << static_cast<uint32_t>(readGuestU8Wrapped(g_activeLookupRdram, a0ChildObject + 0x0Fu))
                      << " w10/98/9c/cc/e8=0x" << readGuestU32Wrapped(g_activeLookupRdram, a0ChildObject + 0x10u)
                      << "/0x" << readGuestU16Wrapped(g_activeLookupRdram, a0ChildObject + 0x98u)
                      << "/0x" << readGuestU16Wrapped(g_activeLookupRdram, a0ChildObject + 0x9Cu)
                      << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, a0ChildObject + 0xCCu)
                      << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, a0ChildObject + 0xE8u);
        }
        appendKofxiObjectTaskTableSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceSlotSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, g_activeLookupRdram);
        std::cerr << " trace=" << formatDispatchHistory() << std::dec << std::endl;
    }

    void traceKofxiResourceObjectPc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_RESOURCE_OBJECT_PC") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        switch (lookupAddress)
        {
        case 0x0014C4C4u:
        case 0x0014C4CCu:
        case 0x0014C4D4u:
        case 0x0014C4E0u:
        case 0x0014C4E8u:
        case 0x0014C4F0u:
        case 0x0014C528u:
        case 0x0014C530u:
        case 0x0014C540u:
        case 0x0014C548u:
        case 0x0014C558u:
        case 0x0014C560u:
        case 0x0014C56Cu:
        case 0x0014C574u:
        case 0x0014C57Cu:
        case 0x0014C584u:
        case 0x0014C590u:
        case 0x0014C598u:
        case 0x0014C5A4u:
        case 0x0014C5ACu:
        case 0x0014C5BCu:
        case 0x0014C5C4u:
        case 0x0014C5D0u:
        case 0x0014C5D8u:
        case 0x0014C5DCu:
        case 0x0014C608u:
        case 0x0014C610u:
        case 0x0014C630u:
        case 0x0014C638u:
        case 0x0014C640u:
        case 0x0014C648u:
        case 0x001AEF20u:
        case 0x001AEF58u:
        case 0x001AEF60u:
        case 0x001AEF68u:
        case 0x001AF940u:
        case 0x001AF954u:
        case 0x001AF95Cu:
        case 0x001AF964u:
        case 0x001B2028u:
        case 0x001B2048u:
        case 0x001B2074u:
        case 0x001B20A8u:
        case 0x001B20E8u:
        case 0x001B20F0u:
        case 0x001B2118u:
        case 0x001B213Cu:
        case 0x001B2168u:
        case 0x001B21B0u:
        case 0x001B21C4u:
        case 0x001B21E0u:
        case 0x001B21F0u:
        case 0x001B21F8u:
        case 0x001B2260u:
        case 0x001B2298u:
        case 0x001B22C8u:
        case 0x001B22D0u:
        case 0x001B22E8u:
        case 0x001B22F0u:
        case 0x001B2380u:
        case 0x001B23C0u:
        case 0x001B2440u:
        case 0x001B24B4u:
        case 0x001B24C0u:
        case 0x001B2540u:
        case 0x001B25B8u:
        case 0x001B25C4u:
        case 0x001B87B8u:
        case 0x001B87DCu:
        case 0x001B87ECu:
        case 0x001B87F4u:
        case 0x001B8810u:
        case 0x001B88E4u:
        case 0x001B8960u:
        case 0x001B8974u:
        case 0x001B89E4u:
        case 0x001B89F8u:
        case 0x001B8A08u:
        case 0x001B8A18u:
        case 0x001B8A2Cu:
        case 0x001B8A98u:
        case 0x001B8AF4u:
        case 0x001B8B00u:
        case 0x001B8B08u:
        case 0x001B8B28u:
        case 0x001B8B44u:
        case 0x001B8B50u:
        case 0x001B8B58u:
        case 0x001B9D68u:
        case 0x001B9D8Cu:
        case 0x001B9D9Cu:
        case 0x001B9DB8u:
        case 0x001BA088u:
        case 0x001BA0A4u:
        case 0x001BA0B0u:
        case 0x001BA0C8u:
        case 0x001BA638u:
        case 0x001BA654u:
        case 0x001BA660u:
        case 0x001BA678u:
        case 0x001C1C28u:
        case 0x001C1CC8u:
        case 0x001C1D18u:
        case 0x001C25B8u:
        case 0x001C8AA8u:
        case 0x001C8AD8u:
        case 0x001C9700u:
        case 0x001C97B8u:
        case 0x001C97D8u:
        case 0x001C98D0u:
        case 0x001C9924u:
        case 0x001CB800u:
        case 0x001CB850u:
        case 0x001CB8B0u:
        case 0x001CBA38u:
        case 0x001CBA50u:
        case 0x001CBAA0u:
        case 0x001CBC20u:
        case 0x001CBE50u:
        case 0x001C5D60u:
        case 0x001C5E40u:
        case 0x001C5F28u:
        case 0x001C5FA0u:
        case 0x001C5FD4u:
        case 0x001C5FECu:
        case 0x001C6018u:
        case 0x001C6250u:
        case 0x001C62B8u:
        case 0x001C6418u:
        case 0x001C6A48u:
        case 0x001C6A88u:
        case 0x001C6AACu:
        case 0x001C6FF8u:
            break;
        default:
            return;
        }

        const bool hasResourceTraceState = hasKofxiResourceTraceState(g_activeLookupRdram);
        if (isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_RESOURCE_OBJECT_PC_AFTER_RESOURCE") &&
            !hasResourceTraceState)
        {
            return;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_RESOURCE_OBJECT_PC_LIMIT", 512u));
        if (g_kofxiResourceObjectPcLogCount >= limit)
        {
            return;
        }
        ++g_kofxiResourceObjectPcLogCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t t0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[8], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t s2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0));
        const uint32_t s3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0));
        const uint32_t object = selectKofxiResourceObjectFromContext(ctx);

        std::cerr << "[KOFXI:resource-object-pc] #" << g_kofxiResourceObjectPcLogCount
                  << " lookup=0x" << std::hex << lookupAddress
                  << " tid=" << std::dec << g_currentThreadId
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " t0=0x" << t0
                  << " s0-s3=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3
                  << " stack0/8/10/18/20/28=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 8u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x10u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x18u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x20u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x28u);
        appendKofxiResourceObjectDetail(std::cerr, g_activeLookupRdram, object);
        appendKofxiResourceObjectGlobals(std::cerr, g_activeLookupRdram);
        appendKofxiObjectTaskTableSummary(std::cerr, g_activeLookupRdram);
        appendKofxiObjectPoolSummary(std::cerr, g_activeLookupRdram);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "ptrA0", a0);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "ptrA1", a1);
        appendKofxiPointerFields(std::cerr, g_activeLookupRdram, "ptrV0", v0);
        appendKofxiManagerFields(std::cerr, g_activeLookupRdram, "mgrA0", a0);
        appendKofxiSchedulerGlobals(std::cerr, g_activeLookupRdram);
        appendKofxiDeferredSchedulerTables(std::cerr, g_activeLookupRdram);
        std::cerr << " trace=" << formatDispatchHistory();
        appendKofxiResourceSlotSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, g_activeLookupRdram);
        std::cerr << std::dec << std::endl;
    }

    void traceKofxiCallbackResourcePc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_CALLBACK_RESOURCE_PC") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        switch (lookupAddress)
        {
        case 0x001B8C70u:
        case 0x001B8D00u:
        case 0x001B8D08u:
        case 0x001B8D10u:
        case 0x001B8D14u:
        case 0x001B8D1Cu:
        case 0x001B8D24u:
        case 0x001B8D2Cu:
        case 0x001B8D34u:
        case 0x001B8D40u:
        case 0x001B8D48u:
        case 0x001B8D50u:
        case 0x001B8D68u:
        case 0x001B8D88u:
        case 0x001B8DA0u:
        case 0x001B8DC0u:
        case 0x001B8DE0u:
        case 0x001B8DF8u:
        case 0x001B8E00u:
        case 0x001B8E0Cu:
        case 0x001B8E14u:
        case 0x001B8E1Cu:
        case 0x001B8E24u:
        case 0x001B8E40u:
            break;
        default:
            return;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_CALLBACK_RESOURCE_PC_LIMIT", 512u));
        if (g_kofxiCallbackResourcePcLogCount >= limit)
        {
            return;
        }
        ++g_kofxiCallbackResourcePcLogCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t s2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0));
        const uint32_t s3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0));
        uint32_t slot = isKofxiCallbackResourceSlotAddress(s1)
                            ? s1
                            : (isKofxiCallbackResourceSlotAddress(a0) ? a0 : s1);
        if (!isKofxiCallbackResourceSlotAddress(slot))
        {
            slot = 0u;
        }

        const uint32_t object10 = slot ? readGuestU32Wrapped(g_activeLookupRdram, slot + 0x10u) : 0u;
        const uint32_t object14 = slot ? readGuestU32Wrapped(g_activeLookupRdram, slot + 0x14u) : 0u;
        const uint32_t queue8 = slot ? readGuestU32Wrapped(g_activeLookupRdram, slot + 0x08u) : 0u;
        const uint32_t object = isKofxiCallbackResourceSlotAddress(queue8) ? 0u : queue8;

        std::cerr << "[KOFXI:callback-resource-pc] #" << g_kofxiCallbackResourcePcLogCount
                  << " lookup=0x" << std::hex << lookupAddress
                  << " tid=" << std::dec << g_currentThreadId
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " s0-s3=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3
                  << " stack20=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x20u)
                  << " stack28=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x28u)
                  << " slot=0x" << slot;
        if (slot != 0u)
        {
            std::cerr << " slot0/3=0x" << static_cast<uint32_t>(readGuestU8Wrapped(g_activeLookupRdram, slot))
                      << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(g_activeLookupRdram, slot + 3u))
                      << " slot4/8/c=0x" << readGuestU32Wrapped(g_activeLookupRdram, slot + 4u)
                      << "/0x" << queue8
                      << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, slot + 0xCu)
                      << " obj10/14=0x" << object10 << "/0x" << object14
                      << " buf20/24/2c=0x" << readGuestU32Wrapped(g_activeLookupRdram, slot + 0x20u)
                      << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, slot + 0x24u)
                      << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, slot + 0x2Cu)
                      << " step30/34=0x" << readGuestU32Wrapped(g_activeLookupRdram, slot + 0x30u)
                      << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, slot + 0x34u)
                      << " tail74/94/b0=0x" << readGuestU32Wrapped(g_activeLookupRdram, slot + 0x74u)
                      << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, slot + 0x94u)
                      << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, slot + 0xB0u);
        }
        if (object != 0u)
        {
            std::cerr << " queueObj0/4=0x" << readGuestU32Wrapped(g_activeLookupRdram, object)
                      << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, object + 4u)
                      << " queueObj48/49=0x" << static_cast<uint32_t>(readGuestU8Wrapped(g_activeLookupRdram, object + 0x48u))
                      << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(g_activeLookupRdram, object + 0x49u));
        }
        std::cerr << " trace=" << formatDispatchHistory();
        appendKofxiResourceSlotSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, g_activeLookupRdram);
        std::cerr << std::dec << std::endl;
    }

    uint32_t selectKofxiChildResourceFromContext(const R5900Context *ctx)
    {
        if (!ctx)
        {
            return 0u;
        }

        const uint32_t regs[] = {
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0)),
            static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0)),
        };
        for (uint32_t value : regs)
        {
            if (isKofxiChildResourceAddress(value))
            {
                return value;
            }
        }
        return 0u;
    }

    void traceKofxiChildResourcePc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_CHILD_RESOURCE") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        switch (lookupAddress)
        {
        case 0x001B6E98u:
        case 0x001B6EACu:
        case 0x001B6EB4u:
        case 0x001B6EC8u:
        case 0x001B6EDCu:
        case 0x001B6F18u:
        case 0x001B6F20u:
        case 0x001B6F60u:
        case 0x001B6F7Cu:
        case 0x001B6F80u:
        case 0x001B6F88u:
        case 0x001B74A8u:
        case 0x001B752Cu:
        case 0x001B7554u:
        case 0x001B7570u:
        case 0x001B7588u:
        case 0x001B75A0u:
        case 0x001B75C8u:
        case 0x001B75F4u:
        case 0x001B75FCu:
        case 0x001B7614u:
        case 0x001B7628u:
        case 0x001B7688u:
        case 0x001B7694u:
        case 0x001B76B0u:
        case 0x001B76C4u:
        case 0x001B76E0u:
        case 0x001B7738u:
        case 0x001B7778u:
        case 0x001B77B0u:
        case 0x001B77C4u:
        case 0x001BE778u:
        case 0x001BE7C4u:
        case 0x001BE7D8u:
        case 0x001BE7F0u:
        case 0x001BE874u:
        case 0x001BEBA8u:
        case 0x001BEB40u:
        case 0x001BED74u:
        case 0x001BEE68u:
        case 0x001C97D8u:
            break;
        default:
            return;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_CHILD_RESOURCE_LIMIT", 512u));
        if (g_kofxiChildResourcePcLogCount >= limit)
        {
            return;
        }
        ++g_kofxiChildResourcePcLogCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t s2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0));
        const uint32_t s3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0));
        const uint32_t child = selectKofxiChildResourceFromContext(ctx);

        std::cerr << "[KOFXI:child-resource-pc] #" << g_kofxiChildResourcePcLogCount
                  << " lookup=0x" << std::hex << lookupAddress
                  << " tid=" << std::dec << g_currentThreadId
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " s0-s3=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3
                  << " stack0/8/10/18=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 8u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x10u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x18u);
        appendKofxiChildResourceDetail(std::cerr, g_activeLookupRdram, child);
        std::cerr << " trace=" << formatDispatchHistory();
        appendKofxiChildResourceSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceSlotSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, g_activeLookupRdram);
        std::cerr << std::dec << std::endl;
    }

    void traceKofxiResourceHandlePoolPc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_RESOURCE_HANDLE_POOL_PC") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        switch (lookupAddress)
        {
        case 0x001B0348u:
        case 0x001B0364u:
        case 0x001B0370u:
        case 0x001B0378u:
        case 0x001B0390u:
        case 0x001B03C4u:
        case 0x001B03CCu:
        case 0x001B03E8u:
        case 0x001B03FCu:
        case 0x001B0414u:
        case 0x001AFE40u:
        case 0x001AFE64u:
        case 0x001AFE90u:
        case 0x001AFE98u:
        case 0x001AFEACu:
        case 0x001AFEC8u:
        case 0x001AFEDCu:
        case 0x001AFEE4u:
        case 0x001AFEF0u:
        case 0x001AFF18u:
        case 0x001AFF1Cu:
        case 0x001B04A0u:
        case 0x001B04BCu:
        case 0x001B04C4u:
        case 0x001B04D0u:
        case 0x001B04FCu:
        case 0x001B0518u:
        case 0x001B0524u:
        case 0x001B0538u:
        case 0x001B0548u:
        case 0x001B0570u:
        case 0x001B08C0u:
        case 0x001B0900u:
        case 0x001B0940u:
        case 0x001B0954u:
        case 0x001B0990u:
        case 0x001B09A4u:
        case 0x001B09D4u:
        case 0x001B09E4u:
        case 0x001B09F8u:
        case 0x001B0A14u:
        case 0x001B0A24u:
        case 0x001B0A3Cu:
        case 0x001B0A60u:
        case 0x001B0A84u:
        case 0x001B0A94u:
        case 0x001B0A9Cu:
        case 0x001B0AB8u:
        case 0x001B0AD4u:
        case 0x001B0AE8u:
        case 0x001B0AF8u:
        case 0x001B0B0Cu:
        case 0x001B0B14u:
        case 0x001B0B1Cu:
        case 0x001B0B30u:
        case 0x001B0B78u:
        case 0x001B0B98u:
        case 0x001B0BB8u:
        case 0x001B0BC8u:
        case 0x001B0BD0u:
        case 0x001B0BE4u:
        case 0x001B0D20u:
        case 0x001B0D50u:
        case 0x001B0D5Cu:
        case 0x001B0D60u:
        case 0x001B0D88u:
        case 0x001B0DA0u:
        case 0x001B0DB4u:
        case 0x001B0DC8u:
        case 0x001B1048u:
        case 0x001B105Cu:
        case 0x001B1064u:
        case 0x001B106Cu:
        case 0x001B1080u:
        case 0x001B10A0u:
        case 0x001B10C8u:
        case 0x001B10D0u:
        case 0x001B10E4u:
        case 0x001B10F8u:
        case 0x001B1328u:
        case 0x001B133Cu:
        case 0x001B1344u:
        case 0x001B134Cu:
        case 0x001B1360u:
        case 0x001B0270u:
        case 0x001B02A8u:
        case 0x001B02CCu:
        case 0x001B02FCu:
        case 0x001B0304u:
        case 0x001B0318u:
        case 0x001B0320u:
        case 0x001B0330u:
        case 0x001B1540u:
        case 0x001B158Cu:
        case 0x001B15E0u:
        case 0x001B1618u:
        case 0x001B166Cu:
        case 0x001B169Cu:
        case 0x001B1708u:
        case 0x001B1720u:
        case 0x001B1734u:
        case 0x001B1744u:
        case 0x001B6610u:
        case 0x001B6698u:
        case 0x001B66E0u:
        case 0x001B66ECu:
        case 0x001B67D0u:
        case 0x001B68A8u:
        case 0x001B6908u:
        case 0x001B6930u:
        case 0x001B6940u:
        case 0x001B69D8u:
        case 0x001B6A0Cu:
        case 0x001B6A24u:
        case 0x001B6A48u:
        case 0x001B6A7Cu:
        case 0x001B6A94u:
        case 0x001B6AC0u:
        case 0x001B6AF4u:
        case 0x001B6B0Cu:
        case 0x001B6B30u:
        case 0x001B6B44u:
        case 0x001B6B48u:
        case 0x001B6B50u:
        case 0x001B6B68u:
        case 0x001B6B84u:
        case 0x001B6B98u:
        case 0x001B6BB4u:
        case 0x001B6BD8u:
        case 0x001B6BECu:
        case 0x001B6BF4u:
        case 0x001B6C60u:
        case 0x001B6C74u:
        case 0x001B6C7Cu:
        case 0x001B6C84u:
        case 0x001B6C98u:
        case 0x001B6D08u:
        case 0x001B6D1Cu:
        case 0x001B6D24u:
        case 0x001B6D2Cu:
        case 0x001B6D40u:
        case 0x001B6D50u:
        case 0x001B6D58u:
        case 0x001B6D74u:
        case 0x001B6D88u:
        case 0x001B6D90u:
        case 0x001B6DA4u:
        case 0x001B6DACu:
        case 0x001B6DB4u:
        case 0x001B6DC8u:
        case 0x001B6DDCu:
        case 0x001B6DE4u:
        case 0x001B6DF4u:
        case 0x001B6E50u:
        case 0x001B6E6Cu:
        case 0x001B6E74u:
        case 0x001B6E7Cu:
        case 0x001B6EC8u:
        case 0x001B6EDCu:
        case 0x001B6F18u:
        case 0x001B6F20u:
        case 0x001B6F30u:
        case 0x001B6F60u:
        case 0x001B7010u:
        case 0x001B7080u:
        case 0x001B74A8u:
        case 0x001B75ECu:
        case 0x001B75F4u:
        case 0x001B760Cu:
        case 0x001B7614u:
        case 0x001B7620u:
        case 0x001B7628u:
        case 0x001B7678u:
        case 0x001B7688u:
        case 0x001B768Cu:
        case 0x001B7694u:
        case 0x001B76CCu:
        case 0x001B7730u:
        case 0x001B7DD0u:
        case 0x001B7E10u:
        case 0x001B7ED0u:
        case 0x001B7F20u:
        case 0x001BEB40u:
        case 0x001BEB78u:
        case 0x001BEB80u:
        case 0x001BEB94u:
        case 0x001BEBA8u:
        case 0x001BEBE0u:
        case 0x001BEBE8u:
        case 0x001BEBFCu:
        case 0x001BEE00u:
        case 0x001BEE38u:
        case 0x001BEE40u:
        case 0x001BEE50u:
        case 0x001BEE68u:
        case 0x001BE918u:
        case 0x001BF420u:
        case 0x001BF480u:
        case 0x001BF48Cu:
        case 0x001BF494u:
        case 0x001BF4ACu:
        case 0x001BF4C8u:
        case 0x001BFF38u:
        case 0x001BFF7Cu:
        case 0x001C0140u:
            break;
        default:
            return;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_RESOURCE_HANDLE_POOL_PC_LIMIT", 512u));
        if (g_kofxiResourceHandlePoolPcLogCount >= limit)
        {
            return;
        }
        ++g_kofxiResourceHandlePoolPcLogCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t s2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0));
        const uint32_t s3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0));

        std::cerr << "[KOFXI:resource-handle-pool-pc] #" << g_kofxiResourceHandlePoolPcLogCount
                  << " lookup=0x" << std::hex << lookupAddress
                  << " tid=" << std::dec << g_currentThreadId
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " s0-s3=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3
                  << " stack0/8/10/18=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 8u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x10u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x18u);
        appendKofxiResourceHandleDetail(std::cerr, g_activeLookupRdram, "a0", a0);
        appendKofxiResourceHandleDetail(std::cerr, g_activeLookupRdram, "s0", s0);
        appendKofxiResourceHandleDetail(std::cerr, g_activeLookupRdram, "s2", s2);
        appendKofxiResourceObjectDetail(std::cerr, g_activeLookupRdram, "a0", a0);
        appendKofxiResourceObjectDetail(std::cerr, g_activeLookupRdram, "s0", s0);
        appendKofxiResourceObjectDetail(std::cerr, g_activeLookupRdram, "s1", s1);
        appendKofxiResourceObjectDetail(std::cerr, g_activeLookupRdram, "s2", s2);
        appendKofxiResourceHandlePoolSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceSlotSummary(std::cerr, g_activeLookupRdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, g_activeLookupRdram);
        std::cerr << " trace=" << formatDispatchHistory() << std::dec << std::endl;
    }

    std::string readGuestCStringWrapped(const uint8_t *rdram, uint32_t addr, size_t maxLength);

    bool isKofxiAdxStreamLookup(uint32_t lookupAddress)
    {
        switch (lookupAddress)
        {
        case 0x001BE3A8u:
        case 0x001BE3D4u:
        case 0x001BE3FCu:
        case 0x001BE6D0u:
        case 0x001BE704u:
        case 0x001BE724u:
        case 0x001BE740u:
        case 0x001BE758u:
        case 0x001BE778u:
        case 0x001BE7C4u:
        case 0x001BE7E0u:
        case 0x001BE804u:
        case 0x001BE820u:
        case 0x001BE838u:
        case 0x001BE858u:
        case 0x001BE880u:
        case 0x001BE918u:
        case 0x001BE958u:
        case 0x001BE9B0u:
        case 0x001BE9C0u:
        case 0x001BEA00u:
        case 0x001BEA48u:
        case 0x001C28F0u:
        case 0x001C2914u:
        case 0x001C2968u:
        case 0x001C2B40u:
        case 0x001C2B78u:
        case 0x001C2B98u:
        case 0x001C2BE8u:
        case 0x001C2C1Cu:
        case 0x001C2C54u:
        case 0x001C2C70u:
        case 0x001C2C88u:
        case 0x001C2C98u:
        case 0x001C2CF0u:
        case 0x001C2D10u:
        case 0x001C2D68u:
        case 0x001C2E00u:
        case 0x001C2F28u:
        case 0x001C2F98u:
        case 0x001C2FE0u:
        case 0x001C33C0u:
        case 0x001C3C30u:
        case 0x001C7388u:
        case 0x001C73F8u:
        case 0x001C7440u:
        case 0x001C7474u:
        case 0x001C7480u:
        case 0x001C7498u:
        case 0x001C74E0u:
        case 0x001C75A0u:
        case 0x001C7634u:
        case 0x001C7740u:
        case 0x001B4848u:
        case 0x001C1330u:
        case 0x0011B970u:
        case 0x00129F70u:
            return true;
        default:
            return false;
        }
    }

    void appendKofxiAdxStreamSlots(std::ostream &out, const uint8_t *rdram)
    {
        constexpr uint32_t kStreamSlotBase = 0x01BF5450u;
        constexpr uint32_t kStreamSlotStride = 8u;
        constexpr uint32_t kStreamSlotCount = 40u;

        uint32_t activeCount = 0u;
        out << " streamSlots=";
        for (uint32_t index = 0u; index < kStreamSlotCount; ++index)
        {
            const uint32_t slot = kStreamSlotBase + index * kStreamSlotStride;
            const uint32_t descriptor = readGuestU32Wrapped(rdram, slot);
            const uint32_t cookie = readGuestU32Wrapped(rdram, slot + 4u);
            if (descriptor == 0u && cookie == 0u)
            {
                continue;
            }

            if (activeCount != 0u)
            {
                out << ",";
            }
            out << std::hex << index
                << ":desc=0x" << descriptor
                << "/cookie=0x" << cookie
                << "/open=0x" << (descriptor ? readGuestU32Wrapped(rdram, descriptor + 0x10u) : 0u);
            ++activeCount;
            if (activeCount >= 8u)
            {
                out << ",...";
                break;
            }
        }

        if (activeCount == 0u)
        {
            out << "none";
        }
    }

    void appendKofxiAdxDeviceState(std::ostream &out, const uint8_t *rdram)
    {
        constexpr uint32_t kDeviceNameBase = 0x01BF5594u;
        constexpr uint32_t kDeviceStride = 0x10u;
        constexpr uint32_t kCdvStateBase = 0x0037DCB8u;
        constexpr uint32_t kMfsStateBase = 0x003838E0u;
        constexpr uint32_t kCdvHandleBase = 0x0037DD20u;
        constexpr uint32_t kCdvHandleStride = 0x48u;
        constexpr uint32_t kCdvHandleCount = 8u;

        out << " devices=";
        for (uint32_t index = 0u; index < 2u; ++index)
        {
            const uint32_t nameAddr = kDeviceNameBase + index * kDeviceStride;
            const uint32_t descriptor = readGuestU32Wrapped(rdram, nameAddr - 4u);
            if (index != 0u)
            {
                out << ",";
            }
            out << index << ":'" << readGuestCStringWrapped(rdram, nameAddr, kDeviceStride)
                << "' desc=0x" << std::hex << descriptor
                << " open=0x" << (descriptor ? readGuestU32Wrapped(rdram, descriptor + 0x10u) : 0u);
        }

        out << " cdvState=0x"
            << static_cast<uint32_t>(readGuestU8Wrapped(rdram, kCdvStateBase))
            << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, kCdvStateBase + 1u))
            << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, kCdvStateBase + 2u))
            << " cdvWords=0x" << readGuestU32Wrapped(rdram, kCdvStateBase + 4u)
            << "/0x" << readGuestU32Wrapped(rdram, kCdvStateBase + 8u)
            << "/0x" << readGuestU32Wrapped(rdram, kCdvStateBase + 0x24u)
            << " mfsState=0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, kMfsStateBase))
            << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, kMfsStateBase + 1u))
            << "/0x" << static_cast<uint32_t>(readGuestU8Wrapped(rdram, kMfsStateBase + 2u))
            << " mfsWords=0x" << readGuestU32Wrapped(rdram, kMfsStateBase + 4u)
            << "/0x" << readGuestU32Wrapped(rdram, kMfsStateBase + 8u)
            << "/0x" << readGuestU32Wrapped(rdram, kMfsStateBase + 0x24u);

        uint32_t activeHandles = 0u;
        out << " cdvHandles=";
        for (uint32_t index = 0u; index < kCdvHandleCount; ++index)
        {
            const uint32_t handle = kCdvHandleBase + index * kCdvHandleStride;
            const uint32_t state0 = readGuestU8Wrapped(rdram, handle);
            const uint32_t state1 = readGuestU8Wrapped(rdram, handle + 1u);
            const uint32_t field4 = readGuestU32Wrapped(rdram, handle + 4u);
            const uint32_t field24 = readGuestU32Wrapped(rdram, handle + 0x24u);
            if (state0 == 0u && state1 == 0u && field4 == 0u && field24 == 0u)
            {
                continue;
            }

            if (activeHandles != 0u)
            {
                out << ",";
            }
            out << std::hex << index
                << ":st=0x" << static_cast<uint32_t>(state0) << "/" << static_cast<uint32_t>(state1)
                << " f4/8/c/24=0x" << field4
                << "/0x" << readGuestU32Wrapped(rdram, handle + 8u)
                << "/0x" << readGuestU32Wrapped(rdram, handle + 0x0Cu)
                << "/0x" << field24;
            ++activeHandles;
            if (activeHandles >= 6u)
            {
                out << ",...";
                break;
            }
        }
        if (activeHandles == 0u)
        {
            out << "none";
        }
    }

    void traceKofxiAdxStreamPc(uint32_t lookupAddress)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_ADXSTM_PC") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext ||
            !isKofxiAdxStreamLookup(lookupAddress))
        {
            return;
        }

        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_ADXSTM_PC_LIMIT", 512u));
        if (g_kofxiAdxStreamPcLogCount >= limit)
        {
            return;
        }
        ++g_kofxiAdxStreamPcLogCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
        const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
        const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));
        const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
        const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
        const uint32_t a2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0));
        const uint32_t a3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0));
        const uint32_t t0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[8], 0));
        const uint32_t s0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[16], 0));
        const uint32_t s1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[17], 0));
        const uint32_t s2 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[18], 0));
        const uint32_t s3 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[19], 0));
        const uint32_t s4 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[20], 0));

        std::cerr << "[KOFXI:adxstm-pc] #" << g_kofxiAdxStreamPcLogCount
                  << " lookup=0x" << std::hex << lookupAddress
                  << " tid=" << std::dec << g_currentThreadId
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " a0-a3=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " t0=0x" << t0
                  << " s0-s4=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3 << "/0x" << s4
                  << " stack0/8/10/18/20/28=0x" << readGuestU32Wrapped(g_activeLookupRdram, sp)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 8u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x10u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x18u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x20u)
                  << "/0x" << readGuestU32Wrapped(g_activeLookupRdram, sp + 0x28u)
                  << " strA0='" << readGuestCStringWrapped(g_activeLookupRdram, a0, 96u) << "'"
                  << " strA1='" << readGuestCStringWrapped(g_activeLookupRdram, a1, 96u) << "'"
                  << " strS0='" << readGuestCStringWrapped(g_activeLookupRdram, s0, 96u) << "'"
                  << " strS1='" << readGuestCStringWrapped(g_activeLookupRdram, s1, 96u) << "'"
                  << " strS2='" << readGuestCStringWrapped(g_activeLookupRdram, s2, 192u) << "'"
                  << " spDev='" << readGuestCStringWrapped(g_activeLookupRdram, sp, 96u) << "'"
                  << " spPath='" << readGuestCStringWrapped(g_activeLookupRdram, sp + 0x130u, 192u) << "'";
        appendKofxiAdxStreamSlots(std::cerr, g_activeLookupRdram);
        appendKofxiAdxDeviceState(std::cerr, g_activeLookupRdram);
        appendKofxiResourceHandlePoolSummary(std::cerr, g_activeLookupRdram);
        std::cerr << " trace=" << formatDispatchHistory() << std::dec << std::endl;
    }

    uint64_t readGuestU64Wrapped(const uint8_t *rdram, uint32_t addr)
    {
        const uint64_t lo = readGuestU32Wrapped(rdram, addr);
        const uint64_t hi = readGuestU32Wrapped(rdram, addr + 4u);
        return lo | (hi << 32);
    }

    std::string readGuestCStringWrapped(const uint8_t *rdram, uint32_t addr, size_t maxLength)
    {
        std::string out;
        if (!rdram || addr == 0u)
        {
            return out;
        }

        out.reserve(std::min<size_t>(maxLength, 64u));
        for (size_t i = 0; i < maxLength; ++i)
        {
            const uint8_t value = readGuestU8Wrapped(rdram, addr + static_cast<uint32_t>(i));
            if (value == 0u)
            {
                break;
            }

            const auto ch = static_cast<unsigned char>(value);
            out.push_back(std::isprint(ch) ? static_cast<char>(ch) : '.');
        }
        return out;
    }

    std::string formatGuestStackWindow(const uint8_t *rdram, uint32_t sp, int32_t firstOffset, int32_t lastOffset)
    {
        if (!rdram)
        {
            return {};
        }

        std::ostringstream stackDump;
        stackDump << " [stack-window]";
        for (int32_t off = firstOffset; off <= lastOffset; off += 4)
        {
            const uint32_t slot = readGuestU32Wrapped(rdram, sp + static_cast<uint32_t>(off));
            if (off < 0)
            {
                stackDump << " -" << std::hex << static_cast<uint32_t>(-off) << "=0x" << slot;
            }
            else
            {
                stackDump << " +" << std::hex << static_cast<uint32_t>(off) << "=0x" << slot;
            }
        }
        return stackDump.str();
    }

    void traceKofxiResourceLookup(uint32_t address)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_RESOURCE_RA"))
        {
            return;
        }

        switch (address)
        {
        case 0x0014C4CCu:
        case 0x001AEF20u:
        case 0x001AEF88u:
        case 0x001AF2F0u:
        case 0x001AF330u:
        case 0x001AF5A8u:
        case 0x001AF77Cu:
        case 0x001AF940u:
        case 0x001AF978u:
        case 0x001AF9C8u:
            break;
        default:
            return;
        }

        static thread_local uint32_t s_traceCount = 0u;
        if (s_traceCount >= 256u)
        {
            return;
        }
        ++s_traceCount;

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0)) : 0u;
        const uint32_t sp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0)) : 0u;
        const uint32_t v0 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0)) : 0u;
        const uint32_t a0 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0)) : 0u;

        std::cerr << "[kofxi:resource-ra] lookup=0x" << std::hex << address
                  << " ctxPc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0=0x" << v0
                  << " a0=0x" << a0
                  << formatGuestStackWindow(g_activeLookupRdram, sp, -0x40, 0x40)
                  << std::dec << std::endl;
    }

    void traceKofxiBadReturn(uint32_t address)
    {
        if (!isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_BAD_RETURN") ||
            !g_activeLookupRdram ||
            !g_activeLookupContext)
        {
            return;
        }

        const R5900Context *ctx = g_activeLookupContext;
        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0)) : 0u;
        const uint32_t sp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0)) : 0u;
        const uint32_t gp = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0)) : 0u;
        const uint32_t v0 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0)) : 0u;
        const uint32_t v1 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0)) : 0u;
        const uint32_t a0 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0)) : 0u;
        const uint32_t a1 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0)) : 0u;
        const uint32_t a2 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[6], 0)) : 0u;
        const uint32_t a3 = ctx ? static_cast<uint32_t>(_mm_extract_epi32(ctx->r[7], 0)) : 0u;

        auto stackWord = [&](int32_t offset) -> uint32_t {
            return readGuestU32Wrapped(g_activeLookupRdram, sp + static_cast<uint32_t>(offset));
        };

        constexpr uint32_t kKofxiBadReturnArg = 0x0000012Cu;
        constexpr uint32_t kKofxiBadReturnCaller = 0x001A1818u;
        constexpr uint32_t kKofxiBadReturnCallSite = 0x001A1810u;
        constexpr uint32_t kNoFrameOffset = 0xFFFFFFFFu;

        uint32_t frameOffset = kNoFrameOffset;
        for (uint32_t offset = 0u; offset <= 0x420u; offset += 0x10u)
        {
            const uint32_t frameS0 = stackWord(static_cast<int32_t>(offset));
            const uint32_t frameRa = stackWord(static_cast<int32_t>(offset + 0x20u));
            const uint32_t frameArg = stackWord(static_cast<int32_t>(offset + 0x40u));
            if (frameArg == kKofxiBadReturnArg &&
                (frameRa == kKofxiBadReturnCaller ||
                 frameRa == kKofxiBadReturnArg ||
                 frameS0 == kKofxiBadReturnCaller ||
                 frameS0 == kKofxiBadReturnCallSite))
            {
                frameOffset = offset;
                break;
            }
        }

        const bool hasFrame = frameOffset != kNoFrameOffset;
        const uint32_t frameBase = hasFrame ? (sp + frameOffset) : 0u;
        const uint32_t frameS0 = hasFrame ? stackWord(static_cast<int32_t>(frameOffset)) : 0u;
        const uint32_t frameSavedRa = hasFrame ? stackWord(static_cast<int32_t>(frameOffset + 0x20u)) : 0u;
        const uint32_t frameArg30 = hasFrame ? stackWord(static_cast<int32_t>(frameOffset + 0x30u)) : 0u;
        const uint32_t frameArg34 = hasFrame ? stackWord(static_cast<int32_t>(frameOffset + 0x34u)) : 0u;
        const uint32_t frameArg38 = hasFrame ? stackWord(static_cast<int32_t>(frameOffset + 0x38u)) : 0u;
        const uint32_t frameArg3C = hasFrame ? stackWord(static_cast<int32_t>(frameOffset + 0x3Cu)) : 0u;
        const uint32_t frameArg40 = hasFrame ? stackWord(static_cast<int32_t>(frameOffset + 0x40u)) : 0u;

        bool isInitTailAddress = false;
        switch (address)
        {
        case 0x0000012Cu:
        case 0x0014C2E0u:
        case 0x0014C3B8u:
        case 0x0014C3C0u:
        case 0x0014C3CCu:
        case 0x0014C3D4u:
        case 0x0014C3E4u:
        case 0x0014C3ECu:
        case 0x0014C3F8u:
        case 0x0014C400u:
        case 0x0014C638u:
        case 0x0014C648u:
        case 0x0014C658u:
        case 0x0014C66Cu:
        case 0x0014C680u:
        case 0x0014C694u:
        case 0x0014C6A8u:
        case 0x0014C6C0u:
        case 0x0014C6C4u:
        case 0x0014C6C8u:
        case 0x0014C6CCu:
        case 0x001A1810u:
        case 0x001A1818u:
            isInitTailAddress = true;
            break;
        default:
            break;
        }

        bool isNestedResourceCall = false;
        switch (address)
        {
        case 0x0010CC60u:
        case 0x0010CC70u:
        case 0x0010CCA0u:
        case 0x0010D020u:
        case 0x0010FFF8u:
        case 0x00110130u:
        case 0x001102F8u:
        case 0x00110570u:
        case 0x00110D30u:
        case 0x00116EA0u:
        case 0x00116EF0u:
        case 0x00119288u:
        case 0x001192F0u:
        case 0x00119470u:
        case 0x00119508u:
        case 0x001195BCu:
        case 0x00119610u:
        case 0x0011963Cu:
        case 0x00119658u:
        case 0x00119660u:
        case 0x001196F4u:
        case 0x00119724u:
        case 0x00119750u:
        case 0x0011975Cu:
        case 0x00119850u:
        case 0x00119858u:
        case 0x0014C160u:
        case 0x001B4CD8u:
        case 0x001B9F98u:
        case 0x001BA058u:
        case 0x001CA338u:
        case 0x001CA388u:
            isNestedResourceCall = true;
            break;
        default:
            break;
        }

        const bool isPostWaitRpcCall =
            address == 0x00119288u &&
            a0 == 1u &&
            a1 == 0x8010u &&
            a3 == 0x3FFFu &&
            (a2 == 0x0980u || a2 == 0x0A80u || a2 == 0x0981u || a2 == 0x0A81u);
        const bool broadTrace = isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_BAD_RETURN_BROAD");
        const bool shouldTrace =
            broadTrace ||
            address == kKofxiBadReturnArg ||
            isInitTailAddress ||
            isPostWaitRpcCall ||
            (hasFrame && isNestedResourceCall);
        if (!shouldTrace)
        {
            return;
        }

        static thread_local uint32_t s_traceCount = 0u;
        const uint32_t limit = std::max<uint32_t>(
            1u, parseRuntimeEnvU32("PS2X_TRACE_KOFXI_BAD_RETURN_LIMIT", 1024u));
        if (s_traceCount >= limit)
        {
            return;
        }
        const uint32_t index = s_traceCount++;

        std::cerr << "[kofxi:bad-return] #" << std::dec << index
                  << " lookup=0x" << std::hex << address
                  << " ctxPc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " gp=0x" << gp
                  << " v0=0x" << v0
                  << " v1=0x" << v1
                  << " a0=0x" << a0
                  << " a1=0x" << a1
                  << " a2=0x" << a2
                  << " a3=0x" << a3
                  << " frameOff=0x" << (hasFrame ? frameOffset : 0u)
                  << " frameBase=0x" << frameBase
                  << " frameS0=0x" << frameS0
                  << " frameRA=0x" << frameSavedRa
                  << " frameArgs=0x" << frameArg30
                  << "/0x" << frameArg34
                  << "/0x" << frameArg38
                  << "/0x" << frameArg3C
                  << "/0x" << frameArg40
                  << " hasFrame=" << (hasFrame ? 1u : 0u)
                  << " postWaitRpc=" << (isPostWaitRpcCall ? 1u : 0u)
                  << " sp-30=0x" << stackWord(-0x30)
                  << " sp-10=0x" << stackWord(-0x10)
                  << " sp+0=0x" << stackWord(0)
                  << " sp+20=0x" << stackWord(0x20)
                  << " sp+30=0x" << stackWord(0x30)
                  << " sp+34=0x" << stackWord(0x34)
                  << " sp+38=0x" << stackWord(0x38)
                  << " sp+3c=0x" << stackWord(0x3C)
                  << " sp+40=0x" << stackWord(0x40)
                  << " sp+120=0x" << stackWord(0x120)
                  << " sp+140=0x" << stackWord(0x140)
                  << " sp+1e0=0x" << stackWord(0x1E0)
                  << " sp+200=0x" << stackWord(0x200)
                  << " trace=" << formatDispatchHistory();
        if (address == 0x0000012Cu || isRuntimeEnvEnabled("PS2X_TRACE_KOFXI_BAD_RETURN_STACK"))
        {
            std::cerr << formatGuestStackWindow(g_activeLookupRdram, sp, -0x80, 0x60);
        }
        std::cerr << std::dec << std::endl;
    }

    uint32_t selectKofxiInitResourceReturnRecoveryPc(const uint8_t *rdram, const R5900Context *ctx, const PS2Runtime *runtime)
    {
        if (!rdram || !ctx || !runtime)
        {
            return 0u;
        }

        constexpr uint32_t kBadReturnArg = 0x0000012Cu;
        constexpr uint32_t kInitResourceEntry = 0x0014C2E0u;
        constexpr uint32_t kInitResourceResume = 0x001A1818u;

        const uint32_t pc = ctx->pc;
        const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
        if (pc != kBadReturnArg || ra != kBadReturnArg ||
            !runtime->hasFunction(kInitResourceEntry) ||
            !runtime->hasFunction(kInitResourceResume))
        {
            return 0u;
        }

        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        if (sp >= PS2_RAM_SIZE)
        {
            return 0u;
        }

        for (int32_t offset = -0x100; offset <= 0x420; offset += 0x10)
        {
            const uint32_t frameBase = sp + static_cast<uint32_t>(offset);
            if (frameBase >= PS2_RAM_SIZE || frameBase + 0x44u > PS2_RAM_SIZE)
            {
                continue;
            }

            const uint32_t savedRa = readGuestU32Wrapped(rdram, frameBase + 0x20u);
            const uint32_t resourceArg = readGuestU32Wrapped(rdram, frameBase + 0x40u);
            if (savedRa != kInitResourceResume || resourceArg != kBadReturnArg)
            {
                continue;
            }

            static std::atomic<uint32_t> s_logCount{0u};
            const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
            if (index < 32u)
            {
                std::cerr << "[KOFXI:init-resource-return] #" << std::dec << index
                          << " recovered-low-return"
                          << " bad=0x" << std::hex << pc
                          << " ra=0x" << ra
                          << " sp=0x" << sp
                          << " frameBase=0x" << frameBase
                          << " savedRa=0x" << savedRa
                          << " arg=0x" << resourceArg
                          << " resume=0x" << kInitResourceResume
                          << std::dec << std::endl;
            }

            return kInitResourceResume;
        }

        return 0u;
    }

    uint32_t selectStackRecoveryPc(const uint8_t *rdram, const R5900Context *ctx, const PS2Runtime *runtime)
    {
        if (!rdram || !ctx || !runtime)
        {
            return 0u;
        }

        const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
        constexpr uint32_t kScanBytes = 0x200u;

        for (uint32_t offset = 0u; offset < kScanBytes; offset += 8u)
        {
            const uint32_t slotAddr = sp + offset;
            const uint32_t ra32 = static_cast<uint32_t>(readGuestU64Wrapped(rdram, slotAddr));
            if (ra32 < 0x00100000u)
            {
                continue;
            }
            if (!runtime->hasFunction(ra32))
            {
                continue;
            }
            return ra32;
        }

        for (uint32_t offset = 0u; offset < kScanBytes; offset += 4u)
        {
            const uint32_t slotAddr = sp + offset;
            const uint32_t ra32 = readGuestU32Wrapped(rdram, slotAddr);
            if (ra32 < 0x00100000u)
            {
                continue;
            }
            if (!runtime->hasFunction(ra32))
            {
                continue;
            }
            return ra32;
        }

        return 0u;
    }

    std::string readGuestPrintableString(const uint8_t *rdram, uint32_t addr, size_t maxLen)
    {
        std::string out;
        if (!rdram || maxLen == 0)
        {
            return out;
        }

        out.reserve(std::min<size_t>(maxLen, 64));
        for (size_t i = 0; i < maxLen; ++i)
        {
            const char ch = static_cast<char>(rdram[(addr + static_cast<uint32_t>(i)) & PS2_RAM_MASK]);
            if (ch == '\0')
            {
                break;
            }
            if (ch >= 0x20 && ch < 0x7F)
            {
                out.push_back(ch);
            }
            else
            {
                out.push_back('.');
            }
        }
        return out;
    }
}

PS2Runtime::GuestExecutionScope::GuestExecutionScope(PS2Runtime *runtime) noexcept
    : m_runtime(runtime)
{
    if (m_runtime)
    {
        m_runtime->enterGuestExecution();
    }
}

PS2Runtime::GuestExecutionScope::~GuestExecutionScope()
{
    if (m_runtime)
    {
        m_runtime->leaveGuestExecution();
    }
}

PS2Runtime::GuestExecutionReleaseScope::GuestExecutionReleaseScope(PS2Runtime *runtime) noexcept
    : m_runtime(runtime)
{
    if (m_runtime)
    {
        m_depth = m_runtime->releaseGuestExecution();
    }
}

PS2Runtime::GuestExecutionReleaseScope::~GuestExecutionReleaseScope()
{
    if (m_runtime && m_depth != 0u)
    {
        m_runtime->reacquireGuestExecution(m_depth);
    }
}

static void UploadFrame(Texture2D &tex, PS2Runtime *rt, uint32_t &outWidth, uint32_t &outHeight)
{
    static uint64_t s_lastPresentationTick = std::numeric_limits<uint64_t>::max();
    static bool s_hasLatchedInitialFrame = false;
    static uint32_t s_lastDisplayFbp = std::numeric_limits<uint32_t>::max();
    static uint32_t s_lastSourceFbp = std::numeric_limits<uint32_t>::max();
    static bool s_lastPreferred = false;
    static uint32_t s_lastWidth = 0u;
    static uint32_t s_lastHeight = 0u;
    static bool s_hasUploadedFrame = false;
    static std::vector<uint8_t> s_scratch;
    static std::vector<uint8_t> s_uploadBuffer(DEFAULT_FB_SIZE, 0u);

    const uint64_t currentTick = ps2_syscalls::GetCurrentVSyncTick();
    ps2_stubs::pumpSifPadScriptInput(rt ? rt->memory().getRDRAM() : nullptr);
    bool latchedThisCall = false;
    if (!s_hasLatchedInitialFrame)
    {
        rt->gs().latchHostPresentationFrame();
        s_lastPresentationTick = currentTick;
        s_hasLatchedInitialFrame = true;
        latchedThisCall = true;
    }
    else if (currentTick != s_lastPresentationTick && rt->gs().tryLatchHostPresentationFrame())
    {
        s_lastPresentationTick = currentTick;
        latchedThisCall = true;
    }

    if (!latchedThisCall && s_hasUploadedFrame)
    {
        outWidth = (s_lastWidth != 0u) ? s_lastWidth : FB_WIDTH;
        outHeight = (s_lastHeight != 0u) ? s_lastHeight : DEFAULT_DISPLAY_HEIGHT;
        return;
    }

    s_scratch.clear();
    uint32_t width = 0u;
    uint32_t height = 0u;
    uint32_t displayFbp = 0u;
    uint32_t sourceFbp = 0u;
    bool usedPreferredDisplaySource = false;
    if (!rt->gs().copyLatchedHostPresentationFrame(s_scratch,
                                                   width,
                                                   height,
                                                   &displayFbp,
                                                   &sourceFbp,
                                                   &usedPreferredDisplaySource))
    {
        if (isRuntimeEnvEnabled("PS2X_TRACE_FRAME"))
        {
            static uint32_t s_missingFrameTraceCount = 0u;
            if (s_missingFrameTraceCount < 16u || (s_missingFrameTraceCount & 0x3fu) == 0u)
            {
                std::cout << "[frame:trace] idx=" << s_missingFrameTraceCount
                          << " tick=" << currentTick
                          << " no-latched-frame"
                          << std::endl;
            }
            ++s_missingFrameTraceCount;
        }

        Image blank = GenImageColor(FB_WIDTH, FB_HEIGHT, MAGENTA);
        UpdateTexture(tex, blank.data);
        UnloadImage(blank);
        outWidth = FB_WIDTH;
        outHeight = DEFAULT_DISPLAY_HEIGHT;
        s_lastWidth = outWidth;
        s_lastHeight = outHeight;
        s_hasUploadedFrame = true;
        return;
    }

    PS2_IF_AGRESSIVE_LOGS({
        static uint32_t s_uploadDebugCount = 0u;
        if (s_uploadDebugCount < 128u ||
            displayFbp != s_lastDisplayFbp ||
            sourceFbp != s_lastSourceFbp ||
            usedPreferredDisplaySource != s_lastPreferred ||
            width != s_lastWidth ||
            height != s_lastHeight)
        {
            std::cout << "[frame:upload] idx=" << s_uploadDebugCount
                      << " tick=" << currentTick
                      << " displayFbp=" << displayFbp
                      << " sourceFbp=" << sourceFbp
                      << " size=" << width << "x" << height
                      << " preferred=" << static_cast<uint32_t>(usedPreferredDisplaySource ? 1u : 0u)
                      << std::endl;
        }
        ++s_uploadDebugCount;
    });

    if (isRuntimeEnvEnabled("PS2X_TRACE_FRAME"))
    {
        static uint32_t s_frameTraceCount = 0u;
        const bool changed =
            displayFbp != s_lastDisplayFbp ||
            sourceFbp != s_lastSourceFbp ||
            usedPreferredDisplaySource != s_lastPreferred ||
            width != s_lastWidth ||
            height != s_lastHeight;

        if (s_frameTraceCount < 96u || changed || (s_frameTraceCount & 0x3fu) == 0u)
        {
            uint32_t sampledNonZero = 0u;
            uint32_t sampledNonBlackRgb = 0u;
            const HostFrameRgbBounds rgbBounds = measureHostFrameRgbBounds(s_scratch, width, height);
            const GSRegisters &gsRegs = rt->memory().gs();
            const RuntimeDispFbFields dispfb1 = decodeRuntimeDispFb(gsRegs.dispfb1);
            const RuntimeDispFbFields dispfb2 = decodeRuntimeDispFb(gsRegs.dispfb2);
            const RuntimeDisplayFields display1 = decodeRuntimeDisplay(gsRegs.display1);
            const RuntimeDisplayFields display2 = decodeRuntimeDisplay(gsRegs.display2);
            constexpr size_t kSampleStrideBytes = 257u * 4u;
            for (size_t offset = 0u; offset + 4u <= s_scratch.size(); offset += kSampleStrideBytes)
            {
                uint32_t pixel = 0u;
                std::memcpy(&pixel, s_scratch.data() + offset, sizeof(pixel));
                if (pixel != 0u)
                {
                    ++sampledNonZero;
                }
                if ((pixel & 0x00FFFFFFu) != 0u)
                {
                    ++sampledNonBlackRgb;
                }
            }

            std::cout << "[frame:trace] idx=" << s_frameTraceCount
                      << " tick=" << currentTick
                      << " displayFbp=" << displayFbp
                      << " sourceFbp=" << sourceFbp
                      << " size=" << width << "x" << height
                      << " preferred=" << static_cast<uint32_t>(usedPreferredDisplaySource ? 1u : 0u)
                      << " sampledNonZero=" << sampledNonZero
                      << " sampledRgb=" << sampledNonBlackRgb
                      << " rgbCount=" << rgbBounds.rgbCount;
            if (rgbBounds.rgbCount != 0u)
            {
                std::cout << " rgbBounds=(" << rgbBounds.minX << "," << rgbBounds.minY
                          << ")-(" << rgbBounds.maxX << "," << rgbBounds.maxY << ")";
            }
            std::cout << " pmode=0x" << std::hex << gsRegs.pmode
                      << " smode2=0x" << gsRegs.smode2
                      << " dispfb1=0x" << gsRegs.dispfb1
                      << " display1=0x" << gsRegs.display1
                      << " dispfb2=0x" << gsRegs.dispfb2
                      << " display2=0x" << gsRegs.display2
                      << std::dec
                      << " df1=(" << dispfb1.fbp << "," << dispfb1.fbw
                      << ",0x" << std::hex << dispfb1.psm << std::dec
                      << "," << dispfb1.dbx << "," << dispfb1.dby << ")"
                      << " d1=(" << display1.dx << "," << display1.dy
                      << "," << display1.magh << "," << display1.magv
                      << "," << display1.dw << "," << display1.dh
                      << "->" << display1.width << "x" << display1.height << ")"
                      << " df2=(" << dispfb2.fbp << "," << dispfb2.fbw
                      << ",0x" << std::hex << dispfb2.psm << std::dec
                      << "," << dispfb2.dbx << "," << dispfb2.dby << ")"
                      << " d2=(" << display2.dx << "," << display2.dy
                      << "," << display2.magh << "," << display2.magv
                      << "," << display2.dw << "," << display2.dh
                      << "->" << display2.width << "x" << display2.height << ")";

            for (const auto &probe : kGhostProbePoints)
            {
                if (probe.x >= width || probe.y >= height)
                {
                    continue;
                }

                const uint32_t pixel = sampleHostFramePixel(s_scratch, width, height, probe.x, probe.y);
                std::cout << " host[" << probe.x << "," << probe.y << "]=0x"
                          << std::hex << pixel << std::dec;
            }
            std::cout << std::endl;
        }
        ++s_frameTraceCount;
    }

    s_lastDisplayFbp = displayFbp;
    s_lastSourceFbp = sourceFbp;
    s_lastPreferred = usedPreferredDisplaySource;
    s_lastWidth = width;
    s_lastHeight = height;

    maybeSaveRuntimeScreenshot(s_scratch, width, height, currentTick, displayFbp, sourceFbp);

    std::fill(s_uploadBuffer.begin(), s_uploadBuffer.end(), 0u);
    if (!s_scratch.empty() && width != 0u && height != 0u)
    {
        const uint32_t copyWidth = std::min<uint32_t>(width, FB_WIDTH);
        const uint32_t copyHeight = std::min<uint32_t>(height, FB_HEIGHT);
        const size_t srcRowBytes = static_cast<size_t>(width) * 4u;
        const size_t dstRowBytes = static_cast<size_t>(FB_WIDTH) * 4u;
        const size_t copyRowBytes = static_cast<size_t>(copyWidth) * 4u;
        for (uint32_t y = 0; y < copyHeight; ++y)
        {
            const size_t srcOffset = static_cast<size_t>(y) * srcRowBytes;
            const size_t dstOffset = static_cast<size_t>(y) * dstRowBytes;
            if (srcOffset + copyRowBytes > s_scratch.size() ||
                dstOffset + copyRowBytes > s_uploadBuffer.size())
            {
                break;
            }
            std::memcpy(s_uploadBuffer.data() + dstOffset, s_scratch.data() + srcOffset, copyRowBytes);
        }
    }

    UpdateTexture(tex, s_uploadBuffer.data());
    outWidth = width;
    outHeight = height;
    s_hasUploadedFrame = true;
}

PS2Runtime::PS2Runtime()
{
    std::memset(&m_cpuContext, 0, sizeof(m_cpuContext));

    // R0 is always zero in MIPS
    m_cpuContext.r[0] = _mm_set1_epi32(0);

    // Games usually run after BIOS/libkernel has enabled the EE interrupt state.
    // Some ps2sdk thread helpers probe Status.IE and EIE before StartThread.
    m_cpuContext.cop0_status = 0x10001u;

    // Stack pointer (SP) and global pointer (GP) will be set by the loaded ELF

    m_loadedModules.clear();
    m_guestHeapBlocks.clear();
    m_guestHeapBase = kGuestHeapDefaultBase;
    m_guestHeapEnd = kGuestHeapDefaultBase;
    m_guestHeapLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    m_guestHeapSuggestedBase = kGuestHeapDefaultBase;
    m_guestHeapConfigured = false;
    m_asyncCallbackStackFloor = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    m_asyncCallbackStackTop = PS2_RAM_SIZE;
}

void PS2Runtime::setDebugUiCallbacks(DebugUiCallback initCallback,
                                     DebugUiCallback drawCallback,
                                     DebugUiCallback shutdownCallback,
                                     void *userData)
{
    if (m_debugUiInitialized && m_debugUiShutdownCallback)
    {
        m_debugUiShutdownCallback(*this, m_debugUiUserData);
        m_debugUiInitialized = false;
    }

    m_debugUiInitCallback = initCallback;
    m_debugUiDrawCallback = drawCallback;
    m_debugUiShutdownCallback = shutdownCallback;
    m_debugUiUserData = userData;
}

PS2Runtime::~PS2Runtime()
{
    try
    {
        requestStop();
        ps2_syscalls::detachAllGuestHostThreads();
#if defined(PLATFORM_VITA)
        m_audioBackend.stopAll();
        m_audioBackend.setAudioReady(false);
#else
        if (IsAudioDeviceReady())
        {
            CloseAudioDevice();
            m_audioBackend.setAudioReady(false);
        }
#endif
        if (m_debugUiInitialized && m_debugUiShutdownCallback)
        {
            m_debugUiShutdownCallback(*this, m_debugUiUserData);
            m_debugUiInitialized = false;
        }

        if (IsWindowReady())
        {
            CloseWindow();
        }

        m_loadedModules.clear();

    }
    catch (const std::exception &e)
    {
        std::cerr << "[~PS2Runtime] cleanup exception: " << e.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "[~PS2Runtime] cleanup exception: unknown" << std::endl;
    }
}

bool PS2Runtime::syncCoreSubsystems()
{
    uint8_t *const rdram = m_memory.getRDRAM();
    uint8_t *const gsVram = m_memory.getGSVRAM();
    if (!rdram || !gsVram)
    {
        return false;
    }

    if (m_boundRdram == rdram && m_boundGSVram == gsVram)
    {
        return true;
    }

    m_gs.init(gsVram, static_cast<uint32_t>(PS2_GS_VRAM_SIZE), &m_memory.gs());
    m_gifArbiter.setProcessPacketFn([this](const uint8_t *data, uint32_t size)
                                    { m_gs.processGIFPacket(data, size); });
    m_memory.setGifArbiter(&m_gifArbiter);
    m_memory.setVu1MscalCallback([this](uint32_t startPC, uint32_t top, uint32_t itop)
                                 { m_vu1.execute(m_memory.getVU1Code(), PS2_VU1_CODE_SIZE,
                                                 m_memory.getVU1Data(), PS2_VU1_DATA_SIZE,
                                                 m_gs, &m_memory, startPC, top, itop, 65536); });
    m_memory.setVu1MscntCallback([this](uint32_t top, uint32_t itop)
                                 { m_vu1.resume(m_memory.getVU1Code(), PS2_VU1_CODE_SIZE,
                                                m_memory.getVU1Data(), PS2_VU1_DATA_SIZE,
                                                m_gs, &m_memory, top, itop, 65536); });
    m_iop.init(rdram);
    m_iop.reset();
    m_vu0.reset();
    m_vu1.reset();

    m_boundRdram = rdram;
    m_boundGSVram = gsVram;
    return true;
}

bool PS2Runtime::initialize(const char *title)
{
    try
    {
        if (!m_memory.initialize())
        {
            std::cerr << "Failed to initialize PS2 memory" << std::endl;
            return false;
        }

        if (!syncCoreSubsystems())
        {
            std::cerr << "Failed to bind runtime core subsystems" << std::endl;
            return false;
        }

#if defined(PLATFORM_VITA)
        InitWindow(HOST_WINDOW_WIDTH, HOST_WINDOW_HEIGHT, title); // raylib vita does not support audio
#else
        SetConfigFlags(FLAG_WINDOW_RESIZABLE);
        InitWindow(HOST_WINDOW_WIDTH, HOST_WINDOW_HEIGHT, title);
        InitAudioDevice();
        m_audioBackend.setAudioReady(IsAudioDeviceReady());
#endif
        SetTargetFPS(60);
        if (m_debugUiInitCallback)
        {
            m_debugUiInitCallback(*this, m_debugUiUserData);
            m_debugUiInitialized = true;
        }

        return true;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Failed to initialize PS2 runtime: " << e.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "Failed to initialize PS2 runtime: unknown exception" << std::endl;
    }

    return false;
}

bool PS2Runtime::loadELF(const std::string &elfPath)
{
    configureIoPathsFromElf(elfPath);

    std::ifstream file(elfPath, std::ios::binary);
    if (!file)
    {
        std::cerr << "Failed to open ELF file: " << elfPath << std::endl;
        return false;
    }

    file.seekg(0, std::ios::end);
    const std::streamoff fileSize = file.tellg();
    if (fileSize < static_cast<std::streamoff>(sizeof(ElfHeader)))
    {
        std::cerr << "ELF file is too small: " << elfPath << std::endl;
        return false;
    }
    file.seekg(0, std::ios::beg);

    ElfHeader header{};
    if (!file.read(reinterpret_cast<char *>(&header), sizeof(header)))
    {
        std::cerr << "Failed to read ELF header from: " << elfPath << std::endl;
        return false;
    }

    if (header.magic != ELF_MAGIC)
    {
        std::cerr << "Invalid ELF magic number" << std::endl;
        return false;
    }

    if (header.elf_class != 1u || header.endianness != 1u)
    {
        std::cerr << "Unsupported ELF format (expected 32-bit little-endian)." << std::endl;
        return false;
    }

    if (header.machine != EM_MIPS || header.type != ET_EXEC)
    {
        std::cerr << "Not a MIPS executable ELF file" << std::endl;
        return false;
    }

    if (header.phnum != 0u && header.phentsize < sizeof(ProgramHeader))
    {
        std::cerr << "Unsupported ELF program-header entry size: " << header.phentsize << std::endl;
        return false;
    }

    const uint64_t programHeaderTableEnd =
        static_cast<uint64_t>(header.phoff) +
        static_cast<uint64_t>(header.phnum) * static_cast<uint64_t>(header.phentsize);
    if (programHeaderTableEnd > static_cast<uint64_t>(fileSize))
    {
        std::cerr << "ELF program-header table is out of range." << std::endl;
        return false;
    }

    m_cpuContext.pc = header.entry;
    m_debugPc.store(m_cpuContext.pc, std::memory_order_relaxed);

    uint32_t maxLoadedRdramEnd = kGuestHeapDefaultBase;
    uint32_t moduleBase = std::numeric_limits<uint32_t>::max();
    uint32_t moduleEnd = 0u;
    bool loadedAnySegment = false;

    for (uint16_t i = 0; i < header.phnum; i++)
    {
        const uint64_t phOffset =
            static_cast<uint64_t>(header.phoff) +
            static_cast<uint64_t>(i) * static_cast<uint64_t>(header.phentsize);
        if (phOffset + sizeof(ProgramHeader) > static_cast<uint64_t>(fileSize))
        {
            std::cerr << "ELF program header " << i << " is out of range." << std::endl;
            return false;
        }

        ProgramHeader ph{};
        file.seekg(static_cast<std::streamoff>(phOffset), std::ios::beg);
        if (!file.read(reinterpret_cast<char *>(&ph), sizeof(ph)))
        {
            std::cerr << "Failed to read ELF program header " << i << std::endl;
            return false;
        }

        if (ph.type != PT_LOAD || ph.memsz == 0u)
        {
            continue;
        }

        if (ph.filesz > ph.memsz)
        {
            std::cerr << "ELF segment " << i << " has filesz > memsz." << std::endl;
            return false;
        }

        const uint64_t segmentFileEnd = static_cast<uint64_t>(ph.offset) + static_cast<uint64_t>(ph.filesz);
        if (segmentFileEnd > static_cast<uint64_t>(fileSize))
        {
            std::cerr << "ELF segment " << i << " exceeds file bounds." << std::endl;
            return false;
        }

        const bool scratch =
            ph.vaddr >= PS2_SCRATCHPAD_BASE &&
            ph.vaddr < (PS2_SCRATCHPAD_BASE + PS2_SCRATCHPAD_SIZE);

        uint32_t physAddr = 0u;
        try
        {
            physAddr = m_memory.translateAddress(ph.vaddr);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Failed to translate ELF segment " << i
                      << " virtual address 0x" << std::hex << ph.vaddr
                      << std::dec << ": " << e.what() << std::endl;
            return false;
        }
        const uint64_t regionSize = scratch ? static_cast<uint64_t>(PS2_SCRATCHPAD_SIZE)
                                            : static_cast<uint64_t>(PS2_RAM_SIZE);
        const uint64_t segmentMemEnd = static_cast<uint64_t>(physAddr) + static_cast<uint64_t>(ph.memsz);
        if (segmentMemEnd > regionSize)
        {
            std::cerr << "ELF segment " << i << " exceeds "
                      << (scratch ? "scratchpad" : "RDRAM")
                      << " bounds (vaddr=0x" << std::hex << ph.vaddr
                      << " memsz=0x" << ph.memsz << std::dec << ")." << std::endl;
            return false;
        }

        uint8_t *destBase = scratch ? m_memory.getScratchpad() : m_memory.getRDRAM();
        if (!destBase)
        {
            std::cerr << "ELF segment " << i << " has no destination memory backing." << std::endl;
            return false;
        }

        uint8_t *dest = destBase + physAddr;
        if (ph.filesz > 0u)
        {
            file.seekg(static_cast<std::streamoff>(ph.offset), std::ios::beg);
            if (!file.read(reinterpret_cast<char *>(dest), ph.filesz))
            {
                std::cerr << "Failed to read ELF segment " << i << " payload." << std::endl;
                return false;
            }
        }

        if (ph.memsz > ph.filesz)
        {
            std::memset(dest + ph.filesz, 0, ph.memsz - ph.filesz);
        }

        RUNTIME_LOG("Loading segment: 0x" << std::hex << ph.vaddr
                                          << " - 0x" << (static_cast<uint64_t>(ph.vaddr) + static_cast<uint64_t>(ph.memsz))
                                          << " (filesz: 0x" << ph.filesz
                                          << ", memsz: 0x" << ph.memsz << ")"
                                          << std::dec << std::endl);

        if (!scratch)
        {
            maxLoadedRdramEnd = std::max(maxLoadedRdramEnd, static_cast<uint32_t>(segmentMemEnd));
        }

        if (ph.flags & 0x1u) // PF_X
        {
            const uint64_t execEnd = static_cast<uint64_t>(ph.vaddr) + static_cast<uint64_t>(ph.filesz);
            if (execEnd <= std::numeric_limits<uint32_t>::max())
            {
                m_memory.registerCodeRegion(ph.vaddr, static_cast<uint32_t>(execEnd));
            }
        }

        loadedAnySegment = true;
        moduleBase = std::min(moduleBase, ph.vaddr);
        const uint64_t segmentVirtualEnd = static_cast<uint64_t>(ph.vaddr) + static_cast<uint64_t>(ph.memsz);
        const uint32_t clampedVirtualEnd =
            (segmentVirtualEnd > std::numeric_limits<uint32_t>::max())
                ? std::numeric_limits<uint32_t>::max()
                : static_cast<uint32_t>(segmentVirtualEnd);
        moduleEnd = std::max(moduleEnd, clampedVirtualEnd);
    }

    if (!loadedAnySegment)
    {
        std::cerr << "ELF contains no loadable PT_LOAD segments." << std::endl;
        return false;
    }

    if (maxLoadedRdramEnd > PS2_RAM_SIZE)
    {
        maxLoadedRdramEnd = PS2_RAM_SIZE;
    }

    const uint32_t paddedEnd = (maxLoadedRdramEnd > (PS2_RAM_SIZE - kGuestHeapSafetyPad))
                                   ? PS2_RAM_SIZE
                                   : (maxLoadedRdramEnd + kGuestHeapSafetyPad);
    const uint32_t suggestedHeapBase = alignGuestHeapValue(paddedEnd, kGuestHeapDefaultAlignment);
    {
        std::lock_guard<std::mutex> lock(m_guestHeapMutex);
        if (!m_guestHeapConfigured)
        {
            const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
            m_guestHeapSuggestedBase = std::min(suggestedHeapBase, hardLimit);
            m_guestHeapBase = m_guestHeapSuggestedBase;
            m_guestHeapEnd = m_guestHeapSuggestedBase;
            m_guestHeapLimit = hardLimit;
        }
    }
    {
        std::lock_guard<std::mutex> lock(m_asyncCallbackStackMutex);
        const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
        m_asyncCallbackStackFloor = std::min(std::max(hardLimit, suggestedHeapBase), PS2_RAM_SIZE);
        m_asyncCallbackStackTop = PS2_RAM_SIZE;
    }

    LoadedModule module;
    module.name = elfPath.substr(elfPath.find_last_of("/\\") + 1);
    module.baseAddress = (moduleBase == std::numeric_limits<uint32_t>::max()) ? 0x00100000u : moduleBase;
    module.size = (moduleEnd > module.baseAddress) ? static_cast<size_t>(moduleEnd - module.baseAddress) : 0u;
    module.active = true;

    m_loadedModules.push_back(module);

    ps2_game_overrides::applyMatching(*this, elfPath, m_cpuContext.pc);

    RUNTIME_LOG("ELF file loaded successfully. Entry point: 0x" << std::hex << m_cpuContext.pc << std::dec);
    return true;
}

const PS2Runtime::IoPaths &PS2Runtime::getIoPaths()
{
    return runtimeIoPaths();
}

void PS2Runtime::setIoPaths(const IoPaths &paths)
{
    IoPaths normalized = paths;
    normalized.elfPath = normalizeAbsolutePath(normalized.elfPath);
    normalized.elfDirectory = normalizeAbsolutePath(normalized.elfDirectory);
    normalized.hostRoot = normalizeAbsolutePath(normalized.hostRoot);
    normalized.cdRoot = normalizeAbsolutePath(normalized.cdRoot);
    normalized.mcRoot = normalizeAbsolutePath(normalized.mcRoot);
    normalized.cdImage = normalizeAbsolutePath(normalized.cdImage);

    if (normalized.elfDirectory.empty() && !normalized.elfPath.empty())
    {
        normalized.elfDirectory = normalized.elfPath.parent_path();
    }

    if (normalized.hostRoot.empty())
    {
        normalized.hostRoot = normalized.elfDirectory;
    }
    if (normalized.cdRoot.empty())
    {
        normalized.cdRoot = normalized.elfDirectory;
    }
    if (normalized.mcRoot.empty())
    {
        normalized.mcRoot = normalized.elfDirectory / "mc0";
    }

    runtimeIoPaths() = normalized;
}

void PS2Runtime::configureIoPathsFromElf(const std::string &elfPath)
{
    IoPaths paths = runtimeIoPaths();
    paths.elfPath = normalizeAbsolutePath(std::filesystem::path(elfPath));
    if (!paths.elfPath.empty())
    {
        paths.elfDirectory = paths.elfPath.parent_path();
    }

    if (!paths.elfDirectory.empty())
    {
        paths.hostRoot = paths.elfDirectory;
        paths.cdRoot = paths.elfDirectory;
        paths.mcRoot = paths.elfDirectory / "mc0";
    }

    setIoPaths(paths);
}

namespace
{
    bool generatedFunctionTableSlot(uint32_t address, uint32_t &slot)
    {
        if ((address & 3u) != 0u || g_ps2RecompiledFunctionTableSlotCount == 0u)
        {
            return false;
        }

        if (address < g_ps2RecompiledFunctionTableBase || address >= g_ps2RecompiledFunctionTableEnd)
        {
            return false;
        }

        const uint32_t offset = address - g_ps2RecompiledFunctionTableBase;
        slot = offset >> 2;
        return slot < g_ps2RecompiledFunctionTableSlotCount;
    }
}

bool PS2Runtime::replaceFunction(uint32_t address, RecompiledFunction func)
{
    uint32_t slot = 0u;
    if (!generatedFunctionTableSlot(address, slot))
    {
        std::cerr << "[function-table] cannot replace guest PC 0x" << std::hex << address
                  << ": outside generated dense table [0x" << g_ps2RecompiledFunctionTableBase
                  << ", 0x" << g_ps2RecompiledFunctionTableEnd << ")"
                  << std::dec << std::endl;
        return false;
    }

    g_ps2RecompiledFunctionTable[slot] = func;
    return true;
}

bool PS2Runtime::registerFunction(uint32_t address, RecompiledFunction func)
{
    return replaceFunction(address, func);
}

bool PS2Runtime::hasFunction(uint32_t address) const
{
    uint32_t slot = 0u;
    return generatedFunctionTableSlot(address, slot) && g_ps2RecompiledFunctionTable[slot] != nullptr;
}

const char *describeGuestBranchKind(PS2Runtime::GuestBranchKind kind)
{
    switch (kind)
    {
    case PS2Runtime::GuestBranchKind::DirectJump:
        return "DirectJump";
    case PS2Runtime::GuestBranchKind::DirectCall:
        return "DirectCall";
    case PS2Runtime::GuestBranchKind::IndirectJump:
        return "IndirectJump";
    case PS2Runtime::GuestBranchKind::IndirectCall:
        return "IndirectCall";
    case PS2Runtime::GuestBranchKind::Return:
        return "Return";
    default:
        return "Unknown";
    }
}

PS2Runtime::RecompiledFunction PS2Runtime::lookupFunction(uint32_t address)
{
    pushDispatchPc(address);
    traceLookupWatch(address);
    traceLookupWatchMulti(address);
    traceKofxiFrontendTaskLoopPc(address);
    traceKofxiResourceSlot(address);
    traceKofxiResourceLookup(address);
    traceKofxiBadReturn(address);
    traceKofxiUpperResourcePc(address);
    traceKofxiUpperResourceScannerPc(address);
    traceKofxiUpperResourceCommandPc(address);
    traceKofxiSchedulerWorkerPc(address);
    traceKofxiObjectManagerPc(address);
    traceKofxiResourceObjectPc(address);
    traceKofxiCallbackResourcePc(address);
    traceKofxiChildResourcePc(address);
    traceKofxiResourceHandlePoolPc(address);
    traceKofxiAdxStreamPc(address);
    traceKofxiMainFramePc(address);
    traceKofxiObjectPoolChanges(address, "lookup");

    uint32_t slot = 0u;
    if (generatedFunctionTableSlot(address, slot))
    {
        RecompiledFunction fn = g_ps2RecompiledFunctionTable[slot];
        if (fn != nullptr)
        {
            return fn;
        }
    }

    std::cerr << "Error: No exact recompiled function for guest PC 0x" << std::hex << address
              << " tableBase=0x" << g_ps2RecompiledFunctionTableBase
              << " tableEnd=0x" << g_ps2RecompiledFunctionTableEnd
              << " codeRegion=" << (m_memory.isCodeAddress(address) ? "yes" : "no")
              << " trace=" << formatDispatchHistory()
              << std::dec << std::endl;

    static RecompiledFunction missingFunction = [](uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t badPc = ctx->pc;
        runtime->reportMissingFunction(rdram,
                                       ctx,
                                       badPc,
                                       0u,
                                       PS2Runtime::GuestBranchKind::IndirectJump,
                                       "dispatch");
    };

    return missingFunction;
}

void PS2Runtime::setMissingFunctionPolicy(MissingFunctionPolicy policy)
{
    m_missingFunctionPolicy.store(static_cast<uint32_t>(policy), std::memory_order_release);
}

PS2Runtime::MissingFunctionPolicy PS2Runtime::missingFunctionPolicy() const
{
    return static_cast<MissingFunctionPolicy>(m_missingFunctionPolicy.load(std::memory_order_acquire));
}

void PS2Runtime::resetMissingFunctionReportOnce()
{
    m_missingFunctionReported.store(false, std::memory_order_release);
}

void PS2Runtime::reportMissingFunction(uint8_t *rdram,
                                       R5900Context *ctx,
                                       uint32_t targetPc,
                                       uint32_t sourcePc,
                                       GuestBranchKind kind,
                                       const char *debugName)
{
    const MissingFunctionPolicy policy = missingFunctionPolicy();
    const bool firstReport = !m_missingFunctionReported.exchange(true, std::memory_order_acq_rel);

    const uint32_t pc = ctx->pc;
    const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
    const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
    const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
    const uint32_t a0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[4], 0));
    const uint32_t a1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[5], 0));
    const uint32_t v0 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[2], 0));
    const uint32_t v1 = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[3], 0));

    auto readGuestU32At = [rdram](uint32_t addr, uint32_t &out) -> bool
    {
        // TODO this !rdram exist only because of test fix those test later
        if (!rdram || addr > PS2_RAM_SIZE - sizeof(uint32_t))
        {
            out = 0u;
            return false;
        }

        std::memcpy(&out, rdram + addr, sizeof(uint32_t));
        return true;
    };

    auto readGuestU32Offset = [&readGuestU32At](uint32_t base, uint32_t offset, uint32_t &out) -> bool
    {
        if (base > PS2_RAM_SIZE - sizeof(uint32_t) || offset > PS2_RAM_SIZE - sizeof(uint32_t) - base)
        {
            out = 0u;
            return false;
        }

        return readGuestU32At(base + offset, out);
    };

    uint32_t a0Word0 = 0u;
    uint32_t a0Word4 = 0u;
    uint32_t a0Word8 = 0u;
    uint32_t a0WordC = 0u;
    const bool a0Readable =
        readGuestU32Offset(a0, 0x00u, a0Word0) &&
        readGuestU32Offset(a0, 0x04u, a0Word4) &&
        readGuestU32Offset(a0, 0x08u, a0Word8) &&
        readGuestU32Offset(a0, 0x0cu, a0WordC);

    uint32_t vtableSlot0 = 0u;
    uint32_t vtableSlot4 = 0u;
    uint32_t vtableSlot8 = 0u;
    uint32_t vtableSlotC = 0u;
    const bool vtableReadable =
        a0Readable && a0Word0 != 0u &&
        readGuestU32Offset(a0Word0, 0x00u, vtableSlot0) &&
        readGuestU32Offset(a0Word0, 0x04u, vtableSlot4) &&
        readGuestU32Offset(a0Word0, 0x08u, vtableSlot8) &&
        readGuestU32Offset(a0Word0, 0x0cu, vtableSlotC);

    if (firstReport)
    {
        if (ctx)
        {
            thread_local uint32_t s_recoverCount = 0u;
            thread_local bool s_loggedContext = false;
            const bool hasPcFunction = hasFunction(pc);

            if (!hasPcFunction && s_recoverCount < 8192u)
            {
                if (!s_loggedContext)
                {
                    const std::string stackDump = formatGuestStackWindow(rdram, sp, -0x80, 0x40);
                    std::cerr << "[dispatch:first-bad-pc] bad=0x" << std::hex << pc
                              << " ra=0x" << ra
                              << " sp=0x" << sp
                              << " gp=0x" << gp
                              << " v0=0x" << v0
                              << " v1=0x" << v1
                              << " a0=0x" << a0
                              << " a1=0x" << a1
                              << " trace=" << formatDispatchHistory()
                              << stackDump
                              << std::dec << std::endl;
                    s_loggedContext = true;
                }

                uint32_t recoveryPc = selectKofxiInitResourceReturnRecoveryPc(rdram, ctx, this);
                if (ra != 0u && hasFunction(ra))
                {
                    recoveryPc = ra;
                }

                if (recoveryPc == 0u)
                {
                    recoveryPc = selectStackRecoveryPc(rdram, ctx, this);
                }

                if (recoveryPc == 0u)
                {
                    recoveryPc = selectDispatchRecoveryPc(this);
                }

                if (recoveryPc != 0u && recoveryPc != pc)
                {
                    if (s_recoverCount < 256u)
                    {
                        std::cerr << "[dispatch:recover-pc] bad=0x" << std::hex << pc
                                  << " ra=0x" << ra
                                  << " fallback=0x" << recoveryPc
                                  << " sp=0x" << sp
                                  << std::dec << std::endl;
                    }
                    ++s_recoverCount;
                    ctx->pc = recoveryPc;
                    return;
                }
            }

            if (hasPcFunction)
            {
                s_recoverCount = 0u;
                s_loggedContext = false;
            }
            else if (pc < 0x00100000u && ra == pc && s_recoverCount < 4096u)
            {
                uint32_t recoveryPc = selectStackRecoveryPc(rdram, ctx, this);
                if (recoveryPc == 0u)
                {
                    recoveryPc = selectDispatchRecoveryPc(this);
                }
                if (recoveryPc != 0u && recoveryPc != pc)
                {
                    if (s_recoverCount < 128u)
                    {
                        std::cerr << "[dispatch:recover-low-pc] bad=0x" << std::hex << pc
                                  << " ra=0x" << ra
                                  << " fallback=0x" << recoveryPc
                                  << " sp=0x" << sp
                                  << std::dec << std::endl;
                    }
                    ++s_recoverCount;
                    ctx->pc = recoveryPc;
                    return;
                }
            }
        }

        std::ostringstream oss;
        oss << "[guest-branch:missing-target] kind=" << describeGuestBranchKind(kind)
            << " op=" << (debugName ? debugName : "<unknown>")
            << " source=0x" << std::hex << sourcePc
            << " target=0x" << targetPc
            << " pc=0x" << pc
            << " ra=0x" << ra
            << " sp=0x" << sp
            << " gp=0x" << gp
            << " a0=0x" << a0
            << " a1=0x" << a1
            << " v0=0x" << v0
            << " v1=0x" << v1
            << " a0Readable=" << (a0Readable ? "yes" : "no")
            << " a0[0]=0x" << a0Word0
            << " a0[4]=0x" << a0Word4
            << " a0[8]=0x" << a0Word8
            << " a0[c]=0x" << a0WordC
            << " vtableReadable=" << (vtableReadable ? "yes" : "no")
            << " vtbl[0]=0x" << vtableSlot0
            << " vtbl[4]=0x" << vtableSlot4
            << " vtbl[8]=0x" << vtableSlot8
            << " vtbl[c]=0x" << vtableSlotC
            << " codeRegion=" << (m_memory.isCodeAddress(targetPc) ? "yes" : "no")
            << " policy=" << static_cast<uint32_t>(policy)
            << " trace=" << formatDispatchHistory()
            << std::dec;

        static std::mutex s_missingFunctionLogMutex;
        {
            std::lock_guard<std::mutex> lock(s_missingFunctionLogMutex);
            std::cerr << oss.str() << std::endl;
        }
    }

    if (firstReport && policy == MissingFunctionPolicy::BreakOnce)
    {
#if defined(_MSC_VER)
        __debugbreak();
#endif // TODO others breakpoints
    }

    if (ctx)
    {
        ctx->pc = targetPc;
    }

    if (policy == MissingFunctionPolicy::Stop)
    {
        requestStop();
    }
}

bool PS2Runtime::dispatchGuestBranch(uint8_t *rdram,
                                     R5900Context *ctx,
                                     uint32_t targetPc,
                                     uint32_t sourcePc,
                                     uint32_t fallthroughPc,
                                     GuestBranchKind kind,
                                     const char *debugName)
{
    ctx->pc = targetPc;
    const bool isCall = (kind == GuestBranchKind::DirectCall || kind == GuestBranchKind::IndirectCall);

    if (kind == GuestBranchKind::Return)
    {
        if (!hasFunction(targetPc))
        {
            reportMissingFunction(rdram, ctx, targetPc, sourcePc, kind, debugName);
        }

        // Prevent nested dispatch.
        ctx->pc = targetPc;
        return false;
    }

    if (!hasFunction(targetPc))
    {
        reportMissingFunction(rdram, ctx, targetPc, sourcePc, kind, debugName);

        const MissingFunctionPolicy policy = missingFunctionPolicy();

        if (policy == MissingFunctionPolicy::SkipCallDebug && isCall)
        {
            ctx->pc = fallthroughPc;
            return true;
        }

        if (policy == MissingFunctionPolicy::ContinueToTarget)
        {
            ctx->pc = targetPc;
            return true;
        }

        return false;
    }

    RecompiledFunction targetFn = lookupFunction(targetPc);
    const uint32_t entryPc = ctx->pc;
    targetFn(rdram, ctx, this);

    if (isStopRequested() || ctx->pc == 0u)
    {
        return false;
    }

    if (!isCall)
    {
        return false;
    }

    if (ctx->pc == entryPc)
    {
        ctx->pc = fallthroughPc;
    }

    return ctx->pc == fallthroughPc;
}

void PS2Runtime::SignalException(R5900Context *ctx, PS2Exception exception)
{
    if (exception == EXCEPTION_INTEGER_OVERFLOW)
    {
        HandleIntegerOverflow(ctx);
        return;
    }

    raiseCop0Exception(ctx, static_cast<uint32_t>(exception),
                       exception == EXCEPTION_TLB_REFILL);
}

void PS2Runtime::executeVU0Microprogram(uint8_t *rdram, R5900Context *ctx, uint32_t address)
{
    (void)rdram;

    uint8_t *const vu0Code = m_memory.getVU0Code();
    uint8_t *const vu0Data = m_memory.getVU0Data();
    const uint32_t startPC = address & ~0x7u;

    if (!vu0Code || !vu0Data || startPC + 8u > PS2_VU0_CODE_SIZE)
    {
        seedVu0IdleSuccess(ctx);
        return;
    }

    m_vu0.reset();
    copyVu0ContextToState(ctx, m_vu0.state());
    m_vu0.execute(vu0Code, PS2_VU0_CODE_SIZE,
                  vu0Data, PS2_VU0_DATA_SIZE,
                  m_gs, &m_memory,
                  startPC, 0u, ctx->vu0_itop, 4096);
    copyVu0StateToContext(m_vu0.state(), ctx);
}

void PS2Runtime::vu0StartMicroProgram(uint8_t *rdram, R5900Context *ctx, uint32_t address)
{
    // VCALLMS and VCALLMSR both route here.
    executeVU0Microprogram(rdram, ctx, address);
}

void PS2Runtime::handleSyscall(uint8_t *rdram, R5900Context *ctx)
{
    handleSyscall(rdram, ctx, 0);
}

void PS2Runtime::handleSyscall(uint8_t *rdram, R5900Context *ctx, uint32_t encodedSyscallId)
{
    if (ctx->in_delay_slot)
    {
        throw std::runtime_error("Attempted to execute a syscall inside a branch delay slot! "
                                 "This breaks the atomic basic block model and is structurally unsupported by the emulator.");
    }

    const uint32_t syscallFromV1 = getRegU32(ctx, 3); // $v1
    if (shouldTraceSyscall(encodedSyscallId, syscallFromV1))
    {
        RUNTIME_LOG("[syscall] encoded=0x" << std::hex << encodedSyscallId
                                           << " v1=0x" << syscallFromV1
                                           << " v0=0x" << getRegU32(ctx, 2)
                                           << " pc=0x" << ctx->pc
                                           << " ra=0x" << getRegU32(ctx, 31)
                                           << std::dec << std::endl);
    }

    // Try immediate first
    if (encodedSyscallId != 0 && ps2_syscalls::dispatchNumericSyscall(encodedSyscallId, rdram, ctx, this))
    {
        return;
    }

    // Try $v1 (standard)
    if (ps2_syscalls::dispatchNumericSyscall(syscallFromV1, rdram, ctx, this))
    {
        return;
    }

    // Try $v0 (negative syscalls)
    const uint32_t syscallFromV0 = getRegU32(ctx, 2); // $v0 (some ABIs)
    if (syscallFromV0 != syscallFromV1 &&
        ps2_syscalls::dispatchNumericSyscall(syscallFromV0, rdram, ctx, this))
    {
        return;
    }

    // God help you
    ps2_syscalls::TODO(rdram, ctx, this, encodedSyscallId);
}

void PS2Runtime::handleBreak(uint8_t *rdram, R5900Context *ctx)
{
    raiseCop0Exception(ctx, EXCEPTION_BREAKPOINT);
}

void PS2Runtime::drainCompletedDmacHandlers(uint8_t *rdram)
{
    for (uint32_t cause : m_memory.consumeCompletedDmacCauses())
    {
        ps2_syscalls::dispatchDmacHandlersForCause(rdram, this, cause);
    }
}

void PS2Runtime::handleTrap(uint8_t *rdram, R5900Context *ctx)
{
    raiseCop0Exception(ctx, EXCEPTION_TRAP);
}

void PS2Runtime::handleTLBR(uint8_t *rdram, R5900Context *ctx)
{
    uint32_t vpn = 0;
    uint32_t pfn = 0;
    uint32_t mask = 0;
    bool valid = false;

    const uint32_t index = ctx->cop0_index & 0x3Fu;
    if (!m_memory.tlbRead(index, vpn, pfn, mask, valid))
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
        return;
    }

    // Preserve low ASID bits in EntryHi.
    ctx->cop0_entryhi = (ctx->cop0_entryhi & 0x00000FFFu) | (vpn & 0xFFFFF000u);
    ctx->cop0_entrylo0 = (ctx->cop0_entrylo0 & ~0x03FFFFC2u) |
                         ((pfn & 0x000FFFFFu) << 6) |
                         (valid ? 0x2u : 0u);
    ctx->cop0_pagemask = mask & 0x01FFE000u;
}

void PS2Runtime::handleTLBWI(uint8_t *rdram, R5900Context *ctx)
{
    const uint32_t index = ctx->cop0_index & 0x3Fu;
    const uint32_t vpn = ctx->cop0_entryhi & 0xFFFFF000u;
    const uint32_t pfn = (ctx->cop0_entrylo0 >> 6) & 0x000FFFFFu;
    const uint32_t mask = ctx->cop0_pagemask & 0x01FFE000u;
    const bool valid = (ctx->cop0_entrylo0 & 0x2u) != 0u;

    if (!m_memory.tlbWrite(index, vpn, pfn, mask, valid))
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
    }
}

void PS2Runtime::handleTLBWR(uint8_t *rdram, R5900Context *ctx)
{
    const uint32_t entryCount = static_cast<uint32_t>(m_memory.tlbEntryCount());
    if (entryCount == 0)
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
        return;
    }

    const uint32_t wired = std::min(ctx->cop0_wired, entryCount - 1);
    uint32_t random = ctx->cop0_random % entryCount;
    if (random < wired)
    {
        random = wired;
    }

    const uint32_t vpn = ctx->cop0_entryhi & 0xFFFFF000u;
    const uint32_t pfn = (ctx->cop0_entrylo0 >> 6) & 0x000FFFFFu;
    const uint32_t mask = ctx->cop0_pagemask & 0x01FFE000u;
    const bool valid = (ctx->cop0_entrylo0 & 0x2u) != 0u;

    if (!m_memory.tlbWrite(random, vpn, pfn, mask, valid))
    {
        raiseCop0Exception(ctx, EXCEPTION_RESERVED_INSTRUCTION);
        return;
    }

    // Keep COP0 bookkeeping in sync with the selected slot.
    ctx->cop0_index = (ctx->cop0_index & ~0x3Fu) | (random & 0x3Fu);
    ctx->cop0_random = (random <= wired) ? (entryCount - 1) : (random - 1);
}

void PS2Runtime::handleTLBP(uint8_t *rdram, R5900Context *ctx)
{
    const int32_t index = m_memory.tlbProbe(ctx->cop0_entryhi & 0xFFFFF000u);
    if (index >= 0)
    {
        ctx->cop0_index = (ctx->cop0_index & ~0x8000003Fu) |
                          (static_cast<uint32_t>(index) & 0x3Fu);
    }
    else
    {
        // MIPS sets probe failure bit (P) in Index[31].
        ctx->cop0_index |= 0x80000000u;
    }
}

void PS2Runtime::clearLLBit(R5900Context *ctx)
{
    // LL/SC reservation is tracked separately from COP0 Status.
    ctx->llbit = 0;
    ctx->lladdr = 0;
}

uint32_t PS2Runtime::alignGuestHeapValue(uint32_t value, uint32_t alignment)
{
    if (alignment == 0)
    {
        return value;
    }

    const uint32_t mask = alignment - 1u;
    if (value > (std::numeric_limits<uint32_t>::max() - mask))
    {
        return std::numeric_limits<uint32_t>::max();
    }
    return (value + mask) & ~mask;
}

bool PS2Runtime::isGuestHeapAlignmentValid(uint32_t alignment)
{
    return alignment != 0u && (alignment & (alignment - 1u)) == 0u;
}

uint32_t PS2Runtime::normalizeGuestHeapAlignment(uint32_t alignment)
{
    if (!isGuestHeapAlignmentValid(alignment))
    {
        return kGuestHeapDefaultAlignment;
    }
    return std::max(alignment, kGuestHeapDefaultAlignment);
}

uint32_t PS2Runtime::clampGuestHeapBase(uint32_t guestBase) const
{
    uint32_t normalized = guestBase;
    if (normalized >= PS2_RAM_SIZE)
    {
        normalized &= PS2_RAM_MASK;
    }
    const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    return std::min(normalized, hardLimit);
}

uint32_t PS2Runtime::clampGuestHeapLimit(uint32_t guestLimit) const
{
    const uint32_t hardLimit = std::min(kGuestHeapHardLimit, PS2_RAM_SIZE);
    if (guestLimit == 0u || guestLimit > hardLimit)
    {
        return hardLimit;
    }
    return guestLimit;
}

void PS2Runtime::resetGuestHeapLocked(uint32_t guestBase, uint32_t guestLimit)
{
    uint32_t base = alignGuestHeapValue(clampGuestHeapBase(guestBase), kGuestHeapDefaultAlignment);
    uint32_t limit = clampGuestHeapLimit(guestLimit);
    if (base == 0u)
    {
        const uint32_t fallbackBase = (m_guestHeapSuggestedBase != 0u) ? m_guestHeapSuggestedBase : kGuestHeapDefaultBase;
        base = alignGuestHeapValue(clampGuestHeapBase(fallbackBase), kGuestHeapDefaultAlignment);
    }

    if (limit <= base)
    {
        base = alignGuestHeapValue(clampGuestHeapBase(m_guestHeapSuggestedBase), kGuestHeapDefaultAlignment);
        limit = clampGuestHeapLimit(0u);
    }

    if (limit <= base)
    {
        base = 0u;
        limit = 0u;
    }

    m_guestHeapBlocks.clear();
    if (limit > base)
    {
        m_guestHeapBlocks.push_back({base, limit - base, true});
    }

    m_guestHeapBase = base;
    m_guestHeapEnd = base;
    m_guestHeapLimit = limit;
    m_guestHeapConfigured = true;
}

void PS2Runtime::ensureGuestHeapInitializedLocked()
{
    if (m_guestHeapConfigured)
    {
        return;
    }

    const uint32_t suggested = (m_guestHeapSuggestedBase == 0u) ? kGuestHeapDefaultBase : m_guestHeapSuggestedBase;
    resetGuestHeapLocked(suggested, clampGuestHeapLimit(0u));
}

int32_t PS2Runtime::findGuestHeapBlockIndexLocked(uint32_t guestAddr) const
{
    const uint32_t normalizedAddr = guestAddr & PS2_RAM_MASK;
    for (size_t i = 0; i < m_guestHeapBlocks.size(); ++i)
    {
        const GuestHeapBlock &block = m_guestHeapBlocks[i];
        if (!block.free && block.addr == normalizedAddr)
        {
            return static_cast<int32_t>(i);
        }
    }
    return -1;
}

uint32_t PS2Runtime::allocateGuestBlockLocked(uint32_t size, uint32_t alignment)
{
    if (size == 0u)
    {
        return 0u;
    }

    const uint32_t normalizedAlignment = normalizeGuestHeapAlignment(alignment);
    if (size > (std::numeric_limits<uint32_t>::max() - (kGuestHeapDefaultAlignment - 1u)))
    {
        return 0u;
    }

    const uint32_t allocSize = alignGuestHeapValue(size, kGuestHeapDefaultAlignment);
    if (allocSize == 0u)
    {
        return 0u;
    }

    for (size_t i = 0; i < m_guestHeapBlocks.size(); ++i)
    {
        const GuestHeapBlock block = m_guestHeapBlocks[i];
        if (!block.free)
        {
            continue;
        }

        const uint64_t blockStart = block.addr;
        const uint64_t blockEnd = blockStart + static_cast<uint64_t>(block.size);
        const uint32_t alignedAddr = alignGuestHeapValue(block.addr, normalizedAlignment);
        if (alignedAddr < block.addr)
        {
            continue;
        }

        const uint64_t alignedStart = alignedAddr;
        if (alignedStart > blockEnd)
        {
            continue;
        }

        const uint64_t allocEnd = alignedStart + static_cast<uint64_t>(allocSize);
        if (allocEnd > blockEnd)
        {
            continue;
        }

        const uint32_t prefixSize = static_cast<uint32_t>(alignedStart - blockStart);
        const uint32_t suffixSize = static_cast<uint32_t>(blockEnd - allocEnd);

        std::vector<GuestHeapBlock> replacement;
        replacement.reserve(3);
        if (prefixSize > 0u)
        {
            replacement.push_back({block.addr, prefixSize, true});
        }
        replacement.push_back({alignedAddr, allocSize, false});
        if (suffixSize > 0u)
        {
            replacement.push_back({static_cast<uint32_t>(allocEnd), suffixSize, true});
        }

        m_guestHeapBlocks.erase(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(i));
        m_guestHeapBlocks.insert(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(i),
                                 replacement.begin(),
                                 replacement.end());

        m_guestHeapEnd = std::max(m_guestHeapEnd, static_cast<uint32_t>(allocEnd));
        return alignedAddr;
    }

    return 0u;
}

void PS2Runtime::coalesceGuestHeapLocked()
{
    if (m_guestHeapBlocks.empty())
    {
        return;
    }

    size_t i = 1;
    while (i < m_guestHeapBlocks.size())
    {
        GuestHeapBlock &prev = m_guestHeapBlocks[i - 1];
        GuestHeapBlock &curr = m_guestHeapBlocks[i];
        const uint64_t prevEnd = static_cast<uint64_t>(prev.addr) + static_cast<uint64_t>(prev.size);
        if (prev.free && curr.free && prevEnd == curr.addr)
        {
            prev.size += curr.size;
            m_guestHeapBlocks.erase(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(i));
            continue;
        }
        ++i;
    }
}

void PS2Runtime::freeGuestBlockLocked(uint32_t guestAddr)
{
    const int32_t index = findGuestHeapBlockIndexLocked(guestAddr);
    if (index < 0)
    {
        return;
    }

    m_guestHeapBlocks[static_cast<size_t>(index)].free = true;
    coalesceGuestHeapLocked();
}

void PS2Runtime::configureGuestHeap(uint32_t guestBase, uint32_t guestLimit)
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    uint32_t normalizedBase = alignGuestHeapValue(clampGuestHeapBase(guestBase), kGuestHeapDefaultAlignment);
    if (normalizedBase == 0u)
    {
        normalizedBase = (m_guestHeapSuggestedBase != 0u) ? m_guestHeapSuggestedBase : kGuestHeapDefaultBase;
    }
    m_guestHeapSuggestedBase = normalizedBase;
    resetGuestHeapLocked(normalizedBase, guestLimit);
}

uint32_t PS2Runtime::guestMalloc(uint32_t size, uint32_t alignment)
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    ensureGuestHeapInitializedLocked();
    return allocateGuestBlockLocked(size, alignment);
}

uint32_t PS2Runtime::guestCalloc(uint32_t count, uint32_t size, uint32_t alignment)
{
    if (count == 0u || size == 0u)
    {
        return 0u;
    }
    if (count > (std::numeric_limits<uint32_t>::max() / size))
    {
        return 0u;
    }

    const uint32_t totalSize = count * size;
    const uint32_t guestAddr = guestMalloc(totalSize, alignment);
    if (guestAddr != 0u)
    {
        uint8_t *rdram = m_memory.getRDRAM();
        if (rdram)
        {
            uint32_t physAddr = guestAddr & PS2_RAM_MASK;
            if (physAddr + totalSize <= PS2_RAM_SIZE)
                std::memset(rdram + physAddr, 0, totalSize);
        }
    }

    return guestAddr;
}

uint32_t PS2Runtime::guestRealloc(uint32_t guestAddr, uint32_t newSize, uint32_t alignment)
{
    if (guestAddr == 0u)
    {
        return guestMalloc(newSize, alignment);
    }
    if (newSize == 0u)
    {
        guestFree(guestAddr);
        return 0u;
    }

    if (newSize > (std::numeric_limits<uint32_t>::max() - (kGuestHeapDefaultAlignment - 1u)))
    {
        return 0u;
    }

    const uint32_t normalizedAlignment = normalizeGuestHeapAlignment(alignment);
    const uint32_t requestedSize = alignGuestHeapValue(newSize, kGuestHeapDefaultAlignment);

    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    ensureGuestHeapInitializedLocked();

    const int32_t index = findGuestHeapBlockIndexLocked(guestAddr);
    if (index < 0)
    {
        return 0u;
    }

    const size_t blockIndex = static_cast<size_t>(index);
    const uint32_t oldAddr = m_guestHeapBlocks[blockIndex].addr;
    const uint32_t oldSize = m_guestHeapBlocks[blockIndex].size;

    if (requestedSize <= oldSize)
    {
        if (requestedSize < oldSize)
        {
            const uint32_t tailAddr = oldAddr + requestedSize;
            const uint32_t tailSize = oldSize - requestedSize;
            m_guestHeapBlocks[blockIndex].size = requestedSize;
            m_guestHeapBlocks.insert(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(blockIndex + 1u),
                                     GuestHeapBlock{tailAddr, tailSize, true});
            coalesceGuestHeapLocked();
        }
        return oldAddr;
    }

    if (blockIndex + 1u < m_guestHeapBlocks.size())
    {
        GuestHeapBlock &next = m_guestHeapBlocks[blockIndex + 1u];
        const uint64_t blockEnd = static_cast<uint64_t>(m_guestHeapBlocks[blockIndex].addr) +
                                  static_cast<uint64_t>(m_guestHeapBlocks[blockIndex].size);
        if (next.free && blockEnd == next.addr)
        {
            const uint64_t combined = static_cast<uint64_t>(m_guestHeapBlocks[blockIndex].size) +
                                      static_cast<uint64_t>(next.size);
            if (combined >= requestedSize)
            {
                const uint32_t extraNeeded = requestedSize - m_guestHeapBlocks[blockIndex].size;
                m_guestHeapBlocks[blockIndex].size = requestedSize;
                if (next.size == extraNeeded)
                {
                    m_guestHeapBlocks.erase(m_guestHeapBlocks.begin() + static_cast<std::ptrdiff_t>(blockIndex + 1u));
                }
                else
                {
                    next.addr += extraNeeded;
                    next.size -= extraNeeded;
                }
                m_guestHeapEnd = std::max(m_guestHeapEnd, oldAddr + requestedSize);
                return oldAddr;
            }
        }
    }

    const uint32_t newAddr = allocateGuestBlockLocked(newSize, normalizedAlignment);
    if (newAddr == 0u)
    {
        return 0u;
    }

    uint8_t *rdram = m_memory.getRDRAM();
    if (rdram)
    {
        const uint32_t copyBytes = std::min(oldSize, newSize);
        uint32_t dstPhys = newAddr & PS2_RAM_MASK;
        uint32_t srcPhys = oldAddr & PS2_RAM_MASK;
        if (dstPhys + copyBytes <= PS2_RAM_SIZE && srcPhys + copyBytes <= PS2_RAM_SIZE)
            std::memmove(rdram + dstPhys, rdram + srcPhys, copyBytes);
    }

    freeGuestBlockLocked(oldAddr);
    return newAddr;
}

void PS2Runtime::guestFree(uint32_t guestAddr)
{
    if (guestAddr == 0u)
    {
        return;
    }

    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    ensureGuestHeapInitializedLocked();
    freeGuestBlockLocked(guestAddr);
}

uint32_t PS2Runtime::guestHeapBase() const
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    return m_guestHeapConfigured ? m_guestHeapBase : m_guestHeapSuggestedBase;
}

uint32_t PS2Runtime::guestHeapEnd() const
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    return m_guestHeapConfigured ? m_guestHeapEnd : m_guestHeapSuggestedBase;
}

uint32_t PS2Runtime::guestHeapLimit() const
{
    std::lock_guard<std::mutex> lock(m_guestHeapMutex);
    return m_guestHeapConfigured ? m_guestHeapLimit : m_guestHeapSuggestedBase;
}

uint32_t PS2Runtime::reserveAsyncCallbackStack(uint32_t size, uint32_t alignment)
{
    if (size == 0u)
    {
        return 0u;
    }

    const uint32_t normalizedAlignment = normalizeGuestHeapAlignment(alignment);
    const uint32_t allocSize = alignGuestHeapValue(size, kGuestHeapDefaultAlignment);
    if (allocSize == 0u)
    {
        return 0u;
    }

    std::lock_guard<std::mutex> lock(m_asyncCallbackStackMutex);
    uint32_t top = m_asyncCallbackStackTop;
    if (top > PS2_RAM_SIZE)
    {
        top = PS2_RAM_SIZE;
    }
    top &= ~(kGuestHeapDefaultAlignment - 1u);

    if (top <= allocSize)
    {
        return 0u;
    }

    uint32_t base = top - allocSize;
    base &= ~(normalizedAlignment - 1u);
    if (base < m_asyncCallbackStackFloor || base >= top)
    {
        return 0u;
    }

    m_asyncCallbackStackTop = base;
    return top - 0x10u;
}

void PS2Runtime::dispatchLoop(uint8_t *rdram, R5900Context *ctx)
{
    R5900Context *previousLookupContext = g_activeLookupContext;
    uint8_t *previousLookupRdram = g_activeLookupRdram;
    g_activeLookupRdram = rdram;
    g_activeLookupContext = ctx;

    std::optional<GuestExecutionScope> serialGuestExecution;
    if (serialGuestThreadsEnabled())
    {
        static std::atomic<uint32_t> s_serialLogCount{0u};
        if (s_serialLogCount.fetch_add(1u, std::memory_order_relaxed) < 4u)
        {
            std::cerr << "[dispatch] PS2X_SERIAL_GUEST_THREADS=1: holding guest execution lock across dispatcher loop"
                      << std::endl;
        }
        serialGuestExecution.emplace(this);
    }

    uint32_t lastPc = std::numeric_limits<uint32_t>::max();
    uint32_t samePcCount = 0;
    uint64_t dispatchStepCount = 0u;
    constexpr uint32_t kSamePcYieldInterval = 0x4000u;

    while (!isStopRequested())
    {
        ++dispatchStepCount;
        const uint32_t pc = ctx->pc;

        if (pc == lastPc)
        {
            ++samePcCount;
            if ((samePcCount % kSamePcYieldInterval) == 0u)
            {
                PS2_IF_AGRESSIVE_LOGS({
                    RUNTIME_LOG("CPU is doing some work at PC 0x" << std::hex << pc << ". PC not updating.");
                });
                std::this_thread::yield();
            }
        }
        else
        {
            samePcCount = 0;
            lastPc = pc;
        }

        m_debugPc.store(pc, std::memory_order_relaxed);
        m_debugRa.store(static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0)), std::memory_order_relaxed);
        m_debugSp.store(static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0)), std::memory_order_relaxed);
        m_debugGp.store(static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0)), std::memory_order_relaxed);

        const uint32_t dispatchedPc = pc;
        const uint32_t dispatchedRa = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));

        if (traceMainThreadEnabled() && g_currentThreadId == 1)
        {
            const uint32_t interval = std::max<uint32_t>(
                1u, parseRuntimeEnvU32("PS2X_TRACE_MAIN_THREAD_INTERVAL", 0x20000u));
            if ((dispatchStepCount % interval) == 0u)
            {
                const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
                const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
                std::cerr << "[MainThreadHeartbeat] step=" << dispatchStepCount
                          << " pc=0x" << std::hex << pc
                          << " ra=0x" << dispatchedRa
                          << " sp=0x" << sp
                          << " gp=0x" << gp
                          << " samePc=0x" << samePcCount
                          << std::dec
                          << " waiters=" << guestExecutionWaiterCountForTesting()
                          << " trace=" << formatDispatchHistory()
                          << std::endl;
            }
        }

        std::shared_ptr<ThreadInfo> currentThreadInfo;
        if (serialGuestExecution || traceThreadHeartbeatEnabled() || traceMainThreadEnabled())
        {
            currentThreadInfo = lookupCurrentThreadInfoForDebug();
            updateThreadDebugState(currentThreadInfo, ctx, dispatchStepCount);
            maybeTraceThreadHeartbeat(g_currentThreadId, currentThreadInfo, ctx, dispatchStepCount);
        }

        if (serialGuestExecution)
        {
            RecompiledFunction fn = lookupFunction(pc);
            fn(rdram, ctx, this);
            traceKofxiObjectPoolChanges(dispatchedPc, "after");
            yieldSerialGuestExecutionIfContended(this);
        }
        else
        {
            GuestExecutionScope guestExecution(this);
            RecompiledFunction fn = lookupFunction(pc);
            fn(rdram, ctx, this);
            traceKofxiObjectPoolChanges(dispatchedPc, "after");
        }

        if (ctx->pc == 0u)
        {
            const uint32_t ra = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[31], 0));
            const uint32_t sp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[29], 0));
            const uint32_t gp = static_cast<uint32_t>(_mm_extract_epi32(ctx->r[28], 0));
            PS2_IF_AGRESSIVE_LOGS({
                std::cerr << "[dispatch:pc-zero] from=0x" << std::hex << dispatchedPc
                          << " fromRa=0x" << dispatchedRa
                          << " ra=0x" << ra
                          << " sp=0x" << sp
                          << " gp=0x" << gp
                          << " trace=" << formatDispatchHistory()
                          << std::dec << std::endl;
            });

            // PC=0 means this guest thread returned (usually via jr $ra with RA=0).
            // Do not request a global runtime stop here: other guest threads may still run.
            break;
        }
    }

    g_activeLookupContext = previousLookupContext;
    g_activeLookupRdram = previousLookupRdram;
}

void PS2Runtime::enterGuestExecution()
{
    m_guestExecutionWaiters.fetch_add(1u, std::memory_order_acq_rel);
    m_guestExecutionMutex.lock();
    m_guestExecutionWaiters.fetch_sub(1u, std::memory_order_acq_rel);
    ++g_guestExecutionDepths[this];
    markGuestExecutionAcquired();
}

void PS2Runtime::leaveGuestExecution()
{
    auto it = g_guestExecutionDepths.find(this);
    if (it == g_guestExecutionDepths.end() || it->second == 0u)
    {
        return;
    }

    --it->second;
    m_guestExecutionMutex.unlock();
    if (it->second == 0u)
    {
        g_guestExecutionDepths.erase(it);
    }
}

uint32_t PS2Runtime::releaseGuestExecution()
{
    auto it = g_guestExecutionDepths.find(this);
    if (it == g_guestExecutionDepths.end() || it->second == 0u)
    {
        return 0u;
    }

    const uint32_t depth = it->second;
    for (uint32_t i = 0; i < depth; ++i)
    {
        m_guestExecutionMutex.unlock();
    }
    g_guestExecutionDepths.erase(it);
    return depth;
}

void PS2Runtime::reacquireGuestExecution(uint32_t depth)
{
    if (depth == 0u)
    {
        return;
    }

    uint32_t &heldDepth = g_guestExecutionDepths[this];
    for (uint32_t i = 0; i < depth; ++i)
    {
        m_guestExecutionWaiters.fetch_add(1u, std::memory_order_acq_rel);
        m_guestExecutionMutex.lock();
        m_guestExecutionWaiters.fetch_sub(1u, std::memory_order_acq_rel);
        ++heldDepth;
        markGuestExecutionAcquired();
    }
}

void PS2Runtime::markGuestExecutionAcquired()
{
    {
        std::lock_guard<std::mutex> lock(m_guestExecutionHandoffMutex);
        m_guestExecutionHandoffEpoch.fetch_add(1u, std::memory_order_acq_rel);
    }
    m_guestExecutionHandoffCv.notify_all();
}

void PS2Runtime::yieldGuestExecutionAfterWake()
{
    auto it = g_guestExecutionDepths.find(this);
    if (it == g_guestExecutionDepths.end() || it->second == 0u)
    {
        std::this_thread::yield();
        return;
    }

    const uint64_t handoffEpoch = m_guestExecutionHandoffEpoch.load(std::memory_order_acquire);
    {
        GuestExecutionReleaseScope releaseGuestExecution(this);
        std::unique_lock<std::mutex> lock(m_guestExecutionHandoffMutex);
        m_guestExecutionHandoffCv.wait_for(lock, std::chrono::milliseconds(2), [&]()
                                           { return m_guestExecutionHandoffEpoch.load(std::memory_order_acquire) != handoffEpoch; });
    }
}

bool PS2Runtime::shouldPreemptGuestExecution()
{
    thread_local uint32_t s_backEdgeYieldCounter = 0u;
    const uint32_t waiterCount = m_guestExecutionWaiters.load(std::memory_order_acquire);
    const uint32_t yieldInterval = (serialGuestThreadsEnabled() && waiterCount != 0u)
                                       ? serialGuestContendedPreemptInterval()
                                       : ((waiterCount != 0u) ? 64u : 100u);
    if (++s_backEdgeYieldCounter < yieldInterval)
    {
        return false;
    }

    s_backEdgeYieldCounter = 0u;
    return true;
}

uint8_t PS2Runtime::Load8(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        const uint8_t value = m_memory.read8(vaddr);
        traceGuestReadAccess("LOAD8", ctx, vaddr, 1u, value, 0u);
        return value;
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

uint16_t PS2Runtime::Load16(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        const uint16_t value = m_memory.read16(vaddr);
        traceGuestReadAccess("LOAD16", ctx, vaddr, 2u, value, 0u);
        return value;
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

uint32_t PS2Runtime::Load32(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        const uint32_t value = m_memory.read32(vaddr);
        traceGuestReadAccess("LOAD32", ctx, vaddr, 4u, value, 0u);
        return value;
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

uint64_t PS2Runtime::Load64(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        const uint64_t value = m_memory.read64(vaddr);
        traceGuestReadAccess("LOAD64", ctx, vaddr, 8u, value, 0u);
        return value;
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return 0;
    }
}

__m128i PS2Runtime::Load128(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr)
{
    try
    {
        const __m128i value = m_memory.read128(vaddr);
        alignas(16) uint64_t parts[2];
        _mm_storeu_si128(reinterpret_cast<__m128i *>(parts), value);
        traceGuestReadAccess("LOAD128", ctx, vaddr, 16u, parts[0], parts[1]);
        return value;
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_LOAD);
        return _mm_setzero_si128();
    }
}

void PS2Runtime::Store8(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint8_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 1u, value, 0u, "WRITE8", ctx);
    try
    {
        m_memory.write8(vaddr, value);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store16(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint16_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 2u, value, 0u, "WRITE16", ctx);
    try
    {
        m_memory.write16(vaddr, value);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store32(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint32_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 4u, value, 0u, "WRITE32", ctx);
    try
    {
        m_memory.write32(vaddr, value);
        drainCompletedDmacHandlers(rdram);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store64(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, uint64_t value)
{
    ps2TraceGuestWrite(rdram, vaddr, 8u, value, 0u, "WRITE64", ctx);
    try
    {
        m_memory.write64(vaddr, value);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::Store128(uint8_t *rdram, R5900Context *ctx, uint32_t vaddr, __m128i value)
{
    alignas(16) uint64_t _parts[2];
    _mm_storeu_si128(reinterpret_cast<__m128i *>(_parts), value);
    ps2TraceGuestWrite(rdram, vaddr, 16u, _parts[0], _parts[1], "WRITE128", ctx);
    try
    {
        m_memory.write128(vaddr, value);
    }
    catch (const std::exception &)
    {
        SignalException(ctx, EXCEPTION_ADDRESS_ERROR_STORE);
    }
}

void PS2Runtime::requestStop()
{
    m_stopRequested.store(true, std::memory_order_relaxed);
    ps2_syscalls::notifyRuntimeStop();
}

bool PS2Runtime::isStopRequested() const
{
    return m_stopRequested.load(std::memory_order_relaxed);
}

void PS2Runtime::HandleIntegerOverflow(R5900Context *ctx)
{
    raiseCop0Exception(ctx, EXCEPTION_INTEGER_OVERFLOW);
}

void PS2Runtime::run()
{
    m_stopRequested.store(false, std::memory_order_relaxed);
    ps2_stubs::resetSifState();
    ps2_syscalls::resetSoundDriverRpcState();
    ps2_stubs::resetAudioStubState();
    ps2_stubs::resetGsSyncVCallbackState();
    ps2_stubs::resetMpegStubState();
    ps2_syscalls::initializeGuestKernelState(m_memory.getRDRAM());
    m_cpuContext.r[4] = _mm_setzero_si128();
    m_cpuContext.r[5] = _mm_setzero_si128();
    m_cpuContext.r[29] = _mm_set_epi64x(0, static_cast<int64_t>(PS2_RAM_SIZE - 0x10u));
    m_debugPc.store(m_cpuContext.pc, std::memory_order_relaxed);
    m_debugRa.store(static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[31], 0)), std::memory_order_relaxed);
    m_debugSp.store(static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[29], 0)), std::memory_order_relaxed);
    m_debugGp.store(static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[28], 0)), std::memory_order_relaxed);

    RUNTIME_LOG("Starting execution at address 0x" << std::hex << m_cpuContext.pc << std::dec);

    // A blank image to use as a framebuffer
    Image blank = GenImageColor(FB_WIDTH, FB_HEIGHT, BLANK);
    Texture2D frameTex = LoadTextureFromImage(blank);
    UnloadImage(blank);

    g_activeThreads.store(1, std::memory_order_relaxed);
    std::atomic<bool> gameThreadFinished{false};

    std::thread gameThread([&]()
                           {
        ThreadNaming::SetCurrentThreadName("GameThread");
        try
        {
            dispatchLoop(m_memory.getRDRAM(), &m_cpuContext);
            uint32_t pc = m_debugPc.load(std::memory_order_relaxed);
            RUNTIME_LOG("Game thread returned. PC=0x" << std::hex << pc
                      << " RA=0x" << static_cast<uint32_t>(_mm_extract_epi32(m_cpuContext.r[31], 0)) << std::dec << std::endl);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Error during program execution: " << e.what() << std::endl;
        }
        catch (...)
        {
            std::cerr << "Error during program execution: unknown exception" << std::endl;
        }
        g_activeThreads.fetch_sub(1, std::memory_order_relaxed);
        gameThreadFinished.store(true, std::memory_order_release); });

    ps2_syscalls::EnsureVSyncWorkerRunning(m_memory.getRDRAM(), this);

    const bool tracePc = isRuntimeEnvEnabled("PS2X_TRACE_PC");
    uint64_t tick = 0;
    while (!isStopRequested() && g_activeThreads.load(std::memory_order_relaxed) > 0)
    {
        ++tick;
        if (tracePc && (tick % 60u) == 0u)
        {
            uint64_t curDma = m_memory.dmaStartCount();
            uint64_t curGif = m_memory.gifCopyCount();
            uint64_t curGs = m_memory.gsWriteCount();
            uint64_t curVif = m_memory.vifWriteCount();
            const GSRegisters &gs = m_memory.gs();
            const uint32_t dbgPc = m_debugPc.load(std::memory_order_relaxed);
            const uint32_t dbgRa = m_debugRa.load(std::memory_order_relaxed);
            const uint32_t dbgSp = m_debugSp.load(std::memory_order_relaxed);
            const uint32_t dbgGp = m_debugGp.load(std::memory_order_relaxed);
            const int activeThreads = g_activeThreads.load(std::memory_order_relaxed);

            std::cout << "[run:trace] tick=" << tick
                      << " pc=0x" << std::hex << dbgPc
                      << " ra=0x" << dbgRa
                      << " sp=0x" << dbgSp
                      << " gp=0x" << dbgGp
                      << " dispfb1=0x" << gs.dispfb1
                      << " display1=0x" << gs.display1
                      << std::dec
                      << " activeThreads=" << activeThreads
                      << " dma=" << curDma
                      << " gif=" << curGif
                      << " gsw=" << curGs
                      << " vif=" << curVif
                      << std::endl;
        }
        if (traceKofxiFrameStateEnabled() && (tick % 60u) == 0u)
        {
            const uint8_t *rdram = m_memory.getRDRAM();
            const uint32_t dbgPc = m_debugPc.load(std::memory_order_relaxed);
            const uint32_t dbgRa = m_debugRa.load(std::memory_order_relaxed);
            std::cout << "[KOFXI:frame-state] tick=" << tick
                      << " pc=0x" << std::hex << dbgPc
                      << " ra=0x" << dbgRa
                      << " frameSleep=0x" << readGuestU32Wrapped(rdram, 0x0037304cu)
                      << " frameTid=0x" << readGuestU32Wrapped(rdram, 0x00373098u)
                      << " workerA=0x" << readGuestU32Wrapped(rdram, 0x0037309cu)
                      << " workerB=0x" << readGuestU32Wrapped(rdram, 0x003730a0u)
                      << " initCount=0x" << readGuestU32Wrapped(rdram, 0x00372ff4u)
                      << " irqGate=0x" << readGuestU32Wrapped(rdram, 0x0037310cu)
                      << " cbDepth=0x" << readGuestU32Wrapped(rdram, 0x0038e560u)
                      << " cbPending=0x" << readGuestU32Wrapped(rdram, 0x0038e564u)
                      << " resMgr=0x" << readGuestU32Wrapped(rdram, 0x00385320u)
                      << "/0x" << readGuestU32Wrapped(rdram, 0x00385324u)
                      << "/0x" << readGuestU32Wrapped(rdram, 0x0038532cu)
                      << "/0x" << readGuestU32Wrapped(rdram, 0x00385330u)
                      << "/0x" << readGuestU32Wrapped(rdram, 0x00385334u)
                      << " activeThreads=" << std::dec << g_activeThreads.load(std::memory_order_relaxed);
            appendKofxiResourceSlotSummary(std::cout, rdram);
            appendKofxiResourceCallbackSlotSummary(std::cout, rdram);
            appendKofxiChildResourceSummary(std::cout, rdram);
            std::cout << std::endl;
        }
        PS2_IF_AGRESSIVE_LOGS({
            if ((tick % 120) == 0)
            {
                uint64_t curDma = m_memory.dmaStartCount();
                uint64_t curGif = m_memory.gifCopyCount();
                uint64_t curGs = m_memory.gsWriteCount();
                uint64_t curVif = m_memory.vifWriteCount();
                const GSRegisters &gs = m_memory.gs();
                const uint32_t dbgPc = m_debugPc.load(std::memory_order_relaxed);
                const uint32_t dbgRa = m_debugRa.load(std::memory_order_relaxed);
                const uint32_t dbgSp = m_debugSp.load(std::memory_order_relaxed);
                const uint32_t dbgGp = m_debugGp.load(std::memory_order_relaxed);
                const int activeThreads = g_activeThreads.load(std::memory_order_relaxed);

                RUNTIME_LOG("[run:tick] tick=" << tick
                                               << " pc=0x" << std::hex << dbgPc
                                               << " ra=0x" << dbgRa
                                               << " sp=0x" << dbgSp
                                               << " gp=0x" << dbgGp
                                               << " dispfb1=0x" << gs.dispfb1
                                               << " display1=0x" << gs.display1
                                               << std::dec
                                               << " activeThreads=" << activeThreads
                                               << " dma=" << curDma
                                               << " gif=" << curGif
                                               << " gsw=" << curGs
                                               << " vif=" << curVif
                                               << std::endl);
            }
        });
        uint32_t presentWidth = FB_WIDTH;
        uint32_t presentHeight = DEFAULT_DISPLAY_HEIGHT;
        UploadFrame(frameTex, this, presentWidth, presentHeight);

        BeginDrawing();
        ClearBackground(BLACK);
        const float srcWidth = static_cast<float>(std::max<uint32_t>(1u, presentWidth));
        const float srcHeight = static_cast<float>(std::max<uint32_t>(1u, presentHeight));
        const float screenWidth = static_cast<float>(GetScreenWidth());
        const float screenHeight = static_cast<float>(GetScreenHeight());
        const float scale = std::min(screenWidth / srcWidth, screenHeight / srcHeight);
        const float dstWidth = srcWidth * scale;
        const float dstHeight = srcHeight * scale;
        const Rectangle srcRect{0.0f, 0.0f, srcWidth, srcHeight};
        const Rectangle dstRect{
            (screenWidth - dstWidth) * 0.5f,
            (screenHeight - dstHeight) * 0.5f,
            dstWidth,
            dstHeight};
        DrawTexturePro(frameTex, srcRect, dstRect, Vector2{0.0f, 0.0f}, 0.0f, WHITE);
        if (m_debugUiInitialized && m_debugUiDrawCallback)
        {
            m_debugUiDrawCallback(*this, m_debugUiUserData);
        }
        EndDrawing();

        if (WindowShouldClose())
        {
            RUNTIME_LOG("[run] window close requested, breaking out of loop");
            requestStop();
            break;
        }
    }

    requestStop();

    const auto joinDeadline = std::chrono::steady_clock::now() + std::chrono::seconds(2);
    while (!gameThreadFinished.load(std::memory_order_acquire) &&
           std::chrono::steady_clock::now() < joinDeadline)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    if (gameThread.joinable())
    {
        if (gameThreadFinished.load(std::memory_order_acquire))
        {
            gameThread.join();
        }
        else
        {
            std::cerr << "[run] game thread did not stop within timeout; detaching" << std::endl;
            gameThread.detach();
        }
    }

    const auto workerDeadline = std::chrono::steady_clock::now() + std::chrono::milliseconds(1000);
    while (g_activeThreads.load(std::memory_order_relaxed) > 0 &&
           std::chrono::steady_clock::now() < workerDeadline)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    if (g_activeThreads.load(std::memory_order_relaxed) > 0)
    {
        requestStop();
        const auto finalWorkerDeadline = std::chrono::steady_clock::now() + std::chrono::milliseconds(1000);
        while (g_activeThreads.load(std::memory_order_relaxed) > 0 &&
               std::chrono::steady_clock::now() < finalWorkerDeadline)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }

    if (g_activeThreads.load(std::memory_order_relaxed) == 0)
    {
        ps2_syscalls::joinAllGuestHostThreads();
    }
    else
    {
        std::cerr << "[run] guest host threads did not stop within timeout; detaching remaining worker threads"
                  << std::endl;
        ps2_syscalls::detachAllGuestHostThreads();
    }

    if (m_debugUiInitialized && m_debugUiShutdownCallback)
    {
        m_debugUiShutdownCallback(*this, m_debugUiUserData);
        m_debugUiInitialized = false;
    }
    UnloadTexture(frameTex);
    CloseWindow();

    const int remainingThreads = g_activeThreads.load(std::memory_order_relaxed);
    RUNTIME_LOG("[run] exiting loop, activeThreads=" << remainingThreads);
    if (remainingThreads > 0)
    {
        std::cerr << "[run] warning: " << remainingThreads
                  << " guest worker thread(s) still active during shutdown." << std::endl;
    }
}
