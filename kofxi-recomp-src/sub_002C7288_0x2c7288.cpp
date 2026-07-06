#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C7288
// Address: 0x2c7288 - 0x2c77b8
void sub_002C7288_0x2c7288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7288_0x2c7288");
#endif

    switch (ctx->pc) {
        case 0x2c7288u: goto label_2c7288;
        case 0x2c728cu: goto label_2c728c;
        case 0x2c7290u: goto label_2c7290;
        case 0x2c7294u: goto label_2c7294;
        case 0x2c7298u: goto label_2c7298;
        case 0x2c729cu: goto label_2c729c;
        case 0x2c72a0u: goto label_2c72a0;
        case 0x2c72a4u: goto label_2c72a4;
        case 0x2c72a8u: goto label_2c72a8;
        case 0x2c72acu: goto label_2c72ac;
        case 0x2c72b0u: goto label_2c72b0;
        case 0x2c72b4u: goto label_2c72b4;
        case 0x2c72b8u: goto label_2c72b8;
        case 0x2c72bcu: goto label_2c72bc;
        case 0x2c72c0u: goto label_2c72c0;
        case 0x2c72c4u: goto label_2c72c4;
        case 0x2c72c8u: goto label_2c72c8;
        case 0x2c72ccu: goto label_2c72cc;
        case 0x2c72d0u: goto label_2c72d0;
        case 0x2c72d4u: goto label_2c72d4;
        case 0x2c72d8u: goto label_2c72d8;
        case 0x2c72dcu: goto label_2c72dc;
        case 0x2c72e0u: goto label_2c72e0;
        case 0x2c72e4u: goto label_2c72e4;
        case 0x2c72e8u: goto label_2c72e8;
        case 0x2c72ecu: goto label_2c72ec;
        case 0x2c72f0u: goto label_2c72f0;
        case 0x2c72f4u: goto label_2c72f4;
        case 0x2c72f8u: goto label_2c72f8;
        case 0x2c72fcu: goto label_2c72fc;
        case 0x2c7300u: goto label_2c7300;
        case 0x2c7304u: goto label_2c7304;
        case 0x2c7308u: goto label_2c7308;
        case 0x2c730cu: goto label_2c730c;
        case 0x2c7310u: goto label_2c7310;
        case 0x2c7314u: goto label_2c7314;
        case 0x2c7318u: goto label_2c7318;
        case 0x2c731cu: goto label_2c731c;
        case 0x2c7320u: goto label_2c7320;
        case 0x2c7324u: goto label_2c7324;
        case 0x2c7328u: goto label_2c7328;
        case 0x2c732cu: goto label_2c732c;
        case 0x2c7330u: goto label_2c7330;
        case 0x2c7334u: goto label_2c7334;
        case 0x2c7338u: goto label_2c7338;
        case 0x2c733cu: goto label_2c733c;
        case 0x2c7340u: goto label_2c7340;
        case 0x2c7344u: goto label_2c7344;
        case 0x2c7348u: goto label_2c7348;
        case 0x2c734cu: goto label_2c734c;
        case 0x2c7350u: goto label_2c7350;
        case 0x2c7354u: goto label_2c7354;
        case 0x2c7358u: goto label_2c7358;
        case 0x2c735cu: goto label_2c735c;
        case 0x2c7360u: goto label_2c7360;
        case 0x2c7364u: goto label_2c7364;
        case 0x2c7368u: goto label_2c7368;
        case 0x2c736cu: goto label_2c736c;
        case 0x2c7370u: goto label_2c7370;
        case 0x2c7374u: goto label_2c7374;
        case 0x2c7378u: goto label_2c7378;
        case 0x2c737cu: goto label_2c737c;
        case 0x2c7380u: goto label_2c7380;
        case 0x2c7384u: goto label_2c7384;
        case 0x2c7388u: goto label_2c7388;
        case 0x2c738cu: goto label_2c738c;
        case 0x2c7390u: goto label_2c7390;
        case 0x2c7394u: goto label_2c7394;
        case 0x2c7398u: goto label_2c7398;
        case 0x2c739cu: goto label_2c739c;
        case 0x2c73a0u: goto label_2c73a0;
        case 0x2c73a4u: goto label_2c73a4;
        case 0x2c73a8u: goto label_2c73a8;
        case 0x2c73acu: goto label_2c73ac;
        case 0x2c73b0u: goto label_2c73b0;
        case 0x2c73b4u: goto label_2c73b4;
        case 0x2c73b8u: goto label_2c73b8;
        case 0x2c73bcu: goto label_2c73bc;
        case 0x2c73c0u: goto label_2c73c0;
        case 0x2c73c4u: goto label_2c73c4;
        case 0x2c73c8u: goto label_2c73c8;
        case 0x2c73ccu: goto label_2c73cc;
        case 0x2c73d0u: goto label_2c73d0;
        case 0x2c73d4u: goto label_2c73d4;
        case 0x2c73d8u: goto label_2c73d8;
        case 0x2c73dcu: goto label_2c73dc;
        case 0x2c73e0u: goto label_2c73e0;
        case 0x2c73e4u: goto label_2c73e4;
        case 0x2c73e8u: goto label_2c73e8;
        case 0x2c73ecu: goto label_2c73ec;
        case 0x2c73f0u: goto label_2c73f0;
        case 0x2c73f4u: goto label_2c73f4;
        case 0x2c73f8u: goto label_2c73f8;
        case 0x2c73fcu: goto label_2c73fc;
        case 0x2c7400u: goto label_2c7400;
        case 0x2c7404u: goto label_2c7404;
        case 0x2c7408u: goto label_2c7408;
        case 0x2c740cu: goto label_2c740c;
        case 0x2c7410u: goto label_2c7410;
        case 0x2c7414u: goto label_2c7414;
        case 0x2c7418u: goto label_2c7418;
        case 0x2c741cu: goto label_2c741c;
        case 0x2c7420u: goto label_2c7420;
        case 0x2c7424u: goto label_2c7424;
        case 0x2c7428u: goto label_2c7428;
        case 0x2c742cu: goto label_2c742c;
        case 0x2c7430u: goto label_2c7430;
        case 0x2c7434u: goto label_2c7434;
        case 0x2c7438u: goto label_2c7438;
        case 0x2c743cu: goto label_2c743c;
        case 0x2c7440u: goto label_2c7440;
        case 0x2c7444u: goto label_2c7444;
        case 0x2c7448u: goto label_2c7448;
        case 0x2c744cu: goto label_2c744c;
        case 0x2c7450u: goto label_2c7450;
        case 0x2c7454u: goto label_2c7454;
        case 0x2c7458u: goto label_2c7458;
        case 0x2c745cu: goto label_2c745c;
        case 0x2c7460u: goto label_2c7460;
        case 0x2c7464u: goto label_2c7464;
        case 0x2c7468u: goto label_2c7468;
        case 0x2c746cu: goto label_2c746c;
        case 0x2c7470u: goto label_2c7470;
        case 0x2c7474u: goto label_2c7474;
        case 0x2c7478u: goto label_2c7478;
        case 0x2c747cu: goto label_2c747c;
        case 0x2c7480u: goto label_2c7480;
        case 0x2c7484u: goto label_2c7484;
        case 0x2c7488u: goto label_2c7488;
        case 0x2c748cu: goto label_2c748c;
        case 0x2c7490u: goto label_2c7490;
        case 0x2c7494u: goto label_2c7494;
        case 0x2c7498u: goto label_2c7498;
        case 0x2c749cu: goto label_2c749c;
        case 0x2c74a0u: goto label_2c74a0;
        case 0x2c74a4u: goto label_2c74a4;
        case 0x2c74a8u: goto label_2c74a8;
        case 0x2c74acu: goto label_2c74ac;
        case 0x2c74b0u: goto label_2c74b0;
        case 0x2c74b4u: goto label_2c74b4;
        case 0x2c74b8u: goto label_2c74b8;
        case 0x2c74bcu: goto label_2c74bc;
        case 0x2c74c0u: goto label_2c74c0;
        case 0x2c74c4u: goto label_2c74c4;
        case 0x2c74c8u: goto label_2c74c8;
        case 0x2c74ccu: goto label_2c74cc;
        case 0x2c74d0u: goto label_2c74d0;
        case 0x2c74d4u: goto label_2c74d4;
        case 0x2c74d8u: goto label_2c74d8;
        case 0x2c74dcu: goto label_2c74dc;
        case 0x2c74e0u: goto label_2c74e0;
        case 0x2c74e4u: goto label_2c74e4;
        case 0x2c74e8u: goto label_2c74e8;
        case 0x2c74ecu: goto label_2c74ec;
        case 0x2c74f0u: goto label_2c74f0;
        case 0x2c74f4u: goto label_2c74f4;
        case 0x2c74f8u: goto label_2c74f8;
        case 0x2c74fcu: goto label_2c74fc;
        case 0x2c7500u: goto label_2c7500;
        case 0x2c7504u: goto label_2c7504;
        case 0x2c7508u: goto label_2c7508;
        case 0x2c750cu: goto label_2c750c;
        case 0x2c7510u: goto label_2c7510;
        case 0x2c7514u: goto label_2c7514;
        case 0x2c7518u: goto label_2c7518;
        case 0x2c751cu: goto label_2c751c;
        case 0x2c7520u: goto label_2c7520;
        case 0x2c7524u: goto label_2c7524;
        case 0x2c7528u: goto label_2c7528;
        case 0x2c752cu: goto label_2c752c;
        case 0x2c7530u: goto label_2c7530;
        case 0x2c7534u: goto label_2c7534;
        case 0x2c7538u: goto label_2c7538;
        case 0x2c753cu: goto label_2c753c;
        case 0x2c7540u: goto label_2c7540;
        case 0x2c7544u: goto label_2c7544;
        case 0x2c7548u: goto label_2c7548;
        case 0x2c754cu: goto label_2c754c;
        case 0x2c7550u: goto label_2c7550;
        case 0x2c7554u: goto label_2c7554;
        case 0x2c7558u: goto label_2c7558;
        case 0x2c755cu: goto label_2c755c;
        case 0x2c7560u: goto label_2c7560;
        case 0x2c7564u: goto label_2c7564;
        case 0x2c7568u: goto label_2c7568;
        case 0x2c756cu: goto label_2c756c;
        case 0x2c7570u: goto label_2c7570;
        case 0x2c7574u: goto label_2c7574;
        case 0x2c7578u: goto label_2c7578;
        case 0x2c757cu: goto label_2c757c;
        case 0x2c7580u: goto label_2c7580;
        case 0x2c7584u: goto label_2c7584;
        case 0x2c7588u: goto label_2c7588;
        case 0x2c758cu: goto label_2c758c;
        case 0x2c7590u: goto label_2c7590;
        case 0x2c7594u: goto label_2c7594;
        case 0x2c7598u: goto label_2c7598;
        case 0x2c759cu: goto label_2c759c;
        case 0x2c75a0u: goto label_2c75a0;
        case 0x2c75a4u: goto label_2c75a4;
        case 0x2c75a8u: goto label_2c75a8;
        case 0x2c75acu: goto label_2c75ac;
        case 0x2c75b0u: goto label_2c75b0;
        case 0x2c75b4u: goto label_2c75b4;
        case 0x2c75b8u: goto label_2c75b8;
        case 0x2c75bcu: goto label_2c75bc;
        case 0x2c75c0u: goto label_2c75c0;
        case 0x2c75c4u: goto label_2c75c4;
        case 0x2c75c8u: goto label_2c75c8;
        case 0x2c75ccu: goto label_2c75cc;
        case 0x2c75d0u: goto label_2c75d0;
        case 0x2c75d4u: goto label_2c75d4;
        case 0x2c75d8u: goto label_2c75d8;
        case 0x2c75dcu: goto label_2c75dc;
        case 0x2c75e0u: goto label_2c75e0;
        case 0x2c75e4u: goto label_2c75e4;
        case 0x2c75e8u: goto label_2c75e8;
        case 0x2c75ecu: goto label_2c75ec;
        case 0x2c75f0u: goto label_2c75f0;
        case 0x2c75f4u: goto label_2c75f4;
        case 0x2c75f8u: goto label_2c75f8;
        case 0x2c75fcu: goto label_2c75fc;
        case 0x2c7600u: goto label_2c7600;
        case 0x2c7604u: goto label_2c7604;
        case 0x2c7608u: goto label_2c7608;
        case 0x2c760cu: goto label_2c760c;
        case 0x2c7610u: goto label_2c7610;
        case 0x2c7614u: goto label_2c7614;
        case 0x2c7618u: goto label_2c7618;
        case 0x2c761cu: goto label_2c761c;
        case 0x2c7620u: goto label_2c7620;
        case 0x2c7624u: goto label_2c7624;
        case 0x2c7628u: goto label_2c7628;
        case 0x2c762cu: goto label_2c762c;
        case 0x2c7630u: goto label_2c7630;
        case 0x2c7634u: goto label_2c7634;
        case 0x2c7638u: goto label_2c7638;
        case 0x2c763cu: goto label_2c763c;
        case 0x2c7640u: goto label_2c7640;
        case 0x2c7644u: goto label_2c7644;
        case 0x2c7648u: goto label_2c7648;
        case 0x2c764cu: goto label_2c764c;
        case 0x2c7650u: goto label_2c7650;
        case 0x2c7654u: goto label_2c7654;
        case 0x2c7658u: goto label_2c7658;
        case 0x2c765cu: goto label_2c765c;
        case 0x2c7660u: goto label_2c7660;
        case 0x2c7664u: goto label_2c7664;
        case 0x2c7668u: goto label_2c7668;
        case 0x2c766cu: goto label_2c766c;
        case 0x2c7670u: goto label_2c7670;
        case 0x2c7674u: goto label_2c7674;
        case 0x2c7678u: goto label_2c7678;
        case 0x2c767cu: goto label_2c767c;
        case 0x2c7680u: goto label_2c7680;
        case 0x2c7684u: goto label_2c7684;
        case 0x2c7688u: goto label_2c7688;
        case 0x2c768cu: goto label_2c768c;
        case 0x2c7690u: goto label_2c7690;
        case 0x2c7694u: goto label_2c7694;
        case 0x2c7698u: goto label_2c7698;
        case 0x2c769cu: goto label_2c769c;
        case 0x2c76a0u: goto label_2c76a0;
        case 0x2c76a4u: goto label_2c76a4;
        case 0x2c76a8u: goto label_2c76a8;
        case 0x2c76acu: goto label_2c76ac;
        case 0x2c76b0u: goto label_2c76b0;
        case 0x2c76b4u: goto label_2c76b4;
        case 0x2c76b8u: goto label_2c76b8;
        case 0x2c76bcu: goto label_2c76bc;
        case 0x2c76c0u: goto label_2c76c0;
        case 0x2c76c4u: goto label_2c76c4;
        case 0x2c76c8u: goto label_2c76c8;
        case 0x2c76ccu: goto label_2c76cc;
        case 0x2c76d0u: goto label_2c76d0;
        case 0x2c76d4u: goto label_2c76d4;
        case 0x2c76d8u: goto label_2c76d8;
        case 0x2c76dcu: goto label_2c76dc;
        case 0x2c76e0u: goto label_2c76e0;
        case 0x2c76e4u: goto label_2c76e4;
        case 0x2c76e8u: goto label_2c76e8;
        case 0x2c76ecu: goto label_2c76ec;
        case 0x2c76f0u: goto label_2c76f0;
        case 0x2c76f4u: goto label_2c76f4;
        case 0x2c76f8u: goto label_2c76f8;
        case 0x2c76fcu: goto label_2c76fc;
        case 0x2c7700u: goto label_2c7700;
        case 0x2c7704u: goto label_2c7704;
        case 0x2c7708u: goto label_2c7708;
        case 0x2c770cu: goto label_2c770c;
        case 0x2c7710u: goto label_2c7710;
        case 0x2c7714u: goto label_2c7714;
        case 0x2c7718u: goto label_2c7718;
        case 0x2c771cu: goto label_2c771c;
        case 0x2c7720u: goto label_2c7720;
        case 0x2c7724u: goto label_2c7724;
        case 0x2c7728u: goto label_2c7728;
        case 0x2c772cu: goto label_2c772c;
        case 0x2c7730u: goto label_2c7730;
        case 0x2c7734u: goto label_2c7734;
        case 0x2c7738u: goto label_2c7738;
        case 0x2c773cu: goto label_2c773c;
        case 0x2c7740u: goto label_2c7740;
        case 0x2c7744u: goto label_2c7744;
        case 0x2c7748u: goto label_2c7748;
        case 0x2c774cu: goto label_2c774c;
        case 0x2c7750u: goto label_2c7750;
        case 0x2c7754u: goto label_2c7754;
        case 0x2c7758u: goto label_2c7758;
        case 0x2c775cu: goto label_2c775c;
        case 0x2c7760u: goto label_2c7760;
        case 0x2c7764u: goto label_2c7764;
        case 0x2c7768u: goto label_2c7768;
        case 0x2c776cu: goto label_2c776c;
        case 0x2c7770u: goto label_2c7770;
        case 0x2c7774u: goto label_2c7774;
        case 0x2c7778u: goto label_2c7778;
        case 0x2c777cu: goto label_2c777c;
        case 0x2c7780u: goto label_2c7780;
        case 0x2c7784u: goto label_2c7784;
        case 0x2c7788u: goto label_2c7788;
        case 0x2c778cu: goto label_2c778c;
        case 0x2c7790u: goto label_2c7790;
        case 0x2c7794u: goto label_2c7794;
        case 0x2c7798u: goto label_2c7798;
        case 0x2c779cu: goto label_2c779c;
        case 0x2c77a0u: goto label_2c77a0;
        case 0x2c77a4u: goto label_2c77a4;
        case 0x2c77a8u: goto label_2c77a8;
        case 0x2c77acu: goto label_2c77ac;
        case 0x2c77b0u: goto label_2c77b0;
        case 0x2c77b4u: goto label_2c77b4;
        default: break;
    }

    ctx->pc = 0x2c7288u;

