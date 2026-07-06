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

// Function: sub_001C5098
// Address: 0x1c5098 - 0x1c51b0
void sub_001C5098_0x1c5098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5098_0x1c5098");
#endif

    switch (ctx->pc) {
        case 0x1c50bcu: goto label_1c50bc;
        case 0x1c50d0u: goto label_1c50d0;
        case 0x1c50d8u: goto label_1c50d8;
        case 0x1c50f8u: goto label_1c50f8;
        case 0x1c5100u: goto label_1c5100;
        case 0x1c5144u: goto label_1c5144;
        case 0x1c5150u: goto label_1c5150;
        case 0x1c5158u: goto label_1c5158;
        case 0x1c5170u: goto label_1c5170;
        default: break;
    }

    ctx->pc = 0x1c5098u;

    // 0x1c5098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c509c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c50a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c50a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c50a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c50a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c50acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c50b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c50b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c50b4: 0xc0713f4  jal         func_1C4FD0
    ctx->pc = 0x1C50B4u;
    SET_GPR_U32(ctx, 31, 0x1C50BCu);
    ctx->pc = 0x1C50B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50B4u;
    // 0x1c50b8: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FD0u, 0x1C50B4u, 0x1C50BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50BCu;
label_1c50bc:
    // 0x1c50bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C50BCu;
    {
        const bool branch_taken_0x1c50bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C50C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50BCu;
        // 0x1c50c0: 0x3c050038  lui         $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50bc) {
            ctx->pc = 0x1C50D0u;
            goto label_1c50d0;
        }
    }
    ctx->pc = 0x1C50C4u;
    // 0x1c50c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c50c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50c8: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1C50C8u;
    SET_GPR_U32(ctx, 31, 0x1C50D0u);
    ctx->pc = 0x1C50CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50C8u;
    // 0x1c50cc: 0x24a5f070  addiu       $a1, $a1, -0xF90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1C50C8u, 0x1C50D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50D0u;
label_1c50d0:
    // 0x1c50d0: 0xc071410  jal         func_1C5040
    ctx->pc = 0x1C50D0u;
    SET_GPR_U32(ctx, 31, 0x1C50D8u);
    ctx->pc = 0x1C50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50D0u;
    // 0x1c50d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5040u, 0x1C50D0u, 0x1C50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50D8u;
label_1c50d8:
    // 0x1c50d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50dc: 0x5443001a  bnel        $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C50DCu;
    {
        const bool branch_taken_0x1c50dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c50dc) {
            ctx->pc = 0x1C50E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C50DCu;
            // 0x1c50e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5148u;
            goto label_1c5148;
        }
    }
    ctx->pc = 0x1C50E4u;
    // 0x1c50e4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c50e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1c50e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c50e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50ec: 0x2610ef68  addiu       $s0, $s0, -0x1098
    ctx->pc = 0x1c50ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963048));
    // 0x1c50f0: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x1C50F0u;
    SET_GPR_U32(ctx, 31, 0x1C50F8u);
    ctx->pc = 0x1C50F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50F0u;
    // 0x1c50f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129B68u, 0x1C50F0u, 0x1C50F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50F8u;
label_1c50f8:
    // 0x1c50f8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C50F8u;
    SET_GPR_U32(ctx, 31, 0x1C5100u);
    ctx->pc = 0x1C50FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50F8u;
    // 0x1c50fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C50F8u, 0x1C5100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5100u;
label_1c5100:
    // 0x1c5100: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1c5100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1c5104: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c5104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5108: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x1c5108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x1c510c: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C510Cu;
    {
        const bool branch_taken_0x1c510c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C510Cu;
        // 0x1c5110: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c510c) {
            ctx->pc = 0x1C5144u;
            goto label_1c5144;
        }
    }
    ctx->pc = 0x1C5114u;
    // 0x1c5114: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5114u;
    {
        const bool branch_taken_0x1c5114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5114u;
        // 0x1c5118: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5114) {
            ctx->pc = 0x1C5148u;
            goto label_1c5148;
        }
    }
    ctx->pc = 0x1C511Cu;
    // 0x1c511c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C511Cu;
    {
        const bool branch_taken_0x1c511c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c511c) {
            ctx->pc = 0x1C5148u;
            goto label_1c5148;
        }
    }
    ctx->pc = 0x1C5124u;
    // 0x1c5124: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1c5124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c5128: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5128u;
    {
        const bool branch_taken_0x1c5128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c5128) {
            ctx->pc = 0x1C5148u;
            goto label_1c5148;
        }
    }
    ctx->pc = 0x1C5130u;
    // 0x1c5130: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5130u;
    {
        const bool branch_taken_0x1c5130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5130u;
        // 0x1c5134: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5130) {
            ctx->pc = 0x1C5144u;
            goto label_1c5144;
        }
    }
    ctx->pc = 0x1C5138u;
    // 0x1c5138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c513c: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x1C513Cu;
    SET_GPR_U32(ctx, 31, 0x1C5144u);
    ctx->pc = 0x1C5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C513Cu;
    // 0x1c5140: 0x24a5a420  addiu       $a1, $a1, -0x5BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129B68u, 0x1C513Cu, 0x1C5144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5144u;
label_1c5144:
    // 0x1c5144: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c5144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c5148:
    // 0x1c5148: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x1C5148u;
    SET_GPR_U32(ctx, 31, 0x1C5150u);
    ctx->pc = 0x1C514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5148u;
    // 0x1c514c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129B68u, 0x1C5148u, 0x1C5150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5150u;
label_1c5150:
    // 0x1c5150: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C5150u;
    SET_GPR_U32(ctx, 31, 0x1C5158u);
    ctx->pc = 0x1C5154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5150u;
    // 0x1c5154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C5150u, 0x1C5158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5158u;
label_1c5158:
    // 0x1c5158: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c5158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c515c: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1C515Cu;
    {
        const bool branch_taken_0x1c515c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1C5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C515Cu;
        // 0x1c5160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c515c) {
            ctx->pc = 0x1C5194u;
            goto label_1c5194;
        }
    }
    ctx->pc = 0x1C5164u;
    // 0x1c5164: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x1c5164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1c5168: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x1c5168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c516c: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x1c516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1c5170:
    // 0x1c5170: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c5170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c5174: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1c5174u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5178: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5178u;
    {
        const bool branch_taken_0x1c5178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x1C517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5178u;
        // 0x1c517c: 0xa6182a  slt         $v1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5178) {
            ctx->pc = 0x1C5184u;
            goto label_1c5184;
        }
    }
    ctx->pc = 0x1C5180u;
    // 0x1c5180: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x1c5180u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
label_1c5184:
    // 0x1c5184: 0x0  nop
    ctx->pc = 0x1c5184u;
    // NOP
    // 0x1c5188: 0x0  nop
    ctx->pc = 0x1c5188u;
    // NOP
    // 0x1c518c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C518Cu;
    {
        const bool branch_taken_0x1c518c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C518Cu;
        // 0x1c5190: 0x2252021  addu        $a0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c518c) {
            ctx->pc = 0x1C5170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5170;
        }
    }
    ctx->pc = 0x1C5194u;
label_1c5194:
    // 0x1c5194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c519c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c519cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c51a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c51a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c51a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51A4u;
        // 0x1c51a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51ACu;
    // 0x1c51ac: 0x0  nop
    ctx->pc = 0x1c51acu;
    // NOP
    if (ctx->pc == 0x1c51acu) { ctx->pc = 0x1c51b0u; }
}
