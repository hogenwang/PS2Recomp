#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230558
// Address: 0x230558 - 0x2306f0
void sub_00230558_0x230558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230558_0x230558");
#endif

    switch (ctx->pc) {
        case 0x230558u: goto label_230558;
        case 0x23055cu: goto label_23055c;
        case 0x230560u: goto label_230560;
        case 0x230564u: goto label_230564;
        case 0x230568u: goto label_230568;
        case 0x23056cu: goto label_23056c;
        case 0x230570u: goto label_230570;
        case 0x230574u: goto label_230574;
        case 0x230578u: goto label_230578;
        case 0x23057cu: goto label_23057c;
        case 0x230580u: goto label_230580;
        case 0x230584u: goto label_230584;
        case 0x230588u: goto label_230588;
        case 0x23058cu: goto label_23058c;
        case 0x230590u: goto label_230590;
        case 0x230594u: goto label_230594;
        case 0x230598u: goto label_230598;
        case 0x23059cu: goto label_23059c;
        case 0x2305a0u: goto label_2305a0;
        case 0x2305a4u: goto label_2305a4;
        case 0x2305a8u: goto label_2305a8;
        case 0x2305acu: goto label_2305ac;
        case 0x2305b0u: goto label_2305b0;
        case 0x2305b4u: goto label_2305b4;
        case 0x2305b8u: goto label_2305b8;
        case 0x2305bcu: goto label_2305bc;
        case 0x2305c0u: goto label_2305c0;
        case 0x2305c4u: goto label_2305c4;
        case 0x2305c8u: goto label_2305c8;
        case 0x2305ccu: goto label_2305cc;
        case 0x2305d0u: goto label_2305d0;
        case 0x2305d4u: goto label_2305d4;
        case 0x2305d8u: goto label_2305d8;
        case 0x2305dcu: goto label_2305dc;
        case 0x2305e0u: goto label_2305e0;
        case 0x2305e4u: goto label_2305e4;
        case 0x2305e8u: goto label_2305e8;
        case 0x2305ecu: goto label_2305ec;
        case 0x2305f0u: goto label_2305f0;
        case 0x2305f4u: goto label_2305f4;
        case 0x2305f8u: goto label_2305f8;
        case 0x2305fcu: goto label_2305fc;
        case 0x230600u: goto label_230600;
        case 0x230604u: goto label_230604;
        case 0x230608u: goto label_230608;
        case 0x23060cu: goto label_23060c;
        case 0x230610u: goto label_230610;
        case 0x230614u: goto label_230614;
        case 0x230618u: goto label_230618;
        case 0x23061cu: goto label_23061c;
        case 0x230620u: goto label_230620;
        case 0x230624u: goto label_230624;
        case 0x230628u: goto label_230628;
        case 0x23062cu: goto label_23062c;
        case 0x230630u: goto label_230630;
        case 0x230634u: goto label_230634;
        case 0x230638u: goto label_230638;
        case 0x23063cu: goto label_23063c;
        case 0x230640u: goto label_230640;
        case 0x230644u: goto label_230644;
        case 0x230648u: goto label_230648;
        case 0x23064cu: goto label_23064c;
        case 0x230650u: goto label_230650;
        case 0x230654u: goto label_230654;
        case 0x230658u: goto label_230658;
        case 0x23065cu: goto label_23065c;
        case 0x230660u: goto label_230660;
        case 0x230664u: goto label_230664;
        case 0x230668u: goto label_230668;
        case 0x23066cu: goto label_23066c;
        case 0x230670u: goto label_230670;
        case 0x230674u: goto label_230674;
        case 0x230678u: goto label_230678;
        case 0x23067cu: goto label_23067c;
        case 0x230680u: goto label_230680;
        case 0x230684u: goto label_230684;
        case 0x230688u: goto label_230688;
        case 0x23068cu: goto label_23068c;
        case 0x230690u: goto label_230690;
        case 0x230694u: goto label_230694;
        case 0x230698u: goto label_230698;
        case 0x23069cu: goto label_23069c;
        case 0x2306a0u: goto label_2306a0;
        case 0x2306a4u: goto label_2306a4;
        case 0x2306a8u: goto label_2306a8;
        case 0x2306acu: goto label_2306ac;
        case 0x2306b0u: goto label_2306b0;
        case 0x2306b4u: goto label_2306b4;
        case 0x2306b8u: goto label_2306b8;
        case 0x2306bcu: goto label_2306bc;
        case 0x2306c0u: goto label_2306c0;
        case 0x2306c4u: goto label_2306c4;
        case 0x2306c8u: goto label_2306c8;
        case 0x2306ccu: goto label_2306cc;
        case 0x2306d0u: goto label_2306d0;
        case 0x2306d4u: goto label_2306d4;
        case 0x2306d8u: goto label_2306d8;
        case 0x2306dcu: goto label_2306dc;
        case 0x2306e0u: goto label_2306e0;
        case 0x2306e4u: goto label_2306e4;
        case 0x2306e8u: goto label_2306e8;
        case 0x2306ecu: goto label_2306ec;
        default: break;
    }

    ctx->pc = 0x230558u;

