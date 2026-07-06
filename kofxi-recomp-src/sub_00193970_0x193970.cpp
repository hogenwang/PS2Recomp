#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193970
// Address: 0x193970 - 0x193d10
void sub_00193970_0x193970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193970_0x193970");
#endif

    switch (ctx->pc) {
        case 0x193980u: goto label_193980;
        case 0x193998u: goto label_193998;
        case 0x1939a0u: goto label_1939a0;
        case 0x1939a8u: goto label_1939a8;
        case 0x1939b0u: goto label_1939b0;
        case 0x1939b8u: goto label_1939b8;
        case 0x1939c8u: goto label_1939c8;
        case 0x1939d4u: goto label_1939d4;
        case 0x193a04u: goto label_193a04;
        case 0x193a14u: goto label_193a14;
        case 0x193a30u: goto label_193a30;
        case 0x193a54u: goto label_193a54;
        case 0x193a64u: goto label_193a64;
        case 0x193a80u: goto label_193a80;
        case 0x193aa0u: goto label_193aa0;
        case 0x193aa8u: goto label_193aa8;
        case 0x193ab0u: goto label_193ab0;
        case 0x193ac0u: goto label_193ac0;
        case 0x193b3cu: goto label_193b3c;
        case 0x193b54u: goto label_193b54;
        case 0x193b60u: goto label_193b60;
        case 0x193b70u: goto label_193b70;
        case 0x193ba4u: goto label_193ba4;
        case 0x193bacu: goto label_193bac;
        case 0x193bbcu: goto label_193bbc;
        case 0x193bccu: goto label_193bcc;
        case 0x193becu: goto label_193bec;
        case 0x193c24u: goto label_193c24;
        case 0x193c30u: goto label_193c30;
        case 0x193c40u: goto label_193c40;
        case 0x193c50u: goto label_193c50;
        case 0x193c98u: goto label_193c98;
        case 0x193ca0u: goto label_193ca0;
        case 0x193cb0u: goto label_193cb0;
        case 0x193cc8u: goto label_193cc8;
        case 0x193ce0u: goto label_193ce0;
        case 0x193ce8u: goto label_193ce8;
        default: break;
    }

    ctx->pc = 0x193970u;

    // 0x193970: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x193970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x193974: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193978: 0x80c8e24  j           func_323890
    ctx->pc = 0x193978u;
    ctx->pc = 0x19397Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193978u;
            // 0x19397c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00323890_0x323890(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x193980u;
label_193980:
    // 0x193980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19398c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19398cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193990: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x193990u;
    SET_GPR_U32(ctx, 31, 0x193998u);
    ctx->pc = 0x193994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193990u;
            // 0x193994: 0x2404030a  addiu       $a0, $zero, 0x30A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (runtime->hasFunction(0x1A0530u)) {
        auto targetFn = runtime->lookupFunction(0x1A0530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193998u; }
        if (ctx->pc != 0x193998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0530_0x1a0530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193998u; }
        if (ctx->pc != 0x193998u) { return; }
    }
    ctx->pc = 0x193998u;
label_193998:
    // 0x193998: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x193998u;
    SET_GPR_U32(ctx, 31, 0x1939A0u);
    ctx->pc = 0x1A0D40u;
    if (runtime->hasFunction(0x1A0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1A0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939A0u; }
        if (ctx->pc != 0x1939A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0D40_0x1a0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939A0u; }
        if (ctx->pc != 0x1939A0u) { return; }
    }
    ctx->pc = 0x1939A0u;
label_1939a0:
    // 0x1939a0: 0xc055630  jal         func_1558C0
    ctx->pc = 0x1939A0u;
    SET_GPR_U32(ctx, 31, 0x1939A8u);
    ctx->pc = 0x1558C0u;
    if (runtime->hasFunction(0x1558C0u)) {
        auto targetFn = runtime->lookupFunction(0x1558C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939A8u; }
        if (ctx->pc != 0x1939A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001558C0_0x1558c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939A8u; }
        if (ctx->pc != 0x1939A8u) { return; }
    }
    ctx->pc = 0x1939A8u;
