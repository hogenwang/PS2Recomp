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

// Function: sub_0018AEF0
// Address: 0x18aef0 - 0x18afa0
void sub_0018AEF0_0x18aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AEF0_0x18aef0");
#endif

    switch (ctx->pc) {
        case 0x18aef0u: goto label_18aef0;
        case 0x18aef4u: goto label_18aef4;
        case 0x18aef8u: goto label_18aef8;
        case 0x18aefcu: goto label_18aefc;
        case 0x18af00u: goto label_18af00;
        case 0x18af04u: goto label_18af04;
        case 0x18af08u: goto label_18af08;
        case 0x18af0cu: goto label_18af0c;
        case 0x18af10u: goto label_18af10;
        case 0x18af14u: goto label_18af14;
        case 0x18af18u: goto label_18af18;
        case 0x18af1cu: goto label_18af1c;
        case 0x18af20u: goto label_18af20;
        case 0x18af24u: goto label_18af24;
        case 0x18af28u: goto label_18af28;
        case 0x18af2cu: goto label_18af2c;
        case 0x18af30u: goto label_18af30;
        case 0x18af34u: goto label_18af34;
        case 0x18af38u: goto label_18af38;
        case 0x18af3cu: goto label_18af3c;
        case 0x18af40u: goto label_18af40;
        case 0x18af44u: goto label_18af44;
        case 0x18af48u: goto label_18af48;
        case 0x18af4cu: goto label_18af4c;
        case 0x18af50u: goto label_18af50;
        case 0x18af54u: goto label_18af54;
        case 0x18af58u: goto label_18af58;
        case 0x18af5cu: goto label_18af5c;
        case 0x18af60u: goto label_18af60;
        case 0x18af64u: goto label_18af64;
        case 0x18af68u: goto label_18af68;
        case 0x18af6cu: goto label_18af6c;
        case 0x18af70u: goto label_18af70;
        case 0x18af74u: goto label_18af74;
        case 0x18af78u: goto label_18af78;
        case 0x18af7cu: goto label_18af7c;
        case 0x18af80u: goto label_18af80;
        case 0x18af84u: goto label_18af84;
        case 0x18af88u: goto label_18af88;
        case 0x18af8cu: goto label_18af8c;
        case 0x18af90u: goto label_18af90;
        case 0x18af94u: goto label_18af94;
        case 0x18af98u: goto label_18af98;
        case 0x18af9cu: goto label_18af9c;
        default: break;
    }

    ctx->pc = 0x18aef0u;

label_18aef0:
    // 0x18aef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18aef4:
    // 0x18aef4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_18aef8:
    // 0x18aef8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18aef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18aefc:
    // 0x18aefc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18aefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18af00:
    // 0x18af00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18af00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18af04:
    // 0x18af04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18af04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18af08:
    // 0x18af08: 0x8c820494  lw          $v0, 0x494($a0)
    ctx->pc = 0x18af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
label_18af0c:
    // 0x18af0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18af0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18af10:
    // 0x18af10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18af14:
    if (ctx->pc == 0x18AF14u) {
        ctx->pc = 0x18AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF10u;
        // 0x18af14: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AF18u;
        goto label_18af18;
    }
    ctx->pc = 0x18AF10u;
    {
        const bool branch_taken_0x18af10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF10u;
        // 0x18af14: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af10) {
            ctx->pc = 0x18AF28u;
            goto label_18af28;
        }
    }
    ctx->pc = 0x18AF18u;
label_18af18:
    // 0x18af18: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18af18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18af1c:
    // 0x18af1c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x18af1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18af20:
    // 0x18af20: 0x10000004  b           . + 4 + (0x4 << 2)
label_18af24:
    if (ctx->pc == 0x18AF24u) {
        ctx->pc = 0x18AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF20u;
        // 0x18af24: 0x26103fc0  addiu       $s0, $s0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AF28u;
        goto label_18af28;
    }
    ctx->pc = 0x18AF20u;
    {
        const bool branch_taken_0x18af20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF20u;
        // 0x18af24: 0x26103fc0  addiu       $s0, $s0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af20) {
            ctx->pc = 0x18AF34u;
            goto label_18af34;
        }
    }
    ctx->pc = 0x18AF28u;
