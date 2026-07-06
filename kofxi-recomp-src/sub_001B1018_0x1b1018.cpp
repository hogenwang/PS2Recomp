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

// Function: sub_001B1018
// Address: 0x1b1018 - 0x1b1048
void sub_001B1018_0x1b1018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1018_0x1b1018");
#endif

    switch (ctx->pc) {
        case 0x1b1030u: goto label_1b1030;
        default: break;
    }

    ctx->pc = 0x1b1018u;

    // 0x1b1018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b101c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B101Cu;
    {
        const bool branch_taken_0x1b101c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B101Cu;
        // 0x1b1020: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b101c) {
            ctx->pc = 0x1B1038u;
            goto label_1b1038;
        }
    }
    ctx->pc = 0x1B1024u;
    // 0x1b1024: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b1024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b1028: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B1028u;
    SET_GPR_U32(ctx, 31, 0x1B1030u);
    ctx->pc = 0x1B102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1028u;
    // 0x1b102c: 0x24847948  addiu       $a0, $a0, 0x7948 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B1028u, 0x1B1030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1030u;
label_1b1030:
    // 0x1b1030: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1030u;
    {
        const bool branch_taken_0x1b1030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1030u;
        // 0x1b1034: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1030) {
            ctx->pc = 0x1B103Cu;
            goto label_1b103c;
        }
    }
    ctx->pc = 0x1B1038u;
label_1b1038:
    // 0x1b1038: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1b1038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1b103c:
    // 0x1b103c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b103cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1040: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1040u;
        // 0x1b1044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1048u;
}
