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

// Function: sub_002D8260
// Address: 0x2d8260 - 0x2d8288
void sub_002D8260_0x2d8260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8260_0x2d8260");
#endif

    ctx->pc = 0x2d8260u;

    // 0x2d8260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8264: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8264u;
    {
        const bool branch_taken_0x2d8264 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8264u;
        // 0x2d8268: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8264) {
            ctx->pc = 0x2D8278u;
            goto label_2d8278;
        }
    }
    ctx->pc = 0x2D826Cu;
    // 0x2d826c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d826cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8270: 0x80b6132  j           func_2D84C8
    ctx->pc = 0x2D8270u;
    ctx->pc = 0x2D8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8270u;
    // 0x2d8274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D84C8u, 0x2D8270u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2D8278u;
label_2d8278:
    // 0x2d8278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d827c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D827Cu;
        // 0x2d8280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8284u;
    // 0x2d8284: 0x0  nop
    ctx->pc = 0x2d8284u;
    // NOP
}
