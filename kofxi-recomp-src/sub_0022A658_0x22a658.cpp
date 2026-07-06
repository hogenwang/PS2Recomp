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

// Function: sub_0022A658
// Address: 0x22a658 - 0x22a758
void sub_0022A658_0x22a658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A658_0x22a658");
#endif

    switch (ctx->pc) {
        case 0x22a658u: goto label_22a658;
        case 0x22a65cu: goto label_22a65c;
        case 0x22a660u: goto label_22a660;
        case 0x22a664u: goto label_22a664;
        case 0x22a668u: goto label_22a668;
        case 0x22a66cu: goto label_22a66c;
        case 0x22a670u: goto label_22a670;
        case 0x22a674u: goto label_22a674;
        case 0x22a678u: goto label_22a678;
        case 0x22a67cu: goto label_22a67c;
        case 0x22a680u: goto label_22a680;
        case 0x22a684u: goto label_22a684;
        case 0x22a688u: goto label_22a688;
        case 0x22a68cu: goto label_22a68c;
        case 0x22a690u: goto label_22a690;
        case 0x22a694u: goto label_22a694;
        case 0x22a698u: goto label_22a698;
        case 0x22a69cu: goto label_22a69c;
        case 0x22a6a0u: goto label_22a6a0;
        case 0x22a6a4u: goto label_22a6a4;
        case 0x22a6a8u: goto label_22a6a8;
        case 0x22a6acu: goto label_22a6ac;
        case 0x22a6b0u: goto label_22a6b0;
        case 0x22a6b4u: goto label_22a6b4;
        case 0x22a6b8u: goto label_22a6b8;
        case 0x22a6bcu: goto label_22a6bc;
        case 0x22a6c0u: goto label_22a6c0;
        case 0x22a6c4u: goto label_22a6c4;
        case 0x22a6c8u: goto label_22a6c8;
        case 0x22a6ccu: goto label_22a6cc;
        case 0x22a6d0u: goto label_22a6d0;
        case 0x22a6d4u: goto label_22a6d4;
        case 0x22a6d8u: goto label_22a6d8;
        case 0x22a6dcu: goto label_22a6dc;
        case 0x22a6e0u: goto label_22a6e0;
        case 0x22a6e4u: goto label_22a6e4;
        case 0x22a6e8u: goto label_22a6e8;
        case 0x22a6ecu: goto label_22a6ec;
        case 0x22a6f0u: goto label_22a6f0;
        case 0x22a6f4u: goto label_22a6f4;
        case 0x22a6f8u: goto label_22a6f8;
        case 0x22a6fcu: goto label_22a6fc;
        case 0x22a700u: goto label_22a700;
        case 0x22a704u: goto label_22a704;
        case 0x22a708u: goto label_22a708;
        case 0x22a70cu: goto label_22a70c;
        case 0x22a710u: goto label_22a710;
        case 0x22a714u: goto label_22a714;
        case 0x22a718u: goto label_22a718;
        case 0x22a71cu: goto label_22a71c;
        case 0x22a720u: goto label_22a720;
        case 0x22a724u: goto label_22a724;
        case 0x22a728u: goto label_22a728;
        case 0x22a72cu: goto label_22a72c;
        case 0x22a730u: goto label_22a730;
        case 0x22a734u: goto label_22a734;
        case 0x22a738u: goto label_22a738;
        case 0x22a73cu: goto label_22a73c;
        case 0x22a740u: goto label_22a740;
        case 0x22a744u: goto label_22a744;
        case 0x22a748u: goto label_22a748;
        case 0x22a74cu: goto label_22a74c;
        case 0x22a750u: goto label_22a750;
        case 0x22a754u: goto label_22a754;
        default: break;
    }

    ctx->pc = 0x22a658u;

label_22a658:
    // 0x22a658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22a658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22a65c:
    // 0x22a65c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22a660:
    // 0x22a660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a664:
    // 0x22a664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22a668:
    // 0x22a668: 0xc08c682  jal         func_231A08
label_22a66c:
    if (ctx->pc == 0x22A66Cu) {
        ctx->pc = 0x22A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A668u;
        // 0x22a66c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A670u;
        goto label_22a670;
    }
    ctx->pc = 0x22A668u;
    SET_GPR_U32(ctx, 31, 0x22A670u);
    ctx->pc = 0x22A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A668u;
    // 0x22a66c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22A668u, 0x22A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A670u;
label_22a670:
    // 0x22a670: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x22a670u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22a674:
    // 0x22a674: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a678:
    // 0x22a678: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x22a678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_22a67c:
    // 0x22a67c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22a680:
    if (ctx->pc == 0x22A680u) {
        ctx->pc = 0x22A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A67Cu;
        // 0x22a680: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A684u;
        goto label_22a684;
    }
    ctx->pc = 0x22A67Cu;
    {
        const bool branch_taken_0x22a67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A67Cu;
        // 0x22a680: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a67c) {
            ctx->pc = 0x22A6A8u;
            goto label_22a6a8;
        }
    }
    ctx->pc = 0x22A684u;
