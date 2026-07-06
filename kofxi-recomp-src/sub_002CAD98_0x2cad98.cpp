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

// Function: sub_002CAD98
// Address: 0x2cad98 - 0x2caf68
void sub_002CAD98_0x2cad98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAD98_0x2cad98");
#endif

    switch (ctx->pc) {
        case 0x2cae30u: goto label_2cae30;
        case 0x2cae88u: goto label_2cae88;
        case 0x2caea8u: goto label_2caea8;
        case 0x2caedcu: goto label_2caedc;
        case 0x2caf1cu: goto label_2caf1c;
        case 0x2caf40u: goto label_2caf40;
        default: break;
    }

    ctx->pc = 0x2cad98u;

    // 0x2cad98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cad98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cad9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cad9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cada0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cada0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cada4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2cada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2cada8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cada8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cadac: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2cadacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2cadb0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2cadb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cadb4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2cadb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2cadb8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2cadb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cadbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cadbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cadc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cadc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cadc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cadc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cadc8: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x2cadc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cadcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CADCCu;
    {
        const bool branch_taken_0x2cadcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADCCu;
        // 0x2cadd0: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cadcc) {
            ctx->pc = 0x2CADF8u;
            goto label_2cadf8;
        }
    }
    ctx->pc = 0x2CADD4u;
    // 0x2cadd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cadd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cadd8: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x2cadd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2caddc: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2CADDCu;
    {
        const bool branch_taken_0x2caddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADDCu;
        // 0x2cade0: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caddc) {
            ctx->pc = 0x2CAF40u;
            goto label_2caf40;
        }
    }
    ctx->pc = 0x2CADE4u;
    // 0x2cade4: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2cade4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cade8: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CADE8u;
    {
        const bool branch_taken_0x2cade8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADE8u;
        // 0x2cadec: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cade8) {
            ctx->pc = 0x2CAE00u;
            goto label_2cae00;
        }
    }
    ctx->pc = 0x2CADF0u;
    // 0x2cadf0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2CADF0u;
    {
        const bool branch_taken_0x2cadf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADF0u;
        // 0x2cadf4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cadf0) {
            ctx->pc = 0x2CAF44u;
            goto label_2caf44;
        }
    }
    ctx->pc = 0x2CADF8u;
label_2cadf8:
    // 0x2cadf8: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2cadf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cadfc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2cadfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2cae00:
    // 0x2cae00: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CAE00u;
    {
        const bool branch_taken_0x2cae00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE00u;
        // 0x2cae04: 0x93a40000  lbu         $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae00) {
            ctx->pc = 0x2CAE6Cu;
            goto label_2cae6c;
        }
    }
    ctx->pc = 0x2CAE08u;
    // 0x2cae08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cae0c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cae10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cae14: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2cae14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cae18: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x2cae18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2cae1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cae20: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CAE20u;
    {
        const bool branch_taken_0x2cae20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE20u;
        // 0x2cae24: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae20) {
            ctx->pc = 0x2CAE64u;
            goto label_2cae64;
        }
    }
    ctx->pc = 0x2CAE28u;
    // 0x2cae28: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2cae28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cae2c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2cae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2cae30:
    // 0x2cae30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2cae30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cae34: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAE34u;
    {
        const bool branch_taken_0x2cae34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2CAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE34u;
        // 0x2cae38: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae34) {
            ctx->pc = 0x2CAE48u;
            goto label_2cae48;
        }
    }
    ctx->pc = 0x2CAE3Cu;
    // 0x2cae3c: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x2cae3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cae40: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2cae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2cae44: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2cae44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2cae48:
    // 0x2cae48: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CAE48u;
    {
        const bool branch_taken_0x2cae48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE48u;
        // 0x2cae4c: 0x93a40000  lbu         $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae48) {
            ctx->pc = 0x2CAE6Cu;
            goto label_2cae6c;
        }
    }
    ctx->pc = 0x2CAE50u;
    // 0x2cae50: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2cae50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cae54: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x2cae54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2cae58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cae58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cae5c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CAE5Cu;
    {
        const bool branch_taken_0x2cae5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE5Cu;
        // 0x2cae60: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae5c) {
            ctx->pc = 0x2CAE30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cae30;
        }
    }
    ctx->pc = 0x2CAE64u;
label_2cae64:
    // 0x2cae64: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CAE64u;
    {
        const bool branch_taken_0x2cae64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE64u;
        // 0x2cae68: 0x36b20800  ori         $s2, $s5, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae64) {
            ctx->pc = 0x2CAE90u;
            goto label_2cae90;
        }
    }
    ctx->pc = 0x2CAE6Cu;
