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

// Function: sub_001F5028
// Address: 0x1f5028 - 0x1f51a0
void sub_001F5028_0x1f5028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5028_0x1f5028");
#endif

    switch (ctx->pc) {
        case 0x1f5074u: goto label_1f5074;
        case 0x1f50a4u: goto label_1f50a4;
        case 0x1f50bcu: goto label_1f50bc;
        case 0x1f5114u: goto label_1f5114;
        case 0x1f5144u: goto label_1f5144;
        case 0x1f515cu: goto label_1f515c;
        default: break;
    }

    ctx->pc = 0x1f5028u;

    // 0x1f5028: 0x8c833708  lw          $v1, 0x3708($a0)
    ctx->pc = 0x1f5028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14088)));
    // 0x1f502c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f502cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5030: 0x8c842018  lw          $a0, 0x2018($a0)
    ctx->pc = 0x1f5030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f5034: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5034u;
    {
        const bool branch_taken_0x1f5034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5034u;
        // 0x1f5038: 0x24650ad0  addiu       $a1, $v1, 0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5034) {
            ctx->pc = 0x1F5050u;
            goto label_1f5050;
        }
    }
    ctx->pc = 0x1F503Cu;
    // 0x1f503c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1f503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1f5040: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f5040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5044: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1f5044u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f5048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f504c: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1f504cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1f5050:
    // 0x1f5050: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5058u;
    // 0x1f5058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f505c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f506c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F506Cu;
    SET_GPR_U32(ctx, 31, 0x1F5074u);
    ctx->pc = 0x1F5070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F506Cu;
    // 0x1f5070: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F506Cu, 0x1F5074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5074u;
label_1f5074:
    // 0x1f5074: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f5074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f5078: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5078u;
    {
        const bool branch_taken_0x1f5078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5078u;
        // 0x1f507c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5078) {
            ctx->pc = 0x1F5098u;
            goto label_1f5098;
        }
    }
    ctx->pc = 0x1F5080u;
    // 0x1f5080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5084: 0x34a50188  ori         $a1, $a1, 0x188
    ctx->pc = 0x1f5084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)392);
    // 0x1f5088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f508c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5090: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F5090u;
    ctx->pc = 0x1F5094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5090u;
    // 0x1f5094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5098u;
label_1f5098:
    // 0x1f5098: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f5098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f509c: 0xc07d468  jal         func_1F51A0
    ctx->pc = 0x1F509Cu;
    SET_GPR_U32(ctx, 31, 0x1F50A4u);
    ctx->pc = 0x1F50A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F509Cu;
    // 0x1f50a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F51A0u, 0x1F509Cu, 0x1F50A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F50A4u;
label_1f50a4:
    // 0x1f50a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f50a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f50a8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f50a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f50ac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F50ACu;
    {
        const bool branch_taken_0x1f50ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50ACu;
        // 0x1f50b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f50ac) {
            ctx->pc = 0x1F50C8u;
            goto label_1f50c8;
        }
    }
    ctx->pc = 0x1F50B4u;
    // 0x1f50b4: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1F50B4u;
    SET_GPR_U32(ctx, 31, 0x1F50BCu);
    ctx->pc = 0x1F50B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F50B4u;
    // 0x1f50b8: 0x34a50f30  ori         $a1, $a1, 0xF30 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3888);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1F50B4u, 0x1F50BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F50BCu;
label_1f50bc:
    // 0x1f50bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F50BCu;
    {
        const bool branch_taken_0x1f50bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F50C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50BCu;
        // 0x1f50c0: 0x8e020980  lw          $v0, 0x980($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f50bc) {
            ctx->pc = 0x1F50D8u;
            goto label_1f50d8;
        }
    }
    ctx->pc = 0x1F50C4u;
    // 0x1f50c4: 0x0  nop
    ctx->pc = 0x1f50c4u;
    // NOP
label_1f50c8:
    // 0x1f50c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f50cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f50d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f50d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1f50d4: 0x8e020980  lw          $v0, 0x980($s0)
    ctx->pc = 0x1f50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_1f50d8:
    // 0x1f50d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f50d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f50dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f50e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f50e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f50e4: 0xae020980  sw          $v0, 0x980($s0)
    ctx->pc = 0x1f50e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
    // 0x1f50e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f50e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f50ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F50ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50ECu;
        // 0x1f50f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F50ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F50F4u;
    // 0x1f50f4: 0x0  nop
    ctx->pc = 0x1f50f4u;
    // NOP
    // 0x1f50f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f50f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f50fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f50fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5104: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f510c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F510Cu;
    SET_GPR_U32(ctx, 31, 0x1F5114u);
    ctx->pc = 0x1F5110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F510Cu;
    // 0x1f5110: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F510Cu, 0x1F5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5114u;
label_1f5114:
    // 0x1f5114: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f5114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f5118: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5118u;
    {
        const bool branch_taken_0x1f5118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5118u;
        // 0x1f511c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5118) {
            ctx->pc = 0x1F5138u;
            goto label_1f5138;
        }
    }
    ctx->pc = 0x1F5120u;
    // 0x1f5120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5124: 0x34a50189  ori         $a1, $a1, 0x189
    ctx->pc = 0x1f5124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)393);
    // 0x1f5128: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f512c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f512cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5130: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F5130u;
    ctx->pc = 0x1F5134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5130u;
    // 0x1f5134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5138u;
label_1f5138:
    // 0x1f5138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f5138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f513c: 0xc07d468  jal         func_1F51A0
    ctx->pc = 0x1F513Cu;
    SET_GPR_U32(ctx, 31, 0x1F5144u);
    ctx->pc = 0x1F5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F513Cu;
    // 0x1f5140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F51A0u, 0x1F513Cu, 0x1F5144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5144u;
label_1f5144:
    // 0x1f5144: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f5144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5148: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f5148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f514c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F514Cu;
    {
        const bool branch_taken_0x1f514c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F514Cu;
        // 0x1f5150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f514c) {
            ctx->pc = 0x1F5168u;
            goto label_1f5168;
        }
    }
    ctx->pc = 0x1F5154u;
    // 0x1f5154: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1F5154u;
    SET_GPR_U32(ctx, 31, 0x1F515Cu);
    ctx->pc = 0x1F5158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5154u;
    // 0x1f5158: 0x34a50f31  ori         $a1, $a1, 0xF31 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3889);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1F5154u, 0x1F515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F515Cu;
label_1f515c:
    // 0x1f515c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F515Cu;
    {
        const bool branch_taken_0x1f515c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F515Cu;
        // 0x1f5160: 0x8e020980  lw          $v0, 0x980($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f515c) {
            ctx->pc = 0x1F5180u;
            goto label_1f5180;
        }
    }
    ctx->pc = 0x1F5164u;
    // 0x1f5164: 0x0  nop
    ctx->pc = 0x1f5164u;
    // NOP
label_1f5168:
    // 0x1f5168: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1f5168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1f516c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f5170: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1f5170u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f5174: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1f5174u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1f5178: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1f5178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1f517c: 0x8e020980  lw          $v0, 0x980($s0)
    ctx->pc = 0x1f517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_1f5180:
    // 0x1f5180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5184: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f5184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f5188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f518c: 0xae020980  sw          $v0, 0x980($s0)
    ctx->pc = 0x1f518cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
    // 0x1f5190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5194: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5194u;
        // 0x1f5198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F519Cu;
    // 0x1f519c: 0x0  nop
    ctx->pc = 0x1f519cu;
    // NOP
}
