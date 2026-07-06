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

// Function: sub_002EBE08
// Address: 0x2ebe08 - 0x2ec430
void sub_002EBE08_0x2ebe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBE08_0x2ebe08");
#endif

    switch (ctx->pc) {
        case 0x2ebe80u: goto label_2ebe80;
        case 0x2ebe88u: goto label_2ebe88;
        case 0x2ebf04u: goto label_2ebf04;
        case 0x2ebf08u: goto label_2ebf08;
        case 0x2ebf40u: goto label_2ebf40;
        case 0x2ebf6cu: goto label_2ebf6c;
        case 0x2ebfa4u: goto label_2ebfa4;
        case 0x2ebfb8u: goto label_2ebfb8;
        case 0x2ebff8u: goto label_2ebff8;
        case 0x2ec008u: goto label_2ec008;
        case 0x2ec018u: goto label_2ec018;
        case 0x2ec028u: goto label_2ec028;
        case 0x2ec038u: goto label_2ec038;
        case 0x2ec048u: goto label_2ec048;
        case 0x2ec058u: goto label_2ec058;
        case 0x2ec068u: goto label_2ec068;
        case 0x2ec0d4u: goto label_2ec0d4;
        case 0x2ec134u: goto label_2ec134;
        case 0x2ec150u: goto label_2ec150;
        case 0x2ec174u: goto label_2ec174;
        case 0x2ec18cu: goto label_2ec18c;
        case 0x2ec194u: goto label_2ec194;
        case 0x2ec1d4u: goto label_2ec1d4;
        case 0x2ec1ecu: goto label_2ec1ec;
        case 0x2ec200u: goto label_2ec200;
        case 0x2ec244u: goto label_2ec244;
        case 0x2ec27cu: goto label_2ec27c;
        case 0x2ec294u: goto label_2ec294;
        case 0x2ec2c0u: goto label_2ec2c0;
        case 0x2ec2e0u: goto label_2ec2e0;
        case 0x2ec2f8u: goto label_2ec2f8;
        case 0x2ec324u: goto label_2ec324;
        case 0x2ec350u: goto label_2ec350;
        case 0x2ec360u: goto label_2ec360;
        case 0x2ec370u: goto label_2ec370;
        case 0x2ec3a0u: goto label_2ec3a0;
        case 0x2ec3d8u: goto label_2ec3d8;
        case 0x2ec3dcu: goto label_2ec3dc;
        case 0x2ec404u: goto label_2ec404;
        default: break;
    }

    ctx->pc = 0x2ebe08u;

    // 0x2ebe08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ebe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ebe0c: 0x3c0d003c  lui         $t5, 0x3C
    ctx->pc = 0x2ebe0cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
    // 0x2ebe10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ebe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ebe14: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x2ebe14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2ebe18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ebe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ebe1c: 0x25afeca8  addiu       $t7, $t5, -0x1358
    ctx->pc = 0x2ebe1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962344));
    // 0x2ebe20: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ebe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2ebe24: 0x73e03  sra         $a3, $a3, 24
    ctx->pc = 0x2ebe24u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 24));
    // 0x2ebe28: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2ebe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2ebe2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebe2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe30: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2ebe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2ebe34: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2ebe34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe38: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2ebe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2ebe3c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ebe3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe40: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2ebe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2ebe44: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ebe44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ebe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ebe4c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2ebe4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe50: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2ebe50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2ebe54: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2ebe54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe58: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2ebe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2ebe5c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2ebe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2ebe60: 0x8dee038c  lw          $t6, 0x38C($t7)
    ctx->pc = 0x2ebe60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 908)));
    // 0x2ebe64: 0x11c00014  beqz        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EBE64u;
    {
        const bool branch_taken_0x2ebe64 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE64u;
        // 0x2ebe68: 0x160982d  daddu       $s3, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebe64) {
            ctx->pc = 0x2EBEB8u;
            goto label_2ebeb8;
        }
    }
    ctx->pc = 0x2EBE6Cu;
    // 0x2ebe6c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ebe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ebe70: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ebe70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ebe74: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ebe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ebe78: 0x250805a0  addiu       $t0, $t0, 0x5A0
    ctx->pc = 0x2ebe78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1440));
    // 0x2ebe7c: 0x24050174  addiu       $a1, $zero, 0x174
    ctx->pc = 0x2ebe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
label_2ebe80:
    // 0x2ebe80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebe80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe84: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x2ebe84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
label_2ebe88:
    // 0x2ebe88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ebe88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebe8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ebe8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebe90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ebe90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebe94: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ebe94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ebe98: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2ebe98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ebe9c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2ebe9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ebea0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2ebea0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ebea4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2ebea4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ebea8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2ebea8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ebeac: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2ebeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ebeb0: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2EBEB0u;
    ctx->pc = 0x2EBEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBEB0u;
    // 0x2ebeb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2EBEB8u;
