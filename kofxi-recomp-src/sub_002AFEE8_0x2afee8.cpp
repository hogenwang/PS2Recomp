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

// Function: sub_002AFEE8
// Address: 0x2afee8 - 0x2b00a8
void sub_002AFEE8_0x2afee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFEE8_0x2afee8");
#endif

    switch (ctx->pc) {
        case 0x2afee8u: goto label_2afee8;
        case 0x2afeecu: goto label_2afeec;
        case 0x2afef0u: goto label_2afef0;
        case 0x2afef4u: goto label_2afef4;
        case 0x2afef8u: goto label_2afef8;
        case 0x2afefcu: goto label_2afefc;
        case 0x2aff00u: goto label_2aff00;
        case 0x2aff04u: goto label_2aff04;
        case 0x2aff08u: goto label_2aff08;
        case 0x2aff0cu: goto label_2aff0c;
        case 0x2aff10u: goto label_2aff10;
        case 0x2aff14u: goto label_2aff14;
        case 0x2aff18u: goto label_2aff18;
        case 0x2aff1cu: goto label_2aff1c;
        case 0x2aff20u: goto label_2aff20;
        case 0x2aff24u: goto label_2aff24;
        case 0x2aff28u: goto label_2aff28;
        case 0x2aff2cu: goto label_2aff2c;
        case 0x2aff30u: goto label_2aff30;
        case 0x2aff34u: goto label_2aff34;
        case 0x2aff38u: goto label_2aff38;
        case 0x2aff3cu: goto label_2aff3c;
        case 0x2aff40u: goto label_2aff40;
        case 0x2aff44u: goto label_2aff44;
        case 0x2aff48u: goto label_2aff48;
        case 0x2aff4cu: goto label_2aff4c;
        case 0x2aff50u: goto label_2aff50;
        case 0x2aff54u: goto label_2aff54;
        case 0x2aff58u: goto label_2aff58;
        case 0x2aff5cu: goto label_2aff5c;
        case 0x2aff60u: goto label_2aff60;
        case 0x2aff64u: goto label_2aff64;
        case 0x2aff68u: goto label_2aff68;
        case 0x2aff6cu: goto label_2aff6c;
        case 0x2aff70u: goto label_2aff70;
        case 0x2aff74u: goto label_2aff74;
        case 0x2aff78u: goto label_2aff78;
        case 0x2aff7cu: goto label_2aff7c;
        case 0x2aff80u: goto label_2aff80;
        case 0x2aff84u: goto label_2aff84;
        case 0x2aff88u: goto label_2aff88;
        case 0x2aff8cu: goto label_2aff8c;
        case 0x2aff90u: goto label_2aff90;
        case 0x2aff94u: goto label_2aff94;
        case 0x2aff98u: goto label_2aff98;
        case 0x2aff9cu: goto label_2aff9c;
        case 0x2affa0u: goto label_2affa0;
        case 0x2affa4u: goto label_2affa4;
        case 0x2affa8u: goto label_2affa8;
        case 0x2affacu: goto label_2affac;
        case 0x2affb0u: goto label_2affb0;
        case 0x2affb4u: goto label_2affb4;
        case 0x2affb8u: goto label_2affb8;
        case 0x2affbcu: goto label_2affbc;
        case 0x2affc0u: goto label_2affc0;
        case 0x2affc4u: goto label_2affc4;
        case 0x2affc8u: goto label_2affc8;
        case 0x2affccu: goto label_2affcc;
        case 0x2affd0u: goto label_2affd0;
        case 0x2affd4u: goto label_2affd4;
        case 0x2affd8u: goto label_2affd8;
        case 0x2affdcu: goto label_2affdc;
        case 0x2affe0u: goto label_2affe0;
        case 0x2affe4u: goto label_2affe4;
        case 0x2affe8u: goto label_2affe8;
        case 0x2affecu: goto label_2affec;
        case 0x2afff0u: goto label_2afff0;
        case 0x2afff4u: goto label_2afff4;
        case 0x2afff8u: goto label_2afff8;
        case 0x2afffcu: goto label_2afffc;
        case 0x2b0000u: goto label_2b0000;
        case 0x2b0004u: goto label_2b0004;
        case 0x2b0008u: goto label_2b0008;
        case 0x2b000cu: goto label_2b000c;
        case 0x2b0010u: goto label_2b0010;
        case 0x2b0014u: goto label_2b0014;
        case 0x2b0018u: goto label_2b0018;
        case 0x2b001cu: goto label_2b001c;
        case 0x2b0020u: goto label_2b0020;
        case 0x2b0024u: goto label_2b0024;
        case 0x2b0028u: goto label_2b0028;
        case 0x2b002cu: goto label_2b002c;
        case 0x2b0030u: goto label_2b0030;
        case 0x2b0034u: goto label_2b0034;
        case 0x2b0038u: goto label_2b0038;
        case 0x2b003cu: goto label_2b003c;
        case 0x2b0040u: goto label_2b0040;
        case 0x2b0044u: goto label_2b0044;
        case 0x2b0048u: goto label_2b0048;
        case 0x2b004cu: goto label_2b004c;
        case 0x2b0050u: goto label_2b0050;
        case 0x2b0054u: goto label_2b0054;
        case 0x2b0058u: goto label_2b0058;
        case 0x2b005cu: goto label_2b005c;
        case 0x2b0060u: goto label_2b0060;
        case 0x2b0064u: goto label_2b0064;
        case 0x2b0068u: goto label_2b0068;
        case 0x2b006cu: goto label_2b006c;
        case 0x2b0070u: goto label_2b0070;
        case 0x2b0074u: goto label_2b0074;
        case 0x2b0078u: goto label_2b0078;
        case 0x2b007cu: goto label_2b007c;
        case 0x2b0080u: goto label_2b0080;
        case 0x2b0084u: goto label_2b0084;
        case 0x2b0088u: goto label_2b0088;
        case 0x2b008cu: goto label_2b008c;
        case 0x2b0090u: goto label_2b0090;
        case 0x2b0094u: goto label_2b0094;
        case 0x2b0098u: goto label_2b0098;
        case 0x2b009cu: goto label_2b009c;
        case 0x2b00a0u: goto label_2b00a0;
        case 0x2b00a4u: goto label_2b00a4;
        default: break;
    }

    ctx->pc = 0x2afee8u;

