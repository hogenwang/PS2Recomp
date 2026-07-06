#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001089E0
// Address: 0x1089e0 - 0x108c90
void sub_001089E0_0x1089e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001089E0_0x1089e0");
#endif

    switch (ctx->pc) {
        case 0x108a04u: goto label_108a04;
        case 0x108a34u: goto label_108a34;
        case 0x108a40u: goto label_108a40;
        case 0x108a64u: goto label_108a64;
        case 0x108a74u: goto label_108a74;
        case 0x108a98u: goto label_108a98;
        case 0x108abcu: goto label_108abc;
        case 0x108ac8u: goto label_108ac8;
        case 0x108adcu: goto label_108adc;
        case 0x108ae4u: goto label_108ae4;
        case 0x108b28u: goto label_108b28;
        case 0x108b44u: goto label_108b44;
        case 0x108b58u: goto label_108b58;
        case 0x108b64u: goto label_108b64;
        case 0x108b74u: goto label_108b74;
        case 0x108b9cu: goto label_108b9c;
        case 0x108bc0u: goto label_108bc0;
        case 0x108bc8u: goto label_108bc8;
        case 0x108bdcu: goto label_108bdc;
        case 0x108be4u: goto label_108be4;
        case 0x108c2cu: goto label_108c2c;
        case 0x108c50u: goto label_108c50;
        case 0x108c64u: goto label_108c64;
        case 0x108c6cu: goto label_108c6c;
        case 0x108c74u: goto label_108c74;
        default: break;
    }

    ctx->pc = 0x1089e0u;

    // 0x1089e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1089e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1089e4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1089e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1089e8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1089e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1089ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1089ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1089f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1089f4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1089f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1089f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1089f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1089fc: 0xc041c56  jal         func_107158
    ctx->pc = 0x1089FCu;
    SET_GPR_U32(ctx, 31, 0x108A04u);
    ctx->pc = 0x108A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1089FCu;
            // 0x108a00: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A04u; }
        if (ctx->pc != 0x108A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A04u; }
        if (ctx->pc != 0x108A04u) { return; }
    }
    ctx->pc = 0x108A04u;
label_108a04:
    // 0x108a04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108a04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a08: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x108a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x108a0c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x108a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x108a10: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x108a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x108a14: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x108a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    // 0x108a18: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x108a18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x108a1c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108A1Cu;
    {
        const bool branch_taken_0x108a1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x108A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A1Cu;
            // 0x108a20: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a1c) {
            ctx->pc = 0x108A34u;
            goto label_108a34;
        }
    }
    ctx->pc = 0x108A24u;
    // 0x108a24: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x108a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x108a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a2c: 0xc04305a  jal         func_10C168
    ctx->pc = 0x108A2Cu;
    SET_GPR_U32(ctx, 31, 0x108A34u);
    ctx->pc = 0x108A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108A2Cu;
            // 0x108a30: 0x24a5a100  addiu       $a1, $a1, -0x5F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (runtime->hasFunction(0x10C168u)) {
        auto targetFn = runtime->lookupFunction(0x10C168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A34u; }
        if (ctx->pc != 0x108A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C168_0x10c168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A34u; }
        if (ctx->pc != 0x108A34u) { return; }
    }
    ctx->pc = 0x108A34u;
label_108a34:
    // 0x108a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a38: 0xc041c56  jal         func_107158
    ctx->pc = 0x108A38u;
    SET_GPR_U32(ctx, 31, 0x108A40u);
    ctx->pc = 0x108A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108A38u;
            // 0x108a3c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A40u; }
        if (ctx->pc != 0x108A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A40u; }
        if (ctx->pc != 0x108A40u) { return; }
    }
    ctx->pc = 0x108A40u;
