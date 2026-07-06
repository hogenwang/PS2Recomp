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

// Function: sub_001B4E68
// Address: 0x1b4e68 - 0x1b4ec0
void sub_001B4E68_0x1b4e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4E68_0x1b4e68");
#endif

    switch (ctx->pc) {
        case 0x1b4e8cu: goto label_1b4e8c;
        case 0x1b4ea0u: goto label_1b4ea0;
        default: break;
    }

    ctx->pc = 0x1b4e68u;

    // 0x1b4e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4e6c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b4e70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4e74: 0x2450a940  addiu       $s0, $v0, -0x56C0
    ctx->pc = 0x1b4e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945088));
    // 0x1b4e78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4e7c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4E7Cu;
    {
        const bool branch_taken_0x1b4e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E7Cu;
        // 0x1b4e80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e7c) {
            ctx->pc = 0x1B4EA0u;
            goto label_1b4ea0;
        }
    }
    ctx->pc = 0x1B4E84u;
    // 0x1b4e84: 0xc06ac64  jal         func_1AB190
    ctx->pc = 0x1B4E84u;
    SET_GPR_U32(ctx, 31, 0x1B4E8Cu);
    ctx->pc = 0x1AB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB190u, 0x1B4E84u, 0x1B4E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E8Cu;
label_1b4e8c:
    // 0x1b4e8c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1b4e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1b4e90: 0x2484a948  addiu       $a0, $a0, -0x56B8
    ctx->pc = 0x1b4e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945096));
    // 0x1b4e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e98: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1B4E98u;
    SET_GPR_U32(ctx, 31, 0x1B4EA0u);
    ctx->pc = 0x1B4E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E98u;
    // 0x1b4e9c: 0x24060ac0  addiu       $a2, $zero, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1B4E98u, 0x1B4EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EA0u;
label_1b4ea0:
    // 0x1b4ea0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4ea4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b4ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4ea8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b4eac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b4eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b4eb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EB4u;
        // 0x1b4eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4EBCu;
    // 0x1b4ebc: 0x0  nop
    ctx->pc = 0x1b4ebcu;
    // NOP
    if (ctx->pc == 0x1b4ebcu) { ctx->pc = 0x1b4ec0u; }
}
