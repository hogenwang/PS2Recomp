#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AC7E0
// Address: 0x2ac7e0 - 0x2ac958
void sub_002AC7E0_0x2ac7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC7E0_0x2ac7e0");
#endif

    switch (ctx->pc) {
        case 0x2ac838u: goto label_2ac838;
        case 0x2ac868u: goto label_2ac868;
        case 0x2ac8bcu: goto label_2ac8bc;
        case 0x2ac8f8u: goto label_2ac8f8;
        case 0x2ac920u: goto label_2ac920;
        case 0x2ac948u: goto label_2ac948;
        default: break;
    }

    ctx->pc = 0x2ac7e0u;

    // 0x2ac7e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ac7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ac7e4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2ac7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2ac7e8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2ac7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2ac7ec: 0x8c626f44  lw          $v0, 0x6F44($v1)
    ctx->pc = 0x2ac7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28484)));
    // 0x2ac7f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac7f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ac7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ac7f8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2ac7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2ac7fc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2ac7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2ac800: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2ac800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2ac804: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AC804u;
    {
        const bool branch_taken_0x2ac804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC804u;
            // 0x2ac808: 0xafbd0030  sw          $sp, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac804) {
            ctx->pc = 0x2AC870u;
            goto label_2ac870;
        }
    }
    ctx->pc = 0x2AC80Cu;
    // 0x2ac80c: 0x3c1201c9  lui         $s2, 0x1C9
    ctx->pc = 0x2ac80cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)457 << 16));
    // 0x2ac810: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ac810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ac814: 0xac606f44  sw          $zero, 0x6F44($v1)
    ctx->pc = 0x2ac814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28484), GPR_U32(ctx, 0));
    // 0x2ac818: 0x24426da8  addiu       $v0, $v0, 0x6DA8
    ctx->pc = 0x2ac818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28072));
    // 0x2ac81c: 0x26434988  addiu       $v1, $s2, 0x4988
    ctx->pc = 0x2ac81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 18824));
    // 0x2ac820: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x2ac820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x2ac824: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x2ac824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2ac828: 0x3c13002b  lui         $s3, 0x2B
    ctx->pc = 0x2ac828u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)43 << 16));
    // 0x2ac82c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2ac82cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac830: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ac830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ac834: 0x0  nop
    ctx->pc = 0x2ac834u;
    // NOP
label_2ac838:
    // 0x2ac838: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ac838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ac83c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2ac83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ac840: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2ac840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2ac844: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x2ac844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x2ac848: 0x0  nop
    ctx->pc = 0x2ac848u;
    // NOP
    // 0x2ac84c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AC84Cu;
    {
        const bool branch_taken_0x2ac84c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2ac84c) {
            ctx->pc = 0x2AC838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac838;
        }
    }
    ctx->pc = 0x2AC854u;
    // 0x2ac854: 0x26444988  addiu       $a0, $s2, 0x4988
    ctx->pc = 0x2ac854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18824));
    // 0x2ac858: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ac858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ac85c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ac85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ac860: 0xc04a168  jal         func_1285A0
    ctx->pc = 0x2AC860u;
    SET_GPR_U32(ctx, 31, 0x2AC868u);
    ctx->pc = 0x2AC864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC860u;
            // 0x2ac864: 0x266706d8  addiu       $a3, $s3, 0x6D8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1285A0u;
    if (runtime->hasFunction(0x1285A0u)) {
        auto targetFn = runtime->lookupFunction(0x1285A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC868u; }
        if (ctx->pc != 0x2AC868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001285A0_0x1285a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC868u; }
        if (ctx->pc != 0x2AC868u) { return; }
    }
    ctx->pc = 0x2AC868u;
label_2ac868:
    // 0x2ac868: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC868u;
    {
        const bool branch_taken_0x2ac868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC868u;
            // 0x2ac86c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac868) {
            ctx->pc = 0x2AC880u;
            goto label_2ac880;
        }
    }
    ctx->pc = 0x2AC870u;