label_22a684:
    // 0x22a684: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x22a684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_22a688:
    // 0x22a688: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_22a68c:
    if (ctx->pc == 0x22A68Cu) {
        ctx->pc = 0x22A690u;
        goto label_22a690;
    }
    ctx->pc = 0x22A688u;
    {
        const bool branch_taken_0x22a688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a688) {
            ctx->pc = 0x22A6A8u;
            goto label_22a6a8;
        }
    }
    ctx->pc = 0x22A690u;
label_22a690:
    // 0x22a690: 0xc08a9d6  jal         func_22A758
label_22a694:
    if (ctx->pc == 0x22A694u) {
        ctx->pc = 0x22A698u;
        goto label_22a698;
    }
    ctx->pc = 0x22A690u;
    SET_GPR_U32(ctx, 31, 0x22A698u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22A690u, 0x22A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A698u;
label_22a698:
    // 0x22a698: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x22a698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_22a69c:
    // 0x22a69c: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x22a69cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22a6a0:
    // 0x22a6a0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x22a6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_22a6a4:
    // 0x22a6a4: 0x0  nop
    ctx->pc = 0x22a6a4u;
    // NOP
label_22a6a8:
    // 0x22a6a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_22a6ac:
    if (ctx->pc == 0x22A6ACu) {
        ctx->pc = 0x22A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6A8u;
        // 0x22a6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A6B0u;
        goto label_22a6b0;
    }
    ctx->pc = 0x22A6A8u;
    {
        const bool branch_taken_0x22a6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6A8u;
        // 0x22a6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6a8) {
            ctx->pc = 0x22A72Cu;
            goto label_22a72c;
        }
    }
    ctx->pc = 0x22A6B0u;
label_22a6b0:
    // 0x22a6b0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x22a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_22a6b4:
    // 0x22a6b4: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_22a6b8:
    if (ctx->pc == 0x22A6B8u) {
        ctx->pc = 0x22A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6B4u;
        // 0x22a6b8: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A6BCu;
        goto label_22a6bc;
    }
    ctx->pc = 0x22A6B4u;
    {
        const bool branch_taken_0x22a6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x22A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6B4u;
        // 0x22a6b8: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6b4) {
            ctx->pc = 0x22A6D8u;
            goto label_22a6d8;
        }
    }
    ctx->pc = 0x22A6BCu;
label_22a6bc:
    // 0x22a6bc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x22a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22a6c0:
    // 0x22a6c0: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x22a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_22a6c4:
    // 0x22a6c4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x22a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22a6c8:
    // 0x22a6c8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x22a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_22a6cc:
    // 0x22a6cc: 0x10000012  b           . + 4 + (0x12 << 2)
label_22a6d0:
    if (ctx->pc == 0x22A6D0u) {
        ctx->pc = 0x22A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6CCu;
        // 0x22a6d0: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A6D4u;
        goto label_22a6d4;
    }
    ctx->pc = 0x22A6CCu;
    {
        const bool branch_taken_0x22a6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6CCu;
        // 0x22a6d0: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6cc) {
            ctx->pc = 0x22A718u;
            goto label_22a718;
        }
    }
    ctx->pc = 0x22A6D4u;
label_22a6d4:
    // 0x22a6d4: 0x0  nop
    ctx->pc = 0x22a6d4u;
    // NOP
label_22a6d8:
    // 0x22a6d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22a6dc:
    if (ctx->pc == 0x22A6DCu) {
        ctx->pc = 0x22A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6D8u;
        // 0x22a6dc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A6E0u;
        goto label_22a6e0;
    }
    ctx->pc = 0x22A6D8u;
    {
        const bool branch_taken_0x22a6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a6d8) {
            ctx->pc = 0x22A6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A6D8u;
            // 0x22a6dc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A6F0u;
            goto label_22a6f0;
        }
    }
    ctx->pc = 0x22A6E0u;
label_22a6e0:
    // 0x22a6e0: 0xc098560  jal         func_261580
label_22a6e4:
    if (ctx->pc == 0x22A6E4u) {
        ctx->pc = 0x22A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6E0u;
        // 0x22a6e4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A6E8u;
        goto label_22a6e8;
    }
    ctx->pc = 0x22A6E0u;
    SET_GPR_U32(ctx, 31, 0x22A6E8u);
    ctx->pc = 0x22A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A6E0u;
    // 0x22a6e4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22A6E0u, 0x22A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A6E8u;
