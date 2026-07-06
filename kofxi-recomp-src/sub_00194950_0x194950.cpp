#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194950
// Address: 0x194950 - 0x194ae0
void sub_00194950_0x194950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194950_0x194950");
#endif

    switch (ctx->pc) {
        case 0x194990u: goto label_194990;
        case 0x1949c4u: goto label_1949c4;
        case 0x1949e8u: goto label_1949e8;
        case 0x194a20u: goto label_194a20;
        case 0x194a5cu: goto label_194a5c;
        case 0x194ab8u: goto label_194ab8;
        default: break;
    }

    ctx->pc = 0x194950u;

    // 0x194950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194954: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x194958: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x194958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19495c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x194960: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194964: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x194964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19496c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19496cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194970: 0x9442d198  lhu         $v0, -0x2E68($v0)
    ctx->pc = 0x194970u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294955416)));
    // 0x194974: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x194974u;
    {
        const bool branch_taken_0x194974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194974u;
            // 0x194978: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194974) {
            ctx->pc = 0x194AB0u;
            goto label_194ab0;
        }
    }
    ctx->pc = 0x19497Cu;
    // 0x19497c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x19497cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194980: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x194980u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x194984: 0x1a200048  blez        $s1, . + 4 + (0x48 << 2)
    ctx->pc = 0x194984u;
    {
        const bool branch_taken_0x194984 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x194984) {
            ctx->pc = 0x194AA8u;
            goto label_194aa8;
        }
    }
    ctx->pc = 0x19498Cu;
    // 0x19498c: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x19498cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_194990:
    // 0x194990: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x194994: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x194994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x194998: 0x2442d1a0  addiu       $v0, $v0, -0x2E60
    ctx->pc = 0x194998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955424));
    // 0x19499c: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x19499cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1949a0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1949a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1949a4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1949a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1949a8: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x1949a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1949ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1949acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1949b0: 0x3093ffff  andi        $s3, $a0, 0xFFFF
    ctx->pc = 0x1949b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1949b4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1949b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1949b8: 0xac66d178  sw          $a2, -0x2E88($v1)
    ctx->pc = 0x1949b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955384), GPR_U32(ctx, 6));
    // 0x1949bc: 0xc065c3c  jal         func_1970F0
    ctx->pc = 0x1949BCu;
    SET_GPR_U32(ctx, 31, 0x1949C4u);
    ctx->pc = 0x1949C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1949BCu;
            // 0x1949c0: 0xac45d170  sw          $a1, -0x2E90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955376), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970F0u;
    if (runtime->hasFunction(0x1970F0u)) {
        auto targetFn = runtime->lookupFunction(0x1970F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1949C4u; }
        if (ctx->pc != 0x1949C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001970F0_0x1970f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1949C4u; }
        if (ctx->pc != 0x1949C4u) { return; }
    }
    ctx->pc = 0x1949C4u;
label_1949c4:
    // 0x1949c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1949c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1949c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1949c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1949cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1949ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1949d0: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1949D0u;
    {
        const bool branch_taken_0x1949d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1949d0) {
            ctx->pc = 0x194A90u;
            goto label_194a90;
        }
    }
    ctx->pc = 0x1949D8u;
    // 0x1949d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1949d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1949dc: 0x8450d198  lh          $s0, -0x2E68($v0)
    ctx->pc = 0x1949dcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294955416)));
    // 0x1949e0: 0x1a000029  blez        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1949E0u;
    {
        const bool branch_taken_0x1949e0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1949e0) {
            ctx->pc = 0x194A88u;
            goto label_194a88;
        }
    }
    ctx->pc = 0x1949E8u;
label_1949e8:
    // 0x1949e8: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1949e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1949ec: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1949ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1949f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1949f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1949f4: 0x2442d1a0  addiu       $v0, $v0, -0x2E60
    ctx->pc = 0x1949f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955424));
    // 0x1949f8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1949f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1949fc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1949fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x194a00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x194a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x194a04: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x194a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x194a08: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x194a0c: 0xac66d0f8  sw          $a2, -0x2F08($v1)
    ctx->pc = 0x194a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955256), GPR_U32(ctx, 6));
    // 0x194a10: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x194a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x194a14: 0xac45d0f0  sw          $a1, -0x2F10($v0)
    ctx->pc = 0x194a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955248), GPR_U32(ctx, 5));
    // 0x194a18: 0xc065c64  jal         func_197190
    ctx->pc = 0x194A18u;
    SET_GPR_U32(ctx, 31, 0x194A20u);
    ctx->pc = 0x194A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194A18u;
            // 0x194a1c: 0x3092ffff  andi        $s2, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x197190u;
    if (runtime->hasFunction(0x197190u)) {
        auto targetFn = runtime->lookupFunction(0x197190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A20u; }
        if (ctx->pc != 0x194A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197190_0x197190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A20u; }
        if (ctx->pc != 0x194A20u) { return; }
    }
    ctx->pc = 0x194A20u;
