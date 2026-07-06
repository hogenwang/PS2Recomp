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

// Function: sub_002CFCF8
// Address: 0x2cfcf8 - 0x2cfe90
void sub_002CFCF8_0x2cfcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFCF8_0x2cfcf8");
#endif

    switch (ctx->pc) {
        case 0x2cfd50u: goto label_2cfd50;
        case 0x2cfd70u: goto label_2cfd70;
        case 0x2cfd90u: goto label_2cfd90;
        case 0x2cfdc8u: goto label_2cfdc8;
        case 0x2cfdf0u: goto label_2cfdf0;
        case 0x2cfe04u: goto label_2cfe04;
        case 0x2cfe40u: goto label_2cfe40;
        case 0x2cfe44u: goto label_2cfe44;
        case 0x2cfe68u: goto label_2cfe68;
        case 0x2cfe7cu: goto label_2cfe7c;
        default: break;
    }

    ctx->pc = 0x2cfcf8u;

    // 0x2cfcf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cfcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cfcfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cfcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cfd00: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2cfd00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cfd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfd08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cfd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cfd0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cfd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cfd10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cfd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cfd14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cfd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cfd18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cfd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cfd1c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2cfd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cfd20: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2cfd20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cfd24: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2cfd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2cfd28: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFD28u;
    {
        const bool branch_taken_0x2cfd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd28) {
            ctx->pc = 0x2CFD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFD28u;
            // 0x2cfd2c: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFD48u;
            goto label_2cfd48;
        }
    }
    ctx->pc = 0x2CFD30u;
    // 0x2cfd30: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x2cfd30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cfd34: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2cfd34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfd38: 0x8cb20008  lw          $s2, 0x8($a1)
    ctx->pc = 0x2cfd38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cfd3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFD3Cu;
    {
        const bool branch_taken_0x2cfd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD3Cu;
        // 0x2cfd40: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd3c) {
            ctx->pc = 0x2CFD54u;
            goto label_2cfd54;
        }
    }
    ctx->pc = 0x2CFD44u;
    // 0x2cfd44: 0x0  nop
    ctx->pc = 0x2cfd44u;
    // NOP
label_2cfd48:
    // 0x2cfd48: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2cfd48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfd4c: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x2cfd4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2cfd50:
    // 0x2cfd50: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2cfd50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2cfd54:
    // 0x2cfd54: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2cfd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2cfd58: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x2cfd58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2cfd5c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFD5Cu;
    {
        const bool branch_taken_0x2cfd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd5c) {
            ctx->pc = 0x2CFD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFD5Cu;
            // 0x2cfd60: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFD7Cu;
            goto label_2cfd7c;
        }
    }
    ctx->pc = 0x2CFD64u;
    // 0x2cfd64: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x2cfd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2cfd68: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2CFD68u;
    SET_GPR_U32(ctx, 31, 0x2CFD70u);
    ctx->pc = 0x2CFD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD68u;
    // 0x2cfd6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2CFD68u, 0x2CFD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD70u;
label_2cfd70:
    // 0x2cfd70: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2CFD70u;
    {
        const bool branch_taken_0x2cfd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd70) {
            ctx->pc = 0x2CFD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFD70u;
            // 0x2cfd74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFE6Cu;
            goto label_2cfe6c;
        }
    }
    ctx->pc = 0x2CFD78u;
    // 0x2cfd78: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2cfd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2cfd7c:
    // 0x2cfd7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfd80: 0x1aa00016  blez        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CFD80u;
    {
        const bool branch_taken_0x2cfd80 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2CFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD80u;
        // 0x2cfd84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd80) {
            ctx->pc = 0x2CFDDCu;
            goto label_2cfddc;
        }
    }
    ctx->pc = 0x2CFD88u;
    // 0x2cfd88: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2cfd88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfd8c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x2cfd8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_2cfd90:
    // 0x2cfd90: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2cfd90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2cfd94: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x2cfd94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cfd98: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2cfd98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2cfd9c: 0x46202d  daddu       $a0, $v0, $a2
    ctx->pc = 0x2cfd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2cfda0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfda4: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x2cfda4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x2cfda8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2cfda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2cfdac: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x2cfdacu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cfdb0: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x2cfdb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cfdb4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2cfdb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cfdb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFDB8u;
    {
        const bool branch_taken_0x2cfdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDB8u;
        // 0x2cfdbc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdb8) {
            ctx->pc = 0x2CFDC8u;
            goto label_2cfdc8;
        }
    }
    ctx->pc = 0x2CFDC0u;
    // 0x2cfdc0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFDC0u;
    {
        const bool branch_taken_0x2cfdc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfdc0) {
            ctx->pc = 0x2CFDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFDC0u;
            // 0x2cfdc4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFDD0u;
            goto label_2cfdd0;
        }
    }
    ctx->pc = 0x2CFDC8u;
