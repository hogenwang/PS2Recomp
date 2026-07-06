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

// Function: sub_001179F0
// Address: 0x1179f0 - 0x117b00
void sub_001179F0_0x1179f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001179F0_0x1179f0");
#endif

    switch (ctx->pc) {
        case 0x117a04u: goto label_117a04;
        case 0x117a30u: goto label_117a30;
        case 0x117a4cu: goto label_117a4c;
        case 0x117a54u: goto label_117a54;
        case 0x117a5cu: goto label_117a5c;
        case 0x117a6cu: goto label_117a6c;
        case 0x117a94u: goto label_117a94;
        case 0x117ac0u: goto label_117ac0;
        case 0x117ad8u: goto label_117ad8;
        case 0x117ae8u: goto label_117ae8;
        default: break;
    }

    ctx->pc = 0x1179f0u;

    // 0x1179f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1179f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1179f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1179f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1179f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1179f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1179fc: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1179FCu;
    SET_GPR_U32(ctx, 31, 0x117A04u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1179FCu, 0x117A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A04u;
label_117a04:
    // 0x117a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x117a0c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x117a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x117a10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117a10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x117a14: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x117a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x117a18: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x117A18u;
    {
        const bool branch_taken_0x117a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x117a18) {
            ctx->pc = 0x117A38u;
            goto label_117a38;
        }
    }
    ctx->pc = 0x117A20u;
    // 0x117a20: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x117A20u;
    {
        const bool branch_taken_0x117a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A20u;
        // 0x117a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a20) {
            ctx->pc = 0x117A70u;
            goto label_117a70;
        }
    }
    ctx->pc = 0x117A28u;
    // 0x117a28: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x117A28u;
    SET_GPR_U32(ctx, 31, 0x117A30u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x117A28u, 0x117A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A30u;
label_117a30:
    // 0x117a30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x117A30u;
    {
        const bool branch_taken_0x117a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A30u;
        // 0x117a34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a30) {
            ctx->pc = 0x117A70u;
            goto label_117a70;
        }
    }
    ctx->pc = 0x117A38u;
label_117a38:
    // 0x117a38: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x117a3c: 0x3484f3ff  ori         $a0, $a0, 0xF3FF
    ctx->pc = 0x117a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62463);
    // 0x117a40: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x117a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x117a44: 0xc045de4  jal         func_117790
    ctx->pc = 0x117A44u;
    SET_GPR_U32(ctx, 31, 0x117A4Cu);
    ctx->pc = 0x117A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A44u;
    // 0x117a48: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x117790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117790u, 0x117A44u, 0x117A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A4Cu;
label_117a4c:
    // 0x117a4c: 0xc046002  jal         func_118008
    ctx->pc = 0x117A4Cu;
    SET_GPR_U32(ctx, 31, 0x117A54u);
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x117A4Cu, 0x117A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A54u;
label_117a54:
    // 0x117a54: 0xc045ec0  jal         func_117B00
    ctx->pc = 0x117A54u;
    SET_GPR_U32(ctx, 31, 0x117A5Cu);
    ctx->pc = 0x117A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A54u;
    // 0x117a58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B00u, 0x117A54u, 0x117A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A5Cu;
label_117a5c:
    // 0x117a5c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117A5Cu;
    {
        const bool branch_taken_0x117a5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A5Cu;
        // 0x117a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a5c) {
            ctx->pc = 0x117A70u;
            goto label_117a70;
        }
    }
    ctx->pc = 0x117A64u;
    // 0x117a64: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x117A64u;
    SET_GPR_U32(ctx, 31, 0x117A6Cu);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x117A64u, 0x117A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A6Cu;
label_117a6c:
    // 0x117a6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117a70:
    // 0x117a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117a78: 0x3e00008  jr          $ra
    ctx->pc = 0x117A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A78u;
        // 0x117a7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117A80u;
    // 0x117a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117a8c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x117A8Cu;
    SET_GPR_U32(ctx, 31, 0x117A94u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x117A8Cu, 0x117A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A94u;
label_117a94:
    // 0x117a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x117a9c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x117a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x117aa0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x117aa4: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x117aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x117aa8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x117AA8u;
    {
        const bool branch_taken_0x117aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x117aa8) {
            ctx->pc = 0x117AC8u;
            goto label_117ac8;
        }
    }
    ctx->pc = 0x117AB0u;
    // 0x117ab0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x117AB0u;
    {
        const bool branch_taken_0x117ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AB0u;
        // 0x117ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ab0) {
            ctx->pc = 0x117AECu;
            goto label_117aec;
        }
    }
    ctx->pc = 0x117AB8u;
    // 0x117ab8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x117AB8u;
    SET_GPR_U32(ctx, 31, 0x117AC0u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x117AB8u, 0x117AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AC0u;
label_117ac0:
    // 0x117ac0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x117AC0u;
    {
        const bool branch_taken_0x117ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AC0u;
        // 0x117ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ac0) {
            ctx->pc = 0x117AECu;
            goto label_117aec;
        }
    }
    ctx->pc = 0x117AC8u;
label_117ac8:
    // 0x117ac8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x117acc: 0x3484f37f  ori         $a0, $a0, 0xF37F
    ctx->pc = 0x117accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62335);
    // 0x117ad0: 0xc045de4  jal         func_117790
    ctx->pc = 0x117AD0u;
    SET_GPR_U32(ctx, 31, 0x117AD8u);
    ctx->pc = 0x117AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AD0u;
    // 0x117ad4: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117790u, 0x117AD0u, 0x117AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AD8u;
label_117ad8:
    // 0x117ad8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117AD8u;
    {
        const bool branch_taken_0x117ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AD8u;
        // 0x117adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ad8) {
            ctx->pc = 0x117AECu;
            goto label_117aec;
        }
    }
    ctx->pc = 0x117AE0u;
    // 0x117ae0: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x117AE0u;
    SET_GPR_U32(ctx, 31, 0x117AE8u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x117AE0u, 0x117AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AE8u;
label_117ae8:
    // 0x117ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117aec:
    // 0x117aec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117af4: 0x3e00008  jr          $ra
    ctx->pc = 0x117AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AF4u;
        // 0x117af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117AFCu;
    // 0x117afc: 0x0  nop
    ctx->pc = 0x117afcu;
    // NOP
}
