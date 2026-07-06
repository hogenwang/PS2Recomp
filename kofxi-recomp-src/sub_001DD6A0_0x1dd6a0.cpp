#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD6A0
// Address: 0x1dd6a0 - 0x1dddf8
void sub_001DD6A0_0x1dd6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD6A0_0x1dd6a0");
#endif

    switch (ctx->pc) {
        case 0x1dd738u: goto label_1dd738;
        case 0x1dd750u: goto label_1dd750;
        case 0x1dd764u: goto label_1dd764;
        case 0x1dd76cu: goto label_1dd76c;
        case 0x1dd790u: goto label_1dd790;
        case 0x1dd7a4u: goto label_1dd7a4;
        case 0x1dd7bcu: goto label_1dd7bc;
        case 0x1dd7d4u: goto label_1dd7d4;
        case 0x1dd7e0u: goto label_1dd7e0;
        case 0x1dd800u: goto label_1dd800;
        case 0x1dd818u: goto label_1dd818;
        case 0x1dd830u: goto label_1dd830;
        case 0x1dd840u: goto label_1dd840;
        case 0x1dd850u: goto label_1dd850;
        case 0x1dd860u: goto label_1dd860;
        case 0x1dd870u: goto label_1dd870;
        case 0x1dd8d8u: goto label_1dd8d8;
        case 0x1dd904u: goto label_1dd904;
        case 0x1dd90cu: goto label_1dd90c;
        case 0x1dd944u: goto label_1dd944;
        case 0x1dd9e0u: goto label_1dd9e0;
        case 0x1dda44u: goto label_1dda44;
        case 0x1ddab0u: goto label_1ddab0;
        case 0x1ddb14u: goto label_1ddb14;
        case 0x1ddb90u: goto label_1ddb90;
        case 0x1ddbf4u: goto label_1ddbf4;
        case 0x1ddc8cu: goto label_1ddc8c;
        case 0x1ddcf8u: goto label_1ddcf8;
        case 0x1ddd0cu: goto label_1ddd0c;
        case 0x1ddd14u: goto label_1ddd14;
        case 0x1ddd20u: goto label_1ddd20;
        case 0x1ddd34u: goto label_1ddd34;
        case 0x1ddd50u: goto label_1ddd50;
        case 0x1ddd60u: goto label_1ddd60;
        case 0x1ddd78u: goto label_1ddd78;
        case 0x1ddd90u: goto label_1ddd90;
        case 0x1dddbcu: goto label_1dddbc;
        default: break;
    }

    ctx->pc = 0x1dd6a0u;

    // 0x1dd6a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1dd6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1dd6a4: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1dd6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1dd6a8: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x1dd6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x1dd6ac: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1dd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1dd6b0: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x1dd6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x1dd6b4: 0x2470b928  addiu       $s0, $v1, -0x46D8
    ctx->pc = 0x1dd6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949160));
    // 0x1dd6b8: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x1dd6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x1dd6bc: 0x3c0601c0  lui         $a2, 0x1C0
    ctx->pc = 0x1dd6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)448 << 16));
    // 0x1dd6c0: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x1dd6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x1dd6c4: 0x2453b924  addiu       $s3, $v0, -0x46DC
    ctx->pc = 0x1dd6c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949156));
    // 0x1dd6c8: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x1dd6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x1dd6cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dd6ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6d0: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x1dd6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x1dd6d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1dd6d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6d8: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x1dd6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x1dd6dc: 0x3c0501c0  lui         $a1, 0x1C0
    ctx->pc = 0x1dd6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
    // 0x1dd6e0: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x1dd6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x1dd6e4: 0x24b1b92c  addiu       $s1, $a1, -0x46D4
    ctx->pc = 0x1dd6e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949164));
    // 0x1dd6e8: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x1dd6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x1dd6ec: 0x24d2b930  addiu       $s2, $a2, -0x46D0
    ctx->pc = 0x1dd6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949168));
    // 0x1dd6f0: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x1dd6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x1dd6f4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dd6f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6f8: 0x3c0901c0  lui         $t1, 0x1C0
    ctx->pc = 0x1dd6f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)448 << 16));
    // 0x1dd6fc: 0x2529b940  addiu       $t1, $t1, -0x46C0
    ctx->pc = 0x1dd6fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949184));
    // 0x1dd700: 0x3c0a01c0  lui         $t2, 0x1C0
    ctx->pc = 0x1dd700u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)448 << 16));
    // 0x1dd704: 0x254ab93c  addiu       $t2, $t2, -0x46C4
    ctx->pc = 0x1dd704u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294949180));
    // 0x1dd708: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1dd708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1dd70c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dd70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd710: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x1dd710u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1dd714: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dd714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd718: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1dd718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1dd71c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dd71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd720: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd724: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1dd724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1dd728: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x1dd728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x1dd72c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1dd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1dd730: 0xc0773b6  jal         func_1DCED8
    ctx->pc = 0x1DD730u;
    SET_GPR_U32(ctx, 31, 0x1DD738u);
    ctx->pc = 0x1DD734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD730u;
            // 0x1dd734: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCED8u;
    if (runtime->hasFunction(0x1DCED8u)) {
        auto targetFn = runtime->lookupFunction(0x1DCED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD738u; }
        if (ctx->pc != 0x1DD738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCED8_0x1dced8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD738u; }
        if (ctx->pc != 0x1DD738u) { return; }
    }
    ctx->pc = 0x1DD738u;
label_1dd738:
    // 0x1dd738: 0x3c0501c0  lui         $a1, 0x1C0
    ctx->pc = 0x1dd738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
    // 0x1dd73c: 0x3c0601c0  lui         $a2, 0x1C0
    ctx->pc = 0x1dd73cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)448 << 16));
    // 0x1dd740: 0x24a5b934  addiu       $a1, $a1, -0x46CC
    ctx->pc = 0x1dd740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949172));
    // 0x1dd744: 0x24c6b938  addiu       $a2, $a2, -0x46C8
    ctx->pc = 0x1dd744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949176));
    // 0x1dd748: 0xc077404  jal         func_1DD010
    ctx->pc = 0x1DD748u;
    SET_GPR_U32(ctx, 31, 0x1DD750u);
    ctx->pc = 0x1DD74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD748u;
            // 0x1dd74c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD010u;
    if (runtime->hasFunction(0x1DD010u)) {
        auto targetFn = runtime->lookupFunction(0x1DD010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD750u; }
        if (ctx->pc != 0x1DD750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD010_0x1dd010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD750u; }
        if (ctx->pc != 0x1DD750u) { return; }
    }
    ctx->pc = 0x1DD750u;
