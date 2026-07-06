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

// Function: sub_002326E0
// Address: 0x2326e0 - 0x232948
void sub_002326E0_0x2326e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002326E0_0x2326e0");
#endif

    switch (ctx->pc) {
        case 0x2327a4u: goto label_2327a4;
        case 0x2327d4u: goto label_2327d4;
        case 0x2327e0u: goto label_2327e0;
        case 0x2327ecu: goto label_2327ec;
        case 0x2327fcu: goto label_2327fc;
        case 0x232828u: goto label_232828;
        case 0x232834u: goto label_232834;
        case 0x232844u: goto label_232844;
        case 0x23284cu: goto label_23284c;
        case 0x232858u: goto label_232858;
        case 0x2328c8u: goto label_2328c8;
        case 0x2328ecu: goto label_2328ec;
        case 0x232910u: goto label_232910;
        default: break;
    }

    ctx->pc = 0x2326e0u;

    // 0x2326e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2326e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2326e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2326e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2326e8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2326e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2326ec: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2326ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2326f0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2326f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326f4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2326f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2326f8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2326f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326fc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2326fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x232700: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x232700u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232704: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x232704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x232708: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x232708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x23270c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23270cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x232710: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x232710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x232714: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x232714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x232718: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x232718u;
    {
        const bool branch_taken_0x232718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232718u;
        // 0x23271c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232718) {
            ctx->pc = 0x23274Cu;
            goto label_23274c;
        }
    }
    ctx->pc = 0x232720u;
    // 0x232720: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x232720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x232724: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232724u;
    {
        const bool branch_taken_0x232724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232724u;
        // 0x232728: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232724) {
            ctx->pc = 0x23273Cu;
            goto label_23273c;
        }
    }
    ctx->pc = 0x23272Cu;
    // 0x23272c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x23272Cu;
    {
        const bool branch_taken_0x23272c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x232730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23272Cu;
        // 0x232730: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23272c) {
            ctx->pc = 0x23275Cu;
            goto label_23275c;
        }
    }
    ctx->pc = 0x232734u;
    // 0x232734: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x232734u;
    {
        const bool branch_taken_0x232734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232734u;
        // 0x232738: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232734) {
            ctx->pc = 0x232918u;
            goto label_232918;
        }
    }
    ctx->pc = 0x23273Cu;
label_23273c:
    // 0x23273c: 0x14a20075  bne         $a1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x23273Cu;
    {
        const bool branch_taken_0x23273c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x232740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23273Cu;
        // 0x232740: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23273c) {
            ctx->pc = 0x232914u;
            goto label_232914;
        }
    }
    ctx->pc = 0x232744u;
    // 0x232744: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x232744u;
    {
        const bool branch_taken_0x232744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232744u;
        // 0x232748: 0xa2c00001  sb          $zero, 0x1($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232744) {
            ctx->pc = 0x232760u;
            goto label_232760;
        }
    }
    ctx->pc = 0x23274Cu;
label_23274c:
    // 0x23274c: 0xa2c00001  sb          $zero, 0x1($s6)
    ctx->pc = 0x23274cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x232750: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x232750u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x232754: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x232754u;
    {
        const bool branch_taken_0x232754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232754u;
        // 0x232758: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232754) {
            ctx->pc = 0x232768u;
            goto label_232768;
        }
    }
    ctx->pc = 0x23275Cu;
label_23275c:
    // 0x23275c: 0xa2c00001  sb          $zero, 0x1($s6)
    ctx->pc = 0x23275cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 0));
label_232760:
    // 0x232760: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x232760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232764: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x232764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232768:
    // 0x232768: 0x8ef20010  lw          $s2, 0x10($s7)
    ctx->pc = 0x232768u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x23276c: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x23276cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x232770: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x232770u;
    {
        const bool branch_taken_0x232770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232770u;
        // 0x232774: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232770) {
            ctx->pc = 0x232914u;
            goto label_232914;
        }
    }
    ctx->pc = 0x232778u;
    // 0x232778: 0x254a823  subu        $s5, $s2, $s4
    ctx->pc = 0x232778u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x23277c: 0xd5102a  slt         $v0, $a2, $s5
    ctx->pc = 0x23277cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x232780: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x232780u;
    {
        const bool branch_taken_0x232780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232780u;
        // 0x232784: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232780) {
            ctx->pc = 0x232914u;
            goto label_232914;
        }
    }
    ctx->pc = 0x232788u;
    // 0x232788: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x232788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x23278c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x23278cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x232790: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x232790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x232794: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x232794u;
    {
        const bool branch_taken_0x232794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232794u;
        // 0x232798: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232794) {
            ctx->pc = 0x2327CCu;
            goto label_2327cc;
        }
    }
    ctx->pc = 0x23279Cu;
    // 0x23279c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x23279Cu;
    {
        const bool branch_taken_0x23279c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23279Cu;
        // 0x2327a0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23279c) {
            ctx->pc = 0x232918u;
            goto label_232918;
        }
    }
    ctx->pc = 0x2327A4u;
