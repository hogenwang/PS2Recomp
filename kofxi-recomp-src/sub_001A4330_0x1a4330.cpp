#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4330
// Address: 0x1a4330 - 0x1a4370
void sub_001A4330_0x1a4330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4330_0x1a4330");
#endif

    switch (ctx->pc) {
        case 0x1a4338u: goto label_1a4338;
        case 0x1a4340u: goto label_1a4340;
        case 0x1a4350u: goto label_1a4350;
        case 0x1a4358u: goto label_1a4358;
        default: break;
    }

    ctx->pc = 0x1a4330u;

    // 0x1a4330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a4338:
    // 0x1a4338: 0xc0471ea  jal         func_11C7A8
    ctx->pc = 0x1A4338u;
    SET_GPR_U32(ctx, 31, 0x1A4340u);
    ctx->pc = 0x11C7A8u;
    if (runtime->hasFunction(0x11C7A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4340u; }
        if (ctx->pc != 0x1A4340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C7A8_0x11c7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4340u; }
        if (ctx->pc != 0x1A4340u) { return; }
    }
    ctx->pc = 0x1A4340u;
label_1a4340:
    // 0x1a4340: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1A4340u;
    {
        const bool branch_taken_0x1a4340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4340) {
            ctx->pc = 0x1A4338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4338;
        }
    }
    ctx->pc = 0x1A4348u;
    // 0x1a4348: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1A4348u;
    SET_GPR_U32(ctx, 31, 0x1A4350u);
    ctx->pc = 0x1A434Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4348u;
            // 0x1a434c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (runtime->hasFunction(0x11B970u)) {
        auto targetFn = runtime->lookupFunction(0x11B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4350u; }
        if (ctx->pc != 0x1A4350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B970_0x11b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4350u; }
        if (ctx->pc != 0x1A4350u) { return; }
    }
    ctx->pc = 0x1A4350u;
label_1a4350:
    // 0x1a4350: 0xc047196  jal         func_11C658
    ctx->pc = 0x1A4350u;
    SET_GPR_U32(ctx, 31, 0x1A4358u);
    ctx->pc = 0x11C658u;
    if (runtime->hasFunction(0x11C658u)) {
        auto targetFn = runtime->lookupFunction(0x11C658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4358u; }
        if (ctx->pc != 0x1A4358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C658_0x11c658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4358u; }
        if (ctx->pc != 0x1A4358u) { return; }
    }
    ctx->pc = 0x1A4358u;
label_1a4358:
    // 0x1a4358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a435c: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A435Cu;
    {
        const bool branch_taken_0x1a435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a435c) {
            ctx->pc = 0x1A4338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4338;
        }
    }
    ctx->pc = 0x1A4364u;
    // 0x1a4364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4368: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A436Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4368u;
            // 0x1a436c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4370u;
    ctx->pc = 0x1a4370u;
}
