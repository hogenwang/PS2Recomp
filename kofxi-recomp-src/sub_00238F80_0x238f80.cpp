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

// Function: sub_00238F80
// Address: 0x238f80 - 0x239208
void sub_00238F80_0x238f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238F80_0x238f80");
#endif

    switch (ctx->pc) {
        case 0x238fb4u: goto label_238fb4;
        case 0x238fbcu: goto label_238fbc;
        case 0x239014u: goto label_239014;
        case 0x23909cu: goto label_23909c;
        case 0x2390d0u: goto label_2390d0;
        case 0x239144u: goto label_239144;
        case 0x2391ccu: goto label_2391cc;
        case 0x2391d8u: goto label_2391d8;
        case 0x2391e0u: goto label_2391e0;
        default: break;
    }

    ctx->pc = 0x238f80u;

    // 0x238f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f90: 0x8e024e3c  lw          $v0, 0x4E3C($s0)
    ctx->pc = 0x238f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20028)));
    // 0x238f94: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x238f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x238f98: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x238F98u;
    {
        const bool branch_taken_0x238f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F98u;
        // 0x238f9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f98) {
            ctx->pc = 0x239014u;
            goto label_239014;
        }
    }
    ctx->pc = 0x238FA0u;
    // 0x238fa0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x238fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x238fa4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x238fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x238fa8: 0x24a55040  addiu       $a1, $a1, 0x5040
    ctx->pc = 0x238fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20544));
    // 0x238fac: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x238FACu;
    SET_GPR_U32(ctx, 31, 0x238FB4u);
    ctx->pc = 0x238FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238FACu;
    // 0x238fb0: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x238FACu, 0x238FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FB4u;
label_238fb4:
    // 0x238fb4: 0xc08e140  jal         func_238500
    ctx->pc = 0x238FB4u;
    SET_GPR_U32(ctx, 31, 0x238FBCu);
    ctx->pc = 0x238FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238FB4u;
    // 0x238fb8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238500u, 0x238FB4u, 0x238FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FBCu;
label_238fbc:
    // 0x238fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x238fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fc0: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x238FC0u;
    {
        const bool branch_taken_0x238fc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x238fc0) {
            ctx->pc = 0x238FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238FC0u;
            // 0x238fc4: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238FD0u;
            goto label_238fd0;
        }
    }
    ctx->pc = 0x238FC8u;
    // 0x238fc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x238FC8u;
    {
        const bool branch_taken_0x238fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FC8u;
        // 0x238fcc: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238fc8) {
            ctx->pc = 0x239014u;
            goto label_239014;
        }
    }
    ctx->pc = 0x238FD0u;
label_238fd0:
    // 0x238fd0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x238fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x238fd4: 0x240600a7  addiu       $a2, $zero, 0xA7
    ctx->pc = 0x238fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x238fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fdc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x238fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x238fe0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x238fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x238fe4: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x238fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x238fe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x238fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x238fec: 0x96024e46  lhu         $v0, 0x4E46($s0)
    ctx->pc = 0x238fecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20038)));
    // 0x238ff0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x238ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x238ff4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x238ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x238ff8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x238ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x238ffc: 0x92024e46  lbu         $v0, 0x4E46($s0)
    ctx->pc = 0x238ffcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20038)));
    // 0x239000: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x239000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x239004: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x239004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x239008: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x239008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x23900c: 0xc08e066  jal         func_238198
    ctx->pc = 0x23900Cu;
    SET_GPR_U32(ctx, 31, 0x239014u);
    ctx->pc = 0x239010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23900Cu;
    // 0x239010: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238198u, 0x23900Cu, 0x239014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239014u;
label_239014:
    // 0x239014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23901c: 0x3e00008  jr          $ra
    ctx->pc = 0x23901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23901Cu;
        // 0x239020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23901Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239024u;
    // 0x239024: 0x0  nop
    ctx->pc = 0x239024u;
    // NOP
    // 0x239028: 0x8c824e3c  lw          $v0, 0x4E3C($a0)
    ctx->pc = 0x239028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20028)));
    // 0x23902c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23902Cu;
    {
        const bool branch_taken_0x23902c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23902c) {
            ctx->pc = 0x23903Cu;
            goto label_23903c;
        }
    }
    ctx->pc = 0x239034u;
    // 0x239034: 0x808e2da  j           func_238B68
    ctx->pc = 0x239034u;
    ctx->pc = 0x238B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B68u, 0x239034u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23903Cu;
