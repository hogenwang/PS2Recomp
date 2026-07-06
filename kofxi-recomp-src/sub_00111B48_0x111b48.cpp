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

// Function: sub_00111B48
// Address: 0x111b48 - 0x111b78
void sub_00111B48_0x111b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111B48_0x111b48");
#endif

    switch (ctx->pc) {
        case 0x111b58u: goto label_111b58;
        case 0x111b64u: goto label_111b64;
        default: break;
    }

    ctx->pc = 0x111b48u;

    // 0x111b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111b50: 0xc0446bc  jal         func_111AF0
    ctx->pc = 0x111B50u;
    SET_GPR_U32(ctx, 31, 0x111B58u);
    ctx->pc = 0x111AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AF0u, 0x111B50u, 0x111B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B58u;
label_111b58:
    // 0x111b58: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x111b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x111b5c: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x111B5Cu;
    SET_GPR_U32(ctx, 31, 0x111B64u);
    ctx->pc = 0x111B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B5Cu;
    // 0x111b60: 0x8c448744  lw          $a0, -0x78BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x111B5Cu, 0x111B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B64u;
label_111b64:
    // 0x111b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x111B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B6Cu;
        // 0x111b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111B74u;
    // 0x111b74: 0x0  nop
    ctx->pc = 0x111b74u;
    // NOP
    if (ctx->pc == 0x111b74u) { ctx->pc = 0x111b78u; }
}