label_2c7288:
    // 0x2c7288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c7288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c728c:
    // 0x2c728c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c728cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7290:
    // 0x2c7290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c7294:
    // 0x2c7294: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2c7298:
    // 0x2c7298: 0xc0b1948  jal         func_2C6520
label_2c729c:
    if (ctx->pc == 0x2C729Cu) {
        ctx->pc = 0x2C729Cu;
            // 0x2c729c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C72A0u;
        goto label_2c72a0;
    }
    ctx->pc = 0x2C7298u;
    SET_GPR_U32(ctx, 31, 0x2C72A0u);
    ctx->pc = 0x2C729Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7298u;
            // 0x2c729c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6520u;
    if (runtime->hasFunction(0x2C6520u)) {
        auto targetFn = runtime->lookupFunction(0x2C6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72A0u; }
        if (ctx->pc != 0x2C72A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6520_0x2c6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72A0u; }
        if (ctx->pc != 0x2C72A0u) { return; }
    }
    ctx->pc = 0x2C72A0u;
label_2c72a0:
    // 0x2c72a0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2c72a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2c72a4:
    // 0x2c72a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c72a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c72a8:
    // 0x2c72a8: 0xc0b608e  jal         func_2D8238
label_2c72ac:
    if (ctx->pc == 0x2C72ACu) {
        ctx->pc = 0x2C72ACu;
            // 0x2c72ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2C72B0u;
        goto label_2c72b0;
    }
    ctx->pc = 0x2C72A8u;
    SET_GPR_U32(ctx, 31, 0x2C72B0u);
    ctx->pc = 0x2C72ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72A8u;
            // 0x2c72ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72B0u; }
        if (ctx->pc != 0x2C72B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72B0u; }
        if (ctx->pc != 0x2C72B0u) { return; }
    }
    ctx->pc = 0x2C72B0u;
