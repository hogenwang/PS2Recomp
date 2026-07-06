#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002943E0
// Address: 0x2943e0 - 0x294408
void sub_002943E0_0x2943e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002943E0_0x2943e0");
#endif

    switch (ctx->pc) {
        case 0x2943f4u: goto label_2943f4;
        default: break;
    }

    ctx->pc = 0x2943e0u;

    // 0x2943e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2943e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2943e4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2943e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2943e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2943e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2943ec: 0xc0a4fee  jal         func_293FB8
    ctx->pc = 0x2943ECu;
    SET_GPR_U32(ctx, 31, 0x2943F4u);
    ctx->pc = 0x2943F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2943ECu;
    // 0x2943f0: 0x2484f9e0  addiu       $a0, $a0, -0x620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293FB8u, 0x2943ECu, 0x2943F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2943F4u;
label_2943f4:
    // 0x2943f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2943f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2943f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2943f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2943fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2943FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943FCu;
        // 0x294400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2943FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294404u;
    // 0x294404: 0x0  nop
    ctx->pc = 0x294404u;
    // NOP
}
