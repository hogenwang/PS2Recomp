#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D74E8
// Address: 0x2d74e8 - 0x2d77e0
void sub_002D74E8_0x2d74e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D74E8_0x2d74e8");
#endif

    switch (ctx->pc) {
        case 0x2d74e8u: goto label_2d74e8;
        case 0x2d74ecu: goto label_2d74ec;
        case 0x2d74f0u: goto label_2d74f0;
        case 0x2d74f4u: goto label_2d74f4;
        case 0x2d74f8u: goto label_2d74f8;
        case 0x2d74fcu: goto label_2d74fc;
        case 0x2d7500u: goto label_2d7500;
        case 0x2d7504u: goto label_2d7504;
        case 0x2d7508u: goto label_2d7508;
        case 0x2d750cu: goto label_2d750c;
        case 0x2d7510u: goto label_2d7510;
        case 0x2d7514u: goto label_2d7514;
        case 0x2d7518u: goto label_2d7518;
        case 0x2d751cu: goto label_2d751c;
        case 0x2d7520u: goto label_2d7520;
        case 0x2d7524u: goto label_2d7524;
        case 0x2d7528u: goto label_2d7528;
        case 0x2d752cu: goto label_2d752c;
        case 0x2d7530u: goto label_2d7530;
        case 0x2d7534u: goto label_2d7534;
        case 0x2d7538u: goto label_2d7538;
        case 0x2d753cu: goto label_2d753c;
        case 0x2d7540u: goto label_2d7540;
        case 0x2d7544u: goto label_2d7544;
        case 0x2d7548u: goto label_2d7548;
        case 0x2d754cu: goto label_2d754c;
        case 0x2d7550u: goto label_2d7550;
        case 0x2d7554u: goto label_2d7554;
        case 0x2d7558u: goto label_2d7558;
        case 0x2d755cu: goto label_2d755c;
        case 0x2d7560u: goto label_2d7560;
        case 0x2d7564u: goto label_2d7564;
        case 0x2d7568u: goto label_2d7568;
        case 0x2d756cu: goto label_2d756c;
        case 0x2d7570u: goto label_2d7570;
        case 0x2d7574u: goto label_2d7574;
        case 0x2d7578u: goto label_2d7578;
        case 0x2d757cu: goto label_2d757c;
        case 0x2d7580u: goto label_2d7580;
        case 0x2d7584u: goto label_2d7584;
        case 0x2d7588u: goto label_2d7588;
        case 0x2d758cu: goto label_2d758c;
        case 0x2d7590u: goto label_2d7590;
        case 0x2d7594u: goto label_2d7594;
        case 0x2d7598u: goto label_2d7598;
        case 0x2d759cu: goto label_2d759c;
        case 0x2d75a0u: goto label_2d75a0;
        case 0x2d75a4u: goto label_2d75a4;
        case 0x2d75a8u: goto label_2d75a8;
        case 0x2d75acu: goto label_2d75ac;
        case 0x2d75b0u: goto label_2d75b0;
        case 0x2d75b4u: goto label_2d75b4;
        case 0x2d75b8u: goto label_2d75b8;
        case 0x2d75bcu: goto label_2d75bc;
        case 0x2d75c0u: goto label_2d75c0;
        case 0x2d75c4u: goto label_2d75c4;
        case 0x2d75c8u: goto label_2d75c8;
        case 0x2d75ccu: goto label_2d75cc;
        case 0x2d75d0u: goto label_2d75d0;
        case 0x2d75d4u: goto label_2d75d4;
        case 0x2d75d8u: goto label_2d75d8;
        case 0x2d75dcu: goto label_2d75dc;
        case 0x2d75e0u: goto label_2d75e0;
        case 0x2d75e4u: goto label_2d75e4;
        case 0x2d75e8u: goto label_2d75e8;
        case 0x2d75ecu: goto label_2d75ec;
        case 0x2d75f0u: goto label_2d75f0;
        case 0x2d75f4u: goto label_2d75f4;
        case 0x2d75f8u: goto label_2d75f8;
        case 0x2d75fcu: goto label_2d75fc;
        case 0x2d7600u: goto label_2d7600;
        case 0x2d7604u: goto label_2d7604;
        case 0x2d7608u: goto label_2d7608;
        case 0x2d760cu: goto label_2d760c;
        case 0x2d7610u: goto label_2d7610;
        case 0x2d7614u: goto label_2d7614;
        case 0x2d7618u: goto label_2d7618;
        case 0x2d761cu: goto label_2d761c;
        case 0x2d7620u: goto label_2d7620;
        case 0x2d7624u: goto label_2d7624;
        case 0x2d7628u: goto label_2d7628;
        case 0x2d762cu: goto label_2d762c;
        case 0x2d7630u: goto label_2d7630;
        case 0x2d7634u: goto label_2d7634;
        case 0x2d7638u: goto label_2d7638;
        case 0x2d763cu: goto label_2d763c;
        case 0x2d7640u: goto label_2d7640;
        case 0x2d7644u: goto label_2d7644;
        case 0x2d7648u: goto label_2d7648;
        case 0x2d764cu: goto label_2d764c;
        case 0x2d7650u: goto label_2d7650;
        case 0x2d7654u: goto label_2d7654;
        case 0x2d7658u: goto label_2d7658;
        case 0x2d765cu: goto label_2d765c;
        case 0x2d7660u: goto label_2d7660;
        case 0x2d7664u: goto label_2d7664;
        case 0x2d7668u: goto label_2d7668;
        case 0x2d766cu: goto label_2d766c;
        case 0x2d7670u: goto label_2d7670;
        case 0x2d7674u: goto label_2d7674;
        case 0x2d7678u: goto label_2d7678;
        case 0x2d767cu: goto label_2d767c;
        case 0x2d7680u: goto label_2d7680;
        case 0x2d7684u: goto label_2d7684;
        case 0x2d7688u: goto label_2d7688;
        case 0x2d768cu: goto label_2d768c;
        case 0x2d7690u: goto label_2d7690;
        case 0x2d7694u: goto label_2d7694;
        case 0x2d7698u: goto label_2d7698;
        case 0x2d769cu: goto label_2d769c;
        case 0x2d76a0u: goto label_2d76a0;
        case 0x2d76a4u: goto label_2d76a4;
        case 0x2d76a8u: goto label_2d76a8;
        case 0x2d76acu: goto label_2d76ac;
        case 0x2d76b0u: goto label_2d76b0;
        case 0x2d76b4u: goto label_2d76b4;
        case 0x2d76b8u: goto label_2d76b8;
        case 0x2d76bcu: goto label_2d76bc;
        case 0x2d76c0u: goto label_2d76c0;
        case 0x2d76c4u: goto label_2d76c4;
        case 0x2d76c8u: goto label_2d76c8;
        case 0x2d76ccu: goto label_2d76cc;
        case 0x2d76d0u: goto label_2d76d0;
        case 0x2d76d4u: goto label_2d76d4;
        case 0x2d76d8u: goto label_2d76d8;
        case 0x2d76dcu: goto label_2d76dc;
        case 0x2d76e0u: goto label_2d76e0;
        case 0x2d76e4u: goto label_2d76e4;
        case 0x2d76e8u: goto label_2d76e8;
        case 0x2d76ecu: goto label_2d76ec;
        case 0x2d76f0u: goto label_2d76f0;
        case 0x2d76f4u: goto label_2d76f4;
        case 0x2d76f8u: goto label_2d76f8;
        case 0x2d76fcu: goto label_2d76fc;
        case 0x2d7700u: goto label_2d7700;
        case 0x2d7704u: goto label_2d7704;
        case 0x2d7708u: goto label_2d7708;
        case 0x2d770cu: goto label_2d770c;
        case 0x2d7710u: goto label_2d7710;
        case 0x2d7714u: goto label_2d7714;
        case 0x2d7718u: goto label_2d7718;
        case 0x2d771cu: goto label_2d771c;
        case 0x2d7720u: goto label_2d7720;
        case 0x2d7724u: goto label_2d7724;
        case 0x2d7728u: goto label_2d7728;
        case 0x2d772cu: goto label_2d772c;
        case 0x2d7730u: goto label_2d7730;
        case 0x2d7734u: goto label_2d7734;
        case 0x2d7738u: goto label_2d7738;
        case 0x2d773cu: goto label_2d773c;
        case 0x2d7740u: goto label_2d7740;
        case 0x2d7744u: goto label_2d7744;
        case 0x2d7748u: goto label_2d7748;
        case 0x2d774cu: goto label_2d774c;
        case 0x2d7750u: goto label_2d7750;
        case 0x2d7754u: goto label_2d7754;
        case 0x2d7758u: goto label_2d7758;
        case 0x2d775cu: goto label_2d775c;
        case 0x2d7760u: goto label_2d7760;
        case 0x2d7764u: goto label_2d7764;
        case 0x2d7768u: goto label_2d7768;
        case 0x2d776cu: goto label_2d776c;
        case 0x2d7770u: goto label_2d7770;
        case 0x2d7774u: goto label_2d7774;
        case 0x2d7778u: goto label_2d7778;
        case 0x2d777cu: goto label_2d777c;
        case 0x2d7780u: goto label_2d7780;
        case 0x2d7784u: goto label_2d7784;
        case 0x2d7788u: goto label_2d7788;
        case 0x2d778cu: goto label_2d778c;
        case 0x2d7790u: goto label_2d7790;
        case 0x2d7794u: goto label_2d7794;
        case 0x2d7798u: goto label_2d7798;
        case 0x2d779cu: goto label_2d779c;
        case 0x2d77a0u: goto label_2d77a0;
        case 0x2d77a4u: goto label_2d77a4;
        case 0x2d77a8u: goto label_2d77a8;
        case 0x2d77acu: goto label_2d77ac;
        case 0x2d77b0u: goto label_2d77b0;
        case 0x2d77b4u: goto label_2d77b4;
        case 0x2d77b8u: goto label_2d77b8;
        case 0x2d77bcu: goto label_2d77bc;
        case 0x2d77c0u: goto label_2d77c0;
        case 0x2d77c4u: goto label_2d77c4;
        case 0x2d77c8u: goto label_2d77c8;
        case 0x2d77ccu: goto label_2d77cc;
        case 0x2d77d0u: goto label_2d77d0;
        case 0x2d77d4u: goto label_2d77d4;
        case 0x2d77d8u: goto label_2d77d8;
        case 0x2d77dcu: goto label_2d77dc;
        default: break;
    }

    ctx->pc = 0x2d74e8u;

