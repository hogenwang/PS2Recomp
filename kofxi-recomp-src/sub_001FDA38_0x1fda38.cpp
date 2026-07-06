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

// Function: sub_001FDA38
// Address: 0x1fda38 - 0x1fda58
void sub_001FDA38_0x1fda38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDA38_0x1fda38");
#endif

    ctx->pc = 0x1fda38u;

    // 0x1fda38: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1fda38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fda3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fda3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fda40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fda40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fda44: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fda44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fda48: 0x8c821f94  lw          $v0, 0x1F94($a0)
    ctx->pc = 0x1fda48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8084)));
    // 0x1fda4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA4Cu;
        // 0x1fda50: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDA54u;
    // 0x1fda54: 0x0  nop
    ctx->pc = 0x1fda54u;
    // NOP
    if (ctx->pc == 0x1fda54u) { ctx->pc = 0x1fda58u; }
}
