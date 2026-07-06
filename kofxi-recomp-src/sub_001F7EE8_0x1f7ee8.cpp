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

// Function: sub_001F7EE8
// Address: 0x1f7ee8 - 0x1f7fc8
void sub_001F7EE8_0x1f7ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7EE8_0x1f7ee8");
#endif

    switch (ctx->pc) {
        case 0x1f7f00u: goto label_1f7f00;
        case 0x1f7f14u: goto label_1f7f14;
        case 0x1f7f28u: goto label_1f7f28;
        case 0x1f7f3cu: goto label_1f7f3c;
        case 0x1f7f50u: goto label_1f7f50;
        case 0x1f7f70u: goto label_1f7f70;
        case 0x1f7f88u: goto label_1f7f88;
        case 0x1f7f9cu: goto label_1f7f9c;
        case 0x1f7fb0u: goto label_1f7fb0;
        default: break;
    }

    ctx->pc = 0x1f7ee8u;

    // 0x1f7ee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f7eec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f7eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f7ef0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f7ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f7ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f7ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f7ef8: 0xc07dff2  jal         func_1F7FC8
    ctx->pc = 0x1F7EF8u;
    SET_GPR_U32(ctx, 31, 0x1F7F00u);
    ctx->pc = 0x1F7EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7EF8u;
    // 0x1f7efc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FC8u, 0x1F7EF8u, 0x1F7F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F00u;
label_1f7f00:
    // 0x1f7f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f04: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F7F04u;
    {
        const bool branch_taken_0x1f7f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F04u;
        // 0x1f7f08: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f04) {
            ctx->pc = 0x1F7F58u;
            goto label_1f7f58;
        }
    }
    ctx->pc = 0x1F7F0Cu;
    // 0x1f7f0c: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7F0Cu;
    SET_GPR_U32(ctx, 31, 0x1F7F14u);
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7F0Cu, 0x1F7F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F14u;
label_1f7f14:
    // 0x1f7f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7f18: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7F18u;
    {
        const bool branch_taken_0x1f7f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F7F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F18u;
        // 0x1f7f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f18) {
            ctx->pc = 0x1F7F30u;
            goto label_1f7f30;
        }
    }
    ctx->pc = 0x1F7F20u;
    // 0x1f7f20: 0xc07e01a  jal         func_1F8068
    ctx->pc = 0x1F7F20u;
    SET_GPR_U32(ctx, 31, 0x1F7F28u);
    ctx->pc = 0x1F8068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8068u, 0x1F7F20u, 0x1F7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F28u;
label_1f7f28:
    // 0x1f7f28: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F7F28u;
    {
        const bool branch_taken_0x1f7f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F28u;
        // 0x1f7f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f28) {
            ctx->pc = 0x1F7FB4u;
            goto label_1f7fb4;
        }
    }
    ctx->pc = 0x1F7F30u;
label_1f7f30:
    // 0x1f7f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f34: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7F34u;
    SET_GPR_U32(ctx, 31, 0x1F7F3Cu);
    ctx->pc = 0x1F7F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F34u;
    // 0x1f7f38: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7F34u, 0x1F7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F3Cu;
label_1f7f3c:
    // 0x1f7f3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7f40: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7F40u;
    {
        const bool branch_taken_0x1f7f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F40u;
        // 0x1f7f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f40) {
            ctx->pc = 0x1F7F60u;
            goto label_1f7f60;
        }
    }
    ctx->pc = 0x1F7F48u;
    // 0x1f7f48: 0xc07e048  jal         func_1F8120
    ctx->pc = 0x1F7F48u;
    SET_GPR_U32(ctx, 31, 0x1F7F50u);
    ctx->pc = 0x1F8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8120u, 0x1F7F48u, 0x1F7F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F50u;
label_1f7f50:
    // 0x1f7f50: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7F50u;
    {
        const bool branch_taken_0x1f7f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7f50) {
            ctx->pc = 0x1F7F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7F50u;
            // 0x1f7f54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7F64u;
            goto label_1f7f64;
        }
    }
    ctx->pc = 0x1F7F58u;
label_1f7f58:
    // 0x1f7f58: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7F58u;
    {
        const bool branch_taken_0x1f7f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F58u;
        // 0x1f7f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f58) {
            ctx->pc = 0x1F7FB4u;
            goto label_1f7fb4;
        }
    }
    ctx->pc = 0x1F7F60u;
label_1f7f60:
    // 0x1f7f60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f7f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f7f64:
    // 0x1f7f64: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1f7f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f7f68: 0xc07ef96  jal         func_1FBE58
    ctx->pc = 0x1F7F68u;
    SET_GPR_U32(ctx, 31, 0x1F7F70u);
    ctx->pc = 0x1F7F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F68u;
    // 0x1f7f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE58u, 0x1F7F68u, 0x1F7F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F70u;
label_1f7f70:
    // 0x1f7f70: 0x26230d88  addiu       $v1, $s1, 0xD88
    ctx->pc = 0x1f7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
    // 0x1f7f74: 0x8c700288  lw          $s0, 0x288($v1)
    ctx->pc = 0x1f7f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 648)));
    // 0x1f7f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f7c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x1f7f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1f7f80: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7F80u;
    SET_GPR_U32(ctx, 31, 0x1F7F88u);
    ctx->pc = 0x1F7F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F80u;
    // 0x1f7f84: 0x8c710284  lw          $s1, 0x284($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7F80u, 0x1F7F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F88u;
label_1f7f88:
    // 0x1f7f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f8c: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x1f7f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x1f7f90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f94: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1F7F94u;
    SET_GPR_U32(ctx, 31, 0x1F7F9Cu);
    ctx->pc = 0x1F7F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F94u;
    // 0x1f7f98: 0x34c64240  ori         $a2, $a2, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC718u, 0x1F7F94u, 0x1F7F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F9Cu;
label_1f7f9c:
    // 0x1f7f9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f7f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fa0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f7fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7fa4: 0x2223023  subu        $a2, $s1, $v0
    ctx->pc = 0x1f7fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f7fa8: 0xc073fee  jal         func_1CFFB8
    ctx->pc = 0x1F7FA8u;
    SET_GPR_U32(ctx, 31, 0x1F7FB0u);
    ctx->pc = 0x1F7FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FA8u;
    // 0x1f7fac: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFFB8u, 0x1F7FA8u, 0x1F7FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FB0u;
label_1f7fb0:
    // 0x1f7fb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f7fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f7fb4:
    // 0x1f7fb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f7fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7fb8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f7fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7fbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FC0u;
        // 0x1f7fc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7FC8u;
}
