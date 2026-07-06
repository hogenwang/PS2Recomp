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

// Function: sub_001C70E0
// Address: 0x1c70e0 - 0x1c7110
void sub_001C70E0_0x1c70e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C70E0_0x1c70e0");
#endif

    ctx->pc = 0x1c70e0u;

    // 0x1c70e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c70e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c70e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c70e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c70e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c70e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c70ec: 0x80736d8  j           func_1CDB60
    ctx->pc = 0x1C70ECu;
    ctx->pc = 0x1C70F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70ECu;
    // 0x1c70f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    kofxiLeaveCallbackCriticalSection_0x1cdb60(rdram, ctx, runtime); return;
    ctx->pc = 0x1C70F4u;
    // 0x1c70f4: 0x0  nop
    ctx->pc = 0x1c70f4u;
    // NOP
    // 0x1c70f8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c70fc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c7100: 0x246338d0  addiu       $v1, $v1, 0x38D0
    ctx->pc = 0x1c7100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14544));
    // 0x1c7104: 0x244238e0  addiu       $v0, $v0, 0x38E0
    ctx->pc = 0x1c7104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14560));
    // 0x1c7108: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7108u;
        // 0x1c710c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7110u;
}
