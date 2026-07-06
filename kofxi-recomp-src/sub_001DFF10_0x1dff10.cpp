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

// Function: sub_001DFF10
// Address: 0x1dff10 - 0x1dff50
void sub_001DFF10_0x1dff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFF10_0x1dff10");
#endif

    switch (ctx->pc) {
        case 0x1dff20u: goto label_1dff20;
        default: break;
    }

    ctx->pc = 0x1dff10u;

    // 0x1dff10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dff14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dff18: 0xc078f0c  jal         func_1E3C30
    ctx->pc = 0x1DFF18u;
    SET_GPR_U32(ctx, 31, 0x1DFF20u);
    ctx->pc = 0x1DFF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF18u;
    // 0x1dff1c: 0x8c8500b8  lw          $a1, 0xB8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3C30u, 0x1DFF18u, 0x1DFF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF20u;
label_1dff20:
    // 0x1dff20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dff20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff24: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x1dff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1dff28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFF28u;
    {
        const bool branch_taken_0x1dff28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF28u;
        // 0x1dff2c: 0x24040061  addiu       $a0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff28) {
            ctx->pc = 0x1DFF38u;
            goto label_1dff38;
        }
    }
    ctx->pc = 0x1DFF30u;
    // 0x1dff30: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFF30u;
    {
        const bool branch_taken_0x1dff30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1DFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF30u;
        // 0x1dff34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff30) {
            ctx->pc = 0x1DFF40u;
            goto label_1dff40;
        }
    }
    ctx->pc = 0x1DFF38u;
label_1dff38:
    // 0x1dff38: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1dff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1dff3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dff3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dff40:
    // 0x1dff40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1dff40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF44u;
        // 0x1dff48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFF4Cu;
    // 0x1dff4c: 0x0  nop
    ctx->pc = 0x1dff4cu;
    // NOP
}
