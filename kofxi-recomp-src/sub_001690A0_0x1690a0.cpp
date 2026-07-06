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

// Function: sub_001690A0
// Address: 0x1690a0 - 0x169210
void sub_001690A0_0x1690a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001690A0_0x1690a0");
#endif

    switch (ctx->pc) {
        case 0x1690d8u: goto label_1690d8;
        case 0x1690e0u: goto label_1690e0;
        case 0x1690ecu: goto label_1690ec;
        case 0x1690f8u: goto label_1690f8;
        case 0x1691acu: goto label_1691ac;
        case 0x1691d0u: goto label_1691d0;
        case 0x1691d8u: goto label_1691d8;
        default: break;
    }

    ctx->pc = 0x1690a0u;

    // 0x1690a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1690a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1690a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1690a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1690a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1690a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1690ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1690acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1690b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1690b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1690b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1690b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1690b8: 0x8c820498  lw          $v0, 0x498($a0)
    ctx->pc = 0x1690b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x1690bc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1690bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1690c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1690C0u;
    {
        const bool branch_taken_0x1690c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690C0u;
        // 0x1690c4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690c0) {
            ctx->pc = 0x1690D0u;
            goto label_1690d0;
        }
    }
    ctx->pc = 0x1690C8u;
    // 0x1690c8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1690C8u;
    {
        const bool branch_taken_0x1690c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690C8u;
        // 0x1690cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690c8) {
            ctx->pc = 0x1691ECu;
            goto label_1691ec;
        }
    }
    ctx->pc = 0x1690D0u;
label_1690d0:
    // 0x1690d0: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x1690D0u;
    SET_GPR_U32(ctx, 31, 0x1690D8u);
    ctx->pc = 0x1690D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690D0u;
    // 0x1690d4: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x1690D0u, 0x1690D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1690D8u;
label_1690d8:
    // 0x1690d8: 0xc05a108  jal         func_168420
    ctx->pc = 0x1690D8u;
    SET_GPR_U32(ctx, 31, 0x1690E0u);
    ctx->pc = 0x1690DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690D8u;
    // 0x1690dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168420u, 0x1690D8u, 0x1690E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1690E0u;
label_1690e0:
    // 0x1690e0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1690e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1690e4: 0xc05a338  jal         func_168CE0
    ctx->pc = 0x1690E4u;
    SET_GPR_U32(ctx, 31, 0x1690ECu);
    ctx->pc = 0x1690E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690E4u;
    // 0x1690e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168CE0u, 0x1690E4u, 0x1690ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1690ECu;
label_1690ec:
    // 0x1690ec: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1690ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1690f0: 0xc05a800  jal         func_16A000
    ctx->pc = 0x1690F0u;
    SET_GPR_U32(ctx, 31, 0x1690F8u);
    ctx->pc = 0x1690F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690F0u;
    // 0x1690f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A000u, 0x1690F0u, 0x1690F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1690F8u;
label_1690f8:
    // 0x1690f8: 0x8e43048c  lw          $v1, 0x48C($s2)
    ctx->pc = 0x1690f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
    // 0x1690fc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1690fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x169100: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x169100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x169104: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x169104u;
    {
        const bool branch_taken_0x169104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169104) {
            ctx->pc = 0x169108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169104u;
            // 0x169108: 0x8e420498  lw          $v0, 0x498($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16911Cu;
            goto label_16911c;
        }
    }
    ctx->pc = 0x16910Cu;
    // 0x16910c: 0x8e420498  lw          $v0, 0x498($s2)
    ctx->pc = 0x16910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x169110: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x169110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x169114: 0xae420498  sw          $v0, 0x498($s2)
    ctx->pc = 0x169114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
    // 0x169118: 0x8e420498  lw          $v0, 0x498($s2)
    ctx->pc = 0x169118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
label_16911c:
    // 0x16911c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x169120: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x169120u;
    {
        const bool branch_taken_0x169120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169120) {
            ctx->pc = 0x169124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169120u;
            // 0x169124: 0x3203ffff  andi        $v1, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169140u;
            goto label_169140;
        }
    }
    ctx->pc = 0x169128u;
    // 0x169128: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x169128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x16912c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16912cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x169130: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x169130u;
    {
        const bool branch_taken_0x169130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169130) {
            ctx->pc = 0x169134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169130u;
            // 0x169134: 0x64100002  daddiu      $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169160u;
            goto label_169160;
        }
    }
    ctx->pc = 0x169138u;
    // 0x169138: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x169138u;
    {
        const bool branch_taken_0x169138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169138u;
        // 0x16913c: 0x64100003  daddiu      $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169138) {
            ctx->pc = 0x169160u;
            goto label_169160;
        }
    }
    ctx->pc = 0x169140u;