label_22a6e8:
    // 0x22a6e8: 0x1000000c  b           . + 4 + (0xC << 2)
label_22a6ec:
    if (ctx->pc == 0x22A6ECu) {
        ctx->pc = 0x22A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6E8u;
        // 0x22a6ec: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A6F0u;
        goto label_22a6f0;
    }
    ctx->pc = 0x22A6E8u;
    {
        const bool branch_taken_0x22a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6E8u;
        // 0x22a6ec: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a6e8) {
            ctx->pc = 0x22A71Cu;
            goto label_22a71c;
        }
    }
    ctx->pc = 0x22A6F0u;
label_22a6f0:
    // 0x22a6f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22a6f4:
    if (ctx->pc == 0x22A6F4u) {
        ctx->pc = 0x22A6F8u;
        goto label_22a6f8;
    }
    ctx->pc = 0x22A6F0u;
    {
        const bool branch_taken_0x22a6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a6f0) {
            ctx->pc = 0x22A710u;
            goto label_22a710;
        }
    }
    ctx->pc = 0x22A6F8u;
label_22a6f8:
    // 0x22a6f8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x22a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_22a6fc:
    // 0x22a6fc: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x22a6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_22a700:
    // 0x22a700: 0x40f809  jalr        $v0
label_22a704:
    if (ctx->pc == 0x22A704u) {
        ctx->pc = 0x22A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A700u;
        // 0x22a704: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A708u;
        goto label_22a708;
    }
    ctx->pc = 0x22A700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A708u);
        ctx->pc = 0x22A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A700u;
        // 0x22a704: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A700u, 0x22A708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A708u;
label_22a708:
    // 0x22a708: 0x10000004  b           . + 4 + (0x4 << 2)
label_22a70c:
    if (ctx->pc == 0x22A70Cu) {
        ctx->pc = 0x22A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A708u;
        // 0x22a70c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A710u;
        goto label_22a710;
    }
    ctx->pc = 0x22A708u;
    {
        const bool branch_taken_0x22a708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A708u;
        // 0x22a70c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a708) {
            ctx->pc = 0x22A71Cu;
            goto label_22a71c;
        }
    }
    ctx->pc = 0x22A710u;
label_22a710:
    // 0x22a710: 0xc098560  jal         func_261580
label_22a714:
    if (ctx->pc == 0x22A714u) {
        ctx->pc = 0x22A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A710u;
        // 0x22a714: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A718u;
        goto label_22a718;
    }
    ctx->pc = 0x22A710u;
    SET_GPR_U32(ctx, 31, 0x22A718u);
    ctx->pc = 0x22A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A710u;
    // 0x22a714: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22A710u, 0x22A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A718u;
label_22a718:
    // 0x22a718: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x22a718u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22a71c:
    // 0x22a71c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_22a720:
    // 0x22a720: 0x3042fff6  andi        $v0, $v0, 0xFFF6
    ctx->pc = 0x22a720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65526);
label_22a724:
    // 0x22a724: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x22a724u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_22a728:
    // 0x22a728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a72c:
    // 0x22a72c: 0xc098560  jal         func_261580
label_22a730:
    if (ctx->pc == 0x22A730u) {
        ctx->pc = 0x22A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A72Cu;
        // 0x22a730: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A734u;
        goto label_22a734;
    }
    ctx->pc = 0x22A72Cu;
    SET_GPR_U32(ctx, 31, 0x22A734u);
    ctx->pc = 0x22A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A72Cu;
    // 0x22a730: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22A72Cu, 0x22A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A734u;
label_22a734:
    // 0x22a734: 0xc08c698  jal         func_231A60
label_22a738:
    if (ctx->pc == 0x22A738u) {
        ctx->pc = 0x22A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A734u;
        // 0x22a738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A73Cu;
        goto label_22a73c;
    }
    ctx->pc = 0x22A734u;
    SET_GPR_U32(ctx, 31, 0x22A73Cu);
    ctx->pc = 0x22A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A734u;
    // 0x22a738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22A734u, 0x22A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A73Cu;
label_22a73c:
    // 0x22a73c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22a73cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a740:
    // 0x22a740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22a740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22a744:
    // 0x22a744: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22a748:
    // 0x22a748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22a74c:
    // 0x22a74c: 0x3e00008  jr          $ra
label_22a750:
    if (ctx->pc == 0x22A750u) {
        ctx->pc = 0x22A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A74Cu;
        // 0x22a750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A754u;
        goto label_22a754;
    }
    ctx->pc = 0x22A74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A74Cu;
        // 0x22a750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A754u;
label_22a754:
    // 0x22a754: 0x0  nop
    ctx->pc = 0x22a754u;
    // NOP
    if (ctx->pc == 0x22a754u) { ctx->pc = 0x22a758u; }
}
