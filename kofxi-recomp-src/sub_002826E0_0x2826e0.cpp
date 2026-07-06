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

// Function: sub_002826E0
// Address: 0x2826e0 - 0x282808
void sub_002826E0_0x2826e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002826E0_0x2826e0");
#endif

    switch (ctx->pc) {
        case 0x2826e0u: goto label_2826e0;
        case 0x2826e4u: goto label_2826e4;
        case 0x2826e8u: goto label_2826e8;
        case 0x2826ecu: goto label_2826ec;
        case 0x2826f0u: goto label_2826f0;
        case 0x2826f4u: goto label_2826f4;
        case 0x2826f8u: goto label_2826f8;
        case 0x2826fcu: goto label_2826fc;
        case 0x282700u: goto label_282700;
        case 0x282704u: goto label_282704;
        case 0x282708u: goto label_282708;
        case 0x28270cu: goto label_28270c;
        case 0x282710u: goto label_282710;
        case 0x282714u: goto label_282714;
        case 0x282718u: goto label_282718;
        case 0x28271cu: goto label_28271c;
        case 0x282720u: goto label_282720;
        case 0x282724u: goto label_282724;
        case 0x282728u: goto label_282728;
        case 0x28272cu: goto label_28272c;
        case 0x282730u: goto label_282730;
        case 0x282734u: goto label_282734;
        case 0x282738u: goto label_282738;
        case 0x28273cu: goto label_28273c;
        case 0x282740u: goto label_282740;
        case 0x282744u: goto label_282744;
        case 0x282748u: goto label_282748;
        case 0x28274cu: goto label_28274c;
        case 0x282750u: goto label_282750;
        case 0x282754u: goto label_282754;
        case 0x282758u: goto label_282758;
        case 0x28275cu: goto label_28275c;
        case 0x282760u: goto label_282760;
        case 0x282764u: goto label_282764;
        case 0x282768u: goto label_282768;
        case 0x28276cu: goto label_28276c;
        case 0x282770u: goto label_282770;
        case 0x282774u: goto label_282774;
        case 0x282778u: goto label_282778;
        case 0x28277cu: goto label_28277c;
        case 0x282780u: goto label_282780;
        case 0x282784u: goto label_282784;
        case 0x282788u: goto label_282788;
        case 0x28278cu: goto label_28278c;
        case 0x282790u: goto label_282790;
        case 0x282794u: goto label_282794;
        case 0x282798u: goto label_282798;
        case 0x28279cu: goto label_28279c;
        case 0x2827a0u: goto label_2827a0;
        case 0x2827a4u: goto label_2827a4;
        case 0x2827a8u: goto label_2827a8;
        case 0x2827acu: goto label_2827ac;
        case 0x2827b0u: goto label_2827b0;
        case 0x2827b4u: goto label_2827b4;
        case 0x2827b8u: goto label_2827b8;
        case 0x2827bcu: goto label_2827bc;
        case 0x2827c0u: goto label_2827c0;
        case 0x2827c4u: goto label_2827c4;
        case 0x2827c8u: goto label_2827c8;
        case 0x2827ccu: goto label_2827cc;
        case 0x2827d0u: goto label_2827d0;
        case 0x2827d4u: goto label_2827d4;
        case 0x2827d8u: goto label_2827d8;
        case 0x2827dcu: goto label_2827dc;
        case 0x2827e0u: goto label_2827e0;
        case 0x2827e4u: goto label_2827e4;
        case 0x2827e8u: goto label_2827e8;
        case 0x2827ecu: goto label_2827ec;
        case 0x2827f0u: goto label_2827f0;
        case 0x2827f4u: goto label_2827f4;
        case 0x2827f8u: goto label_2827f8;
        case 0x2827fcu: goto label_2827fc;
        case 0x282800u: goto label_282800;
        case 0x282804u: goto label_282804;
        default: break;
    }

    ctx->pc = 0x2826e0u;

