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

// Function: sub_0023F9D4
// Address: 0x23f9d4 - 0x23fb30
void sub_0023F9D4_0x23f9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F9D4_0x23f9d4");
#endif

    switch (ctx->pc) {
        case 0x23f9d4u: goto label_23f9d4;
        case 0x23f9d8u: goto label_23f9d8;
        case 0x23f9dcu: goto label_23f9dc;
        case 0x23f9e0u: goto label_23f9e0;
        case 0x23f9e4u: goto label_23f9e4;
        case 0x23f9e8u: goto label_23f9e8;
        case 0x23f9ecu: goto label_23f9ec;
        case 0x23f9f0u: goto label_23f9f0;
        case 0x23f9f4u: goto label_23f9f4;
        case 0x23f9f8u: goto label_23f9f8;
        case 0x23f9fcu: goto label_23f9fc;
        case 0x23fa00u: goto label_23fa00;
        case 0x23fa04u: goto label_23fa04;
        case 0x23fa08u: goto label_23fa08;
        case 0x23fa0cu: goto label_23fa0c;
        case 0x23fa10u: goto label_23fa10;
        case 0x23fa14u: goto label_23fa14;
        case 0x23fa18u: goto label_23fa18;
        case 0x23fa1cu: goto label_23fa1c;
        case 0x23fa20u: goto label_23fa20;
        case 0x23fa24u: goto label_23fa24;
        case 0x23fa28u: goto label_23fa28;
        case 0x23fa2cu: goto label_23fa2c;
        case 0x23fa30u: goto label_23fa30;
        case 0x23fa34u: goto label_23fa34;
        case 0x23fa38u: goto label_23fa38;
        case 0x23fa3cu: goto label_23fa3c;
        case 0x23fa40u: goto label_23fa40;
        case 0x23fa44u: goto label_23fa44;
        case 0x23fa48u: goto label_23fa48;
        case 0x23fa4cu: goto label_23fa4c;
        case 0x23fa50u: goto label_23fa50;
        case 0x23fa54u: goto label_23fa54;
        case 0x23fa58u: goto label_23fa58;
        case 0x23fa5cu: goto label_23fa5c;
        case 0x23fa60u: goto label_23fa60;
        case 0x23fa64u: goto label_23fa64;
        case 0x23fa68u: goto label_23fa68;
        case 0x23fa6cu: goto label_23fa6c;
        case 0x23fa70u: goto label_23fa70;
        case 0x23fa74u: goto label_23fa74;
        case 0x23fa78u: goto label_23fa78;
        case 0x23fa7cu: goto label_23fa7c;
        case 0x23fa80u: goto label_23fa80;
        case 0x23fa84u: goto label_23fa84;
        case 0x23fa88u: goto label_23fa88;
        case 0x23fa8cu: goto label_23fa8c;
        case 0x23fa90u: goto label_23fa90;
        case 0x23fa94u: goto label_23fa94;
        case 0x23fa98u: goto label_23fa98;
        case 0x23fa9cu: goto label_23fa9c;
        case 0x23faa0u: goto label_23faa0;
        case 0x23faa4u: goto label_23faa4;
        case 0x23faa8u: goto label_23faa8;
        case 0x23faacu: goto label_23faac;
        case 0x23fab0u: goto label_23fab0;
        case 0x23fab4u: goto label_23fab4;
        case 0x23fab8u: goto label_23fab8;
        case 0x23fabcu: goto label_23fabc;
        case 0x23fac0u: goto label_23fac0;
        case 0x23fac4u: goto label_23fac4;
        case 0x23fac8u: goto label_23fac8;
        case 0x23faccu: goto label_23facc;
        case 0x23fad0u: goto label_23fad0;
        case 0x23fad4u: goto label_23fad4;
        case 0x23fad8u: goto label_23fad8;
        case 0x23fadcu: goto label_23fadc;
        case 0x23fae0u: goto label_23fae0;
        case 0x23fae4u: goto label_23fae4;
        case 0x23fae8u: goto label_23fae8;
        case 0x23faecu: goto label_23faec;
        case 0x23faf0u: goto label_23faf0;
        case 0x23faf4u: goto label_23faf4;
        case 0x23faf8u: goto label_23faf8;
        case 0x23fafcu: goto label_23fafc;
        case 0x23fb00u: goto label_23fb00;
        case 0x23fb04u: goto label_23fb04;
        case 0x23fb08u: goto label_23fb08;
        case 0x23fb0cu: goto label_23fb0c;
        case 0x23fb10u: goto label_23fb10;
        case 0x23fb14u: goto label_23fb14;
        case 0x23fb18u: goto label_23fb18;
        case 0x23fb1cu: goto label_23fb1c;
        case 0x23fb20u: goto label_23fb20;
        case 0x23fb24u: goto label_23fb24;
        case 0x23fb28u: goto label_23fb28;
        case 0x23fb2cu: goto label_23fb2c;
        default: break;
    }

    ctx->pc = 0x23f9d4u;

