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

// Function: sub_0014ADF0
// Address: 0x14adf0 - 0x14af50
void sub_0014ADF0_0x14adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ADF0_0x14adf0");
#endif

    switch (ctx->pc) {
        case 0x14ae1cu: goto label_14ae1c;
        case 0x14ae28u: goto label_14ae28;
        case 0x14ae4cu: goto label_14ae4c;
        case 0x14ae58u: goto label_14ae58;
        case 0x14ae60u: goto label_14ae60;
        case 0x14ae70u: goto label_14ae70;
        case 0x14ae80u: goto label_14ae80;
        case 0x14ae8cu: goto label_14ae8c;
        case 0x14ae98u: goto label_14ae98;
        case 0x14aea4u: goto label_14aea4;
        case 0x14aec8u: goto label_14aec8;
        case 0x14aed4u: goto label_14aed4;
        case 0x14aee0u: goto label_14aee0;
        case 0x14aee8u: goto label_14aee8;
        case 0x14aef0u: goto label_14aef0;
        case 0x14aef8u: goto label_14aef8;
        case 0x14af10u: goto label_14af10;
        default: break;
    }

    ctx->pc = 0x14adf0u;

    // 0x14adf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14adf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14adf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14adf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14adf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14adfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14adfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14ae00: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14ae00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ae04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ae08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ae0c: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x14ae0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14ae10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14ae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae14: 0xc06c0d2  jal         func_1B0348
    ctx->pc = 0x14AE14u;
    SET_GPR_U32(ctx, 31, 0x14AE1Cu);
    ctx->pc = 0x14AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE14u;
    // 0x14ae18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0348u, 0x14AE14u, 0x14AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE1Cu;
label_14ae1c:
    // 0x14ae1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14ae1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae20: 0xc06c412  jal         func_1B1048
    ctx->pc = 0x14AE20u;
    SET_GPR_U32(ctx, 31, 0x14AE28u);
    ctx->pc = 0x14AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE20u;
    // 0x14ae24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1048u, 0x14AE20u, 0x14AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE28u;
label_14ae28:
    // 0x14ae28: 0x22afc  dsll32      $a1, $v0, 11
    ctx->pc = 0x14ae28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 11));
    // 0x14ae2c: 0x28ac0  sll         $s1, $v0, 11
    ctx->pc = 0x14ae2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x14ae30: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AE30u;
    {
        const bool branch_taken_0x14ae30 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x14AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE30u;
        // 0x14ae34: 0x52aff  dsra32      $a1, $a1, 11 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae30) {
            ctx->pc = 0x14AE40u;
            goto label_14ae40;
        }
    }
    ctx->pc = 0x14AE38u;
    // 0x14ae38: 0x262207ff  addiu       $v0, $s1, 0x7FF
    ctx->pc = 0x14ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2047));
    // 0x14ae3c: 0x22ac3  sra         $a1, $v0, 11
    ctx->pc = 0x14ae3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_14ae40:
    // 0x14ae40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ae40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae44: 0xc06c298  jal         func_1B0A60
    ctx->pc = 0x14AE44u;
    SET_GPR_U32(ctx, 31, 0x14AE4Cu);
    ctx->pc = 0x14AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE44u;
    // 0x14ae48: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0A60u, 0x14AE44u, 0x14AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE4Cu;
label_14ae4c:
    // 0x14ae4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14ae4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae50: 0xc040454  jal         func_101150
    ctx->pc = 0x14AE50u;
    SET_GPR_U32(ctx, 31, 0x14AE58u);
    ctx->pc = 0x14AE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE50u;
    // 0x14ae54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x14AE50u, 0x14AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE58u;
label_14ae58:
    // 0x14ae58: 0xc06c4ca  jal         func_1B1328
    ctx->pc = 0x14AE58u;
    SET_GPR_U32(ctx, 31, 0x14AE60u);
    ctx->pc = 0x14AE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE58u;
    // 0x14ae5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1328u, 0x14AE58u, 0x14AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE60u;
label_14ae60:
    // 0x14ae60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ae64: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x14AE64u;
    {
        const bool branch_taken_0x14ae64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14ae64) {
            ctx->pc = 0x14AF08u;
            goto label_14af08;
        }
    }
    ctx->pc = 0x14AE6Cu;
    // 0x14ae6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14ae70:
    // 0x14ae70: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14AE70u;
    {
        const bool branch_taken_0x14ae70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14ae70) {
            ctx->pc = 0x14AED8u;
            goto label_14aed8;
        }
    }
    ctx->pc = 0x14AE78u;
    // 0x14ae78: 0xc06c128  jal         func_1B04A0
    ctx->pc = 0x14AE78u;
    SET_GPR_U32(ctx, 31, 0x14AE80u);
    ctx->pc = 0x14AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE78u;
    // 0x14ae7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04A0u, 0x14AE78u, 0x14AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE80u;
label_14ae80:
    // 0x14ae80: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14ae84: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14AE84u;
    SET_GPR_U32(ctx, 31, 0x14AE8Cu);
    ctx->pc = 0x14AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE84u;
    // 0x14ae88: 0x2484cdd0  addiu       $a0, $a0, -0x3230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14AE84u, 0x14AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE8Cu;
