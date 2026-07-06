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

// Function: sub_001F8D28
// Address: 0x1f8d28 - 0x1f8d90
void sub_001F8D28_0x1f8d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8D28_0x1f8d28");
#endif

    switch (ctx->pc) {
        case 0x1f8d50u: goto label_1f8d50;
        case 0x1f8d64u: goto label_1f8d64;
        case 0x1f8d6cu: goto label_1f8d6c;
        case 0x1f8d78u: goto label_1f8d78;
        default: break;
    }

    ctx->pc = 0x1f8d28u;

    // 0x1f8d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8d2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f8d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8d34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f8d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f8d3c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1f8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f8d40: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F8D40u;
    {
        const bool branch_taken_0x1f8d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D40u;
        // 0x1f8d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d40) {
            ctx->pc = 0x1F8D7Cu;
            goto label_1f8d7c;
        }
    }
    ctx->pc = 0x1F8D48u;
    // 0x1f8d48: 0xc07e36c  jal         func_1F8DB0
    ctx->pc = 0x1F8D48u;
    SET_GPR_U32(ctx, 31, 0x1F8D50u);
    ctx->pc = 0x1F8DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8DB0u, 0x1F8D48u, 0x1F8D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D50u;
label_1f8d50:
    // 0x1f8d50: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8D50u;
    {
        const bool branch_taken_0x1f8d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D50u;
        // 0x1f8d54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d50) {
            ctx->pc = 0x1F8D7Cu;
            goto label_1f8d7c;
        }
    }
    ctx->pc = 0x1F8D58u;
    // 0x1f8d58: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1f8d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1f8d5c: 0xc07e364  jal         func_1F8D90
    ctx->pc = 0x1F8D5Cu;
    SET_GPR_U32(ctx, 31, 0x1F8D64u);
    ctx->pc = 0x1F8D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D5Cu;
    // 0x1f8d60: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D90u, 0x1F8D5Cu, 0x1F8D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D64u;
label_1f8d64:
    // 0x1f8d64: 0xc07e384  jal         func_1F8E10
    ctx->pc = 0x1F8D64u;
    SET_GPR_U32(ctx, 31, 0x1F8D6Cu);
    ctx->pc = 0x1F8D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D64u;
    // 0x1f8d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8E10u, 0x1F8D64u, 0x1F8D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D6Cu;
label_1f8d6c:
    // 0x1f8d6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d70: 0xc07e364  jal         func_1F8D90
    ctx->pc = 0x1F8D70u;
    SET_GPR_U32(ctx, 31, 0x1F8D78u);
    ctx->pc = 0x1F8D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D70u;
    // 0x1f8d74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D90u, 0x1F8D70u, 0x1F8D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D78u;
label_1f8d78:
    // 0x1f8d78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8d7c:
    // 0x1f8d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8d80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f8d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D84u;
        // 0x1f8d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8D8Cu;
    // 0x1f8d8c: 0x0  nop
    ctx->pc = 0x1f8d8cu;
    // NOP
}
