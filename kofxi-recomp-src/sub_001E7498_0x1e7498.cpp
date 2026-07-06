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

// Function: sub_001E7498
// Address: 0x1e7498 - 0x1e74c8
void sub_001E7498_0x1e7498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7498_0x1e7498");
#endif

    switch (ctx->pc) {
        case 0x1e7498u: goto label_1e7498;
        case 0x1e749cu: goto label_1e749c;
        case 0x1e74a0u: goto label_1e74a0;
        case 0x1e74a4u: goto label_1e74a4;
        case 0x1e74a8u: goto label_1e74a8;
        case 0x1e74acu: goto label_1e74ac;
        case 0x1e74b0u: goto label_1e74b0;
        case 0x1e74b4u: goto label_1e74b4;
        case 0x1e74b8u: goto label_1e74b8;
        case 0x1e74bcu: goto label_1e74bc;
        case 0x1e74c0u: goto label_1e74c0;
        case 0x1e74c4u: goto label_1e74c4;
        default: break;
    }

    ctx->pc = 0x1e7498u;

label_1e7498:
    // 0x1e7498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e749c:
    // 0x1e749c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e74a0:
    // 0x1e74a0: 0xc0781e0  jal         func_1E0780
label_1e74a4:
    if (ctx->pc == 0x1E74A4u) {
        ctx->pc = 0x1E74A8u;
        goto label_1e74a8;
    }
    ctx->pc = 0x1E74A0u;
    SET_GPR_U32(ctx, 31, 0x1E74A8u);
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E74A0u, 0x1E74A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E74A8u;
label_1e74a8:
    // 0x1e74a8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1e74a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1e74ac:
    // 0x1e74ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e74b0:
    if (ctx->pc == 0x1E74B0u) {
        ctx->pc = 0x1E74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74ACu;
        // 0x1e74b0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E74B4u;
        goto label_1e74b4;
    }
    ctx->pc = 0x1E74ACu;
    {
        const bool branch_taken_0x1e74ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74ACu;
        // 0x1e74b0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74ac) {
            ctx->pc = 0x1E74BCu;
            goto label_1e74bc;
        }
    }
    ctx->pc = 0x1E74B4u;
label_1e74b4:
    // 0x1e74b4: 0x60f809  jalr        $v1
label_1e74b8:
    if (ctx->pc == 0x1E74B8u) {
        ctx->pc = 0x1E74BCu;
        goto label_1e74bc;
    }
    ctx->pc = 0x1E74B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E74BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E74B4u, 0x1E74BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E74BCu;
label_1e74bc:
    // 0x1e74bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e74bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e74c0:
    // 0x1e74c0: 0x3e00008  jr          $ra
label_1e74c4:
    if (ctx->pc == 0x1E74C4u) {
        ctx->pc = 0x1E74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74C0u;
        // 0x1e74c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E74C8u;
        goto label_fallthrough_0x1e74c0;
    }
    ctx->pc = 0x1E74C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74C0u;
        // 0x1e74c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E74C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e74c0:
    ctx->pc = 0x1E74C8u;
}
