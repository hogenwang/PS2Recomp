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

// Function: sub_0018A040
// Address: 0x18a040 - 0x18a070
void sub_0018A040_0x18a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A040_0x18a040");
#endif

    switch (ctx->pc) {
        case 0x18a050u: goto label_18a050;
        default: break;
    }

    ctx->pc = 0x18a040u;

    // 0x18a040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a048: 0xc0627ec  jal         func_189FB0
    ctx->pc = 0x18A048u;
    SET_GPR_U32(ctx, 31, 0x18A050u);
    ctx->pc = 0x189FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FB0u, 0x18A048u, 0x18A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A050u;
label_18a050:
    // 0x18a050: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A050u;
    {
        const bool branch_taken_0x18a050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a050) {
            ctx->pc = 0x18A054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A050u;
            // 0x18a054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A05Cu;
            goto label_18a05c;
        }
    }
    ctx->pc = 0x18A058u;
    // 0x18a058: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18a05c:
    // 0x18a05c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a060: 0x3e00008  jr          $ra
    ctx->pc = 0x18A060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A060u;
        // 0x18a064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A068u;
    // 0x18a068: 0x0  nop
    ctx->pc = 0x18a068u;
    // NOP
    // 0x18a06c: 0x0  nop
    ctx->pc = 0x18a06cu;
    // NOP
    if (ctx->pc == 0x18a06cu) { ctx->pc = 0x18a070u; }
}
