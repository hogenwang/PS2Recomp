#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9838
// Address: 0x1a9838 - 0x1a9918
void sub_001A9838_0x1a9838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9838_0x1a9838");
#endif

    switch (ctx->pc) {
        case 0x1a9838u: goto label_1a9838;
        case 0x1a983cu: goto label_1a983c;
        case 0x1a9840u: goto label_1a9840;
        case 0x1a9844u: goto label_1a9844;
        case 0x1a9848u: goto label_1a9848;
        case 0x1a984cu: goto label_1a984c;
        case 0x1a9850u: goto label_1a9850;
        case 0x1a9854u: goto label_1a9854;
        case 0x1a9858u: goto label_1a9858;
        case 0x1a985cu: goto label_1a985c;
        case 0x1a9860u: goto label_1a9860;
        case 0x1a9864u: goto label_1a9864;
        case 0x1a9868u: goto label_1a9868;
        case 0x1a986cu: goto label_1a986c;
        case 0x1a9870u: goto label_1a9870;
        case 0x1a9874u: goto label_1a9874;
        case 0x1a9878u: goto label_1a9878;
        case 0x1a987cu: goto label_1a987c;
        case 0x1a9880u: goto label_1a9880;
        case 0x1a9884u: goto label_1a9884;
        case 0x1a9888u: goto label_1a9888;
        case 0x1a988cu: goto label_1a988c;
        case 0x1a9890u: goto label_1a9890;
        case 0x1a9894u: goto label_1a9894;
        case 0x1a9898u: goto label_1a9898;
        case 0x1a989cu: goto label_1a989c;
        case 0x1a98a0u: goto label_1a98a0;
        case 0x1a98a4u: goto label_1a98a4;
        case 0x1a98a8u: goto label_1a98a8;
        case 0x1a98acu: goto label_1a98ac;
        case 0x1a98b0u: goto label_1a98b0;
        case 0x1a98b4u: goto label_1a98b4;
        case 0x1a98b8u: goto label_1a98b8;
        case 0x1a98bcu: goto label_1a98bc;
        case 0x1a98c0u: goto label_1a98c0;
        case 0x1a98c4u: goto label_1a98c4;
        case 0x1a98c8u: goto label_1a98c8;
        case 0x1a98ccu: goto label_1a98cc;
        case 0x1a98d0u: goto label_1a98d0;
        case 0x1a98d4u: goto label_1a98d4;
        case 0x1a98d8u: goto label_1a98d8;
        case 0x1a98dcu: goto label_1a98dc;
        case 0x1a98e0u: goto label_1a98e0;
        case 0x1a98e4u: goto label_1a98e4;
        case 0x1a98e8u: goto label_1a98e8;
        case 0x1a98ecu: goto label_1a98ec;
        case 0x1a98f0u: goto label_1a98f0;
        case 0x1a98f4u: goto label_1a98f4;
        case 0x1a98f8u: goto label_1a98f8;
        case 0x1a98fcu: goto label_1a98fc;
        case 0x1a9900u: goto label_1a9900;
        case 0x1a9904u: goto label_1a9904;
        case 0x1a9908u: goto label_1a9908;
        case 0x1a990cu: goto label_1a990c;
        case 0x1a9910u: goto label_1a9910;
        case 0x1a9914u: goto label_1a9914;
        default: break;
    }

    ctx->pc = 0x1a9838u;

label_1a9838:
    // 0x1a9838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a983c:
    // 0x1a983c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9840:
    // 0x1a9840: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x1a9840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_1a9844:
    // 0x1a9844: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a9848:
    if (ctx->pc == 0x1A9848u) {
        ctx->pc = 0x1A9848u;
            // 0x1a9848: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1A984Cu;
        goto label_1a984c;
    }
    ctx->pc = 0x1A9844u;
    {
        const bool branch_taken_0x1a9844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9844u;
            // 0x1a9848: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9844) {
            ctx->pc = 0x1A9858u;
            goto label_1a9858;
        }
    }
    ctx->pc = 0x1A984Cu;
