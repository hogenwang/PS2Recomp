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

// Function: sub_00310630
// Address: 0x310630 - 0x311090
void sub_00310630_0x310630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310630_0x310630");
#endif

    switch (ctx->pc) {
        case 0x3106a8u: goto label_3106a8;
        case 0x3106b0u: goto label_3106b0;
        case 0x310700u: goto label_310700;
        case 0x310708u: goto label_310708;
        case 0x310724u: goto label_310724;
        case 0x310760u: goto label_310760;
        case 0x31076cu: goto label_31076c;
        case 0x3107b4u: goto label_3107b4;
        case 0x3107ecu: goto label_3107ec;
        case 0x31080cu: goto label_31080c;
        case 0x31081cu: goto label_31081c;
        case 0x310870u: goto label_310870;
        case 0x310884u: goto label_310884;
        case 0x310894u: goto label_310894;
        case 0x3108c8u: goto label_3108c8;
        case 0x3108d0u: goto label_3108d0;
        case 0x310948u: goto label_310948;
        case 0x3109ecu: goto label_3109ec;
        case 0x310a6cu: goto label_310a6c;
        case 0x310a94u: goto label_310a94;
        case 0x310adcu: goto label_310adc;
        case 0x310b9cu: goto label_310b9c;
        case 0x310c0cu: goto label_310c0c;
        case 0x310c38u: goto label_310c38;
        case 0x310ca8u: goto label_310ca8;
        case 0x310cb0u: goto label_310cb0;
        case 0x310cc0u: goto label_310cc0;
        case 0x310cf8u: goto label_310cf8;
        case 0x310d00u: goto label_310d00;
        case 0x310d10u: goto label_310d10;
        case 0x310d3cu: goto label_310d3c;
        case 0x310d70u: goto label_310d70;
        case 0x310d94u: goto label_310d94;
        case 0x310d9cu: goto label_310d9c;
        case 0x310da4u: goto label_310da4;
        case 0x310db4u: goto label_310db4;
        case 0x310dfcu: goto label_310dfc;
        case 0x310e4cu: goto label_310e4c;
        case 0x310e54u: goto label_310e54;
        case 0x310e74u: goto label_310e74;
        case 0x310e7cu: goto label_310e7c;
        case 0x310e84u: goto label_310e84;
        case 0x310e8cu: goto label_310e8c;
        case 0x310e94u: goto label_310e94;
        case 0x310ea0u: goto label_310ea0;
        case 0x310eacu: goto label_310eac;
        case 0x310ed4u: goto label_310ed4;
        case 0x310ee4u: goto label_310ee4;
        case 0x310ef4u: goto label_310ef4;
        case 0x310f04u: goto label_310f04;
        case 0x310f14u: goto label_310f14;
        case 0x310f24u: goto label_310f24;
        case 0x310f2cu: goto label_310f2c;
        case 0x310f34u: goto label_310f34;
        case 0x310f3cu: goto label_310f3c;
        case 0x310f5cu: goto label_310f5c;
        case 0x310f64u: goto label_310f64;
        case 0x310f70u: goto label_310f70;
        case 0x310f78u: goto label_310f78;
        case 0x310f80u: goto label_310f80;
        case 0x310f88u: goto label_310f88;
        case 0x310f94u: goto label_310f94;
        case 0x310ff8u: goto label_310ff8;
        case 0x311080u: goto label_311080;
        default: break;
    }

    ctx->pc = 0x310630u;

label_310630:
    // 0x310630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x310630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x310634: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x310638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31063c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x310640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x310644: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x310644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x310648: 0x9465dab0  lhu         $a1, -0x2550($v1)
    ctx->pc = 0x310648u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x31064c: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x31064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x310650: 0x50a3001e  beql        $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x310650u;
    {
        const bool branch_taken_0x310650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x310650) {
            ctx->pc = 0x310654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310650u;
            // 0x310654: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3106CCu;
            goto label_3106cc;
        }
    }
    ctx->pc = 0x310658u;
    // 0x310658: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x310658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x31065c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x31065cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x310660: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x310660u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x310664: 0x10650018  beq         $v1, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x310664u;
    {
        const bool branch_taken_0x310664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x310664) {
            ctx->pc = 0x3106C8u;
            goto label_3106c8;
        }
    }
    ctx->pc = 0x31066Cu;
    // 0x31066c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x31066cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x310670: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x310670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x310674: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x310674u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x310678: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31067c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x31067cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x310680: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x310680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x310684: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x310684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x310688: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x310688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31068c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x31068cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310690: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x310690u;
    {
        const bool branch_taken_0x310690 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x310694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310690u;
        // 0x310694: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310690) {
            ctx->pc = 0x3106C8u;
            goto label_3106c8;
        }
    }
    ctx->pc = 0x310698u;
    // 0x310698: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31069c: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x31069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x3106a0: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x3106a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3106a4: 0x26510005  addiu       $s1, $s2, 0x5
    ctx->pc = 0x3106a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
label_3106a8:
    // 0x3106a8: 0xc0d5fcc  jal         func_357F30
    ctx->pc = 0x3106A8u;
    SET_GPR_U32(ctx, 31, 0x3106B0u);
    ctx->pc = 0x3106ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3106A8u;
    // 0x3106ac: 0x9244014d  lbu         $a0, 0x14D($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 333)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357F30u, 0x3106A8u, 0x3106B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3106B0u;
label_3106b0:
    // 0x3106b0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3106b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3106b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3106b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3106b8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3106b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3106bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3106BCu;
    {
        const bool branch_taken_0x3106bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3106C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106BCu;
        // 0x3106c0: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106bc) {
            ctx->pc = 0x3106A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3106a8;
        }
    }
    ctx->pc = 0x3106C4u;
    // 0x3106c4: 0x0  nop
    ctx->pc = 0x3106c4u;
    // NOP
label_3106c8:
    // 0x3106c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3106c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3106cc:
    // 0x3106cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3106ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3106d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3106d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3106d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3106d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3106d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3106D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3106DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106D8u;
        // 0x3106dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3106D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3106E0u;
    // 0x3106e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3106e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3106e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3106e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3106e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3106e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3106ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3106ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3106f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3106f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3106f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3106f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3106f8: 0xc04be58  jal         func_12F960
    ctx->pc = 0x3106F8u;
    SET_GPR_U32(ctx, 31, 0x310700u);
    ctx->pc = 0x3106FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3106F8u;
    // 0x3106fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F960u, 0x3106F8u, 0x310700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310700u;
label_310700:
    // 0x310700: 0xc05f6c0  jal         func_17DB00
    ctx->pc = 0x310700u;
    SET_GPR_U32(ctx, 31, 0x310708u);
    ctx->pc = 0x310704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310700u;
    // 0x310704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DB00u, 0x310700u, 0x310708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310708u;
label_310708:
    // 0x310708: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x310708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x31070c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x31070cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x310710: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x310710u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x310714: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310714u;
    {
        const bool branch_taken_0x310714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x310714) {
            ctx->pc = 0x310724u;
            goto label_310724;
        }
    }
    ctx->pc = 0x31071Cu;
    // 0x31071c: 0xc0c44bc  jal         func_3112F0
    ctx->pc = 0x31071Cu;
    SET_GPR_U32(ctx, 31, 0x310724u);
    ctx->pc = 0x3112F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3112F0u, 0x31071Cu, 0x310724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310724u;
label_310724:
    // 0x310724: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310728: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x31072c: 0x8c65da40  lw          $a1, -0x25C0($v1)
    ctx->pc = 0x31072cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957632)));
    // 0x310730: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x310730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x310734: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x310734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x310738: 0x90634820  lbu         $v1, 0x4820($v1)
    ctx->pc = 0x310738u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18464)));
    // 0x31073c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31073cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x310740: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x310740u;
    {
        const bool branch_taken_0x310740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x310744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310740u;
        // 0x310744: 0xac85da40  sw          $a1, -0x25C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294957632), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310740) {
            ctx->pc = 0x310750u;
            goto label_310750;
        }
    }
    ctx->pc = 0x310748u;
    // 0x310748: 0x5ca0019b  bgtzl       $a1, . + 4 + (0x19B << 2)
    ctx->pc = 0x310748u;
    {
        const bool branch_taken_0x310748 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x310748) {
            ctx->pc = 0x31074Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310748u;
            // 0x31074c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310DB8u;
            goto label_310db8;
        }
    }
    ctx->pc = 0x310750u;
