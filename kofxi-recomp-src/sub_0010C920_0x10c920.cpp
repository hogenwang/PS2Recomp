#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C920
// Address: 0x10c920 - 0x10c940
void sub_0010C920_0x10c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C920_0x10c920");
#endif

    switch (ctx->pc) {
        case 0x10c930u: goto label_10c930;
        default: break;
    }

    ctx->pc = 0x10c920u;

    // 0x10c920: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x10c920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10c924: 0xc  syscall     0
    ctx->pc = 0x10c924u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c928: 0x3e00008  jr          $ra
    ctx->pc = 0x10C928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C930u;
label_10c930:
    // 0x10c930: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x10c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x10c934: 0xc  syscall     0
    ctx->pc = 0x10c934u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c938: 0x3e00008  jr          $ra
    ctx->pc = 0x10C938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C940u;
    ctx->pc = 0x10c940u;
}