label_23903c:
    // 0x23903c: 0x3e00008  jr          $ra
    ctx->pc = 0x23903Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23903Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239044u;
    // 0x239044: 0x0  nop
    ctx->pc = 0x239044u;
    // NOP
    // 0x239048: 0x8c824e3c  lw          $v0, 0x4E3C($a0)
    ctx->pc = 0x239048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20028)));
    // 0x23904c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x23904cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x239050: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x239050u;
    {
        const bool branch_taken_0x239050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239050u;
        // 0x239054: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239050) {
            ctx->pc = 0x239074u;
            goto label_239074;
        }
    }
    ctx->pc = 0x239058u;
    // 0x239058: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x239058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x23905c: 0xac824e3c  sw          $v0, 0x4E3C($a0)
    ctx->pc = 0x23905cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20028), GPR_U32(ctx, 2));
    // 0x239060: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x239060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239064: 0x24c689b8  addiu       $a2, $a2, -0x7648
    ctx->pc = 0x239064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937016));
    // 0x239068: 0x24844e58  addiu       $a0, $a0, 0x4E58
    ctx->pc = 0x239068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20056));
    // 0x23906c: 0x808a058  j           func_228160
    ctx->pc = 0x23906Cu;
    ctx->pc = 0x239070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23906Cu;
    // 0x239070: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    sub_00228160_0x228160(rdram, ctx, runtime); return;
    ctx->pc = 0x239074u;
label_239074:
    // 0x239074: 0x3e00008  jr          $ra
    ctx->pc = 0x239074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23907Cu;
    // 0x23907c: 0x0  nop
    ctx->pc = 0x23907cu;
    // NOP
    // 0x239080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x239084: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x239084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x239088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23908c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23908cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x239090: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x239090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x239094: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x239094u;
    SET_GPR_U32(ctx, 31, 0x23909Cu);
    ctx->pc = 0x239098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239094u;
    // 0x239098: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x239094u, 0x23909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23909Cu;
label_23909c:
    // 0x23909c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x23909Cu;
    {
        const bool branch_taken_0x23909c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23909Cu;
        // 0x2390a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23909c) {
            ctx->pc = 0x2391F0u;
            goto label_2391f0;
        }
    }
    ctx->pc = 0x2390A4u;
    // 0x2390a4: 0x8e224e3c  lw          $v0, 0x4E3C($s1)
    ctx->pc = 0x2390a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20028)));
    // 0x2390a8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2390a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2390ac: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2390ACu;
    {
        const bool branch_taken_0x2390ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ACu;
        // 0x2390b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390ac) {
            ctx->pc = 0x2391D8u;
            goto label_2391d8;
        }
    }
    ctx->pc = 0x2390B4u;
    // 0x2390b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2390b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2390b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2390b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2390bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2390bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2390c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2390c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2390c4: 0x808e76a  j           func_239DA8
    ctx->pc = 0x2390C4u;
    ctx->pc = 0x2390C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2390C4u;
    // 0x2390c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239DA8u;
    sub_00239DA8_0x239da8(rdram, ctx, runtime); return;
    ctx->pc = 0x2390CCu;
    // 0x2390cc: 0x0  nop
    ctx->pc = 0x2390ccu;
    // NOP
label_2390d0:
    // 0x2390d0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2390d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2390d4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2390D4u;
    {
        const bool branch_taken_0x2390d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390D4u;
        // 0x2390d8: 0x8e120018  lw          $s2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390d4) {
            ctx->pc = 0x239134u;
            goto label_239134;
        }
    }
    ctx->pc = 0x2390DCu;
    // 0x2390dc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2390dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2390e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2390E0u;
    {
        const bool branch_taken_0x2390e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390E0u;
        // 0x2390e4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390e0) {
            ctx->pc = 0x239108u;
            goto label_239108;
        }
    }
    ctx->pc = 0x2390E8u;
    // 0x2390e8: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x2390e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x2390ec: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2390ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2390f0: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2390f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2390f4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2390F4u;
    {
        const bool branch_taken_0x2390f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2390f4) {
            ctx->pc = 0x2390F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2390F4u;
            // 0x2390f8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239120u;
            goto label_239120;
        }
    }
    ctx->pc = 0x2390FCu;
    // 0x2390fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2390FCu;
    {
        const bool branch_taken_0x2390fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390FCu;
        // 0x239100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390fc) {
            ctx->pc = 0x239138u;
            goto label_239138;
        }
    }
    ctx->pc = 0x239104u;
    // 0x239104: 0x0  nop
    ctx->pc = 0x239104u;
    // NOP
label_239108:
    // 0x239108: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x239108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x23910c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x23910cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x239110: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x239110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x239114: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x239114u;
    {
        const bool branch_taken_0x239114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239114) {
            ctx->pc = 0x239118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239114u;
            // 0x239118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239138u;
            goto label_239138;
        }
    }
    ctx->pc = 0x23911Cu;
    // 0x23911c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23911cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_239120:
    // 0x239120: 0x2482fffa  addiu       $v0, $a0, -0x6
    ctx->pc = 0x239120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967290));
    // 0x239124: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x239124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x239128: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x239128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x23912c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23912Cu;
    {
        const bool branch_taken_0x23912c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23912Cu;
        // 0x239130: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23912c) {
            ctx->pc = 0x239148u;
            goto label_239148;
        }
    }
    ctx->pc = 0x239134u;
