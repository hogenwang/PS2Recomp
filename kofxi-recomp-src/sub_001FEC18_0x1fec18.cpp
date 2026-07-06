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

// Function: sub_001FEC18
// Address: 0x1fec18 - 0x1fed08
void sub_001FEC18_0x1fec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEC18_0x1fec18");
#endif

    switch (ctx->pc) {
        case 0x1fecc8u: goto label_1fecc8;
        default: break;
    }

    ctx->pc = 0x1fec18u;

    // 0x1fec18: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC18u;
        // 0x1fec1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC20u;
    // 0x1fec20: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC20u;
        // 0x1fec24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC28u;
    // 0x1fec28: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC28u;
        // 0x1fec2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC30u;
    // 0x1fec30: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC30u;
        // 0x1fec34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC38u;
    // 0x1fec38: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC38u;
        // 0x1fec3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC40u;
    // 0x1fec40: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC40u;
        // 0x1fec44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC48u;
    // 0x1fec48: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC48u;
        // 0x1fec4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC50u;
    // 0x1fec50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fec54: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fec54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fec58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fec5c: 0x34a50701  ori         $a1, $a1, 0x701
    ctx->pc = 0x1fec5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1793);
    // 0x1fec60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fec60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fec64: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FEC64u;
    ctx->pc = 0x1FEC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC64u;
    // 0x1fec68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FEC6Cu;
    // 0x1fec6c: 0x0  nop
    ctx->pc = 0x1fec6cu;
    // NOP
    // 0x1fec70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fec74: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fec74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fec78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fec7c: 0x34a50701  ori         $a1, $a1, 0x701
    ctx->pc = 0x1fec7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1793);
    // 0x1fec80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fec80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fec84: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FEC84u;
    ctx->pc = 0x1FEC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC84u;
    // 0x1fec88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FEC8Cu;
    // 0x1fec8c: 0x0  nop
    ctx->pc = 0x1fec8cu;
    // NOP
    // 0x1fec90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fec94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fec94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fec9c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fec9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feca0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1feca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1feca4: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1feca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1feca8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1feca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fecac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FECACu;
    {
        const bool branch_taken_0x1fecac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECACu;
        // 0x1fecb0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecac) {
            ctx->pc = 0x1FECC0u;
            goto label_1fecc0;
        }
    }
    ctx->pc = 0x1FECB4u;
    // 0x1fecb4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1fecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1fecb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FECB8u;
    {
        const bool branch_taken_0x1fecb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECB8u;
        // 0x1fecbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecb8) {
            ctx->pc = 0x1FECC8u;
            goto label_1fecc8;
        }
    }
    ctx->pc = 0x1FECC0u;
label_1fecc0:
    // 0x1fecc0: 0xc07ad1c  jal         func_1EB470
    ctx->pc = 0x1FECC0u;
    SET_GPR_U32(ctx, 31, 0x1FECC8u);
    ctx->pc = 0x1FECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FECC0u;
    // 0x1fecc4: 0x8c652130  lw          $a1, 0x2130($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB470u, 0x1FECC0u, 0x1FECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECC8u;
label_1fecc8:
    // 0x1fecc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fecc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FECCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECCCu;
        // 0x1fecd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FECCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FECD4u;
    // 0x1fecd4: 0x0  nop
    ctx->pc = 0x1fecd4u;
    // NOP
    // 0x1fecd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fecd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fecdc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fecdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fece0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fece4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fece4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fece8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fece8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecec: 0x8c852130  lw          $a1, 0x2130($a0)
    ctx->pc = 0x1fececu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8496)));
    // 0x1fecf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fecf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fecf4: 0x807ad34  j           func_1EB4D0
    ctx->pc = 0x1FECF4u;
    ctx->pc = 0x1FECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FECF4u;
    // 0x1fecf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB4D0u, 0x1FECF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FECFCu;
    // 0x1fecfc: 0x0  nop
    ctx->pc = 0x1fecfcu;
    // NOP
    // 0x1fed00: 0x3e00008  jr          $ra
    ctx->pc = 0x1FED00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED00u;
        // 0x1fed04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FED00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FED08u;
}
