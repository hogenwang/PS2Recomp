#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00142270
// Address: 0x142270 - 0x1422c0
void sub_00142270_0x142270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142270_0x142270");
#endif

    switch (ctx->pc) {
        case 0x142298u: goto label_142298;
        case 0x1422a8u: goto label_1422a8;
        default: break;
    }

    ctx->pc = 0x142270u;

    // 0x142270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142274: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x142274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14227c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x14227cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x142280: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x142280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x142284: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x142284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x142288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142288u;
    {
        const bool branch_taken_0x142288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142288) {
            ctx->pc = 0x1422A0u;
            goto label_1422a0;
        }
    }
    ctx->pc = 0x142290u;
    // 0x142290: 0xc058d7c  jal         func_1635F0
    ctx->pc = 0x142290u;
    SET_GPR_U32(ctx, 31, 0x142298u);
    ctx->pc = 0x142294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142290u;
            // 0x142294: 0x906505f1  lbu         $a1, 0x5F1($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1521)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1635F0u;
    if (runtime->hasFunction(0x1635F0u)) {
        auto targetFn = runtime->lookupFunction(0x1635F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142298u; }
        if (ctx->pc != 0x142298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001635F0_0x1635f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142298u; }
        if (ctx->pc != 0x142298u) { return; }
    }
    ctx->pc = 0x142298u;
label_142298:
    // 0x142298: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142298u;
    {
        const bool branch_taken_0x142298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14229Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142298u;
            // 0x14229c: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142298) {
            ctx->pc = 0x1422A8u;
            goto label_1422a8;
        }
    }
    ctx->pc = 0x1422A0u;
label_1422a0:
    // 0x1422a0: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x1422A0u;
    SET_GPR_U32(ctx, 31, 0x1422A8u);
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1422A8u; }
        if (ctx->pc != 0x1422A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1422A8u; }
        if (ctx->pc != 0x1422A8u) { return; }
    }
    ctx->pc = 0x1422A8u;
label_1422a8:
    // 0x1422a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1422a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1422ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1422ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1422B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1422ACu;
            // 0x1422b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1422B4u;
    // 0x1422b4: 0x0  nop
    ctx->pc = 0x1422b4u;
    // NOP
    // 0x1422b8: 0x0  nop
    ctx->pc = 0x1422b8u;
    // NOP
    // 0x1422bc: 0x0  nop
    ctx->pc = 0x1422bcu;
    // NOP
    ctx->pc = 0x1422c0u;
}
