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

// Function: sub_001DC470
// Address: 0x1dc470 - 0x1dc4b0
void sub_001DC470_0x1dc470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC470_0x1dc470");
#endif

    switch (ctx->pc) {
        case 0x1dc498u: goto label_1dc498;
        default: break;
    }

    ctx->pc = 0x1dc470u;

    // 0x1dc470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc478: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DC478u;
    {
        const bool branch_taken_0x1dc478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC478u;
        // 0x1dc47c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc478) {
            ctx->pc = 0x1DC484u;
            goto label_1dc484;
        }
    }
    ctx->pc = 0x1DC480u;
    // 0x1dc480: 0x8c8203d0  lw          $v0, 0x3D0($a0)
    ctx->pc = 0x1dc480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 976)));
label_1dc484:
    // 0x1dc484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc48c: 0x8074046  j           func_1D0118
    ctx->pc = 0x1DC48Cu;
    ctx->pc = 0x1DC490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC48Cu;
    // 0x1dc490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0118u, 0x1DC48Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC494u;
    // 0x1dc494: 0x0  nop
    ctx->pc = 0x1dc494u;
    // NOP
label_1dc498:
    // 0x1dc498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc49c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc4a0: 0x8c8403d0  lw          $a0, 0x3D0($a0)
    ctx->pc = 0x1dc4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 976)));
    // 0x1dc4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4a8: 0x8074050  j           func_1D0140
    ctx->pc = 0x1DC4A8u;
    ctx->pc = 0x1DC4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4A8u;
    // 0x1dc4ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0140u, 0x1DC4A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC4B0u;
}