label_1dd750:
    // 0x1dd750: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dd750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd754: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1dd754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dd758: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x1dd758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1dd75c: 0xc077458  jal         func_1DD160
    ctx->pc = 0x1DD75Cu;
    SET_GPR_U32(ctx, 31, 0x1DD764u);
    ctx->pc = 0x1DD760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD75Cu;
            // 0x1dd760: 0x27a700a8  addiu       $a3, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD160u;
    if (runtime->hasFunction(0x1DD160u)) {
        auto targetFn = runtime->lookupFunction(0x1DD160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD764u; }
        if (ctx->pc != 0x1DD764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD160_0x1dd160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD764u; }
        if (ctx->pc != 0x1DD764u) { return; }
    }
    ctx->pc = 0x1DD764u;
label_1dd764:
    // 0x1dd764: 0xc077464  jal         func_1DD190
    ctx->pc = 0x1DD764u;
    SET_GPR_U32(ctx, 31, 0x1DD76Cu);
    ctx->pc = 0x1DD190u;
    if (runtime->hasFunction(0x1DD190u)) {
        auto targetFn = runtime->lookupFunction(0x1DD190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD76Cu; }
        if (ctx->pc != 0x1DD76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD190_0x1dd190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD76Cu; }
        if (ctx->pc != 0x1DD76Cu) { return; }
    }
    ctx->pc = 0x1DD76Cu;
label_1dd76c:
    // 0x1dd76c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1dd76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x1dd770: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd774: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1dd774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dd778: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1dd778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dd77c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1dd77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dd780: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1dd780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dd784: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1dd784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dd788: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD788u;
    SET_GPR_U32(ctx, 31, 0x1DD790u);
    ctx->pc = 0x1DD78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD788u;
            // 0x1dd78c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD790u; }
        if (ctx->pc != 0x1DD790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD790u; }
        if (ctx->pc != 0x1DD790u) { return; }
    }
    ctx->pc = 0x1DD790u;
label_1dd790:
    // 0x1dd790: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd794: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1dd794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1dd798: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1dd798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dd79c: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD79Cu;
    SET_GPR_U32(ctx, 31, 0x1DD7A4u);
    ctx->pc = 0x1DD7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD79Cu;
            // 0x1dd7a0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7A4u; }
        if (ctx->pc != 0x1DD7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7A4u; }
        if (ctx->pc != 0x1DD7A4u) { return; }
    }
    ctx->pc = 0x1DD7A4u;
label_1dd7a4:
    // 0x1dd7a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7a8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1dd7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dd7ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1dd7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7b0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1dd7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7b4: 0xc07750a  jal         func_1DD428
    ctx->pc = 0x1DD7B4u;
    SET_GPR_U32(ctx, 31, 0x1DD7BCu);
    ctx->pc = 0x1DD7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7B4u;
            // 0x1dd7b8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD428u;
    if (runtime->hasFunction(0x1DD428u)) {
        auto targetFn = runtime->lookupFunction(0x1DD428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7BCu; }
        if (ctx->pc != 0x1DD7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD428_0x1dd428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7BCu; }
        if (ctx->pc != 0x1DD7BCu) { return; }
    }
    ctx->pc = 0x1DD7BCu;
label_1dd7bc:
    // 0x1dd7bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7c0: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1dd7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dd7c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1dd7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7c8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1dd7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7cc: 0xc07754e  jal         func_1DD538
    ctx->pc = 0x1DD7CCu;
    SET_GPR_U32(ctx, 31, 0x1DD7D4u);
    ctx->pc = 0x1DD7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7CCu;
            // 0x1dd7d0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD538u;
    if (runtime->hasFunction(0x1DD538u)) {
        auto targetFn = runtime->lookupFunction(0x1DD538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7D4u; }
        if (ctx->pc != 0x1DD7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD538_0x1dd538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7D4u; }
        if (ctx->pc != 0x1DD7D4u) { return; }
    }
    ctx->pc = 0x1DD7D4u;
label_1dd7d4:
    // 0x1dd7d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1dd7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7d8: 0xc07777e  jal         func_1DDDF8
    ctx->pc = 0x1DD7D8u;
    SET_GPR_U32(ctx, 31, 0x1DD7E0u);
    ctx->pc = 0x1DD7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7D8u;
            // 0x1dd7dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDDF8u;
    if (runtime->hasFunction(0x1DDDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1DDDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7E0u; }
        if (ctx->pc != 0x1DD7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDDF8_0x1dddf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7E0u; }
        if (ctx->pc != 0x1DD7E0u) { return; }
    }
    ctx->pc = 0x1DD7E0u;
label_1dd7e0:
    // 0x1dd7e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd7e4: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DD7E4u;
    {
        const bool branch_taken_0x1dd7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd7e4) {
            ctx->pc = 0x1DD7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7E4u;
            // 0x1dd7e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD820u;
            goto label_1dd820;
        }
    }
    ctx->pc = 0x1DD7ECu;
    // 0x1dd7ec: 0x3c0801c0  lui         $t0, 0x1C0
    ctx->pc = 0x1dd7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)448 << 16));
    // 0x1dd7f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7f4: 0x2508b940  addiu       $t0, $t0, -0x46C0
    ctx->pc = 0x1dd7f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949184));
    // 0x1dd7f8: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD7F8u;
    SET_GPR_U32(ctx, 31, 0x1DD800u);
    ctx->pc = 0x1DD7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7F8u;
            // 0x1dd7fc: 0x8d050000  lw          $a1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD800u; }
        if (ctx->pc != 0x1DD800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD800u; }
        if (ctx->pc != 0x1DD800u) { return; }
    }
    ctx->pc = 0x1DD800u;
label_1dd800:
    // 0x1dd800: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd804: 0x3c0901c0  lui         $t1, 0x1C0
    ctx->pc = 0x1dd804u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)448 << 16));
    // 0x1dd808: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd80c: 0x2529b93c  addiu       $t1, $t1, -0x46C4
    ctx->pc = 0x1dd80cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949180));
    // 0x1dd810: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD810u;
    SET_GPR_U32(ctx, 31, 0x1DD818u);
    ctx->pc = 0x1DD814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD810u;
            // 0x1dd814: 0x8d250000  lw          $a1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD818u; }
        if (ctx->pc != 0x1DD818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD818u; }
        if (ctx->pc != 0x1DD818u) { return; }
    }
    ctx->pc = 0x1DD818u;
label_1dd818:
    // 0x1dd818: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD818u;
    {
        const bool branch_taken_0x1dd818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD818u;
            // 0x1dd81c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd818) {
            ctx->pc = 0x1DD824u;
            goto label_1dd824;
        }
    }
    ctx->pc = 0x1DD820u;
