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

// Function: sub_00110F30
// Address: 0x110f30 - 0x110f70
void sub_00110F30_0x110f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110F30_0x110f30");
#endif

    ctx->pc = 0x110f30u;

    // 0x110f30: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x110f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x110f34: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x110F34u;
    {
        const bool branch_taken_0x110f34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x110f34) {
            ctx->pc = 0x110F5Cu;
            goto label_110f5c;
        }
    }
    ctx->pc = 0x110F3Cu;
    // 0x110f3c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x110f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x110f40: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x110f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x110f44: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110F44u;
    {
        const bool branch_taken_0x110f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x110f44) {
            ctx->pc = 0x110F5Cu;
            goto label_110f5c;
        }
    }
    ctx->pc = 0x110F4Cu;
    // 0x110f4c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x110f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x110f50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x110f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x110f54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110F54u;
    {
        const bool branch_taken_0x110f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110f54) {
            ctx->pc = 0x110F64u;
            goto label_110f64;
        }
    }
    ctx->pc = 0x110F5Cu;
label_110f5c:
    // 0x110f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x110F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F5Cu;
        // 0x110f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F64u;
label_110f64:
    // 0x110f64: 0x3e00008  jr          $ra
    ctx->pc = 0x110F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F64u;
        // 0x110f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F6Cu;
    // 0x110f6c: 0x0  nop
    ctx->pc = 0x110f6cu;
    // NOP
    if (ctx->pc == 0x110f6cu) { ctx->pc = 0x110f70u; }
}