label_310750:
    // 0x310750: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x310750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x310754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310758: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x310758u;
    SET_GPR_U32(ctx, 31, 0x310760u);
    ctx->pc = 0x31075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310758u;
    // 0x31075c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x310758u, 0x310760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310760u;
label_310760:
    // 0x310760: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x310760u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x310764: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x310764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310768: 0x2610db50  addiu       $s0, $s0, -0x24B0
    ctx->pc = 0x310768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957904));
label_31076c:
    // 0x31076c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310770: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x310770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x310774: 0x9043db10  lbu         $v1, -0x24F0($v0)
    ctx->pc = 0x310774u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x310778: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x310778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31077c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x31077cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x310780: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x310780u;
    {
        const bool branch_taken_0x310780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x310784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310780u;
        // 0x310784: 0xae04004c  sw          $a0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310780) {
            ctx->pc = 0x3107A8u;
            goto label_3107a8;
        }
    }
    ctx->pc = 0x310788u;
    // 0x310788: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31078c: 0x8e030244  lw          $v1, 0x244($s0)
    ctx->pc = 0x31078cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x310790: 0x8442da68  lh          $v0, -0x2598($v0)
    ctx->pc = 0x310790u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957672)));
    // 0x310794: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x310794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x310798: 0xae020244  sw          $v0, 0x244($s0)
    ctx->pc = 0x310798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 2));
    // 0x31079c: 0x82020242  lb          $v0, 0x242($s0)
    ctx->pc = 0x31079cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 578)));
    // 0x3107a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3107a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3107a4: 0xa2020242  sb          $v0, 0x242($s0)
    ctx->pc = 0x3107a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 578), (uint8_t)GPR_U32(ctx, 2));
label_3107a8:
    // 0x3107a8: 0x92130005  lbu         $s3, 0x5($s0)
    ctx->pc = 0x3107a8u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x3107ac: 0xc062948  jal         func_18A520
    ctx->pc = 0x3107ACu;
    SET_GPR_U32(ctx, 31, 0x3107B4u);
    ctx->pc = 0x3107B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3107ACu;
    // 0x3107b0: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x3107ACu, 0x3107B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3107B4u;
label_3107b4:
    // 0x3107b4: 0x12620002  beq         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3107B4u;
    {
        const bool branch_taken_0x3107b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3107b4) {
            ctx->pc = 0x3107C0u;
            goto label_3107c0;
        }
    }
    ctx->pc = 0x3107BCu;
    // 0x3107bc: 0xa2000242  sb          $zero, 0x242($s0)
    ctx->pc = 0x3107bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 578), (uint8_t)GPR_U32(ctx, 0));
label_3107c0:
    // 0x3107c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3107c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3107c4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x3107c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3107c8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3107C8u;
    {
        const bool branch_taken_0x3107c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3107CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107C8u;
        // 0x3107cc: 0x26100248  addiu       $s0, $s0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107c8) {
            ctx->pc = 0x31076Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31076c;
        }
    }
    ctx->pc = 0x3107D0u;
    // 0x3107d0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3107d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3107d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3107d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3107d8: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x3107d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x3107dc: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3107DCu;
    {
        const bool branch_taken_0x3107dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3107dc) {
            ctx->pc = 0x310824u;
            goto label_310824;
        }
    }
    ctx->pc = 0x3107E4u;
    // 0x3107e4: 0xc066e00  jal         func_19B800
    ctx->pc = 0x3107E4u;
    SET_GPR_U32(ctx, 31, 0x3107ECu);
    ctx->pc = 0x3107E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3107E4u;
    // 0x3107e8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B800u, 0x3107E4u, 0x3107ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3107ECu;
label_3107ec:
    // 0x3107ec: 0x3c02402f  lui         $v0, 0x402F
    ctx->pc = 0x3107ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16431 << 16));
    // 0x3107f0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x3107f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3107f4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x3107f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x3107f8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3107f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3107fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3107fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310800: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x310800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x310804: 0xc066e30  jal         func_19B8C0
    ctx->pc = 0x310804u;
    SET_GPR_U32(ctx, 31, 0x31080Cu);
    ctx->pc = 0x310808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310804u;
    // 0x310808: 0x25083618  addiu       $t0, $t0, 0x3618 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8C0u, 0x310804u, 0x31080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31080Cu;
label_31080c:
    // 0x31080c: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x31080cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x310810: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310814: 0xc055768  jal         func_155DA0
    ctx->pc = 0x310814u;
    SET_GPR_U32(ctx, 31, 0x31081Cu);
    ctx->pc = 0x310818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310814u;
    // 0x310818: 0x2484e8c0  addiu       $a0, $a0, -0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x310814u, 0x31081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31081Cu;
label_31081c:
    // 0x31081c: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x31081Cu;
    {
        const bool branch_taken_0x31081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31081c) {
            ctx->pc = 0x310DB4u;
            goto label_310db4;
        }
    }
    ctx->pc = 0x310824u;
label_310824:
    // 0x310824: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x310824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x310828: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x310828u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x31082c: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x31082Cu;
    {
        const bool branch_taken_0x31082c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31082c) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x310834u;
    // 0x310834: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x310834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310838: 0x54450075  bnel        $v0, $a1, . + 4 + (0x75 << 2)
    ctx->pc = 0x310838u;
    {
        const bool branch_taken_0x310838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x310838) {
            ctx->pc = 0x31083Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310838u;
            // 0x31083c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310A10u;
            goto label_310a10;
        }
    }
    ctx->pc = 0x310840u;
    // 0x310840: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310848: 0x9042da50  lbu         $v0, -0x25B0($v0)
    ctx->pc = 0x310848u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957648)));
    // 0x31084c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31084Cu;
    {
        const bool branch_taken_0x31084c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31084c) {
            ctx->pc = 0x310878u;
            goto label_310878;
        }
    }
    ctx->pc = 0x310854u;
    // 0x310854: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310854u;
    {
        const bool branch_taken_0x310854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310854) {
            ctx->pc = 0x310864u;
            goto label_310864;
        }
    }
    ctx->pc = 0x31085Cu;
    // 0x31085c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31085Cu;
    {
        const bool branch_taken_0x31085c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31085c) {
            ctx->pc = 0x310884u;
            goto label_310884;
        }
    }
    ctx->pc = 0x310864u;
label_310864:
    // 0x310864: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310868: 0xc0c4144  jal         func_310510
    ctx->pc = 0x310868u;
    SET_GPR_U32(ctx, 31, 0x310870u);
    ctx->pc = 0x31086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310868u;
    // 0x31086c: 0x2484db50  addiu       $a0, $a0, -0x24B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310510u, 0x310868u, 0x310870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310870u;
label_310870:
    // 0x310870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x310870u;
    {
        const bool branch_taken_0x310870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310870) {
            ctx->pc = 0x310884u;
            goto label_310884;
        }
    }
    ctx->pc = 0x310878u;
label_310878:
    // 0x310878: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x31087c: 0xc0c4144  jal         func_310510
    ctx->pc = 0x31087Cu;
    SET_GPR_U32(ctx, 31, 0x310884u);
    ctx->pc = 0x310880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31087Cu;
    // 0x310880: 0x2484dd98  addiu       $a0, $a0, -0x2268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310510u, 0x31087Cu, 0x310884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310884u;
label_310884:
    // 0x310884: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x310884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x310888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x310888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31088c: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x31088cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x310890: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x310890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_310894:
    // 0x310894: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x310894u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x310898: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310898u;
    {
        const bool branch_taken_0x310898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310898) {
            ctx->pc = 0x3108B0u;
            goto label_3108b0;
        }
    }
    ctx->pc = 0x3108A0u;
    // 0x3108a0: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3108a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3108a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3108a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3108a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3108a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3108ac: 0xa4430154  sh          $v1, 0x154($v0)
    ctx->pc = 0x3108acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 340), (uint16_t)GPR_U32(ctx, 3));
