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

// Function: sub_002A0618
// Address: 0x2a0618 - 0x2a0640
void sub_002A0618_0x2a0618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0618_0x2a0618");
#endif

    switch (ctx->pc) {
        case 0x2a0618u: goto label_2a0618;
        case 0x2a061cu: goto label_2a061c;
        case 0x2a0620u: goto label_2a0620;
        case 0x2a0624u: goto label_2a0624;
        case 0x2a0628u: goto label_2a0628;
        case 0x2a062cu: goto label_2a062c;
        case 0x2a0630u: goto label_2a0630;
        case 0x2a0634u: goto label_2a0634;
        case 0x2a0638u: goto label_2a0638;
        case 0x2a063cu: goto label_2a063c;
        default: break;
    }

    ctx->pc = 0x2a0618u;

label_2a0618:
    // 0x2a0618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a061c:
    // 0x2a061c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0620:
    // 0x2a0620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a0624:
    // 0x2a0624: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2a0624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2a0628:
    // 0x2a0628: 0x40f809  jalr        $v0
label_2a062c:
    if (ctx->pc == 0x2A062Cu) {
        ctx->pc = 0x2A0630u;
        goto label_2a0630;
    }
    ctx->pc = 0x2A0628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0630u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0628u, 0x2A0630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0630u;
label_2a0630:
    // 0x2a0630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0634:
    // 0x2a0634: 0x3e00008  jr          $ra
label_2a0638:
    if (ctx->pc == 0x2A0638u) {
        ctx->pc = 0x2A0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0634u;
        // 0x2a0638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A063Cu;
        goto label_2a063c;
    }
    ctx->pc = 0x2A0634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0634u;
        // 0x2a0638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A063Cu;
label_2a063c:
    // 0x2a063c: 0x0  nop
    ctx->pc = 0x2a063cu;
    // NOP
    if (ctx->pc == 0x2a063cu) { ctx->pc = 0x2a0640u; }
}
