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

// Function: sub_0018C060
// Address: 0x18c060 - 0x18c090
void sub_0018C060_0x18c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C060_0x18c060");
#endif

    switch (ctx->pc) {
        case 0x18c070u: goto label_18c070;
        default: break;
    }

    ctx->pc = 0x18c060u;

    // 0x18c060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c068: 0xc063808  jal         func_18E020
    ctx->pc = 0x18C068u;
    SET_GPR_U32(ctx, 31, 0x18C070u);
    ctx->pc = 0x18C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C068u;
    // 0x18c06c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x18C068u, 0x18C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C070u;
label_18c070:
    // 0x18c070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c074: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c078: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c078u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c07c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C07Cu;
        // 0x18c080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C084u;
    // 0x18c084: 0x0  nop
    ctx->pc = 0x18c084u;
    // NOP
    // 0x18c088: 0x0  nop
    ctx->pc = 0x18c088u;
    // NOP
    // 0x18c08c: 0x0  nop
    ctx->pc = 0x18c08cu;
    // NOP
    if (ctx->pc == 0x18c08cu) { ctx->pc = 0x18c090u; }
}
