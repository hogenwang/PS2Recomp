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

// Function: sub_002E8B28
// Address: 0x2e8b28 - 0x2e8b88
void sub_002E8B28_0x2e8b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8B28_0x2e8b28");
#endif

    switch (ctx->pc) {
        case 0x2e8b58u: goto label_2e8b58;
        case 0x2e8b6cu: goto label_2e8b6c;
        default: break;
    }

    ctx->pc = 0x2e8b28u;

    // 0x2e8b28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e8b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e8b2c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2e8b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2e8b30: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2e8b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2e8b34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e8b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b38: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2e8b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2e8b3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e8b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e8b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e8b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b4c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2e8b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e8b50: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2E8B50u;
    SET_GPR_U32(ctx, 31, 0x2E8B58u);
    ctx->pc = 0x2E8B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B50u;
    // 0x2e8b54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2E8B50u, 0x2E8B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B58u;
label_2e8b58:
    // 0x2e8b58: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x2e8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x2e8b5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e8b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b60: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x2e8b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x2e8b64: 0xc043318  jal         func_10CC60
    ctx->pc = 0x2E8B64u;
    SET_GPR_U32(ctx, 31, 0x2E8B6Cu);
    ctx->pc = 0x2E8B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B64u;
    // 0x2e8b68: 0xafb20014  sw          $s2, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x2E8B64u, 0x2E8B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B6Cu;
label_2e8b6c:
    // 0x2e8b6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e8b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8b70: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2e8b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8b74: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2e8b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8b78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e8b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B7Cu;
        // 0x2e8b80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8B84u;
    // 0x2e8b84: 0x0  nop
    ctx->pc = 0x2e8b84u;
    // NOP
}
