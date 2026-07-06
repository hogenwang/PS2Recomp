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

// Function: sub_001B9B48
// Address: 0x1b9b48 - 0x1b9b80
void sub_001B9B48_0x1b9b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9B48_0x1b9b48");
#endif

    switch (ctx->pc) {
        case 0x1b9b5cu: goto label_1b9b5c;
        case 0x1b9b64u: goto label_1b9b64;
        case 0x1b9b6cu: goto label_1b9b6c;
        default: break;
    }

    ctx->pc = 0x1b9b48u;

    // 0x1b9b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9b50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b9b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b9b54: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B9B54u;
    SET_GPR_U32(ctx, 31, 0x1B9B5Cu);
    ctx->pc = 0x1B9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B54u;
    // 0x1b9b58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B9B54u, 0x1B9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B5Cu;
label_1b9b5c:
    // 0x1b9b5c: 0xc06e6e0  jal         func_1B9B80
    ctx->pc = 0x1B9B5Cu;
    SET_GPR_U32(ctx, 31, 0x1B9B64u);
    ctx->pc = 0x1B9B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B5Cu;
    // 0x1b9b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9B80u, 0x1B9B5Cu, 0x1B9B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B64u;
label_1b9b64:
    // 0x1b9b64: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B9B64u;
    SET_GPR_U32(ctx, 31, 0x1B9B6Cu);
    ctx->pc = 0x1B9B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B64u;
    // 0x1b9b68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1B9B64u, 0x1B9B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B6Cu;
label_1b9b6c:
    // 0x1b9b6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b9b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b9b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B78u;
        // 0x1b9b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9B80u;
}
