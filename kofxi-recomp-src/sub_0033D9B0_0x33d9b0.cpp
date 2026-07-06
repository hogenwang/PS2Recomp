#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033D9B0
// Address: 0x33d9b0 - 0x33dda0
void sub_0033D9B0_0x33d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D9B0_0x33d9b0");
#endif

    switch (ctx->pc) {
        case 0x33d9e8u: goto label_33d9e8;
        case 0x33da10u: goto label_33da10;
        case 0x33da38u: goto label_33da38;
        case 0x33da74u: goto label_33da74;
        case 0x33dabcu: goto label_33dabc;
        case 0x33daf4u: goto label_33daf4;
        case 0x33db08u: goto label_33db08;
        case 0x33db5cu: goto label_33db5c;
        case 0x33dc24u: goto label_33dc24;
        case 0x33dce0u: goto label_33dce0;
        case 0x33dcf4u: goto label_33dcf4;
        case 0x33dd4cu: goto label_33dd4c;
        default: break;
    }

    ctx->pc = 0x33d9b0u;

    // 0x33d9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33d9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33d9b4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d9b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33d9bc: 0x240304b4  addiu       $v1, $zero, 0x4B4
    ctx->pc = 0x33d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33d9c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33d9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33d9c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33d9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33d9c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33d9cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33d9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d9d0: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x33d9d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33d9d4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x33d9d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33d9d8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d9dc: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x33d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x33d9e0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x33D9E0u;
    SET_GPR_U32(ctx, 31, 0x33D9E8u);
    ctx->pc = 0x33D9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33D9E0u;
            // 0x33d9e4: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D9E8u; }
        if (ctx->pc != 0x33D9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33D9E8u; }
        if (ctx->pc != 0x33D9E8u) { return; }
    }
    ctx->pc = 0x33D9E8u;
label_33d9e8:
    // 0x33d9e8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x33d9e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d9ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33d9f0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d9f4: 0x8044e8c0  lb          $a0, -0x1740($v0)
    ctx->pc = 0x33d9f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961344)));
    // 0x33d9f8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d9fc: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33d9fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33da00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33da04: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33da04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33da08: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x33DA08u;
    SET_GPR_U32(ctx, 31, 0x33DA10u);
    ctx->pc = 0x33DA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA08u;
            // 0x33da0c: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (runtime->hasFunction(0x3366D0u)) {
        auto targetFn = runtime->lookupFunction(0x3366D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA10u; }
        if (ctx->pc != 0x33DA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003366D0_0x3366d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA10u; }
        if (ctx->pc != 0x33DA10u) { return; }
    }
    ctx->pc = 0x33DA10u;
label_33da10:
    // 0x33da10: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x33da10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33da14: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x33da14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x33da18: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x33da18u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x33da1c: 0x30430050  andi        $v1, $v0, 0x50
    ctx->pc = 0x33da1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)80);
    // 0x33da20: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33da20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33da24: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x33DA24u;
    {
        const bool branch_taken_0x33da24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA24u;
            // 0x33da28: 0xac44e8c0  sw          $a0, -0x1740($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33da24) {
            ctx->pc = 0x33DAD8u;
            goto label_33dad8;
        }
    }
    ctx->pc = 0x33DA2Cu;
    // 0x33da2c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x33da30: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33DA30u;
    SET_GPR_U32(ctx, 31, 0x33DA38u);
    ctx->pc = 0x33DA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA30u;
            // 0x33da34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA38u; }
        if (ctx->pc != 0x33DA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA38u; }
        if (ctx->pc != 0x33DA38u) { return; }
    }
    ctx->pc = 0x33DA38u;
label_33da38:
    // 0x33da38: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33da38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33da3c: 0x8c44e8c0  lw          $a0, -0x1740($v0)
    ctx->pc = 0x33da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961344)));
    // 0x33da40: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33DA40u;
    {
        const bool branch_taken_0x33da40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33da40) {
            ctx->pc = 0x33DA90u;
            goto label_33da90;
        }
    }
    ctx->pc = 0x33DA48u;
    // 0x33da48: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33da48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33da4c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33da50: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33da50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33da54: 0x2463e890  addiu       $v1, $v1, -0x1770
    ctx->pc = 0x33da54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961296));
    // 0x33da58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33da58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33da5c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x33da5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33da60: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x33da60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33da64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33da68: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33da68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33da6c: 0xc0cd978  jal         func_3365E0
    ctx->pc = 0x33DA6Cu;
    SET_GPR_U32(ctx, 31, 0x33DA74u);
    ctx->pc = 0x33DA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA6Cu;
            // 0x33da70: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (runtime->hasFunction(0x3365E0u)) {
        auto targetFn = runtime->lookupFunction(0x3365E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA74u; }
        if (ctx->pc != 0x33DA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003365E0_0x3365e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DA74u; }
        if (ctx->pc != 0x33DA74u) { return; }
    }
    ctx->pc = 0x33DA74u;