label_194a20:
    // 0x194a20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x194a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194a24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x194a24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x194a28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194a2c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x194A2Cu;
    {
        const bool branch_taken_0x194a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x194a2c) {
            ctx->pc = 0x194A70u;
            goto label_194a70;
        }
    }
    ctx->pc = 0x194A34u;
    // 0x194a34: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x194a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x194a38: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x194a3c: 0x8c63d170  lw          $v1, -0x2E90($v1)
    ctx->pc = 0x194a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955376)));
    // 0x194a40: 0x8c42d0f0  lw          $v0, -0x2F10($v0)
    ctx->pc = 0x194a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955248)));
    // 0x194a44: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x194a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x194a48: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x194a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x194a4c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x194A4Cu;
    {
        const bool branch_taken_0x194a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x194a4c) {
            ctx->pc = 0x194A70u;
            goto label_194a70;
        }
    }
    ctx->pc = 0x194A54u;
    // 0x194a54: 0xc0652b8  jal         func_194AE0
    ctx->pc = 0x194A54u;
    SET_GPR_U32(ctx, 31, 0x194A5Cu);
    ctx->pc = 0x194AE0u;
    if (runtime->hasFunction(0x194AE0u)) {
        auto targetFn = runtime->lookupFunction(0x194AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A5Cu; }
        if (ctx->pc != 0x194A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194AE0_0x194ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A5Cu; }
        if (ctx->pc != 0x194A5Cu) { return; }
    }
    ctx->pc = 0x194A5Cu;
label_194a5c:
    // 0x194a5c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x194a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194a60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x194a60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x194a64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194a68: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x194A68u;
    {
        const bool branch_taken_0x194a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x194a68) {
            ctx->pc = 0x194A88u;
            goto label_194a88;
        }
    }
    ctx->pc = 0x194A70u;
label_194a70:
    // 0x194a70: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x194a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x194a74: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x194a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194a78: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x194a78u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x194a7c: 0x1e00ffda  bgtz        $s0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x194A7Cu;
    {
        const bool branch_taken_0x194a7c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x194a7c) {
            ctx->pc = 0x1949E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1949e8;
        }
    }
    ctx->pc = 0x194A84u;
    // 0x194a84: 0x0  nop
    ctx->pc = 0x194a84u;
    // NOP
label_194a88:
    // 0x194a88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x194a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a8c: 0x0  nop
    ctx->pc = 0x194a8cu;
    // NOP
label_194a90:
    // 0x194a90: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x194a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x194a94: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x194a94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194a98: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x194a98u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x194a9c: 0x5e20ffbc  bgtzl       $s1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x194A9Cu;
    {
        const bool branch_taken_0x194a9c = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x194a9c) {
            ctx->pc = 0x194AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194A9Cu;
            // 0x194aa0: 0x3263ffff  andi        $v1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x194990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194990;
        }
    }
    ctx->pc = 0x194AA4u;
    // 0x194aa4: 0x0  nop
    ctx->pc = 0x194aa4u;
    // NOP
label_194aa8:
    // 0x194aa8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x194aac: 0xa440d198  sh          $zero, -0x2E68($v0)
    ctx->pc = 0x194aacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955416), (uint16_t)GPR_U32(ctx, 0));
label_194ab0:
    // 0x194ab0: 0xc065ef4  jal         func_197BD0
    ctx->pc = 0x194AB0u;
    SET_GPR_U32(ctx, 31, 0x194AB8u);
    ctx->pc = 0x197BD0u;
    if (runtime->hasFunction(0x197BD0u)) {
        auto targetFn = runtime->lookupFunction(0x197BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AB8u; }
        if (ctx->pc != 0x194AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197BD0_0x197bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AB8u; }
        if (ctx->pc != 0x194AB8u) { return; }
    }
    ctx->pc = 0x194AB8u;
label_194ab8:
    // 0x194ab8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x194ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194abc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x194abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194ac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194ac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194acc: 0x3e00008  jr          $ra
    ctx->pc = 0x194ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194ACCu;
            // 0x194ad0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194AD4u;
    // 0x194ad4: 0x0  nop
    ctx->pc = 0x194ad4u;
    // NOP
    // 0x194ad8: 0x0  nop
    ctx->pc = 0x194ad8u;
    // NOP
    // 0x194adc: 0x0  nop
    ctx->pc = 0x194adcu;
    // NOP
    ctx->pc = 0x194ae0u;
}