label_2ebeb8:
    // 0x2ebeb8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EBEB8u;
    {
        const bool branch_taken_0x2ebeb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEB8u;
        // 0x2ebebc: 0x8daeeca8  lw          $t6, -0x1358($t5) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294962344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebeb8) {
            ctx->pc = 0x2EBED8u;
            goto label_2ebed8;
        }
    }
    ctx->pc = 0x2EBEC0u;
    // 0x2ebec0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ebec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ebec4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ebec4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ebec8: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ebec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ebecc: 0x250805c0  addiu       $t0, $t0, 0x5C0
    ctx->pc = 0x2ebeccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1472));
    // 0x2ebed0: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x2EBED0u;
    {
        const bool branch_taken_0x2ebed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBED0u;
        // 0x2ebed4: 0x24050176  addiu       $a1, $zero, 0x176 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebed0) {
            ctx->pc = 0x2EBE80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebe80;
        }
    }
    ctx->pc = 0x2EBED8u;
label_2ebed8:
    // 0x2ebed8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2ebed8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebedc: 0x11cf0016  beq         $t6, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EBEDCu;
    {
        const bool branch_taken_0x2ebedc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEDCu;
        // 0x2ebee0: 0x240f0009  addiu       $t7, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebedc) {
            ctx->pc = 0x2EBF38u;
            goto label_2ebf38;
        }
    }
    ctx->pc = 0x2EBEE4u;
    // 0x2ebee4: 0x11cf0014  beq         $t6, $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EBEE4u;
    {
        const bool branch_taken_0x2ebee4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBEE4u;
        // 0x2ebee8: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebee4) {
            ctx->pc = 0x2EBF38u;
            goto label_2ebf38;
        }
    }
    ctx->pc = 0x2EBEECu;
    // 0x2ebeec: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ebeecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ebef0: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ebef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ebef4: 0x24e705d0  addiu       $a3, $a3, 0x5D0
    ctx->pc = 0x2ebef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1488));
    // 0x2ebef8: 0x2405017b  addiu       $a1, $zero, 0x17B
    ctx->pc = 0x2ebef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 379));
    // 0x2ebefc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EBEFCu;
    SET_GPR_U32(ctx, 31, 0x2EBF04u);
    ctx->pc = 0x2EBF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBEFCu;
    // 0x2ebf00: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EBEFCu, 0x2EBF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF04u;
label_2ebf04:
    // 0x2ebf04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ebf04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebf08:
    // 0x2ebf08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ebf08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebf0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ebf0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebf10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ebf10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebf14: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ebf14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ebf18: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2ebf18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ebf1c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2ebf1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ebf20: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2ebf20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ebf24: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2ebf24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ebf28: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2ebf28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ebf2c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2ebf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ebf30: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF30u;
        // 0x2ebf34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBF38u;
label_2ebf38:
    // 0x2ebf38: 0xc088696  jal         func_221A58
    ctx->pc = 0x2EBF38u;
    SET_GPR_U32(ctx, 31, 0x2EBF40u);
    ctx->pc = 0x2EBF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF38u;
    // 0x2ebf3c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A58u, 0x2EBF38u, 0x2EBF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF40u;
label_2ebf40:
    // 0x2ebf40: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2ebf40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ebf44: 0x104f0015  beq         $v0, $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EBF44u;
    {
        const bool branch_taken_0x2ebf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF44u;
        // 0x2ebf48: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf44) {
            ctx->pc = 0x2EBF9Cu;
            goto label_2ebf9c;
        }
    }
    ctx->pc = 0x2EBF4Cu;
    // 0x2ebf4c: 0x8e0f0008  lw          $t7, 0x8($s0)
    ctx->pc = 0x2ebf4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ebf50: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ebf50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ebf54: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ebf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ebf58: 0x8de90010  lw          $t1, 0x10($t7)
    ctx->pc = 0x2ebf58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x2ebf5c: 0x250805f0  addiu       $t0, $t0, 0x5F0
    ctx->pc = 0x2ebf5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1520));
    // 0x2ebf60: 0x24050181  addiu       $a1, $zero, 0x181
    ctx->pc = 0x2ebf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x2ebf64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebf64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf68: 0x2407d8ee  addiu       $a3, $zero, -0x2712
    ctx->pc = 0x2ebf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
label_2ebf6c:
    // 0x2ebf6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ebf6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebf70: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ebf70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebf74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ebf74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebf78: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ebf78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ebf7c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2ebf7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ebf80: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2ebf80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ebf84: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2ebf84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ebf88: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2ebf88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ebf8c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2ebf8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ebf90: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2ebf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ebf94: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2EBF94u;
    ctx->pc = 0x2EBF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF94u;
    // 0x2ebf98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2EBF9Cu;
label_2ebf9c:
    // 0x2ebf9c: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2EBF9Cu;
    SET_GPR_U32(ctx, 31, 0x2EBFA4u);
    ctx->pc = 0x2EBFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF9Cu;
    // 0x2ebfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2EBF9Cu, 0x2EBFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFA4u;
label_2ebfa4:
    // 0x2ebfa4: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2ebfa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ebfa8: 0x144f0113  bne         $v0, $t7, . + 4 + (0x113 << 2)
    ctx->pc = 0x2EBFA8u;
    {
        const bool branch_taken_0x2ebfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFA8u;
        // 0x2ebfac: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebfa8) {
            ctx->pc = 0x2EC3F8u;
            goto label_2ec3f8;
        }
    }
    ctx->pc = 0x2EBFB0u;
    // 0x2ebfb0: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2ebfb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebfb4: 0xadeeecbc  sw          $t6, -0x1344($t7)
    ctx->pc = 0x2ebfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294962364), GPR_U32(ctx, 14));
