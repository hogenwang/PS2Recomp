#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034BC30
// Address: 0x34bc30 - 0x34bde0
void sub_0034BC30_0x34bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BC30_0x34bc30");
#endif

    switch (ctx->pc) {
        case 0x34bc70u: goto label_34bc70;
        case 0x34bc8cu: goto label_34bc8c;
        case 0x34bca8u: goto label_34bca8;
        case 0x34bcfcu: goto label_34bcfc;
        case 0x34bd04u: goto label_34bd04;
        case 0x34bd1cu: goto label_34bd1c;
        case 0x34bd34u: goto label_34bd34;
        case 0x34bd54u: goto label_34bd54;
        case 0x34bd84u: goto label_34bd84;
        case 0x34bd9cu: goto label_34bd9c;
        case 0x34bdb4u: goto label_34bdb4;
        case 0x34bdccu: goto label_34bdcc;
        default: break;
    }

    ctx->pc = 0x34bc30u;

    // 0x34bc30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34bc34: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x34bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x34bc38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34bc3c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x34bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34bc40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34bc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34bc44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34bc48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34bc4c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bc50: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bc54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34bc58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34bc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc5c: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x34bc5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34bc60: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x34bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x34bc64: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34bc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34bc68: 0xc049c48  jal         func_127120
    ctx->pc = 0x34BC68u;
    SET_GPR_U32(ctx, 31, 0x34BC70u);
    ctx->pc = 0x34BC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BC68u;
            // 0x34bc6c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BC70u; }
        if (ctx->pc != 0x34BC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BC70u; }
        if (ctx->pc != 0x34BC70u) { return; }
    }
    ctx->pc = 0x34BC70u;
label_34bc70:
    // 0x34bc70: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bc74: 0x26250024  addiu       $a1, $s1, 0x24
    ctx->pc = 0x34bc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x34bc78: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bc7c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34bc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34bc80: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34bc84: 0xc049c48  jal         func_127120
    ctx->pc = 0x34BC84u;
    SET_GPR_U32(ctx, 31, 0x34BC8Cu);
    ctx->pc = 0x34BC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BC84u;
            // 0x34bc88: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BC8Cu; }
        if (ctx->pc != 0x34BC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BC8Cu; }
        if (ctx->pc != 0x34BC8Cu) { return; }
    }
    ctx->pc = 0x34BC8Cu;
label_34bc8c:
    // 0x34bc8c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bc90: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x34bc90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x34bc94: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bc98: 0x24a59550  addiu       $a1, $a1, -0x6AB0
    ctx->pc = 0x34bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939984));
    // 0x34bc9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34bca0: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x34BCA0u;
    SET_GPR_U32(ctx, 31, 0x34BCA8u);
    ctx->pc = 0x34BCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BCA0u;
            // 0x34bca4: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BCA8u; }
        if (ctx->pc != 0x34BCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BCA8u; }
        if (ctx->pc != 0x34BCA8u) { return; }
    }
    ctx->pc = 0x34BCA8u;
label_34bca8:
    // 0x34bca8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34BCA8u;
    {
        const bool branch_taken_0x34bca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bca8) {
            ctx->pc = 0x34BCC8u;
            goto label_34bcc8;
        }
    }
    ctx->pc = 0x34BCB0u;
    // 0x34bcb0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bcb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bcb8: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bcbc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x34bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34bcc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34BCC0u;
    {
        const bool branch_taken_0x34bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BCC0u;
            // 0x34bcc4: 0xac430050  sw          $v1, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bcc0) {
            ctx->pc = 0x34BCD8u;
            goto label_34bcd8;
        }
    }
    ctx->pc = 0x34BCC8u;
label_34bcc8:
    // 0x34bcc8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bccc: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bcd0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x34bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34bcd4: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x34bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_34bcd8:
    // 0x34bcd8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bcdc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x34bcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34bce0: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bce4: 0x26230044  addiu       $v1, $s1, 0x44
    ctx->pc = 0x34bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x34bce8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34bcec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x34bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34bcf0: 0xac450040  sw          $a1, 0x40($v0)
    ctx->pc = 0x34bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 5));
    // 0x34bcf4: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34BCF4u;
    SET_GPR_U32(ctx, 31, 0x34BCFCu);
    ctx->pc = 0x34BCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BCF4u;
            // 0x34bcf8: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (runtime->hasFunction(0x34BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x34BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BCFCu; }
        if (ctx->pc != 0x34BCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BAA0_0x34baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BCFCu; }
        if (ctx->pc != 0x34BCFCu) { return; }
    }
    ctx->pc = 0x34BCFCu;
label_34bcfc:
    // 0x34bcfc: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34BCFCu;
    SET_GPR_U32(ctx, 31, 0x34BD04u);
    ctx->pc = 0x34BD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BCFCu;
            // 0x34bd00: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (runtime->hasFunction(0x34BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x34BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD04u; }
        if (ctx->pc != 0x34BD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BAA0_0x34baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD04u; }
        if (ctx->pc != 0x34BD04u) { return; }
    }
    ctx->pc = 0x34BD04u;
