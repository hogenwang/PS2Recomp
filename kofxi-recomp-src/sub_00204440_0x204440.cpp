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

// Function: sub_00204440
// Address: 0x204440 - 0x204480
void sub_00204440_0x204440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204440_0x204440");
#endif

    switch (ctx->pc) {
        case 0x20445cu: goto label_20445c;
        case 0x204470u: goto label_204470;
        default: break;
    }

    ctx->pc = 0x204440u;

    // 0x204440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204444: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x204444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20444c: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x20444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x204450: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x204450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x204454: 0xc081120  jal         func_204480
    ctx->pc = 0x204454u;
    SET_GPR_U32(ctx, 31, 0x20445Cu);
    ctx->pc = 0x204458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204454u;
    // 0x204458: 0x24c6a040  addiu       $a2, $a2, -0x5FC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204454u, 0x20445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20445Cu;
label_20445c:
    // 0x20445c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x20445cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204460: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x204460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x204464: 0x24050174  addiu       $a1, $zero, 0x174
    ctx->pc = 0x204464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x204468: 0xc081120  jal         func_204480
    ctx->pc = 0x204468u;
    SET_GPR_U32(ctx, 31, 0x204470u);
    ctx->pc = 0x20446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204468u;
    // 0x20446c: 0x24c69e84  addiu       $a2, $a2, -0x617C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942340));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204468u, 0x204470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204470u;
label_204470:
    // 0x204470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204474: 0x3e00008  jr          $ra
    ctx->pc = 0x204474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204474u;
        // 0x204478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20447Cu;
    // 0x20447c: 0x0  nop
    ctx->pc = 0x20447cu;
    // NOP
    if (ctx->pc == 0x20447cu) { ctx->pc = 0x204480u; }
}
