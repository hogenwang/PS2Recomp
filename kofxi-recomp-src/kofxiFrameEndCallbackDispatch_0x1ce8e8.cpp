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

// Function: kofxiFrameEndCallbackDispatch
// Address: 0x1ce8e8 - 0x1ce918
void kofxiFrameEndCallbackDispatch_0x1ce8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiFrameEndCallbackDispatch_0x1ce8e8");
#endif

    switch (ctx->pc) {
        case 0x1ce8e8u: goto label_1ce8e8;
        case 0x1ce8ecu: goto label_1ce8ec;
        case 0x1ce8f0u: goto label_1ce8f0;
        case 0x1ce8f4u: goto label_1ce8f4;
        case 0x1ce8f8u: goto label_1ce8f8;
        case 0x1ce8fcu: goto label_1ce8fc;
        case 0x1ce900u: goto label_1ce900;
        case 0x1ce904u: goto label_1ce904;
        case 0x1ce908u: goto label_1ce908;
        case 0x1ce90cu: goto label_1ce90c;
        case 0x1ce910u: goto label_1ce910;
        case 0x1ce914u: goto label_1ce914;
        default: break;
    }

    ctx->pc = 0x1ce8e8u;

label_1ce8e8:
    // 0x1ce8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ce8ec:
    // 0x1ce8ec: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1ce8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
label_1ce8f0:
    // 0x1ce8f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ce8f4:
    // 0x1ce8f4: 0x24428008  addiu       $v0, $v0, -0x7FF8
    ctx->pc = 0x1ce8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934536));
label_1ce8f8:
    // 0x1ce8f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ce8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ce8fc:
    // 0x1ce8fc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1ce900:
    if (ctx->pc == 0x1CE900u) {
        ctx->pc = 0x1CE900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8FCu;
        // 0x1ce900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE904u;
        goto label_1ce904;
    }
    ctx->pc = 0x1CE8FCu;
    {
        const bool branch_taken_0x1ce8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce8fc) {
            ctx->pc = 0x1CE900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE8FCu;
            // 0x1ce900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE910u;
            goto label_1ce910;
        }
    }
    ctx->pc = 0x1CE904u;
label_1ce904:
    // 0x1ce904: 0x60f809  jalr        $v1
label_1ce908:
    if (ctx->pc == 0x1CE908u) {
        ctx->pc = 0x1CE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE904u;
        // 0x1ce908: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE90Cu;
        goto label_1ce90c;
    }
    ctx->pc = 0x1CE904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CE90Cu);
        ctx->pc = 0x1CE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE904u;
        // 0x1ce908: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE904u, 0x1CE90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE90Cu;
label_1ce90c:
    // 0x1ce90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce910:
    // 0x1ce910: 0x3e00008  jr          $ra
label_1ce914:
    if (ctx->pc == 0x1CE914u) {
        ctx->pc = 0x1CE914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE910u;
        // 0x1ce914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE918u;
        goto label_fallthrough_0x1ce910;
    }
    ctx->pc = 0x1CE910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE910u;
        // 0x1ce914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ce910:
    ctx->pc = 0x1CE918u;
}