label_2327a4:
    // 0x2327a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2327a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2327a8: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2327a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2327ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2327acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2327b0: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x2327b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2327b4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2327b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2327b8: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x2327b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x2327bc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2327bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2327c0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2327c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2327c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2327C4u;
    {
        const bool branch_taken_0x2327c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2327C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327C4u;
        // 0x2327c8: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327c4) {
            ctx->pc = 0x232800u;
            goto label_232800;
        }
    }
    ctx->pc = 0x2327CCu;
label_2327cc:
    // 0x2327cc: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2327CCu;
    SET_GPR_U32(ctx, 31, 0x2327D4u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2327CCu, 0x2327D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327D4u;
label_2327d4:
    // 0x2327d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2327d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327d8: 0xc098552  jal         func_261548
    ctx->pc = 0x2327D8u;
    SET_GPR_U32(ctx, 31, 0x2327E0u);
    ctx->pc = 0x2327DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327D8u;
    // 0x2327dc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2327D8u, 0x2327E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327E0u;
label_2327e0:
    // 0x2327e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2327e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327e4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2327E4u;
    SET_GPR_U32(ctx, 31, 0x2327ECu);
    ctx->pc = 0x2327E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327E4u;
    // 0x2327e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2327E4u, 0x2327ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327ECu;
label_2327ec:
    // 0x2327ec: 0x1620ffed  bnez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2327ECu;
    {
        const bool branch_taken_0x2327ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2327F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327ECu;
        // 0x2327f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327ec) {
            ctx->pc = 0x2327A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2327a4;
        }
    }
    ctx->pc = 0x2327F4u;
    // 0x2327f4: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x2327F4u;
    SET_GPR_U32(ctx, 31, 0x2327FCu);
    ctx->pc = 0x2327F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327F4u;
    // 0x2327f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x2327F4u, 0x2327FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327FCu;
label_2327fc:
    // 0x2327fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2327fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232800:
    // 0x232800: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x232800u;
    {
        const bool branch_taken_0x232800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x232804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232800u;
        // 0x232804: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232800) {
            ctx->pc = 0x232914u;
            goto label_232914;
        }
    }
    ctx->pc = 0x232808u;
    // 0x232808: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x232808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x23280c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x23280cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x232810: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x232810u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x232814: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x232814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x232818: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x232818u;
    {
        const bool branch_taken_0x232818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232818u;
        // 0x23281c: 0xae350018  sw          $s5, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232818) {
            ctx->pc = 0x232898u;
            goto label_232898;
        }
    }
    ctx->pc = 0x232820u;
    // 0x232820: 0xc08c682  jal         func_231A08
    ctx->pc = 0x232820u;
    SET_GPR_U32(ctx, 31, 0x232828u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x232820u, 0x232828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232828u;
label_232828:
    // 0x232828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23282c: 0xc098552  jal         func_261548
    ctx->pc = 0x23282Cu;
    SET_GPR_U32(ctx, 31, 0x232834u);
    ctx->pc = 0x232830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23282Cu;
    // 0x232830: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x23282Cu, 0x232834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232834u;
label_232834:
    // 0x232834: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232834u;
    {
        const bool branch_taken_0x232834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232834u;
        // 0x232838: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232834) {
            ctx->pc = 0x232850u;
            goto label_232850;
        }
    }
    ctx->pc = 0x23283Cu;
    // 0x23283c: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x23283Cu;
    SET_GPR_U32(ctx, 31, 0x232844u);
    ctx->pc = 0x232840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23283Cu;
    // 0x232840: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3B0u, 0x23283Cu, 0x232844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232844u;
label_232844:
    // 0x232844: 0xc098552  jal         func_261548
    ctx->pc = 0x232844u;
    SET_GPR_U32(ctx, 31, 0x23284Cu);
    ctx->pc = 0x232848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232844u;
    // 0x232848: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x232844u, 0x23284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23284Cu;