label_239134:
    // 0x239134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239138:
    // 0x239138: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x239138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23913c: 0xc08aa1c  jal         func_22A870
    ctx->pc = 0x23913Cu;
    SET_GPR_U32(ctx, 31, 0x239144u);
    ctx->pc = 0x239140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23913Cu;
    // 0x239140: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A870u, 0x23913Cu, 0x239144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239144u;
label_239144:
    // 0x239144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239148:
    // 0x239148: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x239148u;
    {
        const bool branch_taken_0x239148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x239148) {
            ctx->pc = 0x23914Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239148u;
            // 0x23914c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239160u;
            goto label_239160;
        }
    }
    ctx->pc = 0x239150u;
    // 0x239150: 0xde220070  ld          $v0, 0x70($s1)
    ctx->pc = 0x239150u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x239154: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x239154u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x239158: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x239158u;
    {
        const bool branch_taken_0x239158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239158u;
        // 0x23915c: 0xfe220070  sd          $v0, 0x70($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239158) {
            ctx->pc = 0x2391D8u;
            goto label_2391d8;
        }
    }
    ctx->pc = 0x239160u;
label_239160:
    // 0x239160: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x239160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x239164: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x239164u;
    {
        const bool branch_taken_0x239164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239164) {
            ctx->pc = 0x239168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239164u;
            // 0x239168: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23917Cu;
            goto label_23917c;
        }
    }
    ctx->pc = 0x23916Cu;
    // 0x23916c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x23916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x239170: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x239170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x239174: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x239174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x239178: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x239178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23917c:
    // 0x23917c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x23917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x239180: 0x122202  srl         $a0, $s2, 8
    ctx->pc = 0x239180u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x239184: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x239184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x239188: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x239188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23918c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x23918cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x239190: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x239190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x239194: 0x96224e46  lhu         $v0, 0x4E46($s1)
    ctx->pc = 0x239194u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20038)));
    // 0x239198: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x239198u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x23919c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23919cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2391a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2391a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2391a4: 0x92224e46  lbu         $v0, 0x4E46($s1)
    ctx->pc = 0x2391a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20038)));
    // 0x2391a8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2391a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2391ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2391acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2391b0: 0xa0720001  sb          $s2, 0x1($v1)
    ctx->pc = 0x2391b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x2391b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2391b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2391b8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2391b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2391bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2391BCu;
    {
        const bool branch_taken_0x2391bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391BCu;
        // 0x2391c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391bc) {
            ctx->pc = 0x2391D0u;
            goto label_2391d0;
        }
    }
    ctx->pc = 0x2391C4u;
    // 0x2391c4: 0xc08cd78  jal         func_2335E0
    ctx->pc = 0x2391C4u;
    SET_GPR_U32(ctx, 31, 0x2391CCu);
    ctx->pc = 0x2391C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391C4u;
    // 0x2391c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2335E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2335E0u, 0x2391C4u, 0x2391CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391CCu;
label_2391cc:
    // 0x2391cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2391ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2391d0:
    // 0x2391d0: 0xc08e066  jal         func_238198
    ctx->pc = 0x2391D0u;
    SET_GPR_U32(ctx, 31, 0x2391D8u);
    ctx->pc = 0x2391D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391D0u;
    // 0x2391d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238198u, 0x2391D0u, 0x2391D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391D8u;
label_2391d8:
    // 0x2391d8: 0xc08e7b4  jal         func_239ED0
    ctx->pc = 0x2391D8u;
    SET_GPR_U32(ctx, 31, 0x2391E0u);
    ctx->pc = 0x2391DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391D8u;
    // 0x2391dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239ED0u, 0x2391D8u, 0x2391E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391E0u;
label_2391e0:
    // 0x2391e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2391e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2391e4: 0x5600ffba  bnel        $s0, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2391E4u;
    {
        const bool branch_taken_0x2391e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2391e4) {
            ctx->pc = 0x2391E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2391E4u;
            // 0x2391e8: 0x96030012  lhu         $v1, 0x12($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2390D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2390d0;
        }
    }
    ctx->pc = 0x2391ECu;
    // 0x2391ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2391ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2391f0:
    // 0x2391f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2391f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2391f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2391f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2391f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2391f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2391fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2391FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391FCu;
        // 0x239200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2391FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239204u;
    // 0x239204: 0x0  nop
    ctx->pc = 0x239204u;
    // NOP
    if (ctx->pc == 0x239204u) { ctx->pc = 0x239208u; }
}