label_108a40:
    // 0x108a40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108a40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a48: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x108a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x108a4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108a50: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x108a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x108a54: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x108a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x108a58: 0xae230144  sw          $v1, 0x144($s1)
    ctx->pc = 0x108a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 3));
    // 0x108a5c: 0xc041c56  jal         func_107158
    ctx->pc = 0x108A5Cu;
    SET_GPR_U32(ctx, 31, 0x108A64u);
    ctx->pc = 0x108A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108A5Cu;
            // 0x108a60: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A64u; }
        if (ctx->pc != 0x108A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A64u; }
        if (ctx->pc != 0x108A64u) { return; }
    }
    ctx->pc = 0x108A64u;
label_108a64:
    // 0x108a64: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x108A64u;
    {
        const bool branch_taken_0x108a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A64u;
            // 0x108a68: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a64) {
            ctx->pc = 0x108AA0u;
            goto label_108aa0;
        }
    }
    ctx->pc = 0x108A6Cu;
    // 0x108a6c: 0xc042526  jal         func_109498
    ctx->pc = 0x108A6Cu;
    SET_GPR_U32(ctx, 31, 0x108A74u);
    ctx->pc = 0x108A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108A6Cu;
            // 0x108a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (runtime->hasFunction(0x109498u)) {
        auto targetFn = runtime->lookupFunction(0x109498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A74u; }
        if (ctx->pc != 0x108A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109498_0x109498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A74u; }
        if (ctx->pc != 0x108A74u) { return; }
    }
    ctx->pc = 0x108A74u;
label_108a74:
    // 0x108a74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108a78: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x108a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x108a7c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x108a80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108a84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108a84u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x108a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108a8c: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x108a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x108a90: 0xc042526  jal         func_109498
    ctx->pc = 0x108A90u;
    SET_GPR_U32(ctx, 31, 0x108A98u);
    ctx->pc = 0x108A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108A90u;
            // 0x108a94: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (runtime->hasFunction(0x109498u)) {
        auto targetFn = runtime->lookupFunction(0x109498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A98u; }
        if (ctx->pc != 0x108A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109498_0x109498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A98u; }
        if (ctx->pc != 0x108A98u) { return; }
    }
    ctx->pc = 0x108A98u;
label_108a98:
    // 0x108a98: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x108A98u;
    {
        const bool branch_taken_0x108a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A98u;
            // 0x108a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a98) {
            ctx->pc = 0x108B5Cu;
            goto label_108b5c;
        }
    }
    ctx->pc = 0x108AA0u;
label_108aa0:
    // 0x108aa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108aa4: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x108aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x108aa8: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x108aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x108aac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x108ab0: 0x26108540  addiu       $s0, $s0, -0x7AC0
    ctx->pc = 0x108ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935872));
    // 0x108ab4: 0xc042a04  jal         func_10A810
    ctx->pc = 0x108AB4u;
    SET_GPR_U32(ctx, 31, 0x108ABCu);
    ctx->pc = 0x108AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108AB4u;
            // 0x108ab8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (runtime->hasFunction(0x10A810u)) {
        auto targetFn = runtime->lookupFunction(0x10A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108ABCu; }
        if (ctx->pc != 0x108ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A810_0x10a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108ABCu; }
        if (ctx->pc != 0x108ABCu) { return; }
    }
    ctx->pc = 0x108ABCu;
label_108abc:
    // 0x108abc: 0x3c125000  lui         $s2, 0x5000
    ctx->pc = 0x108abcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20480 << 16));
    // 0x108ac0: 0xc042526  jal         func_109498
    ctx->pc = 0x108AC0u;
    SET_GPR_U32(ctx, 31, 0x108AC8u);
    ctx->pc = 0x108AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108AC0u;
            // 0x108ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (runtime->hasFunction(0x109498u)) {
        auto targetFn = runtime->lookupFunction(0x109498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AC8u; }
        if (ctx->pc != 0x108AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109498_0x109498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AC8u; }
        if (ctx->pc != 0x108AC8u) { return; }
    }
    ctx->pc = 0x108AC8u;