label_1939a8:
    // 0x1939a8: 0xc055684  jal         func_155A10
    ctx->pc = 0x1939A8u;
    SET_GPR_U32(ctx, 31, 0x1939B0u);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939B0u; }
        if (ctx->pc != 0x1939B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939B0u; }
        if (ctx->pc != 0x1939B0u) { return; }
    }
    ctx->pc = 0x1939B0u;
label_1939b0:
    // 0x1939b0: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x1939B0u;
    SET_GPR_U32(ctx, 31, 0x1939B8u);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939B8u; }
        if (ctx->pc != 0x1939B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939B8u; }
        if (ctx->pc != 0x1939B8u) { return; }
    }
    ctx->pc = 0x1939B8u;
label_1939b8:
    // 0x1939b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1939b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1939bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939c0: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x1939C0u;
    SET_GPR_U32(ctx, 31, 0x1939C8u);
    ctx->pc = 0x1939C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1939C0u;
            // 0x1939c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939C8u; }
        if (ctx->pc != 0x1939C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939C8u; }
        if (ctx->pc != 0x1939C8u) { return; }
    }
    ctx->pc = 0x1939C8u;
label_1939c8:
    // 0x1939c8: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x1939c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x1939cc: 0xc0558d0  jal         func_156340
    ctx->pc = 0x1939CCu;
    SET_GPR_U32(ctx, 31, 0x1939D4u);
    ctx->pc = 0x1939D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1939CCu;
            // 0x1939d0: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939D4u; }
        if (ctx->pc != 0x1939D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939D4u; }
        if (ctx->pc != 0x1939D4u) { return; }
    }
    ctx->pc = 0x1939D4u;
label_1939d4:
    // 0x1939d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1939d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1939d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1939d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1939dc: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x1939dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x1939e0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1939e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1939e4: 0xa060cf20  sb          $zero, -0x30E0($v1)
    ctx->pc = 0x1939e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294954784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1939e8: 0x24843ac0  addiu       $a0, $a0, 0x3AC0
    ctx->pc = 0x1939e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15040));
    // 0x1939ec: 0xa040cf28  sb          $zero, -0x30D8($v0)
    ctx->pc = 0x1939ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954792), (uint8_t)GPR_U32(ctx, 0));
    // 0x1939f0: 0x24a5e8f0  addiu       $a1, $a1, -0x1710
    ctx->pc = 0x1939f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961392));
    // 0x1939f4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1939f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1939f8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1939f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1939fc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1939FCu;
    SET_GPR_U32(ctx, 31, 0x193A04u);
    ctx->pc = 0x193A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1939FCu;
            // 0x193a00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A04u; }
        if (ctx->pc != 0x193A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A04u; }
        if (ctx->pc != 0x193A04u) { return; }
    }
    ctx->pc = 0x193A04u;
label_193a04:
    // 0x193a04: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x193a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x193a08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a0c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x193A0Cu;
    SET_GPR_U32(ctx, 31, 0x193A14u);
    ctx->pc = 0x193A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A0Cu;
            // 0x193a10: 0x24843a30  addiu       $a0, $a0, 0x3A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A14u; }
        if (ctx->pc != 0x193A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A14u; }
        if (ctx->pc != 0x193A14u) { return; }
    }
    ctx->pc = 0x193A14u;
label_193a14:
    // 0x193a14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x193A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A1Cu;
            // 0x193a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193A24u;
    // 0x193a24: 0x0  nop
    ctx->pc = 0x193a24u;
    // NOP
    // 0x193a28: 0x0  nop
    ctx->pc = 0x193a28u;
    // NOP
    // 0x193a2c: 0x0  nop
    ctx->pc = 0x193a2cu;
    // NOP
label_193a30:
    // 0x193a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193a34: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193a40: 0x8063cf20  lb          $v1, -0x30E0($v1)
    ctx->pc = 0x193a40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294954784)));
    // 0x193a44: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x193A44u;
    {
        const bool branch_taken_0x193a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A44u;
            // 0x193a48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a44) {
            ctx->pc = 0x193A64u;
            goto label_193a64;
        }
    }
    ctx->pc = 0x193A4Cu;
    // 0x193a4c: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x193A4Cu;
    SET_GPR_U32(ctx, 31, 0x193A54u);
    ctx->pc = 0x1A0CC0u;
    if (runtime->hasFunction(0x1A0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A54u; }
        if (ctx->pc != 0x193A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CC0_0x1a0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A54u; }
        if (ctx->pc != 0x193A54u) { return; }
    }
    ctx->pc = 0x193A54u;