label_23284c:
    // 0x23284c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23284cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_232850:
    // 0x232850: 0xc08c698  jal         func_231A60
    ctx->pc = 0x232850u;
    SET_GPR_U32(ctx, 31, 0x232858u);
    ctx->pc = 0x232854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232850u;
    // 0x232854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x232850u, 0x232858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232858u;
label_232858:
    // 0x232858: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x232858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x23285c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x23285Cu;
    {
        const bool branch_taken_0x23285c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x232860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23285Cu;
        // 0x232860: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23285c) {
            ctx->pc = 0x232888u;
            goto label_232888;
        }
    }
    ctx->pc = 0x232864u;
    // 0x232864: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x232864u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x232868: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x232868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x23286c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x23286cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x232870: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x232870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x232874: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x232874u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x232878: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x232878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x23287c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x23287cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x232880: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x232880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
    // 0x232884: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x232884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_232888:
    // 0x232888: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x232888u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x23288c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23288cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x232890: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x232890u;
    {
        const bool branch_taken_0x232890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232890u;
        // 0x232894: 0x24100069  addiu       $s0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232890) {
            ctx->pc = 0x232908u;
            goto label_232908;
        }
    }
    ctx->pc = 0x232898u;
label_232898:
    // 0x232898: 0x5a600008  blezl       $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x232898u;
    {
        const bool branch_taken_0x232898 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x232898) {
            ctx->pc = 0x23289Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232898u;
            // 0x23289c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2328BCu;
            goto label_2328bc;
        }
    }
    ctx->pc = 0x2328A0u;
    // 0x2328a0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2328a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2328a4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2328a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2328a8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2328a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2328ac: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x2328acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2328b0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2328b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2328b4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2328b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2328b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2328b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2328bc:
    // 0x2328bc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2328bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328c0: 0xc08c6b0  jal         func_231AC0
    ctx->pc = 0x2328C0u;
    SET_GPR_U32(ctx, 31, 0x2328C8u);
    ctx->pc = 0x2328C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328C0u;
    // 0x2328c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AC0u, 0x2328C0u, 0x2328C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328C8u;
label_2328c8:
    // 0x2328c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2328c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328cc: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2328CCu;
    {
        const bool branch_taken_0x2328cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2328cc) {
            ctx->pc = 0x232908u;
            goto label_232908;
        }
    }
    ctx->pc = 0x2328D4u;
    // 0x2328d4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2328D4u;
    {
        const bool branch_taken_0x2328d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2328D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328D4u;
        // 0x2328d8: 0x26c40002  addiu       $a0, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328d4) {
            ctx->pc = 0x2328F8u;
            goto label_2328f8;
        }
    }
    ctx->pc = 0x2328DCu;
    // 0x2328dc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2328dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2328e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2328e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2328e4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2328E4u;
    SET_GPR_U32(ctx, 31, 0x2328ECu);
    ctx->pc = 0x2328E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328E4u;
    // 0x2328e8: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2328E4u, 0x2328ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328ECu;
label_2328ec:
    // 0x2328ec: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2328ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2328f0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2328f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2328f4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2328f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2328f8:
    // 0x2328f8: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x2328f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x2328fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2328fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232900: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x232900u;
    {
        const bool branch_taken_0x232900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232900u;
        // 0x232904: 0xafd10000  sw          $s1, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232900) {
            ctx->pc = 0x232914u;
            goto label_232914;
        }
    }
    ctx->pc = 0x232908u;
label_232908:
    // 0x232908: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x232908u;
    SET_GPR_U32(ctx, 31, 0x232910u);
    ctx->pc = 0x23290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232908u;
    // 0x23290c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x232908u, 0x232910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232910u;
label_232910:
    // 0x232910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x232910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232914:
    // 0x232914: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x232914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_232918:
    // 0x232918: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x232918u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23291c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x23291cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x232920: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x232920u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x232924: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x232924u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232928: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x232928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23292c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23292cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232930: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x232930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232934: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x232934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23293c: 0x3e00008  jr          $ra
    ctx->pc = 0x23293Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23293Cu;
        // 0x232940: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23293Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232944u;
    // 0x232944: 0x0  nop
    ctx->pc = 0x232944u;
    // NOP
    if (ctx->pc == 0x232944u) { ctx->pc = 0x232948u; }
}
