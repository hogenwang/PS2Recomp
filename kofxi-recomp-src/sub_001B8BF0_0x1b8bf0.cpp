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

// Function: sub_001B8BF0
// Address: 0x1b8bf0 - 0x1b8c18
void sub_001B8BF0_0x1b8bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8BF0_0x1b8bf0");
#endif

    switch (ctx->pc) {
        case 0x1b8bf0u: goto label_1b8bf0;
        case 0x1b8bf4u: goto label_1b8bf4;
        case 0x1b8bf8u: goto label_1b8bf8;
        case 0x1b8bfcu: goto label_1b8bfc;
        case 0x1b8c00u: goto label_1b8c00;
        case 0x1b8c04u: goto label_1b8c04;
        case 0x1b8c08u: goto label_1b8c08;
        case 0x1b8c0cu: goto label_1b8c0c;
        case 0x1b8c10u: goto label_1b8c10;
        case 0x1b8c14u: goto label_1b8c14;
        default: break;
    }

    ctx->pc = 0x1b8bf0u;

label_1b8bf0:
    // 0x1b8bf0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1b8bf4:
    // 0x1b8bf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b8bf8:
    // 0x1b8bf8: 0x8c42c378  lw          $v0, -0x3C88($v0)
    ctx->pc = 0x1b8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951800)));
label_1b8bfc:
    // 0x1b8bfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b8c00:
    if (ctx->pc == 0x1B8C00u) {
        ctx->pc = 0x1B8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BFCu;
        // 0x1b8c00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C04u;
        goto label_1b8c04;
    }
    ctx->pc = 0x1B8BFCu;
    {
        const bool branch_taken_0x1b8bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BFCu;
        // 0x1b8c00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8bfc) {
            ctx->pc = 0x1B8C0Cu;
            goto label_1b8c0c;
        }
    }
    ctx->pc = 0x1B8C04u;
label_1b8c04:
    // 0x1b8c04: 0x40f809  jalr        $v0
label_1b8c08:
    if (ctx->pc == 0x1B8C08u) {
        ctx->pc = 0x1B8C0Cu;
        goto label_1b8c0c;
    }
    ctx->pc = 0x1B8C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8C0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8C04u, 0x1B8C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8C0Cu;
label_1b8c0c:
    // 0x1b8c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8c10:
    // 0x1b8c10: 0x3e00008  jr          $ra
label_1b8c14:
    if (ctx->pc == 0x1B8C14u) {
        ctx->pc = 0x1B8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C10u;
        // 0x1b8c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C18u;
        goto label_fallthrough_0x1b8c10;
    }
    ctx->pc = 0x1B8C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C10u;
        // 0x1b8c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b8c10:
    ctx->pc = 0x1B8C18u;
}