label_193a54:
    // 0x193a54: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x193a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x193a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a5c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x193A5Cu;
    SET_GPR_U32(ctx, 31, 0x193A64u);
    ctx->pc = 0x193A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A5Cu;
            // 0x193a60: 0x24843a80  addiu       $a0, $a0, 0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A64u; }
        if (ctx->pc != 0x193A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A64u; }
        if (ctx->pc != 0x193A64u) { return; }
    }
    ctx->pc = 0x193A64u;
label_193a64:
    // 0x193a64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x193A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A6Cu;
            // 0x193a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193A74u;
    // 0x193a74: 0x0  nop
    ctx->pc = 0x193a74u;
    // NOP
    // 0x193a78: 0x0  nop
    ctx->pc = 0x193a78u;
    // NOP
    // 0x193a7c: 0x0  nop
    ctx->pc = 0x193a7cu;
    // NOP
label_193a80:
    // 0x193a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193a84: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x193a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x193a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193a8c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x193a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x193a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193a94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a98: 0xc055650  jal         func_155940
    ctx->pc = 0x193A98u;
    SET_GPR_U32(ctx, 31, 0x193AA0u);
    ctx->pc = 0x193A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A98u;
            // 0x193a9c: 0xa043d9d0  sb          $v1, -0x2630($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155940u;
    if (runtime->hasFunction(0x155940u)) {
        auto targetFn = runtime->lookupFunction(0x155940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AA0u; }
        if (ctx->pc != 0x193AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155940_0x155940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AA0u; }
        if (ctx->pc != 0x193AA0u) { return; }
    }
    ctx->pc = 0x193AA0u;
label_193aa0:
    // 0x193aa0: 0xc064f44  jal         func_193D10
    ctx->pc = 0x193AA0u;
    SET_GPR_U32(ctx, 31, 0x193AA8u);
    ctx->pc = 0x193D10u;
    if (runtime->hasFunction(0x193D10u)) {
        auto targetFn = runtime->lookupFunction(0x193D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AA8u; }
        if (ctx->pc != 0x193AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193D10_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AA8u; }
        if (ctx->pc != 0x193AA8u) { return; }
    }
    ctx->pc = 0x193AA8u;
label_193aa8:
    // 0x193aa8: 0xc055770  jal         func_155DC0
    ctx->pc = 0x193AA8u;
    SET_GPR_U32(ctx, 31, 0x193AB0u);
    ctx->pc = 0x193AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193AA8u;
            // 0x193aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (runtime->hasFunction(0x155DC0u)) {
        auto targetFn = runtime->lookupFunction(0x155DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AB0u; }
        if (ctx->pc != 0x193AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DC0_0x155dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AB0u; }
        if (ctx->pc != 0x193AB0u) { return; }
    }
    ctx->pc = 0x193AB0u;
label_193ab0:
    // 0x193ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x193AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AB8u;
            // 0x193abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193AC0u;
label_193ac0:
    // 0x193ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193ac4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x193ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x193ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193ad0: 0xc4605bb8  lwc1        $f0, 0x5BB8($v1)
    ctx->pc = 0x193ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 23480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ad8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x193ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x193adc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193ae0: 0x8066cf28  lb          $a2, -0x30D8($v1)
    ctx->pc = 0x193ae0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294954792)));
    // 0x193ae4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x193ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x193ae8: 0x10c3003e  beq         $a2, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x193AE8u;
    {
        const bool branch_taken_0x193ae8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x193AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AE8u;
            // 0x193aec: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ae8) {
            ctx->pc = 0x193BE4u;
            goto label_193be4;
        }
    }
    ctx->pc = 0x193AF0u;
    // 0x193af0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x193af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x193af4: 0x10c30033  beq         $a2, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x193AF4u;
    {
        const bool branch_taken_0x193af4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x193af4) {
            ctx->pc = 0x193BC4u;
            goto label_193bc4;
        }
    }
    ctx->pc = 0x193AFCu;
    // 0x193afc: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x193afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x193b00: 0x10c50025  beq         $a2, $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x193B00u;
    {
        const bool branch_taken_0x193b00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x193b00) {
            ctx->pc = 0x193B98u;
            goto label_193b98;
        }
    }
    ctx->pc = 0x193B08u;
    // 0x193b08: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x193b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x193b0c: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x193B0Cu;
    {
        const bool branch_taken_0x193b0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x193b0c) {
            ctx->pc = 0x193B80u;
            goto label_193b80;
        }
    }
    ctx->pc = 0x193B14u;
    // 0x193b14: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x193b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x193b18: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x193B18u;
    {
        const bool branch_taken_0x193b18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x193b18) {
            ctx->pc = 0x193B48u;
            goto label_193b48;
        }
    }
    ctx->pc = 0x193B20u;
    // 0x193b20: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x193B20u;
    {
        const bool branch_taken_0x193b20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x193b20) {
            ctx->pc = 0x193B30u;
            goto label_193b30;
        }
    }
    ctx->pc = 0x193B28u;
    // 0x193b28: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x193B28u;
    {
        const bool branch_taken_0x193b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B28u;
            // 0x193b2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b28) {
            ctx->pc = 0x193C44u;
            goto label_193c44;
        }
    }
    ctx->pc = 0x193B30u;
