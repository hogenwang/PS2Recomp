#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00124860
// Address: 0x124860 - 0x124960
void sub_00124860_0x124860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124860_0x124860");
#endif

    switch (ctx->pc) {
        case 0x124860u: goto label_124860;
        case 0x124864u: goto label_124864;
        case 0x124868u: goto label_124868;
        case 0x12486cu: goto label_12486c;
        case 0x124870u: goto label_124870;
        case 0x124874u: goto label_124874;
        case 0x124878u: goto label_124878;
        case 0x12487cu: goto label_12487c;
        case 0x124880u: goto label_124880;
        case 0x124884u: goto label_124884;
        case 0x124888u: goto label_124888;
        case 0x12488cu: goto label_12488c;
        case 0x124890u: goto label_124890;
        case 0x124894u: goto label_124894;
        case 0x124898u: goto label_124898;
        case 0x12489cu: goto label_12489c;
        case 0x1248a0u: goto label_1248a0;
        case 0x1248a4u: goto label_1248a4;
        case 0x1248a8u: goto label_1248a8;
        case 0x1248acu: goto label_1248ac;
        case 0x1248b0u: goto label_1248b0;
        case 0x1248b4u: goto label_1248b4;
        case 0x1248b8u: goto label_1248b8;
        case 0x1248bcu: goto label_1248bc;
        case 0x1248c0u: goto label_1248c0;
        case 0x1248c4u: goto label_1248c4;
        case 0x1248c8u: goto label_1248c8;
        case 0x1248ccu: goto label_1248cc;
        case 0x1248d0u: goto label_1248d0;
        case 0x1248d4u: goto label_1248d4;
        case 0x1248d8u: goto label_1248d8;
        case 0x1248dcu: goto label_1248dc;
        case 0x1248e0u: goto label_1248e0;
        case 0x1248e4u: goto label_1248e4;
        case 0x1248e8u: goto label_1248e8;
        case 0x1248ecu: goto label_1248ec;
        case 0x1248f0u: goto label_1248f0;
        case 0x1248f4u: goto label_1248f4;
        case 0x1248f8u: goto label_1248f8;
        case 0x1248fcu: goto label_1248fc;
        case 0x124900u: goto label_124900;
        case 0x124904u: goto label_124904;
        case 0x124908u: goto label_124908;
        case 0x12490cu: goto label_12490c;
        case 0x124910u: goto label_124910;
        case 0x124914u: goto label_124914;
        case 0x124918u: goto label_124918;
        case 0x12491cu: goto label_12491c;
        case 0x124920u: goto label_124920;
        case 0x124924u: goto label_124924;
        case 0x124928u: goto label_124928;
        case 0x12492cu: goto label_12492c;
        case 0x124930u: goto label_124930;
        case 0x124934u: goto label_124934;
        case 0x124938u: goto label_124938;
        case 0x12493cu: goto label_12493c;
        case 0x124940u: goto label_124940;
        case 0x124944u: goto label_124944;
        case 0x124948u: goto label_124948;
        case 0x12494cu: goto label_12494c;
        case 0x124950u: goto label_124950;
        case 0x124954u: goto label_124954;
        case 0x124958u: goto label_124958;
        case 0x12495cu: goto label_12495c;
        default: break;
    }

    ctx->pc = 0x124860u;

label_124860:
    // 0x124860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_124864:
    // 0x124864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124868:
    // 0x124868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12486c:
    // 0x12486c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_124870:
    // 0x124870: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_124874:
    // 0x124874: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
label_124878:
    if (ctx->pc == 0x124878u) {
        ctx->pc = 0x124878u;
            // 0x124878: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12487Cu;
        goto label_12487c;
    }
    ctx->pc = 0x124874u;
    {
        const bool branch_taken_0x124874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124874u;
            // 0x124878: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124874) {
            ctx->pc = 0x12494Cu;
            goto label_12494c;
        }
    }
    ctx->pc = 0x12487Cu;
label_12487c:
    // 0x12487c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12487cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_124880:
    // 0x124880: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_124884:
    if (ctx->pc == 0x124884u) {
        ctx->pc = 0x124884u;
            // 0x124884: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = 0x124888u;
        goto label_124888;
    }
    ctx->pc = 0x124880u;
    {
        const bool branch_taken_0x124880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x124880) {
            ctx->pc = 0x124884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124880u;
            // 0x124884: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12489Cu;
            goto label_12489c;
        }
    }
    ctx->pc = 0x124888u;
label_124888:
    // 0x124888: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x124888u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
label_12488c:
    // 0x12488c: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x12488cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
label_124890:
    // 0x124890: 0xae0e0054  sw          $t6, 0x54($s0)
    ctx->pc = 0x124890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 14));
label_124894:
    // 0x124894: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x124894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_124898:
    // 0x124898: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x124898u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_12489c:
    // 0x12489c: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
