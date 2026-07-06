#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CB60
// Address: 0x13cb60 - 0x13cc90
void sub_0013CB60_0x13cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CB60_0x13cb60");
#endif

    switch (ctx->pc) {
        case 0x13cb80u: goto label_13cb80;
        case 0x13cb90u: goto label_13cb90;
        case 0x13cbb0u: goto label_13cbb0;
        case 0x13cbc8u: goto label_13cbc8;
        case 0x13cbfcu: goto label_13cbfc;
        case 0x13cc20u: goto label_13cc20;
        case 0x13cc3cu: goto label_13cc3c;
        case 0x13cc64u: goto label_13cc64;
        default: break;
    }

    ctx->pc = 0x13cb60u;

    // 0x13cb60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13cb64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13cb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13cb68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13cb6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13cb70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cb74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb78: 0xc062804  jal         func_18A010
    ctx->pc = 0x13CB78u;
    SET_GPR_U32(ctx, 31, 0x13CB80u);
    ctx->pc = 0x13CB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CB78u;
            // 0x13cb7c: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB80u; }
        if (ctx->pc != 0x13CB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB80u; }
        if (ctx->pc != 0x13CB80u) { return; }
    }
    ctx->pc = 0x13CB80u;
label_13cb80:
    // 0x13cb80: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x13CB80u;
    {
        const bool branch_taken_0x13cb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cb80) {
            ctx->pc = 0x13CB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13CB80u;
            // 0x13cb84: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13CC7Cu;
            goto label_13cc7c;
        }
    }
    ctx->pc = 0x13CB88u;
    // 0x13cb88: 0xc04f950  jal         func_13E540
    ctx->pc = 0x13CB88u;
    SET_GPR_U32(ctx, 31, 0x13CB90u);
    ctx->pc = 0x13CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CB88u;
            // 0x13cb8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E540u;
    if (runtime->hasFunction(0x13E540u)) {
        auto targetFn = runtime->lookupFunction(0x13E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB90u; }
        if (ctx->pc != 0x13CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E540_0x13e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CB90u; }
        if (ctx->pc != 0x13CB90u) { return; }
    }
    ctx->pc = 0x13CB90u;
label_13cb90:
    // 0x13cb90: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x13cb90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cb94: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x13cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13cb98: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CB98u;
    {
        const bool branch_taken_0x13cb98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x13CB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CB98u;
            // 0x13cb9c: 0xa202025a  sb          $v0, 0x25A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 602), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb98) {
            ctx->pc = 0x13CBA8u;
            goto label_13cba8;
        }
    }
    ctx->pc = 0x13CBA0u;
    // 0x13cba0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x13CBA0u;
    {
        const bool branch_taken_0x13cba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CBA0u;
            // 0x13cba4: 0xae000208  sw          $zero, 0x208($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cba0) {
            ctx->pc = 0x13CC78u;
            goto label_13cc78;
        }
    }
    ctx->pc = 0x13CBA8u;
label_13cba8:
    // 0x13cba8: 0xc04f688  jal         func_13DA20
    ctx->pc = 0x13CBA8u;
    SET_GPR_U32(ctx, 31, 0x13CBB0u);
    ctx->pc = 0x13CBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CBA8u;
            // 0x13cbac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA20u;
    if (runtime->hasFunction(0x13DA20u)) {
        auto targetFn = runtime->lookupFunction(0x13DA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBB0u; }
        if (ctx->pc != 0x13CBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA20_0x13da20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBB0u; }
        if (ctx->pc != 0x13CBB0u) { return; }
    }
    ctx->pc = 0x13CBB0u;
label_13cbb0:
    // 0x13cbb0: 0x960500ea  lhu         $a1, 0xEA($s0)
    ctx->pc = 0x13cbb0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x13cbb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13cbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cbb8: 0x920600f7  lbu         $a2, 0xF7($s0)
    ctx->pc = 0x13cbb8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 247)));
    // 0x13cbbc: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x13cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13cbc0: 0xc063720  jal         func_18DC80
    ctx->pc = 0x13CBC0u;
    SET_GPR_U32(ctx, 31, 0x13CBC8u);
    ctx->pc = 0x13CBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CBC0u;
            // 0x13cbc4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (runtime->hasFunction(0x18DC80u)) {
        auto targetFn = runtime->lookupFunction(0x18DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBC8u; }
        if (ctx->pc != 0x13CBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC80_0x18dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBC8u; }
        if (ctx->pc != 0x13CBC8u) { return; }
    }
    ctx->pc = 0x13CBC8u;
