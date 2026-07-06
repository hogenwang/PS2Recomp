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

// Function: sub_001BB218
// Address: 0x1bb218 - 0x1bb268
void sub_001BB218_0x1bb218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB218_0x1bb218");
#endif

    switch (ctx->pc) {
        case 0x1bb244u: goto label_1bb244;
        case 0x1bb24cu: goto label_1bb24c;
        case 0x1bb254u: goto label_1bb254;
        default: break;
    }

    ctx->pc = 0x1bb218u;

    // 0x1bb218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb21c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb224: 0x806d36a  j           func_1B4DA8
    ctx->pc = 0x1BB224u;
    ctx->pc = 0x1BB228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB224u;
    // 0x1bb228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4DA8u, 0x1BB224u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1BB22Cu;
    // 0x1bb22c: 0x0  nop
    ctx->pc = 0x1bb22cu;
    // NOP
    // 0x1bb230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb23c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB23Cu;
    SET_GPR_U32(ctx, 31, 0x1BB244u);
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BB23Cu, 0x1BB244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB244u;
label_1bb244:
    // 0x1bb244: 0xc06ec9a  jal         func_1BB268
    ctx->pc = 0x1BB244u;
    SET_GPR_U32(ctx, 31, 0x1BB24Cu);
    ctx->pc = 0x1BB268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB268u, 0x1BB244u, 0x1BB24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB24Cu;
label_1bb24c:
    // 0x1bb24c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BB24Cu;
    SET_GPR_U32(ctx, 31, 0x1BB254u);
    ctx->pc = 0x1BB250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB24Cu;
    // 0x1bb250: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BB24Cu, 0x1BB254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB254u;
label_1bb254:
    // 0x1bb254: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb258: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb25c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb260: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB260u;
        // 0x1bb264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB268u;
}