label_18af28:
    // 0x18af28: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18af28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18af2c:
    // 0x18af2c: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x18af2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18af30:
    // 0x18af30: 0x26103fa0  addiu       $s0, $s0, 0x3FA0
    ctx->pc = 0x18af30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16288));
label_18af34:
    // 0x18af34: 0x1a200010  blez        $s1, . + 4 + (0x10 << 2)
label_18af38:
    if (ctx->pc == 0x18AF38u) {
        ctx->pc = 0x18AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF34u;
        // 0x18af38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AF3Cu;
        goto label_18af3c;
    }
    ctx->pc = 0x18AF34u;
    {
        const bool branch_taken_0x18af34 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF34u;
        // 0x18af38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af34) {
            ctx->pc = 0x18AF78u;
            goto label_18af78;
        }
    }
    ctx->pc = 0x18AF3Cu;
label_18af3c:
    // 0x18af3c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_18af40:
    // 0x18af40: 0xa052bb60  sb          $s2, -0x44A0($v0)
    ctx->pc = 0x18af40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294949728), (uint8_t)GPR_U32(ctx, 18));
label_18af44:
    // 0x18af44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18af44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18af48:
    // 0x18af48: 0x40f809  jalr        $v0
label_18af4c:
    if (ctx->pc == 0x18AF4Cu) {
        ctx->pc = 0x18AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF48u;
        // 0x18af4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AF50u;
        goto label_18af50;
    }
    ctx->pc = 0x18AF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18AF50u);
        ctx->pc = 0x18AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF48u;
        // 0x18af4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AF48u, 0x18AF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18AF50u;
label_18af50:
    // 0x18af50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18af50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18af54:
    // 0x18af54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18af54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18af58:
    // 0x18af58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18af58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18af5c:
    // 0x18af5c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_18af60:
    if (ctx->pc == 0x18AF60u) {
        ctx->pc = 0x18AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF5Cu;
        // 0x18af60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AF64u;
        goto label_18af64;
    }
    ctx->pc = 0x18AF5Cu;
    {
        const bool branch_taken_0x18af5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18af5c) {
            ctx->pc = 0x18AF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AF5Cu;
            // 0x18af60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AF6Cu;
            goto label_18af6c;
        }
    }
    ctx->pc = 0x18AF64u;
label_18af64:
    // 0x18af64: 0x10000006  b           . + 4 + (0x6 << 2)
label_18af68:
    if (ctx->pc == 0x18AF68u) {
        ctx->pc = 0x18AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF64u;
        // 0x18af68: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AF6Cu;
        goto label_18af6c;
    }
    ctx->pc = 0x18AF64u;
    {
        const bool branch_taken_0x18af64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF64u;
        // 0x18af68: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af64) {
            ctx->pc = 0x18AF80u;
            goto label_18af80;
        }
    }
    ctx->pc = 0x18AF6Cu;
label_18af6c:
    // 0x18af6c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x18af6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_18af70:
    // 0x18af70: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_18af74:
    if (ctx->pc == 0x18AF74u) {
        ctx->pc = 0x18AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF70u;
        // 0x18af74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AF78u;
        goto label_18af78;
    }
    ctx->pc = 0x18AF70u;
    {
        const bool branch_taken_0x18af70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF70u;
        // 0x18af74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af70) {
            ctx->pc = 0x18AF3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18af3c;
        }
    }
    ctx->pc = 0x18AF78u;
label_18af78:
    // 0x18af78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18af78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18af7c:
    // 0x18af7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18af7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18af80:
    // 0x18af80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18af80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18af84:
    // 0x18af84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18af84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18af88:
    // 0x18af88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18af88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18af8c:
    // 0x18af8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18af8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18af90:
    // 0x18af90: 0x3e00008  jr          $ra
label_18af94:
    if (ctx->pc == 0x18AF94u) {
        ctx->pc = 0x18AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF90u;
        // 0x18af94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AF98u;
        goto label_18af98;
    }
    ctx->pc = 0x18AF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF90u;
        // 0x18af94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AF98u;
label_18af98:
    // 0x18af98: 0x0  nop
    ctx->pc = 0x18af98u;
    // NOP
label_18af9c:
    // 0x18af9c: 0x0  nop
    ctx->pc = 0x18af9cu;
    // NOP
    if (ctx->pc == 0x18af9cu) { ctx->pc = 0x18afa0u; }
}
