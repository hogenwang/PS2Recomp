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

// Function: sub_001B8000
// Address: 0x1b8000 - 0x1b8048
void sub_001B8000_0x1b8000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8000_0x1b8000");
#endif

    switch (ctx->pc) {
        case 0x1b8010u: goto label_1b8010;
        case 0x1b8024u: goto label_1b8024;
        case 0x1b802cu: goto label_1b802c;
        case 0x1b8034u: goto label_1b8034;
        default: break;
    }

    ctx->pc = 0x1b8000u;

    // 0x1b8000: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b8000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b8004: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8004u;
        // 0x1b8008: 0x8c62004c  lw          $v0, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B800Cu;
    // 0x1b800c: 0x0  nop
    ctx->pc = 0x1b800cu;
    // NOP
label_1b8010:
    // 0x1b8010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8018: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b8018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b801c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B801Cu;
    SET_GPR_U32(ctx, 31, 0x1B8024u);
    ctx->pc = 0x1B8020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B801Cu;
    // 0x1b8020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B801Cu, 0x1B8024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8024u;
label_1b8024:
    // 0x1b8024: 0xc06e012  jal         func_1B8048
    ctx->pc = 0x1B8024u;
    SET_GPR_U32(ctx, 31, 0x1B802Cu);
    ctx->pc = 0x1B8028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8024u;
    // 0x1b8028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8048u, 0x1B8024u, 0x1B802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B802Cu;
label_1b802c:
    // 0x1b802c: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B802Cu;
    SET_GPR_U32(ctx, 31, 0x1B8034u);
    ctx->pc = 0x1B8030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B802Cu;
    // 0x1b8030: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8168u, 0x1B802Cu, 0x1B8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8034u;
label_1b8034:
    // 0x1b8034: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b8034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8038: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b803c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b803cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8040: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8040u;
        // 0x1b8044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8048u;
}