label_108ac8:
    // 0x108ac8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ad0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x108ad4: 0xc042526  jal         func_109498
    ctx->pc = 0x108AD4u;
    SET_GPR_U32(ctx, 31, 0x108ADCu);
    ctx->pc = 0x108AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108AD4u;
            // 0x108ad8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (runtime->hasFunction(0x109498u)) {
        auto targetFn = runtime->lookupFunction(0x109498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108ADCu; }
        if (ctx->pc != 0x108ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109498_0x109498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108ADCu; }
        if (ctx->pc != 0x108ADCu) { return; }
    }
    ctx->pc = 0x108ADCu;
label_108adc:
    // 0x108adc: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x108ADCu;
    SET_GPR_U32(ctx, 31, 0x108AE4u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AE4u; }
        if (ctx->pc != 0x108AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AE4u; }
        if (ctx->pc != 0x108AE4u) { return; }
    }
    ctx->pc = 0x108AE4u;
label_108ae4:
    // 0x108ae4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x108ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x108ae8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x108ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108aec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x108aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x108af0: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x108af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x108af4: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x108af4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x108af8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x108af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x108afc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x108afcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x108b00: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x108b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x108b04: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x108b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x108b08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108b0c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x108b0cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x108b10: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x108b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x108b14: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x108b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x108b18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108B18u;
    {
        const bool branch_taken_0x108b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108B18u;
            // 0x108b1c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b18) {
            ctx->pc = 0x108B28u;
            goto label_108b28;
        }
    }
    ctx->pc = 0x108B20u;
    // 0x108b20: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x108B20u;
    SET_GPR_U32(ctx, 31, 0x108B28u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B28u; }
        if (ctx->pc != 0x108B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B28u; }
        if (ctx->pc != 0x108B28u) { return; }
    }
    ctx->pc = 0x108B28u;
label_108b28:
    // 0x108b28: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x108b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x108b2c: 0xac322000  sw          $s2, 0x2000($at)
    ctx->pc = 0x108b2cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 18)); // MMIO: 0x10002000
    // 0x108b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108b34: 0xae32082c  sw          $s2, 0x82C($s1)
    ctx->pc = 0x108b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 18));
    // 0x108b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b3c: 0xc042526  jal         func_109498
    ctx->pc = 0x108B3Cu;
    SET_GPR_U32(ctx, 31, 0x108B44u);
    ctx->pc = 0x108B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B3Cu;
            // 0x108b40: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (runtime->hasFunction(0x109498u)) {
        auto targetFn = runtime->lookupFunction(0x109498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B44u; }
        if (ctx->pc != 0x108B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109498_0x109498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B44u; }
        if (ctx->pc != 0x108B44u) { return; }
    }
    ctx->pc = 0x108B44u;
label_108b44:
    // 0x108b44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108b48: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x108b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x108b4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x108b50: 0xc042a04  jal         func_10A810
    ctx->pc = 0x108B50u;
    SET_GPR_U32(ctx, 31, 0x108B58u);
    ctx->pc = 0x108B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B50u;
            // 0x108b54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (runtime->hasFunction(0x10A810u)) {
        auto targetFn = runtime->lookupFunction(0x10A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B58u; }
        if (ctx->pc != 0x108B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A810_0x10a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B58u; }
        if (ctx->pc != 0x108B58u) { return; }
    }
    ctx->pc = 0x108B58u;
label_108b58:
    // 0x108b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108b5c:
    // 0x108b5c: 0xc041c56  jal         func_107158
    ctx->pc = 0x108B5Cu;
    SET_GPR_U32(ctx, 31, 0x108B64u);
    ctx->pc = 0x108B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B5Cu;
            // 0x108b60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B64u; }
        if (ctx->pc != 0x108B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B64u; }
        if (ctx->pc != 0x108B64u) { return; }
    }
    ctx->pc = 0x108B64u;
