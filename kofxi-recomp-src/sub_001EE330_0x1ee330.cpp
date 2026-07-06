#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EE330
// Address: 0x1ee330 - 0x1ee390
void sub_001EE330_0x1ee330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE330_0x1ee330");
#endif

    switch (ctx->pc) {
        case 0x1ee344u: goto label_1ee344;
        default: break;
    }

    ctx->pc = 0x1ee330u;

    // 0x1ee330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ee330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ee334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ee338: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ee338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ee33c: 0xc07b8e4  jal         func_1EE390
    ctx->pc = 0x1EE33Cu;
    SET_GPR_U32(ctx, 31, 0x1EE344u);
    ctx->pc = 0x1EE340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE33Cu;
            // 0x1ee340: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE390u;
    if (runtime->hasFunction(0x1EE390u)) {
        auto targetFn = runtime->lookupFunction(0x1EE390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE344u; }
        if (ctx->pc != 0x1EE344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE390_0x1ee390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE344u; }
        if (ctx->pc != 0x1EE344u) { return; }
    }
    ctx->pc = 0x1EE344u;
label_1ee344:
    // 0x1ee344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee348: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ee348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee34c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE34Cu;
    {
        const bool branch_taken_0x1ee34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee34c) {
            ctx->pc = 0x1EE350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE34Cu;
            // 0x1ee350: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE370u;
            goto label_1ee370;
        }
    }
    ctx->pc = 0x1EE354u;
    // 0x1ee354: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1ee354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ee358: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE358u;
    {
        const bool branch_taken_0x1ee358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE358u;
            // 0x1ee35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee358) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE360u;
    // 0x1ee360: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1ee360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ee364: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE364u;
    {
        const bool branch_taken_0x1ee364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE364u;
            // 0x1ee368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee364) {
            ctx->pc = 0x1EE380u;
            goto label_1ee380;
        }
    }
    ctx->pc = 0x1EE36Cu;
    // 0x1ee36c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ee36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ee370:
    // 0x1ee370: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ee370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ee374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee378: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x1ee378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x1ee37c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ee37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ee380:
    // 0x1ee380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee384: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ee384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ee388: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE388u;
            // 0x1ee38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE390u;
    ctx->pc = 0x1ee390u;
}
