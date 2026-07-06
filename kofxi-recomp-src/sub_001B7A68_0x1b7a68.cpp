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

// Function: sub_001B7A68
// Address: 0x1b7a68 - 0x1b7aa8
void sub_001B7A68_0x1b7a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7A68_0x1b7a68");
#endif

    switch (ctx->pc) {
        case 0x1b7a70u: goto label_1b7a70;
        case 0x1b7a84u: goto label_1b7a84;
        case 0x1b7a8cu: goto label_1b7a8c;
        case 0x1b7a94u: goto label_1b7a94;
        default: break;
    }

    ctx->pc = 0x1b7a68u;

    // 0x1b7a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A68u;
        // 0x1b7a6c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7A70u;
label_1b7a70:
    // 0x1b7a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7a78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7a7c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7A7Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A84u);
    ctx->pc = 0x1B7A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A7Cu;
    // 0x1b7a80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B7A7Cu, 0x1B7A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A84u;
label_1b7a84:
    // 0x1b7a84: 0xc06deaa  jal         func_1B7AA8
    ctx->pc = 0x1B7A84u;
    SET_GPR_U32(ctx, 31, 0x1B7A8Cu);
    ctx->pc = 0x1B7A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A84u;
    // 0x1b7a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7AA8u, 0x1B7A84u, 0x1B7A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A8Cu;
label_1b7a8c:
    // 0x1b7a8c: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B7A8Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A94u);
    ctx->pc = 0x1B7A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A8Cu;
    // 0x1b7a90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8168u, 0x1B7A8Cu, 0x1B7A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A94u;
label_1b7a94:
    // 0x1b7a94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7a98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AA0u;
        // 0x1b7aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7AA8u;
}
