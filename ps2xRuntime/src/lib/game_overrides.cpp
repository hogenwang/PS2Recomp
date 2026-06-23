#include "game_overrides.h"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_runtime_calls.h"
#include "ps2_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_log.h"
#include <algorithm>
#include <array>
#include <atomic>
#include <cctype>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <initializer_list>
#include <iostream>
#include <mutex>
#include <optional>
#include <system_error>
#include <thread>
#include <unordered_map>
#include <vector>

namespace ps2_syscalls
{
    std::string resolvePs2PathForReadOpen(const char *ps2Path);
}

namespace
{
    std::mutex &registryMutex()
    {
        static std::mutex mutex;
        return mutex;
    }

    std::vector<ps2_game_overrides::Descriptor> &descriptorRegistry()
    {
        static std::vector<ps2_game_overrides::Descriptor> registry;
        return registry;
    }

    bool traceKofxiCallbackSlotEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_CALLBACK_SLOT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool kofxiCallbackYieldEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_CALLBACK_YIELD");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool kofxiHostFrameSleepEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_HOST_FRAME_SLEEP");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool traceKofxiFrameSleepEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_FRAME_SLEEP");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiFrameCallbackEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_FRAME_CALLBACK");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiBootProgressEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_BOOT_PROGRESS");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiWaitSyncEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_WAIT_SYNC");
        return value && value[0] != '\0' && value[0] != '0';
    }

    uint32_t kofxiWaitSyncTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_WAIT_SYNC_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 512u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 512u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 8192ul));
        }();
        return limit;
    }

    bool traceKofxiThreadManagerEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_THREAD_MANAGER");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiResourceInitLoopEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_INIT_LOOP");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiAsyncResourceEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_ASYNC_RESOURCE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiResourceHandleEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_HANDLE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiHandleObjectWorkerEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_HANDLE_OBJECT_WORKER");
        return value && value[0] != '\0' && value[0] != '0';
    }

    uint32_t kofxiHandleObjectWorkerTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_HANDLE_OBJECT_WORKER_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 768u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 768u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 4096ul));
        }();
        return limit;
    }

    bool traceKofxiAdxStreamOpenEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_ADXSTM_OPEN");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool kofxiAdxDefaultDeviceCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_ADX_DEFAULT_DEVICE_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool kofxiAdxDefaultDeviceForceEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_ADX_DEFAULT_DEVICE_FORCE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool kofxiAdxHostCdvCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_ADX_HOST_CDV_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool kofxiUpperResourceAttachCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_UPPER_RESOURCE_ATTACH_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool kofxiObjectServicePumpCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_OBJECT_SERVICE_PUMP_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiObjectServicePumpCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_OBJECT_SERVICE_PUMP_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiObjectManagerPollEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_OBJECT_MANAGER_POLL");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiObjectTaskEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_OBJECT_TASK");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool kofxiObjectBackingCompleteCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_OBJECT_BACKING_COMPLETE_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiObjectBackingCompleteCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_OBJECT_BACKING_COMPLETE_COMPAT");
        if (value && value[0] != '\0')
        {
            return value[0] != '0';
        }
        return traceKofxiObjectTaskEnabled();
    }

    bool traceKofxiObjectPumpStateEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_OBJECT_PUMP_STATE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool kofxiChildEmptyCompleteCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_CHILD_EMPTY_COMPLETE_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool traceKofxiChildEmptyCompleteCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_CHILD_EMPTY_COMPLETE_COMPAT");
        if (value && value[0] != '\0')
        {
            return value[0] != '0';
        }
        return traceKofxiObjectPumpStateEnabled();
    }

    bool kofxiUpperChildCompleteCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_UPPER_CHILD_COMPLETE_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiUpperChildCompleteCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_UPPER_CHILD_COMPLETE_COMPAT");
        if (value && value[0] != '\0')
        {
            return value[0] != '0';
        }
        return traceKofxiChildEmptyCompleteCompatEnabled();
    }

    bool kofxiPumpSlotConsumeCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_PUMP_SLOT_CONSUME_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool kofxiResourceProgressCompleteCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_RESOURCE_PROGRESS_COMPLETE_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool kofxiSdkVSyncCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_SDK_VSYNC_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool traceKofxiSdkVSyncCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_SDK_VSYNC_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiStreamWaitEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_STREAM_WAIT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiStreamInitEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_STREAM_INIT");
        if (value && value[0] != '\0')
        {
            return value[0] != '0';
        }
        return traceKofxiStreamWaitEnabled();
    }

    bool kofxiStreamPollSemaCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_STREAM_POLL_SEMA_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool traceKofxiStreamPollSemaCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_STREAM_POLL_SEMA_COMPAT");
        if (value && value[0] != '\0')
        {
            return value[0] != '0';
        }
        return traceKofxiStreamInitEnabled();
    }

    bool kofxiRenderQueueCounterGuardCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_RENDER_QUEUE_COUNTER_GUARD_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool traceKofxiRenderQueueCounterGuardCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_RENDER_QUEUE_COUNTER_GUARD_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiRenderQueueDrainEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_RENDER_QUEUE_DRAIN");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiMainLoopStateEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_MAIN_LOOP_STATE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiMainLoopGateStateEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_MAIN_GATE_STATE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiMainLoopSlotStateEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_MAIN_SLOT_STATE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiMainTaskTableEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_MAIN_TASK_TABLE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiObjectListAllocEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_OBJECT_LIST_ALLOC");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiObjectServiceEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_OBJECT_SERVICE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiBattleResourceStepEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_BATTLE_RESOURCE_STEP");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiBattleResourceRecordOnlyEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_BATTLE_RESOURCE_RECORD_ONLY");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiResourcePackageInstallEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_PACKAGE_INSTALL");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiResourceSlotCallbacksEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_SLOT_CALLBACKS");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiResourceDataChainEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_DATA_CHAIN");
        return value && value[0] != '\0' && value[0] != '0';
    }

    uint32_t kofxiObjectServiceTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_OBJECT_SERVICE_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 2048u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 2048u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 8192ul));
        }();
        return limit;
    }

    uint32_t kofxiBattleResourceStepTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_BATTLE_RESOURCE_STEP_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 2048u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 2048u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 8192ul));
        }();
        return limit;
    }

    uint32_t kofxiResourcePackageInstallTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_PACKAGE_INSTALL_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 512u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 512u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 4096ul));
        }();
        return limit;
    }

    uint32_t kofxiResourceSlotCallbacksTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_SLOT_CALLBACKS_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 384u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 384u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 4096ul));
        }();
        return limit;
    }

    uint32_t kofxiResourceDataChainTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_DATA_CHAIN_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 384u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 384u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 4096ul));
        }();
        return limit;
    }


    bool traceKofxiFrontendStateEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_FRONTEND_STATE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiScriptDispatchEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_SCRIPT_DISPATCH");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiFrontendBootstrapEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_FRONTEND_BOOTSTRAP");
        return value && value[0] != '\0' && value[0] != '0';
    }

    uint32_t kofxiFrontendBootstrapTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_FRONTEND_BOOTSTRAP_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 1536u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 1536u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 8192ul));
        }();
        return limit;
    }

    uint32_t kofxiFrontendBootstrapTraceStride()
    {
        static const uint32_t stride = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_FRONTEND_BOOTSTRAP_STRIDE");
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
        return stride;
    }

    bool kofxiFrontendAutoStartCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_FRONTEND_AUTO_START_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool kofxiFrontendBootstrapFastForwardCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_FRONTEND_BOOTSTRAP_FAST_FORWARD_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiFrontendBootstrapFastForwardCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_FRONTEND_BOOTSTRAP_FAST_FORWARD_COMPAT");
        if (value && value[0] != '\0')
        {
            return value[0] != '0';
        }
        return traceKofxiFrontendBootstrapEnabled();
    }

    bool traceKofxiFrontendDemoTimerEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_FRONTEND_DEMO_TIMER");
        return value && value[0] != '\0' && value[0] != '0';
    }

    uint32_t kofxiFrontendDemoTimerTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_FRONTEND_DEMO_TIMER_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 512u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 512u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 8192ul));
        }();
        return limit;
    }

    bool kofxiFrontendDemoTimerFastForwardCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_FRONTEND_DEMO_TIMER_FAST_FORWARD_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiFrontendDemoTimerFastForwardCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_FRONTEND_DEMO_TIMER_FAST_FORWARD_COMPAT");
        if (value && value[0] != '\0')
        {
            return value[0] != '0';
        }
        return traceKofxiFrontendDemoTimerEnabled();
    }

    uint32_t kofxiFrontendDemoTimerFastForwardValue()
    {
        static const uint32_t value = []()
        {
            const char *env = std::getenv("PS2X_KOFXI_FRONTEND_DEMO_TIMER_FAST_FORWARD_VALUE");
            if (!env || env[0] == '\0')
            {
                return 0x5ABu;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(env, &end, 0);
            if (end == env)
            {
                return 0x5ABu;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 0x100000ul));
        }();
        return value;
    }

    uint32_t kofxiMainLoopStateTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_MAIN_LOOP_STATE_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 1024u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 1024u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 8192ul));
        }();
        return limit;
    }

    uint32_t kofxiFrontendStateTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_FRONTEND_STATE_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 2048u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 2048u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 8192ul));
        }();
        return limit;
    }

    uint32_t kofxiScriptDispatchTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_SCRIPT_DISPATCH_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 1024u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 1024u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 4096ul));
        }();
        return limit;
    }

    uint32_t kofxiFrontendAutoStartFrames()
    {
        static const uint32_t frames = []()
        {
            const char *value = std::getenv("PS2X_KOFXI_FRONTEND_AUTO_START_FRAMES");
            if (!value || value[0] == '\0')
            {
                return 2u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 2u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 30ul));
        }();
        return frames;
    }

    uint16_t kofxiFrontendAutoStartMask()
    {
        static const uint16_t mask = []()
        {
            const char *value = std::getenv("PS2X_KOFXI_FRONTEND_AUTO_START_MASK");
            if (!value || value[0] == '\0')
            {
                return static_cast<uint16_t>(0x20A0u);
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return static_cast<uint16_t>(0x20A0u);
            }

            return static_cast<uint16_t>(parsed & 0xFFFFul);
        }();
        return mask;
    }

    uint32_t kofxiMainTaskTableTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_MAIN_TASK_TABLE_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 1024u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 1024u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 8192ul));
        }();
        return limit;
    }

    bool traceKofxiPumpSlotConsumeCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_PUMP_SLOT_CONSUME_COMPAT");
        if (value && value[0] != '\0')
        {
            return value[0] != '0';
        }
        return traceKofxiUpperChildCompleteCompatEnabled();
    }

    bool traceKofxiResourceProgressCompleteCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_PROGRESS_COMPLETE_COMPAT");
        if (value && value[0] != '\0')
        {
            return value[0] != '0';
        }
        return traceKofxiPumpSlotConsumeCompatEnabled();
    }

    bool traceKofxiControlServiceEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_CONTROL_SERVICE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiBackingLifecycleEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_BACKING_LIFECYCLE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiBackingDispatchEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_BACKING_DISPATCH");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool isKofxiBackingObjectAddress(uint32_t addr);
    uint32_t kofxiBackingObjectIndex(uint32_t backing);
    bool isKofxiCallbackResourceSlotAddress(uint32_t addr);
    bool isKofxiChildResourceAddress(uint32_t addr);
    uint32_t kofxiChildResourceIndex(uint32_t child);
    bool isKofxiControlObjectAddress(uint32_t addr);
    uint32_t findKofxiControlForBackingLoose(uint8_t *rdram, uint32_t backing);
    uint32_t findKofxiCallbackSlotForControl(uint8_t *rdram, uint32_t control);
    uint32_t findKofxiFirstFreeBackingIndex(uint8_t *rdram);
    void appendKofxiBackingTableSummary(std::ostream &out, uint8_t *rdram);
    void appendKofxiMainTaskTableSummary(std::ostream &out, uint8_t *rdram);
    void logKofxiBackingDispatch(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint32_t control,
        uint32_t backing,
        uint32_t driver,
        uint32_t slot,
        uint32_t upper,
        uint32_t result,
        uint32_t freeIndex,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3,
        uint32_t callRa,
        uint32_t callSp,
        uint8_t *rdram,
        R5900Context *ctx);

    uint32_t kofxiObjectServicePumpStepBudget()
    {
        static const uint32_t budget = []()
        {
            const char *value = std::getenv("PS2X_KOFXI_OBJECT_SERVICE_PUMP_STEPS");
            if (!value || value[0] == '\0')
            {
                return 0x100u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 0x100u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 0x2000ul));
        }();
        return budget;
    }

    uint32_t kofxiObjectServicePumpMaxAttemptsPerSlot()
    {
        static const uint32_t maxAttempts = []()
        {
            const char *value = std::getenv("PS2X_KOFXI_OBJECT_SERVICE_PUMP_MAX_ATTEMPTS");
            if (!value || value[0] == '\0')
            {
                return 8u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 8u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 32ul));
        }();
        return maxAttempts;
    }

    uint32_t kofxiPumpSlotConsumeMaxAttemptsPerSlot()
    {
        static const uint32_t maxAttempts = []()
        {
            const char *value = std::getenv("PS2X_KOFXI_PUMP_SLOT_CONSUME_MAX_ATTEMPTS");
            if (!value || value[0] == '\0')
            {
                return 64u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 64u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 256ul));
        }();
        return maxAttempts;
    }

    bool kofxiResourceWaitServiceCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_RESOURCE_WAIT_SERVICE_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool traceKofxiResourceWaitServiceCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_WAIT_SERVICE_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    uint32_t kofxiResourceWaitServiceStepBudget()
    {
        static const uint32_t budget = []()
        {
            const char *value = std::getenv("PS2X_KOFXI_RESOURCE_WAIT_SERVICE_STEPS");
            if (!value || value[0] == '\0')
            {
                return 0x40000u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 0x40000u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 0x40000ul));
        }();
        return budget;
    }

    bool kofxiResourceWaitStatusCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_RESOURCE_WAIT_STATUS_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool traceKofxiResourceWaitStatusCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_WAIT_STATUS_COMPAT");
        if (value && value[0] != '\0')
        {
            return value[0] != '0';
        }
        return traceKofxiResourceWaitServiceCompatEnabled();
    }

    bool traceKofxiUpperResourceCompatEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_UPPER_RESOURCE_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    std::string kofxiAdxDefaultDeviceName()
    {
        const char *value = std::getenv("PS2X_KOFXI_ADX_DEFAULT_DEVICE");
        std::string name = (value && value[0] != '\0') ? value : "MFS";
        std::transform(name.begin(), name.end(), name.begin(),
                       [](unsigned char c)
                       { return static_cast<char>(std::toupper(c)); });
        if (name != "MFS" && name != "CDV")
        {
            return "MFS";
        }
        return name;
    }

    bool traceKofxiCallbackResourceEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_CALLBACK_RESOURCE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool traceKofxiResourceCompletionEnabled()
    {
        const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_COMPLETION");
        return value && value[0] != '\0' && value[0] != '0';
    }

    uint32_t kofxiResourceCompletionTraceLimit()
    {
        static const uint32_t limit = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_RESOURCE_COMPLETION_LIMIT");
            if (!value || value[0] == '\0')
            {
                return 512u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 512u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 4096ul));
        }();
        return limit;
    }

    bool kofxiAsyncResourceSentinelCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_ASYNC_RESOURCE_SENTINEL_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool kofxiAsyncResourceHostAfsCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_ASYNC_RESOURCE_HOST_AFS_COMPAT");
        return !value || value[0] == '\0' || value[0] != '0';
    }

    bool kofxiAsyncResourceHostAfsPollCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_ASYNC_RESOURCE_HOST_AFS_POLL_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    uint32_t kofxiAsyncResourceHoldMicros()
    {
        static const uint32_t micros = []()
        {
            const char *value = std::getenv("PS2X_KOFXI_ASYNC_RESOURCE_HOLD_US");
            if (!value || value[0] == '\0')
            {
                return 0u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 0u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 0u, 100000u));
        }();
        return micros;
    }

    bool kofxiSchedulerModeCompatEnabled()
    {
        const char *value = std::getenv("PS2X_KOFXI_SCHEDULER_MODE_COMPAT");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool kofxiHostFrameSleepWaitsForVsync()
    {
        const char *value = std::getenv("PS2X_KOFXI_HOST_FRAME_SLEEP_VSYNC");
        return value && value[0] != '\0' && value[0] != '0';
    }

    uint32_t kofxiHostFrameSleepMicros()
    {
        static const uint32_t micros = []()
        {
            const char *value = std::getenv("PS2X_KOFXI_HOST_FRAME_SLEEP_US");
            if (!value || value[0] == '\0')
            {
                return 16667u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(value, &end, 0);
            if (end == value)
            {
                return 16667u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1u, 100000u));
        }();
        return micros;
    }

    bool kofxiHostFrameSleepReleasesGuestExecution()
    {
        const char *value = std::getenv("PS2X_KOFXI_HOST_FRAME_SLEEP_RELEASE");
        return value && value[0] != '\0' && value[0] != '0';
    }

    bool equalsIgnoreCaseAscii(std::string_view lhs, std::string_view rhs)
    {
        if (lhs.size() != rhs.size())
        {
            return false;
        }

        for (size_t i = 0; i < lhs.size(); ++i)
        {
            const auto l = static_cast<unsigned char>(lhs[i]);
            const auto r = static_cast<unsigned char>(rhs[i]);
            if (std::tolower(l) != std::tolower(r))
            {
                return false;
            }
        }

        return true;
    }

    std::string basenameFromPath(const std::string &path)
    {
        std::error_code ec;
        const std::filesystem::path fsPath(path);
        const std::filesystem::path leaf = fsPath.filename();
        if (leaf.empty())
        {
            return path;
        }
        return leaf.string();
    }

    uint32_t crc32Update(uint32_t crc, const uint8_t *data, size_t size)
    {
        static std::array<uint32_t, 256> table = []()
        {
            std::array<uint32_t, 256> values{};
            for (uint32_t i = 0; i < 256u; ++i)
            {
                uint32_t c = i;
                for (int bit = 0; bit < 8; ++bit)
                {
                    c = (c & 1u) ? (0xEDB88320u ^ (c >> 1u)) : (c >> 1u);
                }
                values[i] = c;
            }
            return values;
        }();

        uint32_t out = crc;
        for (size_t i = 0; i < size; ++i)
        {
            out = table[(out ^ data[i]) & 0xFFu] ^ (out >> 8u);
        }
        return out;
    }

    bool computeFileCrc32(const std::string &path, uint32_t &crcOut)
    {
        std::ifstream file(path, std::ios::binary);
        if (!file.is_open())
        {
            return false;
        }

        std::array<uint8_t, 4096> chunk{};
        uint32_t crc = 0xFFFFFFFFu;

        while (file.good())
        {
            file.read(reinterpret_cast<char *>(chunk.data()), static_cast<std::streamsize>(chunk.size()));
            const std::streamsize got = file.gcount();
            if (got <= 0)
            {
                break;
            }
            crc = crc32Update(crc, chunk.data(), static_cast<size_t>(got));
        }

        crcOut = ~crc;
        return true;
    }

    std::optional<PS2Runtime::RecompiledFunction> resolveHandlerByName(std::string_view handlerName)
    {
        const std::string_view resolvedSyscall = ps2_runtime_calls::resolveSyscallName(handlerName);
        if (!resolvedSyscall.empty())
        {
#define PS2_RESOLVE_SYSCALL(name)                   \
    if (resolvedSyscall == std::string_view{#name}) \
    {                                               \
        return &ps2_syscalls::name;                 \
    }
            PS2_SYSCALL_LIST(PS2_RESOLVE_SYSCALL)
#undef PS2_RESOLVE_SYSCALL
        }

        const std::string_view resolvedStub = ps2_runtime_calls::resolveStubName(handlerName);
        if (!resolvedStub.empty())
        {
#define PS2_RESOLVE_STUB(name)                   \
    if (resolvedStub == std::string_view{#name}) \
    {                                            \
        return &ps2_stubs::name;                 \
    }
            PS2_STUB_LIST(PS2_RESOLVE_STUB)
#undef PS2_RESOLVE_STUB
        }

        return std::nullopt;
    }

    bool readGuestU32(uint8_t *rdram, uint32_t addr, uint32_t &out)
    {
        uint8_t *ptr = getMemPtr(rdram, addr);
        if (!ptr)
        {
            return false;
        }

        std::memcpy(&out, ptr, sizeof(out));
        return true;
    }

    bool writeGuestU32(uint8_t *rdram, uint32_t addr, uint32_t value)
    {
        uint8_t *ptr = getMemPtr(rdram, addr);
        if (!ptr)
        {
            return false;
        }

        std::memcpy(ptr, &value, sizeof(value));
        return true;
    }

    bool writeGuestU16(uint8_t *rdram, uint32_t addr, uint16_t value)
    {
        uint8_t *ptr = getMemPtr(rdram, addr);
        if (!ptr)
        {
            return false;
        }

        std::memcpy(ptr, &value, sizeof(value));
        return true;
    }

    bool writeGuestU8(uint8_t *rdram, uint32_t addr, uint8_t value)
    {
        uint8_t *ptr = getMemPtr(rdram, addr);
        if (!ptr)
        {
            return false;
        }

        *ptr = value;
        return true;
    }

    bool writeGuestBytes(uint8_t *rdram, uint32_t addr, const uint8_t *data, size_t size)
    {
        if (size == 0u)
        {
            return true;
        }
        uint8_t *ptr = getMemPtr(rdram, addr);
        if (!ptr)
        {
            return false;
        }

        std::memcpy(ptr, data, size);
        return true;
    }

    bool zeroGuestBytes(uint8_t *rdram, uint32_t addr, size_t size)
    {
        if (size == 0u)
        {
            return true;
        }
        uint8_t *ptr = getMemPtr(rdram, addr);
        if (!ptr)
        {
            return false;
        }

        std::memset(ptr, 0, size);
        return true;
    }

    uint32_t readGuestU32OrZero(uint8_t *rdram, uint32_t addr)
    {
        uint32_t value = 0;
        (void)readGuestU32(rdram, addr, value);
        return value;
    }

    uint16_t readGuestU16OrZero(uint8_t *rdram, uint32_t addr)
    {
        uint8_t *ptr = getMemPtr(rdram, addr);
        if (!ptr)
        {
            return 0;
        }

        uint16_t value = 0;
        std::memcpy(&value, ptr, sizeof(value));
        return value;
    }

    uint8_t readGuestU8OrZero(uint8_t *rdram, uint32_t addr)
    {
        uint8_t *ptr = getMemPtr(rdram, addr);
        return ptr ? *ptr : 0;
    }

    std::string readGuestCString(uint8_t *rdram, uint32_t addr, size_t maxLength = 128u)
    {
        std::string out;
        if (!rdram || addr == 0u)
        {
            return out;
        }

        out.reserve(std::min<size_t>(maxLength, 32u));
        for (size_t i = 0; i < maxLength; ++i)
        {
            const uint8_t value = readGuestU8OrZero(rdram, addr + static_cast<uint32_t>(i));
            if (value == 0u)
            {
                break;
            }

            const auto ch = static_cast<unsigned char>(value);
            out.push_back(std::isprint(ch) ? static_cast<char>(ch) : '.');
        }
        return out;
    }

    void appendGuestWords(std::ostream &out, uint8_t *rdram, uint32_t addr, uint32_t words)
    {
        if (addr == 0u)
        {
            out << "0";
            return;
        }

        out << "0x" << addr << ":";
        for (uint32_t i = 0; i < words; ++i)
        {
            if (i != 0u)
            {
                out << "/";
            }
            out << "0x" << readGuestU32OrZero(rdram, addr + (i * 4u));
        }
    }

    void appendKofxiResourceSlotSummary(std::ostream &out, uint8_t *rdram)
    {
        constexpr uint32_t kResourceSlotBase = 0x0037F1D0u;
        constexpr uint32_t kResourceSlotStride = 0x238u;
        constexpr uint32_t kResourceSlotCount = 32u;

        uint32_t activeCount = 0u;
        out << " resourceSlots=";
        for (uint32_t slot = 0u; slot < kResourceSlotCount; ++slot)
        {
            const uint32_t base = kResourceSlotBase + slot * kResourceSlotStride;
            const uint32_t state0 = readGuestU8OrZero(rdram, base);
            const uint32_t state1 = readGuestU8OrZero(rdram, base + 1u);
            const uint32_t state4 = readGuestU8OrZero(rdram, base + 4u);
            const uint32_t cursor = readGuestU32OrZero(rdram, base + 0x20u);
            const uint32_t count = readGuestU32OrZero(rdram, base + 0x24u);
            if (state0 == 0u && state1 == 0u && state4 == 0u && cursor == 0u && count == 0u)
            {
                continue;
            }

            if (activeCount != 0u)
            {
                out << ",";
            }
            out << slot << ":"
                << state0 << "/" << state1 << "/" << state4
                << "/" << cursor << "/" << count;
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

    void appendKofxiResourceCallbackSlotSummary(std::ostream &out, uint8_t *rdram)
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
            const uint32_t state0 = readGuestU8OrZero(rdram, base);
            const uint32_t mode3 = readGuestU8OrZero(rdram, base + 3u);
            const uint32_t queue4 = readGuestU32OrZero(rdram, base + 4u);
            const uint32_t queue8 = readGuestU32OrZero(rdram, base + 8u);
            const uint32_t queueC = readGuestU32OrZero(rdram, base + 0xCu);
            const uint32_t object10 = readGuestU32OrZero(rdram, base + 0x10u);
            const uint32_t object14 = readGuestU32OrZero(rdram, base + 0x14u);
            const uint32_t buffer20 = readGuestU32OrZero(rdram, base + 0x20u);
            const uint32_t cursor24 = readGuestU32OrZero(rdram, base + 0x24u);
            const uint32_t source2C = readGuestU32OrZero(rdram, base + 0x2Cu);
            const uint32_t step30 = readGuestU32OrZero(rdram, base + 0x30u);
            const uint32_t span34 = readGuestU32OrZero(rdram, base + 0x34u);
            const uint32_t event94 = readGuestU32OrZero(rdram, base + 0x94u);
            const uint32_t tailB0 = readGuestU32OrZero(rdram, base + 0xB0u);
            const uint32_t object10Flags = object10 ? readGuestU32OrZero(rdram, object10) : 0u;
            const uint32_t object10Link = object10 ? readGuestU32OrZero(rdram, object10 + 0x4u) : 0u;
            const uint32_t object10State48 = object10 ? readGuestU8OrZero(rdram, object10 + 0x48u) : 0u;
            const uint32_t object10Busy49 = object10 ? readGuestU8OrZero(rdram, object10 + 0x49u) : 0u;
            const uint32_t object14Flags = object14 ? readGuestU32OrZero(rdram, object14) : 0u;
            const uint32_t object14Link = object14 ? readGuestU32OrZero(rdram, object14 + 0x4u) : 0u;
            const uint32_t object14State48 = object14 ? readGuestU8OrZero(rdram, object14 + 0x48u) : 0u;
            const uint32_t object14Busy49 = object14 ? readGuestU8OrZero(rdram, object14 + 0x49u) : 0u;
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

    bool shouldLogKofxiBootProgressCall(const char *name, uint8_t *rdram, R5900Context *ctx)
    {
        if (!name || std::string_view{name} != "kofxiGetSchedulerModeFlag")
        {
            return true;
        }

        static std::atomic<uint32_t> s_schedulerModeReadLogs{0u};
        const uint32_t index = s_schedulerModeReadLogs.fetch_add(1u, std::memory_order_relaxed);
        if (index < 64u)
        {
            return true;
        }

        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t schedulerMode = readGuestU32OrZero(rdram, 0x00372FF8u);
        if (schedulerMode != 0u || ra != 0x001B3F04u)
        {
            return index < 256u || (index & 0x3Fu) == 0u;
        }

        return (index & 0xFFu) == 0u;
    }

    std::mutex &kofxiTraceLogMutex()
    {
        static std::mutex mutex;
        return mutex;
    }

    void logKofxiCallbackSlot(const char *phase, const char *name, uint32_t entry, uint8_t *rdram, R5900Context *ctx)
    {
        if (!traceKofxiCallbackSlotEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 512u)
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t v1 = ctx ? getRegU32(ctx, 3) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:callback-slot] #" << index
                  << " " << phase
                  << " " << name
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " a0=0x" << a0
                  << " a1=0x" << a1
                  << " v0=0x" << v0
                  << " v1=0x" << v1
                  << " slot7fe0=0x" << readGuestU32OrZero(rdram, 0x01BF7FE0u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x01BF7FE4u)
                  << " slot7fe8=0x" << readGuestU32OrZero(rdram, 0x01BF7FE8u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x01BF7FECu)
                  << " slot7ff0=0x" << readGuestU32OrZero(rdram, 0x01BF7FF0u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x01BF7FF4u)
                  << " slot7ff8=0x" << readGuestU32OrZero(rdram, 0x01BF7FF8u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x01BF7FFCu)
                  << " depth=0x" << readGuestU32OrZero(rdram, 0x0038E560u)
                  << " pending=0x" << readGuestU32OrZero(rdram, 0x0038E564u)
                  << " gate=0x" << readGuestU32OrZero(rdram, 0x0037310Cu)
                  << " frameSleep=0x" << readGuestU32OrZero(rdram, 0x0037304Cu)
                  << std::dec << std::endl;
    }

    PS2Runtime::RecompiledFunction g_kofxiEnterCallbackCriticalFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiEnterCallbackCriticalCoreFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiLeaveCallbackCriticalFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiLeaveCallbackCriticalCoreFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiDeferredCallbackQueueRunnerFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiFrameEndCallbackDispatchFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiWaitVsyncOrPollCsrFn = nullptr;
    std::unordered_map<uint32_t, PS2Runtime::RecompiledFunction> g_kofxiWaitSyncPollFns;
    PS2Runtime::RecompiledFunction g_kofxiIopResourceRpcBindFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiIopResourceRpcCommandFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiInitializeDeferredCallbackQueuesFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiInstallDeferredCallbackSlotFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiInstallDeferredCallbackSlotCoreFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiSetSchedulerStateFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiDispatchSchedulerStateCallbacksFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiNormalizeSchedulerStateFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiWakeThreadUntilFlagClearsFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiWakePrimaryWorkerUntilFlagClearsFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiServiceSchedulerTickFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiVblankSchedulerDispatchFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiWorkerSchedulerTickFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiRunFrameSchedulerFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiRunFrameSchedulerResourceWaitFn = nullptr;
    void serviceKofxiResourceWaitHandle(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t callerReturnPc = 0u);
    PS2Runtime::RecompiledFunction g_kofxiInitFrameThreadManagerFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiInstallVblankSchedulerFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiStartFrameSchedulerSystemFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiStopFrameSchedulerSystemFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiRegisterFrameCallbackSlot0Fn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiDispatchFrameCallbackFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiThreadManagerInitFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiThreadCreateWorker0Fn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiThreadCreateWorker2Fn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiThreadCreateWorker3Fn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiThreadResumeIfSuspendedFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiThreadWakeIfSleepingFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiGetSchedulerModeFlagFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiThreadManagerInitResumeFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiWorkerThread0EntryFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiWorkerThread1EntryFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiWorkerThread2EntryFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiWorkerThread3EntryFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiWorkerThread4EntryFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiSyscallReferThreadStatusWrapperFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiSyscallWakeupThreadWrapperFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiSyscallResumeThreadWrapperFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiStartAsyncResourceLoadFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAsyncResourceCoreLoadFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAsyncResourceRegisterSlotFn = nullptr;
    std::array<std::atomic<uint32_t>, 64u> g_kofxiHostAfsHeaderPtrs{};
    std::array<std::atomic<uint32_t>, 64u> g_kofxiHostAfsHandlePtrs{};
    PS2Runtime::RecompiledFunction g_kofxiOpenResourcePartitionFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiInitializeResourceHandleFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiReadPartitionInfoFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiValidatePartitionSlotFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiPollAsyncResourceStatusFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandleGetStatusFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandleReadStatusByteFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandleUpdateProgressFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandleReadFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandleTickServiceFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandleLockedServiceAllFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandleServiceAllFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandleWaitLoopServiceFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandleServiceOneFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandleContinueReadFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandleCompleteReadFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceHandlePollCompletionFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiHandleObjectInitFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiHandleObjectLockStartFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiHandleObjectStartFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiHandleObjectDispatchFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiHandleObjectWaitFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiHandleObjectStatusFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiHandleObjectStatusByteFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAdxStreamOpenFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAdxResolveDeviceFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAdxStreamSlotAllocFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAdxCdvOpenFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAdxCdvCloseFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAdxCdvSeekFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAdxCdvTellFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAdxCdvReadFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAdxMfsOpenFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceCallbackAllocFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceCallbackReturnThunkFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiAsyncResourcePollTailFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceUnlockReturnThunkFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiUpperResourceAttachChildFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectManagerPollFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectServicePumpFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectTaskPollFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectStatusFromControlFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectStatusFromBackingFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectBackingStatusFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpCoreFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpLockedFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpServiceSlotFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpDispatchSlotFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpUpperWrite40Fn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpUpperWrite5cFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpSlotAdvanceFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpSlotMaintenanceFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpChildStatusFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpControlServiceFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpBackingPreServiceFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpBackingPostServiceFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpUpperStatusFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpGlobalServiceFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpChildTableScanFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectPumpChildServiceFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiPumpSlotConsumerFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiControlAllocFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiControlServiceAllFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiControlServiceOneFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiControlPrepareFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiControlRunStateOneFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiControlRunStateTwoFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiControlFinalizeFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiControlRunA0Fn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiControlRunA4Fn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiBackingLifecycleStepFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiBackingLifecycleInitFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiBackingParseSmallFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiBackingParseLargeFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiBackingHeaderProbeFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiBackingAllocDispatchFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiBackingCleanupDispatchFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiBackingWorkerDispatchFn = nullptr;

    struct KofxiResourceCallbackReturnHint
    {
        uint32_t callerSp = 0;
        uint32_t returnPc = 0;
        uint32_t allocPc = 0;
    };

    std::array<KofxiResourceCallbackReturnHint, 8> g_kofxiResourceCallbackReturnHints{};
    PS2Runtime::RecompiledFunction g_kofxiResourceCallbackSlotWalkFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceCallbackSlotProcessFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceObjectDestroyFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceObjectWaitFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceCompletionSetFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiInitializeIopResourceSystemFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceInitLoopBeginFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceInitLoopServiceTickFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceInitLoopRunFrameFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceInitLoopWaitVsyncFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceInitLoopAdvanceFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiResourceInitLoopExitFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiSdkVSyncFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiStreamPollSemaFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiStreamInitFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiStreamWaitFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiRenderQueueSubmitFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiRenderQueueDrainFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiRenderListProcessFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiRenderListEnqueueFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiRenderListClearFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectRenderQueueClearFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectRenderQueueEnqueueFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectRenderQueueProcessFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectListInitFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectListAllocFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiObjectListRemoveFn = nullptr;
    std::unordered_map<uint32_t, PS2Runtime::RecompiledFunction> g_kofxiObjectServiceTraceFns;
    std::unordered_map<uint32_t, PS2Runtime::RecompiledFunction> g_kofxiBattleResourceStepTraceFns;
    std::unordered_map<uint32_t, PS2Runtime::RecompiledFunction> g_kofxiResourcePackageInstallTraceFns;
    std::unordered_map<uint32_t, PS2Runtime::RecompiledFunction> g_kofxiResourceSlotCallbackTraceFns;
    std::unordered_map<uint32_t, PS2Runtime::RecompiledFunction> g_kofxiResourceDataChainTraceFns;
    PS2Runtime::RecompiledFunction g_kofxiScriptDispatchFn = nullptr;
    std::unordered_map<uint32_t, PS2Runtime::RecompiledFunction> g_kofxiFrontendTraceFns;
    std::unordered_map<uint32_t, PS2Runtime::RecompiledFunction> g_kofxiFrontendBootstrapTraceFns;
    PS2Runtime::RecompiledFunction g_kofxiFrontendDemoTimerFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiMainLoopFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiMainLoopGateFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiMainLoopSlotsFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiFrameFrontendFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiMainTaskSnapshotFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiMainTaskStatusFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiMainTaskSetStateFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiMainTaskProgressCheckFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiMainTaskConditionFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiMainTaskRpcStartFn = nullptr;
    PS2Runtime::RecompiledFunction g_kofxiMainTaskRpcCopyStartFn = nullptr;

    void runKofxiBootProgressCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime);

    void yieldKofxiGuestCallbacks(PS2Runtime *runtime)
    {
        if (!runtime || !kofxiCallbackYieldEnabled())
        {
            return;
        }

        PS2Runtime::GuestExecutionReleaseScope releaseGuestExecution(runtime);
        std::this_thread::yield();
    }

    void delayKofxiAsyncResourceScheduler()
    {
        const uint32_t holdMicros = kofxiAsyncResourceHoldMicros();
        if (holdMicros == 0u)
        {
            return;
        }

        std::this_thread::sleep_for(std::chrono::microseconds(holdMicros));
    }

    void runKofxiCallbackSlotCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        logKofxiCallbackSlot("enter", name, entry, rdram, ctx);
        yieldKofxiGuestCallbacks(runtime);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        yieldKofxiGuestCallbacks(runtime);
        logKofxiCallbackSlot("leave", name, entry, rdram, ctx);
    }

    void runKofxiDeferredCallbackTraceCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        logKofxiCallbackSlot("enter", name, entry, rdram, ctx);
        runKofxiBootProgressCall(name, entry, original, rdram, ctx, runtime);
        logKofxiCallbackSlot("leave", name, entry, rdram, ctx);
    }

    void kofxiTraceEnterCallbackCritical(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiCallbackSlotCall(
            "kofxiEnterCallbackCriticalSection",
            0x001CDB48u,
            g_kofxiEnterCallbackCriticalFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceEnterCallbackCriticalCore(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiCallbackSlotCall(
            "kofxiEnterCallbackCriticalSectionCore",
            0x001CDA58u,
            g_kofxiEnterCallbackCriticalCoreFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceLeaveCallbackCritical(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiCallbackSlotCall(
            "kofxiLeaveCallbackCriticalSection",
            0x001CDB60u,
            g_kofxiLeaveCallbackCriticalFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceLeaveCallbackCriticalCore(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiCallbackSlotCall(
            "kofxiLeaveCallbackCriticalSectionCore",
            0x001CDAB8u,
            g_kofxiLeaveCallbackCriticalCoreFn,
            rdram,
            ctx,
            runtime);
    }

    void logKofxiFrameCallbackDispatch(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiFrameCallbackEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 512u)
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:frame-callback] #" << index
                  << " " << phase
                  << " " << name
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " a0=0x" << a0
                  << " v0=0x" << v0
                  << " frameBegin=0x" << readGuestU32OrZero(rdram, 0x01BF8000u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x01BF8004u)
                  << " frameEnd=0x" << readGuestU32OrZero(rdram, 0x01BF8008u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x01BF800Cu)
                  << " uploadCb=0x" << readGuestU32OrZero(rdram, 0x01BF8010u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x01BF8014u)
                  << " frameSleep=0x" << readGuestU32OrZero(rdram, 0x0037304Cu)
                  << " irqGate=0x" << readGuestU32OrZero(rdram, 0x0037310Cu)
                  << std::dec << std::endl;
    }

    void runKofxiFrameCallbackDispatchCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        logKofxiFrameCallbackDispatch("enter", name, entry, rdram, ctx);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        logKofxiFrameCallbackDispatch("leave", name, entry, rdram, ctx);
    }

    void kofxiTraceDeferredCallbackQueueRunner(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiFrameCallbackDispatchCall(
            "kofxiDeferredCallbackQueueRunner",
            0x001CE458u,
            g_kofxiDeferredCallbackQueueRunnerFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceFrameEndCallbackDispatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiFrameCallbackDispatchCall(
            "kofxiFrameEndCallbackDispatch",
            0x001CE8E8u,
            g_kofxiFrameEndCallbackDispatchFn,
            rdram,
            ctx,
            runtime);
    }

    void logKofxiBootProgressCall(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        const std::string_view nameView{name ? name : ""};
        const bool traceBootProgress = traceKofxiBootProgressEnabled();
        const bool traceThreadManager =
            traceKofxiThreadManagerEnabled() &&
            (nameView.find("Thread") != std::string_view::npos ||
             nameView.find("Worker") != std::string_view::npos);

        if (!traceBootProgress && !traceThreadManager)
        {
            return;
        }
        if (traceBootProgress && !shouldLogKofxiBootProgressCall(name, rdram, ctx))
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 2048u)
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t v1 = ctx ? getRegU32(ctx, 3) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;
        const uint32_t a3 = ctx ? getRegU32(ctx, 7) : 0u;
        const uint32_t t0 = ctx ? getRegU32(ctx, 8) : 0u;
        const uint32_t t1 = ctx ? getRegU32(ctx, 9) : 0u;
        const uint32_t t2 = ctx ? getRegU32(ctx, 10) : 0u;
        const uint32_t t3 = ctx ? getRegU32(ctx, 11) : 0u;
        const uint32_t s0 = ctx ? getRegU32(ctx, 16) : 0u;
        const uint32_t s1 = ctx ? getRegU32(ctx, 17) : 0u;
        const uint32_t s2 = ctx ? getRegU32(ctx, 18) : 0u;
        const uint32_t s3 = ctx ? getRegU32(ctx, 19) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << (traceThreadManager && !traceBootProgress ? "[KOFXI:thread-manager] #" : "[KOFXI:boot-progress] #") << index
                  << " " << phase
                  << " " << name
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0=0x" << v0
                  << " v1=0x" << v1
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
                  << " s2=0x" << s2
                  << " s3=0x" << s3
                  << " csrMode=0x" << readGuestU32OrZero(rdram, 0x00358418u)
                  << " frameSchedulerCounter=0x" << readGuestU32OrZero(rdram, 0x00372360u)
                  << " workerWaitA=0x" << readGuestU32OrZero(rdram, 0x00373018u)
                  << " workerWaitB=0x" << readGuestU32OrZero(rdram, 0x0037301Cu)
                  << " workerScopeCount=0x" << readGuestU32OrZero(rdram, 0x00373030u)
                  << " workerLoopGate=0x" << readGuestU32OrZero(rdram, 0x00373034u)
                  << " workerTick0=0x" << readGuestU32OrZero(rdram, 0x00373050u)
                  << " workerTick1=0x" << readGuestU32OrZero(rdram, 0x00373058u)
                  << " workerTick2=0x" << readGuestU32OrZero(rdram, 0x00373060u)
                  << " workerTick3=0x" << readGuestU32OrZero(rdram, 0x00373068u)
                  << " workerTick4=0x" << readGuestU32OrZero(rdram, 0x00373070u)
                  << " workerTick5=0x" << readGuestU32OrZero(rdram, 0x00373078u)
                  << " vblankWakeA=0x" << readGuestU32OrZero(rdram, 0x00373038u)
                  << " schedulerModeMirror=0x" << readGuestU32OrZero(rdram, 0x0037303Cu)
                  << " vblankWakeB=0x" << readGuestU32OrZero(rdram, 0x00373040u)
                  << " frameSleep=0x" << readGuestU32OrZero(rdram, 0x0037304Cu)
                  << " vblankCounterLo=0x" << readGuestU32OrZero(rdram, 0x00373080u)
                  << " vblankCounterHi=0x" << readGuestU32OrZero(rdram, 0x00373084u)
                  << " vblankWorkerC=0x" << readGuestU32OrZero(rdram, 0x0037308Cu)
                  << " vblankWorkerA=0x" << readGuestU32OrZero(rdram, 0x00373090u)
                  << " vblankWorkerB=0x" << readGuestU32OrZero(rdram, 0x00373094u)
                  << " frameTid=0x" << readGuestU32OrZero(rdram, 0x00373098u)
                  << " workerA=0x" << readGuestU32OrZero(rdram, 0x0037309Cu)
                  << " workerB=0x" << readGuestU32OrZero(rdram, 0x003730A0u)
                  << " worker0Start=0x" << readGuestU32OrZero(rdram, 0x003730A8u)
                  << " worker0Done=0x" << readGuestU32OrZero(rdram, 0x003730B0u)
                  << " worker1Start=0x" << readGuestU32OrZero(rdram, 0x003730B8u)
                  << " worker1Done=0x" << readGuestU32OrZero(rdram, 0x003730C0u)
                  << " worker2Start=0x" << readGuestU32OrZero(rdram, 0x003730C8u)
                  << " worker2Done=0x" << readGuestU32OrZero(rdram, 0x003730D0u)
                  << " worker3Start=0x" << readGuestU32OrZero(rdram, 0x003730D8u)
                  << " worker3Done=0x" << readGuestU32OrZero(rdram, 0x003730E0u)
                  << " worker4Start=0x" << readGuestU32OrZero(rdram, 0x003730E8u)
                  << " worker4Done=0x" << readGuestU32OrZero(rdram, 0x003730F0u)
                  << " worker5Start=0x" << readGuestU32OrZero(rdram, 0x003730F8u)
                  << " worker5Done=0x" << readGuestU32OrZero(rdram, 0x00373100u)
                  << " workerInput=0x" << readGuestU32OrZero(rdram, 0x00373114u)
                  << " worker2TickPending=0x" << readGuestU32OrZero(rdram, 0x00373118u)
                  << " schedulerState=0x" << readGuestU32OrZero(rdram, 0x00372FE8u)
                  << " initCount=0x" << readGuestU32OrZero(rdram, 0x00372FF4u)
                  << " schedulerMode=0x" << readGuestU32OrZero(rdram, 0x00372FF8u)
                  << " irqGate=0x" << readGuestU32OrZero(rdram, 0x0037310Cu)
                  << " vblankInstallGate=0x" << readGuestU32OrZero(rdram, 0x00373108u)
                  << " vblankCallback=0x" << readGuestU32OrZero(rdram, 0x00373110u)
                  << " resA=0x" << readGuestU32OrZero(rdram, 0x00369D78u)
                  << " resB=0x" << readGuestU32OrZero(rdram, 0x00369D90u)
                  << " resC=0x" << readGuestU32OrZero(rdram, 0x00369D94u)
                  << " resD=0x" << readGuestU32OrZero(rdram, 0x00369D9Cu)
                  << " resE=0x" << readGuestU32OrZero(rdram, 0x00369DA0u)
                  << std::dec << std::endl;
    }

    void runKofxiBootProgressCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        logKofxiBootProgressCall("enter", name, entry, rdram, ctx);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        if (kofxiSchedulerModeCompatEnabled() && entry == 0x001B3638u && rdram && ctx)
        {
            constexpr uint32_t kSchedulerInitCount = 0x00372FF4u;
            constexpr uint32_t kSchedulerMode = 0x00372FF8u;
            constexpr uint32_t kFrameThreadId = 0x00373098u;
            constexpr uint32_t kPrimaryWorkerThreadId = 0x0037309Cu;
            constexpr uint32_t kSecondaryWorkerThreadId = 0x003730A0u;
            constexpr uint32_t kVblankSchedulerModeReadReturnPc = 0x001B3F04u;

            const uint32_t returnPc = ctx->pc;
            const uint32_t initCount = readGuestU32OrZero(rdram, kSchedulerInitCount);
            const uint32_t schedulerMode = readGuestU32OrZero(rdram, kSchedulerMode);
            const uint32_t frameThreadId = readGuestU32OrZero(rdram, kFrameThreadId);
            const uint32_t primaryWorkerThreadId = readGuestU32OrZero(rdram, kPrimaryWorkerThreadId);
            const uint32_t secondaryWorkerThreadId = readGuestU32OrZero(rdram, kSecondaryWorkerThreadId);
            if (returnPc == kVblankSchedulerModeReadReturnPc &&
                initCount != 0u &&
                schedulerMode == 0u &&
                frameThreadId != 0u &&
                primaryWorkerThreadId != 0u)
            {
                writeGuestU32(rdram, kSchedulerMode, 1u);
                SET_GPR_U32(ctx, 2, 1u);

                static std::atomic<uint32_t> s_schedulerModeCompatLogs{0u};
                const uint32_t logIndex = s_schedulerModeCompatLogs.fetch_add(1u, std::memory_order_relaxed);
                if (logIndex < 16u)
                {
                    std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
                    std::cerr << "[KOFXI:scheduler-mode-compat] promoted schedulerMode to 1"
                              << " pc=0x" << std::hex << ctx->pc
                              << " ra=0x" << getRegU32(ctx, 31)
                              << " initCount=0x" << initCount
                              << " frameTid=0x" << frameThreadId
                              << " workerA=0x" << primaryWorkerThreadId
                              << " workerB=0x" << secondaryWorkerThreadId
                              << std::dec << std::endl;
                }
            }
        }
        logKofxiBootProgressCall("leave", name, entry, rdram, ctx);
    }

    void logKofxiResourceInitLoop(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiResourceInitLoopEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 512u)
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;
        const uint32_t a3 = ctx ? getRegU32(ctx, 7) : 0u;
        const uint32_t s0 = ctx ? getRegU32(ctx, 16) : 0u;
        const uint32_t s1 = ctx ? getRegU32(ctx, 17) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:resource-init-loop] #" << index
                  << " " << phase
                  << " " << name
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0=0x" << v0
                  << " a0=0x" << a0
                  << " a1=0x" << a1
                  << " a2=0x" << a2
                  << " a3=0x" << a3
                  << " s0=0x" << s0
                  << " s1=0x" << s1
                  << " vblankCounterLo=0x" << readGuestU32OrZero(rdram, 0x00373080u)
                  << " frameSleep=0x" << readGuestU32OrZero(rdram, 0x0037304Cu)
                  << " initCount=0x" << readGuestU32OrZero(rdram, 0x00372FF4u)
                  << " schedulerMode=0x" << readGuestU32OrZero(rdram, 0x00372FF8u)
                  << " cbDepth=0x" << readGuestU32OrZero(rdram, 0x0038E560u)
                  << " cbPending=0x" << readGuestU32OrZero(rdram, 0x0038E564u)
                  << " irqGate=0x" << readGuestU32OrZero(rdram, 0x0037310Cu)
                  << " workerA=0x" << readGuestU32OrZero(rdram, 0x0037309Cu)
                  << " workerB=0x" << readGuestU32OrZero(rdram, 0x003730A0u)
                  << " resMgr=0x" << readGuestU32OrZero(rdram, 0x00385320u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x00385324u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x0038532Cu)
                  << "/0x" << readGuestU32OrZero(rdram, 0x00385330u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x00385334u);
        appendKofxiResourceSlotSummary(std::cerr, rdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    void runKofxiResourceInitLoopCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        logKofxiResourceInitLoop("enter", name, entry, rdram, ctx);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        logKofxiResourceInitLoop("leave", name, entry, rdram, ctx);
    }

    void logKofxiAsyncResource(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiAsyncResourceEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 512u)
        {
            return;
        }
        if (index >= 160u && (index & 0x1Fu) != 0u)
        {
            return;
        }

        constexpr uint32_t kAsyncProgressIndex = 0x003701C4u;
        constexpr uint32_t kAsyncActiveHandle = 0x003701C8u;
        constexpr uint32_t kAsyncActiveId = 0x003701CCu;
        constexpr uint32_t kAsyncStatus = 0x003701D0u;
        constexpr uint32_t kAsyncCurrentStream = 0x003701D8u;
        constexpr uint32_t kAsyncChunkCount = 0x003701DCu;
        constexpr uint32_t kAsyncSlotTable = 0x0036FC98u;

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;
        const uint32_t a3 = ctx ? getRegU32(ctx, 7) : 0u;
        const uint32_t t0 = ctx ? getRegU32(ctx, 8) : 0u;
        const uint32_t t1 = ctx ? getRegU32(ctx, 9) : 0u;
        const uint32_t activeId = readGuestU32OrZero(rdram, kAsyncActiveId);
        const uint32_t slotId = (activeId < 64u) ? activeId : a0;
        uint32_t slotPtr = 0u;
        if (slotId < 64u)
        {
            slotPtr = readGuestU32OrZero(rdram, kAsyncSlotTable + slotId * 4u);
        }
        const auto readSlot32 = [&](uint32_t offset) -> uint32_t
        {
            return slotPtr ? readGuestU32OrZero(rdram, slotPtr + offset) : 0u;
        };
        const auto readSlot16 = [&](uint32_t offset) -> uint16_t
        {
            return slotPtr ? readGuestU16OrZero(rdram, slotPtr + offset) : 0u;
        };
        const auto readSlot8 = [&](uint32_t offset) -> uint8_t
        {
            return slotPtr ? readGuestU8OrZero(rdram, slotPtr + offset) : 0u;
        };

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:async-resource] #" << index
                  << " " << phase
                  << " " << name
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " v0=0x" << v0
                  << " a0=0x" << a0
                  << " a1=0x" << a1
                  << " a2=0x" << a2
                  << " a3=0x" << a3
                  << " t0=0x" << t0
                  << " t1=0x" << t1
                  << " progress=0x" << readGuestU32OrZero(rdram, kAsyncProgressIndex)
                  << " activeHandle=0x" << readGuestU32OrZero(rdram, kAsyncActiveHandle)
                  << " activeId=0x" << activeId
                  << " status=0x" << readGuestU32OrZero(rdram, kAsyncStatus)
                  << " stream=0x" << readGuestU32OrZero(rdram, kAsyncCurrentStream)
                  << " chunks=0x" << readGuestU32OrZero(rdram, kAsyncChunkCount)
                  << " slotId=0x" << slotId
                  << " slotPtr=0x" << slotPtr
                  << " slotState=0x" << readSlot32(0u)
                  << " slotOffset=0x" << readSlot32(0x4u)
                  << " slotTotal=0x" << readSlot32(0x8u)
                  << " slotHalfCount=0x" << readSlot16(0xCu)
                  << " slotMode=0x" << static_cast<uint32_t>(readSlot8(0xFu))
                  << " slotResult=0x" << readSlot32(0x114u)
                  << " slotHeaderA=0x" << readSlot32(0x118u)
                  << " slotHeaderB=0x" << readSlot32(0x11Cu)
                  << std::dec << std::endl;
    }

    void runKofxiAsyncResourceCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        logKofxiAsyncResource("enter", name, entry, rdram, ctx);
        delayKofxiAsyncResourceScheduler();
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        delayKofxiAsyncResourceScheduler();
        logKofxiAsyncResource("leave", name, entry, rdram, ctx);
    }

    void logKofxiResourceHandle(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint32_t handle,
        uint32_t a1Snapshot,
        uint32_t a2Snapshot,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiResourceHandleEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 1024u)
        {
            return;
        }
        if (index >= 256u && (index & 0xFu) != 0u)
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t v1 = ctx ? getRegU32(ctx, 3) : 0u;
        const uint32_t obj = handle ? readGuestU32OrZero(rdram, handle + 0x4u) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:resource-handle] #" << index
                  << " " << phase
                  << " " << name
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0=0x" << v0
                  << " v1=0x" << v1
                  << " h=0x" << handle
                  << " a1=0x" << a1Snapshot
                  << " a2=0x" << a2Snapshot
                  << " hWord0=0x" << readGuestU32OrZero(rdram, handle)
                  << " h0=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle))
                  << " h1=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle + 1u))
                  << " h2=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle + 2u))
                  << " h3=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle + 3u))
                  << " obj=0x" << obj
                  << " hC=0x" << readGuestU32OrZero(rdram, handle + 0x0Cu)
                  << " h18=0x" << readGuestU32OrZero(rdram, handle + 0x18u)
                  << " h20=0x" << readGuestU32OrZero(rdram, handle + 0x20u)
                  << " h24=0x" << readGuestU32OrZero(rdram, handle + 0x24u)
                  << " h28=0x" << readGuestU32OrZero(rdram, handle + 0x28u);
        if (obj != 0u)
        {
            std::cerr << " obj0=0x" << readGuestU32OrZero(rdram, obj)
                      << " obj4=0x" << readGuestU32OrZero(rdram, obj + 0x4u)
                      << " obj8=0x" << readGuestU32OrZero(rdram, obj + 0x8u)
                      << " objC=0x" << readGuestU32OrZero(rdram, obj + 0xCu)
                      << " obj10=0x" << readGuestU32OrZero(rdram, obj + 0x10u)
                      << " obj14=0x" << readGuestU32OrZero(rdram, obj + 0x14u)
                      << " obj18=0x" << readGuestU32OrZero(rdram, obj + 0x18u)
                      << " obj1C=0x" << readGuestU32OrZero(rdram, obj + 0x1Cu)
                      << " obj20=0x" << readGuestU32OrZero(rdram, obj + 0x20u)
                      << " obj24=0x" << readGuestU32OrZero(rdram, obj + 0x24u);
        }
        appendKofxiResourceSlotSummary(std::cerr, rdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    void runKofxiResourceHandleCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        const uint32_t handle = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;
        logKofxiResourceHandle("enter", name, entry, handle, a1, a2, rdram, ctx);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        logKofxiResourceHandle("leave", name, entry, handle, a1, a2, rdram, ctx);
    }

    std::atomic<uint32_t> &kofxiResourceWaitServicedClosedHandle()
    {
        static std::atomic<uint32_t> marker{0u};
        return marker;
    }

    bool isKofxiCallbackResourceChildCompleteWaitCandidate(
        uint8_t *rdram,
        uint32_t handle,
        uint32_t status)
    {
        if (!rdram ||
            !isKofxiCallbackResourceSlotAddress(handle) ||
            (status != 1u && status != 2u))
        {
            return false;
        }

        const uint32_t state0 = readGuestU8OrZero(rdram, handle);
        const uint32_t state1 = readGuestU8OrZero(rdram, handle + 1u);
        const uint32_t child = readGuestU32OrZero(rdram, handle + 0x08u);
        if (state0 != 1u ||
            state1 != status ||
            !isKofxiChildResourceAddress(child))
        {
            return false;
        }

        return readGuestU8OrZero(rdram, child) == 1u &&
               readGuestU8OrZero(rdram, child + 1u) == 4u &&
               readGuestU8OrZero(rdram, child + 2u) == 0u &&
               readGuestU32OrZero(rdram, child + 0x24u) == 0u &&
               readGuestU32OrZero(rdram, child + 0x28u) == 0u &&
               readGuestU8OrZero(rdram, child + 0x45u) == 0u &&
               readGuestU8OrZero(rdram, child + 0x46u) == 0u &&
               readGuestU8OrZero(rdram, child + 0x47u) == 0u &&
               readGuestU8OrZero(rdram, child + 0x48u) == 0u &&
               readGuestU8OrZero(rdram, child + 0x49u) == 0u &&
               readGuestU32OrZero(rdram, child + 0x50u) == 0u &&
               readGuestU32OrZero(rdram, child + 0x54u) == 0u &&
               readGuestU32OrZero(rdram, child + 0x58u) == 0u;
    }

    bool shouldMapKofxiResourceWaitStatusComplete(
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t handle,
        uint32_t returnPc,
        uint32_t status)
    {
        if (!kofxiResourceWaitStatusCompatEnabled() || !rdram || !ctx)
        {
            return false;
        }

        constexpr uint32_t kActiveHandle = 0x0036F818u;
        if (returnPc != 0x0014AE60u && returnPc != 0x0014AEF8u)
        {
            return false;
        }

        if (handle != kActiveHandle)
        {
            return isKofxiCallbackResourceChildCompleteWaitCandidate(rdram, handle, status);
        }

        const uint32_t state0 = readGuestU8OrZero(rdram, handle);
        const uint32_t state1 = readGuestU8OrZero(rdram, handle + 1u);
        const uint32_t object = readGuestU32OrZero(rdram, handle + 0x04u);
        const uint32_t remaining0 = readGuestU32OrZero(rdram, handle + 0x20u);
        const uint32_t remaining1 = readGuestU32OrZero(rdram, handle + 0x24u);

        if (status == 0u &&
            kofxiResourceWaitServicedClosedHandle().load(std::memory_order_relaxed) != 0u &&
            state0 == 0u &&
            state1 == 0u &&
            object == 0u &&
            remaining0 == 0u &&
            remaining1 == 0u)
        {
            return true;
        }

        if (status != 1u)
        {
            return false;
        }

        if (state0 != 1u ||
            state1 != 1u ||
            remaining0 != 0u ||
            remaining1 != 0u)
        {
            return false;
        }

        if (object == 0u)
        {
            return true;
        }

        return readGuestU8OrZero(rdram, object) == 1u &&
               readGuestU8OrZero(rdram, object + 1u) == 1u &&
               readGuestU32OrZero(rdram, object + 0x20u) == 0u &&
               readGuestU32OrZero(rdram, object + 0x24u) == 0u;
    }

    void logKofxiResourceWaitStatusCompat(
        const char *phase,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t handle,
        uint32_t beforeStatus,
        uint32_t afterStatus,
        uint32_t returnPc)
    {
        if (!traceKofxiResourceWaitStatusCompatEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 128u)
        {
            return;
        }

        const uint32_t object = readGuestU32OrZero(rdram, handle + 0x04u);
        const bool callbackSlot = isKofxiCallbackResourceSlotAddress(handle);
        const uint32_t callbackChild = callbackSlot ? readGuestU32OrZero(rdram, handle + 0x08u) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:resource-wait-status-compat] #" << index
                  << " " << (phase ? phase : "")
                  << " pc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " ret=0x" << returnPc
                  << " handle=0x" << handle
                  << " callback=0x" << (callbackSlot ? 1u : 0u)
                  << " status=0x" << beforeStatus << "->0x" << afterStatus
                  << " h0/1/2/3=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle + 3u))
                  << " obj=0x" << object
                  << " h0c=0x" << readGuestU32OrZero(rdram, handle + 0x0Cu)
                  << " h18=0x" << readGuestU32OrZero(rdram, handle + 0x18u)
                  << " h20=0x" << readGuestU32OrZero(rdram, handle + 0x20u)
                  << " h24=0x" << readGuestU32OrZero(rdram, handle + 0x24u);
        if (callbackSlot)
        {
            std::cerr << " slot4/8/c=0x" << readGuestU32OrZero(rdram, handle + 0x04u)
                      << "/0x" << callbackChild
                      << "/0x" << readGuestU32OrZero(rdram, handle + 0x0Cu)
                      << " childSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, callbackChild))
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, callbackChild + 1u))
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, callbackChild + 2u))
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, callbackChild + 3u))
                      << " child24/28=0x" << readGuestU32OrZero(rdram, callbackChild + 0x24u)
                      << "/0x" << readGuestU32OrZero(rdram, callbackChild + 0x28u);
        }
        if (object != 0u)
        {
            std::cerr << " obj0/1=0x" << readGuestU32OrZero(rdram, object)
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 1u))
                      << " obj20/24=0x" << readGuestU32OrZero(rdram, object + 0x20u)
                      << "/0x" << readGuestU32OrZero(rdram, object + 0x24u);
        }
        appendKofxiResourceSlotSummary(std::cerr, rdram);
        if (callbackSlot)
        {
            appendKofxiResourceCallbackSlotSummary(std::cerr, rdram);
        }
        std::cerr << std::dec << std::endl;
    }

    void mapKofxiResourceWaitStatusComplete(
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t handle,
        uint32_t returnPc)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t status = getRegU32(ctx, 2);
        if (!shouldMapKofxiResourceWaitStatusComplete(rdram, ctx, handle, returnPc, status))
        {
            return;
        }

        SET_GPR_U32(ctx, 2, 3u);
        kofxiResourceWaitServicedClosedHandle().store(0u, std::memory_order_relaxed);
        logKofxiResourceWaitStatusCompat(
            status == 0u ? "mapped-closed" : "mapped",
            rdram,
            ctx,
            handle,
            status,
            3u,
            returnPc);
    }

    uint32_t selectKofxiResourceHandleServiceHandle(uint32_t entry, uint8_t *rdram, R5900Context *ctx)
    {
        constexpr uint32_t kHandleTableFirst = 0x0036F818u;

        if (!ctx)
        {
            return kHandleTableFirst;
        }

        switch (entry)
        {
        case 0x001B04D0u:
            return getRegU32(ctx, 4);
        case 0x001B0518u:
        case 0x001B0538u:
        case 0x001B0570u:
            return getRegU32(ctx, 17);
        case 0x001B0610u:
            return getRegU32(ctx, 4);
        case 0x001B0638u:
        case 0x001B064Cu:
        case 0x001B06A0u:
        case 0x001B06B8u:
        case 0x001B06D0u:
        case 0x001B06E8u:
            return getRegU32(ctx, 16);
        case 0x001B0B30u:
            return getRegU32(ctx, 4);
        case 0x001B0B5Cu:
        case 0x001B0B70u:
        case 0x001B0BC0u:
        case 0x001B0BE4u:
        case 0x001B0C04u:
            return getRegU32(ctx, 16);
        case 0x001B0D20u:
            return getRegU32(ctx, 4);
        case 0x001B0D50u:
        case 0x001B0D5Cu:
        case 0x001B0D88u:
        case 0x001B0DA0u:
        case 0x001B0DC8u:
            return getRegU32(ctx, 16);
        case 0x001B05B0u:
            return kHandleTableFirst;
        case 0x001B05D8u:
        case 0x001B05ECu:
            return getRegU32(ctx, 16);
        case 0x001AEBC0u:
        case 0x001AEBE8u:
        case 0x001AEC78u:
        case 0x001B0588u:
        case 0x001B0598u:
        case 0x001B05A0u:
        default:
            break;
        }

        const uint32_t a0 = getRegU32(ctx, 4);
        if (a0 >= kHandleTableFirst && a0 < kHandleTableFirst + 16u * 0x48u)
        {
            return a0;
        }

        return rdram ? kHandleTableFirst : 0u;
    }

    void runKofxiResourceHandleServiceCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        const uint32_t handle = selectKofxiResourceHandleServiceHandle(entry, rdram, ctx);
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;
        logKofxiResourceHandle("enter", name, entry, handle, a1, a2, rdram, ctx);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        logKofxiResourceHandle("leave", name, entry, handle, a1, a2, rdram, ctx);
    }

    bool isLikelyGuestCString(const std::string &value);

    void appendKofxiHandleObjectWorkerHandle(std::ostream &out, uint8_t *rdram, const char *label, uint32_t handle)
    {
        if (handle == 0u)
        {
            return;
        }

        const uint32_t object = readGuestU32OrZero(rdram, handle + 0x04u);
        out << " " << label << "=0x" << handle
            << " hBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle))
            << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle + 1u))
            << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle + 2u))
            << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, handle + 3u))
            << " hObj=0x" << object
            << " h0c=0x" << readGuestU32OrZero(rdram, handle + 0x0Cu)
            << " h10=0x" << readGuestU32OrZero(rdram, handle + 0x10u)
            << " h14=0x" << readGuestU32OrZero(rdram, handle + 0x14u)
            << " h18=0x" << readGuestU32OrZero(rdram, handle + 0x18u)
            << " h24=0x" << readGuestU32OrZero(rdram, handle + 0x24u)
            << " h34=0x" << readGuestU32OrZero(rdram, handle + 0x34u)
            << " h38=0x" << readGuestU32OrZero(rdram, handle + 0x38u)
            << " h3c=0x" << readGuestU32OrZero(rdram, handle + 0x3Cu)
            << " h40=0x" << readGuestU32OrZero(rdram, handle + 0x40u)
            << " h44=0x" << readGuestU32OrZero(rdram, handle + 0x44u);
    }

    void appendKofxiHandleObjectWorkerObject(std::ostream &out, uint8_t *rdram, const char *label, uint32_t object)
    {
        if (object == 0u)
        {
            return;
        }

        const uint32_t pathPtr = readGuestU32OrZero(rdram, object + 0x50u);
        out << " " << label << "=0x" << object
            << " objBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object))
            << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 1u))
            << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x45u))
            << " obj0=0x" << readGuestU32OrZero(rdram, object)
            << " obj04=0x" << readGuestU32OrZero(rdram, object + 0x04u)
            << " obj08=0x" << readGuestU32OrZero(rdram, object + 0x08u)
            << " obj0c=0x" << readGuestU32OrZero(rdram, object + 0x0Cu)
            << " obj10=0x" << readGuestU32OrZero(rdram, object + 0x10u)
            << " obj14=0x" << readGuestU32OrZero(rdram, object + 0x14u)
            << " obj18=0x" << readGuestU32OrZero(rdram, object + 0x18u)
            << " obj1c=0x" << readGuestU32OrZero(rdram, object + 0x1Cu)
            << " obj20=0x" << readGuestU32OrZero(rdram, object + 0x20u)
            << " obj24=0x" << readGuestU32OrZero(rdram, object + 0x24u)
            << " obj2c=0x" << readGuestU32OrZero(rdram, object + 0x2Cu)
            << " obj50=0x" << pathPtr
            << " obj54=0x" << readGuestU32OrZero(rdram, object + 0x54u)
            << " obj58=0x" << readGuestU32OrZero(rdram, object + 0x58u)
            << " obj5c=0x" << readGuestU32OrZero(rdram, object + 0x5Cu);
        const std::string path = readGuestCString(rdram, pathPtr, 96u);
        if (isLikelyGuestCString(path))
        {
            out << " path=\"" << path << "\"";
        }
    }

    uint32_t selectKofxiHandleObjectWorkerHandle(uint32_t entry, R5900Context *ctx)
    {
        if (!ctx)
        {
            return 0u;
        }

        switch (entry)
        {
        case 0x001B0270u:
            return getRegU32(ctx, 4);
        case 0x001B02A8u:
        case 0x001B02CCu:
        case 0x001B02FCu:
        case 0x001B0304u:
        case 0x001B0318u:
            return getRegU32(ctx, 17);
        default:
            return 0u;
        }
    }

    uint32_t selectKofxiHandleObjectWorkerObject(uint32_t entry, uint8_t *rdram, R5900Context *ctx, uint32_t handle)
    {
        if (!ctx)
        {
            return handle ? readGuestU32OrZero(rdram, handle + 0x04u) : 0u;
        }

        switch (entry)
        {
        case 0x001B69D8u:
        case 0x001B6A48u:
        case 0x001B6AC0u:
        case 0x001B6B30u:
        case 0x001B6C60u:
        case 0x001B6C98u:
            return getRegU32(ctx, 4);
        case 0x001B6A0Cu:
        case 0x001B6A24u:
        case 0x001B6A7Cu:
        case 0x001B6AF4u:
        case 0x001B6B0Cu:
        case 0x001B6B44u:
        case 0x001B6B48u:
        case 0x001B6B50u:
        case 0x001B6C74u:
        case 0x001B6C7Cu:
        case 0x001B6C84u:
            return getRegU32(ctx, 16);
        default:
            return handle ? readGuestU32OrZero(rdram, handle + 0x04u) : 0u;
        }
    }

    void logKofxiHandleObjectWorker(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint32_t handle,
        uint32_t object,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiHandleObjectWorkerEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        const uint32_t limit = kofxiHandleObjectWorkerTraceLimit();
        if (index >= limit)
        {
            return;
        }
        if (index >= 256u && (index & 0xFu) != 0u)
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t v1 = ctx ? getRegU32(ctx, 3) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;
        const uint32_t a3 = ctx ? getRegU32(ctx, 7) : 0u;
        const uint32_t t0 = ctx ? getRegU32(ctx, 8) : 0u;
        const uint32_t t1 = ctx ? getRegU32(ctx, 9) : 0u;
        const uint32_t t2 = ctx ? getRegU32(ctx, 10) : 0u;
        const uint32_t t3 = ctx ? getRegU32(ctx, 11) : 0u;
        const uint32_t s0 = ctx ? getRegU32(ctx, 16) : 0u;
        const uint32_t s1 = ctx ? getRegU32(ctx, 17) : 0u;
        const uint32_t s2 = ctx ? getRegU32(ctx, 18) : 0u;
        const uint32_t s3 = ctx ? getRegU32(ctx, 19) : 0u;
        const uint32_t s4 = ctx ? getRegU32(ctx, 20) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:handle-object-worker] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0=0x" << v0
                  << " v1=0x" << v1
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " t=0x" << t0 << "/0x" << t1 << "/0x" << t2 << "/0x" << t3
                  << " s=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3 << "/0x" << s4;
        appendKofxiHandleObjectWorkerHandle(std::cerr, rdram, "handle", handle);
        appendKofxiHandleObjectWorkerObject(std::cerr, rdram, "object", object);
        if (index < 128u || ((index & 0x1Fu) == 0u))
        {
            appendKofxiResourceSlotSummary(std::cerr, rdram);
            appendKofxiResourceCallbackSlotSummary(std::cerr, rdram);
        }
        std::cerr << std::dec << std::endl;
    }

    void runKofxiHandleObjectWorkerCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        const uint32_t handle = selectKofxiHandleObjectWorkerHandle(entry, ctx);
        const uint32_t object = selectKofxiHandleObjectWorkerObject(entry, rdram, ctx, handle);
        logKofxiHandleObjectWorker("enter", name, entry, handle, object, rdram, ctx);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        logKofxiHandleObjectWorker("leave", name, entry, handle, object, rdram, ctx);
    }

    bool tryKofxiAdxDefaultDeviceCompat(uint8_t *rdram, uint32_t pathPtr);
    bool tryKofxiHostCdvOpen(uint8_t *rdram, R5900Context *ctx, uint32_t pathPtr);
    bool tryKofxiHostCdvClose(R5900Context *ctx);
    bool tryKofxiHostCdvSeek(R5900Context *ctx);
    bool tryKofxiHostCdvTell(R5900Context *ctx);
    bool tryKofxiHostCdvRead(uint8_t *rdram, R5900Context *ctx);

    void logKofxiAdxStreamOpen(
        const char *phase,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t pathPtr,
        uint32_t modePtr,
        uint32_t option)
    {
        if (!traceKofxiAdxStreamOpenEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 256u)
        {
            return;
        }

        constexpr uint32_t kStreamSlotBase = 0x01BF5450u;
        constexpr uint32_t kStreamSlotStride = 8u;
        constexpr uint32_t kStreamSlotCount = 40u;
        constexpr uint32_t kDeviceBase = 0x01BF5594u;
        constexpr uint32_t kDeviceStride = 0x10u;
        constexpr uint32_t kDefaultDeviceAddr = 0x01BF5790u;

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t v1 = ctx ? getRegU32(ctx, 3) : 0u;
        const uint32_t s0 = ctx ? getRegU32(ctx, 16) : 0u;
        const uint32_t s1 = ctx ? getRegU32(ctx, 17) : 0u;
        const uint32_t s2 = ctx ? getRegU32(ctx, 18) : 0u;
        const uint32_t s3 = ctx ? getRegU32(ctx, 19) : 0u;
        const uint32_t s4 = ctx ? getRegU32(ctx, 20) : 0u;
        const uint32_t stackDeviceBuf = sp;
        const uint32_t stackPathBuf = sp + 0x130u;

        uint32_t activeSlots = 0u;
        uint32_t firstFreeSlot = 0xFFFFFFFFu;
        for (uint32_t i = 0u; i < kStreamSlotCount; ++i)
        {
            const uint32_t slot = kStreamSlotBase + i * kStreamSlotStride;
            if (readGuestU32OrZero(rdram, slot) != 0u)
            {
                ++activeSlots;
            }
            else if (firstFreeSlot == 0xFFFFFFFFu)
            {
                firstFreeSlot = i;
            }
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:adxstm-open] #" << index
                  << " " << (phase ? phase : "?")
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0/v1=0x" << v0 << "/0x" << v1
                  << " s0-s4=0x" << s0 << "/0x" << s1 << "/0x" << s2 << "/0x" << s3 << "/0x" << s4
                  << " path=0x" << pathPtr << " '" << readGuestCString(rdram, pathPtr, 320u) << "'"
                  << " mode=0x" << modePtr << " '" << readGuestCString(rdram, modePtr, 64u) << "'"
                  << " opt=0x" << option
                  << " stackDev=0x" << stackDeviceBuf << " '" << readGuestCString(rdram, stackDeviceBuf, 64u) << "'"
                  << " stackPath=0x" << stackPathBuf << " '" << readGuestCString(rdram, stackPathBuf, 320u) << "'"
                  << " defaultDev=0x" << kDefaultDeviceAddr << " '" << readGuestCString(rdram, kDefaultDeviceAddr, 16u) << "'"
                  << " s0str='" << readGuestCString(rdram, s0, 64u) << "'"
                  << " s1str='" << readGuestCString(rdram, s1, 64u) << "'"
                  << " slotsActive=0x" << activeSlots
                  << " firstFree=0x" << firstFreeSlot;

        for (uint32_t i = 0u; i < kStreamSlotCount; ++i)
        {
            const uint32_t slot = kStreamSlotBase + i * kStreamSlotStride;
            const uint32_t descriptor = readGuestU32OrZero(rdram, slot);
            const uint32_t cookie = readGuestU32OrZero(rdram, slot + 4u);
            if (descriptor == 0u && cookie == 0u)
            {
                continue;
            }

            std::cerr << " stream" << i
                      << "={slot=0x" << slot
                      << " desc=0x" << descriptor
                      << " cookie=0x" << cookie
                      << " open=0x" << (descriptor ? readGuestU32OrZero(rdram, descriptor + 0x10u) : 0u)
                      << "}";
        }

        for (uint32_t i = 0u; i < 8u; ++i)
        {
            const uint32_t nameAddr = kDeviceBase + i * kDeviceStride;
            const uint32_t descriptor = readGuestU32OrZero(rdram, nameAddr - 4u);
            std::cerr << " dev" << i
                      << "={nameAddr=0x" << nameAddr
                      << " name='" << readGuestCString(rdram, nameAddr, kDeviceStride) << "'"
                      << " raw=0x" << readGuestU32OrZero(rdram, nameAddr)
                      << "/0x" << readGuestU32OrZero(rdram, nameAddr + 4u)
                      << "/0x" << readGuestU32OrZero(rdram, nameAddr + 8u)
                      << "/0x" << readGuestU32OrZero(rdram, nameAddr + 0xCu)
                      << " desc=0x" << descriptor
                      << " d0/4/8/c=0x" << (descriptor ? readGuestU32OrZero(rdram, descriptor) : 0u)
                      << "/0x" << (descriptor ? readGuestU32OrZero(rdram, descriptor + 4u) : 0u)
                      << "/0x" << (descriptor ? readGuestU32OrZero(rdram, descriptor + 8u) : 0u)
                      << "/0x" << (descriptor ? readGuestU32OrZero(rdram, descriptor + 0xCu) : 0u)
                      << " open/close/read/seek=0x"
                      << (descriptor ? readGuestU32OrZero(rdram, descriptor + 0x10u) : 0u)
                      << "/0x" << (descriptor ? readGuestU32OrZero(rdram, descriptor + 0x14u) : 0u)
                      << "/0x" << (descriptor ? readGuestU32OrZero(rdram, descriptor + 0x18u) : 0u)
                      << "/0x" << (descriptor ? readGuestU32OrZero(rdram, descriptor + 0x1Cu) : 0u)
                      << "}";
        }

        appendKofxiResourceSlotSummary(std::cerr, rdram);
        appendKofxiResourceCallbackSlotSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    void kofxiTraceAdxStreamOpen(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const bool resume = ctx && ctx->pc != 0x001BE778u;
        const uint32_t pathPtr = ctx ? (resume ? getRegU32(ctx, 17) : getRegU32(ctx, 4)) : 0u;
        const uint32_t modePtr = ctx ? (resume ? getRegU32(ctx, 19) : getRegU32(ctx, 5)) : 0u;
        const uint32_t option = ctx ? (resume ? getRegU32(ctx, 20) : getRegU32(ctx, 6)) : 0u;

        logKofxiAdxStreamOpen("enter", rdram, ctx, pathPtr, modePtr, option);
        (void)tryKofxiAdxDefaultDeviceCompat(rdram, pathPtr);
        if (g_kofxiAdxStreamOpenFn)
        {
            g_kofxiAdxStreamOpenFn(rdram, ctx, runtime);
        }
        logKofxiAdxStreamOpen("leave", rdram, ctx, pathPtr, modePtr, option);
    }

    void logKofxiAdxResolveDevice(
        const char *phase,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t devicePtr,
        uint32_t pathPtr,
        uint32_t option)
    {
        if (!traceKofxiAdxStreamOpenEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 384u)
        {
            return;
        }

        constexpr uint32_t kDefaultDeviceAddr = 0x01BF5790u;
        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:adxstm-resolve] #" << index
                  << " " << (phase ? phase : "?")
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0=0x" << v0
                  << " a0/a1/a2=0x" << a0 << "/0x" << a1 << "/0x" << a2
                  << " device=0x" << devicePtr << " '" << readGuestCString(rdram, devicePtr, 64u) << "'"
                  << " path=0x" << pathPtr << " '" << readGuestCString(rdram, pathPtr, 320u) << "'"
                  << " opt=0x" << option
                  << " defaultDev=0x" << kDefaultDeviceAddr << " '" << readGuestCString(rdram, kDefaultDeviceAddr, 16u) << "'"
                  << " retDesc=0x" << v0
                  << " retOpen=0x" << (v0 ? readGuestU32OrZero(rdram, v0 + 0x10u) : 0u)
                  << " retRead=0x" << (v0 ? readGuestU32OrZero(rdram, v0 + 0x18u) : 0u)
                  << " retSeek=0x" << (v0 ? readGuestU32OrZero(rdram, v0 + 0x1Cu) : 0u)
                  << std::dec << std::endl;
    }

    void kofxiTraceAdxResolveDevice(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const bool resume = ctx && ctx->pc != 0x001BE6D0u;
        const uint32_t devicePtr = ctx ? (resume ? getRegU32(ctx, 17) : getRegU32(ctx, 4)) : 0u;
        const uint32_t pathPtr = ctx ? (resume ? getRegU32(ctx, 18) : getRegU32(ctx, 5)) : 0u;
        const uint32_t option = ctx ? (resume ? getRegU32(ctx, 19) : getRegU32(ctx, 6)) : 0u;

        logKofxiAdxResolveDevice("enter", rdram, ctx, devicePtr, pathPtr, option);
        if (g_kofxiAdxResolveDeviceFn)
        {
            g_kofxiAdxResolveDeviceFn(rdram, ctx, runtime);
        }
        logKofxiAdxResolveDevice("leave", rdram, ctx, devicePtr, pathPtr, option);
    }

    void logKofxiAdxStreamSlotAlloc(const char *phase, uint8_t *rdram, R5900Context *ctx)
    {
        if (!traceKofxiAdxStreamOpenEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 192u)
        {
            return;
        }

        constexpr uint32_t kStreamSlotBase = 0x01BF5450u;
        constexpr uint32_t kStreamSlotStride = 8u;
        constexpr uint32_t kStreamSlotCount = 40u;
        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t v1 = ctx ? getRegU32(ctx, 3) : 0u;
        uint32_t activeSlots = 0u;
        for (uint32_t i = 0u; i < kStreamSlotCount; ++i)
        {
            if (readGuestU32OrZero(rdram, kStreamSlotBase + i * kStreamSlotStride) != 0u)
            {
                ++activeSlots;
            }
        }
        const uint32_t slotIndex =
            (v0 >= kStreamSlotBase && v0 < kStreamSlotBase + kStreamSlotCount * kStreamSlotStride)
                ? (v0 - kStreamSlotBase) / kStreamSlotStride
                : 0xFFFFFFFFu;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:adxstm-slot-alloc] #" << index
                  << " " << (phase ? phase : "?")
                  << " pc=0x" << std::hex << pc
                  << " ra=0x" << ra
                  << " v0=0x" << v0
                  << " v1=0x" << v1
                  << " a0=0x" << a0
                  << " slotIndex=0x" << slotIndex
                  << " active=0x" << activeSlots
                  << std::dec << std::endl;
    }

    void kofxiTraceAdxStreamSlotAlloc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        logKofxiAdxStreamSlotAlloc("enter", rdram, ctx);
        if (g_kofxiAdxStreamSlotAllocFn)
        {
            g_kofxiAdxStreamSlotAllocFn(rdram, ctx, runtime);
        }
        logKofxiAdxStreamSlotAlloc("leave", rdram, ctx);
    }

    void logKofxiAdxDeviceOpen(
        const char *phase,
        const char *deviceName,
        uint32_t entry,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t pathPtr,
        uint32_t modePtr,
        uint32_t option)
    {
        if (!traceKofxiAdxStreamOpenEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 512u)
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:adxstm-device-open] #" << index
                  << " " << (phase ? phase : "?")
                  << " " << (deviceName ? deviceName : "?")
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0=0x" << v0
                  << " a0/a1/a2=0x" << a0 << "/0x" << a1 << "/0x" << a2
                  << " path=0x" << pathPtr << " '" << readGuestCString(rdram, pathPtr, 320u) << "'"
                  << " mode=0x" << modePtr << " '" << readGuestCString(rdram, modePtr, 64u) << "'"
                  << " opt=0x" << option
                  << " ret0/4/8/c=0x" << (v0 ? readGuestU32OrZero(rdram, v0) : 0u)
                  << "/0x" << (v0 ? readGuestU32OrZero(rdram, v0 + 4u) : 0u)
                  << "/0x" << (v0 ? readGuestU32OrZero(rdram, v0 + 8u) : 0u)
                  << "/0x" << (v0 ? readGuestU32OrZero(rdram, v0 + 0xCu) : 0u)
                  << std::dec << std::endl;
    }

    void kofxiTraceAdxCdvOpen(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const bool resume = ctx && ctx->pc != 0x001C2B98u;
        const uint32_t pathPtr = ctx ? (resume ? getRegU32(ctx, 18) : getRegU32(ctx, 4)) : 0u;
        const uint32_t modePtr = ctx ? (resume ? 0u : getRegU32(ctx, 5)) : 0u;
        const uint32_t option = ctx ? (resume ? 0u : getRegU32(ctx, 6)) : 0u;
        logKofxiAdxDeviceOpen("enter", "CDV", 0x001C2B98u, rdram, ctx, pathPtr, modePtr, option);
        if (!resume && tryKofxiHostCdvOpen(rdram, ctx, pathPtr))
        {
            logKofxiAdxDeviceOpen("leave", "CDV", 0x001C2B98u, rdram, ctx, pathPtr, modePtr, option);
            return;
        }
        if (g_kofxiAdxCdvOpenFn)
        {
            g_kofxiAdxCdvOpenFn(rdram, ctx, runtime);
        }
        logKofxiAdxDeviceOpen("leave", "CDV", 0x001C2B98u, rdram, ctx, pathPtr, modePtr, option);
    }

    void kofxiTraceAdxCdvClose(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        if (tryKofxiHostCdvClose(ctx))
        {
            return;
        }
        if (g_kofxiAdxCdvCloseFn)
        {
            g_kofxiAdxCdvCloseFn(rdram, ctx, runtime);
        }
    }

    void kofxiTraceAdxCdvSeek(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        if (tryKofxiHostCdvSeek(ctx))
        {
            return;
        }
        if (g_kofxiAdxCdvSeekFn)
        {
            g_kofxiAdxCdvSeekFn(rdram, ctx, runtime);
        }
    }

    void kofxiTraceAdxCdvTell(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        if (tryKofxiHostCdvTell(ctx))
        {
            return;
        }
        if (g_kofxiAdxCdvTellFn)
        {
            g_kofxiAdxCdvTellFn(rdram, ctx, runtime);
        }
    }

    void kofxiTraceAdxCdvRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (tryKofxiHostCdvRead(rdram, ctx))
        {
            return;
        }
        if (g_kofxiAdxCdvReadFn)
        {
            g_kofxiAdxCdvReadFn(rdram, ctx, runtime);
        }
    }

    void kofxiTraceAdxMfsOpen(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const bool resume = ctx && ctx->pc != 0x001C73F8u;
        const uint32_t pathPtr = ctx ? (resume ? getRegU32(ctx, 17) : getRegU32(ctx, 4)) : 0u;
        const uint32_t modePtr = ctx ? (resume ? 0u : getRegU32(ctx, 5)) : 0u;
        const uint32_t option = ctx ? (resume ? 0u : getRegU32(ctx, 6)) : 0u;
        logKofxiAdxDeviceOpen("enter", "MFS", 0x001C73F8u, rdram, ctx, pathPtr, modePtr, option);
        if (g_kofxiAdxMfsOpenFn)
        {
            g_kofxiAdxMfsOpenFn(rdram, ctx, runtime);
        }
        logKofxiAdxDeviceOpen("leave", "MFS", 0x001C73F8u, rdram, ctx, pathPtr, modePtr, option);
    }

    bool isLikelyGuestCString(const std::string &value)
    {
        if (value.size() < 2u)
        {
            return false;
        }

        size_t textChars = 0u;
        size_t markerChars = 0u;
        for (char c : value)
        {
            const auto ch = static_cast<unsigned char>(c);
            if (std::isalnum(ch) || c == '\\' || c == '/' || c == '_' || c == '-' || c == ':' || c == '.')
            {
                ++textChars;
            }
            if (c == '\\' || c == '/' || c == ':' || c == '.')
            {
                ++markerChars;
            }
        }

        return textChars * 4u >= value.size() * 3u &&
               (markerChars != 0u || std::isalpha(static_cast<unsigned char>(value.front())) != 0);
    }

    void logKofxiAsyncBackend(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t out0Addr = 0u,
        uint32_t out1Addr = 0u,
        uint32_t out2Addr = 0u,
        uint32_t out3Addr = 0u)
    {
        if (!traceKofxiAsyncResourceEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 768u)
        {
            return;
        }
        if (index >= 256u && (index & 0xFu) != 0u)
        {
            return;
        }

        constexpr uint32_t kAsyncActiveHandle = 0x003701C8u;
        constexpr uint32_t kAsyncActiveId = 0x003701CCu;
        constexpr uint32_t kAsyncStatus = 0x003701D0u;
        constexpr uint32_t kAsyncCurrentStream = 0x003701D8u;
        constexpr uint32_t kAsyncChunkCount = 0x003701DCu;
        constexpr uint32_t kAsyncSlotTable = 0x0036FC98u;

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t v1 = ctx ? getRegU32(ctx, 3) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;
        const uint32_t a3 = ctx ? getRegU32(ctx, 7) : 0u;
        const uint32_t t0 = ctx ? getRegU32(ctx, 8) : 0u;
        const uint32_t t1 = ctx ? getRegU32(ctx, 9) : 0u;
        const uint32_t t2 = ctx ? getRegU32(ctx, 10) : 0u;
        const uint32_t t3 = ctx ? getRegU32(ctx, 11) : 0u;
        const uint32_t activeId = readGuestU32OrZero(rdram, kAsyncActiveId);

        uint32_t slotId = 0xFFFFFFFFu;
        if (activeId < 64u)
        {
            slotId = activeId;
        }
        else if (a0 < 64u)
        {
            slotId = a0;
        }
        else if (a1 < 64u)
        {
            slotId = a1;
        }

        uint32_t slotPtr = 0u;
        if (slotId < 64u)
        {
            slotPtr = readGuestU32OrZero(rdram, kAsyncSlotTable + slotId * 4u);
        }

        const auto readSlot32 = [&](uint32_t offset) -> uint32_t
        {
            return slotPtr ? readGuestU32OrZero(rdram, slotPtr + offset) : 0u;
        };

        const std::string a0String = readGuestCString(rdram, a0);
        const std::string a1String = readGuestCString(rdram, a1);
        const bool hasA0String = isLikelyGuestCString(a0String);
        const bool hasA1String = isLikelyGuestCString(a1String);

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:async-backend] #" << index
                  << " " << phase
                  << " " << name
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v0=0x" << v0
                  << " v1=0x" << v1
                  << " a0=0x" << a0
                  << " a1=0x" << a1
                  << " a2=0x" << a2
                  << " a3=0x" << a3
                  << " t0=0x" << t0
                  << " t1=0x" << t1
                  << " t2=0x" << t2
                  << " t3=0x" << t3
                  << " activeHandle=0x" << readGuestU32OrZero(rdram, kAsyncActiveHandle)
                  << " activeId=0x" << activeId
                  << " status=0x" << readGuestU32OrZero(rdram, kAsyncStatus)
                  << " stream=0x" << readGuestU32OrZero(rdram, kAsyncCurrentStream)
                  << " chunks=0x" << readGuestU32OrZero(rdram, kAsyncChunkCount)
                  << " slotId=0x" << slotId
                  << " slotPtr=0x" << slotPtr
                  << " slot0=0x" << readSlot32(0u)
                  << " slot4=0x" << readSlot32(4u)
                  << " slot8=0x" << readSlot32(8u)
                  << " slot10=0x" << readSlot32(0x10u)
                  << " slot114=0x" << readSlot32(0x114u)
                  << " slot118=0x" << readSlot32(0x118u)
                  << " slot11c=0x" << readSlot32(0x11Cu);
        if (out0Addr != 0u || out1Addr != 0u || out2Addr != 0u || out3Addr != 0u)
        {
            std::cerr << " out0=0x" << out0Addr << "->0x" << readGuestU32OrZero(rdram, out0Addr)
                      << " out1=0x" << out1Addr << "->0x" << readGuestU32OrZero(rdram, out1Addr)
                      << " out2=0x" << out2Addr << "->0x" << readGuestU32OrZero(rdram, out2Addr)
                      << " out3=0x" << out3Addr << "->0x" << readGuestU32OrZero(rdram, out3Addr);
        }
        if (hasA0String)
        {
            std::cerr << " a0Str=\"" << a0String << "\"";
        }
        if (hasA1String)
        {
            std::cerr << " a1Str=\"" << a1String << "\"";
        }
        std::cerr << std::dec << std::endl;
    }

    void repairKofxiAsyncResourceLowReturnSentinel(
        const char *name,
        uint32_t entry,
        uint32_t returnPc,
        uint8_t *rdram,
        R5900Context *ctx);

    bool repairKofxiResourceCallbackLowReturn(const char *name, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);

    bool isKofxiGuestCodePc(uint32_t pc)
    {
        return pc >= 0x00100000u && pc < 0x02000000u;
    }

    void rememberKofxiResourceCallbackReturn(uint32_t callerSp, uint32_t returnPc, uint32_t allocPc)
    {
        if (!isKofxiGuestCodePc(returnPc))
        {
            return;
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        auto &hints = g_kofxiResourceCallbackReturnHints;
        auto it = std::find_if(hints.begin(), hints.end(),
                               [callerSp](const KofxiResourceCallbackReturnHint &hint)
                               { return hint.callerSp == callerSp; });
        if (it == hints.end())
        {
            it = std::find_if(hints.begin(), hints.end(),
                              [](const KofxiResourceCallbackReturnHint &hint)
                              { return hint.callerSp == 0u; });
        }
        if (it == hints.end())
        {
            it = hints.begin();
        }

        *it = KofxiResourceCallbackReturnHint{callerSp, returnPc, allocPc};
    }

    uint32_t consumeKofxiResourceCallbackReturn(uint32_t callerSp, uint32_t &allocPc)
    {
        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        auto &hints = g_kofxiResourceCallbackReturnHints;
        auto it = std::find_if(hints.begin(), hints.end(),
                               [callerSp](const KofxiResourceCallbackReturnHint &hint)
                               { return hint.callerSp == callerSp; });
        if (it == hints.end())
        {
            allocPc = 0u;
            return 0u;
        }

        const uint32_t returnPc = it->returnPc;
        allocPc = it->allocPc;
        *it = {};
        return returnPc;
    }

    bool isKofxiBgmAfsGuestPath(const std::string &path)
    {
        std::string normalized = path;
        std::transform(normalized.begin(), normalized.end(), normalized.begin(),
                       [](unsigned char c)
                       { return static_cast<char>(std::tolower(c)); });
        std::replace(normalized.begin(), normalized.end(), '/', '\\');

        constexpr std::string_view kBgmAfs = "\\zdx\\kofxibgm.afs";
        constexpr std::string_view kBgmAfsWithCdrom0 = "cdrom0:\\zdx\\kofxibgm.afs";
        constexpr std::string_view kBgmAfsWithCdrom = "cdrom:\\zdx\\kofxibgm.afs";
        return normalized == kBgmAfs ||
               normalized == kBgmAfsWithCdrom0 ||
               normalized == kBgmAfsWithCdrom;
    }

    bool isKofxiAdxPathWithoutDevice(const std::string &path)
    {
        if (path.empty() || path.find(':') != std::string::npos)
        {
            return false;
        }
        return path.front() == '\\' || path.front() == '/';
    }

    bool tryKofxiAdxDefaultDeviceCompat(uint8_t *rdram, uint32_t pathPtr)
    {
        if (!kofxiAdxDefaultDeviceCompatEnabled() || !rdram || pathPtr == 0u)
        {
            return false;
        }

        constexpr uint32_t kDefaultDeviceAddr = 0x01BF5790u;
        const std::string guestPath = readGuestCString(rdram, pathPtr, 320u);
        if (!isKofxiBgmAfsGuestPath(guestPath) || !isKofxiAdxPathWithoutDevice(guestPath))
        {
            return false;
        }

        const std::string currentDefault = readGuestCString(rdram, kDefaultDeviceAddr, 16u);
        const bool forceDefault = kofxiAdxDefaultDeviceForceEnabled();
        const std::string deviceName = kofxiAdxDefaultDeviceName();
        if (!currentDefault.empty() && (!forceDefault || equalsIgnoreCaseAscii(currentDefault, deviceName)))
        {
            return false;
        }

        if (!writeGuestBytes(rdram,
                             kDefaultDeviceAddr,
                             reinterpret_cast<const uint8_t *>(deviceName.data()),
                             deviceName.size()) ||
            !writeGuestU8(rdram, kDefaultDeviceAddr + static_cast<uint32_t>(deviceName.size()), 0u))
        {
            return false;
        }

        if (traceKofxiAdxStreamOpenEnabled())
        {
            std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
            std::cerr << "[KOFXI:adxstm-default-device] path='" << guestPath
                      << "' default='" << deviceName
                      << "' previous='" << currentDefault
                      << "' force=" << forceDefault
                      << " addr=0x" << std::hex << kDefaultDeviceAddr
                      << std::dec << std::endl;
        }
        return true;
    }

    struct KofxiHostCdvHandle
    {
        std::FILE *file = nullptr;
        std::string guestPath;
        std::string hostPath;
        uint32_t sizeBytes = 0u;
        uint32_t sectorCount = 0u;
        uint32_t currentSector = 0u;
    };

    std::mutex &kofxiHostCdvMutex()
    {
        static std::mutex mutex;
        return mutex;
    }

    std::unordered_map<uint32_t, KofxiHostCdvHandle> &kofxiHostCdvHandles()
    {
        static std::unordered_map<uint32_t, KofxiHostCdvHandle> handles;
        return handles;
    }

    uint32_t &kofxiNextHostCdvCookie()
    {
        static uint32_t nextCookie = 0xFFB00000u;
        return nextCookie;
    }

    bool isKofxiHostCdvCookie(uint32_t cookie)
    {
        return cookie >= 0xFFB00000u && cookie < 0xFFC00000u;
    }

    uint32_t allocateKofxiHostCdvCookieLocked()
    {
        auto &nextCookie = kofxiNextHostCdvCookie();
        auto &handles = kofxiHostCdvHandles();
        for (uint32_t attempt = 0u; attempt < 0x40000u; ++attempt)
        {
            const uint32_t cookie = nextCookie;
            nextCookie += 4u;
            if (nextCookie >= 0xFFC00000u || nextCookie < 0xFFB00000u)
            {
                nextCookie = 0xFFB00000u;
            }

            if (handles.find(cookie) == handles.end())
            {
                return cookie;
            }
        }
        return 0u;
    }

    void returnFromGuestCall(R5900Context *ctx, uint32_t value)
    {
        if (!ctx)
        {
            return;
        }

        SET_GPR_U32(ctx, 2, value);
        ctx->pc = getRegU32(ctx, 31);
        ctx->in_delay_slot = false;
        ctx->branch_pc = 0u;
    }

    void logKofxiHostCdvCompat(const char *phase,
                               uint32_t cookie,
                               const std::string &guestPath,
                               const std::string &hostPath,
                               uint32_t sector,
                               uint32_t sectors,
                               uint32_t result,
                               R5900Context *ctx)
    {
        if (!traceKofxiAdxStreamOpenEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 512u)
        {
            return;
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:adxstm-host-cdv] #" << index
                  << " " << (phase ? phase : "?")
                  << " cookie=0x" << std::hex << cookie
                  << " sector=0x" << sector
                  << " sectors=0x" << sectors
                  << " result=0x" << result
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " guest='" << guestPath << "'"
                  << " host='" << hostPath << "'"
                  << std::dec << std::endl;
    }

    bool tryKofxiHostCdvOpen(uint8_t *rdram, R5900Context *ctx, uint32_t pathPtr)
    {
        if (!kofxiAdxHostCdvCompatEnabled() || !rdram || !ctx || pathPtr == 0u)
        {
            return false;
        }

        const std::string guestPath = readGuestCString(rdram, pathPtr, 320u);
        if (!isKofxiBgmAfsGuestPath(guestPath))
        {
            return false;
        }

        std::string hostPath = ps2_syscalls::resolvePs2PathForReadOpen(guestPath.c_str());
        if (hostPath.empty())
        {
            logKofxiHostCdvCompat("open-miss", 0u, guestPath, hostPath, 0u, 0u, 0u, ctx);
            return false;
        }

        std::error_code ec;
        const uintmax_t fileSize = std::filesystem::file_size(hostPath, ec);
        if (ec || fileSize == 0u || fileSize > 0xFFFFFFFFull)
        {
            logKofxiHostCdvCompat("open-size-failed", 0u, guestPath, hostPath, 0u, 0u, 0u, ctx);
            return false;
        }

        std::FILE *file = std::fopen(hostPath.c_str(), "rb");
        if (!file)
        {
            logKofxiHostCdvCompat("open-file-failed", 0u, guestPath, hostPath, 0u, 0u, 0u, ctx);
            return false;
        }

        KofxiHostCdvHandle handle;
        handle.file = file;
        handle.guestPath = guestPath;
        handle.hostPath = hostPath;
        handle.sizeBytes = static_cast<uint32_t>(fileSize);
        handle.sectorCount = static_cast<uint32_t>((fileSize + 2047u) >> 11u);

        uint32_t cookie = 0u;
        {
            std::lock_guard<std::mutex> lock(kofxiHostCdvMutex());
            cookie = allocateKofxiHostCdvCookieLocked();
            if (cookie != 0u)
            {
                kofxiHostCdvHandles().emplace(cookie, std::move(handle));
            }
        }

        if (cookie == 0u)
        {
            std::fclose(file);
            logKofxiHostCdvCompat("open-cookie-failed", 0u, guestPath, hostPath, 0u, 0u, 0u, ctx);
            return false;
        }

        returnFromGuestCall(ctx, cookie);
        logKofxiHostCdvCompat("open", cookie, guestPath, hostPath, 0u, static_cast<uint32_t>((fileSize + 2047u) >> 11u), cookie, ctx);
        return true;
    }

    bool tryKofxiHostCdvClose(R5900Context *ctx)
    {
        if (!ctx)
        {
            return false;
        }

        const uint32_t cookie = getRegU32(ctx, 4);
        if (!isKofxiHostCdvCookie(cookie))
        {
            return false;
        }

        std::string guestPath;
        std::string hostPath;
        {
            std::lock_guard<std::mutex> lock(kofxiHostCdvMutex());
            auto &handles = kofxiHostCdvHandles();
            const auto it = handles.find(cookie);
            if (it != handles.end())
            {
                guestPath = it->second.guestPath;
                hostPath = it->second.hostPath;
                if (it->second.file)
                {
                    std::fclose(it->second.file);
                }
                handles.erase(it);
            }
        }

        returnFromGuestCall(ctx, 0u);
        logKofxiHostCdvCompat("close", cookie, guestPath, hostPath, 0u, 0u, 0u, ctx);
        return true;
    }

    bool tryKofxiHostCdvSeek(R5900Context *ctx)
    {
        if (!ctx)
        {
            return false;
        }

        const uint32_t cookie = getRegU32(ctx, 4);
        if (!isKofxiHostCdvCookie(cookie))
        {
            return false;
        }

        const int32_t offset = static_cast<int32_t>(getRegU32(ctx, 5));
        const uint32_t whence = getRegU32(ctx, 6);
        std::string guestPath;
        std::string hostPath;
        uint32_t currentSector = 0u;
        uint32_t sectorCount = 0u;
        {
            std::lock_guard<std::mutex> lock(kofxiHostCdvMutex());
            auto &handles = kofxiHostCdvHandles();
            const auto it = handles.find(cookie);
            if (it != handles.end())
            {
                KofxiHostCdvHandle &handle = it->second;
                guestPath = handle.guestPath;
                hostPath = handle.hostPath;
                sectorCount = handle.sectorCount;
                int64_t base = static_cast<int64_t>(handle.currentSector);
                if (whence == 0u)
                {
                    base = 0;
                }
                else if (whence == 2u)
                {
                    base = static_cast<int64_t>(handle.sectorCount);
                }

                const int64_t next = std::clamp<int64_t>(base + offset, 0, static_cast<int64_t>(handle.sectorCount));
                handle.currentSector = static_cast<uint32_t>(next);
                currentSector = handle.currentSector;
            }
        }

        returnFromGuestCall(ctx, currentSector);
        logKofxiHostCdvCompat("seek", cookie, guestPath, hostPath, currentSector, sectorCount, currentSector, ctx);
        return true;
    }

    bool tryKofxiHostCdvTell(R5900Context *ctx)
    {
        if (!ctx)
        {
            return false;
        }

        const uint32_t cookie = getRegU32(ctx, 4);
        if (!isKofxiHostCdvCookie(cookie))
        {
            return false;
        }

        std::string guestPath;
        std::string hostPath;
        uint32_t currentSector = 0u;
        uint32_t sectorCount = 0u;
        {
            std::lock_guard<std::mutex> lock(kofxiHostCdvMutex());
            auto &handles = kofxiHostCdvHandles();
            const auto it = handles.find(cookie);
            if (it != handles.end())
            {
                guestPath = it->second.guestPath;
                hostPath = it->second.hostPath;
                currentSector = it->second.currentSector;
                sectorCount = it->second.sectorCount;
            }
        }

        returnFromGuestCall(ctx, currentSector);
        logKofxiHostCdvCompat("tell", cookie, guestPath, hostPath, currentSector, sectorCount, currentSector, ctx);
        return true;
    }

    bool tryKofxiHostCdvRead(uint8_t *rdram, R5900Context *ctx)
    {
        if (!rdram || !ctx)
        {
            return false;
        }

        const uint32_t cookie = getRegU32(ctx, 4);
        if (!isKofxiHostCdvCookie(cookie))
        {
            return false;
        }

        const uint32_t requestedSectors = getRegU32(ctx, 5);
        const uint32_t dst = getRegU32(ctx, 6);
        uint32_t sectorsRead = 0u;
        uint32_t currentSector = 0u;
        uint32_t sectorCount = 0u;
        std::string guestPath;
        std::string hostPath;

        {
            std::lock_guard<std::mutex> lock(kofxiHostCdvMutex());
            auto &handles = kofxiHostCdvHandles();
            const auto it = handles.find(cookie);
            if (it != handles.end() && it->second.file && requestedSectors != 0u)
            {
                KofxiHostCdvHandle &handle = it->second;
                guestPath = handle.guestPath;
                hostPath = handle.hostPath;
                sectorCount = handle.sectorCount;
                currentSector = handle.currentSector;
                if (handle.currentSector < handle.sectorCount)
                {
                    const uint32_t sectorsToRead = std::min(requestedSectors, handle.sectorCount - handle.currentSector);
                    const uint64_t byteOffset = static_cast<uint64_t>(handle.currentSector) << 11u;
                    const uint64_t remainingBytes = static_cast<uint64_t>(handle.sizeBytes) - byteOffset;
                    const size_t bytesToRead = static_cast<size_t>(std::min<uint64_t>(static_cast<uint64_t>(sectorsToRead) << 11u, remainingBytes));
                    if (std::fseek(handle.file, static_cast<long>(byteOffset), SEEK_SET) == 0)
                    {
                        std::array<uint8_t, 2048u> sector{};
                        size_t bytesReadTotal = 0u;
                        bool writeFailed = false;
                        while (bytesReadTotal < bytesToRead)
                        {
                            const size_t chunk = std::min<size_t>(sector.size(), bytesToRead - bytesReadTotal);
                            const size_t bytesRead = std::fread(sector.data(), 1u, chunk, handle.file);
                            if (bytesRead == 0u)
                            {
                                break;
                            }
                            if (!writeGuestBytes(rdram,
                                                 dst + static_cast<uint32_t>(bytesReadTotal),
                                                 sector.data(),
                                                 bytesRead))
                            {
                                writeFailed = true;
                                break;
                            }
                            bytesReadTotal += bytesRead;
                            if (bytesRead != chunk)
                            {
                                break;
                            }
                        }

                        if (!writeFailed && bytesReadTotal == bytesToRead)
                        {
                            sectorsRead = sectorsToRead;
                        }
                        else if (!writeFailed && bytesReadTotal != 0u)
                        {
                            sectorsRead = static_cast<uint32_t>((bytesReadTotal + 2047u) >> 11u);
                        }
                        handle.currentSector += sectorsRead;
                        currentSector = handle.currentSector;
                    }
                }
            }
        }

        returnFromGuestCall(ctx, sectorsRead);
        logKofxiHostCdvCompat("read", cookie, guestPath, hostPath, currentSector, requestedSectors, sectorsRead, ctx);
        return true;
    }

    bool readKofxiAfsHeader(const std::string &guestPath,
                            std::array<uint8_t, 0x800u> &header,
                            uint32_t &entryCount,
                            std::string &hostPath)
    {
        hostPath = ps2_syscalls::resolvePs2PathForReadOpen(guestPath.c_str());
        if (hostPath.empty())
        {
            return false;
        }

        std::ifstream file(hostPath, std::ios::binary);
        if (!file.is_open())
        {
            return false;
        }

        header.fill(0);
        file.read(reinterpret_cast<char *>(header.data()), static_cast<std::streamsize>(header.size()));
        if (file.gcount() < 16)
        {
            return false;
        }

        if (header[0] != static_cast<uint8_t>('A') ||
            header[1] != static_cast<uint8_t>('F') ||
            header[2] != static_cast<uint8_t>('S'))
        {
            return false;
        }

        entryCount = static_cast<uint32_t>(header[4]) |
                     (static_cast<uint32_t>(header[5]) << 8u) |
                     (static_cast<uint32_t>(header[6]) << 16u) |
                     (static_cast<uint32_t>(header[7]) << 24u);
        return entryCount != 0u && entryCount < 4096u;
    }

    void logKofxiHostAfsCompat(const char *phase,
                               const std::string &guestPath,
                               const std::string &hostPath,
                               uint32_t slotId,
                               uint32_t slotPtr,
                               uint32_t headerPtr,
                               uint32_t handlePtr,
                               uint32_t entryCount,
                               R5900Context *ctx)
    {
        if (!traceKofxiAsyncResourceEnabled() && !traceKofxiResourceInitLoopEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 32u)
        {
            return;
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:host-afs-compat] #" << index
                  << " " << phase
                  << " guest=\"" << guestPath << "\""
                  << " host=\"" << hostPath << "\""
                  << " entryCount=0x" << std::hex << entryCount
                  << " slotId=0x" << slotId
                  << " slotPtr=0x" << slotPtr
                  << " headerPtr=0x" << headerPtr
                  << " handlePtr=0x" << handlePtr
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << std::dec << std::endl;
    }

    bool tryKofxiHostAfsCoreLoadCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!kofxiAsyncResourceHostAfsCompatEnabled() || !rdram || !ctx || !runtime)
        {
            return false;
        }

        constexpr uint32_t kAsyncProgressIndex = 0x003701C4u;
        constexpr uint32_t kAsyncActiveHandle = 0x003701C8u;
        constexpr uint32_t kAsyncActiveId = 0x003701CCu;
        constexpr uint32_t kAsyncStatus = 0x003701D0u;
        constexpr uint32_t kAsyncCurrentStream = 0x003701D8u;
        constexpr uint32_t kAsyncChunkCount = 0x003701DCu;
        constexpr uint32_t kAsyncSlotTable = 0x0036FC98u;

        const uint32_t slotId = getRegU32(ctx, 4);
        const uint32_t pathAddr = getRegU32(ctx, 7);
        const uint32_t slotPtr = getRegU32(ctx, 11);
        if (slotId >= 64u || pathAddr == 0u || slotPtr == 0u)
        {
            return false;
        }

        const std::string guestPath = readGuestCString(rdram, pathAddr, 256u);
        if (!isKofxiBgmAfsGuestPath(guestPath))
        {
            return false;
        }

        std::array<uint8_t, 0x800u> header{};
        uint32_t entryCount = 0u;
        std::string hostPath;
        if (!readKofxiAfsHeader(guestPath, header, entryCount, hostPath))
        {
            logKofxiHostAfsCompat("miss", guestPath, hostPath, slotId, slotPtr, 0u, 0u, 0u, ctx);
            return false;
        }

        constexpr uint32_t kSlotStructClearSize = 0x400u;
        constexpr uint32_t kFakeHandleSize = 0x48u;
        constexpr uint32_t kInitialChunkCount = 4u;

        const uint32_t headerPtr = runtime->guestMalloc(static_cast<uint32_t>(header.size()), 16u);
        if (headerPtr == 0u)
        {
            logKofxiHostAfsCompat("guest-alloc-failed", guestPath, hostPath, slotId, slotPtr, 0u, 0u, entryCount, ctx);
            return false;
        }

        const uint32_t fakeHandlePtr = runtime->guestCalloc(1u, kFakeHandleSize, 16u);
        if (fakeHandlePtr == 0u)
        {
            runtime->guestFree(headerPtr);
            logKofxiHostAfsCompat("guest-alloc-failed", guestPath, hostPath, slotId, slotPtr, headerPtr, 0u, entryCount, ctx);
            return false;
        }

        if (!zeroGuestBytes(rdram, slotPtr, kSlotStructClearSize) ||
            !writeGuestBytes(rdram, headerPtr, header.data(), header.size()))
        {
            runtime->guestFree(fakeHandlePtr);
            runtime->guestFree(headerPtr);
            logKofxiHostAfsCompat("guest-write-failed", guestPath, hostPath, slotId, slotPtr, headerPtr, fakeHandlePtr, entryCount, ctx);
            return false;
        }

        const size_t pathCopySize = std::min<size_t>(guestPath.size(), 0xFFu);
        (void)writeGuestBytes(rdram, slotPtr + 0x10u, reinterpret_cast<const uint8_t *>(guestPath.data()), pathCopySize);
        (void)writeGuestU8(rdram, slotPtr + 0x10u + static_cast<uint32_t>(pathCopySize), 0u);

        const uint32_t tableEnd = 0x11Cu + entryCount * sizeof(uint16_t);
        const uint32_t alignedTableEnd = (tableEnd + 3u) & ~3u;
        (void)writeGuestU32(rdram, slotPtr + 0x4u, alignedTableEnd);
        (void)writeGuestU32(rdram, slotPtr + 0x8u, entryCount);
        (void)writeGuestU16(rdram, slotPtr + 0xCu, static_cast<uint16_t>(entryCount));
        (void)writeGuestU8(rdram, slotPtr + 0xFu, 0u);
        (void)writeGuestU32(rdram, slotPtr + 0x110u, 0u);
        (void)writeGuestU32(rdram, slotPtr + 0x114u, 0u);
        (void)writeGuestU16(rdram, slotPtr + 0x118u, 0u);
        (void)writeGuestU16(rdram, slotPtr + 0x11Au, 0u);
        (void)writeGuestU32(rdram, kAsyncSlotTable + slotId * sizeof(uint32_t), slotPtr);

        (void)writeGuestU8(rdram, fakeHandlePtr + 0u, 1u);
        (void)writeGuestU8(rdram, fakeHandlePtr + 1u, 3u);
        (void)writeGuestU32(rdram, fakeHandlePtr + 4u, 0u);

        g_kofxiHostAfsHeaderPtrs[slotId].store(headerPtr, std::memory_order_relaxed);
        g_kofxiHostAfsHandlePtrs[slotId].store(fakeHandlePtr, std::memory_order_relaxed);

        (void)writeGuestU32(rdram, kAsyncProgressIndex, 0u);
        (void)writeGuestU32(rdram, kAsyncActiveHandle, fakeHandlePtr);
        (void)writeGuestU32(rdram, kAsyncActiveId, slotId);
        (void)writeGuestU32(rdram, kAsyncStatus, 2u);
        (void)writeGuestU32(rdram, kAsyncCurrentStream, headerPtr);
        (void)writeGuestU32(rdram, kAsyncChunkCount, kInitialChunkCount);

        const uint32_t returnPc = getRegU32(ctx, 31);
        SET_GPR_U32(ctx, 2, 0u);
        ctx->pc = returnPc;

        logKofxiHostAfsCompat("seeded", guestPath, hostPath, slotId, slotPtr, headerPtr, fakeHandlePtr, entryCount, ctx);
        return true;
    }

    bool tryKofxiHostAfsPollCompat(uint8_t *rdram, R5900Context *ctx)
    {
        if (!kofxiAsyncResourceHostAfsPollCompatEnabled() || !rdram || !ctx)
        {
            return false;
        }

        constexpr uint32_t kAsyncActiveHandle = 0x003701C8u;
        constexpr uint32_t kAsyncActiveId = 0x003701CCu;
        constexpr uint32_t kAsyncStatus = 0x003701D0u;
        constexpr uint32_t kAsyncSlotTable = 0x0036FC98u;

        const uint32_t activeId = readGuestU32OrZero(rdram, kAsyncActiveId);
        if (activeId >= 64u)
        {
            return false;
        }

        const uint32_t slotPtr = readGuestU32OrZero(rdram, kAsyncSlotTable + activeId * sizeof(uint32_t));
        const uint32_t activeHandle = readGuestU32OrZero(rdram, kAsyncActiveHandle);
        const uint32_t expectedHandle = g_kofxiHostAfsHandlePtrs[activeId].load(std::memory_order_relaxed);
        const uint32_t headerPtr = g_kofxiHostAfsHeaderPtrs[activeId].load(std::memory_order_relaxed);
        if (slotPtr == 0u || expectedHandle == 0u || activeHandle != expectedHandle)
        {
            return false;
        }

        (void)writeGuestU32(rdram, kAsyncStatus, 3u);
        SET_GPR_U32(ctx, 2, 3u);
        ctx->pc = getRegU32(ctx, 31);

        const std::string guestPath = readGuestCString(rdram, slotPtr + 0x10u, 256u);
        logKofxiHostAfsCompat("poll-ready", guestPath, "", activeId, slotPtr, headerPtr, activeHandle, readGuestU32OrZero(rdram, slotPtr + 0x8u), ctx);
        return true;
    }

    void runKofxiAsyncBackendCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        const uint32_t returnPc = ctx ? getRegU32(ctx, 31) : 0u;
        logKofxiAsyncBackend("enter", name, entry, rdram, ctx);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        logKofxiAsyncBackend("leave", name, entry, rdram, ctx);
        repairKofxiAsyncResourceLowReturnSentinel(name, entry, returnPc, rdram, ctx);
    }

    void repairKofxiAsyncResourceLowReturnSentinel(
        const char *name,
        uint32_t entry,
        uint32_t returnPc,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!kofxiAsyncResourceSentinelCompatEnabled() || !ctx)
        {
            return;
        }

        const uint32_t pc = ctx->pc;
        const uint32_t ra = getRegU32(ctx, 31);
        if (returnPc < 0x00100000u || pc == 0u || pc >= 0x00100000u || pc != ra)
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index < 64u &&
            (traceKofxiAsyncResourceEnabled() ||
             traceKofxiBootProgressEnabled() ||
             traceKofxiResourceInitLoopEnabled()))
        {
            constexpr uint32_t kAsyncActiveId = 0x003701CCu;
            constexpr uint32_t kAsyncStatus = 0x003701D0u;

            std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
            std::cerr << "[KOFXI:async-resource] #" << index
                      << " repaired-low-return"
                      << " " << (name ? name : "")
                      << " entry=0x" << std::hex << entry
                      << " lowPc=0x" << pc
                      << " lowRa=0x" << ra
                      << " returnPc=0x" << returnPc
                      << " v0=0x" << getRegU32(ctx, 2)
                      << " activeId=0x" << readGuestU32OrZero(rdram, kAsyncActiveId)
                      << " status=0x" << readGuestU32OrZero(rdram, kAsyncStatus)
                      << std::dec << std::endl;
        }

        ctx->pc = returnPc;
        SET_GPR_U32(ctx, 31, returnPc);
    }

    void kofxiGetSchedulerModeFlagCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiGetSchedulerModeFlag",
            0x001B3638u,
            g_kofxiGetSchedulerModeFlagFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceInitializeIopResourceSystem(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceInitLoopCall(
            "kofxiInitializeIopResourceSystem",
            0x0014C2E0u,
            g_kofxiInitializeIopResourceSystemFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceInitLoopBegin(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceInitLoopCall(
            "kofxiResourceInitLoopBegin",
            0x0014C400u,
            g_kofxiResourceInitLoopBeginFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceInitLoopServiceTick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceInitLoopCall(
            "kofxiResourceInitLoopServiceTick",
            0x0014C404u,
            g_kofxiResourceInitLoopServiceTickFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceInitLoopRunFrame(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceInitLoopCall(
            "kofxiResourceInitLoopRunFrame",
            0x0014C40Cu,
            g_kofxiResourceInitLoopRunFrameFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceInitLoopWaitVsync(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceInitLoopCall(
            "kofxiResourceInitLoopWaitVsync",
            0x0014C414u,
            g_kofxiResourceInitLoopWaitVsyncFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceInitLoopAdvance(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceInitLoopCall(
            "kofxiResourceInitLoopAdvance",
            0x0014C41Cu,
            g_kofxiResourceInitLoopAdvanceFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceInitLoopExit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceInitLoopCall(
            "kofxiResourceInitLoopExit",
            0x0014C430u,
            g_kofxiResourceInitLoopExitFn,
            rdram,
            ctx,
            runtime);
    }

    uint32_t readKofxiIo32Snapshot(PS2Runtime *runtime, uint8_t *rdram, R5900Context *ctx, uint32_t addr)
    {
        if (!runtime)
        {
            return 0u;
        }

        const uint32_t aligned = addr & ~0x7u;
        const uint64_t pair = runtime->Load64(rdram, ctx, aligned);
        const uint32_t shift = (addr & 0x4u) ? 32u : 0u;
        return static_cast<uint32_t>((pair >> shift) & 0xFFFFFFFFull);
    }

    const char *kofxiWaitSyncLabelName(uint32_t entry)
    {
        switch (entry)
        {
        case 0x00101150u:
            return "entry";
        case 0x00101188u:
            return "wait-vif1-chcr";
        case 0x001011C8u:
            return "wait-gif-chcr";
        case 0x00101218u:
            return "wait-vif1-stat";
        case 0x00101248u:
            return "wait-vu-top";
        case 0x00101288u:
            return "wait-gif-stat";
        case 0x001012ECu:
            return "timeout-vif1-chcr-log";
        case 0x00101304u:
            return "timeout-vif1-madr-log";
        case 0x0010131Cu:
            return "timeout-vif1-qwc-log";
        case 0x00101334u:
            return "timeout-vif1-tadr-log";
        case 0x0010134Cu:
            return "timeout-gif-chcr-log";
        case 0x00101364u:
            return "timeout-gif-madr-log";
        case 0x0010137Cu:
            return "timeout-gif-qwc-log";
        case 0x00101394u:
            return "timeout-gif-tadr-log";
        case 0x001013ACu:
            return "timeout-vif1-stat-log";
        case 0x001013C4u:
            return "timeout-gif-stat-log";
        case 0x001013DCu:
            return "timeout-return";
        default:
            return "unknown";
        }
    }

    void logKofxiWaitSyncPoll(
        const char *phase,
        uint32_t entry,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!traceKofxiWaitSyncEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= kofxiWaitSyncTraceLimit())
        {
            return;
        }

        const uint32_t vif1Chcr = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x10009000u);
        const uint32_t vif1Madr = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x10009010u);
        const uint32_t vif1Qwc = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x10009020u);
        const uint32_t vif1Tadr = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x10009030u);
        const uint32_t gifChcr = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x1000A000u);
        const uint32_t gifMadr = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x1000A010u);
        const uint32_t gifQwc = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x1000A020u);
        const uint32_t gifTadr = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x1000A030u);
        const uint32_t vif1Stat = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x10003C00u);
        const uint32_t gifStat = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x10003020u);
        const uint32_t dStat = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x1000E010u);
        const uint32_t dCtrl = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x1000E000u);
        const uint32_t iStat = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x1000F000u);
        const uint32_t iMask = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x1000F010u);
        const uint32_t gsCsr = readKofxiIo32Snapshot(runtime, rdram, ctx, 0x12001000u);
        const uint32_t vuTop = ctx ? ctx->vu0_top : 0u;
        const uint32_t busyBits =
            ((vif1Chcr & 0x100u) ? 0x01u : 0u) |
            ((gifChcr & 0x100u) ? 0x02u : 0u) |
            ((vif1Stat & 0x1F000003u) ? 0x04u : 0u) |
            ((vuTop & 0x100u) ? 0x08u : 0u) |
            ((gifStat & 0x0C00u) ? 0x10u : 0u);

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t v1 = ctx ? getRegU32(ctx, 3) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;
        const uint32_t a3 = ctx ? getRegU32(ctx, 7) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:wait-sync] #" << index
                  << " " << phase
                  << " entry=0x" << std::hex << entry
                  << " label=" << kofxiWaitSyncLabelName(entry)
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " v=0x" << v0 << "/0x" << v1
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " busy=0x" << busyBits
                  << " vif1=0x" << vif1Chcr << "/0x" << vif1Madr << "/0x" << vif1Qwc << "/0x" << vif1Tadr
                  << " gif=0x" << gifChcr << "/0x" << gifMadr << "/0x" << gifQwc << "/0x" << gifTadr
                  << " stat=0x" << vif1Stat << "/0x" << gifStat
                  << " dmac=0x" << dCtrl << "/0x" << dStat
                  << " intc=0x" << iStat << "/0x" << iMask
                  << " gsCsr=0x" << gsCsr
                  << " vuTop=0x" << vuTop
                  << " frontend=0x" << readGuestU32OrZero(rdram, 0x009F9728u)
                  << " render=0x" << readGuestU32OrZero(rdram, 0x01DA29E0u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x0092F0F8u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x0092F0F0u)
                  << std::dec << std::endl;
    }

    void kofxiTraceWaitSyncPoll(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x00101150u;
        auto it = g_kofxiWaitSyncPollFns.find(entry);
        PS2Runtime::RecompiledFunction original = (it != g_kofxiWaitSyncPollFns.end()) ? it->second : nullptr;
        if (!original && runtime && runtime->hasFunction(entry))
        {
            original = runtime->lookupFunction(entry);
        }

        logKofxiWaitSyncPoll("enter", entry, rdram, ctx, runtime);
        if (original && original != &kofxiTraceWaitSyncPoll)
        {
            original(rdram, ctx, runtime);
        }
        logKofxiWaitSyncPoll("leave", entry, rdram, ctx, runtime);
    }

    void kofxiTraceWaitVsyncOrPollCsr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiWaitVsyncOrPollCsr",
            0x001010B8u,
            g_kofxiWaitVsyncOrPollCsrFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceInitializeDeferredCallbackQueues(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiDeferredCallbackTraceCall(
            "kofxiInitializeDeferredCallbackQueues",
            0x001CE748u,
            g_kofxiInitializeDeferredCallbackQueuesFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceInstallDeferredCallbackSlot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiDeferredCallbackTraceCall(
            "kofxiInstallGlobalDeferredCallbackSlot",
            0x001B3658u,
            g_kofxiInstallDeferredCallbackSlotFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceInstallDeferredCallbackSlotCore(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiDeferredCallbackTraceCall(
            "kofxiInstallGlobalDeferredCallbackSlotCore",
            0x001CE3E8u,
            g_kofxiInstallDeferredCallbackSlotCoreFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceIopResourceRpcBind(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (traceKofxiResourceInitLoopEnabled() && !traceKofxiBootProgressEnabled())
        {
            runKofxiResourceInitLoopCall(
                "kofxiIopResourceRpcBind",
                0x00119130u,
                g_kofxiIopResourceRpcBindFn,
                rdram,
                ctx,
                runtime);
        }
        else
        {
            runKofxiBootProgressCall(
                "kofxiIopResourceRpcBind",
                0x00119130u,
                g_kofxiIopResourceRpcBindFn,
                rdram,
                ctx,
            runtime);
        }
    }

    void logKofxiIopResourceRpcCommandBuffer(
        const char *phase,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiResourceInitLoopEnabled() || !ctx)
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 192u)
        {
            return;
        }

        const uint32_t opcode = getRegU32(ctx, 5);
        const uint32_t bufAddr = getRegU32(ctx, 6);
        const uint32_t auxAddr = getRegU32(ctx, 7);

        auto readWord = [&](uint32_t addr) -> uint32_t
        {
            return (addr != 0u) ? readGuestU32OrZero(rdram, addr) : 0u;
        };

        std::ostringstream bufferWords;
        for (uint32_t i = 0; i < 8u; ++i)
        {
            bufferWords << (i == 0u ? "" : ",")
                        << "0x" << std::hex << readWord(bufAddr + i * sizeof(uint32_t));
        }

        std::ostringstream auxWords;
        for (uint32_t i = 0; i < 4u; ++i)
        {
            auxWords << (i == 0u ? "" : ",")
                     << "0x" << std::hex << readWord(auxAddr + i * sizeof(uint32_t));
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:iop-resource-rpc] #" << index
                  << " " << (phase ? phase : "")
                  << " pc=0x" << std::hex << ctx->pc
                  << " ra=0x" << getRegU32(ctx, 31)
                  << " v0=0x" << getRegU32(ctx, 2)
                  << " a0=0x" << getRegU32(ctx, 4)
                  << " opcode=0x" << opcode
                  << " buf=0x" << bufAddr
                  << " aux=0x" << auxAddr
                  << " bufWords=[" << bufferWords.str() << "]"
                  << " auxWords=[" << auxWords.str() << "]"
                  << std::dec << std::endl;
    }

    void kofxiTraceIopResourceRpcCommand(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        logKofxiIopResourceRpcCommandBuffer("enter", rdram, ctx);
        if (traceKofxiResourceInitLoopEnabled() && !traceKofxiBootProgressEnabled())
        {
            runKofxiResourceInitLoopCall(
                "kofxiIopResourceRpcCommand",
                0x00119288u,
                g_kofxiIopResourceRpcCommandFn,
                rdram,
                ctx,
                runtime);
        }
        else
        {
            runKofxiBootProgressCall(
                "kofxiIopResourceRpcCommand",
                0x00119288u,
                g_kofxiIopResourceRpcCommandFn,
                rdram,
                ctx,
                runtime);
        }
        logKofxiIopResourceRpcCommandBuffer("leave", rdram, ctx);
    }

    void kofxiTraceSetSchedulerState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiSetSchedulerState",
            0x001B2718u,
            g_kofxiSetSchedulerStateFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceDispatchSchedulerStateCallbacks(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiDispatchSchedulerStateCallbacks",
            0x001B27B8u,
            g_kofxiDispatchSchedulerStateCallbacksFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceNormalizeSchedulerState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiNormalizeSchedulerState",
            0x001B2968u,
            g_kofxiNormalizeSchedulerStateFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceWakeThreadUntilFlagClears(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiWakeThreadUntilFlagClears",
            0x001B2A98u,
            g_kofxiWakeThreadUntilFlagClearsFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceWakePrimaryWorkerUntilFlagClears(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiWakePrimaryWorkerUntilFlagClears",
            0x001B2B80u,
            g_kofxiWakePrimaryWorkerUntilFlagClearsFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceServiceSchedulerTick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiServiceSchedulerTick",
            0x001B3FA8u,
            g_kofxiServiceSchedulerTickFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceVblankSchedulerDispatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiVblankSchedulerDispatch",
            0x001B3E40u,
            g_kofxiVblankSchedulerDispatchFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceWorkerSchedulerTick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiWorkerSchedulerTick",
            0x001B3FC0u,
            g_kofxiWorkerSchedulerTickFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceRunFrameScheduler(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t callerReturnPc = ctx ? getRegU32(ctx, 31) : 0u;
        runKofxiBootProgressCall(
            "kofxiRunFrameScheduler",
            0x001B40F0u,
            g_kofxiRunFrameSchedulerFn,
            rdram,
            ctx,
            runtime);
        serviceKofxiResourceWaitHandle(rdram, ctx, runtime, callerReturnPc);
    }

    void kofxiTraceInitFrameThreadManager(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiInitFrameThreadManager",
            0x001B4188u,
            g_kofxiInitFrameThreadManagerFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceInstallVblankScheduler(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiInstallVblankScheduler",
            0x001B4200u,
            g_kofxiInstallVblankSchedulerFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceStartFrameSchedulerSystem(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiStartFrameSchedulerSystem",
            0x001B4298u,
            g_kofxiStartFrameSchedulerSystemFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceStopFrameSchedulerSystem(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiStopFrameSchedulerSystem",
            0x001B4488u,
            g_kofxiStopFrameSchedulerSystemFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceRegisterFrameCallbackSlot0(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiRegisterFrameCallbackSlot0",
            0x001B4538u,
            g_kofxiRegisterFrameCallbackSlot0Fn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceDispatchFrameCallback(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiDispatchFrameCallback",
            0x001B45C8u,
            g_kofxiDispatchFrameCallbackFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceThreadManagerInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiThreadManagerInit",
            0x001B3670u,
            g_kofxiThreadManagerInitFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceThreadManagerInitResume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiThreadManagerInitResume",
            0x001B36B8u,
            g_kofxiThreadManagerInitResumeFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceWorkerThread0Entry(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiWorkerThread0Entry",
            0x001B2BE8u,
            g_kofxiWorkerThread0EntryFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceWorkerThread1Entry(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiWorkerThread1Entry",
            0x001B2CD8u,
            g_kofxiWorkerThread1EntryFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceWorkerThread2Entry(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiWorkerThread2Entry",
            0x001B2DE0u,
            g_kofxiWorkerThread2EntryFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceWorkerThread3Entry(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiWorkerThread3Entry",
            0x001B2ED0u,
            g_kofxiWorkerThread3EntryFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceWorkerThread4Entry(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiWorkerThread4Entry",
            0x001B3008u,
            g_kofxiWorkerThread4EntryFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceThreadCreateWorker0(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiThreadCreateWorker0",
            0x001B3260u,
            g_kofxiThreadCreateWorker0Fn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceThreadCreateWorker2(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiThreadCreateWorker2",
            0x001B33C0u,
            g_kofxiThreadCreateWorker2Fn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceThreadCreateWorker3(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiThreadCreateWorker3",
            0x001B3448u,
            g_kofxiThreadCreateWorker3Fn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceThreadResumeIfSuspended(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiThreadResumeIfSuspended",
            0x001B3198u,
            g_kofxiThreadResumeIfSuspendedFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceThreadWakeIfSleeping(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiThreadWakeIfSleeping",
            0x001B3130u,
            g_kofxiThreadWakeIfSleepingFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceGetSchedulerModeFlag(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiGetSchedulerModeFlag",
            0x001B3638u,
            g_kofxiGetSchedulerModeFlagFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceSyscallReferThreadStatusWrapper(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiSyscallReferThreadStatusWrapper",
            0x0010CB60u,
            g_kofxiSyscallReferThreadStatusWrapperFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceSyscallWakeupThreadWrapper(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiSyscallWakeupThreadWrapper",
            0x0010CB90u,
            g_kofxiSyscallWakeupThreadWrapperFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceSyscallResumeThreadWrapper(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBootProgressCall(
            "kofxiSyscallResumeThreadWrapper",
            0x0010CBF0u,
            g_kofxiSyscallResumeThreadWrapperFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceStartAsyncResourceLoad(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t returnPc = ctx ? getRegU32(ctx, 31) : 0u;
        if (traceKofxiAsyncResourceEnabled() || kofxiAsyncResourceHoldMicros() != 0u)
        {
            runKofxiAsyncResourceCall(
                "kofxiStartAsyncResourceLoad",
                0x001AEF20u,
                g_kofxiStartAsyncResourceLoadFn,
                rdram,
                ctx,
                runtime);
        }
        else
        {
            runKofxiBootProgressCall(
                "kofxiStartAsyncResourceLoad",
                0x001AEF20u,
                g_kofxiStartAsyncResourceLoadFn,
                rdram,
                ctx,
                runtime);
        }
        repairKofxiAsyncResourceLowReturnSentinel(
            "kofxiStartAsyncResourceLoad",
            0x001AEF20u,
            returnPc,
            rdram,
            ctx);
    }

    void kofxiTracePollAsyncResourceStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t returnPc = ctx ? getRegU32(ctx, 31) : 0u;
        delayKofxiAsyncResourceScheduler();
        if (tryKofxiHostAfsPollCompat(rdram, ctx))
        {
            logKofxiAsyncResource("leave", "kofxiPollAsyncResourceStatus.hostAfsCompat", 0x001AF940u, rdram, ctx);
            delayKofxiAsyncResourceScheduler();
            return;
        }

        if (traceKofxiAsyncResourceEnabled() || kofxiAsyncResourceHoldMicros() != 0u)
        {
            runKofxiAsyncResourceCall(
                "kofxiPollAsyncResourceStatus",
                0x001AF940u,
                g_kofxiPollAsyncResourceStatusFn,
                rdram,
                ctx,
                runtime);
        }
        else
        {
            runKofxiBootProgressCall(
                "kofxiPollAsyncResourceStatus",
                0x001AF940u,
                g_kofxiPollAsyncResourceStatusFn,
                rdram,
                ctx,
                runtime);
        }
        if (!repairKofxiResourceCallbackLowReturn(
            "kofxiPollAsyncResourceStatus",
            rdram,
            ctx,
            runtime))
        {
            repairKofxiAsyncResourceLowReturnSentinel(
                "kofxiPollAsyncResourceStatus",
                0x001AF940u,
                returnPc,
                rdram,
                ctx);
        }
    }

    void kofxiTraceAsyncResourceCoreLoad(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (tryKofxiHostAfsCoreLoadCompat(rdram, ctx, runtime))
        {
            logKofxiAsyncBackend("leave", "kofxiAsyncResourceCoreLoad.hostAfsCompat", 0x001AF5A8u, rdram, ctx);
            return;
        }

        runKofxiAsyncBackendCall(
            "kofxiAsyncResourceCoreLoad",
            0x001AF5A8u,
            g_kofxiAsyncResourceCoreLoadFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceAsyncResourceRegisterSlot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiAsyncBackendCall(
            "kofxiAsyncResourceRegisterSlot",
            0x001AED68u,
            g_kofxiAsyncResourceRegisterSlotFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceOpenResourcePartition(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiAsyncBackendCall(
            "kofxiOpenResourcePartition",
            0x001B0390u,
            g_kofxiOpenResourcePartitionFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceInitializeResourceHandle(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiAsyncBackendCall(
            "kofxiInitializeResourceHandle",
            0x001B0270u,
            g_kofxiInitializeResourceHandleFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceReadPartitionInfo(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t returnPc = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t out0Addr = ctx ? getRegU32(ctx, 7) : 0u;
        const uint32_t out1Addr = ctx ? getRegU32(ctx, 8) : 0u;
        const uint32_t out2Addr = ctx ? getRegU32(ctx, 9) : 0u;
        const uint32_t out3Addr = ctx ? getRegU32(ctx, 10) : 0u;

        logKofxiAsyncBackend("enter", "kofxiReadPartitionInfo", 0x001B1540u, rdram, ctx, out0Addr, out1Addr, out2Addr, out3Addr);
        if (g_kofxiReadPartitionInfoFn)
        {
            g_kofxiReadPartitionInfoFn(rdram, ctx, runtime);
        }
        logKofxiAsyncBackend("leave", "kofxiReadPartitionInfo", 0x001B1540u, rdram, ctx, out0Addr, out1Addr, out2Addr, out3Addr);
        repairKofxiAsyncResourceLowReturnSentinel("kofxiReadPartitionInfo", 0x001B1540u, returnPc, rdram, ctx);
    }

    void kofxiTraceValidatePartitionSlot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiAsyncBackendCall(
            "kofxiValidatePartitionSlot",
            0x001B1390u,
            g_kofxiValidatePartitionSlotFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceHandleGetStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t returnPc = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t handle = ctx ? getRegU32(ctx, 4) : 0u;
        runKofxiResourceHandleCall(
            "kofxiResourceHandleGetStatus",
            0x001B1328u,
            g_kofxiResourceHandleGetStatusFn,
            rdram,
            ctx,
            runtime);
        mapKofxiResourceWaitStatusComplete(rdram, ctx, handle, returnPc);
    }

    void kofxiTraceResourceHandleReadStatusByte(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceHandleCall(
            "kofxiResourceHandleReadStatusByte",
            0x001B1360u,
            g_kofxiResourceHandleReadStatusByteFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceHandleObjectInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B0270u;
        runKofxiHandleObjectWorkerCall(
            "kofxiHandleObjectInit",
            entry,
            g_kofxiHandleObjectInitFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceHandleObjectLockStart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B69D8u;
        runKofxiHandleObjectWorkerCall(
            "kofxiHandleObjectLockStart",
            entry,
            g_kofxiHandleObjectLockStartFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceHandleObjectStart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B6A48u;
        runKofxiHandleObjectWorkerCall(
            "kofxiHandleObjectStart",
            entry,
            g_kofxiHandleObjectStartFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceHandleObjectDispatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B6AC0u;
        runKofxiHandleObjectWorkerCall(
            "kofxiHandleObjectDispatch",
            entry,
            g_kofxiHandleObjectDispatchFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceHandleObjectWait(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B6B30u;
        runKofxiHandleObjectWorkerCall(
            "kofxiHandleObjectWait",
            entry,
            g_kofxiHandleObjectWaitFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceHandleObjectStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B6C60u;
        runKofxiHandleObjectWorkerCall(
            "kofxiHandleObjectStatus",
            entry,
            g_kofxiHandleObjectStatusFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceHandleObjectStatusByte(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B6C98u;
        runKofxiHandleObjectWorkerCall(
            "kofxiHandleObjectStatusByte",
            entry,
            g_kofxiHandleObjectStatusByteFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceHandleUpdateProgress(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceHandleCall(
            "kofxiResourceHandleUpdateProgress",
            0x001B1048u,
            g_kofxiResourceHandleUpdateProgressFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceHandleRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceHandleCall(
            "kofxiResourceHandleRead",
            0x001B0A60u,
            g_kofxiResourceHandleReadFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceHandleTickService(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001AEBC0u;
        runKofxiResourceHandleServiceCall(
            "kofxiResourceHandleTickService",
            entry,
            g_kofxiResourceHandleTickServiceFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceHandleLockedServiceAll(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B0588u;
        runKofxiResourceHandleServiceCall(
            "kofxiResourceHandleLockedServiceAll",
            entry,
            g_kofxiResourceHandleLockedServiceAllFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceHandleServiceAll(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B05B0u;
        runKofxiResourceHandleServiceCall(
            "kofxiResourceHandleServiceAll",
            entry,
            g_kofxiResourceHandleServiceAllFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceHandleServiceOne(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B04D0u;
        runKofxiResourceHandleServiceCall(
            "kofxiResourceHandleServiceOne",
            entry,
            g_kofxiResourceHandleServiceOneFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceHandleContinueRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B0610u;
        runKofxiResourceHandleServiceCall(
            "kofxiResourceHandleContinueRead",
            entry,
            g_kofxiResourceHandleContinueReadFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceHandleCompleteRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B0B30u;
        runKofxiResourceHandleServiceCall(
            "kofxiResourceHandleCompleteRead",
            entry,
            g_kofxiResourceHandleCompleteReadFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceHandlePollCompletion(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B0D20u;
        runKofxiResourceHandleServiceCall(
            "kofxiResourceHandlePollCompletion",
            entry,
            g_kofxiResourceHandlePollCompletionFn,
            rdram,
            ctx,
            runtime);
    }

    bool repairKofxiResourceCallbackLowReturn(const char *name, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!rdram || !ctx)
        {
            return false;
        }

        const uint32_t lowReturn = ctx->pc;
        if (lowReturn == 0u || lowReturn >= 0x00100000u)
        {
            return false;
        }

        const uint32_t sp = getRegU32(ctx, 29);
        const uint32_t outerPollReturn = readGuestU32OrZero(rdram, sp + 0x20u);
        if (outerPollReturn != 0x0014C4CCu)
        {
            return false;
        }

        uint32_t allocPc = 0u;
        const uint32_t hintedReturn = consumeKofxiResourceCallbackReturn(sp, allocPc);
        const uint32_t repairReturn = isKofxiGuestCodePc(hintedReturn) ? hintedReturn : outerPollReturn;
        if (runtime && !runtime->hasFunction(repairReturn))
        {
            return false;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index < 16u)
        {
            std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
            std::cerr << "[KOFXI:resource-callback-return] #" << index
                      << " repaired-low-return"
                      << " via=" << (name ? name : "")
                      << " lowPc=0x" << std::hex << lowReturn
                      << " ra=0x" << getRegU32(ctx, 31)
                      << " sp=0x" << sp
                      << " returnPc=0x" << repairReturn
                      << " outerPollReturn=0x" << outerPollReturn
                      << " hintedReturn=0x" << hintedReturn
                      << " allocPc=0x" << allocPc
                      << " savedLowRa=0x" << readGuestU32OrZero(rdram, sp - 0x8u)
                      << " slotPtr=0x" << readGuestU32OrZero(rdram, sp - 0x38u)
                      << " pathPtr=0x" << readGuestU32OrZero(rdram, sp - 0x18u)
                      << std::dec << std::endl;
        }

        SET_GPR_U32(ctx, 31, repairReturn);
        ctx->pc = repairReturn;
        return true;
    }

    void kofxiResourceCallbackAllocCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (rdram && ctx)
        {
            const uint32_t entryPc = ctx->pc;
            const uint32_t sp = getRegU32(ctx, 29);
            const uint32_t ra = getRegU32(ctx, 31);
            if (entryPc == 0x001B87B8u)
            {
                rememberKofxiResourceCallbackReturn(sp, ra, entryPc);
            }
            else if (entryPc == 0x001B87DCu ||
                     entryPc == 0x001B87ECu ||
                     entryPc == 0x001B87F4u)
            {
                rememberKofxiResourceCallbackReturn(
                    ADD32(sp, 0x20u),
                    readGuestU32OrZero(rdram, sp + 0x18u),
                    entryPc);
            }
        }

        if (g_kofxiResourceCallbackAllocFn)
        {
            g_kofxiResourceCallbackAllocFn(rdram, ctx, runtime);
        }

        repairKofxiResourceCallbackLowReturn(
            "kofxiResourceCallbackAlloc",
            rdram,
            ctx,
            runtime);
    }

    void kofxiResourceCallbackReturnThunkCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t ra = getRegU32(ctx, 31);
        if (ra >= 0x00100000u)
        {
            if (g_kofxiResourceCallbackReturnThunkFn)
            {
                g_kofxiResourceCallbackReturnThunkFn(rdram, ctx, runtime);
            }
            return;
        }

        const uint32_t sp = getRegU32(ctx, 29);
        const uint32_t callerReturn = readGuestU32OrZero(rdram, sp + 0x20u);
        if (callerReturn != 0x0014C4CCu)
        {
            if (g_kofxiResourceCallbackReturnThunkFn)
            {
                g_kofxiResourceCallbackReturnThunkFn(rdram, ctx, runtime);
            }
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index < 16u &&
            (traceKofxiBootProgressEnabled() ||
             traceKofxiResourceInitLoopEnabled() ||
             traceKofxiAsyncResourceEnabled()))
        {
            std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
            std::cerr << "[KOFXI:resource-callback-return] #" << index
                      << " repaired-low-return"
                      << " pc=0x" << std::hex << ctx->pc
                      << " lowRa=0x" << ra
                      << " sp=0x" << sp
                      << " returnPc=0x" << callerReturn
                      << " slotPtr=0x" << readGuestU32OrZero(rdram, sp - 0x38u)
                      << " pathPtr=0x" << readGuestU32OrZero(rdram, sp - 0x18u)
                      << std::dec << std::endl;
        }

        SET_GPR_U32(ctx, 31, callerReturn);
        ctx->pc = callerReturn;
    }

    void kofxiAsyncResourcePollTailCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (g_kofxiAsyncResourcePollTailFn)
        {
            g_kofxiAsyncResourcePollTailFn(rdram, ctx, runtime);
        }

        repairKofxiResourceCallbackLowReturn(
            "kofxiAsyncResourcePollTail",
            rdram,
            ctx,
            runtime);
    }

    void kofxiResourceUnlockReturnThunkCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (g_kofxiResourceUnlockReturnThunkFn)
        {
            g_kofxiResourceUnlockReturnThunkFn(rdram, ctx, runtime);
        }

        repairKofxiResourceCallbackLowReturn(
            "kofxiResourceUnlockReturnThunk",
            rdram,
            ctx,
            runtime);
    }

    bool isKofxiUpperResourceSlotAddress(uint32_t addr)
    {
        constexpr uint32_t kSlotBase = 0x0037F1D0u;
        constexpr uint32_t kSlotStride = 0x238u;
        constexpr uint32_t kSlotCount = 32u;
        return addr >= kSlotBase && addr < kSlotBase + kSlotStride * kSlotCount &&
               ((addr - kSlotBase) % kSlotStride) == 0u;
    }

    bool isKofxiChildResourceAddress(uint32_t addr)
    {
        constexpr uint32_t kChildBase = 0x0037B428u;
        constexpr uint32_t kChildStride = 0x60u;
        constexpr uint32_t kChildCount = 40u;
        return addr >= kChildBase && addr < kChildBase + kChildStride * kChildCount &&
               ((addr - kChildBase) % kChildStride) == 0u;
    }

    void logKofxiUpperResourceCompat(
        const char *phase,
        uint32_t slot,
        uint32_t child,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t beforeState1)
    {
        if (!traceKofxiUpperResourceCompatEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 128u)
        {
            return;
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:upper-resource-compat] #" << index
                  << " " << (phase ? phase : "")
                  << " pc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " slot=0x" << slot
                  << " child=0x" << child
                  << " before1=0x" << beforeState1
                  << " st=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 3u))
                  << " src=0x" << readGuestU32OrZero(rdram, slot + 0x08u)
                  << " amt=0x" << readGuestU32OrZero(rdram, slot + 0x14u)
                  << "/0x" << readGuestU32OrZero(rdram, slot + 0x18u)
                  << " pos=0x" << readGuestU32OrZero(rdram, slot + 0x1Cu)
                  << "/0x" << readGuestU32OrZero(rdram, slot + 0x20u)
                  << "/0x" << readGuestU32OrZero(rdram, slot + 0x24u)
                  << " attached=0x" << readGuestU32OrZero(rdram, slot + 0x28u)
                  << " childSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 1u))
                  << " childWait=0x" << readGuestU32OrZero(rdram, child + 0x24u)
                  << std::dec << std::endl;
    }

    void promoteKofxiUpperResourceAfterChildAttach(uint8_t *rdram, R5900Context *ctx, uint32_t slot, uint32_t child)
    {
        if (!kofxiUpperResourceAttachCompatEnabled() || !rdram ||
            !isKofxiUpperResourceSlotAddress(slot) ||
            !isKofxiChildResourceAddress(child))
        {
            return;
        }

        const uint32_t state0 = readGuestU8OrZero(rdram, slot);
        const uint32_t state1 = readGuestU8OrZero(rdram, slot + 1u);
        if (state0 != 1u || state1 != 0u || readGuestU32OrZero(rdram, slot + 0x28u) != child)
        {
            return;
        }

        const uint32_t pendingCount = readGuestU32OrZero(rdram, slot + 0x24u);
        const uint8_t promotedState = pendingCount > 0u ? 2u : 1u;
        (void)writeGuestU8(rdram, slot + 1u, promotedState);
        logKofxiUpperResourceCompat("promote-after-attach", slot, child, rdram, ctx, state1);
    }

    void kofxiUpperResourceAttachChildCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t slot = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t child = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t beforeState1 = (rdram && isKofxiUpperResourceSlotAddress(slot))
                                          ? readGuestU8OrZero(rdram, slot + 1u)
                                          : 0u;
        if (g_kofxiUpperResourceAttachChildFn)
        {
            g_kofxiUpperResourceAttachChildFn(rdram, ctx, runtime);
        }
        else if (ctx)
        {
            (void)writeGuestU32(rdram, slot + 0x28u, child);
            ctx->pc = getRegU32(ctx, 31);
        }

        logKofxiUpperResourceCompat("after-attach", slot, child, rdram, ctx, beforeState1);
        promoteKofxiUpperResourceAfterChildAttach(rdram, ctx, slot, child);
    }

    bool isKofxiCallbackResourceSlotAddress(uint32_t addr)
    {
        constexpr uint32_t kSlotBase = 0x00372368u;
        constexpr uint32_t kSlotStride = 0xC8u;
        constexpr uint32_t kSlotCount = 16u;
        return addr >= kSlotBase && addr < kSlotBase + kSlotStride * kSlotCount &&
               ((addr - kSlotBase) % kSlotStride) == 0u;
    }

    bool isKofxiControlObjectAddress(uint32_t addr)
    {
        constexpr uint32_t kControlBase = 0x0037A948u;
        constexpr uint32_t kControlStride = 0xACu;
        constexpr uint32_t kControlCount = 16u;
        return addr >= kControlBase && addr < kControlBase + kControlStride * kControlCount &&
               ((addr - kControlBase) % kControlStride) == 0u;
    }

    uint32_t kofxiCallbackResourceSlotIndex(uint32_t addr)
    {
        constexpr uint32_t kSlotBase = 0x00372368u;
        constexpr uint32_t kSlotStride = 0xC8u;
        return isKofxiCallbackResourceSlotAddress(addr) ? (addr - kSlotBase) / kSlotStride : UINT32_MAX;
    }

    std::array<std::atomic<uint32_t>, 16> &kofxiObjectServicePumpAttempts()
    {
        static std::array<std::atomic<uint32_t>, 16> attempts{};
        return attempts;
    }

    std::array<std::atomic<uint32_t>, 16> &kofxiPumpSlotConsumeAttempts()
    {
        static std::array<std::atomic<uint32_t>, 16> attempts{};
        return attempts;
    }

    bool needsKofxiObjectServicePump(uint8_t *rdram, R5900Context *ctx, uint32_t slot)
    {
        if (!rdram || !ctx || !isKofxiCallbackResourceSlotAddress(slot))
        {
            return false;
        }

        if (getRegU32(ctx, 6) != 0xFFFFFF80u)
        {
            return false;
        }

        if (readGuestU8OrZero(rdram, slot) != 1u ||
            readGuestU8OrZero(rdram, slot + 0xADu) != 1u)
        {
            return false;
        }

        const uint32_t control = readGuestU32OrZero(rdram, slot + 0x04u);
        const uint32_t upper = readGuestU32OrZero(rdram, slot + 0x94u);
        if (!isKofxiControlObjectAddress(control) ||
            !isKofxiUpperResourceSlotAddress(upper))
        {
            return false;
        }

        const uint32_t backing = readGuestU32OrZero(rdram, control + 0x04u);
        if (readGuestU8OrZero(rdram, control) != 1u ||
            readGuestU8OrZero(rdram, control + 1u) != 0u ||
            backing == 0u)
        {
            return false;
        }

        if (readGuestU8OrZero(rdram, upper) != 1u ||
            readGuestU8OrZero(rdram, upper + 1u) == 0u)
        {
            return false;
        }

        return readGuestU8OrZero(rdram, backing + 0x0Eu) == 0u &&
               readGuestU32OrZero(rdram, backing + 0xCCu) == 0u;
    }

    void logKofxiObjectServicePumpCompat(
        const char *phase,
        uint32_t slot,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t servicePc,
        uint32_t steps,
        uint32_t attempt,
        uint32_t beforeControlState1,
        uint32_t beforeBackingCount)
    {
        if (!traceKofxiObjectServicePumpCompatEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 256u)
        {
            return;
        }

        const uint32_t control = readGuestU32OrZero(rdram, slot + 0x04u);
        const uint32_t backing = control ? readGuestU32OrZero(rdram, control + 0x04u) : 0u;
        const uint32_t upper = readGuestU32OrZero(rdram, slot + 0x94u);

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:object-service-pump-compat] #" << index
                  << " " << (phase ? phase : "")
                  << " pc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " a0=0x" << (ctx ? getRegU32(ctx, 4) : 0u)
                  << " a1=0x" << (ctx ? getRegU32(ctx, 5) : 0u)
                  << " a2=0x" << (ctx ? getRegU32(ctx, 6) : 0u)
                  << " servicePc=0x" << servicePc
                  << " steps=0x" << steps
                  << " attempt=0x" << attempt
                  << " slot=0x" << slot
                  << " slotSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 3u))
                  << " slotAD=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 0xADu))
                  << " control=0x" << control
                  << " controlSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, control))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, control + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, control + 2u))
                  << " beforeControl1=0x" << beforeControlState1
                  << " backing=0x" << backing
                  << " backing0e=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, backing + 0x0Eu))
                  << " backingcc=0x" << readGuestU32OrZero(rdram, backing + 0xCCu)
                  << " beforeBackingcc=0x" << beforeBackingCount
                  << " upper=0x" << upper
                  << " upperSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 3u))
                  << " upperChild=0x" << readGuestU32OrZero(rdram, upper + 0x28u)
                  << std::dec << std::endl;
    }

    bool shouldTraceKofxiObjectManagerPollReturn(uint32_t callRa)
    {
        return callRa == 0x0014C560u ||
               callRa == 0x0014C574u ||
               callRa == 0x0014C5C4u ||
               callRa == 0x0014C5D8u ||
               callRa == 0x001B9D9Cu;
    }

    void logKofxiObjectManagerPollTrace(
        const char *phase,
        uint32_t entryPc,
        uint32_t slot,
        uint32_t mode,
        uint32_t defaultResult,
        uint32_t callRa,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiObjectManagerPollEnabled() ||
            !rdram ||
            !ctx ||
            (!isKofxiCallbackResourceSlotAddress(slot) && !shouldTraceKofxiObjectManagerPollReturn(callRa)))
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 512u)
        {
            return;
        }
        if (index >= 128u && (index & 0x0Fu) != 0u)
        {
            return;
        }

        const uint32_t control = readGuestU32OrZero(rdram, slot + 0x04u);
        const uint32_t child = readGuestU32OrZero(rdram, slot + 0x08u);
        const uint32_t resultTarget = readGuestU32OrZero(rdram, slot + 0x0Cu);
        const uint32_t upper = readGuestU32OrZero(rdram, slot + 0x94u);
        const uint32_t backing = control ? readGuestU32OrZero(rdram, control + 0x04u) : 0u;
        const uint32_t driver = control ? readGuestU32OrZero(rdram, control + 0x08u) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:object-manager-poll] #" << index
                  << " " << (phase ? phase : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << ctx->pc
                  << " ra=0x" << callRa
                  << " v0=0x" << getRegU32(ctx, 2)
                  << " a0=0x" << slot
                  << " mode=0x" << mode
                  << " default=0x" << defaultResult
                  << " slotSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 3u))
                  << " slotAD=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 0xADu))
                  << " slot40/42/44/46=0x" << readGuestU16OrZero(rdram, slot + 0x40u)
                  << "/0x" << readGuestU16OrZero(rdram, slot + 0x42u)
                  << "/0x" << readGuestU16OrZero(rdram, slot + 0x44u)
                  << "/0x" << readGuestU16OrZero(rdram, slot + 0x46u)
                  << " control=0x" << control
                  << " controlSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, control))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, control + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, control + 2u))
                  << " backing=0x" << backing
                  << " backing0e/cc/e8=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, backing + 0x0Eu))
                  << "/0x" << readGuestU32OrZero(rdram, backing + 0xCCu)
                  << "/0x" << readGuestU32OrZero(rdram, backing + 0xE8u)
                  << " driver=0x" << driver
                  << " driver0/4=0x" << readGuestU32OrZero(rdram, driver)
                  << "/0x" << readGuestU32OrZero(rdram, driver + 4u)
                  << " child=0x" << child
                  << " childSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 1u))
                  << " upper=0x" << upper
                  << " upperSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 3u))
                  << " upper28/40/44/5c=0x" << readGuestU32OrZero(rdram, upper + 0x28u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x40u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x44u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x5Cu)
                  << " resultTarget=0x" << resultTarget
                  << " target38/40/44/5c=0x" << readGuestU32OrZero(rdram, resultTarget + 0x38u)
                  << "/0x" << readGuestU32OrZero(rdram, resultTarget + 0x40u)
                  << "/0x" << readGuestU32OrZero(rdram, resultTarget + 0x44u)
                  << "/0x" << readGuestU32OrZero(rdram, resultTarget + 0x5Cu)
                  << std::dec << std::endl;
    }

    uint32_t runKofxiDetachedObjectServicePump(
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime,
        uint32_t returnPc)
    {
        if (!rdram || !ctx || !runtime || !g_kofxiObjectServicePumpFn)
        {
            return 0u;
        }

        const uint32_t budget = kofxiObjectServicePumpStepBudget();
        uint32_t steps = 0u;
        while (ctx->pc != 0u &&
               ctx->pc != returnPc &&
               runtime->hasFunction(ctx->pc) &&
               steps < budget)
        {
            PS2Runtime::RecompiledFunction fn = (ctx->pc == 0x001BAAC8u)
                                                    ? g_kofxiObjectServicePumpFn
                                                    : runtime->lookupFunction(ctx->pc);
            {
                PS2Runtime::GuestExecutionScope guestExecution(runtime);
                fn(rdram, ctx, runtime);
            }
            ++steps;
        }

        return steps;
    }

    void serviceKofxiObjectManagerBeforePoll(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!kofxiObjectServicePumpCompatEnabled() ||
            !rdram ||
            !ctx ||
            !runtime ||
            !g_kofxiObjectServicePumpFn)
        {
            return;
        }

        constexpr uint32_t kObjectPollEntryPc = 0x001B9D68u;
        constexpr uint32_t kObjectServicePumpEntryPc = 0x001BAAC8u;
        const uint32_t slot = getRegU32(ctx, 4);
        const uint32_t slotIndex = kofxiCallbackResourceSlotIndex(slot);
        if (slotIndex >= kofxiObjectServicePumpAttempts().size() ||
            !needsKofxiObjectServicePump(rdram, ctx, slot))
        {
            return;
        }

        auto &attempts = kofxiObjectServicePumpAttempts();
        const uint32_t attempt = attempts[slotIndex].fetch_add(1u, std::memory_order_relaxed) + 1u;
        if (attempt > kofxiObjectServicePumpMaxAttemptsPerSlot())
        {
            logKofxiObjectServicePumpCompat(
                "skipped-attempt-limit",
                slot,
                rdram,
                ctx,
                0u,
                0u,
                attempt,
                0u,
                0u);
            return;
        }

        const uint32_t control = readGuestU32OrZero(rdram, slot + 0x04u);
        const uint32_t backing = control ? readGuestU32OrZero(rdram, control + 0x04u) : 0u;
        const uint32_t beforeControlState1 = control ? readGuestU8OrZero(rdram, control + 1u) : 0u;
        const uint32_t beforeBackingCount = backing ? readGuestU32OrZero(rdram, backing + 0xCCu) : 0u;

        R5900Context serviceCtx = *ctx;
        serviceCtx.pc = kObjectServicePumpEntryPc;
        SET_GPR_U32(&serviceCtx, 31, kObjectPollEntryPc);
        const uint32_t steps = runKofxiDetachedObjectServicePump(
            rdram,
            &serviceCtx,
            runtime,
            kObjectPollEntryPc);

        logKofxiObjectServicePumpCompat(
            serviceCtx.pc == kObjectPollEntryPc ? "serviced" : "service-yielded",
            slot,
            rdram,
            ctx,
            serviceCtx.pc,
            steps,
            attempt,
            beforeControlState1,
            beforeBackingCount);
    }

    void kofxiObjectManagerPollCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entryPc = ctx ? ctx->pc : 0x001B9D68u;
        const uint32_t slot = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t mode = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t defaultResult = ctx ? getRegU32(ctx, 6) : 0u;
        const uint32_t callRa = ctx ? getRegU32(ctx, 31) : 0u;
        logKofxiObjectManagerPollTrace("enter", entryPc, slot, mode, defaultResult, callRa, rdram, ctx);

        serviceKofxiObjectManagerBeforePoll(rdram, ctx, runtime);

        if (g_kofxiObjectManagerPollFn)
        {
            g_kofxiObjectManagerPollFn(rdram, ctx, runtime);
        }
        else if (ctx)
        {
            ctx->pc = getRegU32(ctx, 31);
        }

        logKofxiObjectManagerPollTrace("leave", entryPc, slot, mode, defaultResult, callRa, rdram, ctx);
    }

    struct KofxiObjectTaskPointers
    {
        uint32_t slot = 0u;
        uint32_t control = 0u;
        uint32_t backing = 0u;
        uint32_t upper = 0u;
    };

    uint32_t findKofxiCallbackSlotForControl(uint8_t *rdram, uint32_t control)
    {
        if (!rdram || control == 0u)
        {
            return 0u;
        }

        constexpr uint32_t kSlotBase = 0x00372368u;
        constexpr uint32_t kSlotStride = 0xC8u;
        constexpr uint32_t kSlotCount = 16u;
        for (uint32_t i = 0; i < kSlotCount; ++i)
        {
            const uint32_t slot = kSlotBase + i * kSlotStride;
            if (readGuestU32OrZero(rdram, slot + 0x04u) == control)
            {
                return slot;
            }
        }

        return 0u;
    }

    uint32_t findKofxiControlForBacking(uint8_t *rdram, uint32_t backing)
    {
        if (!rdram || backing == 0u)
        {
            return 0u;
        }

        constexpr uint32_t kControlBase = 0x0037A948u;
        constexpr uint32_t kControlStride = 0xACu;
        constexpr uint32_t kControlCount = 16u;
        for (uint32_t i = 0; i < kControlCount; ++i)
        {
            const uint32_t control = kControlBase + i * kControlStride;
            if (readGuestU32OrZero(rdram, control + 0x04u) == backing)
            {
                return control;
            }
        }

        return 0u;
    }

    KofxiObjectTaskPointers resolveKofxiObjectTaskPointers(uint8_t *rdram, uint32_t entry, uint32_t a0)
    {
        KofxiObjectTaskPointers ptrs{};
        if (!rdram || a0 == 0u)
        {
            return ptrs;
        }

        if (entry == 0x001B9DB8u)
        {
            ptrs.slot = a0;
            ptrs.control = readGuestU32OrZero(rdram, ptrs.slot + 0x04u);
            ptrs.upper = readGuestU32OrZero(rdram, ptrs.slot + 0x94u);
            ptrs.backing = ptrs.control ? readGuestU32OrZero(rdram, ptrs.control + 0x04u) : 0u;
            return ptrs;
        }

        if (entry == 0x001B6418u || entry == 0x001B6270u)
        {
            ptrs.control = a0;
            ptrs.backing = readGuestU32OrZero(rdram, ptrs.control + 0x04u);
            ptrs.slot = findKofxiCallbackSlotForControl(rdram, ptrs.control);
            ptrs.upper = ptrs.slot ? readGuestU32OrZero(rdram, ptrs.slot + 0x94u) : 0u;
            return ptrs;
        }

        if (entry == 0x001AB940u)
        {
            ptrs.backing = a0;
            ptrs.control = findKofxiControlForBacking(rdram, ptrs.backing);
            ptrs.slot = findKofxiCallbackSlotForControl(rdram, ptrs.control);
            ptrs.upper = ptrs.slot ? readGuestU32OrZero(rdram, ptrs.slot + 0x94u) : 0u;
        }

        return ptrs;
    }

    bool shouldLogKofxiObjectTask(uint8_t *rdram, uint32_t entry, uint32_t a0, uint32_t callRa)
    {
        if (!traceKofxiObjectTaskEnabled() || !rdram)
        {
            return false;
        }

        const KofxiObjectTaskPointers ptrs = resolveKofxiObjectTaskPointers(rdram, entry, a0);
        if (isKofxiCallbackResourceSlotAddress(ptrs.slot) ||
            isKofxiControlObjectAddress(ptrs.control) ||
            isKofxiUpperResourceSlotAddress(ptrs.upper))
        {
            return true;
        }

        return callRa == 0x001B9E20u ||
               callRa == 0x001B9E58u ||
               callRa == 0x001B6460u ||
               callRa == 0x001B6498u;
    }

    void logKofxiObjectTask(
        const char *phase,
        const char *name,
        uint32_t entry,
        const KofxiObjectTaskPointers &ptrs,
        uint32_t a0Snapshot,
        uint32_t a1Snapshot,
        uint32_t a2Snapshot,
        uint32_t callRa,
        uint32_t callSp,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiObjectTaskEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 2048u)
        {
            return;
        }
        if (index >= 512u && (index & 0x1Fu) != 0u)
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t v1 = ctx ? getRegU32(ctx, 3) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:object-task] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " callRa=0x" << callRa
                  << " sp=0x" << callSp
                  << " v0=0x" << v0
                  << " v1=0x" << v1
                  << " a0=0x" << a0Snapshot
                  << " a1=0x" << a1Snapshot
                  << " a2=0x" << a2Snapshot
                  << " slot=0x" << ptrs.slot
                  << " slotSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 3u))
                  << " slotAD=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 0xADu))
                  << " slotOut=0x" << readGuestU16OrZero(rdram, ptrs.slot + 0x42u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.slot + 0x44u)
                  << " control=0x" << ptrs.control
                  << " controlSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 3u))
                  << " controlcc=0x" << readGuestU32OrZero(rdram, ptrs.control + 0xCCu)
                  << " controle2=0x" << readGuestU16OrZero(rdram, ptrs.control + 0xE2u)
                  << " backing=0x" << ptrs.backing
                  << " backing0d/0e/0f=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Du))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Eu))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Fu))
                  << " backing10=0x" << readGuestU32OrZero(rdram, ptrs.backing + 0x10u)
                  << " backing98/9c=0x" << readGuestU16OrZero(rdram, ptrs.backing + 0x98u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.backing + 0x9Cu)
                  << " backingcc=0x" << readGuestU32OrZero(rdram, ptrs.backing + 0xCCu)
                  << " backinge8=0x" << readGuestU32OrZero(rdram, ptrs.backing + 0xE8u)
                  << " upper=0x" << ptrs.upper
                  << " upperSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 3u))
                  << " upperChild=0x" << readGuestU32OrZero(rdram, ptrs.upper + 0x28u)
                  << std::dec << std::endl;
    }

    void runKofxiObjectTaskTraceCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const KofxiObjectTaskPointers ptrs = resolveKofxiObjectTaskPointers(rdram, entry, a0);
        const bool shouldLog = shouldLogKofxiObjectTask(rdram, entry, a0, callRa);

        if (shouldLog)
        {
            logKofxiObjectTask("enter", name, entry, ptrs, a0, a1, a2, callRa, callSp, rdram, ctx);
        }
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        if (shouldLog)
        {
            logKofxiObjectTask("leave", name, entry, ptrs, a0, a1, a2, callRa, callSp, rdram, ctx);
        }
    }

    const char *kofxiObjectBackingCompleteCandidateRejectReason(
        uint8_t *rdram,
        const KofxiObjectTaskPointers &ptrs,
        const char **acceptReason = nullptr)
    {
        if (acceptReason)
        {
            *acceptReason = nullptr;
        }
        if (!rdram)
        {
            return "no-rdram";
        }
        if (!isKofxiCallbackResourceSlotAddress(ptrs.slot))
        {
            return "bad-slot";
        }
        if (!isKofxiControlObjectAddress(ptrs.control))
        {
            return "bad-control";
        }
        if (ptrs.backing == 0u)
        {
            return "no-backing";
        }
        if (!isKofxiUpperResourceSlotAddress(ptrs.upper))
        {
            return "bad-upper";
        }

        if (readGuestU32OrZero(rdram, ptrs.slot + 0x04u) != ptrs.control ||
            readGuestU32OrZero(rdram, ptrs.slot + 0x94u) != ptrs.upper ||
            readGuestU32OrZero(rdram, ptrs.control + 0x04u) != ptrs.backing)
        {
            return "link-mismatch";
        }

        const uint32_t child = readGuestU32OrZero(rdram, ptrs.upper + 0x28u);
        if (!isKofxiChildResourceAddress(child))
        {
            return "bad-child";
        }

        if (readGuestU8OrZero(rdram, ptrs.slot) != 1u)
        {
            return "slot0";
        }
        if (readGuestU8OrZero(rdram, ptrs.slot + 0xADu) != 1u)
        {
            return "slot-ad";
        }
        if (readGuestU8OrZero(rdram, ptrs.control) != 1u)
        {
            return "control0";
        }
        if (readGuestU32OrZero(rdram, ptrs.backing + 0xCCu) != 0u)
        {
            return "backing-cc";
        }
        if (readGuestU8OrZero(rdram, ptrs.backing + 0x0Eu) != 0u)
        {
            return "backing-0e";
        }
        if (readGuestU32OrZero(rdram, ptrs.backing + 0xE8u) != 0u)
        {
            return "backing-e8";
        }
        if (readGuestU8OrZero(rdram, ptrs.upper) != 1u)
        {
            return "upper0";
        }
        if (readGuestU8OrZero(rdram, ptrs.upper + 2u) != 0u)
        {
            return "upper2";
        }
        if (readGuestU8OrZero(rdram, ptrs.upper + 3u) != 0u)
        {
            return "upper3";
        }
        if (readGuestU32OrZero(rdram, ptrs.upper + 0x20u) != 0u)
        {
            return "upper20";
        }
        if (readGuestU32OrZero(rdram, ptrs.upper + 0x24u) != 0u)
        {
            return "upper24";
        }
        if (readGuestU8OrZero(rdram, child) != 1u)
        {
            return "child0";
        }
        if (readGuestU8OrZero(rdram, child + 1u) != 4u)
        {
            return "child1";
        }

        const uint8_t slot1 = readGuestU8OrZero(rdram, ptrs.slot + 1u);
        const uint8_t slot2 = readGuestU8OrZero(rdram, ptrs.slot + 2u);
        const uint8_t slot3 = readGuestU8OrZero(rdram, ptrs.slot + 3u);
        const uint8_t control1 = readGuestU8OrZero(rdram, ptrs.control + 1u);
        const uint8_t upper1 = readGuestU8OrZero(rdram, ptrs.upper + 1u);

        const bool preConsumeComplete =
            slot1 == 6u &&
            control1 == 0u &&
            upper1 == 3u;
        if (preConsumeComplete)
        {
            if (acceptReason)
            {
                *acceptReason = "ok-pre-consume";
            }
            return nullptr;
        }

        const bool postConsumeComplete =
            slot1 == 1u &&
            slot2 == 4u &&
            (slot3 == 1u || slot3 == 2u) &&
            control1 == 1u &&
            upper1 == 1u;
        if (postConsumeComplete)
        {
            if (acceptReason)
            {
                *acceptReason = "ok-post-consume";
            }
            return nullptr;
        }

        const bool promotedPostConsumeComplete =
            slot1 == 1u &&
            slot2 == 4u &&
            (slot3 == 1u || slot3 == 2u) &&
            control1 == 1u &&
            upper1 == 3u;
        if (promotedPostConsumeComplete)
        {
            if (acceptReason)
            {
                *acceptReason = "ok-post-promoted";
            }
            return nullptr;
        }

        if (slot1 != 1u && slot1 != 6u)
        {
            return "slot1";
        }
        if (slot1 == 1u && slot2 != 4u)
        {
            return "slot2";
        }
        if (slot1 == 1u && slot3 != 1u && slot3 != 2u)
        {
            return "slot3";
        }
        if ((slot1 == 6u && control1 != 0u) || (slot1 == 1u && control1 != 1u))
        {
            return "control1";
        }
        if ((slot1 == 6u && upper1 != 3u) ||
            (slot1 == 1u && upper1 != 1u && upper1 != 3u))
        {
            return "upper1";
        }

        return "state";
    }

    bool isKofxiObjectBackingCompleteCandidate(uint8_t *rdram, const KofxiObjectTaskPointers &ptrs)
    {
        return kofxiObjectBackingCompleteCandidateRejectReason(rdram, ptrs) == nullptr;
    }

    const char *kofxiObjectBackingCompleteCandidateAcceptReason(uint8_t *rdram, const KofxiObjectTaskPointers &ptrs)
    {
        const char *acceptReason = nullptr;
        const char *rejectReason = kofxiObjectBackingCompleteCandidateRejectReason(rdram, ptrs, &acceptReason);
        return rejectReason ? nullptr : acceptReason;
    }

    void logKofxiObjectBackingCompleteCompat(
        uint8_t *rdram,
        R5900Context *ctx,
        const KofxiObjectTaskPointers &ptrs,
        uint32_t originalResult,
        const char *outcome,
        const char *reason)
    {
        if (!traceKofxiObjectBackingCompleteCompatEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 256u)
        {
            return;
        }

        const uint32_t child = readGuestU32OrZero(rdram, ptrs.upper + 0x28u);
        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:object-backing-complete-compat] #" << index
                  << " " << (outcome ? outcome : "")
                  << " reason=" << (reason ? reason : "")
                  << " pc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " original=0x" << originalResult
                  << " slot=0x" << ptrs.slot
                  << " slotSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 3u))
                  << " slotAD=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 0xADu))
                  << " control=0x" << ptrs.control
                  << " controlSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 2u))
                  << " backing=0x" << ptrs.backing
                  << " backing0d/0e/0f=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Du))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Eu))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Fu))
                  << " backingcc/e8=0x" << readGuestU32OrZero(rdram, ptrs.backing + 0xCCu)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.backing + 0xE8u)
                  << " upper=0x" << ptrs.upper
                  << " upperSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 3u))
                  << " child=0x" << child
                  << " childSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 1u))
                  << std::dec << std::endl;
    }

    void applyKofxiObjectBackingCompleteCompatIfNeeded(
        uint8_t *rdram,
        R5900Context *ctx,
        const KofxiObjectTaskPointers &ptrs)
    {
        if (!kofxiObjectBackingCompleteCompatEnabled() || !ctx)
        {
            return;
        }

        const uint32_t originalResult = getRegU32(ctx, 2);
        const char *acceptReason = nullptr;
        const char *rejectReason = kofxiObjectBackingCompleteCandidateRejectReason(rdram, ptrs, &acceptReason);
        if (originalResult != 0u || rejectReason)
        {
            if (traceKofxiObjectBackingCompleteCompatEnabled())
            {
                logKofxiObjectBackingCompleteCompat(
                    rdram,
                    ctx,
                    ptrs,
                    originalResult,
                    "skip",
                    originalResult != 0u ? "result" : rejectReason);
            }
            return;
        }

        setReturnS32(ctx, 2);
        logKofxiObjectBackingCompleteCompat(
            rdram,
            ctx,
            ptrs,
            originalResult,
            "mapped-complete",
            acceptReason ? acceptReason : "ok");
    }

    void kofxiTraceObjectTaskPoll(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectTaskTraceCall(
            "kofxiObjectTaskPoll",
            0x001B9DB8u,
            g_kofxiObjectTaskPollFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceObjectStatusFromControl(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectTaskTraceCall(
            "kofxiObjectStatusFromControl",
            0x001B6418u,
            g_kofxiObjectStatusFromControlFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceObjectStatusFromBacking(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectTaskTraceCall(
            "kofxiObjectStatusFromBacking",
            0x001B6270u,
            g_kofxiObjectStatusFromBackingFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceObjectBackingStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const KofxiObjectTaskPointers ptrs = resolveKofxiObjectTaskPointers(rdram, 0x001AB940u, a0);
        runKofxiObjectTaskTraceCall(
            "kofxiObjectBackingStatus",
            0x001AB940u,
            g_kofxiObjectBackingStatusFn,
            rdram,
            ctx,
            runtime);
        applyKofxiObjectBackingCompleteCompatIfNeeded(rdram, ctx, ptrs);
    }

    struct KofxiObjectPumpPointers
    {
        uint32_t slot = 0u;
        uint32_t control = 0u;
        uint32_t backing = 0u;
        uint32_t driver = 0u;
        uint32_t upper = 0u;
    };

    void promoteKofxiUpperAfterEmptyChildComplete(
        uint8_t *rdram,
        R5900Context *ctx,
        const KofxiObjectPumpPointers &ptrs,
        uint32_t child);

    bool isKofxiUpperEmptyChildCompletePending(uint8_t *rdram, uint32_t upper, uint32_t child);

    void consumeKofxiCompletedPumpSlotIfNeeded(
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime,
        uint32_t slot,
        const KofxiObjectPumpPointers &before);

    KofxiObjectPumpPointers makeKofxiObjectPumpPointers(uint8_t *rdram, uint32_t slot)
    {
        KofxiObjectPumpPointers ptrs{};
        if (!rdram || !isKofxiCallbackResourceSlotAddress(slot))
        {
            return ptrs;
        }

        ptrs.slot = slot;
        ptrs.control = readGuestU32OrZero(rdram, slot + 0x04u);
        ptrs.upper = readGuestU32OrZero(rdram, slot + 0x94u);
        if (isKofxiControlObjectAddress(ptrs.control))
        {
            ptrs.backing = readGuestU32OrZero(rdram, ptrs.control + 0x04u);
            ptrs.driver = readGuestU32OrZero(rdram, ptrs.control + 0x08u);
        }
        return ptrs;
    }

    KofxiObjectPumpPointers makeKofxiObjectPumpPointersFromUpper(uint8_t *rdram, uint32_t upper)
    {
        KofxiObjectPumpPointers ptrs{};
        if (!rdram || !isKofxiUpperResourceSlotAddress(upper))
        {
            return ptrs;
        }

        ptrs.upper = upper;
        constexpr uint32_t kSlotBase = 0x00372368u;
        constexpr uint32_t kSlotStride = 0xC8u;
        constexpr uint32_t kSlotCount = 16u;
        for (uint32_t i = 0; i < kSlotCount; ++i)
        {
            const uint32_t slot = kSlotBase + i * kSlotStride;
            if (readGuestU32OrZero(rdram, slot + 0x94u) == upper)
            {
                return makeKofxiObjectPumpPointers(rdram, slot);
            }
        }

        return ptrs;
    }

    uint32_t kofxiChildResourceIndex(uint32_t child)
    {
        constexpr uint32_t kChildBase = 0x0037B428u;
        constexpr uint32_t kChildStride = 0x60u;
        return isKofxiChildResourceAddress(child) ? (child - kChildBase) / kChildStride : UINT32_MAX;
    }

    uint32_t findKofxiCallbackSlotForChild(uint8_t *rdram, uint32_t child)
    {
        if (!rdram || !isKofxiChildResourceAddress(child))
        {
            return 0u;
        }

        constexpr uint32_t kSlotBase = 0x00372368u;
        constexpr uint32_t kSlotStride = 0xC8u;
        constexpr uint32_t kSlotCount = 16u;
        for (uint32_t i = 0u; i < kSlotCount; ++i)
        {
            const uint32_t slot = kSlotBase + i * kSlotStride;
            if (readGuestU32OrZero(rdram, slot + 0x08u) == child)
            {
                return slot;
            }
        }

        return 0u;
    }

    KofxiObjectPumpPointers makeKofxiObjectPumpPointersFromChild(uint8_t *rdram, uint32_t child)
    {
        KofxiObjectPumpPointers ptrs{};
        const uint32_t slot = findKofxiCallbackSlotForChild(rdram, child);
        if (slot != 0u)
        {
            return makeKofxiObjectPumpPointers(rdram, slot);
        }

        if (!rdram || !isKofxiChildResourceAddress(child))
        {
            return ptrs;
        }

        constexpr uint32_t kUpperBase = 0x0037F1D0u;
        constexpr uint32_t kUpperStride = 0x238u;
        constexpr uint32_t kUpperCount = 32u;
        for (uint32_t i = 0u; i < kUpperCount; ++i)
        {
            const uint32_t upper = kUpperBase + i * kUpperStride;
            if (readGuestU32OrZero(rdram, upper + 0x28u) == child)
            {
                ptrs = makeKofxiObjectPumpPointersFromUpper(rdram, upper);
                if (ptrs.upper == 0u)
                {
                    ptrs.upper = upper;
                }
                break;
            }
        }

        return ptrs;
    }

    void appendKofxiChildResourceSummary(std::ostream &out, uint8_t *rdram)
    {
        constexpr uint32_t kChildBase = 0x0037B428u;
        constexpr uint32_t kChildStride = 0x60u;
        constexpr uint32_t kChildCount = 40u;

        out << " childSlots=";
        bool any = false;
        for (uint32_t i = 0u; i < kChildCount; ++i)
        {
            const uint32_t child = kChildBase + i * kChildStride;
            const uint32_t active = readGuestU8OrZero(rdram, child);
            const uint32_t state = readGuestU8OrZero(rdram, child + 1u);
            const uint32_t handle = readGuestU32OrZero(rdram, child + 0x08u);
            if (active == 0u && state == 0u && handle == 0u)
            {
                continue;
            }

            if (any)
            {
                out << ",";
            }
            any = true;
            out << i << ":"
                << active << "/" << state
                << "/" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 2u))
                << "/" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 3u))
                << "/45-" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x45u))
                << "/" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x46u))
                << "/" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x47u))
                << "/" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x48u))
                << "/" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x49u))
                << "/h" << handle
                << "/24" << readGuestU32OrZero(rdram, child + 0x24u)
                << "/28" << readGuestU32OrZero(rdram, child + 0x28u)
                << "/50" << readGuestU32OrZero(rdram, child + 0x50u)
                << "/54" << readGuestU32OrZero(rdram, child + 0x54u)
                << "/58" << readGuestU32OrZero(rdram, child + 0x58u);
        }
        if (!any)
        {
            out << "none";
        }
    }

    void appendKofxiObjectPumpSlotSummary(std::ostream &out, uint8_t *rdram)
    {
        constexpr uint32_t kSlotBase = 0x00372368u;
        constexpr uint32_t kSlotStride = 0xC8u;
        constexpr uint32_t kSlotCount = 16u;
        out << " pumpSlots=";
        for (uint32_t i = 0; i < kSlotCount; ++i)
        {
            const uint32_t slot = kSlotBase + i * kSlotStride;
            if (i != 0u)
            {
                out << ",";
            }
            const uint32_t control = readGuestU32OrZero(rdram, slot + 0x04u);
            const uint32_t upper = readGuestU32OrZero(rdram, slot + 0x94u);
            out << i << ":"
                << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot))
                << "/" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 1u))
                << "/" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 0xADu))
                << "/c" << (isKofxiControlObjectAddress(control) ? (control - 0x0037A948u) / 0xACu : UINT32_MAX)
                << "/u" << (isKofxiUpperResourceSlotAddress(upper) ? (upper - 0x0037F1D0u) / 0x238u : UINT32_MAX);
        }
    }

    void logKofxiObjectPumpState(
        const char *phase,
        const char *name,
        uint32_t entry,
        const KofxiObjectPumpPointers &ptrs,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t result,
        uint32_t callRa,
        uint32_t callSp,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiObjectPumpStateEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 2048u)
        {
            return;
        }
        if (index >= 512u && (index & 0x1Fu) != 0u)
        {
            return;
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:object-pump-state] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " callRa=0x" << callRa
                  << " sp=0x" << callSp
                  << " v0=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << " result=0x" << result
                  << " a0=0x" << a0
                  << " a1=0x" << a1
                  << " a2=0x" << a2
                  << " guard=0x" << readGuestU32OrZero(rdram, 0x0037C368u)
                  << " pumpCount=0x" << readGuestU32OrZero(rdram, 0x0037C370u)
                  << " resMgr=0x" << readGuestU32OrZero(rdram, 0x00385320u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x00385328u)
                  << " slot=0x" << ptrs.slot
                  << " slotIdx=0x" << kofxiCallbackResourceSlotIndex(ptrs.slot)
                  << " slotSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 3u))
                  << " slotAD=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 0xADu))
                  << " slot42/44/46=0x" << readGuestU16OrZero(rdram, ptrs.slot + 0x42u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.slot + 0x44u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.slot + 0x46u)
                  << " control=0x" << ptrs.control
                  << " controlSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 2u))
                  << " controlA0/A4=0x" << readGuestU32OrZero(rdram, ptrs.control + 0xA0u)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.control + 0xA4u)
                  << " backing=0x" << ptrs.backing
                  << " backing0d/0e/0f=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Du))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Eu))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Fu))
                  << " backingcc/e8=0x" << readGuestU32OrZero(rdram, ptrs.backing + 0xCCu)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.backing + 0xE8u)
                  << " driver=0x" << ptrs.driver
                  << " driverSt=0x" << readGuestU32OrZero(rdram, ptrs.driver)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.driver + 4u)
                  << " upper=0x" << ptrs.upper
                  << " upperSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 3u))
                  << " upper28/40/44/5c=0x" << readGuestU32OrZero(rdram, ptrs.upper + 0x28u)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.upper + 0x40u)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.upper + 0x44u)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.upper + 0x5Cu);
        appendKofxiObjectPumpSlotSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    void runKofxiObjectPumpStateTraceCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        KofxiObjectPumpPointers before{};
        if (entry == 0x001BD858u || entry == 0x001BD888u)
        {
            before = makeKofxiObjectPumpPointers(rdram, a0);
        }
        else if (entry == 0x001CA338u || entry == 0x001CA388u)
        {
            before = makeKofxiObjectPumpPointersFromUpper(rdram, a0);
            if (before.upper == 0u && isKofxiUpperResourceSlotAddress(a0))
            {
                before.upper = a0;
            }
        }

        logKofxiObjectPumpState("enter", name, entry, before, a0, a1, a2, 0u, callRa, callSp, rdram, ctx);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        const uint32_t result = getRegU32(ctx, 2);
        KofxiObjectPumpPointers after = before;
        if (entry == 0x001BD858u || entry == 0x001BD888u)
        {
            after = makeKofxiObjectPumpPointers(rdram, a0);
        }
        else if (entry == 0x001CA338u || entry == 0x001CA388u)
        {
            after = makeKofxiObjectPumpPointersFromUpper(rdram, a0);
            if (after.upper == 0u && isKofxiUpperResourceSlotAddress(a0))
            {
                after.upper = a0;
            }
        }
        logKofxiObjectPumpState("leave", name, entry, after, a0, a1, a2, result, callRa, callSp, rdram, ctx);
        if (entry == 0x001BD858u)
        {
            consumeKofxiCompletedPumpSlotIfNeeded(rdram, ctx, runtime, a0, after);
        }
    }

    void kofxiTraceObjectPumpCore(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpStateTraceCall("kofxiObjectPumpCore", 0x001BAAF0u, g_kofxiObjectPumpCoreFn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpLocked(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpStateTraceCall("kofxiObjectPumpLocked", 0x001BAAC8u, g_kofxiObjectPumpLockedFn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpServiceSlot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpStateTraceCall("kofxiObjectPumpServiceSlot", 0x001BD858u, g_kofxiObjectPumpServiceSlotFn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpDispatchSlot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpStateTraceCall("kofxiObjectPumpDispatchSlot", 0x001BD888u, g_kofxiObjectPumpDispatchSlotFn, rdram, ctx, runtime);
    }

    void logKofxiPumpSlotConsumeReject(
        const char *reason,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t slot,
        const KofxiObjectPumpPointers &ptrs,
        PS2Runtime *runtime)
    {
        if (!traceKofxiPumpSlotConsumeCompatEnabled() || !rdram)
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 256u)
        {
            return;
        }

        const uint32_t upper = ptrs.upper ? ptrs.upper : readGuestU32OrZero(rdram, slot + 0x94u);
        const uint32_t slotChild = readGuestU32OrZero(rdram, slot + 0x08u);
        const uint32_t upperChild = isKofxiUpperResourceSlotAddress(upper) ? readGuestU32OrZero(rdram, upper + 0x28u) : 0u;
        const uint32_t child = isKofxiChildResourceAddress(slotChild) ? slotChild : upperChild;
        const uint32_t object10 = readGuestU32OrZero(rdram, slot + 0x10u);
        const uint32_t object10Vtable = object10 ? readGuestU32OrZero(rdram, object10) : 0u;
        const uint32_t object10Callback = object10Vtable ? readGuestU32OrZero(rdram, object10Vtable + 0x14u) : 0u;
        const uint32_t object14 = readGuestU32OrZero(rdram, slot + 0x14u);
        const uint32_t object14Vtable = object14 ? readGuestU32OrZero(rdram, object14) : 0u;
        const uint32_t callback = object14Vtable ? readGuestU32OrZero(rdram, object14Vtable + 0x14u) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:pump-slot-consume-compat] #" << index
                  << " rejected reason=" << (reason ? reason : "")
                  << " pc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " slot=0x" << slot
                  << " slotIdx=0x" << kofxiCallbackResourceSlotIndex(slot)
                  << " slotSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 3u))
                  << " slotAD=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 0xADu))
                  << " slot60=0x" << readGuestU16OrZero(rdram, slot + 0x60u)
                  << " slot10/14=0x" << object10
                  << "/0x" << object14
                  << " obj10Vtable/cb=0x" << object10Vtable
                  << "/0x" << object10Callback
                  << " obj14Vtable/cb=0x" << object14Vtable
                  << "/0x" << callback
                  << " cbKnown=0x" << (callback == 0u || (runtime && runtime->hasFunction(callback)) ? 1u : 0u)
                  << " upper=0x" << upper
                  << " upperSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 3u))
                  << " upper20/24/28=0x" << readGuestU32OrZero(rdram, upper + 0x20u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x24u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x28u)
                  << " child=0x" << child
                  << " childSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 1u))
                  << " child24/28=0x" << readGuestU32OrZero(rdram, child + 0x24u)
                  << "/0x" << readGuestU32OrZero(rdram, child + 0x28u);
        appendKofxiObjectPumpSlotSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    bool isKofxiPumpSlotConsumeCandidate(uint8_t *rdram, uint32_t slot, const KofxiObjectPumpPointers &ptrs, PS2Runtime *runtime)
    {
        if (!rdram || !runtime || !isKofxiCallbackResourceSlotAddress(slot))
        {
            return false;
        }
        if (readGuestU8OrZero(rdram, slot) != 1u ||
            readGuestU8OrZero(rdram, slot + 1u) != 6u ||
            readGuestU8OrZero(rdram, slot + 0xADu) != 1u)
        {
            return false;
        }

        const uint32_t upper = ptrs.upper ? ptrs.upper : readGuestU32OrZero(rdram, slot + 0x94u);
        const uint32_t slotChild = readGuestU32OrZero(rdram, slot + 0x08u);
        const uint32_t upperChild = isKofxiUpperResourceSlotAddress(upper) ? readGuestU32OrZero(rdram, upper + 0x28u) : 0u;
        const uint32_t child = isKofxiChildResourceAddress(slotChild) ? slotChild : upperChild;
        if (!isKofxiUpperResourceSlotAddress(upper) ||
            !isKofxiChildResourceAddress(child) ||
            readGuestU32OrZero(rdram, upper + 0x28u) != child)
        {
            return false;
        }
        const uint8_t upperState = readGuestU8OrZero(rdram, upper + 1u);
        if (readGuestU8OrZero(rdram, upper) != 1u ||
            (upperState != 3u &&
             !(upperState == 1u && isKofxiUpperEmptyChildCompletePending(rdram, upper, child))) ||
            readGuestU8OrZero(rdram, upper + 2u) != 0u ||
            readGuestU8OrZero(rdram, upper + 3u) != 0u ||
            readGuestU32OrZero(rdram, upper + 0x20u) != 0u ||
            readGuestU32OrZero(rdram, upper + 0x24u) != 0u ||
            readGuestU8OrZero(rdram, child) != 1u ||
            readGuestU8OrZero(rdram, child + 1u) != 4u)
        {
            return false;
        }

        const uint32_t object10 = readGuestU32OrZero(rdram, slot + 0x10u);
        if (object10 == 0u)
        {
            return false;
        }

        const uint32_t object10Vtable = readGuestU32OrZero(rdram, object10);
        const uint32_t callback = object10Vtable ? readGuestU32OrZero(rdram, object10Vtable + 0x14u) : 0u;
        if (object10Vtable == 0u || (callback != 0u && !runtime->hasFunction(callback)))
        {
            return false;
        }

        const uint32_t callbackCount = readGuestU8OrZero(rdram, slot + 3u);
        if (callbackCount > 8u)
        {
            return false;
        }
        for (uint32_t i = 0u; i < callbackCount; ++i)
        {
            const uint32_t object = readGuestU32OrZero(rdram, slot + 0x18u + i * 4u);
            const uint32_t vtable = object ? readGuestU32OrZero(rdram, object) : 0u;
            const uint32_t objectCallback = vtable ? readGuestU32OrZero(rdram, vtable + 0x14u) : 0u;
            if (object == 0u ||
                vtable == 0u ||
                (objectCallback != 0u && !runtime->hasFunction(objectCallback)))
            {
                return false;
            }
        }

        return true;
    }

    void logKofxiPumpSlotConsumeCompat(
        const char *phase,
        uint32_t slot,
        const KofxiObjectPumpPointers &before,
        const KofxiObjectPumpPointers &after,
        uint32_t steps,
        uint32_t servicePc,
        uint32_t attempt,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiPumpSlotConsumeCompatEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 256u)
        {
            return;
        }

        const uint32_t upper = before.upper ? before.upper : readGuestU32OrZero(rdram, slot + 0x94u);
        const uint32_t slotChild = readGuestU32OrZero(rdram, slot + 0x08u);
        const uint32_t upperChild = isKofxiUpperResourceSlotAddress(upper) ? readGuestU32OrZero(rdram, upper + 0x28u) : 0u;
        const uint32_t child = isKofxiChildResourceAddress(slotChild) ? slotChild : upperChild;
        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:pump-slot-consume-compat] #" << index
                  << " " << (phase ? phase : "")
                  << " pc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " servicePc=0x" << servicePc
                  << " steps=0x" << steps
                  << " attempt=0x" << attempt
                  << " slot=0x" << slot
                  << " slotIdx=0x" << kofxiCallbackResourceSlotIndex(slot)
                  << " slotBefore=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, before.slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, before.slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, before.slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, before.slot + 3u))
                  << " slotNow=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 3u))
                  << " slot3c/3e/40=0x" << readGuestU16OrZero(rdram, slot + 0x3Cu)
                  << "/0x" << readGuestU16OrZero(rdram, slot + 0x3Eu)
                  << "/0x" << readGuestU16OrZero(rdram, slot + 0x40u)
                  << " slotAD=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 0xADu))
                  << " upper=0x" << upper
                  << " upperBefore=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, before.upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, before.upper + 1u))
                  << " upperNow=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 3u))
                  << " upper14/18/20/24=0x" << readGuestU32OrZero(rdram, upper + 0x14u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x18u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x20u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x24u)
                  << " upper28/40/44/5c=0x" << readGuestU32OrZero(rdram, upper + 0x28u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x40u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x44u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x5Cu)
                  << " child=0x" << child
                  << " childNow=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 1u))
                  << " afterSlot=0x" << after.slot
                  << " afterUpper=0x" << after.upper;
        appendKofxiObjectPumpSlotSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    void logKofxiResourceProgressCompleteCompat(
        const char *phase,
        uint32_t slot,
        uint32_t upper,
        uint32_t child,
        uint32_t beforeSlotCurrent,
        uint32_t beforeUpperAmount,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiResourceProgressCompleteCompatEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 128u)
        {
            return;
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:resource-progress-complete-compat] #" << index
                  << " " << (phase ? phase : "")
                  << " pc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " slot=0x" << slot
                  << " slotIdx=0x" << kofxiCallbackResourceSlotIndex(slot)
                  << " slotSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 3u))
                  << " slot3c/3e(before-now)/40=0x" << readGuestU16OrZero(rdram, slot + 0x3Cu)
                  << "/0x" << beforeSlotCurrent
                  << "/0x" << readGuestU16OrZero(rdram, slot + 0x3Eu)
                  << "/0x" << readGuestU16OrZero(rdram, slot + 0x40u)
                  << " upper=0x" << upper
                  << " upperSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 3u))
                  << " upper14(before-now)/18/20/24=0x" << beforeUpperAmount
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x14u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x18u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x20u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x24u)
                  << " child=0x" << child
                  << " childSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 1u))
                  << std::dec << std::endl;
    }

    void completeKofxiResourceProgressIfNeeded(
        uint8_t *rdram,
        R5900Context *ctx,
        const KofxiObjectPumpPointers &ptrs)
    {
        if (!kofxiResourceProgressCompleteCompatEnabled() || !rdram)
        {
            return;
        }

        const uint32_t slot = ptrs.slot;
        const uint32_t upper = ptrs.upper;
        if (!isKofxiCallbackResourceSlotAddress(slot) ||
            !isKofxiUpperResourceSlotAddress(upper) ||
            readGuestU32OrZero(rdram, slot + 0x94u) != upper)
        {
            return;
        }

        const uint32_t slotChild = readGuestU32OrZero(rdram, slot + 0x08u);
        const uint32_t upperChild = readGuestU32OrZero(rdram, upper + 0x28u);
        const uint32_t child = isKofxiChildResourceAddress(slotChild) ? slotChild : upperChild;
        if (!isKofxiChildResourceAddress(child) || upperChild != child)
        {
            return;
        }

        const uint8_t upperState = readGuestU8OrZero(rdram, upper + 1u);
        const bool upperCompleteLike =
            upperState == 3u ||
            (upperState == 1u && isKofxiUpperEmptyChildCompletePending(rdram, upper, child));

        if (readGuestU8OrZero(rdram, slot) != 1u ||
            readGuestU8OrZero(rdram, slot + 1u) != 1u ||
            readGuestU8OrZero(rdram, slot + 2u) != 4u ||
            readGuestU8OrZero(rdram, slot + 0xADu) != 1u ||
            readGuestU8OrZero(rdram, upper) != 1u ||
            !upperCompleteLike ||
            readGuestU8OrZero(rdram, upper + 2u) != 0u ||
            readGuestU8OrZero(rdram, upper + 3u) != 0u ||
            readGuestU32OrZero(rdram, upper + 0x20u) != 0u ||
            readGuestU32OrZero(rdram, upper + 0x24u) != 0u ||
            readGuestU8OrZero(rdram, child) != 1u ||
            readGuestU8OrZero(rdram, child + 1u) != 4u)
        {
            return;
        }

        const uint32_t slotTotal = readGuestU16OrZero(rdram, slot + 0x3Cu);
        const uint32_t slotCurrent = readGuestU16OrZero(rdram, slot + 0x3Eu);
        const uint32_t upperAmount = readGuestU32OrZero(rdram, upper + 0x14u);
        const uint32_t upperTotal = readGuestU32OrZero(rdram, upper + 0x18u);
        if (slotTotal == 0u ||
            slotCurrent >= slotTotal ||
            upperAmount >= upperTotal ||
            upperTotal != (slotTotal << 11u) ||
            upperAmount != (slotCurrent << 11u))
        {
            return;
        }

        const uint32_t chunkGap = slotTotal - slotCurrent;
        const uint32_t byteGap = upperTotal - upperAmount;
        if (chunkGap > 4u || byteGap > 0x2000u)
        {
            logKofxiResourceProgressCompleteCompat(
                "skip-gap",
                slot,
                upper,
                child,
                slotCurrent,
                upperAmount,
                rdram,
                ctx);
            return;
        }

        (void)writeGuestU16(rdram, slot + 0x3Eu, static_cast<uint16_t>(slotTotal));
        (void)writeGuestU32(rdram, upper + 0x14u, upperTotal);
        logKofxiResourceProgressCompleteCompat(
            upperState == 1u ? "mapped-complete-pending-upper" : "mapped-complete",
            slot,
            upper,
            child,
            slotCurrent,
            upperAmount,
            rdram,
            ctx);
    }

    uint32_t runKofxiDetachedPumpSlotConsumer(
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime,
        uint32_t returnPc)
    {
        if (!rdram || !ctx || !runtime || !g_kofxiPumpSlotConsumerFn)
        {
            return 0u;
        }

        constexpr uint32_t kStepBudget = 0x100u;
        uint32_t steps = 0u;
        while (ctx->pc != 0u &&
               ctx->pc != returnPc &&
               runtime->hasFunction(ctx->pc) &&
               steps < kStepBudget)
        {
            PS2Runtime::RecompiledFunction fn = (ctx->pc == 0x001B2260u)
                                                    ? g_kofxiPumpSlotConsumerFn
                                                    : runtime->lookupFunction(ctx->pc);
            {
                PS2Runtime::GuestExecutionScope guestExecution(runtime);
                fn(rdram, ctx, runtime);
            }
            ++steps;
        }

        return steps;
    }

    void consumeKofxiCompletedPumpSlotIfNeeded(
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime,
        uint32_t slot,
        const KofxiObjectPumpPointers &before)
    {
        if (!rdram || !ctx || !runtime)
        {
            return;
        }
        if (!kofxiPumpSlotConsumeCompatEnabled())
        {
            logKofxiPumpSlotConsumeReject("compat-disabled", rdram, ctx, slot, before, runtime);
            return;
        }
        if (!g_kofxiPumpSlotConsumerFn)
        {
            logKofxiPumpSlotConsumeReject("consumer-missing", rdram, ctx, slot, before, runtime);
            return;
        }

        if (!isKofxiPumpSlotConsumeCandidate(rdram, slot, before, runtime))
        {
            logKofxiPumpSlotConsumeReject("candidate-filter", rdram, ctx, slot, before, runtime);
            return;
        }

        const uint32_t slotIndex = kofxiCallbackResourceSlotIndex(slot);
        if (slotIndex >= kofxiPumpSlotConsumeAttempts().size())
        {
            logKofxiPumpSlotConsumeReject("slot-index", rdram, ctx, slot, before, runtime);
            return;
        }

        auto &attempts = kofxiPumpSlotConsumeAttempts();
        const uint32_t attempt = attempts[slotIndex].fetch_add(1u, std::memory_order_relaxed) + 1u;
        if (attempt > kofxiPumpSlotConsumeMaxAttemptsPerSlot())
        {
            logKofxiPumpSlotConsumeCompat(
                "skipped-attempt-limit",
                slot,
                before,
                makeKofxiObjectPumpPointers(rdram, slot),
                0u,
                0u,
                attempt,
                rdram,
                ctx);
            return;
        }

        constexpr uint32_t kConsumerEntryPc = 0x001B2260u;
        constexpr uint32_t kConsumerReturnPc = 0x001BD874u;
        R5900Context serviceCtx = *ctx;
        serviceCtx.pc = kConsumerEntryPc;
        SET_GPR_U32(&serviceCtx, 4, slot);
        SET_GPR_U32(&serviceCtx, 31, kConsumerReturnPc);
        const uint32_t steps = runKofxiDetachedPumpSlotConsumer(
            rdram,
            &serviceCtx,
            runtime,
            kConsumerReturnPc);
        KofxiObjectPumpPointers after = makeKofxiObjectPumpPointers(rdram, slot);
        if (serviceCtx.pc == kConsumerReturnPc)
        {
            const uint32_t slotChild = readGuestU32OrZero(rdram, slot + 0x08u);
            const uint32_t upperChild = isKofxiUpperResourceSlotAddress(after.upper)
                                            ? readGuestU32OrZero(rdram, after.upper + 0x28u)
                                            : 0u;
            const uint32_t child = isKofxiChildResourceAddress(slotChild) ? slotChild : upperChild;
            promoteKofxiUpperAfterEmptyChildComplete(rdram, &serviceCtx, after, child);
            completeKofxiResourceProgressIfNeeded(rdram, &serviceCtx, after);
            after = makeKofxiObjectPumpPointers(rdram, slot);
        }

        logKofxiPumpSlotConsumeCompat(
            serviceCtx.pc == kConsumerReturnPc ? "consumed" : "consumer-yielded",
            slot,
            before,
            after,
            steps,
            serviceCtx.pc,
            attempt,
            rdram,
            ctx);
    }

    void kofxiTraceObjectPumpUpperWrite40(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpStateTraceCall("kofxiObjectPumpUpperWrite40", 0x001CA338u, g_kofxiObjectPumpUpperWrite40Fn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpUpperWrite5c(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpStateTraceCall("kofxiObjectPumpUpperWrite5c", 0x001CA388u, g_kofxiObjectPumpUpperWrite5cFn, rdram, ctx, runtime);
    }

    KofxiObjectPumpPointers makeKofxiObjectPumpPointersFromControl(uint8_t *rdram, uint32_t control)
    {
        KofxiObjectPumpPointers ptrs{};
        if (!rdram || !isKofxiControlObjectAddress(control))
        {
            return ptrs;
        }

        ptrs.control = control;
        ptrs.backing = readGuestU32OrZero(rdram, control + 0x04u);
        ptrs.driver = readGuestU32OrZero(rdram, control + 0x08u);
        ptrs.slot = findKofxiCallbackSlotForControl(rdram, control);
        if (ptrs.slot != 0u)
        {
            ptrs.upper = readGuestU32OrZero(rdram, ptrs.slot + 0x94u);
        }
        return ptrs;
    }

    KofxiObjectPumpPointers makeKofxiObjectPumpPointersFromBacking(uint8_t *rdram, uint32_t backing)
    {
        KofxiObjectPumpPointers ptrs{};
        if (!rdram || !isKofxiBackingObjectAddress(backing))
        {
            return ptrs;
        }

        ptrs.backing = backing;
        ptrs.control = findKofxiControlForBackingLoose(rdram, backing);
        if (isKofxiControlObjectAddress(ptrs.control))
        {
            ptrs.driver = readGuestU32OrZero(rdram, ptrs.control + 0x08u);
            ptrs.slot = findKofxiCallbackSlotForControl(rdram, ptrs.control);
            if (ptrs.slot != 0u)
            {
                ptrs.upper = readGuestU32OrZero(rdram, ptrs.slot + 0x94u);
            }
        }
        return ptrs;
    }

    KofxiObjectPumpPointers makeKofxiObjectPumpPointersForMaintenance(uint8_t *rdram, uint32_t entry, R5900Context *ctx)
    {
        if (!ctx)
        {
            return {};
        }

        const uint32_t a0 = getRegU32(ctx, 4);
        switch (entry)
        {
        case 0x001BD740u:
        case 0x001BD7C0u:
            return makeKofxiObjectPumpPointers(rdram, a0);
        case 0x001B51B0u:
            return makeKofxiObjectPumpPointersFromControl(rdram, a0);
        case 0x001A9A60u:
        case 0x001A9808u:
            return makeKofxiObjectPumpPointersFromBacking(rdram, a0);
        case 0x001B6C60u:
        case 0x001B74A8u:
            return makeKofxiObjectPumpPointersFromChild(rdram, a0);
        default:
            return {};
        }
    }

    void logKofxiObjectPumpMaintenance(
        const char *phase,
        const char *name,
        uint32_t entry,
        const KofxiObjectPumpPointers &ptrs,
        uint32_t observed,
        uint32_t callRa,
        uint32_t callSp,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiObjectPumpStateEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 2048u)
        {
            return;
        }
        if (index >= 768u && (index & 0x1Fu) != 0u)
        {
            return;
        }

        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t v1 = ctx ? getRegU32(ctx, 3) : 0u;
        const uint32_t s0 = ctx ? getRegU32(ctx, 16) : 0u;
        const uint32_t child = ptrs.slot ? readGuestU32OrZero(rdram, ptrs.slot + 0x08u) : a0;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:object-pump-maint] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " callRa=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2
                  << " v=0x" << v0 << "/0x" << v1
                  << " s0=0x" << s0
                  << " observed=0x" << observed
                  << " phase=0x" << readGuestU32OrZero(rdram, 0x00372330u)
                  << " childGuard=0x" << readGuestU32OrZero(rdram, 0x0037B41Cu)
                  << " slot=0x" << ptrs.slot
                  << " slotIdx=0x" << kofxiCallbackResourceSlotIndex(ptrs.slot)
                  << " slotBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 3u))
                  << " slot60/68/72/ad=0x" << readGuestU16OrZero(rdram, ptrs.slot + 0x60u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.slot + 0x68u)
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 0x72u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 0xADu))
                  << " slot42/44/46=0x" << readGuestU16OrZero(rdram, ptrs.slot + 0x42u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.slot + 0x44u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.slot + 0x46u)
                  << " child=0x" << child
                  << " childIdx=0x" << kofxiChildResourceIndex(child)
                  << " childBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 3u))
                  << " child24/28=0x" << readGuestU32OrZero(rdram, child + 0x24u)
                  << "/0x" << readGuestU32OrZero(rdram, child + 0x28u)
                  << " child44/45/46/47/48/49=0x" << readGuestU32OrZero(rdram, child + 0x44u)
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x45u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x46u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x47u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x48u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x49u))
                  << " child50/54/58=0x" << readGuestU32OrZero(rdram, child + 0x50u)
                  << "/0x" << readGuestU32OrZero(rdram, child + 0x54u)
                  << "/0x" << readGuestU32OrZero(rdram, child + 0x58u)
                  << " control=0x" << ptrs.control
                  << " controlBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 2u))
                  << " controlA0/A4=0x" << readGuestU32OrZero(rdram, ptrs.control + 0xA0u)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.control + 0xA4u)
                  << " backing=0x" << ptrs.backing
                  << " backing0d/0e/0f=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Du))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Eu))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Fu))
                  << " backing20/98/9a/cc/e8=0x" << readGuestU32OrZero(rdram, ptrs.backing + 0x20u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.backing + 0x98u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.backing + 0x9Au)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.backing + 0xCCu)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.backing + 0xE8u)
                  << " upper=0x" << ptrs.upper
                  << " upperBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 3u))
                  << " upper28/40/44/5c=0x" << readGuestU32OrZero(rdram, ptrs.upper + 0x28u)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.upper + 0x40u)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.upper + 0x44u)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.upper + 0x5Cu);
        appendKofxiObjectPumpSlotSummary(std::cerr, rdram);
        appendKofxiChildResourceSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    void runKofxiObjectPumpMaintenanceTraceCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        KofxiObjectPumpPointers before = makeKofxiObjectPumpPointersForMaintenance(rdram, entry, ctx);
        logKofxiObjectPumpMaintenance("enter", name, entry, before, 0u, callRa, callSp, rdram, ctx);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        const uint32_t result = getRegU32(ctx, 2);
        KofxiObjectPumpPointers after = before;
        if (before.slot != 0u)
        {
            after = makeKofxiObjectPumpPointers(rdram, before.slot);
        }
        else if (before.control != 0u)
        {
            after = makeKofxiObjectPumpPointersFromControl(rdram, before.control);
        }
        else if (before.backing != 0u)
        {
            after = makeKofxiObjectPumpPointersFromBacking(rdram, before.backing);
        }
        else
        {
            after = makeKofxiObjectPumpPointersForMaintenance(rdram, entry, ctx);
        }
        logKofxiObjectPumpMaintenance("leave", name, entry, after, result, callRa, callSp, rdram, ctx);
    }

    bool isKofxiEmptyChildCompleteCandidate(uint8_t *rdram, const KofxiObjectPumpPointers &ptrs, uint32_t child)
    {
        if (!rdram || !isKofxiChildResourceAddress(child))
        {
            return false;
        }
        if (readGuestU8OrZero(rdram, child) != 1u ||
            readGuestU8OrZero(rdram, child + 1u) != 1u ||
            readGuestU8OrZero(rdram, child + 2u) != 0u ||
            readGuestU8OrZero(rdram, child + 3u) != 1u)
        {
            return false;
        }
        if (readGuestU32OrZero(rdram, child + 0x08u) != 0u ||
            readGuestU32OrZero(rdram, child + 0x24u) != 0u ||
            readGuestU32OrZero(rdram, child + 0x28u) != 0u ||
            readGuestU8OrZero(rdram, child + 0x45u) != 0u ||
            readGuestU8OrZero(rdram, child + 0x46u) != 0u ||
            readGuestU8OrZero(rdram, child + 0x47u) != 0u ||
            readGuestU8OrZero(rdram, child + 0x48u) != 0u ||
            readGuestU8OrZero(rdram, child + 0x49u) != 0u ||
            readGuestU32OrZero(rdram, child + 0x50u) != 0u ||
            readGuestU32OrZero(rdram, child + 0x54u) != 0u ||
            readGuestU32OrZero(rdram, child + 0x58u) != 0u)
        {
            return false;
        }

        const bool attachedToCallbackSlot =
            isKofxiCallbackResourceSlotAddress(ptrs.slot) &&
            readGuestU32OrZero(rdram, ptrs.slot + 0x08u) == child &&
            readGuestU8OrZero(rdram, ptrs.slot) == 1u;
        const bool attachedToUpperSlot =
            isKofxiUpperResourceSlotAddress(ptrs.upper) &&
            readGuestU32OrZero(rdram, ptrs.upper + 0x28u) == child &&
            readGuestU8OrZero(rdram, ptrs.upper) == 1u;
        return attachedToCallbackSlot || attachedToUpperSlot;
    }

    void logKofxiChildEmptyCompleteCompat(
        const char *phase,
        uint32_t child,
        const KofxiObjectPumpPointers &ptrs,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t beforeState)
    {
        if (!traceKofxiChildEmptyCompleteCompatEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 256u)
        {
            return;
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:child-empty-complete-compat] #" << index
                  << " " << (phase ? phase : "")
                  << " pc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " child=0x" << child
                  << " childIdx=0x" << kofxiChildResourceIndex(child)
                  << " before1=0x" << beforeState
                  << " childBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 3u))
                  << " child45/46/47/48/49=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x45u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x46u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x47u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x48u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 0x49u))
                  << " child8/24/28/50/54/58=0x" << readGuestU32OrZero(rdram, child + 0x08u)
                  << "/0x" << readGuestU32OrZero(rdram, child + 0x24u)
                  << "/0x" << readGuestU32OrZero(rdram, child + 0x28u)
                  << "/0x" << readGuestU32OrZero(rdram, child + 0x50u)
                  << "/0x" << readGuestU32OrZero(rdram, child + 0x54u)
                  << "/0x" << readGuestU32OrZero(rdram, child + 0x58u)
                  << " slot=0x" << ptrs.slot
                  << " upper=0x" << ptrs.upper
                  << " slotBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 3u))
                  << " upperBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 3u))
                  << std::dec << std::endl;
    }

    void logKofxiUpperChildCompleteCompat(
        const char *phase,
        uint32_t upper,
        uint32_t child,
        const KofxiObjectPumpPointers &ptrs,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t beforeState)
    {
        if (!traceKofxiUpperChildCompleteCompatEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 256u)
        {
            return;
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:upper-child-complete-compat] #" << index
                  << " " << (phase ? phase : "")
                  << " pc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " upper=0x" << upper
                  << " child=0x" << child
                  << " slot=0x" << ptrs.slot
                  << " before1=0x" << beforeState
                  << " upperBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 3u))
                  << " upper4=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 4u))
                  << " attached=0x" << readGuestU32OrZero(rdram, upper + 0x28u)
                  << " cursor/count=0x" << readGuestU32OrZero(rdram, upper + 0x20u)
                  << "/0x" << readGuestU32OrZero(rdram, upper + 0x24u)
                  << " childBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, child + 3u))
                  << std::dec << std::endl;
    }

    bool isKofxiUpperEmptyChildCompletePending(uint8_t *rdram, uint32_t upper, uint32_t child)
    {
        return rdram &&
               isKofxiUpperResourceSlotAddress(upper) &&
               isKofxiChildResourceAddress(child) &&
               readGuestU8OrZero(rdram, upper) == 1u &&
               readGuestU8OrZero(rdram, upper + 1u) == 1u &&
               readGuestU8OrZero(rdram, upper + 2u) == 0u &&
               readGuestU8OrZero(rdram, upper + 3u) == 0u &&
               readGuestU8OrZero(rdram, upper + 4u) == 0u &&
               readGuestU32OrZero(rdram, upper + 0x20u) == 0u &&
               readGuestU32OrZero(rdram, upper + 0x24u) == 0u &&
               readGuestU32OrZero(rdram, upper + 0x28u) == child &&
               readGuestU8OrZero(rdram, child) == 1u &&
               readGuestU8OrZero(rdram, child + 1u) == 4u;
    }

    uint32_t resolveKofxiPumpChild(uint8_t *rdram, const KofxiObjectPumpPointers &ptrs)
    {
        if (!rdram)
        {
            return 0u;
        }

        const uint32_t slotChild = ptrs.slot ? readGuestU32OrZero(rdram, ptrs.slot + 0x08u) : 0u;
        if (isKofxiChildResourceAddress(slotChild))
        {
            return slotChild;
        }

        const uint32_t upperChild = ptrs.upper ? readGuestU32OrZero(rdram, ptrs.upper + 0x28u) : 0u;
        return isKofxiChildResourceAddress(upperChild) ? upperChild : 0u;
    }

    struct KofxiUpperSlotAdvancePromotion
    {
        uint32_t upper = 0u;
        uint32_t child = 0u;
        uint8_t beforeState = 0u;
        bool active = false;
    };

    KofxiUpperSlotAdvancePromotion temporarilyPromoteKofxiUpperForSlotAdvance(
        uint8_t *rdram,
        R5900Context *ctx,
        const KofxiObjectPumpPointers &ptrs)
    {
        KofxiUpperSlotAdvancePromotion promotion{};
        if (!kofxiUpperChildCompleteCompatEnabled() || !rdram)
        {
            return promotion;
        }

        const uint32_t child = resolveKofxiPumpChild(rdram, ptrs);
        if (!isKofxiUpperEmptyChildCompletePending(rdram, ptrs.upper, child))
        {
            return promotion;
        }

        promotion.upper = ptrs.upper;
        promotion.child = child;
        promotion.beforeState = readGuestU8OrZero(rdram, ptrs.upper + 1u);
        promotion.active = writeGuestU8(rdram, ptrs.upper + 1u, 3u);
        if (promotion.active)
        {
            logKofxiUpperChildCompleteCompat(
                "temporary-promote-slot-advance",
                promotion.upper,
                promotion.child,
                ptrs,
                rdram,
                ctx,
                promotion.beforeState);
        }
        return promotion;
    }

    void restoreKofxiUpperAfterSlotAdvance(
        uint8_t *rdram,
        R5900Context *ctx,
        const KofxiObjectPumpPointers &ptrs,
        const KofxiUpperSlotAdvancePromotion &promotion)
    {
        if (!promotion.active || !rdram || !isKofxiUpperResourceSlotAddress(promotion.upper))
        {
            return;
        }

        if (readGuestU8OrZero(rdram, promotion.upper + 1u) != 3u ||
            readGuestU8OrZero(rdram, promotion.upper + 4u) != 0u ||
            readGuestU32OrZero(rdram, promotion.upper + 0x20u) != 0u ||
            readGuestU32OrZero(rdram, promotion.upper + 0x24u) != 0u ||
            readGuestU32OrZero(rdram, promotion.upper + 0x28u) != promotion.child)
        {
            return;
        }

        (void)writeGuestU8(rdram, promotion.upper + 1u, promotion.beforeState);
        logKofxiUpperChildCompleteCompat(
            "restore-after-slot-advance",
            promotion.upper,
            promotion.child,
            ptrs,
            rdram,
            ctx,
            3u);
    }

    void promoteKofxiUpperAfterEmptyChildComplete(
        uint8_t *rdram,
        R5900Context *ctx,
        const KofxiObjectPumpPointers &ptrs,
        uint32_t child)
    {
        if (!kofxiUpperChildCompleteCompatEnabled() || !rdram ||
            !isKofxiChildResourceAddress(child) ||
            !isKofxiUpperResourceSlotAddress(ptrs.upper))
        {
            return;
        }

        const uint32_t upper = ptrs.upper;
        if (!isKofxiUpperEmptyChildCompletePending(rdram, upper, child))
        {
            return;
        }

        const uint32_t beforeState = readGuestU8OrZero(rdram, upper + 1u);
        if (!writeGuestU8(rdram, upper + 1u, 3u))
        {
            return;
        }

        logKofxiUpperChildCompleteCompat(
            "promote-upper-status",
            upper,
            child,
            ptrs,
            rdram,
            ctx,
            beforeState);
    }

    uint32_t kofxiChildFromChildServiceContext(R5900Context *ctx)
    {
        if (!ctx)
        {
            return 0u;
        }

        const uint32_t a0 = getRegU32(ctx, 4);
        if (isKofxiChildResourceAddress(a0))
        {
            return a0;
        }

        const uint32_t s0 = getRegU32(ctx, 16);
        return isKofxiChildResourceAddress(s0) ? s0 : 0u;
    }

    void completeKofxiEmptyChildIfNeeded(
        uint8_t *rdram,
        R5900Context *ctx,
        const KofxiObjectPumpPointers &before,
        uint32_t entryChild)
    {
        if (!kofxiChildEmptyCompleteCompatEnabled() || !rdram || !ctx)
        {
            return;
        }
        if (ctx->pc >= 0x001B74A8u && ctx->pc < 0x001B7750u)
        {
            return;
        }

        uint32_t child = entryChild;
        if (!isKofxiChildResourceAddress(child) && before.slot != 0u)
        {
            child = readGuestU32OrZero(rdram, before.slot + 0x08u);
        }
        if (!isKofxiChildResourceAddress(child) && before.upper != 0u)
        {
            child = readGuestU32OrZero(rdram, before.upper + 0x28u);
        }

        KofxiObjectPumpPointers ptrs = before;
        if (ptrs.slot == 0u && ptrs.upper == 0u)
        {
            ptrs = makeKofxiObjectPumpPointersFromChild(rdram, child);
        }
        if (!isKofxiEmptyChildCompleteCandidate(rdram, ptrs, child))
        {
            return;
        }

        const uint32_t beforeState = readGuestU8OrZero(rdram, child + 1u);
        (void)writeGuestU8(rdram, child + 1u, 4u);
        logKofxiChildEmptyCompleteCompat("promote-child-status", child, ptrs, rdram, ctx, beforeState);
        promoteKofxiUpperAfterEmptyChildComplete(rdram, ctx, ptrs, child);
    }

    void completeKofxiEmptyChildForSlotAdvanceIfNeeded(
        uint8_t *rdram,
        R5900Context *ctx,
        const KofxiObjectPumpPointers &before)
    {
        if ((!kofxiChildEmptyCompleteCompatEnabled() && !kofxiUpperChildCompleteCompatEnabled()) ||
            !rdram || !ctx)
        {
            return;
        }

        uint32_t child = 0u;
        if (before.slot != 0u)
        {
            child = readGuestU32OrZero(rdram, before.slot + 0x08u);
        }
        if (!isKofxiChildResourceAddress(child) && before.upper != 0u)
        {
            child = readGuestU32OrZero(rdram, before.upper + 0x28u);
        }
        if (!isKofxiChildResourceAddress(child))
        {
            return;
        }

        KofxiObjectPumpPointers ptrs = before;
        if (ptrs.slot == 0u && ptrs.upper == 0u)
        {
            ptrs = makeKofxiObjectPumpPointersFromChild(rdram, child);
        }

        if (isKofxiEmptyChildCompleteCandidate(rdram, ptrs, child))
        {
            const uint32_t beforeState = readGuestU8OrZero(rdram, child + 1u);
            (void)writeGuestU8(rdram, child + 1u, 4u);
            logKofxiChildEmptyCompleteCompat("promote-child-status-slot-advance", child, ptrs, rdram, ctx, beforeState);
        }

        promoteKofxiUpperAfterEmptyChildComplete(rdram, ctx, ptrs, child);
    }

    void runKofxiObjectPumpSlotAdvanceCall(
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        KofxiObjectPumpPointers before = makeKofxiObjectPumpPointersForMaintenance(rdram, 0x001BD740u, ctx);
        if (!traceKofxiObjectPumpStateEnabled())
        {
            completeKofxiEmptyChildForSlotAdvanceIfNeeded(rdram, ctx, before);
            const KofxiUpperSlotAdvancePromotion promotion =
                temporarilyPromoteKofxiUpperForSlotAdvance(rdram, ctx, before);
            if (g_kofxiObjectPumpSlotAdvanceFn)
            {
                g_kofxiObjectPumpSlotAdvanceFn(rdram, ctx, runtime);
            }
            restoreKofxiUpperAfterSlotAdvance(rdram, ctx, before, promotion);
            return;
        }

        logKofxiObjectPumpMaintenance("enter", "kofxiObjectPumpSlotAdvance", 0x001BD740u, before, 0u, callRa, callSp, rdram, ctx);
        completeKofxiEmptyChildForSlotAdvanceIfNeeded(rdram, ctx, before);
        const KofxiUpperSlotAdvancePromotion promotion =
            temporarilyPromoteKofxiUpperForSlotAdvance(rdram, ctx, before);
        if (g_kofxiObjectPumpSlotAdvanceFn)
        {
            g_kofxiObjectPumpSlotAdvanceFn(rdram, ctx, runtime);
        }
        restoreKofxiUpperAfterSlotAdvance(rdram, ctx, before, promotion);
        const uint32_t result = getRegU32(ctx, 2);
        KofxiObjectPumpPointers after = before;
        if (before.slot != 0u)
        {
            after = makeKofxiObjectPumpPointers(rdram, before.slot);
        }
        else
        {
            after = makeKofxiObjectPumpPointersForMaintenance(rdram, 0x001BD740u, ctx);
        }
        logKofxiObjectPumpMaintenance("leave", "kofxiObjectPumpSlotAdvance", 0x001BD740u, after, result, callRa, callSp, rdram, ctx);
    }

    void runKofxiObjectPumpChildServiceCall(
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        if (!traceKofxiObjectPumpStateEnabled())
        {
            KofxiObjectPumpPointers before = makeKofxiObjectPumpPointersForMaintenance(rdram, 0x001B74A8u, ctx);
            const uint32_t entryChild = kofxiChildFromChildServiceContext(ctx);
            if (g_kofxiObjectPumpChildServiceFn)
            {
                g_kofxiObjectPumpChildServiceFn(rdram, ctx, runtime);
            }
            completeKofxiEmptyChildIfNeeded(rdram, ctx, before, entryChild);
            return;
        }

        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        KofxiObjectPumpPointers before = makeKofxiObjectPumpPointersForMaintenance(rdram, 0x001B74A8u, ctx);
        const uint32_t entryChild = kofxiChildFromChildServiceContext(ctx);
        logKofxiObjectPumpMaintenance("enter", "kofxiObjectPumpChildService", 0x001B74A8u, before, 0u, callRa, callSp, rdram, ctx);
        if (g_kofxiObjectPumpChildServiceFn)
        {
            g_kofxiObjectPumpChildServiceFn(rdram, ctx, runtime);
        }
        completeKofxiEmptyChildIfNeeded(rdram, ctx, before, entryChild);
        const uint32_t result = getRegU32(ctx, 2);
        KofxiObjectPumpPointers after = makeKofxiObjectPumpPointersForMaintenance(rdram, 0x001B74A8u, ctx);
        logKofxiObjectPumpMaintenance("leave", "kofxiObjectPumpChildService", 0x001B74A8u, after, result, callRa, callSp, rdram, ctx);
    }

    void kofxiTraceObjectPumpSlotAdvance(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpSlotAdvanceCall(rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpSlotMaintenance(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpMaintenanceTraceCall("kofxiObjectPumpSlotMaintenance", 0x001BD7C0u, g_kofxiObjectPumpSlotMaintenanceFn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpChildStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpMaintenanceTraceCall("kofxiObjectPumpChildStatus", 0x001B6C60u, g_kofxiObjectPumpChildStatusFn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpControlService(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpMaintenanceTraceCall("kofxiObjectPumpControlService", 0x001B51B0u, g_kofxiObjectPumpControlServiceFn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpBackingPreService(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpMaintenanceTraceCall("kofxiObjectPumpBackingPreService", 0x001A9A60u, g_kofxiObjectPumpBackingPreServiceFn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpBackingPostService(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpMaintenanceTraceCall("kofxiObjectPumpBackingPostService", 0x001A9808u, g_kofxiObjectPumpBackingPostServiceFn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpUpperStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpMaintenanceTraceCall("kofxiObjectPumpUpperStatus", 0x001C6478u, g_kofxiObjectPumpUpperStatusFn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpGlobalService(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpMaintenanceTraceCall("kofxiObjectPumpGlobalService", 0x001B1B08u, g_kofxiObjectPumpGlobalServiceFn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpChildTableScan(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpMaintenanceTraceCall("kofxiObjectPumpChildTableScan", 0x001B7778u, g_kofxiObjectPumpChildTableScanFn, rdram, ctx, runtime);
    }

    void kofxiTraceObjectPumpChildService(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectPumpChildServiceCall(rdram, ctx, runtime);
    }

    bool isKofxiBackingObjectAddress(uint32_t addr)
    {
        constexpr uint32_t kBackingBase = 0x0036E6A8u;
        constexpr uint32_t kBackingStride = 0x104u;
        constexpr uint32_t kBackingCount = 16u;
        return addr >= kBackingBase && addr < kBackingBase + kBackingStride * kBackingCount &&
               ((addr - kBackingBase) % kBackingStride) == 0u;
    }

    uint32_t findKofxiControlForBackingLoose(uint8_t *rdram, uint32_t backing)
    {
        if (!rdram || backing == 0u)
        {
            return 0u;
        }

        constexpr uint32_t kControlBase = 0x0037A948u;
        constexpr uint32_t kControlStride = 0xACu;
        constexpr uint32_t kControlCount = 16u;
        for (uint32_t i = 0; i < kControlCount; ++i)
        {
            const uint32_t control = kControlBase + i * kControlStride;
            if (readGuestU32OrZero(rdram, control + 0x04u) == backing)
            {
                return control;
            }
        }

        return 0u;
    }

    uint32_t kofxiControlObjectIndex(uint32_t control)
    {
        constexpr uint32_t kControlBase = 0x0037A948u;
        constexpr uint32_t kControlStride = 0xACu;
        return isKofxiControlObjectAddress(control) ? (control - kControlBase) / kControlStride : UINT32_MAX;
    }

    struct KofxiControlServicePointers
    {
        uint32_t control = 0u;
        uint32_t backing = 0u;
        uint32_t driver = 0u;
        uint32_t slot = 0u;
        uint32_t upper = 0u;
    };

    void appendKofxiControlTableSummary(std::ostream &out, uint8_t *rdram)
    {
        constexpr uint32_t kControlBase = 0x0037A948u;
        constexpr uint32_t kControlStride = 0xACu;
        constexpr uint32_t kControlCount = 16u;
        out << " controlTable=";
        for (uint32_t i = 0; i < kControlCount; ++i)
        {
            const uint32_t control = kControlBase + i * kControlStride;
            const uint32_t backing = readGuestU32OrZero(rdram, control + 0x04u);
            if (i != 0u)
            {
                out << ",";
            }
            out << i << ":"
                << static_cast<uint32_t>(readGuestU8OrZero(rdram, control))
                << "/" << static_cast<uint32_t>(readGuestU8OrZero(rdram, control + 1u))
                << "/" << readGuestU32OrZero(rdram, control + 0xA0u)
                << "/" << readGuestU32OrZero(rdram, control + 0xA4u)
                << "/b" << kofxiBackingObjectIndex(backing);
        }
    }

    KofxiControlServicePointers makeKofxiControlServicePointers(uint8_t *rdram, uint32_t control)
    {
        KofxiControlServicePointers ptrs{};
        if (!rdram || !isKofxiControlObjectAddress(control))
        {
            return ptrs;
        }

        ptrs.control = control;
        ptrs.backing = readGuestU32OrZero(rdram, control + 0x04u);
        ptrs.driver = readGuestU32OrZero(rdram, control + 0x08u);
        ptrs.slot = findKofxiCallbackSlotForControl(rdram, control);
        ptrs.upper = ptrs.slot ? readGuestU32OrZero(rdram, ptrs.slot + 0x94u) : 0u;
        return ptrs;
    }

    KofxiControlServicePointers resolveKofxiControlServicePointers(
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entry,
        uint32_t a0,
        uint32_t result)
    {
        const auto fromControl = [&](uint32_t control) -> KofxiControlServicePointers
        {
            return makeKofxiControlServicePointers(rdram, control);
        };

        const auto fromBacking = [&](uint32_t backing) -> KofxiControlServicePointers
        {
            const uint32_t control = findKofxiControlForBackingLoose(rdram, backing);
            return control ? fromControl(control) : KofxiControlServicePointers{};
        };

        const auto fromSlot = [&](uint32_t slot) -> KofxiControlServicePointers
        {
            if (!isKofxiCallbackResourceSlotAddress(slot))
            {
                return {};
            }
            return fromControl(readGuestU32OrZero(rdram, slot + 0x04u));
        };

        auto first = [&](std::initializer_list<KofxiControlServicePointers> candidates) -> KofxiControlServicePointers
        {
            for (const KofxiControlServicePointers &candidate : candidates)
            {
                if (candidate.control != 0u || candidate.backing != 0u || candidate.slot != 0u || candidate.upper != 0u)
                {
                    return candidate;
                }
            }
            return {};
        };

        if (!rdram)
        {
            return {};
        }

        const uint32_t s0 = ctx ? getRegU32(ctx, 16) : 0u;
        const uint32_t s1 = ctx ? getRegU32(ctx, 17) : 0u;
        const uint32_t s2 = ctx ? getRegU32(ctx, 18) : 0u;
        const uint32_t s3 = ctx ? getRegU32(ctx, 19) : 0u;
        const uint32_t t0 = ctx ? getRegU32(ctx, 8) : 0u;

        if (entry == 0x001B4F48u)
        {
            return first({fromControl(result), fromControl(a0), fromBacking(result), fromBacking(a0)});
        }

        return first({
            fromControl(a0),
            fromControl(s0),
            fromControl(s1),
            fromControl(s2),
            fromControl(s3),
            fromControl(t0),
            fromControl(result),
            fromSlot(a0),
            fromBacking(a0),
            fromBacking(result),
            fromBacking(s0),
            fromBacking(s1),
            fromBacking(s2),
            fromBacking(s3),
        });
    }

    bool shouldLogKofxiControlService(uint8_t *rdram, uint32_t entry, const KofxiControlServicePointers &ptrs)
    {
        if (!traceKofxiControlServiceEnabled() || !rdram)
        {
            return false;
        }

        if (entry == 0x001B4F48u || entry == 0x001B6058u)
        {
            return true;
        }

        return isKofxiControlObjectAddress(ptrs.control) ||
               isKofxiBackingObjectAddress(ptrs.backing) ||
               isKofxiCallbackResourceSlotAddress(ptrs.slot) ||
               isKofxiUpperResourceSlotAddress(ptrs.upper);
    }

    void logKofxiControlService(
        const char *phase,
        const char *name,
        uint32_t entry,
        const KofxiControlServicePointers &ptrs,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3,
        uint32_t result,
        uint32_t callRa,
        uint32_t callSp,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiControlServiceEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 2048u)
        {
            return;
        }
        if (index >= 512u && (index & 0x1Fu) != 0u)
        {
            return;
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:control-service] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " callRa=0x" << callRa
                  << " sp=0x" << callSp
                  << " v0=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << " result=0x" << result
                  << " a0=0x" << a0
                  << " a1=0x" << a1
                  << " a2=0x" << a2
                  << " a3=0x" << a3
                  << " s0=0x" << (ctx ? getRegU32(ctx, 16) : 0u)
                  << " s1=0x" << (ctx ? getRegU32(ctx, 17) : 0u)
                  << " s2=0x" << (ctx ? getRegU32(ctx, 18) : 0u)
                  << " s3=0x" << (ctx ? getRegU32(ctx, 19) : 0u)
                  << " control=0x" << ptrs.control
                  << " controlIdx=0x" << kofxiControlObjectIndex(ptrs.control)
                  << " controlSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.control + 3u))
                  << " controlBack=0x" << readGuestU32OrZero(rdram, ptrs.control + 0x04u)
                  << " controlDriver=0x" << readGuestU32OrZero(rdram, ptrs.control + 0x08u)
                  << " control0c=0x" << readGuestU32OrZero(rdram, ptrs.control + 0x0Cu)
                  << " control3c=0x" << readGuestU32OrZero(rdram, ptrs.control + 0x3Cu)
                  << " control42/44/46=0x" << readGuestU16OrZero(rdram, ptrs.control + 0x42u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.control + 0x44u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.control + 0x46u)
                  << " control98/9a/a0/a4=0x" << readGuestU16OrZero(rdram, ptrs.control + 0x98u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.control + 0x9Au)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.control + 0xA0u)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.control + 0xA4u)
                  << " controlcc/e2=0x" << readGuestU32OrZero(rdram, ptrs.control + 0xCCu)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.control + 0xE2u)
                  << " driver=0x" << ptrs.driver
                  << " driverVtbl=0x" << readGuestU32OrZero(rdram, ptrs.driver)
                  << " backing=0x" << ptrs.backing
                  << " backingIdx=0x" << kofxiBackingObjectIndex(ptrs.backing)
                  << " backingSt=0x" << readGuestU16OrZero(rdram, ptrs.backing)
                  << " backing0d/0e/0f=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Du))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Eu))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.backing + 0x0Fu))
                  << " backing04/20/98/9a/cc/e8=0x" << readGuestU32OrZero(rdram, ptrs.backing + 0x04u)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.backing + 0x20u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.backing + 0x98u)
                  << "/0x" << readGuestU16OrZero(rdram, ptrs.backing + 0x9Au)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.backing + 0xCCu)
                  << "/0x" << readGuestU32OrZero(rdram, ptrs.backing + 0xE8u)
                  << " slot=0x" << ptrs.slot
                  << " slotSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 3u))
                  << " slotAD=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.slot + 0xADu))
                  << " upper=0x" << ptrs.upper
                  << " upperSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ptrs.upper + 3u))
                  << " upperChild=0x" << readGuestU32OrZero(rdram, ptrs.upper + 0x28u);
        appendKofxiControlTableSummary(std::cerr, rdram);
        appendKofxiBackingTableSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    void runKofxiControlServiceTraceCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const KofxiControlServicePointers before = resolveKofxiControlServicePointers(rdram, ctx, entry, a0, 0u);
        const bool logEnter = shouldLogKofxiControlService(rdram, entry, before);

        if (logEnter)
        {
            logKofxiControlService("enter", name, entry, before, a0, a1, a2, a3, 0u, callRa, callSp, rdram, ctx);
        }
        if (original)
        {
            original(rdram, ctx, runtime);
        }

        const uint32_t result = getRegU32(ctx, 2);
        const KofxiControlServicePointers after = resolveKofxiControlServicePointers(rdram, ctx, entry, a0, result);
        if (logEnter || shouldLogKofxiControlService(rdram, entry, after))
        {
            logKofxiControlService("leave", name, entry, after, a0, a1, a2, a3, result, callRa, callSp, rdram, ctx);
        }
    }

    void kofxiTraceControlAlloc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiControlServiceTraceCall(
            "kofxiControlAlloc",
            ctx ? ctx->pc : 0x001B4F48u,
            g_kofxiControlAllocFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceControlServiceAll(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiControlServiceTraceCall(
            "kofxiControlServiceAll",
            0x001B6058u,
            g_kofxiControlServiceAllFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceControlServiceOne(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiControlServiceTraceCall(
            "kofxiControlServiceOne",
            0x001B5D20u,
            g_kofxiControlServiceOneFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceControlPrepare(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiControlServiceTraceCall(
            "kofxiControlPrepare",
            ctx ? ctx->pc : 0x001B5668u,
            g_kofxiControlPrepareFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceControlRunStateOne(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiControlServiceTraceCall(
            "kofxiControlRunStateOne",
            ctx ? ctx->pc : 0x001B5240u,
            g_kofxiControlRunStateOneFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceControlRunStateTwo(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiControlServiceTraceCall(
            "kofxiControlRunStateTwo",
            0x001B5C70u,
            g_kofxiControlRunStateTwoFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceControlFinalize(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiControlServiceTraceCall(
            "kofxiControlFinalize",
            0x001B59F8u,
            g_kofxiControlFinalizeFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceControlRunA0(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiControlServiceTraceCall(
            "kofxiControlRunA0",
            0x001B5DC8u,
            g_kofxiControlRunA0Fn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceControlRunA4(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiControlServiceTraceCall(
            "kofxiControlRunA4",
            0x001B5F18u,
            g_kofxiControlRunA4Fn,
            rdram,
            ctx,
            runtime);
    }

    uint32_t resolveKofxiBackingFromLifecycleArgs(uint8_t *rdram, uint32_t entry, uint32_t a0, uint32_t a2)
    {
        if (entry == 0x001AB3B0u || entry == 0x001AB6F0u)
        {
            return a0;
        }

        if (entry == 0x001AD8F8u && a2 >= 0x20u)
        {
            const uint32_t backing = a2 - 0x20u;
            if (isKofxiBackingObjectAddress(backing) ||
                findKofxiControlForBackingLoose(rdram, backing) != 0u)
            {
                return backing;
            }
        }

        if (entry == 0x001ADB58u && a2 >= 0xCCu)
        {
            const uint32_t backing = a2 - 0xCCu;
            if (isKofxiBackingObjectAddress(backing) ||
                findKofxiControlForBackingLoose(rdram, backing) != 0u)
            {
                return backing;
            }
        }

        return 0u;
    }

    void appendKofxiInputHeaderSummary(std::ostream &out, uint8_t *rdram, uint32_t addr)
    {
        out << " hdr=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, addr))
            << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, addr + 1u))
            << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, addr + 2u))
            << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, addr + 3u))
            << " hdr12/13=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, addr + 0x12u))
            << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, addr + 0x13u))
            << " hwords=0x" << readGuestU16OrZero(rdram, addr)
            << "/0x" << readGuestU16OrZero(rdram, addr + 2u)
            << "/0x" << readGuestU16OrZero(rdram, addr + 4u)
            << " words=0x" << readGuestU32OrZero(rdram, addr)
            << "/0x" << readGuestU32OrZero(rdram, addr + 4u)
            << "/0x" << readGuestU32OrZero(rdram, addr + 8u);
    }

    void logKofxiBackingLifecycle(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint32_t backing,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3,
        uint32_t t0,
        uint32_t t1,
        uint32_t callRa,
        uint32_t callSp,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiBackingLifecycleEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 2048u)
        {
            return;
        }
        if (index >= 512u && (index & 0x1Fu) != 0u)
        {
            return;
        }

        const uint32_t control = backing ? findKofxiControlForBackingLoose(rdram, backing) : 0u;
        const uint32_t slot = control ? findKofxiCallbackSlotForControl(rdram, control) : 0u;
        const uint32_t upper = slot ? readGuestU32OrZero(rdram, slot + 0x94u) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:backing-lifecycle] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " callRa=0x" << callRa
                  << " sp=0x" << callSp
                  << " v0=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << " v1=0x" << (ctx ? getRegU32(ctx, 3) : 0u)
                  << " a0=0x" << a0
                  << " a1=0x" << a1
                  << " a2=0x" << a2
                  << " a3=0x" << a3
                  << " t0=0x" << t0
                  << " t1=0x" << t1
                  << " outA2=0x" << readGuestU32OrZero(rdram, a2)
                  << " outA3=0x" << readGuestU32OrZero(rdram, a3)
                  << " outT0=0x" << readGuestU16OrZero(rdram, t0)
                  << " outT1=0x" << readGuestU16OrZero(rdram, t1)
                  << " backing=0x" << backing
                  << " backing0d/0e/0f=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, backing + 0x0Du))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, backing + 0x0Eu))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, backing + 0x0Fu))
                  << " backing10=0x" << readGuestU32OrZero(rdram, backing + 0x10u)
                  << " backing20/24/26=0x" << readGuestU32OrZero(rdram, backing + 0x20u)
                  << "/0x" << readGuestU16OrZero(rdram, backing + 0x24u)
                  << "/0x" << readGuestU16OrZero(rdram, backing + 0x26u)
                  << " backing98/9a/9c=0x" << readGuestU16OrZero(rdram, backing + 0x98u)
                  << "/0x" << readGuestU16OrZero(rdram, backing + 0x9Au)
                  << "/0x" << readGuestU16OrZero(rdram, backing + 0x9Cu)
                  << " backingcc=0x" << readGuestU32OrZero(rdram, backing + 0xCCu)
                  << " backingd0=0x" << readGuestU32OrZero(rdram, backing + 0xD0u)
                  << " backinge0/e2=0x" << readGuestU16OrZero(rdram, backing + 0xE0u)
                  << "/0x" << readGuestU16OrZero(rdram, backing + 0xE2u)
                  << " backinge8=0x" << readGuestU32OrZero(rdram, backing + 0xE8u)
                  << " control=0x" << control
                  << " slot=0x" << slot
                  << " upper=0x" << upper
                  << " upperSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 3u));
        appendKofxiInputHeaderSummary(std::cerr, rdram, a0);
        std::cerr << std::dec << std::endl;
    }

    void runKofxiBackingLifecycleTraceCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        const uint32_t t0 = getRegU32(ctx, 8);
        const uint32_t t1 = getRegU32(ctx, 9);
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t backing = resolveKofxiBackingFromLifecycleArgs(rdram, entry, a0, a2);
        const bool shouldLog =
            traceKofxiBackingLifecycleEnabled() &&
            (entry == 0x001AD680u || backing != 0u || callRa == 0x001AB65Cu || callRa == 0x001AB678u);

        if (shouldLog)
        {
            logKofxiBackingLifecycle("enter", name, entry, backing, a0, a1, a2, a3, t0, t1, callRa, callSp, rdram, ctx);
        }
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        if (shouldLog)
        {
            logKofxiBackingLifecycle("leave", name, entry, backing, a0, a1, a2, a3, t0, t1, callRa, callSp, rdram, ctx);
        }
    }

    void kofxiTraceBackingLifecycleStep(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBackingLifecycleTraceCall(
            "kofxiBackingLifecycleStep",
            0x001AB3B0u,
            g_kofxiBackingLifecycleStepFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceBackingLifecycleInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBackingLifecycleTraceCall(
            "kofxiBackingLifecycleInit",
            0x001AB6F0u,
            g_kofxiBackingLifecycleInitFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceBackingParseSmall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBackingLifecycleTraceCall(
            "kofxiBackingParseSmall",
            0x001AD8F8u,
            g_kofxiBackingParseSmallFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceBackingParseLarge(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBackingLifecycleTraceCall(
            "kofxiBackingParseLarge",
            0x001ADB58u,
            g_kofxiBackingParseLargeFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceBackingHeaderProbe(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBackingLifecycleTraceCall(
            "kofxiBackingHeaderProbe",
            0x001AD680u,
            g_kofxiBackingHeaderProbeFn,
            rdram,
            ctx,
            runtime);
    }

    uint32_t kofxiBackingObjectIndex(uint32_t backing)
    {
        constexpr uint32_t kBackingBase = 0x0036E6A8u;
        constexpr uint32_t kBackingStride = 0x104u;
        return isKofxiBackingObjectAddress(backing) ? (backing - kBackingBase) / kBackingStride : UINT32_MAX;
    }

    uint32_t findKofxiFirstFreeBackingIndex(uint8_t *rdram)
    {
        if (!rdram)
        {
            return UINT32_MAX;
        }

        constexpr uint32_t kBackingBase = 0x0036E6A8u;
        constexpr uint32_t kBackingStride = 0x104u;
        constexpr uint32_t kBackingCount = 16u;
        for (uint32_t i = 0; i < kBackingCount; ++i)
        {
            if (readGuestU16OrZero(rdram, kBackingBase + i * kBackingStride) == 0u)
            {
                return i;
            }
        }

        return UINT32_MAX;
    }

    void appendKofxiBackingTableSummary(std::ostream &out, uint8_t *rdram)
    {
        constexpr uint32_t kBackingBase = 0x0036E6A8u;
        constexpr uint32_t kBackingStride = 0x104u;
        constexpr uint32_t kBackingCount = 16u;
        out << " backingTable=";
        for (uint32_t i = 0; i < kBackingCount; ++i)
        {
            const uint32_t backing = kBackingBase + i * kBackingStride;
            if (i != 0u)
            {
                out << ",";
            }
            out << static_cast<uint32_t>(readGuestU16OrZero(rdram, backing))
                << "/" << static_cast<uint32_t>(readGuestU8OrZero(rdram, backing + 0x0Eu))
                << "/" << readGuestU32OrZero(rdram, backing + 0xCCu);
        }
    }

    void logKofxiBackingDispatch(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint32_t control,
        uint32_t backing,
        uint32_t driver,
        uint32_t slot,
        uint32_t upper,
        uint32_t result,
        uint32_t freeIndex,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3,
        uint32_t callRa,
        uint32_t callSp,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiBackingDispatchEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 2048u)
        {
            return;
        }
        if (index >= 512u && (index & 0x1Fu) != 0u)
        {
            return;
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:backing-dispatch] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " callRa=0x" << callRa
                  << " sp=0x" << callSp
                  << " v0=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << " result=0x" << result
                  << " a0=0x" << a0
                  << " a1=0x" << a1
                  << " a2=0x" << a2
                  << " a3=0x" << a3
                  << " s2=0x" << (ctx ? getRegU32(ctx, 18) : 0u)
                  << " s3=0x" << (ctx ? getRegU32(ctx, 19) : 0u)
                  << " s4=0x" << (ctx ? getRegU32(ctx, 20) : 0u)
                  << " freeIdx=0x" << freeIndex
                  << " control=0x" << control
                  << " controlIdx=0x" << (isKofxiControlObjectAddress(control) ? ((control - 0x0037A948u) / 0xACu) : UINT32_MAX)
                  << " controlSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, control))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, control + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, control + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, control + 3u))
                  << " controlBack=0x" << readGuestU32OrZero(rdram, control + 0x04u)
                  << " controlDriver=0x" << readGuestU32OrZero(rdram, control + 0x08u)
                  << " control98/9a=0x" << readGuestU16OrZero(rdram, control + 0x98u)
                  << "/0x" << readGuestU16OrZero(rdram, control + 0x9Au)
                  << " driver=0x" << driver
                  << " driverVtbl=0x" << readGuestU32OrZero(rdram, driver)
                  << " driver18/1c/20=0x" << readGuestU32OrZero(rdram, readGuestU32OrZero(rdram, driver) + 0x18u)
                  << "/0x" << readGuestU32OrZero(rdram, readGuestU32OrZero(rdram, driver) + 0x1Cu)
                  << "/0x" << readGuestU32OrZero(rdram, readGuestU32OrZero(rdram, driver) + 0x20u)
                  << " backing=0x" << backing
                  << " backingIdx=0x" << kofxiBackingObjectIndex(backing)
                  << " backingSt=0x" << readGuestU16OrZero(rdram, backing)
                  << " backing0d/0e/0f=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, backing + 0x0Du))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, backing + 0x0Eu))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, backing + 0x0Fu))
                  << " backing20/98/9a/cc/e8=0x" << readGuestU32OrZero(rdram, backing + 0x20u)
                  << "/0x" << readGuestU16OrZero(rdram, backing + 0x98u)
                  << "/0x" << readGuestU16OrZero(rdram, backing + 0x9Au)
                  << "/0x" << readGuestU32OrZero(rdram, backing + 0xCCu)
                  << "/0x" << readGuestU32OrZero(rdram, backing + 0xE8u)
                  << " slot=0x" << slot
                  << " slotSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, slot + 3u))
                  << " slotOut=0x" << readGuestU16OrZero(rdram, slot + 0x42u)
                  << "/0x" << readGuestU16OrZero(rdram, slot + 0x44u)
                  << "/0x" << readGuestU16OrZero(rdram, slot + 0x46u)
                  << " upper=0x" << upper
                  << " upperSt=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, upper + 3u));
        appendKofxiBackingTableSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    uint32_t resolveKofxiControlFromBackingDispatchState(
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entry,
        uint32_t a0,
        uint32_t result)
    {
        const auto controlHasBacking = [&](uint32_t control) -> bool
        {
            return isKofxiControlObjectAddress(control) &&
                   isKofxiBackingObjectAddress(readGuestU32OrZero(rdram, control + 0x04u));
        };

        const auto controlFromBacking = [&](uint32_t backing) -> uint32_t
        {
            if (!isKofxiBackingObjectAddress(backing))
            {
                return 0u;
            }

            if (const uint32_t control = findKofxiControlForBackingLoose(rdram, backing))
            {
                return control;
            }

            const uint32_t context = readGuestU32OrZero(rdram, backing + 0x7Cu);
            return controlHasBacking(context) ? context : 0u;
        };

        if (entry == 0x001AB290u)
        {
            return controlFromBacking(result);
        }

        const uint32_t s2 = ctx ? getRegU32(ctx, 18) : 0u;
        if (entry == 0x001B5548u && controlHasBacking(a0))
        {
            return a0;
        }
        if (entry != 0x001B5548u && controlHasBacking(s2))
        {
            return s2;
        }
        if (controlHasBacking(a0))
        {
            return a0;
        }
        if (controlHasBacking(s2))
        {
            return s2;
        }
        if (const uint32_t control = controlFromBacking(a0))
        {
            return control;
        }

        const uint32_t slotControl = readGuestU32OrZero(rdram, a0 + 0x04u);
        return controlHasBacking(slotControl) ? slotControl : 0u;
    }

    void runKofxiBackingDispatchTraceCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t freeIndexBefore = findKofxiFirstFreeBackingIndex(rdram);

        const auto logPhase = [&](const char *phase, uint32_t result, uint32_t freeIndex)
        {
            const uint32_t control = resolveKofxiControlFromBackingDispatchState(rdram, ctx, entry, a0, result);
            const uint32_t backing = control ? readGuestU32OrZero(rdram, control + 0x04u) :
                (isKofxiBackingObjectAddress(result) ? result : 0u);
            const uint32_t driver = control ? readGuestU32OrZero(rdram, control + 0x08u) : 0u;

            const uint32_t slot = control ? findKofxiCallbackSlotForControl(rdram, control) : 0u;
            const uint32_t upper = slot ? readGuestU32OrZero(rdram, slot + 0x94u) : 0u;
            logKofxiBackingDispatch(
                phase,
                name,
                entry,
                control,
                backing,
                driver,
                slot,
                upper,
                result,
                freeIndex,
                a0,
                a1,
                a2,
                a3,
                callRa,
                callSp,
                rdram,
                ctx);
        };

        logPhase("enter", 0u, freeIndexBefore);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        logPhase("leave", getRegU32(ctx, 2), findKofxiFirstFreeBackingIndex(rdram));
    }

    void kofxiTraceBackingAllocDispatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBackingDispatchTraceCall(
            "kofxiBackingAllocDispatch",
            ctx ? ctx->pc : 0x001AB290u,
            g_kofxiBackingAllocDispatchFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceBackingCleanupDispatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBackingDispatchTraceCall(
            "kofxiBackingCleanupDispatch",
            0x001B50B8u,
            g_kofxiBackingCleanupDispatchFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceBackingWorkerDispatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entry = ctx ? ctx->pc : 0x001B5240u;
        runKofxiBackingDispatchTraceCall(
            "kofxiBackingWorkerDispatch",
            entry,
            g_kofxiBackingWorkerDispatchFn,
            rdram,
            ctx,
            runtime);
    }

    void logKofxiResourceWaitServiceCompat(
        const char *phase,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t beforeState1,
        uint32_t servicePc,
        uint32_t steps)
    {
        if (!traceKofxiResourceWaitServiceCompatEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 128u)
        {
            return;
        }

        constexpr uint32_t kActiveHandle = 0x0036F818u;
        const uint32_t object = readGuestU32OrZero(rdram, kActiveHandle + 0x04u);

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:resource-wait-service-compat] #" << index
                  << " " << (phase ? phase : "")
                  << " pc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " sp=0x" << (ctx ? getRegU32(ctx, 29) : 0u)
                  << " servicePc=0x" << servicePc
                  << " steps=0x" << steps
                  << " before1=0x" << beforeState1
                  << " h0/1/2/3=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kActiveHandle))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kActiveHandle + 1u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kActiveHandle + 2u))
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kActiveHandle + 3u))
                  << " obj=0x" << object
                  << " h0c=0x" << readGuestU32OrZero(rdram, kActiveHandle + 0x0Cu)
                  << " h18=0x" << readGuestU32OrZero(rdram, kActiveHandle + 0x18u)
                  << " h20=0x" << readGuestU32OrZero(rdram, kActiveHandle + 0x20u)
                  << " h24=0x" << readGuestU32OrZero(rdram, kActiveHandle + 0x24u)
                  << " h28=0x" << readGuestU32OrZero(rdram, kActiveHandle + 0x28u);
        if (isKofxiChildResourceAddress(object))
        {
            std::cerr << " childIdx=0x" << kofxiChildResourceIndex(object)
                      << " childBytes=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object))
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 1u))
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 2u))
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 3u))
                      << " child8/24/28/44=0x" << readGuestU32OrZero(rdram, object + 0x08u)
                      << "/0x" << readGuestU32OrZero(rdram, object + 0x24u)
                      << "/0x" << readGuestU32OrZero(rdram, object + 0x28u)
                      << "/0x" << readGuestU32OrZero(rdram, object + 0x44u)
                      << " child45/46/47/48/49=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x45u))
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x46u))
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x47u))
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x48u))
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x49u))
                      << " child50/54/58=0x" << readGuestU32OrZero(rdram, object + 0x50u)
                      << "/0x" << readGuestU32OrZero(rdram, object + 0x54u)
                      << "/0x" << readGuestU32OrZero(rdram, object + 0x58u);
        }
        appendKofxiResourceSlotSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    uint32_t runKofxiDetachedResourceWaitService(
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime,
        uint32_t returnPc)
    {
        if (!rdram || !ctx || !runtime || !g_kofxiResourceHandleWaitLoopServiceFn)
        {
            return 0u;
        }

        const uint32_t budget = kofxiResourceWaitServiceStepBudget();
        uint32_t steps = 0u;
        while (ctx->pc != 0u &&
               ctx->pc != returnPc &&
               runtime->hasFunction(ctx->pc) &&
               steps < budget)
        {
            PS2Runtime::RecompiledFunction fn = (ctx->pc == 0x001B05B0u)
                                                    ? g_kofxiResourceHandleWaitLoopServiceFn
                                                    : runtime->lookupFunction(ctx->pc);
            {
                PS2Runtime::GuestExecutionScope guestExecution(runtime);
                fn(rdram, ctx, runtime);
            }
            ++steps;
        }

        return steps;
    }

    void serviceKofxiResourceWaitHandle(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t callerReturnPc)
    {
        if (!kofxiResourceWaitServiceCompatEnabled() ||
            !rdram ||
            !ctx ||
            !runtime ||
            !g_kofxiResourceHandleWaitLoopServiceFn)
        {
            return;
        }

        constexpr uint32_t kWaitLoopFrameSchedulerReturnPc = 0x0014AEE8u;
        constexpr uint32_t kActiveHandle = 0x0036F818u;
        constexpr uint32_t kServiceEntryPc = 0x001B05B0u;
        constexpr uint32_t kServiceReturnPc = 0x0014AEE8u;

        const uint32_t returnPc = callerReturnPc != 0u ? callerReturnPc : getRegU32(ctx, 31);
        if (returnPc != kWaitLoopFrameSchedulerReturnPc)
        {
            return;
        }

        const uint32_t state0 = readGuestU8OrZero(rdram, kActiveHandle);
        const uint32_t state1 = readGuestU8OrZero(rdram, kActiveHandle + 1u);
        if (state0 != 1u || state1 != 2u)
        {
            return;
        }

        R5900Context serviceCtx = *ctx;
        serviceCtx.pc = kServiceEntryPc;
        SET_GPR_U32(&serviceCtx, 31, kServiceReturnPc);
        const uint32_t steps = runKofxiDetachedResourceWaitService(
            rdram,
            &serviceCtx,
            runtime,
            kServiceReturnPc);

        logKofxiResourceWaitServiceCompat(
            serviceCtx.pc == kServiceReturnPc ? "serviced" : "service-yielded",
            rdram,
            ctx,
            state1,
            serviceCtx.pc,
            steps);

        if (serviceCtx.pc == kServiceReturnPc &&
            readGuestU8OrZero(rdram, kActiveHandle) == 0u &&
            readGuestU8OrZero(rdram, kActiveHandle + 1u) == 0u &&
            readGuestU32OrZero(rdram, kActiveHandle + 0x04u) == 0u &&
            readGuestU32OrZero(rdram, kActiveHandle + 0x20u) == 0u &&
            readGuestU32OrZero(rdram, kActiveHandle + 0x24u) == 0u)
        {
            kofxiResourceWaitServicedClosedHandle().store(1u, std::memory_order_relaxed);
        }
    }

    void kofxiRunFrameSchedulerResourceWaitCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t entryPc = ctx ? ctx->pc : 0x001B40F0u;
        const uint32_t callerReturnPc = ctx ? getRegU32(ctx, 31) : 0u;
        if (g_kofxiRunFrameSchedulerResourceWaitFn)
        {
            g_kofxiRunFrameSchedulerResourceWaitFn(rdram, ctx, runtime);
        }
        else if (ctx)
        {
            ctx->pc = getRegU32(ctx, 31);
        }

        serviceKofxiResourceWaitHandle(rdram, ctx, runtime, callerReturnPc);

        if (traceKofxiBootProgressEnabled())
        {
            const uint32_t handle = 0x0036F818u;
            logKofxiResourceHandle(
                "leave",
                "kofxiRunFrameSchedulerResourceWaitCompat",
                entryPc,
                handle,
                ctx ? getRegU32(ctx, 5) : 0u,
                ctx ? getRegU32(ctx, 6) : 0u,
                rdram,
                ctx);
        }
    }

    void logKofxiCallbackResource(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint32_t subject,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiCallbackResourceEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_logCount{0u};
        const uint32_t index = s_logCount.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 256u)
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t s0 = ctx ? getRegU32(ctx, 16) : 0u;
        const uint32_t s1 = ctx ? getRegU32(ctx, 17) : 0u;
        const uint32_t slot = subject;
        const uint32_t object10 = slot ? readGuestU32OrZero(rdram, slot + 0x10u) : 0u;
        const uint32_t object14 = slot ? readGuestU32OrZero(rdram, slot + 0x14u) : 0u;
        const uint32_t objectCandidate =
            (entry == 0x001B6980u || entry == 0x001B6C08u) ? subject : object10;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:callback-resource] #" << index
                  << " " << phase
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " a0=0x" << a0
                  << " v0=0x" << v0
                  << " s0=0x" << s0
                  << " s1=0x" << s1
                  << " subject=0x" << subject
                  << " slot0/3=0x" << static_cast<uint32_t>(slot ? readGuestU8OrZero(rdram, slot) : 0u)
                  << "/0x" << static_cast<uint32_t>(slot ? readGuestU8OrZero(rdram, slot + 3u) : 0u)
                  << " slot4/8/c=0x" << (slot ? readGuestU32OrZero(rdram, slot + 4u) : 0u)
                  << "/0x" << (slot ? readGuestU32OrZero(rdram, slot + 8u) : 0u)
                  << "/0x" << (slot ? readGuestU32OrZero(rdram, slot + 0xCu) : 0u)
                  << " obj10/14=0x" << object10
                  << "/0x" << object14
                  << " obj=0x" << objectCandidate
                  << " obj0/4=0x" << (objectCandidate ? readGuestU32OrZero(rdram, objectCandidate) : 0u)
                  << "/0x" << (objectCandidate ? readGuestU32OrZero(rdram, objectCandidate + 4u) : 0u)
                  << " obj48/49=0x" << static_cast<uint32_t>(objectCandidate ? readGuestU8OrZero(rdram, objectCandidate + 0x48u) : 0u)
                  << "/0x" << static_cast<uint32_t>(objectCandidate ? readGuestU8OrZero(rdram, objectCandidate + 0x49u) : 0u)
                  << " slot94/b0=0x" << (slot ? readGuestU32OrZero(rdram, slot + 0x94u) : 0u)
                  << "/0x" << (slot ? readGuestU32OrZero(rdram, slot + 0xB0u) : 0u)
                  << std::dec << std::endl;
    }

    void runKofxiCallbackResourceCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        const uint32_t subject = ctx ? getRegU32(ctx, 4) : 0u;
        logKofxiCallbackResource("enter", name, entry, subject, rdram, ctx);
        if (original)
        {
            original(rdram, ctx, runtime);
        }
        logKofxiCallbackResource("leave", name, entry, subject, rdram, ctx);
    }

    void kofxiTraceResourceCallbackSlotWalk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiCallbackResourceCall(
            "kofxiResourceCallbackSlotWalk",
            0x001B8E70u,
            g_kofxiResourceCallbackSlotWalkFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceCallbackSlotProcess(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiCallbackResourceCall(
            "kofxiResourceCallbackSlotProcess",
            0x001B8C70u,
            g_kofxiResourceCallbackSlotProcessFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceObjectDestroy(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiCallbackResourceCall(
            "kofxiResourceObjectDestroy",
            0x001B6980u,
            g_kofxiResourceObjectDestroyFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceResourceObjectWait(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiCallbackResourceCall(
            "kofxiResourceObjectWait",
            0x001B6C08u,
            g_kofxiResourceObjectWaitFn,
            rdram,
            ctx,
            runtime);
    }

    void logKofxiResourceCompletionTrace(
        const char *phase,
        uint32_t entry,
        uint32_t object,
        uint32_t desiredState,
        uint32_t beforeState,
        uint8_t *rdram,
        R5900Context *ctx)
    {
        if (!traceKofxiResourceCompletionEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_completionLogs{0u};
        const uint32_t index = s_completionLogs.fetch_add(1u, std::memory_order_relaxed);
        if (index >= kofxiResourceCompletionTraceLimit())
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t sp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t v0 = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t afterState = object ? static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x72u)) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:resource-completion] #" << index
                  << " " << (phase ? phase : "")
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << pc
                  << " ra=0x" << ra
                  << " sp=0x" << sp
                  << " obj=0x" << object
                  << " desired=0x" << desiredState
                  << " before72=0x" << beforeState
                  << " after72=0x" << afterState
                  << " obj1/70/71=0x" << (object ? static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x01u)) : 0u)
                  << "/0x" << (object ? static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x70u)) : 0u)
                  << "/0x" << (object ? static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x71u)) : 0u)
                  << " obj0/c/a0=0x" << (object ? readGuestU32OrZero(rdram, object) : 0u)
                  << "/0x" << (object ? readGuestU32OrZero(rdram, object + 0x0Cu) : 0u)
                  << "/0x" << (object ? readGuestU32OrZero(rdram, object + 0xA0u) : 0u)
                  << " v0=0x" << v0;
        appendKofxiMainTaskTableSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    void kofxiTraceResourceCompletionSet(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!g_kofxiResourceCompletionSetFn)
        {
            return;
        }

        if (!rdram || !ctx)
        {
            g_kofxiResourceCompletionSetFn(rdram, ctx, runtime);
            return;
        }

        const uint32_t entry = ctx->pc;
        const uint32_t object = getRegU32(ctx, 4);
        const uint32_t desiredState = getRegU32(ctx, 5);
        const uint32_t beforeState = object ? static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x72u)) : 0u;

        logKofxiResourceCompletionTrace("enter", entry, object, desiredState, beforeState, rdram, ctx);
        g_kofxiResourceCompletionSetFn(rdram, ctx, runtime);
        logKofxiResourceCompletionTrace("leave", entry, object, desiredState, beforeState, rdram, ctx);
    }

    void kofxiWakeFrameSleepThreadCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!rdram || !ctx)
        {
            return;
        }

        constexpr uint32_t kFrameSleepFlag = 0x0037304Cu;
        constexpr uint32_t kFrameThreadId = 0x00373098u;
        constexpr uint32_t kFrameWakeStatusAddrOffset = 0x50u;
        constexpr uint32_t kKofxiReferThreadStatusPc = 0x0010CB64u;
        constexpr uint32_t kKofxiWakeupThreadPc = 0x0010CB94u;
        constexpr int32_t kOk = 0;
        constexpr int32_t kThsWait = 0x04;
        constexpr int32_t kThsWaitSuspend = 0x0C;

        const uint32_t returnPc = getRegU32(ctx, 31);

        uint32_t frameSleep = 0;
        uint32_t frameTid = 0;
        if (!readGuestU32(rdram, kFrameSleepFlag, frameSleep) ||
            !readGuestU32(rdram, kFrameThreadId, frameTid) ||
            frameSleep != 1u ||
            frameTid == 0u)
        {
            ctx->pc = returnPc;
            return;
        }

        const uint32_t statusAddr = getRegU32(ctx, 29) - kFrameWakeStatusAddrOffset;
        SET_GPR_U32(ctx, 4, frameTid);
        SET_GPR_U32(ctx, 5, statusAddr);
        ctx->pc = kKofxiReferThreadStatusPc;
        ps2_syscalls::ReferThreadStatus(rdram, ctx, runtime);

        const int32_t referRet = static_cast<int32_t>(getRegU32(ctx, 2));
        int32_t status = 0;
        uint32_t statusRaw = 0;
        if (referRet == kOk && readGuestU32(rdram, statusAddr, statusRaw))
        {
            status = static_cast<int32_t>(statusRaw);
        }

        if (referRet == kOk && (status == kThsWait || status == kThsWaitSuspend))
        {
            SET_GPR_U32(ctx, 4, frameTid);
            ctx->pc = kKofxiWakeupThreadPc;
            ps2_syscalls::WakeupThread(rdram, ctx, runtime);

            const int32_t wakeRet = static_cast<int32_t>(getRegU32(ctx, 2));
            if (wakeRet == kOk || wakeRet == static_cast<int32_t>(frameTid))
            {
                writeGuestU32(rdram, kFrameSleepFlag, 0u);
            }
        }
        else if (referRet == kOk && kofxiHostFrameSleepEnabled())
        {
            writeGuestU32(rdram, kFrameSleepFlag, 0u);
        }
        else
        {
            setReturnS32(ctx, referRet);
        }

        ctx->pc = returnPc;
    }

    void kofxiFrameSleepCurrentHostVblankCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!rdram || !ctx)
        {
            return;
        }

        constexpr uint32_t kFrameSleepFlag = 0x0037304Cu;
        constexpr int32_t kOk = 0;

        const uint32_t returnPc = getRegU32(ctx, 31);
        writeGuestU32(rdram, kFrameSleepFlag, 1u);

        if (traceKofxiFrameSleepEnabled())
        {
            static std::atomic<uint32_t> s_frameSleepEnterLogs{0u};
            const uint32_t logIndex = s_frameSleepEnterLogs.fetch_add(1u, std::memory_order_relaxed);
            if (logIndex < 128u)
            {
                std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
                std::cerr << "[KOFXI:frame-sleep] enter"
                          << " pc=0x" << std::hex << ctx->pc
                          << " ra=0x" << returnPc
                          << " frameSleep=0x" << readGuestU32OrZero(rdram, kFrameSleepFlag)
                          << " frameTid=0x" << readGuestU32OrZero(rdram, 0x00373098u)
                          << " workerA=0x" << readGuestU32OrZero(rdram, 0x0037309Cu)
                          << " workerB=0x" << readGuestU32OrZero(rdram, 0x003730A0u)
                          << std::dec << std::endl;
            }
        }

        uint64_t tick = ps2_syscalls::GetCurrentVSyncTick();
        if (kofxiHostFrameSleepWaitsForVsync())
        {
            tick = ps2_syscalls::WaitForNextVSyncTick(rdram, runtime);
        }
        else
        {
            ps2_syscalls::EnsureVSyncWorkerRunning(rdram, runtime);
            const uint32_t sleepMicros = kofxiHostFrameSleepMicros();
            if (sleepMicros > 0u)
            {
                if (kofxiHostFrameSleepReleasesGuestExecution())
                {
                    PS2Runtime::GuestExecutionReleaseScope releaseGuestExecution(runtime);
                    std::this_thread::sleep_for(std::chrono::microseconds(sleepMicros));
                }
                else
                {
                    std::this_thread::sleep_for(std::chrono::microseconds(sleepMicros));
                }
            }
            tick = ps2_syscalls::GetCurrentVSyncTick();
        }

        writeGuestU32(rdram, kFrameSleepFlag, 0u);
        setReturnS32(ctx, kOk);
        ctx->pc = returnPc;

        if (traceKofxiFrameSleepEnabled())
        {
            static std::atomic<uint32_t> s_frameSleepLeaveLogs{0u};
            const uint32_t logIndex = s_frameSleepLeaveLogs.fetch_add(1u, std::memory_order_relaxed);
            if (logIndex < 128u)
            {
                std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
                std::cerr << "[KOFXI:frame-sleep] leave"
                          << " tick=" << tick
                          << " pc=0x" << std::hex << ctx->pc
                          << " frameSleep=0x" << readGuestU32OrZero(rdram, kFrameSleepFlag)
                          << std::dec << std::endl;
            }
        }
    }

    void kofxiSdkVSyncCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!rdram || !ctx || !runtime)
        {
            return;
        }

        const uint32_t entryPc = ctx->pc;
        const uint32_t sp = getRegU32(ctx, 29);
        uint32_t returnPc = getRegU32(ctx, 31);
        if (entryPc != 0x0010D180u && entryPc != 0x0010D198u && entryPc != 0x0010D1A0u &&
            entryPc != 0x0010D1C4u && entryPc != 0x0010D1D0u && entryPc != 0x0010D1F4u &&
            entryPc != 0x0010D214u)
        {
            if (g_kofxiSdkVSyncFn)
            {
                g_kofxiSdkVSyncFn(rdram, ctx, runtime);
            }
            return;
        }

        if (entryPc != 0x0010D180u)
        {
            returnPc = static_cast<uint32_t>(READ64(ADD32(sp, 0x10u)));
            SET_GPR_S32(ctx, 29, static_cast<int32_t>(ADD32(sp, 0x20u)));
        }

        const uint64_t tick = ps2_syscalls::WaitForNextVSyncTick(rdram, runtime);
        uint64_t csr = runtime->memory().gs().csr;
        constexpr uint64_t kCsrFieldBit = 1ull << 13;
        if ((tick & 1ull) != 0ull)
        {
            csr |= kCsrFieldBit;
        }
        else
        {
            csr &= ~kCsrFieldBit;
        }

        SET_GPR_U64(ctx, 2, csr);
        SET_GPR_U32(ctx, 31, returnPc);
        ctx->pc = returnPc;

        if (traceKofxiSdkVSyncCompatEnabled())
        {
            static std::atomic<uint32_t> s_vsyncCompatLogs{0u};
            const uint32_t logIndex = s_vsyncCompatLogs.fetch_add(1u, std::memory_order_relaxed);
            if (logIndex < 128u)
            {
                std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
                std::cerr << "[KOFXI:sdk-vsync-compat] #" << logIndex
                          << " entry=0x" << std::hex << entryPc
                          << " return=0x" << returnPc
                          << " sp=0x" << sp
                          << " csr=0x" << csr
                          << std::dec
                          << " tick=" << tick
                          << std::endl;
            }
        }
    }

    void kofxiStreamPollSemaCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!rdram || !ctx || !runtime)
        {
            return;
        }

        constexpr uint32_t kStreamSema0 = 0x00359DE8u;
        constexpr uint32_t kStreamSema1 = 0x00359DECu;
        constexpr uint32_t kStreamSema2 = 0x00359DF0u;
        const uint32_t entryPc = ctx->pc;
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t sid = getRegU32(ctx, 4);
        const uint32_t streamSid0 = readGuestU32OrZero(rdram, kStreamSema0);
        const uint32_t streamSid1 = readGuestU32OrZero(rdram, kStreamSema1);
        const uint32_t streamSid2 = readGuestU32OrZero(rdram, kStreamSema2);

        if (g_kofxiStreamPollSemaFn)
        {
            g_kofxiStreamPollSemaFn(rdram, ctx, runtime);
        }
        else
        {
            runtime->handleSyscall(rdram, ctx, 0x45u);
        }

        const uint32_t rawRet = getRegU32(ctx, 2);
        bool mapped = false;
        const bool matchesStreamSema =
            sid != 0u &&
            (sid == streamSid0 || sid == streamSid1 || sid == streamSid2);
        if (kofxiStreamPollSemaCompatEnabled() &&
            matchesStreamSema &&
            rawRet == 0u)
        {
            SET_GPR_U32(ctx, 2, sid);
            mapped = true;
        }

        if (traceKofxiStreamPollSemaCompatEnabled())
        {
            static std::atomic<uint32_t> s_streamPollSemaLogs{0u};
            const uint32_t logIndex = s_streamPollSemaLogs.fetch_add(1u, std::memory_order_relaxed);
            if (logIndex < 256u)
            {
                std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
                std::cerr << "[KOFXI:stream-poll-sema] #" << logIndex
                          << " entry=0x" << std::hex << entryPc
                          << " pcAfter=0x" << ctx->pc
                          << " ra=0x" << callRa
                          << " sid=0x" << sid
                          << " streamSids=0x" << streamSid0
                          << "/0x" << streamSid1
                          << "/0x" << streamSid2
                          << " raw=0x" << rawRet
                          << " ret=0x" << getRegU32(ctx, 2)
                          << std::dec
                          << " mapped=" << (mapped ? 1 : 0)
                          << std::endl;
            }
        }
    }

    void kofxiRenderQueueSubmitCounterGuardCompat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!rdram || !ctx || !runtime)
        {
            return;
        }

        constexpr uint32_t kCounter = 0x01DA29E0u;
        constexpr uint32_t kQueueBase = 0x01DA4DF0u;
        constexpr uint32_t kQueueStride = 0x118u;
        constexpr uint32_t kQueueLimit = 0x190u;
        constexpr uint32_t kLastValidSlot = kQueueBase + (kQueueLimit - 1u) * kQueueStride;

        const uint32_t entryPc = ctx->pc;
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        const uint32_t beforeCount = readGuestU32OrZero(rdram, kCounter);
        const uint32_t beforeSlot = kQueueBase + beforeCount * kQueueStride;
        const bool overflow = beforeCount >= kQueueLimit;
        const bool clamped = overflow && kofxiRenderQueueCounterGuardCompatEnabled();

        if (clamped)
        {
            (void)writeGuestU32(rdram, kCounter, 0u);
            static std::atomic<uint32_t> s_renderQueueClampLogs{0u};
            const uint32_t clampIndex = s_renderQueueClampLogs.fetch_add(1u, std::memory_order_relaxed);
            if (clampIndex < 64u || (clampIndex & 0x3Fu) == 0u)
            {
                std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
                std::cerr << "[KOFXI:render-queue-counter-clamp] #" << clampIndex
                          << " entry=0x" << std::hex << entryPc
                          << " ra=0x" << callRa
                          << " sp=0x" << callSp
                          << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                          << " count=0x" << beforeCount
                          << " nextSlot=0x" << beforeSlot
                          << " lastValid=0x" << kLastValidSlot
                          << std::dec << std::endl;
            }
        }

        uint32_t logIndex = 256u;
        const bool shouldLog = traceKofxiRenderQueueCounterGuardCompatEnabled() || clamped;
        if (shouldLog)
        {
            static std::atomic<uint32_t> s_renderQueueGuardLogs{0u};
            logIndex = s_renderQueueGuardLogs.fetch_add(1u, std::memory_order_relaxed);
            if (logIndex < 256u)
            {
                std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
                std::cerr << "[KOFXI:render-queue-counter-guard] #" << logIndex
                          << " before entry=0x" << std::hex << entryPc
                          << " ra=0x" << callRa
                          << " sp=0x" << callSp
                          << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                          << " count=0x" << beforeCount
                          << " nextSlot=0x" << beforeSlot
                          << " lastValid=0x" << kLastValidSlot
                          << std::dec
                          << " overflow=" << (overflow ? 1 : 0)
                          << " clamped=" << (clamped ? 1 : 0)
                          << std::endl;
            }
        }

        if (g_kofxiRenderQueueSubmitFn)
        {
            g_kofxiRenderQueueSubmitFn(rdram, ctx, runtime);
        }

        if (shouldLog && logIndex < 256u)
        {
            const uint32_t afterCount = readGuestU32OrZero(rdram, kCounter);
            const uint32_t afterSlot = kQueueBase + afterCount * kQueueStride;
            std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
            std::cerr << "[KOFXI:render-queue-counter-guard] #" << logIndex
                      << " after pc=0x" << std::hex << ctx->pc
                      << " ra=0x" << getRegU32(ctx, 31)
                      << " sp=0x" << getRegU32(ctx, 29)
                      << " ret=0x" << getRegU32(ctx, 2)
                      << " count=0x" << afterCount
                      << " nextSlot=0x" << afterSlot
                      << std::dec << std::endl;
        }
    }

    void logKofxiRenderQueueDrainTrace(
        const char *phase,
        const char *name,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t countBefore)
    {
        if (!traceKofxiRenderQueueDrainEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_renderQueueDrainLogs{0u};
        const uint32_t logIndex = s_renderQueueDrainLogs.fetch_add(1u, std::memory_order_relaxed);
        if (logIndex >= 512u)
        {
            return;
        }

        constexpr uint32_t kCounter = 0x01DA29E0u;
        constexpr uint32_t kPendingListCount = 0x0092F0F8u;
        constexpr uint32_t kPendingListProcessed = 0x0092F0F0u;
        constexpr uint32_t kPendingListBase = 0x0092EFF0u;
        const uint32_t count = readGuestU32OrZero(rdram, kCounter);
        const uint32_t pending = readGuestU32OrZero(rdram, kPendingListCount);
        const uint32_t processed = readGuestU32OrZero(rdram, kPendingListProcessed);
        const uint32_t firstItem = readGuestU32OrZero(rdram, kPendingListBase);

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:render-queue-drain] #" << logIndex
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1
                  << " countBefore=0x" << countBefore
                  << " count=0x" << count
                  << " pending=0x" << pending
                  << " processed=0x" << processed
                  << " firstItem=0x" << firstItem
                  << " ret=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << std::dec << std::endl;
    }

    void runKofxiRenderQueueDrainTraceCall(
        const char *name,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!rdram || !ctx)
        {
            return;
        }

        constexpr uint32_t kCounter = 0x01DA29E0u;
        const uint32_t entryPc = ctx->pc;
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t countBefore = readGuestU32OrZero(rdram, kCounter);
        logKofxiRenderQueueDrainTrace("enter", name, rdram, ctx, entryPc, callRa, callSp, a0, a1, countBefore);

        if (original)
        {
            original(rdram, ctx, runtime);
        }

        logKofxiRenderQueueDrainTrace("leave", name, rdram, ctx, entryPc, callRa, callSp, a0, a1, countBefore);
    }

    void logKofxiRenderListStateTrace(
        const char *phase,
        const char *name,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t countBefore,
        uint32_t listCountBefore)
    {
        if (!traceKofxiRenderQueueDrainEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_renderListStateLogs{0u};
        const uint32_t logIndex = s_renderListStateLogs.fetch_add(1u, std::memory_order_relaxed);
        if (logIndex >= 1024u)
        {
            return;
        }

        constexpr uint32_t kRenderQueueCounter = 0x01DA29E0u;
        constexpr uint32_t kPendingListCount = 0x0092F0F8u;
        constexpr uint32_t kPendingListProcessed = 0x0092F0F0u;
        constexpr uint32_t kPendingListBase = 0x0092EFF0u;
        const uint32_t count = readGuestU32OrZero(rdram, kRenderQueueCounter);
        const uint32_t listCount = readGuestU32OrZero(rdram, kPendingListCount);
        const uint32_t processed = readGuestU32OrZero(rdram, kPendingListProcessed);
        const uint32_t list0 = readGuestU32OrZero(rdram, kPendingListBase + 0u);
        const uint32_t list1 = readGuestU32OrZero(rdram, kPendingListBase + 4u);
        const uint32_t list2 = readGuestU32OrZero(rdram, kPendingListBase + 8u);
        const uint32_t list3 = readGuestU32OrZero(rdram, kPendingListBase + 12u);

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:render-list-state] #" << logIndex
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1
                  << " queueBefore=0x" << countBefore
                  << " queue=0x" << count
                  << " listBefore=0x" << listCountBefore
                  << " list=0x" << listCount
                  << " processed=0x" << processed
                  << " list0..3=0x" << list0 << "/0x" << list1 << "/0x" << list2 << "/0x" << list3
                  << " a0w=0x" << readGuestU32OrZero(rdram, a0)
                  << "/0x" << readGuestU32OrZero(rdram, a0 + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, a0 + 8u)
                  << std::dec << std::endl;
    }

    void runKofxiRenderListStateTraceCall(
        const char *name,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!rdram || !ctx)
        {
            return;
        }

        constexpr uint32_t kRenderQueueCounter = 0x01DA29E0u;
        constexpr uint32_t kPendingListCount = 0x0092F0F8u;
        const uint32_t entryPc = ctx->pc;
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t countBefore = readGuestU32OrZero(rdram, kRenderQueueCounter);
        const uint32_t listCountBefore = readGuestU32OrZero(rdram, kPendingListCount);
        logKofxiRenderListStateTrace(
            "enter",
            name,
            rdram,
            ctx,
            entryPc,
            callRa,
            callSp,
            a0,
            a1,
            countBefore,
            listCountBefore);

        if (original)
        {
            original(rdram, ctx, runtime);
        }

        logKofxiRenderListStateTrace(
            "leave",
            name,
            rdram,
            ctx,
            entryPc,
            callRa,
            callSp,
            a0,
            a1,
            countBefore,
            listCountBefore);
    }

    void kofxiTraceRenderQueueDrain(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiRenderQueueDrainTraceCall(
            "queueDrain",
            g_kofxiRenderQueueDrainFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceRenderListProcess(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiRenderQueueDrainTraceCall(
            "renderList",
            g_kofxiRenderListProcessFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceRenderListEnqueue(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiRenderListStateTraceCall(
            "renderListEnqueue",
            g_kofxiRenderListEnqueueFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceRenderListClear(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiRenderListStateTraceCall(
            "renderListClear",
            g_kofxiRenderListClearFn,
            rdram,
            ctx,
            runtime);
    }

    void logKofxiObjectRenderQueueStateTrace(
        const char *phase,
        const char *name,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t countBefore)
    {
        if (!traceKofxiRenderQueueDrainEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_objectRenderQueueLogs{0u};
        const uint32_t logIndex = s_objectRenderQueueLogs.fetch_add(1u, std::memory_order_relaxed);
        if (logIndex >= 1024u)
        {
            return;
        }

        constexpr uint32_t kQueueCount = 0x01D11530u;
        constexpr uint32_t kQueueBase = 0x01D11540u;
        constexpr uint32_t kQueueStride = 8u;
        const uint32_t count16 = readGuestU16OrZero(rdram, kQueueCount);
        const uint32_t countWord = readGuestU32OrZero(rdram, kQueueCount);
        const uint32_t objectLimit = a0 ? readGuestU32OrZero(rdram, readGuestU32OrZero(rdram, a0 + 4u) + 4u) : 0u;
        const uint32_t objectSort = a0 ? readGuestU16OrZero(rdram, a0 + 0x80u) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:object-render-queue] #" << logIndex
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1
                  << " countBefore=0x" << countBefore
                  << " count=0x" << count16
                  << "/0x" << countWord
                  << " objectLimit=0x" << objectLimit
                  << " objectSort=0x" << objectSort
                  << " ret=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << " entries=";

        for (uint32_t i = 0u; i < 4u; ++i)
        {
            if (i != 0u)
            {
                std::cerr << ",";
            }

            const uint32_t entry = kQueueBase + i * kQueueStride;
            const uint32_t object = readGuestU32OrZero(rdram, entry);
            std::cerr << i << ":0x" << object
                      << "/0x" << readGuestU16OrZero(rdram, entry + 4u);
            if (object != 0u)
            {
                std::cerr << ":f=0x" << readGuestU32OrZero(rdram, object)
                          << "/" << readGuestU32OrZero(rdram, object + 4u)
                          << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x8Bu))
                          << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x2BCu))
                          << ":pos=0x" << readGuestU32OrZero(rdram, object + 0x78u)
                          << "/" << readGuestU32OrZero(rdram, object + 0x7Cu)
                          << "/" << readGuestU32OrZero(rdram, object + 0x80u);
            }
        }

        std::cerr << std::dec << std::endl;
    }

    void runKofxiObjectRenderQueueStateTraceCall(
        const char *name,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!rdram || !ctx)
        {
            return;
        }

        constexpr uint32_t kQueueCount = 0x01D11530u;
        const uint32_t entryPc = ctx->pc;
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t countBefore = readGuestU16OrZero(rdram, kQueueCount);
        logKofxiObjectRenderQueueStateTrace(
            "enter",
            name,
            rdram,
            ctx,
            entryPc,
            callRa,
            callSp,
            a0,
            a1,
            countBefore);

        if (original)
        {
            original(rdram, ctx, runtime);
        }

        logKofxiObjectRenderQueueStateTrace(
            "leave",
            name,
            rdram,
            ctx,
            entryPc,
            callRa,
            callSp,
            a0,
            a1,
            countBefore);
    }

    void kofxiTraceObjectRenderQueueClear(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectRenderQueueStateTraceCall(
            "objectRenderClear",
            g_kofxiObjectRenderQueueClearFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceObjectRenderQueueEnqueue(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectRenderQueueStateTraceCall(
            "objectRenderEnqueue",
            g_kofxiObjectRenderQueueEnqueueFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceObjectRenderQueueProcess(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectRenderQueueStateTraceCall(
            "objectRenderProcess",
            g_kofxiObjectRenderQueueProcessFn,
            rdram,
            ctx,
            runtime);
    }

    uint32_t countKofxiObjectBuckets(uint8_t *rdram)
    {
        uint32_t activeCount = 0u;
        constexpr uint32_t kBucketBase = 0x009AFFD0u;
        constexpr uint32_t kBucketStride = 8u;
        for (uint32_t i = 0u; i < 256u; ++i)
        {
            const uint32_t bucket = kBucketBase + i * kBucketStride;
            if (readGuestU32OrZero(rdram, bucket) != 0u || readGuestU32OrZero(rdram, bucket + 4u) != 0u)
            {
                ++activeCount;
            }
        }
        return activeCount;
    }

    void logKofxiObjectListAllocTrace(
        const char *phase,
        const char *name,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3,
        uint32_t t0,
        uint32_t freeCountBefore,
        uint32_t bucketCountBefore)
    {
        if (!traceKofxiObjectListAllocEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_objectListAllocLogs{0u};
        const uint32_t logIndex = s_objectListAllocLogs.fetch_add(1u, std::memory_order_relaxed);
        if (logIndex >= 1024u)
        {
            return;
        }

        constexpr uint32_t kFreeCount = 0x009B07D0u;
        constexpr uint32_t kFreeSlots = 0x009B07E0u;
        constexpr uint32_t kPoolRoot = 0x0092F7B8u;
        constexpr uint32_t kBucketBase = 0x009AFFD0u;
        constexpr uint32_t kAllocatorRoot = 0x0092F7C0u;
        const uint32_t ret = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t bucket = a2 & 0xFFu;
        const uint32_t bucketAddr = kBucketBase + bucket * 8u;
        const uint32_t freeCount = readGuestU16OrZero(rdram, kFreeCount);
        const uint32_t bucketCount = countKofxiObjectBuckets(rdram);

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:object-list-alloc] #" << logIndex
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " t0=0x" << t0
                  << " ret=0x" << ret
                  << " freeBefore=0x" << freeCountBefore
                  << " free=0x" << freeCount
                  << " bucketBefore=0x" << bucketCountBefore
                  << " bucketCount=0x" << bucketCount
                  << " poolRoot=0x" << readGuestU32OrZero(rdram, kPoolRoot)
                  << " allocRoot=0x" << readGuestU32OrZero(rdram, kAllocatorRoot)
                  << "/0x" << readGuestU32OrZero(rdram, kAllocatorRoot + 4u)
                  << " freeSlots=0x" << readGuestU32OrZero(rdram, kFreeSlots)
                  << "/0x" << readGuestU32OrZero(rdram, kFreeSlots + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, kFreeSlots + 8u)
                  << " bucket" << bucket
                  << "=0x" << readGuestU32OrZero(rdram, bucketAddr)
                  << "/0x" << readGuestU32OrZero(rdram, bucketAddr + 4u)
                  << " bucket0=0x" << readGuestU32OrZero(rdram, kBucketBase)
                  << "/0x" << readGuestU32OrZero(rdram, kBucketBase + 4u)
                  << " bucket1=0x" << readGuestU32OrZero(rdram, kBucketBase + 8u)
                  << "/0x" << readGuestU32OrZero(rdram, kBucketBase + 12u);

        if (ret != 0u)
        {
            std::cerr << " obj=0x" << readGuestU32OrZero(rdram, ret)
                      << "/0x" << readGuestU32OrZero(rdram, ret + 4u)
                      << "/0x" << readGuestU32OrZero(rdram, ret + 8u)
                      << "/0x" << readGuestU32OrZero(rdram, ret + 0x10u)
                      << "/0x" << readGuestU32OrZero(rdram, ret + 0x14u)
                      << "/0x" << readGuestU32OrZero(rdram, ret + 0x18u)
                      << " st=0x" << readGuestU16OrZero(rdram, ret + 0x20u)
                      << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, ret + 0x31u));
        }

        std::cerr << std::dec << std::endl;
    }

    void runKofxiObjectListAllocTraceCall(
        const char *name,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!rdram || !ctx)
        {
            return;
        }

        constexpr uint32_t kFreeCount = 0x009B07D0u;
        const uint32_t entryPc = ctx->pc;
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        const uint32_t t0 = getRegU32(ctx, 8);
        const uint32_t freeCountBefore = readGuestU16OrZero(rdram, kFreeCount);
        const uint32_t bucketCountBefore = countKofxiObjectBuckets(rdram);

        logKofxiObjectListAllocTrace(
            "enter",
            name,
            rdram,
            ctx,
            entryPc,
            callRa,
            callSp,
            a0,
            a1,
            a2,
            a3,
            t0,
            freeCountBefore,
            bucketCountBefore);

        if (original)
        {
            original(rdram, ctx, runtime);
        }

        logKofxiObjectListAllocTrace(
            "leave",
            name,
            rdram,
            ctx,
            entryPc,
            callRa,
            callSp,
            a0,
            a1,
            a2,
            a3,
            t0,
            freeCountBefore,
            bucketCountBefore);
    }

    void kofxiTraceObjectListInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectListAllocTraceCall(
            "objectListInit",
            g_kofxiObjectListInitFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceObjectListAlloc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectListAllocTraceCall(
            "objectListAlloc",
            g_kofxiObjectListAllocFn,
            rdram,
            ctx,
            runtime);
    }

    void kofxiTraceObjectListRemove(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectListAllocTraceCall(
            "objectListRemove",
            g_kofxiObjectListRemoveFn,
            rdram,
            ctx,
            runtime);
    }

    const char *kofxiObjectServiceTraceName(uint32_t entry)
    {
        switch (entry)
        {
        case 0x00155DD0u: return "objectServiceScan";
        case 0x00155DA0u: return "objectCallbackSet";
        case 0x00176370u: return "resourceObjectStageA";
        case 0x001763F0u: return "resourceObjectInit";
        case 0x00176430u: return "resourceObjectSpawn";
        case 0x00176480u: return "resourceObjectLoadGate";
        case 0x001764F0u: return "resourceObjectWaitA";
        case 0x00176540u: return "resourceObjectBindSoundA";
        case 0x00176580u: return "resourceObjectBindSoundB";
        case 0x001765B8u: return "resourceObjectDone";
        case 0x00176690u: return "resourceObjectRun";
        case 0x00177750u: return "resourceObjectSelectExtra";
        case 0x00177F30u: return "resourceObjectInitTables";
        case 0x00177F70u: return "resourceObjectSpawnPair";
        case 0x00177420u: return "resourceObjectBucketFe";
        case 0x001779C0u: return "resourceObjectBucketFd";
        default: return "objectServiceTrace";
        }
    }

    uint32_t kofxiTraceObjectForEntry(uint8_t *rdram, uint32_t entry, uint32_t a0, uint32_t a1)
    {
        constexpr uint32_t kBucketBase = 0x009AFFD0u;
        if (entry == 0x00155DD0u)
        {
            return readGuestU32OrZero(rdram, kBucketBase);
        }
        if (entry == 0x00155DA0u)
        {
            return a1;
        }
        return a0;
    }

    void appendKofxiObjectServiceObject(std::ostream &out, uint8_t *rdram, uint32_t object)
    {
        const uint32_t callback = readGuestU32OrZero(rdram, object + 0x08u);
        const uint32_t payload = readGuestU32OrZero(rdram, object + 0x10u);
        out << " obj=0x" << object
            << " objNext=0x" << readGuestU32OrZero(rdram, object)
            << " bucket=0x" << readGuestU32OrZero(rdram, object + 0x04u)
            << " cb=0x" << callback
            << " payload=0x" << payload
            << " prev=0x" << readGuestU32OrZero(rdram, object + 0x14u)
            << " link=0x" << readGuestU32OrZero(rdram, object + 0x18u)
            << " age=0x" << readGuestU16OrZero(rdram, object + 0x20u)
            << " flags=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x31u))
            << " name='" << readGuestCString(rdram, object + 0x22u, 16u) << "'";

        if (payload != 0u)
        {
            out << " payloadW=0x" << readGuestU32OrZero(rdram, payload)
                << "/0x" << readGuestU32OrZero(rdram, payload + 0x04u)
                << "/0x" << readGuestU32OrZero(rdram, payload + 0x08u)
                << "/0x" << readGuestU32OrZero(rdram, payload + 0x0Cu)
                << " payload14=0x" << readGuestU32OrZero(rdram, payload + 0x14u)
                << " payloadState=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, payload + 0x18u))
                << " payloadKey=0x" << readGuestU32OrZero(rdram, payload + 0x1Cu)
                << " payloadReady=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, payload + 0x44u))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, payload + 0x45u))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, payload + 0x46u))
                << " payloadB4B8=0x" << readGuestU16OrZero(rdram, payload + 0xB4u)
                << "/0x" << readGuestU32OrZero(rdram, payload + 0xB8u)
                << " payloadBcBd=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, payload + 0xBCu))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, payload + 0xBDu));
        }
    }

    void logKofxiObjectServiceTrace(
        const char *phase,
        const char *name,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3,
        uint32_t objectBefore,
        uint32_t callbackBefore,
        uint32_t objectQueueBefore,
        uint32_t renderListBefore)
    {
        if (!traceKofxiObjectServiceEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_objectServiceLogs{0u};
        const uint32_t logIndex = s_objectServiceLogs.fetch_add(1u, std::memory_order_relaxed);
        if (logIndex >= kofxiObjectServiceTraceLimit())
        {
            return;
        }

        constexpr uint32_t kBucketBase = 0x009AFFD0u;
        constexpr uint32_t kObjectServiceCount = 0x0092F770u;
        constexpr uint32_t kObjectServiceNameGate = 0x009F9738u;
        constexpr uint32_t kObjectRenderQueueCount = 0x01D11530u;
        constexpr uint32_t kRenderListCount = 0x0092F0F8u;
        constexpr uint32_t kRenderSubmitCount = 0x01DA29E0u;

        const uint32_t object = kofxiTraceObjectForEntry(rdram, entryPc, a0, a1);
        const uint32_t callback = readGuestU32OrZero(rdram, object + 0x08u);
        const uint32_t bucket0 = readGuestU32OrZero(rdram, kBucketBase);

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:object-service] #" << logIndex
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " v=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 3) : 0u)
                  << " before=0x" << objectBefore
                  << "/0x" << callbackBefore
                  << " after=0x" << object
                  << "/0x" << callback
                  << " scan=0x" << readGuestU32OrZero(rdram, kObjectServiceCount)
                  << " nameGate=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kObjectServiceNameGate))
                  << " buckets=0x" << countKofxiObjectBuckets(rdram)
                  << " bucket0=0x" << bucket0
                  << "/0x" << readGuestU32OrZero(rdram, kBucketBase + 4u)
                  << " objectQueue=0x" << objectQueueBefore
                  << "->0x" << readGuestU16OrZero(rdram, kObjectRenderQueueCount)
                  << " render=0x" << readGuestU32OrZero(rdram, kRenderSubmitCount)
                  << "/0x" << renderListBefore
                  << "->0x" << readGuestU32OrZero(rdram, kRenderListCount);

        if (object != 0u)
        {
            appendKofxiObjectServiceObject(std::cerr, rdram, object);
        }
        if (entryPc == 0x00155DA0u && a1 != 0u)
        {
            std::cerr << " target=0x" << a0
                      << " targetName=" << kofxiObjectServiceTraceName(a0);
        }

        std::cerr << std::dec << std::endl;
    }

    void runKofxiObjectServiceTraceCall(
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        constexpr uint32_t kObjectRenderQueueCount = 0x01D11530u;
        constexpr uint32_t kRenderListCount = 0x0092F0F8u;

        const uint32_t entryPc = ctx->pc;
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        const uint32_t objectBefore = kofxiTraceObjectForEntry(rdram, entryPc, a0, a1);
        const uint32_t callbackBefore = readGuestU32OrZero(rdram, objectBefore + 0x08u);
        const uint32_t objectQueueBefore = readGuestU16OrZero(rdram, kObjectRenderQueueCount);
        const uint32_t renderListBefore = readGuestU32OrZero(rdram, kRenderListCount);
        const char *name = kofxiObjectServiceTraceName(entryPc);

        logKofxiObjectServiceTrace(
            "enter",
            name,
            rdram,
            ctx,
            entryPc,
            callRa,
            callSp,
            a0,
            a1,
            a2,
            a3,
            objectBefore,
            callbackBefore,
            objectQueueBefore,
            renderListBefore);

        auto it = g_kofxiObjectServiceTraceFns.find(entryPc);
        if (it != g_kofxiObjectServiceTraceFns.end() && it->second)
        {
            it->second(rdram, ctx, runtime);
        }
        else
        {
            ctx->pc = callRa;
        }

        logKofxiObjectServiceTrace(
            "leave",
            name,
            rdram,
            ctx,
            entryPc,
            callRa,
            callSp,
            a0,
            a1,
            a2,
            a3,
            objectBefore,
            callbackBefore,
            objectQueueBefore,
            renderListBefore);
    }

    void kofxiTraceObjectService(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiObjectServiceTraceCall(rdram, ctx, runtime);
    }

    void registerKofxiObjectServiceTrace(PS2Runtime &runtime, uint32_t entry)
    {
        if (!runtime.hasFunction(entry))
        {
            return;
        }

        PS2Runtime::RecompiledFunction original = runtime.lookupFunction(entry);
        if (original && original != &kofxiTraceObjectService)
        {
            g_kofxiObjectServiceTraceFns[entry] = original;
            runtime.registerFunction(entry, &kofxiTraceObjectService);
        }
    }

    const char *kofxiBattleResourceStepTraceName(uint32_t entry)
    {
        switch (entry)
        {
        case 0x001769B0u: return "battleResourceSlotAttach";
        case 0x001770D0u: return "battleResourceFrameService";
        case 0x00177198u: return "battleResourceRecordCheck";
        case 0x001775A0u: return "battleResourceLoadOne";
        case 0x00177BA0u: return "battleResourceSelectNext";
        case 0x00177CC0u: return "battleResourceResolveNode";
        case 0x00177E30u: return "battleResourceCheckNode";
        case 0x00178040u: return "battleResourcePollSound";
        case 0x00178560u: return "battleResourceReadyGate";
        case 0x001789E0u: return "battleResourceState0Ready";
        case 0x00178CF0u: return "battleResourceState1Ready";
        case 0x0017A590u: return "battleResourceCleanup";
        case 0x0017A650u: return "battleResourceCommandPump";
        case 0x0017A260u: return "battleResourceState2Ready";
        case 0x00198390u: return "battleResourceLoadRequest";
        case 0x001985D0u: return "battleResourceLoadFinish";
        case 0x0019F340u: return "battleResourceSoundStart";
        case 0x0019F390u: return "battleResourceSoundUpdate";
        case 0x0019F590u: return "battleResourceCommandInit";
        case 0x0019F5F0u: return "battleResourcePollAlt";
        case 0x0019F600u: return "battleResourcePoll";
        case 0x001A5270u: return "battleResourceArenaAlloc";
        case 0x001A51F0u: return "battleResourceTableMeasure";
        case 0x001A5390u: return "battleResourceTableRelease";
        case 0x0032C8B0u: return "battleResourceHeapAlloc";
        default: return "battleResourceStep";
        }
    }

    void appendKofxiBattleResourceBytes(std::ostream &out, uint8_t *rdram, const char *label, uint32_t addr, uint32_t count)
    {
        out << " " << label << "=0x" << addr << ":";
        for (uint32_t i = 0u; i < count; ++i)
        {
            if (i != 0u)
            {
                out << "/";
            }
            out << "0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, addr + i));
        }
    }

    void appendKofxiBattleResourceRecordCursor(std::ostream &out, uint8_t *rdram, R5900Context *ctx)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t index = getRegU32(ctx, 21);
        const uint32_t flagAddr = getRegU32(ctx, 18);
        const uint32_t recordAddr = getRegU32(ctx, 17);
        const uint32_t fallbackAddr = getRegU32(ctx, 22);
        const uint32_t activeAddr = getRegU32(ctx, 23);
        const uint32_t slotAddr = getRegU32(ctx, 30);
        const uint32_t frameResourceList = readGuestU32OrZero(rdram, getRegU32(ctx, 29) + 0xB0u);
        const uint32_t flag = static_cast<uint32_t>(readGuestU8OrZero(rdram, flagAddr));

        out << " recordCursor=i0x" << index
            << "/flagAddr0x" << flagAddr
            << "/flag0x" << flag
            << "/mask0x" << (flag & 0xCAu)
            << "/record0x" << recordAddr
            << "/active0x" << activeAddr
            << "/slot0x" << slotAddr
            << "/fallback0x" << fallbackAddr
            << "/list0x" << frameResourceList;

        if ((flag & 0x40u) == 0u)
        {
            out << "/skipMissing0x40";
        }
        else if ((flag & 0x0Au) == 0u)
        {
            out << "/skipMissing0x0a";
        }
        else if ((flag & 0x80u) == 0u)
        {
            out << "/skipMissing0x80";
        }
        else if ((flag & 0x08u) == 0u && (flag & 0x02u) == 0u)
        {
            out << "/skipMissing0x08or0x02";
        }
        else
        {
            out << "/readyLike";
        }

        out << " rec=";
        appendGuestWords(out, rdram, recordAddr, 3u);
        out << " activeW=";
        appendGuestWords(out, rdram, activeAddr, 1u);
        out << " slotW=";
        appendGuestWords(out, rdram, slotAddr, 1u);
        appendKofxiBattleResourceBytes(out, rdram, "nearFlags", flagAddr, 8u);
        appendKofxiBattleResourceBytes(out, rdram, "nearFallback", fallbackAddr, 4u);
    }

    void appendKofxiBattleResourceState(std::ostream &out, uint8_t *rdram)
    {
        constexpr uint32_t kBucketBase = 0x009AFFD0u;
        constexpr uint32_t kBucketFd = kBucketBase + 0xFDu * 8u;
        constexpr uint32_t kBucketFe = kBucketBase + 0xFEu * 8u;
        constexpr uint32_t kObjectRenderQueueCount = 0x01D11530u;
        constexpr uint32_t kRenderListCount = 0x0092F0F8u;
        constexpr uint32_t kRenderSubmitCount = 0x01DA29E0u;
        constexpr uint32_t kMainObject = 0x009BA240u;
        constexpr uint32_t kMainObjectDone = 0x009BA220u;
        constexpr uint32_t kFrameFlags = 0x009BAE00u;
        constexpr uint32_t kReadyGate = 0x009BB578u;
        constexpr uint32_t kReadySlotA = 0x009BA798u;
        constexpr uint32_t kReadySlotB = 0x009BA7A0u;
        constexpr uint32_t kDescriptorSlot = 0x009BA7A8u;
        constexpr uint32_t kReadyTable = 0x009BA7B0u;
        constexpr uint32_t kResourceCursor = 0x009BA7C0u;
        constexpr uint32_t kResourceCounter = 0x009BA7C8u;
        constexpr uint32_t kResourceList = 0x009BA7D8u;
        constexpr uint32_t kResourceTable = 0x009BAF68u;
        constexpr uint32_t kResourceRecords = 0x009BAF70u;
        constexpr uint32_t kResourceFlags = 0x009BAC60u;
        constexpr uint32_t kResourceActive = 0x009BA580u;
        constexpr uint32_t kResourceSlots = 0x009BA380u;
        constexpr uint32_t kResourceFallback = 0x009BABE0u;
        constexpr uint32_t kResourceMeasure = 0x009BAD78u;
        constexpr uint32_t kResourceMode = 0x009BAD70u;
        constexpr uint32_t kResourceScanIndex = 0x003637E0u;
        constexpr uint32_t kResourceFeIndex = 0x003637F0u;
        constexpr uint32_t kResourceDoneCount = 0x003637F8u;
        constexpr uint32_t kResourceReadyCount = 0x009BA7D0u;

        const uint32_t mainObject = readGuestU32OrZero(rdram, kMainObject);
        const uint32_t mainPayload = mainObject ? readGuestU32OrZero(rdram, mainObject + 0x10u) : 0u;
        const uint32_t resourceTable = readGuestU32OrZero(rdram, kResourceTable);
        const uint32_t resourceList = readGuestU32OrZero(rdram, kResourceList);
        const uint32_t readyTable = readGuestU32OrZero(rdram, kReadyTable);

        out << " brGates=0x" << readGuestU32OrZero(rdram, kFrameFlags)
            << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kReadyGate))
            << "/0x" << readGuestU32OrZero(rdram, kMainObjectDone)
            << " brIdx=0x" << readGuestU16OrZero(rdram, kResourceScanIndex)
            << "/0x" << readGuestU16OrZero(rdram, kResourceDoneCount)
            << "/0x" << readGuestU16OrZero(rdram, kResourceFeIndex)
            << "/0x" << readGuestU16OrZero(rdram, kResourceReadyCount)
            << "/0x" << readGuestU16OrZero(rdram, kResourceCursor)
            << "/0x" << readGuestU16OrZero(rdram, kResourceCounter)
            << " brPtrs=0x" << mainObject
            << "/0x" << mainPayload
            << "/0x" << resourceTable
            << "/0x" << resourceList
            << "/0x" << readyTable
            << "/0x" << readGuestU32OrZero(rdram, kReadySlotA)
            << "/0x" << readGuestU32OrZero(rdram, kReadySlotB)
            << "/0x" << readGuestU32OrZero(rdram, kDescriptorSlot)
            << " brMode=0x" << readGuestU16OrZero(rdram, kResourceMode)
            << " buckets=0x" << countKofxiObjectBuckets(rdram)
            << " bucket0=0x" << readGuestU32OrZero(rdram, kBucketBase)
            << "/0x" << readGuestU32OrZero(rdram, kBucketBase + 4u)
            << " bucketFD=0x" << readGuestU32OrZero(rdram, kBucketFd)
            << "/0x" << readGuestU32OrZero(rdram, kBucketFd + 4u)
            << " bucketFE=0x" << readGuestU32OrZero(rdram, kBucketFe)
            << "/0x" << readGuestU32OrZero(rdram, kBucketFe + 4u)
            << " queues=0x" << readGuestU16OrZero(rdram, kObjectRenderQueueCount)
            << "/0x" << readGuestU32OrZero(rdram, kRenderSubmitCount)
            << "/0x" << readGuestU32OrZero(rdram, kRenderListCount);

        out << " slots=";
        appendGuestWords(out, rdram, kResourceSlots, 4u);
        out << " active=";
        appendGuestWords(out, rdram, kResourceActive, 4u);
        out << " fallback=";
        appendGuestWords(out, rdram, kResourceFallback, 4u);
        out << " records=";
        appendGuestWords(out, rdram, kResourceRecords, 6u);
        out << " measure=";
        appendGuestWords(out, rdram, kResourceMeasure, 4u);
        if (resourceTable != 0u)
        {
            out << " table=";
            appendGuestWords(out, rdram, resourceTable, 8u);
            out << " table20=";
            appendGuestWords(out, rdram, resourceTable + 0x20u, 4u);
            out << " table40=";
            appendGuestWords(out, rdram, resourceTable + 0x40u, 4u);
            appendKofxiBattleResourceBytes(out, rdram, "tableBytes", resourceTable, 32u);
            for (uint32_t i = 0u; i < 4u; ++i)
            {
                const uint32_t nested = readGuestU32OrZero(rdram, resourceTable + (i * 4u));
                if (nested != 0u && getMemPtr(rdram, nested))
                {
                    out << " tablePtr" << i << "=";
                    appendGuestWords(out, rdram, nested, 4u);
                }
            }
        }
        if (resourceList != 0u)
        {
            out << " list=";
            appendGuestWords(out, rdram, resourceList, 4u);
        }
        if (readyTable != 0u)
        {
            out << " readyTable=";
            appendGuestWords(out, rdram, readyTable, 4u);
            appendKofxiBattleResourceBytes(out, rdram, "readyBytes", readyTable, 16u);
        }
        appendKofxiBattleResourceBytes(out, rdram, "flags", kResourceFlags, 8u);
        appendKofxiBattleResourceBytes(out, rdram, "fallbackBytes", kResourceFallback, 8u);

        if (mainObject != 0u)
        {
            appendKofxiObjectServiceObject(out, rdram, mainObject);
        }
    }

    void logKofxiBattleResourceStepTrace(
        const char *phase,
        uint32_t index,
        const char *name,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3,
        uint32_t v0Before,
        uint32_t v1Before)
    {
        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:battle-resource-step] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " v=0x" << v0Before << "/0x" << v1Before
                  << "->0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 3) : 0u);

        appendKofxiBattleResourceState(std::cerr, rdram);
        if (entryPc == 0x00177198u || (ctx && ctx->pc == 0x00177198u))
        {
            appendKofxiBattleResourceRecordCursor(std::cerr, rdram, ctx);
        }
        if (a0 != 0u)
        {
            std::cerr << " a0w=";
            appendGuestWords(std::cerr, rdram, a0, 4u);
        }
        if (a1 != 0u)
        {
            std::cerr << " a1w=";
            appendGuestWords(std::cerr, rdram, a1, 4u);
        }

        std::cerr << std::dec << std::endl;
    }

    void runKofxiBattleResourceStepTraceCall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t entryPc = ctx->pc;
        auto it = g_kofxiBattleResourceStepTraceFns.find(entryPc);
        PS2Runtime::RecompiledFunction original =
            (it != g_kofxiBattleResourceStepTraceFns.end()) ? it->second : nullptr;
        if (!original && runtime && runtime->hasFunction(entryPc))
        {
            original = runtime->lookupFunction(entryPc);
        }
        if (!original || original == &runKofxiBattleResourceStepTraceCall)
        {
            return;
        }

        const uint32_t index = []()
        {
            static std::atomic<uint32_t> s_battleResourceStepLogs{0u};
            return s_battleResourceStepLogs.fetch_add(1u, std::memory_order_relaxed);
        }();
        const bool shouldLog = rdram && index < kofxiBattleResourceStepTraceLimit();
        const char *name = kofxiBattleResourceStepTraceName(entryPc);
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        const uint32_t v0Before = getRegU32(ctx, 2);
        const uint32_t v1Before = getRegU32(ctx, 3);

        if (shouldLog)
        {
            logKofxiBattleResourceStepTrace(
                "enter",
                index,
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3,
                v0Before,
                v1Before);
        }

        original(rdram, ctx, runtime);

        if (shouldLog)
        {
            logKofxiBattleResourceStepTrace(
                "leave",
                index,
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3,
                v0Before,
                v1Before);
        }
    }

    void kofxiTraceBattleResourceStep(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiBattleResourceStepTraceCall(rdram, ctx, runtime);
    }

    void registerKofxiBattleResourceStepTrace(PS2Runtime &runtime, uint32_t entry)
    {
        if (!runtime.hasFunction(entry))
        {
            return;
        }

        PS2Runtime::RecompiledFunction original = runtime.lookupFunction(entry);
        if (original && original != &kofxiTraceBattleResourceStep)
        {
            g_kofxiBattleResourceStepTraceFns[entry] = original;
            runtime.registerFunction(entry, &kofxiTraceBattleResourceStep);
        }
    }

    const char *kofxiResourceSlotCallbackTraceName(uint32_t entry)
    {
        switch (entry)
        {
        case 0x00177350u: return "resourceSlotLowSelect";
        case 0x00177420u: return "resourceObjectBucketFe";
        case 0x00177750u: return "resourceSlotExtraBuild";
        case 0x001779C0u: return "resourceObjectBucketFd";
        default: return "resourceSlotCallback";
        }
    }

    void appendKofxiReadyEntrySnapshot(std::ostream &out, uint8_t *rdram, const char *label, uint32_t index)
    {
        constexpr uint32_t kReadyTable = 0x009BA7B0u;
        constexpr uint32_t kReadyCount = 0x009BA7D0u;
        constexpr uint32_t kResourceFlags = 0x009BAC60u;
        constexpr uint32_t kResourceSlots = 0x009BA380u;
        constexpr uint32_t kResourceActive = 0x009BA580u;
        constexpr uint32_t kResourceFallback = 0x009BABE0u;

        const uint32_t readyTable = readGuestU32OrZero(rdram, kReadyTable);
        const uint32_t readyCount = readGuestU16OrZero(rdram, kReadyCount);
        out << " " << (label ? label : "ready") << "=i0x" << index;
        if (readyTable == 0u || index >= readyCount)
        {
            out << "/count0x" << readyCount << "/table0x" << readyTable;
            return;
        }

        const uint32_t entry = readyTable + (index * 4u);
        const uint32_t low = readGuestU16OrZero(rdram, entry);
        const uint32_t high = readGuestU16OrZero(rdram, entry + 2u);
        out << "/lo0x" << low
            << "/hi0x" << high;

        if (low != 0xFFFFu && low < 0x100u)
        {
            out << "/loState0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kResourceFlags + low))
                << "/0x" << readGuestU32OrZero(rdram, kResourceSlots + (low * 4u))
                << "/0x" << readGuestU32OrZero(rdram, kResourceActive + (low * 4u))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kResourceFallback + low));
        }
        if (high != 0xFFFFu && high < 0x100u)
        {
            out << "/hiState0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kResourceFlags + high))
                << "/0x" << readGuestU32OrZero(rdram, kResourceSlots + (high * 4u))
                << "/0x" << readGuestU32OrZero(rdram, kResourceActive + (high * 4u))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kResourceFallback + high));
        }
    }

    void appendKofxiReadyCursorSnapshot(std::ostream &out, uint8_t *rdram)
    {
        constexpr uint32_t kResourceFeIndex = 0x003637F0u;
        constexpr uint32_t kResourceFdIndex = 0x003637F8u;
        constexpr uint32_t kResourceScanIndex = 0x003637E0u;
        constexpr uint32_t kReadyCount = 0x009BA7D0u;

        const uint32_t scan = readGuestU16OrZero(rdram, kResourceScanIndex);
        const uint32_t fe = readGuestU16OrZero(rdram, kResourceFeIndex);
        const uint32_t fd = readGuestU16OrZero(rdram, kResourceFdIndex);
        const uint32_t count = readGuestU16OrZero(rdram, kReadyCount);
        out << " readyCursor=0x" << scan << "/0x" << fe << "/0x" << fd << "/0x" << count;
        appendKofxiReadyEntrySnapshot(out, rdram, "readyFe", fe);
        appendKofxiReadyEntrySnapshot(out, rdram, "readyFd", fd);
    }

    void logKofxiResourceSlotCallbackTrace(
        const char *phase,
        uint32_t index,
        const char *name,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3,
        uint32_t v0Before,
        uint32_t v1Before)
    {
        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:resource-slot-callback] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " v=0x" << v0Before << "/0x" << v1Before
                  << "->0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 3) : 0u);

        appendKofxiReadyCursorSnapshot(std::cerr, rdram);
        appendKofxiBattleResourceState(std::cerr, rdram);
        if (a0 != 0u)
        {
            std::cerr << " a0w=";
            appendGuestWords(std::cerr, rdram, a0, 4u);
        }
        if (a1 != 0u)
        {
            std::cerr << " a1w=";
            appendGuestWords(std::cerr, rdram, a1, 4u);
        }

        std::cerr << std::dec << std::endl;
    }

    void runKofxiResourceSlotCallbackTraceCall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t entryPc = ctx->pc;
        auto it = g_kofxiResourceSlotCallbackTraceFns.find(entryPc);
        PS2Runtime::RecompiledFunction original =
            (it != g_kofxiResourceSlotCallbackTraceFns.end()) ? it->second : nullptr;
        if (!original && runtime && runtime->hasFunction(entryPc))
        {
            original = runtime->lookupFunction(entryPc);
        }
        if (!original || original == &runKofxiResourceSlotCallbackTraceCall)
        {
            return;
        }

        const uint32_t index = []()
        {
            static std::atomic<uint32_t> s_resourceSlotCallbackLogs{0u};
            return s_resourceSlotCallbackLogs.fetch_add(1u, std::memory_order_relaxed);
        }();
        const bool shouldLog = rdram && index < kofxiResourceSlotCallbacksTraceLimit();
        const char *name = kofxiResourceSlotCallbackTraceName(entryPc);
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        const uint32_t v0Before = getRegU32(ctx, 2);
        const uint32_t v1Before = getRegU32(ctx, 3);

        if (shouldLog)
        {
            logKofxiResourceSlotCallbackTrace(
                "enter",
                index,
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3,
                v0Before,
                v1Before);
        }

        original(rdram, ctx, runtime);

        if (shouldLog)
        {
            logKofxiResourceSlotCallbackTrace(
                "leave",
                index,
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3,
                v0Before,
                v1Before);
        }
    }

    void kofxiTraceResourceSlotCallback(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceSlotCallbackTraceCall(rdram, ctx, runtime);
    }

    void registerKofxiResourceSlotCallbackTrace(PS2Runtime &runtime, uint32_t entry)
    {
        if (!runtime.hasFunction(entry))
        {
            return;
        }

        PS2Runtime::RecompiledFunction original = runtime.lookupFunction(entry);
        if (original && original != &kofxiTraceResourceSlotCallback)
        {
            g_kofxiResourceSlotCallbackTraceFns[entry] = original;
            runtime.registerFunction(entry, &kofxiTraceResourceSlotCallback);
        }
    }

    void kofxiTraceResourceDataChain(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);

    const char *kofxiResourceDataChainTraceName(uint32_t entry)
    {
        switch (entry)
        {
        case 0x0011C188u: return "resourceRpcPrepare";
        case 0x0011C3A8u: return "resourceRpcLoadRequest";
        case 0x0011C658u: return "resourceRpcSubmit";
        case 0x001A3DB0u: return "resourceDataLoadDirect";
        case 0x001A3F30u: return "resourceDataLoadVariant";
        case 0x001A54F0u: return "resourceArenaMarkUsed";
        case 0x001A5710u: return "resourceArenaFinalizeBlock";
        case 0x0032C890u: return "resourceHeapBaseStore";
        case 0x0032C8B0u: return "resourceHeapPtrResolve";
        default: return "resourceDataChain";
        }
    }

    void appendKofxiResourceDataPtrSnapshot(
        std::ostream &out,
        uint8_t *rdram,
        const char *wordLabel,
        const char *byteLabel,
        uint32_t addr,
        uint32_t words,
        uint32_t bytes)
    {
        if (!rdram || addr == 0u || !getMemPtr(rdram, addr))
        {
            return;
        }

        out << " " << (wordLabel ? wordLabel : "ptr") << "=";
        appendGuestWords(out, rdram, addr, words);
        if (byteLabel && bytes != 0u)
        {
            appendKofxiBattleResourceBytes(out, rdram, byteLabel, addr, bytes);
        }
    }

    void appendKofxiResourceDataResolve(std::ostream &out, uint8_t *rdram, uint32_t index, uint32_t slot)
    {
        constexpr uint32_t kHeapBaseTable = 0x01DCF380u;
        if (index >= 0x40u)
        {
            return;
        }

        const uint32_t base = readGuestU32OrZero(rdram, kHeapBaseTable + index * 4u);
        out << " resolve=0x" << index << "/0x" << slot << "/base0x" << base;
        if (base == 0u || slot >= 0x10000u)
        {
            return;
        }

        const uint32_t offsetAddr = base + (slot + 1u) * 4u;
        const uint32_t offset = readGuestU32OrZero(rdram, offsetAddr);
        out << "/off@0x" << offsetAddr << "=0x" << offset
            << "/ptr0x" << (base + offset);
    }

    void appendKofxiResourceDataChainState(std::ostream &out, uint8_t *rdram)
    {
        constexpr uint32_t kResourceTable = 0x009BAF68u;
        constexpr uint32_t kResourceList = 0x009BA7D8u;
        constexpr uint32_t kReadyTable = 0x009BA7B0u;
        constexpr uint32_t kDescriptorSlot = 0x009BA7A8u;
        constexpr uint32_t kResourceArena = 0x009BAD78u;
        constexpr uint32_t kResourceMode = 0x009BAD70u;
        constexpr uint32_t kHeapBaseTable = 0x01DCF380u;
        constexpr uint32_t kManagerBase = 0x009FB8A0u;
        constexpr uint32_t kRpcPacketBase = 0x00369EC0u;
        constexpr uint32_t kDescriptorType0Variant0 = 0x003DD920u;

        const uint32_t table = readGuestU32OrZero(rdram, kResourceTable);
        const uint32_t list = readGuestU32OrZero(rdram, kResourceList);
        const uint32_t ready = readGuestU32OrZero(rdram, kReadyTable);
        const uint32_t descriptorSlot = readGuestU32OrZero(rdram, kDescriptorSlot);
        const uint32_t heap0 = readGuestU32OrZero(rdram, kHeapBaseTable);

        out << " dataPtrs=0x" << table
            << "/0x" << list
            << "/0x" << ready
            << "/0x" << descriptorSlot
            << " mode=0x" << readGuestU16OrZero(rdram, kResourceMode);
        out << " heapBases=";
        appendGuestWords(out, rdram, kHeapBaseTable, 8u);
        out << " arena=";
        appendGuestWords(out, rdram, kResourceArena, 8u);
        out << " mgr=";
        for (uint32_t i = 0u; i < 5u; ++i)
        {
            if (i != 0u)
            {
                out << "/";
            }
            const uint32_t record = kManagerBase + i * 8u;
            out << "0x" << i
                << ":0x" << readGuestU32OrZero(rdram, record)
                << ",0x" << readGuestU32OrZero(rdram, record + 4u);
        }
        out << " rpc=";
        appendGuestWords(out, rdram, kRpcPacketBase, 12u);

        appendKofxiResourceDataPtrSnapshot(out, rdram, "desc00w", "desc00b", kDescriptorType0Variant0, 8u, 32u);
        appendKofxiResourceDataPtrSnapshot(out, rdram, "curData", "curBytes", table, 8u, 32u);
        appendKofxiResourceDataPtrSnapshot(out, rdram, "heap0", "heap0Bytes", heap0, 8u, 32u);
        appendKofxiResourceDataPtrSnapshot(out, rdram, "listData", "listBytes", list, 4u, 16u);
        appendKofxiResourceDataPtrSnapshot(out, rdram, "readyData", "readyBytes2", ready, 4u, 16u);
    }

    void logKofxiResourceDataChainTrace(
        const char *phase,
        uint32_t index,
        const char *name,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3,
        uint32_t v0Before,
        uint32_t v1Before)
    {
        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:resource-data-chain] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " v=0x" << v0Before << "/0x" << v1Before
                  << "->0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 3) : 0u);

        if (entryPc == 0x0032C890u || entryPc == 0x0032C8B0u)
        {
            appendKofxiResourceDataResolve(std::cerr, rdram, a0, a1);
        }

        appendKofxiResourceDataChainState(std::cerr, rdram);
        appendKofxiBattleResourceState(std::cerr, rdram);
        appendKofxiResourceDataPtrSnapshot(std::cerr, rdram, "a0w", "a0b", a0, 6u, 24u);
        appendKofxiResourceDataPtrSnapshot(std::cerr, rdram, "a1w", "a1b", a1, 6u, 24u);
        appendKofxiResourceDataPtrSnapshot(std::cerr, rdram, "a2w", "a2b", a2, 4u, 16u);
        appendKofxiResourceDataPtrSnapshot(std::cerr, rdram, "a3w", "a3b", a3, 4u, 16u);

        std::cerr << std::dec << std::endl;
    }

    void runKofxiResourceDataChainTraceCall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t entryPc = ctx->pc;
        auto it = g_kofxiResourceDataChainTraceFns.find(entryPc);
        PS2Runtime::RecompiledFunction original =
            (it != g_kofxiResourceDataChainTraceFns.end()) ? it->second : nullptr;
        if (!original && runtime && runtime->hasFunction(entryPc))
        {
            original = runtime->lookupFunction(entryPc);
        }
        if (!original || original == &kofxiTraceResourceDataChain || original == &runKofxiResourceDataChainTraceCall)
        {
            return;
        }

        const uint32_t index = []()
        {
            static std::atomic<uint32_t> s_resourceDataChainLogs{0u};
            return s_resourceDataChainLogs.fetch_add(1u, std::memory_order_relaxed);
        }();
        const bool shouldLog = rdram && index < kofxiResourceDataChainTraceLimit();
        const char *name = kofxiResourceDataChainTraceName(entryPc);
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        const uint32_t v0Before = getRegU32(ctx, 2);
        const uint32_t v1Before = getRegU32(ctx, 3);

        if (shouldLog)
        {
            logKofxiResourceDataChainTrace(
                "enter",
                index,
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3,
                v0Before,
                v1Before);
        }

        original(rdram, ctx, runtime);

        if (shouldLog)
        {
            logKofxiResourceDataChainTrace(
                "leave",
                index,
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3,
                v0Before,
                v1Before);
        }
    }

    void kofxiTraceResourceDataChain(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourceDataChainTraceCall(rdram, ctx, runtime);
    }

    void registerKofxiResourceDataChainTrace(PS2Runtime &runtime, uint32_t entry)
    {
        if (!runtime.hasFunction(entry))
        {
            return;
        }

        PS2Runtime::RecompiledFunction original = runtime.lookupFunction(entry);
        if (original && original != &kofxiTraceResourceDataChain)
        {
            g_kofxiResourceDataChainTraceFns[entry] = original;
            runtime.registerFunction(entry, &kofxiTraceResourceDataChain);
        }
    }

    void kofxiTraceResourcePackageInstall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);

    const char *kofxiResourcePackageInstallTraceName(uint32_t entry)
    {
        switch (entry)
        {
        case 0x001768A0u: return "resourceMainObjectCreate";
        case 0x001768DCu: return "resourceMainObjectCreate.afterAlloc";
        case 0x001768F0u: return "resourceMainObjectCreate.afterClear";
        case 0x00176914u: return "resourceMainObjectCreate.afterAttach";
        case 0x00176AB0u: return "resourceReadyScriptBuild";
        case 0x00176AE0u: return "resourceReadyScriptMeasure";
        case 0x00176BF0u: return "resourceReadyScriptFill";
        case 0x00176CB0u: return "resourcePackageGlobalsReset";
        case 0x00176DB0u: return "resourcePackageInstall";
        default: return "resourcePackageTrace";
        }
    }

    void appendKofxiResourceDescriptorProbe(std::ostream &out, uint8_t *rdram, uint32_t type, uint32_t variant)
    {
        constexpr uint32_t kDescriptorTable = 0x003DE300u;
        constexpr uint32_t kDescriptorCount = 0x6Bu;
        uint32_t exactIndex = 0xFFFFFFFFu;
        uint32_t exactRecord = 0u;
        uint32_t exactPtr = 0u;
        uint32_t firstTypeIndex = 0xFFFFFFFFu;
        uint32_t firstTypeRecord = 0u;
        uint32_t firstTypePtr = 0u;
        uint32_t firstTypeVariant = 0u;

        for (uint32_t i = 0u; i < kDescriptorCount; ++i)
        {
            const uint32_t record = kDescriptorTable + i * 8u;
            const uint32_t recordType = readGuestU8OrZero(rdram, record + 4u);
            const uint32_t recordVariant = readGuestU8OrZero(rdram, record + 5u);
            if (recordType != type)
            {
                continue;
            }

            if (firstTypeIndex == 0xFFFFFFFFu)
            {
                firstTypeIndex = i;
                firstTypeRecord = record;
                firstTypePtr = readGuestU32OrZero(rdram, record);
                firstTypeVariant = recordVariant;
            }

            if (recordVariant == variant)
            {
                exactIndex = i;
                exactRecord = record;
                exactPtr = readGuestU32OrZero(rdram, record);
                break;
            }
        }

        out << " descKey=0x" << type << "/0x" << variant;
        if (exactIndex != 0xFFFFFFFFu)
        {
            out << " descExact=0x" << exactIndex << "/0x" << exactRecord << "/0x" << exactPtr;
        }
        else
        {
            out << " descExact=none";
        }

        if (firstTypeIndex != 0xFFFFFFFFu)
        {
            out << " descTypeFirst=0x" << firstTypeIndex
                << "/0x" << firstTypeRecord
                << "/0x" << firstTypePtr
                << "/0x" << firstTypeVariant;
        }
        else
        {
            out << " descTypeFirst=none";
        }
    }

    void appendKofxiResourcePackageScript(std::ostream &out, uint8_t *rdram, const char *label, uint32_t script)
    {
        if (!rdram || script == 0u || !getMemPtr(rdram, script))
        {
            return;
        }

        out << " " << (label ? label : "script") << "=0x" << script << " hdr=";
        appendGuestWords(out, rdram, script, 4u);

        const uint32_t commandOffset = readGuestU32OrZero(rdram, script + 0x0Cu);
        const uint32_t command = script + commandOffset;
        out << " cmd=0x" << commandOffset << "/0x" << command;
        if (commandOffset < 0x00100000u && getMemPtr(rdram, command))
        {
            appendKofxiBattleResourceBytes(out, rdram, "cmdBytes", command, 16u);
        }
    }

    void appendKofxiResourcePackagePayload(std::ostream &out, uint8_t *rdram, const char *label, uint32_t payload)
    {
        if (!rdram || payload == 0u || !getMemPtr(rdram, payload))
        {
            return;
        }

        const uint32_t script = readGuestU32OrZero(rdram, payload + 0x14u);
        const uint32_t type = readGuestU8OrZero(rdram, payload + 0xBCu);
        const uint32_t variant = readGuestU8OrZero(rdram, payload + 0xBDu);

        out << " " << (label ? label : "payload") << "=0x" << payload
            << " payloadW=0x" << readGuestU32OrZero(rdram, payload)
            << "/0x" << readGuestU32OrZero(rdram, payload + 0x04u)
            << "/0x" << readGuestU32OrZero(rdram, payload + 0x08u)
            << "/0x" << readGuestU32OrZero(rdram, payload + 0x0Cu)
            << " payload14=0x" << script
            << " payloadBcBd=0x" << type << "/0x" << variant;
        appendKofxiResourceDescriptorProbe(out, rdram, type, variant);
        appendKofxiResourcePackageScript(out, rdram, "payloadScript", script);
    }

    void logKofxiResourcePackageInstallTrace(
        const char *phase,
        uint32_t index,
        const char *name,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3,
        uint32_t resourceTableBefore,
        uint32_t descriptorSlotBefore,
        uint32_t readyTableBefore,
        uint32_t resourceListBefore)
    {
        constexpr uint32_t kMainObject = 0x009BA240u;
        constexpr uint32_t kResourceTable = 0x009BAF68u;
        constexpr uint32_t kDescriptorSlot = 0x009BA7A8u;
        constexpr uint32_t kReadyTable = 0x009BA7B0u;
        constexpr uint32_t kResourceList = 0x009BA7D8u;
        constexpr uint32_t kResourceMode = 0x009BAD70u;

        const uint32_t mainObject = readGuestU32OrZero(rdram, kMainObject);
        const uint32_t mainPayload = mainObject ? readGuestU32OrZero(rdram, mainObject + 0x10u) : 0u;
        const bool a0IsScript =
            entryPc == 0x001768A0u ||
            entryPc == 0x00176AB0u ||
            entryPc == 0x00176AE0u ||
            entryPc == 0x00176BF0u;
        const bool a0IsPayload = entryPc == 0x00176DB0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:resource-package-install] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " v=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 3) : 0u)
                  << " globals=0x" << resourceTableBefore << "->0x" << readGuestU32OrZero(rdram, kResourceTable)
                  << "/0x" << descriptorSlotBefore << "->0x" << readGuestU32OrZero(rdram, kDescriptorSlot)
                  << "/0x" << readyTableBefore << "->0x" << readGuestU32OrZero(rdram, kReadyTable)
                  << "/0x" << resourceListBefore << "->0x" << readGuestU32OrZero(rdram, kResourceList)
                  << " mode=0x" << readGuestU16OrZero(rdram, kResourceMode);

        appendKofxiBattleResourceState(std::cerr, rdram);
        if (a0IsScript)
        {
            appendKofxiResourcePackageScript(std::cerr, rdram, "a0Script", a0);
        }
        if (a0IsPayload)
        {
            appendKofxiResourcePackagePayload(std::cerr, rdram, "a0Payload", a0);
        }
        if (mainPayload != 0u && mainPayload != a0)
        {
            appendKofxiResourcePackagePayload(std::cerr, rdram, "mainPayload", mainPayload);
        }

        std::cerr << std::dec << std::endl;
    }

    void runKofxiResourcePackageInstallTraceCall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t entryPc = ctx->pc;
        auto it = g_kofxiResourcePackageInstallTraceFns.find(entryPc);
        PS2Runtime::RecompiledFunction original =
            (it != g_kofxiResourcePackageInstallTraceFns.end()) ? it->second : nullptr;
        if (!original && runtime && runtime->hasFunction(entryPc))
        {
            original = runtime->lookupFunction(entryPc);
        }
        if (!original || original == &kofxiTraceResourcePackageInstall || original == &runKofxiResourcePackageInstallTraceCall)
        {
            return;
        }

        const uint32_t index = []()
        {
            static std::atomic<uint32_t> s_resourcePackageInstallLogs{0u};
            return s_resourcePackageInstallLogs.fetch_add(1u, std::memory_order_relaxed);
        }();
        const bool shouldLog = rdram && index < kofxiResourcePackageInstallTraceLimit();
        const char *name = kofxiResourcePackageInstallTraceName(entryPc);
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        const uint32_t resourceTableBefore = readGuestU32OrZero(rdram, 0x009BAF68u);
        const uint32_t descriptorSlotBefore = readGuestU32OrZero(rdram, 0x009BA7A8u);
        const uint32_t readyTableBefore = readGuestU32OrZero(rdram, 0x009BA7B0u);
        const uint32_t resourceListBefore = readGuestU32OrZero(rdram, 0x009BA7D8u);

        if (shouldLog)
        {
            logKofxiResourcePackageInstallTrace(
                "enter",
                index,
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3,
                resourceTableBefore,
                descriptorSlotBefore,
                readyTableBefore,
                resourceListBefore);
        }

        original(rdram, ctx, runtime);

        if (shouldLog)
        {
            logKofxiResourcePackageInstallTrace(
                "leave",
                index,
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3,
                resourceTableBefore,
                descriptorSlotBefore,
                readyTableBefore,
                resourceListBefore);
        }
    }

    void kofxiTraceResourcePackageInstall(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiResourcePackageInstallTraceCall(rdram, ctx, runtime);
    }

    void registerKofxiResourcePackageInstallTrace(PS2Runtime &runtime, uint32_t entry)
    {
        if (!runtime.hasFunction(entry))
        {
            return;
        }

        PS2Runtime::RecompiledFunction original = runtime.lookupFunction(entry);
        if (original && original != &kofxiTraceResourcePackageInstall)
        {
            g_kofxiResourcePackageInstallTraceFns[entry] = original;
            runtime.registerFunction(entry, &kofxiTraceResourcePackageInstall);
        }
    }

    void logKofxiScriptDispatchTrace(
        const char *phase,
        uint32_t index,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3,
        uint32_t objectBucketsBefore,
        uint32_t objectQueueBefore,
        uint32_t renderListBefore)
    {
        constexpr uint32_t kFrontendStatePtr = 0x0092F788u;
        constexpr uint32_t kObjectFreeCount = 0x009B07D0u;
        constexpr uint32_t kObjectRenderQueueCount = 0x01D11530u;
        constexpr uint32_t kObjectRenderQueueBase = 0x01D11540u;
        constexpr uint32_t kRenderListCount = 0x0092F0F8u;
        constexpr uint32_t kRenderListProcessed = 0x0092F0F0u;
        constexpr uint32_t kRenderListBase = 0x0092EFF0u;
        constexpr uint32_t kRenderSubmitCount = 0x01DA29E0u;

        const uint32_t objectBuckets = countKofxiObjectBuckets(rdram);
        const uint32_t objectQueue = readGuestU16OrZero(rdram, kObjectRenderQueueCount);
        const uint32_t renderList = readGuestU32OrZero(rdram, kRenderListCount);

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:script-dispatch] #" << index
                  << " " << (phase ? phase : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " v=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 3) : 0u)
                  << " state=0x" << readGuestU32OrZero(rdram, kFrontendStatePtr)
                  << " input=0x" << readGuestU16OrZero(rdram, 0x009BEA22u)
                  << "/0x" << readGuestU16OrZero(rdram, 0x009BEA2Eu)
                  << " objects=0x" << objectBucketsBefore << "->0x" << objectBuckets
                  << " free=0x" << readGuestU16OrZero(rdram, kObjectFreeCount)
                  << " objectQueue=0x" << objectQueueBefore << "->0x" << objectQueue
                  << "/0x" << readGuestU32OrZero(rdram, kObjectRenderQueueBase)
                  << " render=0x" << readGuestU32OrZero(rdram, kRenderSubmitCount)
                  << "/0x" << renderListBefore << "->0x" << renderList
                  << "/0x" << readGuestU32OrZero(rdram, kRenderListProcessed)
                  << "/0x" << readGuestU32OrZero(rdram, kRenderListBase);

        if (a1 != 0u)
        {
            std::cerr << " a1w=";
            appendGuestWords(std::cerr, rdram, a1, 4u);
        }
        if (a2 != 0u)
        {
            std::cerr << " a2w=";
            appendGuestWords(std::cerr, rdram, a2, 4u);
        }

        std::cerr << std::dec << std::endl;
    }

    void kofxiTraceScriptDispatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!rdram || !ctx)
        {
            return;
        }

        PS2Runtime::RecompiledFunction original = g_kofxiScriptDispatchFn;
        if (!original && runtime && runtime->hasFunction(0x0014E3F0u))
        {
            original = runtime->lookupFunction(0x0014E3F0u);
        }
        if (!original || original == &kofxiTraceScriptDispatch)
        {
            return;
        }

        static std::atomic<uint32_t> s_scriptDispatchLogs{0u};
        const uint32_t index = s_scriptDispatchLogs.fetch_add(1u, std::memory_order_relaxed);
        const bool shouldLog = index < kofxiScriptDispatchTraceLimit();
        const uint32_t entryPc = ctx->pc;
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        const uint32_t objectBucketsBefore = countKofxiObjectBuckets(rdram);
        const uint32_t objectQueueBefore = readGuestU16OrZero(rdram, 0x01D11530u);
        const uint32_t renderListBefore = readGuestU32OrZero(rdram, 0x0092F0F8u);

        if (shouldLog)
        {
            logKofxiScriptDispatchTrace(
                "enter",
                index,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3,
                objectBucketsBefore,
                objectQueueBefore,
                renderListBefore);
        }

        original(rdram, ctx, runtime);

        if (shouldLog)
        {
            logKofxiScriptDispatchTrace(
                "leave",
                index,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3,
                objectBucketsBefore,
                objectQueueBefore,
                renderListBefore);
        }
    }

    const char *kofxiFrontendTraceName(uint32_t entry)
    {
        switch (entry)
        {
        case 0x001520E0u:
            return "renderListProducer";
        case 0x001521D0u:
            return "renderListItemInit";
        case 0x00155FE0u:
            return "frontendStateDispatch";
        case 0x00156380u:
            return "frontendStateSet";
        case 0x002099D0u:
            return "frontendStateSetThunk";
        case 0x002FD760u:
            return "frontendStateRoot";
        case 0x002FDA90u:
            return "frontendStateTitleGate";
        case 0x002FDD60u:
            return "frontendStateLoadGate";
        case 0x002FDFA0u:
            return "frontendStateStart";
        case 0x002FDFF0u:
            return "frontendStateStartNext";
        case 0x002FE060u:
            return "frontendSelectStateA";
        case 0x002FE0D0u:
            return "frontendSelectStateB";
        case 0x002FE1B0u:
            return "frontendSelectStateC";
        case 0x002FE270u:
            return "frontendSelectStateD";
        case 0x002FEA80u:
            return "frontendSelectStateE";
        case 0x002FF050u:
            return "frontendMenuRoot";
        case 0x002FFF50u:
            return "frontendMenuStateA";
        case 0x00300000u:
            return "frontendMenuStateB";
        case 0x00324E30u:
            return "objectRenderProducer";
        default:
            return "frontendTrace";
        }
    }

    void logKofxiFrontendStateTrace(
        uint32_t index,
        const char *phase,
        const char *name,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3)
    {
        constexpr uint32_t kFrontendStateStruct = 0x0092F780u;
        constexpr uint32_t kFrontendStatePtr = 0x0092F788u;
        constexpr uint32_t kObjectBucketBase = 0x009AFFD0u;
        constexpr uint32_t kObjectFreeCount = 0x009B07D0u;
        constexpr uint32_t kObjectRenderQueueCount = 0x01D11530u;
        constexpr uint32_t kObjectRenderQueueBase = 0x01D11540u;
        constexpr uint32_t kRenderSubmitCount = 0x01DA29E0u;
        constexpr uint32_t kRenderListCount = 0x0092F0F8u;
        constexpr uint32_t kRenderListProcessed = 0x0092F0F0u;
        constexpr uint32_t kRenderListBase = 0x0092EFF0u;
        constexpr uint32_t kFrontendDataRoot = 0x01CB0C50u;
        constexpr uint32_t kFrontendGlobalA = 0x01DFBE80u;
        constexpr uint32_t kFrontendGlobalB = 0x01DFBE84u;
        constexpr uint32_t kFrontendGlobalMode = 0x009F9780u;
        constexpr uint32_t kInputAButtons = 0x009BEA22u;
        constexpr uint32_t kInputBButtons = 0x009BEA2Eu;

        const uint32_t currentState = readGuestU32OrZero(rdram, kFrontendStatePtr);
        const uint32_t objectBuckets = countKofxiObjectBuckets(rdram);
        const uint32_t objectQueueCount = readGuestU16OrZero(rdram, kObjectRenderQueueCount);
        const uint32_t renderSubmitCount = readGuestU32OrZero(rdram, kRenderSubmitCount);
        const uint32_t renderListCount = readGuestU32OrZero(rdram, kRenderListCount);

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:frontend-state] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " v=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 3) : 0u)
                  << " state=0x" << currentState
                  << " stateStruct=0x" << readGuestU32OrZero(rdram, kFrontendStateStruct)
                  << "/0x" << readGuestU32OrZero(rdram, kFrontendStateStruct + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, kFrontendStateStruct + 8u)
                  << "/0x" << readGuestU32OrZero(rdram, kFrontendStateStruct + 12u)
                  << " feData=0x" << readGuestU32OrZero(rdram, kFrontendDataRoot)
                  << " feGlobals=0x" << readGuestU32OrZero(rdram, kFrontendGlobalA)
                  << "/0x" << readGuestU32OrZero(rdram, kFrontendGlobalB)
                  << "/0x" << readGuestU16OrZero(rdram, 0x01DFBE90u)
                  << " mode=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kFrontendGlobalMode))
                  << " input=0x" << readGuestU32OrZero(rdram, 0x009BEA20u)
                  << "/0x" << readGuestU16OrZero(rdram, kInputAButtons)
                  << "/0x" << readGuestU32OrZero(rdram, 0x009BEA2Cu)
                  << "/0x" << readGuestU16OrZero(rdram, kInputBButtons)
                  << " objects=0x" << objectBuckets
                  << " free=0x" << readGuestU16OrZero(rdram, kObjectFreeCount)
                  << " bucket0=0x" << readGuestU32OrZero(rdram, kObjectBucketBase)
                  << "/0x" << readGuestU32OrZero(rdram, kObjectBucketBase + 4u)
                  << " objectQueue=0x" << objectQueueCount
                  << "/0x" << readGuestU32OrZero(rdram, kObjectRenderQueueBase)
                  << " render=0x" << renderSubmitCount
                  << "/0x" << renderListCount
                  << "/0x" << readGuestU32OrZero(rdram, kRenderListProcessed)
                  << "/0x" << readGuestU32OrZero(rdram, kRenderListBase);

        if (a0 != 0u)
        {
            std::cerr << " a0w=0x" << readGuestU32OrZero(rdram, a0)
                      << "/0x" << readGuestU32OrZero(rdram, a0 + 4u)
                      << "/0x" << readGuestU32OrZero(rdram, a0 + 8u)
                      << "/0x" << readGuestU32OrZero(rdram, a0 + 0xCu);
        }
        if (a1 != 0u)
        {
            const std::string text = readGuestCString(rdram, a1, 48u);
            if (!text.empty())
            {
                std::cerr << " a1str=\"" << text << "\"";
            }
        }

        std::cerr << std::dec << std::endl;
    }

    void maybeApplyKofxiFrontendAutoStartCompat(uint8_t *rdram, uint32_t entryPc)
    {
        constexpr uint32_t kFrontendLoadGate = 0x002FDD60u;
        constexpr uint32_t kFrontendStatePtr = 0x0092F788u;
        constexpr uint32_t kInputAButtons = 0x009BEA22u;
        constexpr uint32_t kInputBButtons = 0x009BEA2Eu;

        if (!kofxiFrontendAutoStartCompatEnabled() ||
            !rdram ||
            entryPc != kFrontendLoadGate ||
            readGuestU32OrZero(rdram, kFrontendStatePtr) != kFrontendLoadGate)
        {
            return;
        }

        static std::atomic<uint32_t> s_autoStartPulses{0u};
        const uint32_t pulseIndex = s_autoStartPulses.fetch_add(1u, std::memory_order_relaxed);
        if (pulseIndex >= kofxiFrontendAutoStartFrames())
        {
            return;
        }

        const uint16_t inputA = readGuestU16OrZero(rdram, kInputAButtons);
        const uint16_t inputB = readGuestU16OrZero(rdram, kInputBButtons);
        const uint16_t pulseMask = kofxiFrontendAutoStartMask();
        writeGuestU16(rdram, kInputAButtons, static_cast<uint16_t>(inputA | pulseMask));
        writeGuestU16(rdram, kInputBButtons, static_cast<uint16_t>(inputB | pulseMask));

        if (traceKofxiFrontendStateEnabled())
        {
            std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
            std::cerr << "[KOFXI:frontend-auto-start] pulse=" << std::dec << pulseIndex
                      << " entry=0x" << std::hex << entryPc
                      << " mask=0x" << pulseMask
                      << " inputA=0x" << inputA << "->0x" << static_cast<uint16_t>(inputA | pulseMask)
                      << " inputB=0x" << inputB << "->0x" << static_cast<uint16_t>(inputB | pulseMask)
                      << std::dec << std::endl;
        }
    }

    void kofxiTraceFrontendState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t entryPc = ctx->pc;
        auto it = g_kofxiFrontendTraceFns.find(entryPc);
        PS2Runtime::RecompiledFunction original = (it != g_kofxiFrontendTraceFns.end()) ? it->second : nullptr;
        if (!original && runtime && runtime->hasFunction(entryPc))
        {
            original = runtime->lookupFunction(entryPc);
        }

        if (!original || original == &kofxiTraceFrontendState)
        {
            return;
        }

        if (!rdram)
        {
            original(rdram, ctx, runtime);
            return;
        }

        static std::atomic<uint32_t> s_frontendStateLogs{0u};
        const bool trace = traceKofxiFrontendStateEnabled();
        const uint32_t index = trace ? s_frontendStateLogs.fetch_add(1u, std::memory_order_relaxed) : 0u;
        const bool shouldLog = trace && index < kofxiFrontendStateTraceLimit();
        const char *name = kofxiFrontendTraceName(entryPc);
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);

        maybeApplyKofxiFrontendAutoStartCompat(rdram, entryPc);

        if (shouldLog)
        {
            logKofxiFrontendStateTrace(
                index,
                "enter",
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3);
        }

        original(rdram, ctx, runtime);

        if (shouldLog)
        {
            logKofxiFrontendStateTrace(
                index,
                "leave",
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3);
        }
    }

    void registerKofxiFrontendTrace(PS2Runtime &runtime, uint32_t entry)
    {
        if (!runtime.hasFunction(entry))
        {
            return;
        }

        PS2Runtime::RecompiledFunction original = runtime.lookupFunction(entry);
        if (!original || original == &kofxiTraceFrontendState)
        {
            return;
        }

        g_kofxiFrontendTraceFns[entry] = original;
        runtime.registerFunction(entry, &kofxiTraceFrontendState);
    }

    void logKofxiFrontendDemoTimerTrace(
        const char *phase,
        uint32_t index,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3)
    {
        constexpr uint32_t kFrontendStateStruct = 0x0092F780u;
        constexpr uint32_t kFrontendStatePtr = 0x0092F788u;
        constexpr uint32_t kObjectBucketBase = 0x009AFFD0u;
        constexpr uint32_t kObjectRenderQueueCount = 0x01D11530u;
        constexpr uint32_t kRenderSubmitCount = 0x01DA29E0u;
        constexpr uint32_t kRenderListCount = 0x0092F0F8u;
        constexpr uint32_t kRenderListProcessed = 0x0092F0F0u;
        constexpr uint32_t kDemoAdvanceGate = 0x009CA220u;
        constexpr uint32_t kDemoTimerCounter = 0x009CA228u;
        constexpr uint32_t kDemoTimerIncrementFlag = 0x009CB578u;

        const uint32_t bucket0 = readGuestU32OrZero(rdram, kObjectBucketBase);
        const uint32_t payload = bucket0 != 0u ? readGuestU32OrZero(rdram, bucket0 + 0x10u) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:frontend-demo-timer] #" << std::dec << index
                  << " " << (phase ? phase : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " v=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 3) : 0u)
                  << " state=0x" << readGuestU32OrZero(rdram, kFrontendStatePtr)
                  << " stateStruct=0x" << readGuestU32OrZero(rdram, kFrontendStateStruct)
                  << "/0x" << readGuestU32OrZero(rdram, kFrontendStateStruct + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, kFrontendStateStruct + 8u)
                  << "/0x" << readGuestU32OrZero(rdram, kFrontendStateStruct + 12u)
                  << " demo=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kDemoAdvanceGate))
                  << "/0x" << readGuestU32OrZero(rdram, kDemoTimerCounter)
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kDemoTimerIncrementFlag))
                  << " objects=0x" << countKofxiObjectBuckets(rdram)
                  << " bucket0=0x" << bucket0
                  << "/0x" << readGuestU32OrZero(rdram, kObjectBucketBase + 4u)
                  << " render=0x" << readGuestU32OrZero(rdram, kRenderSubmitCount)
                  << "/0x" << readGuestU32OrZero(rdram, kRenderListCount)
                  << "/0x" << readGuestU32OrZero(rdram, kRenderListProcessed)
                  << " objectQueue=0x" << readGuestU16OrZero(rdram, kObjectRenderQueueCount);

        if (bucket0 != 0u)
        {
            std::cerr << " objCb=0x" << readGuestU32OrZero(rdram, bucket0 + 0x08u)
                      << " objName='" << readGuestCString(rdram, bucket0 + 0x22u, 16u) << "'"
                      << " payload=0x" << payload;
            if (payload != 0u)
            {
                std::cerr << " payloadW=0x" << readGuestU32OrZero(rdram, payload)
                          << "/0x" << readGuestU32OrZero(rdram, payload + 0x04u)
                          << "/0x" << readGuestU32OrZero(rdram, payload + 0x08u)
                          << "/0x" << readGuestU32OrZero(rdram, payload + 0x0Cu)
                          << " payloadReady=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, payload + 0x44u))
                          << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, payload + 0x45u))
                          << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, payload + 0x46u));
            }
        }

        std::cerr << std::dec << std::endl;
    }

    bool maybeFastForwardKofxiFrontendDemoTimer(uint8_t *rdram, R5900Context *ctx, uint32_t entryPc)
    {
        constexpr uint32_t kFrontendStatePtr = 0x0092F788u;
        constexpr uint32_t kFrontendDemoState = 0x0017BBD0u;
        constexpr uint32_t kObjectBucketBase = 0x009AFFD0u;
        constexpr uint32_t kDemoTimerCounter = 0x009CA228u;
        constexpr uint32_t kDemoTimerIncrementFlag = 0x009CB578u;

        if (!kofxiFrontendDemoTimerFastForwardCompatEnabled() ||
            !rdram ||
            !ctx ||
            entryPc != kFrontendDemoState ||
            readGuestU32OrZero(rdram, kFrontendStatePtr) != kFrontendDemoState)
        {
            return false;
        }

        const uint32_t target = kofxiFrontendDemoTimerFastForwardValue();
        const uint32_t counter = readGuestU32OrZero(rdram, kDemoTimerCounter);
        const uint32_t bucket0 = readGuestU32OrZero(rdram, kObjectBucketBase);
        const uint32_t objectBuckets = countKofxiObjectBuckets(rdram);
        if (counter >= target || target == 0u || bucket0 == 0u || objectBuckets == 0u)
        {
            return false;
        }

        (void)writeGuestU32(rdram, kDemoTimerCounter, target);
        (void)writeGuestU8(rdram, kDemoTimerIncrementFlag, 1u);

        if (traceKofxiFrontendDemoTimerFastForwardCompatEnabled())
        {
            static std::atomic<uint32_t> s_frontendDemoTimerCompatLogs{0u};
            const uint32_t index = s_frontendDemoTimerCompatLogs.fetch_add(1u, std::memory_order_relaxed);
            if (index < 32u)
            {
                std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
                std::cerr << "[KOFXI:frontend-demo-timer-fast-forward-compat] #" << std::dec << index
                          << " entry=0x" << std::hex << entryPc
                          << " pc=0x" << (ctx ? ctx->pc : 0u)
                          << " counter=0x" << counter << "->0x" << target
                          << " incFlag=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kDemoTimerIncrementFlag))
                          << " objects=0x" << objectBuckets
                          << " bucket0=0x" << bucket0
                          << std::dec << std::endl;
            }
        }

        return true;
    }

    void kofxiTraceFrontendDemoTimer(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t entryPc = ctx->pc;
        PS2Runtime::RecompiledFunction original = g_kofxiFrontendDemoTimerFn;
        if (!original && runtime && runtime->hasFunction(entryPc))
        {
            original = runtime->lookupFunction(entryPc);
        }

        if (!original || original == &kofxiTraceFrontendDemoTimer)
        {
            return;
        }

        if (!rdram)
        {
            original(rdram, ctx, runtime);
            return;
        }

        static std::atomic<uint32_t> s_frontendDemoTimerLogs{0u};
        const bool trace = traceKofxiFrontendDemoTimerEnabled();
        const uint32_t index = trace ? s_frontendDemoTimerLogs.fetch_add(1u, std::memory_order_relaxed) : 0u;
        const bool shouldLog = trace && index < kofxiFrontendDemoTimerTraceLimit();
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);

        if (shouldLog)
        {
            logKofxiFrontendDemoTimerTrace("enter", index, rdram, ctx, entryPc, callRa, callSp, a0, a1, a2, a3);
        }

        (void)maybeFastForwardKofxiFrontendDemoTimer(rdram, ctx, entryPc);
        original(rdram, ctx, runtime);

        if (shouldLog)
        {
            logKofxiFrontendDemoTimerTrace("leave", index, rdram, ctx, entryPc, callRa, callSp, a0, a1, a2, a3);
        }
    }

    void appendKofxiMainLoopGlobals(std::ostream &out, uint8_t *rdram)
    {
        const std::ios::fmtflags originalFlags = out.flags();
        const char originalFill = out.fill();
        out << std::hex;

        out << " main=0x" << readGuestU32OrZero(rdram, 0x009BDA70u)
            << "/0x" << readGuestU32OrZero(rdram, 0x009BDA28u)
            << " loop=0x" << readGuestU32OrZero(rdram, 0x009BE498u)
            << "/0x" << readGuestU32OrZero(rdram, 0x009BE680u)
            << " flags=0x" << readGuestU32OrZero(rdram, 0x009BE470u)
            << "/0x" << readGuestU32OrZero(rdram, 0x009BE490u)
            << " gates=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, 0x009E9738u))
            << "/0x" << readGuestU32OrZero(rdram, 0x009E9478u)
            << "/0x" << readGuestU32OrZero(rdram, 0x009E9728u)
            << "/0x" << readGuestU32OrZero(rdram, 0x009E9768u)
            << "/0x" << readGuestU32OrZero(rdram, 0x009E9778u)
            << " render=0x" << readGuestU32OrZero(rdram, 0x01DA29E0u)
            << "/0x" << readGuestU32OrZero(rdram, 0x0092F0F8u)
            << "/0x" << readGuestU32OrZero(rdram, 0x0092F0F0u)
            << "/0x" << readGuestU32OrZero(rdram, 0x0092EFF0u);

        out << " slots=";
        for (uint32_t slot = 0; slot < 2u; ++slot)
        {
            if (slot != 0u)
            {
                out << ",";
            }

            const uint32_t wordOffset = slot * sizeof(uint32_t);
            const uint32_t mainStruct = 0x009BE8C0u + slot * 0xA0u;
            out << slot
                << ":p=0x" << readGuestU32OrZero(rdram, 0x009BEA38u + wordOffset)
                << " st=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, 0x009BEA10u + wordOffset))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, 0x009BEA18u + wordOffset))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, 0x009BEA08u + wordOffset))
                << " w=0x" << readGuestU32OrZero(rdram, 0x009BEA00u + wordOffset)
                << "/0x" << readGuestU32OrZero(rdram, 0x009BEA20u + wordOffset)
                << " obj=0x" << readGuestU32OrZero(rdram, mainStruct)
                << "/0x" << readGuestU32OrZero(rdram, mainStruct + 0x04u)
                << "/0x" << readGuestU32OrZero(rdram, mainStruct + 0x20u)
                << "/0x" << readGuestU32OrZero(rdram, mainStruct + 0x24u);
        }

        out.flags(originalFlags);
        out.fill(originalFill);
    }

    const char *kofxiFrontendBootstrapTraceName(uint32_t entry)
    {
        switch (entry)
        {
        case 0x00307350u:
            return "bootstrapFadeTick";
        case 0x003076D0u:
            return "bootstrapUploadTiles";
        case 0x00307800u:
            return "bootstrapSetFade";
        case 0x00307870u:
            return "bootstrapBody";
        case 0x003079C0u:
            return "bootstrapState";
        case 0x003079D4u:
            return "bootstrapPostBody";
        case 0x003079ECu:
            return "bootstrapReturn";
        case 0x00307948u:
            return "bootstrapSyncSpin";
        default:
            return "bootstrapResume";
        }
    }

    void logKofxiFrontendBootstrapTrace(
        uint32_t index,
        const char *phase,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3)
    {
        constexpr uint32_t kFrontendStateStruct = 0x0092F780u;
        constexpr uint32_t kFrontendStatePtr = 0x0092F788u;
        constexpr uint32_t kBootstrapFadeByte = 0x01D11D48u;
        constexpr uint32_t kBootstrapTileBase = 0x01D11D50u;
        constexpr uint32_t kBootstrapIndex = 0x01D11DB0u;
        constexpr uint32_t kBootstrapBuffer = 0x01D11DB8u;
        constexpr uint32_t kBootstrapSource = 0x009BE688u;
        constexpr uint32_t kFrontendScratch = 0x009F9728u;
        constexpr uint32_t kFrontendMode = 0x009F9780u;
        constexpr uint32_t kObjectBucketBase = 0x009AFFD0u;
        constexpr uint32_t kObjectRenderQueueCount = 0x01D11530u;
        constexpr uint32_t kObjectRenderQueueBase = 0x01D11540u;
        constexpr uint32_t kRenderSubmitCount = 0x01DA29E0u;
        constexpr uint32_t kRenderListCount = 0x0092F0F8u;
        constexpr uint32_t kRenderListProcessed = 0x0092F0F0u;
        constexpr uint32_t kRenderListBase = 0x0092EFF0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:frontend-bootstrap] #" << index
                  << " " << (phase ? phase : "")
                  << " " << kofxiFrontendBootstrapTraceName(entryPc)
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " v=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 3) : 0u)
                  << " s=0x" << (ctx ? getRegU32(ctx, 16) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 17) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 18) : 0u)
                  << " state=0x" << readGuestU32OrZero(rdram, kFrontendStatePtr)
                  << " stateStruct=0x" << readGuestU32OrZero(rdram, kFrontendStateStruct)
                  << "/0x" << readGuestU32OrZero(rdram, kFrontendStateStruct + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, kFrontendStateStruct + 8u)
                  << "/0x" << readGuestU32OrZero(rdram, kFrontendStateStruct + 12u)
                  << " boot=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kBootstrapFadeByte))
                  << "/0x" << readGuestU16OrZero(rdram, kBootstrapIndex)
                  << "/0x" << readGuestU32OrZero(rdram, kBootstrapBuffer)
                  << "/0x" << readGuestU32OrZero(rdram, kBootstrapSource)
                  << " front=0x" << readGuestU32OrZero(rdram, kFrontendScratch)
                  << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, kFrontendMode))
                  << " objects=0x" << countKofxiObjectBuckets(rdram)
                  << " bucket0=0x" << readGuestU32OrZero(rdram, kObjectBucketBase)
                  << "/0x" << readGuestU32OrZero(rdram, kObjectBucketBase + 4u)
                  << " objectQueue=0x" << readGuestU16OrZero(rdram, kObjectRenderQueueCount)
                  << "/0x" << readGuestU32OrZero(rdram, kObjectRenderQueueBase)
                  << " render=0x" << readGuestU32OrZero(rdram, kRenderSubmitCount)
                  << "/0x" << readGuestU32OrZero(rdram, kRenderListCount)
                  << "/0x" << readGuestU32OrZero(rdram, kRenderListProcessed)
                  << "/0x" << readGuestU32OrZero(rdram, kRenderListBase);

        appendKofxiMainLoopGlobals(std::cerr, rdram);

        if (a0 != 0u)
        {
            std::cerr << " a0w=";
            appendGuestWords(std::cerr, rdram, a0, 4u);
        }
        if (a1 != 0u)
        {
            std::cerr << " a1w=";
            appendGuestWords(std::cerr, rdram, a1, 4u);
        }
        std::cerr << " bootTiles=";
        appendGuestWords(std::cerr, rdram, kBootstrapTileBase, 6u);
        std::cerr << std::dec << std::endl;
    }

    bool maybeFastForwardKofxiFrontendBootstrap(
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime,
        uint32_t entryPc,
        uint32_t originalA0);

    void kofxiTraceFrontendBootstrap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!ctx)
        {
            return;
        }

        const uint32_t entryPc = ctx->pc;
        auto it = g_kofxiFrontendBootstrapTraceFns.find(entryPc);
        PS2Runtime::RecompiledFunction original = (it != g_kofxiFrontendBootstrapTraceFns.end()) ? it->second : nullptr;
        if (!original && runtime && runtime->hasFunction(entryPc))
        {
            original = runtime->lookupFunction(entryPc);
        }

        if (!original || original == &kofxiTraceFrontendBootstrap)
        {
            return;
        }

        if (!rdram)
        {
            original(rdram, ctx, runtime);
            return;
        }

        static std::atomic<uint32_t> s_frontendBootstrapLogs{0u};
        const uint32_t index = s_frontendBootstrapLogs.fetch_add(1u, std::memory_order_relaxed);
        static std::atomic<uint32_t> s_frontendBootstrapEmittedLogs{0u};
        const uint32_t stride = kofxiFrontendBootstrapTraceStride();
        const bool keyEntry = entryPc == 0x003079C0u || entryPc == 0x003079D4u || entryPc == 0x00307948u;
        const bool sampled = keyEntry || stride <= 1u || (index % stride) == 0u;
        const uint32_t emitIndex = sampled
                                       ? s_frontendBootstrapEmittedLogs.fetch_add(1u, std::memory_order_relaxed)
                                       : kofxiFrontendBootstrapTraceLimit();
        const bool shouldLog = sampled && emitIndex < kofxiFrontendBootstrapTraceLimit();
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);

        if (shouldLog)
        {
            logKofxiFrontendBootstrapTrace(index, "enter", rdram, ctx, entryPc, callRa, callSp, a0, a1, a2, a3);
        }

        original(rdram, ctx, runtime);
        (void)maybeFastForwardKofxiFrontendBootstrap(rdram, ctx, runtime, entryPc, a0);

        if (shouldLog)
        {
            logKofxiFrontendBootstrapTrace(index, "leave", rdram, ctx, entryPc, callRa, callSp, a0, a1, a2, a3);
        }
    }

    bool isKofxiFrontendBootstrapInnerPc(uint32_t pc)
    {
        return pc >= 0x00307870u && pc < 0x003079D4u;
    }

    void logKofxiFrontendBootstrapFastForwardCompat(
        const char *phase,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t beforePc,
        uint32_t innerSp,
        uint32_t savedRa,
        uint32_t frontObject,
        uint32_t statePtr)
    {
        if (!traceKofxiFrontendBootstrapFastForwardCompatEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_frontendBootstrapFastForwardLogs{0u};
        const uint32_t index = s_frontendBootstrapFastForwardLogs.fetch_add(1u, std::memory_order_relaxed);
        if (index >= 64u)
        {
            return;
        }

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:frontend-bootstrap-fast-forward-compat] #" << index
                  << " " << (phase ? phase : "")
                  << " beforePc=0x" << std::hex << beforePc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                  << " sp=0x" << (ctx ? getRegU32(ctx, 29) : 0u)
                  << " innerSp=0x" << innerSp
                  << " savedRa=0x" << savedRa
                  << " frontObject=0x" << frontObject
                  << " state=0x" << readGuestU32OrZero(rdram, 0x0092F788u)
                  << " stateStruct=0x" << readGuestU32OrZero(rdram, statePtr)
                  << "/0x" << readGuestU32OrZero(rdram, statePtr + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, statePtr + 8u)
                  << "/0x" << readGuestU32OrZero(rdram, statePtr + 12u)
                  << " boot=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, 0x01D11D48u))
                  << "/0x" << readGuestU16OrZero(rdram, 0x01D11DB0u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x01D11DB8u)
                  << " render=0x" << readGuestU32OrZero(rdram, 0x01DA29E0u)
                  << "/0x" << readGuestU32OrZero(rdram, 0x0092F0F8u)
                  << "/0x" << readGuestU16OrZero(rdram, 0x01D11530u)
                  << std::dec << std::endl;
    }

    bool maybeFastForwardKofxiFrontendBootstrap(
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime,
        uint32_t entryPc,
        uint32_t originalA0)
    {
        if (!kofxiFrontendBootstrapFastForwardCompatEnabled() ||
            !rdram ||
            !ctx ||
            !runtime ||
            entryPc != 0x003079C0u ||
            !isKofxiFrontendBootstrapInnerPc(ctx->pc))
        {
            return false;
        }

        constexpr uint32_t kFrontendStatePtr = 0x0092F788u;
        constexpr uint32_t kFrontendBootstrapState = 0x003079C0u;
        constexpr uint32_t kBootstrapInnerReturnPc = 0x003079D4u;
        constexpr uint32_t kFrontendNextCallback = 0x00163B80u;
        const uint32_t statePtr = originalA0 != 0u ? originalA0 : 0x0092F780u;
        if (readGuestU32OrZero(rdram, kFrontendStatePtr) != kFrontendBootstrapState)
        {
            return false;
        }

        const uint32_t innerSp = getRegU32(ctx, 29);
        const uint32_t savedRa = readGuestU32OrZero(rdram, innerSp + 0x20u);
        if (savedRa != kBootstrapInnerReturnPc)
        {
            return false;
        }

        const uint32_t frontObject = readGuestU32OrZero(rdram, 0x01D11DB8u);
        logKofxiFrontendBootstrapFastForwardCompat(
            "before",
            rdram,
            ctx,
            entryPc,
            innerSp,
            savedRa,
            frontObject,
            statePtr);

        SET_GPR_U32(ctx, 31, savedRa);
        SET_GPR_VEC(ctx, 17, READ128(innerSp + 0x10u));
        SET_GPR_VEC(ctx, 16, READ128(innerSp));
        SET_GPR_S32(ctx, 29, static_cast<int32_t>(ADD32(innerSp, 0x30u)));
        ctx->pc = kBootstrapInnerReturnPc;

        (void)writeGuestU8(rdram, 0x01D11D48u, 0u);
        (void)writeGuestU32(rdram, 0x009F9728u, 0u);
        if (statePtr != 0u)
        {
            (void)writeGuestU32(rdram, statePtr + 0x08u, kFrontendNextCallback);
        }

        logKofxiFrontendBootstrapFastForwardCompat(
            "after",
            rdram,
            ctx,
            entryPc,
            innerSp,
            savedRa,
            frontObject,
            statePtr);
        return true;
    }

    void registerKofxiFrontendBootstrapTrace(PS2Runtime &runtime, uint32_t entry)
    {
        if (!runtime.hasFunction(entry))
        {
            return;
        }

        PS2Runtime::RecompiledFunction original = runtime.lookupFunction(entry);
        if (!original || original == &kofxiTraceFrontendBootstrap)
        {
            return;
        }

        g_kofxiFrontendBootstrapTraceFns[entry] = original;
        runtime.registerFunction(entry, &kofxiTraceFrontendBootstrap);
    }

    uint32_t kofxiMainTaskEntryAddress(uint32_t slot, uint32_t subtask)
    {
        constexpr uint32_t kTaskBase = 0x0040DB50u;
        return kTaskBase + slot * 0x70u + subtask * 0x1Cu;
    }

    uint32_t kofxiMainTaskObjectFor(uint8_t *rdram, uint32_t slot, uint32_t subtask)
    {
        const uint32_t entry = kofxiMainTaskEntryAddress(slot, subtask);
        return readGuestU32OrZero(rdram, entry);
    }

    uint32_t kofxiMainTaskEntryFromArgs(uint8_t *rdram, uint32_t a0, uint32_t a1)
    {
        if (a0 >= 8u || a1 >= 4u)
        {
            return 0u;
        }
        const uint32_t entry = kofxiMainTaskEntryAddress(a0, a1);
        return readGuestU32OrZero(rdram, entry + 0x10u) ? entry : 0u;
    }

    void appendKofxiMainTaskObjectSummary(std::ostream &out, uint8_t *rdram, uint32_t object)
    {
        if (object == 0u)
        {
            out << " obj=0";
            return;
        }

        out << " obj=0x" << object
            << " o58/d8=0x" << readGuestU32OrZero(rdram, object + 0x58u)
            << "/0x" << readGuestU32OrZero(rdram, object + 0xD8u);

        for (uint32_t bank = 0u; bank < 2u; ++bank)
        {
            const uint32_t base = object + bank * 0x80u;
            out << " b" << bank
                << "=0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, base + 0x64u))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, base + 0x65u))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, base + 0x68u))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, base + 0x69u))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, base + 0x6Au))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, base + 0x70u))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, base + 0x71u))
                << "/0x" << static_cast<uint32_t>(readGuestU8OrZero(rdram, base + 0x72u))
                << " q0=0x" << readGuestU16OrZero(rdram, base + 0x50u)
                << "/0x" << readGuestU16OrZero(rdram, base + 0x52u)
                << "/0x" << readGuestU16OrZero(rdram, base + 0x54u)
                << "/0x" << readGuestU16OrZero(rdram, base + 0x56u);
        }
    }

    void appendKofxiMainTaskTableSummary(std::ostream &out, uint8_t *rdram)
    {
        if (!traceKofxiMainTaskTableEnabled() && !traceKofxiResourceCompletionEnabled())
        {
            return;
        }

        const std::ios::fmtflags originalFlags = out.flags();
        const char originalFill = out.fill();
        out << std::hex << " mainTasks=";
        for (uint32_t slot = 0u; slot < 2u; ++slot)
        {
            if (slot != 0u)
            {
                out << ",";
            }
            out << slot << ":";
            for (uint32_t subtask = 0u; subtask < 2u; ++subtask)
            {
                if (subtask != 0u)
                {
                    out << "|";
                }
                const uint32_t entry = kofxiMainTaskEntryAddress(slot, subtask);
                const uint32_t object = readGuestU32OrZero(rdram, entry);
                out << subtask
                    << "[w=0x" << readGuestU32OrZero(rdram, entry + 0x10u)
                    << ",a=0x" << readGuestU32OrZero(rdram, entry + 0x14u)
                    << ",o=0x" << object
                    << ",s=0x" << (object ? static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x70u)) : 0u)
                    << "/0x" << (object ? static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x71u)) : 0u)
                    << "/0x" << (object ? static_cast<uint32_t>(readGuestU8OrZero(rdram, object + 0x72u)) : 0u)
                    << "]";
            }
        }
        out.flags(originalFlags);
        out.fill(originalFill);
    }

    void logKofxiMainTaskTableTrace(
        const char *phase,
        const char *name,
        uint32_t entry,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3)
    {
        if (!traceKofxiMainTaskTableEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_mainTaskTableLogs{0u};
        const uint32_t index = s_mainTaskTableLogs.fetch_add(1u, std::memory_order_relaxed);
        if (index >= kofxiMainTaskTableTraceLimit())
        {
            return;
        }

        const uint32_t tableEntry = kofxiMainTaskEntryFromArgs(rdram, a0, a1);
        const uint32_t objectFromEntry = tableEntry ? readGuestU32OrZero(rdram, tableEntry) : 0u;
        const uint32_t objectFromA0 = readGuestU32OrZero(rdram, a0);
        const uint32_t object = objectFromEntry ? objectFromEntry : (objectFromA0 ? objectFromA0 : a0);

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:main-task-table] #" << index
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entry
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " v=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 3) : 0u)
                  << " tableEntry=0x" << tableEntry
                  << " ew=0x" << (tableEntry ? readGuestU32OrZero(rdram, tableEntry + 0x10u) : 0u)
                  << " e14=0x" << (tableEntry ? readGuestU32OrZero(rdram, tableEntry + 0x14u) : 0u);
        appendKofxiMainTaskObjectSummary(std::cerr, rdram, object);
        appendKofxiMainTaskTableSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    void runKofxiMainTaskTableTraceCall(
        const char *name,
        uint32_t entry,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!original)
        {
            return;
        }

        if (!rdram || !ctx)
        {
            original(rdram, ctx, runtime);
            return;
        }

        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);
        logKofxiMainTaskTableTrace("enter", name, entry, rdram, ctx, callRa, callSp, a0, a1, a2, a3);
        original(rdram, ctx, runtime);
        logKofxiMainTaskTableTrace("leave", name, entry, rdram, ctx, callRa, callSp, a0, a1, a2, a3);
    }

    void kofxiTraceMainTaskSnapshot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiMainTaskTableTraceCall("mainTaskSnapshot", 0x0011D1C8u, g_kofxiMainTaskSnapshotFn, rdram, ctx, runtime);
    }

    void kofxiTraceMainTaskStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiMainTaskTableTraceCall("mainTaskStatus", 0x0011D3F0u, g_kofxiMainTaskStatusFn, rdram, ctx, runtime);
    }

    void kofxiTraceMainTaskSetState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiMainTaskTableTraceCall("mainTaskSetState", 0x0011D4A0u, g_kofxiMainTaskSetStateFn, rdram, ctx, runtime);
    }

    void kofxiTraceMainTaskCondition(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiMainTaskTableTraceCall("mainTaskCondition", 0x0011D818u, g_kofxiMainTaskConditionFn, rdram, ctx, runtime);
    }

    void kofxiTraceMainTaskProgressCheck(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiMainTaskTableTraceCall("mainTaskProgressCheck", 0x0011D5E8u, g_kofxiMainTaskProgressCheckFn, rdram, ctx, runtime);
    }

    void kofxiTraceMainTaskRpcStart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiMainTaskTableTraceCall("mainTaskRpcStart", 0x0011D950u, g_kofxiMainTaskRpcStartFn, rdram, ctx, runtime);
    }

    void kofxiTraceMainTaskRpcCopyStart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiMainTaskTableTraceCall("mainTaskRpcCopyStart", 0x0011DAD0u, g_kofxiMainTaskRpcCopyStartFn, rdram, ctx, runtime);
    }

    void logKofxiMainLoopStateTrace(
        uint32_t logIndex,
        const char *phase,
        const char *name,
        uint8_t *rdram,
        R5900Context *ctx,
        uint32_t entryPc,
        uint32_t callRa,
        uint32_t callSp,
        uint32_t a0,
        uint32_t a1,
        uint32_t a2,
        uint32_t a3)
    {
        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:main-loop-state] #" << logIndex
                  << " " << (phase ? phase : "")
                  << " " << (name ? name : "")
                  << " entry=0x" << std::hex << entryPc
                  << " pc=0x" << (ctx ? ctx->pc : 0u)
                  << " ra=0x" << callRa
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " v=0x" << (ctx ? getRegU32(ctx, 2) : 0u)
                  << "/0x" << (ctx ? getRegU32(ctx, 3) : 0u);
        appendKofxiMainLoopGlobals(std::cerr, rdram);
        appendKofxiMainTaskTableSummary(std::cerr, rdram);
        std::cerr << std::dec << std::endl;
    }

    void runKofxiMainLoopStateTraceCall(
        const char *name,
        PS2Runtime::RecompiledFunction original,
        uint8_t *rdram,
        R5900Context *ctx,
        PS2Runtime *runtime)
    {
        if (!original)
        {
            return;
        }

        if (!rdram || !ctx)
        {
            original(rdram, ctx, runtime);
            return;
        }

        static std::atomic<uint32_t> s_mainLoopStateLogs{0u};
        const uint32_t logIndex = s_mainLoopStateLogs.fetch_add(1u, std::memory_order_relaxed);
        const bool shouldLog = logIndex < kofxiMainLoopStateTraceLimit();
        const uint32_t entryPc = ctx->pc;
        const uint32_t callRa = getRegU32(ctx, 31);
        const uint32_t callSp = getRegU32(ctx, 29);
        const uint32_t a0 = getRegU32(ctx, 4);
        const uint32_t a1 = getRegU32(ctx, 5);
        const uint32_t a2 = getRegU32(ctx, 6);
        const uint32_t a3 = getRegU32(ctx, 7);

        if (shouldLog)
        {
            logKofxiMainLoopStateTrace(
                logIndex,
                "enter",
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3);
        }

        original(rdram, ctx, runtime);

        if (shouldLog)
        {
            logKofxiMainLoopStateTrace(
                logIndex,
                "leave",
                name,
                rdram,
                ctx,
                entryPc,
                callRa,
                callSp,
                a0,
                a1,
                a2,
                a3);
        }
    }

    void kofxiTraceMainLoopState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiMainLoopStateTraceCall("mainLoop", g_kofxiMainLoopFn, rdram, ctx, runtime);
    }

    void kofxiTraceMainLoopGateState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiMainLoopStateTraceCall("mainGate", g_kofxiMainLoopGateFn, rdram, ctx, runtime);
    }

    void kofxiTraceMainLoopSlotsState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiMainLoopStateTraceCall("mainSlots", g_kofxiMainLoopSlotsFn, rdram, ctx, runtime);
    }

    void kofxiTraceFrameFrontendState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        runKofxiMainLoopStateTraceCall("frameFrontend", g_kofxiFrameFrontendFn, rdram, ctx, runtime);
    }

    void kofxiTraceStreamInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!g_kofxiStreamInitFn)
        {
            return;
        }

        const uint32_t entryPc = ctx ? ctx->pc : 0u;
        const uint32_t callRa = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t callSp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t mode = ctx ? getRegU32(ctx, 4) : 0u;

        g_kofxiStreamInitFn(rdram, ctx, runtime);

        if (!traceKofxiStreamInitEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_streamInitLogs{0u};
        const uint32_t logIndex = s_streamInitLogs.fetch_add(1u, std::memory_order_relaxed);
        if (logIndex >= 512u)
        {
            return;
        }

        constexpr uint32_t kStreamDebug = 0x00359DD0u;
        constexpr uint32_t kStreamCurrent = 0x00359DDCu;
        constexpr uint32_t kStreamSema = 0x00359DE8u;
        constexpr uint32_t kStreamInitResult = 0x00359DFCu;
        constexpr uint32_t kStreamResult = 0x00359E20u;
        constexpr uint32_t kStreamClient = 0x0035AF90u;
        constexpr uint32_t kStreamGateA = 0x003586A8u;
        constexpr uint32_t kStreamGateB = 0x003586B0u;

        const uint32_t result = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t pcAfter = ctx ? ctx->pc : 0u;
        const uint32_t raAfter = ctx ? getRegU32(ctx, 31) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:stream-init] #" << logIndex
                  << " entry=0x" << std::hex << entryPc
                  << " pcAfter=0x" << pcAfter
                  << " callRa=0x" << callRa
                  << " raAfter=0x" << raAfter
                  << " sp=0x" << callSp
                  << " mode=0x" << mode
                  << " ret=0x" << result
                  << " globals=0x" << readGuestU32OrZero(rdram, kStreamDebug)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamCurrent)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamSema)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamInitResult)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamResult)
                  << " gates=0x" << readGuestU32OrZero(rdram, kStreamGateA)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamGateB)
                  << " client=0x" << readGuestU32OrZero(rdram, kStreamClient)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 8u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x0Cu)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x10u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x14u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x18u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x1Cu)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x20u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x24u)
                  << std::dec << std::endl;
    }

    void kofxiTraceStreamWait(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!g_kofxiStreamWaitFn)
        {
            return;
        }

        const uint32_t entryPc = ctx ? ctx->pc : 0u;
        const uint32_t callRa = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t callSp = ctx ? getRegU32(ctx, 29) : 0u;
        const uint32_t a0 = ctx ? getRegU32(ctx, 4) : 0u;
        const uint32_t a1 = ctx ? getRegU32(ctx, 5) : 0u;
        const uint32_t a2 = ctx ? getRegU32(ctx, 6) : 0u;
        const uint32_t a3 = ctx ? getRegU32(ctx, 7) : 0u;

        g_kofxiStreamWaitFn(rdram, ctx, runtime);

        if (!traceKofxiStreamWaitEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_streamWaitLogs{0u};
        const uint32_t logIndex = s_streamWaitLogs.fetch_add(1u, std::memory_order_relaxed);
        if (logIndex >= 512u)
        {
            return;
        }

        constexpr uint32_t kStreamReq = 0x00359EC0u;
        constexpr uint32_t kStreamFlag = 0x00359DF8u;
        constexpr uint32_t kStreamBusy = 0x00359DF4u;
        constexpr uint32_t kStreamResult = 0x00359E20u;
        constexpr uint32_t kStreamClient = 0x0035AF90u;
        constexpr uint32_t kStreamDebug = 0x00359DD0u;
        constexpr uint32_t kStreamCurrent = 0x00359DDCu;
        constexpr uint32_t kStreamSema = 0x00359DE8u;
        constexpr uint32_t kStreamInitResult = 0x00359DFCu;
        constexpr uint32_t kStreamGateA = 0x003586A8u;
        constexpr uint32_t kStreamGateB = 0x003586B0u;

        const uint32_t result = ctx ? getRegU32(ctx, 2) : 0u;
        const uint32_t pcAfter = ctx ? ctx->pc : 0u;
        const uint32_t raAfter = ctx ? getRegU32(ctx, 31) : 0u;
        const uint32_t reqSlot = readGuestU32OrZero(rdram, kStreamReq);
        const uint32_t reqStatus = reqSlot ? readGuestU32OrZero(rdram, reqSlot + 0x10u) : 0u;

        std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
        std::cerr << "[KOFXI:stream-wait] #" << logIndex
                  << " entry=0x" << std::hex << entryPc
                  << " pcAfter=0x" << pcAfter
                  << " callRa=0x" << callRa
                  << " raAfter=0x" << raAfter
                  << " sp=0x" << callSp
                  << " a=0x" << a0 << "/0x" << a1 << "/0x" << a2 << "/0x" << a3
                  << " ret=0x" << result
                  << " out=0x" << readGuestU32OrZero(rdram, a3)
                  << "/0x" << readGuestU32OrZero(rdram, a3 + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, a3 + 8u)
                  << " req=0x" << reqSlot
                  << "/0x" << readGuestU32OrZero(rdram, kStreamReq + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamReq + 8u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamReq + 0x0Cu)
                  << " req10/14=0x" << readGuestU32OrZero(rdram, kStreamReq + 0x10u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamReq + 0x14u)
                  << " slot10=0x" << reqStatus
                  << " flag/busy/result=0x" << readGuestU32OrZero(rdram, kStreamFlag)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamBusy)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamResult)
                  << " init=0x" << readGuestU32OrZero(rdram, kStreamDebug)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamCurrent)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamSema)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamInitResult)
                  << " gates=0x" << readGuestU32OrZero(rdram, kStreamGateA)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamGateB)
                  << " client=0x" << readGuestU32OrZero(rdram, kStreamClient)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 8u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x0Cu)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x10u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x14u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x18u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x1Cu)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x20u)
                  << "/0x" << readGuestU32OrZero(rdram, kStreamClient + 0x24u)
                  << " a0w=0x" << readGuestU32OrZero(rdram, a0)
                  << "/0x" << readGuestU32OrZero(rdram, a0 + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, a0 + 8u)
                  << " a1w=0x" << readGuestU32OrZero(rdram, a1)
                  << "/0x" << readGuestU32OrZero(rdram, a1 + 4u)
                  << "/0x" << readGuestU32OrZero(rdram, a1 + 8u)
                  << std::dec << std::endl;
    }

}

namespace ps2_game_overrides
{
    AutoRegister::AutoRegister(const Descriptor &descriptor)
    {
        registerDescriptor(descriptor);
    }

    void registerDescriptor(const Descriptor &descriptor)
    {
        if (!descriptor.apply)
        {
            std::cerr << "[game_overrides] ignoring descriptor with null apply callback." << std::endl;
            return;
        }

        std::lock_guard<std::mutex> lock(registryMutex());
        descriptorRegistry().push_back(descriptor);
    }

    bool bindAddressHandler(PS2Runtime &runtime, uint32_t address, std::string_view handlerName)
    {
        const auto resolved = resolveHandlerByName(handlerName);
        if (!resolved.has_value())
        {
            std::cerr << "[game_overrides] unresolved handler '" << handlerName
                      << "' for address 0x" << std::hex << address << std::dec << std::endl;
            return false;
        }

        runtime.registerFunction(address, resolved.value());
        return true;
    }

    void applyMatching(PS2Runtime &runtime, const std::string &elfPath, uint32_t entry)
    {
        ps2_syscalls::clearSoundDriverCompatLayout();
        ps2_syscalls::clearDtxCompatLayout();
        ps2_stubs::clearMpegCompatLayout();

        std::vector<Descriptor> descriptors;
        {
            std::lock_guard<std::mutex> lock(registryMutex());
            descriptors = descriptorRegistry();
        }

        if (descriptors.empty())
        {
            return;
        }

        const std::string elfName = basenameFromPath(elfPath);
        uint32_t fileCrc32 = 0u;
        bool fileCrcComputed = false;
        bool fileCrcValid = false;

        size_t appliedCount = 0;
        for (const Descriptor &descriptor : descriptors)
        {
            if (!descriptor.apply)
            {
                continue;
            }

            if (descriptor.elfName && descriptor.elfName[0] != '\0')
            {
                if (!equalsIgnoreCaseAscii(descriptor.elfName, elfName))
                {
                    continue;
                }
            }

            if (descriptor.entry != 0u && descriptor.entry != entry)
            {
                continue;
            }

            if (descriptor.crc32 != 0u)
            {
                if (!fileCrcComputed)
                {
                    fileCrcComputed = true;
                    fileCrcValid = computeFileCrc32(elfPath, fileCrc32);
                    if (!fileCrcValid)
                    {
                        std::cerr << "[game_overrides] failed to compute CRC32 for '" << elfPath << "'" << std::endl;
                    }
                }

                if (!fileCrcValid || fileCrc32 != descriptor.crc32)
                {
                    continue;
                }
            }

            const char *name = (descriptor.name && descriptor.name[0] != '\0')
                                   ? descriptor.name
                                   : "unnamed";
            RUNTIME_LOG("[game_overrides] applying '" << name << "'");
            descriptor.apply(runtime);
            ++appliedCount;
        }

        if (appliedCount > 0)
        {
            RUNTIME_LOG("[game_overrides] applied " << appliedCount << " matching override(s).");
        }
    }
}

namespace
{
    void applyRecvxSoundDriverCompat(PS2Runtime &runtime)
    {
        (void)runtime;

        // Trying to explain a bit of Resident Evil Code: Veronica X sound-driver guest globals.
        // Update these guest addresses/callback PCs when porting the override to another build:
        // - checksum tables back the SE/MIDI status values mirrored through the snddrv RPC stubs
        // - busyFlagAddr is the guest-side "work in progress" word cleared on completion
        // - completion/clearBusy callbacks are guest PCs reached when async snddrv work finishes
        PS2SoundDriverCompatLayout layout{};
        layout.primarySeCheckAddr = 0x01E0EF10u;
        layout.primaryMidiCheckAddr = 0x01E0EF20u;
        layout.fallbackSeCheckAddr = 0x01E1EF10u;
        layout.fallbackMidiCheckAddr = 0x01E1EF20u;
        layout.busyFlagAddr = 0x01E212C8u;
        layout.completionCallbacks = {0x002EAC20u, 0x002EAC30u, 0x002FAC20u, 0x002FAC30u};
        layout.clearBusyCallbacks = {0x002EAC30u, 0x002FAC30u};
        ps2_syscalls::setSoundDriverCompatLayout(layout);
    }

    void applyRecvxDtxCompat(PS2Runtime &runtime)
    {
        (void)runtime;

        // Trying to explain abit of Resident Evil Code: Veronica X DTX guest layout.
        // Update these guest values when porting the middleware override to another build:
        // - rpcSid identifies the DTX RPC service the guest binds/registers
        // - urpc object/table addresses back the SJX/PS2RNA/SJRMT command tables
        // - dispatcherFuncAddr is the guest-side DTX RPC handler used for URPC dispatch
        PS2DtxCompatLayout layout{};
        layout.rpcSid = 0x7D000000u;
        layout.urpcObjBase = 0x01F18000u;
        layout.urpcObjLimit = 0x01F1FF00u;
        layout.urpcObjStride = 0x20u;
        layout.urpcFnTableBase = 0x0034FED0u;
        layout.urpcObjTableBase = 0x0034FFD0u;
        layout.dispatcherFuncAddr = 0x002FABC0u;
        ps2_syscalls::setDtxCompatLayout(layout);
    }

    void applyRecvxMpegCompat(PS2Runtime &runtime)
    {
        (void)runtime;

        // this is temporary so ignore for now
        PS2MpegCompatLayout layout{};
        layout.mpegObjectAddr = 0x01E27140u;
        layout.videoStateAddr = 0x01E271E8u;
        layout.movieStateAddr = 0x01E21914u;
        layout.syntheticFramesBeforeEnd = 1u;
        layout.finishedVideoStateValue = 3u;
        layout.finishedMovieStateValue = 3u;
        ps2_stubs::setMpegCompatLayout(layout);
    }

    void applyKofxiFrameSchedulerCompat(PS2Runtime &runtime)
    {
        if (kofxiCallbackYieldEnabled() || traceKofxiCallbackSlotEnabled())
        {
            if (runtime.hasFunction(0x001CDB48u))
            {
                g_kofxiEnterCallbackCriticalFn = runtime.lookupFunction(0x001CDB48u);
                runtime.registerFunction(0x001CDB48u, &kofxiTraceEnterCallbackCritical);
            }
            if (runtime.hasFunction(0x001CDA58u))
            {
                g_kofxiEnterCallbackCriticalCoreFn = runtime.lookupFunction(0x001CDA58u);
                runtime.registerFunction(0x001CDA58u, &kofxiTraceEnterCallbackCriticalCore);
            }
            if (runtime.hasFunction(0x001CDB60u))
            {
                g_kofxiLeaveCallbackCriticalFn = runtime.lookupFunction(0x001CDB60u);
                runtime.registerFunction(0x001CDB60u, &kofxiTraceLeaveCallbackCritical);
            }
            if (runtime.hasFunction(0x001CDAB8u))
            {
                g_kofxiLeaveCallbackCriticalCoreFn = runtime.lookupFunction(0x001CDAB8u);
                runtime.registerFunction(0x001CDAB8u, &kofxiTraceLeaveCallbackCriticalCore);
            }
        }

        runtime.registerFunction(0x001B4048u, &kofxiWakeFrameSleepThreadCompat);
        if (runtime.hasFunction(0x001B87B8u))
        {
            g_kofxiResourceCallbackAllocFn = runtime.lookupFunction(0x001B87B8u);
            for (uint32_t entry : {0x001B87B8u, 0x001B87DCu, 0x001B87ECu, 0x001B87F4u})
            {
                runtime.registerFunction(entry, &kofxiResourceCallbackAllocCompat);
            }
        }
        if (runtime.hasFunction(0x001AD270u))
        {
            g_kofxiResourceCallbackReturnThunkFn = runtime.lookupFunction(0x001AD270u);
            runtime.registerFunction(0x001AD270u, &kofxiResourceCallbackReturnThunkCompat);
        }
        if (runtime.hasFunction(0x001AF858u))
        {
            g_kofxiAsyncResourcePollTailFn = runtime.lookupFunction(0x001AF858u);
            runtime.registerFunction(0x001AF858u, &kofxiAsyncResourcePollTailCompat);
        }
        if (runtime.hasFunction(0x001B1AC8u))
        {
            g_kofxiResourceUnlockReturnThunkFn = runtime.lookupFunction(0x001B1AC8u);
            runtime.registerFunction(0x001B1AC8u, &kofxiResourceUnlockReturnThunkCompat);
        }
        if ((kofxiUpperResourceAttachCompatEnabled() || traceKofxiUpperResourceCompatEnabled()) &&
            runtime.hasFunction(0x001C5F28u))
        {
            g_kofxiUpperResourceAttachChildFn = runtime.lookupFunction(0x001C5F28u);
            runtime.registerFunction(0x001C5F28u, &kofxiUpperResourceAttachChildCompat);
        }
        if ((kofxiRenderQueueCounterGuardCompatEnabled() ||
             traceKofxiRenderQueueCounterGuardCompatEnabled()) &&
            runtime.hasFunction(0x0031B310u))
        {
            g_kofxiRenderQueueSubmitFn = runtime.lookupFunction(0x0031B310u);
            runtime.registerFunction(0x0031B310u, &kofxiRenderQueueSubmitCounterGuardCompat);
        }
        if (traceKofxiRenderQueueDrainEnabled())
        {
            if (runtime.hasFunction(0x0031E590u))
            {
                g_kofxiRenderQueueDrainFn = runtime.lookupFunction(0x0031E590u);
                runtime.registerFunction(0x0031E590u, &kofxiTraceRenderQueueDrain);
            }
            if (runtime.hasFunction(0x001522E0u))
            {
                g_kofxiRenderListProcessFn = runtime.lookupFunction(0x001522E0u);
                runtime.registerFunction(0x001522E0u, &kofxiTraceRenderListProcess);
            }
            if (runtime.hasFunction(0x00152220u))
            {
                g_kofxiRenderListEnqueueFn = runtime.lookupFunction(0x00152220u);
                runtime.registerFunction(0x00152220u, &kofxiTraceRenderListEnqueue);
            }
            if (runtime.hasFunction(0x00152290u))
            {
                g_kofxiRenderListClearFn = runtime.lookupFunction(0x00152290u);
                runtime.registerFunction(0x00152290u, &kofxiTraceRenderListClear);
            }
            if (runtime.hasFunction(0x00303750u))
            {
                g_kofxiObjectRenderQueueClearFn = runtime.lookupFunction(0x00303750u);
                runtime.registerFunction(0x00303750u, &kofxiTraceObjectRenderQueueClear);
            }
            if (runtime.hasFunction(0x003037C0u))
            {
                g_kofxiObjectRenderQueueEnqueueFn = runtime.lookupFunction(0x003037C0u);
                runtime.registerFunction(0x003037C0u, &kofxiTraceObjectRenderQueueEnqueue);
            }
            if (runtime.hasFunction(0x00303830u))
            {
                g_kofxiObjectRenderQueueProcessFn = runtime.lookupFunction(0x00303830u);
                runtime.registerFunction(0x00303830u, &kofxiTraceObjectRenderQueueProcess);
            }
        }
        if (traceKofxiObjectListAllocEnabled())
        {
            if (runtime.hasFunction(0x00155A10u))
            {
                g_kofxiObjectListInitFn = runtime.lookupFunction(0x00155A10u);
                runtime.registerFunction(0x00155A10u, &kofxiTraceObjectListInit);
            }
            if (runtime.hasFunction(0x00155B50u))
            {
                g_kofxiObjectListAllocFn = runtime.lookupFunction(0x00155B50u);
                runtime.registerFunction(0x00155B50u, &kofxiTraceObjectListAlloc);
            }
            if (runtime.hasFunction(0x00155CA0u))
            {
                g_kofxiObjectListRemoveFn = runtime.lookupFunction(0x00155CA0u);
                runtime.registerFunction(0x00155CA0u, &kofxiTraceObjectListRemove);
            }
        }
        if (traceKofxiObjectServiceEnabled())
        {
            for (uint32_t entry : {
                     0x00155DD0u,
                     0x00155DA0u,
                     0x00176370u,
                     0x001763F0u,
                     0x00176430u,
                     0x00176480u,
                     0x001764F0u,
                     0x00176540u,
                     0x00176580u,
                     0x001765B8u,
                     0x00176690u,
                     0x00177750u,
                     0x00177F30u,
                     0x00177F70u,
                     0x00177420u,
                     0x001779C0u})
            {
                registerKofxiObjectServiceTrace(runtime, entry);
            }
        }
        if (traceKofxiBattleResourceStepEnabled())
        {
            const std::initializer_list<uint32_t> recordOnlyEntries = {
                0x001770D0u,
                0x00177198u,
                0x001789E0u};
            const std::initializer_list<uint32_t> fullEntries = {
                0x001769B0u,
                0x001770D0u,
                0x00177198u,
                0x001775A0u,
                0x00177BA0u,
                0x00177CC0u,
                0x00177E30u,
                0x00178040u,
                0x00178560u,
                0x001789E0u,
                0x0017A590u,
                0x0017A650u,
                0x00198390u,
                0x001985D0u,
                0x0019F340u,
                0x0019F390u,
                0x0019F590u,
                0x0019F5F0u,
                0x0019F600u,
                0x001A5270u,
                0x001A51F0u,
                0x001A5390u,
                0x0032C8B0u};
            for (uint32_t entry : (traceKofxiBattleResourceRecordOnlyEnabled() ? recordOnlyEntries : fullEntries))
            {
                registerKofxiBattleResourceStepTrace(runtime, entry);
            }
        }
        if (traceKofxiResourcePackageInstallEnabled())
        {
            for (uint32_t entry : {
                     0x001768A0u,
                     0x001768DCu,
                     0x001768F0u,
                     0x00176914u,
                     0x00176AB0u,
                     0x00176AE0u,
                     0x00176BF0u,
                     0x00176CB0u,
                     0x00176DB0u})
            {
                registerKofxiResourcePackageInstallTrace(runtime, entry);
            }
        }
        if (traceKofxiResourceSlotCallbacksEnabled())
        {
            for (uint32_t entry : {
                     0x00177350u,
                     0x00177420u,
                     0x00177750u,
                     0x001779C0u})
            {
                registerKofxiResourceSlotCallbackTrace(runtime, entry);
            }
        }
        if (traceKofxiResourceDataChainEnabled())
        {
            for (uint32_t entry : {
                     0x0011C188u,
                     0x0011C3A8u,
                     0x0011C658u,
                     0x001A3DB0u,
                     0x001A3F30u,
                     0x001A54F0u,
                     0x001A5710u,
                     0x0032C890u,
                     0x0032C8B0u})
            {
                registerKofxiResourceDataChainTrace(runtime, entry);
            }
        }
        if (traceKofxiScriptDispatchEnabled() && runtime.hasFunction(0x0014E3F0u))
        {
            g_kofxiScriptDispatchFn = runtime.lookupFunction(0x0014E3F0u);
            if (g_kofxiScriptDispatchFn && g_kofxiScriptDispatchFn != &kofxiTraceScriptDispatch)
            {
                runtime.registerFunction(0x0014E3F0u, &kofxiTraceScriptDispatch);
            }
        }
        if (traceKofxiFrontendStateEnabled() || kofxiFrontendAutoStartCompatEnabled())
        {
            for (uint32_t entry : {
                     0x001520E0u,
                     0x001521D0u,
                     0x00155FE0u,
                     0x00156380u,
                     0x002099D0u,
                     0x002FD760u,
                     0x002FDA90u,
                     0x002FDD60u,
                     0x002FDFA0u,
                     0x002FDFF0u,
                     0x002FE060u,
                     0x002FE0D0u,
                     0x002FE0E8u,
                     0x002FE12Cu,
                     0x002FE140u,
                     0x002FE1B0u,
                     0x002FE1D0u,
                     0x002FE240u,
                     0x002FE254u,
                     0x002FE270u,
                     0x002FE290u,
                     0x002FE304u,
                     0x002FE318u,
                     0x002FEA80u,
                     0x002FEAC0u,
                     0x002FEAD0u,
                     0x002FEB24u,
                     0x002FEB34u,
                     0x002FEB84u,
                     0x002FED80u,
                     0x002FF050u,
                     0x002FFF50u,
                     0x00300000u,
                     0x00324E30u})
            {
                registerKofxiFrontendTrace(runtime, entry);
            }
        }
        if ((traceKofxiFrontendDemoTimerEnabled() || kofxiFrontendDemoTimerFastForwardCompatEnabled()) &&
            runtime.hasFunction(0x0017BBD0u))
        {
            g_kofxiFrontendDemoTimerFn = runtime.lookupFunction(0x0017BBD0u);
            if (g_kofxiFrontendDemoTimerFn && g_kofxiFrontendDemoTimerFn != &kofxiTraceFrontendDemoTimer)
            {
                runtime.registerFunction(0x0017BBD0u, &kofxiTraceFrontendDemoTimer);
            }
        }
        if (traceKofxiFrontendBootstrapEnabled())
        {
            for (uint32_t entry : {
                     0x00307350u,
                     0x0030736Cu,
                     0x0030737Cu,
                     0x003076D0u,
                     0x003076E8u,
                     0x003076F0u,
                     0x003076F8u,
                     0x00307734u,
                     0x0030773Cu,
                     0x0030775Cu,
                     0x00307768u,
                     0x00307774u,
                     0x003077A4u,
                     0x003077D8u,
                     0x00307800u,
                     0x00307870u,
                     0x00307894u,
                     0x003078A0u,
                     0x003078A8u,
                     0x003078B0u,
                     0x003078B8u,
                     0x003078C0u,
                     0x003078C8u,
                     0x003078D0u,
                     0x003078DCu,
                     0x003078ECu,
                     0x00307900u,
                     0x0030790Cu,
                     0x00307914u,
                     0x0030791Cu,
                     0x00307930u,
                     0x0030793Cu,
                     0x00307948u,
                     0x00307994u,
                     0x003079B0u,
                     0x003079C0u,
                     0x003079D4u,
                     0x003079ECu})
            {
                registerKofxiFrontendBootstrapTrace(runtime, entry);
            }
        }
        if (traceKofxiMainLoopStateEnabled())
        {
            if (runtime.hasFunction(0x001A1600u))
            {
                g_kofxiMainLoopFn = runtime.lookupFunction(0x001A1600u);
                for (uint32_t entry : {0x001A1600u, 0x001A1910u, 0x001A1918u, 0x001A1920u,
                                       0x001A1928u, 0x001A1948u, 0x001A1954u, 0x001A1968u,
                                       0x001A1970u, 0x001A1978u, 0x001A1998u, 0x001A19A0u,
                                       0x001A19A8u, 0x001A19B0u, 0x001A19BCu, 0x001A19D0u,
                                       0x001A19E4u, 0x001A19F4u, 0x001A19FCu, 0x001A1A14u,
                                       0x001A1A1Cu, 0x001A1A34u, 0x001A1A3Cu, 0x001A1A44u,
                                       0x001A1A4Cu, 0x001A1A54u, 0x001A1A5Cu, 0x001A1A64u,
                                       0x001A1A74u})
                {
                    runtime.registerFunction(entry, &kofxiTraceMainLoopState);
                }
            }
            if (traceKofxiMainLoopGateStateEnabled() && runtime.hasFunction(0x001A1AB0u))
            {
                g_kofxiMainLoopGateFn = runtime.lookupFunction(0x001A1AB0u);
                for (uint32_t entry : {0x001A1AB0u, 0x001A1AD8u, 0x001A1AE0u, 0x001A1AF4u,
                                       0x001A1B04u, 0x001A1B18u, 0x001A1B48u, 0x001A1B54u,
                                       0x001A1B60u, 0x001A1B7Cu, 0x001A1B8Cu, 0x001A1BA0u,
                                       0x001A1BC4u, 0x001A1BD4u, 0x001A1BE4u})
                {
                    runtime.registerFunction(entry, &kofxiTraceMainLoopGateState);
                }
            }
            if (traceKofxiMainLoopSlotStateEnabled() && runtime.hasFunction(0x001A21D0u))
            {
                g_kofxiMainLoopSlotsFn = runtime.lookupFunction(0x001A21D0u);
                for (uint32_t entry : {0x001A21D0u, 0x001A2204u, 0x001A2264u, 0x001A2280u,
                                       0x001A22E4u, 0x001A2304u, 0x001A2354u, 0x001A2370u,
                                       0x001A23C4u, 0x001A23E8u, 0x001A2424u, 0x001A2444u,
                                       0x001A2484u, 0x001A2528u, 0x001A2534u})
                {
                    runtime.registerFunction(entry, &kofxiTraceMainLoopSlotsState);
                }
            }
            if (runtime.hasFunction(0x0031F390u))
            {
                g_kofxiFrameFrontendFn = runtime.lookupFunction(0x0031F390u);
                for (uint32_t entry : {0x0031F390u, 0x0031F3B0u, 0x0031F3C8u, 0x0031F3D0u,
                                       0x0031F3E8u, 0x0031F3F0u, 0x0031F3F8u, 0x0031F400u,
                                       0x0031F408u, 0x0031F420u, 0x0031F428u, 0x0031F430u,
                                       0x0031F438u, 0x0031F450u})
                {
                    runtime.registerFunction(entry, &kofxiTraceFrameFrontendState);
                }
            }
        }
        if (traceKofxiMainTaskTableEnabled())
        {
            if (runtime.hasFunction(0x0011D1C8u))
            {
                g_kofxiMainTaskSnapshotFn = runtime.lookupFunction(0x0011D1C8u);
                for (uint32_t entry : {0x0011D1C8u, 0x0011D1F0u, 0x0011D224u,
                                       0x0011D250u, 0x0011D2ACu, 0x0011D300u,
                                       0x0011D320u, 0x0011D368u})
                {
                    runtime.registerFunction(entry, &kofxiTraceMainTaskSnapshot);
                }
            }
            if (runtime.hasFunction(0x0011D3F0u))
            {
                g_kofxiMainTaskStatusFn = runtime.lookupFunction(0x0011D3F0u);
                for (uint32_t entry : {0x0011D3F0u, 0x0011D438u, 0x0011D468u,
                                       0x0011D490u})
                {
                    runtime.registerFunction(entry, &kofxiTraceMainTaskStatus);
                }
            }
            if (runtime.hasFunction(0x0011D4A0u))
            {
                g_kofxiMainTaskSetStateFn = runtime.lookupFunction(0x0011D4A0u);
                for (uint32_t entry : {0x0011D4A0u, 0x0011D4FCu, 0x0011D510u,
                                       0x0011D520u, 0x0011D534u})
                {
                    runtime.registerFunction(entry, &kofxiTraceMainTaskSetState);
                }
            }
            if (runtime.hasFunction(0x0011D5E8u))
            {
                g_kofxiMainTaskProgressCheckFn = runtime.lookupFunction(0x0011D5E8u);
                for (uint32_t entry : {0x0011D5E8u, 0x0011D638u, 0x0011D700u,
                                       0x0011D750u})
                {
                    runtime.registerFunction(entry, &kofxiTraceMainTaskProgressCheck);
                }
            }
            if (runtime.hasFunction(0x0011D818u))
            {
                g_kofxiMainTaskConditionFn = runtime.lookupFunction(0x0011D818u);
                for (uint32_t entry : {0x0011D818u, 0x0011D868u})
                {
                    runtime.registerFunction(entry, &kofxiTraceMainTaskCondition);
                }
            }
            if (runtime.hasFunction(0x0011D950u))
            {
                g_kofxiMainTaskRpcStartFn = runtime.lookupFunction(0x0011D950u);
                for (uint32_t entry : {0x0011D950u, 0x0011D9B8u, 0x0011D9E4u})
                {
                    runtime.registerFunction(entry, &kofxiTraceMainTaskRpcStart);
                }
            }
            if (runtime.hasFunction(0x0011DAD0u))
            {
                g_kofxiMainTaskRpcCopyStartFn = runtime.lookupFunction(0x0011DAD0u);
                for (uint32_t entry : {0x0011DAD0u, 0x0011DB10u, 0x0011DB5Cu,
                                       0x0011DB88u, 0x0011DBA8u, 0x0011DBE8u})
                {
                    runtime.registerFunction(entry, &kofxiTraceMainTaskRpcCopyStart);
                }
            }
        }
        if ((kofxiObjectServicePumpCompatEnabled() ||
             traceKofxiObjectServicePumpCompatEnabled() ||
             traceKofxiObjectManagerPollEnabled()) &&
            runtime.hasFunction(0x001B9D68u) &&
            runtime.hasFunction(0x001BAAC8u))
        {
            g_kofxiObjectManagerPollFn = runtime.lookupFunction(0x001B9D68u);
            g_kofxiObjectServicePumpFn = runtime.lookupFunction(0x001BAAC8u);
            runtime.registerFunction(0x001B9D68u, &kofxiObjectManagerPollCompat);
        }
        if (traceKofxiObjectTaskEnabled())
        {
            if (runtime.hasFunction(0x001B9DB8u))
            {
                g_kofxiObjectTaskPollFn = runtime.lookupFunction(0x001B9DB8u);
                runtime.registerFunction(0x001B9DB8u, &kofxiTraceObjectTaskPoll);
            }
            if (runtime.hasFunction(0x001B6418u))
            {
                g_kofxiObjectStatusFromControlFn = runtime.lookupFunction(0x001B6418u);
                runtime.registerFunction(0x001B6418u, &kofxiTraceObjectStatusFromControl);
            }
            if (runtime.hasFunction(0x001B6270u))
            {
                g_kofxiObjectStatusFromBackingFn = runtime.lookupFunction(0x001B6270u);
                runtime.registerFunction(0x001B6270u, &kofxiTraceObjectStatusFromBacking);
            }
            if (runtime.hasFunction(0x001AB940u))
            {
                g_kofxiObjectBackingStatusFn = runtime.lookupFunction(0x001AB940u);
                runtime.registerFunction(0x001AB940u, &kofxiTraceObjectBackingStatus);
            }
        }
        else if ((kofxiObjectBackingCompleteCompatEnabled() ||
                  traceKofxiObjectBackingCompleteCompatEnabled()) &&
                 runtime.hasFunction(0x001AB940u))
        {
            g_kofxiObjectBackingStatusFn = runtime.lookupFunction(0x001AB940u);
            runtime.registerFunction(0x001AB940u, &kofxiTraceObjectBackingStatus);
        }
        if (traceKofxiObjectPumpStateEnabled() || kofxiPumpSlotConsumeCompatEnabled())
        {
            if (runtime.hasFunction(0x001BAAC8u))
            {
                g_kofxiObjectPumpLockedFn = runtime.lookupFunction(0x001BAAC8u);
                runtime.registerFunction(0x001BAAC8u, &kofxiTraceObjectPumpLocked);
            }
            if (runtime.hasFunction(0x001BAAF0u))
            {
                g_kofxiObjectPumpCoreFn = runtime.lookupFunction(0x001BAAF0u);
                runtime.registerFunction(0x001BAAF0u, &kofxiTraceObjectPumpCore);
            }
            if (runtime.hasFunction(0x001BD858u))
            {
                g_kofxiObjectPumpServiceSlotFn = runtime.lookupFunction(0x001BD858u);
                runtime.registerFunction(0x001BD858u, &kofxiTraceObjectPumpServiceSlot);
            }
            if (kofxiPumpSlotConsumeCompatEnabled() && runtime.hasFunction(0x001B2260u))
            {
                g_kofxiPumpSlotConsumerFn = runtime.lookupFunction(0x001B2260u);
            }
            if (traceKofxiPumpSlotConsumeCompatEnabled())
            {
                static std::atomic<uint32_t> s_pumpSlotConsumeRegistrationLogCount{0u};
                const uint32_t index = s_pumpSlotConsumeRegistrationLogCount.fetch_add(1u, std::memory_order_relaxed);
                if (index < 4u)
                {
                    std::lock_guard<std::mutex> lock(kofxiTraceLogMutex());
                    std::cerr << "[KOFXI:pump-slot-consume-compat] #" << index
                              << " registration"
                              << " compat=0x" << std::hex << (kofxiPumpSlotConsumeCompatEnabled() ? 1u : 0u)
                              << " hasConsumer=0x" << (runtime.hasFunction(0x001B2260u) ? 1u : 0u)
                              << " consumerFnSet=0x" << (g_kofxiPumpSlotConsumerFn ? 1u : 0u)
                              << std::dec << std::endl;
                }
            }
            if (runtime.hasFunction(0x001BD888u))
            {
                g_kofxiObjectPumpDispatchSlotFn = runtime.lookupFunction(0x001BD888u);
                runtime.registerFunction(0x001BD888u, &kofxiTraceObjectPumpDispatchSlot);
            }
            if (runtime.hasFunction(0x001CA338u))
            {
                g_kofxiObjectPumpUpperWrite40Fn = runtime.lookupFunction(0x001CA338u);
                runtime.registerFunction(0x001CA338u, &kofxiTraceObjectPumpUpperWrite40);
            }
            if (runtime.hasFunction(0x001CA388u))
            {
                g_kofxiObjectPumpUpperWrite5cFn = runtime.lookupFunction(0x001CA388u);
                runtime.registerFunction(0x001CA388u, &kofxiTraceObjectPumpUpperWrite5c);
            }
            if (runtime.hasFunction(0x001BD7C0u))
            {
                g_kofxiObjectPumpSlotMaintenanceFn = runtime.lookupFunction(0x001BD7C0u);
                runtime.registerFunction(0x001BD7C0u, &kofxiTraceObjectPumpSlotMaintenance);
            }
            if (runtime.hasFunction(0x001B6C60u))
            {
                g_kofxiObjectPumpChildStatusFn = runtime.lookupFunction(0x001B6C60u);
                runtime.registerFunction(0x001B6C60u, &kofxiTraceObjectPumpChildStatus);
            }
            if (runtime.hasFunction(0x001B51B0u))
            {
                g_kofxiObjectPumpControlServiceFn = runtime.lookupFunction(0x001B51B0u);
                runtime.registerFunction(0x001B51B0u, &kofxiTraceObjectPumpControlService);
            }
            if (runtime.hasFunction(0x001A9A60u))
            {
                g_kofxiObjectPumpBackingPreServiceFn = runtime.lookupFunction(0x001A9A60u);
                runtime.registerFunction(0x001A9A60u, &kofxiTraceObjectPumpBackingPreService);
            }
            if (runtime.hasFunction(0x001A9808u))
            {
                g_kofxiObjectPumpBackingPostServiceFn = runtime.lookupFunction(0x001A9808u);
                runtime.registerFunction(0x001A9808u, &kofxiTraceObjectPumpBackingPostService);
            }
            if (runtime.hasFunction(0x001C6478u))
            {
                g_kofxiObjectPumpUpperStatusFn = runtime.lookupFunction(0x001C6478u);
                runtime.registerFunction(0x001C6478u, &kofxiTraceObjectPumpUpperStatus);
            }
            if (runtime.hasFunction(0x001B1B08u))
            {
                g_kofxiObjectPumpGlobalServiceFn = runtime.lookupFunction(0x001B1B08u);
                runtime.registerFunction(0x001B1B08u, &kofxiTraceObjectPumpGlobalService);
            }
            if (runtime.hasFunction(0x001B7778u))
            {
                g_kofxiObjectPumpChildTableScanFn = runtime.lookupFunction(0x001B7778u);
                for (uint32_t entry : {0x001B7778u, 0x001B77B0u, 0x001B77C4u})
                {
                    runtime.registerFunction(entry, &kofxiTraceObjectPumpChildTableScan);
                }
            }
        }
        if ((traceKofxiObjectPumpStateEnabled() ||
             kofxiChildEmptyCompleteCompatEnabled() ||
             kofxiUpperChildCompleteCompatEnabled()) &&
            runtime.hasFunction(0x001BD740u))
        {
            g_kofxiObjectPumpSlotAdvanceFn = runtime.lookupFunction(0x001BD740u);
            runtime.registerFunction(0x001BD740u, &kofxiTraceObjectPumpSlotAdvance);
        }
        if ((traceKofxiObjectPumpStateEnabled() || kofxiChildEmptyCompleteCompatEnabled()) &&
            runtime.hasFunction(0x001B74A8u))
        {
            g_kofxiObjectPumpChildServiceFn = runtime.lookupFunction(0x001B74A8u);
            for (uint32_t entry : {0x001B74A8u, 0x001B752Cu, 0x001B7554u,
                                   0x001B7570u, 0x001B7588u, 0x001B7688u,
                                   0x001B7694u, 0x001B7738u})
            {
                runtime.registerFunction(entry, &kofxiTraceObjectPumpChildService);
            }
        }
        if (traceKofxiControlServiceEnabled())
        {
            if (runtime.hasFunction(0x001B4F48u))
            {
                g_kofxiControlAllocFn = runtime.lookupFunction(0x001B4F48u);
                runtime.registerFunction(0x001B4F48u, &kofxiTraceControlAlloc);
            }
            if (runtime.hasFunction(0x001B6058u))
            {
                g_kofxiControlServiceAllFn = runtime.lookupFunction(0x001B6058u);
                runtime.registerFunction(0x001B6058u, &kofxiTraceControlServiceAll);
            }
            if (runtime.hasFunction(0x001B5D20u))
            {
                g_kofxiControlServiceOneFn = runtime.lookupFunction(0x001B5D20u);
                runtime.registerFunction(0x001B5D20u, &kofxiTraceControlServiceOne);
            }
            if (runtime.hasFunction(0x001B5668u))
            {
                g_kofxiControlPrepareFn = runtime.lookupFunction(0x001B5668u);
                for (uint32_t entry : {0x001B5668u, 0x001B56F0u, 0x001B575Cu, 0x001B58ECu, 0x001B59D4u})
                {
                    runtime.registerFunction(entry, &kofxiTraceControlPrepare);
                }
            }
            if (!traceKofxiBackingDispatchEnabled() && runtime.hasFunction(0x001B5240u))
            {
                g_kofxiControlRunStateOneFn = runtime.lookupFunction(0x001B5240u);
                for (uint32_t entry : {0x001B5240u, 0x001B5524u, 0x001B5548u, 0x001B55B0u, 0x001B55D4u, 0x001B55E0u, 0x001B55F4u, 0x001B5600u, 0x001B5664u})
                {
                    runtime.registerFunction(entry, &kofxiTraceControlRunStateOne);
                }
            }
            if (runtime.hasFunction(0x001B5C70u))
            {
                g_kofxiControlRunStateTwoFn = runtime.lookupFunction(0x001B5C70u);
                runtime.registerFunction(0x001B5C70u, &kofxiTraceControlRunStateTwo);
            }
            if (runtime.hasFunction(0x001B59F8u))
            {
                g_kofxiControlFinalizeFn = runtime.lookupFunction(0x001B59F8u);
                runtime.registerFunction(0x001B59F8u, &kofxiTraceControlFinalize);
            }
            if (runtime.hasFunction(0x001B5DC8u))
            {
                g_kofxiControlRunA0Fn = runtime.lookupFunction(0x001B5DC8u);
                runtime.registerFunction(0x001B5DC8u, &kofxiTraceControlRunA0);
            }
            if (runtime.hasFunction(0x001B5F18u))
            {
                g_kofxiControlRunA4Fn = runtime.lookupFunction(0x001B5F18u);
                runtime.registerFunction(0x001B5F18u, &kofxiTraceControlRunA4);
            }
        }
        if (traceKofxiBackingLifecycleEnabled())
        {
            if (runtime.hasFunction(0x001AB3B0u))
            {
                g_kofxiBackingLifecycleStepFn = runtime.lookupFunction(0x001AB3B0u);
                runtime.registerFunction(0x001AB3B0u, &kofxiTraceBackingLifecycleStep);
            }
            if (runtime.hasFunction(0x001AB6F0u))
            {
                g_kofxiBackingLifecycleInitFn = runtime.lookupFunction(0x001AB6F0u);
                runtime.registerFunction(0x001AB6F0u, &kofxiTraceBackingLifecycleInit);
            }
            if (runtime.hasFunction(0x001AD8F8u))
            {
                g_kofxiBackingParseSmallFn = runtime.lookupFunction(0x001AD8F8u);
                runtime.registerFunction(0x001AD8F8u, &kofxiTraceBackingParseSmall);
            }
            if (runtime.hasFunction(0x001ADB58u))
            {
                g_kofxiBackingParseLargeFn = runtime.lookupFunction(0x001ADB58u);
                runtime.registerFunction(0x001ADB58u, &kofxiTraceBackingParseLarge);
            }
            if (runtime.hasFunction(0x001AD680u))
            {
                g_kofxiBackingHeaderProbeFn = runtime.lookupFunction(0x001AD680u);
                runtime.registerFunction(0x001AD680u, &kofxiTraceBackingHeaderProbe);
            }
        }
        if (traceKofxiBackingDispatchEnabled())
        {
            if (runtime.hasFunction(0x001AB290u))
            {
                g_kofxiBackingAllocDispatchFn = runtime.lookupFunction(0x001AB290u);
                for (uint32_t entry : {0x001AB290u, 0x001AB2D8u, 0x001AB32Cu, 0x001AB338u, 0x001AB348u, 0x001AB388u})
                {
                    runtime.registerFunction(entry, &kofxiTraceBackingAllocDispatch);
                }
            }
            if (runtime.hasFunction(0x001B50B8u))
            {
                g_kofxiBackingCleanupDispatchFn = runtime.lookupFunction(0x001B50B8u);
                runtime.registerFunction(0x001B50B8u, &kofxiTraceBackingCleanupDispatch);
            }
            if (runtime.hasFunction(0x001B5240u))
            {
                g_kofxiBackingWorkerDispatchFn = runtime.lookupFunction(0x001B5240u);
                runtime.registerFunction(0x001B5240u, &kofxiTraceBackingWorkerDispatch);
                runtime.registerFunction(0x001B5524u, &kofxiTraceBackingWorkerDispatch);
                runtime.registerFunction(0x001B5548u, &kofxiTraceBackingWorkerDispatch);
                runtime.registerFunction(0x001B55B0u, &kofxiTraceBackingWorkerDispatch);
                runtime.registerFunction(0x001B55D4u, &kofxiTraceBackingWorkerDispatch);
                runtime.registerFunction(0x001B55E0u, &kofxiTraceBackingWorkerDispatch);
                runtime.registerFunction(0x001B55F4u, &kofxiTraceBackingWorkerDispatch);
                runtime.registerFunction(0x001B5600u, &kofxiTraceBackingWorkerDispatch);
                runtime.registerFunction(0x001B5664u, &kofxiTraceBackingWorkerDispatch);
            }
        }
        if (traceKofxiCallbackResourceEnabled())
        {
            if (runtime.hasFunction(0x001B8E70u))
            {
                g_kofxiResourceCallbackSlotWalkFn = runtime.lookupFunction(0x001B8E70u);
                runtime.registerFunction(0x001B8E70u, &kofxiTraceResourceCallbackSlotWalk);
            }
            if (runtime.hasFunction(0x001B8C70u))
            {
                g_kofxiResourceCallbackSlotProcessFn = runtime.lookupFunction(0x001B8C70u);
                runtime.registerFunction(0x001B8C70u, &kofxiTraceResourceCallbackSlotProcess);
            }
            if (runtime.hasFunction(0x001B6980u))
            {
                g_kofxiResourceObjectDestroyFn = runtime.lookupFunction(0x001B6980u);
                runtime.registerFunction(0x001B6980u, &kofxiTraceResourceObjectDestroy);
            }
            if (runtime.hasFunction(0x001B6C08u))
            {
                g_kofxiResourceObjectWaitFn = runtime.lookupFunction(0x001B6C08u);
                runtime.registerFunction(0x001B6C08u, &kofxiTraceResourceObjectWait);
            }
        }
        if (traceKofxiResourceCompletionEnabled() && runtime.hasFunction(0x001BB050u))
        {
            g_kofxiResourceCompletionSetFn = runtime.lookupFunction(0x001BB050u);
            for (uint32_t entry : {0x001BB050u, 0x001BB07Cu, 0x001BB09Cu,
                                   0x001BB0C0u, 0x001BB0D0u, 0x001BB0FCu,
                                   0x001BB164u})
            {
                runtime.registerFunction(entry, &kofxiTraceResourceCompletionSet);
            }
        }
        if (kofxiHostFrameSleepEnabled())
        {
            runtime.registerFunction(0x001B40C8u, &kofxiFrameSleepCurrentHostVblankCompat);
        }
        if (kofxiSdkVSyncCompatEnabled() && runtime.hasFunction(0x0010D180u))
        {
            g_kofxiSdkVSyncFn = runtime.lookupFunction(0x0010D180u);
            for (uint32_t entry : {0x0010D180u, 0x0010D198u, 0x0010D1A0u, 0x0010D1C4u,
                                   0x0010D1D0u, 0x0010D1F4u, 0x0010D214u})
            {
                runtime.registerFunction(entry, &kofxiSdkVSyncCompat);
            }
        }
        if ((kofxiStreamPollSemaCompatEnabled() || traceKofxiStreamPollSemaCompatEnabled()) &&
            runtime.hasFunction(0x0010CCB0u))
        {
            g_kofxiStreamPollSemaFn = runtime.lookupFunction(0x0010CCB0u);
            runtime.registerFunction(0x0010CCB0u, &kofxiStreamPollSemaCompat);
        }
        if (traceKofxiStreamWaitEnabled() && runtime.hasFunction(0x0011C3A8u))
        {
            g_kofxiStreamWaitFn = runtime.lookupFunction(0x0011C3A8u);
            for (uint32_t entry : {0x0011C3A8u, 0x0011C3F8u, 0x0011C40Cu, 0x0011C4A4u,
                                   0x0011C4B8u, 0x0011C4C4u, 0x0011C4D0u, 0x0011C4E4u,
                                   0x0011C528u, 0x0011C544u, 0x0011C560u})
            {
                runtime.registerFunction(entry, &kofxiTraceStreamWait);
            }
        }
        if (traceKofxiStreamInitEnabled() && runtime.hasFunction(0x0011B780u))
        {
            g_kofxiStreamInitFn = runtime.lookupFunction(0x0011B780u);
            for (uint32_t entry : {0x0011B780u, 0x0011B7A0u, 0x0011B7ACu, 0x0011B7D8u,
                                   0x0011B7F0u, 0x0011B804u, 0x0011B814u, 0x0011B828u,
                                   0x0011B830u, 0x0011B850u, 0x0011B864u, 0x0011B888u,
                                   0x0011B890u})
            {
                runtime.registerFunction(entry, &kofxiTraceStreamInit);
            }
        }
        if (kofxiResourceWaitServiceCompatEnabled() &&
            runtime.hasFunction(0x001B40F0u) &&
            runtime.hasFunction(0x001B05B0u))
        {
            g_kofxiRunFrameSchedulerResourceWaitFn = runtime.lookupFunction(0x001B40F0u);
            g_kofxiResourceHandleWaitLoopServiceFn = runtime.lookupFunction(0x001B05B0u);
            runtime.registerFunction(0x001B40F0u, &kofxiRunFrameSchedulerResourceWaitCompat);
        }
        if (traceKofxiFrameCallbackEnabled())
        {
            if (runtime.hasFunction(0x001CE458u))
            {
                g_kofxiDeferredCallbackQueueRunnerFn = runtime.lookupFunction(0x001CE458u);
                runtime.registerFunction(0x001CE458u, &kofxiTraceDeferredCallbackQueueRunner);
            }
            if (runtime.hasFunction(0x001CE8E8u))
            {
                g_kofxiFrameEndCallbackDispatchFn = runtime.lookupFunction(0x001CE8E8u);
                runtime.registerFunction(0x001CE8E8u, &kofxiTraceFrameEndCallbackDispatch);
            }
        }
        if (traceKofxiBootProgressEnabled() ||
            traceKofxiCallbackSlotEnabled() ||
            traceKofxiThreadManagerEnabled())
        {
            if (runtime.hasFunction(0x001CE748u))
            {
                g_kofxiInitializeDeferredCallbackQueuesFn = runtime.lookupFunction(0x001CE748u);
                runtime.registerFunction(0x001CE748u, &kofxiTraceInitializeDeferredCallbackQueues);
            }
            if (runtime.hasFunction(0x001B3658u))
            {
                g_kofxiInstallDeferredCallbackSlotFn = runtime.lookupFunction(0x001B3658u);
                runtime.registerFunction(0x001B3658u, &kofxiTraceInstallDeferredCallbackSlot);
            }
            if (runtime.hasFunction(0x001CE3E8u))
            {
                g_kofxiInstallDeferredCallbackSlotCoreFn = runtime.lookupFunction(0x001CE3E8u);
                runtime.registerFunction(0x001CE3E8u, &kofxiTraceInstallDeferredCallbackSlotCore);
            }
        }
        if (traceKofxiResourceInitLoopEnabled())
        {
            if (runtime.hasFunction(0x0014C2E0u))
            {
                g_kofxiInitializeIopResourceSystemFn = runtime.lookupFunction(0x0014C2E0u);
                runtime.registerFunction(0x0014C2E0u, &kofxiTraceInitializeIopResourceSystem);
            }
            if (runtime.hasFunction(0x0014C400u))
            {
                g_kofxiResourceInitLoopBeginFn = runtime.lookupFunction(0x0014C400u);
                runtime.registerFunction(0x0014C400u, &kofxiTraceResourceInitLoopBegin);
            }
            if (runtime.hasFunction(0x0014C404u))
            {
                g_kofxiResourceInitLoopServiceTickFn = runtime.lookupFunction(0x0014C404u);
                runtime.registerFunction(0x0014C404u, &kofxiTraceResourceInitLoopServiceTick);
            }
            if (runtime.hasFunction(0x0014C40Cu))
            {
                g_kofxiResourceInitLoopRunFrameFn = runtime.lookupFunction(0x0014C40Cu);
                runtime.registerFunction(0x0014C40Cu, &kofxiTraceResourceInitLoopRunFrame);
            }
            if (runtime.hasFunction(0x0014C414u))
            {
                g_kofxiResourceInitLoopWaitVsyncFn = runtime.lookupFunction(0x0014C414u);
                runtime.registerFunction(0x0014C414u, &kofxiTraceResourceInitLoopWaitVsync);
            }
            if (runtime.hasFunction(0x0014C41Cu))
            {
                g_kofxiResourceInitLoopAdvanceFn = runtime.lookupFunction(0x0014C41Cu);
                runtime.registerFunction(0x0014C41Cu, &kofxiTraceResourceInitLoopAdvance);
            }
            if (runtime.hasFunction(0x0014C430u))
            {
                g_kofxiResourceInitLoopExitFn = runtime.lookupFunction(0x0014C430u);
                runtime.registerFunction(0x0014C430u, &kofxiTraceResourceInitLoopExit);
            }
            if (runtime.hasFunction(0x00119130u))
            {
                g_kofxiIopResourceRpcBindFn = runtime.lookupFunction(0x00119130u);
                runtime.registerFunction(0x00119130u, &kofxiTraceIopResourceRpcBind);
            }
            if (runtime.hasFunction(0x00119288u))
            {
                g_kofxiIopResourceRpcCommandFn = runtime.lookupFunction(0x00119288u);
                runtime.registerFunction(0x00119288u, &kofxiTraceIopResourceRpcCommand);
            }
        }
        if (traceKofxiBootProgressEnabled() ||
            traceKofxiAsyncResourceEnabled() ||
            kofxiAsyncResourceSentinelCompatEnabled())
        {
            if (runtime.hasFunction(0x001AEF20u))
            {
                g_kofxiStartAsyncResourceLoadFn = runtime.lookupFunction(0x001AEF20u);
                runtime.registerFunction(0x001AEF20u, &kofxiTraceStartAsyncResourceLoad);
            }
            if (runtime.hasFunction(0x001AF940u))
            {
                g_kofxiPollAsyncResourceStatusFn = runtime.lookupFunction(0x001AF940u);
                for (uint32_t entry : {0x001AF940u, 0x001AF954u, 0x001AF95Cu, 0x001AF964u})
                {
                    runtime.registerFunction(entry, &kofxiTracePollAsyncResourceStatus);
                }
            }
        }
        if (traceKofxiHandleObjectWorkerEnabled())
        {
            if (runtime.hasFunction(0x001B0270u))
            {
                g_kofxiHandleObjectInitFn = runtime.lookupFunction(0x001B0270u);
                for (uint32_t entry : {0x001B0270u, 0x001B02A8u, 0x001B02CCu, 0x001B02FCu,
                                       0x001B0304u, 0x001B0318u})
                {
                    runtime.registerFunction(entry, &kofxiTraceHandleObjectInit);
                }
            }
            if (runtime.hasFunction(0x001B69D8u))
            {
                g_kofxiHandleObjectLockStartFn = runtime.lookupFunction(0x001B69D8u);
                for (uint32_t entry : {0x001B69D8u, 0x001B6A0Cu, 0x001B6A24u})
                {
                    runtime.registerFunction(entry, &kofxiTraceHandleObjectLockStart);
                }
            }
            if (runtime.hasFunction(0x001B6A48u))
            {
                g_kofxiHandleObjectStartFn = runtime.lookupFunction(0x001B6A48u);
                for (uint32_t entry : {0x001B6A48u, 0x001B6A7Cu})
                {
                    runtime.registerFunction(entry, &kofxiTraceHandleObjectStart);
                }
            }
            if (runtime.hasFunction(0x001B6AC0u))
            {
                g_kofxiHandleObjectDispatchFn = runtime.lookupFunction(0x001B6AC0u);
                for (uint32_t entry : {0x001B6AC0u, 0x001B6AF4u, 0x001B6B0Cu})
                {
                    runtime.registerFunction(entry, &kofxiTraceHandleObjectDispatch);
                }
            }
            if (runtime.hasFunction(0x001B6B30u))
            {
                g_kofxiHandleObjectWaitFn = runtime.lookupFunction(0x001B6B30u);
                for (uint32_t entry : {0x001B6B30u, 0x001B6B44u, 0x001B6B48u, 0x001B6B50u})
                {
                    runtime.registerFunction(entry, &kofxiTraceHandleObjectWait);
                }
            }
            if (runtime.hasFunction(0x001B6C60u))
            {
                g_kofxiHandleObjectStatusFn = runtime.lookupFunction(0x001B6C60u);
                for (uint32_t entry : {0x001B6C60u, 0x001B6C74u, 0x001B6C7Cu, 0x001B6C84u})
                {
                    runtime.registerFunction(entry, &kofxiTraceHandleObjectStatus);
                }
            }
            if (runtime.hasFunction(0x001B6C98u))
            {
                g_kofxiHandleObjectStatusByteFn = runtime.lookupFunction(0x001B6C98u);
                runtime.registerFunction(0x001B6C98u, &kofxiTraceHandleObjectStatusByte);
            }
        }
        if (traceKofxiAsyncResourceEnabled() || kofxiAsyncResourceHostAfsCompatEnabled())
        {
            if (runtime.hasFunction(0x001AF5A8u))
            {
                g_kofxiAsyncResourceCoreLoadFn = runtime.lookupFunction(0x001AF5A8u);
                runtime.registerFunction(0x001AF5A8u, &kofxiTraceAsyncResourceCoreLoad);
            }
        }
        if (traceKofxiAsyncResourceEnabled() ||
            (kofxiAsyncResourceSentinelCompatEnabled() && kofxiAsyncResourceHostAfsCompatEnabled()))
        {
            if (runtime.hasFunction(0x001AED68u))
            {
                g_kofxiAsyncResourceRegisterSlotFn = runtime.lookupFunction(0x001AED68u);
                runtime.registerFunction(0x001AED68u, &kofxiTraceAsyncResourceRegisterSlot);
            }
            if (runtime.hasFunction(0x001B0390u))
            {
                g_kofxiOpenResourcePartitionFn = runtime.lookupFunction(0x001B0390u);
                runtime.registerFunction(0x001B0390u, &kofxiTraceOpenResourcePartition);
            }
            if (!traceKofxiHandleObjectWorkerEnabled() && runtime.hasFunction(0x001B0270u))
            {
                g_kofxiInitializeResourceHandleFn = runtime.lookupFunction(0x001B0270u);
                runtime.registerFunction(0x001B0270u, &kofxiTraceInitializeResourceHandle);
            }
            if (runtime.hasFunction(0x001B1540u))
            {
                g_kofxiReadPartitionInfoFn = runtime.lookupFunction(0x001B1540u);
                runtime.registerFunction(0x001B1540u, &kofxiTraceReadPartitionInfo);
            }
            if (runtime.hasFunction(0x001B1390u))
            {
                g_kofxiValidatePartitionSlotFn = runtime.lookupFunction(0x001B1390u);
                runtime.registerFunction(0x001B1390u, &kofxiTraceValidatePartitionSlot);
            }
            if ((traceKofxiResourceHandleEnabled() || kofxiResourceWaitStatusCompatEnabled()) &&
                runtime.hasFunction(0x001B1328u))
            {
                g_kofxiResourceHandleGetStatusFn = runtime.lookupFunction(0x001B1328u);
                runtime.registerFunction(0x001B1328u, &kofxiTraceResourceHandleGetStatus);
            }
            if (traceKofxiResourceHandleEnabled())
            {
                if (runtime.hasFunction(0x001B1360u))
                {
                    g_kofxiResourceHandleReadStatusByteFn = runtime.lookupFunction(0x001B1360u);
                    runtime.registerFunction(0x001B1360u, &kofxiTraceResourceHandleReadStatusByte);
                }
                if (runtime.hasFunction(0x001B1048u))
                {
                    g_kofxiResourceHandleUpdateProgressFn = runtime.lookupFunction(0x001B1048u);
                    runtime.registerFunction(0x001B1048u, &kofxiTraceResourceHandleUpdateProgress);
                }
                if (runtime.hasFunction(0x001B0A60u))
                {
                    g_kofxiResourceHandleReadFn = runtime.lookupFunction(0x001B0A60u);
                    runtime.registerFunction(0x001B0A60u, &kofxiTraceResourceHandleRead);
                }
                if (runtime.hasFunction(0x001AEBC0u))
                {
                    g_kofxiResourceHandleTickServiceFn = runtime.lookupFunction(0x001AEBC0u);
                    for (uint32_t entry : {0x001AEBC0u, 0x001AEBE8u, 0x001AEC78u})
                    {
                        runtime.registerFunction(entry, &kofxiTraceResourceHandleTickService);
                    }
                }
                if (runtime.hasFunction(0x001B0588u))
                {
                    g_kofxiResourceHandleLockedServiceAllFn = runtime.lookupFunction(0x001B0588u);
                    for (uint32_t entry : {0x001B0588u, 0x001B0598u, 0x001B05A0u})
                    {
                        runtime.registerFunction(entry, &kofxiTraceResourceHandleLockedServiceAll);
                    }
                }
                if (runtime.hasFunction(0x001B05B0u))
                {
                    g_kofxiResourceHandleServiceAllFn = runtime.lookupFunction(0x001B05B0u);
                    for (uint32_t entry : {0x001B05B0u, 0x001B05D8u, 0x001B05ECu})
                    {
                        runtime.registerFunction(entry, &kofxiTraceResourceHandleServiceAll);
                    }
                }
                if (runtime.hasFunction(0x001B04D0u))
                {
                    g_kofxiResourceHandleServiceOneFn = runtime.lookupFunction(0x001B04D0u);
                    for (uint32_t entry : {0x001B04D0u, 0x001B04FCu, 0x001B0518u,
                                           0x001B0538u, 0x001B0570u})
                    {
                        runtime.registerFunction(entry, &kofxiTraceResourceHandleServiceOne);
                    }
                }
                if (runtime.hasFunction(0x001B0610u))
                {
                    g_kofxiResourceHandleContinueReadFn = runtime.lookupFunction(0x001B0610u);
                    for (uint32_t entry : {0x001B0610u, 0x001B0638u, 0x001B064Cu,
                                           0x001B06A0u, 0x001B06B8u, 0x001B06D0u,
                                           0x001B06E8u})
                    {
                        runtime.registerFunction(entry, &kofxiTraceResourceHandleContinueRead);
                    }
                }
                if (runtime.hasFunction(0x001B0B30u))
                {
                    g_kofxiResourceHandleCompleteReadFn = runtime.lookupFunction(0x001B0B30u);
                    for (uint32_t entry : {0x001B0B30u, 0x001B0B5Cu, 0x001B0B70u,
                                           0x001B0BC0u, 0x001B0BE4u, 0x001B0C04u})
                    {
                        runtime.registerFunction(entry, &kofxiTraceResourceHandleCompleteRead);
                    }
                }
                if (runtime.hasFunction(0x001B0D20u))
                {
                    g_kofxiResourceHandlePollCompletionFn = runtime.lookupFunction(0x001B0D20u);
                    for (uint32_t entry : {0x001B0D20u, 0x001B0D50u, 0x001B0D5Cu,
                                           0x001B0D88u, 0x001B0DA0u, 0x001B0DC8u})
                    {
                        runtime.registerFunction(entry, &kofxiTraceResourceHandlePollCompletion);
                    }
                }
            }
            if ((traceKofxiAdxStreamOpenEnabled() || kofxiAdxDefaultDeviceCompatEnabled()) &&
                runtime.hasFunction(0x001BE778u))
            {
                g_kofxiAdxStreamOpenFn = runtime.lookupFunction(0x001BE778u);
                for (uint32_t entry : {0x001BE778u, 0x001BE7C4u, 0x001BE7E0u, 0x001BE804u,
                                       0x001BE814u, 0x001BE838u, 0x001BE848u, 0x001BE858u,
                                       0x001BE898u})
                {
                    runtime.registerFunction(entry, &kofxiTraceAdxStreamOpen);
                }
            }
            if (traceKofxiAdxStreamOpenEnabled())
            {
                if (runtime.hasFunction(0x001BE6D0u))
                {
                    g_kofxiAdxResolveDeviceFn = runtime.lookupFunction(0x001BE6D0u);
                    for (uint32_t entry : {0x001BE6D0u, 0x001BE704u, 0x001BE71Cu, 0x001BE724u,
                                           0x001BE738u, 0x001BE740u, 0x001BE758u})
                    {
                        runtime.registerFunction(entry, &kofxiTraceAdxResolveDevice);
                    }
                }
                if (runtime.hasFunction(0x001BE8A0u))
                {
                    g_kofxiAdxStreamSlotAllocFn = runtime.lookupFunction(0x001BE8A0u);
                    runtime.registerFunction(0x001BE8A0u, &kofxiTraceAdxStreamSlotAlloc);
                    runtime.registerFunction(0x001BE8C0u, &kofxiTraceAdxStreamSlotAlloc);
                }
                if (runtime.hasFunction(0x001C73F8u))
                {
                    g_kofxiAdxMfsOpenFn = runtime.lookupFunction(0x001C73F8u);
                    for (uint32_t entry : {0x001C73F8u, 0x001C7440u, 0x001C745Cu, 0x001C7474u,
                                           0x001C747Cu, 0x001C7498u, 0x001C74B4u, 0x001C74E0u,
                                           0x001C7510u, 0x001C7580u})
                    {
                        runtime.registerFunction(entry, &kofxiTraceAdxMfsOpen);
                    }
                }
            }
            if ((traceKofxiAdxStreamOpenEnabled() || kofxiAdxHostCdvCompatEnabled()) &&
                runtime.hasFunction(0x001C2B98u))
            {
                g_kofxiAdxCdvOpenFn = runtime.lookupFunction(0x001C2B98u);
                runtime.registerFunction(0x001C2B98u, &kofxiTraceAdxCdvOpen);
                if (traceKofxiAdxStreamOpenEnabled())
                {
                    for (uint32_t entry : {0x001C2BE8u, 0x001C2C08u, 0x001C2C1Cu,
                                           0x001C2C3Cu, 0x001C2C4Cu, 0x001C2C54u, 0x001C2C5Cu,
                                           0x001C2C64u, 0x001C2C70u, 0x001C2CF0u})
                    {
                        runtime.registerFunction(entry, &kofxiTraceAdxCdvOpen);
                    }
                }
            }
            if (kofxiAdxHostCdvCompatEnabled())
            {
                if (runtime.hasFunction(0x001C2D10u))
                {
                    g_kofxiAdxCdvCloseFn = runtime.lookupFunction(0x001C2D10u);
                    runtime.registerFunction(0x001C2D10u, &kofxiTraceAdxCdvClose);
                }
                if (runtime.hasFunction(0x001C2D68u))
                {
                    g_kofxiAdxCdvSeekFn = runtime.lookupFunction(0x001C2D68u);
                    runtime.registerFunction(0x001C2D68u, &kofxiTraceAdxCdvSeek);
                }
                if (runtime.hasFunction(0x001C2E00u))
                {
                    g_kofxiAdxCdvTellFn = runtime.lookupFunction(0x001C2E00u);
                    runtime.registerFunction(0x001C2E00u, &kofxiTraceAdxCdvTell);
                }
                if (runtime.hasFunction(0x001C2E38u))
                {
                    g_kofxiAdxCdvReadFn = runtime.lookupFunction(0x001C2E38u);
                    runtime.registerFunction(0x001C2E38u, &kofxiTraceAdxCdvRead);
                }
            }
        }
        if (traceKofxiBootProgressEnabled())
        {
            if (runtime.hasFunction(0x001010B8u))
            {
                g_kofxiWaitVsyncOrPollCsrFn = runtime.lookupFunction(0x001010B8u);
                runtime.registerFunction(0x001010B8u, &kofxiTraceWaitVsyncOrPollCsr);
            }
            if (runtime.hasFunction(0x00119130u))
            {
                g_kofxiIopResourceRpcBindFn = runtime.lookupFunction(0x00119130u);
                runtime.registerFunction(0x00119130u, &kofxiTraceIopResourceRpcBind);
            }
            if (runtime.hasFunction(0x00119288u))
            {
                g_kofxiIopResourceRpcCommandFn = runtime.lookupFunction(0x00119288u);
                runtime.registerFunction(0x00119288u, &kofxiTraceIopResourceRpcCommand);
            }
            if (runtime.hasFunction(0x001B2718u))
            {
                g_kofxiSetSchedulerStateFn = runtime.lookupFunction(0x001B2718u);
                runtime.registerFunction(0x001B2718u, &kofxiTraceSetSchedulerState);
            }
            if (runtime.hasFunction(0x001B27B8u))
            {
                g_kofxiDispatchSchedulerStateCallbacksFn = runtime.lookupFunction(0x001B27B8u);
                runtime.registerFunction(0x001B27B8u, &kofxiTraceDispatchSchedulerStateCallbacks);
            }
            if (runtime.hasFunction(0x001B2968u))
            {
                g_kofxiNormalizeSchedulerStateFn = runtime.lookupFunction(0x001B2968u);
                runtime.registerFunction(0x001B2968u, &kofxiTraceNormalizeSchedulerState);
            }
            if (runtime.hasFunction(0x001B2A98u))
            {
                g_kofxiWakeThreadUntilFlagClearsFn = runtime.lookupFunction(0x001B2A98u);
                runtime.registerFunction(0x001B2A98u, &kofxiTraceWakeThreadUntilFlagClears);
            }
            if (runtime.hasFunction(0x001B2B80u))
            {
                g_kofxiWakePrimaryWorkerUntilFlagClearsFn = runtime.lookupFunction(0x001B2B80u);
                runtime.registerFunction(0x001B2B80u, &kofxiTraceWakePrimaryWorkerUntilFlagClears);
            }
            if (runtime.hasFunction(0x001B3FA8u))
            {
                g_kofxiServiceSchedulerTickFn = runtime.lookupFunction(0x001B3FA8u);
                runtime.registerFunction(0x001B3FA8u, &kofxiTraceServiceSchedulerTick);
            }
            if (runtime.hasFunction(0x001B3E40u))
            {
                g_kofxiVblankSchedulerDispatchFn = runtime.lookupFunction(0x001B3E40u);
                runtime.registerFunction(0x001B3E40u, &kofxiTraceVblankSchedulerDispatch);
            }
            if (runtime.hasFunction(0x001B3FC0u))
            {
                g_kofxiWorkerSchedulerTickFn = runtime.lookupFunction(0x001B3FC0u);
                runtime.registerFunction(0x001B3FC0u, &kofxiTraceWorkerSchedulerTick);
            }
            if (runtime.hasFunction(0x001B40F0u))
            {
                g_kofxiRunFrameSchedulerFn = runtime.lookupFunction(0x001B40F0u);
                runtime.registerFunction(0x001B40F0u, &kofxiTraceRunFrameScheduler);
            }
            if (runtime.hasFunction(0x001B4188u))
            {
                g_kofxiInitFrameThreadManagerFn = runtime.lookupFunction(0x001B4188u);
                runtime.registerFunction(0x001B4188u, &kofxiTraceInitFrameThreadManager);
            }
            if (runtime.hasFunction(0x001B4200u))
            {
                g_kofxiInstallVblankSchedulerFn = runtime.lookupFunction(0x001B4200u);
                runtime.registerFunction(0x001B4200u, &kofxiTraceInstallVblankScheduler);
            }
            if (runtime.hasFunction(0x001B4298u))
            {
                g_kofxiStartFrameSchedulerSystemFn = runtime.lookupFunction(0x001B4298u);
                runtime.registerFunction(0x001B4298u, &kofxiTraceStartFrameSchedulerSystem);
            }
            if (runtime.hasFunction(0x001B4488u))
            {
                g_kofxiStopFrameSchedulerSystemFn = runtime.lookupFunction(0x001B4488u);
                runtime.registerFunction(0x001B4488u, &kofxiTraceStopFrameSchedulerSystem);
            }
            if (runtime.hasFunction(0x001B4538u))
            {
                g_kofxiRegisterFrameCallbackSlot0Fn = runtime.lookupFunction(0x001B4538u);
                runtime.registerFunction(0x001B4538u, &kofxiTraceRegisterFrameCallbackSlot0);
            }
            if (runtime.hasFunction(0x001B45C8u))
            {
                g_kofxiDispatchFrameCallbackFn = runtime.lookupFunction(0x001B45C8u);
                runtime.registerFunction(0x001B45C8u, &kofxiTraceDispatchFrameCallback);
            }
            if (runtime.hasFunction(0x001B3670u))
            {
                g_kofxiThreadManagerInitFn = runtime.lookupFunction(0x001B3670u);
                runtime.registerFunction(0x001B3670u, &kofxiTraceThreadManagerInit);
            }
            if (runtime.hasFunction(0x001B36B8u))
            {
                g_kofxiThreadManagerInitResumeFn = runtime.lookupFunction(0x001B36B8u);
                runtime.registerFunction(0x001B36B8u, &kofxiTraceThreadManagerInitResume);
            }
            if (runtime.hasFunction(0x001B2BE8u))
            {
                g_kofxiWorkerThread0EntryFn = runtime.lookupFunction(0x001B2BE8u);
                runtime.registerFunction(0x001B2BE8u, &kofxiTraceWorkerThread0Entry);
            }
            if (runtime.hasFunction(0x001B2CD8u))
            {
                g_kofxiWorkerThread1EntryFn = runtime.lookupFunction(0x001B2CD8u);
                runtime.registerFunction(0x001B2CD8u, &kofxiTraceWorkerThread1Entry);
            }
            if (runtime.hasFunction(0x001B2DE0u))
            {
                g_kofxiWorkerThread2EntryFn = runtime.lookupFunction(0x001B2DE0u);
                runtime.registerFunction(0x001B2DE0u, &kofxiTraceWorkerThread2Entry);
            }
            if (runtime.hasFunction(0x001B2ED0u))
            {
                g_kofxiWorkerThread3EntryFn = runtime.lookupFunction(0x001B2ED0u);
                runtime.registerFunction(0x001B2ED0u, &kofxiTraceWorkerThread3Entry);
            }
            if (runtime.hasFunction(0x001B3008u))
            {
                g_kofxiWorkerThread4EntryFn = runtime.lookupFunction(0x001B3008u);
                runtime.registerFunction(0x001B3008u, &kofxiTraceWorkerThread4Entry);
            }
            if (runtime.hasFunction(0x001B3260u))
            {
                g_kofxiThreadCreateWorker0Fn = runtime.lookupFunction(0x001B3260u);
                runtime.registerFunction(0x001B3260u, &kofxiTraceThreadCreateWorker0);
            }
            if (runtime.hasFunction(0x001B33C0u))
            {
                g_kofxiThreadCreateWorker2Fn = runtime.lookupFunction(0x001B33C0u);
                runtime.registerFunction(0x001B33C0u, &kofxiTraceThreadCreateWorker2);
            }
            if (runtime.hasFunction(0x001B3448u))
            {
                g_kofxiThreadCreateWorker3Fn = runtime.lookupFunction(0x001B3448u);
                runtime.registerFunction(0x001B3448u, &kofxiTraceThreadCreateWorker3);
            }
            if (runtime.hasFunction(0x001B3198u))
            {
                g_kofxiThreadResumeIfSuspendedFn = runtime.lookupFunction(0x001B3198u);
                runtime.registerFunction(0x001B3198u, &kofxiTraceThreadResumeIfSuspended);
            }
            if (runtime.hasFunction(0x001B3130u))
            {
                g_kofxiThreadWakeIfSleepingFn = runtime.lookupFunction(0x001B3130u);
                runtime.registerFunction(0x001B3130u, &kofxiTraceThreadWakeIfSleeping);
            }
            if (runtime.hasFunction(0x001B3638u))
            {
                g_kofxiGetSchedulerModeFlagFn = runtime.lookupFunction(0x001B3638u);
                runtime.registerFunction(0x001B3638u, &kofxiTraceGetSchedulerModeFlag);
            }
            if (runtime.hasFunction(0x0010CB60u))
            {
                g_kofxiSyscallReferThreadStatusWrapperFn = runtime.lookupFunction(0x0010CB60u);
                runtime.registerFunction(0x0010CB60u, &kofxiTraceSyscallReferThreadStatusWrapper);
            }
            if (runtime.hasFunction(0x0010CB90u))
            {
                g_kofxiSyscallWakeupThreadWrapperFn = runtime.lookupFunction(0x0010CB90u);
                runtime.registerFunction(0x0010CB90u, &kofxiTraceSyscallWakeupThreadWrapper);
            }
            if (runtime.hasFunction(0x0010CBF0u))
            {
                g_kofxiSyscallResumeThreadWrapperFn = runtime.lookupFunction(0x0010CBF0u);
                runtime.registerFunction(0x0010CBF0u, &kofxiTraceSyscallResumeThreadWrapper);
            }
        }
        if (traceKofxiWaitSyncEnabled())
        {
            for (uint32_t entry : {
                     0x00101150u,
                     0x00101188u,
                     0x001011C8u,
                     0x00101218u,
                     0x00101248u,
                     0x00101288u,
                     0x001012ECu,
                     0x00101304u,
                     0x0010131Cu,
                     0x00101334u,
                     0x0010134Cu,
                     0x00101364u,
                     0x0010137Cu,
                     0x00101394u,
                     0x001013ACu,
                     0x001013C4u,
                     0x001013DCu})
            {
                if (!runtime.hasFunction(entry))
                {
                    continue;
                }

                PS2Runtime::RecompiledFunction original = runtime.lookupFunction(entry);
                if (original && original != &kofxiTraceWaitSyncPoll)
                {
                    g_kofxiWaitSyncPollFns[entry] = original;
                    runtime.registerFunction(entry, &kofxiTraceWaitSyncPoll);
                }
            }
        }
        if (!traceKofxiBootProgressEnabled() &&
            kofxiSchedulerModeCompatEnabled() &&
            runtime.hasFunction(0x001B3638u))
        {
            g_kofxiGetSchedulerModeFlagFn = runtime.lookupFunction(0x001B3638u);
            runtime.registerFunction(0x001B3638u, &kofxiGetSchedulerModeFlagCompat);
        }
    }

    PS2_REGISTER_GAME_OVERRIDE("RECVX sound-driver compat", "slus_201.84", 0u, 0u, &applyRecvxSoundDriverCompat);
    PS2_REGISTER_GAME_OVERRIDE("RECVX DTX compat", "slus_201.84", 0u, 0u, &applyRecvxDtxCompat);
    PS2_REGISTER_GAME_OVERRIDE("RECVX MPEG compat", "slus_201.84", 0u, 0u, &applyRecvxMpegCompat);
    PS2_REGISTER_GAME_OVERRIDE("KOFXI frame scheduler compat", "SLPS_256.60", 0u, 0u, &applyKofxiFrameSchedulerCompat);
}
