#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA980
// Address: 0x1ea980 - 0x1eaae8
void sub_001EA980_0x1ea980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA980_0x1ea980");
#endif

    switch (ctx->pc) {
        case 0x1ea998u: goto label_1ea998;
        case 0x1eaa28u: goto label_1eaa28;
        case 0x1eaa4cu: goto label_1eaa4c;
        case 0x1eaa68u: goto label_1eaa68;
        case 0x1eaa88u: goto label_1eaa88;
        default: break;
    }

    ctx->pc = 0x1ea980u;

    // 0x1ea980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea984: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ea984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea990: 0x807aa66  j           func_1EA998
    ctx->pc = 0x1EA990u;
    ctx->pc = 0x1EA994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA990u;
            // 0x1ea994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA998u;
    goto label_1ea998;
    ctx->pc = 0x1EA998u;
label_1ea998:
    // 0x1ea998: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ea998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ea99c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ea99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ea9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ea9a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ea9a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9a8: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x1ea9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x1ea9ac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ea9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ea9b0: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1ea9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1ea9b4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1ea9b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ea9bc: 0x26c41368  addiu       $a0, $s6, 0x1368
    ctx->pc = 0x1ea9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4968));
    // 0x1ea9c0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1ea9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1ea9c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ea9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ea9c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ea9cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ea9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ea9d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ea9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ea9d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ea9d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9d8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ea9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1ea9dc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1ea9dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ea9e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ea9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ea9e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ea9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ea9ec: 0x24920010  addiu       $s2, $a0, 0x10
    ctx->pc = 0x1ea9ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ea9f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ea9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ea9f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ea9f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9f8: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x1EA9F8u;
    {
        const bool branch_taken_0x1ea9f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA9F8u;
            // 0x1ea9fc: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9f8) {
            ctx->pc = 0x1EAAB8u;
            goto label_1eaab8;
        }
    }
    ctx->pc = 0x1EAA00u;
    // 0x1eaa00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1eaa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1eaa04: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EAA04u;
    {
        const bool branch_taken_0x1eaa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA04u;
            // 0x1eaa08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa04) {
            ctx->pc = 0x1EAAB8u;
            goto label_1eaab8;
        }
    }
    ctx->pc = 0x1EAA0Cu;
    // 0x1eaa0c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAA0Cu;
    {
        const bool branch_taken_0x1eaa0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA0Cu;
            // 0x1eaa10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa0c) {
            ctx->pc = 0x1EAA20u;
            goto label_1eaa20;
        }
    }
    ctx->pc = 0x1EAA14u;
    // 0x1eaa14: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1EAA14u;
    {
        const bool branch_taken_0x1eaa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA14u;
            // 0x1eaa18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa14) {
            ctx->pc = 0x1EAABCu;
            goto label_1eaabc;
        }
    }
    ctx->pc = 0x1EAA1Cu;
    // 0x1eaa1c: 0x0  nop
    ctx->pc = 0x1eaa1cu;
    // NOP
label_1eaa20:
    // 0x1eaa20: 0xc07ab1c  jal         func_1EAC70
    ctx->pc = 0x1EAA20u;
    SET_GPR_U32(ctx, 31, 0x1EAA28u);
    ctx->pc = 0x1EAA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA20u;
            // 0x1eaa24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC70u;
    if (runtime->hasFunction(0x1EAC70u)) {
        auto targetFn = runtime->lookupFunction(0x1EAC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA28u; }
        if (ctx->pc != 0x1EAA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAC70_0x1eac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA28u; }
        if (ctx->pc != 0x1EAA28u) { return; }
    }
    ctx->pc = 0x1EAA28u;
label_1eaa28:
    // 0x1eaa28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1eaa28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa2c: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x1eaa2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1eaa30: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1EAA30u;
    {
        const bool branch_taken_0x1eaa30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaa30) {
            ctx->pc = 0x1EAA34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA30u;
            // 0x1eaa34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAA70u;
            goto label_1eaa70;
        }
    }
    ctx->pc = 0x1EAA38u;
    // 0x1eaa38: 0x2838023  subu        $s0, $s4, $v1
    ctx->pc = 0x1eaa38u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1eaa3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eaa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1eaa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa44: 0xc07ab1c  jal         func_1EAC70
    ctx->pc = 0x1EAA44u;
    SET_GPR_U32(ctx, 31, 0x1EAA4Cu);
    ctx->pc = 0x1EAA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA44u;
            // 0x1eaa48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC70u;
    if (runtime->hasFunction(0x1EAC70u)) {
        auto targetFn = runtime->lookupFunction(0x1EAC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA4Cu; }
        if (ctx->pc != 0x1EAA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAC70_0x1eac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA4Cu; }
        if (ctx->pc != 0x1EAA4Cu) { return; }
    }
    ctx->pc = 0x1EAA4Cu;