label_23f9d4:
    // 0x23f9d4: 0x8e02029c  lw          $v0, 0x29C($s0)
    ctx->pc = 0x23f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_23f9d8:
    // 0x23f9d8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x23f9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_23f9dc:
    // 0x23f9dc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x23f9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_23f9e0:
    // 0x23f9e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23f9e4:
    if (ctx->pc == 0x23F9E4u) {
        ctx->pc = 0x23F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9E0u;
        // 0x23f9e4: 0xae02029c  sw          $v0, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F9E8u;
        goto label_23f9e8;
    }
    ctx->pc = 0x23F9E0u;
    {
        const bool branch_taken_0x23f9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9E0u;
        // 0x23f9e4: 0xae02029c  sw          $v0, 0x29C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9e0) {
            ctx->pc = 0x23F9F8u;
            goto label_23f9f8;
        }
    }
    ctx->pc = 0x23F9E8u;
label_23f9e8:
    // 0x23f9e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f9ec:
    // 0x23f9ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f9f0:
    // 0x23f9f0: 0x808c698  j           func_231A60
label_23f9f4:
    if (ctx->pc == 0x23F9F4u) {
        ctx->pc = 0x23F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9F0u;
        // 0x23f9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F9F8u;
        goto label_23f9f8;
    }
    ctx->pc = 0x23F9F0u;
    ctx->pc = 0x23F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9F0u;
    // 0x23f9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    ctx->pc = 0x23F9F8u;
label_23f9f8:
    // 0x23f9f8: 0xc08c698  jal         func_231A60
label_23f9fc:
    if (ctx->pc == 0x23F9FCu) {
        ctx->pc = 0x23FA00u;
        goto label_23fa00;
    }
    ctx->pc = 0x23F9F8u;
    SET_GPR_U32(ctx, 31, 0x23FA00u);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x23F9F8u, 0x23FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA00u;
label_23fa00:
    // 0x23fa00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fa00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fa04:
    // 0x23fa04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23fa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23fa08:
    // 0x23fa08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fa08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23fa0c:
    // 0x23fa0c: 0x809026a  j           func_2409A8
label_23fa10:
    if (ctx->pc == 0x23FA10u) {
        ctx->pc = 0x23FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA0Cu;
        // 0x23fa10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA14u;
        goto label_23fa14;
    }
    ctx->pc = 0x23FA0Cu;
    ctx->pc = 0x23FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA0Cu;
    // 0x23fa10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2409A8u;
    sub_002409A8_0x2409a8(rdram, ctx, runtime); return;
    ctx->pc = 0x23FA14u;
label_23fa14:
    // 0x23fa14: 0x0  nop
    ctx->pc = 0x23fa14u;
    // NOP
label_23fa18:
    // 0x23fa18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23fa1c:
    // 0x23fa1c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23fa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23fa20:
    // 0x23fa20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23fa24:
    // 0x23fa24: 0x24a56060  addiu       $a1, $a1, 0x6060
    ctx->pc = 0x23fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24672));
label_23fa28:
    // 0x23fa28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fa28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23fa2c:
    // 0x23fa2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23fa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23fa30:
    // 0x23fa30: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x23fa30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_23fa34:
    // 0x23fa34: 0xc08b5ac  jal         func_22D6B0