label_1dd820:
    // 0x1dd820: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dd820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd824:
    // 0x1dd824: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1dd824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1dd828: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD828u;
    SET_GPR_U32(ctx, 31, 0x1DD830u);
    ctx->pc = 0x1DD82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD828u;
            // 0x1dd82c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD830u; }
        if (ctx->pc != 0x1DD830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD830u; }
        if (ctx->pc != 0x1DD830u) { return; }
    }
    ctx->pc = 0x1DD830u;
label_1dd830:
    // 0x1dd830: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd834: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1dd834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dd838: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD838u;
    SET_GPR_U32(ctx, 31, 0x1DD840u);
    ctx->pc = 0x1DD83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD838u;
            // 0x1dd83c: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD840u; }
        if (ctx->pc != 0x1DD840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD840u; }
        if (ctx->pc != 0x1DD840u) { return; }
    }
    ctx->pc = 0x1DD840u;
label_1dd840:
    // 0x1dd840: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd844: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x1dd844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1dd848: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD848u;
    SET_GPR_U32(ctx, 31, 0x1DD850u);
    ctx->pc = 0x1DD84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD848u;
            // 0x1dd84c: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD850u; }
        if (ctx->pc != 0x1DD850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD850u; }
        if (ctx->pc != 0x1DD850u) { return; }
    }
    ctx->pc = 0x1DD850u;
label_1dd850:
    // 0x1dd850: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd854: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1dd854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dd858: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD858u;
    SET_GPR_U32(ctx, 31, 0x1DD860u);
    ctx->pc = 0x1DD85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD858u;
            // 0x1dd85c: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD860u; }
        if (ctx->pc != 0x1DD860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD860u; }
        if (ctx->pc != 0x1DD860u) { return; }
    }
    ctx->pc = 0x1DD860u;
label_1dd860:
    // 0x1dd860: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd864: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x1dd864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1dd868: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DD868u;
    SET_GPR_U32(ctx, 31, 0x1DD870u);
    ctx->pc = 0x1DD86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD868u;
            // 0x1dd86c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD870u; }
        if (ctx->pc != 0x1DD870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD870u; }
        if (ctx->pc != 0x1DD870u) { return; }
    }
    ctx->pc = 0x1DD870u;
label_1dd870:
    // 0x1dd870: 0x8faa00bc  lw          $t2, 0xBC($sp)
    ctx->pc = 0x1dd870u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1dd874: 0x11400013  beqz        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DD874u;
    {
        const bool branch_taken_0x1dd874 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD874u;
            // 0x1dd878: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd874) {
            ctx->pc = 0x1DD8C4u;
            goto label_1dd8c4;
        }
    }
    ctx->pc = 0x1DD87Cu;
    // 0x1dd87c: 0x12e00012  beqz        $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DD87Cu;
    {
        const bool branch_taken_0x1dd87c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD87Cu;
            // 0x1dd880: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd87c) {
            ctx->pc = 0x1DD8C8u;
            goto label_1dd8c8;
        }
    }
    ctx->pc = 0x1DD884u;
    // 0x1dd884: 0x17c0001d  bnez        $fp, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DD884u;
    {
        const bool branch_taken_0x1dd884 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD884u;
            // 0x1dd888: 0x2484c478  addiu       $a0, $a0, -0x3B88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd884) {
            ctx->pc = 0x1DD8FCu;
            goto label_1dd8fc;
        }
    }
    ctx->pc = 0x1DD88Cu;
    // 0x1dd88c: 0x5660000e  bnel        $s3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1DD88Cu;
    {
        const bool branch_taken_0x1dd88c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd88c) {
            ctx->pc = 0x1DD890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD88Cu;
            // 0x1dd890: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD8C8u;
            goto label_1dd8c8;
        }
    }
    ctx->pc = 0x1DD894u;
    // 0x1dd894: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1dd894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1dd898: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DD898u;
    {
        const bool branch_taken_0x1dd898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD898u;
            // 0x1dd89c: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd898) {
            ctx->pc = 0x1DD8C4u;
            goto label_1dd8c4;
        }
    }
    ctx->pc = 0x1DD8A0u;
    // 0x1dd8a0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD8A0u;
    {
        const bool branch_taken_0x1dd8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8A0u;
            // 0x1dd8a4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8a0) {
            ctx->pc = 0x1DD8C8u;
            goto label_1dd8c8;
        }
    }
    ctx->pc = 0x1DD8A8u;
    // 0x1dd8a8: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x1dd8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1dd8ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD8ACu;
    {
        const bool branch_taken_0x1dd8ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8ACu;
            // 0x1dd8b0: 0x8fa500d8  lw          $a1, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8ac) {
            ctx->pc = 0x1DD8C4u;
            goto label_1dd8c4;
        }
    }
    ctx->pc = 0x1DD8B4u;
    // 0x1dd8b4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD8B4u;
    {
        const bool branch_taken_0x1dd8b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8b4) {
            ctx->pc = 0x1DD8B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8B4u;
            // 0x1dd8b8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD8C8u;
            goto label_1dd8c8;
        }
    }
    ctx->pc = 0x1DD8BCu;
    // 0x1dd8bc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD8BCu;
    {
        const bool branch_taken_0x1dd8bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8bc) {
            ctx->pc = 0x1DD8D0u;
            goto label_1dd8d0;
        }
    }
    ctx->pc = 0x1DD8C4u;
label_1dd8c4:
    // 0x1dd8c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dd8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1dd8c8:
    // 0x1dd8c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DD8C8u;
    {
        const bool branch_taken_0x1dd8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8C8u;
            // 0x1dd8cc: 0x2484c478  addiu       $a0, $a0, -0x3B88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8c8) {
            ctx->pc = 0x1DD8FCu;
            goto label_1dd8fc;
        }
    }
    ctx->pc = 0x1DD8D0u;
label_1dd8d0:
    // 0x1dd8d0: 0xc07777e  jal         func_1DDDF8
    ctx->pc = 0x1DD8D0u;
    SET_GPR_U32(ctx, 31, 0x1DD8D8u);
    ctx->pc = 0x1DD8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8D0u;
            // 0x1dd8d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDDF8u;
    if (runtime->hasFunction(0x1DDDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1DDDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8D8u; }
        if (ctx->pc != 0x1DD8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDDF8_0x1dddf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8D8u; }
        if (ctx->pc != 0x1DD8D8u) { return; }
    }
    ctx->pc = 0x1DD8D8u;