label_1eaa4c:
    // 0x1eaa4c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1eaa4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1eaa50: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EAA50u;
    {
        const bool branch_taken_0x1eaa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaa50) {
            ctx->pc = 0x1EAA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA50u;
            // 0x1eaa54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAA70u;
            goto label_1eaa70;
        }
    }
    ctx->pc = 0x1EAA58u;
    // 0x1eaa58: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1eaa58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1eaa5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1eaa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa60: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1EAA60u;
    SET_GPR_U32(ctx, 31, 0x1EAA68u);
    ctx->pc = 0x1EAA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA60u;
            // 0x1eaa64: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA68u; }
        if (ctx->pc != 0x1EAA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA68u; }
        if (ctx->pc != 0x1EAA68u) { return; }
    }
    ctx->pc = 0x1EAA68u;
label_1eaa68:
    // 0x1eaa68: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1eaa68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eaa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eaa70:
    // 0x1eaa70: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EAA70u;
    {
        const bool branch_taken_0x1eaa70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eaa70) {
            ctx->pc = 0x1EAA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA70u;
            // 0x1eaa74: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAAA0u;
            goto label_1eaaa0;
        }
    }
    ctx->pc = 0x1EAA78u;
    // 0x1eaa78: 0x56b30004  bnel        $s5, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAA78u;
    {
        const bool branch_taken_0x1eaa78 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 19));
        if (branch_taken_0x1eaa78) {
            ctx->pc = 0x1EAA7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA78u;
            // 0x1eaa7c: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EAA8Cu;
            goto label_1eaa8c;
        }
    }
    ctx->pc = 0x1EAA80u;
    // 0x1eaa80: 0xc07aaba  jal         func_1EAAE8
    ctx->pc = 0x1EAA80u;
    SET_GPR_U32(ctx, 31, 0x1EAA88u);
    ctx->pc = 0x1EAA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA80u;
            // 0x1eaa84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAE8u;
    if (runtime->hasFunction(0x1EAAE8u)) {
        auto targetFn = runtime->lookupFunction(0x1EAAE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA88u; }
        if (ctx->pc != 0x1EAA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAAE8_0x1eaae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA88u; }
        if (ctx->pc != 0x1EAA88u) { return; }
    }
    ctx->pc = 0x1EAA88u;
label_1eaa88:
    // 0x1eaa88: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1eaa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1eaa8c:
    // 0x1eaa8c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EAA8Cu;
    {
        const bool branch_taken_0x1eaa8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EAA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA8Cu;
            // 0x1eaa90: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa8c) {
            ctx->pc = 0x1EAAACu;
            goto label_1eaaac;
        }
    }
    ctx->pc = 0x1EAA94u;
    // 0x1eaa94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAA94u;
    {
        const bool branch_taken_0x1eaa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA94u;
            // 0x1eaa98: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa94) {
            ctx->pc = 0x1EAAACu;
            goto label_1eaaac;
        }
    }
    ctx->pc = 0x1EAA9Cu;
    // 0x1eaa9c: 0x0  nop
    ctx->pc = 0x1eaa9cu;
    // NOP
label_1eaaa0:
    // 0x1eaaa0: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAAA0u;
    {
        const bool branch_taken_0x1eaaa0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EAAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAAA0u;
            // 0x1eaaa4: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaaa0) {
            ctx->pc = 0x1EAAACu;
            goto label_1eaaac;
        }
    }
    ctx->pc = 0x1EAAA8u;
    // 0x1eaaa8: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1eaaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_1eaaac:
    // 0x1eaaac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eaaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eaab0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1eaab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaab4: 0xaec30044  sw          $v1, 0x44($s6)
    ctx->pc = 0x1eaab4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 3));
label_1eaab8:
    // 0x1eaab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eaab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eaabc:
    // 0x1eaabc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eaabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eaac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eaac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaac4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eaac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eaac8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1eaac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eaacc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1eaaccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eaad0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1eaad0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eaad4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1eaad4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eaad8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1eaad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eaadc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAADCu;
            // 0x1eaae0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAAE4u;
    // 0x1eaae4: 0x0  nop
    ctx->pc = 0x1eaae4u;
    // NOP
    ctx->pc = 0x1eaae8u;
}
