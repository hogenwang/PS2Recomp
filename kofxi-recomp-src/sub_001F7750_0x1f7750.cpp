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

// Function: sub_001F7750
// Address: 0x1f7750 - 0x1f7778
void sub_001F7750_0x1f7750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7750_0x1f7750");
#endif

    switch (ctx->pc) {
        case 0x1f7764u: goto label_1f7764;
        default: break;
    }

    ctx->pc = 0x1f7750u;

    // 0x1f7750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7758: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f7758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f775c: 0xc07ddde  jal         func_1F7778
    ctx->pc = 0x1F775Cu;
    SET_GPR_U32(ctx, 31, 0x1F7764u);
    ctx->pc = 0x1F7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F775Cu;
    // 0x1f7760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7778u, 0x1F775Cu, 0x1F7764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7764u;
label_1f7764:
    // 0x1f7764: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f7764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f776c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f776cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7770: 0x807e890  j           func_1FA240
    ctx->pc = 0x1F7770u;
    ctx->pc = 0x1F7774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7770u;
    // 0x1f7774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA240u, 0x1F7770u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F7778u;
}
