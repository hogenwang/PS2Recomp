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

// Function: sub_00295B30
// Address: 0x295b30 - 0x295b60
void sub_00295B30_0x295b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295B30_0x295b30");
#endif

    switch (ctx->pc) {
        case 0x295b50u: goto label_295b50;
        default: break;
    }

    ctx->pc = 0x295b30u;

    // 0x295b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x295b34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x295b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x295b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b48: 0xc0a56d8  jal         func_295B60
    ctx->pc = 0x295B48u;
    SET_GPR_U32(ctx, 31, 0x295B50u);
    ctx->pc = 0x295B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B48u;
    // 0x295b4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B60u, 0x295B48u, 0x295B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B50u;
label_295b50:
    // 0x295b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295b54: 0x3e00008  jr          $ra
    ctx->pc = 0x295B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B54u;
        // 0x295b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295B5Cu;
    // 0x295b5c: 0x0  nop
    ctx->pc = 0x295b5cu;
    // NOP
    if (ctx->pc == 0x295b5cu) { ctx->pc = 0x295b60u; }
}
