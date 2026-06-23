#include "Common.h"
#include "Thread.h"

#include <cstdlib>
#include <optional>

namespace ps2_syscalls
{
    static bool traceThreadStatusEnabled()
    {
        static const bool enabled = []()
        {
            const char *value = std::getenv("PS2X_TRACE_THREAD_STATUS");
            if (!value || value[0] == '\0')
            {
                return false;
            }

            return std::strcmp(value, "0") != 0 &&
                   std::strcmp(value, "false") != 0 &&
                   std::strcmp(value, "FALSE") != 0 &&
                   std::strcmp(value, "off") != 0 &&
                   std::strcmp(value, "OFF") != 0;
        }();
        return enabled;
    }

    static bool traceKofxiFrameThreadEnabled()
    {
        static const bool enabled = []()
        {
            const char *value = std::getenv("PS2X_TRACE_KOFXI_FRAME_THREAD");
            if (!value || value[0] == '\0')
            {
                return traceThreadStatusEnabled();
            }

            return std::strcmp(value, "0") != 0 &&
                   std::strcmp(value, "false") != 0 &&
                   std::strcmp(value, "FALSE") != 0 &&
                   std::strcmp(value, "off") != 0 &&
                   std::strcmp(value, "OFF") != 0;
        }();
        return enabled;
    }

    static uint32_t readGuestU32OrZero(uint8_t *rdram, uint32_t addr)
    {
        if (!rdram)
        {
            return 0;
        }

        uint8_t *ptr = getMemPtr(rdram, addr);
        if (!ptr)
        {
            return 0;
        }

        uint32_t value = 0;
        std::memcpy(&value, ptr, sizeof(value));
        return value;
    }

    static void traceKofxiFrameThreadEvent(const char *event,
                                           uint8_t *rdram,
                                           int targetTid,
                                           const R5900Context *ctx,
                                           int status,
                                           int waitType,
                                           int waitId,
                                           int suspendCount,
                                           int wakeupCount,
                                           int ret)
    {
        if (!traceKofxiFrameThreadEnabled())
        {
            return;
        }

        const uint32_t pc = ctx ? ctx->pc : 0u;
        const uint32_t ra = ctx ? GPR_U32(ctx, 31) : 0u;
        const bool isFrameThreadEvent = targetTid == 1 || g_currentThreadId == 1 || ra == 0x1b4118u;
        if (!isFrameThreadEvent)
        {
            return;
        }

        static std::atomic<uint32_t> s_frameTraceCount{0u};
        const uint32_t traceIndex = s_frameTraceCount.fetch_add(1u, std::memory_order_relaxed);
        if (traceIndex >= 512u)
        {
            return;
        }

        RUNTIME_LOG("[KOFXI:frame-thread] event=" << (event ? event : "")
                                                  << " caller=" << g_currentThreadId
                                                  << " target=" << targetTid
                                                  << " pc=0x" << std::hex << pc
                                                  << " ra=0x" << ra
                                                  << " frameSleep=0x" << readGuestU32OrZero(rdram, 0x0037304cu)
                                                  << " frameTid=0x" << readGuestU32OrZero(rdram, 0x00373098u)
                                                  << " workerA=0x" << readGuestU32OrZero(rdram, 0x0037309cu)
                                                  << " workerB=0x" << readGuestU32OrZero(rdram, 0x003730a0u)
                                                  << " initCount=0x" << readGuestU32OrZero(rdram, 0x00372ff4u)
                                                  << " irqGate=0x" << readGuestU32OrZero(rdram, 0x0037310cu)
                                                  << std::dec
                                                  << " status=" << status
                                                  << " waitType=0x" << std::hex << waitType
                                                  << " waitId=0x" << waitId
                                                  << std::dec
                                                  << " suspendCount=" << suspendCount
                                                  << " wakeupCount=" << wakeupCount
                                                  << " ret=" << ret
                                                  << std::endl);
    }

    static bool serialGuestThreadsEnabled()
    {
        static const bool enabled = []()
        {
            const char *value = std::getenv("PS2X_SERIAL_GUEST_THREADS");
            if (!value || value[0] == '\0')
            {
                return false;
            }

            return std::strcmp(value, "0") != 0 &&
                   std::strcmp(value, "false") != 0 &&
                   std::strcmp(value, "FALSE") != 0 &&
                   std::strcmp(value, "off") != 0 &&
                   std::strcmp(value, "OFF") != 0;
        }();
        return enabled;
    }