label_13cbc8:
    // 0x13cbc8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x13CBC8u;
    {
        const bool branch_taken_0x13cbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cbc8) {
            ctx->pc = 0x13CC78u;
            goto label_13cc78;
        }
    }
    ctx->pc = 0x13CBD0u;
    // 0x13cbd0: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x13cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x13cbd4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x13cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x13cbd8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x13cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x13cbdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cbe0: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x13cbe0u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cbe4: 0xa6110256  sh          $s1, 0x256($s0)
    ctx->pc = 0x13cbe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 598), (uint16_t)GPR_U32(ctx, 17));
    // 0x13cbe8: 0x960500ea  lhu         $a1, 0xEA($s0)
    ctx->pc = 0x13cbe8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x13cbec: 0x920600f7  lbu         $a2, 0xF7($s0)
    ctx->pc = 0x13cbecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 247)));
    // 0x13cbf0: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x13cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13cbf4: 0xc063720  jal         func_18DC80
    ctx->pc = 0x13CBF4u;
    SET_GPR_U32(ctx, 31, 0x13CBFCu);
    ctx->pc = 0x13CBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CBF4u;
            // 0x13cbf8: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (runtime->hasFunction(0x18DC80u)) {
        auto targetFn = runtime->lookupFunction(0x18DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBFCu; }
        if (ctx->pc != 0x13CBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC80_0x18dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CBFCu; }
        if (ctx->pc != 0x13CBFCu) { return; }
    }
    ctx->pc = 0x13CBFCu;
label_13cbfc:
    // 0x13cbfc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x13CBFCu;
    {
        const bool branch_taken_0x13cbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cbfc) {
            ctx->pc = 0x13CC78u;
            goto label_13cc78;
        }
    }
    ctx->pc = 0x13CC04u;
    // 0x13cc04: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x13cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13cc08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13cc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc0c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13cc10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13cc14: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x13cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x13cc18: 0xc04f630  jal         func_13D8C0
    ctx->pc = 0x13CC18u;
    SET_GPR_U32(ctx, 31, 0x13CC20u);
    ctx->pc = 0x13CC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC18u;
            // 0x13cc1c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D8C0u;
    if (runtime->hasFunction(0x13D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC20u; }
        if (ctx->pc != 0x13CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D8C0_0x13d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC20u; }
        if (ctx->pc != 0x13CC20u) { return; }
    }
    ctx->pc = 0x13CC20u;
label_13cc20:
    // 0x13cc20: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13cc20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cc24: 0xa6110258  sh          $s1, 0x258($s0)
    ctx->pc = 0x13cc24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 600), (uint16_t)GPR_U32(ctx, 17));
    // 0x13cc28: 0x960500ea  lhu         $a1, 0xEA($s0)
    ctx->pc = 0x13cc28u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x13cc2c: 0x920600f7  lbu         $a2, 0xF7($s0)
    ctx->pc = 0x13cc2cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 247)));
    // 0x13cc30: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x13cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13cc34: 0xc063720  jal         func_18DC80
    ctx->pc = 0x13CC34u;
    SET_GPR_U32(ctx, 31, 0x13CC3Cu);
    ctx->pc = 0x13CC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC34u;
            // 0x13cc38: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (runtime->hasFunction(0x18DC80u)) {
        auto targetFn = runtime->lookupFunction(0x18DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC3Cu; }
        if (ctx->pc != 0x13CC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC80_0x18dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC3Cu; }
        if (ctx->pc != 0x13CC3Cu) { return; }
    }
    ctx->pc = 0x13CC3Cu;
label_13cc3c:
    // 0x13cc3c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13CC3Cu;
    {
        const bool branch_taken_0x13cc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc3c) {
            ctx->pc = 0x13CC78u;
            goto label_13cc78;
        }
    }
    ctx->pc = 0x13CC44u;
    // 0x13cc44: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x13cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13cc48: 0x960500ea  lhu         $a1, 0xEA($s0)
    ctx->pc = 0x13cc48u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x13cc4c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x13cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13cc50: 0x920600f7  lbu         $a2, 0xF7($s0)
    ctx->pc = 0x13cc50u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 247)));
    // 0x13cc54: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x13cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13cc58: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x13cc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cc5c: 0xc063720  jal         func_18DC80
    ctx->pc = 0x13CC5Cu;
    SET_GPR_U32(ctx, 31, 0x13CC64u);
    ctx->pc = 0x13CC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC5Cu;
            // 0x13cc60: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (runtime->hasFunction(0x18DC80u)) {
        auto targetFn = runtime->lookupFunction(0x18DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC64u; }
        if (ctx->pc != 0x13CC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC80_0x18dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CC64u; }
        if (ctx->pc != 0x13CC64u) { return; }
    }
    ctx->pc = 0x13CC64u;
label_13cc64:
    // 0x13cc64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CC64u;
    {
        const bool branch_taken_0x13cc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc64) {
            ctx->pc = 0x13CC78u;
            goto label_13cc78;
        }
    }
    ctx->pc = 0x13CC6Cu;
    // 0x13cc6c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x13cc6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13cc70: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cc74: 0xae030208  sw          $v1, 0x208($s0)
    ctx->pc = 0x13cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 3));
label_13cc78:
    // 0x13cc78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13cc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13cc7c:
    // 0x13cc7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13cc7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cc80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13cc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cc88: 0x3e00008  jr          $ra
    ctx->pc = 0x13CC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC88u;
            // 0x13cc8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CC90u;
    ctx->pc = 0x13cc90u;
}
