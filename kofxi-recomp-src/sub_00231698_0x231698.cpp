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

// Function: sub_00231698
// Address: 0x231698 - 0x2317f8
void sub_00231698_0x231698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231698_0x231698");
#endif

    switch (ctx->pc) {
        case 0x231698u: goto label_231698;
        case 0x23169cu: goto label_23169c;
        case 0x2316a0u: goto label_2316a0;
        case 0x2316a4u: goto label_2316a4;
        case 0x2316a8u: goto label_2316a8;
        case 0x2316acu: goto label_2316ac;
        case 0x2316b0u: goto label_2316b0;
        case 0x2316b4u: goto label_2316b4;
        case 0x2316b8u: goto label_2316b8;
        case 0x2316bcu: goto label_2316bc;
        case 0x2316c0u: goto label_2316c0;
        case 0x2316c4u: goto label_2316c4;
        case 0x2316c8u: goto label_2316c8;
        case 0x2316ccu: goto label_2316cc;
        case 0x2316d0u: goto label_2316d0;
        case 0x2316d4u: goto label_2316d4;
        case 0x2316d8u: goto label_2316d8;
        case 0x2316dcu: goto label_2316dc;
        case 0x2316e0u: goto label_2316e0;
        case 0x2316e4u: goto label_2316e4;
        case 0x2316e8u: goto label_2316e8;
        case 0x2316ecu: goto label_2316ec;
        case 0x2316f0u: goto label_2316f0;
        case 0x2316f4u: goto label_2316f4;
        case 0x2316f8u: goto label_2316f8;
        case 0x2316fcu: goto label_2316fc;
        case 0x231700u: goto label_231700;
        case 0x231704u: goto label_231704;
        case 0x231708u: goto label_231708;
        case 0x23170cu: goto label_23170c;
        case 0x231710u: goto label_231710;
        case 0x231714u: goto label_231714;
        case 0x231718u: goto label_231718;
        case 0x23171cu: goto label_23171c;
        case 0x231720u: goto label_231720;
        case 0x231724u: goto label_231724;
        case 0x231728u: goto label_231728;
        case 0x23172cu: goto label_23172c;
        case 0x231730u: goto label_231730;
        case 0x231734u: goto label_231734;
        case 0x231738u: goto label_231738;
        case 0x23173cu: goto label_23173c;
        case 0x231740u: goto label_231740;
        case 0x231744u: goto label_231744;
        case 0x231748u: goto label_231748;
        case 0x23174cu: goto label_23174c;
        case 0x231750u: goto label_231750;
        case 0x231754u: goto label_231754;
        case 0x231758u: goto label_231758;
        case 0x23175cu: goto label_23175c;
        case 0x231760u: goto label_231760;
        case 0x231764u: goto label_231764;
        case 0x231768u: goto label_231768;
        case 0x23176cu: goto label_23176c;
        case 0x231770u: goto label_231770;
        case 0x231774u: goto label_231774;
        case 0x231778u: goto label_231778;
        case 0x23177cu: goto label_23177c;
        case 0x231780u: goto label_231780;
        case 0x231784u: goto label_231784;
        case 0x231788u: goto label_231788;
        case 0x23178cu: goto label_23178c;
        case 0x231790u: goto label_231790;
        case 0x231794u: goto label_231794;
        case 0x231798u: goto label_231798;
        case 0x23179cu: goto label_23179c;
        case 0x2317a0u: goto label_2317a0;
        case 0x2317a4u: goto label_2317a4;
        case 0x2317a8u: goto label_2317a8;
        case 0x2317acu: goto label_2317ac;
        case 0x2317b0u: goto label_2317b0;
        case 0x2317b4u: goto label_2317b4;
        case 0x2317b8u: goto label_2317b8;
        case 0x2317bcu: goto label_2317bc;
        case 0x2317c0u: goto label_2317c0;
        case 0x2317c4u: goto label_2317c4;
        case 0x2317c8u: goto label_2317c8;
        case 0x2317ccu: goto label_2317cc;
        case 0x2317d0u: goto label_2317d0;
        case 0x2317d4u: goto label_2317d4;
        case 0x2317d8u: goto label_2317d8;
        case 0x2317dcu: goto label_2317dc;
        case 0x2317e0u: goto label_2317e0;
        case 0x2317e4u: goto label_2317e4;
        case 0x2317e8u: goto label_2317e8;
        case 0x2317ecu: goto label_2317ec;
        case 0x2317f0u: goto label_2317f0;
        case 0x2317f4u: goto label_2317f4;
        default: break;
    }

    ctx->pc = 0x231698u;

