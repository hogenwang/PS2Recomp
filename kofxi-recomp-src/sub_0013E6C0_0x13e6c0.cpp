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

// Function: sub_0013E6C0
// Address: 0x13e6c0 - 0x13e6f0
void sub_0013E6C0_0x13e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E6C0_0x13e6c0");
#endif

    switch (ctx->pc) {
        case 0x13e6d0u: goto label_13e6d0;
        default: break;
    }

    ctx->pc = 0x13e6c0u;

    // 0x13e6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e6c8: 0xc062948  jal         func_18A520
    ctx->pc = 0x13E6C8u;
    SET_GPR_U32(ctx, 31, 0x13E6D0u);
    ctx->pc = 0x13E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6C8u;
    // 0x13e6cc: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x13E6C8u, 0x13E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E6D0u;
label_13e6d0:
    // 0x13e6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e6d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13e6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13e6d8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13e6dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13e6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13e6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6E0u;
        // 0x13e6e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E6E8u;
    // 0x13e6e8: 0x0  nop
    ctx->pc = 0x13e6e8u;
    // NOP
    // 0x13e6ec: 0x0  nop
    ctx->pc = 0x13e6ecu;
    // NOP
}
