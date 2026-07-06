#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D09B8
// Address: 0x2d09b8 - 0x2d0b10
void sub_002D09B8_0x2d09b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D09B8_0x2d09b8");
#endif

    switch (ctx->pc) {
        case 0x2d09dcu: goto label_2d09dc;
        case 0x2d0a00u: goto label_2d0a00;
        case 0x2d0a14u: goto label_2d0a14;
        case 0x2d0a24u: goto label_2d0a24;
        case 0x2d0a48u: goto label_2d0a48;
        case 0x2d0a58u: goto label_2d0a58;
        case 0x2d0a64u: goto label_2d0a64;
        case 0x2d0a70u: goto label_2d0a70;
        case 0x2d0a80u: goto label_2d0a80;
        case 0x2d0a98u: goto label_2d0a98;
        case 0x2d0aa8u: goto label_2d0aa8;
        case 0x2d0ab8u: goto label_2d0ab8;
        case 0x2d0adcu: goto label_2d0adc;
        case 0x2d0ae4u: goto label_2d0ae4;
        default: break;
    }

    ctx->pc = 0x2d09b8u;

    // 0x2d09b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d09b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d09bc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d09bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d09c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d09c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09c4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d09c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2d09c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d09c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09cc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2d09ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2d09d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d09d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09d4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2d09d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2d09d8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2d09d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d09dc:
    // 0x2d09dc: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2d09dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2d09e0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2d09e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09e4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d09e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d09e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d09e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d09ec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2d09ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2d09f0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2d09f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2d09f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D09F4u;
    {
        const bool branch_taken_0x2d09f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D09F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09F4u;
            // 0x2d09f8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09f4) {
            ctx->pc = 0x2D0A50u;
            goto label_2d0a50;
        }
    }
    ctx->pc = 0x2D09FCu;
    // 0x2d09fc: 0x0  nop
    ctx->pc = 0x2d09fcu;
    // NOP
label_2d0a00:
    // 0x2d0a00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d0a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0a04: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2d0a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2d0a08: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x2d0a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2d0a0c: 0xc0b4562  jal         func_2D1588
    ctx->pc = 0x2D0A0Cu;
    SET_GPR_U32(ctx, 31, 0x2D0A14u);
    ctx->pc = 0x2D0A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A0Cu;
            // 0x2d0a10: 0x27a8001c  addiu       $t0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1588u;
    if (runtime->hasFunction(0x2D1588u)) {
        auto targetFn = runtime->lookupFunction(0x2D1588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A14u; }
        if (ctx->pc != 0x2D0A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1588_0x2d1588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A14u; }
        if (ctx->pc != 0x2D0A14u) { return; }
    }
    ctx->pc = 0x2D0A14u;
label_2d0a14:
    // 0x2d0a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a18: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0A18u;
    {
        const bool branch_taken_0x2d0a18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A18u;
            // 0x2d0a1c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a18) {
            ctx->pc = 0x2D0AC8u;
            goto label_2d0ac8;
        }
    }
    ctx->pc = 0x2D0A20u;
    // 0x2d0a20: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2d0a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2d0a24:
    // 0x2d0a24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a28: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2d0a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d0a2c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2d0a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a30: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2d0a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0a34: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x2d0a34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a38: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x2d0a38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2d0a3c: 0xdfaa0020  ld          $t2, 0x20($sp)
    ctx->pc = 0x2d0a3cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0a40: 0xc0b42c4  jal         func_2D0B10
    ctx->pc = 0x2D0A40u;
    SET_GPR_U32(ctx, 31, 0x2D0A48u);
    ctx->pc = 0x2D0A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A40u;
            // 0x2d0a44: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0B10u;
    if (runtime->hasFunction(0x2D0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2D0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A48u; }
        if (ctx->pc != 0x2D0A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0B10_0x2d0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A48u; }
        if (ctx->pc != 0x2D0A48u) { return; }
    }
    ctx->pc = 0x2D0A48u;
label_2d0a48:
    // 0x2d0a48: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2D0A48u;
    {
        const bool branch_taken_0x2d0a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A48u;
            // 0x2d0a4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a48) {
            ctx->pc = 0x2D0AC4u;
            goto label_2d0ac4;
        }
    }
    ctx->pc = 0x2D0A50u;
label_2d0a50:
    // 0x2d0a50: 0xc0b6178  jal         func_2D85E0
    ctx->pc = 0x2D0A50u;
    SET_GPR_U32(ctx, 31, 0x2D0A58u);
    ctx->pc = 0x2D0A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A50u;
            // 0x2d0a54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D85E0u;
    if (runtime->hasFunction(0x2D85E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D85E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A58u; }
        if (ctx->pc != 0x2D0A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D85E0_0x2d85e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A58u; }
        if (ctx->pc != 0x2D0A58u) { return; }
    }
    ctx->pc = 0x2D0A58u;
label_2d0a58:
    // 0x2d0a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a5c: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D0A5Cu;
    {
        const bool branch_taken_0x2d0a5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A5Cu;
            // 0x2d0a60: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a5c) {
            ctx->pc = 0x2D0AC8u;
            goto label_2d0ac8;
        }
    }
    ctx->pc = 0x2D0A64u;
label_2d0a64:
    // 0x2d0a64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a68: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D0A68u;
    SET_GPR_U32(ctx, 31, 0x2D0A70u);
    ctx->pc = 0x2D0A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A68u;
            // 0x2d0a6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A70u; }
        if (ctx->pc != 0x2D0A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A70u; }
        if (ctx->pc != 0x2D0A70u) { return; }
    }
    ctx->pc = 0x2D0A70u;