label_3108b0:
    // 0x3108b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3108b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3108b4: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x3108b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3108b8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3108B8u;
    {
        const bool branch_taken_0x3108b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3108BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108B8u;
        // 0x3108bc: 0x24a50248  addiu       $a1, $a1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108b8) {
            ctx->pc = 0x310894u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_310894;
        }
    }
    ctx->pc = 0x3108C0u;
    // 0x3108c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3108c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3108c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3108c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3108c8:
    // 0x3108c8: 0xc062948  jal         func_18A520
    ctx->pc = 0x3108C8u;
    SET_GPR_U32(ctx, 31, 0x3108D0u);
    ctx->pc = 0x3108CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3108C8u;
    // 0x3108cc: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x3108C8u, 0x3108D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3108D0u;
label_3108d0:
    // 0x3108d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3108D0u;
    {
        const bool branch_taken_0x3108d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3108d0) {
            ctx->pc = 0x3108E0u;
            goto label_3108e0;
        }
    }
    ctx->pc = 0x3108D8u;
    // 0x3108d8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3108d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3108dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3108dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3108e0:
    // 0x3108e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3108e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3108e4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x3108e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3108e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3108E8u;
    {
        const bool branch_taken_0x3108e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3108e8) {
            ctx->pc = 0x3108C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3108c8;
        }
    }
    ctx->pc = 0x3108F0u;
    // 0x3108f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3108f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3108f4: 0x12040024  beq         $s0, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3108F4u;
    {
        const bool branch_taken_0x3108f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x3108f4) {
            ctx->pc = 0x310988u;
            goto label_310988;
        }
    }
    ctx->pc = 0x3108FCu;
    // 0x3108fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3108fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310900: 0x5202001a  beql        $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x310900u;
    {
        const bool branch_taken_0x310900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x310900) {
            ctx->pc = 0x310904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310900u;
            // 0x310904: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31096Cu;
            goto label_31096c;
        }
    }
    ctx->pc = 0x310908u;
    // 0x310908: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x310908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31090c: 0x12040010  beq         $s0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31090Cu;
    {
        const bool branch_taken_0x31090c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x31090c) {
            ctx->pc = 0x310950u;
            goto label_310950;
        }
    }
    ctx->pc = 0x310914u;
    // 0x310914: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310914u;
    {
        const bool branch_taken_0x310914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x310914) {
            ctx->pc = 0x310924u;
            goto label_310924;
        }
    }
    ctx->pc = 0x31091Cu;
    // 0x31091c: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x31091Cu;
    {
        const bool branch_taken_0x31091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31091c) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x310924u;
label_310924:
    // 0x310924: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310928: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x310928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x31092c: 0x8043da00  lb          $v1, -0x2600($v0)
    ctx->pc = 0x31092cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957568)));
    // 0x310930: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310934: 0x2484e8d0  addiu       $a0, $a0, -0x1730
    ctx->pc = 0x310934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961360));
    // 0x310938: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31093c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31093cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310940: 0xc055768  jal         func_155DA0
    ctx->pc = 0x310940u;
    SET_GPR_U32(ctx, 31, 0x310948u);
    ctx->pc = 0x310944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310940u;
    // 0x310944: 0xa043da00  sb          $v1, -0x2600($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957568), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x310940u, 0x310948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310948u;
label_310948:
    // 0x310948: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x310948u;
    {
        const bool branch_taken_0x310948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310948) {
            ctx->pc = 0x310DB4u;
            goto label_310db4;
        }
    }
    ctx->pc = 0x310950u;
label_310950:
    // 0x310950: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310954: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310958: 0xa040db56  sb          $zero, -0x24AA($v0)
    ctx->pc = 0x310958u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957910), (uint8_t)GPR_U32(ctx, 0));
    // 0x31095c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310960: 0xa064dd9e  sb          $a0, -0x2262($v1)
    ctx->pc = 0x310960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294958494), (uint8_t)GPR_U32(ctx, 4));
    // 0x310964: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x310964u;
    {
        const bool branch_taken_0x310964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310964u;
        // 0x310968: 0xa044da50  sb          $a0, -0x25B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310964) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x31096Cu;
label_31096c:
    // 0x31096c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31096cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310970: 0xa043db56  sb          $v1, -0x24AA($v0)
    ctx->pc = 0x310970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957910), (uint8_t)GPR_U32(ctx, 3));
    // 0x310974: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310978: 0xa040dd9e  sb          $zero, -0x2262($v0)
    ctx->pc = 0x310978u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958494), (uint8_t)GPR_U32(ctx, 0));
    // 0x31097c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310980: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x310980u;
    {
        const bool branch_taken_0x310980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310980u;
        // 0x310984: 0xa040da50  sb          $zero, -0x25B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310980) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x310988u;
label_310988:
    // 0x310988: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31098c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x31098cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x310990: 0x8042da00  lb          $v0, -0x2600($v0)
    ctx->pc = 0x310990u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957568)));
    // 0x310994: 0x10490017  beq         $v0, $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x310994u;
    {
        const bool branch_taken_0x310994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x310994) {
            ctx->pc = 0x3109F4u;
            goto label_3109f4;
        }
    }
    ctx->pc = 0x31099Cu;
    // 0x31099c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3109a0: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x3109a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x3109a4: 0x9048db53  lbu         $t0, -0x24AD($v0)
    ctx->pc = 0x3109a4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957907)));
    // 0x3109a8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x3109a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x3109ac: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x3109acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x3109b0: 0x24e7dca4  addiu       $a3, $a3, -0x235C
    ctx->pc = 0x3109b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958244));
    // 0x3109b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3109b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3109b8: 0x24c6deec  addiu       $a2, $a2, -0x2114
    ctx->pc = 0x3109b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958828));
    // 0x3109bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3109bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3109c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3109c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3109c4: 0xa049da00  sb          $t1, -0x2600($v0)
    ctx->pc = 0x3109c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957568), (uint8_t)GPR_U32(ctx, 9));
    // 0x3109c8: 0x2484e8d0  addiu       $a0, $a0, -0x1730
    ctx->pc = 0x3109c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961360));
    // 0x3109cc: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x3109ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x3109d0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3109d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3109d4: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x3109d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3109d8: 0x9062dd9b  lbu         $v0, -0x2265($v1)
    ctx->pc = 0x3109d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958491)));
    // 0x3109dc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3109dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3109e0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3109e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3109e4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x3109E4u;
    SET_GPR_U32(ctx, 31, 0x3109ECu);
    ctx->pc = 0x3109E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3109E4u;
    // 0x3109e8: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x3109E4u, 0x3109ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3109ECu;
label_3109ec:
    // 0x3109ec: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x3109ECu;
    {
        const bool branch_taken_0x3109ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3109ec) {
            ctx->pc = 0x310DB4u;
            goto label_310db4;
        }
    }
    ctx->pc = 0x3109F4u;
