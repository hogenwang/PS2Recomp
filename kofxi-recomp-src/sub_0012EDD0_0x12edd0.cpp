#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012EDD0
// Address: 0x12edd0 - 0x12ee10
void sub_0012EDD0_0x12edd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EDD0_0x12edd0");
#endif

    switch (ctx->pc) {
        case 0x12ede4u: goto label_12ede4;
        case 0x12ee00u: goto label_12ee00;
        default: break;
    }

    ctx->pc = 0x12edd0u;

    // 0x12edd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12edd4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x12edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12edd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12edd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12eddc: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x12EDDCu;
    SET_GPR_U32(ctx, 31, 0x12EDE4u);
    ctx->pc = 0x12EDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDDCu;
            // 0x12ede0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDE4u; }
        if (ctx->pc != 0x12EDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EDE4u; }
        if (ctx->pc != 0x12EDE4u) { return; }
    }
    ctx->pc = 0x12EDE4u;
label_12ede4:
    // 0x12ede4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12ede8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x12ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x12edec: 0x24841df0  addiu       $a0, $a0, 0x1DF0
    ctx->pc = 0x12edecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7664));
    // 0x12edf0: 0xac621d10  sw          $v0, 0x1D10($v1)
    ctx->pc = 0x12edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7440), GPR_U32(ctx, 2));
    // 0x12edf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12edf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edf8: 0xc067da0  jal         func_19F680
    ctx->pc = 0x12EDF8u;
    SET_GPR_U32(ctx, 31, 0x12EE00u);
    ctx->pc = 0x12EDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDF8u;
            // 0x12edfc: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F680u;
    if (runtime->hasFunction(0x19F680u)) {
        auto targetFn = runtime->lookupFunction(0x19F680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE00u; }
        if (ctx->pc != 0x12EE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F680_0x19f680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE00u; }
        if (ctx->pc != 0x12EE00u) { return; }
    }
    ctx->pc = 0x12EE00u;
label_12ee00:
    // 0x12ee00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ee00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ee04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ee08: 0x3e00008  jr          $ra
    ctx->pc = 0x12EE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE08u;
            // 0x12ee0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EE10u;
    ctx->pc = 0x12ee10u;
}
