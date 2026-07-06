#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B8A0
// Address: 0x14b8a0 - 0x14ba70
void sub_0014B8A0_0x14b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B8A0_0x14b8a0");
#endif

    switch (ctx->pc) {
        case 0x14b8e8u: goto label_14b8e8;
        case 0x14b974u: goto label_14b974;
        case 0x14b9a4u: goto label_14b9a4;
        case 0x14b9ccu: goto label_14b9cc;
        case 0x14ba28u: goto label_14ba28;
        case 0x14ba3cu: goto label_14ba3c;
        default: break;
    }

    ctx->pc = 0x14b8a0u;

    // 0x14b8a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14b8a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14b8a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14b8ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14b8b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14b8b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14b8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14b8b8: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x14b8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x14b8bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b8c0: 0x3075003f  andi        $s5, $v1, 0x3F
    ctx->pc = 0x14b8c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x14b8c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b8c8: 0x2aa30030  slti        $v1, $s5, 0x30
    ctx->pc = 0x14b8c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14b8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b8d0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B8D0u;
    {
        const bool branch_taken_0x14b8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8D0u;
            // 0x14b8d4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8d0) {
            ctx->pc = 0x14B8ECu;
            goto label_14b8ec;
        }
    }
    ctx->pc = 0x14B8D8u;
    // 0x14b8d8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b8dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14b8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8e0: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B8E0u;
    SET_GPR_U32(ctx, 31, 0x14B8E8u);
    ctx->pc = 0x14B8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8E0u;
            // 0x14b8e4: 0x2484ce00  addiu       $a0, $a0, -0x3200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8E8u; }
        if (ctx->pc != 0x14B8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B8E8u; }
        if (ctx->pc != 0x14B8E8u) { return; }
    }
    ctx->pc = 0x14B8E8u;
label_14b8e8:
    // 0x14b8e8: 0x64150030  daddiu      $s5, $zero, 0x30
    ctx->pc = 0x14b8e8u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
label_14b8ec:
    // 0x14b8ec: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14b8f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14b8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b8f4: 0x90655d20  lbu         $a1, 0x5D20($v1)
    ctx->pc = 0x14b8f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23840)));
    // 0x14b8f8: 0x50a4003c  beql        $a1, $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x14B8F8u;
    {
        const bool branch_taken_0x14b8f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x14b8f8) {
            ctx->pc = 0x14B8FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8F8u;
            // 0x14b8fc: 0x32a2ffff  andi        $v0, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B9ECu;
            goto label_14b9ec;
        }
    }
    ctx->pc = 0x14B900u;
    // 0x14b900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14b900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b904: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B904u;
    {
        const bool branch_taken_0x14b904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x14b904) {
            ctx->pc = 0x14B908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B904u;
            // 0x14b908: 0x32b2ffff  andi        $s2, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B920u;
            goto label_14b920;
        }
    }
    ctx->pc = 0x14B90Cu;
    // 0x14b90c: 0x50a0004e  beql        $a1, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x14B90Cu;
    {
        const bool branch_taken_0x14b90c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b90c) {
            ctx->pc = 0x14B910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B90Cu;
            // 0x14b910: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BA48u;
            goto label_14ba48;
        }
    }
    ctx->pc = 0x14B914u;
    // 0x14b914: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x14B914u;
    {
        const bool branch_taken_0x14b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b914) {
            ctx->pc = 0x14BA44u;
            goto label_14ba44;
        }
    }
    ctx->pc = 0x14B91Cu;
    // 0x14b91c: 0x32b2ffff  andi        $s2, $s5, 0xFFFF
    ctx->pc = 0x14b91cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_14b920:
    // 0x14b920: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x14b920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x14b924: 0x2484e180  addiu       $a0, $a0, -0x1E80
    ctx->pc = 0x14b924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    // 0x14b928: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x14b928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x14b92c: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x14b92cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14b930: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x14b930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14b934: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x14b934u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14b938: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B938u;
    {
        const bool branch_taken_0x14b938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14b938) {
            ctx->pc = 0x14B95Cu;
            goto label_14b95c;
        }
    }
    ctx->pc = 0x14B940u;
    // 0x14b940: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14b940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14b944: 0x329100ff  andi        $s1, $s4, 0xFF
    ctx->pc = 0x14b944u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x14b948: 0x24635d40  addiu       $v1, $v1, 0x5D40
    ctx->pc = 0x14b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23872));
    // 0x14b94c: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x14b94cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x14b950: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x14b950u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b954: 0x14720004  bne         $v1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B954u;
    {
        const bool branch_taken_0x14b954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x14b954) {
            ctx->pc = 0x14B968u;
            goto label_14b968;
        }
    }
    ctx->pc = 0x14B95Cu;
label_14b95c:
    // 0x14b95c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14b960: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x14B960u;
    {
        const bool branch_taken_0x14b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B960u;
            // 0x14b964: 0xa0605d20  sb          $zero, 0x5D20($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23840), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b960) {
            ctx->pc = 0x14BA44u;
            goto label_14ba44;
        }
    }
    ctx->pc = 0x14B968u;
label_14b968:
    // 0x14b968: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b96c: 0xc06c128  jal         func_1B04A0
    ctx->pc = 0x14B96Cu;
    SET_GPR_U32(ctx, 31, 0x14B974u);
    ctx->pc = 0x14B970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B96Cu;
            // 0x14b970: 0x8c445d08  lw          $a0, 0x5D08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23816)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B04A0u;
    if (runtime->hasFunction(0x1B04A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B04A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B974u; }
        if (ctx->pc != 0x14B974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B04A0_0x1b04a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B974u; }
        if (ctx->pc != 0x14B974u) { return; }
    }
    ctx->pc = 0x14B974u;
