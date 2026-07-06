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

// Function: sub_001EEA10
// Address: 0x1eea10 - 0x1eeae8
void sub_001EEA10_0x1eea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEA10_0x1eea10");
#endif

    switch (ctx->pc) {
        case 0x1eea10u: goto label_1eea10;
        case 0x1eea14u: goto label_1eea14;
        case 0x1eea18u: goto label_1eea18;
        case 0x1eea1cu: goto label_1eea1c;
        case 0x1eea20u: goto label_1eea20;
        case 0x1eea24u: goto label_1eea24;
        case 0x1eea28u: goto label_1eea28;
        case 0x1eea2cu: goto label_1eea2c;
        case 0x1eea30u: goto label_1eea30;
        case 0x1eea34u: goto label_1eea34;
        case 0x1eea38u: goto label_1eea38;
        case 0x1eea3cu: goto label_1eea3c;
        case 0x1eea40u: goto label_1eea40;
        case 0x1eea44u: goto label_1eea44;
        case 0x1eea48u: goto label_1eea48;
        case 0x1eea4cu: goto label_1eea4c;
        case 0x1eea50u: goto label_1eea50;
        case 0x1eea54u: goto label_1eea54;
        case 0x1eea58u: goto label_1eea58;
        case 0x1eea5cu: goto label_1eea5c;
        case 0x1eea60u: goto label_1eea60;
        case 0x1eea64u: goto label_1eea64;
        case 0x1eea68u: goto label_1eea68;
        case 0x1eea6cu: goto label_1eea6c;
        case 0x1eea70u: goto label_1eea70;
        case 0x1eea74u: goto label_1eea74;
        case 0x1eea78u: goto label_1eea78;
        case 0x1eea7cu: goto label_1eea7c;
        case 0x1eea80u: goto label_1eea80;
        case 0x1eea84u: goto label_1eea84;
        case 0x1eea88u: goto label_1eea88;
        case 0x1eea8cu: goto label_1eea8c;
        case 0x1eea90u: goto label_1eea90;
        case 0x1eea94u: goto label_1eea94;
        case 0x1eea98u: goto label_1eea98;
        case 0x1eea9cu: goto label_1eea9c;
        case 0x1eeaa0u: goto label_1eeaa0;
        case 0x1eeaa4u: goto label_1eeaa4;
        case 0x1eeaa8u: goto label_1eeaa8;
        case 0x1eeaacu: goto label_1eeaac;
        case 0x1eeab0u: goto label_1eeab0;
        case 0x1eeab4u: goto label_1eeab4;
        case 0x1eeab8u: goto label_1eeab8;
        case 0x1eeabcu: goto label_1eeabc;
        case 0x1eeac0u: goto label_1eeac0;
        case 0x1eeac4u: goto label_1eeac4;
        case 0x1eeac8u: goto label_1eeac8;
        case 0x1eeaccu: goto label_1eeacc;
        case 0x1eead0u: goto label_1eead0;
        case 0x1eead4u: goto label_1eead4;
        case 0x1eead8u: goto label_1eead8;
        case 0x1eeadcu: goto label_1eeadc;
        case 0x1eeae0u: goto label_1eeae0;
        case 0x1eeae4u: goto label_1eeae4;
        default: break;
    }

    ctx->pc = 0x1eea10u;

label_1eea10:
    // 0x1eea10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1eea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1eea14:
    // 0x1eea14: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1eea14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eea18:
    // 0x1eea18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1eea1c:
    // 0x1eea1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1eea1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eea20:
    // 0x1eea20: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1eea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1eea24:
    // 0x1eea24: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1eea24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1eea28:
    // 0x1eea28: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1eea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1eea2c:
    // 0x1eea2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1eea2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1eea30:
    // 0x1eea30: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1eea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1eea34:
    // 0x1eea34: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1eea34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eea38:
    // 0x1eea38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1eea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1eea3c:
    // 0x1eea3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1eea3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eea40:
    // 0x1eea40: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1eea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1eea44:
    // 0x1eea44: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1eea44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eea48:
    // 0x1eea48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1eea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1eea4c:
    // 0x1eea4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eea50:
    // 0x1eea50: 0x8ea31fe8  lw          $v1, 0x1FE8($s5)
    ctx->pc = 0x1eea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8168)));
label_1eea54:
    // 0x1eea54: 0x1068001b  beq         $v1, $t0, . + 4 + (0x1B << 2)
label_1eea58:
    if (ctx->pc == 0x1EEA58u) {
        ctx->pc = 0x1EEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA54u;
        // 0x1eea58: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA5Cu;
        goto label_1eea5c;
    }
    ctx->pc = 0x1EEA54u;
    {
        const bool branch_taken_0x1eea54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1EEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA54u;
        // 0x1eea58: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea54) {
            ctx->pc = 0x1EEAC4u;
            goto label_1eeac4;
        }
    }
    ctx->pc = 0x1EEA5Cu;
label_1eea5c:
    // 0x1eea5c: 0xc07aa08  jal         func_1EA820
label_1eea60:
    if (ctx->pc == 0x1EEA60u) {
        ctx->pc = 0x1EEA64u;
        goto label_1eea64;
    }
    ctx->pc = 0x1EEA5Cu;
    SET_GPR_U32(ctx, 31, 0x1EEA64u);
    ctx->pc = 0x1EA820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA820u, 0x1EEA5Cu, 0x1EEA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEA64u;