label_1a984c:
    // 0x1a984c: 0x8c43e468  lw          $v1, -0x1B98($v0)
    ctx->pc = 0x1a984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960232)));
label_1a9850:
    // 0x1a9850: 0x60f809  jalr        $v1
label_1a9854:
    if (ctx->pc == 0x1A9854u) {
        ctx->pc = 0x1A9858u;
        goto label_1a9858;
    }
    ctx->pc = 0x1A9850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9858u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9858u; }
            if (ctx->pc != 0x1A9858u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9858u;
label_1a9858:
    // 0x1a9858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a985c:
    // 0x1a985c: 0x3e00008  jr          $ra
label_1a9860:
    if (ctx->pc == 0x1A9860u) {
        ctx->pc = 0x1A9860u;
            // 0x1a9860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A9864u;
        goto label_1a9864;
    }
    ctx->pc = 0x1A985Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A985Cu;
            // 0x1a9860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9864u;
label_1a9864:
    // 0x1a9864: 0x0  nop
    ctx->pc = 0x1a9864u;
    // NOP
label_1a9868:
    // 0x1a9868: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1a9868u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a986c:
    // 0x1a986c: 0x8dc300c0  lw          $v1, 0xC0($t6)
    ctx->pc = 0x1a986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 192)));
label_1a9870:
    // 0x1a9870: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1a9874:
    if (ctx->pc == 0x1A9874u) {
        ctx->pc = 0x1A9874u;
            // 0x1a9874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9878u;
        goto label_1a9878;
    }
    ctx->pc = 0x1A9870u;
    {
        const bool branch_taken_0x1a9870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9870u;
            // 0x1a9874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9870) {
            ctx->pc = 0x1A9910u;
            goto label_1a9910;
        }
    }
    ctx->pc = 0x1A9878u;
label_1a9878:
    // 0x1a9878: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1a9878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1a987c:
    // 0x1a987c: 0x8dcc003c  lw          $t4, 0x3C($t6)
    ctx->pc = 0x1a987cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 60)));
label_1a9880:
    // 0x1a9880: 0x8dcd0040  lw          $t5, 0x40($t6)
    ctx->pc = 0x1a9880u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 64)));
label_1a9884:
    // 0x1a9884: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1a9884u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9888:
    // 0x1a9888: 0x8dcb0044  lw          $t3, 0x44($t6)
    ctx->pc = 0x1a9888u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 68)));
label_1a988c:
    // 0x1a988c: 0x24090600  addiu       $t1, $zero, 0x600
    ctx->pc = 0x1a988cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_1a9890:
    // 0x1a9890: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1a9890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a9894:
    // 0x1a9894: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a9894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a9898:
    // 0x1a9898: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1a9898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1a989c:
    // 0x1a989c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1a989cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1a98a0:
    // 0x1a98a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a98a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a98a4:
    // 0x1a98a4: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x1a98a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1a98a8:
    // 0x1a98a8: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x1a98a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_1a98ac:
    // 0x1a98ac: 0xa1ca000e  sb          $t2, 0xE($t6)
    ctx->pc = 0x1a98acu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 14), (uint8_t)GPR_U32(ctx, 10));
label_1a98b0:
    // 0x1a98b0: 0xa1c4000d  sb          $a0, 0xD($t6)
    ctx->pc = 0x1a98b0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 13), (uint8_t)GPR_U32(ctx, 4));
label_1a98b4:
    // 0x1a98b4: 0xadc30018  sw          $v1, 0x18($t6)
    ctx->pc = 0x1a98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 3));
label_1a98b8:
    // 0x1a98b8: 0xa1c5000f  sb          $a1, 0xF($t6)
    ctx->pc = 0x1a98b8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 15), (uint8_t)GPR_U32(ctx, 5));
label_1a98bc:
    // 0x1a98bc: 0xa5c60098  sh          $a2, 0x98($t6)
    ctx->pc = 0x1a98bcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 152), (uint16_t)GPR_U32(ctx, 6));