label_193b30:
    // 0x193b30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x193b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x193b34: 0xc0c880c  jal         func_322030
    ctx->pc = 0x193B34u;
    SET_GPR_U32(ctx, 31, 0x193B3Cu);
    ctx->pc = 0x193B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B34u;
            // 0x193b38: 0xac40cf30  sw          $zero, -0x30D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322030u;
    if (runtime->hasFunction(0x322030u)) {
        auto targetFn = runtime->lookupFunction(0x322030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B3Cu; }
        if (ctx->pc != 0x193B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322030_0x322030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B3Cu; }
        if (ctx->pc != 0x193B3Cu) { return; }
    }
    ctx->pc = 0x193B3Cu;
label_193b3c:
    // 0x193b3c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x193b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x193b40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x193b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x193b44: 0xa043cf28  sb          $v1, -0x30D8($v0)
    ctx->pc = 0x193b44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954792), (uint8_t)GPR_U32(ctx, 3));
label_193b48:
    // 0x193b48: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x193b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x193b4c: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x193B4Cu;
    SET_GPR_U32(ctx, 31, 0x193B54u);
    ctx->pc = 0x193B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B4Cu;
            // 0x193b50: 0x8c445ba8  lw          $a0, 0x5BA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (runtime->hasFunction(0x18E750u)) {
        auto targetFn = runtime->lookupFunction(0x18E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B54u; }
        if (ctx->pc != 0x193B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E750_0x18e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B54u; }
        if (ctx->pc != 0x193B54u) { return; }
    }
    ctx->pc = 0x193B54u;
label_193b54:
    // 0x193b54: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x193b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x193b58: 0xc0660ec  jal         func_1983B0
    ctx->pc = 0x193B58u;
    SET_GPR_U32(ctx, 31, 0x193B60u);
    ctx->pc = 0x193B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B58u;
            // 0x193b5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1983B0u;
    if (runtime->hasFunction(0x1983B0u)) {
        auto targetFn = runtime->lookupFunction(0x1983B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B60u; }
        if (ctx->pc != 0x193B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001983B0_0x1983b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B60u; }
        if (ctx->pc != 0x193B60u) { return; }
    }
    ctx->pc = 0x193B60u;
label_193b60:
    // 0x193b60: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193b64: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x193b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x193b68: 0xc063d08  jal         func_18F420
    ctx->pc = 0x193B68u;
    SET_GPR_U32(ctx, 31, 0x193B70u);
    ctx->pc = 0x193B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B68u;
            // 0x193b6c: 0xac62cf30  sw          $v0, -0x30D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B70u; }
        if (ctx->pc != 0x193B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B70u; }
        if (ctx->pc != 0x193B70u) { return; }
    }
    ctx->pc = 0x193B70u;
label_193b70:
    // 0x193b70: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x193b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x193b74: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193b78: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x193B78u;
    {
        const bool branch_taken_0x193b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B78u;
            // 0x193b7c: 0xa064cf28  sb          $a0, -0x30D8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294954792), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b78) {
            ctx->pc = 0x193C40u;
            goto label_193c40;
        }
    }
    ctx->pc = 0x193B80u;