label_230558:
    // 0x230558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x230558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23055c:
    // 0x23055c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23055cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_230560:
    // 0x230560: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x230560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_230564:
    // 0x230564: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x230564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_230568:
    // 0x230568: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x230568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23056c:
    // 0x23056c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_230570:
    // 0x230570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x230570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_230574:
    // 0x230574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_230578:
    // 0x230578: 0x86260034  lh          $a2, 0x34($s1)
    ctx->pc = 0x230578u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
label_23057c:
    // 0x23057c: 0x86230032  lh          $v1, 0x32($s1)
    ctx->pc = 0x23057cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_230580:
    // 0x230580: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x230580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_230584:
    // 0x230584: 0x86250030  lh          $a1, 0x30($s1)
    ctx->pc = 0x230584u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_230588:
    // 0x230588: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x230588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_23058c:
    // 0x23058c: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x23058cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_230590:
    // 0x230590: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x230590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_230594:
    // 0x230594: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x230594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_230598:
    // 0x230598: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x230598u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_23059c:
    // 0x23059c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23059cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2305a0:
    // 0x2305a0: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_2305a4:
    if (ctx->pc == 0x2305A4u) {
        ctx->pc = 0x2305A4u;
            // 0x2305a4: 0x12982b  sltu        $s3, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->pc = 0x2305A8u;
        goto label_2305a8;
    }
    ctx->pc = 0x2305A0u;
    {
        const bool branch_taken_0x2305a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2305A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2305A0u;
            // 0x2305a4: 0x12982b  sltu        $s3, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305a0) {
            ctx->pc = 0x230670u;
            goto label_230670;
        }
    }
    ctx->pc = 0x2305A8u;
label_2305a8:
    // 0x2305a8: 0xc098552  jal         func_261548
label_2305ac:
    if (ctx->pc == 0x2305ACu) {
        ctx->pc = 0x2305ACu;
            // 0x2305ac: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x2305B0u;
        goto label_2305b0;
    }
    ctx->pc = 0x2305A8u;
    SET_GPR_U32(ctx, 31, 0x2305B0u);
    ctx->pc = 0x2305ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2305A8u;
            // 0x2305ac: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2305B0u; }
        if (ctx->pc != 0x2305B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2305B0u; }
        if (ctx->pc != 0x2305B0u) { return; }
    }
    ctx->pc = 0x2305B0u;