label_2c72b0:
    // 0x2c72b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2c72b4:
    // 0x2c72b4: 0x24427eb8  addiu       $v0, $v0, 0x7EB8
    ctx->pc = 0x2c72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32440));
label_2c72b8:
    // 0x2c72b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c72b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c72bc:
    // 0x2c72bc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2c72bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2c72c0:
    // 0x2c72c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c72c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c72c4:
    // 0x2c72c4: 0x3e00008  jr          $ra
label_2c72c8:
    if (ctx->pc == 0x2C72C8u) {
        ctx->pc = 0x2C72C8u;
            // 0x2c72c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C72CCu;
        goto label_2c72cc;
    }
    ctx->pc = 0x2C72C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C72C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72C4u;
            // 0x2c72c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C72CCu;
label_2c72cc:
    // 0x2c72cc: 0x0  nop
    ctx->pc = 0x2c72ccu;
    // NOP
label_2c72d0:
    // 0x2c72d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c72d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c72d4:
    // 0x2c72d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c72d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c72d8:
    // 0x2c72d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c72d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c72dc:
    // 0x2c72dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c72dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c72e0:
    // 0x2c72e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c72e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2c72e4:
    // 0x2c72e4: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x2c72e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2c72e8:
    // 0x2c72e8: 0xc0b608e  jal         func_2D8238
label_2c72ec:
    if (ctx->pc == 0x2C72ECu) {
        ctx->pc = 0x2C72ECu;
            // 0x2c72ec: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x2C72F0u;
        goto label_2c72f0;
    }
    ctx->pc = 0x2C72E8u;
    SET_GPR_U32(ctx, 31, 0x2C72F0u);
    ctx->pc = 0x2C72ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72E8u;
            // 0x2c72ec: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72F0u; }
        if (ctx->pc != 0x2C72F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72F0u; }
        if (ctx->pc != 0x2C72F0u) { return; }
    }
    ctx->pc = 0x2C72F0u;
label_2c72f0:
    // 0x2c72f0: 0xc0b60dc  jal         func_2D8370
label_2c72f4:
    if (ctx->pc == 0x2C72F4u) {
        ctx->pc = 0x2C72F4u;
            // 0x2c72f4: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x2C72F8u;
        goto label_2c72f8;
    }
    ctx->pc = 0x2C72F0u;
    SET_GPR_U32(ctx, 31, 0x2C72F8u);
    ctx->pc = 0x2C72F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C72F0u;
            // 0x2c72f4: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72F8u; }
        if (ctx->pc != 0x2C72F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72F8u; }
        if (ctx->pc != 0x2C72F8u) { return; }
    }
    ctx->pc = 0x2C72F8u;
label_2c72f8:
    // 0x2c72f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c72f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c72fc:
    // 0x2c72fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c72fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c7300:
    // 0x2c7300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c7300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7304:
    // 0x2c7304: 0x80b1970  j           func_2C65C0
label_2c7308:
    if (ctx->pc == 0x2C7308u) {
        ctx->pc = 0x2C7308u;
            // 0x2c7308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C730Cu;
        goto label_2c730c;
    }
    ctx->pc = 0x2C7304u;
    ctx->pc = 0x2C7308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7304u;
            // 0x2c7308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C65C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2C730Cu;
label_2c730c:
    // 0x2c730c: 0x0  nop
    ctx->pc = 0x2c730cu;
    // NOP
label_2c7310:
    // 0x2c7310: 0x3e00008  jr          $ra
label_2c7314:
    if (ctx->pc == 0x2C7314u) {
        ctx->pc = 0x2C7314u;
            // 0x2c7314: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->pc = 0x2C7318u;
        goto label_2c7318;
    }
    ctx->pc = 0x2C7310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7310u;
            // 0x2c7314: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7318u;
label_2c7318:
    // 0x2c7318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c7318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c731c:
    // 0x2c731c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c7320:
    // 0x2c7320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c7320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7324:
    // 0x2c7324: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c7324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2c7328:
    // 0x2c7328: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c7328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c732c:
    // 0x2c732c: 0xc0b1986  jal         func_2C6618
