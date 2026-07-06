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

// Function: sub_001B4CF0
// Address: 0x1b4cf0 - 0x1b4d80
void sub_001B4CF0_0x1b4cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4CF0_0x1b4cf0");
#endif

    ctx->pc = 0x1b4cf0u;

    // 0x1b4cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4cfc: 0x80728ee  j           func_1CA3B8
    ctx->pc = 0x1B4CFCu;
    ctx->pc = 0x1B4D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4CFCu;
    // 0x1b4d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA3B8u, 0x1B4CFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4D04u;
    // 0x1b4d04: 0x0  nop
    ctx->pc = 0x1b4d04u;
    // NOP
    // 0x1b4d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4d14: 0x8072914  j           func_1CA450
    ctx->pc = 0x1B4D14u;
    ctx->pc = 0x1B4D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D14u;
    // 0x1b4d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA450u, 0x1B4D14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4D1Cu;
    // 0x1b4d1c: 0x0  nop
    ctx->pc = 0x1b4d1cu;
    // NOP
    // 0x1b4d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4d2c: 0x8072920  j           func_1CA480
    ctx->pc = 0x1B4D2Cu;
    ctx->pc = 0x1B4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D2Cu;
    // 0x1b4d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA480u, 0x1B4D2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4D34u;
    // 0x1b4d34: 0x0  nop
    ctx->pc = 0x1b4d34u;
    // NOP
    // 0x1b4d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4d44: 0x807292c  j           func_1CA4B0
    ctx->pc = 0x1B4D44u;
    ctx->pc = 0x1B4D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D44u;
    // 0x1b4d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA4B0u, 0x1B4D44u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4D4Cu;
    // 0x1b4d4c: 0x0  nop
    ctx->pc = 0x1b4d4cu;
    // NOP
    // 0x1b4d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4d5c: 0x807293a  j           func_1CA4E8
    ctx->pc = 0x1B4D5Cu;
    ctx->pc = 0x1B4D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D5Cu;
    // 0x1b4d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA4E8u, 0x1B4D5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4D64u;
    // 0x1b4d64: 0x0  nop
    ctx->pc = 0x1b4d64u;
    // NOP
    // 0x1b4d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4d6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4d74: 0x8072946  j           func_1CA518
    ctx->pc = 0x1B4D74u;
    ctx->pc = 0x1B4D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D74u;
    // 0x1b4d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA518u, 0x1B4D74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4D7Cu;
    // 0x1b4d7c: 0x0  nop
    ctx->pc = 0x1b4d7cu;
    // NOP
    if (ctx->pc == 0x1b4d7cu) { ctx->pc = 0x1b4d80u; }
}
