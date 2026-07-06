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

// Function: sub_001C5D28
// Address: 0x1c5d28 - 0x1c5d60
void sub_001C5D28_0x1c5d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5D28_0x1c5d28");
#endif

    switch (ctx->pc) {
        case 0x1c5d3cu: goto label_1c5d3c;
        case 0x1c5d44u: goto label_1c5d44;
        case 0x1c5d4cu: goto label_1c5d4c;
        default: break;
    }

    ctx->pc = 0x1c5d28u;

    // 0x1c5d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5d30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c5d34: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C5D34u;
    SET_GPR_U32(ctx, 31, 0x1C5D3Cu);
    ctx->pc = 0x1C5D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D34u;
    // 0x1c5d38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C5D34u, 0x1C5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D3Cu;
label_1c5d3c:
    // 0x1c5d3c: 0xc071758  jal         func_1C5D60
    ctx->pc = 0x1C5D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C5D44u);
    ctx->pc = 0x1C5D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D3Cu;
    // 0x1c5d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D60u, 0x1C5D3Cu, 0x1C5D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D44u;
label_1c5d44:
    // 0x1c5d44: 0xc071ab0  jal         func_1C6AC0
    ctx->pc = 0x1C5D44u;
    SET_GPR_U32(ctx, 31, 0x1C5D4Cu);
    ctx->pc = 0x1C5D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D44u;
    // 0x1c5d48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AC0u, 0x1C5D44u, 0x1C5D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D4Cu;
label_1c5d4c:
    // 0x1c5d4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c5d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5d50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c5d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5d58: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D58u;
        // 0x1c5d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5D60u;
}
