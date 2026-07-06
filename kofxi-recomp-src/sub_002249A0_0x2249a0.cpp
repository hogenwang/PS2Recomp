#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002249A0
// Address: 0x2249a0 - 0x224ae8
void sub_002249A0_0x2249a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002249A0_0x2249a0");
#endif

    switch (ctx->pc) {
        case 0x2249f8u: goto label_2249f8;
        case 0x224a04u: goto label_224a04;
        case 0x224a0cu: goto label_224a0c;
        case 0x224a2cu: goto label_224a2c;
        case 0x224a3cu: goto label_224a3c;
        case 0x224a44u: goto label_224a44;
        case 0x224a54u: goto label_224a54;
        case 0x224a5cu: goto label_224a5c;
        case 0x224a78u: goto label_224a78;
        case 0x224a94u: goto label_224a94;
        case 0x224aa8u: goto label_224aa8;
        case 0x224ac8u: goto label_224ac8;
        case 0x224ad8u: goto label_224ad8;
        default: break;
    }

    ctx->pc = 0x2249a0u;

    // 0x2249a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2249a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2249a4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2249a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2249a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2249a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2249ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2249acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2249b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2249b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2249b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2249b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2249b8: 0x8deeca30  lw          $t6, -0x35D0($t7)
    ctx->pc = 0x2249b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953520)));
    // 0x2249bc: 0x55c0000e  bnel        $t6, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2249BCu;
    {
        const bool branch_taken_0x2249bc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x2249bc) {
            ctx->pc = 0x2249C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2249BCu;
            // 0x2249c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2249F8u;
            goto label_2249f8;
        }
    }
    ctx->pc = 0x2249C4u;
    // 0x2249c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2249c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2249c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2249c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2249cc: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2249ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2249d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2249d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2249d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2249d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2249d8: 0x24843610  addiu       $a0, $a0, 0x3610
    ctx->pc = 0x2249d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13840));
    // 0x2249dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2249dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2249e0: 0x250835f8  addiu       $t0, $t0, 0x35F8
    ctx->pc = 0x2249e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13816));
    // 0x2249e4: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2249e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2249e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2249e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2249ec: 0x2407d8ee  addiu       $a3, $zero, -0x2712
    ctx->pc = 0x2249ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
    // 0x2249f0: 0x8089794  j           func_225E50
    ctx->pc = 0x2249F0u;
    ctx->pc = 0x2249F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2249F0u;
            // 0x2249f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2249F8u;
label_2249f8:
    // 0x2249f8: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2249f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x2249fc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2249fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224a00: 0x8e24ca2c  lw          $a0, -0x35D4($s1)
    ctx->pc = 0x224a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953516)));
label_224a04:
    // 0x224a04: 0xc08982a  jal         func_2260A8
    ctx->pc = 0x224A04u;
    SET_GPR_U32(ctx, 31, 0x224A0Cu);
    ctx->pc = 0x224A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224A04u;
            // 0x224a08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A8u;
    if (runtime->hasFunction(0x2260A8u)) {
        auto targetFn = runtime->lookupFunction(0x2260A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A0Cu; }
        if (ctx->pc != 0x224A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002260A8_0x2260a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A0Cu; }
        if (ctx->pc != 0x224A0Cu) { return; }
    }
    ctx->pc = 0x224A0Cu;
label_224a0c:
    // 0x224a0c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x224A0Cu;
    {
        const bool branch_taken_0x224a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224A0Cu;
            // 0x224a10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a0c) {
            ctx->pc = 0x224AC0u;
            goto label_224ac0;
        }
    }
    ctx->pc = 0x224A14u;
    // 0x224a14: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x224a14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x224a18: 0x8e04ca28  lw          $a0, -0x35D8($s0)
    ctx->pc = 0x224a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953512)));
    // 0x224a1c: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x224A1Cu;
    {
        const bool branch_taken_0x224a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224A1Cu;
            // 0x224a20: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a1c) {
            ctx->pc = 0x224AB8u;
            goto label_224ab8;
        }
    }
    ctx->pc = 0x224A24u;
    // 0x224a24: 0xc088696  jal         func_221A58
    ctx->pc = 0x224A24u;
    SET_GPR_U32(ctx, 31, 0x224A2Cu);
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A2Cu; }
        if (ctx->pc != 0x224A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A2Cu; }
        if (ctx->pc != 0x224A2Cu) { return; }
    }
    ctx->pc = 0x224A2Cu;
