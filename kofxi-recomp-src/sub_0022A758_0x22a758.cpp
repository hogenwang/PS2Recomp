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

// Function: sub_0022A758
// Address: 0x22a758 - 0x22a870
void sub_0022A758_0x22a758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A758_0x22a758");
#endif

    switch (ctx->pc) {
        case 0x22a758u: goto label_22a758;
        case 0x22a75cu: goto label_22a75c;
        case 0x22a760u: goto label_22a760;
        case 0x22a764u: goto label_22a764;
        case 0x22a768u: goto label_22a768;
        case 0x22a76cu: goto label_22a76c;
        case 0x22a770u: goto label_22a770;
        case 0x22a774u: goto label_22a774;
        case 0x22a778u: goto label_22a778;
        case 0x22a77cu: goto label_22a77c;
        case 0x22a780u: goto label_22a780;
        case 0x22a784u: goto label_22a784;
        case 0x22a788u: goto label_22a788;
        case 0x22a78cu: goto label_22a78c;
        case 0x22a790u: goto label_22a790;
        case 0x22a794u: goto label_22a794;
        case 0x22a798u: goto label_22a798;
        case 0x22a79cu: goto label_22a79c;
        case 0x22a7a0u: goto label_22a7a0;
        case 0x22a7a4u: goto label_22a7a4;
        case 0x22a7a8u: goto label_22a7a8;
        case 0x22a7acu: goto label_22a7ac;
        case 0x22a7b0u: goto label_22a7b0;
        case 0x22a7b4u: goto label_22a7b4;
        case 0x22a7b8u: goto label_22a7b8;
        case 0x22a7bcu: goto label_22a7bc;
        case 0x22a7c0u: goto label_22a7c0;
        case 0x22a7c4u: goto label_22a7c4;
        case 0x22a7c8u: goto label_22a7c8;
        case 0x22a7ccu: goto label_22a7cc;
        case 0x22a7d0u: goto label_22a7d0;
        case 0x22a7d4u: goto label_22a7d4;
        case 0x22a7d8u: goto label_22a7d8;
        case 0x22a7dcu: goto label_22a7dc;
        case 0x22a7e0u: goto label_22a7e0;
        case 0x22a7e4u: goto label_22a7e4;
        case 0x22a7e8u: goto label_22a7e8;
        case 0x22a7ecu: goto label_22a7ec;
        case 0x22a7f0u: goto label_22a7f0;
        case 0x22a7f4u: goto label_22a7f4;
        case 0x22a7f8u: goto label_22a7f8;
        case 0x22a7fcu: goto label_22a7fc;
        case 0x22a800u: goto label_22a800;
        case 0x22a804u: goto label_22a804;
        case 0x22a808u: goto label_22a808;
        case 0x22a80cu: goto label_22a80c;
        case 0x22a810u: goto label_22a810;
        case 0x22a814u: goto label_22a814;
        case 0x22a818u: goto label_22a818;
        case 0x22a81cu: goto label_22a81c;
        case 0x22a820u: goto label_22a820;
        case 0x22a824u: goto label_22a824;
        case 0x22a828u: goto label_22a828;
        case 0x22a82cu: goto label_22a82c;
        case 0x22a830u: goto label_22a830;
        case 0x22a834u: goto label_22a834;
        case 0x22a838u: goto label_22a838;
        case 0x22a83cu: goto label_22a83c;
        case 0x22a840u: goto label_22a840;
        case 0x22a844u: goto label_22a844;
        case 0x22a848u: goto label_22a848;
        case 0x22a84cu: goto label_22a84c;
        case 0x22a850u: goto label_22a850;
        case 0x22a854u: goto label_22a854;
        case 0x22a858u: goto label_22a858;
        case 0x22a85cu: goto label_22a85c;
        case 0x22a860u: goto label_22a860;
        case 0x22a864u: goto label_22a864;
        case 0x22a868u: goto label_22a868;
        case 0x22a86cu: goto label_22a86c;
        default: break;
    }

    ctx->pc = 0x22a758u;

