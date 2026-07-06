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

// Function: sub_0011C6F0
// Address: 0x11c6f0 - 0x11c7a8
void sub_0011C6F0_0x11c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C6F0_0x11c6f0");
#endif

    switch (ctx->pc) {
        case 0x11c704u: goto label_11c704;
        case 0x11c744u: goto label_11c744;
        case 0x11c758u: goto label_11c758;
        case 0x11c774u: goto label_11c774;
        case 0x11c794u: goto label_11c794;
        default: break;
    }

    ctx->pc = 0x11c6f0u;

    // 0x11c6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c6f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c6f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c6fc: 0xc046ea0  jal         func_11BA80
    ctx->pc = 0x11C6FCu;
    SET_GPR_U32(ctx, 31, 0x11C704u);
    ctx->pc = 0x11C700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6FCu;
    // 0x11c700: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BA80u, 0x11C6FCu, 0x11C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C704u;
label_11c704:
    // 0x11c704: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C704u;
    {
        const bool branch_taken_0x11c704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C704u;
        // 0x11c708: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c704) {
            ctx->pc = 0x11C714u;
            goto label_11c714;
        }
    }
    ctx->pc = 0x11C70Cu;
    // 0x11c70c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11C70Cu;
    {
        const bool branch_taken_0x11c70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C70Cu;
        // 0x11c710: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c70c) {
            ctx->pc = 0x11C798u;
            goto label_11c798;
        }
    }
    ctx->pc = 0x11C714u;
label_11c714:
    // 0x11c714: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11c714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11c718: 0x2450afc0  addiu       $s0, $v0, -0x5040
    ctx->pc = 0x11c718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x11c71c: 0x2484b940  addiu       $a0, $a0, -0x46C0
    ctx->pc = 0x11c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    // 0x11c720: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11c720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c724: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x11c724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11c728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c72c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c730: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c734: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11c734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c738: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11c738u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c73c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11C73Cu;
    SET_GPR_U32(ctx, 31, 0x11C744u);
    ctx->pc = 0x11C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C73Cu;
    // 0x11c740: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11C73Cu, 0x11C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C744u;
label_11c744:
    // 0x11c744: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C744u;
    {
        const bool branch_taken_0x11c744 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C744u;
        // 0x11c748: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c744) {
            ctx->pc = 0x11C760u;
            goto label_11c760;
        }
    }
    ctx->pc = 0x11C74Cu;
    // 0x11c74c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11c750: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C750u;
    SET_GPR_U32(ctx, 31, 0x11C758u);
    ctx->pc = 0x11C754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C750u;
    // 0x11c754: 0x8c449dec  lw          $a0, -0x6214($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C750u, 0x11C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C758u;
label_11c758:
    // 0x11c758: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11C758u;
    {
        const bool branch_taken_0x11c758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C758u;
        // 0x11c75c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c758) {
            ctx->pc = 0x11C798u;
            goto label_11c798;
        }
    }
    ctx->pc = 0x11C760u;
label_11c760:
    // 0x11c760: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11c760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11c764: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11c764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11c768: 0x8c649dec  lw          $a0, -0x6214($v1)
    ctx->pc = 0x11c768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942188)));
    // 0x11c76c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C76Cu;
    SET_GPR_U32(ctx, 31, 0x11C774u);
    ctx->pc = 0x11C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C76Cu;
    // 0x11c770: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C76Cu, 0x11C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C774u;
label_11c774:
    // 0x11c774: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11c774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11c778: 0x8c629dd0  lw          $v0, -0x6230($v1)
    ctx->pc = 0x11c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942160)));
    // 0x11c77c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x11c77cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c780: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C780u;
    {
        const bool branch_taken_0x11c780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C780u;
        // 0x11c784: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c780) {
            ctx->pc = 0x11C798u;
            goto label_11c798;
        }
    }
    ctx->pc = 0x11C788u;
    // 0x11c788: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11c788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11c78c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11C78Cu;
    SET_GPR_U32(ctx, 31, 0x11C794u);
    ctx->pc = 0x11C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C78Cu;
    // 0x11c790: 0x2484b3e0  addiu       $a0, $a0, -0x4C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11C78Cu, 0x11C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C794u;
label_11c794:
    // 0x11c794: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c798:
    // 0x11c798: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c79c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11C7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7A0u;
        // 0x11c7a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C7A8u;
}