label_2c7330:
    if (ctx->pc == 0x2C7330u) {
        ctx->pc = 0x2C7330u;
            // 0x2c7330: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2C7334u;
        goto label_2c7334;
    }
    ctx->pc = 0x2C732Cu;
    SET_GPR_U32(ctx, 31, 0x2C7334u);
    ctx->pc = 0x2C7330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C732Cu;
            // 0x2c7330: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6618u;
    if (runtime->hasFunction(0x2C6618u)) {
        auto targetFn = runtime->lookupFunction(0x2C6618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7334u; }
        if (ctx->pc != 0x2C7334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6618_0x2c6618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7334u; }
        if (ctx->pc != 0x2C7334u) { return; }
    }
    ctx->pc = 0x2C7334u;
label_2c7334:
    // 0x2c7334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7338:
    // 0x2c7338: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2c733c:
    if (ctx->pc == 0x2C733Cu) {
        ctx->pc = 0x2C733Cu;
            // 0x2c733c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C7340u;
        goto label_2c7340;
    }
    ctx->pc = 0x2C7338u;
    {
        const bool branch_taken_0x2c7338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C733Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7338u;
            // 0x2c733c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7338) {
            ctx->pc = 0x2C7368u;
            goto label_2c7368;
        }
    }
    ctx->pc = 0x2C7340u;
label_2c7340:
    // 0x2c7340: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c7340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c7344:
    // 0x2c7344: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c7344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c7348:
    // 0x2c7348: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2c734c:
    if (ctx->pc == 0x2C734Cu) {
        ctx->pc = 0x2C734Cu;
            // 0x2c734c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2C7350u;
        goto label_2c7350;
    }
    ctx->pc = 0x2C7348u;
    {
        const bool branch_taken_0x2c7348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7348) {
            ctx->pc = 0x2C734Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7348u;
            // 0x2c734c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C735Cu;
            goto label_2c735c;
        }
    }
    ctx->pc = 0x2C7350u;
label_2c7350:
    // 0x2c7350: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2c7350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2c7354:
    // 0x2c7354: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c7354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2c7358:
    // 0x2c7358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c7358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c735c:
    // 0x2c735c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c735cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c7360:
    // 0x2c7360: 0x80b1dc2  j           func_2C7708
label_2c7364:
    if (ctx->pc == 0x2C7364u) {
        ctx->pc = 0x2C7364u;
            // 0x2c7364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C7368u;
        goto label_2c7368;
    }
    ctx->pc = 0x2C7360u;
    ctx->pc = 0x2C7364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7360u;
            // 0x2c7364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7708u;
    goto label_2c7708;
    ctx->pc = 0x2C7368u;
label_2c7368:
    // 0x2c7368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c7368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c736c:
    // 0x2c736c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c736cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c7370:
    // 0x2c7370: 0x3e00008  jr          $ra
label_2c7374:
    if (ctx->pc == 0x2C7374u) {
        ctx->pc = 0x2C7374u;
            // 0x2c7374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C7378u;
        goto label_2c7378;
    }
    ctx->pc = 0x2C7370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7370u;
            // 0x2c7374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7378u;
label_2c7378:
    // 0x2c7378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c7378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c737c:
    // 0x2c737c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c737cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c7380:
    // 0x2c7380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c7380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7384:
    // 0x2c7384: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2c7388:
    // 0x2c7388: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c7388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c738c:
    // 0x2c738c: 0xc0b199a  jal         func_2C6668
label_2c7390:
    if (ctx->pc == 0x2C7390u) {
        ctx->pc = 0x2C7390u;
            // 0x2c7390: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2C7394u;
        goto label_2c7394;
    }
    ctx->pc = 0x2C738Cu;
    SET_GPR_U32(ctx, 31, 0x2C7394u);
    ctx->pc = 0x2C7390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C738Cu;
            // 0x2c7390: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6668u;
    if (runtime->hasFunction(0x2C6668u)) {
        auto targetFn = runtime->lookupFunction(0x2C6668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7394u; }
        if (ctx->pc != 0x2C7394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6668_0x2c6668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7394u; }
        if (ctx->pc != 0x2C7394u) { return; }
    }
    ctx->pc = 0x2C7394u;
label_2c7394:
    // 0x2c7394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7398:
    // 0x2c7398: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2c739c:
    if (ctx->pc == 0x2C739Cu) {
        ctx->pc = 0x2C739Cu;
            // 0x2c739c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C73A0u;
        goto label_2c73a0;
    }
    ctx->pc = 0x2C7398u;
    {
        const bool branch_taken_0x2c7398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C739Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7398u;
            // 0x2c739c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7398) {
            ctx->pc = 0x2C73C8u;
            goto label_2c73c8;
        }
    }
    ctx->pc = 0x2C73A0u;
label_2c73a0:
    // 0x2c73a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c73a4:
    // 0x2c73a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c73a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c73a8:
    // 0x2c73a8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2c73ac:
    if (ctx->pc == 0x2C73ACu) {
        ctx->pc = 0x2C73ACu;
            // 0x2c73ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2C73B0u;
        goto label_2c73b0;
    }
    ctx->pc = 0x2C73A8u;
    {
        const bool branch_taken_0x2c73a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c73a8) {
            ctx->pc = 0x2C73ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C73A8u;
            // 0x2c73ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C73BCu;
            goto label_2c73bc;
        }
    }
    ctx->pc = 0x2C73B0u;
label_2c73b0:
    // 0x2c73b0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2c73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2c73b4:
    // 0x2c73b4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2c73b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2c73b8:
    // 0x2c73b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c73b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c73bc:
    // 0x2c73bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c73bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c73c0:
    // 0x2c73c0: 0x80b1dc2  j           func_2C7708
label_2c73c4:
    if (ctx->pc == 0x2C73C4u) {
        ctx->pc = 0x2C73C4u;
            // 0x2c73c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C73C8u;
        goto label_2c73c8;
    }
    ctx->pc = 0x2C73C0u;
    ctx->pc = 0x2C73C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C73C0u;
            // 0x2c73c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7708u;
    goto label_2c7708;
    ctx->pc = 0x2C73C8u;
label_2c73c8:
    // 0x2c73c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c73c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c73cc:
    // 0x2c73cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c73ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c73d0:
    // 0x2c73d0: 0x3e00008  jr          $ra
label_2c73d4:
    if (ctx->pc == 0x2C73D4u) {
        ctx->pc = 0x2C73D4u;
            // 0x2c73d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C73D8u;
        goto label_2c73d8;
    }
    ctx->pc = 0x2C73D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C73D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C73D0u;
            // 0x2c73d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C73D8u;
label_2c73d8:
    // 0x2c73d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c73d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c73dc:
    // 0x2c73dc: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2c73dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c73e0:
    // 0x2c73e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c73e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c73e4:
    // 0x2c73e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c73e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c73e8:
    // 0x2c73e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c73e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c73ec:
    // 0x2c73ec: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2c73ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c73f0:
    // 0x2c73f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c73f4:
    // 0x2c73f4: 0x2402020d  addiu       $v0, $zero, 0x20D
    ctx->pc = 0x2c73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
label_2c73f8:
    // 0x2c73f8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2c73f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2c73fc:
    // 0x2c73fc: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x2c73fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2c7400:
    // 0x2c7400: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2c7400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2c7404:
    // 0x2c7404: 0xf12021  addu        $a0, $a3, $s1
    ctx->pc = 0x2c7404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_2c7408:
    // 0x2c7408: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2c7408u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2c740c:
    // 0x2c740c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2c7410:
    if (ctx->pc == 0x2C7410u) {
        ctx->pc = 0x2C7410u;
            // 0x2c7410: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7414u;
        goto label_2c7414;
    }
    ctx->pc = 0x2C740Cu;
    {
        const bool branch_taken_0x2c740c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C740Cu;
            // 0x2c7410: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c740c) {
            ctx->pc = 0x2C7430u;
            goto label_2c7430;
        }
    }
    ctx->pc = 0x2C7414u;
label_2c7414:
    // 0x2c7414: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2c7414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2c7418:
    // 0x2c7418: 0xc0b6098  jal         func_2D8260
label_2c741c:
    if (ctx->pc == 0x2C741Cu) {
        ctx->pc = 0x2C741Cu;
            // 0x2c741c: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->pc = 0x2C7420u;
        goto label_2c7420;
    }
    ctx->pc = 0x2C7418u;
    SET_GPR_U32(ctx, 31, 0x2C7420u);
    ctx->pc = 0x2C741Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7418u;
            // 0x2c741c: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7420u; }
        if (ctx->pc != 0x2C7420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7420u; }
        if (ctx->pc != 0x2C7420u) { return; }
    }
    ctx->pc = 0x2C7420u;