label_22a758:
    // 0x22a758: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22a75c:
    // 0x22a75c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22a760:
    // 0x22a760: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22a760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22a764:
    // 0x22a764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a768:
    // 0x22a768: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22a76c:
    // 0x22a76c: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
label_22a770:
    if (ctx->pc == 0x22A770u) {
        ctx->pc = 0x22A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A76Cu;
        // 0x22a770: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A774u;
        goto label_22a774;
    }
    ctx->pc = 0x22A76Cu;
    {
        const bool branch_taken_0x22a76c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A76Cu;
        // 0x22a770: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a76c) {
            ctx->pc = 0x22A854u;
            goto label_22a854;
        }
    }
    ctx->pc = 0x22A774u;
label_22a774:
    // 0x22a774: 0x2412fff6  addiu       $s2, $zero, -0xA
    ctx->pc = 0x22a774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
label_22a778:
    // 0x22a778: 0xc08c682  jal         func_231A08
label_22a77c:
    if (ctx->pc == 0x22A77Cu) {
        ctx->pc = 0x22A780u;
        goto label_22a780;
    }
    ctx->pc = 0x22A778u;
    SET_GPR_U32(ctx, 31, 0x22A780u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22A778u, 0x22A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A780u;
label_22a780:
    // 0x22a780: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x22a780u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22a784:
    // 0x22a784: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a788:
    // 0x22a788: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x22a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_22a78c:
    // 0x22a78c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22a790:
    if (ctx->pc == 0x22A790u) {
        ctx->pc = 0x22A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A78Cu;
        // 0x22a790: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A794u;
        goto label_22a794;
    }
    ctx->pc = 0x22A78Cu;
    {
        const bool branch_taken_0x22a78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A78Cu;
        // 0x22a790: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a78c) {
            ctx->pc = 0x22A7B8u;
            goto label_22a7b8;
        }
    }
    ctx->pc = 0x22A794u;
label_22a794:
    // 0x22a794: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x22a794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_22a798:
    // 0x22a798: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_22a79c:
    if (ctx->pc == 0x22A79Cu) {
        ctx->pc = 0x22A7A0u;
        goto label_22a7a0;
    }
    ctx->pc = 0x22A798u;
    {
        const bool branch_taken_0x22a798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a798) {
            ctx->pc = 0x22A7B8u;
            goto label_22a7b8;
        }
    }
    ctx->pc = 0x22A7A0u;
label_22a7a0:
    // 0x22a7a0: 0xc08a9d6  jal         func_22A758
label_22a7a4:
    if (ctx->pc == 0x22A7A4u) {
        ctx->pc = 0x22A7A8u;
        goto label_22a7a8;
    }
    ctx->pc = 0x22A7A0u;
    SET_GPR_U32(ctx, 31, 0x22A7A8u);
    ctx->pc = 0x22A758u;
    goto label_22a758;
    ctx->pc = 0x22A7A8u;
label_22a7a8:
    // 0x22a7a8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x22a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_22a7ac:
    // 0x22a7ac: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x22a7acu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22a7b0:
    // 0x22a7b0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x22a7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_22a7b4:
    // 0x22a7b4: 0x0  nop
    ctx->pc = 0x22a7b4u;
    // NOP
label_22a7b8:
    // 0x22a7b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_22a7bc:
    if (ctx->pc == 0x22A7BCu) {
        ctx->pc = 0x22A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7B8u;
        // 0x22a7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A7C0u;
        goto label_22a7c0;
    }
    ctx->pc = 0x22A7B8u;
    {
        const bool branch_taken_0x22a7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7B8u;
        // 0x22a7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7b8) {
            ctx->pc = 0x22A83Cu;
            goto label_22a83c;
        }
    }
    ctx->pc = 0x22A7C0u;
