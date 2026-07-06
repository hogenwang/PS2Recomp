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

// Function: sub_002D8288
// Address: 0x2d8288 - 0x2d82b0
void sub_002D8288_0x2d8288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8288_0x2d8288");
#endif

    ctx->pc = 0x2d8288u;

    // 0x2d8288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d828c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D828Cu;
    {
        const bool branch_taken_0x2d828c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D828Cu;
        // 0x2d8290: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d828c) {
            ctx->pc = 0x2D82A0u;
            goto label_2d82a0;
        }
    }
    ctx->pc = 0x2D8294u;
    // 0x2d8294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8298: 0x80b6150  j           func_2D8540
    ctx->pc = 0x2D8298u;
    ctx->pc = 0x2D829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8298u;
    // 0x2d829c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8540u, 0x2D8298u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2D82A0u;
label_2d82a0:
    // 0x2d82a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d82a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d82a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D82A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82A4u;
        // 0x2d82a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D82A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D82ACu;
    // 0x2d82ac: 0x0  nop
    ctx->pc = 0x2d82acu;
    // NOP
}
