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

// Function: sub_00240EE0
// Address: 0x240ee0 - 0x240f50
void sub_00240EE0_0x240ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240EE0_0x240ee0");
#endif

    ctx->pc = 0x240ee0u;

    // 0x240ee0: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x240ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x240ee4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x240EE4u;
    {
        const bool branch_taken_0x240ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EE4u;
        // 0x240ee8: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ee4) {
            ctx->pc = 0x240F40u;
            goto label_240f40;
        }
    }
    ctx->pc = 0x240EECu;
    // 0x240eec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240ef0: 0x24426480  addiu       $v0, $v0, 0x6480
    ctx->pc = 0x240ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25728));
    // 0x240ef4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240ef8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x240ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240efc: 0x800008  jr          $a0
    ctx->pc = 0x240EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240F04u: goto label_240f04;
            case 0x240F10u: goto label_240f10;
            case 0x240F1Cu: goto label_240f1c;
            case 0x240F28u: goto label_240f28;
            case 0x240F34u: goto label_240f34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240EFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x240F04u;
label_240f04:
    // 0x240f04: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240f08: 0x3e00008  jr          $ra
    ctx->pc = 0x240F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F08u;
        // 0x240f0c: 0x24426438  addiu       $v0, $v0, 0x6438 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240F10u;
label_240f10:
    // 0x240f10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240f14: 0x3e00008  jr          $ra
    ctx->pc = 0x240F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F14u;
        // 0x240f18: 0x24426440  addiu       $v0, $v0, 0x6440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240F1Cu;
label_240f1c:
    // 0x240f1c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240f20: 0x3e00008  jr          $ra
    ctx->pc = 0x240F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F20u;
        // 0x240f24: 0x24426450  addiu       $v0, $v0, 0x6450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240F28u;
label_240f28:
    // 0x240f28: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x240F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F2Cu;
        // 0x240f30: 0x24426460  addiu       $v0, $v0, 0x6460 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240F34u;
label_240f34:
    // 0x240f34: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240f38: 0x3e00008  jr          $ra
    ctx->pc = 0x240F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F38u;
        // 0x240f3c: 0x24426470  addiu       $v0, $v0, 0x6470 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25712));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240F40u;
label_240f40:
    // 0x240f40: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x240f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x240f44: 0x3e00008  jr          $ra
    ctx->pc = 0x240F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F44u;
        // 0x240f48: 0x24426400  addiu       $v0, $v0, 0x6400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240F4Cu;
    // 0x240f4c: 0x0  nop
    ctx->pc = 0x240f4cu;
    // NOP
    if (ctx->pc == 0x240f4cu) { ctx->pc = 0x240f50u; }
}