label_1dd8d8:
    // 0x1dd8d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dd8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd8dc: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DD8DCu;
    {
        const bool branch_taken_0x1dd8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd8dc) {
            ctx->pc = 0x1DD8E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8DCu;
            // 0x1dd8e0: 0x2402ffc0  addiu       $v0, $zero, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD918u;
            goto label_1dd918;
        }
    }
    ctx->pc = 0x1DD8E4u;
    // 0x1dd8e4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD8E4u;
    {
        const bool branch_taken_0x1dd8e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8E4u;
            // 0x1dd8e8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8e4) {
            ctx->pc = 0x1DD8F8u;
            goto label_1dd8f8;
        }
    }
    ctx->pc = 0x1DD8ECu;
    // 0x1dd8ec: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DD8ECu;
    {
        const bool branch_taken_0x1dd8ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8ECu;
            // 0x1dd8f0: 0x2402ffc0  addiu       $v0, $zero, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8ec) {
            ctx->pc = 0x1DD918u;
            goto label_1dd918;
        }
    }
    ctx->pc = 0x1DD8F4u;
    // 0x1dd8f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dd8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1dd8f8:
    // 0x1dd8f8: 0x2484c498  addiu       $a0, $a0, -0x3B68
    ctx->pc = 0x1dd8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952088));
label_1dd8fc:
    // 0x1dd8fc: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DD8FCu;
    SET_GPR_U32(ctx, 31, 0x1DD904u);
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD904u; }
        if (ctx->pc != 0x1DD904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD904u; }
        if (ctx->pc != 0x1DD904u) { return; }
    }
    ctx->pc = 0x1DD904u;
label_1dd904:
    // 0x1dd904: 0xc077b9e  jal         func_1DEE78
    ctx->pc = 0x1DD904u;
    SET_GPR_U32(ctx, 31, 0x1DD90Cu);
    ctx->pc = 0x1DD908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD904u;
            // 0x1dd908: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE78u;
    if (runtime->hasFunction(0x1DEE78u)) {
        auto targetFn = runtime->lookupFunction(0x1DEE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD90Cu; }
        if (ctx->pc != 0x1DD90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEE78_0x1dee78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD90Cu; }
        if (ctx->pc != 0x1DD90Cu) { return; }
    }
    ctx->pc = 0x1DD90Cu;
label_1dd90c:
    // 0x1dd90c: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x1DD90Cu;
    {
        const bool branch_taken_0x1dd90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD90Cu;
            // 0x1dd910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd90c) {
            ctx->pc = 0x1DDDC8u;
            goto label_1dddc8;
        }
    }
    ctx->pc = 0x1DD914u;
    // 0x1dd914: 0x0  nop
    ctx->pc = 0x1dd914u;
    // NOP
label_1dd918:
    // 0x1dd918: 0x26e3003f  addiu       $v1, $s7, 0x3F
    ctx->pc = 0x1dd918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 63));
    // 0x1dd91c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1dd91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dd920: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dd920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd924: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x1dd924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x1dd928: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1dd928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd92c: 0x27a700b4  addiu       $a3, $sp, 0xB4
    ctx->pc = 0x1dd92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x1dd930: 0x27a800b8  addiu       $t0, $sp, 0xB8
    ctx->pc = 0x1dd930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1dd934: 0x3c1001c0  lui         $s0, 0x1C0
    ctx->pc = 0x1dd934u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)448 << 16));
    // 0x1dd938: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1dd938u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1dd93c: 0xc0773f0  jal         func_1DCFC0
    ctx->pc = 0x1DD93Cu;
    SET_GPR_U32(ctx, 31, 0x1DD944u);
    ctx->pc = 0x1DD940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD93Cu;
            // 0x1dd940: 0xae03b920  sw          $v1, -0x46E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294949152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCFC0u;
    if (runtime->hasFunction(0x1DCFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD944u; }
        if (ctx->pc != 0x1DD944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCFC0_0x1dcfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD944u; }
        if (ctx->pc != 0x1DD944u) { return; }
    }
    ctx->pc = 0x1DD944u;
label_1dd944:
    // 0x1dd944: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1dd944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd948: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x1dd948u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
    // 0x1dd94c: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x1dd94cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1dd950: 0x2662ebc0  addiu       $v0, $s3, -0x1440
    ctx->pc = 0x1dd950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962112));
    // 0x1dd954: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x1dd954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dd958: 0x26e4ebe8  addiu       $a0, $s7, -0x1418
    ctx->pc = 0x1dd958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962152));
    // 0x1dd95c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1dd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dd960: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1dd960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd964: 0xac910018  sw          $s1, 0x18($a0)
    ctx->pc = 0x1dd964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 17));
    // 0x1dd968: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1dd968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1dd96c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1dd96cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1dd970: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1dd970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1dd974: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x1dd974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
    // 0x1dd978: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1dd978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1dd97c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x1dd97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x1dd980: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x1dd980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x1dd984: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1dd984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1dd988: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1dd988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1dd98c: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x1dd98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dd990: 0x12c80041  beq         $s6, $t0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1DD990u;
    {
        const bool branch_taken_0x1dd990 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 8));
        ctx->pc = 0x1DD994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD990u;
            // 0x1dd994: 0xac46001c  sw          $a2, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd990) {
            ctx->pc = 0x1DDA98u;
            goto label_1dda98;
        }
    }
    ctx->pc = 0x1DD998u;
    // 0x1dd998: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x1dd998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1dd99c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD99Cu;
    {
        const bool branch_taken_0x1dd99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD99Cu;
            // 0x1dd9a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd99c) {
            ctx->pc = 0x1DD9B8u;
            goto label_1dd9b8;
        }
    }
    ctx->pc = 0x1DD9A4u;
    // 0x1dd9a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd9a8: 0x12c20007  beq         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD9A8u;
    {
        const bool branch_taken_0x1dd9a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9A8u;
            // 0x1dd9ac: 0x3c050039  lui         $a1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9a8) {
            ctx->pc = 0x1DD9C8u;
            goto label_1dd9c8;
        }
    }
    ctx->pc = 0x1DD9B0u;
    // 0x1dd9b0: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1DD9B0u;
    {
        const bool branch_taken_0x1dd9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9B0u;
            // 0x1dd9b4: 0x3c0301c0  lui         $v1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9b0) {
            ctx->pc = 0x1DDC58u;
            goto label_1ddc58;
        }
    }
    ctx->pc = 0x1DD9B8u;
label_1dd9b8:
    // 0x1dd9b8: 0x12c2006f  beq         $s6, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1DD9B8u;
    {
        const bool branch_taken_0x1dd9b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9B8u;
            // 0x1dd9bc: 0x3c050039  lui         $a1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9b8) {
            ctx->pc = 0x1DDB78u;
            goto label_1ddb78;
        }
    }
    ctx->pc = 0x1DD9C0u;
    // 0x1dd9c0: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x1DD9C0u;
    {
        const bool branch_taken_0x1dd9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9C0u;
            // 0x1dd9c4: 0x3c0301c0  lui         $v1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9c0) {
            ctx->pc = 0x1DDC58u;
            goto label_1ddc58;
        }
    }
    ctx->pc = 0x1DD9C8u;