label_2d74e8:
    // 0x2d74e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d74e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d74ec:
    // 0x2d74ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d74ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d74f0:
    // 0x2d74f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d74f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d74f4:
    // 0x2d74f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d74f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d74f8:
    // 0x2d74f8: 0x80b5d40  j           func_2D7500
label_2d74fc:
    if (ctx->pc == 0x2D74FCu) {
        ctx->pc = 0x2D74FCu;
            // 0x2d74fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2D7500u;
        goto label_2d7500;
    }
    ctx->pc = 0x2D74F8u;
    ctx->pc = 0x2D74FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D74F8u;
            // 0x2d74fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7500u;
    goto label_2d7500;
    ctx->pc = 0x2D7500u;
label_2d7500:
    // 0x2d7500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d7500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d7504:
    // 0x2d7504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d7508:
    // 0x2d7508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d750c:
    // 0x2d750c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d750cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d7510:
    // 0x2d7510: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d7510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d7514:
    // 0x2d7514: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d7514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d7518:
    // 0x2d7518: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d751c:
    // 0x2d751c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d751cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d7520:
    // 0x2d7520: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d7520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d7524:
    // 0x2d7524: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2d7524u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d7528:
    // 0x2d7528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d752c:
    // 0x2d752c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d752cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2d7530:
    // 0x2d7530: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d7530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7534:
    // 0x2d7534: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d7534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d7538:
    // 0x2d7538: 0x24b2000a  addiu       $s2, $a1, 0xA
    ctx->pc = 0x2d7538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
