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

// Function: sub_0011AE28
// Address: 0x11ae28 - 0x11ae40
void sub_0011AE28_0x11ae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AE28_0x11ae28");
#endif

    ctx->pc = 0x11ae28u;

    // 0x11ae28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ae28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ae2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ae2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ae30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ae30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ae34: 0x8046584  j           func_119610
    ctx->pc = 0x11AE34u;
    ctx->pc = 0x11AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE34u;
    // 0x11ae38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119610u, 0x11AE34u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x11AE3Cu;
    // 0x11ae3c: 0x0  nop
    ctx->pc = 0x11ae3cu;
    // NOP
}