label_2c7420:
    // 0x2c7420: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2c7420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2c7424:
    // 0x2c7424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7428:
    // 0x2c7428: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2c7428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2c742c:
    // 0x2c742c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2c742cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_2c7430:
    // 0x2c7430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c7430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7434:
    // 0x2c7434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c7434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c7438:
    // 0x2c7438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c743c:
    // 0x2c743c: 0x3e00008  jr          $ra
label_2c7440:
    if (ctx->pc == 0x2C7440u) {
        ctx->pc = 0x2C7440u;
            // 0x2c7440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C7444u;
        goto label_2c7444;
    }
    ctx->pc = 0x2C743Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C743Cu;
            // 0x2c7440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7444u;
label_2c7444:
    // 0x2c7444: 0x0  nop
    ctx->pc = 0x2c7444u;
    // NOP
label_2c7448:
    // 0x2c7448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c7448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2c744c:
    // 0x2c744c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c7450:
    // 0x2c7450: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2c7450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c7454:
    // 0x2c7454: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c7454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c7458:
    // 0x2c7458: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c7458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c745c:
    // 0x2c745c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c7460:
    // 0x2c7460: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c7460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c7464:
    // 0x2c7464: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c7464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2c7468:
    // 0x2c7468: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c7468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c746c:
    // 0x2c746c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c746cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2c7470:
    // 0x2c7470: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2c7470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c7474:
    // 0x2c7474: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2c7474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2c7478:
    // 0x2c7478: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c7478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c747c:
    // 0x2c747c: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2c747cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2c7480:
    // 0x2c7480: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c7484:
    // 0x2c7484: 0x40f809  jalr        $v0
label_2c7488:
    if (ctx->pc == 0x2C7488u) {
        ctx->pc = 0x2C7488u;
            // 0x2c7488: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C748Cu;
        goto label_2c748c;
    }
    ctx->pc = 0x2C7484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C748Cu);
        ctx->pc = 0x2C7488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7484u;
            // 0x2c7488: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C748Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C748Cu; }
            if (ctx->pc != 0x2C748Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C748Cu;
label_2c748c:
    // 0x2c748c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7490:
    // 0x2c7490: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7494:
    // 0x2c7494: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c7494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c7498:
    // 0x2c7498: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2c7498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c749c:
    // 0x2c749c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c749cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c74a0:
    // 0x2c74a0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2c74a4:
    if (ctx->pc == 0x2C74A4u) {
        ctx->pc = 0x2C74A4u;
            // 0x2c74a4: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C74A8u;
        goto label_2c74a8;
    }
    ctx->pc = 0x2C74A0u;
    {
        const bool branch_taken_0x2c74a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C74A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74A0u;
            // 0x2c74a4: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c74a0) {
            ctx->pc = 0x2C74E0u;
            goto label_2c74e0;
        }
    }
    ctx->pc = 0x2C74A8u;
label_2c74a8:
    // 0x2c74a8: 0x8e680030  lw          $t0, 0x30($s3)
    ctx->pc = 0x2c74a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_2c74ac:
    // 0x2c74ac: 0xc0b19ae  jal         func_2C66B8
label_2c74b0:
    if (ctx->pc == 0x2C74B0u) {
        ctx->pc = 0x2C74B0u;
            // 0x2c74b0: 0x8e690034  lw          $t1, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->pc = 0x2C74B4u;
        goto label_2c74b4;
    }
    ctx->pc = 0x2C74ACu;
    SET_GPR_U32(ctx, 31, 0x2C74B4u);
    ctx->pc = 0x2C74B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74ACu;
            // 0x2c74b0: 0x8e690034  lw          $t1, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C66B8u;
    if (runtime->hasFunction(0x2C66B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C66B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74B4u; }
        if (ctx->pc != 0x2C74B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C66B8_0x2c66b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74B4u; }
        if (ctx->pc != 0x2C74B4u) { return; }
    }
    ctx->pc = 0x2C74B4u;
label_2c74b4:
    // 0x2c74b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c74b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c74b8:
    // 0x2c74b8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2c74b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c74bc:
    // 0x2c74bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c74bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c74c0:
    // 0x2c74c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c74c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c74c4:
    // 0x2c74c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c74c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c74c8:
    // 0x2c74c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2c74cc:
    if (ctx->pc == 0x2C74CCu) {
        ctx->pc = 0x2C74CCu;
            // 0x2c74cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C74D0u;
        goto label_2c74d0;
    }
    ctx->pc = 0x2C74C8u;
    {
        const bool branch_taken_0x2c74c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C74CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74C8u;
            // 0x2c74cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c74c8) {
            ctx->pc = 0x2C74E0u;
            goto label_2c74e0;
        }
    }
    ctx->pc = 0x2C74D0u;
label_2c74d0:
    // 0x2c74d0: 0xc0b19d2  jal         func_2C6748
label_2c74d4:
    if (ctx->pc == 0x2C74D4u) {
        ctx->pc = 0x2C74D8u;
        goto label_2c74d8;
    }
    ctx->pc = 0x2C74D0u;
    SET_GPR_U32(ctx, 31, 0x2C74D8u);
    ctx->pc = 0x2C6748u;
    if (runtime->hasFunction(0x2C6748u)) {
        auto targetFn = runtime->lookupFunction(0x2C6748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74D8u; }
        if (ctx->pc != 0x2C74D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6748_0x2c6748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74D8u; }
        if (ctx->pc != 0x2C74D8u) { return; }
    }
    ctx->pc = 0x2C74D8u;
label_2c74d8:
    // 0x2c74d8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2c74dc:
    if (ctx->pc == 0x2C74DCu) {
        ctx->pc = 0x2C74DCu;
            // 0x2c74dc: 0xae600038  sw          $zero, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
        ctx->pc = 0x2C74E0u;
        goto label_2c74e0;
    }
    ctx->pc = 0x2C74D8u;
    {
        const bool branch_taken_0x2c74d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c74d8) {
            ctx->pc = 0x2C74DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74D8u;
            // 0x2c74dc: 0xae600038  sw          $zero, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C74E0u;
            goto label_2c74e0;
        }
    }
    ctx->pc = 0x2C74E0u;
label_2c74e0:
    // 0x2c74e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c74e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c74e4:
    // 0x2c74e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c74e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c74e8:
    // 0x2c74e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c74e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c74ec:
    // 0x2c74ec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c74ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c74f0:
    // 0x2c74f0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c74f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c74f4:
    // 0x2c74f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2c74f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c74f8:
    // 0x2c74f8: 0x3e00008  jr          $ra
label_2c74fc:
    if (ctx->pc == 0x2C74FCu) {
        ctx->pc = 0x2C74FCu;
            // 0x2c74fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2C7500u;
        goto label_2c7500;
    }
    ctx->pc = 0x2C74F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C74FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74F8u;
            // 0x2c74fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7500u;
label_2c7500:
    // 0x2c7500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c7500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c7504:
    // 0x2c7504: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c7504u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7508:
    // 0x2c7508: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2c7508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2c750c:
    // 0x2c750c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2c750cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c7510:
    // 0x2c7510: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2c7510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2c7514:
    // 0x2c7514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7518:
    // 0x2c7518: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2c751c:
    // 0x2c751c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c751cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c7520:
    // 0x2c7520: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2c7520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2c7524:
    // 0x2c7524: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c7524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c7528:
    // 0x2c7528: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c7528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2c752c:
    // 0x2c752c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c752cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7530:
    // 0x2c7530: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2c7530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2c7534:
    // 0x2c7534: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2c7534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c7538:
    // 0x2c7538: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2c7538u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c753c:
    // 0x2c753c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2c753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2c7540:
    // 0x2c7540: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x2c7540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2c7544:
    // 0x2c7544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c7544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7548:
    // 0x2c7548: 0x8e290038  lw          $t1, 0x38($s1)
    ctx->pc = 0x2c7548u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2c754c:
    // 0x2c754c: 0xc0b19c0  jal         func_2C6700