label_2305b0:
    // 0x2305b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2305b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2305b4:
    // 0x2305b4: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_2305b8:
    if (ctx->pc == 0x2305B8u) {
        ctx->pc = 0x2305B8u;
            // 0x2305b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2305BCu;
        goto label_2305bc;
    }
    ctx->pc = 0x2305B4u;
    {
        const bool branch_taken_0x2305b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2305B4u;
            // 0x2305b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305b4) {
            ctx->pc = 0x230670u;
            goto label_230670;
        }
    }
    ctx->pc = 0x2305BCu;
label_2305bc:
    // 0x2305bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2305bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2305c0:
    // 0x2305c0: 0xc049cb6  jal         func_1272D8
label_2305c4:
    if (ctx->pc == 0x2305C4u) {
        ctx->pc = 0x2305C4u;
            // 0x2305c4: 0x240600e0  addiu       $a2, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x2305C8u;
        goto label_2305c8;
    }
    ctx->pc = 0x2305C0u;
    SET_GPR_U32(ctx, 31, 0x2305C8u);
    ctx->pc = 0x2305C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2305C0u;
            // 0x2305c4: 0x240600e0  addiu       $a2, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2305C8u; }
        if (ctx->pc != 0x2305C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2305C8u; }
        if (ctx->pc != 0x2305C8u) { return; }
    }
    ctx->pc = 0x2305C8u;
label_2305c8:
    // 0x2305c8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2305c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2305cc:
    // 0x2305cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2305ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2305d0:
    // 0x2305d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2305d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2305d4:
    // 0x2305d4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2305d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_2305d8:
    // 0x2305d8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x2305d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2305dc:
    // 0x2305dc: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2305dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_2305e0:
    // 0x2305e0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2305e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_2305e4:
    // 0x2305e4: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x2305e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_2305e8:
    // 0x2305e8: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x2305e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_2305ec:
    // 0x2305ec: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x2305ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_2305f0:
    // 0x2305f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2305f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2305f4:
    // 0x2305f4: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x2305f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_2305f8:
    // 0x2305f8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2305f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2305fc:
    // 0x2305fc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2305fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_230600:
    // 0x230600: 0x96220036  lhu         $v0, 0x36($s1)
    ctx->pc = 0x230600u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
label_230604:
    // 0x230604: 0xa6020036  sh          $v0, 0x36($s0)
    ctx->pc = 0x230604u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 2));
label_230608:
    // 0x230608: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x230608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_23060c:
    // 0x23060c: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x23060cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_230610:
    // 0x230610: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x230610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_230614:
    // 0x230614: 0xae0500cc  sw          $a1, 0xCC($s0)
    ctx->pc = 0x230614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 5));
label_230618:
    // 0x230618: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x230618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
label_23061c:
    // 0x23061c: 0xde250088  ld          $a1, 0x88($s1)
    ctx->pc = 0x23061cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 136)));
label_230620:
    // 0x230620: 0xc08c25a  jal         func_230968
label_230624:
    if (ctx->pc == 0x230624u) {
        ctx->pc = 0x230624u;
            // 0x230624: 0xde260050  ld          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x230628u;
        goto label_230628;
    }
    ctx->pc = 0x230620u;
    SET_GPR_U32(ctx, 31, 0x230628u);
    ctx->pc = 0x230624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230620u;
            // 0x230624: 0xde260050  ld          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230968u;
    if (runtime->hasFunction(0x230968u)) {
        auto targetFn = runtime->lookupFunction(0x230968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230628u; }
        if (ctx->pc != 0x230628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230968_0x230968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230628u; }
        if (ctx->pc != 0x230628u) { return; }
    }
    ctx->pc = 0x230628u;
label_230628:
    // 0x230628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23062c:
    // 0x23062c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23062cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230630:
    // 0x230630: 0xc08c1bc  jal         func_2306F0
