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

// Function: sub_0031EA70
// Address: 0x31ea70 - 0x31ea90
void sub_0031EA70_0x31ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EA70_0x31ea70");
#endif

    ctx->pc = 0x31ea70u;

    // 0x31ea70: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x31ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x31ea74: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31ea78: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0
    ctx->pc = 0x31ea78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
    // 0x31ea7c: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x31ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x31ea80: 0xac852a98  sw          $a1, 0x2A98($a0)
    ctx->pc = 0x31ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10904), GPR_U32(ctx, 5));
    // 0x31ea84: 0x3e00008  jr          $ra
    ctx->pc = 0x31EA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA84u;
        // 0x31ea88: 0xac602a90  sw          $zero, 0x2A90($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10896), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EA8Cu;
    // 0x31ea8c: 0x0  nop
    ctx->pc = 0x31ea8cu;
    // NOP
}
