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

// Function: sub_001E1E08
// Address: 0x1e1e08 - 0x1e1e50
void sub_001E1E08_0x1e1e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1E08_0x1e1e08");
#endif

    switch (ctx->pc) {
        case 0x1e1e20u: goto label_1e1e20;
        case 0x1e1e38u: goto label_1e1e38;
        default: break;
    }

    ctx->pc = 0x1e1e08u;

    // 0x1e1e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1e10: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e1e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1e18: 0x807a6ea  j           func_1E9BA8
    ctx->pc = 0x1E1E18u;
    ctx->pc = 0x1E1E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E18u;
    // 0x1e1e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9BA8u, 0x1E1E18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E1E20u;
label_1e1e20:
    // 0x1e1e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1e28: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e1e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e1e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1e30: 0x807a688  j           func_1E9A20
    ctx->pc = 0x1E1E30u;
    ctx->pc = 0x1E1E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E30u;
    // 0x1e1e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9A20u, 0x1E1E30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E1E38u;
label_1e1e38:
    // 0x1e1e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1e40: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e1e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1e48: 0x807a6ac  j           func_1E9AB0
    ctx->pc = 0x1E1E48u;
    ctx->pc = 0x1E1E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1E48u;
    // 0x1e1e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AB0u, 0x1E1E48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E1E50u;
}