label_3109f4:
    // 0x3109f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3109f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3109f8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3109f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3109fc: 0xa040db56  sb          $zero, -0x24AA($v0)
    ctx->pc = 0x3109fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957910), (uint8_t)GPR_U32(ctx, 0));
    // 0x310a00: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310a04: 0xa060dd9e  sb          $zero, -0x2262($v1)
    ctx->pc = 0x310a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294958494), (uint8_t)GPR_U32(ctx, 0));
    // 0x310a08: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x310A08u;
    {
        const bool branch_taken_0x310a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A08u;
        // 0x310a0c: 0xa044da50  sb          $a0, -0x25B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a08) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x310A10u;
label_310a10:
    // 0x310a10: 0x14440087  bne         $v0, $a0, . + 4 + (0x87 << 2)
    ctx->pc = 0x310A10u;
    {
        const bool branch_taken_0x310a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x310a10) {
            ctx->pc = 0x310C30u;
            goto label_310c30;
        }
    }
    ctx->pc = 0x310A18u;
    // 0x310a18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310a1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x310a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310a20: 0x9042da50  lbu         $v0, -0x25B0($v0)
    ctx->pc = 0x310a20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957648)));
    // 0x310a24: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x310A24u;
    {
        const bool branch_taken_0x310a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x310a24) {
            ctx->pc = 0x310A9Cu;
            goto label_310a9c;
        }
    }
    ctx->pc = 0x310A2Cu;
    // 0x310a2c: 0x1045001b  beq         $v0, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x310A2Cu;
    {
        const bool branch_taken_0x310a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x310a2c) {
            ctx->pc = 0x310A9Cu;
            goto label_310a9c;
        }
    }
    ctx->pc = 0x310A34u;
    // 0x310a34: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x310A34u;
    {
        const bool branch_taken_0x310a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x310a34) {
            ctx->pc = 0x310A74u;
            goto label_310a74;
        }
    }
    ctx->pc = 0x310A3Cu;
    // 0x310a3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310A3Cu;
    {
        const bool branch_taken_0x310a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310a3c) {
            ctx->pc = 0x310A4Cu;
            goto label_310a4c;
        }
    }
    ctx->pc = 0x310A44u;
    // 0x310a44: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x310A44u;
    {
        const bool branch_taken_0x310a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310a44) {
            ctx->pc = 0x310AC4u;
            goto label_310ac4;
        }
    }
    ctx->pc = 0x310A4Cu;
label_310a4c:
    // 0x310a4c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310a50: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310a54: 0x9063db7c  lbu         $v1, -0x2484($v1)
    ctx->pc = 0x310a54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957948)));
    // 0x310a58: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310a5c: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x310a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x310a60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310a64: 0xc0c4144  jal         func_310510
    ctx->pc = 0x310A64u;
    SET_GPR_U32(ctx, 31, 0x310A6Cu);
    ctx->pc = 0x310A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310A64u;
    // 0x310a68: 0xa043db7c  sb          $v1, -0x2484($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957948), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310510u, 0x310A64u, 0x310A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310A6Cu;
label_310a6c:
    // 0x310a6c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x310A6Cu;
    {
        const bool branch_taken_0x310a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310a6c) {
            ctx->pc = 0x310AC4u;
            goto label_310ac4;
        }
    }
    ctx->pc = 0x310A74u;
label_310a74:
    // 0x310a74: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310a78: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310a7c: 0x9063ddc4  lbu         $v1, -0x223C($v1)
    ctx->pc = 0x310a7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958532)));
    // 0x310a80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310a84: 0x2484dd98  addiu       $a0, $a0, -0x2268
    ctx->pc = 0x310a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958488));
    // 0x310a88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310a8c: 0xc0c4144  jal         func_310510
    ctx->pc = 0x310A8Cu;
    SET_GPR_U32(ctx, 31, 0x310A94u);
    ctx->pc = 0x310A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310A8Cu;
    // 0x310a90: 0xa043ddc4  sb          $v1, -0x223C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958532), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310510u, 0x310A8Cu, 0x310A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310A94u;
label_310a94:
    // 0x310a94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x310A94u;
    {
        const bool branch_taken_0x310a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310a94) {
            ctx->pc = 0x310AC4u;
            goto label_310ac4;
        }
    }
    ctx->pc = 0x310A9Cu;
label_310a9c:
    // 0x310a9c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310aa0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310aa4: 0x9045db7c  lbu         $a1, -0x2484($v0)
    ctx->pc = 0x310aa4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957948)));
    // 0x310aa8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310aac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x310aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x310ab0: 0x9044ddc4  lbu         $a0, -0x223C($v0)
    ctx->pc = 0x310ab0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958532)));
    // 0x310ab4: 0xa065db7c  sb          $a1, -0x2484($v1)
    ctx->pc = 0x310ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957948), (uint8_t)GPR_U32(ctx, 5));
    // 0x310ab8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310abc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x310abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x310ac0: 0xa043ddc4  sb          $v1, -0x223C($v0)
    ctx->pc = 0x310ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958532), (uint8_t)GPR_U32(ctx, 3));
label_310ac4:
    // 0x310ac4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x310ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x310ac8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x310ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x310acc: 0x9043f35d  lbu         $v1, -0xCA3($v0)
    ctx->pc = 0x310accu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964061)));
    // 0x310ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x310ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x310ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ad8: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x310ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
label_310adc:
    // 0x310adc: 0x90c2002c  lbu         $v0, 0x2C($a2)
    ctx->pc = 0x310adcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x310ae0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x310ae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x310ae4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x310AE4u;
    {
        const bool branch_taken_0x310ae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310ae4) {
            ctx->pc = 0x310AF8u;
            goto label_310af8;
        }
    }
    ctx->pc = 0x310AECu;
    // 0x310aec: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x310aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x310af0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x310af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x310af4: 0x0  nop
    ctx->pc = 0x310af4u;
    // NOP
label_310af8:
    // 0x310af8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x310af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x310afc: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x310afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x310b00: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x310B00u;
    {
        const bool branch_taken_0x310b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B00u;
        // 0x310b04: 0x24c60248  addiu       $a2, $a2, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b00) {
            ctx->pc = 0x310ADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_310adc;
        }
    }
    ctx->pc = 0x310B08u;
    // 0x310b08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x310b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310b0c: 0x54a2000e  bnel        $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x310B0Cu;
    {
        const bool branch_taken_0x310b0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x310b0c) {
            ctx->pc = 0x310B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310B0Cu;
            // 0x310b10: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310B48u;
            goto label_310b48;
        }
    }
    ctx->pc = 0x310B14u;
    // 0x310b14: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310b18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310b1c: 0x9063ddc4  lbu         $v1, -0x223C($v1)
    ctx->pc = 0x310b1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294958532)));
    // 0x310b20: 0x9042db7c  lbu         $v0, -0x2484($v0)
    ctx->pc = 0x310b20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957948)));
    // 0x310b24: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x310b24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x310b28: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x310B28u;
    {
        const bool branch_taken_0x310b28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b28) {
            ctx->pc = 0x310B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310B28u;
            // 0x310b2c: 0x43082a  slt         $at, $v0, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x310B38u;
            goto label_310b38;
        }
    }
    ctx->pc = 0x310B30u;
    // 0x310b30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x310b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310b34: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x310b34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_310b38:
    // 0x310b38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x310B38u;
    {
        const bool branch_taken_0x310b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b38) {
            ctx->pc = 0x310B44u;
            goto label_310b44;
        }
    }
    ctx->pc = 0x310B40u;
    // 0x310b40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x310b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_310b44:
    // 0x310b44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x310b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_310b48:
    // 0x310b48: 0x10a40025  beq         $a1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x310B48u;
    {
        const bool branch_taken_0x310b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x310b48) {
            ctx->pc = 0x310BE0u;
            goto label_310be0;
        }
    }
    ctx->pc = 0x310B50u;
    // 0x310b50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x310b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310b54: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x310B54u;
    {
        const bool branch_taken_0x310b54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x310b54) {
            ctx->pc = 0x310BC0u;
            goto label_310bc0;
        }
    }
    ctx->pc = 0x310B5Cu;
    // 0x310b5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x310b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310b60: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x310B60u;
    {
        const bool branch_taken_0x310b60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x310b60) {
            ctx->pc = 0x310BA4u;
            goto label_310ba4;
        }
    }
    ctx->pc = 0x310B68u;
    // 0x310b68: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x310B68u;
    {
        const bool branch_taken_0x310b68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b68) {
            ctx->pc = 0x310B78u;
            goto label_310b78;
        }
    }
    ctx->pc = 0x310B70u;
    // 0x310b70: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x310B70u;
    {
        const bool branch_taken_0x310b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b70) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x310B78u;
