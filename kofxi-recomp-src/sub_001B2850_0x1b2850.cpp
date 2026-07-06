#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2850
// Address: 0x1b2850 - 0x1b2968
void sub_001B2850_0x1b2850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2850_0x1b2850");
#endif

    switch (ctx->pc) {
        case 0x1b2860u: goto label_1b2860;
        case 0x1b2868u: goto label_1b2868;
        case 0x1b2870u: goto label_1b2870;
        case 0x1b2878u: goto label_1b2878;
        case 0x1b2880u: goto label_1b2880;
        case 0x1b2888u: goto label_1b2888;
        case 0x1b2890u: goto label_1b2890;
        case 0x1b2898u: goto label_1b2898;
        case 0x1b28a8u: goto label_1b28a8;
        case 0x1b28c0u: goto label_1b28c0;
        case 0x1b28d8u: goto label_1b28d8;
        case 0x1b28f0u: goto label_1b28f0;
        case 0x1b2908u: goto label_1b2908;
        case 0x1b2920u: goto label_1b2920;
        case 0x1b2938u: goto label_1b2938;
        case 0x1b2950u: goto label_1b2950;
        default: break;
    }

    ctx->pc = 0x1b2850u;

    // 0x1b2850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2858: 0xc07396e  jal         func_1CE5B8
    ctx->pc = 0x1B2858u;
    SET_GPR_U32(ctx, 31, 0x1B2860u);
    ctx->pc = 0x1CE5B8u;
    if (runtime->hasFunction(0x1CE5B8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2860u; }
        if (ctx->pc != 0x1B2860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE5B8_0x1ce5b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2860u; }
        if (ctx->pc != 0x1B2860u) { return; }
    }
    ctx->pc = 0x1B2860u;
label_1b2860:
    // 0x1b2860: 0xc073974  jal         func_1CE5D0
    ctx->pc = 0x1B2860u;
    SET_GPR_U32(ctx, 31, 0x1B2868u);
    ctx->pc = 0x1CE5D0u;
    if (runtime->hasFunction(0x1CE5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2868u; }
        if (ctx->pc != 0x1B2868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE5D0_0x1ce5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2868u; }
        if (ctx->pc != 0x1B2868u) { return; }
    }
    ctx->pc = 0x1B2868u;
label_1b2868:
    // 0x1b2868: 0xc07397a  jal         func_1CE5E8
    ctx->pc = 0x1B2868u;
    SET_GPR_U32(ctx, 31, 0x1B2870u);
    ctx->pc = 0x1CE5E8u;
    if (runtime->hasFunction(0x1CE5E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2870u; }
        if (ctx->pc != 0x1B2870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE5E8_0x1ce5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2870u; }
        if (ctx->pc != 0x1B2870u) { return; }
    }
    ctx->pc = 0x1B2870u;
label_1b2870:
    // 0x1b2870: 0xc073980  jal         func_1CE600
    ctx->pc = 0x1B2870u;
    SET_GPR_U32(ctx, 31, 0x1B2878u);
    ctx->pc = 0x1CE600u;
    if (runtime->hasFunction(0x1CE600u)) {
        auto targetFn = runtime->lookupFunction(0x1CE600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2878u; }
        if (ctx->pc != 0x1B2878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE600_0x1ce600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2878u; }
        if (ctx->pc != 0x1B2878u) { return; }
    }
    ctx->pc = 0x1B2878u;
label_1b2878:
    // 0x1b2878: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1B2878u;
    SET_GPR_U32(ctx, 31, 0x1B2880u);
    ctx->pc = 0x1CE618u;
    if (runtime->hasFunction(0x1CE618u)) {
        auto targetFn = runtime->lookupFunction(0x1CE618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2880u; }
        if (ctx->pc != 0x1B2880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE618_0x1ce618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2880u; }
        if (ctx->pc != 0x1B2880u) { return; }
    }
    ctx->pc = 0x1B2880u;
label_1b2880:
    // 0x1b2880: 0xc07398c  jal         func_1CE630
    ctx->pc = 0x1B2880u;
    SET_GPR_U32(ctx, 31, 0x1B2888u);
    ctx->pc = 0x1CE630u;
    if (runtime->hasFunction(0x1CE630u)) {
        auto targetFn = runtime->lookupFunction(0x1CE630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2888u; }
        if (ctx->pc != 0x1B2888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE630_0x1ce630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2888u; }
        if (ctx->pc != 0x1B2888u) { return; }
    }
    ctx->pc = 0x1B2888u;
label_1b2888:
    // 0x1b2888: 0xc073992  jal         func_1CE648
    ctx->pc = 0x1B2888u;
    SET_GPR_U32(ctx, 31, 0x1B2890u);
    ctx->pc = 0x1CE648u;
    if (runtime->hasFunction(0x1CE648u)) {
        auto targetFn = runtime->lookupFunction(0x1CE648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2890u; }
        if (ctx->pc != 0x1B2890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE648_0x1ce648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2890u; }
        if (ctx->pc != 0x1B2890u) { return; }
    }
    ctx->pc = 0x1B2890u;