label_2ebfb8:
    // 0x2ebfb8: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ebfb8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ebfbc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ebfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ebfc0: 0x25f1eca8  addiu       $s1, $t7, -0x1358
    ctx->pc = 0x2ebfc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ebfc4: 0x248404b0  addiu       $a0, $a0, 0x4B0
    ctx->pc = 0x2ebfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1200));
    // 0x2ebfc8: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x2ebfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x2ebfcc: 0x262500a8  addiu       $a1, $s1, 0xA8
    ctx->pc = 0x2ebfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x2ebfd0: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x2ebfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x2ebfd4: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x2ebfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x2ebfd8: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x2ebfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x2ebfdc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2ebfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2ebfe0: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x2ebfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x2ebfe4: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2ebfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x2ebfe8: 0xa6200018  sh          $zero, 0x18($s1)
    ctx->pc = 0x2ebfe8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ebfec: 0xa620001c  sh          $zero, 0x1C($s1)
    ctx->pc = 0x2ebfecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ebff0: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EBFF0u;
    SET_GPR_U32(ctx, 31, 0x2EBFF8u);
    ctx->pc = 0x2EBFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFF0u;
    // 0x2ebff4: 0xa6200020  sh          $zero, 0x20($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EBFF0u, 0x2EBFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFF8u;
label_2ebff8:
    // 0x2ebff8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ebff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ebffc: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x2ebffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2ec000: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC000u;
    SET_GPR_U32(ctx, 31, 0x2EC008u);
    ctx->pc = 0x2EC004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC000u;
    // 0x2ec004: 0x248404e0  addiu       $a0, $a0, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC000u, 0x2EC008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC008u;
label_2ec008:
    // 0x2ec008: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec00c: 0x26250098  addiu       $a1, $s1, 0x98
    ctx->pc = 0x2ec00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x2ec010: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC010u;
    SET_GPR_U32(ctx, 31, 0x2EC018u);
    ctx->pc = 0x2EC014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC010u;
    // 0x2ec014: 0x248404f0  addiu       $a0, $a0, 0x4F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC010u, 0x2EC018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC018u;
label_2ec018:
    // 0x2ec018: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec01c: 0x26250088  addiu       $a1, $s1, 0x88
    ctx->pc = 0x2ec01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x2ec020: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC020u;
    SET_GPR_U32(ctx, 31, 0x2EC028u);
    ctx->pc = 0x2EC024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC020u;
    // 0x2ec024: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC020u, 0x2EC028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC028u;
label_2ec028:
    // 0x2ec028: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec02c: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x2ec02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2ec030: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC030u;
    SET_GPR_U32(ctx, 31, 0x2EC038u);
    ctx->pc = 0x2EC034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC030u;
    // 0x2ec034: 0x24840510  addiu       $a0, $a0, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC030u, 0x2EC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC038u;
label_2ec038:
    // 0x2ec038: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec03c: 0x26250078  addiu       $a1, $s1, 0x78
    ctx->pc = 0x2ec03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2ec040: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC040u;
    SET_GPR_U32(ctx, 31, 0x2EC048u);
    ctx->pc = 0x2EC044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC040u;
    // 0x2ec044: 0x24840520  addiu       $a0, $a0, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC040u, 0x2EC048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC048u;
label_2ec048:
    // 0x2ec048: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec04c: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x2ec04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2ec050: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC050u;
    SET_GPR_U32(ctx, 31, 0x2EC058u);
    ctx->pc = 0x2EC054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC050u;
    // 0x2ec054: 0x24840530  addiu       $a0, $a0, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC050u, 0x2EC058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC058u;
label_2ec058:
    // 0x2ec058: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec05c: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x2ec05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2ec060: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2EC060u;
    SET_GPR_U32(ctx, 31, 0x2EC068u);
    ctx->pc = 0x2EC064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC060u;
    // 0x2ec064: 0x24840540  addiu       $a0, $a0, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0728u, 0x2EC060u, 0x2EC068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC068u;
label_2ec068:
    // 0x2ec068: 0x8e2e0078  lw          $t6, 0x78($s1)
    ctx->pc = 0x2ec068u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2ec06c: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x2ec06cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec070: 0xa1cd0003  sb          $t5, 0x3($t6)
    ctx->pc = 0x2ec070u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x2ec074: 0x8e2f0070  lw          $t7, 0x70($s1)
    ctx->pc = 0x2ec074u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2ec078: 0xa1ed0003  sb          $t5, 0x3($t7)
    ctx->pc = 0x2ec078u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x2ec07c: 0x8e2c0080  lw          $t4, 0x80($s1)
    ctx->pc = 0x2ec07cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ec080: 0x958f0000  lhu         $t7, 0x0($t4)
    ctx->pc = 0x2ec080u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2ec084: 0x31effff0  andi        $t7, $t7, 0xFFF0
    ctx->pc = 0x2ec084u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65520);
    // 0x2ec088: 0x35ef000d  ori         $t7, $t7, 0xD
    ctx->pc = 0x2ec088u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)13);
    // 0x2ec08c: 0xa58f0000  sh          $t7, 0x0($t4)
    ctx->pc = 0x2ec08cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x2ec090: 0x8e2e0380  lw          $t6, 0x380($s1)
    ctx->pc = 0x2ec090u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2ec094: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x2ec094u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec098: 0xae32038c  sw          $s2, 0x38C($s1)
    ctx->pc = 0x2ec098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 908), GPR_U32(ctx, 18));
    // 0x2ec09c: 0xae2e037c  sw          $t6, 0x37C($s1)
    ctx->pc = 0x2ec09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 892), GPR_U32(ctx, 14));
    // 0x2ec0a0: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x2ec0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x2ec0a4: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC0A4u;
    {
        const bool branch_taken_0x2ec0a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC0A4u;
        // 0x2ec0a8: 0xae2f00b0  sw          $t7, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec0a4) {
            ctx->pc = 0x2EC0B0u;
            goto label_2ec0b0;
        }
    }
    ctx->pc = 0x2EC0ACu;
    // 0x2ec0ac: 0x8e13104c  lw          $s3, 0x104C($s0)
    ctx->pc = 0x2ec0acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4172)));