label_2afee8:
    // 0x2afee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2afee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2afeec:
    // 0x2afeec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2afeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2afef0:
    // 0x2afef0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2afef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2afef4:
    // 0x2afef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2afef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2afef8:
    // 0x2afef8: 0xc0aeef6  jal         func_2BBBD8
label_2afefc:
    if (ctx->pc == 0x2AFEFCu) {
        ctx->pc = 0x2AFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEF8u;
        // 0x2afefc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF00u;
        goto label_2aff00;
    }
    ctx->pc = 0x2AFEF8u;
    SET_GPR_U32(ctx, 31, 0x2AFF00u);
    ctx->pc = 0x2AFEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFEF8u;
    // 0x2afefc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBBD8u, 0x2AFEF8u, 0x2AFF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF00u;
label_2aff00:
    // 0x2aff00: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2aff00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2aff04:
    // 0x2aff04: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2aff04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2aff08:
    // 0x2aff08: 0x24e7d258  addiu       $a3, $a3, -0x2DA8
    ctx->pc = 0x2aff08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955608));
label_2aff0c:
    // 0x2aff0c: 0x260400fc  addiu       $a0, $s0, 0xFC
    ctx->pc = 0x2aff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
label_2aff10:
    // 0x2aff10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2aff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2aff14:
    // 0x2aff14: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2aff14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2aff18:
    // 0x2aff18: 0xc0a8b46  jal         func_2A2D18
label_2aff1c:
    if (ctx->pc == 0x2AFF1Cu) {
        ctx->pc = 0x2AFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF18u;
        // 0x2aff1c: 0x24080160  addiu       $t0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF20u;
        goto label_2aff20;
    }
    ctx->pc = 0x2AFF18u;
    SET_GPR_U32(ctx, 31, 0x2AFF20u);
    ctx->pc = 0x2AFF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF18u;
    // 0x2aff1c: 0x24080160  addiu       $t0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2AFF18u, 0x2AFF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF20u;
