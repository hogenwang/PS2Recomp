#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6610
// Address: 0x1b6610 - 0x1b6718
void sub_001B6610_0x1b6610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6610_0x1b6610");
#endif

    switch (ctx->pc) {
        case 0x1b6610u: goto label_1b6610;
        case 0x1b6614u: goto label_1b6614;
        case 0x1b6618u: goto label_1b6618;
        case 0x1b661cu: goto label_1b661c;
        case 0x1b6620u: goto label_1b6620;
        case 0x1b6624u: goto label_1b6624;
        case 0x1b6628u: goto label_1b6628;
        case 0x1b662cu: goto label_1b662c;
        case 0x1b6630u: goto label_1b6630;
        case 0x1b6634u: goto label_1b6634;
        case 0x1b6638u: goto label_1b6638;
        case 0x1b663cu: goto label_1b663c;
        case 0x1b6640u: goto label_1b6640;
        case 0x1b6644u: goto label_1b6644;
        case 0x1b6648u: goto label_1b6648;
        case 0x1b664cu: goto label_1b664c;
        case 0x1b6650u: goto label_1b6650;
        case 0x1b6654u: goto label_1b6654;
        case 0x1b6658u: goto label_1b6658;
        case 0x1b665cu: goto label_1b665c;
        case 0x1b6660u: goto label_1b6660;
        case 0x1b6664u: goto label_1b6664;
        case 0x1b6668u: goto label_1b6668;
        case 0x1b666cu: goto label_1b666c;
        case 0x1b6670u: goto label_1b6670;
        case 0x1b6674u: goto label_1b6674;
        case 0x1b6678u: goto label_1b6678;
        case 0x1b667cu: goto label_1b667c;
        case 0x1b6680u: goto label_1b6680;
        case 0x1b6684u: goto label_1b6684;
        case 0x1b6688u: goto label_1b6688;
        case 0x1b668cu: goto label_1b668c;
        case 0x1b6690u: goto label_1b6690;
        case 0x1b6694u: goto label_1b6694;
        case 0x1b6698u: goto label_1b6698;
        case 0x1b669cu: goto label_1b669c;
        case 0x1b66a0u: goto label_1b66a0;
        case 0x1b66a4u: goto label_1b66a4;
        case 0x1b66a8u: goto label_1b66a8;
        case 0x1b66acu: goto label_1b66ac;
        case 0x1b66b0u: goto label_1b66b0;
        case 0x1b66b4u: goto label_1b66b4;
        case 0x1b66b8u: goto label_1b66b8;
        case 0x1b66bcu: goto label_1b66bc;
        case 0x1b66c0u: goto label_1b66c0;
        case 0x1b66c4u: goto label_1b66c4;
        case 0x1b66c8u: goto label_1b66c8;
        case 0x1b66ccu: goto label_1b66cc;
        case 0x1b66d0u: goto label_1b66d0;
        case 0x1b66d4u: goto label_1b66d4;
        case 0x1b66d8u: goto label_1b66d8;
        case 0x1b66dcu: goto label_1b66dc;
        case 0x1b66e0u: goto label_1b66e0;
        case 0x1b66e4u: goto label_1b66e4;
        case 0x1b66e8u: goto label_1b66e8;
        case 0x1b66ecu: goto label_1b66ec;
        case 0x1b66f0u: goto label_1b66f0;
        case 0x1b66f4u: goto label_1b66f4;
        case 0x1b66f8u: goto label_1b66f8;
        case 0x1b66fcu: goto label_1b66fc;
        case 0x1b6700u: goto label_1b6700;
        case 0x1b6704u: goto label_1b6704;
        case 0x1b6708u: goto label_1b6708;
        case 0x1b670cu: goto label_1b670c;
        case 0x1b6710u: goto label_1b6710;
        case 0x1b6714u: goto label_1b6714;
        default: break;
    }

    ctx->pc = 0x1b6610u;

label_1b6610:
    // 0x1b6610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b6614:
    // 0x1b6614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b6618:
    // 0x1b6618: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b6618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b661c:
    // 0x1b661c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b6620:
    // 0x1b6620: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b6624:
    // 0x1b6624: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b6628:
    // 0x1b6628: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b6628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b662c:
    // 0x1b662c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1b6630:
    // 0x1b6630: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b6630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6634:
    // 0x1b6634: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b6634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1b6638:
    // 0x1b6638: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1b6638u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b663c:
    // 0x1b663c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1b6640:
    // 0x1b6640: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b6640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b6644:
    // 0x1b6644: 0xc06e042  jal         func_1B8108
label_1b6648:
    if (ctx->pc == 0x1B6648u) {
        ctx->pc = 0x1B6648u;
            // 0x1b6648: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B664Cu;
        goto label_1b664c;
    }
    ctx->pc = 0x1B6644u;
    SET_GPR_U32(ctx, 31, 0x1B664Cu);
    ctx->pc = 0x1B6648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6644u;
            // 0x1b6648: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8108u;
    if (runtime->hasFunction(0x1B8108u)) {
        auto targetFn = runtime->lookupFunction(0x1B8108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B664Cu; }
        if (ctx->pc != 0x1B664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8108_0x1b8108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B664Cu; }
        if (ctx->pc != 0x1B664Cu) { return; }
    }
    ctx->pc = 0x1B664Cu;
label_1b664c:
    // 0x1b664c: 0x260707ff  addiu       $a3, $s0, 0x7FF
    ctx->pc = 0x1b664cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