label_2ec0b0:
    // 0x2ec0b0: 0x8e2f0384  lw          $t7, 0x384($s1)
    ctx->pc = 0x2ec0b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
    // 0x2ec0b4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2ec0b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec0b8: 0x922400b0  lbu         $a0, 0xB0($s1)
    ctx->pc = 0x2ec0b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ec0bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ec0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0c0: 0xae2f03dc  sw          $t7, 0x3DC($s1)
    ctx->pc = 0x2ec0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 988), GPR_U32(ctx, 15));
    // 0x2ec0c4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2ec0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0c8: 0xae330384  sw          $s3, 0x384($s1)
    ctx->pc = 0x2ec0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 19));
    // 0x2ec0cc: 0xc0bc21a  jal         func_2F0868
    ctx->pc = 0x2EC0CCu;
    SET_GPR_U32(ctx, 31, 0x2EC0D4u);
    ctx->pc = 0x2EC0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0CCu;
    // 0x2ec0d0: 0xae3e0050  sw          $fp, 0x50($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0868u, 0x2EC0CCu, 0x2EC0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0D4u;
label_2ec0d4:
    // 0x2ec0d4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2EC0D4u;
    {
        const bool branch_taken_0x2ec0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec0d4) {
            ctx->pc = 0x2EC0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC0D4u;
            // 0x2ec0d8: 0x8e32037c  lw          $s2, 0x37C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC100u;
            goto label_2ec100;
        }
    }
    ctx->pc = 0x2EC0DCu;
    // 0x2ec0dc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec0e0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ec0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ec0e4: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ec0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ec0e8: 0x25080608  addiu       $t0, $t0, 0x608
    ctx->pc = 0x2ec0e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1544));
    // 0x2ec0ec: 0x240501c2  addiu       $a1, $zero, 0x1C2
    ctx->pc = 0x2ec0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x2ec0f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ec0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0f4: 0x1000ff64  b           . + 4 + (-0x9C << 2)
    ctx->pc = 0x2EC0F4u;
    {
        const bool branch_taken_0x2ec0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC0F4u;
        // 0x2ec0f8: 0x2407d8f0  addiu       $a3, $zero, -0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec0f4) {
            ctx->pc = 0x2EBE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebe88;
        }
    }
    ctx->pc = 0x2EC0FCu;
    // 0x2ec0fc: 0x0  nop
    ctx->pc = 0x2ec0fcu;
    // NOP
label_2ec100:
    // 0x2ec100: 0x125e0090  beq         $s2, $fp, . + 4 + (0x90 << 2)
    ctx->pc = 0x2EC100u;
    {
        const bool branch_taken_0x2ec100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 30));
        ctx->pc = 0x2EC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC100u;
        // 0x2ec104: 0x263603e0  addiu       $s6, $s1, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec100) {
            ctx->pc = 0x2EC344u;
            goto label_2ec344;
        }
    }
    ctx->pc = 0x2EC108u;
    // 0x2ec108: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
    ctx->pc = 0x2EC108u;
    {
        const bool branch_taken_0x2ec108 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC108u;
        // 0x2ec10c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec108) {
            ctx->pc = 0x2EC21Cu;
            goto label_2ec21c;
        }
    }
    ctx->pc = 0x2EC110u;
    // 0x2ec110: 0x124f002a  beq         $s2, $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EC110u;
    {
        const bool branch_taken_0x2ec110 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC110u;
        // 0x2ec114: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec110) {
            ctx->pc = 0x2EC1BCu;
            goto label_2ec1bc;
        }
    }
    ctx->pc = 0x2EC118u;
    // 0x2ec118: 0x164f0020  bne         $s2, $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EC118u;
    {
        const bool branch_taken_0x2ec118 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC118u;
        // 0x2ec11c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec118) {
            ctx->pc = 0x2EC19Cu;
            goto label_2ec19c;
        }
    }
    ctx->pc = 0x2EC120u;
    // 0x2ec120: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2ec120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ec124: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ec124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec128: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ec128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec12c: 0xc088fbe  jal         func_223EF8
    ctx->pc = 0x2EC12Cu;
    SET_GPR_U32(ctx, 31, 0x2EC134u);
    ctx->pc = 0x2EC130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC12Cu;
    // 0x2ec130: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EF8u, 0x2EC12Cu, 0x2EC134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC134u;
