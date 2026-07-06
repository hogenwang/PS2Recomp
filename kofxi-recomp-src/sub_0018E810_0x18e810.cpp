#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018E810
// Address: 0x18e810 - 0x18ea60
void sub_0018E810_0x18e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E810_0x18e810");
#endif

    switch (ctx->pc) {
        case 0x18e834u: goto label_18e834;
        case 0x18e8c0u: goto label_18e8c0;
        case 0x18e8fcu: goto label_18e8fc;
        case 0x18e914u: goto label_18e914;
        case 0x18e938u: goto label_18e938;
        case 0x18e95cu: goto label_18e95c;
        case 0x18e974u: goto label_18e974;
        case 0x18e984u: goto label_18e984;
        case 0x18e990u: goto label_18e990;
        case 0x18e9b4u: goto label_18e9b4;
        case 0x18e9ccu: goto label_18e9cc;
        case 0x18e9e4u: goto label_18e9e4;
        case 0x18ea00u: goto label_18ea00;
        case 0x18ea18u: goto label_18ea18;
        case 0x18ea34u: goto label_18ea34;
        default: break;
    }

    ctx->pc = 0x18e810u;

    // 0x18e810: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18e814: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18e818: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18e81c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18e820: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18e820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e824: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e82c: 0xc0639e8  jal         func_18E7A0
    ctx->pc = 0x18E82Cu;
    SET_GPR_U32(ctx, 31, 0x18E834u);
    ctx->pc = 0x18E830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E82Cu;
            // 0x18e830: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E7A0u;
    if (runtime->hasFunction(0x18E7A0u)) {
        auto targetFn = runtime->lookupFunction(0x18E7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E834u; }
        if (ctx->pc != 0x18E834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E7A0_0x18e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E834u; }
        if (ctx->pc != 0x18E834u) { return; }
    }
    ctx->pc = 0x18E834u;
label_18e834:
    // 0x18e834: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18e834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18e838: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x18e838u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e83c: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x18e83cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x18e840: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18e844: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x18e844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18e848: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18e84c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18e84cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e850: 0x5462007b  bnel        $v1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x18E850u;
    {
        const bool branch_taken_0x18e850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e850) {
            ctx->pc = 0x18E854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E850u;
            // 0x18e854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18EA40u;
            goto label_18ea40;
        }
    }
    ctx->pc = 0x18E858u;
    // 0x18e858: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18e858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18e85c: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x18e85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18e860: 0x2442bc40  addiu       $v0, $v0, -0x43C0
    ctx->pc = 0x18e860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949952));
    // 0x18e864: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x18e864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18e868: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x18e868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18e86c: 0xa0720000  sb          $s2, 0x0($v1)
    ctx->pc = 0x18e86cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x18e870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e874: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18e878: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18e878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18e87c: 0x2463bd50  addiu       $v1, $v1, -0x42B0
    ctx->pc = 0x18e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950224));
    // 0x18e880: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x18e880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e884: 0x488c0  sll         $s1, $a0, 3
    ctx->pc = 0x18e884u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18e888: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e88c: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x18e88cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18e890: 0x92630094  lbu         $v1, 0x94($s3)
    ctx->pc = 0x18e890u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x18e894: 0x5062005e  beql        $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x18E894u;
    {
        const bool branch_taken_0x18e894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e894) {
            ctx->pc = 0x18E898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E894u;
            // 0x18e898: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18EA10u;
            goto label_18ea10;
        }
    }
    ctx->pc = 0x18E89Cu;
    // 0x18e89c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e8a0: 0x5062004e  beql        $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x18E8A0u;
    {
        const bool branch_taken_0x18e8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e8a0) {
            ctx->pc = 0x18E8A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8A0u;
            // 0x18e8a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E9DCu;
            goto label_18e9dc;
        }
    }
    ctx->pc = 0x18E8A8u;
    // 0x18e8a8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E8A8u;
    {
        const bool branch_taken_0x18e8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8a8) {
            ctx->pc = 0x18E8ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8A8u;
            // 0x18e8ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E8B8u;
            goto label_18e8b8;
        }
    }
    ctx->pc = 0x18E8B0u;
    // 0x18e8b0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x18E8B0u;
    {
        const bool branch_taken_0x18e8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8B0u;
            // 0x18e8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8b0) {
            ctx->pc = 0x18EA40u;
            goto label_18ea40;
        }
    }
    ctx->pc = 0x18E8B8u;