label_33da74:
    // 0x33da74: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33da74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33da78: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33da78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33da7c: 0x8c63e8c0  lw          $v1, -0x1740($v1)
    ctx->pc = 0x33da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961344)));
    // 0x33da80: 0x2484e890  addiu       $a0, $a0, -0x1770
    ctx->pc = 0x33da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
    // 0x33da84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33da84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33da88: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x33DA88u;
    {
        const bool branch_taken_0x33da88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DA88u;
            // 0x33da8c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33da88) {
            ctx->pc = 0x33DD0Cu;
            goto label_33dd0c;
        }
    }
    ctx->pc = 0x33DA90u;
label_33da90:
    // 0x33da90: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33da90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33da94: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33da94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33da98: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33da98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33da9c: 0x2463e890  addiu       $v1, $v1, -0x1770
    ctx->pc = 0x33da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961296));
    // 0x33daa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33daa4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x33daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33daa8: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x33daa8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33daac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33dab0: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33dab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33dab4: 0xc0cd978  jal         func_3365E0
    ctx->pc = 0x33DAB4u;
    SET_GPR_U32(ctx, 31, 0x33DABCu);
    ctx->pc = 0x33DAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DAB4u;
            // 0x33dab8: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (runtime->hasFunction(0x3365E0u)) {
        auto targetFn = runtime->lookupFunction(0x3365E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DABCu; }
        if (ctx->pc != 0x33DABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003365E0_0x3365e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DABCu; }
        if (ctx->pc != 0x33DABCu) { return; }
    }
    ctx->pc = 0x33DABCu;
label_33dabc:
    // 0x33dabc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33dac0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33dac4: 0x8c63e8c0  lw          $v1, -0x1740($v1)
    ctx->pc = 0x33dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961344)));
    // 0x33dac8: 0x2484e890  addiu       $a0, $a0, -0x1770
    ctx->pc = 0x33dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
    // 0x33dacc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33daccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33dad0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x33DAD0u;
    {
        const bool branch_taken_0x33dad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DAD0u;
            // 0x33dad4: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dad0) {
            ctx->pc = 0x33DD0Cu;
            goto label_33dd0c;
        }
    }
    ctx->pc = 0x33DAD8u;
label_33dad8:
    // 0x33dad8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33dadc: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x33dadcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x33dae0: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33dae0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33dae4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33dae8: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x33dae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33daec: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x33DAECu;
    SET_GPR_U32(ctx, 31, 0x33DAF4u);
    ctx->pc = 0x33DAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DAECu;
            // 0x33daf0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (runtime->hasFunction(0x336A10u)) {
        auto targetFn = runtime->lookupFunction(0x336A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DAF4u; }
        if (ctx->pc != 0x33DAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336A10_0x336a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DAF4u; }
        if (ctx->pc != 0x33DAF4u) { return; }
    }
    ctx->pc = 0x33DAF4u;
label_33daf4:
    // 0x33daf4: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x33DAF4u;
    {
        const bool branch_taken_0x33daf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33daf4) {
            ctx->pc = 0x33DCC4u;
            goto label_33dcc4;
        }
    }
    ctx->pc = 0x33DAFCu;
    // 0x33dafc: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33db00: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33DB00u;
    SET_GPR_U32(ctx, 31, 0x33DB08u);
    ctx->pc = 0x33DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DB00u;
            // 0x33db04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DB08u; }
        if (ctx->pc != 0x33DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DB08u; }
        if (ctx->pc != 0x33DB08u) { return; }
    }
    ctx->pc = 0x33DB08u;