label_22a7c0:
    // 0x22a7c0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x22a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_22a7c4:
    // 0x22a7c4: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_22a7c8:
    if (ctx->pc == 0x22A7C8u) {
        ctx->pc = 0x22A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7C4u;
        // 0x22a7c8: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A7CCu;
        goto label_22a7cc;
    }
    ctx->pc = 0x22A7C4u;
    {
        const bool branch_taken_0x22a7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x22A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7C4u;
        // 0x22a7c8: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7c4) {
            ctx->pc = 0x22A7E8u;
            goto label_22a7e8;
        }
    }
    ctx->pc = 0x22A7CCu;
label_22a7cc:
    // 0x22a7cc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x22a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22a7d0:
    // 0x22a7d0: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x22a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_22a7d4:
    // 0x22a7d4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x22a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22a7d8:
    // 0x22a7d8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x22a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_22a7dc:
    // 0x22a7dc: 0x10000012  b           . + 4 + (0x12 << 2)
label_22a7e0:
    if (ctx->pc == 0x22A7E0u) {
        ctx->pc = 0x22A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7DCu;
        // 0x22a7e0: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A7E4u;
        goto label_22a7e4;
    }
    ctx->pc = 0x22A7DCu;
    {
        const bool branch_taken_0x22a7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7DCu;
        // 0x22a7e0: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7dc) {
            ctx->pc = 0x22A828u;
            goto label_22a828;
        }
    }
    ctx->pc = 0x22A7E4u;
label_22a7e4:
    // 0x22a7e4: 0x0  nop
    ctx->pc = 0x22a7e4u;
    // NOP
label_22a7e8:
    // 0x22a7e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22a7ec:
    if (ctx->pc == 0x22A7ECu) {
        ctx->pc = 0x22A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7E8u;
        // 0x22a7ec: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A7F0u;
        goto label_22a7f0;
    }
    ctx->pc = 0x22A7E8u;
    {
        const bool branch_taken_0x22a7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a7e8) {
            ctx->pc = 0x22A7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A7E8u;
            // 0x22a7ec: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A800u;
            goto label_22a800;
        }
    }
    ctx->pc = 0x22A7F0u;
label_22a7f0:
    // 0x22a7f0: 0xc098560  jal         func_261580
label_22a7f4:
    if (ctx->pc == 0x22A7F4u) {
        ctx->pc = 0x22A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7F0u;
        // 0x22a7f4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A7F8u;
        goto label_22a7f8;
    }
    ctx->pc = 0x22A7F0u;
    SET_GPR_U32(ctx, 31, 0x22A7F8u);
    ctx->pc = 0x22A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A7F0u;
    // 0x22a7f4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22A7F0u, 0x22A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7F8u;
label_22a7f8:
    // 0x22a7f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_22a7fc:
    if (ctx->pc == 0x22A7FCu) {
        ctx->pc = 0x22A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7F8u;
        // 0x22a7fc: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A800u;
        goto label_22a800;
    }
    ctx->pc = 0x22A7F8u;
    {
        const bool branch_taken_0x22a7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A7F8u;
        // 0x22a7fc: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7f8) {
            ctx->pc = 0x22A82Cu;
            goto label_22a82c;
        }
    }
    ctx->pc = 0x22A800u;
label_22a800:
    // 0x22a800: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22a804:
    if (ctx->pc == 0x22A804u) {
        ctx->pc = 0x22A808u;
        goto label_22a808;
    }
    ctx->pc = 0x22A800u;
    {
        const bool branch_taken_0x22a800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a800) {
            ctx->pc = 0x22A820u;
            goto label_22a820;
        }
    }
    ctx->pc = 0x22A808u;
label_22a808:
    // 0x22a808: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x22a808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_22a80c:
    // 0x22a80c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x22a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_22a810:
    // 0x22a810: 0x40f809  jalr        $v0
