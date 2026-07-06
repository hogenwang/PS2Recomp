#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8910
// Address: 0x1d8910 - 0x1d8948
void sub_001D8910_0x1d8910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8910_0x1d8910");
#endif

    switch (ctx->pc) {
        case 0x1d8920u: goto label_1d8920;
        case 0x1d8938u: goto label_1d8938;
        default: break;
    }

    ctx->pc = 0x1d8910u;

    // 0x1d8910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8918: 0xc076252  jal         func_1D8948
    ctx->pc = 0x1D8918u;
    SET_GPR_U32(ctx, 31, 0x1D8920u);
    ctx->pc = 0x1D8948u;
    if (runtime->hasFunction(0x1D8948u)) {
        auto targetFn = runtime->lookupFunction(0x1D8948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8920u; }
        if (ctx->pc != 0x1D8920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8948_0x1d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8920u; }
        if (ctx->pc != 0x1D8920u) { return; }
    }
    ctx->pc = 0x1D8920u;
label_1d8920:
    // 0x1d8920: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d8920u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8924: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8924u;
    {
        const bool branch_taken_0x1d8924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8924u;
            // 0x1d8928: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8924) {
            ctx->pc = 0x1D8938u;
            goto label_1d8938;
        }
    }
    ctx->pc = 0x1D892Cu;
    // 0x1d892c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d892cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8930: 0x8076268  j           func_1D89A0
    ctx->pc = 0x1D8930u;
    ctx->pc = 0x1D8934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8930u;
            // 0x1d8934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1D89A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1D8938u;
label_1d8938:
    // 0x1d8938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d893c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D893Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D893Cu;
            // 0x1d8940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8944u;
    // 0x1d8944: 0x0  nop
    ctx->pc = 0x1d8944u;
    // NOP
    ctx->pc = 0x1d8948u;
}