label_2d753c:
    // 0x2d753c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2d753cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2d7540:
    // 0x2d7540: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x2d7540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2d7544:
    // 0x2d7544: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d7544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2d7548:
    // 0x2d7548: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2d754c:
    if (ctx->pc == 0x2D754Cu) {
        ctx->pc = 0x2D754Cu;
            // 0x2d754c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->pc = 0x2D7550u;
        goto label_2d7550;
    }
    ctx->pc = 0x2D7548u;
    {
        const bool branch_taken_0x2d7548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D754Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7548u;
            // 0x2d754c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7548) {
            ctx->pc = 0x2D7594u;
            goto label_2d7594;
        }
    }
    ctx->pc = 0x2D7550u;
label_2d7550:
    // 0x2d7550: 0xc0b60b8  jal         func_2D82E0
label_2d7554:
    if (ctx->pc == 0x2D7554u) {
        ctx->pc = 0x2D7554u;
            // 0x2d7554: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x2D7558u;
        goto label_2d7558;
    }
    ctx->pc = 0x2D7550u;
    SET_GPR_U32(ctx, 31, 0x2D7558u);
    ctx->pc = 0x2D7554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7550u;
            // 0x2d7554: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7558u; }
        if (ctx->pc != 0x2D7558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7558u; }
        if (ctx->pc != 0x2D7558u) { return; }
    }
    ctx->pc = 0x2D7558u;
