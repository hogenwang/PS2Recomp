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

// Function: sub_00237000
// Address: 0x237000 - 0x237028
void sub_00237000_0x237000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237000_0x237000");
#endif

    ctx->pc = 0x237000u;

    // 0x237000: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x237000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x237004: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x237004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x237008: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x237008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x23700c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x23700cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x237010: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x237010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x237014: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x237014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x237018: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x237018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x23701c: 0x3e00008  jr          $ra
    ctx->pc = 0x23701Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23701Cu;
        // 0x237020: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23701Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237024u;
    // 0x237024: 0x0  nop
    ctx->pc = 0x237024u;
    // NOP
}