label_1dd9c8:
    // 0x1dd9c8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dd9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dd9cc: 0x2463eae8  addiu       $v1, $v1, -0x1518
    ctx->pc = 0x1dd9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961896));
    // 0x1dd9d0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1dd9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1dd9d4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DD9D4u;
    {
        const bool branch_taken_0x1dd9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9D4u;
            // 0x1dd9d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9d4) {
            ctx->pc = 0x1DDA40u;
            goto label_1dda40;
        }
    }
    ctx->pc = 0x1DD9DCu;
    // 0x1dd9dc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1dd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1dd9e0:
    // 0x1dd9e0: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x1dd9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1dd9e4: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x1dd9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1dd9e8: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x1dd9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1dd9ec: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x1dd9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1dd9f0: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x1dd9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1dd9f4: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x1dd9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1dd9f8: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x1dd9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1dd9fc: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x1dd9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1dda00: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x1dda00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dda04: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x1dda04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dda08: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x1dda08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dda0c: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x1dda0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dda10: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x1dda10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dda14: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x1dda14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dda18: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x1dda18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dda1c: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x1dda1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dda20: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1dda20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1dda24: 0x0  nop
    ctx->pc = 0x1dda24u;
    // NOP
    // 0x1dda28: 0x0  nop
    ctx->pc = 0x1dda28u;
    // NOP
    // 0x1dda2c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DDA2Cu;
    {
        const bool branch_taken_0x1dda2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DDA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA2Cu;
            // 0x1dda30: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda2c) {
            ctx->pc = 0x1DD9E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dd9e0;
        }
    }
    ctx->pc = 0x1DDA34u;
    // 0x1dda34: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DDA34u;
    {
        const bool branch_taken_0x1dda34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA34u;
            // 0x1dda38: 0x8e02b920  lw          $v0, -0x46E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda34) {
            ctx->pc = 0x1DDA7Cu;
            goto label_1dda7c;
        }
    }
    ctx->pc = 0x1DDA3Cu;
    // 0x1dda3c: 0x0  nop
    ctx->pc = 0x1dda3cu;
    // NOP
label_1dda40:
    // 0x1dda40: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1dda40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1dda44:
    // 0x1dda44: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x1dda44u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dda48: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1dda48u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1dda4c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1dda4cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dda50: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1dda50u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dda54: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1dda54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1dda58: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1dda58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1dda5c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1dda5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1dda60: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1dda60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1dda64: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1dda64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1dda68: 0x0  nop
    ctx->pc = 0x1dda68u;
    // NOP
    // 0x1dda6c: 0x0  nop
    ctx->pc = 0x1dda6cu;
    // NOP
    // 0x1dda70: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DDA70u;
    {
        const bool branch_taken_0x1dda70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DDA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA70u;
            // 0x1dda74: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda70) {
            ctx->pc = 0x1DDA44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dda44;
        }
    }
    ctx->pc = 0x1DDA78u;
    // 0x1dda78: 0x8e02b920  lw          $v0, -0x46E0($s0)
    ctx->pc = 0x1dda78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949152)));
label_1dda7c:
    // 0x1dda7c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1dda7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1dda80: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x1dda80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dda84: 0x3c0801c0  lui         $t0, 0x1C0
    ctx->pc = 0x1dda84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)448 << 16));
    // 0x1dda88: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1dda88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1dda8c: 0xae8203c8  sw          $v0, 0x3C8($s4)
    ctx->pc = 0x1dda8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 968), GPR_U32(ctx, 2));
    // 0x1dda90: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1DDA90u;
    {
        const bool branch_taken_0x1dda90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA90u;
            // 0x1dda94: 0x8d03b924  lw          $v1, -0x46DC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294949156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda90) {
            ctx->pc = 0x1DDC44u;
            goto label_1ddc44;
        }
    }
    ctx->pc = 0x1DDA98u;
label_1dda98:
    // 0x1dda98: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dda98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dda9c: 0x2463eb30  addiu       $v1, $v1, -0x14D0
    ctx->pc = 0x1dda9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961968));
    // 0x1ddaa0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1ddaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1ddaa4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DDAA4u;
    {
        const bool branch_taken_0x1ddaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAA4u;
            // 0x1ddaa8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddaa4) {
            ctx->pc = 0x1DDB10u;
            goto label_1ddb10;
        }
    }
    ctx->pc = 0x1DDAACu;
    // 0x1ddaac: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1ddaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1ddab0:
    // 0x1ddab0: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x1ddab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1ddab4: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x1ddab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1ddab8: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x1ddab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1ddabc: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x1ddabcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1ddac0: 0x68640017  ldl         $a0, 0x17($v1)
    ctx->pc = 0x1ddac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ddac4: 0x6c640010  ldr         $a0, 0x10($v1)
    ctx->pc = 0x1ddac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ddac8: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x1ddac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ddacc: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x1ddaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ddad0: 0xb0a90007  sdl         $t1, 0x7($a1)
    ctx->pc = 0x1ddad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddad4: 0xb4a90000  sdr         $t1, 0x0($a1)
    ctx->pc = 0x1ddad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddad8: 0xb0aa000f  sdl         $t2, 0xF($a1)
    ctx->pc = 0x1ddad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddadc: 0xb4aa0008  sdr         $t2, 0x8($a1)
    ctx->pc = 0x1ddadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddae0: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x1ddae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddae4: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x1ddae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddae8: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x1ddae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddaec: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x1ddaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddaf0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ddaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1ddaf4: 0x0  nop
    ctx->pc = 0x1ddaf4u;
    // NOP
    // 0x1ddaf8: 0x0  nop
    ctx->pc = 0x1ddaf8u;
    // NOP
    // 0x1ddafc: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DDAFCu;
    {
        const bool branch_taken_0x1ddafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DDB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAFCu;
            // 0x1ddb00: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddafc) {
            ctx->pc = 0x1DDAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ddab0;
        }
    }
    ctx->pc = 0x1DDB04u;
    // 0x1ddb04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DDB04u;
    {
        const bool branch_taken_0x1ddb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB04u;
            // 0x1ddb08: 0x8e02b920  lw          $v0, -0x46E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb04) {
            ctx->pc = 0x1DDB4Cu;
            goto label_1ddb4c;
        }
    }
    ctx->pc = 0x1DDB0Cu;
    // 0x1ddb0c: 0x0  nop
    ctx->pc = 0x1ddb0cu;
    // NOP