label_2c7550:
    if (ctx->pc == 0x2C7550u) {
        ctx->pc = 0x2C7550u;
            // 0x2c7550: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7554u;
        goto label_2c7554;
    }
    ctx->pc = 0x2C754Cu;
    SET_GPR_U32(ctx, 31, 0x2C7554u);
    ctx->pc = 0x2C7550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C754Cu;
            // 0x2c7550: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6700u;
    if (runtime->hasFunction(0x2C6700u)) {
        auto targetFn = runtime->lookupFunction(0x2C6700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7554u; }
        if (ctx->pc != 0x2C7554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6700_0x2c6700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7554u; }
        if (ctx->pc != 0x2C7554u) { return; }
    }
    ctx->pc = 0x2C7554u;
label_2c7554:
    // 0x2c7554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7558:
    // 0x2c7558: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2c7558u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c755c:
    // 0x2c755c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c755cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7560:
    // 0x2c7560: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2c7560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_2c7564:
    // 0x2c7564: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7568:
    // 0x2c7568: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2c756c:
    if (ctx->pc == 0x2C756Cu) {
        ctx->pc = 0x2C756Cu;
            // 0x2c756c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7570u;
        goto label_2c7570;
    }
    ctx->pc = 0x2C7568u;
    {
        const bool branch_taken_0x2c7568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C756Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7568u;
            // 0x2c756c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7568) {
            ctx->pc = 0x2C75DCu;
            goto label_2c75dc;
        }
    }
    ctx->pc = 0x2C7570u;
label_2c7570:
    // 0x2c7570: 0xc0b19e4  jal         func_2C6790
label_2c7574:
    if (ctx->pc == 0x2C7574u) {
        ctx->pc = 0x2C7578u;
        goto label_2c7578;
    }
    ctx->pc = 0x2C7570u;
    SET_GPR_U32(ctx, 31, 0x2C7578u);
    ctx->pc = 0x2C6790u;
    if (runtime->hasFunction(0x2C6790u)) {
        auto targetFn = runtime->lookupFunction(0x2C6790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7578u; }
        if (ctx->pc != 0x2C7578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6790_0x2c6790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7578u; }
        if (ctx->pc != 0x2C7578u) { return; }
    }
    ctx->pc = 0x2C7578u;
label_2c7578:
    // 0x2c7578: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_2c757c:
    if (ctx->pc == 0x2C757Cu) {
        ctx->pc = 0x2C757Cu;
            // 0x2c757c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2C7580u;
        goto label_2c7580;
    }
    ctx->pc = 0x2C7578u;
    {
        const bool branch_taken_0x2c7578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7578) {
            ctx->pc = 0x2C757Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7578u;
            // 0x2c757c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C75E0u;
            goto label_2c75e0;
        }
    }
    ctx->pc = 0x2C7580u;
label_2c7580:
    // 0x2c7580: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x2c7580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_2c7584:
    // 0x2c7584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7588:
    // 0x2c7588: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2c7588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2c758c:
    // 0x2c758c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c758cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c7590:
    // 0x2c7590: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c7590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2c7594:
    // 0x2c7594: 0x40f809  jalr        $v0
label_2c7598:
    if (ctx->pc == 0x2C7598u) {
        ctx->pc = 0x2C7598u;
            // 0x2c7598: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2C759Cu;
        goto label_2c759c;
    }
    ctx->pc = 0x2C7594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C759Cu);
        ctx->pc = 0x2C7598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7594u;
            // 0x2c7598: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C759Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C759Cu; }
            if (ctx->pc != 0x2C759Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C759Cu;
label_2c759c:
    // 0x2c759c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2c75a0:
    if (ctx->pc == 0x2C75A0u) {
        ctx->pc = 0x2C75A0u;
            // 0x2c75a0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2C75A4u;
        goto label_2c75a4;
    }
    ctx->pc = 0x2C759Cu;
    {
        const bool branch_taken_0x2c759c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c759c) {
            ctx->pc = 0x2C75A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C759Cu;
            // 0x2c75a0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C75E0u;
            goto label_2c75e0;
        }
    }
    ctx->pc = 0x2C75A4u;
label_2c75a4:
    // 0x2c75a4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2c75a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2c75a8:
    // 0x2c75a8: 0x2402020c  addiu       $v0, $zero, 0x20C
    ctx->pc = 0x2c75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
label_2c75ac:
    // 0x2c75ac: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2c75acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c75b0:
    // 0x2c75b0: 0x2463fff5  addiu       $v1, $v1, -0xB
    ctx->pc = 0x2c75b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967285));
label_2c75b4:
    // 0x2c75b4: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x2c75b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2c75b8:
    // 0x2c75b8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2c75bc:
    if (ctx->pc == 0x2C75BCu) {
        ctx->pc = 0x2C75BCu;
            // 0x2c75bc: 0x266382b  sltu        $a3, $s3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->pc = 0x2C75C0u;
        goto label_2c75c0;
    }
    ctx->pc = 0x2C75B8u;
    {
        const bool branch_taken_0x2c75b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C75BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75B8u;
            // 0x2c75bc: 0x266382b  sltu        $a3, $s3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75b8) {
            ctx->pc = 0x2C75DCu;
            goto label_2c75dc;
        }
    }
    ctx->pc = 0x2C75C0u;
label_2c75c0:
    // 0x2c75c0: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x2c75c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
label_2c75c4:
    // 0x2c75c4: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_2c75c8:
    if (ctx->pc == 0x2C75C8u) {
        ctx->pc = 0x2C75C8u;
            // 0x2c75c8: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->pc = 0x2C75CCu;
        goto label_2c75cc;
    }
    ctx->pc = 0x2C75C4u;
    {
        const bool branch_taken_0x2c75c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C75C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75C4u;
            // 0x2c75c8: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75c4) {
            ctx->pc = 0x2C75DCu;
            goto label_2c75dc;
        }
    }
    ctx->pc = 0x2C75CCu;
label_2c75cc:
    // 0x2c75cc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c75ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c75d0:
    // 0x2c75d0: 0xc0b6098  jal         func_2D8260
label_2c75d4:
    if (ctx->pc == 0x2C75D4u) {
        ctx->pc = 0x2C75D4u;
            // 0x2c75d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C75D8u;
        goto label_2c75d8;
    }
    ctx->pc = 0x2C75D0u;
    SET_GPR_U32(ctx, 31, 0x2C75D8u);
    ctx->pc = 0x2C75D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75D0u;
            // 0x2c75d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75D8u; }
        if (ctx->pc != 0x2C75D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75D8u; }
        if (ctx->pc != 0x2C75D8u) { return; }
    }
    ctx->pc = 0x2C75D8u;
label_2c75d8:
    // 0x2c75d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c75d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c75dc:
    // 0x2c75dc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2c75dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c75e0:
    // 0x2c75e0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2c75e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c75e4:
    // 0x2c75e4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c75e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c75e8:
    // 0x2c75e8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2c75e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c75ec:
    // 0x2c75ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c75ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c75f0:
    // 0x2c75f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c75f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2c75f4:
    // 0x2c75f4: 0x3e00008  jr          $ra
label_2c75f8:
    if (ctx->pc == 0x2C75F8u) {
        ctx->pc = 0x2C75F8u;
            // 0x2c75f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2C75FCu;
        goto label_2c75fc;
    }
    ctx->pc = 0x2C75F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C75F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75F4u;
            // 0x2c75f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C75FCu;
label_2c75fc:
    // 0x2c75fc: 0x0  nop
    ctx->pc = 0x2c75fcu;
    // NOP
