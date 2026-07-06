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

// Function: kofxiFrameBeginCallbackDispatch
// Address: 0x1ce8b8 - 0x1ce8e8
void kofxiFrameBeginCallbackDispatch_0x1ce8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiFrameBeginCallbackDispatch_0x1ce8b8");
#endif

    switch (ctx->pc) {
        case 0x1ce8b8u: goto label_1ce8b8;
        case 0x1ce8bcu: goto label_1ce8bc;
        case 0x1ce8c0u: goto label_1ce8c0;
        case 0x1ce8c4u: goto label_1ce8c4;
        case 0x1ce8c8u: goto label_1ce8c8;
        case 0x1ce8ccu: goto label_1ce8cc;
        case 0x1ce8d0u: goto label_1ce8d0;
        case 0x1ce8d4u: goto label_1ce8d4;
        case 0x1ce8d8u: goto label_1ce8d8;
        case 0x1ce8dcu: goto label_1ce8dc;
        case 0x1ce8e0u: goto label_1ce8e0;
        case 0x1ce8e4u: goto label_1ce8e4;
        default: break;
    }

    ctx->pc = 0x1ce8b8u;

label_1ce8b8:
    // 0x1ce8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ce8bc:
    // 0x1ce8bc: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1ce8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
label_1ce8c0:
    // 0x1ce8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ce8c4:
    // 0x1ce8c4: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x1ce8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_1ce8c8:
    // 0x1ce8c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ce8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ce8cc:
    // 0x1ce8cc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1ce8d0:
    if (ctx->pc == 0x1CE8D0u) {
        ctx->pc = 0x1CE8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8CCu;
        // 0x1ce8d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE8D4u;
        goto label_1ce8d4;
    }
    ctx->pc = 0x1CE8CCu;
    {
        const bool branch_taken_0x1ce8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce8cc) {
            ctx->pc = 0x1CE8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE8CCu;
            // 0x1ce8d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE8E0u;
            goto label_1ce8e0;
        }
    }
    ctx->pc = 0x1CE8D4u;
label_1ce8d4:
    // 0x1ce8d4: 0x60f809  jalr        $v1
label_1ce8d8:
    if (ctx->pc == 0x1CE8D8u) {
        ctx->pc = 0x1CE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8D4u;
        // 0x1ce8d8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE8DCu;
        goto label_1ce8dc;
    }
    ctx->pc = 0x1CE8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CE8DCu);
        ctx->pc = 0x1CE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8D4u;
        // 0x1ce8d8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE8D4u, 0x1CE8DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE8DCu;
label_1ce8dc:
    // 0x1ce8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce8e0:
    // 0x1ce8e0: 0x3e00008  jr          $ra
label_1ce8e4:
    if (ctx->pc == 0x1CE8E4u) {
        ctx->pc = 0x1CE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8E0u;
        // 0x1ce8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE8E8u;
        goto label_fallthrough_0x1ce8e0;
    }
    ctx->pc = 0x1CE8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8E0u;
        // 0x1ce8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ce8e0:
    ctx->pc = 0x1CE8E8u;
}