label_193b80:
    // 0x193b80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x193b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x193b84: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193b88: 0x8c44cf30  lw          $a0, -0x30D0($v0)
    ctx->pc = 0x193b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954800)));
    // 0x193b8c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x193b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x193b90: 0xac64cf40  sw          $a0, -0x30C0($v1)
    ctx->pc = 0x193b90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954816), GPR_U32(ctx, 4));
    // 0x193b94: 0xa045cf28  sb          $a1, -0x30D8($v0)
    ctx->pc = 0x193b94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954792), (uint8_t)GPR_U32(ctx, 5));
label_193b98:
    // 0x193b98: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x193b9c: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x193B9Cu;
    SET_GPR_U32(ctx, 31, 0x193BA4u);
    ctx->pc = 0x193BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B9Cu;
            // 0x193ba0: 0x24845bb0  addiu       $a0, $a0, 0x5BB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (runtime->hasFunction(0x3036D0u)) {
        auto targetFn = runtime->lookupFunction(0x3036D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BA4u; }
        if (ctx->pc != 0x193BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003036D0_0x3036d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BA4u; }
        if (ctx->pc != 0x193BA4u) { return; }
    }
    ctx->pc = 0x193BA4u;
label_193ba4:
    // 0x193ba4: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x193BA4u;
    SET_GPR_U32(ctx, 31, 0x193BACu);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BACu; }
        if (ctx->pc != 0x193BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BACu; }
        if (ctx->pc != 0x193BACu) { return; }
    }
    ctx->pc = 0x193BACu;
label_193bac:
    // 0x193bac: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x193bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x193bb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x193bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x193bb4: 0xc063d18  jal         func_18F460
    ctx->pc = 0x193BB4u;
    SET_GPR_U32(ctx, 31, 0x193BBCu);
    ctx->pc = 0x193BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193BB4u;
            // 0x193bb8: 0xa043cf28  sb          $v1, -0x30D8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294954792), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F460u;
    if (runtime->hasFunction(0x18F460u)) {
        auto targetFn = runtime->lookupFunction(0x18F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BBCu; }
        if (ctx->pc != 0x193BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F460_0x18f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BBCu; }
        if (ctx->pc != 0x193BBCu) { return; }
    }
    ctx->pc = 0x193BBCu;
label_193bbc:
    // 0x193bbc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x193BBCu;
    {
        const bool branch_taken_0x193bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193bbc) {
            ctx->pc = 0x193C40u;
            goto label_193c40;
        }
    }
    ctx->pc = 0x193BC4u;
label_193bc4:
    // 0x193bc4: 0xc0c0da8  jal         func_3036A0
    ctx->pc = 0x193BC4u;
    SET_GPR_U32(ctx, 31, 0x193BCCu);
    ctx->pc = 0x3036A0u;
    if (runtime->hasFunction(0x3036A0u)) {
        auto targetFn = runtime->lookupFunction(0x3036A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BCCu; }
        if (ctx->pc != 0x193BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003036A0_0x3036a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BCCu; }
        if (ctx->pc != 0x193BCCu) { return; }
    }
    ctx->pc = 0x193BCCu;
label_193bcc:
    // 0x193bcc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x193BCCu;
    {
        const bool branch_taken_0x193bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193bcc) {
            ctx->pc = 0x193C40u;
            goto label_193c40;
        }
    }
    ctx->pc = 0x193BD4u;
    // 0x193bd4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x193bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x193bd8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193bdc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x193BDCu;
    {
        const bool branch_taken_0x193bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193BDCu;
            // 0x193be0: 0xa064cf28  sb          $a0, -0x30D8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294954792), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bdc) {
            ctx->pc = 0x193C40u;
            goto label_193c40;
        }
    }
    ctx->pc = 0x193BE4u;
label_193be4:
    // 0x193be4: 0xc063d2c  jal         func_18F4B0
    ctx->pc = 0x193BE4u;
    SET_GPR_U32(ctx, 31, 0x193BECu);
    ctx->pc = 0x193BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193BE4u;
            // 0x193be8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F4B0u;
    if (runtime->hasFunction(0x18F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x18F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BECu; }
        if (ctx->pc != 0x193BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F4B0_0x18f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BECu; }
        if (ctx->pc != 0x193BECu) { return; }
    }
    ctx->pc = 0x193BECu;