label_2ec134:
    // 0x2ec134: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC134u;
    {
        const bool branch_taken_0x2ec134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC134u;
        // 0x2ec138: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec134) {
            ctx->pc = 0x2EC15Cu;
            goto label_2ec15c;
        }
    }
    ctx->pc = 0x2EC13Cu;
    // 0x2ec13c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec140: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ec140u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ec144: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ec144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ec148: 0x25080628  addiu       $t0, $t0, 0x628
    ctx->pc = 0x2ec148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1576));
    // 0x2ec14c: 0x240501cb  addiu       $a1, $zero, 0x1CB
    ctx->pc = 0x2ec14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 459));
label_2ec150:
    // 0x2ec150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ec150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec154: 0x1000ff4c  b           . + 4 + (-0xB4 << 2)
    ctx->pc = 0x2EC154u;
    {
        const bool branch_taken_0x2ec154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC154u;
        // 0x2ec158: 0x24078ace  addiu       $a3, $zero, -0x7532 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec154) {
            ctx->pc = 0x2EBE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebe88;
        }
    }
    ctx->pc = 0x2EC15Cu;
label_2ec15c:
    // 0x2ec15c: 0x240501cc  addiu       $a1, $zero, 0x1CC
    ctx->pc = 0x2ec15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x2ec160: 0x26100590  addiu       $s0, $s0, 0x590
    ctx->pc = 0x2ec160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x2ec164: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ec164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec16c: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EC16Cu;
    SET_GPR_U32(ctx, 31, 0x2EC174u);
    ctx->pc = 0x2EC170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC16Cu;
    // 0x2ec170: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EC16Cu, 0x2EC174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC174u;
label_2ec174:
    // 0x2ec174: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec174u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec17c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ec17cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec180: 0x24e70640  addiu       $a3, $a3, 0x640
    ctx->pc = 0x2ec180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1600));
    // 0x2ec184: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2ec184u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec188: 0x240501cd  addiu       $a1, $zero, 0x1CD
    ctx->pc = 0x2ec188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 461));
label_2ec18c:
    // 0x2ec18c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EC18Cu;
    SET_GPR_U32(ctx, 31, 0x2EC194u);
    ctx->pc = 0x2EC190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC18Cu;
    // 0x2ec190: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EC18Cu, 0x2EC194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC194u;
label_2ec194:
    // 0x2ec194: 0x1000ff5c  b           . + 4 + (-0xA4 << 2)
    ctx->pc = 0x2EC194u;
    {
        const bool branch_taken_0x2ec194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC194u;
        // 0x2ec198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec194) {
            ctx->pc = 0x2EBF08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebf08;
        }
    }
    ctx->pc = 0x2EC19Cu;
label_2ec19c:
    // 0x2ec19c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ec19cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ec1a0: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ec1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ec1a4: 0x25080670  addiu       $t0, $t0, 0x670
    ctx->pc = 0x2ec1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1648));
    // 0x2ec1a8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2ec1a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1ac: 0x2405021a  addiu       $a1, $zero, 0x21A
    ctx->pc = 0x2ec1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
    // 0x2ec1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ec1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1b4: 0x1000ff6d  b           . + 4 + (-0x93 << 2)
    ctx->pc = 0x2EC1B4u;
    {
        const bool branch_taken_0x2ec1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1B4u;
        // 0x2ec1b8: 0x2407d8ef  addiu       $a3, $zero, -0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec1b4) {
            ctx->pc = 0x2EBF6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebf6c;
        }
    }
    ctx->pc = 0x2EC1BCu;
label_2ec1bc:
    // 0x2ec1bc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2ec1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ec1c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ec1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1c4: 0x8e270384  lw          $a3, 0x384($s1)
    ctx->pc = 0x2ec1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
    // 0x2ec1c8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ec1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1cc: 0xc088fbe  jal         func_223EF8
    ctx->pc = 0x2EC1CCu;
    SET_GPR_U32(ctx, 31, 0x2EC1D4u);
    ctx->pc = 0x2EC1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1CCu;
    // 0x2ec1d0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EF8u, 0x2EC1CCu, 0x2EC1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1D4u;
label_2ec1d4:
    // 0x2ec1d4: 0x26100590  addiu       $s0, $s0, 0x590
    ctx->pc = 0x2ec1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x2ec1d8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2ec1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec1dc: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x2ec1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x2ec1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1e4: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EC1E4u;
    SET_GPR_U32(ctx, 31, 0x2EC1ECu);
    ctx->pc = 0x2EC1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1E4u;
    // 0x2ec1e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EC1E4u, 0x2EC1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1ECu;
label_2ec1ec:
    // 0x2ec1ec: 0xa22003b3  sb          $zero, 0x3B3($s1)
    ctx->pc = 0x2ec1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 947), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec1f0: 0x262403b4  addiu       $a0, $s1, 0x3B4
    ctx->pc = 0x2ec1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 948));
    // 0x2ec1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1f8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2EC1F8u;
    SET_GPR_U32(ctx, 31, 0x2EC200u);
    ctx->pc = 0x2EC1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1F8u;
    // 0x2ec1fc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2EC1F8u, 0x2EC200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC200u;