label_1248a0:
    if (ctx->pc == 0x1248A0u) {
        ctx->pc = 0x1248A0u;
            // 0x1248a0: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1248A4u;
        goto label_1248a4;
    }
    ctx->pc = 0x12489Cu;
    {
        const bool branch_taken_0x12489c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12489c) {
            ctx->pc = 0x1248A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12489Cu;
            // 0x1248a0: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1248B0u;
            goto label_1248b0;
        }
    }
    ctx->pc = 0x1248A4u;
label_1248a4:
    // 0x1248a4: 0xc049360  jal         func_124D80
label_1248a8:
    if (ctx->pc == 0x1248A8u) {
        ctx->pc = 0x1248ACu;
        goto label_1248ac;
    }
    ctx->pc = 0x1248A4u;
    SET_GPR_U32(ctx, 31, 0x1248ACu);
    ctx->pc = 0x124D80u;
    if (runtime->hasFunction(0x124D80u)) {
        auto targetFn = runtime->lookupFunction(0x124D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248ACu; }
        if (ctx->pc != 0x1248ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124D80_0x124d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248ACu; }
        if (ctx->pc != 0x1248ACu) { return; }
    }
    ctx->pc = 0x1248ACu;
label_1248ac:
    // 0x1248ac: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x1248acu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1248b0:
    // 0x1248b0: 0x11e00026  beqz        $t7, . + 4 + (0x26 << 2)
label_1248b4:
    if (ctx->pc == 0x1248B4u) {
        ctx->pc = 0x1248B4u;
            // 0x1248b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1248B8u;
        goto label_1248b8;
    }
    ctx->pc = 0x1248B0u;
    {
        const bool branch_taken_0x1248b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1248B0u;
            // 0x1248b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248b0) {
            ctx->pc = 0x12494Cu;
            goto label_12494c;
        }
    }
    ctx->pc = 0x1248B8u;
label_1248b8:
    // 0x1248b8: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x1248b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
label_1248bc:
    // 0x1248bc: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
label_1248c0:
    if (ctx->pc == 0x1248C0u) {
        ctx->pc = 0x1248C0u;
            // 0x1248c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1248C4u;
        goto label_1248c4;
    }
    ctx->pc = 0x1248BCu;
    {
        const bool branch_taken_0x1248bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1248BCu;
            // 0x1248c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248bc) {
            ctx->pc = 0x1248D0u;
            goto label_1248d0;
        }
    }
    ctx->pc = 0x1248C4u;
label_1248c4:
    // 0x1248c4: 0xc049258  jal         func_124960
label_1248c8:
    if (ctx->pc == 0x1248C8u) {
        ctx->pc = 0x1248C8u;
            // 0x1248c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1248CCu;
        goto label_1248cc;
    }
    ctx->pc = 0x1248C4u;
    SET_GPR_U32(ctx, 31, 0x1248CCu);
    ctx->pc = 0x1248C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1248C4u;
            // 0x1248c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    if (runtime->hasFunction(0x124960u)) {
        auto targetFn = runtime->lookupFunction(0x124960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248CCu; }
        if (ctx->pc != 0x1248CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124960_0x124960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248CCu; }
        if (ctx->pc != 0x1248CCu) { return; }
    }
    ctx->pc = 0x1248CCu;
label_1248cc:
    // 0x1248cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1248ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1248d0:
    // 0x1248d0: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x1248d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1248d4:
    // 0x1248d4: 0x51e00007  beql        $t7, $zero, . + 4 + (0x7 << 2)
label_1248d8:
    if (ctx->pc == 0x1248D8u) {
        ctx->pc = 0x1248D8u;
            // 0x1248d8: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1248DCu;
        goto label_1248dc;
    }
    ctx->pc = 0x1248D4u;
    {
        const bool branch_taken_0x1248d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1248d4) {
            ctx->pc = 0x1248D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1248D4u;
            // 0x1248d8: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1248F4u;
            goto label_1248f4;
        }
    }
    ctx->pc = 0x1248DCu;
label_1248dc:
    // 0x1248dc: 0x1e0f809  jalr        $t7
label_1248e0:
    if (ctx->pc == 0x1248E0u) {
        ctx->pc = 0x1248E0u;
            // 0x1248e0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x1248E4u;
        goto label_1248e4;
    }
    ctx->pc = 0x1248DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x1248E4u);
        ctx->pc = 0x1248E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1248DCu;
            // 0x1248e0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1248E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1248E4u; }
            if (ctx->pc != 0x1248E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1248E4u;
label_1248e4:
    // 0x1248e4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1248e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1248e8:
    // 0x1248e8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1248e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1248ec:
    // 0x1248ec: 0x1e2880b  movn        $s1, $t7, $v0
    ctx->pc = 0x1248ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 15));
label_1248f0:
    // 0x1248f0: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x1248f0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1248f4:
    // 0x1248f4: 0x31ef0080  andi        $t7, $t7, 0x80
    ctx->pc = 0x1248f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)128);
label_1248f8:
    // 0x1248f8: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
