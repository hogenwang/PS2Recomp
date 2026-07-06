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

// Function: sub_001CC018
// Address: 0x1cc018 - 0x1cc060
void sub_001CC018_0x1cc018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC018_0x1cc018");
#endif

    switch (ctx->pc) {
        case 0x1cc038u: goto label_1cc038;
        case 0x1cc044u: goto label_1cc044;
        case 0x1cc04cu: goto label_1cc04c;
        default: break;
    }

    ctx->pc = 0x1cc018u;

    // 0x1cc018: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cc018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cc01c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1cc01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc020: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1cc020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1cc024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cc024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc028: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc02c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1cc02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1cc030: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1CC030u;
    SET_GPR_U32(ctx, 31, 0x1CC038u);
    ctx->pc = 0x1CC034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC030u;
    // 0x1cc034: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1CC030u, 0x1CC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC038u;
label_1cc038:
    // 0x1cc038: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc03c: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x1CC03Cu;
    SET_GPR_U32(ctx, 31, 0x1CC044u);
    ctx->pc = 0x1CC040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC03Cu;
    // 0x1cc040: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129B68u, 0x1CC03Cu, 0x1CC044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC044u;
label_1cc044:
    // 0x1cc044: 0xc072a06  jal         func_1CA818
    ctx->pc = 0x1CC044u;
    SET_GPR_U32(ctx, 31, 0x1CC04Cu);
    ctx->pc = 0x1CC048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC044u;
    // 0x1cc048: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA818u, 0x1CC044u, 0x1CC04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC04Cu;
label_1cc04c:
    // 0x1cc04c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1cc04cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc050: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1cc050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc054: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC054u;
        // 0x1cc058: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC05Cu;
    // 0x1cc05c: 0x0  nop
    ctx->pc = 0x1cc05cu;
    // NOP
}