label_224a2c:
    // 0x224a2c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x224A2Cu;
    {
        const bool branch_taken_0x224a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a2c) {
            ctx->pc = 0x224A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224A2Cu;
            // 0x224a30: 0x3c10003a  lui         $s0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224A78u;
            goto label_224a78;
        }
    }
    ctx->pc = 0x224A34u;
    // 0x224a34: 0xc088658  jal         func_221960
    ctx->pc = 0x224A34u;
    SET_GPR_U32(ctx, 31, 0x224A3Cu);
    ctx->pc = 0x224A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224A34u;
            // 0x224a38: 0x8e04ca28  lw          $a0, -0x35D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221960u;
    if (runtime->hasFunction(0x221960u)) {
        auto targetFn = runtime->lookupFunction(0x221960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A3Cu; }
        if (ctx->pc != 0x224A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221960_0x221960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A3Cu; }
        if (ctx->pc != 0x224A3Cu) { return; }
    }
    ctx->pc = 0x224A3Cu;
label_224a3c:
    // 0x224a3c: 0xc088696  jal         func_221A58
    ctx->pc = 0x224A3Cu;
    SET_GPR_U32(ctx, 31, 0x224A44u);
    ctx->pc = 0x224A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224A3Cu;
            // 0x224a40: 0x8e04ca28  lw          $a0, -0x35D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A44u; }
        if (ctx->pc != 0x224A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A44u; }
        if (ctx->pc != 0x224A44u) { return; }
    }
    ctx->pc = 0x224A44u;
label_224a44:
    // 0x224a44: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x224a44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224a48: 0x144f000b  bne         $v0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x224A48u;
    {
        const bool branch_taken_0x224a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x224A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224A48u;
            // 0x224a4c: 0x3c10003a  lui         $s0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a48) {
            ctx->pc = 0x224A78u;
            goto label_224a78;
        }
    }
    ctx->pc = 0x224A50u;
    // 0x224a50: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x224a50u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_224a54:
    // 0x224a54: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x224a54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224a58: 0xade2ca30  sw          $v0, -0x35D0($t7)
    ctx->pc = 0x224a58u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294953520), GPR_U32(ctx, 2));
label_224a5c:
    // 0x224a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224a60: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x224a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224a68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224a6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x224a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224a70: 0x3e00008  jr          $ra
    ctx->pc = 0x224A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224A70u;
            // 0x224a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224A78u;
label_224a78:
    // 0x224a78: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x224a78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x224a7c: 0x8e0eca30  lw          $t6, -0x35D0($s0)
    ctx->pc = 0x224a7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953520)));
    // 0x224a80: 0x15cf000d  bne         $t6, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x224A80u;
    {
        const bool branch_taken_0x224a80 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x224A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224A80u;
            // 0x224a84: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a80) {
            ctx->pc = 0x224AB8u;
            goto label_224ab8;
        }
    }
    ctx->pc = 0x224A88u;
    // 0x224a88: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x224a88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x224a8c: 0xc088696  jal         func_221A58
    ctx->pc = 0x224A8Cu;
    SET_GPR_U32(ctx, 31, 0x224A94u);
    ctx->pc = 0x224A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224A8Cu;
            // 0x224a90: 0x8e24ca28  lw          $a0, -0x35D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A94u; }
        if (ctx->pc != 0x224A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A94u; }
        if (ctx->pc != 0x224A94u) { return; }
    }
    ctx->pc = 0x224A94u;