label_2aff20:
    // 0x2aff20: 0x1c40005c  bgtz        $v0, . + 4 + (0x5C << 2)
label_2aff24:
    if (ctx->pc == 0x2AFF24u) {
        ctx->pc = 0x2AFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF20u;
        // 0x2aff24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF28u;
        goto label_2aff28;
    }
    ctx->pc = 0x2AFF20u;
    {
        const bool branch_taken_0x2aff20 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2AFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF20u;
        // 0x2aff24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff20) {
            ctx->pc = 0x2B0094u;
            goto label_2b0094;
        }
    }
    ctx->pc = 0x2AFF28u;
label_2aff28:
    // 0x2aff28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aff2c:
    // 0x2aff2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aff2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aff30:
    // 0x2aff30: 0xc0a5d58  jal         func_297560
label_2aff34:
    if (ctx->pc == 0x2AFF34u) {
        ctx->pc = 0x2AFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF30u;
        // 0x2aff34: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF38u;
        goto label_2aff38;
    }
    ctx->pc = 0x2AFF30u;
    SET_GPR_U32(ctx, 31, 0x2AFF38u);
    ctx->pc = 0x2AFF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF30u;
    // 0x2aff34: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297560u, 0x2AFF30u, 0x2AFF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF38u;
label_2aff38:
    // 0x2aff38: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2aff38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2aff3c:
    // 0x2aff3c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_2aff40:
    if (ctx->pc == 0x2AFF40u) {
        ctx->pc = 0x2AFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF3Cu;
        // 0x2aff40: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF44u;
        goto label_2aff44;
    }
    ctx->pc = 0x2AFF3Cu;
    {
        const bool branch_taken_0x2aff3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aff3c) {
            ctx->pc = 0x2AFF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFF3Cu;
            // 0x2aff40: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFF6Cu;
            goto label_2aff6c;
        }
    }
    ctx->pc = 0x2AFF44u;
label_2aff44:
    // 0x2aff44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2aff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2aff48:
    // 0x2aff48: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_2aff4c:
    if (ctx->pc == 0x2AFF4Cu) {
        ctx->pc = 0x2AFF50u;
        goto label_2aff50;
    }
    ctx->pc = 0x2AFF48u;
    {
        const bool branch_taken_0x2aff48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aff48) {
            ctx->pc = 0x2AFF5Cu;
            goto label_2aff5c;
        }
    }
    ctx->pc = 0x2AFF50u;
label_2aff50:
    // 0x2aff50: 0xc0a15b6  jal         func_2856D8
label_2aff54:
    if (ctx->pc == 0x2AFF54u) {
        ctx->pc = 0x2AFF58u;
        goto label_2aff58;
    }
    ctx->pc = 0x2AFF50u;
    SET_GPR_U32(ctx, 31, 0x2AFF58u);
    ctx->pc = 0x2856D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2856D8u, 0x2AFF50u, 0x2AFF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF58u;
label_2aff58:
    // 0x2aff58: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2aff58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2aff5c:
    // 0x2aff5c: 0xc0a1430  jal         func_2850C0
label_2aff60:
    if (ctx->pc == 0x2AFF60u) {
        ctx->pc = 0x2AFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF5Cu;
        // 0x2aff60: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF64u;
        goto label_2aff64;
    }
    ctx->pc = 0x2AFF5Cu;
    SET_GPR_U32(ctx, 31, 0x2AFF64u);
    ctx->pc = 0x2AFF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF5Cu;
    // 0x2aff60: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x2AFF5Cu, 0x2AFF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF64u;
label_2aff64:
    // 0x2aff64: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2aff64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2aff68:
    // 0x2aff68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2aff68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2aff6c:
    // 0x2aff6c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2aff70:
    if (ctx->pc == 0x2AFF70u) {
        ctx->pc = 0x2AFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF6Cu;
        // 0x2aff70: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF74u;
        goto label_2aff74;
    }
    ctx->pc = 0x2AFF6Cu;
    {
        const bool branch_taken_0x2aff6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aff6c) {
            ctx->pc = 0x2AFF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFF6Cu;
            // 0x2aff70: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFF80u;
            goto label_2aff80;
        }
    }
    ctx->pc = 0x2AFF74u;