label_230634:
    if (ctx->pc == 0x230634u) {
        ctx->pc = 0x230634u;
            // 0x230634: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230638u;
        goto label_230638;
    }
    ctx->pc = 0x230630u;
    SET_GPR_U32(ctx, 31, 0x230638u);
    ctx->pc = 0x230634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230630u;
            // 0x230634: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2306F0u;
    if (runtime->hasFunction(0x2306F0u)) {
        auto targetFn = runtime->lookupFunction(0x2306F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230638u; }
        if (ctx->pc != 0x230638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002306F0_0x2306f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230638u; }
        if (ctx->pc != 0x230638u) { return; }
    }
    ctx->pc = 0x230638u;
label_230638:
    // 0x230638: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x230638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23063c:
    // 0x23063c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230640:
    // 0x230640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230644:
    // 0x230644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x230644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230648:
    // 0x230648: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x230648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23064c:
    // 0x23064c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23064cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230650:
    // 0x230650: 0x40f809  jalr        $v0
label_230654:
    if (ctx->pc == 0x230654u) {
        ctx->pc = 0x230654u;
            // 0x230654: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230658u;
        goto label_230658;
    }
    ctx->pc = 0x230650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230658u);
        ctx->pc = 0x230654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230650u;
            // 0x230654: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x230658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x230658u; }
            if (ctx->pc != 0x230658u) { return; }
        }
        }
    }
    ctx->pc = 0x230658u;
label_230658:
    // 0x230658: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23065c:
    if (ctx->pc == 0x23065Cu) {
        ctx->pc = 0x23065Cu;
            // 0x23065c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230660u;
        goto label_230660;
    }
    ctx->pc = 0x230658u;
    {
        const bool branch_taken_0x230658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23065Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230658u;
            // 0x23065c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230658) {
            ctx->pc = 0x230678u;
            goto label_230678;
        }
    }
    ctx->pc = 0x230660u;
label_230660:
    // 0x230660: 0xc08c1d4  jal         func_230750
label_230664:
    if (ctx->pc == 0x230664u) {
        ctx->pc = 0x230664u;
            // 0x230664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230668u;
        goto label_230668;
    }
    ctx->pc = 0x230660u;
    SET_GPR_U32(ctx, 31, 0x230668u);
    ctx->pc = 0x230664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230660u;
            // 0x230664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230750u;
    if (runtime->hasFunction(0x230750u)) {
        auto targetFn = runtime->lookupFunction(0x230750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230668u; }
        if (ctx->pc != 0x230668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230750_0x230750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230668u; }
        if (ctx->pc != 0x230668u) { return; }
    }
    ctx->pc = 0x230668u;
label_230668:
    // 0x230668: 0xc098560  jal         func_261580
label_23066c:
    if (ctx->pc == 0x23066Cu) {
        ctx->pc = 0x23066Cu;
            // 0x23066c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230670u;
        goto label_230670;
    }
    ctx->pc = 0x230668u;
    SET_GPR_U32(ctx, 31, 0x230670u);
    ctx->pc = 0x23066Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230668u;
            // 0x23066c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230670u; }
        if (ctx->pc != 0x230670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230670u; }
        if (ctx->pc != 0x230670u) { return; }
    }
    ctx->pc = 0x230670u;
label_230670:
    // 0x230670: 0x10000018  b           . + 4 + (0x18 << 2)
label_230674:
    if (ctx->pc == 0x230674u) {
        ctx->pc = 0x230674u;
            // 0x230674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230678u;
        goto label_230678;
    }
    ctx->pc = 0x230670u;
    {
        const bool branch_taken_0x230670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230670u;
            // 0x230674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230670) {
            ctx->pc = 0x2306D4u;
            goto label_2306d4;
        }
    }
    ctx->pc = 0x230678u;
label_230678:
    // 0x230678: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
label_23067c:
    if (ctx->pc == 0x23067Cu) {
        ctx->pc = 0x23067Cu;
            // 0x23067c: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x230680u;
        goto label_230680;
    }
    ctx->pc = 0x230678u;
    {
        const bool branch_taken_0x230678 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x230678) {
            ctx->pc = 0x23067Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230678u;
            // 0x23067c: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2306B0u;
            goto label_2306b0;
        }
    }
    ctx->pc = 0x230680u;
