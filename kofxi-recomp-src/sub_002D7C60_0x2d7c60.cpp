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

// Function: sub_002D7C60
// Address: 0x2d7c60 - 0x2d7ca0
void sub_002D7C60_0x2d7c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7C60_0x2d7c60");
#endif

    switch (ctx->pc) {
        case 0x2d7c88u: goto label_2d7c88;
        default: break;
    }

    ctx->pc = 0x2d7c60u;

    // 0x2d7c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7c64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d7c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7c6c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d7c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d7c70: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2d7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d7c74: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7C74u;
    {
        const bool branch_taken_0x2d7c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C74u;
        // 0x2d7c78: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c74) {
            ctx->pc = 0x2D7C8Cu;
            goto label_2d7c8c;
        }
    }
    ctx->pc = 0x2D7C7Cu;
    // 0x2d7c7c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2d7c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7c80: 0xc0b60ac  jal         func_2D82B0
    ctx->pc = 0x2D7C80u;
    SET_GPR_U32(ctx, 31, 0x2D7C88u);
    ctx->pc = 0x2D7C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C80u;
    // 0x2d7c84: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82B0u, 0x2D7C80u, 0x2D7C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C88u;
label_2d7c88:
    // 0x2d7c88: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x2d7c88u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2d7c8c:
    // 0x2d7c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7c90: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2d7c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c94: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C94u;
        // 0x2d7c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7C9Cu;
    // 0x2d7c9c: 0x0  nop
    ctx->pc = 0x2d7c9cu;
    // NOP
}
