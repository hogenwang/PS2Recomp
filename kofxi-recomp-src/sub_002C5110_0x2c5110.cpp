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

// Function: sub_002C5110
// Address: 0x2c5110 - 0x2c51d8
void sub_002C5110_0x2c5110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5110_0x2c5110");
#endif

    switch (ctx->pc) {
        case 0x2c5148u: goto label_2c5148;
        case 0x2c5158u: goto label_2c5158;
        case 0x2c516cu: goto label_2c516c;
        case 0x2c5194u: goto label_2c5194;
        case 0x2c51a0u: goto label_2c51a0;
        case 0x2c51acu: goto label_2c51ac;
        default: break;
    }

    ctx->pc = 0x2c5110u;

    // 0x2c5110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c5110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c5114: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c5114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c5118: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c5118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c511c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c511cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5120: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c5120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c5124: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5128: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2c5128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c512c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C512Cu;
    {
        const bool branch_taken_0x2c512c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C512Cu;
        // 0x2c5130: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c512c) {
            ctx->pc = 0x2C513Cu;
            goto label_2c513c;
        }
    }
    ctx->pc = 0x2C5134u;
    // 0x2c5134: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C5134u;
    {
        const bool branch_taken_0x2c5134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5134u;
        // 0x2c5138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5134) {
            ctx->pc = 0x2C51B8u;
            goto label_2c51b8;
        }
    }
    ctx->pc = 0x2C513Cu;
label_2c513c:
    // 0x2c513c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c513cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5140: 0xc0a045a  jal         func_281168
    ctx->pc = 0x2C5140u;
    SET_GPR_U32(ctx, 31, 0x2C5148u);
    ctx->pc = 0x2C5144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5140u;
    // 0x2c5144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281168u, 0x2C5140u, 0x2C5148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5148u;
label_2c5148:
    // 0x2c5148: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c5148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c514c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c514cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5150: 0xc0a045a  jal         func_281168
    ctx->pc = 0x2C5150u;
    SET_GPR_U32(ctx, 31, 0x2C5158u);
    ctx->pc = 0x2C5154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5150u;
    // 0x2c5154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281168u, 0x2C5150u, 0x2C5158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5158u;
label_2c5158:
    // 0x2c5158: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c5158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c515c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5160: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5164: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2C5164u;
    SET_GPR_U32(ctx, 31, 0x2C516Cu);
    ctx->pc = 0x2C5168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5164u;
    // 0x2c5168: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x2C5164u, 0x2C516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C516Cu;
label_2c516c:
    // 0x2c516c: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C516Cu;
    {
        const bool branch_taken_0x2c516c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C516Cu;
        // 0x2c5170: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c516c) {
            ctx->pc = 0x2C51B8u;
            goto label_2c51b8;
        }
    }
    ctx->pc = 0x2C5174u;
    // 0x2c5174: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c5174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c5178: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c5178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c517c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c517cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5180: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c5180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5184: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c5184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c5188: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c5188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c518c: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C518Cu;
    SET_GPR_U32(ctx, 31, 0x2C5194u);
    ctx->pc = 0x2C5190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C518Cu;
    // 0x2c5190: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x2C518Cu, 0x2C5194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5194u;
label_2c5194:
    // 0x2c5194: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c5194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5198: 0xc0a045a  jal         func_281168
    ctx->pc = 0x2C5198u;
    SET_GPR_U32(ctx, 31, 0x2C51A0u);
    ctx->pc = 0x2C519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5198u;
    // 0x2c519c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281168u, 0x2C5198u, 0x2C51A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C51A0u;
label_2c51a0:
    // 0x2c51a0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c51a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c51a4: 0xc0a045a  jal         func_281168
    ctx->pc = 0x2C51A4u;
    SET_GPR_U32(ctx, 31, 0x2C51ACu);
    ctx->pc = 0x2C51A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C51A4u;
    // 0x2c51a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281168u, 0x2C51A4u, 0x2C51ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C51ACu;
label_2c51ac:
    // 0x2c51ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c51acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c51b0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c51b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c51b4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2c51b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2c51b8:
    // 0x2c51b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c51b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c51bc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2c51bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c51c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c51c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c51c4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c51c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c51c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c51c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c51cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C51CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51CCu;
        // 0x2c51d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C51CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C51D4u;
    // 0x2c51d4: 0x0  nop
    ctx->pc = 0x2c51d4u;
    // NOP
    if (ctx->pc == 0x2c51d4u) { ctx->pc = 0x2c51d8u; }
}
