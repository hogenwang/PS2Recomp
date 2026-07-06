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

// Function: sub_001E4710
// Address: 0x1e4710 - 0x1e4730
void sub_001E4710_0x1e4710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4710_0x1e4710");
#endif

    ctx->pc = 0x1e4710u;

    // 0x1e4710: 0x24820398  addiu       $v0, $a0, 0x398
    ctx->pc = 0x1e4710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 920));
    // 0x1e4714: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4718: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e4718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e471c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e471cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e4720: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e4720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e4724: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4724u;
        // 0x1e4728: 0xac830394  sw          $v1, 0x394($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E472Cu;
    // 0x1e472c: 0x0  nop
    ctx->pc = 0x1e472cu;
    // NOP
}
