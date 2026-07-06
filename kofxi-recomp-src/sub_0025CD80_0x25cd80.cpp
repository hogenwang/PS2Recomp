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

// Function: sub_0025CD80
// Address: 0x25cd80 - 0x25ce98
void sub_0025CD80_0x25cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CD80_0x25cd80");
#endif

    switch (ctx->pc) {
        case 0x25cdacu: goto label_25cdac;
        case 0x25cdb8u: goto label_25cdb8;
        case 0x25ce28u: goto label_25ce28;
        case 0x25ce3cu: goto label_25ce3c;
        case 0x25ce50u: goto label_25ce50;
        case 0x25ce64u: goto label_25ce64;
        case 0x25ce6cu: goto label_25ce6c;
        case 0x25ce74u: goto label_25ce74;
        default: break;
    }

    ctx->pc = 0x25cd80u;

    // 0x25cd80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25cd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25cd84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25cd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25cd88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25cd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25cd8c: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x25cd8cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x25cd90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25cd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25cd98: 0x8e641750  lw          $a0, 0x1750($s3)
    ctx->pc = 0x25cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5968)));
    // 0x25cd9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25cd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25cda0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25cda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25cda4: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x25CDA4u;
    SET_GPR_U32(ctx, 31, 0x25CDACu);
    ctx->pc = 0x25CDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CDA4u;
    // 0x25cda8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x25CDA4u, 0x25CDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CDACu;
label_25cdac:
    // 0x25cdac: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x25cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x25cdb0: 0x8c90ae90  lw          $s0, -0x5170($a0)
    ctx->pc = 0x25cdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946448)));
    // 0x25cdb4: 0x0  nop
    ctx->pc = 0x25cdb4u;
    // NOP
label_25cdb8:
    // 0x25cdb8: 0x5200002c  beql        $s0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x25CDB8u;
    {
        const bool branch_taken_0x25cdb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cdb8) {
            ctx->pc = 0x25CDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CDB8u;
            // 0x25cdbc: 0x2412ffe4  addiu       $s2, $zero, -0x1C (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CE6Cu;
            goto label_25ce6c;
        }
    }
    ctx->pc = 0x25CDC0u;
    // 0x25cdc0: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x25cdc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25cdc4: 0x5451fffc  bnel        $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x25CDC4u;
    {
        const bool branch_taken_0x25cdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x25cdc4) {
            ctx->pc = 0x25CDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CDC4u;
            // 0x25cdc8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25cdb8;
        }
    }
    ctx->pc = 0x25CDCCu;
    // 0x25cdcc: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CDCCu;
    {
        const bool branch_taken_0x25cdcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cdcc) {
            ctx->pc = 0x25CDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CDCCu;
            // 0x25cdd0: 0x8602000a  lh          $v0, 0xA($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CDDCu;
            goto label_25cddc;
        }
    }
    ctx->pc = 0x25CDD4u;
    // 0x25cdd4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x25CDD4u;
    {
        const bool branch_taken_0x25cdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDD4u;
        // 0x25cdd8: 0x2412ffe4  addiu       $s2, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cdd4) {
            ctx->pc = 0x25CE6Cu;
            goto label_25ce6c;
        }
    }
    ctx->pc = 0x25CDDCu;
label_25cddc:
    // 0x25cddc: 0x58400003  blezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CDDCu;
    {
        const bool branch_taken_0x25cddc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25cddc) {
            ctx->pc = 0x25CDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CDDCu;
            // 0x25cde0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CDECu;
            goto label_25cdec;
        }
    }
    ctx->pc = 0x25CDE4u;
    // 0x25cde4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x25CDE4u;
    {
        const bool branch_taken_0x25cde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDE4u;
        // 0x25cde8: 0x2412ffe9  addiu       $s2, $zero, -0x17 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cde4) {
            ctx->pc = 0x25CE6Cu;
            goto label_25ce6c;
        }
    }
    ctx->pc = 0x25CDECu;