label_1ddb10:
    // 0x1ddb10: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1ddb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1ddb14:
    // 0x1ddb14: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x1ddb14u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddb18: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x1ddb18u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ddb1c: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x1ddb1cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ddb20: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x1ddb20u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ddb24: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x1ddb24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x1ddb28: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x1ddb28u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x1ddb2c: 0xfca90010  sd          $t1, 0x10($a1)
    ctx->pc = 0x1ddb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 9));
    // 0x1ddb30: 0xfcaa0018  sd          $t2, 0x18($a1)
    ctx->pc = 0x1ddb30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 10));
    // 0x1ddb34: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ddb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1ddb38: 0x0  nop
    ctx->pc = 0x1ddb38u;
    // NOP
    // 0x1ddb3c: 0x0  nop
    ctx->pc = 0x1ddb3cu;
    // NOP
    // 0x1ddb40: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DDB40u;
    {
        const bool branch_taken_0x1ddb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DDB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB40u;
            // 0x1ddb44: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb40) {
            ctx->pc = 0x1DDB14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ddb14;
        }
    }
    ctx->pc = 0x1DDB48u;
    // 0x1ddb48: 0x8e02b920  lw          $v0, -0x46E0($s0)
    ctx->pc = 0x1ddb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949152)));
label_1ddb4c:
    // 0x1ddb4c: 0x3c0a01c0  lui         $t2, 0x1C0
    ctx->pc = 0x1ddb4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)448 << 16));
    // 0x1ddb50: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1ddb50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddb54: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1ddb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1ddb58: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1ddb58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1ddb5c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1ddb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1ddb60: 0xae8203c8  sw          $v0, 0x3C8($s4)
    ctx->pc = 0x1ddb60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 968), GPR_U32(ctx, 2));
    // 0x1ddb64: 0x8d43b924  lw          $v1, -0x46DC($t2)
    ctx->pc = 0x1ddb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294949156)));
    // 0x1ddb68: 0xae8403d0  sw          $a0, 0x3D0($s4)
    ctx->pc = 0x1ddb68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 976), GPR_U32(ctx, 4));
    // 0x1ddb6c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1DDB6Cu;
    {
        const bool branch_taken_0x1ddb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB6Cu;
            // 0x1ddb70: 0x2463f800  addiu       $v1, $v1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb6c) {
            ctx->pc = 0x1DDC50u;
            goto label_1ddc50;
        }
    }
    ctx->pc = 0x1DDB74u;
    // 0x1ddb74: 0x0  nop
    ctx->pc = 0x1ddb74u;
    // NOP
label_1ddb78:
    // 0x1ddb78: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ddb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ddb7c: 0x2463eb78  addiu       $v1, $v1, -0x1488
    ctx->pc = 0x1ddb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962040));
    // 0x1ddb80: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1ddb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1ddb84: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DDB84u;
    {
        const bool branch_taken_0x1ddb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB84u;
            // 0x1ddb88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb84) {
            ctx->pc = 0x1DDBF0u;
            goto label_1ddbf0;
        }
    }
    ctx->pc = 0x1DDB8Cu;
    // 0x1ddb8c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1ddb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1ddb90:
    // 0x1ddb90: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1ddb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ddb94: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1ddb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ddb98: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1ddb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ddb9c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1ddb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ddba0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x1ddba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ddba4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x1ddba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ddba8: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x1ddba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ddbac: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x1ddbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ddbb0: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1ddbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddbb4: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1ddbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddbb8: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1ddbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddbbc: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1ddbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddbc0: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1ddbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddbc4: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1ddbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddbc8: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1ddbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddbcc: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1ddbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddbd0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ddbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1ddbd4: 0x0  nop
    ctx->pc = 0x1ddbd4u;
    // NOP
    // 0x1ddbd8: 0x0  nop
    ctx->pc = 0x1ddbd8u;
    // NOP
    // 0x1ddbdc: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DDBDCu;
    {
        const bool branch_taken_0x1ddbdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DDBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBDCu;
            // 0x1ddbe0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbdc) {
            ctx->pc = 0x1DDB90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ddb90;
        }
    }
    ctx->pc = 0x1DDBE4u;
    // 0x1ddbe4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DDBE4u;
    {
        const bool branch_taken_0x1ddbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBE4u;
            // 0x1ddbe8: 0x8e02b920  lw          $v0, -0x46E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbe4) {
            ctx->pc = 0x1DDC2Cu;
            goto label_1ddc2c;
        }
    }
    ctx->pc = 0x1DDBECu;
    // 0x1ddbec: 0x0  nop
    ctx->pc = 0x1ddbecu;
    // NOP
label_1ddbf0:
    // 0x1ddbf0: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1ddbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1ddbf4:
    // 0x1ddbf4: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x1ddbf4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddbf8: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x1ddbf8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ddbfc: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x1ddbfcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ddc00: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x1ddc00u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ddc04: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x1ddc04u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x1ddc08: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x1ddc08u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x1ddc0c: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1ddc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1ddc10: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x1ddc10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x1ddc14: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ddc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1ddc18: 0x0  nop
    ctx->pc = 0x1ddc18u;
    // NOP
    // 0x1ddc1c: 0x0  nop
    ctx->pc = 0x1ddc1cu;
    // NOP
    // 0x1ddc20: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DDC20u;
    {
        const bool branch_taken_0x1ddc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DDC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC20u;
            // 0x1ddc24: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc20) {
            ctx->pc = 0x1DDBF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ddbf4;
        }
    }
    ctx->pc = 0x1DDC28u;
    // 0x1ddc28: 0x8e02b920  lw          $v0, -0x46E0($s0)
    ctx->pc = 0x1ddc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949152)));
label_1ddc2c:
    // 0x1ddc2c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1ddc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1ddc30: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1ddc30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddc34: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x1ddc34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1ddc38: 0xae8203c8  sw          $v0, 0x3C8($s4)
    ctx->pc = 0x1ddc38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 968), GPR_U32(ctx, 2));
    // 0x1ddc3c: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1ddc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1ddc40: 0x8c43b924  lw          $v1, -0x46DC($v0)
    ctx->pc = 0x1ddc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949156)));
label_1ddc44:
    // 0x1ddc44: 0x8ca2ec04  lw          $v0, -0x13FC($a1)
    ctx->pc = 0x1ddc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962180)));
    // 0x1ddc48: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ddc48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ddc4c: 0xae8203d0  sw          $v0, 0x3D0($s4)
    ctx->pc = 0x1ddc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 976), GPR_U32(ctx, 2));
label_1ddc50:
    // 0x1ddc50: 0xae8303cc  sw          $v1, 0x3CC($s4)
    ctx->pc = 0x1ddc50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 972), GPR_U32(ctx, 3));
    // 0x1ddc54: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1ddc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