label_2d7558:
    // 0x2d7558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d7558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d755c:
    // 0x2d755c: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x2d755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_2d7560:
    // 0x2d7560: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_2d7564:
    if (ctx->pc == 0x2D7564u) {
        ctx->pc = 0x2D7564u;
            // 0x2d7564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7568u;
        goto label_2d7568;
    }
    ctx->pc = 0x2D7560u;
    {
        const bool branch_taken_0x2d7560 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7560u;
            // 0x2d7564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7560) {
            ctx->pc = 0x2D75F0u;
            goto label_2d75f0;
        }
    }
    ctx->pc = 0x2D7568u;
label_2d7568:
    // 0x2d7568: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d7568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d756c:
    // 0x2d756c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d756cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d7570:
    // 0x2d7570: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x2d7570u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2d7574:
    // 0x2d7574: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2d7574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2d7578:
    // 0x2d7578: 0xc0b6098  jal         func_2D8260
label_2d757c:
    if (ctx->pc == 0x2D757Cu) {
        ctx->pc = 0x2D757Cu;
            // 0x2d757c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x2D7580u;
        goto label_2d7580;
    }
    ctx->pc = 0x2D7578u;
    SET_GPR_U32(ctx, 31, 0x2D7580u);
    ctx->pc = 0x2D757Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7578u;
            // 0x2d757c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7580u; }
        if (ctx->pc != 0x2D7580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7580u; }
        if (ctx->pc != 0x2D7580u) { return; }
    }
    ctx->pc = 0x2D7580u;
label_2d7580:
    // 0x2d7580: 0xc0b60dc  jal         func_2D8370
label_2d7584:
    if (ctx->pc == 0x2D7584u) {
        ctx->pc = 0x2D7584u;
            // 0x2d7584: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x2D7588u;
        goto label_2d7588;
    }
    ctx->pc = 0x2D7580u;
    SET_GPR_U32(ctx, 31, 0x2D7588u);
    ctx->pc = 0x2D7584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7580u;
            // 0x2d7584: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7588u; }
        if (ctx->pc != 0x2D7588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7588u; }
        if (ctx->pc != 0x2D7588u) { return; }
    }
    ctx->pc = 0x2D7588u;
label_2d7588:
    // 0x2d7588: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2d7588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_2d758c:
    // 0x2d758c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x2d758cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_2d7590:
    // 0x2d7590: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d7590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7594:
    // 0x2d7594: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2d7594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2d7598:
    // 0x2d7598: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d7598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d759c:
    // 0x2d759c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d75a0:
    // 0x2d75a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d75a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d75a4:
    // 0x2d75a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d75a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d75a8:
    // 0x2d75a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d75ac:
    // 0x2d75ac: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x2d75acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_2d75b0:
    // 0x2d75b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d75b4:
    // 0x2d75b4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d75b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d75b8:
    // 0x2d75b8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2d75bc:
    // 0x2d75bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d75c0:
    // 0x2d75c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d75c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d75c4:
    // 0x2d75c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d75c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d75c8:
    // 0x2d75c8: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x2d75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
label_2d75cc:
    // 0x2d75cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d75d0:
    // 0x2d75d0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d75d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d75d4:
    // 0x2d75d4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d75d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2d75d8:
    // 0x2d75d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d75d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d75dc:
    // 0x2d75dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d75dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2d75e0:
    // 0x2d75e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d75e4:
    // 0x2d75e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d75e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d75e8:
    // 0x2d75e8: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x2d75e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
label_2d75ec:
    // 0x2d75ec: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2d75ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2d75f0:
    // 0x2d75f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d75f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d75f4:
    // 0x2d75f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d75f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d75f8:
    // 0x2d75f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d75f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d75fc:
    // 0x2d75fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d75fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d7600:
    // 0x2d7600: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d7600u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7604:
    // 0x2d7604: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d7604u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d7608:
    // 0x2d7608: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d7608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d760c:
    // 0x2d760c: 0x3e00008  jr          $ra
label_2d7610:
    if (ctx->pc == 0x2D7610u) {
        ctx->pc = 0x2D7610u;
            // 0x2d7610: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2D7614u;
        goto label_2d7614;
    }
    ctx->pc = 0x2D760Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D760Cu;
            // 0x2d7610: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7614u;
label_2d7614:
    // 0x2d7614: 0x0  nop
    ctx->pc = 0x2d7614u;
    // NOP
label_2d7618:
    // 0x2d7618: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d761c:
    // 0x2d761c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d761cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d7620:
    // 0x2d7620: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d7620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d7624:
    // 0x2d7624: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d7624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d7628:
    // 0x2d7628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d762c:
    // 0x2d762c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d7630:
    // 0x2d7630: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d7630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d7634:
    // 0x2d7634: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d7634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d7638:
    // 0x2d7638: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2d763c:
    if (ctx->pc == 0x2D763Cu) {
        ctx->pc = 0x2D763Cu;
            // 0x2d763c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7640u;
        goto label_2d7640;
    }
    ctx->pc = 0x2D7638u;
    {
        const bool branch_taken_0x2d7638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7638u;
            // 0x2d763c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7638) {
            ctx->pc = 0x2D7660u;
            goto label_2d7660;
        }
    }
    ctx->pc = 0x2D7640u;