label_2ac870:
    // 0x2ac870: 0x3c1201c9  lui         $s2, 0x1C9
    ctx->pc = 0x2ac870u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)457 << 16));
    // 0x2ac874: 0x3c13002b  lui         $s3, 0x2B
    ctx->pc = 0x2ac874u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)43 << 16));
    // 0x2ac878: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2ac878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac87c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2ac87cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_2ac880:
    // 0x2ac880: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x2ac880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x2ac884: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2ac884u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ac888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac88c: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2ac88cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ac890: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2ac890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2ac894: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ac894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ac898: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2ac898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2ac89c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ac89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ac8a0: 0x266806d8  addiu       $t0, $s3, 0x6D8
    ctx->pc = 0x2ac8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1752));
    // 0x2ac8a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ac8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ac8a8: 0x26454988  addiu       $a1, $s2, 0x4988
    ctx->pc = 0x2ac8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 18824));
    // 0x2ac8ac: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2ac8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2ac8b0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2ac8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ac8b4: 0xc0a6ac4  jal         func_29AB10
    ctx->pc = 0x2AC8B4u;
    SET_GPR_U32(ctx, 31, 0x2AC8BCu);
    ctx->pc = 0x2AC8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8B4u;
            // 0x2ac8b8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AB10u;
    if (runtime->hasFunction(0x29AB10u)) {
        auto targetFn = runtime->lookupFunction(0x29AB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC8BCu; }
        if (ctx->pc != 0x2AC8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029AB10_0x29ab10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC8BCu; }
        if (ctx->pc != 0x2AC8BCu) { return; }
    }
    ctx->pc = 0x2AC8BCu;
label_2ac8bc:
    // 0x2ac8bc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC8BCu;
    {
        const bool branch_taken_0x2ac8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac8bc) {
            ctx->pc = 0x2AC8C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8BCu;
            // 0x2ac8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC8D8u;
            goto label_2ac8d8;
        }
    }
    ctx->pc = 0x2AC8C4u;
    // 0x2ac8c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ac8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac8c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ac8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac8cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AC8CCu;
    {
        const bool branch_taken_0x2ac8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8CCu;
            // 0x2ac8d0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac8cc) {
            ctx->pc = 0x2AC8D8u;
            goto label_2ac8d8;
        }
    }
    ctx->pc = 0x2AC8D4u;
    // 0x2ac8d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ac8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac8d8:
    // 0x2ac8d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ac8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ac8dc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2ac8dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ac8e0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2ac8e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ac8e4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2ac8e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac8e8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2ac8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8ECu;
            // 0x2ac8f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC8F4u;
    // 0x2ac8f4: 0x0  nop
    ctx->pc = 0x2ac8f4u;
    // NOP
label_2ac8f8:
    // 0x2ac8f8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AC8F8u;
    {
        const bool branch_taken_0x2ac8f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8F8u;
            // 0x2ac8fc: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac8f8) {
            ctx->pc = 0x2AC93Cu;
            goto label_2ac93c;
        }
    }
    ctx->pc = 0x2AC900u;
    // 0x2ac900: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x2ac900u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ac904: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x2ac904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2ac908: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ac908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ac90c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ac90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ac910: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC910u;
    {
        const bool branch_taken_0x2ac910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AC914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC910u;
            // 0x2ac914: 0x4143b  dsra        $v0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> 16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac910) {
            ctx->pc = 0x2AC920u;
            goto label_2ac920;
        }
    }
    ctx->pc = 0x2AC918u;
    // 0x2ac918: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC918u;
            // 0x2ac91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC920u;
label_2ac920:
    // 0x2ac920: 0x41a3b  dsra        $v1, $a0, 8
    ctx->pc = 0x2ac920u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 4) >> 8);
    // 0x2ac924: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ac924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ac928: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac92c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ac92cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ac930: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2ac930u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac934: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2ac934u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ac938: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x2ac938u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_2ac93c:
    // 0x2ac93c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC93Cu;
            // 0x2ac940: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC944u;
    // 0x2ac944: 0x0  nop
    ctx->pc = 0x2ac944u;
    // NOP
label_2ac948:
    // 0x2ac948: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ac948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ac94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac950: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC950u;
            // 0x2ac954: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC958u;
    ctx->pc = 0x2ac958u;
}