label_18e8b8:
    // 0x18e8b8: 0xc066020  jal         func_198080
    ctx->pc = 0x18E8B8u;
    SET_GPR_U32(ctx, 31, 0x18E8C0u);
    ctx->pc = 0x18E8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8B8u;
            // 0x18e8bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (runtime->hasFunction(0x198080u)) {
        auto targetFn = runtime->lookupFunction(0x198080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8C0u; }
        if (ctx->pc != 0x18E8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198080_0x198080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8C0u; }
        if (ctx->pc != 0x18E8C0u) { return; }
    }
    ctx->pc = 0x18E8C0u;
label_18e8c0:
    // 0x18e8c0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x18e8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x18e8c4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x18e8c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x18e8c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e8cc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E8CCu;
    {
        const bool branch_taken_0x18e8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e8cc) {
            ctx->pc = 0x18E8DCu;
            goto label_18e8dc;
        }
    }
    ctx->pc = 0x18E8D4u;
    // 0x18e8d4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x18E8D4u;
    {
        const bool branch_taken_0x18e8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8D4u;
            // 0x18e8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8d4) {
            ctx->pc = 0x18EA40u;
            goto label_18ea40;
        }
    }
    ctx->pc = 0x18E8DCu;
label_18e8dc:
    // 0x18e8dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18e8e0: 0x3292ffff  andi        $s2, $s4, 0xFFFF
    ctx->pc = 0x18e8e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x18e8e4: 0x2442bdc8  addiu       $v0, $v0, -0x4238
    ctx->pc = 0x18e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950344));
    // 0x18e8e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18e8ec: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x18e8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18e8f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18e8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e8f4: 0xc0cb404  jal         func_32D010
    ctx->pc = 0x18E8F4u;
    SET_GPR_U32(ctx, 31, 0x18E8FCu);
    ctx->pc = 0x18E8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8F4u;
            // 0x18e8f8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32D010u;
    if (runtime->hasFunction(0x32D010u)) {
        auto targetFn = runtime->lookupFunction(0x32D010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8FCu; }
        if (ctx->pc != 0x18E8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032D010_0x32d010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8FCu; }
        if (ctx->pc != 0x18E8FCu) { return; }
    }
    ctx->pc = 0x18E8FCu;
label_18e8fc:
    // 0x18e8fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x18e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18e900: 0x56420008  bnel        $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E900u;
    {
        const bool branch_taken_0x18e900 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e900) {
            ctx->pc = 0x18E904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E900u;
            // 0x18e904: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E924u;
            goto label_18e924;
        }
    }
    ctx->pc = 0x18E908u;
    // 0x18e908: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18e908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18e90c: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18E90Cu;
    SET_GPR_U32(ctx, 31, 0x18E914u);
    ctx->pc = 0x18E910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E90Cu;
            // 0x18e910: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E914u; }
        if (ctx->pc != 0x18E914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E914u; }
        if (ctx->pc != 0x18E914u) { return; }
    }
    ctx->pc = 0x18E914u;
label_18e914:
    // 0x18e914: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18e914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18e918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e91c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x18E91Cu;
    {
        const bool branch_taken_0x18e91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E91Cu;
            // 0x18e920: 0xa2620094  sb          $v0, 0x94($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e91c) {
            ctx->pc = 0x18EA3Cu;
            goto label_18ea3c;
        }
    }
    ctx->pc = 0x18E924u;
label_18e924:
    // 0x18e924: 0x56420008  bnel        $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E924u;
    {
        const bool branch_taken_0x18e924 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e924) {
            ctx->pc = 0x18E928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E924u;
            // 0x18e928: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E948u;
            goto label_18e948;
        }
    }
    ctx->pc = 0x18E92Cu;
    // 0x18e92c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18e930: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18E930u;
    SET_GPR_U32(ctx, 31, 0x18E938u);
    ctx->pc = 0x18E934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E930u;
            // 0x18e934: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E938u; }
        if (ctx->pc != 0x18E938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E938u; }
        if (ctx->pc != 0x18E938u) { return; }
    }
    ctx->pc = 0x18E938u;
label_18e938:
    // 0x18e938: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18e938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18e93c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e940: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18E940u;
    {
        const bool branch_taken_0x18e940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E940u;
            // 0x18e944: 0xa2620094  sb          $v0, 0x94($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e940) {
            ctx->pc = 0x18EA3Cu;
            goto label_18ea3c;
        }
    }
    ctx->pc = 0x18E948u;
