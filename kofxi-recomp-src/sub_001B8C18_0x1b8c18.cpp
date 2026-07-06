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

// Function: sub_001B8C18
// Address: 0x1b8c18 - 0x1b8c40
void sub_001B8C18_0x1b8c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8C18_0x1b8c18");
#endif

    switch (ctx->pc) {
        case 0x1b8c18u: goto label_1b8c18;
        case 0x1b8c1cu: goto label_1b8c1c;
        case 0x1b8c20u: goto label_1b8c20;
        case 0x1b8c24u: goto label_1b8c24;
        case 0x1b8c28u: goto label_1b8c28;
        case 0x1b8c2cu: goto label_1b8c2c;
        case 0x1b8c30u: goto label_1b8c30;
        case 0x1b8c34u: goto label_1b8c34;
        case 0x1b8c38u: goto label_1b8c38;
        case 0x1b8c3cu: goto label_1b8c3c;
        default: break;
    }

    ctx->pc = 0x1b8c18u;

label_1b8c18:
    // 0x1b8c18: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1b8c1c:
    // 0x1b8c1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b8c20:
    // 0x1b8c20: 0x8c42c380  lw          $v0, -0x3C80($v0)
    ctx->pc = 0x1b8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
label_1b8c24:
    // 0x1b8c24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b8c28:
    if (ctx->pc == 0x1B8C28u) {
        ctx->pc = 0x1B8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C24u;
        // 0x1b8c28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C2Cu;
        goto label_1b8c2c;
    }
    ctx->pc = 0x1B8C24u;
    {
        const bool branch_taken_0x1b8c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C24u;
        // 0x1b8c28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c24) {
            ctx->pc = 0x1B8C34u;
            goto label_1b8c34;
        }
    }
    ctx->pc = 0x1B8C2Cu;
label_1b8c2c:
    // 0x1b8c2c: 0x40f809  jalr        $v0
label_1b8c30:
    if (ctx->pc == 0x1B8C30u) {
        ctx->pc = 0x1B8C34u;
        goto label_1b8c34;
    }
    ctx->pc = 0x1B8C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8C34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8C2Cu, 0x1B8C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8C34u;
label_1b8c34:
    // 0x1b8c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8c38:
    // 0x1b8c38: 0x3e00008  jr          $ra
label_1b8c3c:
    if (ctx->pc == 0x1B8C3Cu) {
        ctx->pc = 0x1B8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C38u;
        // 0x1b8c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C40u;
        goto label_fallthrough_0x1b8c38;
    }
    ctx->pc = 0x1B8C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C38u;
        // 0x1b8c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b8c38:
    ctx->pc = 0x1B8C40u;
}
