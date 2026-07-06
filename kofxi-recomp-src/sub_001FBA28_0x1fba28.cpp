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

// Function: sub_001FBA28
// Address: 0x1fba28 - 0x1fba70
void sub_001FBA28_0x1fba28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBA28_0x1fba28");
#endif

    switch (ctx->pc) {
        case 0x1fba40u: goto label_1fba40;
        default: break;
    }

    ctx->pc = 0x1fba28u;

    // 0x1fba28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fba2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fba30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fba30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fba38: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1FBA38u;
    SET_GPR_U32(ctx, 31, 0x1FBA40u);
    ctx->pc = 0x1FBA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA38u;
    // 0x1fba3c: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1FBA38u, 0x1FBA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA40u;
label_1fba40:
    // 0x1fba40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fba40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fba44: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBA44u;
    {
        const bool branch_taken_0x1fba44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fba44) {
            ctx->pc = 0x1FBA58u;
            goto label_1fba58;
        }
    }
    ctx->pc = 0x1FBA4Cu;
    // 0x1fba4c: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x1fba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1fba50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBA50u;
    {
        const bool branch_taken_0x1fba50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA50u;
        // 0x1fba54: 0xae0202d0  sw          $v0, 0x2D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba50) {
            ctx->pc = 0x1FBA60u;
            goto label_1fba60;
        }
    }
    ctx->pc = 0x1FBA58u;
label_1fba58:
    // 0x1fba58: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1fba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1fba5c: 0xae0202d0  sw          $v0, 0x2D0($s0)
    ctx->pc = 0x1fba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
label_1fba60:
    // 0x1fba60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fba60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fba64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fba64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fba68: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA68u;
        // 0x1fba6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBA70u;
}
