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

// Function: sub_001DBAA0
// Address: 0x1dbaa0 - 0x1dbbb0
void sub_001DBAA0_0x1dbaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBAA0_0x1dbaa0");
#endif

    switch (ctx->pc) {
        case 0x1dbaa0u: goto label_1dbaa0;
        case 0x1dbaa4u: goto label_1dbaa4;
        case 0x1dbaa8u: goto label_1dbaa8;
        case 0x1dbaacu: goto label_1dbaac;
        case 0x1dbab0u: goto label_1dbab0;
        case 0x1dbab4u: goto label_1dbab4;
        case 0x1dbab8u: goto label_1dbab8;
        case 0x1dbabcu: goto label_1dbabc;
        case 0x1dbac0u: goto label_1dbac0;
        case 0x1dbac4u: goto label_1dbac4;
        case 0x1dbac8u: goto label_1dbac8;
        case 0x1dbaccu: goto label_1dbacc;
        case 0x1dbad0u: goto label_1dbad0;
        case 0x1dbad4u: goto label_1dbad4;
        case 0x1dbad8u: goto label_1dbad8;
        case 0x1dbadcu: goto label_1dbadc;
        case 0x1dbae0u: goto label_1dbae0;
        case 0x1dbae4u: goto label_1dbae4;
        case 0x1dbae8u: goto label_1dbae8;
        case 0x1dbaecu: goto label_1dbaec;
        case 0x1dbaf0u: goto label_1dbaf0;
        case 0x1dbaf4u: goto label_1dbaf4;
        case 0x1dbaf8u: goto label_1dbaf8;
        case 0x1dbafcu: goto label_1dbafc;
        case 0x1dbb00u: goto label_1dbb00;
        case 0x1dbb04u: goto label_1dbb04;
        case 0x1dbb08u: goto label_1dbb08;
        case 0x1dbb0cu: goto label_1dbb0c;
        case 0x1dbb10u: goto label_1dbb10;
        case 0x1dbb14u: goto label_1dbb14;
        case 0x1dbb18u: goto label_1dbb18;
        case 0x1dbb1cu: goto label_1dbb1c;
        case 0x1dbb20u: goto label_1dbb20;
        case 0x1dbb24u: goto label_1dbb24;
        case 0x1dbb28u: goto label_1dbb28;
        case 0x1dbb2cu: goto label_1dbb2c;
        case 0x1dbb30u: goto label_1dbb30;
        case 0x1dbb34u: goto label_1dbb34;
        case 0x1dbb38u: goto label_1dbb38;
        case 0x1dbb3cu: goto label_1dbb3c;
        case 0x1dbb40u: goto label_1dbb40;
        case 0x1dbb44u: goto label_1dbb44;
        case 0x1dbb48u: goto label_1dbb48;
        case 0x1dbb4cu: goto label_1dbb4c;
        case 0x1dbb50u: goto label_1dbb50;
        case 0x1dbb54u: goto label_1dbb54;
        case 0x1dbb58u: goto label_1dbb58;
        case 0x1dbb5cu: goto label_1dbb5c;
        case 0x1dbb60u: goto label_1dbb60;
        case 0x1dbb64u: goto label_1dbb64;
        case 0x1dbb68u: goto label_1dbb68;
        case 0x1dbb6cu: goto label_1dbb6c;
        case 0x1dbb70u: goto label_1dbb70;
        case 0x1dbb74u: goto label_1dbb74;
        case 0x1dbb78u: goto label_1dbb78;
        case 0x1dbb7cu: goto label_1dbb7c;
        case 0x1dbb80u: goto label_1dbb80;
        case 0x1dbb84u: goto label_1dbb84;
        case 0x1dbb88u: goto label_1dbb88;
        case 0x1dbb8cu: goto label_1dbb8c;
        case 0x1dbb90u: goto label_1dbb90;
        case 0x1dbb94u: goto label_1dbb94;
        case 0x1dbb98u: goto label_1dbb98;
        case 0x1dbb9cu: goto label_1dbb9c;
        case 0x1dbba0u: goto label_1dbba0;
        case 0x1dbba4u: goto label_1dbba4;
        case 0x1dbba8u: goto label_1dbba8;
        case 0x1dbbacu: goto label_1dbbac;
        default: break;
    }

    ctx->pc = 0x1dbaa0u;

label_1dbaa0:
    // 0x1dbaa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dbaa4:
    // 0x1dbaa4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dbaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1dbaa8:
    // 0x1dbaa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbaa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbaac:
    // 0x1dbaac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dbaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1dbab0:
    // 0x1dbab0: 0x2cb10001  sltiu       $s1, $a1, 0x1
    ctx->pc = 0x1dbab0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dbab4:
    // 0x1dbab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dbab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dbab8:
    // 0x1dbab8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dbab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dbabc:
    // 0x1dbabc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1dbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1dbac0:
    // 0x1dbac0: 0x40f809  jalr        $v0