label_18e948:
    // 0x18e948: 0x56420008  bnel        $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E948u;
    {
        const bool branch_taken_0x18e948 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e948) {
            ctx->pc = 0x18E94Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18E948u;
            // 0x18e94c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18E96Cu;
            goto label_18e96c;
        }
    }
    ctx->pc = 0x18E950u;
    // 0x18e950: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18e950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18e954: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18E954u;
    SET_GPR_U32(ctx, 31, 0x18E95Cu);
    ctx->pc = 0x18E958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E954u;
            // 0x18e958: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E95Cu; }
        if (ctx->pc != 0x18E95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E95Cu; }
        if (ctx->pc != 0x18E95Cu) { return; }
    }
    ctx->pc = 0x18E95Cu;
label_18e95c:
    // 0x18e95c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18e960: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e964: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x18E964u;
    {
        const bool branch_taken_0x18e964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E964u;
            // 0x18e968: 0xa2620094  sb          $v0, 0x94($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e964) {
            ctx->pc = 0x18EA3Cu;
            goto label_18ea3c;
        }
    }
    ctx->pc = 0x18E96Cu;
label_18e96c:
    // 0x18e96c: 0xc0cb4a8  jal         func_32D2A0
    ctx->pc = 0x18E96Cu;
    SET_GPR_U32(ctx, 31, 0x18E974u);
    ctx->pc = 0x32D2A0u;
    if (runtime->hasFunction(0x32D2A0u)) {
        auto targetFn = runtime->lookupFunction(0x32D2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E974u; }
        if (ctx->pc != 0x18E974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032D2A0_0x32d2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E974u; }
        if (ctx->pc != 0x18E974u) { return; }
    }
    ctx->pc = 0x18E974u;
label_18e974:
    // 0x18e974: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E974u;
    {
        const bool branch_taken_0x18e974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e974) {
            ctx->pc = 0x18E99Cu;
            goto label_18e99c;
        }
    }
    ctx->pc = 0x18E97Cu;
    // 0x18e97c: 0xc0693a0  jal         func_1A4E80
    ctx->pc = 0x18E97Cu;
    SET_GPR_U32(ctx, 31, 0x18E984u);
    ctx->pc = 0x18E980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E97Cu;
            // 0x18e980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E984u; }
        if (ctx->pc != 0x18E984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4E80_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E984u; }
        if (ctx->pc != 0x18E984u) { return; }
    }
    ctx->pc = 0x18E984u;
label_18e984:
    // 0x18e984: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18e984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18e988: 0xc0cb4c0  jal         func_32D300
    ctx->pc = 0x18E988u;
    SET_GPR_U32(ctx, 31, 0x18E990u);
    ctx->pc = 0x18E98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E988u;
            // 0x18e98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32D300u;
    if (runtime->hasFunction(0x32D300u)) {
        auto targetFn = runtime->lookupFunction(0x32D300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E990u; }
        if (ctx->pc != 0x18E990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032D300_0x32d300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E990u; }
        if (ctx->pc != 0x18E990u) { return; }
    }
    ctx->pc = 0x18E990u;
label_18e990:
    // 0x18e990: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e994: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x18E994u;
    {
        const bool branch_taken_0x18e994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E994u;
            // 0x18e998: 0xa2620094  sb          $v0, 0x94($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e994) {
            ctx->pc = 0x18EA3Cu;
            goto label_18ea3c;
        }
    }
    ctx->pc = 0x18E99Cu;
label_18e99c:
    // 0x18e99c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18e9a0: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x18e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x18e9a4: 0x2463bdc8  addiu       $v1, $v1, -0x4238
    ctx->pc = 0x18e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950344));
    // 0x18e9a8: 0x34443800  ori         $a0, $v0, 0x3800
    ctx->pc = 0x18e9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    // 0x18e9ac: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x18E9ACu;
    SET_GPR_U32(ctx, 31, 0x18E9B4u);
    ctx->pc = 0x18E9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9ACu;
            // 0x18e9b0: 0x718021  addu        $s0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (runtime->hasFunction(0x1A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9B4u; }
        if (ctx->pc != 0x18E9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B80_0x1a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9B4u; }
        if (ctx->pc != 0x18E9B4u) { return; }
    }
    ctx->pc = 0x18E9B4u;
label_18e9b4:
    // 0x18e9b4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18e9b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18e9bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18e9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e9c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18e9c4: 0xc066080  jal         func_198200
    ctx->pc = 0x18E9C4u;
    SET_GPR_U32(ctx, 31, 0x18E9CCu);
    ctx->pc = 0x18E9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9C4u;
            // 0x18e9c8: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198200u;
    if (runtime->hasFunction(0x198200u)) {
        auto targetFn = runtime->lookupFunction(0x198200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9CCu; }
        if (ctx->pc != 0x18E9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198200_0x198200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9CCu; }
        if (ctx->pc != 0x18E9CCu) { return; }
    }
    ctx->pc = 0x18E9CCu;
