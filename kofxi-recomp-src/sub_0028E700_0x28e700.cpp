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

// Function: sub_0028E700
// Address: 0x28e700 - 0x28e7d8
void sub_0028E700_0x28e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E700_0x28e700");
#endif

    switch (ctx->pc) {
        case 0x28e700u: goto label_28e700;
        case 0x28e704u: goto label_28e704;
        case 0x28e708u: goto label_28e708;
        case 0x28e70cu: goto label_28e70c;
        case 0x28e710u: goto label_28e710;
        case 0x28e714u: goto label_28e714;
        case 0x28e718u: goto label_28e718;
        case 0x28e71cu: goto label_28e71c;
        case 0x28e720u: goto label_28e720;
        case 0x28e724u: goto label_28e724;
        case 0x28e728u: goto label_28e728;
        case 0x28e72cu: goto label_28e72c;
        case 0x28e730u: goto label_28e730;
        case 0x28e734u: goto label_28e734;
        case 0x28e738u: goto label_28e738;
        case 0x28e73cu: goto label_28e73c;
        case 0x28e740u: goto label_28e740;
        case 0x28e744u: goto label_28e744;
        case 0x28e748u: goto label_28e748;
        case 0x28e74cu: goto label_28e74c;
        case 0x28e750u: goto label_28e750;
        case 0x28e754u: goto label_28e754;
        case 0x28e758u: goto label_28e758;
        case 0x28e75cu: goto label_28e75c;
        case 0x28e760u: goto label_28e760;
        case 0x28e764u: goto label_28e764;
        case 0x28e768u: goto label_28e768;
        case 0x28e76cu: goto label_28e76c;
        case 0x28e770u: goto label_28e770;
        case 0x28e774u: goto label_28e774;
        case 0x28e778u: goto label_28e778;
        case 0x28e77cu: goto label_28e77c;
        case 0x28e780u: goto label_28e780;
        case 0x28e784u: goto label_28e784;
        case 0x28e788u: goto label_28e788;
        case 0x28e78cu: goto label_28e78c;
        case 0x28e790u: goto label_28e790;
        case 0x28e794u: goto label_28e794;
        case 0x28e798u: goto label_28e798;
        case 0x28e79cu: goto label_28e79c;
        case 0x28e7a0u: goto label_28e7a0;
        case 0x28e7a4u: goto label_28e7a4;
        case 0x28e7a8u: goto label_28e7a8;
        case 0x28e7acu: goto label_28e7ac;
        case 0x28e7b0u: goto label_28e7b0;
        case 0x28e7b4u: goto label_28e7b4;
        case 0x28e7b8u: goto label_28e7b8;
        case 0x28e7bcu: goto label_28e7bc;
        case 0x28e7c0u: goto label_28e7c0;
        case 0x28e7c4u: goto label_28e7c4;
        case 0x28e7c8u: goto label_28e7c8;
        case 0x28e7ccu: goto label_28e7cc;
        case 0x28e7d0u: goto label_28e7d0;
        case 0x28e7d4u: goto label_28e7d4;
        default: break;
    }

    ctx->pc = 0x28e700u;

label_28e700:
    // 0x28e700: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e704:
    // 0x28e704: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e708:
    // 0x28e708: 0x8c4245ec  lw          $v0, 0x45EC($v0)
    ctx->pc = 0x28e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17900)));
label_28e70c:
    // 0x28e70c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e710:
    if (ctx->pc == 0x28E710u) {
        ctx->pc = 0x28E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E70Cu;
        // 0x28e710: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E714u;
        goto label_28e714;
    }
    ctx->pc = 0x28E70Cu;
    {
        const bool branch_taken_0x28e70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E70Cu;
        // 0x28e710: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e70c) {
            ctx->pc = 0x28E734u;
            goto label_28e734;
        }
    }
    ctx->pc = 0x28E714u;
label_28e714:
    // 0x28e714: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e718:
    // 0x28e718: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x28e718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_28e71c:
    // 0x28e71c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e720:
    // 0x28e720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e724:
    // 0x28e724: 0xc0a5648  jal         func_295920
label_28e728:
    if (ctx->pc == 0x28E728u) {
        ctx->pc = 0x28E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E724u;
        // 0x28e728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E72Cu;
        goto label_28e72c;
    }
    ctx->pc = 0x28E724u;
    SET_GPR_U32(ctx, 31, 0x28E72Cu);
    ctx->pc = 0x28E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E724u;
    // 0x28e728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28E724u, 0x28E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E72Cu;
label_28e72c:
    // 0x28e72c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e730:
    if (ctx->pc == 0x28E730u) {
        ctx->pc = 0x28E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E72Cu;
        // 0x28e730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E734u;
        goto label_28e734;
    }
    ctx->pc = 0x28E72Cu;
    {
        const bool branch_taken_0x28e72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E72Cu;
        // 0x28e730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e72c) {
            ctx->pc = 0x28E73Cu;
            goto label_28e73c;
        }
    }
    ctx->pc = 0x28E734u;