label_310b78:
    // 0x310b78: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310b7c: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x310b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x310b80: 0x8043da00  lb          $v1, -0x2600($v0)
    ctx->pc = 0x310b80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957568)));
    // 0x310b84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310b88: 0x2484e8d0  addiu       $a0, $a0, -0x1730
    ctx->pc = 0x310b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961360));
    // 0x310b8c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310b90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310b94: 0xc055768  jal         func_155DA0
    ctx->pc = 0x310B94u;
    SET_GPR_U32(ctx, 31, 0x310B9Cu);
    ctx->pc = 0x310B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B94u;
    // 0x310b98: 0xa043da00  sb          $v1, -0x2600($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957568), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x310B94u, 0x310B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B9Cu;
label_310b9c:
    // 0x310b9c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x310B9Cu;
    {
        const bool branch_taken_0x310b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b9c) {
            ctx->pc = 0x310DB4u;
            goto label_310db4;
        }
    }
    ctx->pc = 0x310BA4u;
label_310ba4:
    // 0x310ba4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310ba8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310bac: 0xa044db56  sb          $a0, -0x24AA($v0)
    ctx->pc = 0x310bacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957910), (uint8_t)GPR_U32(ctx, 4));
    // 0x310bb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310bb4: 0xa060dd9e  sb          $zero, -0x2262($v1)
    ctx->pc = 0x310bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294958494), (uint8_t)GPR_U32(ctx, 0));
    // 0x310bb8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x310BB8u;
    {
        const bool branch_taken_0x310bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BB8u;
        // 0x310bbc: 0xa040da50  sb          $zero, -0x25B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bb8) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x310BC0u;
label_310bc0:
    // 0x310bc0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310bc8: 0xa040db56  sb          $zero, -0x24AA($v0)
    ctx->pc = 0x310bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957910), (uint8_t)GPR_U32(ctx, 0));
    // 0x310bcc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310bd0: 0xa043dd9e  sb          $v1, -0x2262($v0)
    ctx->pc = 0x310bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958494), (uint8_t)GPR_U32(ctx, 3));
    // 0x310bd4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310bd8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x310BD8u;
    {
        const bool branch_taken_0x310bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BD8u;
        // 0x310bdc: 0xa043da50  sb          $v1, -0x25B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bd8) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x310BE0u;
label_310be0:
    // 0x310be0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310be4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x310be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x310be8: 0x8042da00  lb          $v0, -0x2600($v0)
    ctx->pc = 0x310be8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957568)));
    // 0x310bec: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x310BECu;
    {
        const bool branch_taken_0x310bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x310bec) {
            ctx->pc = 0x310C14u;
            goto label_310c14;
        }
    }
    ctx->pc = 0x310BF4u;
    // 0x310bf4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310bf8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x310bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x310bfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310c00: 0xa043da00  sb          $v1, -0x2600($v0)
    ctx->pc = 0x310c00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957568), (uint8_t)GPR_U32(ctx, 3));
    // 0x310c04: 0xc055768  jal         func_155DA0
    ctx->pc = 0x310C04u;
    SET_GPR_U32(ctx, 31, 0x310C0Cu);
    ctx->pc = 0x310C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310C04u;
    // 0x310c08: 0x2484e8d0  addiu       $a0, $a0, -0x1730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x310C04u, 0x310C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310C0Cu;
label_310c0c:
    // 0x310c0c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x310C0Cu;
    {
        const bool branch_taken_0x310c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c0c) {
            ctx->pc = 0x310DB4u;
            goto label_310db4;
        }
    }
    ctx->pc = 0x310C14u;
label_310c14:
    // 0x310c14: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310c18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310c1c: 0xa040db56  sb          $zero, -0x24AA($v0)
    ctx->pc = 0x310c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957910), (uint8_t)GPR_U32(ctx, 0));
    // 0x310c20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310c24: 0xa060dd9e  sb          $zero, -0x2262($v1)
    ctx->pc = 0x310c24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294958494), (uint8_t)GPR_U32(ctx, 0));
    // 0x310c28: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x310C28u;
    {
        const bool branch_taken_0x310c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C28u;
        // 0x310c2c: 0xa044da50  sb          $a0, -0x25B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c28) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x310C30u;
label_310c30:
    // 0x310c30: 0xc062870  jal         func_18A1C0
    ctx->pc = 0x310C30u;
    SET_GPR_U32(ctx, 31, 0x310C38u);
    ctx->pc = 0x18A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1C0u, 0x310C30u, 0x310C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310C38u;
label_310c38:
    // 0x310c38: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x310c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x310c3c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310c40: 0x9043da50  lbu         $v1, -0x25B0($v0)
    ctx->pc = 0x310c40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957648)));
    // 0x310c44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x310c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310c48: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x310C48u;
    {
        const bool branch_taken_0x310c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x310c48) {
            ctx->pc = 0x310D18u;
            goto label_310d18;
        }
    }
    ctx->pc = 0x310C50u;
    // 0x310c50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x310c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310c54: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x310C54u;
    {
        const bool branch_taken_0x310c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x310c54) {
            ctx->pc = 0x310D18u;
            goto label_310d18;
        }
    }
    ctx->pc = 0x310C5Cu;
    // 0x310c5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x310c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310c60: 0x50640019  beql        $v1, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x310C60u;
    {
        const bool branch_taken_0x310c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x310c60) {
            ctx->pc = 0x310C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310C60u;
            // 0x310c64: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x310CC8u;
            goto label_310cc8;
        }
    }
    ctx->pc = 0x310C68u;
    // 0x310c68: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x310C68u;
    {
        const bool branch_taken_0x310c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c68) {
            ctx->pc = 0x310C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310C68u;
            // 0x310c6c: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x310C78u;
            goto label_310c78;
        }
    }
    ctx->pc = 0x310C70u;
    // 0x310c70: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x310C70u;
    {
        const bool branch_taken_0x310c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c70) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x310C78u;
label_310c78:
    // 0x310c78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x310c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x310c7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x310C7Cu;
    {
        const bool branch_taken_0x310c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c7c) {
            ctx->pc = 0x310CA0u;
            goto label_310ca0;
        }
    }
    ctx->pc = 0x310C84u;
    // 0x310c84: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310c88: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310c8c: 0xa044db56  sb          $a0, -0x24AA($v0)
    ctx->pc = 0x310c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957910), (uint8_t)GPR_U32(ctx, 4));
    // 0x310c90: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310c94: 0xa060dd9e  sb          $zero, -0x2262($v1)
    ctx->pc = 0x310c94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294958494), (uint8_t)GPR_U32(ctx, 0));
    // 0x310c98: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x310C98u;
    {
        const bool branch_taken_0x310c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C98u;
        // 0x310c9c: 0xa040da50  sb          $zero, -0x25B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c98) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x310CA0u;
label_310ca0:
    // 0x310ca0: 0xc0d09dc  jal         func_342770
    ctx->pc = 0x310CA0u;
    SET_GPR_U32(ctx, 31, 0x310CA8u);
    ctx->pc = 0x342770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342770u, 0x310CA0u, 0x310CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CA8u;
label_310ca8:
    // 0x310ca8: 0xc0c418c  jal         func_310630
    ctx->pc = 0x310CA8u;
    SET_GPR_U32(ctx, 31, 0x310CB0u);
    ctx->pc = 0x310CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CA8u;
    // 0x310cac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310630u;
    goto label_310630;
    ctx->pc = 0x310CB0u;
label_310cb0:
    // 0x310cb0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x310cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x310cb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310cb8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x310CB8u;
    SET_GPR_U32(ctx, 31, 0x310CC0u);
    ctx->pc = 0x310CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CB8u;
    // 0x310cbc: 0x2484e8d0  addiu       $a0, $a0, -0x1730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x310CB8u, 0x310CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CC0u;
label_310cc0:
    // 0x310cc0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x310CC0u;
    {
        const bool branch_taken_0x310cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310cc0) {
            ctx->pc = 0x310DB4u;
            goto label_310db4;
        }
    }
    ctx->pc = 0x310CC8u;
