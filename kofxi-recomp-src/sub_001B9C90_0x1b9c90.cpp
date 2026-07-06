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

// Function: sub_001B9C90
// Address: 0x1b9c90 - 0x1b9d18
void sub_001B9C90_0x1b9c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9C90_0x1b9c90");
#endif

    switch (ctx->pc) {
        case 0x1b9ca8u: goto label_1b9ca8;
        case 0x1b9cf4u: goto label_1b9cf4;
        case 0x1b9cfcu: goto label_1b9cfc;
        case 0x1b9d04u: goto label_1b9d04;
        default: break;
    }

    ctx->pc = 0x1b9c90u;

    // 0x1b9c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9c94: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9C94u;
    {
        const bool branch_taken_0x1b9c94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C94u;
        // 0x1b9c98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c94) {
            ctx->pc = 0x1B9CB0u;
            goto label_1b9cb0;
        }
    }
    ctx->pc = 0x1B9C9Cu;
    // 0x1b9c9c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b9c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1b9ca0: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B9CA0u;
    SET_GPR_U32(ctx, 31, 0x1B9CA8u);
    ctx->pc = 0x1B9CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CA0u;
    // 0x1b9ca4: 0x248481d8  addiu       $a0, $a0, -0x7E28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B9CA0u, 0x1B9CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CA8u;
label_1b9ca8:
    // 0x1b9ca8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9CA8u;
    {
        const bool branch_taken_0x1b9ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CA8u;
        // 0x1b9cac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ca8) {
            ctx->pc = 0x1B9CD0u;
            goto label_1b9cd0;
        }
    }
    ctx->pc = 0x1B9CB0u;
label_1b9cb0:
    // 0x1b9cb0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1b9cb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b9cb4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b9cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b9cb8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9CB8u;
    {
        const bool branch_taken_0x1b9cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9cb8) {
            ctx->pc = 0x1B9CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9CB8u;
            // 0x1b9cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9CD0u;
            goto label_1b9cd0;
        }
    }
    ctx->pc = 0x1B9CC0u;
    // 0x1b9cc0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b9cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b9cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9cc8: 0x806d936  j           func_1B64D8
    ctx->pc = 0x1B9CC8u;
    ctx->pc = 0x1B9CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CC8u;
    // 0x1b9ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B64D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B64D8u, 0x1B9CC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B9CD0u;
label_1b9cd0:
    // 0x1b9cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CD4u;
        // 0x1b9cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9CDCu;
    // 0x1b9cdc: 0x0  nop
    ctx->pc = 0x1b9cdcu;
    // NOP
    // 0x1b9ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9ce8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b9ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b9cec: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B9CECu;
    SET_GPR_U32(ctx, 31, 0x1B9CF4u);
    ctx->pc = 0x1B9CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CECu;
    // 0x1b9cf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B9CECu, 0x1B9CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CF4u;
label_1b9cf4:
    // 0x1b9cf4: 0xc06e746  jal         func_1B9D18
    ctx->pc = 0x1B9CF4u;
    SET_GPR_U32(ctx, 31, 0x1B9CFCu);
    ctx->pc = 0x1B9CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CF4u;
    // 0x1b9cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D18u, 0x1B9CF4u, 0x1B9CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CFCu;
label_1b9cfc:
    // 0x1b9cfc: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B9CFCu;
    SET_GPR_U32(ctx, 31, 0x1B9D04u);
    ctx->pc = 0x1B9D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CFCu;
    // 0x1b9d00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1B9CFCu, 0x1B9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D04u;
label_1b9d04:
    // 0x1b9d04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b9d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9d08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b9d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9d10: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D10u;
        // 0x1b9d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9D18u;
}