label_14ae8c:
    // 0x14ae8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14ae8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae90: 0xc06c0d2  jal         func_1B0348
    ctx->pc = 0x14AE90u;
    SET_GPR_U32(ctx, 31, 0x14AE98u);
    ctx->pc = 0x14AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE90u;
    // 0x14ae94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0348u, 0x14AE90u, 0x14AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE98u;
label_14ae98:
    // 0x14ae98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14ae98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae9c: 0xc06c412  jal         func_1B1048
    ctx->pc = 0x14AE9Cu;
    SET_GPR_U32(ctx, 31, 0x14AEA4u);
    ctx->pc = 0x14AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE9Cu;
    // 0x14aea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1048u, 0x14AE9Cu, 0x14AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEA4u;
label_14aea4:
    // 0x14aea4: 0x22afc  dsll32      $a1, $v0, 11
    ctx->pc = 0x14aea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 11));
    // 0x14aea8: 0x28ac0  sll         $s1, $v0, 11
    ctx->pc = 0x14aea8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x14aeac: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AEACu;
    {
        const bool branch_taken_0x14aeac = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x14AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AEACu;
        // 0x14aeb0: 0x52aff  dsra32      $a1, $a1, 11 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aeac) {
            ctx->pc = 0x14AEBCu;
            goto label_14aebc;
        }
    }
    ctx->pc = 0x14AEB4u;
    // 0x14aeb4: 0x262207ff  addiu       $v0, $s1, 0x7FF
    ctx->pc = 0x14aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2047));
    // 0x14aeb8: 0x22ac3  sra         $a1, $v0, 11
    ctx->pc = 0x14aeb8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_14aebc:
    // 0x14aebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14aebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aec0: 0xc06c298  jal         func_1B0A60
    ctx->pc = 0x14AEC0u;
    SET_GPR_U32(ctx, 31, 0x14AEC8u);
    ctx->pc = 0x14AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEC0u;
    // 0x14aec4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0A60u, 0x14AEC0u, 0x14AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEC8u;
label_14aec8:
    // 0x14aec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14aec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aecc: 0xc040454  jal         func_101150
    ctx->pc = 0x14AECCu;
    SET_GPR_U32(ctx, 31, 0x14AED4u);
    ctx->pc = 0x14AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AECCu;
    // 0x14aed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x14AECCu, 0x14AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AED4u;
label_14aed4:
    // 0x14aed4: 0x0  nop
    ctx->pc = 0x14aed4u;
    // NOP
label_14aed8:
    // 0x14aed8: 0xc06cfea  jal         func_1B3FA8
    ctx->pc = 0x14AED8u;
    SET_GPR_U32(ctx, 31, 0x14AEE0u);
    ctx->pc = 0x1B3FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3FA8u, 0x14AED8u, 0x14AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEE0u;
label_14aee0:
    // 0x14aee0: 0xc06d03c  jal         func_1B40F0
    ctx->pc = 0x14AEE0u;
    SET_GPR_U32(ctx, 31, 0x14AEE8u);
    ctx->pc = 0x1B40F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40F0u, 0x14AEE0u, 0x14AEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEE8u;
label_14aee8:
    // 0x14aee8: 0xc04042e  jal         func_1010B8
    ctx->pc = 0x14AEE8u;
    SET_GPR_U32(ctx, 31, 0x14AEF0u);
    ctx->pc = 0x14AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEE8u;
    // 0x14aeec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010B8u, 0x14AEE8u, 0x14AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEF0u;
label_14aef0:
    // 0x14aef0: 0xc06c4ca  jal         func_1B1328
    ctx->pc = 0x14AEF0u;
    SET_GPR_U32(ctx, 31, 0x14AEF8u);
    ctx->pc = 0x14AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEF0u;
    // 0x14aef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1328u, 0x14AEF0u, 0x14AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEF8u;
label_14aef8:
    // 0x14aef8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14aefc: 0x5443ffdc  bnel        $v0, $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x14AEFCu;
    {
        const bool branch_taken_0x14aefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14aefc) {
            ctx->pc = 0x14AF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AEFCu;
            // 0x14af00: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AE70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ae70;
        }
    }
    ctx->pc = 0x14AF04u;
    // 0x14af04: 0x0  nop
    ctx->pc = 0x14af04u;
    // NOP
label_14af08:
    // 0x14af08: 0xc06c128  jal         func_1B04A0
    ctx->pc = 0x14AF08u;
    SET_GPR_U32(ctx, 31, 0x14AF10u);
    ctx->pc = 0x14AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AF08u;
    // 0x14af0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04A0u, 0x14AF08u, 0x14AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AF10u;
label_14af10:
    // 0x14af10: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14af10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14af14: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x14af14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x14af18: 0xac605d08  sw          $zero, 0x5D08($v1)
    ctx->pc = 0x14af18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23816), GPR_U32(ctx, 0));
    // 0x14af1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x14af1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x14af20: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14af20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14af24: 0xac605d00  sw          $zero, 0x5D00($v1)
    ctx->pc = 0x14af24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23808), GPR_U32(ctx, 0));
    // 0x14af28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14af28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14af2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14af2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14af30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14af30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14af34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14af34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14af38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14af38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14af3c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF3Cu;
        // 0x14af40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AF44u;
    // 0x14af44: 0x0  nop
    ctx->pc = 0x14af44u;
    // NOP
    // 0x14af48: 0x0  nop
    ctx->pc = 0x14af48u;
    // NOP
    // 0x14af4c: 0x0  nop
    ctx->pc = 0x14af4cu;
    // NOP
}