label_193bec:
    // 0x193bec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x193BECu;
    {
        const bool branch_taken_0x193bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193bec) {
            ctx->pc = 0x193C40u;
            goto label_193c40;
        }
    }
    ctx->pc = 0x193BF4u;
    // 0x193bf4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x193bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x193bf8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x193bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x193bfc: 0x8c44bb70  lw          $a0, -0x4490($v0)
    ctx->pc = 0x193bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949744)));
    // 0x193c00: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x193c00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x193c04: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x193c04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x193c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c0c: 0x24c65bb0  addiu       $a2, $a2, 0x5BB0
    ctx->pc = 0x193c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23472));
    // 0x193c10: 0x24e74e38  addiu       $a3, $a3, 0x4E38
    ctx->pc = 0x193c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20024));
    // 0x193c14: 0x25084e40  addiu       $t0, $t0, 0x4E40
    ctx->pc = 0x193c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20032));
    // 0x193c18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193c18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c1c: 0xc0c886c  jal         func_3221B0
    ctx->pc = 0x193C1Cu;
    SET_GPR_U32(ctx, 31, 0x193C24u);
    ctx->pc = 0x193C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C1Cu;
            // 0x193c20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3221B0u;
    if (runtime->hasFunction(0x3221B0u)) {
        auto targetFn = runtime->lookupFunction(0x3221B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C24u; }
        if (ctx->pc != 0x193C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003221B0_0x3221b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C24u; }
        if (ctx->pc != 0x193C24u) { return; }
    }
    ctx->pc = 0x193C24u;
label_193c24:
    // 0x193c24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x193c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x193c28: 0xc063d18  jal         func_18F460
    ctx->pc = 0x193C28u;
    SET_GPR_U32(ctx, 31, 0x193C30u);
    ctx->pc = 0x193C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C28u;
            // 0x193c2c: 0xa040cf28  sb          $zero, -0x30D8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294954792), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F460u;
    if (runtime->hasFunction(0x18F460u)) {
        auto targetFn = runtime->lookupFunction(0x18F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C30u; }
        if (ctx->pc != 0x193C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F460_0x18f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C30u; }
        if (ctx->pc != 0x193C30u) { return; }
    }
    ctx->pc = 0x193C30u;
label_193c30:
    // 0x193c30: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x193c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x193c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c38: 0xc055768  jal         func_155DA0
    ctx->pc = 0x193C38u;
    SET_GPR_U32(ctx, 31, 0x193C40u);
    ctx->pc = 0x193C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C38u;
            // 0x193c3c: 0x24843c50  addiu       $a0, $a0, 0x3C50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C40u; }
        if (ctx->pc != 0x193C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C40u; }
        if (ctx->pc != 0x193C40u) { return; }
    }
    ctx->pc = 0x193C40u;
label_193c40:
    // 0x193c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193c44:
    // 0x193c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c48: 0x3e00008  jr          $ra
    ctx->pc = 0x193C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193C48u;
            // 0x193c4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193C50u;
label_193c50:
    // 0x193c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193c54: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193c5c: 0x8064cf28  lb          $a0, -0x30D8($v1)
    ctx->pc = 0x193c5cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294954792)));
    // 0x193c60: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x193c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x193c64: 0x50830024  beql        $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x193C64u;
    {
        const bool branch_taken_0x193c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x193c64) {
            ctx->pc = 0x193C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193C64u;
            // 0x193c68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193CF8u;
            goto label_193cf8;
        }
    }
    ctx->pc = 0x193C6Cu;
    // 0x193c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x193c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193c70: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x193C70u;
    {
        const bool branch_taken_0x193c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x193c70) {
            ctx->pc = 0x193C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193C70u;
            // 0x193c74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193CC0u;
            goto label_193cc0;
        }
    }
    ctx->pc = 0x193C78u;
    // 0x193c78: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x193C78u;
    {
        const bool branch_taken_0x193c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x193c78) {
            ctx->pc = 0x193C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193C78u;
            // 0x193c7c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193C88u;
            goto label_193c88;
        }
    }
    ctx->pc = 0x193C80u;
    // 0x193c80: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x193C80u;
    {
        const bool branch_taken_0x193c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193C80u;
            // 0x193c84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c80) {
            ctx->pc = 0x193D04u;
            goto label_193d04;
        }
    }
    ctx->pc = 0x193C88u;