label_34bd04:
    // 0x34bd04: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34bd08: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34bd0c: 0x8c634070  lw          $v1, 0x4070($v1)
    ctx->pc = 0x34bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16496)));
    // 0x34bd10: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34bd14: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34BD14u;
    SET_GPR_U32(ctx, 31, 0x34BD1Cu);
    ctx->pc = 0x34BD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BD14u;
            // 0x34bd18: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (runtime->hasFunction(0x34BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x34BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD1Cu; }
        if (ctx->pc != 0x34BD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BAA0_0x34baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD1Cu; }
        if (ctx->pc != 0x34BD1Cu) { return; }
    }
    ctx->pc = 0x34BD1Cu;
label_34bd1c:
    // 0x34bd1c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34bd20: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34bd24: 0x8c634070  lw          $v1, 0x4070($v1)
    ctx->pc = 0x34bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16496)));
    // 0x34bd28: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34bd2c: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34BD2Cu;
    SET_GPR_U32(ctx, 31, 0x34BD34u);
    ctx->pc = 0x34BD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BD2Cu;
            // 0x34bd30: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (runtime->hasFunction(0x34BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x34BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD34u; }
        if (ctx->pc != 0x34BD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BAA0_0x34baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD34u; }
        if (ctx->pc != 0x34BD34u) { return; }
    }
    ctx->pc = 0x34BD34u;
label_34bd34:
    // 0x34bd34: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34bd38: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x34bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34bd3c: 0x8c634070  lw          $v1, 0x4070($v1)
    ctx->pc = 0x34bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16496)));
    // 0x34bd40: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x34bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34bd44: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x34bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x34bd48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34bd4c: 0xc0d2ea8  jal         func_34BAA0
    ctx->pc = 0x34BD4Cu;
    SET_GPR_U32(ctx, 31, 0x34BD54u);
    ctx->pc = 0x34BD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BD4Cu;
            // 0x34bd50: 0xaca20054  sw          $v0, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BAA0u;
    if (runtime->hasFunction(0x34BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x34BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD54u; }
        if (ctx->pc != 0x34BD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BAA0_0x34baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD54u; }
        if (ctx->pc != 0x34BD54u) { return; }
    }
    ctx->pc = 0x34BD54u;
label_34bd54:
    // 0x34bd54: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34bd58: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34bd5c: 0x8c844070  lw          $a0, 0x4070($a0)
    ctx->pc = 0x34bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16496)));
    // 0x34bd60: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x34bd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x34bd64: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x34bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x34bd68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34bd6c: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x34bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    // 0x34bd70: 0x8c624070  lw          $v0, 0x4070($v1)
    ctx->pc = 0x34bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16496)));
    // 0x34bd74: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34bd78: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x34bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x34bd7c: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x34BD7Cu;
    SET_GPR_U32(ctx, 31, 0x34BD84u);
    ctx->pc = 0x34BD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BD7Cu;
            // 0x34bd80: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD84u; }
        if (ctx->pc != 0x34BD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD84u; }
        if (ctx->pc != 0x34BD84u) { return; }
    }
    ctx->pc = 0x34BD84u;
label_34bd84:
    // 0x34bd84: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bd88: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bd8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34bd90: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x34bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x34bd94: 0xc083614  jal         func_20D850
    ctx->pc = 0x34BD94u;
    SET_GPR_U32(ctx, 31, 0x34BD9Cu);
    ctx->pc = 0x34BD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BD94u;
            // 0x34bd98: 0x24440078  addiu       $a0, $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (runtime->hasFunction(0x20D850u)) {
        auto targetFn = runtime->lookupFunction(0x20D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD9Cu; }
        if (ctx->pc != 0x34BD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D850_0x20d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BD9Cu; }
        if (ctx->pc != 0x34BD9Cu) { return; }
    }
    ctx->pc = 0x34BD9Cu;
label_34bd9c:
    // 0x34bd9c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bda0: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bda4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34bda8: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x34bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x34bdac: 0xc083614  jal         func_20D850
    ctx->pc = 0x34BDACu;
    SET_GPR_U32(ctx, 31, 0x34BDB4u);
    ctx->pc = 0x34BDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BDACu;
            // 0x34bdb0: 0x24440098  addiu       $a0, $v0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (runtime->hasFunction(0x20D850u)) {
        auto targetFn = runtime->lookupFunction(0x20D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BDB4u; }
        if (ctx->pc != 0x34BDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D850_0x20d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BDB4u; }
        if (ctx->pc != 0x34BDB4u) { return; }
    }
    ctx->pc = 0x34BDB4u;
label_34bdb4:
    // 0x34bdb4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34bdb8: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34bdbc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34bdc0: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x34bdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x34bdc4: 0xc083614  jal         func_20D850
    ctx->pc = 0x34BDC4u;
    SET_GPR_U32(ctx, 31, 0x34BDCCu);
    ctx->pc = 0x34BDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34BDC4u;
            // 0x34bdc8: 0x244400f8  addiu       $a0, $v0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D850u;
    if (runtime->hasFunction(0x20D850u)) {
        auto targetFn = runtime->lookupFunction(0x20D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BDCCu; }
        if (ctx->pc != 0x34BDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D850_0x20d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34BDCCu; }
        if (ctx->pc != 0x34BDCCu) { return; }
    }
    ctx->pc = 0x34BDCCu;
label_34bdcc:
    // 0x34bdcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34bdccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34bdd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34bdd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bdd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34bdd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x34BDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BDD8u;
            // 0x34bddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BDE0u;
    ctx->pc = 0x34bde0u;
}