label_2826e0:
    // 0x2826e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2826e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2826e4:
    // 0x2826e4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2826e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2826e8:
    // 0x2826e8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2826e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2826ec:
    // 0x2826ec: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2826ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2826f0:
    // 0x2826f0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2826f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2826f4:
    // 0x2826f4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2826f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2826f8:
    // 0x2826f8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2826f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2826fc:
    // 0x2826fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2826fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_282700:
    // 0x282700: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x282700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_282704:
    // 0x282704: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x282704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_282708:
    // 0x282708: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x282708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_28270c:
    // 0x28270c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28270cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282710:
    // 0x282710: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x282710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_282714:
    // 0x282714: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x282714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_282718:
    // 0x282718: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x282718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_28271c:
    // 0x28271c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_282720:
    // 0x282720: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
label_282724:
    if (ctx->pc == 0x282724u) {
        ctx->pc = 0x282724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282720u;
        // 0x282724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282728u;
        goto label_282728;
    }
    ctx->pc = 0x282720u;
    {
        const bool branch_taken_0x282720 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x282724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282720u;
        // 0x282724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282720) {
            ctx->pc = 0x2827DCu;
            goto label_2827dc;
        }
    }
    ctx->pc = 0x282728u;
label_282728:
    // 0x282728: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x282728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28272c:
    // 0x28272c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x28272cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_282730:
    // 0x282730: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_282734:
    if (ctx->pc == 0x282734u) {
        ctx->pc = 0x282734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282730u;
        // 0x282734: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282738u;
        goto label_282738;
    }
    ctx->pc = 0x282730u;
    {
        const bool branch_taken_0x282730 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x282734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282730u;
        // 0x282734: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282730) {
            ctx->pc = 0x282760u;
            goto label_282760;
        }
    }
    ctx->pc = 0x282738u;
label_282738:
    // 0x282738: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x282738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28273c:
    // 0x28273c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x28273cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_282740:
    // 0x282740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282744:
    // 0x282744: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x282744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_282748:
    // 0x282748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28274c:
    // 0x28274c: 0x260f809  jalr        $s3
label_282750:
    if (ctx->pc == 0x282750u) {
        ctx->pc = 0x282750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28274Cu;
        // 0x282750: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282754u;
        goto label_282754;
    }
    ctx->pc = 0x28274Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x282754u);
        ctx->pc = 0x282750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28274Cu;
        // 0x282750: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28274Cu, 0x282754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x282754u;
label_282754:
    // 0x282754: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_282758:
    if (ctx->pc == 0x282758u) {
        ctx->pc = 0x282758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282754u;
        // 0x282758: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28275Cu;
        goto label_28275c;
    }
    ctx->pc = 0x282754u;
    {
        const bool branch_taken_0x282754 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x282758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282754u;
        // 0x282758: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282754) {
            ctx->pc = 0x282738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282738;
        }
    }
    ctx->pc = 0x28275Cu;
label_28275c:
    // 0x28275c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28275cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_282760:
    // 0x282760: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x282760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_282764:
    // 0x282764: 0xc0a063a  jal         func_2818E8
label_282768:
    if (ctx->pc == 0x282768u) {
        ctx->pc = 0x282768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282764u;
        // 0x282768: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28276Cu;
        goto label_28276c;
    }
    ctx->pc = 0x282764u;
    SET_GPR_U32(ctx, 31, 0x28276Cu);
    ctx->pc = 0x282768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282764u;
    // 0x282768: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x282764u, 0x28276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28276Cu;
label_28276c:
    // 0x28276c: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
label_282770:
    if (ctx->pc == 0x282770u) {
        ctx->pc = 0x282770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28276Cu;
        // 0x282770: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282774u;
        goto label_282774;
    }
    ctx->pc = 0x28276Cu;
    {
        const bool branch_taken_0x28276c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x282770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28276Cu;
        // 0x282770: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28276c) {
            ctx->pc = 0x2827DCu;
            goto label_2827dc;
        }
    }
    ctx->pc = 0x282774u;