label_1248fc:
    if (ctx->pc == 0x1248FCu) {
        ctx->pc = 0x1248FCu;
            // 0x1248fc: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x124900u;
        goto label_124900;
    }
    ctx->pc = 0x1248F8u;
    {
        const bool branch_taken_0x1248f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1248f8) {
            ctx->pc = 0x1248FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1248F8u;
            // 0x1248fc: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124910u;
            goto label_124910;
        }
    }
    ctx->pc = 0x124900u;
label_124900:
    // 0x124900: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x124900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_124904:
    // 0x124904: 0xc04943c  jal         func_1250F0
label_124908:
    if (ctx->pc == 0x124908u) {
        ctx->pc = 0x124908u;
            // 0x124908: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x12490Cu;
        goto label_12490c;
    }
    ctx->pc = 0x124904u;
    SET_GPR_U32(ctx, 31, 0x12490Cu);
    ctx->pc = 0x124908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124904u;
            // 0x124908: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (runtime->hasFunction(0x1250F0u)) {
        auto targetFn = runtime->lookupFunction(0x1250F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12490Cu; }
        if (ctx->pc != 0x12490Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001250F0_0x1250f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12490Cu; }
        if (ctx->pc != 0x12490Cu) { return; }
    }
    ctx->pc = 0x12490Cu;
label_12490c:
    // 0x12490c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x12490cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_124910:
    // 0x124910: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_124914:
    if (ctx->pc == 0x124914u) {
        ctx->pc = 0x124914u;
            // 0x124914: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x124918u;
        goto label_124918;
    }
    ctx->pc = 0x124910u;
    {
        const bool branch_taken_0x124910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x124914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124910u;
            // 0x124914: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124910) {
            ctx->pc = 0x12492Cu;
            goto label_12492c;
        }
    }
    ctx->pc = 0x124918u;
label_124918:
    // 0x124918: 0x50af0004  beql        $a1, $t7, . + 4 + (0x4 << 2)
label_12491c:
    if (ctx->pc == 0x12491Cu) {
        ctx->pc = 0x12491Cu;
            // 0x12491c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x124920u;
        goto label_124920;
    }
    ctx->pc = 0x124918u;
    {
        const bool branch_taken_0x124918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x124918) {
            ctx->pc = 0x12491Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124918u;
            // 0x12491c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12492Cu;
            goto label_12492c;
        }
    }
    ctx->pc = 0x124920u;
label_124920:
    // 0x124920: 0xc04943c  jal         func_1250F0
label_124924:
    if (ctx->pc == 0x124924u) {
        ctx->pc = 0x124924u;
            // 0x124924: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x124928u;
        goto label_124928;
    }
    ctx->pc = 0x124920u;
    SET_GPR_U32(ctx, 31, 0x124928u);
    ctx->pc = 0x124924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124920u;
            // 0x124924: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (runtime->hasFunction(0x1250F0u)) {
        auto targetFn = runtime->lookupFunction(0x1250F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124928u; }
        if (ctx->pc != 0x124928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001250F0_0x1250f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124928u; }
        if (ctx->pc != 0x124928u) { return; }
    }
    ctx->pc = 0x124928u;
label_124928:
    // 0x124928: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x124928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_12492c:
    // 0x12492c: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x12492cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_124930:
    // 0x124930: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_124934:
    if (ctx->pc == 0x124934u) {
        ctx->pc = 0x124934u;
            // 0x124934: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x124938u;
        goto label_124938;
    }
    ctx->pc = 0x124930u;
    {
        const bool branch_taken_0x124930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x124930) {
            ctx->pc = 0x124934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124930u;
            // 0x124934: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124948u;
            goto label_124948;
        }
    }
    ctx->pc = 0x124938u;
label_124938:
    // 0x124938: 0xc04943c  jal         func_1250F0
label_12493c:
    if (ctx->pc == 0x12493Cu) {
        ctx->pc = 0x12493Cu;
            // 0x12493c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x124940u;
        goto label_124940;
    }
    ctx->pc = 0x124938u;
    SET_GPR_U32(ctx, 31, 0x124940u);
    ctx->pc = 0x12493Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124938u;
            // 0x12493c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (runtime->hasFunction(0x1250F0u)) {
        auto targetFn = runtime->lookupFunction(0x1250F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124940u; }
        if (ctx->pc != 0x124940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001250F0_0x1250f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124940u; }
        if (ctx->pc != 0x124940u) { return; }
    }
    ctx->pc = 0x124940u;
label_124940:
    // 0x124940: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x124940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_124944:
    // 0x124944: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x124944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
label_124948:
    // 0x124948: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x124948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12494c:
    // 0x12494c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12494cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124950:
    // 0x124950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_124954:
    // 0x124954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_124958:
    // 0x124958: 0x3e00008  jr          $ra
label_12495c:
    if (ctx->pc == 0x12495Cu) {
        ctx->pc = 0x12495Cu;
            // 0x12495c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x124960u;
        goto label_fallthrough_0x124958;
    }
    ctx->pc = 0x124958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12495Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124958u;
            // 0x12495c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x124958:
    ctx->pc = 0x124960u;
    ctx->pc = 0x124960u;
}
