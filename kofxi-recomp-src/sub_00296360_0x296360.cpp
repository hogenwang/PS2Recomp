#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296360
// Address: 0x296360 - 0x2963a0
void sub_00296360_0x296360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296360_0x296360");
#endif

    switch (ctx->pc) {
        case 0x296380u: goto label_296380;
        case 0x296390u: goto label_296390;
        default: break;
    }

    ctx->pc = 0x296360u;

    // 0x296360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296364: 0x5010002  bgez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x296364u;
    {
        const bool branch_taken_0x296364 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x296368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296364u;
            // 0x296368: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296364) {
            ctx->pc = 0x296370u;
            goto label_296370;
        }
    }
    ctx->pc = 0x29636Cu;
    // 0x29636c: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x29636cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_296370:
    // 0x296370: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x296370u;
    {
        const bool branch_taken_0x296370 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x296370) {
            ctx->pc = 0x296388u;
            goto label_296388;
        }
    }
    ctx->pc = 0x296378u;
    // 0x296378: 0xc0a58e8  jal         func_2963A0
    ctx->pc = 0x296378u;
    SET_GPR_U32(ctx, 31, 0x296380u);
    ctx->pc = 0x2963A0u;
    if (runtime->hasFunction(0x2963A0u)) {
        auto targetFn = runtime->lookupFunction(0x2963A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296380u; }
        if (ctx->pc != 0x296380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963A0_0x2963a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296380u; }
        if (ctx->pc != 0x296380u) { return; }
    }
    ctx->pc = 0x296380u;
label_296380:
    // 0x296380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x296380u;
    {
        const bool branch_taken_0x296380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296380u;
            // 0x296384: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296380) {
            ctx->pc = 0x296394u;
            goto label_296394;
        }
    }
    ctx->pc = 0x296388u;
label_296388:
    // 0x296388: 0xc0a5908  jal         func_296420
    ctx->pc = 0x296388u;
    SET_GPR_U32(ctx, 31, 0x296390u);
    ctx->pc = 0x296420u;
    if (runtime->hasFunction(0x296420u)) {
        auto targetFn = runtime->lookupFunction(0x296420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296390u; }
        if (ctx->pc != 0x296390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296420_0x296420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296390u; }
        if (ctx->pc != 0x296390u) { return; }
    }
    ctx->pc = 0x296390u;
label_296390:
    // 0x296390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296394:
    // 0x296394: 0x3e00008  jr          $ra
    ctx->pc = 0x296394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296394u;
            // 0x296398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29639Cu;
    // 0x29639c: 0x0  nop
    ctx->pc = 0x29639cu;
    // NOP
    ctx->pc = 0x2963a0u;
}
