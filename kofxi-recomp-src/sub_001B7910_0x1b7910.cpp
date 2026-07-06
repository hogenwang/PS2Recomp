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

// Function: sub_001B7910
// Address: 0x1b7910 - 0x1b7960
void sub_001B7910_0x1b7910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7910_0x1b7910");
#endif

    switch (ctx->pc) {
        case 0x1b793cu: goto label_1b793c;
        case 0x1b7944u: goto label_1b7944;
        case 0x1b794cu: goto label_1b794c;
        default: break;
    }

    ctx->pc = 0x1b7910u;

    // 0x1b7910: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1b7910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1b7914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7918: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1b7918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1b791c: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x1b791cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b7920: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7920u;
        // 0x1b7924: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7928u;
    // 0x1b7928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b792c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b792cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7930: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7934: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7934u;
    SET_GPR_U32(ctx, 31, 0x1B793Cu);
    ctx->pc = 0x1B7938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7934u;
    // 0x1b7938: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B7934u, 0x1B793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B793Cu;
label_1b793c:
    // 0x1b793c: 0xc06de58  jal         func_1B7960
    ctx->pc = 0x1B793Cu;
    SET_GPR_U32(ctx, 31, 0x1B7944u);
    ctx->pc = 0x1B7940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B793Cu;
    // 0x1b7940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7960u, 0x1B793Cu, 0x1B7944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7944u;
label_1b7944:
    // 0x1b7944: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B7944u;
    SET_GPR_U32(ctx, 31, 0x1B794Cu);
    ctx->pc = 0x1B7948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7944u;
    // 0x1b7948: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8168u, 0x1B7944u, 0x1B794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B794Cu;
label_1b794c:
    // 0x1b794c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b794cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7950: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7958: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7958u;
        // 0x1b795c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7960u;
}