label_2cae6c:
    // 0x2cae6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cae6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2cae70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae74: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2cae74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae78: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2cae78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae7c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2cae7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cae80: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CAE80u;
    SET_GPR_U32(ctx, 31, 0x2CAE88u);
    ctx->pc = 0x2CAE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE80u;
    // 0x2cae84: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C99B8u, 0x2CAE80u, 0x2CAE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE88u;
label_2cae88:
    // 0x2cae88: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2CAE88u;
    {
        const bool branch_taken_0x2cae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE88u;
        // 0x2cae8c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae88) {
            ctx->pc = 0x2CAF44u;
            goto label_2caf44;
        }
    }
    ctx->pc = 0x2CAE90u;
label_2cae90:
    // 0x2cae90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cae94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2cae98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae9c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2cae9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caea0: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CAEA0u;
    SET_GPR_U32(ctx, 31, 0x2CAEA8u);
    ctx->pc = 0x2CAEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAEA0u;
    // 0x2caea4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C99B8u, 0x2CAEA0u, 0x2CAEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEA8u;
label_2caea8:
    // 0x2caea8: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CAEA8u;
    {
        const bool branch_taken_0x2caea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caea8) {
            ctx->pc = 0x2CAEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAEA8u;
            // 0x2caeac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAF44u;
            goto label_2caf44;
        }
    }
    ctx->pc = 0x2CAEB0u;
    // 0x2caeb0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x2caeb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caeb4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CAEB4u;
    {
        const bool branch_taken_0x2caeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEB4u;
        // 0x2caeb8: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caeb4) {
            ctx->pc = 0x2CAF28u;
            goto label_2caf28;
        }
    }
    ctx->pc = 0x2CAEBCu;
    // 0x2caebc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CAEBCu;
    {
        const bool branch_taken_0x2caebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caebc) {
            ctx->pc = 0x2CAEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAEBCu;
            // 0x2caec0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAEE8u;
            goto label_2caee8;
        }
    }
    ctx->pc = 0x2CAEC4u;
    // 0x2caec4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2caec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2caec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2caec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caecc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2caeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caed0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2caed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caed4: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CAED4u;
    SET_GPR_U32(ctx, 31, 0x2CAEDCu);
    ctx->pc = 0x2CAED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAED4u;
    // 0x2caed8: 0x2608ffff  addiu       $t0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C99B8u, 0x2CAED4u, 0x2CAEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEDCu;
label_2caedc:
    // 0x2caedc: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CAEDCu;
    {
        const bool branch_taken_0x2caedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caedc) {
            ctx->pc = 0x2CAEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAEDCu;
            // 0x2caee0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAF44u;
            goto label_2caf44;
        }
    }
    ctx->pc = 0x2CAEE4u;
    // 0x2caee4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2caee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2caee8:
    // 0x2caee8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2caee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2caeec: 0x93a60000  lbu         $a2, 0x0($sp)
    ctx->pc = 0x2caeecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2caef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caef4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2caef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2caef8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2caef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caefc: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x2caefcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x2caf00: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x2caf00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x2caf04: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x2caf04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x2caf08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2caf08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf0c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x2caf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2caf10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2caf10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caf14: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CAF14u;
    SET_GPR_U32(ctx, 31, 0x2CAF1Cu);
    ctx->pc = 0x2CAF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAF14u;
    // 0x2caf18: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C99B8u, 0x2CAF14u, 0x2CAF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF1Cu;
label_2caf1c:
    // 0x2caf1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CAF1Cu;
    {
        const bool branch_taken_0x2caf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF1Cu;
        // 0x2caf20: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf1c) {
            ctx->pc = 0x2CAF44u;
            goto label_2caf44;
        }
    }
    ctx->pc = 0x2CAF24u;
    // 0x2caf24: 0x0  nop
    ctx->pc = 0x2caf24u;
    // NOP
label_2caf28:
    // 0x2caf28: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2caf28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2caf2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2caf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2caf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2caf34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf38: 0xc0b266e  jal         func_2C99B8
    ctx->pc = 0x2CAF38u;
    SET_GPR_U32(ctx, 31, 0x2CAF40u);
    ctx->pc = 0x2CAF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAF38u;
    // 0x2caf3c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C99B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C99B8u, 0x2CAF38u, 0x2CAF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF40u;
label_2caf40:
    // 0x2caf40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2caf40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2caf44:
    // 0x2caf44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2caf44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2caf48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2caf48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2caf4c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2caf4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2caf50: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2caf50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caf54: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2caf54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2caf58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2caf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2caf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF5Cu;
        // 0x2caf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAF64u;
    // 0x2caf64: 0x0  nop
    ctx->pc = 0x2caf64u;
    // NOP
    if (ctx->pc == 0x2caf64u) { ctx->pc = 0x2caf68u; }
}
