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

// Function: sub_00169590
// Address: 0x169590 - 0x1696e0
void sub_00169590_0x169590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169590_0x169590");
#endif

    switch (ctx->pc) {
        case 0x1695acu: goto label_1695ac;
        case 0x1695b4u: goto label_1695b4;
        case 0x169638u: goto label_169638;
        case 0x169680u: goto label_169680;
        case 0x1696a8u: goto label_1696a8;
        case 0x1696c8u: goto label_1696c8;
        default: break;
    }

    ctx->pc = 0x169590u;

    // 0x169590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16959c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1695a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1695a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695a4: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x1695A4u;
    SET_GPR_U32(ctx, 31, 0x1695ACu);
    ctx->pc = 0x1695A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695A4u;
    // 0x1695a8: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x1695A4u, 0x1695ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695ACu;
label_1695ac:
    // 0x1695ac: 0xc05a108  jal         func_168420
    ctx->pc = 0x1695ACu;
    SET_GPR_U32(ctx, 31, 0x1695B4u);
    ctx->pc = 0x1695B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695ACu;
    // 0x1695b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168420u, 0x1695ACu, 0x1695B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695B4u;
label_1695b4:
    // 0x1695b4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1695b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1695b8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1695b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1695bc: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x1695bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x1695c0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1695c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1695c4: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1695C4u;
    {
        const bool branch_taken_0x1695c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1695c4) {
            ctx->pc = 0x1695C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1695C4u;
            // 0x1695c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169630u;
            goto label_169630;
        }
    }
    ctx->pc = 0x1695CCu;
    // 0x1695cc: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x1695ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1695d0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1695d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1695d4: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x1695d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x1695d8: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x1695d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1695dc: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x1695dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1695e0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1695E0u;
    {
        const bool branch_taken_0x1695e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1695e0) {
            ctx->pc = 0x16962Cu;
            goto label_16962c;
        }
    }
    ctx->pc = 0x1695E8u;
    // 0x1695e8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1695e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x1695ec: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x1695ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x1695f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1695F0u;
    {
        const bool branch_taken_0x1695f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1695f0) {
            ctx->pc = 0x1695FCu;
            goto label_1695fc;
        }
    }
    ctx->pc = 0x1695F8u;
    // 0x1695f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1695f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1695fc:
    // 0x1695fc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1695fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x169600: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x169600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x169604: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x169604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x169608: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x169608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16960c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16960Cu;
    {
        const bool branch_taken_0x16960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16960c) {
            ctx->pc = 0x16962Cu;
            goto label_16962c;
        }
    }
    ctx->pc = 0x169614u;
    // 0x169614: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x169614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x169618: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x169618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16961c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16961Cu;
    {
        const bool branch_taken_0x16961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16961c) {
            ctx->pc = 0x16962Cu;
            goto label_16962c;
        }
    }
    ctx->pc = 0x169624u;
    // 0x169624: 0x3202fffe  andi        $v0, $s0, 0xFFFE
    ctx->pc = 0x169624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65534);
    // 0x169628: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x169628u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16962c:
    // 0x16962c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16962cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169630:
    // 0x169630: 0xc05a34c  jal         func_168D30
    ctx->pc = 0x169630u;
    SET_GPR_U32(ctx, 31, 0x169638u);
    ctx->pc = 0x168D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168D30u, 0x169630u, 0x169638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169638u;
label_169638:
    // 0x169638: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x169638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16963c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x16963cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x169640: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x169640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x169644: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x169644u;
    {
        const bool branch_taken_0x169644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169644) {
            ctx->pc = 0x169648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169644u;
            // 0x169648: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169688u;
            goto label_169688;
        }
    }
    ctx->pc = 0x16964Cu;
    // 0x16964c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x16964cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x169650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x169650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169654: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x169654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169658: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x169658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x16965c: 0x24422cf4  addiu       $v0, $v0, 0x2CF4
    ctx->pc = 0x16965cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11508));
    // 0x169660: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x169660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x169664: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x169664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x169668: 0x24422d34  addiu       $v0, $v0, 0x2D34
    ctx->pc = 0x169668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11572));
    // 0x16966c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x169670: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x169670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169674: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x169674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169678: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169678u;
    SET_GPR_U32(ctx, 31, 0x169680u);
    ctx->pc = 0x16967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169678u;
    // 0x16967c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169678u, 0x169680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169680u;
label_169680:
    // 0x169680: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x169680u;
    {
        const bool branch_taken_0x169680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169680u;
        // 0x169684: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169680) {
            ctx->pc = 0x1696CCu;
            goto label_1696cc;
        }
    }
    ctx->pc = 0x169688u;
label_169688:
    // 0x169688: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169688u;
    {
        const bool branch_taken_0x169688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169688) {
            ctx->pc = 0x1696B0u;
            goto label_1696b0;
        }
    }
    ctx->pc = 0x169690u;
    // 0x169690: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169698: 0x24a52040  addiu       $a1, $a1, 0x2040
    ctx->pc = 0x169698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
    // 0x16969c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x16969cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1696a0: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x1696A0u;
    SET_GPR_U32(ctx, 31, 0x1696A8u);
    ctx->pc = 0x1696A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696A0u;
    // 0x1696a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x1696A0u, 0x1696A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696A8u;
label_1696a8:
    // 0x1696a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1696A8u;
    {
        const bool branch_taken_0x1696a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1696ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696A8u;
        // 0x1696ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696a8) {
            ctx->pc = 0x1696CCu;
            goto label_1696cc;
        }
    }
    ctx->pc = 0x1696B0u;
label_1696b0:
    // 0x1696b0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1696b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1696b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1696b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696b8: 0x24a51f50  addiu       $a1, $a1, 0x1F50
    ctx->pc = 0x1696b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8016));
    // 0x1696bc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1696bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1696c0: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x1696C0u;
    SET_GPR_U32(ctx, 31, 0x1696C8u);
    ctx->pc = 0x1696C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696C0u;
    // 0x1696c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x1696C0u, 0x1696C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696C8u;
label_1696c8:
    // 0x1696c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1696c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1696cc:
    // 0x1696cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1696ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1696d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1696d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1696d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1696d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1696d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1696D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1696DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696D8u;
        // 0x1696dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1696D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1696E0u;
}