label_22a814:
    if (ctx->pc == 0x22A814u) {
        ctx->pc = 0x22A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A810u;
        // 0x22a814: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A818u;
        goto label_22a818;
    }
    ctx->pc = 0x22A810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A818u);
        ctx->pc = 0x22A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A810u;
        // 0x22a814: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A810u, 0x22A818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A818u;
label_22a818:
    // 0x22a818: 0x10000004  b           . + 4 + (0x4 << 2)
label_22a81c:
    if (ctx->pc == 0x22A81Cu) {
        ctx->pc = 0x22A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A818u;
        // 0x22a81c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A820u;
        goto label_22a820;
    }
    ctx->pc = 0x22A818u;
    {
        const bool branch_taken_0x22a818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A818u;
        // 0x22a81c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a818) {
            ctx->pc = 0x22A82Cu;
            goto label_22a82c;
        }
    }
    ctx->pc = 0x22A820u;
label_22a820:
    // 0x22a820: 0xc098560  jal         func_261580
label_22a824:
    if (ctx->pc == 0x22A824u) {
        ctx->pc = 0x22A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A820u;
        // 0x22a824: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A828u;
        goto label_22a828;
    }
    ctx->pc = 0x22A820u;
    SET_GPR_U32(ctx, 31, 0x22A828u);
    ctx->pc = 0x22A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A820u;
    // 0x22a824: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22A820u, 0x22A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A828u;
label_22a828:
    // 0x22a828: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x22a828u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22a82c:
    // 0x22a82c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_22a830:
    // 0x22a830: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x22a830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_22a834:
    // 0x22a834: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x22a834u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_22a838:
    // 0x22a838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a83c:
    // 0x22a83c: 0xc098560  jal         func_261580
label_22a840:
    if (ctx->pc == 0x22A840u) {
        ctx->pc = 0x22A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A83Cu;
        // 0x22a840: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A844u;
        goto label_22a844;
    }
    ctx->pc = 0x22A83Cu;
    SET_GPR_U32(ctx, 31, 0x22A844u);
    ctx->pc = 0x22A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A83Cu;
    // 0x22a840: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22A83Cu, 0x22A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A844u;
label_22a844:
    // 0x22a844: 0xc08c698  jal         func_231A60
label_22a848:
    if (ctx->pc == 0x22A848u) {
        ctx->pc = 0x22A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A844u;
        // 0x22a848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A84Cu;
        goto label_22a84c;
    }
    ctx->pc = 0x22A844u;
    SET_GPR_U32(ctx, 31, 0x22A84Cu);
    ctx->pc = 0x22A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A844u;
    // 0x22a848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22A844u, 0x22A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A84Cu;
label_22a84c:
    // 0x22a84c: 0x1600ffca  bnez        $s0, . + 4 + (-0x36 << 2)
label_22a850:
    if (ctx->pc == 0x22A850u) {
        ctx->pc = 0x22A854u;
        goto label_22a854;
    }
    ctx->pc = 0x22A84Cu;
    {
        const bool branch_taken_0x22a84c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a84c) {
            ctx->pc = 0x22A778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a778;
        }
    }
    ctx->pc = 0x22A854u;
label_22a854:
    // 0x22a854: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22a854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22a858:
    // 0x22a858: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22a85c:
    // 0x22a85c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a85cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22a860:
    // 0x22a860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22a864:
    // 0x22a864: 0x3e00008  jr          $ra
label_22a868:
    if (ctx->pc == 0x22A868u) {
        ctx->pc = 0x22A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A864u;
        // 0x22a868: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A86Cu;
        goto label_22a86c;
    }
    ctx->pc = 0x22A864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A864u;
        // 0x22a868: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A86Cu;
label_22a86c:
    // 0x22a86c: 0x0  nop
    ctx->pc = 0x22a86cu;
    // NOP
    if (ctx->pc == 0x22a86cu) { ctx->pc = 0x22a870u; }
}