label_231698:
    // 0x231698: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x231698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23169c:
    // 0x23169c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23169cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2316a0:
    // 0x2316a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2316a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2316a4:
    // 0x2316a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2316a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2316a8:
    // 0x2316a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2316a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2316ac:
    // 0x2316ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2316acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2316b0:
    // 0x2316b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2316b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2316b4:
    // 0x2316b4: 0x8e510028  lw          $s1, 0x28($s2)
    ctx->pc = 0x2316b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2316b8:
    // 0x2316b8: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_2316bc:
    if (ctx->pc == 0x2316BCu) {
        ctx->pc = 0x2316BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316B8u;
        // 0x2316bc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2316C0u;
        goto label_2316c0;
    }
    ctx->pc = 0x2316B8u;
    {
        const bool branch_taken_0x2316b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316B8u;
        // 0x2316bc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2316b8) {
            ctx->pc = 0x2317E0u;
            goto label_2317e0;
        }
    }
    ctx->pc = 0x2316C0u;
label_2316c0:
    // 0x2316c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2316c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2316c4:
    // 0x2316c4: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x2316c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_2316c8:
    // 0x2316c8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2316c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2316cc:
    // 0x2316cc: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x2316ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_2316d0:
    // 0x2316d0: 0xde430010  ld          $v1, 0x10($s2)
    ctx->pc = 0x2316d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_2316d4:
    // 0x2316d4: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x2316d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_2316d8:
    // 0x2316d8: 0x6463ff00  daddiu      $v1, $v1, -0x100
    ctx->pc = 0x2316d8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967040);
label_2316dc:
    // 0x2316dc: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2316dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_2316e0:
    // 0x2316e0: 0xfe430010  sd          $v1, 0x10($s2)
    ctx->pc = 0x2316e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 3));
label_2316e4:
    // 0x2316e4: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2316e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2316e8:
    // 0x2316e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2316e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2316ec:
    // 0x2316ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2316f0:
    if (ctx->pc == 0x2316F0u) {
        ctx->pc = 0x2316F4u;
        goto label_2316f4;
    }
    ctx->pc = 0x2316ECu;
    {
        const bool branch_taken_0x2316ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2316ec) {
            ctx->pc = 0x231700u;
            goto label_231700;
        }
    }
    ctx->pc = 0x2316F4u;
label_2316f4:
    // 0x2316f4: 0x9e22002c  lwu         $v0, 0x2C($s1)
    ctx->pc = 0x2316f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2316f8:
    // 0x2316f8: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x2316f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_2316fc:
    // 0x2316fc: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x2316fcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
label_231700:
    // 0x231700: 0xc08c682  jal         func_231A08
label_231704:
    if (ctx->pc == 0x231704u) {
        ctx->pc = 0x231708u;
        goto label_231708;
    }
    ctx->pc = 0x231700u;
    SET_GPR_U32(ctx, 31, 0x231708u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x231700u, 0x231708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231708u;
label_231708:
    // 0x231708: 0x96250012  lhu         $a1, 0x12($s1)
    ctx->pc = 0x231708u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_23170c:
    // 0x23170c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23170cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_231710:
    // 0x231710: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x231710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_231714:
    // 0x231714: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_231718:
    if (ctx->pc == 0x231718u) {
        ctx->pc = 0x231718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231714u;
        // 0x231718: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23171Cu;
        goto label_23171c;
    }
    ctx->pc = 0x231714u;
    {
        const bool branch_taken_0x231714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231714u;
        // 0x231718: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231714) {
            ctx->pc = 0x231740u;
            goto label_231740;
        }
    }
    ctx->pc = 0x23171Cu;
label_23171c:
    // 0x23171c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x23171cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_231720:
    // 0x231720: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_231724:
    if (ctx->pc == 0x231724u) {
        ctx->pc = 0x231728u;
        goto label_231728;
    }
    ctx->pc = 0x231720u;
    {
        const bool branch_taken_0x231720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x231720) {
            ctx->pc = 0x231740u;
            goto label_231740;
        }
    }
    ctx->pc = 0x231728u;
label_231728:
    // 0x231728: 0xc08a9d6  jal         func_22A758
