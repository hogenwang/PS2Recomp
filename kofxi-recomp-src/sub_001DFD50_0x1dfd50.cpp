#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DFD50
// Address: 0x1dfd50 - 0x1dfda0
void sub_001DFD50_0x1dfd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFD50_0x1dfd50");
#endif

    switch (ctx->pc) {
        case 0x1dfd64u: goto label_1dfd64;
        case 0x1dfd7cu: goto label_1dfd7c;
        default: break;
    }

    ctx->pc = 0x1dfd50u;

    // 0x1dfd50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dfd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dfd54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfd58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dfd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dfd5c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1DFD5Cu;
    SET_GPR_U32(ctx, 31, 0x1DFD64u);
    ctx->pc = 0x1DFD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD5Cu;
            // 0x1dfd60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD64u; }
        if (ctx->pc != 0x1DFD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD64u; }
        if (ctx->pc != 0x1DFD64u) { return; }
    }
    ctx->pc = 0x1DFD64u;
label_1dfd64:
    // 0x1dfd64: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dfd64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1dfd68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfd6c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFD6Cu;
    {
        const bool branch_taken_0x1dfd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DFD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD6Cu;
            // 0x1dfd70: 0x2484cc20  addiu       $a0, $a0, -0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd6c) {
            ctx->pc = 0x1DFD88u;
            goto label_1dfd88;
        }
    }
    ctx->pc = 0x1DFD74u;
    // 0x1dfd74: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DFD74u;
    SET_GPR_U32(ctx, 31, 0x1DFD7Cu);
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD7Cu; }
        if (ctx->pc != 0x1DFD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD7Cu; }
        if (ctx->pc != 0x1DFD7Cu) { return; }
    }
    ctx->pc = 0x1DFD7Cu;
label_1dfd7c:
    // 0x1dfd7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFD7Cu;
    {
        const bool branch_taken_0x1dfd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD7Cu;
            // 0x1dfd80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd7c) {
            ctx->pc = 0x1DFD8Cu;
            goto label_1dfd8c;
        }
    }
    ctx->pc = 0x1DFD84u;
    // 0x1dfd84: 0x0  nop
    ctx->pc = 0x1dfd84u;
    // NOP
label_1dfd88:
    // 0x1dfd88: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1dfd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1dfd8c:
    // 0x1dfd8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfd8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dfd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfd94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD94u;
            // 0x1dfd98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFD9Cu;
    // 0x1dfd9c: 0x0  nop
    ctx->pc = 0x1dfd9cu;
    // NOP
    ctx->pc = 0x1dfda0u;
}
