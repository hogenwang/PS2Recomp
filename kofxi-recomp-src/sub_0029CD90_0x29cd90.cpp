#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CD90
// Address: 0x29cd90 - 0x29ce78
void sub_0029CD90_0x29cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CD90_0x29cd90");
#endif

    switch (ctx->pc) {
        case 0x29cdc8u: goto label_29cdc8;
        case 0x29cddcu: goto label_29cddc;
        case 0x29ce00u: goto label_29ce00;
        case 0x29ce14u: goto label_29ce14;
        case 0x29ce1cu: goto label_29ce1c;
        case 0x29ce24u: goto label_29ce24;
        case 0x29ce30u: goto label_29ce30;
        case 0x29ce48u: goto label_29ce48;
        case 0x29ce60u: goto label_29ce60;
        default: break;
    }

    ctx->pc = 0x29cd90u;

    // 0x29cd90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cd94: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x29cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x29cd98: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x29CD98u;
    {
        const bool branch_taken_0x29cd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CD98u;
            // 0x29cd9c: 0x28620043  slti        $v0, $v1, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd98) {
            ctx->pc = 0x29CE1Cu;
            goto label_29ce1c;
        }
    }
    ctx->pc = 0x29CDA0u;
    // 0x29cda0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29CDA0u;
    {
        const bool branch_taken_0x29cda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CDA0u;
            // 0x29cda4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cda0) {
            ctx->pc = 0x29CDDCu;
            goto label_29cddc;
        }
    }
    ctx->pc = 0x29CDA8u;
    // 0x29cda8: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x29CDA8u;
    {
        const bool branch_taken_0x29cda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CDA8u;
            // 0x29cdac: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cda8) {
            ctx->pc = 0x29CE14u;
            goto label_29ce14;
        }
    }
    ctx->pc = 0x29CDB0u;
    // 0x29cdb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CDB0u;
    {
        const bool branch_taken_0x29cdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CDB0u;
            // 0x29cdb4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cdb0) {
            ctx->pc = 0x29CDC8u;
            goto label_29cdc8;
        }
    }
    ctx->pc = 0x29CDB8u;
    // 0x29cdb8: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29CDB8u;
    {
        const bool branch_taken_0x29cdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cdb8) {
            ctx->pc = 0x29CE14u;
            goto label_29ce14;
        }
    }
    ctx->pc = 0x29CDC0u;
    // 0x29cdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x29CDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CDC8u;
label_29cdc8:
    // 0x29cdc8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x29cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x29cdcc: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29CDCCu;
    {
        const bool branch_taken_0x29cdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cdcc) {
            ctx->pc = 0x29CE24u;
            goto label_29ce24;
        }
    }
    ctx->pc = 0x29CDD4u;
    // 0x29cdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x29CDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CDDCu;
label_29cddc:
    // 0x29cddc: 0x24020071  addiu       $v0, $zero, 0x71
    ctx->pc = 0x29cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x29cde0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29CDE0u;
    {
        const bool branch_taken_0x29cde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CDE0u;
            // 0x29cde4: 0x28620072  slti        $v0, $v1, 0x72 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)114) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cde0) {
            ctx->pc = 0x29CE1Cu;
            goto label_29ce1c;
        }
    }
    ctx->pc = 0x29CDE8u;
    // 0x29cde8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CDE8u;
    {
        const bool branch_taken_0x29cde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CDE8u;
            // 0x29cdec: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cde8) {
            ctx->pc = 0x29CE00u;
            goto label_29ce00;
        }
    }
    ctx->pc = 0x29CDF0u;
    // 0x29cdf0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29CDF0u;
    {
        const bool branch_taken_0x29cdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cdf0) {
            ctx->pc = 0x29CE1Cu;
            goto label_29ce1c;
        }
    }
    ctx->pc = 0x29CDF8u;
    // 0x29cdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x29CDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CE00u;
label_29ce00:
    // 0x29ce00: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x29ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x29ce04: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CE04u;
    {
        const bool branch_taken_0x29ce04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29ce04) {
            ctx->pc = 0x29CE1Cu;
            goto label_29ce1c;
        }
    }
    ctx->pc = 0x29CE0Cu;
    // 0x29ce0c: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CE14u;
label_29ce14:
    // 0x29ce14: 0x80aa334  j           func_2A8CD0
    ctx->pc = 0x29CE14u;
    ctx->pc = 0x29CE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE14u;
            // 0x29ce18: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8CD0u;
    if (runtime->hasFunction(0x2A8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A8CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A8CD0_0x2a8cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29CE1Cu;
label_29ce1c:
    // 0x29ce1c: 0x80a5200  j           func_294800
    ctx->pc = 0x29CE1Cu;
    ctx->pc = 0x29CE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE1Cu;
            // 0x29ce20: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294800u;
    if (runtime->hasFunction(0x294800u)) {
        auto targetFn = runtime->lookupFunction(0x294800u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00294800_0x294800(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29CE24u;
label_29ce24:
    // 0x29ce24: 0x80a4ff2  j           func_293FC8
    ctx->pc = 0x29CE24u;
    ctx->pc = 0x29CE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE24u;
            // 0x29ce28: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293FC8u;
    if (runtime->hasFunction(0x293FC8u)) {
        auto targetFn = runtime->lookupFunction(0x293FC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00293FC8_0x293fc8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29CE2Cu;
    // 0x29ce2c: 0x0  nop
    ctx->pc = 0x29ce2cu;
    // NOP
label_29ce30:
    // 0x29ce30: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29CE30u;
    {
        const bool branch_taken_0x29ce30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE30u;
            // 0x29ce34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce30) {
            ctx->pc = 0x29CE3Cu;
            goto label_29ce3c;
        }
    }
    ctx->pc = 0x29CE38u;
    // 0x29ce38: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x29ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_29ce3c:
    // 0x29ce3c: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CE44u;
    // 0x29ce44: 0x0  nop
    ctx->pc = 0x29ce44u;
    // NOP
label_29ce48:
    // 0x29ce48: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29CE48u;
    {
        const bool branch_taken_0x29ce48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE48u;
            // 0x29ce4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce48) {
            ctx->pc = 0x29CE54u;
            goto label_29ce54;
        }
    }
    ctx->pc = 0x29CE50u;
    // 0x29ce50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x29ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_29ce54:
    // 0x29ce54: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CE5Cu;
    // 0x29ce5c: 0x0  nop
    ctx->pc = 0x29ce5cu;
    // NOP
label_29ce60:
    // 0x29ce60: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29CE60u;
    {
        const bool branch_taken_0x29ce60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE60u;
            // 0x29ce64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce60) {
            ctx->pc = 0x29CE6Cu;
            goto label_29ce6c;
        }
    }
    ctx->pc = 0x29CE68u;
    // 0x29ce68: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x29ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_29ce6c:
    // 0x29ce6c: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CE74u;
    // 0x29ce74: 0x0  nop
    ctx->pc = 0x29ce74u;
    // NOP
    ctx->pc = 0x29ce78u;
}