label_310cc8:
    // 0x310cc8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x310cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x310ccc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x310CCCu;
    {
        const bool branch_taken_0x310ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310ccc) {
            ctx->pc = 0x310CF0u;
            goto label_310cf0;
        }
    }
    ctx->pc = 0x310CD4u;
    // 0x310cd4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310cd8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310cdc: 0xa040db56  sb          $zero, -0x24AA($v0)
    ctx->pc = 0x310cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957910), (uint8_t)GPR_U32(ctx, 0));
    // 0x310ce0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310ce4: 0xa064dd9e  sb          $a0, -0x2262($v1)
    ctx->pc = 0x310ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294958494), (uint8_t)GPR_U32(ctx, 4));
    // 0x310ce8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x310CE8u;
    {
        const bool branch_taken_0x310ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CE8u;
        // 0x310cec: 0xa044da50  sb          $a0, -0x25B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ce8) {
            ctx->pc = 0x310D34u;
            goto label_310d34;
        }
    }
    ctx->pc = 0x310CF0u;
label_310cf0:
    // 0x310cf0: 0xc0d09dc  jal         func_342770
    ctx->pc = 0x310CF0u;
    SET_GPR_U32(ctx, 31, 0x310CF8u);
    ctx->pc = 0x342770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342770u, 0x310CF0u, 0x310CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CF8u;
label_310cf8:
    // 0x310cf8: 0xc0c418c  jal         func_310630
    ctx->pc = 0x310CF8u;
    SET_GPR_U32(ctx, 31, 0x310D00u);
    ctx->pc = 0x310CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CF8u;
    // 0x310cfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310630u;
    goto label_310630;
    ctx->pc = 0x310D00u;
label_310d00:
    // 0x310d00: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x310d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x310d04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310d08: 0xc055768  jal         func_155DA0
    ctx->pc = 0x310D08u;
    SET_GPR_U32(ctx, 31, 0x310D10u);
    ctx->pc = 0x310D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310D08u;
    // 0x310d0c: 0x2484e8d0  addiu       $a0, $a0, -0x1730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x310D08u, 0x310D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310D10u;
label_310d10:
    // 0x310d10: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x310D10u;
    {
        const bool branch_taken_0x310d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d10) {
            ctx->pc = 0x310DB4u;
            goto label_310db4;
        }
    }
    ctx->pc = 0x310D18u;
label_310d18:
    // 0x310d18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x310d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x310d1c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310d20: 0xa060db56  sb          $zero, -0x24AA($v1)
    ctx->pc = 0x310d20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957910), (uint8_t)GPR_U32(ctx, 0));
    // 0x310d24: 0xa040dd9e  sb          $zero, -0x2262($v0)
    ctx->pc = 0x310d24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958494), (uint8_t)GPR_U32(ctx, 0));
    // 0x310d28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x310d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310d2c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310d30: 0xa043da50  sb          $v1, -0x25B0($v0)
    ctx->pc = 0x310d30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957648), (uint8_t)GPR_U32(ctx, 3));
label_310d34:
    // 0x310d34: 0xc062870  jal         func_18A1C0
    ctx->pc = 0x310D34u;
    SET_GPR_U32(ctx, 31, 0x310D3Cu);
    ctx->pc = 0x18A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1C0u, 0x310D34u, 0x310D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310D3Cu;
label_310d3c:
    // 0x310d3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x310d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x310d40: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x310D40u;
    {
        const bool branch_taken_0x310d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d40) {
            ctx->pc = 0x310D9Cu;
            goto label_310d9c;
        }
    }
    ctx->pc = 0x310D48u;
    // 0x310d48: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x310d48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x310d4c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x310d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x310d50: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x310D50u;
    {
        const bool branch_taken_0x310d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d50) {
            ctx->pc = 0x310D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310D50u;
            // 0x310d54: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x310D74u;
            goto label_310d74;
        }
    }
    ctx->pc = 0x310D58u;
    // 0x310d58: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310d5c: 0x9042dd9e  lbu         $v0, -0x2262($v0)
    ctx->pc = 0x310d5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958494)));
    // 0x310d60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310D60u;
    {
        const bool branch_taken_0x310d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d60) {
            ctx->pc = 0x310D70u;
            goto label_310d70;
        }
    }
    ctx->pc = 0x310D68u;
    // 0x310d68: 0xc0c418c  jal         func_310630
    ctx->pc = 0x310D68u;
    SET_GPR_U32(ctx, 31, 0x310D70u);
    ctx->pc = 0x310D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310D68u;
    // 0x310d6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310630u;
    goto label_310630;
    ctx->pc = 0x310D70u;
label_310d70:
    // 0x310d70: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x310d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_310d74:
    // 0x310d74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310D74u;
    {
        const bool branch_taken_0x310d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d74) {
            ctx->pc = 0x310D94u;
            goto label_310d94;
        }
    }
    ctx->pc = 0x310D7Cu;
    // 0x310d7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310d80: 0x9042db56  lbu         $v0, -0x24AA($v0)
    ctx->pc = 0x310d80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957910)));
    // 0x310d84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310D84u;
    {
        const bool branch_taken_0x310d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d84) {
            ctx->pc = 0x310D94u;
            goto label_310d94;
        }
    }
    ctx->pc = 0x310D8Cu;
    // 0x310d8c: 0xc0c418c  jal         func_310630
    ctx->pc = 0x310D8Cu;
    SET_GPR_U32(ctx, 31, 0x310D94u);
    ctx->pc = 0x310D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310D8Cu;
    // 0x310d90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310630u;
    goto label_310630;
    ctx->pc = 0x310D94u;
label_310d94:
    // 0x310d94: 0xc067468  jal         func_19D1A0
    ctx->pc = 0x310D94u;
    SET_GPR_U32(ctx, 31, 0x310D9Cu);
    ctx->pc = 0x19D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1A0u, 0x310D94u, 0x310D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310D9Cu;
label_310d9c:
    // 0x310d9c: 0xc067494  jal         func_19D250
    ctx->pc = 0x310D9Cu;
    SET_GPR_U32(ctx, 31, 0x310DA4u);
    ctx->pc = 0x19D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D250u, 0x310D9Cu, 0x310DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310DA4u;
label_310da4:
    // 0x310da4: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x310da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x310da8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310dac: 0xc055768  jal         func_155DA0
    ctx->pc = 0x310DACu;
    SET_GPR_U32(ctx, 31, 0x310DB4u);
    ctx->pc = 0x310DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310DACu;
    // 0x310db0: 0x24840dd0  addiu       $a0, $a0, 0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x310DACu, 0x310DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310DB4u;
label_310db4:
    // 0x310db4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x310db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_310db8:
    // 0x310db8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x310db8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x310dbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x310dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x310DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DC8u;
        // 0x310dcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310DD0u;
    // 0x310dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310dd4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x310dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x310dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310ddc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x310ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x310de0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x310de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x310de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x310de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x310de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310dec: 0xa043d9d0  sb          $v1, -0x2630($v0)
    ctx->pc = 0x310decu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 3));
    // 0x310df0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x310df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310df4: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x310DF4u;
    SET_GPR_U32(ctx, 31, 0x310DFCu);
    ctx->pc = 0x310DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310DF4u;
    // 0x310df8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x310DF4u, 0x310DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310DFCu;
label_310dfc:
    // 0x310dfc: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x310dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x310e00: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x310e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x310e04: 0x8c65d910  lw          $a1, -0x26F0($v1)
    ctx->pc = 0x310e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957328)));
    // 0x310e08: 0x50a4009b  beql        $a1, $a0, . + 4 + (0x9B << 2)
    ctx->pc = 0x310E08u;
    {
        const bool branch_taken_0x310e08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x310e08) {
            ctx->pc = 0x310E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310E08u;
            // 0x310e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311078u;
            goto label_311078;
        }
    }
    ctx->pc = 0x310E10u;
    // 0x310e10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x310e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310e14: 0x10a3004f  beq         $a1, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x310E14u;
    {
        const bool branch_taken_0x310e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x310e14) {
            ctx->pc = 0x310F54u;
            goto label_310f54;
        }
    }
    ctx->pc = 0x310E1Cu;
    // 0x310e1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x310e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310e20: 0x10a30028  beq         $a1, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x310E20u;
    {
        const bool branch_taken_0x310e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x310e20) {
            ctx->pc = 0x310EC4u;
            goto label_310ec4;
        }
    }
    ctx->pc = 0x310E28u;
    // 0x310e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310e2c: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x310E2Cu;
    {
        const bool branch_taken_0x310e2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x310e2c) {
            ctx->pc = 0x310E6Cu;
            goto label_310e6c;
        }
    }
    ctx->pc = 0x310E34u;
    // 0x310e34: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x310E34u;
    {
        const bool branch_taken_0x310e34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x310e34) {
            ctx->pc = 0x310E44u;
            goto label_310e44;
        }
    }
    ctx->pc = 0x310E3Cu;
    // 0x310e3c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x310E3Cu;
    {
        const bool branch_taken_0x310e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E3Cu;
        // 0x310e40: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e3c) {
            ctx->pc = 0x311084u;
            goto label_311084;
        }
    }
    ctx->pc = 0x310E44u;