label_18e9cc:
    // 0x18e9cc: 0x92620094  lbu         $v0, 0x94($s3)
    ctx->pc = 0x18e9ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x18e9d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18e9d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18E9D4u;
    {
        const bool branch_taken_0x18e9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9D4u;
            // 0x18e9d8: 0xa2620094  sb          $v0, 0x94($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9d4) {
            ctx->pc = 0x18EA3Cu;
            goto label_18ea3c;
        }
    }
    ctx->pc = 0x18E9DCu;
label_18e9dc:
    // 0x18e9dc: 0xc066020  jal         func_198080
    ctx->pc = 0x18E9DCu;
    SET_GPR_U32(ctx, 31, 0x18E9E4u);
    ctx->pc = 0x18E9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9DCu;
            // 0x18e9e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (runtime->hasFunction(0x198080u)) {
        auto targetFn = runtime->lookupFunction(0x198080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9E4u; }
        if (ctx->pc != 0x18E9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198080_0x198080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9E4u; }
        if (ctx->pc != 0x18E9E4u) { return; }
    }
    ctx->pc = 0x18E9E4u;
label_18e9e4:
    // 0x18e9e4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x18e9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x18e9e8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x18e9e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x18e9ec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x18e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x18e9f0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18E9F0u;
    {
        const bool branch_taken_0x18e9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e9f0) {
            ctx->pc = 0x18EA3Cu;
            goto label_18ea3c;
        }
    }
    ctx->pc = 0x18E9F8u;
    // 0x18e9f8: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x18E9F8u;
    SET_GPR_U32(ctx, 31, 0x18EA00u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA00u; }
        if (ctx->pc != 0x18EA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA00u; }
        if (ctx->pc != 0x18EA00u) { return; }
    }
    ctx->pc = 0x18EA00u;
label_18ea00:
    // 0x18ea00: 0x92620094  lbu         $v0, 0x94($s3)
    ctx->pc = 0x18ea00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x18ea04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ea08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18EA08u;
    {
        const bool branch_taken_0x18ea08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA08u;
            // 0x18ea0c: 0xa2620094  sb          $v0, 0x94($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea08) {
            ctx->pc = 0x18EA3Cu;
            goto label_18ea3c;
        }
    }
    ctx->pc = 0x18EA10u;
label_18ea10:
    // 0x18ea10: 0xc063b18  jal         func_18EC60
    ctx->pc = 0x18EA10u;
    SET_GPR_U32(ctx, 31, 0x18EA18u);
    ctx->pc = 0x18EA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA10u;
            // 0x18ea14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EC60u;
    if (runtime->hasFunction(0x18EC60u)) {
        auto targetFn = runtime->lookupFunction(0x18EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA18u; }
        if (ctx->pc != 0x18EA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018EC60_0x18ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA18u; }
        if (ctx->pc != 0x18EA18u) { return; }
    }
    ctx->pc = 0x18EA18u;
label_18ea18:
    // 0x18ea18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18ea1c: 0xa2120000  sb          $s2, 0x0($s0)
    ctx->pc = 0x18ea1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x18ea20: 0x9043bd40  lbu         $v1, -0x42C0($v0)
    ctx->pc = 0x18ea20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950208)));
    // 0x18ea24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18ea28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ea2c: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x18EA2Cu;
    SET_GPR_U32(ctx, 31, 0x18EA34u);
    ctx->pc = 0x18EA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA2Cu;
            // 0x18ea30: 0xa043bd40  sb          $v1, -0x42C0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950208), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA34u; }
        if (ctx->pc != 0x18EA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA34u; }
        if (ctx->pc != 0x18EA34u) { return; }
    }
    ctx->pc = 0x18EA34u;
label_18ea34:
    // 0x18ea34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18EA34u;
    {
        const bool branch_taken_0x18ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA34u;
            // 0x18ea38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea34) {
            ctx->pc = 0x18EA40u;
            goto label_18ea40;
        }
    }
    ctx->pc = 0x18EA3Cu;
label_18ea3c:
    // 0x18ea3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ea3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ea40:
    // 0x18ea40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18ea40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ea44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18ea44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ea48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ea48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ea4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ea4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ea50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ea50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ea54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ea54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ea58: 0x3e00008  jr          $ra
    ctx->pc = 0x18EA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA58u;
            // 0x18ea5c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18EA60u;
    ctx->pc = 0x18ea60u;
}
