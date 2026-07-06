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

// Function: sub_001DDFA8
// Address: 0x1ddfa8 - 0x1ddff0
void sub_001DDFA8_0x1ddfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDFA8_0x1ddfa8");
#endif

    switch (ctx->pc) {
        case 0x1ddfb8u: goto label_1ddfb8;
        case 0x1ddfc8u: goto label_1ddfc8;
        default: break;
    }

    ctx->pc = 0x1ddfa8u;

    // 0x1ddfa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddfac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ddfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ddfb0: 0xc07e2d4  jal         func_1F8B50
    ctx->pc = 0x1DDFB0u;
    SET_GPR_U32(ctx, 31, 0x1DDFB8u);
    ctx->pc = 0x1F8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8B50u, 0x1DDFB0u, 0x1DDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDFB8u;
label_1ddfb8:
    // 0x1ddfb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DDFB8u;
    {
        const bool branch_taken_0x1ddfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFB8u;
        // 0x1ddfbc: 0x2404fece  addiu       $a0, $zero, -0x132 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966990));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddfb8) {
            ctx->pc = 0x1DDFE0u;
            goto label_1ddfe0;
        }
    }
    ctx->pc = 0x1DDFC0u;
    // 0x1ddfc0: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1DDFC0u;
    SET_GPR_U32(ctx, 31, 0x1DDFC8u);
    ctx->pc = 0x1E0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0CA0u, 0x1DDFC0u, 0x1DDFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDFC8u;
label_1ddfc8:
    // 0x1ddfc8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ddfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ddfcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddfd0: 0x2484c608  addiu       $a0, $a0, -0x39F8
    ctx->pc = 0x1ddfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952456));
    // 0x1ddfd4: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1DDFD4u;
    ctx->pc = 0x1DDFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDFD4u;
    // 0x1ddfd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDFDCu;
    // 0x1ddfdc: 0x0  nop
    ctx->pc = 0x1ddfdcu;
    // NOP
label_1ddfe0:
    // 0x1ddfe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFE4u;
        // 0x1ddfe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDFECu;
    // 0x1ddfec: 0x0  nop
    ctx->pc = 0x1ddfecu;
    // NOP
}