label_2d7640:
    // 0x2d7640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d7644:
    // 0x2d7644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d7648:
    // 0x2d7648: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d7648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d764c:
    // 0x2d764c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d764cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d7650:
    // 0x2d7650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d7650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7654:
    // 0x2d7654: 0x80b5cf2  j           func_2D73C8
label_2d7658:
    if (ctx->pc == 0x2D7658u) {
        ctx->pc = 0x2D7658u;
            // 0x2d7658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D765Cu;
        goto label_2d765c;
    }
    ctx->pc = 0x2D7654u;
    ctx->pc = 0x2D7658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7654u;
            // 0x2d7658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D73C8u;
    if (runtime->hasFunction(0x2D73C8u)) {
        auto targetFn = runtime->lookupFunction(0x2D73C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002D73C8_0x2d73c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D765Cu;
label_2d765c:
    // 0x2d765c: 0x0  nop
    ctx->pc = 0x2d765cu;
    // NOP
label_2d7660:
    // 0x2d7660: 0xc0b5df8  jal         func_2D77E0
label_2d7664:
    if (ctx->pc == 0x2D7664u) {
        ctx->pc = 0x2D7664u;
            // 0x2d7664: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7668u;
        goto label_2d7668;
    }
    ctx->pc = 0x2D7660u;
    SET_GPR_U32(ctx, 31, 0x2D7668u);
    ctx->pc = 0x2D7664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7660u;
            // 0x2d7664: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (runtime->hasFunction(0x2D77E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D77E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7668u; }
        if (ctx->pc != 0x2D7668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D77E0_0x2d77e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7668u; }
        if (ctx->pc != 0x2D7668u) { return; }
    }
    ctx->pc = 0x2D7668u;
label_2d7668:
    // 0x2d7668: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d766c:
    // 0x2d766c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_2d7670:
    if (ctx->pc == 0x2D7670u) {
        ctx->pc = 0x2D7670u;
            // 0x2d7670: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->pc = 0x2D7674u;
        goto label_2d7674;
    }
    ctx->pc = 0x2D766Cu;
    {
        const bool branch_taken_0x2d766c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D766Cu;
            // 0x2d7670: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d766c) {
            ctx->pc = 0x2D76D4u;
            goto label_2d76d4;
        }
    }
    ctx->pc = 0x2D7674u;
label_2d7674:
    // 0x2d7674: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2d7674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d7678:
    // 0x2d7678: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
label_2d767c:
    if (ctx->pc == 0x2D767Cu) {
        ctx->pc = 0x2D767Cu;
            // 0x2d767c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2D7680u;
        goto label_2d7680;
    }
    ctx->pc = 0x2D7678u;
    {
        const bool branch_taken_0x2d7678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7678) {
            ctx->pc = 0x2D767Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7678u;
            // 0x2d767c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D76D8u;
            goto label_2d76d8;
        }
    }
    ctx->pc = 0x2D7680u;
label_2d7680:
    // 0x2d7680: 0xc0b60b8  jal         func_2D82E0
label_2d7684:
    if (ctx->pc == 0x2D7684u) {
        ctx->pc = 0x2D7684u;
            // 0x2d7684: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7688u;
        goto label_2d7688;
    }
    ctx->pc = 0x2D7680u;
    SET_GPR_U32(ctx, 31, 0x2D7688u);
    ctx->pc = 0x2D7684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7680u;
            // 0x2d7684: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7688u; }
        if (ctx->pc != 0x2D7688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7688u; }
        if (ctx->pc != 0x2D7688u) { return; }
    }
    ctx->pc = 0x2D7688u;
label_2d7688:
    // 0x2d7688: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d7688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d768c:
    // 0x2d768c: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x2d768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_2d7690:
    // 0x2d7690: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2d7694:
    if (ctx->pc == 0x2D7694u) {
        ctx->pc = 0x2D7694u;
            // 0x2d7694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7698u;
        goto label_2d7698;
    }
    ctx->pc = 0x2D7690u;
    {
        const bool branch_taken_0x2d7690 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7690u;
            // 0x2d7694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7690) {
            ctx->pc = 0x2D76D4u;
            goto label_2d76d4;
        }
    }
    ctx->pc = 0x2D7698u;