label_108b64:
    // 0x108b64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108B64u;
    {
        const bool branch_taken_0x108b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108B64u;
            // 0x108b68: 0xae220854  sw          $v0, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b64) {
            ctx->pc = 0x108BA4u;
            goto label_108ba4;
        }
    }
    ctx->pc = 0x108B6Cu;
    // 0x108b6c: 0xc042526  jal         func_109498
    ctx->pc = 0x108B6Cu;
    SET_GPR_U32(ctx, 31, 0x108B74u);
    ctx->pc = 0x108B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B6Cu;
            // 0x108b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (runtime->hasFunction(0x109498u)) {
        auto targetFn = runtime->lookupFunction(0x109498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B74u; }
        if (ctx->pc != 0x108B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109498_0x109498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B74u; }
        if (ctx->pc != 0x108B74u) { return; }
    }
    ctx->pc = 0x108B74u;
label_108b74:
    // 0x108b74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108b78: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x108b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x108b7c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x108b80: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x108b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x108b84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108b84u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x108b88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108b8c: 0xae24082c  sw          $a0, 0x82C($s1)
    ctx->pc = 0x108b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 4));
    // 0x108b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b94: 0xc042526  jal         func_109498
    ctx->pc = 0x108B94u;
    SET_GPR_U32(ctx, 31, 0x108B9Cu);
    ctx->pc = 0x108B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B94u;
            // 0x108b98: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (runtime->hasFunction(0x109498u)) {
        auto targetFn = runtime->lookupFunction(0x109498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B9Cu; }
        if (ctx->pc != 0x108B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109498_0x109498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B9Cu; }
        if (ctx->pc != 0x108B9Cu) { return; }
    }
    ctx->pc = 0x108B9Cu;
label_108b9c:
    // 0x108b9c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x108B9Cu;
    {
        const bool branch_taken_0x108b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108b9c) {
            ctx->pc = 0x108C64u;
            goto label_108c64;
        }
    }
    ctx->pc = 0x108BA4u;
label_108ba4:
    // 0x108ba4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108ba8: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x108ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x108bac: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x108bacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x108bb0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x108bb4: 0x26108580  addiu       $s0, $s0, -0x7A80
    ctx->pc = 0x108bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935936));
    // 0x108bb8: 0xc042a04  jal         func_10A810
    ctx->pc = 0x108BB8u;
    SET_GPR_U32(ctx, 31, 0x108BC0u);
    ctx->pc = 0x108BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108BB8u;
            // 0x108bbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (runtime->hasFunction(0x10A810u)) {
        auto targetFn = runtime->lookupFunction(0x10A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108BC0u; }
        if (ctx->pc != 0x108BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A810_0x10a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108BC0u; }
        if (ctx->pc != 0x108BC0u) { return; }
    }
    ctx->pc = 0x108BC0u;
label_108bc0:
    // 0x108bc0: 0xc042526  jal         func_109498
    ctx->pc = 0x108BC0u;
    SET_GPR_U32(ctx, 31, 0x108BC8u);
    ctx->pc = 0x108BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108BC0u;
            // 0x108bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (runtime->hasFunction(0x109498u)) {
        auto targetFn = runtime->lookupFunction(0x109498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108BC8u; }
        if (ctx->pc != 0x108BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109498_0x109498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108BC8u; }
        if (ctx->pc != 0x108BC8u) { return; }
    }
    ctx->pc = 0x108BC8u;
label_108bc8:
    // 0x108bc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bd0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x108bd4: 0xc042526  jal         func_109498
    ctx->pc = 0x108BD4u;
    SET_GPR_U32(ctx, 31, 0x108BDCu);
    ctx->pc = 0x108BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108BD4u;
            // 0x108bd8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (runtime->hasFunction(0x109498u)) {
        auto targetFn = runtime->lookupFunction(0x109498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108BDCu; }
        if (ctx->pc != 0x108BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109498_0x109498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108BDCu; }
        if (ctx->pc != 0x108BDCu) { return; }
    }
    ctx->pc = 0x108BDCu;
label_108bdc:
    // 0x108bdc: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x108BDCu;
    SET_GPR_U32(ctx, 31, 0x108BE4u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108BE4u; }
        if (ctx->pc != 0x108BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108BE4u; }
        if (ctx->pc != 0x108BE4u) { return; }
    }
    ctx->pc = 0x108BE4u;
