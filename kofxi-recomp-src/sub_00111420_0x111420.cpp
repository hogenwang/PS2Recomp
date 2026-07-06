#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00111420
// Address: 0x111420 - 0x111460
void sub_00111420_0x111420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111420_0x111420");
#endif

    switch (ctx->pc) {
        case 0x111438u: goto label_111438;
        case 0x111440u: goto label_111440;
        case 0x111448u: goto label_111448;
        case 0x111458u: goto label_111458;
        default: break;
    }

    ctx->pc = 0x111420u;

    // 0x111420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11142c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11142Cu;
    {
        const bool branch_taken_0x11142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11142Cu;
            // 0x111430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11142c) {
            ctx->pc = 0x111440u;
            goto label_111440;
        }
    }
    ctx->pc = 0x111434u;
    // 0x111434: 0x0  nop
    ctx->pc = 0x111434u;
    // NOP
label_111438:
    // 0x111438: 0xc044496  jal         func_111258
    ctx->pc = 0x111438u;
    SET_GPR_U32(ctx, 31, 0x111440u);
    ctx->pc = 0x111258u;
    if (runtime->hasFunction(0x111258u)) {
        auto targetFn = runtime->lookupFunction(0x111258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111440u; }
        if (ctx->pc != 0x111440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111258_0x111258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111440u; }
        if (ctx->pc != 0x111440u) { return; }
    }
    ctx->pc = 0x111440u;
label_111440:
    // 0x111440: 0xc044480  jal         func_111200
    ctx->pc = 0x111440u;
    SET_GPR_U32(ctx, 31, 0x111448u);
    ctx->pc = 0x111444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111440u;
            // 0x111444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111200u;
    if (runtime->hasFunction(0x111200u)) {
        auto targetFn = runtime->lookupFunction(0x111200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111448u; }
        if (ctx->pc != 0x111448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111200_0x111200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111448u; }
        if (ctx->pc != 0x111448u) { return; }
    }
    ctx->pc = 0x111448u;
label_111448:
    // 0x111448: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x111448u;
    {
        const bool branch_taken_0x111448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11144Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111448u;
            // 0x11144c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111448) {
            ctx->pc = 0x111438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111438;
        }
    }
    ctx->pc = 0x111450u;
    // 0x111450: 0xc0432e0  jal         func_10CB80
    ctx->pc = 0x111450u;
    SET_GPR_U32(ctx, 31, 0x111458u);
    ctx->pc = 0x10CB80u;
    if (runtime->hasFunction(0x10CB80u)) {
        auto targetFn = runtime->lookupFunction(0x10CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111458u; }
        if (ctx->pc != 0x111458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSleepThreadWrapper_0x10cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111458u; }
        if (ctx->pc != 0x111458u) { return; }
    }
    ctx->pc = 0x111458u;
label_111458:
    // 0x111458: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x111458u;
    {
        const bool branch_taken_0x111458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111458) {
            ctx->pc = 0x111440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111440;
        }
    }
    ctx->pc = 0x111460u;
    ctx->pc = 0x111460u;
}
