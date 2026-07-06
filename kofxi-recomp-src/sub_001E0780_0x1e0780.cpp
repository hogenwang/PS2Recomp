#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0780
// Address: 0x1e0780 - 0x1e0960
void sub_001E0780_0x1e0780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0780_0x1e0780");
#endif

    switch (ctx->pc) {
        case 0x1e0790u: goto label_1e0790;
        case 0x1e07a8u: goto label_1e07a8;
        case 0x1e07d0u: goto label_1e07d0;
        case 0x1e07e4u: goto label_1e07e4;
        case 0x1e0840u: goto label_1e0840;
        case 0x1e0848u: goto label_1e0848;
        case 0x1e086cu: goto label_1e086c;
        case 0x1e0874u: goto label_1e0874;
        case 0x1e087cu: goto label_1e087c;
        case 0x1e0884u: goto label_1e0884;
        case 0x1e088cu: goto label_1e088c;
        case 0x1e089cu: goto label_1e089c;
        case 0x1e08a8u: goto label_1e08a8;
        case 0x1e08b0u: goto label_1e08b0;
        case 0x1e08e8u: goto label_1e08e8;
        case 0x1e08fcu: goto label_1e08fc;
        case 0x1e0910u: goto label_1e0910;
        case 0x1e0918u: goto label_1e0918;
        case 0x1e0928u: goto label_1e0928;
        case 0x1e0930u: goto label_1e0930;
        case 0x1e0938u: goto label_1e0938;
        default: break;
    }

    ctx->pc = 0x1e0780u;

    // 0x1e0780: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e0780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e0784: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0784u;
            // 0x1e0788: 0x2442ec18  addiu       $v0, $v0, -0x13E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E078Cu;
    // 0x1e078c: 0x0  nop
    ctx->pc = 0x1e078cu;
    // NOP
label_1e0790:
    // 0x1e0790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0794: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e0794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e079c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e079cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e07a0: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E07A0u;
    ctx->pc = 0x1E07A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07A0u;
            // 0x1e07a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E07A8u;
label_1e07a8:
    // 0x1e07a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e07a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e07ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e07acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e07b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e07b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07b4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e07b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1e07b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e07b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07bc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E07BCu;
    {
        const bool branch_taken_0x1e07bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E07C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07BCu;
            // 0x1e07c0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07bc) {
            ctx->pc = 0x1E07D8u;
            goto label_1e07d8;
        }
    }
    ctx->pc = 0x1E07C4u;
    // 0x1e07c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e07c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e07c8: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E07C8u;
    SET_GPR_U32(ctx, 31, 0x1E07D0u);
    ctx->pc = 0x1E07CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07C8u;
            // 0x1e07cc: 0x2484cd70  addiu       $a0, $a0, -0x3290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07D0u; }
        if (ctx->pc != 0x1E07D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07D0u; }
        if (ctx->pc != 0x1E07D0u) { return; }
    }
    ctx->pc = 0x1E07D0u;
label_1e07d0:
    // 0x1e07d0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1E07D0u;
    {
        const bool branch_taken_0x1e07d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07D0u;
            // 0x1e07d4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07d0) {
            ctx->pc = 0x1E094Cu;
            goto label_1e094c;
        }
    }
    ctx->pc = 0x1E07D8u;
label_1e07d8:
    // 0x1e07d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e07d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07dc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1E07DCu;
    SET_GPR_U32(ctx, 31, 0x1E07E4u);
    ctx->pc = 0x1E07E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07DCu;
            // 0x1e07e0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07E4u; }
        if (ctx->pc != 0x1E07E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07E4u; }
        if (ctx->pc != 0x1E07E4u) { return; }
    }
    ctx->pc = 0x1E07E4u;
