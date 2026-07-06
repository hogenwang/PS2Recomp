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

// Function: sub_001B1048
// Address: 0x1b1048 - 0x1b1080
void sub_001B1048_0x1b1048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1048_0x1b1048");
#endif

    switch (ctx->pc) {
        case 0x1b105cu: goto label_1b105c;
        case 0x1b1064u: goto label_1b1064;
        case 0x1b106cu: goto label_1b106c;
        default: break;
    }

    ctx->pc = 0x1b1048u;

    // 0x1b1048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b104c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1050: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1054: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B1054u;
    SET_GPR_U32(ctx, 31, 0x1B105Cu);
    ctx->pc = 0x1B1058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1054u;
    // 0x1b1058: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1B1054u, 0x1B105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B105Cu;
label_1b105c:
    // 0x1b105c: 0xc06c420  jal         func_1B1080
    ctx->pc = 0x1B105Cu;
    SET_GPR_U32(ctx, 31, 0x1B1064u);
    ctx->pc = 0x1B1060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B105Cu;
    // 0x1b1060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1080u, 0x1B105Cu, 0x1B1064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1064u;
label_1b1064:
    // 0x1b1064: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B1064u;
    SET_GPR_U32(ctx, 31, 0x1B106Cu);
    ctx->pc = 0x1B1068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1064u;
    // 0x1b1068: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1B1064u, 0x1B106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B106Cu;
label_1b106c:
    // 0x1b106c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b106cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1078: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1078u;
        // 0x1b107c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1080u;
}
