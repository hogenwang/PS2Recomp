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

// Function: sub_002A3000
// Address: 0x2a3000 - 0x2a3028
void sub_002A3000_0x2a3000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3000_0x2a3000");
#endif

    switch (ctx->pc) {
        case 0x2a3000u: goto label_2a3000;
        case 0x2a3004u: goto label_2a3004;
        case 0x2a3008u: goto label_2a3008;
        case 0x2a300cu: goto label_2a300c;
        case 0x2a3010u: goto label_2a3010;
        case 0x2a3014u: goto label_2a3014;
        case 0x2a3018u: goto label_2a3018;
        case 0x2a301cu: goto label_2a301c;
        case 0x2a3020u: goto label_2a3020;
        case 0x2a3024u: goto label_2a3024;
        default: break;
    }

    ctx->pc = 0x2a3000u;

label_2a3000:
    // 0x2a3000: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a3000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a3004:
    // 0x2a3004: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a3008:
    // 0x2a3008: 0x8c626a18  lw          $v0, 0x6A18($v1)
    ctx->pc = 0x2a3008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27160)));
label_2a300c:
    // 0x2a300c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a3010:
    // 0x2a3010: 0x40f809  jalr        $v0
label_2a3014:
    if (ctx->pc == 0x2A3014u) {
        ctx->pc = 0x2A3018u;
        goto label_2a3018;
    }
    ctx->pc = 0x2A3010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3018u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3010u, 0x2A3018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3018u;
label_2a3018:
    // 0x2a3018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a301c:
    // 0x2a301c: 0x3e00008  jr          $ra
label_2a3020:
    if (ctx->pc == 0x2A3020u) {
        ctx->pc = 0x2A3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A301Cu;
        // 0x2a3020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3024u;
        goto label_2a3024;
    }
    ctx->pc = 0x2A301Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A301Cu;
        // 0x2a3020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A301Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3024u;
label_2a3024:
    // 0x2a3024: 0x0  nop
    ctx->pc = 0x2a3024u;
    // NOP
}
