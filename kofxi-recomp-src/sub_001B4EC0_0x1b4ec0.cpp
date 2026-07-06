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

// Function: sub_001B4EC0
// Address: 0x1b4ec0 - 0x1b4f08
void sub_001B4EC0_0x1b4ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4EC0_0x1b4ec0");
#endif

    ctx->pc = 0x1b4ec0u;

    // 0x1b4ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4ec4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b4ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4ecc: 0x2442a940  addiu       $v0, $v0, -0x56C0
    ctx->pc = 0x1b4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945088));
    // 0x1b4ed0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b4ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4ed4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b4ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b4ed8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b4edc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b4edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4ee0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4EE0u;
    {
        const bool branch_taken_0x1b4ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EE0u;
        // 0x1b4ee4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ee0) {
            ctx->pc = 0x1B4F00u;
            goto label_1b4f00;
        }
    }
    ctx->pc = 0x1B4EE8u;
    // 0x1b4ee8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b4ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1b4eec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ef0: 0x2484a948  addiu       $a0, $a0, -0x56B8
    ctx->pc = 0x1b4ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945096));
    // 0x1b4ef4: 0x24060ac0  addiu       $a2, $zero, 0xAC0
    ctx->pc = 0x1b4ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2752));
    // 0x1b4ef8: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1B4EF8u;
    ctx->pc = 0x1B4EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EF8u;
    // 0x1b4efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B4F00u;
label_1b4f00:
    // 0x1b4f00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F00u;
        // 0x1b4f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4F08u;
}