label_193c88:
    // 0x193c88: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x193c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x193c8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x193c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c90: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x193C90u;
    SET_GPR_U32(ctx, 31, 0x193C98u);
    ctx->pc = 0x193C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193C90u;
            // 0x193c94: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C98u; }
        if (ctx->pc != 0x193C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C98u; }
        if (ctx->pc != 0x193C98u) { return; }
    }
    ctx->pc = 0x193C98u;
label_193c98:
    // 0x193c98: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x193C98u;
    SET_GPR_U32(ctx, 31, 0x193CA0u);
    ctx->pc = 0x322B60u;
    if (runtime->hasFunction(0x322B60u)) {
        auto targetFn = runtime->lookupFunction(0x322B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CA0u; }
        if (ctx->pc != 0x193CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322B60_0x322b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CA0u; }
        if (ctx->pc != 0x193CA0u) { return; }
    }
    ctx->pc = 0x193CA0u;
label_193ca0:
    // 0x193ca0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ca4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193ca8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x193CA8u;
    SET_GPR_U32(ctx, 31, 0x193CB0u);
    ctx->pc = 0x193CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193CA8u;
            // 0x193cac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CB0u; }
        if (ctx->pc != 0x193CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CB0u; }
        if (ctx->pc != 0x193CB0u) { return; }
    }
    ctx->pc = 0x193CB0u;
label_193cb0:
    // 0x193cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x193cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193cb4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193cb8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x193CB8u;
    {
        const bool branch_taken_0x193cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193CB8u;
            // 0x193cbc: 0xa064cf28  sb          $a0, -0x30D8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294954792), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193cb8) {
            ctx->pc = 0x193D00u;
            goto label_193d00;
        }
    }
    ctx->pc = 0x193CC0u;
label_193cc0:
    // 0x193cc0: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x193CC0u;
    SET_GPR_U32(ctx, 31, 0x193CC8u);
    ctx->pc = 0x193CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193CC0u;
            // 0x193cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CC8u; }
        if (ctx->pc != 0x193CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CC8u; }
        if (ctx->pc != 0x193CC8u) { return; }
    }
    ctx->pc = 0x193CC8u;
label_193cc8:
    // 0x193cc8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x193CC8u;
    {
        const bool branch_taken_0x193cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193cc8) {
            ctx->pc = 0x193D00u;
            goto label_193d00;
        }
    }
    ctx->pc = 0x193CD0u;
    // 0x193cd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cd8: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x193CD8u;
    SET_GPR_U32(ctx, 31, 0x193CE0u);
    ctx->pc = 0x193CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193CD8u;
            // 0x193cdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CE0u; }
        if (ctx->pc != 0x193CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CE0u; }
        if (ctx->pc != 0x193CE0u) { return; }
    }
    ctx->pc = 0x193CE0u;
label_193ce0:
    // 0x193ce0: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x193CE0u;
    SET_GPR_U32(ctx, 31, 0x193CE8u);
    ctx->pc = 0x3236D0u;
    if (runtime->hasFunction(0x3236D0u)) {
        auto targetFn = runtime->lookupFunction(0x3236D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CE8u; }
        if (ctx->pc != 0x193CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003236D0_0x3236d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CE8u; }
        if (ctx->pc != 0x193CE8u) { return; }
    }
    ctx->pc = 0x193CE8u;
label_193ce8:
    // 0x193ce8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x193ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x193cec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193cf0: 0xa064cf28  sb          $a0, -0x30D8($v1)
    ctx->pc = 0x193cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294954792), (uint8_t)GPR_U32(ctx, 4));
    // 0x193cf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x193cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193cf8:
    // 0x193cf8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193cfc: 0xa064cf20  sb          $a0, -0x30E0($v1)
    ctx->pc = 0x193cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294954784), (uint8_t)GPR_U32(ctx, 4));
label_193d00:
    // 0x193d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193d04:
    // 0x193d04: 0x3e00008  jr          $ra
    ctx->pc = 0x193D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193D04u;
            // 0x193d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193D0Cu;
    // 0x193d0c: 0x0  nop
    ctx->pc = 0x193d0cu;
    // NOP
    ctx->pc = 0x193d10u;
}
