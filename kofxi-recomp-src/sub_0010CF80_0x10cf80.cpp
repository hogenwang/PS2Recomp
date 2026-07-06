#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CF80
// Address: 0x10cf80 - 0x10cfa0
void sub_0010CF80_0x10cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CF80_0x10cf80");
#endif

    switch (ctx->pc) {
        case 0x10cf90u: goto label_10cf90;
        default: break;
    }

    ctx->pc = 0x10cf80u;

    // 0x10cf80: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x10cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x10cf84: 0xc  syscall     0
    ctx->pc = 0x10cf84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cf88: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CF90u;
label_10cf90:
    // 0x10cf90: 0x2403ff90  addiu       $v1, $zero, -0x70
    ctx->pc = 0x10cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967184));
    // 0x10cf94: 0xc  syscall     0
    ctx->pc = 0x10cf94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cf98: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CFA0u;
    ctx->pc = 0x10cfa0u;
}
