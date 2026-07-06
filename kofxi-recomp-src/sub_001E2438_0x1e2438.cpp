#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2438
// Address: 0x1e2438 - 0x1e24a0
void sub_001E2438_0x1e2438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2438_0x1e2438");
#endif

    switch (ctx->pc) {
        case 0x1e2450u: goto label_1e2450;
        case 0x1e2468u: goto label_1e2468;
        case 0x1e2478u: goto label_1e2478;
        case 0x1e2484u: goto label_1e2484;
        default: break;
    }

    ctx->pc = 0x1e2438u;

    // 0x1e2438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e243c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e243cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e2440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e2440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2448: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E2448u;
    SET_GPR_U32(ctx, 31, 0x1E2450u);
    ctx->pc = 0x1E244Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2448u;
            // 0x1e244c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2450u; }
        if (ctx->pc != 0x1E2450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2450u; }
        if (ctx->pc != 0x1E2450u) { return; }
    }
    ctx->pc = 0x1E2450u;
label_1e2450:
    // 0x1e2450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2454: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2454u;
    {
        const bool branch_taken_0x1e2454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E2458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2454u;
            // 0x1e2458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2454) {
            ctx->pc = 0x1E2470u;
            goto label_1e2470;
        }
    }
    ctx->pc = 0x1E245Cu;
    // 0x1e245c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e245cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2460: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E2460u;
    SET_GPR_U32(ctx, 31, 0x1E2468u);
    ctx->pc = 0x1E2464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2460u;
            // 0x1e2464: 0x2484d508  addiu       $a0, $a0, -0x2AF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2468u; }
        if (ctx->pc != 0x1E2468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2468u; }
        if (ctx->pc != 0x1E2468u) { return; }
    }
    ctx->pc = 0x1E2468u;
label_1e2468:
    // 0x1e2468: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2468u;
    {
        const bool branch_taken_0x1e2468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E246Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2468u;
            // 0x1e246c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2468) {
            ctx->pc = 0x1E2488u;
            goto label_1e2488;
        }
    }
    ctx->pc = 0x1E2470u;
label_1e2470:
    // 0x1e2470: 0xc078928  jal         func_1E24A0
    ctx->pc = 0x1E2470u;
    SET_GPR_U32(ctx, 31, 0x1E2478u);
    ctx->pc = 0x1E24A0u;
    if (runtime->hasFunction(0x1E24A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E24A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2478u; }
        if (ctx->pc != 0x1E2478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E24A0_0x1e24a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2478u; }
        if (ctx->pc != 0x1E2478u) { return; }
    }
    ctx->pc = 0x1E2478u;
label_1e2478:
    // 0x1e2478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e247c: 0xc077f54  jal         func_1DFD50
    ctx->pc = 0x1E247Cu;
    SET_GPR_U32(ctx, 31, 0x1E2484u);
    ctx->pc = 0x1E2480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E247Cu;
            // 0x1e2480: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFD50u;
    if (runtime->hasFunction(0x1DFD50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2484u; }
        if (ctx->pc != 0x1E2484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFD50_0x1dfd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2484u; }
        if (ctx->pc != 0x1E2484u) { return; }
    }
    ctx->pc = 0x1E2484u;
label_1e2484:
    // 0x1e2484: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e2484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e2488:
    // 0x1e2488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e248c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e248cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2494: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2494u;
            // 0x1e2498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E249Cu;
    // 0x1e249c: 0x0  nop
    ctx->pc = 0x1e249cu;
    // NOP
    ctx->pc = 0x1e24a0u;
}
