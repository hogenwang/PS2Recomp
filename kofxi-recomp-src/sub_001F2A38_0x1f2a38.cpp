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

// Function: sub_001F2A38
// Address: 0x1f2a38 - 0x1f2b68
void sub_001F2A38_0x1f2a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2A38_0x1f2a38");
#endif

    switch (ctx->pc) {
        case 0x1f2a8cu: goto label_1f2a8c;
        case 0x1f2aa4u: goto label_1f2aa4;
        case 0x1f2ac0u: goto label_1f2ac0;
        case 0x1f2accu: goto label_1f2acc;
        case 0x1f2ae8u: goto label_1f2ae8;
        case 0x1f2b20u: goto label_1f2b20;
        case 0x1f2b34u: goto label_1f2b34;
        case 0x1f2b40u: goto label_1f2b40;
        default: break;
    }

    ctx->pc = 0x1f2a38u;

    // 0x1f2a38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f2a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f2a3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f2a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f2a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f2a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f2a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f2a4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f2a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f2a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f2a54: 0x2612090c  addiu       $s2, $s0, 0x90C
    ctx->pc = 0x1f2a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
    // 0x1f2a58: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f2a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f2a5c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f2a5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a60: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f2a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f2a64: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f2a64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a68: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f2a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f2a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f2a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f2a74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f2a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a78: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1f2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f2a7c: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F2A7Cu;
    {
        const bool branch_taken_0x1f2a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A7Cu;
        // 0x1f2a80: 0x8e132018  lw          $s3, 0x2018($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a7c) {
            ctx->pc = 0x1F2B40u;
            goto label_1f2b40;
        }
    }
    ctx->pc = 0x1F2A84u;
    // 0x1f2a84: 0xc07678e  jal         func_1D9E38
    ctx->pc = 0x1F2A84u;
    SET_GPR_U32(ctx, 31, 0x1F2A8Cu);
    ctx->pc = 0x1D9E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E38u, 0x1F2A84u, 0x1F2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A8Cu;
label_1f2a8c:
    // 0x1f2a8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2A8Cu;
    {
        const bool branch_taken_0x1f2a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A8Cu;
        // 0x1f2a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a8c) {
            ctx->pc = 0x1F2AB0u;
            goto label_1f2ab0;
        }
    }
    ctx->pc = 0x1F2A94u;
    // 0x1f2a94: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f2a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f2a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a9c: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1F2A9Cu;
    SET_GPR_U32(ctx, 31, 0x1F2AA4u);
    ctx->pc = 0x1F2AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A9Cu;
    // 0x1f2aa0: 0x34a50f16  ori         $a1, $a1, 0xF16 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3862);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1F2A9Cu, 0x1F2AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AA4u;
label_1f2aa4:
    // 0x1f2aa4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F2AA4u;
    {
        const bool branch_taken_0x1f2aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AA4u;
        // 0x1f2aa8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2aa4) {
            ctx->pc = 0x1F2B44u;
            goto label_1f2b44;
        }
    }
    ctx->pc = 0x1F2AACu;
    // 0x1f2aac: 0x0  nop
    ctx->pc = 0x1f2aacu;
    // NOP
label_1f2ab0:
    // 0x1f2ab0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1f2ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f2ab4: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1f2ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1f2ab8: 0xc0767a6  jal         func_1D9E98
    ctx->pc = 0x1F2AB8u;
    SET_GPR_U32(ctx, 31, 0x1F2AC0u);
    ctx->pc = 0x1F2ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2AB8u;
    // 0x1f2abc: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E98u, 0x1F2AB8u, 0x1F2AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AC0u;
label_1f2ac0:
    // 0x1f2ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ac4: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F2AC4u;
    SET_GPR_U32(ctx, 31, 0x1F2ACCu);
    ctx->pc = 0x1F2AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2AC4u;
    // 0x1f2ac8: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F2AC4u, 0x1F2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2ACCu;
label_1f2acc:
    // 0x1f2acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ad0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2AD0u;
    {
        const bool branch_taken_0x1f2ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AD0u;
        // 0x1f2ad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ad0) {
            ctx->pc = 0x1F2AE0u;
            goto label_1f2ae0;
        }
    }
    ctx->pc = 0x1F2AD8u;
    // 0x1f2ad8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F2AD8u;
    {
        const bool branch_taken_0x1f2ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AD8u;
        // 0x1f2adc: 0xae600114  sw          $zero, 0x114($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ad8) {
            ctx->pc = 0x1F2B10u;
            goto label_1f2b10;
        }
    }
    ctx->pc = 0x1F2AE0u;
label_1f2ae0:
    // 0x1f2ae0: 0xc07ab68  jal         func_1EADA0
    ctx->pc = 0x1F2AE0u;
    SET_GPR_U32(ctx, 31, 0x1F2AE8u);
    ctx->pc = 0x1EADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EADA0u, 0x1F2AE0u, 0x1F2AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AE8u;
label_1f2ae8:
    // 0x1f2ae8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1f2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1f2aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2af0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2af4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2AF4u;
    {
        const bool branch_taken_0x1f2af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AF4u;
        // 0x1f2af8: 0x64102a  slt         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2af4) {
            ctx->pc = 0x1F2B08u;
            goto label_1f2b08;
        }
    }
    ctx->pc = 0x1F2AFCu;
    // 0x1f2afc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1f2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f2b00: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1f2b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1f2b04: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1f2b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f2b08:
    // 0x1f2b08: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1f2b08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1f2b0c: 0xae630114  sw          $v1, 0x114($s3)
    ctx->pc = 0x1f2b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 3));
label_1f2b10:
    // 0x1f2b10: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f2b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2b14: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f2b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b18: 0xc07cada  jal         func_1F2B68
    ctx->pc = 0x1F2B18u;
    SET_GPR_U32(ctx, 31, 0x1F2B20u);
    ctx->pc = 0x1F2B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B18u;
    // 0x1f2b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2B68u, 0x1F2B18u, 0x1F2B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B20u;
label_1f2b20:
    // 0x1f2b20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b24: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f2b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2b28: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f2b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b2c: 0xc07cb22  jal         func_1F2C88
    ctx->pc = 0x1F2B2Cu;
    SET_GPR_U32(ctx, 31, 0x1F2B34u);
    ctx->pc = 0x1F2B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B2Cu;
    // 0x1f2b30: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2C88u, 0x1F2B2Cu, 0x1F2B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B34u;
label_1f2b34:
    // 0x1f2b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b38: 0xc07cb30  jal         func_1F2CC0
    ctx->pc = 0x1F2B38u;
    SET_GPR_U32(ctx, 31, 0x1F2B40u);
    ctx->pc = 0x1F2B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B38u;
    // 0x1f2b3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2CC0u, 0x1F2B38u, 0x1F2B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B40u;
label_1f2b40:
    // 0x1f2b40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f2b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2b44:
    // 0x1f2b44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f2b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f2b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2b4c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f2b4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2b50: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f2b50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2b54: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f2b54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f2b58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f2b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B5Cu;
        // 0x1f2b60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2B64u;
    // 0x1f2b64: 0x0  nop
    ctx->pc = 0x1f2b64u;
    // NOP
    if (ctx->pc == 0x1f2b64u) { ctx->pc = 0x1f2b68u; }
}