label_2d7698:
    // 0x2d7698: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2d7698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d769c:
    // 0x2d769c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d769cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d76a0:
    // 0x2d76a0: 0x266102b  sltu        $v0, $s3, $a2
    ctx->pc = 0x2d76a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2d76a4:
    // 0x2d76a4: 0xc0b6098  jal         func_2D8260
label_2d76a8:
    if (ctx->pc == 0x2D76A8u) {
        ctx->pc = 0x2D76A8u;
            // 0x2d76a8: 0x262300b  movn        $a2, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
        ctx->pc = 0x2D76ACu;
        goto label_2d76ac;
    }
    ctx->pc = 0x2D76A4u;
    SET_GPR_U32(ctx, 31, 0x2D76ACu);
    ctx->pc = 0x2D76A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D76A4u;
            // 0x2d76a8: 0x262300b  movn        $a2, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76ACu; }
        if (ctx->pc != 0x2D76ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76ACu; }
        if (ctx->pc != 0x2D76ACu) { return; }
    }
    ctx->pc = 0x2D76ACu;
label_2d76ac:
    // 0x2d76ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d76acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d76b0:
    // 0x2d76b0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2d76b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d76b4:
    // 0x2d76b4: 0xc0b608e  jal         func_2D8238
label_2d76b8:
    if (ctx->pc == 0x2D76B8u) {
        ctx->pc = 0x2D76B8u;
            // 0x2d76b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D76BCu;
        goto label_2d76bc;
    }
    ctx->pc = 0x2D76B4u;
    SET_GPR_U32(ctx, 31, 0x2D76BCu);
    ctx->pc = 0x2D76B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D76B4u;
            // 0x2d76b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76BCu; }
        if (ctx->pc != 0x2D76BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76BCu; }
        if (ctx->pc != 0x2D76BCu) { return; }
    }
    ctx->pc = 0x2D76BCu;
label_2d76bc:
    // 0x2d76bc: 0xc0b60dc  jal         func_2D8370
label_2d76c0:
    if (ctx->pc == 0x2D76C0u) {
        ctx->pc = 0x2D76C0u;
            // 0x2d76c0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2D76C4u;
        goto label_2d76c4;
    }
    ctx->pc = 0x2D76BCu;
    SET_GPR_U32(ctx, 31, 0x2D76C4u);
    ctx->pc = 0x2D76C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D76BCu;
            // 0x2d76c0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76C4u; }
        if (ctx->pc != 0x2D76C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76C4u; }
        if (ctx->pc != 0x2D76C4u) { return; }
    }
    ctx->pc = 0x2D76C4u;
label_2d76c4:
    // 0x2d76c4: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2d76c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_2d76c8:
    // 0x2d76c8: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x2d76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_2d76cc:
    // 0x2d76cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d76ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d76d0:
    // 0x2d76d0: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2d76d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_2d76d4:
    // 0x2d76d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d76d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d76d8:
    // 0x2d76d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d76d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d76dc:
    // 0x2d76dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d76dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d76e0:
    // 0x2d76e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d76e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d76e4:
    // 0x2d76e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d76e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d76e8:
    // 0x2d76e8: 0x3e00008  jr          $ra
label_2d76ec:
    if (ctx->pc == 0x2D76ECu) {
        ctx->pc = 0x2D76ECu;
            // 0x2d76ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D76F0u;
        goto label_2d76f0;
    }
    ctx->pc = 0x2D76E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D76ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D76E8u;
            // 0x2d76ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D76F0u;
label_2d76f0:
    // 0x2d76f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d76f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d76f4:
    // 0x2d76f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d76f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d76f8:
    // 0x2d76f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d76f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d76fc:
    // 0x2d76fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d76fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d7700:
    // 0x2d7700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d7700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d7704:
    // 0x2d7704: 0xc0b5df8  jal         func_2D77E0
label_2d7708:
    if (ctx->pc == 0x2D7708u) {
        ctx->pc = 0x2D7708u;
            // 0x2d7708: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2D770Cu;
        goto label_2d770c;
    }
    ctx->pc = 0x2D7704u;
    SET_GPR_U32(ctx, 31, 0x2D770Cu);
    ctx->pc = 0x2D7708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7704u;
            // 0x2d7708: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (runtime->hasFunction(0x2D77E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D77E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D770Cu; }
        if (ctx->pc != 0x2D770Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D77E0_0x2d77e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D770Cu; }
        if (ctx->pc != 0x2D770Cu) { return; }
    }
    ctx->pc = 0x2D770Cu;