label_23fa38:
    if (ctx->pc == 0x23FA38u) {
        ctx->pc = 0x23FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA34u;
        // 0x23fa38: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA3Cu;
        goto label_23fa3c;
    }
    ctx->pc = 0x23FA34u;
    SET_GPR_U32(ctx, 31, 0x23FA3Cu);
    ctx->pc = 0x23FA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA34u;
    // 0x23fa38: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23FA34u, 0x23FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA3Cu;
label_23fa3c:
    // 0x23fa3c: 0xc08a08c  jal         func_228230
label_23fa40:
    if (ctx->pc == 0x23FA40u) {
        ctx->pc = 0x23FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA3Cu;
        // 0x23fa40: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA44u;
        goto label_23fa44;
    }
    ctx->pc = 0x23FA3Cu;
    SET_GPR_U32(ctx, 31, 0x23FA44u);
    ctx->pc = 0x23FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA3Cu;
    // 0x23fa40: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228230u, 0x23FA3Cu, 0x23FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA44u;
label_23fa44:
    // 0x23fa44: 0xc08a08c  jal         func_228230
label_23fa48:
    if (ctx->pc == 0x23FA48u) {
        ctx->pc = 0x23FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA44u;
        // 0x23fa48: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA4Cu;
        goto label_23fa4c;
    }
    ctx->pc = 0x23FA44u;
    SET_GPR_U32(ctx, 31, 0x23FA4Cu);
    ctx->pc = 0x23FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA44u;
    // 0x23fa48: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228230u, 0x23FA44u, 0x23FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA4Cu;
label_23fa4c:
    // 0x23fa4c: 0x8e03029c  lw          $v1, 0x29C($s0)
    ctx->pc = 0x23fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_23fa50:
    // 0x23fa50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23fa54:
    // 0x23fa54: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23fa54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23fa58:
    // 0x23fa58: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x23fa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
label_23fa5c:
    // 0x23fa5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23fa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23fa60:
    // 0x23fa60: 0x8c855074  lw          $a1, 0x5074($a0)
    ctx->pc = 0x23fa60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20596)));
label_23fa64:
    // 0x23fa64: 0xae03029c  sw          $v1, 0x29C($s0)
    ctx->pc = 0x23fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 3));
label_23fa68:
    // 0x23fa68: 0xa0f809  jalr        $a1
label_23fa6c:
    if (ctx->pc == 0x23FA6Cu) {
        ctx->pc = 0x23FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA68u;
        // 0x23fa6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA70u;
        goto label_23fa70;
    }
    ctx->pc = 0x23FA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23FA70u);
        ctx->pc = 0x23FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA68u;
        // 0x23fa6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FA68u, 0x23FA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23FA70u;
label_23fa70:
    // 0x23fa70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23fa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23fa74:
    // 0x23fa74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fa74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23fa78:
    // 0x23fa78: 0x3e00008  jr          $ra
label_23fa7c:
    if (ctx->pc == 0x23FA7Cu) {
        ctx->pc = 0x23FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA78u;
        // 0x23fa7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA80u;
        goto label_23fa80;
    }
    ctx->pc = 0x23FA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA78u;
        // 0x23fa7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FA80u;
label_23fa80:
    // 0x23fa80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23fa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23fa84:
    // 0x23fa84: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x23fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_23fa88:
    // 0x23fa88: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x23fa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_23fa8c:
    // 0x23fa8c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x23fa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_23fa90:
    // 0x23fa90: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x23fa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_23fa94:
    // 0x23fa94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x23fa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_23fa98:
    // 0x23fa98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fa98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23fa9c:
    // 0x23fa9c: 0x26124128  addiu       $s2, $s0, 0x4128
    ctx->pc = 0x23fa9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16680));
label_23faa0:
    // 0x23faa0: 0x26114028  addiu       $s1, $s0, 0x4028
    ctx->pc = 0x23faa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16424));
label_23faa4:
    // 0x23faa4: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x23faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_23faa8:
    // 0x23faa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23faa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23faac:
    // 0x23faac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23faacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23fab0:
    // 0x23fab0: 0xa202017b  sb          $v0, 0x17B($s0)
    ctx->pc = 0x23fab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 379), (uint8_t)GPR_U32(ctx, 2));