label_2c7600:
    // 0x2c7600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c7600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c7604:
    // 0x2c7604: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c7604u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7608:
    // 0x2c7608: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2c7608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2c760c:
    // 0x2c760c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c760cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7610:
    // 0x2c7610: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2c7610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2c7614:
    // 0x2c7614: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2c7614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c7618:
    // 0x2c7618: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c7618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2c761c:
    // 0x2c761c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c761cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7620:
    // 0x2c7620: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2c7620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2c7624:
    // 0x2c7624: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c7624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c7628:
    // 0x2c7628: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c7628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2c762c:
    // 0x2c762c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c762cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c7630:
    // 0x2c7630: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2c7630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2c7634:
    // 0x2c7634: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2c7634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c7638:
    // 0x2c7638: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2c7638u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c763c:
    // 0x2c763c: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x2c763cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2c7640:
    // 0x2c7640: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2c7640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c7644:
    // 0x2c7644: 0x8e080030  lw          $t0, 0x30($s0)
    ctx->pc = 0x2c7644u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2c7648:
    // 0x2c7648: 0x8e090038  lw          $t1, 0x38($s0)
    ctx->pc = 0x2c7648u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2c764c:
    // 0x2c764c: 0xc0b19c0  jal         func_2C6700
label_2c7650:
    if (ctx->pc == 0x2C7650u) {
        ctx->pc = 0x2C7650u;
            // 0x2c7650: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2C7654u;
        goto label_2c7654;
    }
    ctx->pc = 0x2C764Cu;
    SET_GPR_U32(ctx, 31, 0x2C7654u);
    ctx->pc = 0x2C7650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C764Cu;
            // 0x2c7650: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6700u;
    if (runtime->hasFunction(0x2C6700u)) {
        auto targetFn = runtime->lookupFunction(0x2C6700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7654u; }
        if (ctx->pc != 0x2C7654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6700_0x2c6700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7654u; }
        if (ctx->pc != 0x2C7654u) { return; }
    }
    ctx->pc = 0x2C7654u;
label_2c7654:
    // 0x2c7654: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2c7658:
    if (ctx->pc == 0x2C7658u) {
        ctx->pc = 0x2C7658u;
            // 0x2c7658: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C765Cu;
        goto label_2c765c;
    }
    ctx->pc = 0x2C7654u;
    {
        const bool branch_taken_0x2c7654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7654u;
            // 0x2c7658: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7654) {
            ctx->pc = 0x2C76E4u;
            goto label_2c76e4;
        }
    }
    ctx->pc = 0x2C765Cu;
label_2c765c:
    // 0x2c765c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2c765cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7660:
    // 0x2c7660: 0xc0b6098  jal         func_2D8260
label_2c7664:
    if (ctx->pc == 0x2C7664u) {
        ctx->pc = 0x2C7664u;
            // 0x2c7664: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x2C7668u;
        goto label_2c7668;
    }
    ctx->pc = 0x2C7660u;
    SET_GPR_U32(ctx, 31, 0x2C7668u);
    ctx->pc = 0x2C7664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7660u;
            // 0x2c7664: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7668u; }
        if (ctx->pc != 0x2C7668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7668u; }
        if (ctx->pc != 0x2C7668u) { return; }
    }
    ctx->pc = 0x2C7668u;
label_2c7668:
    // 0x2c7668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c766c:
    // 0x2c766c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c766cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7670:
    // 0x2c7670: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2c7670u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7674:
    // 0x2c7674: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2c7674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_2c7678:
    // 0x2c7678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c767c:
    // 0x2c767c: 0xc0b19e4  jal         func_2C6790
label_2c7680:
    if (ctx->pc == 0x2C7680u) {
        ctx->pc = 0x2C7680u;
            // 0x2c7680: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7684u;
        goto label_2c7684;
    }
    ctx->pc = 0x2C767Cu;
    SET_GPR_U32(ctx, 31, 0x2C7684u);
    ctx->pc = 0x2C7680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C767Cu;
            // 0x2c7680: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6790u;
    if (runtime->hasFunction(0x2C6790u)) {
        auto targetFn = runtime->lookupFunction(0x2C6790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7684u; }
        if (ctx->pc != 0x2C7684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6790_0x2c6790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7684u; }
        if (ctx->pc != 0x2C7684u) { return; }
    }
    ctx->pc = 0x2C7684u;
label_2c7684:
    // 0x2c7684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7688:
    // 0x2c7688: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_2c768c:
    if (ctx->pc == 0x2C768Cu) {
        ctx->pc = 0x2C768Cu;
            // 0x2c768c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7690u;
        goto label_2c7690;
    }
    ctx->pc = 0x2C7688u;
    {
        const bool branch_taken_0x2c7688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7688u;
            // 0x2c768c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7688) {
            ctx->pc = 0x2C76E4u;
            goto label_2c76e4;
        }
    }
    ctx->pc = 0x2C7690u;
label_2c7690:
    // 0x2c7690: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2c7690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_2c7694:
    // 0x2c7694: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2c7694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2c7698:
    // 0x2c7698: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c7698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2c769c:
    // 0x2c769c: 0x40f809  jalr        $v0
label_2c76a0:
    if (ctx->pc == 0x2C76A0u) {
        ctx->pc = 0x2C76A0u;
            // 0x2c76a0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2C76A4u;
        goto label_2c76a4;
    }
    ctx->pc = 0x2C769Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C76A4u);
        ctx->pc = 0x2C76A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C769Cu;
            // 0x2c76a0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C76A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C76A4u; }
            if (ctx->pc != 0x2C76A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C76A4u;
label_2c76a4:
    // 0x2c76a4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2c76a8:
    if (ctx->pc == 0x2C76A8u) {
        ctx->pc = 0x2C76A8u;
            // 0x2c76a8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2C76ACu;
        goto label_2c76ac;
    }
    ctx->pc = 0x2C76A4u;
    {
        const bool branch_taken_0x2c76a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c76a4) {
            ctx->pc = 0x2C76A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76A4u;
            // 0x2c76a8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C76E8u;
            goto label_2c76e8;
        }
    }
    ctx->pc = 0x2C76ACu;
label_2c76ac:
    // 0x2c76ac: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2c76acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2c76b0:
    // 0x2c76b0: 0x2402020c  addiu       $v0, $zero, 0x20C
    ctx->pc = 0x2c76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
label_2c76b4:
    // 0x2c76b4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2c76b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c76b8:
    // 0x2c76b8: 0x2463fff5  addiu       $v1, $v1, -0xB
    ctx->pc = 0x2c76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967285));
label_2c76bc:
    // 0x2c76bc: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x2c76bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2c76c0:
    // 0x2c76c0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2c76c4:
    if (ctx->pc == 0x2C76C4u) {
        ctx->pc = 0x2C76C4u;
            // 0x2c76c4: 0x286382b  sltu        $a3, $s4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->pc = 0x2C76C8u;
        goto label_2c76c8;
    }
    ctx->pc = 0x2C76C0u;
    {
        const bool branch_taken_0x2c76c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C76C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76C0u;
            // 0x2c76c4: 0x286382b  sltu        $a3, $s4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76c0) {
            ctx->pc = 0x2C76E4u;
            goto label_2c76e4;
        }
    }
    ctx->pc = 0x2C76C8u;
label_2c76c8:
    // 0x2c76c8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x2c76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_2c76cc:
    // 0x2c76cc: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_2c76d0:
    if (ctx->pc == 0x2C76D0u) {
        ctx->pc = 0x2C76D0u;
            // 0x2c76d0: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->pc = 0x2C76D4u;
        goto label_2c76d4;
    }
    ctx->pc = 0x2C76CCu;
    {
        const bool branch_taken_0x2c76cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C76D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76CCu;
            // 0x2c76d0: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76cc) {
            ctx->pc = 0x2C76E4u;
            goto label_2c76e4;
        }
    }
    ctx->pc = 0x2C76D4u;
label_2c76d4:
    // 0x2c76d4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c76d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c76d8:
    // 0x2c76d8: 0xc0b6098  jal         func_2D8260
label_2c76dc:
    if (ctx->pc == 0x2C76DCu) {
        ctx->pc = 0x2C76DCu;
            // 0x2c76dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C76E0u;
        goto label_2c76e0;
    }
    ctx->pc = 0x2C76D8u;
    SET_GPR_U32(ctx, 31, 0x2C76E0u);
    ctx->pc = 0x2C76DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76D8u;
            // 0x2c76dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76E0u; }
        if (ctx->pc != 0x2C76E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76E0u; }
        if (ctx->pc != 0x2C76E0u) { return; }
    }
    ctx->pc = 0x2C76E0u;