label_2aff74:
    // 0x2aff74: 0xc0a15d6  jal         func_285758
label_2aff78:
    if (ctx->pc == 0x2AFF78u) {
        ctx->pc = 0x2AFF7Cu;
        goto label_2aff7c;
    }
    ctx->pc = 0x2AFF74u;
    SET_GPR_U32(ctx, 31, 0x2AFF7Cu);
    ctx->pc = 0x285758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285758u, 0x2AFF74u, 0x2AFF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF7Cu;
label_2aff7c:
    // 0x2aff7c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2aff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2aff80:
    // 0x2aff80: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2aff84:
    if (ctx->pc == 0x2AFF84u) {
        ctx->pc = 0x2AFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF80u;
        // 0x2aff84: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF88u;
        goto label_2aff88;
    }
    ctx->pc = 0x2AFF80u;
    {
        const bool branch_taken_0x2aff80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aff80) {
            ctx->pc = 0x2AFF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFF80u;
            // 0x2aff84: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFFA0u;
            goto label_2affa0;
        }
    }
    ctx->pc = 0x2AFF88u;
label_2aff88:
    // 0x2aff88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2aff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2aff8c:
    // 0x2aff8c: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
label_2aff90:
    if (ctx->pc == 0x2AFF90u) {
        ctx->pc = 0x2AFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF8Cu;
        // 0x2aff90: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFF94u;
        goto label_2aff94;
    }
    ctx->pc = 0x2AFF8Cu;
    {
        const bool branch_taken_0x2aff8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2aff8c) {
            ctx->pc = 0x2AFF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFF8Cu;
            // 0x2aff90: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFFA0u;
            goto label_2affa0;
        }
    }
    ctx->pc = 0x2AFF94u;
label_2aff94:
    // 0x2aff94: 0xc0a15d6  jal         func_285758
label_2aff98:
    if (ctx->pc == 0x2AFF98u) {
        ctx->pc = 0x2AFF9Cu;
        goto label_2aff9c;
    }
    ctx->pc = 0x2AFF94u;
    SET_GPR_U32(ctx, 31, 0x2AFF9Cu);
    ctx->pc = 0x285758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285758u, 0x2AFF94u, 0x2AFF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF9Cu;
label_2aff9c:
    // 0x2aff9c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2aff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2affa0:
    // 0x2affa0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2affa4:
    if (ctx->pc == 0x2AFFA4u) {
        ctx->pc = 0x2AFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFA0u;
        // 0x2affa4: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFFA8u;
        goto label_2affa8;
    }
    ctx->pc = 0x2AFFA0u;
    {
        const bool branch_taken_0x2affa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2affa0) {
            ctx->pc = 0x2AFFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFFA0u;
            // 0x2affa4: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFFB4u;
            goto label_2affb4;
        }
    }
    ctx->pc = 0x2AFFA8u;
label_2affa8:
    // 0x2affa8: 0xc0a32ca  jal         func_28CB28
label_2affac:
    if (ctx->pc == 0x2AFFACu) {
        ctx->pc = 0x2AFFB0u;
        goto label_2affb0;
    }
    ctx->pc = 0x2AFFA8u;
    SET_GPR_U32(ctx, 31, 0x2AFFB0u);
    ctx->pc = 0x28CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB28u, 0x2AFFA8u, 0x2AFFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFFB0u;
label_2affb0:
    // 0x2affb0: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x2affb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2affb4:
    // 0x2affb4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2affb8:
    if (ctx->pc == 0x2AFFB8u) {
        ctx->pc = 0x2AFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFB4u;
        // 0x2affb8: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFFBCu;
        goto label_2affbc;
    }
    ctx->pc = 0x2AFFB4u;
    {
        const bool branch_taken_0x2affb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2affb4) {
            ctx->pc = 0x2AFFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFFB4u;
            // 0x2affb8: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFFC8u;
            goto label_2affc8;
        }
    }
    ctx->pc = 0x2AFFBCu;
