#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7838
// Address: 0x1b7838 - 0x1b7888
void sub_001B7838_0x1b7838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7838_0x1b7838");
#endif

    switch (ctx->pc) {
        case 0x1b7840u: goto label_1b7840;
        case 0x1b785cu: goto label_1b785c;
        case 0x1b7868u: goto label_1b7868;
        case 0x1b7870u: goto label_1b7870;
        default: break;
    }

    ctx->pc = 0x1b7838u;

    // 0x1b7838: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7840u;
label_1b7840:
    // 0x1b7840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b784c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7850: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7854: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7854u;
    SET_GPR_U32(ctx, 31, 0x1B785Cu);
    ctx->pc = 0x1B7858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7854u;
            // 0x1b7858: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B785Cu; }
        if (ctx->pc != 0x1B785Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B785Cu; }
        if (ctx->pc != 0x1B785Cu) { return; }
    }
    ctx->pc = 0x1B785Cu;
label_1b785c:
    // 0x1b785c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7860: 0xc06de22  jal         func_1B7888
    ctx->pc = 0x1B7860u;
    SET_GPR_U32(ctx, 31, 0x1B7868u);
    ctx->pc = 0x1B7864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7860u;
            // 0x1b7864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7888u;
    if (runtime->hasFunction(0x1B7888u)) {
        auto targetFn = runtime->lookupFunction(0x1B7888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7868u; }
        if (ctx->pc != 0x1B7868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7888_0x1b7888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7868u; }
        if (ctx->pc != 0x1B7868u) { return; }
    }
    ctx->pc = 0x1B7868u;
label_1b7868:
    // 0x1b7868: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B7868u;
    SET_GPR_U32(ctx, 31, 0x1B7870u);
    ctx->pc = 0x1B786Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7868u;
            // 0x1b786c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7870u; }
        if (ctx->pc != 0x1B7870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8168_0x1b8168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7870u; }
        if (ctx->pc != 0x1B7870u) { return; }
    }
    ctx->pc = 0x1B7870u;
label_1b7870:
    // 0x1b7870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b787c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b787cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7880: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7880u;
            // 0x1b7884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7888u;
    ctx->pc = 0x1b7888u;
}