label_2ec200:
    // 0x2ec200: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec200u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec208: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ec208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec20c: 0x24e70688  addiu       $a3, $a3, 0x688
    ctx->pc = 0x2ec20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1672));
    // 0x2ec210: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2ec210u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec214: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x2EC214u;
    {
        const bool branch_taken_0x2ec214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC214u;
        // 0x2ec218: 0x24050216  addiu       $a1, $zero, 0x216 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec214) {
            ctx->pc = 0x2EC18Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec18c;
        }
    }
    ctx->pc = 0x2EC21Cu;
label_2ec21c:
    // 0x2ec21c: 0x8e2f038c  lw          $t7, 0x38C($s1)
    ctx->pc = 0x2ec21cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
    // 0x2ec220: 0x11e0001e  beqz        $t7, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EC220u;
    {
        const bool branch_taken_0x2ec220 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC220u;
        // 0x2ec224: 0x8e2f0014  lw          $t7, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec220) {
            ctx->pc = 0x2EC29Cu;
            goto label_2ec29c;
        }
    }
    ctx->pc = 0x2EC228u;
    // 0x2ec228: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x2EC228u;
    {
        const bool branch_taken_0x2ec228 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC228u;
        // 0x2ec22c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec228) {
            ctx->pc = 0x2EC264u;
            goto label_2ec264;
        }
    }
    ctx->pc = 0x2EC230u;
    // 0x2ec230: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2ec230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ec234: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ec234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec238: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ec238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec23c: 0xc088fbe  jal         func_223EF8
    ctx->pc = 0x2EC23Cu;
    SET_GPR_U32(ctx, 31, 0x2EC244u);
    ctx->pc = 0x2EC240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC23Cu;
    // 0x2ec240: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EF8u, 0x2EC23Cu, 0x2EC244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC244u;
label_2ec244:
    // 0x2ec244: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC244u;
    {
        const bool branch_taken_0x2ec244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC244u;
        // 0x2ec248: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec244) {
            ctx->pc = 0x2EC264u;
            goto label_2ec264;
        }
    }
    ctx->pc = 0x2EC24Cu;
    // 0x2ec24c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec250: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ec250u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ec254: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ec254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ec258: 0x25080628  addiu       $t0, $t0, 0x628
    ctx->pc = 0x2ec258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1576));
    // 0x2ec25c: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x2EC25Cu;
    {
        const bool branch_taken_0x2ec25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC25Cu;
        // 0x2ec260: 0x240501d6  addiu       $a1, $zero, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec25c) {
            ctx->pc = 0x2EC150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec150;
        }
    }
    ctx->pc = 0x2EC264u;
label_2ec264:
    // 0x2ec264: 0x240501d8  addiu       $a1, $zero, 0x1D8
    ctx->pc = 0x2ec264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
    // 0x2ec268: 0x26100590  addiu       $s0, $s0, 0x590
    ctx->pc = 0x2ec268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x2ec26c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ec26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec274: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EC274u;
    SET_GPR_U32(ctx, 31, 0x2EC27Cu);
    ctx->pc = 0x2EC278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC274u;
    // 0x2ec278: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EC274u, 0x2EC27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC27Cu;
label_2ec27c:
    // 0x2ec27c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec27cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec284: 0x240501d9  addiu       $a1, $zero, 0x1D9
    ctx->pc = 0x2ec284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
    // 0x2ec288: 0x24e706b0  addiu       $a3, $a3, 0x6B0
    ctx->pc = 0x2ec288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1712));
    // 0x2ec28c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EC28Cu;
    SET_GPR_U32(ctx, 31, 0x2EC294u);
    ctx->pc = 0x2EC290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC28Cu;
    // 0x2ec290: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EC28Cu, 0x2EC294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC294u;
label_2ec294:
    // 0x2ec294: 0x1000ff1c  b           . + 4 + (-0xE4 << 2)
    ctx->pc = 0x2EC294u;
    {
        const bool branch_taken_0x2ec294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC294u;
        // 0x2ec298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec294) {
            ctx->pc = 0x2EBF08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebf08;
        }
    }
    ctx->pc = 0x2EC29Cu;
label_2ec29c:
    // 0x2ec29c: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EC29Cu;
    {
        const bool branch_taken_0x2ec29c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC29Cu;
        // 0x2ec2a0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec29c) {
            ctx->pc = 0x2EC2E0u;
            goto label_2ec2e0;
        }
    }
    ctx->pc = 0x2EC2A4u;
    // 0x2ec2a4: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x2ec2a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec2a8: 0x15e0001a  bnez        $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EC2A8u;
    {
        const bool branch_taken_0x2ec2a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2A8u;
        // 0x2ec2ac: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2a8) {
            ctx->pc = 0x2EC314u;
            goto label_2ec314;
        }
    }
    ctx->pc = 0x2EC2B0u;
    // 0x2ec2b0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ec2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ec2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2b8: 0xc088f6a  jal         func_223DA8
    ctx->pc = 0x2EC2B8u;
    SET_GPR_U32(ctx, 31, 0x2EC2C0u);
    ctx->pc = 0x2EC2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC2B8u;
    // 0x2ec2bc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DA8u, 0x2EC2B8u, 0x2EC2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC2C0u;