label_1b6650:
    // 0x1b6650: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x1b6650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_1b6654:
    // 0x1b6654: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1b6654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6658:
    // 0x1b6658: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x1b6658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
label_1b665c:
    // 0x1b665c: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x1b665cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_1b6660:
    // 0x1b6660: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1b6660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1b6664:
    // 0x1b6664: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1b6664u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1b6668:
    // 0x1b6668: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b6668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1b666c:
    // 0x1b666c: 0x312c0  sll         $v0, $v1, 11
    ctx->pc = 0x1b666cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_1b6670:
    // 0x1b6670: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b6670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b6674:
    // 0x1b6674: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1b6674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b6678:
    // 0x1b6678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b667c:
    // 0x1b667c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x1b667cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b6680:
    // 0x1b6680: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x1b6680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_1b6684:
    // 0x1b6684: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b6684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b6688:
    // 0x1b6688: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x1b6688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
label_1b668c:
    // 0x1b668c: 0xae67002c  sw          $a3, 0x2C($s3)
    ctx->pc = 0x1b668cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 7));
label_1b6690:
    // 0x1b6690: 0xae66005c  sw          $a2, 0x5C($s3)
    ctx->pc = 0x1b6690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 6));
label_1b6694:
    // 0x1b6694: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x1b6694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
label_1b6698:
    // 0x1b6698: 0xa2750001  sb          $s5, 0x1($s3)
    ctx->pc = 0x1b6698u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 21));
label_1b669c:
    // 0x1b669c: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x1b669cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b66a0:
    // 0x1b66a0: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1b66a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_1b66a4:
    // 0x1b66a4: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x1b66a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
label_1b66a8:
    // 0x1b66a8: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x1b66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_1b66ac:
    // 0x1b66ac: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_1b66b0:
    if (ctx->pc == 0x1B66B0u) {
        ctx->pc = 0x1B66B0u;
            // 0x1b66b0: 0xae600058  sw          $zero, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x1B66B4u;
        goto label_1b66b4;
    }
    ctx->pc = 0x1B66ACu;
    {
        const bool branch_taken_0x1b66ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B66B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66ACu;
            // 0x1b66b0: 0xae600058  sw          $zero, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b66ac) {
            ctx->pc = 0x1B66ECu;
            goto label_1b66ec;
        }
    }
    ctx->pc = 0x1B66B4u;
label_1b66b4:
    // 0x1b66b4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1b66b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b66b8:
    // 0x1b66b8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1b66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1b66bc:
    // 0x1b66bc: 0x40f809  jalr        $v0
label_1b66c0:
    if (ctx->pc == 0x1B66C0u) {
        ctx->pc = 0x1B66C4u;
        goto label_1b66c4;
    }
    ctx->pc = 0x1B66BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B66C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B66C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B66C4u; }
            if (ctx->pc != 0x1B66C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B66C4u;
label_1b66c4:
    // 0x1b66c4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1b66c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b66c8:
    // 0x1b66c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b66c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b66cc:
    // 0x1b66cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b66ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b66d0:
    // 0x1b66d0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1b66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1b66d4:
    // 0x1b66d4: 0x40f809  jalr        $v0
label_1b66d8:
    if (ctx->pc == 0x1B66D8u) {
        ctx->pc = 0x1B66D8u;
            // 0x1b66d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B66DCu;
        goto label_1b66dc;
    }
    ctx->pc = 0x1B66D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B66DCu);
        ctx->pc = 0x1B66D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66D4u;
            // 0x1b66d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B66DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B66DCu; }
            if (ctx->pc != 0x1B66DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1B66DCu;
label_1b66dc:
    // 0x1b66dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b66dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b66e0:
    // 0x1b66e0: 0xae70001c  sw          $s0, 0x1C($s3)
    ctx->pc = 0x1b66e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 16));
label_1b66e4:
    // 0x1b66e4: 0xae700040  sw          $s0, 0x40($s3)
    ctx->pc = 0x1b66e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 16));
label_1b66e8:
    // 0x1b66e8: 0xae700018  sw          $s0, 0x18($s3)
    ctx->pc = 0x1b66e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 16));
label_1b66ec:
    // 0x1b66ec: 0xa2750000  sb          $s5, 0x0($s3)
    ctx->pc = 0x1b66ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 21));
label_1b66f0:
    // 0x1b66f0: 0xa2600044  sb          $zero, 0x44($s3)
    ctx->pc = 0x1b66f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 68), (uint8_t)GPR_U32(ctx, 0));
label_1b66f4:
    // 0x1b66f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b66f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b66f8:
    // 0x1b66f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b66f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b66fc:
    // 0x1b66fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b66fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6700:
    // 0x1b6700: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b6700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b6704:
    // 0x1b6704: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b6704u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6708:
    // 0x1b6708: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b6708u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b670c:
    // 0x1b670c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b670cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b6710:
    // 0x1b6710: 0x806e048  j           func_1B8120
label_1b6714:
    if (ctx->pc == 0x1B6714u) {
        ctx->pc = 0x1B6714u;
            // 0x1b6714: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B6718u;
        goto label_fallthrough_0x1b6710;
    }
    ctx->pc = 0x1B6710u;
    ctx->pc = 0x1B6714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6710u;
            // 0x1b6714: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (runtime->hasFunction(0x1B8120u)) {
        auto targetFn = runtime->lookupFunction(0x1B8120u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8120_0x1b8120(rdram, ctx, runtime); return;
    }
label_fallthrough_0x1b6710:
    ctx->pc = 0x1B6718u;
    ctx->pc = 0x1b6718u;
}