label_2d770c:
    // 0x2d770c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d770cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7710:
    // 0x2d7710: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2d7714:
    if (ctx->pc == 0x2D7714u) {
        ctx->pc = 0x2D7714u;
            // 0x2d7714: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->pc = 0x2D7718u;
        goto label_2d7718;
    }
    ctx->pc = 0x2D7710u;
    {
        const bool branch_taken_0x2d7710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7710u;
            // 0x2d7714: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7710) {
            ctx->pc = 0x2D7758u;
            goto label_2d7758;
        }
    }
    ctx->pc = 0x2D7718u;
label_2d7718:
    // 0x2d7718: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d7718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d771c:
    // 0x2d771c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2d7720:
    if (ctx->pc == 0x2D7720u) {
        ctx->pc = 0x2D7720u;
            // 0x2d7720: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2D7724u;
        goto label_2d7724;
    }
    ctx->pc = 0x2D771Cu;
    {
        const bool branch_taken_0x2d771c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d771c) {
            ctx->pc = 0x2D7720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D771Cu;
            // 0x2d7720: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D7738u;
            goto label_2d7738;
        }
    }
    ctx->pc = 0x2D7724u;
label_2d7724:
    // 0x2d7724: 0x40f809  jalr        $v0
label_2d7728:
    if (ctx->pc == 0x2D7728u) {
        ctx->pc = 0x2D7728u;
            // 0x2d7728: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2D772Cu;
        goto label_2d772c;
    }
    ctx->pc = 0x2D7724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D772Cu);
        ctx->pc = 0x2D7728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7724u;
            // 0x2d7728: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D772Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D772Cu; }
            if (ctx->pc != 0x2D772Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2D772Cu;
label_2d772c:
    // 0x2d772c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2d7730:
    if (ctx->pc == 0x2D7730u) {
        ctx->pc = 0x2D7730u;
            // 0x2d7730: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2D7734u;
        goto label_2d7734;
    }
    ctx->pc = 0x2D772Cu;
    {
        const bool branch_taken_0x2d772c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D772Cu;
            // 0x2d7730: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d772c) {
            ctx->pc = 0x2D7750u;
            goto label_2d7750;
        }
    }
    ctx->pc = 0x2D7734u;
label_2d7734:
    // 0x2d7734: 0x0  nop
    ctx->pc = 0x2d7734u;
    // NOP
label_2d7738:
    // 0x2d7738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d773c:
    // 0x2d773c: 0xc0b608e  jal         func_2D8238
label_2d7740:
    if (ctx->pc == 0x2D7740u) {
        ctx->pc = 0x2D7740u;
            // 0x2d7740: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2D7744u;
        goto label_2d7744;
    }
    ctx->pc = 0x2D773Cu;
    SET_GPR_U32(ctx, 31, 0x2D7744u);
    ctx->pc = 0x2D7740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D773Cu;
            // 0x2d7740: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7744u; }
        if (ctx->pc != 0x2D7744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7744u; }
        if (ctx->pc != 0x2D7744u) { return; }
    }
    ctx->pc = 0x2D7744u;
label_2d7744:
    // 0x2d7744: 0xc0b60dc  jal         func_2D8370
label_2d7748:
    if (ctx->pc == 0x2D7748u) {
        ctx->pc = 0x2D7748u;
            // 0x2d7748: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2D774Cu;
        goto label_2d774c;
    }
    ctx->pc = 0x2D7744u;
    SET_GPR_U32(ctx, 31, 0x2D774Cu);
    ctx->pc = 0x2D7748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7744u;
            // 0x2d7748: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D774Cu; }
        if (ctx->pc != 0x2D774Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D774Cu; }
        if (ctx->pc != 0x2D774Cu) { return; }
    }
    ctx->pc = 0x2D774Cu;
label_2d774c:
    // 0x2d774c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d774cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d7750:
    // 0x2d7750: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7754:
    // 0x2d7754: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2d7754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2d7758:
    // 0x2d7758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d775c:
    // 0x2d775c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d775cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d7760:
    // 0x2d7760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d7764:
    // 0x2d7764: 0x3e00008  jr          $ra
label_2d7768:
    if (ctx->pc == 0x2D7768u) {
        ctx->pc = 0x2D7768u;
            // 0x2d7768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2D776Cu;
        goto label_2d776c;
    }
    ctx->pc = 0x2D7764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7764u;
            // 0x2d7768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D776Cu;
label_2d776c:
    // 0x2d776c: 0x0  nop
    ctx->pc = 0x2d776cu;
    // NOP
label_2d7770:
    // 0x2d7770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d7774:
    // 0x2d7774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d7778:
    // 0x2d7778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d777c:
    // 0x2d777c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d777cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d7780:
    // 0x2d7780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d7780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d7784:
    // 0x2d7784: 0xc0b5df8  jal         func_2D77E0
