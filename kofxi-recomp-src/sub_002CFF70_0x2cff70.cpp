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

// Function: sub_002CFF70
// Address: 0x2cff70 - 0x2d0188
void sub_002CFF70_0x2cff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFF70_0x2cff70");
#endif

    switch (ctx->pc) {
        case 0x2cffc8u: goto label_2cffc8;
        case 0x2d0008u: goto label_2d0008;
        case 0x2d00b8u: goto label_2d00b8;
        case 0x2d00c8u: goto label_2d00c8;
        case 0x2d0138u: goto label_2d0138;
        default: break;
    }

    ctx->pc = 0x2cff70u;

    // 0x2cff70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cff74: 0x24020109  addiu       $v0, $zero, 0x109
    ctx->pc = 0x2cff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x2cff78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cff7c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cff7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cff84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cff88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cff8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cff90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cff94: 0x8cb30004  lw          $s3, 0x4($a1)
    ctx->pc = 0x2cff94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cff98: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x2cff98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cff9c: 0x8cb40008  lw          $s4, 0x8($a1)
    ctx->pc = 0x2cff9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cffa0: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x2cffa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2cffa4: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x2CFFA4u;
    {
        const bool branch_taken_0x2cffa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFA4u;
        // 0x2cffa8: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffa4) {
            ctx->pc = 0x2D0164u;
            goto label_2d0164;
        }
    }
    ctx->pc = 0x2CFFACu;
    // 0x2cffac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cffb0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2cffb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2cffb4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFFB4u;
    {
        const bool branch_taken_0x2cffb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cffb4) {
            ctx->pc = 0x2CFFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFFB4u;
            // 0x2cffb8: 0xde820000  ld          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFFD4u;
            goto label_2cffd4;
        }
    }
    ctx->pc = 0x2CFFBCu;
    // 0x2cffbc: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2cffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cffc0: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2CFFC0u;
    SET_GPR_U32(ctx, 31, 0x2CFFC8u);
    ctx->pc = 0x2CFFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFFC0u;
    // 0x2cffc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2CFFC0u, 0x2CFFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFFC8u;
label_2cffc8:
    // 0x2cffc8: 0x54400067  bnel        $v0, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x2CFFC8u;
    {
        const bool branch_taken_0x2cffc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cffc8) {
            ctx->pc = 0x2CFFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFFC8u;
            // 0x2cffcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0168u;
            goto label_2d0168;
        }
    }
    ctx->pc = 0x2CFFD0u;
    // 0x2cffd0: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x2cffd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_2cffd4:
    // 0x2cffd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cffd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cffd8: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x2cffd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cffdc: 0xf3202a  slt         $a0, $a3, $s3
    ctx->pc = 0x2cffdcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2cffe0: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x2cffe0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2cffe4: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2cffe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2cffe8: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x2cffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x2cffec: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x2cffecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cfff0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2cfff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cfff4: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x2cfff4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cfff8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2cfff8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2cfffc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CFFFCu;
    {
        const bool branch_taken_0x2cfffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFFCu;
        // 0x2d0000: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfffc) {
            ctx->pc = 0x2D0060u;
            goto label_2d0060;
        }
    }
    ctx->pc = 0x2D0004u;
    // 0x2d0004: 0x0  nop
    ctx->pc = 0x2d0004u;
    // NOP
label_2d0008:
    // 0x2d0008: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d0008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d000c: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x2d000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2d0010: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x2d0010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d0014: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2d0014u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0018: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x2d0018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2d001c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2d001cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d0020: 0xf3482a  slt         $t1, $a3, $s3
    ctx->pc = 0x2d0020u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d0024: 0x44182f  dsubu       $v1, $v0, $a0
    ctx->pc = 0x2d0024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x2d0028: 0x6464ffff  daddiu      $a0, $v1, -0x1
    ctx->pc = 0x2d0028u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
    // 0x2d002c: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D002Cu;
    {
        const bool branch_taken_0x2d002c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D002Cu;
        // 0x2d0030: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d002c) {
            ctx->pc = 0x2D0040u;
            goto label_2d0040;
        }
    }
    ctx->pc = 0x2D0034u;
    // 0x2d0034: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2d0034u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d0038: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0038u;
    {
        const bool branch_taken_0x2d0038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0038u;
        // 0x2d003c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0038) {
            ctx->pc = 0x2D0050u;
            goto label_2d0050;
        }
    }
    ctx->pc = 0x2D0040u;
label_2d0040:
    // 0x2d0040: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x2d0040u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x2d0044: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2d0044u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d0048: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2d0048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d004c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d004cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2d0050:
    // 0x2d0050: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x2d0050u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d0054: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2d0054u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2d0058: 0x1520ffeb  bnez        $t1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2D0058u;
    {
        const bool branch_taken_0x2d0058 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0058u;
        // 0x2d005c: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0058) {
            ctx->pc = 0x2D0008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0008;
        }
    }
    ctx->pc = 0x2D0060u;
label_2d0060:
    // 0x2d0060: 0x14f0000d  bne         $a3, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0060u;
    {
        const bool branch_taken_0x2d0060 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d0060) {
            ctx->pc = 0x2D0098u;
            goto label_2d0098;
        }
    }
    ctx->pc = 0x2D0068u;
    // 0x2d0068: 0x1500003e  bnez        $t0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D0068u;
    {
        const bool branch_taken_0x2d0068 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0068u;
        // 0x2d006c: 0x24020109  addiu       $v0, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0068) {
            ctx->pc = 0x2D0164u;
            goto label_2d0164;
        }
    }
    ctx->pc = 0x2D0070u;
    // 0x2d0070: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2d0070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d0074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0078: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d0078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d007c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d007cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d0080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0084: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d0084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d0088: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d0088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d008c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d008cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d0090: 0x80b51ce  j           func_2D4738
    ctx->pc = 0x2D0090u;
    ctx->pc = 0x2D0094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0090u;
    // 0x2d0094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4738u;
    sub_002D4738_0x2d4738(rdram, ctx, runtime); return;
    ctx->pc = 0x2D0098u;
