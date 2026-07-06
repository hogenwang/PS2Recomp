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

// Function: sub_00301AC0
// Address: 0x301ac0 - 0x301ae0
void sub_00301AC0_0x301ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301AC0_0x301ac0");
#endif

    ctx->pc = 0x301ac0u;

    // 0x301ac0: 0x3c0401cc  lui         $a0, 0x1CC
    ctx->pc = 0x301ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)460 << 16));
    // 0x301ac4: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x301ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x301ac8: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x301ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x301acc: 0x3e00008  jr          $ra
    ctx->pc = 0x301ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301ACCu;
        // 0x301ad0: 0xac642480  sw          $a0, 0x2480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 9344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301AD4u;
    // 0x301ad4: 0x0  nop
    ctx->pc = 0x301ad4u;
    // NOP
    // 0x301ad8: 0x0  nop
    ctx->pc = 0x301ad8u;
    // NOP
    // 0x301adc: 0x0  nop
    ctx->pc = 0x301adcu;
    // NOP
    if (ctx->pc == 0x301adcu) { ctx->pc = 0x301ae0u; }
}