label_2affbc:
    // 0x2affbc: 0xc0af176  jal         func_2BC5D8
label_2affc0:
    if (ctx->pc == 0x2AFFC0u) {
        ctx->pc = 0x2AFFC4u;
        goto label_2affc4;
    }
    ctx->pc = 0x2AFFBCu;
    SET_GPR_U32(ctx, 31, 0x2AFFC4u);
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2AFFBCu, 0x2AFFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFFC4u;
label_2affc4:
    // 0x2affc4: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x2affc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_2affc8:
    // 0x2affc8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2affcc:
    if (ctx->pc == 0x2AFFCCu) {
        ctx->pc = 0x2AFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFC8u;
        // 0x2affcc: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFFD0u;
        goto label_2affd0;
    }
    ctx->pc = 0x2AFFC8u;
    {
        const bool branch_taken_0x2affc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2affc8) {
            ctx->pc = 0x2AFFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFFC8u;
            // 0x2affcc: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFFDCu;
            goto label_2affdc;
        }
    }
    ctx->pc = 0x2AFFD0u;
label_2affd0:
    // 0x2affd0: 0xc0af176  jal         func_2BC5D8
label_2affd4:
    if (ctx->pc == 0x2AFFD4u) {
        ctx->pc = 0x2AFFD8u;
        goto label_2affd8;
    }
    ctx->pc = 0x2AFFD0u;
    SET_GPR_U32(ctx, 31, 0x2AFFD8u);
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2AFFD0u, 0x2AFFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFFD8u;
label_2affd8:
    // 0x2affd8: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2affd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2affdc:
    // 0x2affdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2affe0:
    if (ctx->pc == 0x2AFFE0u) {
        ctx->pc = 0x2AFFE4u;
        goto label_2affe4;
    }
    ctx->pc = 0x2AFFDCu;
    {
        const bool branch_taken_0x2affdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2affdc) {
            ctx->pc = 0x2AFFF4u;
            goto label_2afff4;
        }
    }
    ctx->pc = 0x2AFFE4u;
label_2affe4:
    // 0x2affe4: 0xc0aee84  jal         func_2BBA10
label_2affe8:
    if (ctx->pc == 0x2AFFE8u) {
        ctx->pc = 0x2AFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFE4u;
        // 0x2affe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFFECu;
        goto label_2affec;
    }
    ctx->pc = 0x2AFFE4u;
    SET_GPR_U32(ctx, 31, 0x2AFFECu);
    ctx->pc = 0x2AFFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFFE4u;
    // 0x2affe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBA10u, 0x2AFFE4u, 0x2AFFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFFECu;
label_2affec:
    // 0x2affec: 0xc0aed46  jal         func_2BB518
label_2afff0:
    if (ctx->pc == 0x2AFFF0u) {
        ctx->pc = 0x2AFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFECu;
        // 0x2afff0: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFFF4u;
        goto label_2afff4;
    }
    ctx->pc = 0x2AFFECu;
    SET_GPR_U32(ctx, 31, 0x2AFFF4u);
    ctx->pc = 0x2AFFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFFECu;
    // 0x2afff0: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB518u, 0x2AFFECu, 0x2AFFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFFF4u;
label_2afff4:
    // 0x2afff4: 0xc0ac562  jal         func_2B1588
label_2afff8:
    if (ctx->pc == 0x2AFFF8u) {
        ctx->pc = 0x2AFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFF4u;
        // 0x2afff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFFFCu;
        goto label_2afffc;
    }
    ctx->pc = 0x2AFFF4u;
    SET_GPR_U32(ctx, 31, 0x2AFFFCu);
    ctx->pc = 0x2AFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFFF4u;
    // 0x2afff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1588u, 0x2AFFF4u, 0x2AFFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFFFCu;
