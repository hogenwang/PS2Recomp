#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162FC0
// Address: 0x162fc0 - 0x162ff0
void sub_00162FC0_0x162fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162FC0_0x162fc0");
#endif

    switch (ctx->pc) {
        case 0x162fd0u: goto label_162fd0;
        default: break;
    }

    ctx->pc = 0x162fc0u;

    // 0x162fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162fc8: 0xc058bd8  jal         func_162F60
    ctx->pc = 0x162FC8u;
    SET_GPR_U32(ctx, 31, 0x162FD0u);
    ctx->pc = 0x162F60u;
    if (runtime->hasFunction(0x162F60u)) {
        auto targetFn = runtime->lookupFunction(0x162F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FD0u; }
        if (ctx->pc != 0x162FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162F60_0x162f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162FD0u; }
        if (ctx->pc != 0x162FD0u) { return; }
    }
    ctx->pc = 0x162FD0u;
label_162fd0:
    // 0x162fd0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x162FD0u;
    {
        const bool branch_taken_0x162fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162fd0) {
            ctx->pc = 0x162FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162FD0u;
            // 0x162fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162FDCu;
            goto label_162fdc;
        }
    }
    ctx->pc = 0x162FD8u;
    // 0x162fd8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x162fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_162fdc:
    // 0x162fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x162FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162FE0u;
            // 0x162fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162FE8u;
    // 0x162fe8: 0x0  nop
    ctx->pc = 0x162fe8u;
    // NOP
    // 0x162fec: 0x0  nop
    ctx->pc = 0x162fecu;
    // NOP
    ctx->pc = 0x162ff0u;
}