label_33db08:
    // 0x33db08: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33db08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33db0c: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x33db0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x33db10: 0xa060e888  sb          $zero, -0x1778($v1)
    ctx->pc = 0x33db10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961288), (uint8_t)GPR_U32(ctx, 0));
    // 0x33db14: 0x3c0801de  lui         $t0, 0x1DE
    ctx->pc = 0x33db14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)478 << 16));
    // 0x33db18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33db1c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33db20: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x33db20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
    // 0x33db24: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x33db24u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x33db28: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33db28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33db2c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33db30: 0x9065e890  lbu         $a1, -0x1770($v1)
    ctx->pc = 0x33db30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961296)));
    // 0x33db34: 0x248433d0  addiu       $a0, $a0, 0x33D0
    ctx->pc = 0x33db34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13264));
    // 0x33db38: 0x24c633b8  addiu       $a2, $a2, 0x33B8
    ctx->pc = 0x33db38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13240));
    // 0x33db3c: 0x2508e890  addiu       $t0, $t0, -0x1770
    ctx->pc = 0x33db3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961296));
    // 0x33db40: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x33db40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33db44: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33db44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33db48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33db48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33db4c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x33db4cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33db50: 0xa464e8a0  sh          $a0, -0x1760($v1)
    ctx->pc = 0x33db50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961312), (uint16_t)GPR_U32(ctx, 4));
    // 0x33db54: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33db54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33db58: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x33db58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_33db5c:
    // 0x33db5c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x33db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x33db60: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x33db60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33db64: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33DB64u;
    {
        const bool branch_taken_0x33db64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33db64) {
            ctx->pc = 0x33DB88u;
            goto label_33db88;
        }
    }
    ctx->pc = 0x33DB6Cu;
    // 0x33db6c: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x33db6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x33db70: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x33db70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x33db74: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x33db74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x33db78: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x33db78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x33db7c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x33db7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33db80: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x33db80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x33db84: 0xa464e8a0  sh          $a0, -0x1760($v1)
    ctx->pc = 0x33db84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961312), (uint16_t)GPR_U32(ctx, 4));
label_33db88:
    // 0x33db88: 0x25250001  addiu       $a1, $t1, 0x1
    ctx->pc = 0x33db88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x33db8c: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x33db8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x33db90: 0x29250007  slti        $a1, $t1, 0x7
    ctx->pc = 0x33db90u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x33db94: 0x54a0fff1  bnel        $a1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x33DB94u;
    {
        const bool branch_taken_0x33db94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x33db94) {
            ctx->pc = 0x33DB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DB94u;
            // 0x33db98: 0x3125ffff  andi        $a1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DB5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33db5c;
        }
    }
    ctx->pc = 0x33DB9Cu;
    // 0x33db9c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33dba0: 0x8c63e8b0  lw          $v1, -0x1750($v1)
    ctx->pc = 0x33dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961328)));
    // 0x33dba4: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x33DBA4u;
    {
        const bool branch_taken_0x33dba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dba4) {
            ctx->pc = 0x33DC78u;
            goto label_33dc78;
        }
    }
    ctx->pc = 0x33DBACu;
    // 0x33dbac: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x33dbacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33dbb0: 0x28610257  slti        $at, $v1, 0x257
    ctx->pc = 0x33dbb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)599) ? 1 : 0);
    // 0x33dbb4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x33DBB4u;
    {
        const bool branch_taken_0x33dbb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dbb4) {
            ctx->pc = 0x33DBC4u;
            goto label_33dbc4;
        }
    }
    ctx->pc = 0x33DBBCu;
    // 0x33dbbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33dbc0: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x33dbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
label_33dbc4:
    // 0x33dbc4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33dbc8: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33dbc8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33dbcc: 0x8c68e8c8  lw          $t0, -0x1738($v1)
    ctx->pc = 0x33dbccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33dbd0: 0x881823  subu        $v1, $a0, $t0
    ctx->pc = 0x33dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x33dbd4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33dbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33dbd8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33DBD8u;
    {
        const bool branch_taken_0x33dbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dbd8) {
            ctx->pc = 0x33DC24u;
            goto label_33dc24;
        }
    }
    ctx->pc = 0x33DBE0u;
    // 0x33dbe0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33dbe4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33dbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33dbe8: 0x90479730  lbu         $a3, -0x68D0($v0)
    ctx->pc = 0x33dbe8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33dbec: 0x240504b4  addiu       $a1, $zero, 0x4B4
    ctx->pc = 0x33dbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33dbf0: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x33dbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33dbf4: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33dbf8: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x33dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33dbfc: 0x24848b10  addiu       $a0, $a0, -0x74F0
    ctx->pc = 0x33dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937360));
    // 0x33dc00: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x33dc00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33dc04: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x33dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x33dc08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33dc0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33dc10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33dc14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33dc18: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x33dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33dc1c: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x33DC1Cu;
    SET_GPR_U32(ctx, 31, 0x33DC24u);
    ctx->pc = 0x33DC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC1Cu;
            // 0x33dc20: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (runtime->hasFunction(0x1271D0u)) {
        auto targetFn = runtime->lookupFunction(0x1271D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC24u; }
        if (ctx->pc != 0x33DC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001271D0_0x1271d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DC24u; }
        if (ctx->pc != 0x33DC24u) { return; }
    }
    ctx->pc = 0x33DC24u;