label_1ddc58:
    // 0x1ddc58: 0x2470b928  addiu       $s0, $v1, -0x46D8
    ctx->pc = 0x1ddc58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949160));
    // 0x1ddc5c: 0x8ca3ec04  lw          $v1, -0x13FC($a1)
    ctx->pc = 0x1ddc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294962180)));
    // 0x1ddc60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ddc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ddc64: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDC64u;
    {
        const bool branch_taken_0x1ddc64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC64u;
            // 0x1ddc68: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc64) {
            ctx->pc = 0x1DDC84u;
            goto label_1ddc84;
        }
    }
    ctx->pc = 0x1DDC6Cu;
    // 0x1ddc6c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1ddc6cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ddc70: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDC70u;
    {
        const bool branch_taken_0x1ddc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc70) {
            ctx->pc = 0x1DDC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC70u;
            // 0x1ddc74: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDC78u;
            goto label_1ddc78;
        }
    }
    ctx->pc = 0x1DDC78u;
label_1ddc78:
    // 0x1ddc78: 0x1010  mfhi        $v0
    ctx->pc = 0x1ddc78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ddc7c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1ddc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ddc80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ddc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ddc84:
    // 0x1ddc84: 0xc077444  jal         func_1DD110
    ctx->pc = 0x1DDC84u;
    SET_GPR_U32(ctx, 31, 0x1DDC8Cu);
    ctx->pc = 0x1DDC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC84u;
            // 0x1ddc88: 0x8ea40024  lw          $a0, 0x24($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD110u;
    if (runtime->hasFunction(0x1DD110u)) {
        auto targetFn = runtime->lookupFunction(0x1DD110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC8Cu; }
        if (ctx->pc != 0x1DDC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD110_0x1dd110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC8Cu; }
        if (ctx->pc != 0x1DDC8Cu) { return; }
    }
    ctx->pc = 0x1DDC8Cu;
label_1ddc8c:
    // 0x1ddc8c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1ddc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ddc90: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1ddc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ddc94: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x1ddc94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ddc98: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1ddc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1ddc9c: 0x3c0501c0  lui         $a1, 0x1C0
    ctx->pc = 0x1ddc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
    // 0x1ddca0: 0x8c68b92c  lw          $t0, -0x46D4($v1)
    ctx->pc = 0x1ddca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949164)));
    // 0x1ddca4: 0x2664ebc0  addiu       $a0, $s3, -0x1440
    ctx->pc = 0x1ddca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962112));
    // 0x1ddca8: 0x8ca3b930  lw          $v1, -0x46D0($a1)
    ctx->pc = 0x1ddca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294949168)));
    // 0x1ddcac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ddcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddcb0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1ddcb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddcb4: 0x8faa00bc  lw          $t2, 0xBC($sp)
    ctx->pc = 0x1ddcb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1ddcb8: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x1ddcb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ddcbc: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x1ddcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x1ddcc0: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1ddcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x1ddcc4: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x1ddcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x1ddcc8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1ddcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1ddccc: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x1ddcccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1ddcd0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1ddcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ddcd4: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1ddcd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1ddcd8: 0x8faa00cc  lw          $t2, 0xCC($sp)
    ctx->pc = 0x1ddcd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1ddcdc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1ddcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1ddce0: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1ddce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1ddce4: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1ddce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1ddce8: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x1ddce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    // 0x1ddcec: 0xafaa003c  sw          $t2, 0x3C($sp)
    ctx->pc = 0x1ddcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 10));
    // 0x1ddcf0: 0xc07bf00  jal         func_1EFC00
    ctx->pc = 0x1DDCF0u;
    SET_GPR_U32(ctx, 31, 0x1DDCF8u);
    ctx->pc = 0x1DDCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCF0u;
            // 0x1ddcf4: 0xafa90040  sw          $t1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC00u;
    if (runtime->hasFunction(0x1EFC00u)) {
        auto targetFn = runtime->lookupFunction(0x1EFC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCF8u; }
        if (ctx->pc != 0x1DDCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFC00_0x1efc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCF8u; }
        if (ctx->pc != 0x1DDCF8u) { return; }
    }
    ctx->pc = 0x1DDCF8u;
label_1ddcf8:
    // 0x1ddcf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ddcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddcfc: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDCFCu;
    {
        const bool branch_taken_0x1ddcfc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ddcfc) {
            ctx->pc = 0x1DDD0Cu;
            goto label_1ddd0c;
        }
    }
    ctx->pc = 0x1DDD04u;
    // 0x1ddd04: 0xc07a02e  jal         func_1E80B8
    ctx->pc = 0x1DDD04u;
    SET_GPR_U32(ctx, 31, 0x1DDD0Cu);
    ctx->pc = 0x1DDD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD04u;
            // 0x1ddd08: 0x26e4ebe8  addiu       $a0, $s7, -0x1418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E80B8u;
    if (runtime->hasFunction(0x1E80B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E80B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD0Cu; }
        if (ctx->pc != 0x1DDD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E80B8_0x1e80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD0Cu; }
        if (ctx->pc != 0x1DDD0Cu) { return; }
    }
    ctx->pc = 0x1DDD0Cu;
label_1ddd0c:
    // 0x1ddd0c: 0xc07d924  jal         func_1F6490
    ctx->pc = 0x1DDD0Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD14u);
    ctx->pc = 0x1DDD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD0Cu;
            // 0x1ddd10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6490u;
    if (runtime->hasFunction(0x1F6490u)) {
        auto targetFn = runtime->lookupFunction(0x1F6490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD14u; }
        if (ctx->pc != 0x1DDD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6490_0x1f6490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD14u; }
        if (ctx->pc != 0x1DDD14u) { return; }
    }
    ctx->pc = 0x1DDD14u;
label_1ddd14:
    // 0x1ddd14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ddd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd18: 0xc07e170  jal         func_1F85C0
    ctx->pc = 0x1DDD18u;
    SET_GPR_U32(ctx, 31, 0x1DDD20u);
    ctx->pc = 0x1DDD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD18u;
            // 0x1ddd1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F85C0u;
    if (runtime->hasFunction(0x1F85C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F85C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD20u; }
        if (ctx->pc != 0x1DDD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F85C0_0x1f85c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD20u; }
        if (ctx->pc != 0x1DDD20u) { return; }
    }
    ctx->pc = 0x1DDD20u;