label_23172c:
    if (ctx->pc == 0x23172Cu) {
        ctx->pc = 0x231730u;
        goto label_231730;
    }
    ctx->pc = 0x231728u;
    SET_GPR_U32(ctx, 31, 0x231730u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x231728u, 0x231730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231730u;
label_231730:
    // 0x231730: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x231730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_231734:
    // 0x231734: 0x96250012  lhu         $a1, 0x12($s1)
    ctx->pc = 0x231734u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_231738:
    // 0x231738: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x231738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_23173c:
    // 0x23173c: 0x0  nop
    ctx->pc = 0x23173cu;
    // NOP
label_231740:
    // 0x231740: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_231744:
    if (ctx->pc == 0x231744u) {
        ctx->pc = 0x231744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231740u;
        // 0x231744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231748u;
        goto label_231748;
    }
    ctx->pc = 0x231740u;
    {
        const bool branch_taken_0x231740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231740u;
        // 0x231744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231740) {
            ctx->pc = 0x2317C4u;
            goto label_2317c4;
        }
    }
    ctx->pc = 0x231748u;
label_231748:
    // 0x231748: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x231748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_23174c:
    // 0x23174c: 0x10710008  beq         $v1, $s1, . + 4 + (0x8 << 2)
label_231750:
    if (ctx->pc == 0x231750u) {
        ctx->pc = 0x231750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23174Cu;
        // 0x231750: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x231754u;
        goto label_231754;
    }
    ctx->pc = 0x23174Cu;
    {
        const bool branch_taken_0x23174c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x231750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23174Cu;
        // 0x231750: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23174c) {
            ctx->pc = 0x231770u;
            goto label_231770;
        }
    }
    ctx->pc = 0x231754u;
label_231754:
    // 0x231754: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x231754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_231758:
    // 0x231758: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x231758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_23175c:
    // 0x23175c: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x23175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_231760:
    // 0x231760: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x231760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_231764:
    // 0x231764: 0x10000012  b           . + 4 + (0x12 << 2)
label_231768:
    if (ctx->pc == 0x231768u) {
        ctx->pc = 0x231768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231764u;
        // 0x231768: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23176Cu;
        goto label_23176c;
    }
    ctx->pc = 0x231764u;
    {
        const bool branch_taken_0x231764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231764u;
        // 0x231768: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231764) {
            ctx->pc = 0x2317B0u;
            goto label_2317b0;
        }
    }
    ctx->pc = 0x23176Cu;
label_23176c:
    // 0x23176c: 0x0  nop
    ctx->pc = 0x23176cu;
    // NOP
label_231770:
    // 0x231770: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_231774:
    if (ctx->pc == 0x231774u) {
        ctx->pc = 0x231774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231770u;
        // 0x231774: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231778u;
        goto label_231778;
    }
    ctx->pc = 0x231770u;
    {
        const bool branch_taken_0x231770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231770) {
            ctx->pc = 0x231774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231770u;
            // 0x231774: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231788u;
            goto label_231788;
        }
    }
    ctx->pc = 0x231778u;
label_231778:
    // 0x231778: 0xc098560  jal         func_261580
label_23177c:
    if (ctx->pc == 0x23177Cu) {
        ctx->pc = 0x23177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231778u;
        // 0x23177c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231780u;
        goto label_231780;
    }
    ctx->pc = 0x231778u;
    SET_GPR_U32(ctx, 31, 0x231780u);
    ctx->pc = 0x23177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231778u;
    // 0x23177c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x231778u, 0x231780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231780u;
label_231780:
    // 0x231780: 0x1000000c  b           . + 4 + (0xC << 2)
label_231784:
    if (ctx->pc == 0x231784u) {
        ctx->pc = 0x231784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231780u;
        // 0x231784: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231788u;
        goto label_231788;
    }
    ctx->pc = 0x231780u;
    {
        const bool branch_taken_0x231780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231780u;
        // 0x231784: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231780) {
            ctx->pc = 0x2317B4u;
            goto label_2317b4;
        }
    }
    ctx->pc = 0x231788u;
label_231788:
    // 0x231788: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23178c:
    if (ctx->pc == 0x23178Cu) {
        ctx->pc = 0x231790u;
        goto label_231790;
    }
    ctx->pc = 0x231788u;
    {
        const bool branch_taken_0x231788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231788) {
            ctx->pc = 0x2317A8u;
            goto label_2317a8;
        }
    }
    ctx->pc = 0x231790u;