label_230680:
    // 0x230680: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x230680u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_230684:
    // 0x230684: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x230684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_230688:
    // 0x230688: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23068c:
    if (ctx->pc == 0x23068Cu) {
        ctx->pc = 0x23068Cu;
            // 0x23068c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230690u;
        goto label_230690;
    }
    ctx->pc = 0x230688u;
    {
        const bool branch_taken_0x230688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23068Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230688u;
            // 0x23068c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230688) {
            ctx->pc = 0x230698u;
            goto label_230698;
        }
    }
    ctx->pc = 0x230690u;
label_230690:
    // 0x230690: 0xc08c23c  jal         func_2308F0
label_230694:
    if (ctx->pc == 0x230694u) {
        ctx->pc = 0x230694u;
            // 0x230694: 0x26250048  addiu       $a1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->pc = 0x230698u;
        goto label_230698;
    }
    ctx->pc = 0x230690u;
    SET_GPR_U32(ctx, 31, 0x230698u);
    ctx->pc = 0x230694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230690u;
            // 0x230694: 0x26250048  addiu       $a1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (runtime->hasFunction(0x2308F0u)) {
        auto targetFn = runtime->lookupFunction(0x2308F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230698u; }
        if (ctx->pc != 0x230698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002308F0_0x2308f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230698u; }
        if (ctx->pc != 0x230698u) { return; }
    }
    ctx->pc = 0x230698u;
label_230698:
    // 0x230698: 0xc08b6f0  jal         func_22DBC0
label_23069c:
    if (ctx->pc == 0x23069Cu) {
        ctx->pc = 0x23069Cu;
            // 0x23069c: 0x26240036  addiu       $a0, $s1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 54));
        ctx->pc = 0x2306A0u;
        goto label_2306a0;
    }
    ctx->pc = 0x230698u;
    SET_GPR_U32(ctx, 31, 0x2306A0u);
    ctx->pc = 0x23069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230698u;
            // 0x23069c: 0x26240036  addiu       $a0, $s1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (runtime->hasFunction(0x22DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x22DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306A0u; }
        if (ctx->pc != 0x2306A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DBC0_0x22dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306A0u; }
        if (ctx->pc != 0x2306A0u) { return; }
    }
    ctx->pc = 0x2306A0u;
label_2306a0:
    // 0x2306a0: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x2306a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_2306a4:
    // 0x2306a4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2306a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_2306a8:
    // 0x2306a8: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x2306a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_2306ac:
    // 0x2306ac: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2306acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_2306b0:
    // 0x2306b0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2306b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_2306b4:
    // 0x2306b4: 0x2484fa18  addiu       $a0, $a0, -0x5E8
    ctx->pc = 0x2306b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965784));
label_2306b8:
    // 0x2306b8: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x2306b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_2306bc:
    // 0x2306bc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2306bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2306c0:
    // 0x2306c0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x2306c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_2306c4:
    // 0x2306c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2306c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2306c8:
    // 0x2306c8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2306c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2306cc:
    // 0x2306cc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2306ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_2306d0:
    // 0x2306d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2306d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2306d4:
    // 0x2306d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2306d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2306d8:
    // 0x2306d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2306d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2306dc:
    // 0x2306dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2306dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2306e0:
    // 0x2306e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2306e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2306e4:
    // 0x2306e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2306e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2306e8:
    // 0x2306e8: 0x3e00008  jr          $ra
label_2306ec:
    if (ctx->pc == 0x2306ECu) {
        ctx->pc = 0x2306ECu;
            // 0x2306ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2306F0u;
        goto label_fallthrough_0x2306e8;
    }
    ctx->pc = 0x2306E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2306ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2306E8u;
            // 0x2306ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2306e8:
    ctx->pc = 0x2306F0u;
    ctx->pc = 0x2306f0u;
}
