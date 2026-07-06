#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D430
// Address: 0x10d430 - 0x10d460
void sub_0010D430_0x10d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D430_0x10d430");
#endif

    switch (ctx->pc) {
        case 0x10d450u: goto label_10d450;
        default: break;
    }

    ctx->pc = 0x10d430u;

    // 0x10d430: 0x3e00008  jr          $ra
    ctx->pc = 0x10D430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D430u;
        // 0x10d434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D438u;
    // 0x10d438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d440: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D440u;
    {
        const bool branch_taken_0x10d440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D440u;
        // 0x10d444: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d440) {
            ctx->pc = 0x10D450u;
            goto label_10d450;
        }
    }
    ctx->pc = 0x10D448u;
    // 0x10d448: 0xc045d56  jal         func_117558
    ctx->pc = 0x10D448u;
    SET_GPR_U32(ctx, 31, 0x10D450u);
    ctx->pc = 0x10D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D448u;
    // 0x10d44c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117558u, 0x10D448u, 0x10D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D450u;
label_10d450:
    // 0x10d450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d458: 0x3e00008  jr          $ra
    ctx->pc = 0x10D458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D458u;
        // 0x10d45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D460u;
}