label_1dbac4:
    if (ctx->pc == 0x1DBAC4u) {
        ctx->pc = 0x1DBAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAC0u;
        // 0x1dbac4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBAC8u;
        goto label_1dbac8;
    }
    ctx->pc = 0x1DBAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DBAC8u);
        ctx->pc = 0x1DBAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAC0u;
        // 0x1dbac4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBAC0u, 0x1DBAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBAC8u;
label_1dbac8:
    // 0x1dbac8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dbac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dbacc:
    // 0x1dbacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbad0:
    // 0x1dbad0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dbad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dbad4:
    // 0x1dbad4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1dbad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1dbad8:
    // 0x1dbad8: 0x40f809  jalr        $v0
label_1dbadc:
    if (ctx->pc == 0x1DBADCu) {
        ctx->pc = 0x1DBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAD8u;
        // 0x1dbadc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBAE0u;
        goto label_1dbae0;
    }
    ctx->pc = 0x1DBAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DBAE0u);
        ctx->pc = 0x1DBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAD8u;
        // 0x1dbadc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBAD8u, 0x1DBAE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBAE0u;
label_1dbae0:
    // 0x1dbae0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1dbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1dbae4:
    // 0x1dbae4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dbae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dbae8:
    // 0x1dbae8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dbae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1dbaec:
    // 0x1dbaec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dbaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dbaf0:
    // 0x1dbaf0: 0x3e00008  jr          $ra
label_1dbaf4:
    if (ctx->pc == 0x1DBAF4u) {
        ctx->pc = 0x1DBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAF0u;
        // 0x1dbaf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBAF8u;
        goto label_1dbaf8;
    }
    ctx->pc = 0x1DBAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAF0u;
        // 0x1dbaf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBAF8u;
label_1dbaf8:
    // 0x1dbaf8: 0x3e00008  jr          $ra
label_1dbafc:
    if (ctx->pc == 0x1DBAFCu) {
        ctx->pc = 0x1DBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAF8u;
        // 0x1dbafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB00u;
        goto label_1dbb00;
    }
    ctx->pc = 0x1DBAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAF8u;
        // 0x1dbafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBB00u;
label_1dbb00:
    // 0x1dbb00: 0x3e00008  jr          $ra
label_1dbb04:
    if (ctx->pc == 0x1DBB04u) {
        ctx->pc = 0x1DBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB00u;
        // 0x1dbb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB08u;
        goto label_1dbb08;
    }
    ctx->pc = 0x1DBB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB00u;
        // 0x1dbb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBB08u;
label_1dbb08:
    // 0x1dbb08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1dbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1dbb0c:
    // 0x1dbb0c: 0x3e00008  jr          $ra
label_1dbb10:
    if (ctx->pc == 0x1DBB10u) {
        ctx->pc = 0x1DBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB0Cu;
        // 0x1dbb10: 0x2442c270  addiu       $v0, $v0, -0x3D90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB14u;
        goto label_1dbb14;
    }
    ctx->pc = 0x1DBB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB0Cu;
        // 0x1dbb10: 0x2442c270  addiu       $v0, $v0, -0x3D90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBB14u;
label_1dbb14:
    // 0x1dbb14: 0x0  nop
    ctx->pc = 0x1dbb14u;
    // NOP
label_1dbb18:
    // 0x1dbb18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dbb1c:
    // 0x1dbb1c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dbb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dbb20:
    // 0x1dbb20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1dbb24:
    // 0x1dbb24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1dbb28:
    // 0x1dbb28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dbb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dbb2c:
    // 0x1dbb2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1dbb30:
    // 0x1dbb30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dbb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1dbb34:
    // 0x1dbb34: 0xc076326  jal         func_1D8C98
label_1dbb38:
    if (ctx->pc == 0x1DBB38u) {
        ctx->pc = 0x1DBB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB34u;
        // 0x1dbb38: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB3Cu;
        goto label_1dbb3c;
    }
    ctx->pc = 0x1DBB34u;
    SET_GPR_U32(ctx, 31, 0x1DBB3Cu);
    ctx->pc = 0x1DBB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB34u;
    // 0x1dbb38: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1DBB34u, 0x1DBB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB3Cu;
label_1dbb3c:
    // 0x1dbb3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbb40:
    // 0x1dbb40: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
label_1dbb44:
    if (ctx->pc == 0x1DBB44u) {
        ctx->pc = 0x1DBB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB40u;
        // 0x1dbb44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB48u;
        goto label_1dbb48;
    }
    ctx->pc = 0x1DBB40u;
    {
        const bool branch_taken_0x1dbb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbb40) {
            ctx->pc = 0x1DBB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBB40u;
            // 0x1dbb44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBB9Cu;
            goto label_1dbb9c;
        }
    }
    ctx->pc = 0x1DBB48u;