label_25cdec:
    // 0x25cdec: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CDECu;
    {
        const bool branch_taken_0x25cdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cdec) {
            ctx->pc = 0x25CDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CDECu;
            // 0x25cdf0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CE00u;
            goto label_25ce00;
        }
    }
    ctx->pc = 0x25CDF4u;
    // 0x25cdf4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25cdf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25CDF8u;
    {
        const bool branch_taken_0x25cdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CDF8u;
        // 0x25cdfc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cdf8) {
            ctx->pc = 0x25CE08u;
            goto label_25ce08;
        }
    }
    ctx->pc = 0x25CE00u;
label_25ce00:
    // 0x25ce00: 0x2482ae90  addiu       $v0, $a0, -0x5170
    ctx->pc = 0x25ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946448));
    // 0x25ce04: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x25ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_25ce08:
    // 0x25ce08: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25ce0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25ce10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x25ce14: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x25ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x25ce18: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CE18u;
    {
        const bool branch_taken_0x25ce18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ce18) {
            ctx->pc = 0x25CE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CE18u;
            // 0x25ce1c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CE2Cu;
            goto label_25ce2c;
        }
    }
    ctx->pc = 0x25CE20u;
    // 0x25ce20: 0xc098560  jal         func_261580
    ctx->pc = 0x25CE20u;
    SET_GPR_U32(ctx, 31, 0x25CE28u);
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25CE20u, 0x25CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE28u;
label_25ce28:
    // 0x25ce28: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x25ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_25ce2c:
    // 0x25ce2c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CE2Cu;
    {
        const bool branch_taken_0x25ce2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ce2c) {
            ctx->pc = 0x25CE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CE2Cu;
            // 0x25ce30: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CE40u;
            goto label_25ce40;
        }
    }
    ctx->pc = 0x25CE34u;
    // 0x25ce34: 0xc098560  jal         func_261580
    ctx->pc = 0x25CE34u;
    SET_GPR_U32(ctx, 31, 0x25CE3Cu);
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25CE34u, 0x25CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE3Cu;
label_25ce3c:
    // 0x25ce3c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x25ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_25ce40:
    // 0x25ce40: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CE40u;
    {
        const bool branch_taken_0x25ce40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ce40) {
            ctx->pc = 0x25CE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CE40u;
            // 0x25ce44: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CE54u;
            goto label_25ce54;
        }
    }
    ctx->pc = 0x25CE48u;
    // 0x25ce48: 0xc098560  jal         func_261580
    ctx->pc = 0x25CE48u;
    SET_GPR_U32(ctx, 31, 0x25CE50u);
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25CE48u, 0x25CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE50u;
label_25ce50:
    // 0x25ce50: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x25ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_25ce54:
    // 0x25ce54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CE54u;
    {
        const bool branch_taken_0x25ce54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ce54) {
            ctx->pc = 0x25CE64u;
            goto label_25ce64;
        }
    }
    ctx->pc = 0x25CE5Cu;
    // 0x25ce5c: 0xc098560  jal         func_261580
    ctx->pc = 0x25CE5Cu;
    SET_GPR_U32(ctx, 31, 0x25CE64u);
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25CE5Cu, 0x25CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE64u;
label_25ce64:
    // 0x25ce64: 0xc098560  jal         func_261580
    ctx->pc = 0x25CE64u;
    SET_GPR_U32(ctx, 31, 0x25CE6Cu);
    ctx->pc = 0x25CE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE64u;
    // 0x25ce68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25CE64u, 0x25CE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE6Cu;
label_25ce6c:
    // 0x25ce6c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x25CE6Cu;
    SET_GPR_U32(ctx, 31, 0x25CE74u);
    ctx->pc = 0x25CE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE6Cu;
    // 0x25ce70: 0x8e641750  lw          $a0, 0x1750($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x25CE6Cu, 0x25CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE74u;
label_25ce74:
    // 0x25ce74: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25ce74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25ce78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ce7c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25ce7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ce80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25ce80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ce84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25ce84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ce88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25ce88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ce8c: 0x3e00008  jr          $ra
    ctx->pc = 0x25CE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CE8Cu;
        // 0x25ce90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CE94u;
    // 0x25ce94: 0x0  nop
    ctx->pc = 0x25ce94u;
    // NOP
    if (ctx->pc == 0x25ce94u) { ctx->pc = 0x25ce98u; }
}
