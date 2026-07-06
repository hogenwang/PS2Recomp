#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014083C
// Address: 0x14083c - 0x1408f0
void sub_0014083C_0x14083c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014083C_0x14083c");
#endif

    switch (ctx->pc) {
        case 0x140844u: goto label_140844;
        case 0x14084cu: goto label_14084c;
        case 0x140860u: goto label_140860;
        case 0x140868u: goto label_140868;
        case 0x14087cu: goto label_14087c;
        case 0x140884u: goto label_140884;
        case 0x140898u: goto label_140898;
        case 0x1408a0u: goto label_1408a0;
        case 0x1408b4u: goto label_1408b4;
        case 0x1408b8u: goto label_1408b8;
        case 0x1408c4u: goto label_1408c4;
        default: break;
    }

    ctx->pc = 0x14083cu;

    // 0x14083c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x14083Cu;
    SET_GPR_U32(ctx, 31, 0x140844u);
    ctx->pc = 0x140840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14083Cu;
            // 0x140840: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140844u; }
        if (ctx->pc != 0x140844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140844u; }
        if (ctx->pc != 0x140844u) { return; }
    }
    ctx->pc = 0x140844u;
label_140844:
    // 0x140844: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x140844u;
    {
        const bool branch_taken_0x140844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140844) {
            ctx->pc = 0x1408B4u;
            goto label_1408b4;
        }
    }
    ctx->pc = 0x14084Cu;
label_14084c:
    // 0x14084c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14084cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140850: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x140850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x140854: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x140854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x140858: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140858u;
    SET_GPR_U32(ctx, 31, 0x140860u);
    ctx->pc = 0x14085Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140858u;
            // 0x14085c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140860u; }
        if (ctx->pc != 0x140860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140860u; }
        if (ctx->pc != 0x140860u) { return; }
    }
    ctx->pc = 0x140860u;
label_140860:
    // 0x140860: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x140860u;
    {
        const bool branch_taken_0x140860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140860) {
            ctx->pc = 0x1408B4u;
            goto label_1408b4;
        }
    }
    ctx->pc = 0x140868u;
label_140868:
    // 0x140868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14086c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14086cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140870: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x140870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x140874: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140874u;
    SET_GPR_U32(ctx, 31, 0x14087Cu);
    ctx->pc = 0x140878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140874u;
            // 0x140878: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14087Cu; }
        if (ctx->pc != 0x14087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14087Cu; }
        if (ctx->pc != 0x14087Cu) { return; }
    }
    ctx->pc = 0x14087Cu;
label_14087c:
    // 0x14087c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14087Cu;
    {
        const bool branch_taken_0x14087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14087c) {
            ctx->pc = 0x1408B4u;
            goto label_1408b4;
        }
    }
    ctx->pc = 0x140884u;
label_140884:
    // 0x140884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14088c: 0x24060500  addiu       $a2, $zero, 0x500
    ctx->pc = 0x14088cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x140890: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140890u;
    SET_GPR_U32(ctx, 31, 0x140898u);
    ctx->pc = 0x140894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140890u;
            // 0x140894: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140898u; }
        if (ctx->pc != 0x140898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140898u; }
        if (ctx->pc != 0x140898u) { return; }
    }
    ctx->pc = 0x140898u;
label_140898:
    // 0x140898: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x140898u;
    {
        const bool branch_taken_0x140898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140898) {
            ctx->pc = 0x1408B4u;
            goto label_1408b4;
        }
    }
    ctx->pc = 0x1408A0u;
label_1408a0:
    // 0x1408a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1408a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1408a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1408a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1408a8: 0x24060a00  addiu       $a2, $zero, 0xA00
    ctx->pc = 0x1408a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x1408ac: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1408ACu;
    SET_GPR_U32(ctx, 31, 0x1408B4u);
    ctx->pc = 0x1408B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1408ACu;
            // 0x1408b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408B4u; }
        if (ctx->pc != 0x1408B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408B4u; }
        if (ctx->pc != 0x1408B4u) { return; }
    }
    ctx->pc = 0x1408B4u;
label_1408b4:
    // 0x1408b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1408b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1408b8:
    // 0x1408b8: 0xa623020c  sh          $v1, 0x20C($s1)
    ctx->pc = 0x1408b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 524), (uint16_t)GPR_U32(ctx, 3));
    // 0x1408bc: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x1408bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
    // 0x1408c0: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x1408c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
label_1408c4:
    // 0x1408c4: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x1408c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x1408c8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1408C8u;
    {
        const bool branch_taken_0x1408c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1408c8) {
            ctx->pc = 0x1408CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1408C8u;
            // 0x1408cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1408DCu;
            goto label_1408dc;
        }
    }
    ctx->pc = 0x1408D0u;
    // 0x1408d0: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x1408d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x1408d4: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x1408d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    // 0x1408d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1408d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1408dc:
    // 0x1408dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1408dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1408e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1408e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1408e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1408e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1408e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1408E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1408ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1408E8u;
            // 0x1408ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1408F0u;
    ctx->pc = 0x1408f0u;
}
