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

// Function: sub_001ED9D8
// Address: 0x1ed9d8 - 0x1edae8
void sub_001ED9D8_0x1ed9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED9D8_0x1ed9d8");
#endif

    switch (ctx->pc) {
        case 0x1eda14u: goto label_1eda14;
        default: break;
    }

    ctx->pc = 0x1ed9d8u;

    // 0x1ed9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed9e4: 0x80736d8  j           func_1CDB60
    ctx->pc = 0x1ED9E4u;
    ctx->pc = 0x1ED9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9E4u;
    // 0x1ed9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    kofxiLeaveCallbackCriticalSection_0x1cdb60(rdram, ctx, runtime); return;
    ctx->pc = 0x1ED9ECu;
    // 0x1ed9ec: 0x0  nop
    ctx->pc = 0x1ed9ecu;
    // NOP
    // 0x1ed9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9F0u;
        // 0x1ed9f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED9F8u;
    // 0x1ed9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9F8u;
        // 0x1ed9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDA00u;
    // 0x1eda00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eda00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eda04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eda04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eda08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eda08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eda0c: 0xc07ad50  jal         func_1EB540
    ctx->pc = 0x1EDA0Cu;
    SET_GPR_U32(ctx, 31, 0x1EDA14u);
    ctx->pc = 0x1EDA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA0Cu;
    // 0x1eda10: 0x8c851f9c  lw          $a1, 0x1F9C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB540u, 0x1EDA0Cu, 0x1EDA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA14u;
label_1eda14:
    // 0x1eda14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eda14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eda18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eda1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA1Cu;
        // 0x1eda20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDA24u;
    // 0x1eda24: 0x0  nop
    ctx->pc = 0x1eda24u;
    // NOP
    // 0x1eda28: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA28u;
        // 0x1eda2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDA30u;
    // 0x1eda30: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA30u;
        // 0x1eda34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDA38u;
    // 0x1eda38: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA38u;
        // 0x1eda3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDA40u;
    // 0x1eda40: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA40u;
        // 0x1eda44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDA48u;
    // 0x1eda48: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA48u;
        // 0x1eda4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDA50u;
    // 0x1eda50: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA50u;
        // 0x1eda54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDA58u;
    // 0x1eda58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eda58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eda5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1eda5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eda60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eda64: 0x8c851f9c  lw          $a1, 0x1F9C($a0)
    ctx->pc = 0x1eda64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8092)));
    // 0x1eda68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eda68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eda6c: 0x807aa24  j           func_1EA890
    ctx->pc = 0x1EDA6Cu;
    ctx->pc = 0x1EDA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA6Cu;
    // 0x1eda70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    sub_001EA890_0x1ea890(rdram, ctx, runtime); return;
    ctx->pc = 0x1EDA74u;
    // 0x1eda74: 0x0  nop
    ctx->pc = 0x1eda74u;
    // NOP
    // 0x1eda78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eda78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eda7c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1eda7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eda80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eda84: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1eda84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1eda88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda8c: 0x8c851f9c  lw          $a1, 0x1F9C($a0)
    ctx->pc = 0x1eda8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8092)));
    // 0x1eda90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eda90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eda94: 0x807aa5a  j           func_1EA968
    ctx->pc = 0x1EDA94u;
    ctx->pc = 0x1EDA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA94u;
    // 0x1eda98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA968u;
    sub_001EA968_0x1ea968(rdram, ctx, runtime); return;
    ctx->pc = 0x1EDA9Cu;
    // 0x1eda9c: 0x0  nop
    ctx->pc = 0x1eda9cu;
    // NOP
    // 0x1edaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1edaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1edaa4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1edaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1edaa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1edaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edaac: 0x34a50501  ori         $a1, $a1, 0x501
    ctx->pc = 0x1edaacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
    // 0x1edab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edab4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EDAB4u;
    ctx->pc = 0x1EDAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDAB4u;
    // 0x1edab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EDABCu;
    // 0x1edabc: 0x0  nop
    ctx->pc = 0x1edabcu;
    // NOP
    // 0x1edac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1edac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1edac4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1edac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1edac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1edac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edacc: 0x34a50501  ori         $a1, $a1, 0x501
    ctx->pc = 0x1edaccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
    // 0x1edad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edad4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EDAD4u;
    ctx->pc = 0x1EDAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDAD4u;
    // 0x1edad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1EDADCu;
    // 0x1edadc: 0x0  nop
    ctx->pc = 0x1edadcu;
    // NOP
    // 0x1edae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAE0u;
        // 0x1edae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDAE8u;
}