label_2ec2c0:
    // 0x2ec2c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC2C0u;
    {
        const bool branch_taken_0x2ec2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2C0u;
        // 0x2ec2c4: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2c0) {
            ctx->pc = 0x2EC2E0u;
            goto label_2ec2e0;
        }
    }
    ctx->pc = 0x2EC2C8u;
    // 0x2ec2c8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec2cc: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ec2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ec2d0: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ec2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ec2d4: 0x25080628  addiu       $t0, $t0, 0x628
    ctx->pc = 0x2ec2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1576));
    // 0x2ec2d8: 0x1000ff9d  b           . + 4 + (-0x63 << 2)
    ctx->pc = 0x2EC2D8u;
    {
        const bool branch_taken_0x2ec2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2D8u;
        // 0x2ec2dc: 0x240501e1  addiu       $a1, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2d8) {
            ctx->pc = 0x2EC150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec150;
        }
    }
    ctx->pc = 0x2EC2E0u;
label_2ec2e0:
    // 0x2ec2e0: 0x240501e9  addiu       $a1, $zero, 0x1E9
    ctx->pc = 0x2ec2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 489));
    // 0x2ec2e4: 0x26100590  addiu       $s0, $s0, 0x590
    ctx->pc = 0x2ec2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x2ec2e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ec2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2f0: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2EC2F0u;
    SET_GPR_U32(ctx, 31, 0x2EC2F8u);
    ctx->pc = 0x2EC2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC2F0u;
    // 0x2ec2f4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EC2F0u, 0x2EC2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC2F8u;
label_2ec2f8:
    // 0x2ec2f8: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec300: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ec300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec304: 0x24e706d8  addiu       $a3, $a3, 0x6D8
    ctx->pc = 0x2ec304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1752));
    // 0x2ec308: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2ec308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec30c: 0x1000ff9f  b           . + 4 + (-0x61 << 2)
    ctx->pc = 0x2EC30Cu;
    {
        const bool branch_taken_0x2ec30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC30Cu;
        // 0x2ec310: 0x240501ea  addiu       $a1, $zero, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec30c) {
            ctx->pc = 0x2EC18Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec18c;
        }
    }
    ctx->pc = 0x2EC314u;
label_2ec314:
    // 0x2ec314: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ec314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec318: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ec318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec31c: 0xc088fbe  jal         func_223EF8
    ctx->pc = 0x2EC31Cu;
    SET_GPR_U32(ctx, 31, 0x2EC324u);
    ctx->pc = 0x2EC320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC31Cu;
    // 0x2ec320: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EF8u, 0x2EC31Cu, 0x2EC324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC324u;
label_2ec324:
    // 0x2ec324: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2EC324u;
    {
        const bool branch_taken_0x2ec324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC324u;
        // 0x2ec328: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec324) {
            ctx->pc = 0x2EC2E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec2e0;
        }
    }
    ctx->pc = 0x2EC32Cu;
    // 0x2ec32c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec330: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ec330u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ec334: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ec334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ec338: 0x25080628  addiu       $t0, $t0, 0x628
    ctx->pc = 0x2ec338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1576));
    // 0x2ec33c: 0x1000ff84  b           . + 4 + (-0x7C << 2)
    ctx->pc = 0x2EC33Cu;
    {
        const bool branch_taken_0x2ec33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC33Cu;
        // 0x2ec340: 0x240501e5  addiu       $a1, $zero, 0x1E5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 485));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec33c) {
            ctx->pc = 0x2EC150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec150;
        }
    }
    ctx->pc = 0x2EC344u;
label_2ec344:
    // 0x2ec344: 0xae2003d0  sw          $zero, 0x3D0($s1)
    ctx->pc = 0x2ec344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 976), GPR_U32(ctx, 0));
    // 0x2ec348: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2EC348u;
    SET_GPR_U32(ctx, 31, 0x2EC350u);
    ctx->pc = 0x2EC34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC348u;
    // 0x2ec34c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2EC348u, 0x2EC350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC350u;
label_2ec350:
    // 0x2ec350: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC350u;
    {
        const bool branch_taken_0x2ec350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2ec350) {
            ctx->pc = 0x2EC354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC350u;
            // 0x2ec354: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC364u;
            goto label_2ec364;
        }
    }
    ctx->pc = 0x2EC358u;
    // 0x2ec358: 0xc088f42  jal         func_223D08
    ctx->pc = 0x2EC358u;
    SET_GPR_U32(ctx, 31, 0x2EC360u);
    ctx->pc = 0x2EC35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC358u;
    // 0x2ec35c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223D08u, 0x2EC358u, 0x2EC360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC360u;
label_2ec360:
    // 0x2ec360: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ec360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ec364:
    // 0x2ec364: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ec364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec368: 0xc089318  jal         func_224C60
    ctx->pc = 0x2EC368u;
    SET_GPR_U32(ctx, 31, 0x2EC370u);
    ctx->pc = 0x2EC36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC368u;
    // 0x2ec36c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224C60u, 0x2EC368u, 0x2EC370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC370u;
label_2ec370:
    // 0x2ec370: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC370u;
    {
        const bool branch_taken_0x2ec370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec370) {
            ctx->pc = 0x2EC374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC370u;
            // 0x2ec374: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC390u;
            goto label_2ec390;
        }
    }
    ctx->pc = 0x2EC378u;
    // 0x2ec378: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec37c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ec37cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ec380: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ec380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ec384: 0x25080628  addiu       $t0, $t0, 0x628
    ctx->pc = 0x2ec384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1576));
    // 0x2ec388: 0x1000ff71  b           . + 4 + (-0x8F << 2)
    ctx->pc = 0x2EC388u;
    {
        const bool branch_taken_0x2ec388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC388u;
        // 0x2ec38c: 0x24050202  addiu       $a1, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec388) {
            ctx->pc = 0x2EC150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec150;
        }
    }
    ctx->pc = 0x2EC390u;
