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

// Function: sub_00208150
// Address: 0x208150 - 0x208190
void sub_00208150_0x208150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208150_0x208150");
#endif

    ctx->pc = 0x208150u;

    // 0x208150: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x208154: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x208154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208158: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20815c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x20815cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x208160: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x208160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208164: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x208164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x208168: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x208168u;
    {
        const bool branch_taken_0x208168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x208168) {
            ctx->pc = 0x208178u;
            goto label_208178;
        }
    }
    ctx->pc = 0x208170u;
    // 0x208170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208174: 0xa08304f1  sb          $v1, 0x4F1($a0)
    ctx->pc = 0x208174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1265), (uint8_t)GPR_U32(ctx, 3));
label_208178:
    // 0x208178: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x208178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20817c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x20817cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x208180: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x208180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x208184: 0x3e00008  jr          $ra
    ctx->pc = 0x208184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208184u;
        // 0x208188: 0xa06404f6  sb          $a0, 0x4F6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1270), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20818Cu;
    // 0x20818c: 0x0  nop
    ctx->pc = 0x20818cu;
    // NOP
    if (ctx->pc == 0x20818cu) { ctx->pc = 0x208190u; }
}
