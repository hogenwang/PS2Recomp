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

// Function: sub_001DBFE8
// Address: 0x1dbfe8 - 0x1dc038
void sub_001DBFE8_0x1dbfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBFE8_0x1dbfe8");
#endif

    switch (ctx->pc) {
        case 0x1dbffcu: goto label_1dbffc;
        case 0x1dc014u: goto label_1dc014;
        default: break;
    }

    ctx->pc = 0x1dbfe8u;

    // 0x1dbfe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbfec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbff0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbff4: 0xc07700e  jal         func_1DC038
    ctx->pc = 0x1DBFF4u;
    SET_GPR_U32(ctx, 31, 0x1DBFFCu);
    ctx->pc = 0x1DC038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC038u, 0x1DBFF4u, 0x1DBFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBFFCu;
label_1dbffc:
    // 0x1dbffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc000: 0x24050428  addiu       $a1, $zero, 0x428
    ctx->pc = 0x1dc000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x1dc004: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC004u;
    {
        const bool branch_taken_0x1dc004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC004u;
        // 0x1dc008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc004) {
            ctx->pc = 0x1DC028u;
            goto label_1dc028;
        }
    }
    ctx->pc = 0x1DC00Cu;
    // 0x1dc00c: 0xc07707c  jal         func_1DC1F0
    ctx->pc = 0x1DC00Cu;
    SET_GPR_U32(ctx, 31, 0x1DC014u);
    ctx->pc = 0x1DC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC1F0u, 0x1DC00Cu, 0x1DC014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC014u;
label_1dc014:
    // 0x1dc014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc018: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc020: 0x8077022  j           func_1DC088
    ctx->pc = 0x1DC020u;
    ctx->pc = 0x1DC024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC020u;
    // 0x1dc024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC088u, 0x1DC020u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC028u;
label_1dc028:
    // 0x1dc028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc02c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc030: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC030u;
        // 0x1dc034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC038u;
}
