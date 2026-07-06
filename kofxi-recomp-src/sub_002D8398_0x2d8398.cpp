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

// Function: sub_002D8398
// Address: 0x2d8398 - 0x2d83b0
void sub_002D8398_0x2d8398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8398_0x2d8398");
#endif

    ctx->pc = 0x2d8398u;

    // 0x2d8398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d839c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d83a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d83a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d83a4: 0x80b6104  j           func_2D8410
    ctx->pc = 0x2D83A4u;
    ctx->pc = 0x2D83A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D83A4u;
    // 0x2d83a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8410u, 0x2D83A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2D83ACu;
    // 0x2d83ac: 0x0  nop
    ctx->pc = 0x2d83acu;
    // NOP
}