label_23fab4:
    // 0x23fab4: 0xc090460  jal         func_241180
label_23fab8:
    if (ctx->pc == 0x23FAB8u) {
        ctx->pc = 0x23FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAB4u;
        // 0x23fab8: 0xae020144  sw          $v0, 0x144($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FABCu;
        goto label_23fabc;
    }
    ctx->pc = 0x23FAB4u;
    SET_GPR_U32(ctx, 31, 0x23FABCu);
    ctx->pc = 0x23FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAB4u;
    // 0x23fab8: 0xae020144  sw          $v0, 0x144($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241180u, 0x23FAB4u, 0x23FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FABCu;
label_23fabc:
    // 0x23fabc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23fabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23fac0:
    // 0x23fac0: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x23fac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
label_23fac4:
    // 0x23fac4: 0xc090460  jal         func_241180
label_23fac8:
    if (ctx->pc == 0x23FAC8u) {
        ctx->pc = 0x23FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAC4u;
        // 0x23fac8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FACCu;
        goto label_23facc;
    }
    ctx->pc = 0x23FAC4u;
    SET_GPR_U32(ctx, 31, 0x23FACCu);
    ctx->pc = 0x23FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAC4u;
    // 0x23fac8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241180u, 0x23FAC4u, 0x23FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FACCu;
label_23facc:
    // 0x23facc: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x23faccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_23fad0:
    // 0x23fad0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23fad4:
    // 0x23fad4: 0x93a60031  lbu         $a2, 0x31($sp)
    ctx->pc = 0x23fad4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
label_23fad8:
    // 0x23fad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23fadc:
    // 0x23fadc: 0x9207017b  lbu         $a3, 0x17B($s0)
    ctx->pc = 0x23fadcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 379)));
label_23fae0:
    // 0x23fae0: 0x27a30031  addiu       $v1, $sp, 0x31
    ctx->pc = 0x23fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 49));
label_23fae4:
    // 0x23fae4: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x23fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_23fae8:
    // 0x23fae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23fae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23faec:
    // 0x23faec: 0x93aa0030  lbu         $t2, 0x30($sp)
    ctx->pc = 0x23faecu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_23faf0:
    // 0x23faf0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x23faf0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23faf4:
    // 0x23faf4: 0xafb20018  sw          $s2, 0x18($sp)
    ctx->pc = 0x23faf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 18));
label_23faf8:
    // 0x23faf8: 0x24845138  addiu       $a0, $a0, 0x5138
    ctx->pc = 0x23faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20792));
label_23fafc:
    // 0x23fafc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_23fb00:
    // 0x23fb00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23fb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23fb04:
    // 0x23fb04: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x23fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_23fb08:
    // 0x23fb08: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23fb08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23fb0c:
    // 0x23fb0c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x23fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_23fb10:
    // 0x23fb10: 0xc08fecc  jal         func_23FB30
label_23fb14:
    if (ctx->pc == 0x23FB14u) {
        ctx->pc = 0x23FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB10u;
        // 0x23fb14: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB18u;
        goto label_23fb18;
    }
    ctx->pc = 0x23FB10u;
    SET_GPR_U32(ctx, 31, 0x23FB18u);
    ctx->pc = 0x23FB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB10u;
    // 0x23fb14: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB30u, 0x23FB10u, 0x23FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB18u;
label_23fb18:
    // 0x23fb18: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23fb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23fb1c:
    // 0x23fb1c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x23fb1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23fb20:
    // 0x23fb20: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x23fb20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23fb24:
    // 0x23fb24: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x23fb24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23fb28:
    // 0x23fb28: 0x3e00008  jr          $ra
label_23fb2c:
    if (ctx->pc == 0x23FB2Cu) {
        ctx->pc = 0x23FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB28u;
        // 0x23fb2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB30u;
        goto label_fallthrough_0x23fb28;
    }
    ctx->pc = 0x23FB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB28u;
        // 0x23fb2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23fb28:
    ctx->pc = 0x23FB30u;
}
