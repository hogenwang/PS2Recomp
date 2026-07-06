#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034BDE0
// Address: 0x34bde0 - 0x34bfa0
void sub_0034BDE0_0x34bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BDE0_0x34bde0");
#endif

    switch (ctx->pc) {
        case 0x34be20u: goto label_34be20;
        case 0x34be3cu: goto label_34be3c;
        case 0x34be58u: goto label_34be58;
        case 0x34bebcu: goto label_34bebc;
        case 0x34bed0u: goto label_34bed0;
        case 0x34bef4u: goto label_34bef4;
        case 0x34bf1cu: goto label_34bf1c;
        case 0x34bf34u: goto label_34bf34;
        case 0x34bf4cu: goto label_34bf4c;
        case 0x34bf64u: goto label_34bf64;
        case 0x34bf80u: goto label_34bf80;
        default: break;
    }

    ctx->pc = 0x34bde0u;

    // 0x34bde0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34bde4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x34bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x34bde8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34bdec: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x34bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34bdf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34bdf4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34bdf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34bdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34bdfc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34be00: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34be04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34be04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34be08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34be08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34be0c: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x34be0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34be10: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x34be10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x34be14: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34be14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34be18: 0xc049c48  jal         func_127120
    ctx->pc = 0x34BE18u;
    SET_GPR_U32(ctx, 31, 0x34BE20u);
    ctx->pc = 0x34BE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BE18u;
            // 0x34be1c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE20u; }
        if (ctx->pc != 0x34BE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE20u; }
        if (ctx->pc != 0x34BE20u) { return; }
    }
    ctx->pc = 0x34BE20u;
label_34be20:
    // 0x34be20: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34be20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34be24: 0x26250024  addiu       $a1, $s1, 0x24
    ctx->pc = 0x34be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x34be28: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34be2c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34be2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34be30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34be34: 0xc049c48  jal         func_127120
    ctx->pc = 0x34BE34u;
    SET_GPR_U32(ctx, 31, 0x34BE3Cu);
    ctx->pc = 0x34BE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BE34u;
            // 0x34be38: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE3Cu; }
        if (ctx->pc != 0x34BE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE3Cu; }
        if (ctx->pc != 0x34BE3Cu) { return; }
    }
    ctx->pc = 0x34BE3Cu;
label_34be3c:
    // 0x34be3c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34be40: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x34be40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x34be44: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34be48: 0x24a59550  addiu       $a1, $a1, -0x6AB0
    ctx->pc = 0x34be48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939984));
    // 0x34be4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34be50: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x34BE50u;
    SET_GPR_U32(ctx, 31, 0x34BE58u);
    ctx->pc = 0x34BE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BE50u;
            // 0x34be54: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE58u; }
        if (ctx->pc != 0x34BE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BE58u; }
        if (ctx->pc != 0x34BE58u) { return; }
    }
    ctx->pc = 0x34BE58u;
label_34be58:
    // 0x34be58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34BE58u;
    {
        const bool branch_taken_0x34be58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34be58) {
            ctx->pc = 0x34BE78u;
            goto label_34be78;
        }
    }
    ctx->pc = 0x34BE60u;
    // 0x34be60: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34be60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34be64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34be68: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34be6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x34be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34be70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34BE70u;
    {
        const bool branch_taken_0x34be70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BE70u;
            // 0x34be74: 0xac430050  sw          $v1, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34be70) {
            ctx->pc = 0x34BE88u;
            goto label_34be88;
        }
    }
    ctx->pc = 0x34BE78u;
label_34be78:
    // 0x34be78: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34be78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34be7c: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34be80: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x34be80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34be84: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x34be84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_34be88:
    // 0x34be88: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34be88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34be8c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x34be8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34be90: 0x8c634070  lw          $v1, 0x4070($v1)
    ctx->pc = 0x34be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16496)));
    // 0x34be94: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34be94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34be98: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x34be98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x34be9c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x34be9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34bea0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34bea4: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x34bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x34bea8: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34beac: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x34beacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x34beb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34beb4: 0xc0d2ed4  jal         func_34BB50
    ctx->pc = 0x34BEB4u;
    SET_GPR_U32(ctx, 31, 0x34BEBCu);
    ctx->pc = 0x34BEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BEB4u;
            // 0x34beb8: 0x244400f8  addiu       $a0, $v0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BB50u;
    if (runtime->hasFunction(0x34BB50u)) {
        auto targetFn = runtime->lookupFunction(0x34BB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEBCu; }
        if (ctx->pc != 0x34BEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BB50_0x34bb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEBCu; }
        if (ctx->pc != 0x34BEBCu) { return; }
    }
    ctx->pc = 0x34BEBCu;
label_34bebc:
    // 0x34bebc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x34bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x34bec0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34bec4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34bec8: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34BEC8u;
    SET_GPR_U32(ctx, 31, 0x34BED0u);
    ctx->pc = 0x34BECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BEC8u;
            // 0x34becc: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (runtime->hasFunction(0x34BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x34BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BED0u; }
        if (ctx->pc != 0x34BED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BAA0_0x34baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BED0u; }
        if (ctx->pc != 0x34BED0u) { return; }
    }
    ctx->pc = 0x34BED0u;
