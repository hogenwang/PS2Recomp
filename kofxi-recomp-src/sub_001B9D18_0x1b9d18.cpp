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

// Function: sub_001B9D18
// Address: 0x1b9d18 - 0x1b9d68
void sub_001B9D18_0x1b9d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9D18_0x1b9d18");
#endif

    switch (ctx->pc) {
        case 0x1b9d30u: goto label_1b9d30;
        default: break;
    }

    ctx->pc = 0x1b9d18u;

    // 0x1b9d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9d1c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9D1Cu;
    {
        const bool branch_taken_0x1b9d1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D1Cu;
        // 0x1b9d20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d1c) {
            ctx->pc = 0x1B9D38u;
            goto label_1b9d38;
        }
    }
    ctx->pc = 0x1B9D24u;
    // 0x1b9d24: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b9d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1b9d28: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B9D28u;
    SET_GPR_U32(ctx, 31, 0x1B9D30u);
    ctx->pc = 0x1B9D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D28u;
    // 0x1b9d2c: 0x24848208  addiu       $a0, $a0, -0x7DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B9D28u, 0x1B9D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D30u;
label_1b9d30:
    // 0x1b9d30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9D30u;
    {
        const bool branch_taken_0x1b9d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D30u;
        // 0x1b9d34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d30) {
            ctx->pc = 0x1B9D58u;
            goto label_1b9d58;
        }
    }
    ctx->pc = 0x1B9D38u;
label_1b9d38:
    // 0x1b9d38: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1b9d38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b9d3c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b9d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b9d40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9D40u;
    {
        const bool branch_taken_0x1b9d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9d40) {
            ctx->pc = 0x1B9D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9D40u;
            // 0x1b9d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9D58u;
            goto label_1b9d58;
        }
    }
    ctx->pc = 0x1B9D48u;
    // 0x1b9d48: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b9d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b9d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9d50: 0x806d938  j           func_1B64E0
    ctx->pc = 0x1B9D50u;
    ctx->pc = 0x1B9D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D50u;
    // 0x1b9d54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B64E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B64E0u, 0x1B9D50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B9D58u;
label_1b9d58:
    // 0x1b9d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D5Cu;
        // 0x1b9d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9D64u;
    // 0x1b9d64: 0x0  nop
    ctx->pc = 0x1b9d64u;
    // NOP
}