label_2afffc:
    // 0x2afffc: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x2afffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2b0000:
    // 0x2b0000: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2b0004:
    if (ctx->pc == 0x2B0004u) {
        ctx->pc = 0x2B0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0000u;
        // 0x2b0004: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0008u;
        goto label_2b0008;
    }
    ctx->pc = 0x2B0000u;
    {
        const bool branch_taken_0x2b0000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0000) {
            ctx->pc = 0x2B0004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0000u;
            // 0x2b0004: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0018u;
            goto label_2b0018;
        }
    }
    ctx->pc = 0x2B0008u;
label_2b0008:
    // 0x2b0008: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2b0008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_2b000c:
    // 0x2b000c: 0xc0af16c  jal         func_2BC5B0
label_2b0010:
    if (ctx->pc == 0x2B0010u) {
        ctx->pc = 0x2B0010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B000Cu;
        // 0x2b0010: 0x24a5e430  addiu       $a1, $a1, -0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0014u;
        goto label_2b0014;
    }
    ctx->pc = 0x2B000Cu;
    SET_GPR_U32(ctx, 31, 0x2B0014u);
    ctx->pc = 0x2B0010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B000Cu;
    // 0x2b0010: 0x24a5e430  addiu       $a1, $a1, -0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5B0u, 0x2B000Cu, 0x2B0014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0014u;
label_2b0014:
    // 0x2b0014: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x2b0014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2b0018:
    // 0x2b0018: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2b001c:
    if (ctx->pc == 0x2B001Cu) {
        ctx->pc = 0x2B001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0018u;
        // 0x2b001c: 0x8e040128  lw          $a0, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0020u;
        goto label_2b0020;
    }
    ctx->pc = 0x2B0018u;
    {
        const bool branch_taken_0x2b0018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0018) {
            ctx->pc = 0x2B001Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0018u;
            // 0x2b001c: 0x8e040128  lw          $a0, 0x128($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B002Cu;
            goto label_2b002c;
        }
    }
    ctx->pc = 0x2B0020u;
label_2b0020:
    // 0x2b0020: 0xc0abe62  jal         func_2AF988
label_2b0024:
    if (ctx->pc == 0x2B0024u) {
        ctx->pc = 0x2B0028u;
        goto label_2b0028;
    }
    ctx->pc = 0x2B0020u;
    SET_GPR_U32(ctx, 31, 0x2B0028u);
    ctx->pc = 0x2AF988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF988u, 0x2B0020u, 0x2B0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0028u;
label_2b0028:
    // 0x2b0028: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2b0028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_2b002c:
    // 0x2b002c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2b0030:
    if (ctx->pc == 0x2B0030u) {
        ctx->pc = 0x2B0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B002Cu;
        // 0x2b0030: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0034u;
        goto label_2b0034;
    }
    ctx->pc = 0x2B002Cu;
    {
        const bool branch_taken_0x2b002c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b002c) {
            ctx->pc = 0x2B0030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B002Cu;
            // 0x2b0030: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0040u;
            goto label_2b0040;
        }
    }
    ctx->pc = 0x2B0034u;
label_2b0034:
    // 0x2b0034: 0xc0a5b9c  jal         func_296E70
label_2b0038:
    if (ctx->pc == 0x2B0038u) {
        ctx->pc = 0x2B003Cu;
        goto label_2b003c;
    }
    ctx->pc = 0x2B0034u;
    SET_GPR_U32(ctx, 31, 0x2B003Cu);
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x2B0034u, 0x2B003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B003Cu;
label_2b003c:
    // 0x2b003c: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x2b003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2b0040:
    // 0x2b0040: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2b0044:
    if (ctx->pc == 0x2B0044u) {
        ctx->pc = 0x2B0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0040u;
        // 0x2b0044: 0x8e0400f8  lw          $a0, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0048u;
        goto label_2b0048;
    }
    ctx->pc = 0x2B0040u;
    {
        const bool branch_taken_0x2b0040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0040) {
            ctx->pc = 0x2B0044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0040u;
            // 0x2b0044: 0x8e0400f8  lw          $a0, 0xF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0054u;
            goto label_2b0054;
        }
    }
    ctx->pc = 0x2B0048u;
label_2b0048:
    // 0x2b0048: 0xc0ac330  jal         func_2B0CC0
