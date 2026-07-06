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

// Function: sub_0015CBE0
// Address: 0x15cbe0 - 0x15cde0
void sub_0015CBE0_0x15cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CBE0_0x15cbe0");
#endif

    switch (ctx->pc) {
        case 0x15cc08u: goto label_15cc08;
        case 0x15cc54u: goto label_15cc54;
        case 0x15cc84u: goto label_15cc84;
        case 0x15ccd0u: goto label_15ccd0;
        case 0x15cd28u: goto label_15cd28;
        default: break;
    }

    ctx->pc = 0x15cbe0u;

    // 0x15cbe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15cbe4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15cbe8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15cbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15cbec: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x15cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x15cbf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15cbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15cbf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15cbf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15cbf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cbfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cc00: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15CC00u;
    {
        const bool branch_taken_0x15cc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC00u;
        // 0x15cc04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc00) {
            ctx->pc = 0x15CC24u;
            goto label_15cc24;
        }
    }
    ctx->pc = 0x15CC08u;
label_15cc08:
    // 0x15cc08: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x15cc08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15cc0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15cc10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15cc14: 0x0  nop
    ctx->pc = 0x15cc14u;
    // NOP
    // 0x15cc18: 0x0  nop
    ctx->pc = 0x15cc18u;
    // NOP
    // 0x15cc1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15CC1Cu;
    {
        const bool branch_taken_0x15cc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cc1c) {
            ctx->pc = 0x15CC08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15cc08;
        }
    }
    ctx->pc = 0x15CC24u;
label_15cc24:
    // 0x15cc24: 0x71203  sra         $v0, $a3, 8
    ctx->pc = 0x15cc24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 8));
    // 0x15cc28: 0x71c03  sra         $v1, $a3, 16
    ctx->pc = 0x15cc28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 16));
    // 0x15cc2c: 0xa3a2004d  sb          $v0, 0x4D($sp)
    ctx->pc = 0x15cc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x15cc30: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15cc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15cc34: 0x71603  sra         $v0, $a3, 24
    ctx->pc = 0x15cc34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 24));
    // 0x15cc38: 0xa3a7004c  sb          $a3, 0x4C($sp)
    ctx->pc = 0x15cc38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 7));
    // 0x15cc3c: 0xa3a3004e  sb          $v1, 0x4E($sp)
    ctx->pc = 0x15cc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x15cc40: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x15cc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x15cc44: 0xa3a2004f  sb          $v0, 0x4F($sp)
    ctx->pc = 0x15cc44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x15cc48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15cc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cc4c: 0xc0572a0  jal         func_15CA80
    ctx->pc = 0x15CC4Cu;
    SET_GPR_U32(ctx, 31, 0x15CC54u);
    ctx->pc = 0x15CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CC4Cu;
    // 0x15cc50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CA80u, 0x15CC4Cu, 0x15CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CC54u;