label_169140:
    // 0x169140: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x169140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x169144: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x169144u;
    {
        const bool branch_taken_0x169144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169144) {
            ctx->pc = 0x169148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169144u;
            // 0x169148: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169154u;
            goto label_169154;
        }
    }
    ctx->pc = 0x16914Cu;
    // 0x16914c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16914Cu;
    {
        const bool branch_taken_0x16914c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16914Cu;
        // 0x169150: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16914c) {
            ctx->pc = 0x169160u;
            goto label_169160;
        }
    }
    ctx->pc = 0x169154u;
label_169154:
    // 0x169154: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x169154u;
    {
        const bool branch_taken_0x169154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169154) {
            ctx->pc = 0x169158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169154u;
            // 0x169158: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169160u;
            goto label_169160;
        }
    }
    ctx->pc = 0x16915Cu;
    // 0x16915c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16915cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169160:
    // 0x169160: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x169160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x169164: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x169164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x169168: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x169168u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16916c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16916cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169170: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x169170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x169174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169178: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x169178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16917c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16917cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x169180: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x169180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x169184: 0x24632d50  addiu       $v1, $v1, 0x2D50
    ctx->pc = 0x169184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11600));
    // 0x169188: 0x24422d90  addiu       $v0, $v0, 0x2D90
    ctx->pc = 0x169188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11664));
    // 0x16918c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16918cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169190: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x169190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x169194: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x169194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x169198: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x169198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16919c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16919cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1691a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1691a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1691a4: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x1691A4u;
    SET_GPR_U32(ctx, 31, 0x1691ACu);
    ctx->pc = 0x1691A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691A4u;
    // 0x1691a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x1691A4u, 0x1691ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691ACu;
label_1691ac:
    // 0x1691ac: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1691acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1691b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1691b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1691b4: 0x52620009  beql        $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1691B4u;
    {
        const bool branch_taken_0x1691b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1691b4) {
            ctx->pc = 0x1691B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1691B4u;
            // 0x1691b8: 0x8e440498  lw          $a0, 0x498($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1691DCu;
            goto label_1691dc;
        }
    }
    ctx->pc = 0x1691BCu;
    // 0x1691bc: 0x964400ea  lhu         $a0, 0xEA($s2)
    ctx->pc = 0x1691bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    // 0x1691c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1691c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1691c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1691c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1691c8: 0xc063314  jal         func_18CC50
    ctx->pc = 0x1691C8u;
    SET_GPR_U32(ctx, 31, 0x1691D0u);
    ctx->pc = 0x1691CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691C8u;
    // 0x1691cc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC50u, 0x1691C8u, 0x1691D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691D0u;
label_1691d0:
    // 0x1691d0: 0xc0621b0  jal         func_1886C0
    ctx->pc = 0x1691D0u;
    SET_GPR_U32(ctx, 31, 0x1691D8u);
    ctx->pc = 0x1691D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691D0u;
    // 0x1691d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1886C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1886C0u, 0x1691D0u, 0x1691D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691D8u;
label_1691d8:
    // 0x1691d8: 0x8e440498  lw          $a0, 0x498($s2)
    ctx->pc = 0x1691d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
label_1691dc:
    // 0x1691dc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1691dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1691e0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1691e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1691e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1691e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1691e8: 0xae430498  sw          $v1, 0x498($s2)
    ctx->pc = 0x1691e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 3));
label_1691ec:
    // 0x1691ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1691ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1691f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1691f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1691f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1691f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1691f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1691f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1691fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1691fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169200: 0x3e00008  jr          $ra
    ctx->pc = 0x169200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169200u;
        // 0x169204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169208u;
    // 0x169208: 0x0  nop
    ctx->pc = 0x169208u;
    // NOP
    // 0x16920c: 0x0  nop
    ctx->pc = 0x16920cu;
    // NOP
}