label_2b004c:
    if (ctx->pc == 0x2B004Cu) {
        ctx->pc = 0x2B0050u;
        goto label_2b0050;
    }
    ctx->pc = 0x2B0048u;
    SET_GPR_U32(ctx, 31, 0x2B0050u);
    ctx->pc = 0x2B0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0CC0u, 0x2B0048u, 0x2B0050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0050u;
label_2b0050:
    // 0x2b0050: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x2b0050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_2b0054:
    // 0x2b0054: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b0058:
    if (ctx->pc == 0x2B0058u) {
        ctx->pc = 0x2B0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0054u;
        // 0x2b0058: 0x3c050029  lui         $a1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B005Cu;
        goto label_2b005c;
    }
    ctx->pc = 0x2B0054u;
    {
        const bool branch_taken_0x2b0054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0054u;
        // 0x2b0058: 0x3c050029  lui         $a1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0054) {
            ctx->pc = 0x2B0064u;
            goto label_2b0064;
        }
    }
    ctx->pc = 0x2B005Cu;
label_2b005c:
    // 0x2b005c: 0xc0af16c  jal         func_2BC5B0
label_2b0060:
    if (ctx->pc == 0x2B0060u) {
        ctx->pc = 0x2B0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B005Cu;
        // 0x2b0060: 0x24a5e950  addiu       $a1, $a1, -0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0064u;
        goto label_2b0064;
    }
    ctx->pc = 0x2B005Cu;
    SET_GPR_U32(ctx, 31, 0x2B0064u);
    ctx->pc = 0x2B0060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B005Cu;
    // 0x2b0060: 0x24a5e950  addiu       $a1, $a1, -0x16B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5B0u, 0x2B005Cu, 0x2B0064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0064u;
label_2b0064:
    // 0x2b0064: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b0064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b0068:
    // 0x2b0068: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b006c:
    if (ctx->pc == 0x2B006Cu) {
        ctx->pc = 0x2B006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0068u;
        // 0x2b006c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0070u;
        goto label_2b0070;
    }
    ctx->pc = 0x2B0068u;
    {
        const bool branch_taken_0x2b0068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0068u;
        // 0x2b006c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0068) {
            ctx->pc = 0x2B0080u;
            goto label_2b0080;
        }
    }
    ctx->pc = 0x2B0070u;
label_2b0070:
    // 0x2b0070: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2b0070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2b0074:
    // 0x2b0074: 0x40f809  jalr        $v0
label_2b0078:
    if (ctx->pc == 0x2B0078u) {
        ctx->pc = 0x2B0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0074u;
        // 0x2b0078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B007Cu;
        goto label_2b007c;
    }
    ctx->pc = 0x2B0074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B007Cu);
        ctx->pc = 0x2B0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0074u;
        // 0x2b0078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0074u, 0x2B007Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B007Cu;
label_2b007c:
    // 0x2b007c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b007cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0080:
    // 0x2b0080: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b0080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0084:
    // 0x2b0084: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b0084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0088:
    // 0x2b0088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b008c:
    // 0x2b008c: 0x80a8c0a  j           func_2A3028
label_2b0090:
    if (ctx->pc == 0x2B0090u) {
        ctx->pc = 0x2B0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B008Cu;
        // 0x2b0090: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0094u;
        goto label_2b0094;
    }
    ctx->pc = 0x2B008Cu;
    ctx->pc = 0x2B0090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B008Cu;
    // 0x2b0090: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2B0094u;
label_2b0094:
    // 0x2b0094: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b0094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0098:
    // 0x2b0098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b009c:
    // 0x2b009c: 0x3e00008  jr          $ra
label_2b00a0:
    if (ctx->pc == 0x2B00A0u) {
        ctx->pc = 0x2B00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B009Cu;
        // 0x2b00a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B00A4u;
        goto label_2b00a4;
    }
    ctx->pc = 0x2B009Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B009Cu;
        // 0x2b00a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B009Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B00A4u;
label_2b00a4:
    // 0x2b00a4: 0x0  nop
    ctx->pc = 0x2b00a4u;
    // NOP
}
