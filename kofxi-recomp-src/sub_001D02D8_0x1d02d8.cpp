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

// Function: sub_001D02D8
// Address: 0x1d02d8 - 0x1d0300
void sub_001D02D8_0x1d02d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D02D8_0x1d02d8");
#endif

    switch (ctx->pc) {
        case 0x1d02d8u: goto label_1d02d8;
        case 0x1d02dcu: goto label_1d02dc;
        case 0x1d02e0u: goto label_1d02e0;
        case 0x1d02e4u: goto label_1d02e4;
        case 0x1d02e8u: goto label_1d02e8;
        case 0x1d02ecu: goto label_1d02ec;
        case 0x1d02f0u: goto label_1d02f0;
        case 0x1d02f4u: goto label_1d02f4;
        case 0x1d02f8u: goto label_1d02f8;
        case 0x1d02fcu: goto label_1d02fc;
        default: break;
    }

    ctx->pc = 0x1d02d8u;

label_1d02d8:
    // 0x1d02d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d02dc:
    // 0x1d02dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d02dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d02e0:
    // 0x1d02e0: 0x8c42e680  lw          $v0, -0x1980($v0)
    ctx->pc = 0x1d02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960768)));
label_1d02e4:
    // 0x1d02e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d02e8:
    if (ctx->pc == 0x1D02E8u) {
        ctx->pc = 0x1D02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02E4u;
        // 0x1d02e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D02ECu;
        goto label_1d02ec;
    }
    ctx->pc = 0x1D02E4u;
    {
        const bool branch_taken_0x1d02e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02E4u;
        // 0x1d02e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02e4) {
            ctx->pc = 0x1D02F4u;
            goto label_1d02f4;
        }
    }
    ctx->pc = 0x1D02ECu;
label_1d02ec:
    // 0x1d02ec: 0x40f809  jalr        $v0
label_1d02f0:
    if (ctx->pc == 0x1D02F0u) {
        ctx->pc = 0x1D02F4u;
        goto label_1d02f4;
    }
    ctx->pc = 0x1D02ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D02F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D02ECu, 0x1D02F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D02F4u;
label_1d02f4:
    // 0x1d02f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d02f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d02f8:
    // 0x1d02f8: 0x3e00008  jr          $ra
label_1d02fc:
    if (ctx->pc == 0x1D02FCu) {
        ctx->pc = 0x1D02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02F8u;
        // 0x1d02fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0300u;
        goto label_fallthrough_0x1d02f8;
    }
    ctx->pc = 0x1D02F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02F8u;
        // 0x1d02fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D02F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d02f8:
    ctx->pc = 0x1D0300u;
}