label_1a98c0:
    // 0x1a98c0: 0xadc70050  sw          $a3, 0x50($t6)
    ctx->pc = 0x1a98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 80), GPR_U32(ctx, 7));
label_1a98c4:
    // 0x1a98c4: 0xadc80054  sw          $t0, 0x54($t6)
    ctx->pc = 0x1a98c4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 84), GPR_U32(ctx, 8));
label_1a98c8:
    // 0x1a98c8: 0xadc90058  sw          $t1, 0x58($t6)
    ctx->pc = 0x1a98c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 88), GPR_U32(ctx, 9));
label_1a98cc:
    // 0x1a98cc: 0xadcc005c  sw          $t4, 0x5C($t6)
    ctx->pc = 0x1a98ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 92), GPR_U32(ctx, 12));
label_1a98d0:
    // 0x1a98d0: 0xadcd0060  sw          $t5, 0x60($t6)
    ctx->pc = 0x1a98d0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 96), GPR_U32(ctx, 13));
label_1a98d4:
    // 0x1a98d4: 0xadcb0064  sw          $t3, 0x64($t6)
    ctx->pc = 0x1a98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 100), GPR_U32(ctx, 11));
label_1a98d8:
    // 0x1a98d8: 0xadc00088  sw          $zero, 0x88($t6)
    ctx->pc = 0x1a98d8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 136), GPR_U32(ctx, 0));
label_1a98dc:
    // 0x1a98dc: 0xa5ca0002  sh          $t2, 0x2($t6)
    ctx->pc = 0x1a98dcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 10));
label_1a98e0:
    // 0x1a98e0: 0xadc90010  sw          $t1, 0x10($t6)
    ctx->pc = 0x1a98e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 9));
label_1a98e4:
    // 0x1a98e4: 0xadc0008c  sw          $zero, 0x8C($t6)
    ctx->pc = 0x1a98e4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 140), GPR_U32(ctx, 0));
label_1a98e8:
    // 0x1a98e8: 0xa5c0001c  sh          $zero, 0x1C($t6)
    ctx->pc = 0x1a98e8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 28), (uint16_t)GPR_U32(ctx, 0));
label_1a98ec:
    // 0x1a98ec: 0xa5c00024  sh          $zero, 0x24($t6)
    ctx->pc = 0x1a98ecu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 36), (uint16_t)GPR_U32(ctx, 0));
label_1a98f0:
    // 0x1a98f0: 0xa5c00026  sh          $zero, 0x26($t6)
    ctx->pc = 0x1a98f0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 38), (uint16_t)GPR_U32(ctx, 0));
label_1a98f4:
    // 0x1a98f4: 0xadc00020  sw          $zero, 0x20($t6)
    ctx->pc = 0x1a98f4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 32), GPR_U32(ctx, 0));
label_1a98f8:
    // 0x1a98f8: 0xadc00028  sw          $zero, 0x28($t6)
    ctx->pc = 0x1a98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 40), GPR_U32(ctx, 0));
label_1a98fc:
    // 0x1a98fc: 0xadc0002c  sw          $zero, 0x2C($t6)
    ctx->pc = 0x1a98fcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 44), GPR_U32(ctx, 0));
label_1a9900:
    // 0x1a9900: 0xadc00030  sw          $zero, 0x30($t6)
    ctx->pc = 0x1a9900u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 0));
label_1a9904:
    // 0x1a9904: 0xadc00034  sw          $zero, 0x34($t6)
    ctx->pc = 0x1a9904u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 52), GPR_U32(ctx, 0));
label_1a9908:
    // 0x1a9908: 0xadc20014  sw          $v0, 0x14($t6)
    ctx->pc = 0x1a9908u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 2));
label_1a990c:
    // 0x1a990c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9910:
    // 0x1a9910: 0x3e00008  jr          $ra
label_1a9914:
    if (ctx->pc == 0x1A9914u) {
        ctx->pc = 0x1A9918u;
        goto label_fallthrough_0x1a9910;
    }
    ctx->pc = 0x1A9910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a9910:
    ctx->pc = 0x1A9918u;
    ctx->pc = 0x1a9918u;
}