label_2d7788:
    if (ctx->pc == 0x2D7788u) {
        ctx->pc = 0x2D7788u;
            // 0x2d7788: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2D778Cu;
        goto label_2d778c;
    }
    ctx->pc = 0x2D7784u;
    SET_GPR_U32(ctx, 31, 0x2D778Cu);
    ctx->pc = 0x2D7788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7784u;
            // 0x2d7788: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (runtime->hasFunction(0x2D77E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D77E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D778Cu; }
        if (ctx->pc != 0x2D778Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D77E0_0x2d77e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D778Cu; }
        if (ctx->pc != 0x2D778Cu) { return; }
    }
    ctx->pc = 0x2D778Cu;
label_2d778c:
    // 0x2d778c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d778cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7790:
    // 0x2d7790: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2d7794:
    if (ctx->pc == 0x2D7794u) {
        ctx->pc = 0x2D7794u;
            // 0x2d7794: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->pc = 0x2D7798u;
        goto label_2d7798;
    }
    ctx->pc = 0x2D7790u;
    {
        const bool branch_taken_0x2d7790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7790u;
            // 0x2d7794: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7790) {
            ctx->pc = 0x2D77CCu;
            goto label_2d77cc;
        }
    }
    ctx->pc = 0x2D7798u;
label_2d7798:
    // 0x2d7798: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d7798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d779c:
    // 0x2d779c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2d77a0:
    if (ctx->pc == 0x2D77A0u) {
        ctx->pc = 0x2D77A4u;
        goto label_2d77a4;
    }
    ctx->pc = 0x2D779Cu;
    {
        const bool branch_taken_0x2d779c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d779c) {
            ctx->pc = 0x2D77B8u;
            goto label_2d77b8;
        }
    }
    ctx->pc = 0x2D77A4u;
label_2d77a4:
    // 0x2d77a4: 0x40f809  jalr        $v0
label_2d77a8:
    if (ctx->pc == 0x2D77A8u) {
        ctx->pc = 0x2D77A8u;
            // 0x2d77a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2D77ACu;
        goto label_2d77ac;
    }
    ctx->pc = 0x2D77A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D77ACu);
        ctx->pc = 0x2D77A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D77A4u;
            // 0x2d77a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D77ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D77ACu; }
            if (ctx->pc != 0x2D77ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2D77ACu;
label_2d77ac:
    // 0x2d77ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_2d77b0:
    if (ctx->pc == 0x2D77B0u) {
        ctx->pc = 0x2D77B0u;
            // 0x2d77b0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2D77B4u;
        goto label_2d77b4;
    }
    ctx->pc = 0x2D77ACu;
    {
        const bool branch_taken_0x2d77ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D77B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D77ACu;
            // 0x2d77b0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d77ac) {
            ctx->pc = 0x2D77C4u;
            goto label_2d77c4;
        }
    }
    ctx->pc = 0x2D77B4u;
label_2d77b4:
    // 0x2d77b4: 0x0  nop
    ctx->pc = 0x2d77b4u;
    // NOP
label_2d77b8:
    // 0x2d77b8: 0xc0b60dc  jal         func_2D8370
label_2d77bc:
    if (ctx->pc == 0x2D77BCu) {
        ctx->pc = 0x2D77BCu;
            // 0x2d77bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2D77C0u;
        goto label_2d77c0;
    }
    ctx->pc = 0x2D77B8u;
    SET_GPR_U32(ctx, 31, 0x2D77C0u);
    ctx->pc = 0x2D77BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D77B8u;
            // 0x2d77bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D77C0u; }
        if (ctx->pc != 0x2D77C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D77C0u; }
        if (ctx->pc != 0x2D77C0u) { return; }
    }
    ctx->pc = 0x2D77C0u;
label_2d77c0:
    // 0x2d77c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d77c4:
    // 0x2d77c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d77c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d77c8:
    // 0x2d77c8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2d77c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2d77cc:
    // 0x2d77cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d77ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d77d0:
    // 0x2d77d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d77d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d77d4:
    // 0x2d77d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d77d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d77d8:
    // 0x2d77d8: 0x3e00008  jr          $ra
label_2d77dc:
    if (ctx->pc == 0x2D77DCu) {
        ctx->pc = 0x2D77DCu;
            // 0x2d77dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2D77E0u;
        goto label_fallthrough_0x2d77d8;
    }
    ctx->pc = 0x2D77D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D77DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D77D8u;
            // 0x2d77dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d77d8:
    ctx->pc = 0x2D77E0u;
    ctx->pc = 0x2d77e0u;
}