label_310e44:
    // 0x310e44: 0xc055650  jal         func_155940
    ctx->pc = 0x310E44u;
    SET_GPR_U32(ctx, 31, 0x310E4Cu);
    ctx->pc = 0x155940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155940u, 0x310E44u, 0x310E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E4Cu;
label_310e4c:
    // 0x310e4c: 0xc058f80  jal         func_163E00
    ctx->pc = 0x310E4Cu;
    SET_GPR_U32(ctx, 31, 0x310E54u);
    ctx->pc = 0x163E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163E00u, 0x310E4Cu, 0x310E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E54u;
label_310e54:
    // 0x310e54: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x310e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x310e58: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x310e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x310e5c: 0x8c84d910  lw          $a0, -0x26F0($a0)
    ctx->pc = 0x310e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957328)));
    // 0x310e60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x310e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x310e64: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x310E64u;
    {
        const bool branch_taken_0x310e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E64u;
        // 0x310e68: 0xac64d910  sw          $a0, -0x26F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957328), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e64) {
            ctx->pc = 0x311080u;
            goto label_311080;
        }
    }
    ctx->pc = 0x310E6Cu;
label_310e6c:
    // 0x310e6c: 0xc0c8a9c  jal         func_322A70
    ctx->pc = 0x310E6Cu;
    SET_GPR_U32(ctx, 31, 0x310E74u);
    ctx->pc = 0x322A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A70u, 0x310E6Cu, 0x310E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E74u;
label_310e74:
    // 0x310e74: 0xc05fa50  jal         func_17E940
    ctx->pc = 0x310E74u;
    SET_GPR_U32(ctx, 31, 0x310E7Cu);
    ctx->pc = 0x17E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E940u, 0x310E74u, 0x310E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E7Cu;
label_310e7c:
    // 0x310e7c: 0xc05f6ec  jal         func_17DBB0
    ctx->pc = 0x310E7Cu;
    SET_GPR_U32(ctx, 31, 0x310E84u);
    ctx->pc = 0x17DBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DBB0u, 0x310E7Cu, 0x310E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E84u;
label_310e84:
    // 0x310e84: 0xc057114  jal         func_15C450
    ctx->pc = 0x310E84u;
    SET_GPR_U32(ctx, 31, 0x310E8Cu);
    ctx->pc = 0x15C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C450u, 0x310E84u, 0x310E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E8Cu;
label_310e8c:
    // 0x310e8c: 0xc063c7c  jal         func_18F1F0
    ctx->pc = 0x310E8Cu;
    SET_GPR_U32(ctx, 31, 0x310E94u);
    ctx->pc = 0x310E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310E8Cu;
    // 0x310e90: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1F0u, 0x310E8Cu, 0x310E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E94u;
label_310e94:
    // 0x310e94: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x310e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x310e98: 0xc063d08  jal         func_18F420
    ctx->pc = 0x310E98u;
    SET_GPR_U32(ctx, 31, 0x310EA0u);
    ctx->pc = 0x310E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310E98u;
    // 0x310e9c: 0x24841d10  addiu       $a0, $a0, 0x1D10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x310E98u, 0x310EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310EA0u;
label_310ea0:
    // 0x310ea0: 0x3c0401d1  lui         $a0, 0x1D1
    ctx->pc = 0x310ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
    // 0x310ea4: 0xc063d08  jal         func_18F420
    ctx->pc = 0x310EA4u;
    SET_GPR_U32(ctx, 31, 0x310EACu);
    ctx->pc = 0x310EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310EA4u;
    // 0x310ea8: 0x24841508  addiu       $a0, $a0, 0x1508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x310EA4u, 0x310EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310EACu;
label_310eac:
    // 0x310eac: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x310eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x310eb0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x310eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x310eb4: 0x8c84d910  lw          $a0, -0x26F0($a0)
    ctx->pc = 0x310eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957328)));
    // 0x310eb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x310eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x310ebc: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x310EBCu;
    {
        const bool branch_taken_0x310ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EBCu;
        // 0x310ec0: 0xac64d910  sw          $a0, -0x26F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957328), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ebc) {
            ctx->pc = 0x311080u;
            goto label_311080;
        }
    }
    ctx->pc = 0x310EC4u;
label_310ec4:
    // 0x310ec4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x310ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ecc: 0xc0c449c  jal         func_311270
    ctx->pc = 0x310ECCu;
    SET_GPR_U32(ctx, 31, 0x310ED4u);
    ctx->pc = 0x310ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310ECCu;
    // 0x310ed0: 0x2484dc9c  addiu       $a0, $a0, -0x2364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x310ECCu, 0x310ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310ED4u;
label_310ed4:
    // 0x310ed4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310ed8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x310ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310edc: 0xc0c449c  jal         func_311270
    ctx->pc = 0x310EDCu;
    SET_GPR_U32(ctx, 31, 0x310EE4u);
    ctx->pc = 0x310EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310EDCu;
    // 0x310ee0: 0x2484dcbc  addiu       $a0, $a0, -0x2344 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x310EDCu, 0x310EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310EE4u;
label_310ee4:
    // 0x310ee4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310ee8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x310ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310eec: 0xc0c449c  jal         func_311270
    ctx->pc = 0x310EECu;
    SET_GPR_U32(ctx, 31, 0x310EF4u);
    ctx->pc = 0x310EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310EECu;
    // 0x310ef0: 0x2484dcdc  addiu       $a0, $a0, -0x2324 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x310EECu, 0x310EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310EF4u;
label_310ef4:
    // 0x310ef4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310ef8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x310ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310efc: 0xc0c449c  jal         func_311270
    ctx->pc = 0x310EFCu;
    SET_GPR_U32(ctx, 31, 0x310F04u);
    ctx->pc = 0x310F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310EFCu;
    // 0x310f00: 0x2484dee4  addiu       $a0, $a0, -0x211C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x310EFCu, 0x310F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F04u;
label_310f04:
    // 0x310f04: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310f08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x310f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x310f0c: 0xc0c449c  jal         func_311270
    ctx->pc = 0x310F0Cu;
    SET_GPR_U32(ctx, 31, 0x310F14u);
    ctx->pc = 0x310F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F0Cu;
    // 0x310f10: 0x2484df04  addiu       $a0, $a0, -0x20FC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958852));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x310F0Cu, 0x310F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F14u;
label_310f14:
    // 0x310f14: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x310f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x310f18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x310f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x310f1c: 0xc0c449c  jal         func_311270
    ctx->pc = 0x310F1Cu;
    SET_GPR_U32(ctx, 31, 0x310F24u);
    ctx->pc = 0x310F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F1Cu;
    // 0x310f20: 0x2484df24  addiu       $a0, $a0, -0x20DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958884));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x310F1Cu, 0x310F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F24u;
label_310f24:
    // 0x310f24: 0xc0cb474  jal         func_32D1D0
    ctx->pc = 0x310F24u;
    SET_GPR_U32(ctx, 31, 0x310F2Cu);
    ctx->pc = 0x32D1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D1D0u, 0x310F24u, 0x310F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F2Cu;
label_310f2c:
    // 0x310f2c: 0xc063cf8  jal         func_18F3E0
    ctx->pc = 0x310F2Cu;
    SET_GPR_U32(ctx, 31, 0x310F34u);
    ctx->pc = 0x18F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F3E0u, 0x310F2Cu, 0x310F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F34u;
