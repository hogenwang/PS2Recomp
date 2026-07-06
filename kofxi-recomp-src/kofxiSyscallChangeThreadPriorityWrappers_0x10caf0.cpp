#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiSyscallChangeThreadPriorityWrappers
// Address: 0x10caf0 - 0x10cb10
void kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSyscallChangeThreadPriorityWrappers_0x10caf0");
#endif

    switch (ctx->pc) {
        case 0x10cb00u: goto label_10cb00;
        default: break;
    }

    ctx->pc = 0x10caf0u;

    // 0x10caf0: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x10caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x10caf4: 0xc  syscall     0
    ctx->pc = 0x10caf4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10caf8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CB00u;
label_10cb00:
    // 0x10cb00: 0x2403ffd6  addiu       $v1, $zero, -0x2A
    ctx->pc = 0x10cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x10cb04: 0xc  syscall     0
    ctx->pc = 0x10cb04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cb08: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CB10u;
    ctx->pc = 0x10cb10u;
}
