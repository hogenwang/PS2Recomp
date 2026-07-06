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

// Function: sub_00342E60
// Address: 0x342e60 - 0x342e90
void sub_00342E60_0x342e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342E60_0x342e60");
#endif

    ctx->pc = 0x342e60u;

    // 0x342e60: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x342e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x342e64: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x342e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x342e68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x342E68u;
    {
        const bool branch_taken_0x342e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x342e68) {
            ctx->pc = 0x342E78u;
            goto label_342e78;
        }
    }
    ctx->pc = 0x342E70u;
    // 0x342e70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x342E70u;
    {
        const bool branch_taken_0x342e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E70u;
        // 0x342e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e70) {
            ctx->pc = 0x342E80u;
            goto label_342e80;
        }
    }
    ctx->pc = 0x342E78u;
label_342e78:
    // 0x342e78: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342e7c: 0x90424308  lbu         $v0, 0x4308($v0)
    ctx->pc = 0x342e7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17160)));
label_342e80:
    // 0x342e80: 0x3e00008  jr          $ra
    ctx->pc = 0x342E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342E88u;
    // 0x342e88: 0x0  nop
    ctx->pc = 0x342e88u;
    // NOP
    // 0x342e8c: 0x0  nop
    ctx->pc = 0x342e8cu;
    // NOP
    if (ctx->pc == 0x342e8cu) { ctx->pc = 0x342e90u; }
}