label_310f34:
    // 0x310f34: 0xc063c7c  jal         func_18F1F0
    ctx->pc = 0x310F34u;
    SET_GPR_U32(ctx, 31, 0x310F3Cu);
    ctx->pc = 0x310F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F34u;
    // 0x310f38: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1F0u, 0x310F34u, 0x310F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F3Cu;
label_310f3c:
    // 0x310f3c: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x310f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x310f40: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x310f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x310f44: 0x8c84d910  lw          $a0, -0x26F0($a0)
    ctx->pc = 0x310f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957328)));
    // 0x310f48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x310f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x310f4c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x310F4Cu;
    {
        const bool branch_taken_0x310f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F4Cu;
        // 0x310f50: 0xac64d910  sw          $a0, -0x26F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957328), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f4c) {
            ctx->pc = 0x311080u;
            goto label_311080;
        }
    }
    ctx->pc = 0x310F54u;
label_310f54:
    // 0x310f54: 0xc054e1c  jal         func_153870
    ctx->pc = 0x310F54u;
    SET_GPR_U32(ctx, 31, 0x310F5Cu);
    ctx->pc = 0x153870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153870u, 0x310F54u, 0x310F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F5Cu;
label_310f5c:
    // 0x310f5c: 0xc05ce24  jal         func_173890
    ctx->pc = 0x310F5Cu;
    SET_GPR_U32(ctx, 31, 0x310F64u);
    ctx->pc = 0x173890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173890u, 0x310F5Cu, 0x310F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F64u;
label_310f64:
    // 0x310f64: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x310f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x310f68: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x310F68u;
    SET_GPR_U32(ctx, 31, 0x310F70u);
    ctx->pc = 0x310F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F68u;
    // 0x310f6c: 0x24840a18  addiu       $a0, $a0, 0xA18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x310F68u, 0x310F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F70u;
label_310f70:
    // 0x310f70: 0xc063d68  jal         func_18F5A0
    ctx->pc = 0x310F70u;
    SET_GPR_U32(ctx, 31, 0x310F78u);
    ctx->pc = 0x18F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F5A0u, 0x310F70u, 0x310F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F78u;
label_310f78:
    // 0x310f78: 0xc063e20  jal         func_18F880
    ctx->pc = 0x310F78u;
    SET_GPR_U32(ctx, 31, 0x310F80u);
    ctx->pc = 0x18F880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F880u, 0x310F78u, 0x310F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F80u;
label_310f80:
    // 0x310f80: 0xc0c8228  jal         func_3208A0
    ctx->pc = 0x310F80u;
    SET_GPR_U32(ctx, 31, 0x310F88u);
    ctx->pc = 0x3208A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3208A0u, 0x310F80u, 0x310F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F88u;
label_310f88:
    // 0x310f88: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x310f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x310f8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x310f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f90: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x310f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
label_310f94:
    // 0x310f94: 0xaca00064  sw          $zero, 0x64($a1)
    ctx->pc = 0x310f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
    // 0x310f98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x310f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f9c: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x310f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
    // 0x310fa0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x310fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310fa4: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x310fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
    // 0x310fa8: 0xaca00078  sw          $zero, 0x78($a1)
    ctx->pc = 0x310fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 0));
    // 0x310fac: 0xaca00140  sw          $zero, 0x140($a1)
    ctx->pc = 0x310facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 320), GPR_U32(ctx, 0));
    // 0x310fb0: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x310fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
    // 0x310fb4: 0xaca0007c  sw          $zero, 0x7C($a1)
    ctx->pc = 0x310fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 0));
    // 0x310fb8: 0xaca00144  sw          $zero, 0x144($a1)
    ctx->pc = 0x310fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 324), GPR_U32(ctx, 0));
    // 0x310fbc: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x310fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
    // 0x310fc0: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x310fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x310fc4: 0xaca00148  sw          $zero, 0x148($a1)
    ctx->pc = 0x310fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 0));
    // 0x310fc8: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x310fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
    // 0x310fcc: 0xaca000a8  sw          $zero, 0xA8($a1)
    ctx->pc = 0x310fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 0));
    // 0x310fd0: 0xaca00094  sw          $zero, 0x94($a1)
    ctx->pc = 0x310fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 0));
    // 0x310fd4: 0xaca000ac  sw          $zero, 0xAC($a1)
    ctx->pc = 0x310fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 0));
    // 0x310fd8: 0xaca00098  sw          $zero, 0x98($a1)
    ctx->pc = 0x310fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 0));
    // 0x310fdc: 0xaca000b0  sw          $zero, 0xB0($a1)
    ctx->pc = 0x310fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 0));
    // 0x310fe0: 0xaca0009c  sw          $zero, 0x9C($a1)
    ctx->pc = 0x310fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 0));
    // 0x310fe4: 0xaca000b4  sw          $zero, 0xB4($a1)
    ctx->pc = 0x310fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 0));
    // 0x310fe8: 0xaca000a0  sw          $zero, 0xA0($a1)
    ctx->pc = 0x310fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 0));
    // 0x310fec: 0xaca000b8  sw          $zero, 0xB8($a1)
    ctx->pc = 0x310fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 0));
    // 0x310ff0: 0xaca000a4  sw          $zero, 0xA4($a1)
    ctx->pc = 0x310ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 0));
    // 0x310ff4: 0xaca000bc  sw          $zero, 0xBC($a1)
    ctx->pc = 0x310ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 188), GPR_U32(ctx, 0));
label_310ff8:
    // 0x310ff8: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x310ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x310ffc: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x310ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x311000: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x311000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x311004: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x311004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x311008: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x311008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x31100c: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x31100cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
    // 0x311010: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x311010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x311014: 0xac800108  sw          $zero, 0x108($a0)
    ctx->pc = 0x311014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
    // 0x311018: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x311018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x31101c: 0xac80010c  sw          $zero, 0x10C($a0)
    ctx->pc = 0x31101cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 0));
    // 0x311020: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x311020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x311024: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x311024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x311028: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x311028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x31102c: 0xac800114  sw          $zero, 0x114($a0)
    ctx->pc = 0x31102cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
    // 0x311030: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x311030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x311034: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x311034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
    // 0x311038: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x311038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x31103c: 0xac80011c  sw          $zero, 0x11C($a0)
    ctx->pc = 0x31103cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
    // 0x311040: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x311040u;
    {
        const bool branch_taken_0x311040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x311044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311040u;
        // 0x311044: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311040) {
            ctx->pc = 0x310FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_310ff8;
        }
    }
    ctx->pc = 0x311048u;
    // 0x311048: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x311048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31104c: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x31104cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x311050: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x311050u;
    {
        const bool branch_taken_0x311050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x311054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311050u;
        // 0x311054: 0x24a50248  addiu       $a1, $a1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311050) {
            ctx->pc = 0x310F94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_310f94;
        }
    }
    ctx->pc = 0x311058u;
    // 0x311058: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x311058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x31105c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31105cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x311060: 0x8c84d910  lw          $a0, -0x26F0($a0)
    ctx->pc = 0x311060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957328)));
    // 0x311064: 0xa060d9d8  sb          $zero, -0x2628($v1)
    ctx->pc = 0x311064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957528), (uint8_t)GPR_U32(ctx, 0));
    // 0x311068: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x31106c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x311070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x311070u;
    {
        const bool branch_taken_0x311070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311070u;
        // 0x311074: 0xac64d910  sw          $a0, -0x26F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957328), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311070) {
            ctx->pc = 0x311080u;
            goto label_311080;
        }
    }
    ctx->pc = 0x311078u;
label_311078:
    // 0x311078: 0xc055770  jal         func_155DC0
    ctx->pc = 0x311078u;
    SET_GPR_U32(ctx, 31, 0x311080u);
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x311078u, 0x311080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311080u;
label_311080:
    // 0x311080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_311084:
    // 0x311084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311088: 0x3e00008  jr          $ra
    ctx->pc = 0x311088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311088u;
        // 0x31108c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311090u;
}
