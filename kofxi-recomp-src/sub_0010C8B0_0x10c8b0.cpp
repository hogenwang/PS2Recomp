#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C8B0
// Address: 0x10c8b0 - 0x10c910
void sub_0010C8B0_0x10c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C8B0_0x10c8b0");
#endif

    switch (ctx->pc) {
        case 0x10c8c0u: goto label_10c8c0;
        case 0x10c8d0u: goto label_10c8d0;
        case 0x10c8e0u: goto label_10c8e0;
        case 0x10c8f0u: goto label_10c8f0;
        case 0x10c900u: goto label_10c900;
        default: break;
    }

    ctx->pc = 0x10c8b0u;

    // 0x10c8b0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x10c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10c8b4: 0xc  syscall     0
    ctx->pc = 0x10c8b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C8C0u;
label_10c8c0:
    // 0x10c8c0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10c8c4: 0xc  syscall     0
    ctx->pc = 0x10c8c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C8D0u;
label_10c8d0:
    // 0x10c8d0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x10c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10c8d4: 0xc  syscall     0
    ctx->pc = 0x10c8d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C8E0u;
label_10c8e0:
    // 0x10c8e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x10c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10c8e4: 0xc  syscall     0
    ctx->pc = 0x10c8e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C8F0u;
label_10c8f0:
    // 0x10c8f0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x10c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10c8f4: 0xc  syscall     0
    ctx->pc = 0x10c8f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C900u;
label_10c900:
    // 0x10c900: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10c904: 0xc  syscall     0
    ctx->pc = 0x10c904u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c908: 0x3e00008  jr          $ra
    ctx->pc = 0x10C908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C910u;
    ctx->pc = 0x10c910u;
}