label_1e07e4:
    // 0x1e07e4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1e07e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e07e8: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1e07e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1e07ec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1e07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1e07f0: 0x2463ba18  addiu       $v1, $v1, -0x45E8
    ctx->pc = 0x1e07f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949400));
    // 0x1e07f4: 0x2442ccd0  addiu       $v0, $v0, -0x3330
    ctx->pc = 0x1e07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954192));
    // 0x1e07f8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1e07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e07fc: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1e07fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1e0800: 0x8e0a001c  lw          $t2, 0x1C($s0)
    ctx->pc = 0x1e0800u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e0804: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x1e0804u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0808: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1e0808u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e080c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1e080cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e0810: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1e0810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e0814: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1e0814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e0818: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e0818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e081c: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1e081cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1e0820: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e0820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e0824: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1e0824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1e0828: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1e0828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x1e082c: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x1e082cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x1e0830: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1e0830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1e0834: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1e0834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x1e0838: 0xc079a1a  jal         func_1E6868
    ctx->pc = 0x1E0838u;
    SET_GPR_U32(ctx, 31, 0x1E0840u);
    ctx->pc = 0x1E083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0838u;
            // 0x1e083c: 0xafaa001c  sw          $t2, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6868u;
    if (runtime->hasFunction(0x1E6868u)) {
        auto targetFn = runtime->lookupFunction(0x1E6868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0840u; }
        if (ctx->pc != 0x1E0840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6868_0x1e6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0840u; }
        if (ctx->pc != 0x1E0840u) { return; }
    }
    ctx->pc = 0x1E0840u;
label_1e0840:
    // 0x1e0840: 0xc078794  jal         func_1E1E50
    ctx->pc = 0x1E0840u;
    SET_GPR_U32(ctx, 31, 0x1E0848u);
    ctx->pc = 0x1E1E50u;
    if (runtime->hasFunction(0x1E1E50u)) {
        auto targetFn = runtime->lookupFunction(0x1E1E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0848u; }
        if (ctx->pc != 0x1E0848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1E50_0x1e1e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0848u; }
        if (ctx->pc != 0x1E0848u) { return; }
    }
    ctx->pc = 0x1E0848u;
label_1e0848:
    // 0x1e0848: 0x8e24ec10  lw          $a0, -0x13F0($s1)
    ctx->pc = 0x1e0848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962192)));
    // 0x1e084c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0850: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1e0850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1e0854: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1e0854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e0858: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1e0858u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e085c: 0x14800036  bnez        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E085Cu;
    {
        const bool branch_taken_0x1e085c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E085Cu;
            // 0x1e0860: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e085c) {
            ctx->pc = 0x1E0938u;
            goto label_1e0938;
        }
    }
    ctx->pc = 0x1E0864u;
    // 0x1e0864: 0xc06c74a  jal         func_1B1D28
    ctx->pc = 0x1E0864u;
    SET_GPR_U32(ctx, 31, 0x1E086Cu);
    ctx->pc = 0x1B1D28u;
    if (runtime->hasFunction(0x1B1D28u)) {
        auto targetFn = runtime->lookupFunction(0x1B1D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E086Cu; }
        if (ctx->pc != 0x1E086Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1D28_0x1b1d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E086Cu; }
        if (ctx->pc != 0x1E086Cu) { return; }
    }
    ctx->pc = 0x1E086Cu;
label_1e086c:
    // 0x1e086c: 0xc072cac  jal         func_1CB2B0
    ctx->pc = 0x1E086Cu;
    SET_GPR_U32(ctx, 31, 0x1E0874u);
    ctx->pc = 0x1CB2B0u;
    if (runtime->hasFunction(0x1CB2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0874u; }
        if (ctx->pc != 0x1E0874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB2B0_0x1cb2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0874u; }
        if (ctx->pc != 0x1E0874u) { return; }
    }
    ctx->pc = 0x1E0874u;
label_1e0874:
    // 0x1e0874: 0xc072a26  jal         func_1CA898
    ctx->pc = 0x1E0874u;
    SET_GPR_U32(ctx, 31, 0x1E087Cu);
    ctx->pc = 0x1CA898u;
    if (runtime->hasFunction(0x1CA898u)) {
        auto targetFn = runtime->lookupFunction(0x1CA898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E087Cu; }
        if (ctx->pc != 0x1E087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA898_0x1ca898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E087Cu; }
        if (ctx->pc != 0x1E087Cu) { return; }
    }
    ctx->pc = 0x1E087Cu;