label_15cc54:
    // 0x15cc54: 0x12363c  dsll32      $a2, $s2, 24
    ctx->pc = 0x15cc54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 24));
    // 0x15cc58: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x15cc58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cc5c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x15cc5cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x15cc60: 0x27aa0048  addiu       $t2, $sp, 0x48
    ctx->pc = 0x15cc60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x15cc64: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x15cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15cc68: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x15cc68u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x15cc6c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x15cc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x15cc70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15cc74: 0x27a90042  addiu       $t1, $sp, 0x42
    ctx->pc = 0x15cc74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
    // 0x15cc78: 0x27a80044  addiu       $t0, $sp, 0x44
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x15cc7c: 0x27a70046  addiu       $a3, $sp, 0x46
    ctx->pc = 0x15cc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
    // 0x15cc80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15cc80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cc84:
    // 0x15cc84: 0x914c0000  lbu         $t4, 0x0($t2)
    ctx->pc = 0x15cc84u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x15cc88: 0x11800047  beqz        $t4, . + 4 + (0x47 << 2)
    ctx->pc = 0x15CC88u;
    {
        const bool branch_taken_0x15cc88 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cc88) {
            ctx->pc = 0x15CDA8u;
            goto label_15cda8;
        }
    }
    ctx->pc = 0x15CC90u;
    // 0x15cc90: 0x8e2e000c  lw          $t6, 0xC($s1)
    ctx->pc = 0x15cc90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15cc94: 0x31cd00ff  andi        $t5, $t6, 0xFF
    ctx->pc = 0x15cc94u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x15cc98: 0xe6202  srl         $t4, $t6, 8
    ctx->pc = 0x15cc98u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x15cc9c: 0xa7ad0040  sh          $t5, 0x40($sp)
    ctx->pc = 0x15cc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 13));
    // 0x15cca0: 0x318c00ff  andi        $t4, $t4, 0xFF
    ctx->pc = 0x15cca0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x15cca4: 0xa7ac0042  sh          $t4, 0x42($sp)
    ctx->pc = 0x15cca4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 12));
    // 0x15cca8: 0xe6402  srl         $t4, $t6, 16
    ctx->pc = 0x15cca8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x15ccac: 0x318d00ff  andi        $t5, $t4, 0xFF
    ctx->pc = 0x15ccacu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x15ccb0: 0xe6602  srl         $t4, $t6, 24
    ctx->pc = 0x15ccb0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 14), 24));
    // 0x15ccb4: 0xa7ad0044  sh          $t5, 0x44($sp)
    ctx->pc = 0x15ccb4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 13));
    // 0x15ccb8: 0x318c00ff  andi        $t4, $t4, 0xFF
    ctx->pc = 0x15ccb8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x15ccbc: 0x18c00016  blez        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x15CCBCu;
    {
        const bool branch_taken_0x15ccbc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x15CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCBCu;
        // 0x15ccc0: 0xa7ac0046  sh          $t4, 0x46($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 70), (uint16_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccbc) {
            ctx->pc = 0x15CD18u;
            goto label_15cd18;
        }
    }
    ctx->pc = 0x15CCC4u;
    // 0x15ccc4: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x15ccc4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ccc8: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x15ccc8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cccc: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x15ccccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ccd0:
    // 0x15ccd0: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x15ccd0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x15ccd4: 0x95cc0000  lhu         $t4, 0x0($t6)
    ctx->pc = 0x15ccd4u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x15ccd8: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x15ccd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x15ccdc: 0xa5cc0000  sh          $t4, 0x0($t6)
    ctx->pc = 0x15ccdcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x15cce0: 0x95cc0000  lhu         $t4, 0x0($t6)
    ctx->pc = 0x15cce0u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x15cce4: 0x318cff00  andi        $t4, $t4, 0xFF00
    ctx->pc = 0x15cce4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65280);
    // 0x15cce8: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CCE8u;
    {
        const bool branch_taken_0x15cce8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cce8) {
            ctx->pc = 0x15CCF8u;
            goto label_15ccf8;
        }
    }
    ctx->pc = 0x15CCF0u;
    // 0x15ccf0: 0xa5c30000  sh          $v1, 0x0($t6)
    ctx->pc = 0x15ccf0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x15ccf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ccf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ccf8:
    // 0x15ccf8: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x15ccf8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x15ccfc: 0x2b0c0004  slti        $t4, $t8, 0x4
    ctx->pc = 0x15ccfcu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15cd00: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x15cd00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x15cd04: 0x1580fff2  bnez        $t4, . + 4 + (-0xE << 2)
    ctx->pc = 0x15CD04u;
    {
        const bool branch_taken_0x15cd04 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD04u;
        // 0x15cd08: 0x25ce0002  addiu       $t6, $t6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd04) {
            ctx->pc = 0x15CCD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ccd0;
        }
    }
    ctx->pc = 0x15CD0Cu;
    // 0x15cd0c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15CD0Cu;
    {
        const bool branch_taken_0x15cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd0c) {
            ctx->pc = 0x15CD68u;
            goto label_15cd68;
        }
    }
    ctx->pc = 0x15CD14u;
    // 0x15cd14: 0x0  nop
    ctx->pc = 0x15cd14u;
    // NOP
label_15cd18:
    // 0x15cd18: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x15cd18u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd1c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x15cd1cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd20: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x15cd20u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd24: 0x0  nop
    ctx->pc = 0x15cd24u;
    // NOP
