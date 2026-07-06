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

// Function: sub_00343700
// Address: 0x343700 - 0x343740
void sub_00343700_0x343700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343700_0x343700");
#endif

    ctx->pc = 0x343700u;

    // 0x343700: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x343700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x343704: 0xac64be9c  sw          $a0, -0x4164($v1)
    ctx->pc = 0x343704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950556), GPR_U32(ctx, 4));
    // 0x343708: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x343708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34370c: 0x3e00008  jr          $ra
    ctx->pc = 0x34370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34370Cu;
        // 0x343710: 0xac65bea0  sw          $a1, -0x4160($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950560), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343714u;
    // 0x343714: 0x0  nop
    ctx->pc = 0x343714u;
    // NOP
    // 0x343718: 0x0  nop
    ctx->pc = 0x343718u;
    // NOP
    // 0x34371c: 0x0  nop
    ctx->pc = 0x34371cu;
    // NOP
    // 0x343720: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x343720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x343724: 0x8c44be9c  lw          $a0, -0x4164($v0)
    ctx->pc = 0x343724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950556)));
    // 0x343728: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x343728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34372c: 0x80558d4  j           func_156350
    ctx->pc = 0x34372Cu;
    ctx->pc = 0x343730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34372Cu;
    // 0x343730: 0x8c45bea0  lw          $a1, -0x4160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x343734u;
    // 0x343734: 0x0  nop
    ctx->pc = 0x343734u;
    // NOP
    // 0x343738: 0x0  nop
    ctx->pc = 0x343738u;
    // NOP
    // 0x34373c: 0x0  nop
    ctx->pc = 0x34373cu;
    // NOP
}