label_282774:
    // 0x282774: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x282774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_282778:
    // 0x282778: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x282778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28277c:
    // 0x28277c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28277cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_282780:
    // 0x282780: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x282780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_282784:
    // 0x282784: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x282784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_282788:
    // 0x282788: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x282788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28278c:
    // 0x28278c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28278cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_282790:
    // 0x282790: 0xc0a05d0  jal         func_281740
label_282794:
    if (ctx->pc == 0x282794u) {
        ctx->pc = 0x282794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282790u;
        // 0x282794: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282798u;
        goto label_282798;
    }
    ctx->pc = 0x282790u;
    SET_GPR_U32(ctx, 31, 0x282798u);
    ctx->pc = 0x282794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282790u;
    // 0x282794: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x282790u, 0x282798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282798u;
label_282798:
    // 0x282798: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x282798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28279c:
    // 0x28279c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_2827a0:
    if (ctx->pc == 0x2827A0u) {
        ctx->pc = 0x2827A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28279Cu;
        // 0x2827a0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2827A4u;
        goto label_2827a4;
    }
    ctx->pc = 0x28279Cu;
    {
        const bool branch_taken_0x28279c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2827A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28279Cu;
        // 0x2827a0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28279c) {
            ctx->pc = 0x2827D4u;
            goto label_2827d4;
        }
    }
    ctx->pc = 0x2827A4u;
label_2827a4:
    // 0x2827a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2827a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2827a8:
    // 0x2827a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2827a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2827ac:
    // 0x2827ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2827acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2827b0:
    // 0x2827b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2827b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2827b4:
    // 0x2827b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2827b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2827b8:
    // 0x2827b8: 0x260f809  jalr        $s3
label_2827bc:
    if (ctx->pc == 0x2827BCu) {
        ctx->pc = 0x2827BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827B8u;
        // 0x2827bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2827C0u;
        goto label_2827c0;
    }
    ctx->pc = 0x2827B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2827C0u);
        ctx->pc = 0x2827BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827B8u;
        // 0x2827bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2827B8u, 0x2827C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2827C0u;
label_2827c0:
    // 0x2827c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2827c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2827c4:
    // 0x2827c4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2827c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2827c8:
    // 0x2827c8: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_2827cc:
    if (ctx->pc == 0x2827CCu) {
        ctx->pc = 0x2827CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827C8u;
        // 0x2827cc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2827D0u;
        goto label_2827d0;
    }
    ctx->pc = 0x2827C8u;
    {
        const bool branch_taken_0x2827c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2827c8) {
            ctx->pc = 0x2827CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2827C8u;
            // 0x2827cc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2827A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2827a8;
        }
    }
    ctx->pc = 0x2827D0u;
label_2827d0:
    // 0x2827d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2827d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2827d4:
    // 0x2827d4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2827d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2827d8:
    // 0x2827d8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2827d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_2827dc:
    // 0x2827dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2827dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2827e0:
    // 0x2827e0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2827e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2827e4:
    // 0x2827e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2827e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2827e8:
    // 0x2827e8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2827e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2827ec:
    // 0x2827ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2827ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2827f0:
    // 0x2827f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2827f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2827f4:
    // 0x2827f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2827f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2827f8:
    // 0x2827f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2827f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2827fc:
    // 0x2827fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2827fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_282800:
    // 0x282800: 0x3e00008  jr          $ra
label_282804:
    if (ctx->pc == 0x282804u) {
        ctx->pc = 0x282804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282800u;
        // 0x282804: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282808u;
        goto label_fallthrough_0x282800;
    }
    ctx->pc = 0x282800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282800u;
        // 0x282804: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x282800:
    ctx->pc = 0x282808u;
}
