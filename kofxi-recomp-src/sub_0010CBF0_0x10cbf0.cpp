#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CBF0
// Address: 0x10cbf0 - 0x10cc40
void sub_0010CBF0_0x10cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CBF0_0x10cbf0");
#endif

    switch (ctx->pc) {
        case 0x10cc00u: goto label_10cc00;
        case 0x10cc10u: goto label_10cc10;
        case 0x10cc20u: goto label_10cc20;
        case 0x10cc30u: goto label_10cc30;
        default: break;
    }

    ctx->pc = 0x10cbf0u;

    // 0x10cbf0: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x10cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x10cbf4: 0xc  syscall     0
    ctx->pc = 0x10cbf4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CC00u;
label_10cc00:
    // 0x10cc00: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x10cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x10cc04: 0xc  syscall     0
    ctx->pc = 0x10cc04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cc08: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CC10u;
label_10cc10:
    // 0x10cc10: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x10cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x10cc14: 0xc  syscall     0
    ctx->pc = 0x10cc14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cc18: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CC20u;
label_10cc20:
    // 0x10cc20: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x10cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x10cc24: 0xc  syscall     0
    ctx->pc = 0x10cc24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cc28: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CC30u;
label_10cc30:
    // 0x10cc30: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x10cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x10cc34: 0xc  syscall     0
    ctx->pc = 0x10cc34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cc38: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CC40u;
    ctx->pc = 0x10cc40u;
}