label_224a94:
    // 0x224a94: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x224a94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x224a98: 0x504f0006  beql        $v0, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x224A98u;
    {
        const bool branch_taken_0x224a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x224a98) {
            ctx->pc = 0x224A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224A98u;
            // 0x224a9c: 0xae00ca30  sw          $zero, -0x35D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294953520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224AB4u;
            goto label_224ab4;
        }
    }
    ctx->pc = 0x224AA0u;
    // 0x224aa0: 0xc088696  jal         func_221A58
    ctx->pc = 0x224AA0u;
    SET_GPR_U32(ctx, 31, 0x224AA8u);
    ctx->pc = 0x224AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AA0u;
            // 0x224aa4: 0x8e24ca28  lw          $a0, -0x35D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AA8u; }
        if (ctx->pc != 0x224AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AA8u; }
        if (ctx->pc != 0x224AA8u) { return; }
    }
    ctx->pc = 0x224AA8u;
label_224aa8:
    // 0x224aa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224AA8u;
    {
        const bool branch_taken_0x224aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224AA8u;
            // 0x224aac: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224aa8) {
            ctx->pc = 0x224AB8u;
            goto label_224ab8;
        }
    }
    ctx->pc = 0x224AB0u;
    // 0x224ab0: 0xae00ca30  sw          $zero, -0x35D0($s0)
    ctx->pc = 0x224ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953520), GPR_U32(ctx, 0));
label_224ab4:
    // 0x224ab4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x224ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_224ab8:
    // 0x224ab8: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x224AB8u;
    {
        const bool branch_taken_0x224ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224AB8u;
            // 0x224abc: 0x8deeca30  lw          $t6, -0x35D0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ab8) {
            ctx->pc = 0x224A5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224a5c;
        }
    }
    ctx->pc = 0x224AC0u;
label_224ac0:
    // 0x224ac0: 0xc0890f4  jal         func_2243D0
    ctx->pc = 0x224AC0u;
    SET_GPR_U32(ctx, 31, 0x224AC8u);
    ctx->pc = 0x224AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AC0u;
            // 0x224ac4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2243D0u;
    if (runtime->hasFunction(0x2243D0u)) {
        auto targetFn = runtime->lookupFunction(0x2243D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AC8u; }
        if (ctx->pc != 0x224AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002243D0_0x2243d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AC8u; }
        if (ctx->pc != 0x224AC8u) { return; }
    }
    ctx->pc = 0x224AC8u;
label_224ac8:
    // 0x224ac8: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x224AC8u;
    {
        const bool branch_taken_0x224ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224AC8u;
            // 0x224acc: 0x8e24ca2c  lw          $a0, -0x35D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ac8) {
            ctx->pc = 0x224A04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224a04;
        }
    }
    ctx->pc = 0x224AD0u;
    // 0x224ad0: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x224AD0u;
    SET_GPR_U32(ctx, 31, 0x224AD8u);
    ctx->pc = 0x224AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AD0u;
            // 0x224ad4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (runtime->hasFunction(0x2245E8u)) {
        auto targetFn = runtime->lookupFunction(0x2245E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AD8u; }
        if (ctx->pc != 0x224AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002245E8_0x2245e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AD8u; }
        if (ctx->pc != 0x224AD8u) { return; }
    }
    ctx->pc = 0x224AD8u;
label_224ad8:
    // 0x224ad8: 0x1052ffde  beq         $v0, $s2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x224AD8u;
    {
        const bool branch_taken_0x224ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x224ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224AD8u;
            // 0x224adc: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ad8) {
            ctx->pc = 0x224A54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224a54;
        }
    }
    ctx->pc = 0x224AE0u;
    // 0x224ae0: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x224AE0u;
    {
        const bool branch_taken_0x224ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224AE0u;
            // 0x224ae4: 0x8e24ca2c  lw          $a0, -0x35D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ae0) {
            ctx->pc = 0x224A04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224a04;
        }
    }
    ctx->pc = 0x224AE8u;
    ctx->pc = 0x224ae8u;
}