label_2cfdc8:
    // 0x2cfdc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cfdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfdcc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2cfdccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2cfdd0:
    // 0x2cfdd0: 0x5620ffef  bnel        $s1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2CFDD0u;
    {
        const bool branch_taken_0x2cfdd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfdd0) {
            ctx->pc = 0x2CFDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFDD0u;
            // 0x2cfdd4: 0xde030000  ld          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFD90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cfd90;
        }
    }
    ctx->pc = 0x2CFDD8u;
    // 0x2cfdd8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2cfdd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cfddc:
    // 0x2cfddc: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2cfddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2cfde0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2CFDE0u;
    {
        const bool branch_taken_0x2cfde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfde0) {
            ctx->pc = 0x2CFDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFDE0u;
            // 0x2cfde4: 0xae710004  sw          $s1, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFE1Cu;
            goto label_2cfe1c;
        }
    }
    ctx->pc = 0x2CFDE8u;
    // 0x2cfde8: 0x2918823  subu        $s1, $s4, $s1
    ctx->pc = 0x2cfde8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2cfdec: 0x0  nop
    ctx->pc = 0x2cfdecu;
    // NOP
label_2cfdf0:
    // 0x2cfdf0: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x2cfdf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cfdf4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2cfdf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2cfdf8: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x2cfdf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2cfdfc: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2cfdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2cfe00: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2cfe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2cfe04:
    // 0x2cfe04: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x2cfe04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cfe08: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2cfe08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2cfe0c: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CFE0Cu;
    {
        const bool branch_taken_0x2cfe0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE0Cu;
        // 0x2cfe10: 0x43302b  sltu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe0c) {
            ctx->pc = 0x2CFDF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cfdf0;
        }
    }
    ctx->pc = 0x2CFE14u;
    // 0x2cfe14: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2cfe14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe18: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x2cfe18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_2cfe1c:
    // 0x2cfe1c: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CFE1Cu;
    {
        const bool branch_taken_0x2cfe1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE1Cu;
        // 0x2cfe20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe1c) {
            ctx->pc = 0x2CFE68u;
            goto label_2cfe68;
        }
    }
    ctx->pc = 0x2CFE24u;
    // 0x2cfe24: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2cfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2cfe28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cfe28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cfe2c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2cfe2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2cfe30: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFE30u;
    {
        const bool branch_taken_0x2cfe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfe30) {
            ctx->pc = 0x2CFE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFE30u;
            // 0x2cfe34: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFE50u;
            goto label_2cfe50;
        }
    }
    ctx->pc = 0x2CFE38u;
    // 0x2cfe38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cfe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe3c: 0xc0b462c  jal         func_2D18B0
label_2cfe40:
    if (ctx->pc == 0x2CFE40u) {
        ctx->pc = 0x2CFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE3Cu;
        // 0x2cfe40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFE44u;
        goto label_2cfe44;
    }
    ctx->pc = 0x2CFE3Cu;
    SET_GPR_U32(ctx, 31, 0x2CFE44u);
    ctx->pc = 0x2CFE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE3Cu;
    // 0x2cfe40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18B0u, 0x2CFE3Cu, 0x2CFE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE44u;
label_2cfe44:
    // 0x2cfe44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFE44u;
    {
        const bool branch_taken_0x2cfe44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE44u;
        // 0x2cfe48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe44) {
            ctx->pc = 0x2CFE6Cu;
            goto label_2cfe6c;
        }
    }
    ctx->pc = 0x2CFE4Cu;
    // 0x2cfe4c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2cfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2cfe50:
    // 0x2cfe50: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x2cfe50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2cfe54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cfe54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfe58: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x2cfe58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x2cfe5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cfe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cfe60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cfe60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe64: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2cfe64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_2cfe68:
    // 0x2cfe68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfe68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfe6c:
    // 0x2cfe6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cfe6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cfe70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cfe70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfe74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cfe74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cfe78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cfe78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfe7c:
    // 0x2cfe7c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cfe7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cfe80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cfe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfe84: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE84u;
        // 0x2cfe88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE8Cu;
    // 0x2cfe8c: 0x0  nop
    ctx->pc = 0x2cfe8cu;
    // NOP
    if (ctx->pc == 0x2cfe8cu) { ctx->pc = 0x2cfe90u; }
}