    static uint32_t serialWakeHandoffMicros()
    {
        static const uint32_t value = []()
        {
            const char *envValue = std::getenv("PS2X_SERIAL_WAKE_HANDOFF_US");
            if (!envValue || envValue[0] == '\0')
            {
                return 1000u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(envValue, &end, 0);
            if (end == envValue)
            {
                return 1000u;
            }

            return static_cast<uint32_t>(std::min<unsigned long>(parsed, 100000u));
        }();
        return value;
    }

    static uint32_t serialGuestContendedYieldInterval()
    {
        static const uint32_t interval = []()
        {
            const char *envValue = std::getenv("PS2X_SERIAL_CONTENDED_YIELD_INTERVAL");
            if (!envValue || envValue[0] == '\0')
            {
                return 1u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(envValue, &end, 0);
            if (end == envValue)
            {
                return 1u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 1ul, 65536ul));
        }();
        return interval;
    }

    static uint32_t serialGuestYieldHandoffMicros()
    {
        static const uint32_t micros = []()
        {
            const char *envValue = std::getenv("PS2X_SERIAL_YIELD_HANDOFF_US");
            if (!envValue || envValue[0] == '\0')
            {
                return 1000u;
            }

            char *end = nullptr;
            const unsigned long parsed = std::strtoul(envValue, &end, 0);
            if (end == envValue)
            {
                return 1000u;
            }

            return static_cast<uint32_t>(std::clamp<unsigned long>(parsed, 0ul, 100000ul));
        }();
        return micros;
    }

    static bool traceThreadHeartbeatEnabled()
    {
        static const bool enabled = []()
        {
            const char *value = std::getenv("PS2X_TRACE_THREAD_HEARTBEAT");
            if (!value || value[0] == '\0')
            {
                return false;
            }

            return std::strcmp(value, "0") != 0 &&
                   std::strcmp(value, "false") != 0 &&
                   std::strcmp(value, "FALSE") != 0 &&
                   std::strcmp(value, "off") != 0 &&
                   std::strcmp(value, "OFF") != 0;
        }();
        return enabled;
    }

    static void updateThreadDebugState(const std::shared_ptr<ThreadInfo> &info, const R5900Context *ctx, uint64_t step)
    {
        if (!info || !ctx)
        {
            return;
        }

        info->debugPc.store(ctx->pc, std::memory_order_relaxed);
        info->debugRa.store(GPR_U32(ctx, 31), std::memory_order_relaxed);
        info->debugSp.store(GPR_U32(ctx, 29), std::memory_order_relaxed);
        info->debugGp.store(GPR_U32(ctx, 28), std::memory_order_relaxed);
        info->debugStep.store(step, std::memory_order_relaxed);
    }

    static void maybeTraceThreadHeartbeat(int tid, const std::shared_ptr<ThreadInfo> &info, const R5900Context *ctx, uint64_t step)
    {
        if (!traceThreadHeartbeatEnabled() || !info || !ctx)
        {
            return;
        }

        if ((step & 0x3FFFu) != 0u)
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

        RUNTIME_LOG("[ThreadHeartbeat] tid=" << tid
                  << " step=" << step
                  << " pc=0x" << std::hex << ctx->pc
                  << " ra=0x" << GPR_U32(ctx, 31)
                  << " sp=0x" << GPR_U32(ctx, 29)
                  << " gp=0x" << GPR_U32(ctx, 28)
                  << std::dec
                  << " status=0x" << std::hex << status
                  << " waitType=0x" << waitType
                  << " waitId=0x" << waitId
                  << std::dec
                  << " wakeupCount=" << wakeupCount
                  << std::endl);
    }

    static void maybeDumpThreadDebugTable(const char *reason, int subjectId)
    {
        if (!traceThreadHeartbeatEnabled())
        {
            return;
        }

        static std::atomic<uint32_t> s_dumpCount{0u};
        const uint32_t dumpIndex = s_dumpCount.fetch_add(1u, std::memory_order_relaxed);
        if (dumpIndex >= 80u)
        {
            return;
        }

        std::vector<std::pair<int, std::shared_ptr<ThreadInfo>>> snapshot;
        {
            std::lock_guard<std::mutex> mapLock(g_thread_map_mutex);
            snapshot.reserve(g_threads.size());
            for (const auto &entry : g_threads)
            {
                snapshot.emplace_back(entry.first, entry.second);
            }
        }
        std::sort(snapshot.begin(), snapshot.end(), [](const auto &a, const auto &b)
                  { return a.first < b.first; });

        RUNTIME_LOG("[ThreadTable] reason=" << (reason ? reason : "")
                  << " subject=" << subjectId
                  << " current=" << g_currentThreadId
                  << " count=" << snapshot.size()
                  << std::endl);

        for (const auto &[tid, info] : snapshot)
        {
            if (!info)
            {
                continue;
            }

            int status = 0;
            int waitType = 0;
            int waitId = 0;
            int wakeupCount = 0;
            int priority = 0;
            bool locked = false;
            {
                std::unique_lock<std::mutex> lock(info->m, std::try_to_lock);
                locked = lock.owns_lock();
                if (locked)
                {
                    status = info->status;
                    waitType = info->waitType;
                    waitId = info->waitId;
                    wakeupCount = info->wakeupCount;
                    priority = info->currentPriority;
                }
            }

            RUNTIME_LOG("  tid=" << tid
                      << " entry=0x" << std::hex << info->entry
                      << " pc=0x" << info->debugPc.load(std::memory_order_relaxed)
                      << " ra=0x" << info->debugRa.load(std::memory_order_relaxed)
                      << " sp=0x" << info->debugSp.load(std::memory_order_relaxed)
                      << " gp=0x" << info->debugGp.load(std::memory_order_relaxed)
                      << std::dec
                      << " step=" << info->debugStep.load(std::memory_order_relaxed)
                      << " prio=" << priority
                      << " status=0x" << std::hex << status
                      << " waitType=0x" << waitType
                      << " waitId=0x" << waitId
                      << std::dec
                      << " wakeupCount=" << wakeupCount
                      << " locked=" << locked
                      << std::endl);
        }
    }

    static void yieldSerialGuestExecutionIfContended(PS2Runtime *runtime)
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

    static void handOffSerialGuestExecutionAfterWake(PS2Runtime *runtime)
    {
        if (!serialGuestThreadsEnabled() || !runtime)
        {
            return;
        }

        PS2Runtime::GuestExecutionReleaseScope releaseGuestExecution(runtime);
        const uint32_t handoffMicros = serialWakeHandoffMicros();
        if (handoffMicros != 0u)
        {
            std::this_thread::sleep_for(std::chrono::microseconds(handoffMicros));
        }
        else
        {
            std::this_thread::yield();
        }
    }

    static void applySuspendStatusLocked(ThreadInfo &info)
    {
        if (info.waitType != TSW_NONE)
        {
            info.status = THS_WAITSUSPEND;
        }
        else
        {
            info.status = THS_SUSPEND;
        }
    }

    static void runExitHandlersForThread(int tid, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!runtime || !ctx)
            return;

        std::vector<ExitHandlerEntry> handlers;
        {
            std::lock_guard<std::mutex> lock(g_exit_handler_mutex);
            auto it = g_exit_handlers.find(tid);
            if (it == g_exit_handlers.end())
                return;
            handlers = std::move(it->second);
            g_exit_handlers.erase(it);
        }

        for (const auto &handler : handlers)
        {
            if (!handler.func)
                continue;
            try
            {
                rpcInvokeFunction(rdram, ctx, runtime, handler.func, handler.arg, 0, 0, 0, nullptr);
            }
            catch (const ThreadExitException &)
            {
                // ignore
            }
            catch (const std::exception &)
            {
            }
        }
    }