label_2d0a70:
    // 0x2d0a70: 0x4410014  bgez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D0A70u;
    {
        const bool branch_taken_0x2d0a70 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D0A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A70u;
            // 0x2d0a74: 0x24100108  addiu       $s0, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a70) {
            ctx->pc = 0x2D0AC4u;
            goto label_2d0ac4;
        }
    }
    ctx->pc = 0x2D0A78u;
    // 0x2d0a78: 0xc0b4092  jal         func_2D0248
    ctx->pc = 0x2D0A78u;
    SET_GPR_U32(ctx, 31, 0x2D0A80u);
    ctx->pc = 0x2D0A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A78u;
            // 0x2d0a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0248u;
    if (runtime->hasFunction(0x2D0248u)) {
        auto targetFn = runtime->lookupFunction(0x2D0248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A80u; }
        if (ctx->pc != 0x2D0A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0248_0x2d0248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0A80u; }
        if (ctx->pc != 0x2D0A80u) { return; }
    }
    ctx->pc = 0x2D0A80u;
label_2d0a80:
    // 0x2d0a80: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2d0a80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a84: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x2d0a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d0a88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0A88u;
    {
        const bool branch_taken_0x2d0a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0A88u;
            // 0x2d0a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a88) {
            ctx->pc = 0x2D0AB0u;
            goto label_2d0ab0;
        }
    }
    ctx->pc = 0x2D0A90u;
    // 0x2d0a90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d0a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0a98:
    // 0x2d0a98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d0a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0a9c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d0a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0aa0: 0xc0b44fc  jal         func_2D13F0
    ctx->pc = 0x2D0AA0u;
    SET_GPR_U32(ctx, 31, 0x2D0AA8u);
    ctx->pc = 0x2D0AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AA0u;
            // 0x2d0aa4: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D13F0u;
    if (runtime->hasFunction(0x2D13F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D13F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AA8u; }
        if (ctx->pc != 0x2D0AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D13F0_0x2d13f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AA8u; }
        if (ctx->pc != 0x2D0AA8u) { return; }
    }
    ctx->pc = 0x2D0AA8u;
label_2d0aa8:
    // 0x2d0aa8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0AA8u;
    {
        const bool branch_taken_0x2d0aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AA8u;
            // 0x2d0aac: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0aa8) {
            ctx->pc = 0x2D0AECu;
            goto label_2d0aec;
        }
    }
    ctx->pc = 0x2D0AB0u;
label_2d0ab0:
    // 0x2d0ab0: 0xc0b4836  jal         func_2D20D8
    ctx->pc = 0x2D0AB0u;
    SET_GPR_U32(ctx, 31, 0x2D0AB8u);
    ctx->pc = 0x2D0AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AB0u;
            // 0x2d0ab4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D20D8u;
    if (runtime->hasFunction(0x2D20D8u)) {
        auto targetFn = runtime->lookupFunction(0x2D20D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AB8u; }
        if (ctx->pc != 0x2D0AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D20D8_0x2d20d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AB8u; }
        if (ctx->pc != 0x2D0AB8u) { return; }
    }
    ctx->pc = 0x2D0AB8u;
label_2d0ab8:
    // 0x2d0ab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0abc: 0x1200ffd0  beqz        $s0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2D0ABCu;
    {
        const bool branch_taken_0x2d0abc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0ABCu;
            // 0x2d0ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0abc) {
            ctx->pc = 0x2D0A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0a00;
        }
    }
    ctx->pc = 0x2D0AC4u;
label_2d0ac4:
    // 0x2d0ac4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2d0ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2d0ac8:
    // 0x2d0ac8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0AC8u;
    {
        const bool branch_taken_0x2d0ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AC8u;
            // 0x2d0acc: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ac8) {
            ctx->pc = 0x2D0AE4u;
            goto label_2d0ae4;
        }
    }
    ctx->pc = 0x2D0AD0u;
    // 0x2d0ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ad4: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D0AD4u;
    SET_GPR_U32(ctx, 31, 0x2D0ADCu);
    ctx->pc = 0x2D0AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0AD4u;
            // 0x2d0ad8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0ADCu; }
        if (ctx->pc != 0x2D0ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0ADCu; }
        if (ctx->pc != 0x2D0ADCu) { return; }
    }
    ctx->pc = 0x2D0ADCu;
label_2d0adc:
    // 0x2d0adc: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D0ADCu;
    SET_GPR_U32(ctx, 31, 0x2D0AE4u);
    ctx->pc = 0x2D0AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0ADCu;
            // 0x2d0ae0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AE4u; }
        if (ctx->pc != 0x2D0AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0AE4u; }
        if (ctx->pc != 0x2D0AE4u) { return; }
    }
    ctx->pc = 0x2D0AE4u;
label_2d0ae4:
    // 0x2d0ae4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d0ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ae8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d0ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d0aec:
    // 0x2d0aec: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d0aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d0af0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2d0af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0af4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2d0af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0af8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2d0af8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0afc: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2d0afcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0b00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d0b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d0b04: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0B04u;
            // 0x2d0b08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0B0Cu;
    // 0x2d0b0c: 0x0  nop
    ctx->pc = 0x2d0b0cu;
    // NOP
    ctx->pc = 0x2d0b10u;
}