label_1b2890:
    // 0x1b2890: 0xc073998  jal         func_1CE660
    ctx->pc = 0x1B2890u;
    SET_GPR_U32(ctx, 31, 0x1B2898u);
    ctx->pc = 0x1CE660u;
    if (runtime->hasFunction(0x1CE660u)) {
        auto targetFn = runtime->lookupFunction(0x1CE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2898u; }
        if (ctx->pc != 0x1B2898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE660_0x1ce660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2898u; }
        if (ctx->pc != 0x1B2898u) { return; }
    }
    ctx->pc = 0x1B2898u;
label_1b2898:
    // 0x1b2898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b289c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b289cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b28a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B28A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B28A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28A0u;
            // 0x1b28a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B28A8u;
label_1b28a8:
    // 0x1b28a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b28a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b28ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b28acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b28b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b28b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b28b4: 0x807396e  j           func_1CE5B8
    ctx->pc = 0x1B28B4u;
    ctx->pc = 0x1B28B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28B4u;
            // 0x1b28b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5B8u;
    if (runtime->hasFunction(0x1CE5B8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE5B8_0x1ce5b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B28BCu;
    // 0x1b28bc: 0x0  nop
    ctx->pc = 0x1b28bcu;
    // NOP
label_1b28c0:
    // 0x1b28c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b28c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b28c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b28c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b28c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b28c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b28cc: 0x8073974  j           func_1CE5D0
    ctx->pc = 0x1B28CCu;
    ctx->pc = 0x1B28D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28CCu;
            // 0x1b28d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5D0u;
    if (runtime->hasFunction(0x1CE5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE5D0_0x1ce5d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B28D4u;
    // 0x1b28d4: 0x0  nop
    ctx->pc = 0x1b28d4u;
    // NOP
label_1b28d8:
    // 0x1b28d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b28d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b28dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b28dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b28e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b28e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b28e4: 0x807397a  j           func_1CE5E8
    ctx->pc = 0x1B28E4u;
    ctx->pc = 0x1B28E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28E4u;
            // 0x1b28e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5E8u;
    if (runtime->hasFunction(0x1CE5E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE5E8_0x1ce5e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B28ECu;
    // 0x1b28ec: 0x0  nop
    ctx->pc = 0x1b28ecu;
    // NOP
label_1b28f0:
    // 0x1b28f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b28f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b28f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b28f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b28f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b28f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b28fc: 0x8073980  j           func_1CE600
    ctx->pc = 0x1B28FCu;
    ctx->pc = 0x1B2900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28FCu;
            // 0x1b2900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE600u;
    if (runtime->hasFunction(0x1CE600u)) {
        auto targetFn = runtime->lookupFunction(0x1CE600u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE600_0x1ce600(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2904u;
    // 0x1b2904: 0x0  nop
    ctx->pc = 0x1b2904u;
    // NOP
label_1b2908:
    // 0x1b2908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b290c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2914: 0x8073986  j           func_1CE618
    ctx->pc = 0x1B2914u;
    ctx->pc = 0x1B2918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2914u;
            // 0x1b2918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (runtime->hasFunction(0x1CE618u)) {
        auto targetFn = runtime->lookupFunction(0x1CE618u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE618_0x1ce618(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B291Cu;
    // 0x1b291c: 0x0  nop
    ctx->pc = 0x1b291cu;
    // NOP
label_1b2920:
    // 0x1b2920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b292c: 0x807398c  j           func_1CE630
    ctx->pc = 0x1B292Cu;
    ctx->pc = 0x1B2930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B292Cu;
            // 0x1b2930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE630u;
    if (runtime->hasFunction(0x1CE630u)) {
        auto targetFn = runtime->lookupFunction(0x1CE630u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE630_0x1ce630(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2934u;
    // 0x1b2934: 0x0  nop
    ctx->pc = 0x1b2934u;
    // NOP
label_1b2938:
    // 0x1b2938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b293c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b293cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2944: 0x8073992  j           func_1CE648
    ctx->pc = 0x1B2944u;
    ctx->pc = 0x1B2948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2944u;
            // 0x1b2948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE648u;
    if (runtime->hasFunction(0x1CE648u)) {
        auto targetFn = runtime->lookupFunction(0x1CE648u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE648_0x1ce648(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B294Cu;
    // 0x1b294c: 0x0  nop
    ctx->pc = 0x1b294cu;
    // NOP
label_1b2950:
    // 0x1b2950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b295c: 0x8073998  j           func_1CE660
    ctx->pc = 0x1B295Cu;
    ctx->pc = 0x1B2960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B295Cu;
            // 0x1b2960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE660u;
    if (runtime->hasFunction(0x1CE660u)) {
        auto targetFn = runtime->lookupFunction(0x1CE660u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE660_0x1ce660(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2964u;
    // 0x1b2964: 0x0  nop
    ctx->pc = 0x1b2964u;
    // NOP
    ctx->pc = 0x1b2968u;
}
