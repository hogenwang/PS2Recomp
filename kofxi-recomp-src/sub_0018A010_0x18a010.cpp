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

// Function: sub_0018A010
// Address: 0x18a010 - 0x18a040
void sub_0018A010_0x18a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A010_0x18a010");
#endif

    switch (ctx->pc) {
        case 0x18a020u: goto label_18a020;
        default: break;
    }

    ctx->pc = 0x18a010u;

    // 0x18a010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a018: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x18A018u;
    SET_GPR_U32(ctx, 31, 0x18A020u);
    ctx->pc = 0x189F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F60u, 0x18A018u, 0x18A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A020u;
label_18a020:
    // 0x18a020: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A020u;
    {
        const bool branch_taken_0x18a020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a020) {
            ctx->pc = 0x18A024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A020u;
            // 0x18a024: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A02Cu;
            goto label_18a02c;
        }
    }
    ctx->pc = 0x18A028u;
    // 0x18a028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a02c:
    // 0x18a02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a030: 0x3e00008  jr          $ra
    ctx->pc = 0x18A030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A030u;
        // 0x18a034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A038u;
    // 0x18a038: 0x0  nop
    ctx->pc = 0x18a038u;
    // NOP
    // 0x18a03c: 0x0  nop
    ctx->pc = 0x18a03cu;
    // NOP
}
