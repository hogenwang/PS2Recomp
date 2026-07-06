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

// Function: sub_00294050
// Address: 0x294050 - 0x2940b8
void sub_00294050_0x294050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294050_0x294050");
#endif

    switch (ctx->pc) {
        case 0x29407cu: goto label_29407c;
        default: break;
    }

    ctx->pc = 0x294050u;

    // 0x294050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294054: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x294054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x294058: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x294058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29405c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29405cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294060: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x294064: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x294064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x294068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29406c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x29406cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294070: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x294070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x294074: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x294074u;
    SET_GPR_U32(ctx, 31, 0x29407Cu);
    ctx->pc = 0x294078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294074u;
    // 0x294078: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2630u, 0x294074u, 0x29407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29407Cu;
label_29407c:
    // 0x29407c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29407Cu;
    {
        const bool branch_taken_0x29407c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29407Cu;
        // 0x294080: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29407c) {
            ctx->pc = 0x2940A4u;
            goto label_2940a4;
        }
    }
    ctx->pc = 0x294084u;
    // 0x294084: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x294084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294088: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x294088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29408c: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29408Cu;
    {
        const bool branch_taken_0x29408c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x294090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29408Cu;
        // 0x294090: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29408c) {
            ctx->pc = 0x2940A0u;
            goto label_2940a0;
        }
    }
    ctx->pc = 0x294094u;
    // 0x294094: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x294094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x294098: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x294098u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29409c: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x29409cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_2940a0:
    // 0x2940a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2940a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2940a4:
    // 0x2940a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2940a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2940a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2940a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2940ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2940ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2940B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2940ACu;
        // 0x2940b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2940ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2940B4u;
    // 0x2940b4: 0x0  nop
    ctx->pc = 0x2940b4u;
    // NOP
    if (ctx->pc == 0x2940b4u) { ctx->pc = 0x2940b8u; }
}
