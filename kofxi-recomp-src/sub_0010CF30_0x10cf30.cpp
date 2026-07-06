#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CF30
// Address: 0x10cf30 - 0x10cf70
void sub_0010CF30_0x10cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CF30_0x10cf30");
#endif

    switch (ctx->pc) {
        case 0x10cf40u: goto label_10cf40;
        case 0x10cf50u: goto label_10cf50;
        case 0x10cf60u: goto label_10cf60;
        default: break;
    }

    ctx->pc = 0x10cf30u;

    // 0x10cf30: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x10cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x10cf34: 0xc  syscall     0
    ctx->pc = 0x10cf34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cf38: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CF40u;
label_10cf40:
    // 0x10cf40: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x10cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x10cf44: 0xc  syscall     0
    ctx->pc = 0x10cf44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cf48: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CF50u;
label_10cf50:
    // 0x10cf50: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x10cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x10cf54: 0xc  syscall     0
    ctx->pc = 0x10cf54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cf58: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CF60u;
label_10cf60:
    // 0x10cf60: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x10cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x10cf64: 0xc  syscall     0
    ctx->pc = 0x10cf64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cf68: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CF70u;
    ctx->pc = 0x10cf70u;
}
