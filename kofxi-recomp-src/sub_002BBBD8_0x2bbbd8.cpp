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

// Function: sub_002BBBD8
// Address: 0x2bbbd8 - 0x2bbc38
void sub_002BBBD8_0x2bbbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBBD8_0x2bbbd8");
#endif

    switch (ctx->pc) {
        case 0x2bbc10u: goto label_2bbc10;
        case 0x2bbc20u: goto label_2bbc20;
        default: break;
    }

    ctx->pc = 0x2bbbd8u;

    // 0x2bbbd8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2bbbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBDCu;
        // 0x2bbbe0: 0x24427cd8  addiu       $v0, $v0, 0x7CD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBBE4u;
    // 0x2bbbe4: 0x0  nop
    ctx->pc = 0x2bbbe4u;
    // NOP
    // 0x2bbbe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbbec: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x2bbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2bbbf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bbbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbbf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bbbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bbbf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bbbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbbfc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bbbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbc00: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBC00u;
    {
        const bool branch_taken_0x2bbc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bbc00) {
            ctx->pc = 0x2BBC18u;
            goto label_2bbc18;
        }
    }
    ctx->pc = 0x2BBC08u;
    // 0x2bbc08: 0xc0ac626  jal         func_2B1898
    ctx->pc = 0x2BBC08u;
    SET_GPR_U32(ctx, 31, 0x2BBC10u);
    ctx->pc = 0x2BBC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC08u;
    // 0x2bbc0c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1898u, 0x2BBC08u, 0x2BBC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC10u;
label_2bbc10:
    // 0x2bbc10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBC10u;
    {
        const bool branch_taken_0x2bbc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC10u;
        // 0x2bbc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc10) {
            ctx->pc = 0x2BBC28u;
            goto label_2bbc28;
        }
    }
    ctx->pc = 0x2BBC18u;
label_2bbc18:
    // 0x2bbc18: 0xc0a7208  jal         func_29C820
    ctx->pc = 0x2BBC18u;
    SET_GPR_U32(ctx, 31, 0x2BBC20u);
    ctx->pc = 0x2BBC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC18u;
    // 0x2bbc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C820u, 0x2BBC18u, 0x2BBC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC20u;
label_2bbc20:
    // 0x2bbc20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBC20u;
    {
        const bool branch_taken_0x2bbc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC20u;
        // 0x2bbc24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc20) {
            ctx->pc = 0x2BBC2Cu;
            goto label_2bbc2c;
        }
    }
    ctx->pc = 0x2BBC28u;
label_2bbc28:
    // 0x2bbc28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bbc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bbc2c:
    // 0x2bbc2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbc2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbc30: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC30u;
        // 0x2bbc34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBC38u;
}
