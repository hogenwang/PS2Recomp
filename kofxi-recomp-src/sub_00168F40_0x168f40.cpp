#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168F40
// Address: 0x168f40 - 0x1690a0
void sub_00168F40_0x168f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168F40_0x168f40");
#endif

    switch (ctx->pc) {
        case 0x168fc8u: goto label_168fc8;
        case 0x168fd8u: goto label_168fd8;
        case 0x168fe0u: goto label_168fe0;
        case 0x168fe8u: goto label_168fe8;
        case 0x169038u: goto label_169038;
        case 0x169078u: goto label_169078;
        default: break;
    }

    ctx->pc = 0x168f40u;

    // 0x168f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168f44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x168f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x168f48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x168f4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168f50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x168f50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168f5c: 0x8c83048c  lw          $v1, 0x48C($a0)
    ctx->pc = 0x168f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x168f60: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x168f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x168f64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168F64u;
    {
        const bool branch_taken_0x168f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F64u;
            // 0x168f68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f64) {
            ctx->pc = 0x168F74u;
            goto label_168f74;
        }
    }
    ctx->pc = 0x168F6Cu;
    // 0x168f6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x168F6Cu;
    {
        const bool branch_taken_0x168f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F6Cu;
            // 0x168f70: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f6c) {
            ctx->pc = 0x168FB8u;
            goto label_168fb8;
        }
    }
    ctx->pc = 0x168F74u;
label_168f74:
    // 0x168f74: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x168f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x168f78: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168F78u;
    {
        const bool branch_taken_0x168f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168f78) {
            ctx->pc = 0x168F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168F78u;
            // 0x168f7c: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x168F88u;
            goto label_168f88;
        }
    }
    ctx->pc = 0x168F80u;
    // 0x168f80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x168F80u;
    {
        const bool branch_taken_0x168f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F80u;
            // 0x168f84: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f80) {
            ctx->pc = 0x168FB4u;
            goto label_168fb4;
        }
    }
    ctx->pc = 0x168F88u;
label_168f88:
    // 0x168f88: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168F88u;
    {
        const bool branch_taken_0x168f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168f88) {
            ctx->pc = 0x168F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168F88u;
            // 0x168f8c: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x168F98u;
            goto label_168f98;
        }
    }
    ctx->pc = 0x168F90u;
    // 0x168f90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x168F90u;
    {
        const bool branch_taken_0x168f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F90u;
            // 0x168f94: 0x64120002  daddiu      $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f90) {
            ctx->pc = 0x168FB4u;
            goto label_168fb4;
        }
    }
    ctx->pc = 0x168F98u;
label_168f98:
    // 0x168f98: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168F98u;
    {
        const bool branch_taken_0x168f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168f98) {
            ctx->pc = 0x168F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168F98u;
            // 0x168f9c: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x168FA8u;
            goto label_168fa8;
        }
    }
    ctx->pc = 0x168FA0u;
    // 0x168fa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168FA0u;
    {
        const bool branch_taken_0x168fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FA0u;
            // 0x168fa4: 0x64120003  daddiu      $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fa0) {
            ctx->pc = 0x168FB4u;
            goto label_168fb4;
        }
    }
    ctx->pc = 0x168FA8u;
label_168fa8:
    // 0x168fa8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x168FA8u;
    {
        const bool branch_taken_0x168fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168fa8) {
            ctx->pc = 0x168FB4u;
            goto label_168fb4;
        }
    }
    ctx->pc = 0x168FB0u;
    // 0x168fb0: 0x64120004  daddiu      $s2, $zero, 0x4
    ctx->pc = 0x168fb0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_168fb4:
    // 0x168fb4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x168fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_168fb8:
    // 0x168fb8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168FB8u;
    {
        const bool branch_taken_0x168fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168fb8) {
            ctx->pc = 0x168FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168FB8u;
            // 0x168fbc: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x168FD0u;
            goto label_168fd0;
        }
    }
    ctx->pc = 0x168FC0u;
    // 0x168fc0: 0xc05a338  jal         func_168CE0
    ctx->pc = 0x168FC0u;
    SET_GPR_U32(ctx, 31, 0x168FC8u);
    ctx->pc = 0x168FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168FC0u;
            // 0x168fc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168CE0u;
    if (runtime->hasFunction(0x168CE0u)) {
        auto targetFn = runtime->lookupFunction(0x168CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FC8u; }
        if (ctx->pc != 0x168FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168CE0_0x168ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FC8u; }
        if (ctx->pc != 0x168FC8u) { return; }
    }
    ctx->pc = 0x168FC8u;
label_168fc8:
    // 0x168fc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x168FC8u;
    {
        const bool branch_taken_0x168fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FC8u;
            // 0x168fcc: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fc8) {
            ctx->pc = 0x168FECu;
            goto label_168fec;
        }
    }
    ctx->pc = 0x168FD0u;
