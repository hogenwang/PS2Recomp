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

// Function: sub_001F8B38
// Address: 0x1f8b38 - 0x1f8b50
void sub_001F8B38_0x1f8b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8B38_0x1f8b38");
#endif

    ctx->pc = 0x1f8b38u;

    // 0x1f8b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8b3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f8b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8b48: 0x807f63c  j           func_1FD8F0
    ctx->pc = 0x1F8B48u;
    ctx->pc = 0x1F8B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B48u;
    // 0x1f8b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8F0u, 0x1F8B48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F8B50u;
}