label_14b974:
    // 0x14b974: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b978: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x14b978u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14b97c: 0xac405d08  sw          $zero, 0x5D08($v0)
    ctx->pc = 0x14b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23816), GPR_U32(ctx, 0));
    // 0x14b980: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x14b980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x14b984: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x14b984u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14b988: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14b988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b98c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x14b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x14b990: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14b990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14b994: 0x2442b2c0  addiu       $v0, $v0, -0x4D40
    ctx->pc = 0x14b994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x14b998: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x14b998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x14b99c: 0xc052b2c  jal         func_14ACB0
    ctx->pc = 0x14B99Cu;
    SET_GPR_U32(ctx, 31, 0x14B9A4u);
    ctx->pc = 0x14B9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B99Cu;
            // 0x14b9a0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ACB0u;
    if (runtime->hasFunction(0x14ACB0u)) {
        auto targetFn = runtime->lookupFunction(0x14ACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9A4u; }
        if (ctx->pc != 0x14B9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ACB0_0x14acb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9A4u; }
        if (ctx->pc != 0x14B9A4u) { return; }
    }
    ctx->pc = 0x14B9A4u;
label_14b9a4:
    // 0x14b9a4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14b9a8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14b9ac: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14b9b0: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x14b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x14b9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b9b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9bc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x14b9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b9c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14b9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9c4: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14B9C4u;
    SET_GPR_U32(ctx, 31, 0x14B9CCu);
    ctx->pc = 0x14B9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9C4u;
            // 0x14b9c8: 0x2484ce20  addiu       $a0, $a0, -0x31E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9CCu; }
        if (ctx->pc != 0x14B9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B9CCu; }
        if (ctx->pc != 0x14B9CCu) { return; }
    }
    ctx->pc = 0x14B9CCu;
label_14b9cc:
    // 0x14b9cc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14b9d0: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x14b9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x14b9d4: 0x90645d20  lbu         $a0, 0x5D20($v1)
    ctx->pc = 0x14b9d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23840)));
    // 0x14b9d8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14b9dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14b9e0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14B9E0u;
    {
        const bool branch_taken_0x14b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9E0u;
            // 0x14b9e4: 0xa0645d20  sb          $a0, 0x5D20($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23840), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9e0) {
            ctx->pc = 0x14BA44u;
            goto label_14ba44;
        }
    }
    ctx->pc = 0x14B9E8u;
    // 0x14b9e8: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x14b9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_14b9ec:
    // 0x14b9ec: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x14b9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x14b9f0: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x14b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14b9f4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14b9f8: 0x2442e180  addiu       $v0, $v0, -0x1E80
    ctx->pc = 0x14b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959488));
    // 0x14b9fc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x14b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14ba00: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x14ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14ba04: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x14ba04u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ba08: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x14ba08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ba0c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14ba10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x14ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x14ba14: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14ba18: 0x2442b2c0  addiu       $v0, $v0, -0x4D40
    ctx->pc = 0x14ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x14ba1c: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x14ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x14ba20: 0xc052b48  jal         func_14AD20
    ctx->pc = 0x14BA20u;
    SET_GPR_U32(ctx, 31, 0x14BA28u);
    ctx->pc = 0x14BA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA20u;
            // 0x14ba24: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD20u;
    if (runtime->hasFunction(0x14AD20u)) {
        auto targetFn = runtime->lookupFunction(0x14AD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA28u; }
        if (ctx->pc != 0x14BA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD20_0x14ad20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA28u; }
        if (ctx->pc != 0x14BA28u) { return; }
    }
    ctx->pc = 0x14BA28u;
label_14ba28:
    // 0x14ba28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14BA28u;
    {
        const bool branch_taken_0x14ba28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ba28) {
            ctx->pc = 0x14BA44u;
            goto label_14ba44;
        }
    }
    ctx->pc = 0x14BA30u;
    // 0x14ba30: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14ba30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14ba34: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14BA34u;
    SET_GPR_U32(ctx, 31, 0x14BA3Cu);
    ctx->pc = 0x14BA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA34u;
            // 0x14ba38: 0x2484ce38  addiu       $a0, $a0, -0x31C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA3Cu; }
        if (ctx->pc != 0x14BA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA3Cu; }
        if (ctx->pc != 0x14BA3Cu) { return; }
    }
    ctx->pc = 0x14BA3Cu;
label_14ba3c:
    // 0x14ba3c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14ba40: 0xa0605d20  sb          $zero, 0x5D20($v1)
    ctx->pc = 0x14ba40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23840), (uint8_t)GPR_U32(ctx, 0));
label_14ba44:
    // 0x14ba44: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14ba44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_14ba48:
    // 0x14ba48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14ba48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ba4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14ba4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ba50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14ba50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ba54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ba54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ba58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ba58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ba5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ba5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ba60: 0x3e00008  jr          $ra
    ctx->pc = 0x14BA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA60u;
            // 0x14ba64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14BA68u;
    // 0x14ba68: 0x0  nop
    ctx->pc = 0x14ba68u;
    // NOP
    // 0x14ba6c: 0x0  nop
    ctx->pc = 0x14ba6cu;
    // NOP
    ctx->pc = 0x14ba70u;
}