label_168fd0:
    // 0x168fd0: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x168FD0u;
    SET_GPR_U32(ctx, 31, 0x168FD8u);
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FD8u; }
        if (ctx->pc != 0x168FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FD8u; }
        if (ctx->pc != 0x168FD8u) { return; }
    }
    ctx->pc = 0x168FD8u;
label_168fd8:
    // 0x168fd8: 0xc05a108  jal         func_168420
    ctx->pc = 0x168FD8u;
    SET_GPR_U32(ctx, 31, 0x168FE0u);
    ctx->pc = 0x168FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168FD8u;
            // 0x168fdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168420u;
    if (runtime->hasFunction(0x168420u)) {
        auto targetFn = runtime->lookupFunction(0x168420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FE0u; }
        if (ctx->pc != 0x168FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168420_0x168420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FE0u; }
        if (ctx->pc != 0x168FE0u) { return; }
    }
    ctx->pc = 0x168FE0u;
label_168fe0:
    // 0x168fe0: 0xc05a34c  jal         func_168D30
    ctx->pc = 0x168FE0u;
    SET_GPR_U32(ctx, 31, 0x168FE8u);
    ctx->pc = 0x168FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168FE0u;
            // 0x168fe4: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x168D30u;
    if (runtime->hasFunction(0x168D30u)) {
        auto targetFn = runtime->lookupFunction(0x168D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FE8u; }
        if (ctx->pc != 0x168FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168D30_0x168d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FE8u; }
        if (ctx->pc != 0x168FE8u) { return; }
    }
    ctx->pc = 0x168FE8u;
label_168fe8:
    // 0x168fe8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x168fe8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_168fec:
    // 0x168fec: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x168fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x168ff0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x168ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x168ff4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x168ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x168ff8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x168ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ffc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x168ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x169000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169004: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x169004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169008: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x169008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16900c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x169010: 0x24632d50  addiu       $v1, $v1, 0x2D50
    ctx->pc = 0x169010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11600));
    // 0x169014: 0x24422d90  addiu       $v0, $v0, 0x2D90
    ctx->pc = 0x169014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11664));
    // 0x169018: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16901c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x169020: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x169020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x169024: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x169024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x169028: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x169028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16902c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16902cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169030: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169030u;
    SET_GPR_U32(ctx, 31, 0x169038u);
    ctx->pc = 0x169034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169030u;
            // 0x169034: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (runtime->hasFunction(0x1684E0u)) {
        auto targetFn = runtime->lookupFunction(0x1684E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169038u; }
        if (ctx->pc != 0x169038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001684E0_0x1684e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169038u; }
        if (ctx->pc != 0x169038u) { return; }
    }
    ctx->pc = 0x169038u;
label_169038:
    // 0x169038: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x169038u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16903c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x16903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x169040: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x169040u;
    {
        const bool branch_taken_0x169040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169040) {
            ctx->pc = 0x169044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169040u;
            // 0x169044: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16907Cu;
            goto label_16907c;
        }
    }
    ctx->pc = 0x169048u;
    // 0x169048: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x169048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x16904c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16904Cu;
    {
        const bool branch_taken_0x16904c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16904c) {
            ctx->pc = 0x169078u;
            goto label_169078;
        }
    }
    ctx->pc = 0x169054u;
    // 0x169054: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x169054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x169058: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x169058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16905c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16905Cu;
    {
        const bool branch_taken_0x16905c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16905c) {
            ctx->pc = 0x169078u;
            goto label_169078;
        }
    }
    ctx->pc = 0x169064u;
    // 0x169064: 0x966400ea  lhu         $a0, 0xEA($s3)
    ctx->pc = 0x169064u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
    // 0x169068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x169068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16906c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16906cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169070: 0xc063314  jal         func_18CC50
    ctx->pc = 0x169070u;
    SET_GPR_U32(ctx, 31, 0x169078u);
    ctx->pc = 0x169074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169070u;
            // 0x169074: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CC50u;
    if (runtime->hasFunction(0x18CC50u)) {
        auto targetFn = runtime->lookupFunction(0x18CC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169078u; }
        if (ctx->pc != 0x169078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CC50_0x18cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169078u; }
        if (ctx->pc != 0x169078u) { return; }
    }
    ctx->pc = 0x169078u;
label_169078:
    // 0x169078: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16907c:
    // 0x16907c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16907cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169080: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x169080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169084: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x169084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16908c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16908cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169090: 0x3e00008  jr          $ra
    ctx->pc = 0x169090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169090u;
            // 0x169094: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169098u;
    // 0x169098: 0x0  nop
    ctx->pc = 0x169098u;
    // NOP
    // 0x16909c: 0x0  nop
    ctx->pc = 0x16909cu;
    // NOP
    ctx->pc = 0x1690a0u;
}