label_34bed0:
    // 0x34bed0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34bed4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34bed8: 0x8c634070  lw          $v1, 0x4070($v1)
    ctx->pc = 0x34bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16496)));
    // 0x34bedc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34bee0: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x34bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x34bee4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x34bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x34bee8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34beec: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34BEECu;
    SET_GPR_U32(ctx, 31, 0x34BEF4u);
    ctx->pc = 0x34BEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BEECu;
            // 0x34bef0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (runtime->hasFunction(0x34BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x34BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEF4u; }
        if (ctx->pc != 0x34BEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BAA0_0x34baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BEF4u; }
        if (ctx->pc != 0x34BEF4u) { return; }
    }
    ctx->pc = 0x34BEF4u;
label_34bef4:
    // 0x34bef4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34bef8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34befc: 0x8c844070  lw          $a0, 0x4070($a0)
    ctx->pc = 0x34befcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16496)));
    // 0x34bf00: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x34bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x34bf04: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x34bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x34bf08: 0x8c624070  lw          $v0, 0x4070($v1)
    ctx->pc = 0x34bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16496)));
    // 0x34bf0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34bf10: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x34bf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x34bf14: 0xc083614  jal         func_20D850
    ctx->pc = 0x34BF14u;
    SET_GPR_U32(ctx, 31, 0x34BF1Cu);
    ctx->pc = 0x34BF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF14u;
            // 0x34bf18: 0x24440078  addiu       $a0, $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (runtime->hasFunction(0x20D850u)) {
        auto targetFn = runtime->lookupFunction(0x20D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF1Cu; }
        if (ctx->pc != 0x34BF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D850_0x20d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF1Cu; }
        if (ctx->pc != 0x34BF1Cu) { return; }
    }
    ctx->pc = 0x34BF1Cu;
label_34bf1c:
    // 0x34bf1c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bf20: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bf24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34bf28: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x34bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x34bf2c: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x34BF2Cu;
    SET_GPR_U32(ctx, 31, 0x34BF34u);
    ctx->pc = 0x34BF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF2Cu;
            // 0x34bf30: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF34u; }
        if (ctx->pc != 0x34BF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF34u; }
        if (ctx->pc != 0x34BF34u) { return; }
    }
    ctx->pc = 0x34BF34u;
label_34bf34:
    // 0x34bf34: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bf38: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bf3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34bf40: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x34bf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x34bf44: 0xc083614  jal         func_20D850
    ctx->pc = 0x34BF44u;
    SET_GPR_U32(ctx, 31, 0x34BF4Cu);
    ctx->pc = 0x34BF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF44u;
            // 0x34bf48: 0x244400b8  addiu       $a0, $v0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (runtime->hasFunction(0x20D850u)) {
        auto targetFn = runtime->lookupFunction(0x20D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF4Cu; }
        if (ctx->pc != 0x34BF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D850_0x20d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF4Cu; }
        if (ctx->pc != 0x34BF4Cu) { return; }
    }
    ctx->pc = 0x34BF4Cu;
label_34bf4c:
    // 0x34bf4c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bf50: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bf54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34bf58: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x34bf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x34bf5c: 0xc083614  jal         func_20D850
    ctx->pc = 0x34BF5Cu;
    SET_GPR_U32(ctx, 31, 0x34BF64u);
    ctx->pc = 0x34BF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF5Cu;
            // 0x34bf60: 0x244400d8  addiu       $a0, $v0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (runtime->hasFunction(0x20D850u)) {
        auto targetFn = runtime->lookupFunction(0x20D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF64u; }
        if (ctx->pc != 0x34BF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D850_0x20d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF64u; }
        if (ctx->pc != 0x34BF64u) { return; }
    }
    ctx->pc = 0x34BF64u;
label_34bf64:
    // 0x34bf64: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bf68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34bf6c: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bf70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34bf74: 0x24450098  addiu       $a1, $v0, 0x98
    ctx->pc = 0x34bf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x34bf78: 0xc0835e4  jal         func_20D790
    ctx->pc = 0x34BF78u;
    SET_GPR_U32(ctx, 31, 0x34BF80u);
    ctx->pc = 0x34BF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF78u;
            // 0x34bf7c: 0x244600f8  addiu       $a2, $v0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D790u;
    if (runtime->hasFunction(0x20D790u)) {
        auto targetFn = runtime->lookupFunction(0x20D790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF80u; }
        if (ctx->pc != 0x34BF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D790_0x20d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BF80u; }
        if (ctx->pc != 0x34BF80u) { return; }
    }
    ctx->pc = 0x34BF80u;
label_34bf80:
    // 0x34bf80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34bf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34bf84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34bf84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bf88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34bf88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x34BF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BF8Cu;
            // 0x34bf90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BF94u;
    // 0x34bf94: 0x0  nop
    ctx->pc = 0x34bf94u;
    // NOP
    // 0x34bf98: 0x0  nop
    ctx->pc = 0x34bf98u;
    // NOP
    // 0x34bf9c: 0x0  nop
    ctx->pc = 0x34bf9cu;
    // NOP
    ctx->pc = 0x34bfa0u;
}