label_1e087c:
    // 0x1e087c: 0xc073018  jal         func_1CC060
    ctx->pc = 0x1E087Cu;
    SET_GPR_U32(ctx, 31, 0x1E0884u);
    ctx->pc = 0x1CC060u;
    if (runtime->hasFunction(0x1CC060u)) {
        auto targetFn = runtime->lookupFunction(0x1CC060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0884u; }
        if (ctx->pc != 0x1E0884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC060_0x1cc060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0884u; }
        if (ctx->pc != 0x1E0884u) { return; }
    }
    ctx->pc = 0x1E0884u;
label_1e0884:
    // 0x1e0884: 0xc079eea  jal         func_1E7BA8
    ctx->pc = 0x1E0884u;
    SET_GPR_U32(ctx, 31, 0x1E088Cu);
    ctx->pc = 0x1E7BA8u;
    if (runtime->hasFunction(0x1E7BA8u)) {
        auto targetFn = runtime->lookupFunction(0x1E7BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E088Cu; }
        if (ctx->pc != 0x1E088Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7BA8_0x1e7ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E088Cu; }
        if (ctx->pc != 0x1E088Cu) { return; }
    }
    ctx->pc = 0x1E088Cu;
label_1e088c:
    // 0x1e088c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E088Cu;
    {
        const bool branch_taken_0x1e088c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e088c) {
            ctx->pc = 0x1E08A8u;
            goto label_1e08a8;
        }
    }
    ctx->pc = 0x1E0894u;
    // 0x1e0894: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1E0894u;
    SET_GPR_U32(ctx, 31, 0x1E089Cu);
    ctx->pc = 0x1E0898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0894u;
            // 0x1e0898: 0x2404ff9b  addiu       $a0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0CA0u;
    if (runtime->hasFunction(0x1E0CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E089Cu; }
        if (ctx->pc != 0x1E089Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0CA0_0x1e0ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E089Cu; }
        if (ctx->pc != 0x1E089Cu) { return; }
    }
    ctx->pc = 0x1E089Cu;
label_1e089c:
    // 0x1e089c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e089cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e08a0: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E08A0u;
    SET_GPR_U32(ctx, 31, 0x1E08A8u);
    ctx->pc = 0x1E08A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08A0u;
            // 0x1e08a4: 0x2484cd98  addiu       $a0, $a0, -0x3268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08A8u; }
        if (ctx->pc != 0x1E08A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08A8u; }
        if (ctx->pc != 0x1E08A8u) { return; }
    }
    ctx->pc = 0x1E08A8u;
label_1e08a8:
    // 0x1e08a8: 0xc078270  jal         func_1E09C0
    ctx->pc = 0x1E08A8u;
    SET_GPR_U32(ctx, 31, 0x1E08B0u);
    ctx->pc = 0x1E08ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08A8u;
            // 0x1e08ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E09C0u;
    if (runtime->hasFunction(0x1E09C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E09C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08B0u; }
        if (ctx->pc != 0x1E08B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E09C0_0x1e09c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08B0u; }
        if (ctx->pc != 0x1E08B0u) { return; }
    }
    ctx->pc = 0x1E08B0u;
label_1e08b0:
    // 0x1e08b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e08b4: 0x24421514  addiu       $v0, $v0, 0x1514
    ctx->pc = 0x1e08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5396));
    // 0x1e08b8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1e08b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1e08bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e08bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e08c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e08c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e08c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e08c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e08c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e08c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e08cc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e08ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e08d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e08d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e08d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e08d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e08d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e08d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e08dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1e08dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e08e0: 0xc07833c  jal         func_1E0CF0
    ctx->pc = 0x1E08E0u;
    SET_GPR_U32(ctx, 31, 0x1E08E8u);
    ctx->pc = 0x1E0CF0u;
    if (runtime->hasFunction(0x1E0CF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08E8u; }
        if (ctx->pc != 0x1E08E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0CF0_0x1e0cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08E8u; }
        if (ctx->pc != 0x1E08E8u) { return; }
    }
    ctx->pc = 0x1E08E8u;
