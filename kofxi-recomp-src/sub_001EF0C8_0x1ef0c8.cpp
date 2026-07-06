#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EF0C8
// Address: 0x1ef0c8 - 0x1ef120
void sub_001EF0C8_0x1ef0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF0C8_0x1ef0c8");
#endif

    switch (ctx->pc) {
        case 0x1ef0e4u: goto label_1ef0e4;
        case 0x1ef0ecu: goto label_1ef0ec;
        case 0x1ef0f4u: goto label_1ef0f4;
        case 0x1ef0fcu: goto label_1ef0fc;
        case 0x1ef104u: goto label_1ef104;
        case 0x1ef10cu: goto label_1ef10c;
        default: break;
    }

    ctx->pc = 0x1ef0c8u;

    // 0x1ef0c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef0cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ef0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ef0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef0d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ef0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef0d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ef0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ef0dc: 0xc07bd0c  jal         func_1EF430
    ctx->pc = 0x1EF0DCu;
    SET_GPR_U32(ctx, 31, 0x1EF0E4u);
    ctx->pc = 0x1EF0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0DCu;
            // 0x1ef0e0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF430u;
    if (runtime->hasFunction(0x1EF430u)) {
        auto targetFn = runtime->lookupFunction(0x1EF430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0E4u; }
        if (ctx->pc != 0x1EF0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF430_0x1ef430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0E4u; }
        if (ctx->pc != 0x1EF0E4u) { return; }
    }
    ctx->pc = 0x1EF0E4u;
label_1ef0e4:
    // 0x1ef0e4: 0xc07bc48  jal         func_1EF120
    ctx->pc = 0x1EF0E4u;
    SET_GPR_U32(ctx, 31, 0x1EF0ECu);
    ctx->pc = 0x1EF0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0E4u;
            // 0x1ef0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF120u;
    if (runtime->hasFunction(0x1EF120u)) {
        auto targetFn = runtime->lookupFunction(0x1EF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0ECu; }
        if (ctx->pc != 0x1EF0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF120_0x1ef120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0ECu; }
        if (ctx->pc != 0x1EF0ECu) { return; }
    }
    ctx->pc = 0x1EF0ECu;
label_1ef0ec:
    // 0x1ef0ec: 0xc07bd38  jal         func_1EF4E0
    ctx->pc = 0x1EF0ECu;
    SET_GPR_U32(ctx, 31, 0x1EF0F4u);
    ctx->pc = 0x1EF0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0ECu;
            // 0x1ef0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF4E0u;
    if (runtime->hasFunction(0x1EF4E0u)) {
        auto targetFn = runtime->lookupFunction(0x1EF4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0F4u; }
        if (ctx->pc != 0x1EF0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF4E0_0x1ef4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0F4u; }
        if (ctx->pc != 0x1EF0F4u) { return; }
    }
    ctx->pc = 0x1EF0F4u;
label_1ef0f4:
    // 0x1ef0f4: 0xc07bcce  jal         func_1EF338
    ctx->pc = 0x1EF0F4u;
    SET_GPR_U32(ctx, 31, 0x1EF0FCu);
    ctx->pc = 0x1EF0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0F4u;
            // 0x1ef0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF338u;
    if (runtime->hasFunction(0x1EF338u)) {
        auto targetFn = runtime->lookupFunction(0x1EF338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0FCu; }
        if (ctx->pc != 0x1EF0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF338_0x1ef338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0FCu; }
        if (ctx->pc != 0x1EF0FCu) { return; }
    }
    ctx->pc = 0x1EF0FCu;
label_1ef0fc:
    // 0x1ef0fc: 0xc07bd5e  jal         func_1EF578
    ctx->pc = 0x1EF0FCu;
    SET_GPR_U32(ctx, 31, 0x1EF104u);
    ctx->pc = 0x1EF100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0FCu;
            // 0x1ef100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF578u;
    if (runtime->hasFunction(0x1EF578u)) {
        auto targetFn = runtime->lookupFunction(0x1EF578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF104u; }
        if (ctx->pc != 0x1EF104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF578_0x1ef578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF104u; }
        if (ctx->pc != 0x1EF104u) { return; }
    }
    ctx->pc = 0x1EF104u;
label_1ef104:
    // 0x1ef104: 0xc07bd8a  jal         func_1EF628
    ctx->pc = 0x1EF104u;
    SET_GPR_U32(ctx, 31, 0x1EF10Cu);
    ctx->pc = 0x1EF108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF104u;
            // 0x1ef108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF628u;
    if (runtime->hasFunction(0x1EF628u)) {
        auto targetFn = runtime->lookupFunction(0x1EF628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF10Cu; }
        if (ctx->pc != 0x1EF10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF628_0x1ef628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF10Cu; }
        if (ctx->pc != 0x1EF10Cu) { return; }
    }
    ctx->pc = 0x1EF10Cu;
label_1ef10c:
    // 0x1ef10c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ef10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef110: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ef110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef114: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF114u;
            // 0x1ef118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF11Cu;
    // 0x1ef11c: 0x0  nop
    ctx->pc = 0x1ef11cu;
    // NOP
    ctx->pc = 0x1ef120u;
}