label_28e734:
    // 0x28e734: 0x40f809  jalr        $v0
label_28e738:
    if (ctx->pc == 0x28E738u) {
        ctx->pc = 0x28E73Cu;
        goto label_28e73c;
    }
    ctx->pc = 0x28E734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E73Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E734u, 0x28E73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E73Cu;
label_28e73c:
    // 0x28e73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e740:
    // 0x28e740: 0x3e00008  jr          $ra
label_28e744:
    if (ctx->pc == 0x28E744u) {
        ctx->pc = 0x28E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E740u;
        // 0x28e744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E748u;
        goto label_28e748;
    }
    ctx->pc = 0x28E740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E740u;
        // 0x28e744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E748u;
label_28e748:
    // 0x28e748: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28e748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28e74c:
    // 0x28e74c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e750:
    // 0x28e750: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x28e750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_28e754:
    // 0x28e754: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x28e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_28e758:
    // 0x28e758: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28e758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28e75c:
    // 0x28e75c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x28e75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_28e760:
    // 0x28e760: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x28e760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28e764:
    // 0x28e764: 0x8c4245f0  lw          $v0, 0x45F0($v0)
    ctx->pc = 0x28e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17904)));
label_28e768:
    // 0x28e768: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28e768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28e76c:
    // 0x28e76c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e770:
    if (ctx->pc == 0x28E770u) {
        ctx->pc = 0x28E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E76Cu;
        // 0x28e770: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E774u;
        goto label_28e774;
    }
    ctx->pc = 0x28E76Cu;
    {
        const bool branch_taken_0x28e76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E76Cu;
        // 0x28e770: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e76c) {
            ctx->pc = 0x28E794u;
            goto label_28e794;
        }
    }
    ctx->pc = 0x28E774u;
label_28e774:
    // 0x28e774: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e778:
    // 0x28e778: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x28e778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_28e77c:
    // 0x28e77c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e780:
    // 0x28e780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e784:
    // 0x28e784: 0xc0a5648  jal         func_295920
label_28e788:
    if (ctx->pc == 0x28E788u) {
        ctx->pc = 0x28E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E784u;
        // 0x28e788: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E78Cu;
        goto label_28e78c;
    }
    ctx->pc = 0x28E784u;
    SET_GPR_U32(ctx, 31, 0x28E78Cu);
    ctx->pc = 0x28E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E784u;
    // 0x28e788: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28E784u, 0x28E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E78Cu;
label_28e78c:
    // 0x28e78c: 0x1000000c  b           . + 4 + (0xC << 2)
label_28e790:
    if (ctx->pc == 0x28E790u) {
        ctx->pc = 0x28E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E78Cu;
        // 0x28e790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E794u;
        goto label_28e794;
    }
    ctx->pc = 0x28E78Cu;
    {
        const bool branch_taken_0x28e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E78Cu;
        // 0x28e790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e78c) {
            ctx->pc = 0x28E7C0u;
            goto label_28e7c0;
        }
    }
    ctx->pc = 0x28E794u;
label_28e794:
    // 0x28e794: 0x40f809  jalr        $v0
label_28e798:
    if (ctx->pc == 0x28E798u) {
        ctx->pc = 0x28E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E794u;
        // 0x28e798: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E79Cu;
        goto label_28e79c;
    }
    ctx->pc = 0x28E794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E79Cu);
        ctx->pc = 0x28E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E794u;
        // 0x28e798: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E794u, 0x28E79Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E79Cu;
label_28e79c:
    // 0x28e79c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28e79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e7a0:
    // 0x28e7a0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_28e7a4:
    if (ctx->pc == 0x28E7A4u) {
        ctx->pc = 0x28E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7A0u;
        // 0x28e7a4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E7A8u;
        goto label_28e7a8;
    }
    ctx->pc = 0x28E7A0u;
    {
        const bool branch_taken_0x28e7a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7A0u;
        // 0x28e7a4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7a0) {
            ctx->pc = 0x28E7BCu;
            goto label_28e7bc;
        }
    }
    ctx->pc = 0x28E7A8u;
label_28e7a8:
    // 0x28e7a8: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x28e7a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_28e7ac:
    // 0x28e7ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28e7b0:
    // 0x28e7b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28e7b4:
    // 0x28e7b4: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x28e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
label_28e7b8:
    // 0x28e7b8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x28e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_28e7bc:
    // 0x28e7bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x28e7bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28e7c0:
    // 0x28e7c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28e7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28e7c4:
    // 0x28e7c4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x28e7c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28e7c8:
    // 0x28e7c8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x28e7c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28e7cc:
    // 0x28e7cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x28e7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28e7d0:
    // 0x28e7d0: 0x3e00008  jr          $ra
label_28e7d4:
    if (ctx->pc == 0x28E7D4u) {
        ctx->pc = 0x28E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7D0u;
        // 0x28e7d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E7D8u;
        goto label_fallthrough_0x28e7d0;
    }
    ctx->pc = 0x28E7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7D0u;
        // 0x28e7d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28e7d0:
    ctx->pc = 0x28E7D8u;
}