label_231790:
    // 0x231790: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_231794:
    // 0x231794: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x231794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_231798:
    // 0x231798: 0x40f809  jalr        $v0
label_23179c:
    if (ctx->pc == 0x23179Cu) {
        ctx->pc = 0x23179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231798u;
        // 0x23179c: 0x8e260028  lw          $a2, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2317A0u;
        goto label_2317a0;
    }
    ctx->pc = 0x231798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2317A0u);
        ctx->pc = 0x23179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231798u;
        // 0x23179c: 0x8e260028  lw          $a2, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231798u, 0x2317A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2317A0u;
label_2317a0:
    // 0x2317a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2317a4:
    if (ctx->pc == 0x2317A4u) {
        ctx->pc = 0x2317A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317A0u;
        // 0x2317a4: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2317A8u;
        goto label_2317a8;
    }
    ctx->pc = 0x2317A0u;
    {
        const bool branch_taken_0x2317a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2317A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317A0u;
        // 0x2317a4: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317a0) {
            ctx->pc = 0x2317B4u;
            goto label_2317b4;
        }
    }
    ctx->pc = 0x2317A8u;
label_2317a8:
    // 0x2317a8: 0xc098560  jal         func_261580
label_2317ac:
    if (ctx->pc == 0x2317ACu) {
        ctx->pc = 0x2317ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317A8u;
        // 0x2317ac: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2317B0u;
        goto label_2317b0;
    }
    ctx->pc = 0x2317A8u;
    SET_GPR_U32(ctx, 31, 0x2317B0u);
    ctx->pc = 0x2317ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317A8u;
    // 0x2317ac: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2317A8u, 0x2317B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317B0u;
label_2317b0:
    // 0x2317b0: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2317b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2317b4:
    // 0x2317b4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2317b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_2317b8:
    // 0x2317b8: 0x3042fff6  andi        $v0, $v0, 0xFFF6
    ctx->pc = 0x2317b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65526);
label_2317bc:
    // 0x2317bc: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2317bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_2317c0:
    // 0x2317c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2317c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2317c4:
    // 0x2317c4: 0xc098560  jal         func_261580
label_2317c8:
    if (ctx->pc == 0x2317C8u) {
        ctx->pc = 0x2317C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317C4u;
        // 0x2317c8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2317CCu;
        goto label_2317cc;
    }
    ctx->pc = 0x2317C4u;
    SET_GPR_U32(ctx, 31, 0x2317CCu);
    ctx->pc = 0x2317C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317C4u;
    // 0x2317c8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2317C4u, 0x2317CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317CCu;
label_2317cc:
    // 0x2317cc: 0xc08c698  jal         func_231A60
label_2317d0:
    if (ctx->pc == 0x2317D0u) {
        ctx->pc = 0x2317D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317CCu;
        // 0x2317d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2317D4u;
        goto label_2317d4;
    }
    ctx->pc = 0x2317CCu;
    SET_GPR_U32(ctx, 31, 0x2317D4u);
    ctx->pc = 0x2317D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317CCu;
    // 0x2317d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2317CCu, 0x2317D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317D4u;
label_2317d4:
    // 0x2317d4: 0x1600ffbc  bnez        $s0, . + 4 + (-0x44 << 2)
label_2317d8:
    if (ctx->pc == 0x2317D8u) {
        ctx->pc = 0x2317D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317D4u;
        // 0x2317d8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2317DCu;
        goto label_2317dc;
    }
    ctx->pc = 0x2317D4u;
    {
        const bool branch_taken_0x2317d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2317D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317D4u;
        // 0x2317d8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317d4) {
            ctx->pc = 0x2316C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2316c8;
        }
    }
    ctx->pc = 0x2317DCu;
label_2317dc:
    // 0x2317dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2317dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2317e0:
    // 0x2317e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2317e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2317e4:
    // 0x2317e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2317e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2317e8:
    // 0x2317e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2317e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2317ec:
    // 0x2317ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2317ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2317f0:
    // 0x2317f0: 0x3e00008  jr          $ra
label_2317f4:
    if (ctx->pc == 0x2317F4u) {
        ctx->pc = 0x2317F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317F0u;
        // 0x2317f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2317F8u;
        goto label_fallthrough_0x2317f0;
    }
    ctx->pc = 0x2317F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2317F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317F0u;
        // 0x2317f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2317F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2317f0:
    ctx->pc = 0x2317F8u;
}