label_2ec390:
    // 0x2ec390: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ec390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec394: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ec394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec398: 0xc088fbe  jal         func_223EF8
    ctx->pc = 0x2EC398u;
    SET_GPR_U32(ctx, 31, 0x2EC3A0u);
    ctx->pc = 0x2EC39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC398u;
    // 0x2ec39c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EF8u, 0x2EC398u, 0x2EC3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC3A0u;
label_2ec3a0:
    // 0x2ec3a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC3A0u;
    {
        const bool branch_taken_0x2ec3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3A0u;
        // 0x2ec3a4: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3a0) {
            ctx->pc = 0x2EC3C0u;
            goto label_2ec3c0;
        }
    }
    ctx->pc = 0x2EC3A8u;
    // 0x2ec3a8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec3ac: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ec3acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ec3b0: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ec3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ec3b4: 0x25080628  addiu       $t0, $t0, 0x628
    ctx->pc = 0x2ec3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1576));
    // 0x2ec3b8: 0x1000ff65  b           . + 4 + (-0x9B << 2)
    ctx->pc = 0x2EC3B8u;
    {
        const bool branch_taken_0x2ec3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3B8u;
        // 0x2ec3bc: 0x24050204  addiu       $a1, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3b8) {
            ctx->pc = 0x2EC150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec150;
        }
    }
    ctx->pc = 0x2EC3C0u;
label_2ec3c0:
    // 0x2ec3c0: 0xae2003d8  sw          $zero, 0x3D8($s1)
    ctx->pc = 0x2ec3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 984), GPR_U32(ctx, 0));
    // 0x2ec3c4: 0x26100590  addiu       $s0, $s0, 0x590
    ctx->pc = 0x2ec3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x2ec3c8: 0x24050208  addiu       $a1, $zero, 0x208
    ctx->pc = 0x2ec3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x2ec3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3d0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ec3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec3d4: 0xc0bc6f6  jal         func_2F1BD8
label_2ec3d8:
    if (ctx->pc == 0x2EC3D8u) {
        ctx->pc = 0x2EC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3D4u;
        // 0x2ec3d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC3DCu;
        goto label_2ec3dc;
    }
    ctx->pc = 0x2EC3D4u;
    SET_GPR_U32(ctx, 31, 0x2EC3DCu);
    ctx->pc = 0x2EC3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC3D4u;
    // 0x2ec3d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2EC3D4u, 0x2EC3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC3DCu;
label_2ec3dc:
    // 0x2ec3dc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ec3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ec3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3e4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ec3e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3e8: 0x24e70700  addiu       $a3, $a3, 0x700
    ctx->pc = 0x2ec3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1792));
    // 0x2ec3ec: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2ec3ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3f0: 0x1000ff66  b           . + 4 + (-0x9A << 2)
    ctx->pc = 0x2EC3F0u;
    {
        const bool branch_taken_0x2ec3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3F0u;
        // 0x2ec3f4: 0x24050209  addiu       $a1, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3f0) {
            ctx->pc = 0x2EC18Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ec18c;
        }
    }
    ctx->pc = 0x2EC3F8u;
label_2ec3f8:
    // 0x2ec3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3fc: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2EC3FCu;
    SET_GPR_U32(ctx, 31, 0x2EC404u);
    ctx->pc = 0x2EC400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC3FCu;
    // 0x2ec400: 0xade0ecbc  sw          $zero, -0x1344($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294962364), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2EC3FCu, 0x2EC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC404u;
label_2ec404:
    // 0x2ec404: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2ec404u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec408: 0x104ffeeb  beq         $v0, $t7, . + 4 + (-0x115 << 2)
    ctx->pc = 0x2EC408u;
    {
        const bool branch_taken_0x2ec408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC408u;
        // 0x2ec40c: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec408) {
            ctx->pc = 0x2EBFB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebfb8;
        }
    }
    ctx->pc = 0x2EC410u;
    // 0x2ec410: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ec410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ec414: 0x24840590  addiu       $a0, $a0, 0x590
    ctx->pc = 0x2ec414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2ec418: 0x25080728  addiu       $t0, $t0, 0x728
    ctx->pc = 0x2ec418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1832));
    // 0x2ec41c: 0x2405018c  addiu       $a1, $zero, 0x18C
    ctx->pc = 0x2ec41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 396));
    // 0x2ec420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ec420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec424: 0x1000fe98  b           . + 4 + (-0x168 << 2)
    ctx->pc = 0x2EC424u;
    {
        const bool branch_taken_0x2ec424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC424u;
        // 0x2ec428: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec424) {
            ctx->pc = 0x2EBE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ebe88;
        }
    }
    ctx->pc = 0x2EC42Cu;
    // 0x2ec42c: 0x0  nop
    ctx->pc = 0x2ec42cu;
    // NOP
    if (ctx->pc == 0x2ec42cu) { ctx->pc = 0x2ec430u; }
}