label_1dbb48:
    // 0x1dbb48: 0xc0770f8  jal         func_1DC3E0
label_1dbb4c:
    if (ctx->pc == 0x1DBB4Cu) {
        ctx->pc = 0x1DBB50u;
        goto label_1dbb50;
    }
    ctx->pc = 0x1DBB48u;
    SET_GPR_U32(ctx, 31, 0x1DBB50u);
    ctx->pc = 0x1DC3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC3E0u, 0x1DBB48u, 0x1DBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB50u;
label_1dbb50:
    // 0x1dbb50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dbb54:
    if (ctx->pc == 0x1DBB54u) {
        ctx->pc = 0x1DBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB50u;
        // 0x1dbb54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB58u;
        goto label_1dbb58;
    }
    ctx->pc = 0x1DBB50u;
    {
        const bool branch_taken_0x1dbb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB50u;
        // 0x1dbb54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb50) {
            ctx->pc = 0x1DBB60u;
            goto label_1dbb60;
        }
    }
    ctx->pc = 0x1DBB58u;
label_1dbb58:
    // 0x1dbb58: 0x1000000f  b           . + 4 + (0xF << 2)
label_1dbb5c:
    if (ctx->pc == 0x1DBB5Cu) {
        ctx->pc = 0x1DBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB58u;
        // 0x1dbb5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB60u;
        goto label_1dbb60;
    }
    ctx->pc = 0x1DBB58u;
    {
        const bool branch_taken_0x1dbb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB58u;
        // 0x1dbb5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb58) {
            ctx->pc = 0x1DBB98u;
            goto label_1dbb98;
        }
    }
    ctx->pc = 0x1DBB60u;
label_1dbb60:
    // 0x1dbb60: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x1dbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1dbb64:
    // 0x1dbb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbb68:
    // 0x1dbb68: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x1dbb68u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1dbb6c:
    // 0x1dbb6c: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
label_1dbb70:
    if (ctx->pc == 0x1DBB70u) {
        ctx->pc = 0x1DBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB6Cu;
        // 0x1dbb70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB74u;
        goto label_1dbb74;
    }
    ctx->pc = 0x1DBB6Cu;
    {
        const bool branch_taken_0x1dbb6c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1DBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB6Cu;
        // 0x1dbb70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb6c) {
            ctx->pc = 0x1DBB98u;
            goto label_1dbb98;
        }
    }
    ctx->pc = 0x1DBB74u;
label_1dbb74:
    // 0x1dbb74: 0xc076326  jal         func_1D8C98
label_1dbb78:
    if (ctx->pc == 0x1DBB78u) {
        ctx->pc = 0x1DBB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB74u;
        // 0x1dbb78: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB7Cu;
        goto label_1dbb7c;
    }
    ctx->pc = 0x1DBB74u;
    SET_GPR_U32(ctx, 31, 0x1DBB7Cu);
    ctx->pc = 0x1DBB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB74u;
    // 0x1dbb78: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1DBB74u, 0x1DBB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB7Cu;
label_1dbb7c:
    // 0x1dbb7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbb7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbb80:
    // 0x1dbb80: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1dbb84:
    if (ctx->pc == 0x1DBB84u) {
        ctx->pc = 0x1DBB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB80u;
        // 0x1dbb84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB88u;
        goto label_1dbb88;
    }
    ctx->pc = 0x1DBB80u;
    {
        const bool branch_taken_0x1dbb80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB80u;
        // 0x1dbb84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb80) {
            ctx->pc = 0x1DBB98u;
            goto label_1dbb98;
        }
    }
    ctx->pc = 0x1DBB88u;
label_1dbb88:
    // 0x1dbb88: 0xc0762c0  jal         func_1D8B00
label_1dbb8c:
    if (ctx->pc == 0x1DBB8Cu) {
        ctx->pc = 0x1DBB90u;
        goto label_1dbb90;
    }
    ctx->pc = 0x1DBB88u;
    SET_GPR_U32(ctx, 31, 0x1DBB90u);
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1DBB88u, 0x1DBB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB90u;
label_1dbb90:
    // 0x1dbb90: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1dbb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1dbb94:
    // 0x1dbb94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dbb98:
    // 0x1dbb98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbb98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dbb9c:
    // 0x1dbb9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbb9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1dbba0:
    // 0x1dbba0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dbba4:
    // 0x1dbba4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dbba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1dbba8:
    // 0x1dbba8: 0x3e00008  jr          $ra
label_1dbbac:
    if (ctx->pc == 0x1DBBACu) {
        ctx->pc = 0x1DBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBA8u;
        // 0x1dbbac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBBB0u;
        goto label_fallthrough_0x1dbba8;
    }
    ctx->pc = 0x1DBBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBA8u;
        // 0x1dbbac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dbba8:
    ctx->pc = 0x1DBBB0u;
}