label_1ddd20:
    // 0x1ddd20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ddd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd24: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDD24u;
    {
        const bool branch_taken_0x1ddd24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD24u;
            // 0x1ddd28: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd24) {
            ctx->pc = 0x1DDD40u;
            goto label_1ddd40;
        }
    }
    ctx->pc = 0x1DDD2Cu;
    // 0x1ddd2c: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1DDD2Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD34u);
    ctx->pc = 0x1DDD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD2Cu;
            // 0x1ddd30: 0x2404fecf  addiu       $a0, $zero, -0x131 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966991));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0CA0u;
    if (runtime->hasFunction(0x1E0CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD34u; }
        if (ctx->pc != 0x1DDD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0CA0_0x1e0ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD34u; }
        if (ctx->pc != 0x1DDD34u) { return; }
    }
    ctx->pc = 0x1DDD34u;
label_1ddd34:
    // 0x1ddd34: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ddd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ddd38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DDD38u;
    {
        const bool branch_taken_0x1ddd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD38u;
            // 0x1ddd3c: 0x2484c4b8  addiu       $a0, $a0, -0x3B48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd38) {
            ctx->pc = 0x1DDD88u;
            goto label_1ddd88;
        }
    }
    ctx->pc = 0x1DDD40u;
label_1ddd40:
    // 0x1ddd40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ddd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd44: 0x24a50db8  addiu       $a1, $a1, 0xDB8
    ctx->pc = 0x1ddd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3512));
    // 0x1ddd48: 0xc07b5ec  jal         func_1ED7B0
    ctx->pc = 0x1DDD48u;
    SET_GPR_U32(ctx, 31, 0x1DDD50u);
    ctx->pc = 0x1DDD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD48u;
            // 0x1ddd4c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED7B0u;
    if (runtime->hasFunction(0x1ED7B0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD50u; }
        if (ctx->pc != 0x1DDD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED7B0_0x1ed7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD50u; }
        if (ctx->pc != 0x1DDD50u) { return; }
    }
    ctx->pc = 0x1DDD50u;
label_1ddd50:
    // 0x1ddd50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDD50u;
    {
        const bool branch_taken_0x1ddd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD50u;
            // 0x1ddd54: 0x8fa500a4  lw          $a1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd50) {
            ctx->pc = 0x1DDD70u;
            goto label_1ddd70;
        }
    }
    ctx->pc = 0x1DDD58u;
    // 0x1ddd58: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1DDD58u;
    SET_GPR_U32(ctx, 31, 0x1DDD60u);
    ctx->pc = 0x1DDD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD58u;
            // 0x1ddd5c: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0CA0u;
    if (runtime->hasFunction(0x1E0CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD60u; }
        if (ctx->pc != 0x1DDD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0CA0_0x1e0ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD60u; }
        if (ctx->pc != 0x1DDD60u) { return; }
    }
    ctx->pc = 0x1DDD60u;
label_1ddd60:
    // 0x1ddd60: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ddd60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ddd64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DDD64u;
    {
        const bool branch_taken_0x1ddd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD64u;
            // 0x1ddd68: 0x2484c4e8  addiu       $a0, $a0, -0x3B18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd64) {
            ctx->pc = 0x1DDD88u;
            goto label_1ddd88;
        }
    }
    ctx->pc = 0x1DDD6Cu;
    // 0x1ddd6c: 0x0  nop
    ctx->pc = 0x1ddd6cu;
    // NOP
label_1ddd70:
    // 0x1ddd70: 0xc0772f0  jal         func_1DCBC0
    ctx->pc = 0x1DDD70u;
    SET_GPR_U32(ctx, 31, 0x1DDD78u);
    ctx->pc = 0x1DDD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD70u;
            // 0x1ddd74: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD78u; }
        if (ctx->pc != 0x1DDD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD78u; }
        if (ctx->pc != 0x1DDD78u) { return; }
    }
    ctx->pc = 0x1DDD78u;
label_1ddd78:
    // 0x1ddd78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDD78u;
    {
        const bool branch_taken_0x1ddd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD78u;
            // 0x1ddd7c: 0xae8204d4  sw          $v0, 0x4D4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd78) {
            ctx->pc = 0x1DDD98u;
            goto label_1ddd98;
        }
    }
    ctx->pc = 0x1DDD80u;
    // 0x1ddd80: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ddd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ddd84: 0x2484c510  addiu       $a0, $a0, -0x3AF0
    ctx->pc = 0x1ddd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952208));
label_1ddd88:
    // 0x1ddd88: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DDD88u;
    SET_GPR_U32(ctx, 31, 0x1DDD90u);
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD90u; }
        if (ctx->pc != 0x1DDD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD90u; }
        if (ctx->pc != 0x1DDD90u) { return; }
    }
    ctx->pc = 0x1DDD90u;
label_1ddd90:
    // 0x1ddd90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DDD90u;
    {
        const bool branch_taken_0x1ddd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD90u;
            // 0x1ddd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd90) {
            ctx->pc = 0x1DDDC8u;
            goto label_1dddc8;
        }
    }
    ctx->pc = 0x1DDD98u;
label_1ddd98:
    // 0x1ddd98: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ddd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ddd9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ddd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddda0: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x1ddda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1ddda4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1ddda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ddda8: 0xae8203a8  sw          $v0, 0x3A8($s4)
    ctx->pc = 0x1ddda8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 936), GPR_U32(ctx, 2));
    // 0x1dddac: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1dddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1dddb0: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x1dddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1dddb4: 0xc07778c  jal         func_1DDE30
    ctx->pc = 0x1DDDB4u;
    SET_GPR_U32(ctx, 31, 0x1DDDBCu);
    ctx->pc = 0x1DDDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDB4u;
            // 0x1dddb8: 0xae8303ac  sw          $v1, 0x3AC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 940), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDE30u;
    if (runtime->hasFunction(0x1DDE30u)) {
        auto targetFn = runtime->lookupFunction(0x1DDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDBCu; }
        if (ctx->pc != 0x1DDDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDE30_0x1dde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDBCu; }
        if (ctx->pc != 0x1DDDBCu) { return; }
    }
    ctx->pc = 0x1DDDBCu;
label_1dddbc:
    // 0x1dddbc: 0xae8004d8  sw          $zero, 0x4D8($s4)
    ctx->pc = 0x1dddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1240), GPR_U32(ctx, 0));
    // 0x1dddc0: 0xae800508  sw          $zero, 0x508($s4)
    ctx->pc = 0x1dddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1288), GPR_U32(ctx, 0));
    // 0x1dddc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dddc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dddc8:
    // 0x1dddc8: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x1dddc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dddcc: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x1dddccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1dddd0: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x1dddd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dddd4: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x1dddd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dddd8: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x1dddd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ddddc: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x1ddddcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ddde0: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x1ddde0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ddde4: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x1ddde4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1ddde8: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x1ddde8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1dddec: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x1dddecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1dddf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDF0u;
            // 0x1dddf4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DDDF8u;
    ctx->pc = 0x1dddf8u;
}
