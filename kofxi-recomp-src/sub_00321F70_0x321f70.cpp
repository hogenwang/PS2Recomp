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

// Function: sub_00321F70
// Address: 0x321f70 - 0x321f90
void sub_00321F70_0x321f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321F70_0x321f70");
#endif

    ctx->pc = 0x321f70u;

    // 0x321f70: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x321f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x321f74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x321f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x321f78: 0x2442f028  addiu       $v0, $v0, -0xFD8
    ctx->pc = 0x321f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963240));
    // 0x321f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321f80: 0x3e00008  jr          $ra
    ctx->pc = 0x321F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F80u;
        // 0x321f84: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321F88u;
    // 0x321f88: 0x0  nop
    ctx->pc = 0x321f88u;
    // NOP
    // 0x321f8c: 0x0  nop
    ctx->pc = 0x321f8cu;
    // NOP
    if (ctx->pc == 0x321f8cu) { ctx->pc = 0x321f90u; }
}
