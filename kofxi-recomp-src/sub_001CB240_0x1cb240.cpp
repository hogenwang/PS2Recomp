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

// Function: sub_001CB240
// Address: 0x1cb240 - 0x1cb268
void sub_001CB240_0x1cb240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB240_0x1cb240");
#endif

    ctx->pc = 0x1cb240u;

    // 0x1cb240: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB240u;
        // 0x1cb244: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB248u;
    // 0x1cb248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb24c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cb250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb254: 0x2484b9a8  addiu       $a0, $a0, -0x4658
    ctx->pc = 0x1cb254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949288));
    // 0x1cb258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb25c: 0x8072a06  j           func_1CA818
    ctx->pc = 0x1CB25Cu;
    ctx->pc = 0x1CB260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB25Cu;
    // 0x1cb260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA818u;
    sub_001CA818_0x1ca818(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB264u;
    // 0x1cb264: 0x0  nop
    ctx->pc = 0x1cb264u;
    // NOP
}
