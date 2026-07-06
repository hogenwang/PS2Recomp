#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CA30
// Address: 0x10ca30 - 0x10ca60
void sub_0010CA30_0x10ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CA30_0x10ca30");
#endif

    switch (ctx->pc) {
        case 0x10ca40u: goto label_10ca40;
        case 0x10ca50u: goto label_10ca50;
        default: break;
    }

    ctx->pc = 0x10ca30u;

    // 0x10ca30: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x10ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x10ca34: 0xc  syscall     0
    ctx->pc = 0x10ca34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ca38: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CA40u;
label_10ca40:
    // 0x10ca40: 0x2403ff02  addiu       $v1, $zero, -0xFE
    ctx->pc = 0x10ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x10ca44: 0xc  syscall     0
    ctx->pc = 0x10ca44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ca48: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CA50u;
label_10ca50:
    // 0x10ca50: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x10ca50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x10ca54: 0xc  syscall     0
    ctx->pc = 0x10ca54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ca58: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CA60u;
    ctx->pc = 0x10ca60u;
}