label_1e08e8:
    // 0x1e08e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e08e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e08ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E08ECu;
    {
        const bool branch_taken_0x1e08ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E08F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08ECu;
            // 0x1e08f0: 0x2484cdc0  addiu       $a0, $a0, -0x3240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08ec) {
            ctx->pc = 0x1E08FCu;
            goto label_1e08fc;
        }
    }
    ctx->pc = 0x1E08F4u;
    // 0x1e08f4: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E08F4u;
    SET_GPR_U32(ctx, 31, 0x1E08FCu);
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08FCu; }
        if (ctx->pc != 0x1E08FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E08FCu; }
        if (ctx->pc != 0x1E08FCu) { return; }
    }
    ctx->pc = 0x1E08FCu;
label_1e08fc:
    // 0x1e08fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e08fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0900: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e0900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e0904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0908: 0xc0782be  jal         func_1E0AF8
    ctx->pc = 0x1E0908u;
    SET_GPR_U32(ctx, 31, 0x1E0910u);
    ctx->pc = 0x1E0AF8u;
    if (runtime->hasFunction(0x1E0AF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0910u; }
        if (ctx->pc != 0x1E0910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0AF8_0x1e0af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0910u; }
        if (ctx->pc != 0x1E0910u) { return; }
    }
    ctx->pc = 0x1E0910u;
label_1e0910:
    // 0x1e0910: 0xc071af0  jal         func_1C6BC0
    ctx->pc = 0x1E0910u;
    SET_GPR_U32(ctx, 31, 0x1E0918u);
    ctx->pc = 0x1C6BC0u;
    if (runtime->hasFunction(0x1C6BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1C6BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0918u; }
        if (ctx->pc != 0x1E0918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6BC0_0x1c6bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0918u; }
        if (ctx->pc != 0x1E0918u) { return; }
    }
    ctx->pc = 0x1E0918u;
label_1e0918:
    // 0x1e0918: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x1e0918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x1e091c: 0x24840790  addiu       $a0, $a0, 0x790
    ctx->pc = 0x1e091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1936));
    // 0x1e0920: 0xc071abe  jal         func_1C6AF8
    ctx->pc = 0x1E0920u;
    SET_GPR_U32(ctx, 31, 0x1E0928u);
    ctx->pc = 0x1E0924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0920u;
            // 0x1e0924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AF8u;
    if (runtime->hasFunction(0x1C6AF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0928u; }
        if (ctx->pc != 0x1E0928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6AF8_0x1c6af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0928u; }
        if (ctx->pc != 0x1E0928u) { return; }
    }
    ctx->pc = 0x1E0928u;
label_1e0928:
    // 0x1e0928: 0xc078e6c  jal         func_1E39B0
    ctx->pc = 0x1E0928u;
    SET_GPR_U32(ctx, 31, 0x1E0930u);
    ctx->pc = 0x1E39B0u;
    if (runtime->hasFunction(0x1E39B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E39B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0930u; }
        if (ctx->pc != 0x1E0930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E39B0_0x1e39b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0930u; }
        if (ctx->pc != 0x1E0930u) { return; }
    }
    ctx->pc = 0x1E0930u;
label_1e0930:
    // 0x1e0930: 0xc078258  jal         func_1E0960
    ctx->pc = 0x1E0930u;
    SET_GPR_U32(ctx, 31, 0x1E0938u);
    ctx->pc = 0x1E0934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0930u;
            // 0x1e0934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0960u;
    if (runtime->hasFunction(0x1E0960u)) {
        auto targetFn = runtime->lookupFunction(0x1E0960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0938u; }
        if (ctx->pc != 0x1E0938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0960_0x1e0960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0938u; }
        if (ctx->pc != 0x1E0938u) { return; }
    }
    ctx->pc = 0x1E0938u;
label_1e0938:
    // 0x1e0938: 0x2623ec10  addiu       $v1, $s1, -0x13F0
    ctx->pc = 0x1e0938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962192));
    // 0x1e093c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0940: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0944: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e0944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e0948: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e0948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e094c:
    // 0x1e094c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1e094cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e0950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e0950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0954: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0954u;
            // 0x1e0958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E095Cu;
    // 0x1e095c: 0x0  nop
    ctx->pc = 0x1e095cu;
    // NOP
    ctx->pc = 0x1e0960u;
}