label_2c76e0:
    // 0x2c76e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c76e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c76e4:
    // 0x2c76e4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2c76e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c76e8:
    // 0x2c76e8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2c76e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c76ec:
    // 0x2c76ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c76ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c76f0:
    // 0x2c76f0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2c76f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c76f4:
    // 0x2c76f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c76f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c76f8:
    // 0x2c76f8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c76f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2c76fc:
    // 0x2c76fc: 0x3e00008  jr          $ra
label_2c7700:
    if (ctx->pc == 0x2C7700u) {
        ctx->pc = 0x2C7700u;
            // 0x2c7700: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2C7704u;
        goto label_2c7704;
    }
    ctx->pc = 0x2C76FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C76FCu;
            // 0x2c7700: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7704u;
label_2c7704:
    // 0x2c7704: 0x0  nop
    ctx->pc = 0x2c7704u;
    // NOP
label_2c7708:
    // 0x2c7708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c770c:
    // 0x2c770c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c770cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c7710:
    // 0x2c7710: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c7710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7714:
    // 0x2c7714: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c7714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c7718:
    // 0x2c7718: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c7718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c771c:
    // 0x2c771c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c771cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c7720:
    // 0x2c7720: 0xc0b1976  jal         func_2C65D8
label_2c7724:
    if (ctx->pc == 0x2C7724u) {
        ctx->pc = 0x2C7724u;
            // 0x2c7724: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7728u;
        goto label_2c7728;
    }
    ctx->pc = 0x2C7720u;
    SET_GPR_U32(ctx, 31, 0x2C7728u);
    ctx->pc = 0x2C7724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7720u;
            // 0x2c7724: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C65D8u;
    if (runtime->hasFunction(0x2C65D8u)) {
        auto targetFn = runtime->lookupFunction(0x2C65D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7728u; }
        if (ctx->pc != 0x2C7728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C65D8_0x2c65d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7728u; }
        if (ctx->pc != 0x2C7728u) { return; }
    }
    ctx->pc = 0x2C7728u;
label_2c7728:
    // 0x2c7728: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_2c772c:
    if (ctx->pc == 0x2C772Cu) {
        ctx->pc = 0x2C772Cu;
            // 0x2c772c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2C7730u;
        goto label_2c7730;
    }
    ctx->pc = 0x2C7728u;
    {
        const bool branch_taken_0x2c7728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7728) {
            ctx->pc = 0x2C772Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7728u;
            // 0x2c772c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7794u;
            goto label_2c7794;
        }
    }
    ctx->pc = 0x2C7730u;
label_2c7730:
    // 0x2c7730: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c7730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7734:
    // 0x2c7734: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x2c7734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
label_2c7738:
    // 0x2c7738: 0x24a3fff5  addiu       $v1, $a1, -0xB
    ctx->pc = 0x2c7738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967285));
label_2c773c:
    // 0x2c773c: 0x2ca4000c  sltiu       $a0, $a1, 0xC
    ctx->pc = 0x2c773cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_2c7740:
    // 0x2c7740: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
label_2c7744:
    if (ctx->pc == 0x2C7744u) {
        ctx->pc = 0x2C7744u;
            // 0x2c7744: 0x71280b  movn        $a1, $v1, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->pc = 0x2C7748u;
        goto label_2c7748;
    }
    ctx->pc = 0x2C7740u;
    {
        const bool branch_taken_0x2c7740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7740u;
            // 0x2c7744: 0x71280b  movn        $a1, $v1, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7740) {
            ctx->pc = 0x2C7790u;
            goto label_2c7790;
        }
    }
    ctx->pc = 0x2C7748u;
label_2c7748:
    // 0x2c7748: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x2c7748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_2c774c:
    // 0x2c774c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c774cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7750:
    // 0x2c7750: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2c7750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2c7754:
    // 0x2c7754: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x2c7754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2c7758:
    // 0x2c7758: 0xc0b608e  jal         func_2D8238
label_2c775c:
    if (ctx->pc == 0x2C775Cu) {
        ctx->pc = 0x2C775Cu;
            // 0x2c775c: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->pc = 0x2C7760u;
        goto label_2c7760;
    }
    ctx->pc = 0x2C7758u;
    SET_GPR_U32(ctx, 31, 0x2C7760u);
    ctx->pc = 0x2C775Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7758u;
            // 0x2c775c: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7760u; }
        if (ctx->pc != 0x2C7760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7760u; }
        if (ctx->pc != 0x2C7760u) { return; }
    }
    ctx->pc = 0x2C7760u;
label_2c7760:
    // 0x2c7760: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2c7760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2c7764:
    // 0x2c7764: 0xc0b60c0  jal         func_2D8300
label_2c7768:
    if (ctx->pc == 0x2C7768u) {
        ctx->pc = 0x2C7768u;
            // 0x2c7768: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2C776Cu;
        goto label_2c776c;
    }
    ctx->pc = 0x2C7764u;
    SET_GPR_U32(ctx, 31, 0x2C776Cu);
    ctx->pc = 0x2C7768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7764u;
            // 0x2c7768: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8300u;
    if (runtime->hasFunction(0x2D8300u)) {
        auto targetFn = runtime->lookupFunction(0x2D8300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C776Cu; }
        if (ctx->pc != 0x2C776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8300_0x2d8300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C776Cu; }
        if (ctx->pc != 0x2C776Cu) { return; }
    }
    ctx->pc = 0x2C776Cu;
label_2c776c:
    // 0x2c776c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c776cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7770:
    // 0x2c7770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7774:
    // 0x2c7774: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2c7778:
    if (ctx->pc == 0x2C7778u) {
        ctx->pc = 0x2C7778u;
            // 0x2c7778: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x2C777Cu;
        goto label_2c777c;
    }
    ctx->pc = 0x2C7774u;
    {
        const bool branch_taken_0x2c7774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7774u;
            // 0x2c7778: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7774) {
            ctx->pc = 0x2C7788u;
            goto label_2c7788;
        }
    }
    ctx->pc = 0x2C777Cu;
label_2c777c:
    // 0x2c777c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2c777cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_2c7780:
    // 0x2c7780: 0x10000003  b           . + 4 + (0x3 << 2)
label_2c7784:
    if (ctx->pc == 0x2C7784u) {
        ctx->pc = 0x2C7784u;
            // 0x2c7784: 0x24020206  addiu       $v0, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->pc = 0x2C7788u;
        goto label_2c7788;
    }
    ctx->pc = 0x2C7780u;
    {
        const bool branch_taken_0x2c7780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7780u;
            // 0x2c7784: 0x24020206  addiu       $v0, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7780) {
            ctx->pc = 0x2C7790u;
            goto label_2c7790;
        }
    }
    ctx->pc = 0x2C7788u;
label_2c7788:
    // 0x2c7788: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c7788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c778c:
    // 0x2c778c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2c778cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_2c7790:
    // 0x2c7790: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c7790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7794:
    // 0x2c7794: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c7794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c7798:
    // 0x2c7798: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c779c:
    // 0x2c779c: 0x3e00008  jr          $ra
label_2c77a0:
    if (ctx->pc == 0x2C77A0u) {
        ctx->pc = 0x2C77A0u;
            // 0x2c77a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C77A4u;
        goto label_2c77a4;
    }
    ctx->pc = 0x2C779Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C77A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C779Cu;
            // 0x2c77a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C77A4u;
label_2c77a4:
    // 0x2c77a4: 0x0  nop
    ctx->pc = 0x2c77a4u;
    // NOP
label_2c77a8:
    // 0x2c77a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2c77ac:
    // 0x2c77ac: 0x24427ed8  addiu       $v0, $v0, 0x7ED8
    ctx->pc = 0x2c77acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32472));
label_2c77b0:
    // 0x2c77b0: 0x3e00008  jr          $ra
label_2c77b4:
    if (ctx->pc == 0x2C77B4u) {
        ctx->pc = 0x2C77B4u;
            // 0x2c77b4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x2C77B8u;
        goto label_fallthrough_0x2c77b0;
    }
    ctx->pc = 0x2C77B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C77B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C77B0u;
            // 0x2c77b4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c77b0:
    ctx->pc = 0x2C77B8u;
    ctx->pc = 0x2c77b8u;
}
