#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296860
// Address: 0x296860 - 0x2968a0
void sub_00296860_0x296860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296860_0x296860");
#endif

    switch (ctx->pc) {
        case 0x296874u: goto label_296874;
        case 0x296888u: goto label_296888;
        default: break;
    }

    ctx->pc = 0x296860u;

    // 0x296860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29686c: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x29686Cu;
    SET_GPR_U32(ctx, 31, 0x296874u);
    ctx->pc = 0x296870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29686Cu;
            // 0x296870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (runtime->hasFunction(0x2968A0u)) {
        auto targetFn = runtime->lookupFunction(0x2968A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296874u; }
        if (ctx->pc != 0x296874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002968A0_0x2968a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296874u; }
        if (ctx->pc != 0x296874u) { return; }
    }
    ctx->pc = 0x296874u;
label_296874:
    // 0x296874: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x296874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x296878: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x296878u;
    {
        const bool branch_taken_0x296878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296878) {
            ctx->pc = 0x29687Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x296878u;
            // 0x29687c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29688Cu;
            goto label_29688c;
        }
    }
    ctx->pc = 0x296880u;
    // 0x296880: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x296880u;
    SET_GPR_U32(ctx, 31, 0x296888u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296888u; }
        if (ctx->pc != 0x296888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296888u; }
        if (ctx->pc != 0x296888u) { return; }
    }
    ctx->pc = 0x296888u;
label_296888:
    // 0x296888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29688c:
    // 0x29688c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29688cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296894: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x296894u;
    ctx->pc = 0x296898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296894u;
            // 0x296898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29689Cu;
    // 0x29689c: 0x0  nop
    ctx->pc = 0x29689cu;
    // NOP
    ctx->pc = 0x2968a0u;
}