label_2d0098:
    // 0x2d0098: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0098u;
    {
        const bool branch_taken_0x2d0098 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0098u;
        // 0x2d009c: 0xf0102a  slt         $v0, $a3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0098) {
            ctx->pc = 0x2D00C0u;
            goto label_2d00c0;
        }
    }
    ctx->pc = 0x2D00A0u;
    // 0x2d00a0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2d00a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2d00a4: 0x2073023  subu        $a2, $s0, $a3
    ctx->pc = 0x2d00a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2d00a8: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x2d00a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2d00ac: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x2d00acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2d00b0: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2D00B0u;
    SET_GPR_U32(ctx, 31, 0x2D00B8u);
    ctx->pc = 0x2D00B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00B0u;
    // 0x2d00b4: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2D00B0u, 0x2D00B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00B8u;
label_2d00b8:
    // 0x2d00b8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D00B8u;
    {
        const bool branch_taken_0x2d00b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00B8u;
        // 0x2d00bc: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d00b8) {
            ctx->pc = 0x2D0160u;
            goto label_2d0160;
        }
    }
    ctx->pc = 0x2D00C0u;
label_2d00c0:
    // 0x2d00c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D00C0u;
    {
        const bool branch_taken_0x2d00c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00C0u;
        // 0x2d00c4: 0x720c0  sll         $a0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d00c0) {
            ctx->pc = 0x2D00FCu;
            goto label_2d00fc;
        }
    }
    ctx->pc = 0x2D00C8u;
label_2d00c8:
    // 0x2d00c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d00c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d00cc: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x2d00ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d00d0: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x2d00d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2d00d4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2d00d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d00d8: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x2d00d8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d00dc: 0x68182f  dsubu       $v1, $v1, $t0
    ctx->pc = 0x2d00dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 8));
    // 0x2d00e0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2d00e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2d00e4: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x2d00e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d00e8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d00e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d00ec: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x2d00ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d00f0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2d00f0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2d00f4: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D00F4u;
    {
        const bool branch_taken_0x2d00f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00F4u;
        // 0x2d00f8: 0x720c0  sll         $a0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d00f4) {
            ctx->pc = 0x2D00C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d00c8;
        }
    }
    ctx->pc = 0x2D00FCu;
label_2d00fc:
    // 0x2d00fc: 0x15000019  bnez        $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D00FCu;
    {
        const bool branch_taken_0x2d00fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00FCu;
        // 0x2d0100: 0x24020109  addiu       $v0, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d00fc) {
            ctx->pc = 0x2D0164u;
            goto label_2d0164;
        }
    }
    ctx->pc = 0x2D0104u;
    // 0x2d0104: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d0104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d0108: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2d0108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2d010c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0110: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x2d0110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2d0114: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2d0114u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0118: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D0118u;
    {
        const bool branch_taken_0x2d0118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0118) {
            ctx->pc = 0x2D011Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0118u;
            // 0x2d011c: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0160u;
            goto label_2d0160;
        }
    }
    ctx->pc = 0x2D0120u;
    // 0x2d0120: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2d0120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d0124: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D0124u;
    {
        const bool branch_taken_0x2d0124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0124) {
            ctx->pc = 0x2D0128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0124u;
            // 0x2d0128: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0160u;
            goto label_2d0160;
        }
    }
    ctx->pc = 0x2D012Cu;
    // 0x2d012c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2d012cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0130: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2d0130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2d0134: 0x0  nop
    ctx->pc = 0x2d0134u;
    // NOP
label_2d0138:
    // 0x2d0138: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d0138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d013c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d013cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0140: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0140u;
    {
        const bool branch_taken_0x2d0140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0140u;
        // 0x2d0144: 0x2a040002  slti        $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0140) {
            ctx->pc = 0x2D015Cu;
            goto label_2d015c;
        }
    }
    ctx->pc = 0x2D0148u;
    // 0x2d0148: 0x0  nop
    ctx->pc = 0x2d0148u;
    // NOP
    // 0x2d014c: 0x0  nop
    ctx->pc = 0x2d014cu;
    // NOP
    // 0x2d0150: 0x0  nop
    ctx->pc = 0x2d0150u;
    // NOP
    // 0x2d0154: 0x5080fff8  beql        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D0154u;
    {
        const bool branch_taken_0x2d0154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0154) {
            ctx->pc = 0x2D0158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0154u;
            // 0x2d0158: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0138;
        }
    }
    ctx->pc = 0x2D015Cu;
label_2d015c:
    // 0x2d015c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2d015cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_2d0160:
    // 0x2d0160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0164:
    // 0x2d0164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0168:
    // 0x2d0168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d0168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d016c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d016cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0170: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d0170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d0174: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d0174u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0178: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d0178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d017c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D017Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D017Cu;
        // 0x2d0180: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D017Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0184u;
    // 0x2d0184: 0x0  nop
    ctx->pc = 0x2d0184u;
    // NOP
    if (ctx->pc == 0x2d0184u) { ctx->pc = 0x2d0188u; }
}
