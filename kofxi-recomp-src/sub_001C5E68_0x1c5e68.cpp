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

// Function: sub_001C5E68
// Address: 0x1c5e68 - 0x1c5e98
void sub_001C5E68_0x1c5e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5E68_0x1c5e68");
#endif

    switch (ctx->pc) {
        case 0x1c5e7cu: goto label_1c5e7c;
        case 0x1c5e84u: goto label_1c5e84;
        default: break;
    }

    ctx->pc = 0x1c5e68u;

    // 0x1c5e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5e70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c5e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c5e74: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C5E74u;
    SET_GPR_U32(ctx, 31, 0x1C5E7Cu);
    ctx->pc = 0x1C5E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E74u;
    // 0x1c5e78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C5E74u, 0x1C5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E7Cu;
label_1c5e7c:
    // 0x1c5e7c: 0xc0717a6  jal         func_1C5E98
    ctx->pc = 0x1C5E7Cu;
    SET_GPR_U32(ctx, 31, 0x1C5E84u);
    ctx->pc = 0x1C5E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E7Cu;
    // 0x1c5e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5E98u, 0x1C5E7Cu, 0x1C5E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E84u;
label_1c5e84:
    // 0x1c5e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5e88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c5e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5e8c: 0x8071ab0  j           func_1C6AC0
    ctx->pc = 0x1C5E8Cu;
    ctx->pc = 0x1C5E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E8Cu;
    // 0x1c5e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C5E94u;
    // 0x1c5e94: 0x0  nop
    ctx->pc = 0x1c5e94u;
    // NOP
    if (ctx->pc == 0x1c5e94u) { ctx->pc = 0x1c5e98u; }
}
