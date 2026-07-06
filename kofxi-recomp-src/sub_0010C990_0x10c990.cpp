#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C990
// Address: 0x10c990 - 0x10c9a0
void sub_0010C990_0x10c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C990_0x10c990");
#endif

    ctx->pc = 0x10c990u;

    // 0x10c990: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x10c990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x10c994: 0xc  syscall     0
    ctx->pc = 0x10c994u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c998: 0x3e00008  jr          $ra
    ctx->pc = 0x10C998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C9A0u;
    ctx->pc = 0x10c9a0u;
}