label_33dc24:
    // 0x33dc24: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33dc28: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33dc2c: 0x9485e8a0  lhu         $a1, -0x1760($a0)
    ctx->pc = 0x33dc2cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294961312)));
    // 0x33dc30: 0x8c64e8c8  lw          $a0, -0x1738($v1)
    ctx->pc = 0x33dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33dc34: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33dc38: 0x28810257  slti        $at, $a0, 0x257
    ctx->pc = 0x33dc38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)599) ? 1 : 0);
    // 0x33dc3c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33dc40: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x33DC40u;
    {
        const bool branch_taken_0x33dc40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC40u;
            // 0x33dc44: 0xa4650004  sh          $a1, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc40) {
            ctx->pc = 0x33DD8Cu;
            goto label_33dd8c;
        }
    }
    ctx->pc = 0x33DC48u;
    // 0x33dc48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33dc4c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33dc50: 0x28810257  slti        $at, $a0, 0x257
    ctx->pc = 0x33dc50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)599) ? 1 : 0);
    // 0x33dc54: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x33DC54u;
    {
        const bool branch_taken_0x33dc54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC54u;
            // 0x33dc58: 0xac64e8c8  sw          $a0, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc54) {
            ctx->pc = 0x33DD8Cu;
            goto label_33dd8c;
        }
    }
    ctx->pc = 0x33DC5Cu;
    // 0x33dc5c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x33dc5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33dc60: 0x5483004b  bnel        $a0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x33DC60u;
    {
        const bool branch_taken_0x33dc60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33dc60) {
            ctx->pc = 0x33DC64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC60u;
            // 0x33dc64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DD90u;
            goto label_33dd90;
        }
    }
    ctx->pc = 0x33DC68u;
    // 0x33dc68: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33dc6c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33dc70: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33DC70u;
    {
        const bool branch_taken_0x33dc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DC70u;
            // 0x33dc74: 0xa4600004  sh          $zero, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc70) {
            ctx->pc = 0x33DCBCu;
            goto label_33dcbc;
        }
    }
    ctx->pc = 0x33DC78u;
label_33dc78:
    // 0x33dc78: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33dc7c: 0x8c65e8c8  lw          $a1, -0x1738($v1)
    ctx->pc = 0x33dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33dc80: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x33dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33dc84: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33dc88: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x33dc88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x33dc8c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x33dc8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33dc90: 0x28610257  slti        $at, $v1, 0x257
    ctx->pc = 0x33dc90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)599) ? 1 : 0);
    // 0x33dc94: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x33DC94u;
    {
        const bool branch_taken_0x33dc94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dc94) {
            ctx->pc = 0x33DD8Cu;
            goto label_33dd8c;
        }
    }
    ctx->pc = 0x33DC9Cu;
    // 0x33dc9c: 0x14a3003b  bne         $a1, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x33DC9Cu;
    {
        const bool branch_taken_0x33dc9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x33dc9c) {
            ctx->pc = 0x33DD8Cu;
            goto label_33dd8c;
        }
    }
    ctx->pc = 0x33DCA4u;
    // 0x33dca4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33dca8: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x33dca8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x33dcac: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x33dcacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33dcb0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33dcb4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33dcb8: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33dcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
label_33dcbc:
    // 0x33dcbc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x33DCBCu;
    {
        const bool branch_taken_0x33dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dcbc) {
            ctx->pc = 0x33DD8Cu;
            goto label_33dd8c;
        }
    }
    ctx->pc = 0x33DCC4u;
label_33dcc4:
    // 0x33dcc4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33dcc8: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x33dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x33dccc: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33dcccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33dcd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33dcd4: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x33dcd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33dcd8: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x33DCD8u;
    SET_GPR_U32(ctx, 31, 0x33DCE0u);
    ctx->pc = 0x33DCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DCD8u;
            // 0x33dcdc: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (runtime->hasFunction(0x336A10u)) {
        auto targetFn = runtime->lookupFunction(0x336A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DCE0u; }
        if (ctx->pc != 0x33DCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336A10_0x336a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DCE0u; }
        if (ctx->pc != 0x33DCE0u) { return; }
    }
    ctx->pc = 0x33DCE0u;