    void FlushCache(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, KE_OK);
    }

    void iFlushCache(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        FlushCache(rdram, ctx, runtime);
    }

    void EnableCache(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, KE_OK);
    }

    void DisableCache(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, KE_OK);
    }

    void ResetEE(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        std::cerr << "Syscall: ResetEE - requesting runtime stop" << std::endl;
        // runtime->requestStop();
        setReturnS32(ctx, KE_OK);
    }

    void SetMemoryMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, KE_OK);
    }

    void InitThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        // This is a common ps2sdk helper that some games link against.
        setReturnS32(ctx, 1);
    }

    void CreateThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint32_t paramAddr = getRegU32(ctx, 4); // $a0 points to ThreadParam
        if (paramAddr == 0u)
        {
            std::cerr << "CreateThread error: null ThreadParam pointer" << std::endl;
            setReturnS32(ctx, KE_ERROR);
            return;
        }

        const uint32_t *param = reinterpret_cast<const uint32_t *>(getConstMemPtr(rdram, paramAddr));

        if (!param)
        {
            std::cerr << "CreateThread error: invalid ThreadParam address 0x" << std::hex << paramAddr << std::dec << std::endl;
            setReturnS32(ctx, KE_ERROR);
            return;
        }

        auto info = std::make_shared<ThreadInfo>();
        info->attr = param[0];
        info->entry = param[1];
        info->stack = param[2];
        info->stackSize = param[3];

        auto looksLikeGuestPtr = [](uint32_t v) -> bool
        {
            if (v == 0)
            {
                return true;
            }
            const uint32_t norm = v & 0x1FFFFFFFu;
            return norm < PS2_RAM_SIZE && norm >= 0x10000u;
        };

        auto looksLikePriority = [](uint32_t v) -> bool
        {
            // Typical EE priorities are very small integers (1..127).
            return v <= 0x400u;
        };

        const uint32_t gpA = param[4];
        const uint32_t prioA = param[5];
        const uint32_t gpB = param[5];
        const uint32_t prioB = param[4];

        // Prefer the standard EE layout (gp at +0x10, priority at +0x14),
        // but keep a fallback for callsites that used the swapped decode.
        if (looksLikeGuestPtr(gpA) && looksLikePriority(prioA))
        {
            info->gp = gpA;
            info->priority = prioA;
        }
        else if (looksLikeGuestPtr(gpB) && looksLikePriority(prioB))
        {
            info->gp = gpB;
            info->priority = prioB;
        }
        else
        {
            info->gp = gpA;
            info->priority = prioA;
        }

        info->option = param[6];
        if (info->priority == 0)
        {
            info->priority = 1;
        }
        if (info->priority >= 128)
        {
            info->priority = 127;
        }
        info->currentPriority = static_cast<int>(info->priority);

        int id = 0;
        {
            std::lock_guard<std::mutex> lock(g_thread_map_mutex);
            // Keep IDs in the classic low range used by patched libkernel helpers.
            for (int attempts = 0; attempts < 0xFE; ++attempts)
            {
                if (g_nextThreadId < 2 || g_nextThreadId > 0xFF)
                {
                    g_nextThreadId = 2;
                }

                const int candidate = g_nextThreadId;
                g_nextThreadId = (g_nextThreadId >= 0xFF) ? 2 : (g_nextThreadId + 1);

                if (g_threads.find(candidate) == g_threads.end())
                {
                    id = candidate;
                    break;
                }
            }

            if (id == 0)
            {
                setReturnS32(ctx, KE_ERROR);
                return;
            }

            g_threads[id] = info;
        }

        if (traceThreadStatusEnabled())
        {
            RUNTIME_LOG("[CreateThread] id=" << id
                                             << " entry=0x" << std::hex << info->entry
                                             << " stack=0x" << info->stack
                                             << " size=0x" << info->stackSize
                                             << " gp=0x" << info->gp
                                             << " prio=" << std::dec << info->priority << std::endl);
        }

        setReturnS32(ctx, id);
    }

    void DeleteThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = static_cast<int>(getRegU32(ctx, 4)); // $a0
        if (tid == 0)
        {
            setReturnS32(ctx, KE_ILLEGAL_THID);
            return;
        }

        auto info = lookupThreadInfo(tid);
        if (!info)
        {
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        uint32_t autoStackToFree = 0;
        {
            std::lock_guard<std::mutex> lock(info->m);
            if (info->started || info->status != THS_DORMANT)
            {
                setReturnS32(ctx, KE_NOT_DORMANT);
                return;
            }

            if (info->ownsStack && info->stack != 0)
            {
                autoStackToFree = info->stack;
                info->stack = 0;
                info->stackSize = 0;
                info->ownsStack = false;
            }
        }

        {
            std::lock_guard<std::mutex> lock(g_thread_map_mutex);
            g_threads.erase(tid);
        }

        {
            std::lock_guard<std::mutex> lock(g_exit_handler_mutex);
            g_exit_handlers.erase(tid);
        }

        if (runtime && autoStackToFree != 0)
        {
            runtime->guestFree(autoStackToFree);
        }

        setReturnS32(ctx, KE_OK);
    }

    void StartThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = static_cast<int>(getRegU32(ctx, 4)); // $a0 = thread id
        uint32_t arg = getRegU32(ctx, 5);              // $a1 = user arg
        if (tid == 0)
        {
            RUNTIME_LOG("[StartThread:reject] tid=0 arg=0x" << std::hex << arg << std::dec << std::endl);
            setReturnS32(ctx, KE_ILLEGAL_THID);
            return;
        }

        auto info = lookupThreadInfo(tid);
        if (!info)
        {
            std::cerr << "StartThread error: unknown thread id " << tid << std::endl;
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        if (!runtime || !runtime->hasFunction(info->entry))
        {
            std::cerr << "[StartThread] entry 0x" << std::hex << info->entry << std::dec << " is not registered" << std::endl;
            setReturnS32(ctx, KE_ERROR);
            return;
        }
        if (runtime->isStopRequested())
        {
            RUNTIME_LOG("[StartThread:reject] id=" << tid << " runtime stop requested" << std::endl);
            setReturnS32(ctx, KE_ERROR);
            return;
        }

        joinHostThreadById(tid);

        const uint32_t callerSp = getRegU32(ctx, 29);
        const uint32_t callerGp = getRegU32(ctx, 28);
        const uint32_t callerCop0Status = ctx ? ctx->cop0_status : 0u;

        {
            std::lock_guard<std::mutex> lock(info->m);
            if (info->started || info->status != THS_DORMANT)
            {
                RUNTIME_LOG("[StartThread:reject] id=" << tid
                                                       << " started=" << info->started
                                                       << " status=" << info->status
                                                       << std::endl);
                setReturnS32(ctx, KE_NOT_DORMANT);
                return;
            }

            info->started = true;
            info->status = THS_READY;
            info->arg = arg;
            info->terminated = false;
            info->forceRelease = false;
            info->waitType = TSW_NONE;
            info->waitId = 0;
            info->wakeupCount = 0;
            info->suspendCount = 0;
            if (info->stack == 0 && info->stackSize != 0)
            {
                const uint32_t autoStack = runtime->guestMalloc(info->stackSize, 16u);
                if (autoStack != 0)
                {
                    info->stack = autoStack;
                    info->ownsStack = true;
                    if (traceThreadStatusEnabled())
                    {
                        RUNTIME_LOG("[StartThread] id=" << tid
                                                        << " auto-stack=0x" << std::hex << autoStack
                                                        << " size=0x" << info->stackSize << std::dec << std::endl);
                    }
                }
            }

            if (info->stack != 0 && info->stackSize == 0)
            {
                // Some games leave size zero in the thread param even though a stack
                // buffer is supplied; use a conservative default instead of caller SP.
                info->stackSize = 0x800u;
            }
        }

        g_activeThreads.fetch_add(1, std::memory_order_relaxed);
        try
        {
            std::thread worker([=]() mutable
                               {
            {
                std::string name = "PS2Thread_" + std::to_string(tid);
                ThreadNaming::SetCurrentThreadName(name);
            }
            R5900Context threadCtxCopy{};
            R5900Context *threadCtx = &threadCtxCopy;

            {
                std::lock_guard<std::mutex> lock(info->m);
                info->status = THS_RUN;
            }

            uint32_t threadSp = callerSp;
            if (info->stack)
            {
                const uint32_t stackSize = (info->stackSize != 0) ? info->stackSize : 0x800u;
                threadSp = (info->stack + stackSize) & ~0xFu;
            }
            uint32_t threadGp = info->gp;
            const uint32_t normalizedGp = threadGp & 0x1FFFFFFFu;
            if (threadGp == 0 || normalizedGp < 0x10000u || normalizedGp >= PS2_RAM_SIZE)
            {
                threadGp = callerGp;
            }

            SET_GPR_U32(threadCtx, 29, threadSp);
            SET_GPR_U32(threadCtx, 28, threadGp);
            SET_GPR_U32(threadCtx, 4, info->arg);
            SET_GPR_U32(threadCtx, 31, 0);
            threadCtx->cop0_status = callerCop0Status;
            threadCtx->pc = info->entry;

            g_currentThreadId = tid;

            if (traceThreadStatusEnabled())
            {
                RUNTIME_LOG("[StartThread] id=" << tid
                          << " entry=0x" << std::hex << info->entry
                          << " sp=0x" << GPR_U32(threadCtx, 29)
                          << " gp=0x" << GPR_U32(threadCtx, 28)
                          << " arg=0x" << info->arg
                          << " cop0=0x" << threadCtx->cop0_status << std::dec << std::endl);
            }

            bool exited = false;
            try
            {
                std::optional<PS2Runtime::GuestExecutionScope> serialGuestExecution;
                if (serialGuestThreadsEnabled())
                {
                    if (traceThreadStatusEnabled())
                    {
                        static std::atomic<uint32_t> s_serialLogCount{0u};
                        if (s_serialLogCount.fetch_add(1u, std::memory_order_relaxed) < 16u)
                        {
                            RUNTIME_LOG("[StartThread] id=" << tid
                                      << " PS2X_SERIAL_GUEST_THREADS=1: holding guest execution lock across worker loop"
                                      << std::endl);
                        }
                    }
                    serialGuestExecution.emplace(runtime);
                }

                uint32_t lastPc = 0xFFFFFFFFu;
                uint32_t samePcCount = 0;
                constexpr uint32_t kSamePcYieldMask = 0x3FFFu;
                constexpr uint32_t kSamePcWarnInterval = 0x20000u;
                uint64_t stepCount = 0u;

                while (runtime && !runtime->isStopRequested())
                {
                    ++stepCount;
                    if (info->terminated.load(std::memory_order_relaxed))
                    {
                        throw ThreadExitException();
                    }

                    waitWhileSuspended(info, runtime);
                    updateThreadDebugState(info, threadCtx, stepCount);
                    maybeTraceThreadHeartbeat(tid, info, threadCtx, stepCount);

                    const uint32_t pc = threadCtx->pc;
                    const uint32_t ra = GPR_U32(threadCtx, 31);
                    if (pc == 0u || (pc < 0x00100000u && pc == ra))
                    {
                        if (pc != 0u && traceThreadStatusEnabled())
                        {
                            RUNTIME_LOG("[StartThread] id=" << tid
                                      << " returned via low sentinel pc=0x" << std::hex << pc
                                      << " sp=0x" << GPR_U32(threadCtx, 29)
                                      << " gp=0x" << GPR_U32(threadCtx, 28)
                                      << std::dec << std::endl);
                        }
                        break;
                    }

                    if (traceThreadStatusEnabled() && (stepCount & 0x1FFFFFu) == 0u)
                    {
                        RUNTIME_LOG("[StartThread] id=" << tid
                                  << " heartbeat pc=0x" << std::hex << pc
                                  << " ra=0x" << GPR_U32(threadCtx, 31)
                                  << " sp=0x" << GPR_U32(threadCtx, 29)
                                  << " gp=0x" << GPR_U32(threadCtx, 28)
                                  << std::dec << std::endl);
                    }

                    if (pc == lastPc)
                    {
                        ++samePcCount;
                        if ((samePcCount & kSamePcYieldMask) == 0u)
                        {
                            std::this_thread::yield();
                        }
                        if (traceThreadStatusEnabled() && (samePcCount % kSamePcWarnInterval) == 0u)
                        {
                            RUNTIME_LOG("[StartThread] id=" << tid
                                      << " spinning at pc=0x" << std::hex << pc
                                      << " ra=0x" << GPR_U32(threadCtx, 31)
                                      << std::dec << std::endl);
                        }
                    }
                    else
                    {
                        samePcCount = 0;
                        lastPc = pc;
                    }

                    if (serialGuestExecution)
                    {
                        PS2Runtime::RecompiledFunction step = runtime->lookupFunction(pc);
                        if (!step)
                        {
                            std::cerr << "[StartThread] id=" << tid << " missing function for pc=0x"
                                      << std::hex << pc << std::dec << std::endl;
                            throw ThreadExitException();
                        }
                        step(rdram, threadCtx, runtime);
                        yieldSerialGuestExecutionIfContended(runtime);
                    }
                    else
                    {
                        PS2Runtime::GuestExecutionScope guestExecution(runtime);
                        PS2Runtime::RecompiledFunction step = runtime->lookupFunction(pc);
                        if (!step)
                        {
                            std::cerr << "[StartThread] id=" << tid << " missing function for pc=0x"
                                      << std::hex << pc << std::dec << std::endl;
                            throw ThreadExitException();
                        }
                        step(rdram, threadCtx, runtime);
                    }
                }
            }
            catch (const ThreadExitException &)
            {
                exited = true;
            }
            catch (const std::exception &e)
            {
                std::cerr << "[StartThread] id=" << tid << " exception: " << e.what() << std::endl;
            }

            if (!exited && traceThreadStatusEnabled())
            {
                RUNTIME_LOG("[StartThread] id=" << tid << " returned (pc=0x"
                          << std::hex << threadCtx->pc << std::dec << ")" << std::endl);
            }

            runExitHandlersForThread(tid, rdram, threadCtx, runtime);

            uint32_t detachedAutoStack = 0;
            {
                std::lock_guard<std::mutex> lock(info->m);
                info->started = false;
                info->status = THS_DORMANT;
                info->waitType = TSW_NONE;
                info->waitId = 0;
                info->wakeupCount = 0;
                info->suspendCount = 0;
                info->forceRelease = false;
                info->terminated = false;
            }

            bool stillRegistered = false;
            {
                std::lock_guard<std::mutex> lock(g_thread_map_mutex);
                stillRegistered = (g_threads.find(tid) != g_threads.end());
            }
            if (!stillRegistered)
            {
                // ExitDeleteThread removes the record immediately; reclaim auto stack here.
                std::lock_guard<std::mutex> lock(info->m);
                if (info->ownsStack && info->stack != 0)
                {
                    detachedAutoStack = info->stack;
                    info->stack = 0;
                    info->stackSize = 0;
                    info->ownsStack = false;
                }
            }

            if (detachedAutoStack != 0 && runtime)
            {
                runtime->guestFree(detachedAutoStack);
            }

            // Notify anybody waiting for termination (like TerminateThread)
            info->cv.notify_all();

            g_activeThreads.fetch_sub(1, std::memory_order_relaxed); });
            registerHostThread(tid, std::move(worker));
        }
        catch (const std::exception &e)
        {
            std::cerr << "[StartThread] failed to spawn host thread for tid=" << tid << ": " << e.what() << std::endl;
            g_activeThreads.fetch_sub(1, std::memory_order_relaxed);
            std::lock_guard<std::mutex> lock(info->m);
            info->started = false;
            info->status = THS_DORMANT;
            info->waitType = TSW_NONE;
            info->waitId = 0;
            info->wakeupCount = 0;
            info->suspendCount = 0;
            info->forceRelease = false;
            info->terminated = false;
            setReturnS32(ctx, KE_ERROR);
            return;
        }

        setReturnS32(ctx, KE_OK);
    }

    void ExitThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        RUNTIME_LOG("[ExitThread] Game requested thread exit! PC=0x" << std::hex << ctx->pc
                                                                     << " RA=0x" << getRegU32(ctx, 31) << std::dec << " tid=" << g_currentThreadId << std::endl);

        runExitHandlersForThread(g_currentThreadId, rdram, ctx, runtime);
        auto info = ensureCurrentThreadInfo(ctx);
        if (info)
        {
            std::lock_guard<std::mutex> lock(info->m);
            info->terminated = true;
            info->forceRelease = true;
            info->waitType = TSW_NONE;
            info->waitId = 0;
            info->wakeupCount = 0;
        }
        if (info)
        {
            info->cv.notify_all();
        }
        throw ThreadExitException();
    }

    void ExitDeleteThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = g_currentThreadId;
        RUNTIME_LOG("[ExitDeleteThread] Game requested thread exit & delete! PC=0x" << std::hex << ctx->pc
                                                                                    << " RA=0x" << getRegU32(ctx, 31) << std::dec << " tid=" << tid << std::endl);

        runExitHandlersForThread(tid, rdram, ctx, runtime);
        auto info = ensureCurrentThreadInfo(ctx);
        if (info)
        {
            std::lock_guard<std::mutex> lock(info->m);
            info->terminated = true;
            info->forceRelease = true;
            info->waitType = TSW_NONE;
            info->waitId = 0;
            info->wakeupCount = 0;
        }
        if (info)
        {
            info->cv.notify_all();
        }
        {
            std::lock_guard<std::mutex> lock(g_thread_map_mutex);
            g_threads.erase(tid);
        }
        throw ThreadExitException();
    }

    void TerminateThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = static_cast<int>(getRegU32(ctx, 4));
        if (tid == 0)
            tid = g_currentThreadId;

        auto info = (tid == g_currentThreadId) ? ensureCurrentThreadInfo(ctx) : lookupThreadInfo(tid);
        if (!info)
        {
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        {
            std::lock_guard<std::mutex> lock(info->m);
            if (info->status == THS_DORMANT)
            {
                setReturnS32(ctx, KE_DORMANT);
                return;
            }
            info->terminated = true;
            info->forceRelease = true;
        }
        info->cv.notify_all();

        if (tid == g_currentThreadId)
        {
            runExitHandlersForThread(tid, rdram, ctx, runtime);
            throw ThreadExitException();
        }
        else
        {
            // Block until the target thread actually finishes unwinding and becomes dormant
            std::unique_lock<std::mutex> lock(info->m);
            {
                PS2Runtime::GuestExecutionReleaseScope releaseGuestExecution(runtime);
                info->cv.wait(lock, [&]()
                              { return !info->started && info->status == THS_DORMANT; });
            }
        }

        setReturnS32(ctx, KE_OK);
    }

    void SuspendThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = static_cast<int>(getRegU32(ctx, 4));
        if (tid == 0)
            tid = g_currentThreadId;

        auto info = (tid == g_currentThreadId) ? ensureCurrentThreadInfo(ctx) : lookupThreadInfo(tid);
        if (!info)
        {
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        int statusAfter = THS_DORMANT;
        int waitTypeAfter = TSW_NONE;
        int suspendCountAfter = 0;
        {
            std::lock_guard<std::mutex> lock(info->m);
            if (info->status == THS_DORMANT)
            {
                setReturnS32(ctx, KE_DORMANT);
                if (traceThreadStatusEnabled())
                {
                    RUNTIME_LOG("[SuspendThread] caller=" << g_currentThreadId
                                                          << " tid=" << tid
                                                          << " ret=" << KE_DORMANT
                                                          << " status=0x" << std::hex << info->status
                                                          << std::dec << std::endl);
                }
                return;
            }
            info->suspendCount++;
            applySuspendStatusLocked(*info);
            statusAfter = info->status;
            waitTypeAfter = info->waitType;
            suspendCountAfter = info->suspendCount;
        }
        info->cv.notify_all();

        if (tid == g_currentThreadId)
        {
            std::unique_lock<std::mutex> lock(info->m);
            {
                PS2Runtime::GuestExecutionReleaseScope releaseGuestExecution(runtime);
                info->cv.wait(lock, [&]()
                              { return info->suspendCount == 0 || info->terminated.load(); });
            }
            if (info->terminated.load())
            {
                throw ThreadExitException();
            }
            info->status = THS_RUN;
            statusAfter = info->status;
            waitTypeAfter = info->waitType;
            suspendCountAfter = info->suspendCount;
        }

        if (traceThreadStatusEnabled())
        {
            static std::atomic<uint32_t> s_suspendTraceCount{0};
            const uint32_t traceCount = s_suspendTraceCount.fetch_add(1, std::memory_order_relaxed);
            if (traceCount < 128u || (traceCount & 0x3ffu) == 0u)
            {
                RUNTIME_LOG("[SuspendThread] caller=" << g_currentThreadId
                                                      << " tid=" << tid
                                                      << " ret=" << KE_OK
                                                      << " status=0x" << std::hex << statusAfter
                                                      << " waitType=0x" << waitTypeAfter
                                                      << std::dec
                                                      << " suspendCount=" << suspendCountAfter
                                                      << " pc=0x" << std::hex << ctx->pc
                                                      << " ra=0x" << getRegU32(ctx, 31)
                                                      << std::dec << std::endl);
            }
        }

        setReturnS32(ctx, KE_OK);
    }

    void ResumeThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = static_cast<int>(getRegU32(ctx, 4));
        if (tid == 0)
            tid = g_currentThreadId;

        auto info = (tid == g_currentThreadId) ? ensureCurrentThreadInfo(ctx) : lookupThreadInfo(tid);
        if (!info)
        {
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        int ret = KE_OK;
        int statusAfter = THS_DORMANT;
        int waitTypeAfter = TSW_NONE;
        int suspendCountAfter = 0;
        {
            std::lock_guard<std::mutex> lock(info->m);
            if (info->status == THS_DORMANT)
            {
                ret = KE_DORMANT;
                statusAfter = info->status;
                waitTypeAfter = info->waitType;
                suspendCountAfter = info->suspendCount;
            }
            else if (info->suspendCount <= 0)
            {
                ret = KE_NOT_SUSPEND;
                statusAfter = info->status;
                waitTypeAfter = info->waitType;
                suspendCountAfter = info->suspendCount;
            }
            else
            {
                info->suspendCount--;
                if (info->suspendCount == 0)
                {
                    if (info->waitType != TSW_NONE)
                    {
                        info->status = THS_WAIT;
                    }
                    else
                    {
                        info->status = (tid == g_currentThreadId) ? THS_RUN : THS_READY;
                    }
                }
                statusAfter = info->status;
                waitTypeAfter = info->waitType;
                suspendCountAfter = info->suspendCount;
            }
        }
        if (ret == KE_OK)
        {
            info->cv.notify_all();
        }

        if (traceThreadStatusEnabled())
        {
            static std::atomic<uint32_t> s_resumeTraceCount{0};
            const uint32_t traceCount = s_resumeTraceCount.fetch_add(1, std::memory_order_relaxed);
            if (traceCount < 128u || (traceCount & 0x3ffu) == 0u)
            {
                RUNTIME_LOG("[ResumeThread] caller=" << g_currentThreadId
                                                     << " tid=" << tid
                                                     << " ret=" << ret
                                                     << " status=0x" << std::hex << statusAfter
                                                     << " waitType=0x" << waitTypeAfter
                                                     << std::dec
                                                     << " suspendCount=" << suspendCountAfter
                                                     << " pc=0x" << std::hex << ctx->pc
                                                     << " ra=0x" << getRegU32(ctx, 31)
                                                     << std::dec << std::endl);
            }
        }

        setReturnS32(ctx, ret);
    }

    void GetThreadId(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, g_currentThreadId);
    }

    void ReferThreadStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = static_cast<int>(getRegU32(ctx, 4));
        uint32_t statusAddr = getRegU32(ctx, 5);

        if (tid == 0) // TH_SELF
        {
            tid = g_currentThreadId;
        }

        auto info = (tid == g_currentThreadId) ? ensureCurrentThreadInfo(ctx) : lookupThreadInfo(tid);
        if (!info)
        {
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        ee_thread_status_t *status = reinterpret_cast<ee_thread_status_t *>(getMemPtr(rdram, statusAddr));
        if (!status)
        {
            setReturnS32(ctx, KE_ERROR);
            return;
        }

        int statusValue = 0;
        int waitType = 0;
        int waitId = 0;
        int suspendCount = 0;
        int wakeupCount = 0;
        bool started = false;
        uint32_t entry = 0;
        {
            std::lock_guard<std::mutex> lock(info->m);
            statusValue = info->status;
            waitType = info->waitType;
            waitId = info->waitId;
            suspendCount = info->suspendCount;
            wakeupCount = info->wakeupCount;
            started = info->started;
            entry = info->entry;
            status->status = info->status;
            status->func = info->entry;
            status->stack = info->stack;
            status->stack_size = info->stackSize;
            status->gp_reg = info->gp;
            status->initial_priority = info->priority;
            status->current_priority = info->currentPriority;
            status->attr = info->attr;
            status->option = info->option;
            status->waitType = info->waitType;
            status->waitId = info->waitId;
            status->wakeupCount = info->wakeupCount;
        }

        if (traceThreadStatusEnabled())
        {
            static std::atomic<uint32_t> s_traceCount{0};
            const uint32_t traceCount = s_traceCount.fetch_add(1, std::memory_order_relaxed);
            if (traceCount < 256u || (traceCount & 0x3ffu) == 0u)
            {
                RUNTIME_LOG("[ReferThreadStatus] caller=" << g_currentThreadId
                                                          << " tid=" << tid
                                                          << " status=0x" << std::hex << statusValue
                                                          << " waitType=0x" << waitType
                                                          << " waitId=0x" << waitId
                                                          << " wakeup=" << std::dec << wakeupCount
                                                          << " suspendCount=" << suspendCount
                                                          << " started=" << started
                                                          << " entry=0x" << std::hex << entry
                                                          << " pc=0x" << ctx->pc
                                                          << " ra=0x" << getRegU32(ctx, 31)
                                                          << std::dec << std::endl);
            }
        }
        traceKofxiFrameThreadEvent("ReferThreadStatus",
                                   rdram,
                                   tid,
                                   ctx,
                                   statusValue,
                                   waitType,
                                   waitId,
                                   suspendCount,
                                   wakeupCount,
                                   KE_OK);

        setReturnS32(ctx, KE_OK);
    }

    void iReferThreadStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ReferThreadStatus(rdram, ctx, runtime);
    }

    void SleepThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        auto info = ensureCurrentThreadInfo(ctx);
        if (!info)
        {
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        throwIfTerminated(info);

        int ret = 0;
        std::unique_lock<std::mutex> lock(info->m);

        if (info->wakeupCount > 0)
        {
            info->wakeupCount--;
            info->status = THS_RUN;
            info->waitType = TSW_NONE;
            info->waitId = 0;
            ret = 0;
        }
        else
        {
            if (traceThreadStatusEnabled())
            {
                static std::atomic<uint32_t> s_sleepBlockLogs{0};
                const uint32_t sleepBlockLog = s_sleepBlockLogs.fetch_add(1, std::memory_order_relaxed);
                if (sleepBlockLog < 256u)
                {
                    RUNTIME_LOG("[SleepThread:block] tid=" << g_currentThreadId
                                                           << " pc=0x" << std::hex << ctx->pc
                                                           << " ra=0x" << getRegU32(ctx, 31)
                                                           << std::dec << std::endl);
                }
            }
            maybeDumpThreadDebugTable("SleepThread:block", g_currentThreadId);

            info->status = (info->suspendCount > 0) ? THS_WAITSUSPEND : THS_WAIT;
            info->waitType = TSW_SLEEP;
            info->waitId = 0;
            info->forceRelease = false;
            traceKofxiFrameThreadEvent("SleepThread:block",
                                       rdram,
                                       g_currentThreadId,
                                       ctx,
                                       info->status,
                                       info->waitType,
                                       info->waitId,
                                       info->suspendCount,
                                       info->wakeupCount,
                                       ret);

            {
                PS2Runtime::GuestExecutionReleaseScope releaseGuestExecution(runtime);
                info->cv.wait(lock, [&]()
                              { return info->wakeupCount > 0 || info->forceRelease.load() || info->terminated.load(); });
            }

            if (info->terminated.load())
            {
                throw ThreadExitException();
            }

            info->status = THS_RUN;
            info->waitType = TSW_NONE;
            info->waitId = 0;

            if (info->forceRelease.load())
            {
                info->forceRelease = false;
                ret = KE_RELEASE_WAIT;
            }
            else
            {
                if (info->wakeupCount > 0)
                    info->wakeupCount--;
                ret = 0;
            }
        }

        if (traceThreadStatusEnabled())
        {
            static std::atomic<uint32_t> s_sleepWakeLogs{0};
            const uint32_t sleepWakeLog = s_sleepWakeLogs.fetch_add(1, std::memory_order_relaxed);
            if (sleepWakeLog < 256u)
            {
                RUNTIME_LOG("[SleepThread:wake] tid=" << g_currentThreadId
                                                      << " ret=" << ret
                                                      << " wakeupCount=" << info->wakeupCount
                                                      << std::endl);
            }
        }
        traceKofxiFrameThreadEvent("SleepThread:wake",
                                   rdram,
                                   g_currentThreadId,
                                   ctx,
                                   info->status,
                                   info->waitType,
                                   info->waitId,
                                   info->suspendCount,
                                   info->wakeupCount,
                                   ret);
        maybeDumpThreadDebugTable("SleepThread:wake", g_currentThreadId);

        lock.unlock();
        waitWhileSuspended(info, runtime);
        setReturnS32(ctx, ret);
    }

    void WakeupThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = static_cast<int>(getRegU32(ctx, 4));
        auto traceWakeupReject = [&](const char *reason, int ret)
        {
            if (!traceThreadStatusEnabled())
            {
                return;
            }

            static std::atomic<uint32_t> s_rejectLogs{0u};
            const uint32_t rejectLog = s_rejectLogs.fetch_add(1u, std::memory_order_relaxed);
            if (rejectLog < 128u)
            {
                RUNTIME_LOG("[WakeupThread:reject] caller=" << g_currentThreadId
                                                            << " target=" << tid
                                                            << " reason=" << reason
                                                            << " ret=" << ret
                                                            << " pc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                                                            << std::dec << std::endl);
            }
        };

        if (tid == 0)
        {
            traceWakeupReject("zero", KE_ILLEGAL_THID);
            setReturnS32(ctx, KE_ILLEGAL_THID);
            return;
        }
        if (tid == g_currentThreadId)
        {
            traceWakeupReject("self", KE_ILLEGAL_THID);
            setReturnS32(ctx, KE_ILLEGAL_THID);
            return;
        }

        auto info = lookupThreadInfo(tid);
        if (!info)
        {
            traceWakeupReject("unknown", KE_UNKNOWN_THID);
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        int newWakeupCount = 0;
        int statusAfter = THS_DORMANT;
        int waitTypeAfter = TSW_NONE;
        int waitIdAfter = 0;
        int suspendCountAfter = 0;
        uint32_t targetEntry = 0u;
        {
            std::lock_guard<std::mutex> lock(info->m);
            if (info->status == THS_DORMANT)
            {
                traceWakeupReject("dormant", KE_DORMANT);
                setReturnS32(ctx, KE_DORMANT);
                return;
            }
            if ((info->status == THS_WAIT || info->status == THS_WAITSUSPEND) && info->waitType == TSW_SLEEP)
            {
                if (info->suspendCount > 0)
                {
                    info->status = THS_SUSPEND;
                }
                else
                {
                    info->status = THS_READY;
                }
                info->waitType = TSW_NONE;
                info->waitId = 0;
                info->wakeupCount++;
                info->cv.notify_one();
            }
            else
            {
                info->wakeupCount++;
            }
            newWakeupCount = info->wakeupCount;
            statusAfter = info->status;
            waitTypeAfter = info->waitType;
            waitIdAfter = info->waitId;
            suspendCountAfter = info->suspendCount;
            targetEntry = info->entry;
        }

        if (traceThreadStatusEnabled())
        {
            static std::atomic<uint32_t> s_wakeupLogs{0};
            const uint32_t wakeupLog = s_wakeupLogs.fetch_add(1, std::memory_order_relaxed);
            if (wakeupLog < 256u)
            {
                RUNTIME_LOG("[WakeupThread] tid=" << g_currentThreadId
                                                  << " target=" << tid
                                                  << " callerPc=0x" << std::hex << (ctx ? ctx->pc : 0u)
                                                  << " callerRa=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                                                  << " targetEntry=0x" << targetEntry
                                                  << std::dec
                                                  << " status=" << statusAfter
                                                  << " waitType=0x" << std::hex << waitTypeAfter
                                                  << " waitId=0x" << waitIdAfter
                                                  << std::dec
                                                  << " suspendCount=" << suspendCountAfter
                                                  << " wakeupCount=" << newWakeupCount
                                                  << std::endl);
            }
        }
        traceKofxiFrameThreadEvent("WakeupThread",
                                   rdram,
                                   tid,
                                   ctx,
                                   statusAfter,
                                   waitTypeAfter,
                                   waitIdAfter,
                                   suspendCountAfter,
                                   newWakeupCount,
                                   KE_OK);
        maybeDumpThreadDebugTable("WakeupThread", tid);
        setReturnS32(ctx, KE_OK);
        handOffSerialGuestExecutionAfterWake(runtime);
    }

    void iWakeupThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        WakeupThread(rdram, ctx, runtime);
    }

    void CancelWakeupThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = static_cast<int>(getRegU32(ctx, 4));
        if (tid == 0)
            tid = g_currentThreadId;

        auto info = (tid == g_currentThreadId) ? ensureCurrentThreadInfo(ctx) : lookupThreadInfo(tid);
        if (!info)
        {
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        int previous = 0;
        {
            std::lock_guard<std::mutex> lock(info->m);
            previous = info->wakeupCount;
            info->wakeupCount = 0;
        }
        setReturnS32(ctx, previous);
    }

    void iCancelWakeupThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = static_cast<int>(getRegU32(ctx, 4));
        if (tid == 0)
        {
            setReturnS32(ctx, KE_ILLEGAL_THID);
            return;
        }

        auto info = lookupThreadInfo(tid);
        if (!info)
        {
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        int previous = 0;
        {
            std::lock_guard<std::mutex> lock(info->m);
            previous = info->wakeupCount;
            info->wakeupCount = 0;
        }
        setReturnS32(ctx, previous);
    }

    void ChangeThreadPriority(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = static_cast<int>(getRegU32(ctx, 4));
        int newPrio = static_cast<int>(getRegU32(ctx, 5));

        if (tid == 0)
            tid = g_currentThreadId;

        auto info = (tid == g_currentThreadId) ? ensureCurrentThreadInfo(ctx) : lookupThreadInfo(tid);
        if (!info)
        {
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        {
            std::lock_guard<std::mutex> lock(info->m);
            if (info->status == THS_DORMANT)
            {
                setReturnS32(ctx, KE_DORMANT);
                return;
            }

            if (newPrio == 0)
            {
                newPrio = (info->currentPriority > 0) ? info->currentPriority : 1;
            }
            if (newPrio <= 0 || newPrio >= 128)
            {
                setReturnS32(ctx, KE_ILLEGAL_PRIORITY);
                return;
            }

            info->currentPriority = newPrio;
        }

        setReturnS32(ctx, KE_OK);
    }

    void iChangeThreadPriority(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ChangeThreadPriority(rdram, ctx, runtime);
    }

    void RotateThreadReadyQueue(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        static int logCount = 0;
        int prio = static_cast<int>(getRegU32(ctx, 4));
        if (prio == 0)
        {
            auto current = ensureCurrentThreadInfo(ctx);
            if (current)
            {
                std::lock_guard<std::mutex> lock(current->m);
                prio = (current->currentPriority > 0) ? current->currentPriority : 1;
            }
        }
        if (logCount < 16)
        {
            RUNTIME_LOG("[RotateThreadReadyQueue] prio=" << prio);
            ++logCount;
        }
        if (prio <= 0 || prio >= 128)
        {
            setReturnS32(ctx, KE_ILLEGAL_PRIORITY);
            return;
        }

        std::this_thread::yield();

        setReturnS32(ctx, KE_OK);
    }

    void iRotateThreadReadyQueue(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        RotateThreadReadyQueue(rdram, ctx, runtime);
    }

    void ReleaseWaitThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int tid = static_cast<int>(getRegU32(ctx, 4));
        if (tid == 0 || tid == g_currentThreadId)
        {
            setReturnS32(ctx, KE_ILLEGAL_THID);
            return;
        }

        auto info = lookupThreadInfo(tid);
        if (!info)
        {
            setReturnS32(ctx, KE_UNKNOWN_THID);
            return;
        }

        bool wasWaiting = false;
        int waitType = 0;
        int waitId = 0;

        {
            std::lock_guard<std::mutex> lock(info->m);
            if (info->status == THS_WAIT || info->status == THS_WAITSUSPEND)
            {
                wasWaiting = true;
                waitType = info->waitType;
                waitId = info->waitId;
                info->forceRelease = true;
                info->waitType = TSW_NONE;
                info->waitId = 0;
                if (info->suspendCount > 0)
                {
                    info->status = THS_SUSPEND;
                }
                else
                {
                    info->status = THS_READY;
                }
            }
        }

        if (!wasWaiting)
        {
            setReturnS32(ctx, KE_NOT_WAIT);
            return;
        }

        info->cv.notify_all();

        if (waitType == TSW_SEMA)
        {
            auto sema = lookupSemaInfo(waitId);
            if (sema)
            {
                sema->cv.notify_all();
            }
        }
        else if (waitType == TSW_EVENT)
        {
            auto eventFlag = lookupEventFlagInfo(waitId);
            if (eventFlag)
            {
                eventFlag->cv.notify_all();
            }
        }
        setReturnS32(ctx, KE_OK);
    }

    void iReleaseWaitThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ReleaseWaitThread(rdram, ctx, runtime);
    }
}