label_108be4:
    // 0x108be4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x108be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x108be8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x108be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108bec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x108becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x108bf0: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x108bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x108bf4: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x108bf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x108bf8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x108bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x108bfc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x108bfcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x108c00: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x108c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x108c04: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x108c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x108c08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108c0c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x108c0cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x108c10: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x108c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x108c14: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x108c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x108c18: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x108c18u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x108c1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108C1Cu;
    {
        const bool branch_taken_0x108c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C1Cu;
            // 0x108c20: 0x3c025800  lui         $v0, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c1c) {
            ctx->pc = 0x108C30u;
            goto label_108c30;
        }
    }
    ctx->pc = 0x108C24u;
    // 0x108c24: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x108C24u;
    SET_GPR_U32(ctx, 31, 0x108C2Cu);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C2Cu; }
        if (ctx->pc != 0x108C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C2Cu; }
        if (ctx->pc != 0x108C2Cu) { return; }
    }
    ctx->pc = 0x108C2Cu;
label_108c2c:
    // 0x108c2c: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x108c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
label_108c30:
    // 0x108c30: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x108c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x108c34: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x108c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x108c38: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x108c38u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x108c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108c44: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x108c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x108c48: 0xc042526  jal         func_109498
    ctx->pc = 0x108C48u;
    SET_GPR_U32(ctx, 31, 0x108C50u);
    ctx->pc = 0x108C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108C48u;
            // 0x108c4c: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (runtime->hasFunction(0x109498u)) {
        auto targetFn = runtime->lookupFunction(0x109498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C50u; }
        if (ctx->pc != 0x108C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109498_0x109498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C50u; }
        if (ctx->pc != 0x108C50u) { return; }
    }
    ctx->pc = 0x108C50u;
label_108c50:
    // 0x108c50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108c54: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x108c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x108c58: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x108c5c: 0xc042a04  jal         func_10A810
    ctx->pc = 0x108C5Cu;
    SET_GPR_U32(ctx, 31, 0x108C64u);
    ctx->pc = 0x108C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108C5Cu;
            // 0x108c60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (runtime->hasFunction(0x10A810u)) {
        auto targetFn = runtime->lookupFunction(0x10A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C64u; }
        if (ctx->pc != 0x108C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A810_0x10a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C64u; }
        if (ctx->pc != 0x108C64u) { return; }
    }
    ctx->pc = 0x108C64u;
label_108c64:
    // 0x108c64: 0xc0424b2  jal         func_1092C8
    ctx->pc = 0x108C64u;
    SET_GPR_U32(ctx, 31, 0x108C6Cu);
    ctx->pc = 0x108C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108C64u;
            // 0x108c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1092C8u;
    if (runtime->hasFunction(0x1092C8u)) {
        auto targetFn = runtime->lookupFunction(0x1092C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C6Cu; }
        if (ctx->pc != 0x108C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001092C8_0x1092c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C6Cu; }
        if (ctx->pc != 0x108C6Cu) { return; }
    }
    ctx->pc = 0x108C6Cu;
label_108c6c:
    // 0x108c6c: 0xc0421b2  jal         func_1086C8
    ctx->pc = 0x108C6Cu;
    SET_GPR_U32(ctx, 31, 0x108C74u);
    ctx->pc = 0x108C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108C6Cu;
            // 0x108c70: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1086C8u;
    if (runtime->hasFunction(0x1086C8u)) {
        auto targetFn = runtime->lookupFunction(0x1086C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C74u; }
        if (ctx->pc != 0x108C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001086C8_0x1086c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108C74u; }
        if (ctx->pc != 0x108C74u) { return; }
    }
    ctx->pc = 0x108C74u;
label_108c74:
    // 0x108c74: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x108c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108c78: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x108c78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108c7c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x108c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108c80: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x108c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108c84: 0x3e00008  jr          $ra
    ctx->pc = 0x108C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C84u;
            // 0x108c88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108C8Cu;
    // 0x108c8c: 0x0  nop
    ctx->pc = 0x108c8cu;
    // NOP
    ctx->pc = 0x108c90u;
}