label_15cd28:
    // 0x15cd28: 0x95ed0000  lhu         $t5, 0x0($t7)
    ctx->pc = 0x15cd28u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x15cd2c: 0x930c0000  lbu         $t4, 0x0($t8)
    ctx->pc = 0x15cd2cu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x15cd30: 0x1ac6023  subu        $t4, $t5, $t4
    ctx->pc = 0x15cd30u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x15cd34: 0xa5ec0000  sh          $t4, 0x0($t7)
    ctx->pc = 0x15cd34u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x15cd38: 0x95ec0000  lhu         $t4, 0x0($t7)
    ctx->pc = 0x15cd38u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x15cd3c: 0x318cff00  andi        $t4, $t4, 0xFF00
    ctx->pc = 0x15cd3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65280);
    // 0x15cd40: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CD40u;
    {
        const bool branch_taken_0x15cd40 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd40) {
            ctx->pc = 0x15CD50u;
            goto label_15cd50;
        }
    }
    ctx->pc = 0x15CD48u;
    // 0x15cd48: 0xa5e00000  sh          $zero, 0x0($t7)
    ctx->pc = 0x15cd48u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x15cd4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15cd4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15cd50:
    // 0x15cd50: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x15cd50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x15cd54: 0x29cc0004  slti        $t4, $t6, 0x4
    ctx->pc = 0x15cd54u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15cd58: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x15cd58u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x15cd5c: 0x1580fff2  bnez        $t4, . + 4 + (-0xE << 2)
    ctx->pc = 0x15CD5Cu;
    {
        const bool branch_taken_0x15cd5c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD5Cu;
        // 0x15cd60: 0x25ef0002  addiu       $t7, $t7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd5c) {
            ctx->pc = 0x15CD28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15cd28;
        }
    }
    ctx->pc = 0x15CD64u;
    // 0x15cd64: 0x0  nop
    ctx->pc = 0x15cd64u;
    // NOP
label_15cd68:
    // 0x15cd68: 0x97ac0040  lhu         $t4, 0x40($sp)
    ctx->pc = 0x15cd68u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15cd6c: 0x952e0000  lhu         $t6, 0x0($t1)
    ctx->pc = 0x15cd6cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15cd70: 0x950d0000  lhu         $t5, 0x0($t0)
    ctx->pc = 0x15cd70u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15cd74: 0x24c7821  addu        $t7, $s2, $t4
    ctx->pc = 0x15cd74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
    // 0x15cd78: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x15cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x15cd7c: 0x94ec0000  lhu         $t4, 0x0($a3)
    ctx->pc = 0x15cd7cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15cd80: 0xe7200  sll         $t6, $t6, 8
    ctx->pc = 0x15cd80u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
    // 0x15cd84: 0xae2f000c  sw          $t7, 0xC($s1)
    ctx->pc = 0x15cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 15));
    // 0x15cd88: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x15cd88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x15cd8c: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x15cd8cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x15cd90: 0xae2e000c  sw          $t6, 0xC($s1)
    ctx->pc = 0x15cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 14));
    // 0x15cd94: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x15cd94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x15cd98: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x15cd98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x15cd9c: 0xae2d000c  sw          $t5, 0xC($s1)
    ctx->pc = 0x15cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 13));
    // 0x15cda0: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x15cda0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x15cda4: 0xae2c000c  sw          $t4, 0xC($s1)
    ctx->pc = 0x15cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 12));
label_15cda8:
    // 0x15cda8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x15cda8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x15cdac: 0x296c0004  slti        $t4, $t3, 0x4
    ctx->pc = 0x15cdacu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15cdb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x15cdb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x15cdb4: 0x1580ffb3  bnez        $t4, . + 4 + (-0x4D << 2)
    ctx->pc = 0x15CDB4u;
    {
        const bool branch_taken_0x15cdb4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDB4u;
        // 0x15cdb8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdb4) {
            ctx->pc = 0x15CC84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15cc84;
        }
    }
    ctx->pc = 0x15CDBCu;
    // 0x15cdbc: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x15cdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x15cdc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15cdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15cdc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15cdc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cdc8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x15cdc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x15cdcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cdccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cdd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cdd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x15CDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDD4u;
        // 0x15cdd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CDDCu;
    // 0x15cddc: 0x0  nop
    ctx->pc = 0x15cddcu;
    // NOP
}
