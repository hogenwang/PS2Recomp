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

// Function: sub_00237738
// Address: 0x237738 - 0x237828
void sub_00237738_0x237738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237738_0x237738");
#endif

    switch (ctx->pc) {
        case 0x237774u: goto label_237774;
        case 0x237790u: goto label_237790;
        case 0x2377b4u: goto label_2377b4;
        case 0x2377e4u: goto label_2377e4;
        case 0x237804u: goto label_237804;
        default: break;
    }

    ctx->pc = 0x237738u;

    // 0x237738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23773c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x237740: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x237740u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x237744: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x237744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x237748: 0x8e02fe78  lw          $v0, -0x188($s0)
    ctx->pc = 0x237748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966904)));
    // 0x23774c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23774cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237750: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x237750u;
    {
        const bool branch_taken_0x237750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237750u;
        // 0x237754: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237750) {
            ctx->pc = 0x2377B4u;
            goto label_2377b4;
        }
    }
    ctx->pc = 0x237758u;
    // 0x237758: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x237758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23775c: 0x14a2002c  bne         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x23775Cu;
    {
        const bool branch_taken_0x23775c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x237760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23775Cu;
        // 0x237760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23775c) {
            ctx->pc = 0x237810u;
            goto label_237810;
        }
    }
    ctx->pc = 0x237764u;
    // 0x237764: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x237764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237768: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x237768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23776c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x23776Cu;
    SET_GPR_U32(ctx, 31, 0x237774u);
    ctx->pc = 0x237770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23776Cu;
    // 0x237770: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x23776Cu, 0x237774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237774u;
label_237774:
    // 0x237774: 0x8e06fe78  lw          $a2, -0x188($s0)
    ctx->pc = 0x237774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966904)));
    // 0x237778: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x237778u;
    {
        const bool branch_taken_0x237778 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237778u;
        // 0x23777c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237778) {
            ctx->pc = 0x2377A0u;
            goto label_2377a0;
        }
    }
    ctx->pc = 0x237780u;
    // 0x237780: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x237780u;
    {
        const bool branch_taken_0x237780 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x237784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237780u;
        // 0x237784: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237780) {
            ctx->pc = 0x2377BCu;
            goto label_2377bc;
        }
    }
    ctx->pc = 0x237788u;
    // 0x237788: 0x8cc64e30  lw          $a2, 0x4E30($a2)
    ctx->pc = 0x237788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20016)));
    // 0x23778c: 0x0  nop
    ctx->pc = 0x23778cu;
    // NOP
label_237790:
    // 0x237790: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x237790u;
    {
        const bool branch_taken_0x237790 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x237790) {
            ctx->pc = 0x2377A0u;
            goto label_2377a0;
        }
    }
    ctx->pc = 0x237798u;
    // 0x237798: 0x54c3fffd  bnel        $a2, $v1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x237798u;
    {
        const bool branch_taken_0x237798 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x237798) {
            ctx->pc = 0x23779Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237798u;
            // 0x23779c: 0x8cc64e30  lw          $a2, 0x4E30($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237790;
        }
    }
    ctx->pc = 0x2377A0u;
label_2377a0:
    // 0x2377a0: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2377A0u;
    {
        const bool branch_taken_0x2377a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2377A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377A0u;
        // 0x2377a4: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377a0) {
            ctx->pc = 0x2377BCu;
            goto label_2377bc;
        }
    }
    ctx->pc = 0x2377A8u;
    // 0x2377a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2377a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2377ac: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2377ACu;
    SET_GPR_U32(ctx, 31, 0x2377B4u);
    ctx->pc = 0x2377B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377ACu;
    // 0x2377b0: 0x24a54c30  addiu       $a1, $a1, 0x4C30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2377ACu, 0x2377B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377B4u;
label_2377b4:
    // 0x2377b4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2377B4u;
    {
        const bool branch_taken_0x2377b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377B4u;
        // 0x2377b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377b4) {
            ctx->pc = 0x237810u;
            goto label_237810;
        }
    }
    ctx->pc = 0x2377BCu;
label_2377bc:
    // 0x2377bc: 0x8cc74e3c  lw          $a3, 0x4E3C($a2)
    ctx->pc = 0x2377bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20028)));
    // 0x2377c0: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x2377c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2377c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2377c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2377c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2377C8u;
    {
        const bool branch_taken_0x2377c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2377c8) {
            ctx->pc = 0x2377CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2377C8u;
            // 0x2377cc: 0x8cc24e38  lw          $v0, 0x4E38($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2377ECu;
            goto label_2377ec;
        }
    }
    ctx->pc = 0x2377D0u;
    // 0x2377d0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2377d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2377d4: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x2377d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2377d8: 0x24a54c58  addiu       $a1, $a1, 0x4C58
    ctx->pc = 0x2377d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19544));
    // 0x2377dc: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2377DCu;
    SET_GPR_U32(ctx, 31, 0x2377E4u);
    ctx->pc = 0x2377E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377DCu;
    // 0x2377e0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2377DCu, 0x2377E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377E4u;
label_2377e4:
    // 0x2377e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2377E4u;
    {
        const bool branch_taken_0x2377e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377E4u;
        // 0x2377e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377e4) {
            ctx->pc = 0x237810u;
            goto label_237810;
        }
    }
    ctx->pc = 0x2377ECu;
label_2377ec:
    // 0x2377ec: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2377ECu;
    {
        const bool branch_taken_0x2377ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2377F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377ECu;
        // 0x2377f0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377ec) {
            ctx->pc = 0x23780Cu;
            goto label_23780c;
        }
    }
    ctx->pc = 0x2377F4u;
    // 0x2377f4: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x2377f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2377f8: 0x24a54c88  addiu       $a1, $a1, 0x4C88
    ctx->pc = 0x2377f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19592));
    // 0x2377fc: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2377FCu;
    SET_GPR_U32(ctx, 31, 0x237804u);
    ctx->pc = 0x237800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377FCu;
    // 0x237800: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2377FCu, 0x237804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237804u;
label_237804:
    // 0x237804: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x237804u;
    {
        const bool branch_taken_0x237804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237804u;
        // 0x237808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237804) {
            ctx->pc = 0x237810u;
            goto label_237810;
        }
    }
    ctx->pc = 0x23780Cu;
label_23780c:
    // 0x23780c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x23780cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_237810:
    // 0x237810: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x237810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237814: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x237814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237818: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x237818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23781c: 0x3e00008  jr          $ra
    ctx->pc = 0x23781Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23781Cu;
        // 0x237820: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23781Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237824u;
    // 0x237824: 0x0  nop
    ctx->pc = 0x237824u;
    // NOP
    if (ctx->pc == 0x237824u) { ctx->pc = 0x237828u; }
}