label_1eea64:
    // 0x1eea64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1eea64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eea68:
    // 0x1eea68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1eea68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1eea6c:
    // 0x1eea6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1eea6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eea70:
    // 0x1eea70: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x1eea70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1eea74:
    // 0x1eea74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eea74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eea78:
    // 0x1eea78: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1eea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1eea7c:
    // 0x1eea7c: 0x8fb30008  lw          $s3, 0x8($sp)
    ctx->pc = 0x1eea7cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1eea80:
    // 0x1eea80: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1eea84:
    if (ctx->pc == 0x1EEA84u) {
        ctx->pc = 0x1EEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA80u;
        // 0x1eea84: 0x8fb4000c  lw          $s4, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEA88u;
        goto label_1eea88;
    }
    ctx->pc = 0x1EEA80u;
    {
        const bool branch_taken_0x1eea80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA80u;
        // 0x1eea84: 0x8fb4000c  lw          $s4, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eea80) {
            ctx->pc = 0x1EEAC4u;
            goto label_1eeac4;
        }
    }
    ctx->pc = 0x1EEA88u;
label_1eea88:
    // 0x1eea88: 0xc07baba  jal         func_1EEAE8
label_1eea8c:
    if (ctx->pc == 0x1EEA8Cu) {
        ctx->pc = 0x1EEA90u;
        goto label_1eea90;
    }
    ctx->pc = 0x1EEA88u;
    SET_GPR_U32(ctx, 31, 0x1EEA90u);
    ctx->pc = 0x1EEAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEAE8u, 0x1EEA88u, 0x1EEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEA90u;
label_1eea90:
    // 0x1eea90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1eea90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eea94:
    // 0x1eea94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eea98:
    // 0x1eea98: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
label_1eea9c:
    if (ctx->pc == 0x1EEA9Cu) {
        ctx->pc = 0x1EEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA98u;
        // 0x1eea9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEAA0u;
        goto label_1eeaa0;
    }
    ctx->pc = 0x1EEA98u;
    {
        const bool branch_taken_0x1eea98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eea98) {
            ctx->pc = 0x1EEA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEA98u;
            // 0x1eea9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEAC4u;
            goto label_1eeac4;
        }
    }
    ctx->pc = 0x1EEAA0u;
label_1eeaa0:
    // 0x1eeaa0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1eeaa4:
    if (ctx->pc == 0x1EEAA4u) {
        ctx->pc = 0x1EEAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAA0u;
        // 0x1eeaa4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEAA8u;
        goto label_1eeaa8;
    }
    ctx->pc = 0x1EEAA0u;
    {
        const bool branch_taken_0x1eeaa0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAA0u;
        // 0x1eeaa4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeaa0) {
            ctx->pc = 0x1EEAB0u;
            goto label_1eeab0;
        }
    }
    ctx->pc = 0x1EEAA8u;
label_1eeaa8:
    // 0x1eeaa8: 0x240f809  jalr        $s2
label_1eeaac:
    if (ctx->pc == 0x1EEAACu) {
        ctx->pc = 0x1EEAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAA8u;
        // 0x1eeaac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEAB0u;
        goto label_1eeab0;
    }
    ctx->pc = 0x1EEAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x1EEAB0u);
        ctx->pc = 0x1EEAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAA8u;
        // 0x1eeaac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEAA8u, 0x1EEAB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEAB0u;
label_1eeab0:
    // 0x1eeab0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_1eeab4:
    if (ctx->pc == 0x1EEAB4u) {
        ctx->pc = 0x1EEAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAB0u;
        // 0x1eeab4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEAB8u;
        goto label_1eeab8;
    }
    ctx->pc = 0x1EEAB0u;
    {
        const bool branch_taken_0x1eeab0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAB0u;
        // 0x1eeab4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeab0) {
            ctx->pc = 0x1EEAC0u;
            goto label_1eeac0;
        }
    }
    ctx->pc = 0x1EEAB8u;
label_1eeab8:
    // 0x1eeab8: 0x260f809  jalr        $s3
label_1eeabc:
    if (ctx->pc == 0x1EEABCu) {
        ctx->pc = 0x1EEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAB8u;
        // 0x1eeabc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEAC0u;
        goto label_1eeac0;
    }
    ctx->pc = 0x1EEAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x1EEAC0u);
        ctx->pc = 0x1EEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAB8u;
        // 0x1eeabc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEAB8u, 0x1EEAC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EEAC0u;
label_1eeac0:
    // 0x1eeac0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1eeac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eeac4:
    // 0x1eeac4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1eeac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eeac8:
    // 0x1eeac8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1eeac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1eeacc:
    // 0x1eeacc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eeaccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eead0:
    // 0x1eead0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1eead0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1eead4:
    // 0x1eead4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1eead4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1eead8:
    // 0x1eead8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1eead8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1eeadc:
    // 0x1eeadc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1eeadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1eeae0:
    // 0x1eeae0: 0x3e00008  jr          $ra
label_1eeae4:
    if (ctx->pc == 0x1EEAE4u) {
        ctx->pc = 0x1EEAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAE0u;
        // 0x1eeae4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEAE8u;
        goto label_fallthrough_0x1eeae0;
    }
    ctx->pc = 0x1EEAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEAE0u;
        // 0x1eeae4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eeae0:
    ctx->pc = 0x1EEAE8u;
}