label_33dce0:
    // 0x33dce0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33DCE0u;
    {
        const bool branch_taken_0x33dce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dce0) {
            ctx->pc = 0x33DD0Cu;
            goto label_33dd0c;
        }
    }
    ctx->pc = 0x33DCE8u;
    // 0x33dce8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x33dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x33dcec: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33DCECu;
    SET_GPR_U32(ctx, 31, 0x33DCF4u);
    ctx->pc = 0x33DCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33DCECu;
            // 0x33dcf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DCF4u; }
        if (ctx->pc != 0x33DCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33DCF4u; }
        if (ctx->pc != 0x33DCF4u) { return; }
    }
    ctx->pc = 0x33DCF4u;
label_33dcf4:
    // 0x33dcf4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33dcf8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33dcfc: 0xa060e888  sb          $zero, -0x1778($v1)
    ctx->pc = 0x33dcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961288), (uint8_t)GPR_U32(ctx, 0));
    // 0x33dd00: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33dd04: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x33DD04u;
    {
        const bool branch_taken_0x33dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DD04u;
            // 0x33dd08: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dd04) {
            ctx->pc = 0x33DD8Cu;
            goto label_33dd8c;
        }
    }
    ctx->pc = 0x33DD0Cu;
label_33dd0c:
    // 0x33dd0c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33dd10: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33dd14: 0x9065e890  lbu         $a1, -0x1770($v1)
    ctx->pc = 0x33dd14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961296)));
    // 0x33dd18: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x33dd18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x33dd1c: 0x3c0801de  lui         $t0, 0x1DE
    ctx->pc = 0x33dd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)478 << 16));
    // 0x33dd20: 0x248433d0  addiu       $a0, $a0, 0x33D0
    ctx->pc = 0x33dd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13264));
    // 0x33dd24: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x33dd24u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x33dd28: 0x24c633b8  addiu       $a2, $a2, 0x33B8
    ctx->pc = 0x33dd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13240));
    // 0x33dd2c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x33dd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33dd30: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33dd34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33dd38: 0x2508e890  addiu       $t0, $t0, -0x1770
    ctx->pc = 0x33dd38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961296));
    // 0x33dd3c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x33dd3cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33dd40: 0xa464e8a0  sh          $a0, -0x1760($v1)
    ctx->pc = 0x33dd40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961312), (uint16_t)GPR_U32(ctx, 4));
    // 0x33dd44: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33dd48: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x33dd48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_33dd4c:
    // 0x33dd4c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x33dd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x33dd50: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x33dd50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33dd54: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33DD54u;
    {
        const bool branch_taken_0x33dd54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dd54) {
            ctx->pc = 0x33DD78u;
            goto label_33dd78;
        }
    }
    ctx->pc = 0x33DD5Cu;
    // 0x33dd5c: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x33dd5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x33dd60: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x33dd60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x33dd64: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x33dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x33dd68: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x33dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x33dd6c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x33dd6cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33dd70: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x33dd70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x33dd74: 0xa464e8a0  sh          $a0, -0x1760($v1)
    ctx->pc = 0x33dd74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961312), (uint16_t)GPR_U32(ctx, 4));
label_33dd78:
    // 0x33dd78: 0x25250001  addiu       $a1, $t1, 0x1
    ctx->pc = 0x33dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x33dd7c: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x33dd7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x33dd80: 0x29250007  slti        $a1, $t1, 0x7
    ctx->pc = 0x33dd80u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x33dd84: 0x54a0fff1  bnel        $a1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x33DD84u;
    {
        const bool branch_taken_0x33dd84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dd84) {
            ctx->pc = 0x33DD88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33DD84u;
            // 0x33dd88: 0x3125ffff  andi        $a1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33DD4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33dd4c;
        }
    }
    ctx->pc = 0x33DD8Cu;
label_33dd8c:
    // 0x33dd8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33dd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33dd90:
    // 0x33dd90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33dd90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33dd94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33dd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33dd98: 0x3e00008  jr          $ra
    ctx->pc = 0x33DD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33DD98u;
            // 0x33dd9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33DDA0u;
    ctx->pc = 0x33dda0u;
}
