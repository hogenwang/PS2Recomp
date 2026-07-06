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

// Function: sub_002B7530
// Address: 0x2b7530 - 0x2b9708
void sub_002B7530_0x2b7530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7530_0x2b7530");
#endif

    switch (ctx->pc) {
        case 0x2b7530u: goto label_2b7530;
        case 0x2b7534u: goto label_2b7534;
        case 0x2b7538u: goto label_2b7538;
        case 0x2b753cu: goto label_2b753c;
        case 0x2b7540u: goto label_2b7540;
        case 0x2b7544u: goto label_2b7544;
        case 0x2b7548u: goto label_2b7548;
        case 0x2b754cu: goto label_2b754c;
        case 0x2b7550u: goto label_2b7550;
        case 0x2b7554u: goto label_2b7554;
        case 0x2b7558u: goto label_2b7558;
        case 0x2b755cu: goto label_2b755c;
        case 0x2b7560u: goto label_2b7560;
        case 0x2b7564u: goto label_2b7564;
        case 0x2b7568u: goto label_2b7568;
        case 0x2b756cu: goto label_2b756c;
        case 0x2b7570u: goto label_2b7570;
        case 0x2b7574u: goto label_2b7574;
        case 0x2b7578u: goto label_2b7578;
        case 0x2b757cu: goto label_2b757c;
        case 0x2b7580u: goto label_2b7580;
        case 0x2b7584u: goto label_2b7584;
        case 0x2b7588u: goto label_2b7588;
        case 0x2b758cu: goto label_2b758c;
        case 0x2b7590u: goto label_2b7590;
        case 0x2b7594u: goto label_2b7594;
        case 0x2b7598u: goto label_2b7598;
        case 0x2b759cu: goto label_2b759c;
        case 0x2b75a0u: goto label_2b75a0;
        case 0x2b75a4u: goto label_2b75a4;
        case 0x2b75a8u: goto label_2b75a8;
        case 0x2b75acu: goto label_2b75ac;
        case 0x2b75b0u: goto label_2b75b0;
        case 0x2b75b4u: goto label_2b75b4;
        case 0x2b75b8u: goto label_2b75b8;
        case 0x2b75bcu: goto label_2b75bc;
        case 0x2b75c0u: goto label_2b75c0;
        case 0x2b75c4u: goto label_2b75c4;
        case 0x2b75c8u: goto label_2b75c8;
        case 0x2b75ccu: goto label_2b75cc;
        case 0x2b75d0u: goto label_2b75d0;
        case 0x2b75d4u: goto label_2b75d4;
        case 0x2b75d8u: goto label_2b75d8;
        case 0x2b75dcu: goto label_2b75dc;
        case 0x2b75e0u: goto label_2b75e0;
        case 0x2b75e4u: goto label_2b75e4;
        case 0x2b75e8u: goto label_2b75e8;
        case 0x2b75ecu: goto label_2b75ec;
        case 0x2b75f0u: goto label_2b75f0;
        case 0x2b75f4u: goto label_2b75f4;
        case 0x2b75f8u: goto label_2b75f8;
        case 0x2b75fcu: goto label_2b75fc;
        case 0x2b7600u: goto label_2b7600;
        case 0x2b7604u: goto label_2b7604;
        case 0x2b7608u: goto label_2b7608;
        case 0x2b760cu: goto label_2b760c;
        case 0x2b7610u: goto label_2b7610;
        case 0x2b7614u: goto label_2b7614;
        case 0x2b7618u: goto label_2b7618;
        case 0x2b761cu: goto label_2b761c;
        case 0x2b7620u: goto label_2b7620;
        case 0x2b7624u: goto label_2b7624;
        case 0x2b7628u: goto label_2b7628;
        case 0x2b762cu: goto label_2b762c;
        case 0x2b7630u: goto label_2b7630;
        case 0x2b7634u: goto label_2b7634;
        case 0x2b7638u: goto label_2b7638;
        case 0x2b763cu: goto label_2b763c;
        case 0x2b7640u: goto label_2b7640;
        case 0x2b7644u: goto label_2b7644;
        case 0x2b7648u: goto label_2b7648;
        case 0x2b764cu: goto label_2b764c;
        case 0x2b7650u: goto label_2b7650;
        case 0x2b7654u: goto label_2b7654;
        case 0x2b7658u: goto label_2b7658;
        case 0x2b765cu: goto label_2b765c;
        case 0x2b7660u: goto label_2b7660;
        case 0x2b7664u: goto label_2b7664;
        case 0x2b7668u: goto label_2b7668;
        case 0x2b766cu: goto label_2b766c;
        case 0x2b7670u: goto label_2b7670;
        case 0x2b7674u: goto label_2b7674;
        case 0x2b7678u: goto label_2b7678;
        case 0x2b767cu: goto label_2b767c;
        case 0x2b7680u: goto label_2b7680;
        case 0x2b7684u: goto label_2b7684;
        case 0x2b7688u: goto label_2b7688;
        case 0x2b768cu: goto label_2b768c;
        case 0x2b7690u: goto label_2b7690;
        case 0x2b7694u: goto label_2b7694;
        case 0x2b7698u: goto label_2b7698;
        case 0x2b769cu: goto label_2b769c;
        case 0x2b76a0u: goto label_2b76a0;
        case 0x2b76a4u: goto label_2b76a4;
        case 0x2b76a8u: goto label_2b76a8;
        case 0x2b76acu: goto label_2b76ac;
        case 0x2b76b0u: goto label_2b76b0;
        case 0x2b76b4u: goto label_2b76b4;
        case 0x2b76b8u: goto label_2b76b8;
        case 0x2b76bcu: goto label_2b76bc;
        case 0x2b76c0u: goto label_2b76c0;
        case 0x2b76c4u: goto label_2b76c4;
        case 0x2b76c8u: goto label_2b76c8;
        case 0x2b76ccu: goto label_2b76cc;
        case 0x2b76d0u: goto label_2b76d0;
        case 0x2b76d4u: goto label_2b76d4;
        case 0x2b76d8u: goto label_2b76d8;
        case 0x2b76dcu: goto label_2b76dc;
        case 0x2b76e0u: goto label_2b76e0;
        case 0x2b76e4u: goto label_2b76e4;
        case 0x2b76e8u: goto label_2b76e8;
        case 0x2b76ecu: goto label_2b76ec;
        case 0x2b76f0u: goto label_2b76f0;
        case 0x2b76f4u: goto label_2b76f4;
        case 0x2b76f8u: goto label_2b76f8;
        case 0x2b76fcu: goto label_2b76fc;
        case 0x2b7700u: goto label_2b7700;
        case 0x2b7704u: goto label_2b7704;
        case 0x2b7708u: goto label_2b7708;
        case 0x2b770cu: goto label_2b770c;
        case 0x2b7710u: goto label_2b7710;
        case 0x2b7714u: goto label_2b7714;
        case 0x2b7718u: goto label_2b7718;
        case 0x2b771cu: goto label_2b771c;
        case 0x2b7720u: goto label_2b7720;
        case 0x2b7724u: goto label_2b7724;
        case 0x2b7728u: goto label_2b7728;
        case 0x2b772cu: goto label_2b772c;
        case 0x2b7730u: goto label_2b7730;
        case 0x2b7734u: goto label_2b7734;
        case 0x2b7738u: goto label_2b7738;
        case 0x2b773cu: goto label_2b773c;
        case 0x2b7740u: goto label_2b7740;
        case 0x2b7744u: goto label_2b7744;
        case 0x2b7748u: goto label_2b7748;
        case 0x2b774cu: goto label_2b774c;
        case 0x2b7750u: goto label_2b7750;
        case 0x2b7754u: goto label_2b7754;
        case 0x2b7758u: goto label_2b7758;
        case 0x2b775cu: goto label_2b775c;
        case 0x2b7760u: goto label_2b7760;
        case 0x2b7764u: goto label_2b7764;
        case 0x2b7768u: goto label_2b7768;
        case 0x2b776cu: goto label_2b776c;
        case 0x2b7770u: goto label_2b7770;
        case 0x2b7774u: goto label_2b7774;
        case 0x2b7778u: goto label_2b7778;
        case 0x2b777cu: goto label_2b777c;
        case 0x2b7780u: goto label_2b7780;
        case 0x2b7784u: goto label_2b7784;
        case 0x2b7788u: goto label_2b7788;
        case 0x2b778cu: goto label_2b778c;
        case 0x2b7790u: goto label_2b7790;
        case 0x2b7794u: goto label_2b7794;
        case 0x2b7798u: goto label_2b7798;
        case 0x2b779cu: goto label_2b779c;
        case 0x2b77a0u: goto label_2b77a0;
        case 0x2b77a4u: goto label_2b77a4;
        case 0x2b77a8u: goto label_2b77a8;
        case 0x2b77acu: goto label_2b77ac;
        case 0x2b77b0u: goto label_2b77b0;
        case 0x2b77b4u: goto label_2b77b4;
        case 0x2b77b8u: goto label_2b77b8;
        case 0x2b77bcu: goto label_2b77bc;
        case 0x2b77c0u: goto label_2b77c0;
        case 0x2b77c4u: goto label_2b77c4;
        case 0x2b77c8u: goto label_2b77c8;
        case 0x2b77ccu: goto label_2b77cc;
        case 0x2b77d0u: goto label_2b77d0;
        case 0x2b77d4u: goto label_2b77d4;
        case 0x2b77d8u: goto label_2b77d8;
        case 0x2b77dcu: goto label_2b77dc;
        case 0x2b77e0u: goto label_2b77e0;
        case 0x2b77e4u: goto label_2b77e4;
        case 0x2b77e8u: goto label_2b77e8;
        case 0x2b77ecu: goto label_2b77ec;
        case 0x2b77f0u: goto label_2b77f0;
        case 0x2b77f4u: goto label_2b77f4;
        case 0x2b77f8u: goto label_2b77f8;
        case 0x2b77fcu: goto label_2b77fc;
        case 0x2b7800u: goto label_2b7800;
        case 0x2b7804u: goto label_2b7804;
        case 0x2b7808u: goto label_2b7808;
        case 0x2b780cu: goto label_2b780c;
        case 0x2b7810u: goto label_2b7810;
        case 0x2b7814u: goto label_2b7814;
        case 0x2b7818u: goto label_2b7818;
        case 0x2b781cu: goto label_2b781c;
        case 0x2b7820u: goto label_2b7820;
        case 0x2b7824u: goto label_2b7824;
        case 0x2b7828u: goto label_2b7828;
        case 0x2b782cu: goto label_2b782c;
        case 0x2b7830u: goto label_2b7830;
        case 0x2b7834u: goto label_2b7834;
        case 0x2b7838u: goto label_2b7838;
        case 0x2b783cu: goto label_2b783c;
        case 0x2b7840u: goto label_2b7840;
        case 0x2b7844u: goto label_2b7844;
        case 0x2b7848u: goto label_2b7848;
        case 0x2b784cu: goto label_2b784c;
        case 0x2b7850u: goto label_2b7850;
        case 0x2b7854u: goto label_2b7854;
        case 0x2b7858u: goto label_2b7858;
        case 0x2b785cu: goto label_2b785c;
        case 0x2b7860u: goto label_2b7860;
        case 0x2b7864u: goto label_2b7864;
        case 0x2b7868u: goto label_2b7868;
        case 0x2b786cu: goto label_2b786c;
        case 0x2b7870u: goto label_2b7870;
        case 0x2b7874u: goto label_2b7874;
        case 0x2b7878u: goto label_2b7878;
        case 0x2b787cu: goto label_2b787c;
        case 0x2b7880u: goto label_2b7880;
        case 0x2b7884u: goto label_2b7884;
        case 0x2b7888u: goto label_2b7888;
        case 0x2b788cu: goto label_2b788c;
        case 0x2b7890u: goto label_2b7890;
        case 0x2b7894u: goto label_2b7894;
        case 0x2b7898u: goto label_2b7898;
        case 0x2b789cu: goto label_2b789c;
        case 0x2b78a0u: goto label_2b78a0;
        case 0x2b78a4u: goto label_2b78a4;
        case 0x2b78a8u: goto label_2b78a8;
        case 0x2b78acu: goto label_2b78ac;
        case 0x2b78b0u: goto label_2b78b0;
        case 0x2b78b4u: goto label_2b78b4;
        case 0x2b78b8u: goto label_2b78b8;
        case 0x2b78bcu: goto label_2b78bc;
        case 0x2b78c0u: goto label_2b78c0;
        case 0x2b78c4u: goto label_2b78c4;
        case 0x2b78c8u: goto label_2b78c8;
        case 0x2b78ccu: goto label_2b78cc;
        case 0x2b78d0u: goto label_2b78d0;
        case 0x2b78d4u: goto label_2b78d4;
        case 0x2b78d8u: goto label_2b78d8;
        case 0x2b78dcu: goto label_2b78dc;
        case 0x2b78e0u: goto label_2b78e0;
        case 0x2b78e4u: goto label_2b78e4;
        case 0x2b78e8u: goto label_2b78e8;
        case 0x2b78ecu: goto label_2b78ec;
        case 0x2b78f0u: goto label_2b78f0;
        case 0x2b78f4u: goto label_2b78f4;
        case 0x2b78f8u: goto label_2b78f8;
        case 0x2b78fcu: goto label_2b78fc;
        case 0x2b7900u: goto label_2b7900;
        case 0x2b7904u: goto label_2b7904;
        case 0x2b7908u: goto label_2b7908;
        case 0x2b790cu: goto label_2b790c;
        case 0x2b7910u: goto label_2b7910;
        case 0x2b7914u: goto label_2b7914;
        case 0x2b7918u: goto label_2b7918;
        case 0x2b791cu: goto label_2b791c;
        case 0x2b7920u: goto label_2b7920;
        case 0x2b7924u: goto label_2b7924;
        case 0x2b7928u: goto label_2b7928;
        case 0x2b792cu: goto label_2b792c;
        case 0x2b7930u: goto label_2b7930;
        case 0x2b7934u: goto label_2b7934;
        case 0x2b7938u: goto label_2b7938;
        case 0x2b793cu: goto label_2b793c;
        case 0x2b7940u: goto label_2b7940;
        case 0x2b7944u: goto label_2b7944;
        case 0x2b7948u: goto label_2b7948;
        case 0x2b794cu: goto label_2b794c;
        case 0x2b7950u: goto label_2b7950;
        case 0x2b7954u: goto label_2b7954;
        case 0x2b7958u: goto label_2b7958;
        case 0x2b795cu: goto label_2b795c;
        case 0x2b7960u: goto label_2b7960;
        case 0x2b7964u: goto label_2b7964;
        case 0x2b7968u: goto label_2b7968;
        case 0x2b796cu: goto label_2b796c;
        case 0x2b7970u: goto label_2b7970;
        case 0x2b7974u: goto label_2b7974;
        case 0x2b7978u: goto label_2b7978;
        case 0x2b797cu: goto label_2b797c;
        case 0x2b7980u: goto label_2b7980;
        case 0x2b7984u: goto label_2b7984;
        case 0x2b7988u: goto label_2b7988;
        case 0x2b798cu: goto label_2b798c;
        case 0x2b7990u: goto label_2b7990;
        case 0x2b7994u: goto label_2b7994;
        case 0x2b7998u: goto label_2b7998;
        case 0x2b799cu: goto label_2b799c;
        case 0x2b79a0u: goto label_2b79a0;
        case 0x2b79a4u: goto label_2b79a4;
        case 0x2b79a8u: goto label_2b79a8;
        case 0x2b79acu: goto label_2b79ac;
        case 0x2b79b0u: goto label_2b79b0;
        case 0x2b79b4u: goto label_2b79b4;
        case 0x2b79b8u: goto label_2b79b8;
        case 0x2b79bcu: goto label_2b79bc;
        case 0x2b79c0u: goto label_2b79c0;
        case 0x2b79c4u: goto label_2b79c4;
        case 0x2b79c8u: goto label_2b79c8;
        case 0x2b79ccu: goto label_2b79cc;
        case 0x2b79d0u: goto label_2b79d0;
        case 0x2b79d4u: goto label_2b79d4;
        case 0x2b79d8u: goto label_2b79d8;
        case 0x2b79dcu: goto label_2b79dc;
        case 0x2b79e0u: goto label_2b79e0;
        case 0x2b79e4u: goto label_2b79e4;
        case 0x2b79e8u: goto label_2b79e8;
        case 0x2b79ecu: goto label_2b79ec;
        case 0x2b79f0u: goto label_2b79f0;
        case 0x2b79f4u: goto label_2b79f4;
        case 0x2b79f8u: goto label_2b79f8;
        case 0x2b79fcu: goto label_2b79fc;
        case 0x2b7a00u: goto label_2b7a00;
        case 0x2b7a04u: goto label_2b7a04;
        case 0x2b7a08u: goto label_2b7a08;
        case 0x2b7a0cu: goto label_2b7a0c;
        case 0x2b7a10u: goto label_2b7a10;
        case 0x2b7a14u: goto label_2b7a14;
        case 0x2b7a18u: goto label_2b7a18;
        case 0x2b7a1cu: goto label_2b7a1c;
        case 0x2b7a20u: goto label_2b7a20;
        case 0x2b7a24u: goto label_2b7a24;
        case 0x2b7a28u: goto label_2b7a28;
        case 0x2b7a2cu: goto label_2b7a2c;
        case 0x2b7a30u: goto label_2b7a30;
        case 0x2b7a34u: goto label_2b7a34;
        case 0x2b7a38u: goto label_2b7a38;
        case 0x2b7a3cu: goto label_2b7a3c;
        case 0x2b7a40u: goto label_2b7a40;
        case 0x2b7a44u: goto label_2b7a44;
        case 0x2b7a48u: goto label_2b7a48;
        case 0x2b7a4cu: goto label_2b7a4c;
        case 0x2b7a50u: goto label_2b7a50;
        case 0x2b7a54u: goto label_2b7a54;
        case 0x2b7a58u: goto label_2b7a58;
        case 0x2b7a5cu: goto label_2b7a5c;
        case 0x2b7a60u: goto label_2b7a60;
        case 0x2b7a64u: goto label_2b7a64;
        case 0x2b7a68u: goto label_2b7a68;
        case 0x2b7a6cu: goto label_2b7a6c;
        case 0x2b7a70u: goto label_2b7a70;
        case 0x2b7a74u: goto label_2b7a74;
        case 0x2b7a78u: goto label_2b7a78;
        case 0x2b7a7cu: goto label_2b7a7c;
        case 0x2b7a80u: goto label_2b7a80;
        case 0x2b7a84u: goto label_2b7a84;
        case 0x2b7a88u: goto label_2b7a88;
        case 0x2b7a8cu: goto label_2b7a8c;
        case 0x2b7a90u: goto label_2b7a90;
        case 0x2b7a94u: goto label_2b7a94;
        case 0x2b7a98u: goto label_2b7a98;
        case 0x2b7a9cu: goto label_2b7a9c;
        case 0x2b7aa0u: goto label_2b7aa0;
        case 0x2b7aa4u: goto label_2b7aa4;
        case 0x2b7aa8u: goto label_2b7aa8;
        case 0x2b7aacu: goto label_2b7aac;
        case 0x2b7ab0u: goto label_2b7ab0;
        case 0x2b7ab4u: goto label_2b7ab4;
        case 0x2b7ab8u: goto label_2b7ab8;
        case 0x2b7abcu: goto label_2b7abc;
        case 0x2b7ac0u: goto label_2b7ac0;
        case 0x2b7ac4u: goto label_2b7ac4;
        case 0x2b7ac8u: goto label_2b7ac8;
        case 0x2b7accu: goto label_2b7acc;
        case 0x2b7ad0u: goto label_2b7ad0;
        case 0x2b7ad4u: goto label_2b7ad4;
        case 0x2b7ad8u: goto label_2b7ad8;
        case 0x2b7adcu: goto label_2b7adc;
        case 0x2b7ae0u: goto label_2b7ae0;
        case 0x2b7ae4u: goto label_2b7ae4;
        case 0x2b7ae8u: goto label_2b7ae8;
        case 0x2b7aecu: goto label_2b7aec;
        case 0x2b7af0u: goto label_2b7af0;
        case 0x2b7af4u: goto label_2b7af4;
        case 0x2b7af8u: goto label_2b7af8;
        case 0x2b7afcu: goto label_2b7afc;
        case 0x2b7b00u: goto label_2b7b00;
        case 0x2b7b04u: goto label_2b7b04;
        case 0x2b7b08u: goto label_2b7b08;
        case 0x2b7b0cu: goto label_2b7b0c;
        case 0x2b7b10u: goto label_2b7b10;
        case 0x2b7b14u: goto label_2b7b14;
        case 0x2b7b18u: goto label_2b7b18;
        case 0x2b7b1cu: goto label_2b7b1c;
        case 0x2b7b20u: goto label_2b7b20;
        case 0x2b7b24u: goto label_2b7b24;
        case 0x2b7b28u: goto label_2b7b28;
        case 0x2b7b2cu: goto label_2b7b2c;
        case 0x2b7b30u: goto label_2b7b30;
        case 0x2b7b34u: goto label_2b7b34;
        case 0x2b7b38u: goto label_2b7b38;
        case 0x2b7b3cu: goto label_2b7b3c;
        case 0x2b7b40u: goto label_2b7b40;
        case 0x2b7b44u: goto label_2b7b44;
        case 0x2b7b48u: goto label_2b7b48;
        case 0x2b7b4cu: goto label_2b7b4c;
        case 0x2b7b50u: goto label_2b7b50;
        case 0x2b7b54u: goto label_2b7b54;
        case 0x2b7b58u: goto label_2b7b58;
        case 0x2b7b5cu: goto label_2b7b5c;
        case 0x2b7b60u: goto label_2b7b60;
        case 0x2b7b64u: goto label_2b7b64;
        case 0x2b7b68u: goto label_2b7b68;
        case 0x2b7b6cu: goto label_2b7b6c;
        case 0x2b7b70u: goto label_2b7b70;
        case 0x2b7b74u: goto label_2b7b74;
        case 0x2b7b78u: goto label_2b7b78;
        case 0x2b7b7cu: goto label_2b7b7c;
        case 0x2b7b80u: goto label_2b7b80;
        case 0x2b7b84u: goto label_2b7b84;
        case 0x2b7b88u: goto label_2b7b88;
        case 0x2b7b8cu: goto label_2b7b8c;
        case 0x2b7b90u: goto label_2b7b90;
        case 0x2b7b94u: goto label_2b7b94;
        case 0x2b7b98u: goto label_2b7b98;
        case 0x2b7b9cu: goto label_2b7b9c;
        case 0x2b7ba0u: goto label_2b7ba0;
        case 0x2b7ba4u: goto label_2b7ba4;
        case 0x2b7ba8u: goto label_2b7ba8;
        case 0x2b7bacu: goto label_2b7bac;
        case 0x2b7bb0u: goto label_2b7bb0;
        case 0x2b7bb4u: goto label_2b7bb4;
        case 0x2b7bb8u: goto label_2b7bb8;
        case 0x2b7bbcu: goto label_2b7bbc;
        case 0x2b7bc0u: goto label_2b7bc0;
        case 0x2b7bc4u: goto label_2b7bc4;
        case 0x2b7bc8u: goto label_2b7bc8;
        case 0x2b7bccu: goto label_2b7bcc;
        case 0x2b7bd0u: goto label_2b7bd0;
        case 0x2b7bd4u: goto label_2b7bd4;
        case 0x2b7bd8u: goto label_2b7bd8;
        case 0x2b7bdcu: goto label_2b7bdc;
        case 0x2b7be0u: goto label_2b7be0;
        case 0x2b7be4u: goto label_2b7be4;
        case 0x2b7be8u: goto label_2b7be8;
        case 0x2b7becu: goto label_2b7bec;
        case 0x2b7bf0u: goto label_2b7bf0;
        case 0x2b7bf4u: goto label_2b7bf4;
        case 0x2b7bf8u: goto label_2b7bf8;
        case 0x2b7bfcu: goto label_2b7bfc;
        case 0x2b7c00u: goto label_2b7c00;
        case 0x2b7c04u: goto label_2b7c04;
        case 0x2b7c08u: goto label_2b7c08;
        case 0x2b7c0cu: goto label_2b7c0c;
        case 0x2b7c10u: goto label_2b7c10;
        case 0x2b7c14u: goto label_2b7c14;
        case 0x2b7c18u: goto label_2b7c18;
        case 0x2b7c1cu: goto label_2b7c1c;
        case 0x2b7c20u: goto label_2b7c20;
        case 0x2b7c24u: goto label_2b7c24;
        case 0x2b7c28u: goto label_2b7c28;
        case 0x2b7c2cu: goto label_2b7c2c;
        case 0x2b7c30u: goto label_2b7c30;
        case 0x2b7c34u: goto label_2b7c34;
        case 0x2b7c38u: goto label_2b7c38;
        case 0x2b7c3cu: goto label_2b7c3c;
        case 0x2b7c40u: goto label_2b7c40;
        case 0x2b7c44u: goto label_2b7c44;
        case 0x2b7c48u: goto label_2b7c48;
        case 0x2b7c4cu: goto label_2b7c4c;
        case 0x2b7c50u: goto label_2b7c50;
        case 0x2b7c54u: goto label_2b7c54;
        case 0x2b7c58u: goto label_2b7c58;
        case 0x2b7c5cu: goto label_2b7c5c;
        case 0x2b7c60u: goto label_2b7c60;
        case 0x2b7c64u: goto label_2b7c64;
        case 0x2b7c68u: goto label_2b7c68;
        case 0x2b7c6cu: goto label_2b7c6c;
        case 0x2b7c70u: goto label_2b7c70;
        case 0x2b7c74u: goto label_2b7c74;
        case 0x2b7c78u: goto label_2b7c78;
        case 0x2b7c7cu: goto label_2b7c7c;
        case 0x2b7c80u: goto label_2b7c80;
        case 0x2b7c84u: goto label_2b7c84;
        case 0x2b7c88u: goto label_2b7c88;
        case 0x2b7c8cu: goto label_2b7c8c;
        case 0x2b7c90u: goto label_2b7c90;
        case 0x2b7c94u: goto label_2b7c94;
        case 0x2b7c98u: goto label_2b7c98;
        case 0x2b7c9cu: goto label_2b7c9c;
        case 0x2b7ca0u: goto label_2b7ca0;
        case 0x2b7ca4u: goto label_2b7ca4;
        case 0x2b7ca8u: goto label_2b7ca8;
        case 0x2b7cacu: goto label_2b7cac;
        case 0x2b7cb0u: goto label_2b7cb0;
        case 0x2b7cb4u: goto label_2b7cb4;
        case 0x2b7cb8u: goto label_2b7cb8;
        case 0x2b7cbcu: goto label_2b7cbc;
        case 0x2b7cc0u: goto label_2b7cc0;
        case 0x2b7cc4u: goto label_2b7cc4;
        case 0x2b7cc8u: goto label_2b7cc8;
        case 0x2b7cccu: goto label_2b7ccc;
        case 0x2b7cd0u: goto label_2b7cd0;
        case 0x2b7cd4u: goto label_2b7cd4;
        case 0x2b7cd8u: goto label_2b7cd8;
        case 0x2b7cdcu: goto label_2b7cdc;
        case 0x2b7ce0u: goto label_2b7ce0;
        case 0x2b7ce4u: goto label_2b7ce4;
        case 0x2b7ce8u: goto label_2b7ce8;
        case 0x2b7cecu: goto label_2b7cec;
        case 0x2b7cf0u: goto label_2b7cf0;
        case 0x2b7cf4u: goto label_2b7cf4;
        case 0x2b7cf8u: goto label_2b7cf8;
        case 0x2b7cfcu: goto label_2b7cfc;
        case 0x2b7d00u: goto label_2b7d00;
        case 0x2b7d04u: goto label_2b7d04;
        case 0x2b7d08u: goto label_2b7d08;
        case 0x2b7d0cu: goto label_2b7d0c;
        case 0x2b7d10u: goto label_2b7d10;
        case 0x2b7d14u: goto label_2b7d14;
        case 0x2b7d18u: goto label_2b7d18;
        case 0x2b7d1cu: goto label_2b7d1c;
        case 0x2b7d20u: goto label_2b7d20;
        case 0x2b7d24u: goto label_2b7d24;
        case 0x2b7d28u: goto label_2b7d28;
        case 0x2b7d2cu: goto label_2b7d2c;
        case 0x2b7d30u: goto label_2b7d30;
        case 0x2b7d34u: goto label_2b7d34;
        case 0x2b7d38u: goto label_2b7d38;
        case 0x2b7d3cu: goto label_2b7d3c;
        case 0x2b7d40u: goto label_2b7d40;
        case 0x2b7d44u: goto label_2b7d44;
        case 0x2b7d48u: goto label_2b7d48;
        case 0x2b7d4cu: goto label_2b7d4c;
        case 0x2b7d50u: goto label_2b7d50;
        case 0x2b7d54u: goto label_2b7d54;
        case 0x2b7d58u: goto label_2b7d58;
        case 0x2b7d5cu: goto label_2b7d5c;
        case 0x2b7d60u: goto label_2b7d60;
        case 0x2b7d64u: goto label_2b7d64;
        case 0x2b7d68u: goto label_2b7d68;
        case 0x2b7d6cu: goto label_2b7d6c;
        case 0x2b7d70u: goto label_2b7d70;
        case 0x2b7d74u: goto label_2b7d74;
        case 0x2b7d78u: goto label_2b7d78;
        case 0x2b7d7cu: goto label_2b7d7c;
        case 0x2b7d80u: goto label_2b7d80;
        case 0x2b7d84u: goto label_2b7d84;
        case 0x2b7d88u: goto label_2b7d88;
        case 0x2b7d8cu: goto label_2b7d8c;
        case 0x2b7d90u: goto label_2b7d90;
        case 0x2b7d94u: goto label_2b7d94;
        case 0x2b7d98u: goto label_2b7d98;
        case 0x2b7d9cu: goto label_2b7d9c;
        case 0x2b7da0u: goto label_2b7da0;
        case 0x2b7da4u: goto label_2b7da4;
        case 0x2b7da8u: goto label_2b7da8;
        case 0x2b7dacu: goto label_2b7dac;
        case 0x2b7db0u: goto label_2b7db0;
        case 0x2b7db4u: goto label_2b7db4;
        case 0x2b7db8u: goto label_2b7db8;
        case 0x2b7dbcu: goto label_2b7dbc;
        case 0x2b7dc0u: goto label_2b7dc0;
        case 0x2b7dc4u: goto label_2b7dc4;
        case 0x2b7dc8u: goto label_2b7dc8;
        case 0x2b7dccu: goto label_2b7dcc;
        case 0x2b7dd0u: goto label_2b7dd0;
        case 0x2b7dd4u: goto label_2b7dd4;
        case 0x2b7dd8u: goto label_2b7dd8;
        case 0x2b7ddcu: goto label_2b7ddc;
        case 0x2b7de0u: goto label_2b7de0;
        case 0x2b7de4u: goto label_2b7de4;
        case 0x2b7de8u: goto label_2b7de8;
        case 0x2b7decu: goto label_2b7dec;
        case 0x2b7df0u: goto label_2b7df0;
        case 0x2b7df4u: goto label_2b7df4;
        case 0x2b7df8u: goto label_2b7df8;
        case 0x2b7dfcu: goto label_2b7dfc;
        case 0x2b7e00u: goto label_2b7e00;
        case 0x2b7e04u: goto label_2b7e04;
        case 0x2b7e08u: goto label_2b7e08;
        case 0x2b7e0cu: goto label_2b7e0c;
        case 0x2b7e10u: goto label_2b7e10;
        case 0x2b7e14u: goto label_2b7e14;
        case 0x2b7e18u: goto label_2b7e18;
        case 0x2b7e1cu: goto label_2b7e1c;
        case 0x2b7e20u: goto label_2b7e20;
        case 0x2b7e24u: goto label_2b7e24;
        case 0x2b7e28u: goto label_2b7e28;
        case 0x2b7e2cu: goto label_2b7e2c;
        case 0x2b7e30u: goto label_2b7e30;
        case 0x2b7e34u: goto label_2b7e34;
        case 0x2b7e38u: goto label_2b7e38;
        case 0x2b7e3cu: goto label_2b7e3c;
        case 0x2b7e40u: goto label_2b7e40;
        case 0x2b7e44u: goto label_2b7e44;
        case 0x2b7e48u: goto label_2b7e48;
        case 0x2b7e4cu: goto label_2b7e4c;
        case 0x2b7e50u: goto label_2b7e50;
        case 0x2b7e54u: goto label_2b7e54;
        case 0x2b7e58u: goto label_2b7e58;
        case 0x2b7e5cu: goto label_2b7e5c;
        case 0x2b7e60u: goto label_2b7e60;
        case 0x2b7e64u: goto label_2b7e64;
        case 0x2b7e68u: goto label_2b7e68;
        case 0x2b7e6cu: goto label_2b7e6c;
        case 0x2b7e70u: goto label_2b7e70;
        case 0x2b7e74u: goto label_2b7e74;
        case 0x2b7e78u: goto label_2b7e78;
        case 0x2b7e7cu: goto label_2b7e7c;
        case 0x2b7e80u: goto label_2b7e80;
        case 0x2b7e84u: goto label_2b7e84;
        case 0x2b7e88u: goto label_2b7e88;
        case 0x2b7e8cu: goto label_2b7e8c;
        case 0x2b7e90u: goto label_2b7e90;
        case 0x2b7e94u: goto label_2b7e94;
        case 0x2b7e98u: goto label_2b7e98;
        case 0x2b7e9cu: goto label_2b7e9c;
        case 0x2b7ea0u: goto label_2b7ea0;
        case 0x2b7ea4u: goto label_2b7ea4;
        case 0x2b7ea8u: goto label_2b7ea8;
        case 0x2b7eacu: goto label_2b7eac;
        case 0x2b7eb0u: goto label_2b7eb0;
        case 0x2b7eb4u: goto label_2b7eb4;
        case 0x2b7eb8u: goto label_2b7eb8;
        case 0x2b7ebcu: goto label_2b7ebc;
        case 0x2b7ec0u: goto label_2b7ec0;
        case 0x2b7ec4u: goto label_2b7ec4;
        case 0x2b7ec8u: goto label_2b7ec8;
        case 0x2b7eccu: goto label_2b7ecc;
        case 0x2b7ed0u: goto label_2b7ed0;
        case 0x2b7ed4u: goto label_2b7ed4;
        case 0x2b7ed8u: goto label_2b7ed8;
        case 0x2b7edcu: goto label_2b7edc;
        case 0x2b7ee0u: goto label_2b7ee0;
        case 0x2b7ee4u: goto label_2b7ee4;
        case 0x2b7ee8u: goto label_2b7ee8;
        case 0x2b7eecu: goto label_2b7eec;
        case 0x2b7ef0u: goto label_2b7ef0;
        case 0x2b7ef4u: goto label_2b7ef4;
        case 0x2b7ef8u: goto label_2b7ef8;
        case 0x2b7efcu: goto label_2b7efc;
        case 0x2b7f00u: goto label_2b7f00;
        case 0x2b7f04u: goto label_2b7f04;
        case 0x2b7f08u: goto label_2b7f08;
        case 0x2b7f0cu: goto label_2b7f0c;
        case 0x2b7f10u: goto label_2b7f10;
        case 0x2b7f14u: goto label_2b7f14;
        case 0x2b7f18u: goto label_2b7f18;
        case 0x2b7f1cu: goto label_2b7f1c;
        case 0x2b7f20u: goto label_2b7f20;
        case 0x2b7f24u: goto label_2b7f24;
        case 0x2b7f28u: goto label_2b7f28;
        case 0x2b7f2cu: goto label_2b7f2c;
        case 0x2b7f30u: goto label_2b7f30;
        case 0x2b7f34u: goto label_2b7f34;
        case 0x2b7f38u: goto label_2b7f38;
        case 0x2b7f3cu: goto label_2b7f3c;
        case 0x2b7f40u: goto label_2b7f40;
        case 0x2b7f44u: goto label_2b7f44;
        case 0x2b7f48u: goto label_2b7f48;
        case 0x2b7f4cu: goto label_2b7f4c;
        case 0x2b7f50u: goto label_2b7f50;
        case 0x2b7f54u: goto label_2b7f54;
        case 0x2b7f58u: goto label_2b7f58;
        case 0x2b7f5cu: goto label_2b7f5c;
        case 0x2b7f60u: goto label_2b7f60;
        case 0x2b7f64u: goto label_2b7f64;
        case 0x2b7f68u: goto label_2b7f68;
        case 0x2b7f6cu: goto label_2b7f6c;
        case 0x2b7f70u: goto label_2b7f70;
        case 0x2b7f74u: goto label_2b7f74;
        case 0x2b7f78u: goto label_2b7f78;
        case 0x2b7f7cu: goto label_2b7f7c;
        case 0x2b7f80u: goto label_2b7f80;
        case 0x2b7f84u: goto label_2b7f84;
        case 0x2b7f88u: goto label_2b7f88;
        case 0x2b7f8cu: goto label_2b7f8c;
        case 0x2b7f90u: goto label_2b7f90;
        case 0x2b7f94u: goto label_2b7f94;
        case 0x2b7f98u: goto label_2b7f98;
        case 0x2b7f9cu: goto label_2b7f9c;
        case 0x2b7fa0u: goto label_2b7fa0;
        case 0x2b7fa4u: goto label_2b7fa4;
        case 0x2b7fa8u: goto label_2b7fa8;
        case 0x2b7facu: goto label_2b7fac;
        case 0x2b7fb0u: goto label_2b7fb0;
        case 0x2b7fb4u: goto label_2b7fb4;
        case 0x2b7fb8u: goto label_2b7fb8;
        case 0x2b7fbcu: goto label_2b7fbc;
        case 0x2b7fc0u: goto label_2b7fc0;
        case 0x2b7fc4u: goto label_2b7fc4;
        case 0x2b7fc8u: goto label_2b7fc8;
        case 0x2b7fccu: goto label_2b7fcc;
        case 0x2b7fd0u: goto label_2b7fd0;
        case 0x2b7fd4u: goto label_2b7fd4;
        case 0x2b7fd8u: goto label_2b7fd8;
        case 0x2b7fdcu: goto label_2b7fdc;
        case 0x2b7fe0u: goto label_2b7fe0;
        case 0x2b7fe4u: goto label_2b7fe4;
        case 0x2b7fe8u: goto label_2b7fe8;
        case 0x2b7fecu: goto label_2b7fec;
        case 0x2b7ff0u: goto label_2b7ff0;
        case 0x2b7ff4u: goto label_2b7ff4;
        case 0x2b7ff8u: goto label_2b7ff8;
        case 0x2b7ffcu: goto label_2b7ffc;
        case 0x2b8000u: goto label_2b8000;
        case 0x2b8004u: goto label_2b8004;
        case 0x2b8008u: goto label_2b8008;
        case 0x2b800cu: goto label_2b800c;
        case 0x2b8010u: goto label_2b8010;
        case 0x2b8014u: goto label_2b8014;
        case 0x2b8018u: goto label_2b8018;
        case 0x2b801cu: goto label_2b801c;
        case 0x2b8020u: goto label_2b8020;
        case 0x2b8024u: goto label_2b8024;
        case 0x2b8028u: goto label_2b8028;
        case 0x2b802cu: goto label_2b802c;
        case 0x2b8030u: goto label_2b8030;
        case 0x2b8034u: goto label_2b8034;
        case 0x2b8038u: goto label_2b8038;
        case 0x2b803cu: goto label_2b803c;
        case 0x2b8040u: goto label_2b8040;
        case 0x2b8044u: goto label_2b8044;
        case 0x2b8048u: goto label_2b8048;
        case 0x2b804cu: goto label_2b804c;
        case 0x2b8050u: goto label_2b8050;
        case 0x2b8054u: goto label_2b8054;
        case 0x2b8058u: goto label_2b8058;
        case 0x2b805cu: goto label_2b805c;
        case 0x2b8060u: goto label_2b8060;
        case 0x2b8064u: goto label_2b8064;
        case 0x2b8068u: goto label_2b8068;
        case 0x2b806cu: goto label_2b806c;
        case 0x2b8070u: goto label_2b8070;
        case 0x2b8074u: goto label_2b8074;
        case 0x2b8078u: goto label_2b8078;
        case 0x2b807cu: goto label_2b807c;
        case 0x2b8080u: goto label_2b8080;
        case 0x2b8084u: goto label_2b8084;
        case 0x2b8088u: goto label_2b8088;
        case 0x2b808cu: goto label_2b808c;
        case 0x2b8090u: goto label_2b8090;
        case 0x2b8094u: goto label_2b8094;
        case 0x2b8098u: goto label_2b8098;
        case 0x2b809cu: goto label_2b809c;
        case 0x2b80a0u: goto label_2b80a0;
        case 0x2b80a4u: goto label_2b80a4;
        case 0x2b80a8u: goto label_2b80a8;
        case 0x2b80acu: goto label_2b80ac;
        case 0x2b80b0u: goto label_2b80b0;
        case 0x2b80b4u: goto label_2b80b4;
        case 0x2b80b8u: goto label_2b80b8;
        case 0x2b80bcu: goto label_2b80bc;
        case 0x2b80c0u: goto label_2b80c0;
        case 0x2b80c4u: goto label_2b80c4;
        case 0x2b80c8u: goto label_2b80c8;
        case 0x2b80ccu: goto label_2b80cc;
        case 0x2b80d0u: goto label_2b80d0;
        case 0x2b80d4u: goto label_2b80d4;
        case 0x2b80d8u: goto label_2b80d8;
        case 0x2b80dcu: goto label_2b80dc;
        case 0x2b80e0u: goto label_2b80e0;
        case 0x2b80e4u: goto label_2b80e4;
        case 0x2b80e8u: goto label_2b80e8;
        case 0x2b80ecu: goto label_2b80ec;
        case 0x2b80f0u: goto label_2b80f0;
        case 0x2b80f4u: goto label_2b80f4;
        case 0x2b80f8u: goto label_2b80f8;
        case 0x2b80fcu: goto label_2b80fc;
        case 0x2b8100u: goto label_2b8100;
        case 0x2b8104u: goto label_2b8104;
        case 0x2b8108u: goto label_2b8108;
        case 0x2b810cu: goto label_2b810c;
        case 0x2b8110u: goto label_2b8110;
        case 0x2b8114u: goto label_2b8114;
        case 0x2b8118u: goto label_2b8118;
        case 0x2b811cu: goto label_2b811c;
        case 0x2b8120u: goto label_2b8120;
        case 0x2b8124u: goto label_2b8124;
        case 0x2b8128u: goto label_2b8128;
        case 0x2b812cu: goto label_2b812c;
        case 0x2b8130u: goto label_2b8130;
        case 0x2b8134u: goto label_2b8134;
        case 0x2b8138u: goto label_2b8138;
        case 0x2b813cu: goto label_2b813c;
        case 0x2b8140u: goto label_2b8140;
        case 0x2b8144u: goto label_2b8144;
        case 0x2b8148u: goto label_2b8148;
        case 0x2b814cu: goto label_2b814c;
        case 0x2b8150u: goto label_2b8150;
        case 0x2b8154u: goto label_2b8154;
        case 0x2b8158u: goto label_2b8158;
        case 0x2b815cu: goto label_2b815c;
        case 0x2b8160u: goto label_2b8160;
        case 0x2b8164u: goto label_2b8164;
        case 0x2b8168u: goto label_2b8168;
        case 0x2b816cu: goto label_2b816c;
        case 0x2b8170u: goto label_2b8170;
        case 0x2b8174u: goto label_2b8174;
        case 0x2b8178u: goto label_2b8178;
        case 0x2b817cu: goto label_2b817c;
        case 0x2b8180u: goto label_2b8180;
        case 0x2b8184u: goto label_2b8184;
        case 0x2b8188u: goto label_2b8188;
        case 0x2b818cu: goto label_2b818c;
        case 0x2b8190u: goto label_2b8190;
        case 0x2b8194u: goto label_2b8194;
        case 0x2b8198u: goto label_2b8198;
        case 0x2b819cu: goto label_2b819c;
        case 0x2b81a0u: goto label_2b81a0;
        case 0x2b81a4u: goto label_2b81a4;
        case 0x2b81a8u: goto label_2b81a8;
        case 0x2b81acu: goto label_2b81ac;
        case 0x2b81b0u: goto label_2b81b0;
        case 0x2b81b4u: goto label_2b81b4;
        case 0x2b81b8u: goto label_2b81b8;
        case 0x2b81bcu: goto label_2b81bc;
        case 0x2b81c0u: goto label_2b81c0;
        case 0x2b81c4u: goto label_2b81c4;
        case 0x2b81c8u: goto label_2b81c8;
        case 0x2b81ccu: goto label_2b81cc;
        case 0x2b81d0u: goto label_2b81d0;
        case 0x2b81d4u: goto label_2b81d4;
        case 0x2b81d8u: goto label_2b81d8;
        case 0x2b81dcu: goto label_2b81dc;
        case 0x2b81e0u: goto label_2b81e0;
        case 0x2b81e4u: goto label_2b81e4;
        case 0x2b81e8u: goto label_2b81e8;
        case 0x2b81ecu: goto label_2b81ec;
        case 0x2b81f0u: goto label_2b81f0;
        case 0x2b81f4u: goto label_2b81f4;
        case 0x2b81f8u: goto label_2b81f8;
        case 0x2b81fcu: goto label_2b81fc;
        case 0x2b8200u: goto label_2b8200;
        case 0x2b8204u: goto label_2b8204;
        case 0x2b8208u: goto label_2b8208;
        case 0x2b820cu: goto label_2b820c;
        case 0x2b8210u: goto label_2b8210;
        case 0x2b8214u: goto label_2b8214;
        case 0x2b8218u: goto label_2b8218;
        case 0x2b821cu: goto label_2b821c;
        case 0x2b8220u: goto label_2b8220;
        case 0x2b8224u: goto label_2b8224;
        case 0x2b8228u: goto label_2b8228;
        case 0x2b822cu: goto label_2b822c;
        case 0x2b8230u: goto label_2b8230;
        case 0x2b8234u: goto label_2b8234;
        case 0x2b8238u: goto label_2b8238;
        case 0x2b823cu: goto label_2b823c;
        case 0x2b8240u: goto label_2b8240;
        case 0x2b8244u: goto label_2b8244;
        case 0x2b8248u: goto label_2b8248;
        case 0x2b824cu: goto label_2b824c;
        case 0x2b8250u: goto label_2b8250;
        case 0x2b8254u: goto label_2b8254;
        case 0x2b8258u: goto label_2b8258;
        case 0x2b825cu: goto label_2b825c;
        case 0x2b8260u: goto label_2b8260;
        case 0x2b8264u: goto label_2b8264;
        case 0x2b8268u: goto label_2b8268;
        case 0x2b826cu: goto label_2b826c;
        case 0x2b8270u: goto label_2b8270;
        case 0x2b8274u: goto label_2b8274;
        case 0x2b8278u: goto label_2b8278;
        case 0x2b827cu: goto label_2b827c;
        case 0x2b8280u: goto label_2b8280;
        case 0x2b8284u: goto label_2b8284;
        case 0x2b8288u: goto label_2b8288;
        case 0x2b828cu: goto label_2b828c;
        case 0x2b8290u: goto label_2b8290;
        case 0x2b8294u: goto label_2b8294;
        case 0x2b8298u: goto label_2b8298;
        case 0x2b829cu: goto label_2b829c;
        case 0x2b82a0u: goto label_2b82a0;
        case 0x2b82a4u: goto label_2b82a4;
        case 0x2b82a8u: goto label_2b82a8;
        case 0x2b82acu: goto label_2b82ac;
        case 0x2b82b0u: goto label_2b82b0;
        case 0x2b82b4u: goto label_2b82b4;
        case 0x2b82b8u: goto label_2b82b8;
        case 0x2b82bcu: goto label_2b82bc;
        case 0x2b82c0u: goto label_2b82c0;
        case 0x2b82c4u: goto label_2b82c4;
        case 0x2b82c8u: goto label_2b82c8;
        case 0x2b82ccu: goto label_2b82cc;
        case 0x2b82d0u: goto label_2b82d0;
        case 0x2b82d4u: goto label_2b82d4;
        case 0x2b82d8u: goto label_2b82d8;
        case 0x2b82dcu: goto label_2b82dc;
        case 0x2b82e0u: goto label_2b82e0;
        case 0x2b82e4u: goto label_2b82e4;
        case 0x2b82e8u: goto label_2b82e8;
        case 0x2b82ecu: goto label_2b82ec;
        case 0x2b82f0u: goto label_2b82f0;
        case 0x2b82f4u: goto label_2b82f4;
        case 0x2b82f8u: goto label_2b82f8;
        case 0x2b82fcu: goto label_2b82fc;
        case 0x2b8300u: goto label_2b8300;
        case 0x2b8304u: goto label_2b8304;
        case 0x2b8308u: goto label_2b8308;
        case 0x2b830cu: goto label_2b830c;
        case 0x2b8310u: goto label_2b8310;
        case 0x2b8314u: goto label_2b8314;
        case 0x2b8318u: goto label_2b8318;
        case 0x2b831cu: goto label_2b831c;
        case 0x2b8320u: goto label_2b8320;
        case 0x2b8324u: goto label_2b8324;
        case 0x2b8328u: goto label_2b8328;
        case 0x2b832cu: goto label_2b832c;
        case 0x2b8330u: goto label_2b8330;
        case 0x2b8334u: goto label_2b8334;
        case 0x2b8338u: goto label_2b8338;
        case 0x2b833cu: goto label_2b833c;
        case 0x2b8340u: goto label_2b8340;
        case 0x2b8344u: goto label_2b8344;
        case 0x2b8348u: goto label_2b8348;
        case 0x2b834cu: goto label_2b834c;
        case 0x2b8350u: goto label_2b8350;
        case 0x2b8354u: goto label_2b8354;
        case 0x2b8358u: goto label_2b8358;
        case 0x2b835cu: goto label_2b835c;
        case 0x2b8360u: goto label_2b8360;
        case 0x2b8364u: goto label_2b8364;
        case 0x2b8368u: goto label_2b8368;
        case 0x2b836cu: goto label_2b836c;
        case 0x2b8370u: goto label_2b8370;
        case 0x2b8374u: goto label_2b8374;
        case 0x2b8378u: goto label_2b8378;
        case 0x2b837cu: goto label_2b837c;
        case 0x2b8380u: goto label_2b8380;
        case 0x2b8384u: goto label_2b8384;
        case 0x2b8388u: goto label_2b8388;
        case 0x2b838cu: goto label_2b838c;
        case 0x2b8390u: goto label_2b8390;
        case 0x2b8394u: goto label_2b8394;
        case 0x2b8398u: goto label_2b8398;
        case 0x2b839cu: goto label_2b839c;
        case 0x2b83a0u: goto label_2b83a0;
        case 0x2b83a4u: goto label_2b83a4;
        case 0x2b83a8u: goto label_2b83a8;
        case 0x2b83acu: goto label_2b83ac;
        case 0x2b83b0u: goto label_2b83b0;
        case 0x2b83b4u: goto label_2b83b4;
        case 0x2b83b8u: goto label_2b83b8;
        case 0x2b83bcu: goto label_2b83bc;
        case 0x2b83c0u: goto label_2b83c0;
        case 0x2b83c4u: goto label_2b83c4;
        case 0x2b83c8u: goto label_2b83c8;
        case 0x2b83ccu: goto label_2b83cc;
        case 0x2b83d0u: goto label_2b83d0;
        case 0x2b83d4u: goto label_2b83d4;
        case 0x2b83d8u: goto label_2b83d8;
        case 0x2b83dcu: goto label_2b83dc;
        case 0x2b83e0u: goto label_2b83e0;
        case 0x2b83e4u: goto label_2b83e4;
        case 0x2b83e8u: goto label_2b83e8;
        case 0x2b83ecu: goto label_2b83ec;
        case 0x2b83f0u: goto label_2b83f0;
        case 0x2b83f4u: goto label_2b83f4;
        case 0x2b83f8u: goto label_2b83f8;
        case 0x2b83fcu: goto label_2b83fc;
        case 0x2b8400u: goto label_2b8400;
        case 0x2b8404u: goto label_2b8404;
        case 0x2b8408u: goto label_2b8408;
        case 0x2b840cu: goto label_2b840c;
        case 0x2b8410u: goto label_2b8410;
        case 0x2b8414u: goto label_2b8414;
        case 0x2b8418u: goto label_2b8418;
        case 0x2b841cu: goto label_2b841c;
        case 0x2b8420u: goto label_2b8420;
        case 0x2b8424u: goto label_2b8424;
        case 0x2b8428u: goto label_2b8428;
        case 0x2b842cu: goto label_2b842c;
        case 0x2b8430u: goto label_2b8430;
        case 0x2b8434u: goto label_2b8434;
        case 0x2b8438u: goto label_2b8438;
        case 0x2b843cu: goto label_2b843c;
        case 0x2b8440u: goto label_2b8440;
        case 0x2b8444u: goto label_2b8444;
        case 0x2b8448u: goto label_2b8448;
        case 0x2b844cu: goto label_2b844c;
        case 0x2b8450u: goto label_2b8450;
        case 0x2b8454u: goto label_2b8454;
        case 0x2b8458u: goto label_2b8458;
        case 0x2b845cu: goto label_2b845c;
        case 0x2b8460u: goto label_2b8460;
        case 0x2b8464u: goto label_2b8464;
        case 0x2b8468u: goto label_2b8468;
        case 0x2b846cu: goto label_2b846c;
        case 0x2b8470u: goto label_2b8470;
        case 0x2b8474u: goto label_2b8474;
        case 0x2b8478u: goto label_2b8478;
        case 0x2b847cu: goto label_2b847c;
        case 0x2b8480u: goto label_2b8480;
        case 0x2b8484u: goto label_2b8484;
        case 0x2b8488u: goto label_2b8488;
        case 0x2b848cu: goto label_2b848c;
        case 0x2b8490u: goto label_2b8490;
        case 0x2b8494u: goto label_2b8494;
        case 0x2b8498u: goto label_2b8498;
        case 0x2b849cu: goto label_2b849c;
        case 0x2b84a0u: goto label_2b84a0;
        case 0x2b84a4u: goto label_2b84a4;
        case 0x2b84a8u: goto label_2b84a8;
        case 0x2b84acu: goto label_2b84ac;
        case 0x2b84b0u: goto label_2b84b0;
        case 0x2b84b4u: goto label_2b84b4;
        case 0x2b84b8u: goto label_2b84b8;
        case 0x2b84bcu: goto label_2b84bc;
        case 0x2b84c0u: goto label_2b84c0;
        case 0x2b84c4u: goto label_2b84c4;
        case 0x2b84c8u: goto label_2b84c8;
        case 0x2b84ccu: goto label_2b84cc;
        case 0x2b84d0u: goto label_2b84d0;
        case 0x2b84d4u: goto label_2b84d4;
        case 0x2b84d8u: goto label_2b84d8;
        case 0x2b84dcu: goto label_2b84dc;
        case 0x2b84e0u: goto label_2b84e0;
        case 0x2b84e4u: goto label_2b84e4;
        case 0x2b84e8u: goto label_2b84e8;
        case 0x2b84ecu: goto label_2b84ec;
        case 0x2b84f0u: goto label_2b84f0;
        case 0x2b84f4u: goto label_2b84f4;
        case 0x2b84f8u: goto label_2b84f8;
        case 0x2b84fcu: goto label_2b84fc;
        case 0x2b8500u: goto label_2b8500;
        case 0x2b8504u: goto label_2b8504;
        case 0x2b8508u: goto label_2b8508;
        case 0x2b850cu: goto label_2b850c;
        case 0x2b8510u: goto label_2b8510;
        case 0x2b8514u: goto label_2b8514;
        case 0x2b8518u: goto label_2b8518;
        case 0x2b851cu: goto label_2b851c;
        case 0x2b8520u: goto label_2b8520;
        case 0x2b8524u: goto label_2b8524;
        case 0x2b8528u: goto label_2b8528;
        case 0x2b852cu: goto label_2b852c;
        case 0x2b8530u: goto label_2b8530;
        case 0x2b8534u: goto label_2b8534;
        case 0x2b8538u: goto label_2b8538;
        case 0x2b853cu: goto label_2b853c;
        case 0x2b8540u: goto label_2b8540;
        case 0x2b8544u: goto label_2b8544;
        case 0x2b8548u: goto label_2b8548;
        case 0x2b854cu: goto label_2b854c;
        case 0x2b8550u: goto label_2b8550;
        case 0x2b8554u: goto label_2b8554;
        case 0x2b8558u: goto label_2b8558;
        case 0x2b855cu: goto label_2b855c;
        case 0x2b8560u: goto label_2b8560;
        case 0x2b8564u: goto label_2b8564;
        case 0x2b8568u: goto label_2b8568;
        case 0x2b856cu: goto label_2b856c;
        case 0x2b8570u: goto label_2b8570;
        case 0x2b8574u: goto label_2b8574;
        case 0x2b8578u: goto label_2b8578;
        case 0x2b857cu: goto label_2b857c;
        case 0x2b8580u: goto label_2b8580;
        case 0x2b8584u: goto label_2b8584;
        case 0x2b8588u: goto label_2b8588;
        case 0x2b858cu: goto label_2b858c;
        case 0x2b8590u: goto label_2b8590;
        case 0x2b8594u: goto label_2b8594;
        case 0x2b8598u: goto label_2b8598;
        case 0x2b859cu: goto label_2b859c;
        case 0x2b85a0u: goto label_2b85a0;
        case 0x2b85a4u: goto label_2b85a4;
        case 0x2b85a8u: goto label_2b85a8;
        case 0x2b85acu: goto label_2b85ac;
        case 0x2b85b0u: goto label_2b85b0;
        case 0x2b85b4u: goto label_2b85b4;
        case 0x2b85b8u: goto label_2b85b8;
        case 0x2b85bcu: goto label_2b85bc;
        case 0x2b85c0u: goto label_2b85c0;
        case 0x2b85c4u: goto label_2b85c4;
        case 0x2b85c8u: goto label_2b85c8;
        case 0x2b85ccu: goto label_2b85cc;
        case 0x2b85d0u: goto label_2b85d0;
        case 0x2b85d4u: goto label_2b85d4;
        case 0x2b85d8u: goto label_2b85d8;
        case 0x2b85dcu: goto label_2b85dc;
        case 0x2b85e0u: goto label_2b85e0;
        case 0x2b85e4u: goto label_2b85e4;
        case 0x2b85e8u: goto label_2b85e8;
        case 0x2b85ecu: goto label_2b85ec;
        case 0x2b85f0u: goto label_2b85f0;
        case 0x2b85f4u: goto label_2b85f4;
        case 0x2b85f8u: goto label_2b85f8;
        case 0x2b85fcu: goto label_2b85fc;
        case 0x2b8600u: goto label_2b8600;
        case 0x2b8604u: goto label_2b8604;
        case 0x2b8608u: goto label_2b8608;
        case 0x2b860cu: goto label_2b860c;
        case 0x2b8610u: goto label_2b8610;
        case 0x2b8614u: goto label_2b8614;
        case 0x2b8618u: goto label_2b8618;
        case 0x2b861cu: goto label_2b861c;
        case 0x2b8620u: goto label_2b8620;
        case 0x2b8624u: goto label_2b8624;
        case 0x2b8628u: goto label_2b8628;
        case 0x2b862cu: goto label_2b862c;
        case 0x2b8630u: goto label_2b8630;
        case 0x2b8634u: goto label_2b8634;
        case 0x2b8638u: goto label_2b8638;
        case 0x2b863cu: goto label_2b863c;
        case 0x2b8640u: goto label_2b8640;
        case 0x2b8644u: goto label_2b8644;
        case 0x2b8648u: goto label_2b8648;
        case 0x2b864cu: goto label_2b864c;
        case 0x2b8650u: goto label_2b8650;
        case 0x2b8654u: goto label_2b8654;
        case 0x2b8658u: goto label_2b8658;
        case 0x2b865cu: goto label_2b865c;
        case 0x2b8660u: goto label_2b8660;
        case 0x2b8664u: goto label_2b8664;
        case 0x2b8668u: goto label_2b8668;
        case 0x2b866cu: goto label_2b866c;
        case 0x2b8670u: goto label_2b8670;
        case 0x2b8674u: goto label_2b8674;
        case 0x2b8678u: goto label_2b8678;
        case 0x2b867cu: goto label_2b867c;
        case 0x2b8680u: goto label_2b8680;
        case 0x2b8684u: goto label_2b8684;
        case 0x2b8688u: goto label_2b8688;
        case 0x2b868cu: goto label_2b868c;
        case 0x2b8690u: goto label_2b8690;
        case 0x2b8694u: goto label_2b8694;
        case 0x2b8698u: goto label_2b8698;
        case 0x2b869cu: goto label_2b869c;
        case 0x2b86a0u: goto label_2b86a0;
        case 0x2b86a4u: goto label_2b86a4;
        case 0x2b86a8u: goto label_2b86a8;
        case 0x2b86acu: goto label_2b86ac;
        case 0x2b86b0u: goto label_2b86b0;
        case 0x2b86b4u: goto label_2b86b4;
        case 0x2b86b8u: goto label_2b86b8;
        case 0x2b86bcu: goto label_2b86bc;
        case 0x2b86c0u: goto label_2b86c0;
        case 0x2b86c4u: goto label_2b86c4;
        case 0x2b86c8u: goto label_2b86c8;
        case 0x2b86ccu: goto label_2b86cc;
        case 0x2b86d0u: goto label_2b86d0;
        case 0x2b86d4u: goto label_2b86d4;
        case 0x2b86d8u: goto label_2b86d8;
        case 0x2b86dcu: goto label_2b86dc;
        case 0x2b86e0u: goto label_2b86e0;
        case 0x2b86e4u: goto label_2b86e4;
        case 0x2b86e8u: goto label_2b86e8;
        case 0x2b86ecu: goto label_2b86ec;
        case 0x2b86f0u: goto label_2b86f0;
        case 0x2b86f4u: goto label_2b86f4;
        case 0x2b86f8u: goto label_2b86f8;
        case 0x2b86fcu: goto label_2b86fc;
        case 0x2b8700u: goto label_2b8700;
        case 0x2b8704u: goto label_2b8704;
        case 0x2b8708u: goto label_2b8708;
        case 0x2b870cu: goto label_2b870c;
        case 0x2b8710u: goto label_2b8710;
        case 0x2b8714u: goto label_2b8714;
        case 0x2b8718u: goto label_2b8718;
        case 0x2b871cu: goto label_2b871c;
        case 0x2b8720u: goto label_2b8720;
        case 0x2b8724u: goto label_2b8724;
        case 0x2b8728u: goto label_2b8728;
        case 0x2b872cu: goto label_2b872c;
        case 0x2b8730u: goto label_2b8730;
        case 0x2b8734u: goto label_2b8734;
        case 0x2b8738u: goto label_2b8738;
        case 0x2b873cu: goto label_2b873c;
        case 0x2b8740u: goto label_2b8740;
        case 0x2b8744u: goto label_2b8744;
        case 0x2b8748u: goto label_2b8748;
        case 0x2b874cu: goto label_2b874c;
        case 0x2b8750u: goto label_2b8750;
        case 0x2b8754u: goto label_2b8754;
        case 0x2b8758u: goto label_2b8758;
        case 0x2b875cu: goto label_2b875c;
        case 0x2b8760u: goto label_2b8760;
        case 0x2b8764u: goto label_2b8764;
        case 0x2b8768u: goto label_2b8768;
        case 0x2b876cu: goto label_2b876c;
        case 0x2b8770u: goto label_2b8770;
        case 0x2b8774u: goto label_2b8774;
        case 0x2b8778u: goto label_2b8778;
        case 0x2b877cu: goto label_2b877c;
        case 0x2b8780u: goto label_2b8780;
        case 0x2b8784u: goto label_2b8784;
        case 0x2b8788u: goto label_2b8788;
        case 0x2b878cu: goto label_2b878c;
        case 0x2b8790u: goto label_2b8790;
        case 0x2b8794u: goto label_2b8794;
        case 0x2b8798u: goto label_2b8798;
        case 0x2b879cu: goto label_2b879c;
        case 0x2b87a0u: goto label_2b87a0;
        case 0x2b87a4u: goto label_2b87a4;
        case 0x2b87a8u: goto label_2b87a8;
        case 0x2b87acu: goto label_2b87ac;
        case 0x2b87b0u: goto label_2b87b0;
        case 0x2b87b4u: goto label_2b87b4;
        case 0x2b87b8u: goto label_2b87b8;
        case 0x2b87bcu: goto label_2b87bc;
        case 0x2b87c0u: goto label_2b87c0;
        case 0x2b87c4u: goto label_2b87c4;
        case 0x2b87c8u: goto label_2b87c8;
        case 0x2b87ccu: goto label_2b87cc;
        case 0x2b87d0u: goto label_2b87d0;
        case 0x2b87d4u: goto label_2b87d4;
        case 0x2b87d8u: goto label_2b87d8;
        case 0x2b87dcu: goto label_2b87dc;
        case 0x2b87e0u: goto label_2b87e0;
        case 0x2b87e4u: goto label_2b87e4;
        case 0x2b87e8u: goto label_2b87e8;
        case 0x2b87ecu: goto label_2b87ec;
        case 0x2b87f0u: goto label_2b87f0;
        case 0x2b87f4u: goto label_2b87f4;
        case 0x2b87f8u: goto label_2b87f8;
        case 0x2b87fcu: goto label_2b87fc;
        case 0x2b8800u: goto label_2b8800;
        case 0x2b8804u: goto label_2b8804;
        case 0x2b8808u: goto label_2b8808;
        case 0x2b880cu: goto label_2b880c;
        case 0x2b8810u: goto label_2b8810;
        case 0x2b8814u: goto label_2b8814;
        case 0x2b8818u: goto label_2b8818;
        case 0x2b881cu: goto label_2b881c;
        case 0x2b8820u: goto label_2b8820;
        case 0x2b8824u: goto label_2b8824;
        case 0x2b8828u: goto label_2b8828;
        case 0x2b882cu: goto label_2b882c;
        case 0x2b8830u: goto label_2b8830;
        case 0x2b8834u: goto label_2b8834;
        case 0x2b8838u: goto label_2b8838;
        case 0x2b883cu: goto label_2b883c;
        case 0x2b8840u: goto label_2b8840;
        case 0x2b8844u: goto label_2b8844;
        case 0x2b8848u: goto label_2b8848;
        case 0x2b884cu: goto label_2b884c;
        case 0x2b8850u: goto label_2b8850;
        case 0x2b8854u: goto label_2b8854;
        case 0x2b8858u: goto label_2b8858;
        case 0x2b885cu: goto label_2b885c;
        case 0x2b8860u: goto label_2b8860;
        case 0x2b8864u: goto label_2b8864;
        case 0x2b8868u: goto label_2b8868;
        case 0x2b886cu: goto label_2b886c;
        case 0x2b8870u: goto label_2b8870;
        case 0x2b8874u: goto label_2b8874;
        case 0x2b8878u: goto label_2b8878;
        case 0x2b887cu: goto label_2b887c;
        case 0x2b8880u: goto label_2b8880;
        case 0x2b8884u: goto label_2b8884;
        case 0x2b8888u: goto label_2b8888;
        case 0x2b888cu: goto label_2b888c;
        case 0x2b8890u: goto label_2b8890;
        case 0x2b8894u: goto label_2b8894;
        case 0x2b8898u: goto label_2b8898;
        case 0x2b889cu: goto label_2b889c;
        case 0x2b88a0u: goto label_2b88a0;
        case 0x2b88a4u: goto label_2b88a4;
        case 0x2b88a8u: goto label_2b88a8;
        case 0x2b88acu: goto label_2b88ac;
        case 0x2b88b0u: goto label_2b88b0;
        case 0x2b88b4u: goto label_2b88b4;
        case 0x2b88b8u: goto label_2b88b8;
        case 0x2b88bcu: goto label_2b88bc;
        case 0x2b88c0u: goto label_2b88c0;
        case 0x2b88c4u: goto label_2b88c4;
        case 0x2b88c8u: goto label_2b88c8;
        case 0x2b88ccu: goto label_2b88cc;
        case 0x2b88d0u: goto label_2b88d0;
        case 0x2b88d4u: goto label_2b88d4;
        case 0x2b88d8u: goto label_2b88d8;
        case 0x2b88dcu: goto label_2b88dc;
        case 0x2b88e0u: goto label_2b88e0;
        case 0x2b88e4u: goto label_2b88e4;
        case 0x2b88e8u: goto label_2b88e8;
        case 0x2b88ecu: goto label_2b88ec;
        case 0x2b88f0u: goto label_2b88f0;
        case 0x2b88f4u: goto label_2b88f4;
        case 0x2b88f8u: goto label_2b88f8;
        case 0x2b88fcu: goto label_2b88fc;
        case 0x2b8900u: goto label_2b8900;
        case 0x2b8904u: goto label_2b8904;
        case 0x2b8908u: goto label_2b8908;
        case 0x2b890cu: goto label_2b890c;
        case 0x2b8910u: goto label_2b8910;
        case 0x2b8914u: goto label_2b8914;
        case 0x2b8918u: goto label_2b8918;
        case 0x2b891cu: goto label_2b891c;
        case 0x2b8920u: goto label_2b8920;
        case 0x2b8924u: goto label_2b8924;
        case 0x2b8928u: goto label_2b8928;
        case 0x2b892cu: goto label_2b892c;
        case 0x2b8930u: goto label_2b8930;
        case 0x2b8934u: goto label_2b8934;
        case 0x2b8938u: goto label_2b8938;
        case 0x2b893cu: goto label_2b893c;
        case 0x2b8940u: goto label_2b8940;
        case 0x2b8944u: goto label_2b8944;
        case 0x2b8948u: goto label_2b8948;
        case 0x2b894cu: goto label_2b894c;
        case 0x2b8950u: goto label_2b8950;
        case 0x2b8954u: goto label_2b8954;
        case 0x2b8958u: goto label_2b8958;
        case 0x2b895cu: goto label_2b895c;
        case 0x2b8960u: goto label_2b8960;
        case 0x2b8964u: goto label_2b8964;
        case 0x2b8968u: goto label_2b8968;
        case 0x2b896cu: goto label_2b896c;
        case 0x2b8970u: goto label_2b8970;
        case 0x2b8974u: goto label_2b8974;
        case 0x2b8978u: goto label_2b8978;
        case 0x2b897cu: goto label_2b897c;
        case 0x2b8980u: goto label_2b8980;
        case 0x2b8984u: goto label_2b8984;
        case 0x2b8988u: goto label_2b8988;
        case 0x2b898cu: goto label_2b898c;
        case 0x2b8990u: goto label_2b8990;
        case 0x2b8994u: goto label_2b8994;
        case 0x2b8998u: goto label_2b8998;
        case 0x2b899cu: goto label_2b899c;
        case 0x2b89a0u: goto label_2b89a0;
        case 0x2b89a4u: goto label_2b89a4;
        case 0x2b89a8u: goto label_2b89a8;
        case 0x2b89acu: goto label_2b89ac;
        case 0x2b89b0u: goto label_2b89b0;
        case 0x2b89b4u: goto label_2b89b4;
        case 0x2b89b8u: goto label_2b89b8;
        case 0x2b89bcu: goto label_2b89bc;
        case 0x2b89c0u: goto label_2b89c0;
        case 0x2b89c4u: goto label_2b89c4;
        case 0x2b89c8u: goto label_2b89c8;
        case 0x2b89ccu: goto label_2b89cc;
        case 0x2b89d0u: goto label_2b89d0;
        case 0x2b89d4u: goto label_2b89d4;
        case 0x2b89d8u: goto label_2b89d8;
        case 0x2b89dcu: goto label_2b89dc;
        case 0x2b89e0u: goto label_2b89e0;
        case 0x2b89e4u: goto label_2b89e4;
        case 0x2b89e8u: goto label_2b89e8;
        case 0x2b89ecu: goto label_2b89ec;
        case 0x2b89f0u: goto label_2b89f0;
        case 0x2b89f4u: goto label_2b89f4;
        case 0x2b89f8u: goto label_2b89f8;
        case 0x2b89fcu: goto label_2b89fc;
        case 0x2b8a00u: goto label_2b8a00;
        case 0x2b8a04u: goto label_2b8a04;
        case 0x2b8a08u: goto label_2b8a08;
        case 0x2b8a0cu: goto label_2b8a0c;
        case 0x2b8a10u: goto label_2b8a10;
        case 0x2b8a14u: goto label_2b8a14;
        case 0x2b8a18u: goto label_2b8a18;
        case 0x2b8a1cu: goto label_2b8a1c;
        case 0x2b8a20u: goto label_2b8a20;
        case 0x2b8a24u: goto label_2b8a24;
        case 0x2b8a28u: goto label_2b8a28;
        case 0x2b8a2cu: goto label_2b8a2c;
        case 0x2b8a30u: goto label_2b8a30;
        case 0x2b8a34u: goto label_2b8a34;
        case 0x2b8a38u: goto label_2b8a38;
        case 0x2b8a3cu: goto label_2b8a3c;
        case 0x2b8a40u: goto label_2b8a40;
        case 0x2b8a44u: goto label_2b8a44;
        case 0x2b8a48u: goto label_2b8a48;
        case 0x2b8a4cu: goto label_2b8a4c;
        case 0x2b8a50u: goto label_2b8a50;
        case 0x2b8a54u: goto label_2b8a54;
        case 0x2b8a58u: goto label_2b8a58;
        case 0x2b8a5cu: goto label_2b8a5c;
        case 0x2b8a60u: goto label_2b8a60;
        case 0x2b8a64u: goto label_2b8a64;
        case 0x2b8a68u: goto label_2b8a68;
        case 0x2b8a6cu: goto label_2b8a6c;
        case 0x2b8a70u: goto label_2b8a70;
        case 0x2b8a74u: goto label_2b8a74;
        case 0x2b8a78u: goto label_2b8a78;
        case 0x2b8a7cu: goto label_2b8a7c;
        case 0x2b8a80u: goto label_2b8a80;
        case 0x2b8a84u: goto label_2b8a84;
        case 0x2b8a88u: goto label_2b8a88;
        case 0x2b8a8cu: goto label_2b8a8c;
        case 0x2b8a90u: goto label_2b8a90;
        case 0x2b8a94u: goto label_2b8a94;
        case 0x2b8a98u: goto label_2b8a98;
        case 0x2b8a9cu: goto label_2b8a9c;
        case 0x2b8aa0u: goto label_2b8aa0;
        case 0x2b8aa4u: goto label_2b8aa4;
        case 0x2b8aa8u: goto label_2b8aa8;
        case 0x2b8aacu: goto label_2b8aac;
        case 0x2b8ab0u: goto label_2b8ab0;
        case 0x2b8ab4u: goto label_2b8ab4;
        case 0x2b8ab8u: goto label_2b8ab8;
        case 0x2b8abcu: goto label_2b8abc;
        case 0x2b8ac0u: goto label_2b8ac0;
        case 0x2b8ac4u: goto label_2b8ac4;
        case 0x2b8ac8u: goto label_2b8ac8;
        case 0x2b8accu: goto label_2b8acc;
        case 0x2b8ad0u: goto label_2b8ad0;
        case 0x2b8ad4u: goto label_2b8ad4;
        case 0x2b8ad8u: goto label_2b8ad8;
        case 0x2b8adcu: goto label_2b8adc;
        case 0x2b8ae0u: goto label_2b8ae0;
        case 0x2b8ae4u: goto label_2b8ae4;
        case 0x2b8ae8u: goto label_2b8ae8;
        case 0x2b8aecu: goto label_2b8aec;
        case 0x2b8af0u: goto label_2b8af0;
        case 0x2b8af4u: goto label_2b8af4;
        case 0x2b8af8u: goto label_2b8af8;
        case 0x2b8afcu: goto label_2b8afc;
        case 0x2b8b00u: goto label_2b8b00;
        case 0x2b8b04u: goto label_2b8b04;
        case 0x2b8b08u: goto label_2b8b08;
        case 0x2b8b0cu: goto label_2b8b0c;
        case 0x2b8b10u: goto label_2b8b10;
        case 0x2b8b14u: goto label_2b8b14;
        case 0x2b8b18u: goto label_2b8b18;
        case 0x2b8b1cu: goto label_2b8b1c;
        case 0x2b8b20u: goto label_2b8b20;
        case 0x2b8b24u: goto label_2b8b24;
        case 0x2b8b28u: goto label_2b8b28;
        case 0x2b8b2cu: goto label_2b8b2c;
        case 0x2b8b30u: goto label_2b8b30;
        case 0x2b8b34u: goto label_2b8b34;
        case 0x2b8b38u: goto label_2b8b38;
        case 0x2b8b3cu: goto label_2b8b3c;
        case 0x2b8b40u: goto label_2b8b40;
        case 0x2b8b44u: goto label_2b8b44;
        case 0x2b8b48u: goto label_2b8b48;
        case 0x2b8b4cu: goto label_2b8b4c;
        case 0x2b8b50u: goto label_2b8b50;
        case 0x2b8b54u: goto label_2b8b54;
        case 0x2b8b58u: goto label_2b8b58;
        case 0x2b8b5cu: goto label_2b8b5c;
        case 0x2b8b60u: goto label_2b8b60;
        case 0x2b8b64u: goto label_2b8b64;
        case 0x2b8b68u: goto label_2b8b68;
        case 0x2b8b6cu: goto label_2b8b6c;
        case 0x2b8b70u: goto label_2b8b70;
        case 0x2b8b74u: goto label_2b8b74;
        case 0x2b8b78u: goto label_2b8b78;
        case 0x2b8b7cu: goto label_2b8b7c;
        case 0x2b8b80u: goto label_2b8b80;
        case 0x2b8b84u: goto label_2b8b84;
        case 0x2b8b88u: goto label_2b8b88;
        case 0x2b8b8cu: goto label_2b8b8c;
        case 0x2b8b90u: goto label_2b8b90;
        case 0x2b8b94u: goto label_2b8b94;
        case 0x2b8b98u: goto label_2b8b98;
        case 0x2b8b9cu: goto label_2b8b9c;
        case 0x2b8ba0u: goto label_2b8ba0;
        case 0x2b8ba4u: goto label_2b8ba4;
        case 0x2b8ba8u: goto label_2b8ba8;
        case 0x2b8bacu: goto label_2b8bac;
        case 0x2b8bb0u: goto label_2b8bb0;
        case 0x2b8bb4u: goto label_2b8bb4;
        case 0x2b8bb8u: goto label_2b8bb8;
        case 0x2b8bbcu: goto label_2b8bbc;
        case 0x2b8bc0u: goto label_2b8bc0;
        case 0x2b8bc4u: goto label_2b8bc4;
        case 0x2b8bc8u: goto label_2b8bc8;
        case 0x2b8bccu: goto label_2b8bcc;
        case 0x2b8bd0u: goto label_2b8bd0;
        case 0x2b8bd4u: goto label_2b8bd4;
        case 0x2b8bd8u: goto label_2b8bd8;
        case 0x2b8bdcu: goto label_2b8bdc;
        case 0x2b8be0u: goto label_2b8be0;
        case 0x2b8be4u: goto label_2b8be4;
        case 0x2b8be8u: goto label_2b8be8;
        case 0x2b8becu: goto label_2b8bec;
        case 0x2b8bf0u: goto label_2b8bf0;
        case 0x2b8bf4u: goto label_2b8bf4;
        case 0x2b8bf8u: goto label_2b8bf8;
        case 0x2b8bfcu: goto label_2b8bfc;
        case 0x2b8c00u: goto label_2b8c00;
        case 0x2b8c04u: goto label_2b8c04;
        case 0x2b8c08u: goto label_2b8c08;
        case 0x2b8c0cu: goto label_2b8c0c;
        case 0x2b8c10u: goto label_2b8c10;
        case 0x2b8c14u: goto label_2b8c14;
        case 0x2b8c18u: goto label_2b8c18;
        case 0x2b8c1cu: goto label_2b8c1c;
        case 0x2b8c20u: goto label_2b8c20;
        case 0x2b8c24u: goto label_2b8c24;
        case 0x2b8c28u: goto label_2b8c28;
        case 0x2b8c2cu: goto label_2b8c2c;
        case 0x2b8c30u: goto label_2b8c30;
        case 0x2b8c34u: goto label_2b8c34;
        case 0x2b8c38u: goto label_2b8c38;
        case 0x2b8c3cu: goto label_2b8c3c;
        case 0x2b8c40u: goto label_2b8c40;
        case 0x2b8c44u: goto label_2b8c44;
        case 0x2b8c48u: goto label_2b8c48;
        case 0x2b8c4cu: goto label_2b8c4c;
        case 0x2b8c50u: goto label_2b8c50;
        case 0x2b8c54u: goto label_2b8c54;
        case 0x2b8c58u: goto label_2b8c58;
        case 0x2b8c5cu: goto label_2b8c5c;
        case 0x2b8c60u: goto label_2b8c60;
        case 0x2b8c64u: goto label_2b8c64;
        case 0x2b8c68u: goto label_2b8c68;
        case 0x2b8c6cu: goto label_2b8c6c;
        case 0x2b8c70u: goto label_2b8c70;
        case 0x2b8c74u: goto label_2b8c74;
        case 0x2b8c78u: goto label_2b8c78;
        case 0x2b8c7cu: goto label_2b8c7c;
        case 0x2b8c80u: goto label_2b8c80;
        case 0x2b8c84u: goto label_2b8c84;
        case 0x2b8c88u: goto label_2b8c88;
        case 0x2b8c8cu: goto label_2b8c8c;
        case 0x2b8c90u: goto label_2b8c90;
        case 0x2b8c94u: goto label_2b8c94;
        case 0x2b8c98u: goto label_2b8c98;
        case 0x2b8c9cu: goto label_2b8c9c;
        case 0x2b8ca0u: goto label_2b8ca0;
        case 0x2b8ca4u: goto label_2b8ca4;
        case 0x2b8ca8u: goto label_2b8ca8;
        case 0x2b8cacu: goto label_2b8cac;
        case 0x2b8cb0u: goto label_2b8cb0;
        case 0x2b8cb4u: goto label_2b8cb4;
        case 0x2b8cb8u: goto label_2b8cb8;
        case 0x2b8cbcu: goto label_2b8cbc;
        case 0x2b8cc0u: goto label_2b8cc0;
        case 0x2b8cc4u: goto label_2b8cc4;
        case 0x2b8cc8u: goto label_2b8cc8;
        case 0x2b8cccu: goto label_2b8ccc;
        case 0x2b8cd0u: goto label_2b8cd0;
        case 0x2b8cd4u: goto label_2b8cd4;
        case 0x2b8cd8u: goto label_2b8cd8;
        case 0x2b8cdcu: goto label_2b8cdc;
        case 0x2b8ce0u: goto label_2b8ce0;
        case 0x2b8ce4u: goto label_2b8ce4;
        case 0x2b8ce8u: goto label_2b8ce8;
        case 0x2b8cecu: goto label_2b8cec;
        case 0x2b8cf0u: goto label_2b8cf0;
        case 0x2b8cf4u: goto label_2b8cf4;
        case 0x2b8cf8u: goto label_2b8cf8;
        case 0x2b8cfcu: goto label_2b8cfc;
        case 0x2b8d00u: goto label_2b8d00;
        case 0x2b8d04u: goto label_2b8d04;
        case 0x2b8d08u: goto label_2b8d08;
        case 0x2b8d0cu: goto label_2b8d0c;
        case 0x2b8d10u: goto label_2b8d10;
        case 0x2b8d14u: goto label_2b8d14;
        case 0x2b8d18u: goto label_2b8d18;
        case 0x2b8d1cu: goto label_2b8d1c;
        case 0x2b8d20u: goto label_2b8d20;
        case 0x2b8d24u: goto label_2b8d24;
        case 0x2b8d28u: goto label_2b8d28;
        case 0x2b8d2cu: goto label_2b8d2c;
        case 0x2b8d30u: goto label_2b8d30;
        case 0x2b8d34u: goto label_2b8d34;
        case 0x2b8d38u: goto label_2b8d38;
        case 0x2b8d3cu: goto label_2b8d3c;
        case 0x2b8d40u: goto label_2b8d40;
        case 0x2b8d44u: goto label_2b8d44;
        case 0x2b8d48u: goto label_2b8d48;
        case 0x2b8d4cu: goto label_2b8d4c;
        case 0x2b8d50u: goto label_2b8d50;
        case 0x2b8d54u: goto label_2b8d54;
        case 0x2b8d58u: goto label_2b8d58;
        case 0x2b8d5cu: goto label_2b8d5c;
        case 0x2b8d60u: goto label_2b8d60;
        case 0x2b8d64u: goto label_2b8d64;
        case 0x2b8d68u: goto label_2b8d68;
        case 0x2b8d6cu: goto label_2b8d6c;
        case 0x2b8d70u: goto label_2b8d70;
        case 0x2b8d74u: goto label_2b8d74;
        case 0x2b8d78u: goto label_2b8d78;
        case 0x2b8d7cu: goto label_2b8d7c;
        case 0x2b8d80u: goto label_2b8d80;
        case 0x2b8d84u: goto label_2b8d84;
        case 0x2b8d88u: goto label_2b8d88;
        case 0x2b8d8cu: goto label_2b8d8c;
        case 0x2b8d90u: goto label_2b8d90;
        case 0x2b8d94u: goto label_2b8d94;
        case 0x2b8d98u: goto label_2b8d98;
        case 0x2b8d9cu: goto label_2b8d9c;
        case 0x2b8da0u: goto label_2b8da0;
        case 0x2b8da4u: goto label_2b8da4;
        case 0x2b8da8u: goto label_2b8da8;
        case 0x2b8dacu: goto label_2b8dac;
        case 0x2b8db0u: goto label_2b8db0;
        case 0x2b8db4u: goto label_2b8db4;
        case 0x2b8db8u: goto label_2b8db8;
        case 0x2b8dbcu: goto label_2b8dbc;
        case 0x2b8dc0u: goto label_2b8dc0;
        case 0x2b8dc4u: goto label_2b8dc4;
        case 0x2b8dc8u: goto label_2b8dc8;
        case 0x2b8dccu: goto label_2b8dcc;
        case 0x2b8dd0u: goto label_2b8dd0;
        case 0x2b8dd4u: goto label_2b8dd4;
        case 0x2b8dd8u: goto label_2b8dd8;
        case 0x2b8ddcu: goto label_2b8ddc;
        case 0x2b8de0u: goto label_2b8de0;
        case 0x2b8de4u: goto label_2b8de4;
        case 0x2b8de8u: goto label_2b8de8;
        case 0x2b8decu: goto label_2b8dec;
        case 0x2b8df0u: goto label_2b8df0;
        case 0x2b8df4u: goto label_2b8df4;
        case 0x2b8df8u: goto label_2b8df8;
        case 0x2b8dfcu: goto label_2b8dfc;
        case 0x2b8e00u: goto label_2b8e00;
        case 0x2b8e04u: goto label_2b8e04;
        case 0x2b8e08u: goto label_2b8e08;
        case 0x2b8e0cu: goto label_2b8e0c;
        case 0x2b8e10u: goto label_2b8e10;
        case 0x2b8e14u: goto label_2b8e14;
        case 0x2b8e18u: goto label_2b8e18;
        case 0x2b8e1cu: goto label_2b8e1c;
        case 0x2b8e20u: goto label_2b8e20;
        case 0x2b8e24u: goto label_2b8e24;
        case 0x2b8e28u: goto label_2b8e28;
        case 0x2b8e2cu: goto label_2b8e2c;
        case 0x2b8e30u: goto label_2b8e30;
        case 0x2b8e34u: goto label_2b8e34;
        case 0x2b8e38u: goto label_2b8e38;
        case 0x2b8e3cu: goto label_2b8e3c;
        case 0x2b8e40u: goto label_2b8e40;
        case 0x2b8e44u: goto label_2b8e44;
        case 0x2b8e48u: goto label_2b8e48;
        case 0x2b8e4cu: goto label_2b8e4c;
        case 0x2b8e50u: goto label_2b8e50;
        case 0x2b8e54u: goto label_2b8e54;
        case 0x2b8e58u: goto label_2b8e58;
        case 0x2b8e5cu: goto label_2b8e5c;
        case 0x2b8e60u: goto label_2b8e60;
        case 0x2b8e64u: goto label_2b8e64;
        case 0x2b8e68u: goto label_2b8e68;
        case 0x2b8e6cu: goto label_2b8e6c;
        case 0x2b8e70u: goto label_2b8e70;
        case 0x2b8e74u: goto label_2b8e74;
        case 0x2b8e78u: goto label_2b8e78;
        case 0x2b8e7cu: goto label_2b8e7c;
        case 0x2b8e80u: goto label_2b8e80;
        case 0x2b8e84u: goto label_2b8e84;
        case 0x2b8e88u: goto label_2b8e88;
        case 0x2b8e8cu: goto label_2b8e8c;
        case 0x2b8e90u: goto label_2b8e90;
        case 0x2b8e94u: goto label_2b8e94;
        case 0x2b8e98u: goto label_2b8e98;
        case 0x2b8e9cu: goto label_2b8e9c;
        case 0x2b8ea0u: goto label_2b8ea0;
        case 0x2b8ea4u: goto label_2b8ea4;
        case 0x2b8ea8u: goto label_2b8ea8;
        case 0x2b8eacu: goto label_2b8eac;
        case 0x2b8eb0u: goto label_2b8eb0;
        case 0x2b8eb4u: goto label_2b8eb4;
        case 0x2b8eb8u: goto label_2b8eb8;
        case 0x2b8ebcu: goto label_2b8ebc;
        case 0x2b8ec0u: goto label_2b8ec0;
        case 0x2b8ec4u: goto label_2b8ec4;
        case 0x2b8ec8u: goto label_2b8ec8;
        case 0x2b8eccu: goto label_2b8ecc;
        case 0x2b8ed0u: goto label_2b8ed0;
        case 0x2b8ed4u: goto label_2b8ed4;
        case 0x2b8ed8u: goto label_2b8ed8;
        case 0x2b8edcu: goto label_2b8edc;
        case 0x2b8ee0u: goto label_2b8ee0;
        case 0x2b8ee4u: goto label_2b8ee4;
        case 0x2b8ee8u: goto label_2b8ee8;
        case 0x2b8eecu: goto label_2b8eec;
        case 0x2b8ef0u: goto label_2b8ef0;
        case 0x2b8ef4u: goto label_2b8ef4;
        case 0x2b8ef8u: goto label_2b8ef8;
        case 0x2b8efcu: goto label_2b8efc;
        case 0x2b8f00u: goto label_2b8f00;
        case 0x2b8f04u: goto label_2b8f04;
        case 0x2b8f08u: goto label_2b8f08;
        case 0x2b8f0cu: goto label_2b8f0c;
        case 0x2b8f10u: goto label_2b8f10;
        case 0x2b8f14u: goto label_2b8f14;
        case 0x2b8f18u: goto label_2b8f18;
        case 0x2b8f1cu: goto label_2b8f1c;
        case 0x2b8f20u: goto label_2b8f20;
        case 0x2b8f24u: goto label_2b8f24;
        case 0x2b8f28u: goto label_2b8f28;
        case 0x2b8f2cu: goto label_2b8f2c;
        case 0x2b8f30u: goto label_2b8f30;
        case 0x2b8f34u: goto label_2b8f34;
        case 0x2b8f38u: goto label_2b8f38;
        case 0x2b8f3cu: goto label_2b8f3c;
        case 0x2b8f40u: goto label_2b8f40;
        case 0x2b8f44u: goto label_2b8f44;
        case 0x2b8f48u: goto label_2b8f48;
        case 0x2b8f4cu: goto label_2b8f4c;
        case 0x2b8f50u: goto label_2b8f50;
        case 0x2b8f54u: goto label_2b8f54;
        case 0x2b8f58u: goto label_2b8f58;
        case 0x2b8f5cu: goto label_2b8f5c;
        case 0x2b8f60u: goto label_2b8f60;
        case 0x2b8f64u: goto label_2b8f64;
        case 0x2b8f68u: goto label_2b8f68;
        case 0x2b8f6cu: goto label_2b8f6c;
        case 0x2b8f70u: goto label_2b8f70;
        case 0x2b8f74u: goto label_2b8f74;
        case 0x2b8f78u: goto label_2b8f78;
        case 0x2b8f7cu: goto label_2b8f7c;
        case 0x2b8f80u: goto label_2b8f80;
        case 0x2b8f84u: goto label_2b8f84;
        case 0x2b8f88u: goto label_2b8f88;
        case 0x2b8f8cu: goto label_2b8f8c;
        case 0x2b8f90u: goto label_2b8f90;
        case 0x2b8f94u: goto label_2b8f94;
        case 0x2b8f98u: goto label_2b8f98;
        case 0x2b8f9cu: goto label_2b8f9c;
        case 0x2b8fa0u: goto label_2b8fa0;
        case 0x2b8fa4u: goto label_2b8fa4;
        case 0x2b8fa8u: goto label_2b8fa8;
        case 0x2b8facu: goto label_2b8fac;
        case 0x2b8fb0u: goto label_2b8fb0;
        case 0x2b8fb4u: goto label_2b8fb4;
        case 0x2b8fb8u: goto label_2b8fb8;
        case 0x2b8fbcu: goto label_2b8fbc;
        case 0x2b8fc0u: goto label_2b8fc0;
        case 0x2b8fc4u: goto label_2b8fc4;
        case 0x2b8fc8u: goto label_2b8fc8;
        case 0x2b8fccu: goto label_2b8fcc;
        case 0x2b8fd0u: goto label_2b8fd0;
        case 0x2b8fd4u: goto label_2b8fd4;
        case 0x2b8fd8u: goto label_2b8fd8;
        case 0x2b8fdcu: goto label_2b8fdc;
        case 0x2b8fe0u: goto label_2b8fe0;
        case 0x2b8fe4u: goto label_2b8fe4;
        case 0x2b8fe8u: goto label_2b8fe8;
        case 0x2b8fecu: goto label_2b8fec;
        case 0x2b8ff0u: goto label_2b8ff0;
        case 0x2b8ff4u: goto label_2b8ff4;
        case 0x2b8ff8u: goto label_2b8ff8;
        case 0x2b8ffcu: goto label_2b8ffc;
        case 0x2b9000u: goto label_2b9000;
        case 0x2b9004u: goto label_2b9004;
        case 0x2b9008u: goto label_2b9008;
        case 0x2b900cu: goto label_2b900c;
        case 0x2b9010u: goto label_2b9010;
        case 0x2b9014u: goto label_2b9014;
        case 0x2b9018u: goto label_2b9018;
        case 0x2b901cu: goto label_2b901c;
        case 0x2b9020u: goto label_2b9020;
        case 0x2b9024u: goto label_2b9024;
        case 0x2b9028u: goto label_2b9028;
        case 0x2b902cu: goto label_2b902c;
        case 0x2b9030u: goto label_2b9030;
        case 0x2b9034u: goto label_2b9034;
        case 0x2b9038u: goto label_2b9038;
        case 0x2b903cu: goto label_2b903c;
        case 0x2b9040u: goto label_2b9040;
        case 0x2b9044u: goto label_2b9044;
        case 0x2b9048u: goto label_2b9048;
        case 0x2b904cu: goto label_2b904c;
        case 0x2b9050u: goto label_2b9050;
        case 0x2b9054u: goto label_2b9054;
        case 0x2b9058u: goto label_2b9058;
        case 0x2b905cu: goto label_2b905c;
        case 0x2b9060u: goto label_2b9060;
        case 0x2b9064u: goto label_2b9064;
        case 0x2b9068u: goto label_2b9068;
        case 0x2b906cu: goto label_2b906c;
        case 0x2b9070u: goto label_2b9070;
        case 0x2b9074u: goto label_2b9074;
        case 0x2b9078u: goto label_2b9078;
        case 0x2b907cu: goto label_2b907c;
        case 0x2b9080u: goto label_2b9080;
        case 0x2b9084u: goto label_2b9084;
        case 0x2b9088u: goto label_2b9088;
        case 0x2b908cu: goto label_2b908c;
        case 0x2b9090u: goto label_2b9090;
        case 0x2b9094u: goto label_2b9094;
        case 0x2b9098u: goto label_2b9098;
        case 0x2b909cu: goto label_2b909c;
        case 0x2b90a0u: goto label_2b90a0;
        case 0x2b90a4u: goto label_2b90a4;
        case 0x2b90a8u: goto label_2b90a8;
        case 0x2b90acu: goto label_2b90ac;
        case 0x2b90b0u: goto label_2b90b0;
        case 0x2b90b4u: goto label_2b90b4;
        case 0x2b90b8u: goto label_2b90b8;
        case 0x2b90bcu: goto label_2b90bc;
        case 0x2b90c0u: goto label_2b90c0;
        case 0x2b90c4u: goto label_2b90c4;
        case 0x2b90c8u: goto label_2b90c8;
        case 0x2b90ccu: goto label_2b90cc;
        case 0x2b90d0u: goto label_2b90d0;
        case 0x2b90d4u: goto label_2b90d4;
        case 0x2b90d8u: goto label_2b90d8;
        case 0x2b90dcu: goto label_2b90dc;
        case 0x2b90e0u: goto label_2b90e0;
        case 0x2b90e4u: goto label_2b90e4;
        case 0x2b90e8u: goto label_2b90e8;
        case 0x2b90ecu: goto label_2b90ec;
        case 0x2b90f0u: goto label_2b90f0;
        case 0x2b90f4u: goto label_2b90f4;
        case 0x2b90f8u: goto label_2b90f8;
        case 0x2b90fcu: goto label_2b90fc;
        case 0x2b9100u: goto label_2b9100;
        case 0x2b9104u: goto label_2b9104;
        case 0x2b9108u: goto label_2b9108;
        case 0x2b910cu: goto label_2b910c;
        case 0x2b9110u: goto label_2b9110;
        case 0x2b9114u: goto label_2b9114;
        case 0x2b9118u: goto label_2b9118;
        case 0x2b911cu: goto label_2b911c;
        case 0x2b9120u: goto label_2b9120;
        case 0x2b9124u: goto label_2b9124;
        case 0x2b9128u: goto label_2b9128;
        case 0x2b912cu: goto label_2b912c;
        case 0x2b9130u: goto label_2b9130;
        case 0x2b9134u: goto label_2b9134;
        case 0x2b9138u: goto label_2b9138;
        case 0x2b913cu: goto label_2b913c;
        case 0x2b9140u: goto label_2b9140;
        case 0x2b9144u: goto label_2b9144;
        case 0x2b9148u: goto label_2b9148;
        case 0x2b914cu: goto label_2b914c;
        case 0x2b9150u: goto label_2b9150;
        case 0x2b9154u: goto label_2b9154;
        case 0x2b9158u: goto label_2b9158;
        case 0x2b915cu: goto label_2b915c;
        case 0x2b9160u: goto label_2b9160;
        case 0x2b9164u: goto label_2b9164;
        case 0x2b9168u: goto label_2b9168;
        case 0x2b916cu: goto label_2b916c;
        case 0x2b9170u: goto label_2b9170;
        case 0x2b9174u: goto label_2b9174;
        case 0x2b9178u: goto label_2b9178;
        case 0x2b917cu: goto label_2b917c;
        case 0x2b9180u: goto label_2b9180;
        case 0x2b9184u: goto label_2b9184;
        case 0x2b9188u: goto label_2b9188;
        case 0x2b918cu: goto label_2b918c;
        case 0x2b9190u: goto label_2b9190;
        case 0x2b9194u: goto label_2b9194;
        case 0x2b9198u: goto label_2b9198;
        case 0x2b919cu: goto label_2b919c;
        case 0x2b91a0u: goto label_2b91a0;
        case 0x2b91a4u: goto label_2b91a4;
        case 0x2b91a8u: goto label_2b91a8;
        case 0x2b91acu: goto label_2b91ac;
        case 0x2b91b0u: goto label_2b91b0;
        case 0x2b91b4u: goto label_2b91b4;
        case 0x2b91b8u: goto label_2b91b8;
        case 0x2b91bcu: goto label_2b91bc;
        case 0x2b91c0u: goto label_2b91c0;
        case 0x2b91c4u: goto label_2b91c4;
        case 0x2b91c8u: goto label_2b91c8;
        case 0x2b91ccu: goto label_2b91cc;
        case 0x2b91d0u: goto label_2b91d0;
        case 0x2b91d4u: goto label_2b91d4;
        case 0x2b91d8u: goto label_2b91d8;
        case 0x2b91dcu: goto label_2b91dc;
        case 0x2b91e0u: goto label_2b91e0;
        case 0x2b91e4u: goto label_2b91e4;
        case 0x2b91e8u: goto label_2b91e8;
        case 0x2b91ecu: goto label_2b91ec;
        case 0x2b91f0u: goto label_2b91f0;
        case 0x2b91f4u: goto label_2b91f4;
        case 0x2b91f8u: goto label_2b91f8;
        case 0x2b91fcu: goto label_2b91fc;
        case 0x2b9200u: goto label_2b9200;
        case 0x2b9204u: goto label_2b9204;
        case 0x2b9208u: goto label_2b9208;
        case 0x2b920cu: goto label_2b920c;
        case 0x2b9210u: goto label_2b9210;
        case 0x2b9214u: goto label_2b9214;
        case 0x2b9218u: goto label_2b9218;
        case 0x2b921cu: goto label_2b921c;
        case 0x2b9220u: goto label_2b9220;
        case 0x2b9224u: goto label_2b9224;
        case 0x2b9228u: goto label_2b9228;
        case 0x2b922cu: goto label_2b922c;
        case 0x2b9230u: goto label_2b9230;
        case 0x2b9234u: goto label_2b9234;
        case 0x2b9238u: goto label_2b9238;
        case 0x2b923cu: goto label_2b923c;
        case 0x2b9240u: goto label_2b9240;
        case 0x2b9244u: goto label_2b9244;
        case 0x2b9248u: goto label_2b9248;
        case 0x2b924cu: goto label_2b924c;
        case 0x2b9250u: goto label_2b9250;
        case 0x2b9254u: goto label_2b9254;
        case 0x2b9258u: goto label_2b9258;
        case 0x2b925cu: goto label_2b925c;
        case 0x2b9260u: goto label_2b9260;
        case 0x2b9264u: goto label_2b9264;
        case 0x2b9268u: goto label_2b9268;
        case 0x2b926cu: goto label_2b926c;
        case 0x2b9270u: goto label_2b9270;
        case 0x2b9274u: goto label_2b9274;
        case 0x2b9278u: goto label_2b9278;
        case 0x2b927cu: goto label_2b927c;
        case 0x2b9280u: goto label_2b9280;
        case 0x2b9284u: goto label_2b9284;
        case 0x2b9288u: goto label_2b9288;
        case 0x2b928cu: goto label_2b928c;
        case 0x2b9290u: goto label_2b9290;
        case 0x2b9294u: goto label_2b9294;
        case 0x2b9298u: goto label_2b9298;
        case 0x2b929cu: goto label_2b929c;
        case 0x2b92a0u: goto label_2b92a0;
        case 0x2b92a4u: goto label_2b92a4;
        case 0x2b92a8u: goto label_2b92a8;
        case 0x2b92acu: goto label_2b92ac;
        case 0x2b92b0u: goto label_2b92b0;
        case 0x2b92b4u: goto label_2b92b4;
        case 0x2b92b8u: goto label_2b92b8;
        case 0x2b92bcu: goto label_2b92bc;
        case 0x2b92c0u: goto label_2b92c0;
        case 0x2b92c4u: goto label_2b92c4;
        case 0x2b92c8u: goto label_2b92c8;
        case 0x2b92ccu: goto label_2b92cc;
        case 0x2b92d0u: goto label_2b92d0;
        case 0x2b92d4u: goto label_2b92d4;
        case 0x2b92d8u: goto label_2b92d8;
        case 0x2b92dcu: goto label_2b92dc;
        case 0x2b92e0u: goto label_2b92e0;
        case 0x2b92e4u: goto label_2b92e4;
        case 0x2b92e8u: goto label_2b92e8;
        case 0x2b92ecu: goto label_2b92ec;
        case 0x2b92f0u: goto label_2b92f0;
        case 0x2b92f4u: goto label_2b92f4;
        case 0x2b92f8u: goto label_2b92f8;
        case 0x2b92fcu: goto label_2b92fc;
        case 0x2b9300u: goto label_2b9300;
        case 0x2b9304u: goto label_2b9304;
        case 0x2b9308u: goto label_2b9308;
        case 0x2b930cu: goto label_2b930c;
        case 0x2b9310u: goto label_2b9310;
        case 0x2b9314u: goto label_2b9314;
        case 0x2b9318u: goto label_2b9318;
        case 0x2b931cu: goto label_2b931c;
        case 0x2b9320u: goto label_2b9320;
        case 0x2b9324u: goto label_2b9324;
        case 0x2b9328u: goto label_2b9328;
        case 0x2b932cu: goto label_2b932c;
        case 0x2b9330u: goto label_2b9330;
        case 0x2b9334u: goto label_2b9334;
        case 0x2b9338u: goto label_2b9338;
        case 0x2b933cu: goto label_2b933c;
        case 0x2b9340u: goto label_2b9340;
        case 0x2b9344u: goto label_2b9344;
        case 0x2b9348u: goto label_2b9348;
        case 0x2b934cu: goto label_2b934c;
        case 0x2b9350u: goto label_2b9350;
        case 0x2b9354u: goto label_2b9354;
        case 0x2b9358u: goto label_2b9358;
        case 0x2b935cu: goto label_2b935c;
        case 0x2b9360u: goto label_2b9360;
        case 0x2b9364u: goto label_2b9364;
        case 0x2b9368u: goto label_2b9368;
        case 0x2b936cu: goto label_2b936c;
        case 0x2b9370u: goto label_2b9370;
        case 0x2b9374u: goto label_2b9374;
        case 0x2b9378u: goto label_2b9378;
        case 0x2b937cu: goto label_2b937c;
        case 0x2b9380u: goto label_2b9380;
        case 0x2b9384u: goto label_2b9384;
        case 0x2b9388u: goto label_2b9388;
        case 0x2b938cu: goto label_2b938c;
        case 0x2b9390u: goto label_2b9390;
        case 0x2b9394u: goto label_2b9394;
        case 0x2b9398u: goto label_2b9398;
        case 0x2b939cu: goto label_2b939c;
        case 0x2b93a0u: goto label_2b93a0;
        case 0x2b93a4u: goto label_2b93a4;
        case 0x2b93a8u: goto label_2b93a8;
        case 0x2b93acu: goto label_2b93ac;
        case 0x2b93b0u: goto label_2b93b0;
        case 0x2b93b4u: goto label_2b93b4;
        case 0x2b93b8u: goto label_2b93b8;
        case 0x2b93bcu: goto label_2b93bc;
        case 0x2b93c0u: goto label_2b93c0;
        case 0x2b93c4u: goto label_2b93c4;
        case 0x2b93c8u: goto label_2b93c8;
        case 0x2b93ccu: goto label_2b93cc;
        case 0x2b93d0u: goto label_2b93d0;
        case 0x2b93d4u: goto label_2b93d4;
        case 0x2b93d8u: goto label_2b93d8;
        case 0x2b93dcu: goto label_2b93dc;
        case 0x2b93e0u: goto label_2b93e0;
        case 0x2b93e4u: goto label_2b93e4;
        case 0x2b93e8u: goto label_2b93e8;
        case 0x2b93ecu: goto label_2b93ec;
        case 0x2b93f0u: goto label_2b93f0;
        case 0x2b93f4u: goto label_2b93f4;
        case 0x2b93f8u: goto label_2b93f8;
        case 0x2b93fcu: goto label_2b93fc;
        case 0x2b9400u: goto label_2b9400;
        case 0x2b9404u: goto label_2b9404;
        case 0x2b9408u: goto label_2b9408;
        case 0x2b940cu: goto label_2b940c;
        case 0x2b9410u: goto label_2b9410;
        case 0x2b9414u: goto label_2b9414;
        case 0x2b9418u: goto label_2b9418;
        case 0x2b941cu: goto label_2b941c;
        case 0x2b9420u: goto label_2b9420;
        case 0x2b9424u: goto label_2b9424;
        case 0x2b9428u: goto label_2b9428;
        case 0x2b942cu: goto label_2b942c;
        case 0x2b9430u: goto label_2b9430;
        case 0x2b9434u: goto label_2b9434;
        case 0x2b9438u: goto label_2b9438;
        case 0x2b943cu: goto label_2b943c;
        case 0x2b9440u: goto label_2b9440;
        case 0x2b9444u: goto label_2b9444;
        case 0x2b9448u: goto label_2b9448;
        case 0x2b944cu: goto label_2b944c;
        case 0x2b9450u: goto label_2b9450;
        case 0x2b9454u: goto label_2b9454;
        case 0x2b9458u: goto label_2b9458;
        case 0x2b945cu: goto label_2b945c;
        case 0x2b9460u: goto label_2b9460;
        case 0x2b9464u: goto label_2b9464;
        case 0x2b9468u: goto label_2b9468;
        case 0x2b946cu: goto label_2b946c;
        case 0x2b9470u: goto label_2b9470;
        case 0x2b9474u: goto label_2b9474;
        case 0x2b9478u: goto label_2b9478;
        case 0x2b947cu: goto label_2b947c;
        case 0x2b9480u: goto label_2b9480;
        case 0x2b9484u: goto label_2b9484;
        case 0x2b9488u: goto label_2b9488;
        case 0x2b948cu: goto label_2b948c;
        case 0x2b9490u: goto label_2b9490;
        case 0x2b9494u: goto label_2b9494;
        case 0x2b9498u: goto label_2b9498;
        case 0x2b949cu: goto label_2b949c;
        case 0x2b94a0u: goto label_2b94a0;
        case 0x2b94a4u: goto label_2b94a4;
        case 0x2b94a8u: goto label_2b94a8;
        case 0x2b94acu: goto label_2b94ac;
        case 0x2b94b0u: goto label_2b94b0;
        case 0x2b94b4u: goto label_2b94b4;
        case 0x2b94b8u: goto label_2b94b8;
        case 0x2b94bcu: goto label_2b94bc;
        case 0x2b94c0u: goto label_2b94c0;
        case 0x2b94c4u: goto label_2b94c4;
        case 0x2b94c8u: goto label_2b94c8;
        case 0x2b94ccu: goto label_2b94cc;
        case 0x2b94d0u: goto label_2b94d0;
        case 0x2b94d4u: goto label_2b94d4;
        case 0x2b94d8u: goto label_2b94d8;
        case 0x2b94dcu: goto label_2b94dc;
        case 0x2b94e0u: goto label_2b94e0;
        case 0x2b94e4u: goto label_2b94e4;
        case 0x2b94e8u: goto label_2b94e8;
        case 0x2b94ecu: goto label_2b94ec;
        case 0x2b94f0u: goto label_2b94f0;
        case 0x2b94f4u: goto label_2b94f4;
        case 0x2b94f8u: goto label_2b94f8;
        case 0x2b94fcu: goto label_2b94fc;
        case 0x2b9500u: goto label_2b9500;
        case 0x2b9504u: goto label_2b9504;
        case 0x2b9508u: goto label_2b9508;
        case 0x2b950cu: goto label_2b950c;
        case 0x2b9510u: goto label_2b9510;
        case 0x2b9514u: goto label_2b9514;
        case 0x2b9518u: goto label_2b9518;
        case 0x2b951cu: goto label_2b951c;
        case 0x2b9520u: goto label_2b9520;
        case 0x2b9524u: goto label_2b9524;
        case 0x2b9528u: goto label_2b9528;
        case 0x2b952cu: goto label_2b952c;
        case 0x2b9530u: goto label_2b9530;
        case 0x2b9534u: goto label_2b9534;
        case 0x2b9538u: goto label_2b9538;
        case 0x2b953cu: goto label_2b953c;
        case 0x2b9540u: goto label_2b9540;
        case 0x2b9544u: goto label_2b9544;
        case 0x2b9548u: goto label_2b9548;
        case 0x2b954cu: goto label_2b954c;
        case 0x2b9550u: goto label_2b9550;
        case 0x2b9554u: goto label_2b9554;
        case 0x2b9558u: goto label_2b9558;
        case 0x2b955cu: goto label_2b955c;
        case 0x2b9560u: goto label_2b9560;
        case 0x2b9564u: goto label_2b9564;
        case 0x2b9568u: goto label_2b9568;
        case 0x2b956cu: goto label_2b956c;
        case 0x2b9570u: goto label_2b9570;
        case 0x2b9574u: goto label_2b9574;
        case 0x2b9578u: goto label_2b9578;
        case 0x2b957cu: goto label_2b957c;
        case 0x2b9580u: goto label_2b9580;
        case 0x2b9584u: goto label_2b9584;
        case 0x2b9588u: goto label_2b9588;
        case 0x2b958cu: goto label_2b958c;
        case 0x2b9590u: goto label_2b9590;
        case 0x2b9594u: goto label_2b9594;
        case 0x2b9598u: goto label_2b9598;
        case 0x2b959cu: goto label_2b959c;
        case 0x2b95a0u: goto label_2b95a0;
        case 0x2b95a4u: goto label_2b95a4;
        case 0x2b95a8u: goto label_2b95a8;
        case 0x2b95acu: goto label_2b95ac;
        case 0x2b95b0u: goto label_2b95b0;
        case 0x2b95b4u: goto label_2b95b4;
        case 0x2b95b8u: goto label_2b95b8;
        case 0x2b95bcu: goto label_2b95bc;
        case 0x2b95c0u: goto label_2b95c0;
        case 0x2b95c4u: goto label_2b95c4;
        case 0x2b95c8u: goto label_2b95c8;
        case 0x2b95ccu: goto label_2b95cc;
        case 0x2b95d0u: goto label_2b95d0;
        case 0x2b95d4u: goto label_2b95d4;
        case 0x2b95d8u: goto label_2b95d8;
        case 0x2b95dcu: goto label_2b95dc;
        case 0x2b95e0u: goto label_2b95e0;
        case 0x2b95e4u: goto label_2b95e4;
        case 0x2b95e8u: goto label_2b95e8;
        case 0x2b95ecu: goto label_2b95ec;
        case 0x2b95f0u: goto label_2b95f0;
        case 0x2b95f4u: goto label_2b95f4;
        case 0x2b95f8u: goto label_2b95f8;
        case 0x2b95fcu: goto label_2b95fc;
        case 0x2b9600u: goto label_2b9600;
        case 0x2b9604u: goto label_2b9604;
        case 0x2b9608u: goto label_2b9608;
        case 0x2b960cu: goto label_2b960c;
        case 0x2b9610u: goto label_2b9610;
        case 0x2b9614u: goto label_2b9614;
        case 0x2b9618u: goto label_2b9618;
        case 0x2b961cu: goto label_2b961c;
        case 0x2b9620u: goto label_2b9620;
        case 0x2b9624u: goto label_2b9624;
        case 0x2b9628u: goto label_2b9628;
        case 0x2b962cu: goto label_2b962c;
        case 0x2b9630u: goto label_2b9630;
        case 0x2b9634u: goto label_2b9634;
        case 0x2b9638u: goto label_2b9638;
        case 0x2b963cu: goto label_2b963c;
        case 0x2b9640u: goto label_2b9640;
        case 0x2b9644u: goto label_2b9644;
        case 0x2b9648u: goto label_2b9648;
        case 0x2b964cu: goto label_2b964c;
        case 0x2b9650u: goto label_2b9650;
        case 0x2b9654u: goto label_2b9654;
        case 0x2b9658u: goto label_2b9658;
        case 0x2b965cu: goto label_2b965c;
        case 0x2b9660u: goto label_2b9660;
        case 0x2b9664u: goto label_2b9664;
        case 0x2b9668u: goto label_2b9668;
        case 0x2b966cu: goto label_2b966c;
        case 0x2b9670u: goto label_2b9670;
        case 0x2b9674u: goto label_2b9674;
        case 0x2b9678u: goto label_2b9678;
        case 0x2b967cu: goto label_2b967c;
        case 0x2b9680u: goto label_2b9680;
        case 0x2b9684u: goto label_2b9684;
        case 0x2b9688u: goto label_2b9688;
        case 0x2b968cu: goto label_2b968c;
        case 0x2b9690u: goto label_2b9690;
        case 0x2b9694u: goto label_2b9694;
        case 0x2b9698u: goto label_2b9698;
        case 0x2b969cu: goto label_2b969c;
        case 0x2b96a0u: goto label_2b96a0;
        case 0x2b96a4u: goto label_2b96a4;
        case 0x2b96a8u: goto label_2b96a8;
        case 0x2b96acu: goto label_2b96ac;
        case 0x2b96b0u: goto label_2b96b0;
        case 0x2b96b4u: goto label_2b96b4;
        case 0x2b96b8u: goto label_2b96b8;
        case 0x2b96bcu: goto label_2b96bc;
        case 0x2b96c0u: goto label_2b96c0;
        case 0x2b96c4u: goto label_2b96c4;
        case 0x2b96c8u: goto label_2b96c8;
        case 0x2b96ccu: goto label_2b96cc;
        case 0x2b96d0u: goto label_2b96d0;
        case 0x2b96d4u: goto label_2b96d4;
        case 0x2b96d8u: goto label_2b96d8;
        case 0x2b96dcu: goto label_2b96dc;
        case 0x2b96e0u: goto label_2b96e0;
        case 0x2b96e4u: goto label_2b96e4;
        case 0x2b96e8u: goto label_2b96e8;
        case 0x2b96ecu: goto label_2b96ec;
        case 0x2b96f0u: goto label_2b96f0;
        case 0x2b96f4u: goto label_2b96f4;
        case 0x2b96f8u: goto label_2b96f8;
        case 0x2b96fcu: goto label_2b96fc;
        case 0x2b9700u: goto label_2b9700;
        case 0x2b9704u: goto label_2b9704;
        default: break;
    }

    ctx->pc = 0x2b7530u;

label_2b7530:
    // 0x2b7530: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b7530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2b7534:
    // 0x2b7534: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b7534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b7538:
    // 0x2b7538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b753c:
    // 0x2b753c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b753cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b7540:
    // 0x2b7540: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b7540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b7544:
    // 0x2b7544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b7548:
    // 0x2b7548: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2b7548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2b754c:
    // 0x2b754c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2b754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2b7550:
    // 0x2b7550: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b7550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2b7554:
    // 0x2b7554: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b7554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2b7558:
    // 0x2b7558: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b7558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2b755c:
    // 0x2b755c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b7560:
    // 0x2b7560: 0xc0a3dd0  jal         func_28F740
label_2b7564:
    if (ctx->pc == 0x2B7564u) {
        ctx->pc = 0x2B7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7560u;
        // 0x2b7564: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7568u;
        goto label_2b7568;
    }
    ctx->pc = 0x2B7560u;
    SET_GPR_U32(ctx, 31, 0x2B7568u);
    ctx->pc = 0x2B7564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7560u;
    // 0x2b7564: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x2B7560u, 0x2B7568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7568u;
label_2b7568:
    // 0x2b7568: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2b7568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2b756c:
    // 0x2b756c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_2b7570:
    if (ctx->pc == 0x2B7570u) {
        ctx->pc = 0x2B7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B756Cu;
        // 0x2b7570: 0x92030005  lbu         $v1, 0x5($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7574u;
        goto label_2b7574;
    }
    ctx->pc = 0x2B756Cu;
    {
        const bool branch_taken_0x2b756c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b756c) {
            ctx->pc = 0x2B7570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B756Cu;
            // 0x2b7570: 0x92030005  lbu         $v1, 0x5($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7598u;
            goto label_2b7598;
        }
    }
    ctx->pc = 0x2B7574u;
label_2b7574:
    // 0x2b7574: 0xc0add1e  jal         func_2B7478
label_2b7578:
    if (ctx->pc == 0x2B7578u) {
        ctx->pc = 0x2B7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7574u;
        // 0x2b7578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B757Cu;
        goto label_2b757c;
    }
    ctx->pc = 0x2B7574u;
    SET_GPR_U32(ctx, 31, 0x2B757Cu);
    ctx->pc = 0x2B7578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7574u;
    // 0x2b7578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7478u, 0x2B7574u, 0x2B757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B757Cu;
label_2b757c:
    // 0x2b757c: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
label_2b7580:
    if (ctx->pc == 0x2B7580u) {
        ctx->pc = 0x2B7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B757Cu;
        // 0x2b7580: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7584u;
        goto label_2b7584;
    }
    ctx->pc = 0x2B757Cu;
    {
        const bool branch_taken_0x2b757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B757Cu;
        // 0x2b7580: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b757c) {
            ctx->pc = 0x2B78E4u;
            goto label_2b78e4;
        }
    }
    ctx->pc = 0x2B7584u;
label_2b7584:
    // 0x2b7584: 0xc0add30  jal         func_2B74C0
label_2b7588:
    if (ctx->pc == 0x2B7588u) {
        ctx->pc = 0x2B7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7584u;
        // 0x2b7588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B758Cu;
        goto label_2b758c;
    }
    ctx->pc = 0x2B7584u;
    SET_GPR_U32(ctx, 31, 0x2B758Cu);
    ctx->pc = 0x2B7588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7584u;
    // 0x2b7588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B74C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B74C0u, 0x2B7584u, 0x2B758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B758Cu;
label_2b758c:
    // 0x2b758c: 0x144000d5  bnez        $v0, . + 4 + (0xD5 << 2)
label_2b7590:
    if (ctx->pc == 0x2B7590u) {
        ctx->pc = 0x2B7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B758Cu;
        // 0x2b7590: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7594u;
        goto label_2b7594;
    }
    ctx->pc = 0x2B758Cu;
    {
        const bool branch_taken_0x2b758c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B758Cu;
        // 0x2b7590: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b758c) {
            ctx->pc = 0x2B78E4u;
            goto label_2b78e4;
        }
    }
    ctx->pc = 0x2B7594u;
label_2b7594:
    // 0x2b7594: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x2b7594u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_2b7598:
    // 0x2b7598: 0x3c080f0f  lui         $t0, 0xF0F
    ctx->pc = 0x2b7598u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3855 << 16));
label_2b759c:
    // 0x2b759c: 0x35080f0f  ori         $t0, $t0, 0xF0F
    ctx->pc = 0x2b759cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3855);
label_2b75a0:
    // 0x2b75a0: 0x92180004  lbu         $t8, 0x4($s0)
    ctx->pc = 0x2b75a0u;
    SET_GPR_U32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2b75a4:
    // 0x2b75a4: 0x3407cccc  ori         $a3, $zero, 0xCCCC
    ctx->pc = 0x2b75a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52428);
label_2b75a8:
    // 0x2b75a8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2b75a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_2b75ac:
    // 0x2b75ac: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2b75acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2b75b0:
    // 0x2b75b0: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x2b75b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_2b75b4:
    // 0x2b75b4: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x2b75b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_2b75b8:
    // 0x2b75b8: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x2b75b8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
label_2b75bc:
    // 0x2b75bc: 0x92050007  lbu         $a1, 0x7($s0)
    ctx->pc = 0x2b75bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_2b75c0:
    // 0x2b75c0: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x2b75c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
label_2b75c4:
    // 0x2b75c4: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x2b75c4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b75c8:
    // 0x2b75c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b75c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b75cc:
    // 0x2b75cc: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2b75ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2b75d0:
    // 0x2b75d0: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x2b75d0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
label_2b75d4:
    // 0x2b75d4: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x2b75d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_2b75d8:
    // 0x2b75d8: 0x1e67825  or          $t7, $t7, $a2
    ctx->pc = 0x2b75d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 6));
label_2b75dc:
    // 0x2b75dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2b75dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2b75e0:
    // 0x2b75e0: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2b75e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
label_2b75e4:
    // 0x2b75e4: 0x305c025  or          $t8, $t8, $a1
    ctx->pc = 0x2b75e4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 5));
label_2b75e8:
    // 0x2b75e8: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x2b75e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
label_2b75ec:
    // 0x2b75ec: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x2b75ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_2b75f0:
    // 0x2b75f0: 0x18113a  dsrl        $v0, $t8, 4
    ctx->pc = 0x2b75f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) >> 4);
label_2b75f4:
    // 0x2b75f4: 0x1e47825  or          $t7, $t7, $a0
    ctx->pc = 0x2b75f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 4));
label_2b75f8:
    // 0x2b75f8: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x2b75f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
label_2b75fc:
    // 0x2b75fc: 0x34a55555  ori         $a1, $a1, 0x5555
    ctx->pc = 0x2b75fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21845);
label_2b7600:
    // 0x2b7600: 0x4f1026  xor         $v0, $v0, $t7
    ctx->pc = 0x2b7600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 15));
label_2b7604:
    // 0x2b7604: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x2b7604u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
label_2b7608:
    // 0x2b7608: 0x352900ff  ori         $t1, $t1, 0xFF
    ctx->pc = 0x2b7608u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)255);
label_2b760c:
    // 0x2b760c: 0x487024  and         $t6, $v0, $t0
    ctx->pc = 0x2b760cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2b7610:
    // 0x2b7610: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x2b7610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_2b7614:
    // 0x2b7614: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2b7614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_2b7618:
    // 0x2b7618: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x2b7618u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
label_2b761c:
    // 0x2b761c: 0xe1938  dsll        $v1, $t6, 4
    ctx->pc = 0x2b761cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << 4);
label_2b7620:
    // 0x2b7620: 0xf14b8  dsll        $v0, $t7, 18
    ctx->pc = 0x2b7620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << 18);
label_2b7624:
    // 0x2b7624: 0x303c026  xor         $t8, $t8, $v1
    ctx->pc = 0x2b7624u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) ^ GPR_U64(ctx, 3));
label_2b7628:
    // 0x2b7628: 0x4f1026  xor         $v0, $v0, $t7
    ctx->pc = 0x2b7628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 15));
label_2b762c:
    // 0x2b762c: 0x181cb8  dsll        $v1, $t8, 18
    ctx->pc = 0x2b762cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) << 18);
label_2b7630:
    // 0x2b7630: 0x477024  and         $t6, $v0, $a3
    ctx->pc = 0x2b7630u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2b7634:
    // 0x2b7634: 0x781826  xor         $v1, $v1, $t8
    ctx->pc = 0x2b7634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 24));
label_2b7638:
    // 0x2b7638: 0x1ee2026  xor         $a0, $t7, $t6
    ctx->pc = 0x2b7638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
label_2b763c:
    // 0x2b763c: 0xe14ba  dsrl        $v0, $t6, 18
    ctx->pc = 0x2b763cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) >> 18);
label_2b7640:
    // 0x2b7640: 0x677024  and         $t6, $v1, $a3
    ctx->pc = 0x2b7640u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_2b7644:
    // 0x2b7644: 0x827826  xor         $t7, $a0, $v0
    ctx->pc = 0x2b7644u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_2b7648:
    // 0x2b7648: 0x30e1826  xor         $v1, $t8, $t6
    ctx->pc = 0x2b7648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) ^ GPR_U64(ctx, 14));
label_2b764c:
    // 0x2b764c: 0xe14ba  dsrl        $v0, $t6, 18
    ctx->pc = 0x2b764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) >> 18);
label_2b7650:
    // 0x2b7650: 0x62c026  xor         $t8, $v1, $v0
    ctx->pc = 0x2b7650u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_2b7654:
    // 0x2b7654: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b7654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2b7658:
    // 0x2b7658: 0x18107a  dsrl        $v0, $t8, 1
    ctx->pc = 0x2b7658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) >> 1);
label_2b765c:
    // 0x2b765c: 0x2499d490  addiu       $t9, $a0, -0x2B70
    ctx->pc = 0x2b765cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956176));
label_2b7660:
    // 0x2b7660: 0x4f1026  xor         $v0, $v0, $t7
    ctx->pc = 0x2b7660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 15));
label_2b7664:
    // 0x2b7664: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x2b7664u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
label_2b7668:
    // 0x2b7668: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2b7668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_2b766c:
    // 0x2b766c: 0x457024  and         $t6, $v0, $a1
    ctx->pc = 0x2b766cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2b7670:
    // 0x2b7670: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2b7670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_2b7674:
    // 0x2b7674: 0xe1878  dsll        $v1, $t6, 1
    ctx->pc = 0x2b7674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << 1);
label_2b7678:
    // 0x2b7678: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x2b7678u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
label_2b767c:
    // 0x2b767c: 0x303c026  xor         $t8, $t8, $v1
    ctx->pc = 0x2b767cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) ^ GPR_U64(ctx, 3));
label_2b7680:
    // 0x2b7680: 0xf123a  dsrl        $v0, $t7, 8
    ctx->pc = 0x2b7680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) >> 8);
label_2b7684:
    // 0x2b7684: 0x581026  xor         $v0, $v0, $t8
    ctx->pc = 0x2b7684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 24));
label_2b7688:
    // 0x2b7688: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x2b7688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2b768c:
    // 0x2b768c: 0x497024  and         $t6, $v0, $t1
    ctx->pc = 0x2b768cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_2b7690:
    // 0x2b7690: 0x273e0600  addiu       $fp, $t9, 0x600
    ctx->pc = 0x2b7690u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 25), 1536));
label_2b7694:
    // 0x2b7694: 0xe1a38  dsll        $v1, $t6, 8
    ctx->pc = 0x2b7694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << 8);
label_2b7698:
    // 0x2b7698: 0x30ec026  xor         $t8, $t8, $t6
    ctx->pc = 0x2b7698u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) ^ GPR_U64(ctx, 14));
label_2b769c:
    // 0x2b769c: 0x1e37826  xor         $t7, $t7, $v1
    ctx->pc = 0x2b769cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 3));
label_2b76a0:
    // 0x2b76a0: 0x18107a  dsrl        $v0, $t8, 1
    ctx->pc = 0x2b76a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) >> 1);
label_2b76a4:
    // 0x2b76a4: 0x4f1026  xor         $v0, $v0, $t7
    ctx->pc = 0x2b76a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 15));
label_2b76a8:
    // 0x2b76a8: 0x27370400  addiu       $s7, $t9, 0x400
    ctx->pc = 0x2b76a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 25), 1024));
label_2b76ac:
    // 0x2b76ac: 0x457024  and         $t6, $v0, $a1
    ctx->pc = 0x2b76acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2b76b0:
    // 0x2b76b0: 0x27360200  addiu       $s6, $t9, 0x200
    ctx->pc = 0x2b76b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 25), 512));
label_2b76b4:
    // 0x2b76b4: 0xe1078  dsll        $v0, $t6, 1
    ctx->pc = 0x2b76b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) << 1);
label_2b76b8:
    // 0x2b76b8: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x2b76b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
label_2b76bc:
    // 0x2b76bc: 0x302c026  xor         $t8, $t8, $v0
    ctx->pc = 0x2b76bcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) ^ GPR_U64(ctx, 2));
label_2b76c0:
    // 0x2b76c0: 0x1e63024  and         $a2, $t7, $a2
    ctx->pc = 0x2b76c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) & GPR_U64(ctx, 6));
label_2b76c4:
    // 0x2b76c4: 0x330300ff  andi        $v1, $t8, 0xFF
    ctx->pc = 0x2b76c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
label_2b76c8:
    // 0x2b76c8: 0x18143a  dsrl        $v0, $t8, 16
    ctx->pc = 0x2b76c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) >> 16);
label_2b76cc:
    // 0x2b76cc: 0x3305ff00  andi        $a1, $t8, 0xFF00
    ctx->pc = 0x2b76ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65280);
label_2b76d0:
    // 0x2b76d0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2b76d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2b76d4:
    // 0x2b76d4: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2b76d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_2b76d8:
    // 0x2b76d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b76d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b76dc:
    // 0x2b76dc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2b76dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_2b76e0:
    // 0x2b76e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2b76e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2b76e4:
    // 0x2b76e4: 0x27350800  addiu       $s5, $t9, 0x800
    ctx->pc = 0x2b76e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 25), 2048));
label_2b76e8:
    // 0x2b76e8: 0x62c025  or          $t8, $v1, $v0
    ctx->pc = 0x2b76e8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2b76ec:
    // 0x2b76ec: 0x1e77824  and         $t7, $t7, $a3
    ctx->pc = 0x2b76ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
label_2b76f0:
    // 0x2b76f0: 0x24937688  addiu       $s3, $a0, 0x7688
    ctx->pc = 0x2b76f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 30344));
label_2b76f4:
    // 0x2b76f4: 0x3c140fff  lui         $s4, 0xFFF
    ctx->pc = 0x2b76f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4095 << 16));
label_2b76f8:
    // 0x2b76f8: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x2b76f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_2b76fc:
    // 0x2b76fc: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x2b76fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_2b7700:
    // 0x2b7700: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x2b7700u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
label_2b7704:
    // 0x2b7704: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x2b7704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b7708:
    // 0x2b7708: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b7708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b770c:
    // 0x2b770c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b7710:
    if (ctx->pc == 0x2B7710u) {
        ctx->pc = 0x2B7710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B770Cu;
        // 0x2b7710: 0xf26b8  dsll        $a0, $t7, 26 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) << 26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7714u;
        goto label_2b7714;
    }
    ctx->pc = 0x2B770Cu;
    {
        const bool branch_taken_0x2b770c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B770Cu;
        // 0x2b7710: 0xf26b8  dsll        $a0, $t7, 26 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) << 26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b770c) {
            ctx->pc = 0x2B7724u;
            goto label_2b7724;
        }
    }
    ctx->pc = 0x2B7714u;
label_2b7714:
    // 0x2b7714: 0x182eb8  dsll        $a1, $t8, 26
    ctx->pc = 0x2b7714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) << 26);
label_2b7718:
    // 0x2b7718: 0xf10ba  dsrl        $v0, $t7, 2
    ctx->pc = 0x2b7718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) >> 2);
label_2b771c:
    // 0x2b771c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b7720:
    if (ctx->pc == 0x2B7720u) {
        ctx->pc = 0x2B7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B771Cu;
        // 0x2b7720: 0x1818ba  dsrl        $v1, $t8, 2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) >> 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7724u;
        goto label_2b7724;
    }
    ctx->pc = 0x2B771Cu;
    {
        const bool branch_taken_0x2b771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B771Cu;
        // 0x2b7720: 0x1818ba  dsrl        $v1, $t8, 2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) >> 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b771c) {
            ctx->pc = 0x2B7734u;
            goto label_2b7734;
        }
    }
    ctx->pc = 0x2B7724u;
label_2b7724:
    // 0x2b7724: 0xf26f8  dsll        $a0, $t7, 27
    ctx->pc = 0x2b7724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) << 27);
label_2b7728:
    // 0x2b7728: 0x182ef8  dsll        $a1, $t8, 27
    ctx->pc = 0x2b7728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) << 27);
label_2b772c:
    // 0x2b772c: 0xf107a  dsrl        $v0, $t7, 1
    ctx->pc = 0x2b772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) >> 1);
label_2b7730:
    // 0x2b7730: 0x18187a  dsrl        $v1, $t8, 1
    ctx->pc = 0x2b7730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) >> 1);
label_2b7734:
    // 0x2b7734: 0x447825  or          $t7, $v0, $a0
    ctx->pc = 0x2b7734u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2b7738:
    // 0x2b7738: 0x65c025  or          $t8, $v1, $a1
    ctx->pc = 0x2b7738u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2b773c:
    // 0x2b773c: 0x1f47824  and         $t7, $t7, $s4
    ctx->pc = 0x2b773cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 20));
label_2b7740:
    // 0x2b7740: 0x314c024  and         $t8, $t8, $s4
    ctx->pc = 0x2b7740u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 20));
label_2b7744:
    // 0x2b7744: 0xf2d3a  dsrl        $a1, $t7, 20
    ctx->pc = 0x2b7744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) >> 20);
label_2b7748:
    // 0x2b7748: 0xf157a  dsrl        $v0, $t7, 21
    ctx->pc = 0x2b7748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) >> 21);
label_2b774c:
    // 0x2b774c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2b774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_2b7750:
    // 0x2b7750: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2b7750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2b7754:
    // 0x2b7754: 0x184d7a  dsrl        $t1, $t8, 21
    ctx->pc = 0x2b7754u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) >> 21);
label_2b7758:
    // 0x2b7758: 0x1825ba  dsrl        $a0, $t8, 22
    ctx->pc = 0x2b7758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) >> 22);
label_2b775c:
    // 0x2b775c: 0x1851fa  dsrl        $t2, $t8, 7
    ctx->pc = 0x2b775cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 24) >> 7);
label_2b7760:
    // 0x2b7760: 0x181a3a  dsrl        $v1, $t8, 8
    ctx->pc = 0x2b7760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) >> 8);
label_2b7764:
    // 0x2b7764: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b7764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b7768:
    // 0x2b7768: 0x30840030  andi        $a0, $a0, 0x30
    ctx->pc = 0x2b7768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
label_2b776c:
    // 0x2b776c: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x2b776cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
label_2b7770:
    // 0x2b7770: 0xf337a  dsrl        $a2, $t7, 13
    ctx->pc = 0x2b7770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) >> 13);
label_2b7774:
    // 0x2b7774: 0xf63ba  dsrl        $t4, $t7, 14
    ctx->pc = 0x2b7774u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) >> 14);
label_2b7778:
    // 0x2b7778: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x2b7778u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
label_2b777c:
    // 0x2b777c: 0x314a0003  andi        $t2, $t2, 0x3
    ctx->pc = 0x2b777cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
label_2b7780:
    // 0x2b7780: 0x318c0030  andi        $t4, $t4, 0x30
    ctx->pc = 0x2b7780u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)48);
label_2b7784:
    // 0x2b7784: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x2b7784u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_2b7788:
    // 0x2b7788: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x2b7788u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
label_2b778c:
    // 0x2b778c: 0xf41ba  dsrl        $t0, $t7, 6
    ctx->pc = 0x2b778cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) >> 6);
label_2b7790:
    // 0x2b7790: 0xf59fa  dsrl        $t3, $t7, 7
    ctx->pc = 0x2b7790u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) >> 7);
label_2b7794:
    // 0x2b7794: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x2b7794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_2b7798:
    // 0x2b7798: 0x31e2003f  andi        $v0, $t7, 0x3F
    ctx->pc = 0x2b7798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)63);
label_2b779c:
    // 0x2b779c: 0x316b003c  andi        $t3, $t3, 0x3C
    ctx->pc = 0x2b779cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)60);
label_2b77a0:
    // 0x2b77a0: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x2b77a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
label_2b77a4:
    // 0x2b77a4: 0xf6dba  dsrl        $t5, $t7, 22
    ctx->pc = 0x2b77a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) >> 22);
label_2b77a8:
    // 0x2b77a8: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x2b77a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_2b77ac:
    // 0x2b77ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b77acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2b77b0:
    // 0x2b77b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b77b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b77b4:
    // 0x2b77b4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x2b77b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
label_2b77b8:
    // 0x2b77b8: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x2b77b8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
label_2b77bc:
    // 0x2b77bc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b77bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2b77c0:
    // 0x2b77c0: 0x10b4025  or          $t0, $t0, $t3
    ctx->pc = 0x2b77c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 11));
label_2b77c4:
    // 0x2b77c4: 0x2484de90  addiu       $a0, $a0, -0x2170
    ctx->pc = 0x2b77c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958736));
label_2b77c8:
    // 0x2b77c8: 0x31ad0038  andi        $t5, $t5, 0x38
    ctx->pc = 0x2b77c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)56);
label_2b77cc:
    // 0x2b77cc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2b77ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_2b77d0:
    // 0x2b77d0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2b77d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_2b77d4:
    // 0x2b77d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2b77d8:
    // 0x2b77d8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x2b77d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_2b77dc:
    // 0x2b77dc: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x2b77dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
label_2b77e0:
    // 0x2b77e0: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2b77e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_2b77e4:
    // 0x2b77e4: 0xad2825  or          $a1, $a1, $t5
    ctx->pc = 0x2b77e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 13));
label_2b77e8:
    // 0x2b77e8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x2b77e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_2b77ec:
    // 0x2b77ec: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2b77ecu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_2b77f0:
    // 0x2b77f0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2b77f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2b77f4:
    // 0x2b77f4: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x2b77f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
label_2b77f8:
    // 0x2b77f8: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2b77f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2b77fc:
    // 0x2b77fc: 0x183bfa  dsrl        $a3, $t8, 15
    ctx->pc = 0x2b77fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) >> 15);
label_2b7800:
    // 0x2b7800: 0x3303003f  andi        $v1, $t8, 0x3F
    ctx->pc = 0x2b7800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)63);
label_2b7804:
    // 0x2b7804: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2b7804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_2b7808:
    // 0x2b7808: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2b7808u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_2b780c:
    // 0x2b780c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2b780cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2b7810:
    // 0x2b7810: 0x1164021  addu        $t0, $t0, $s6
    ctx->pc = 0x2b7810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
label_2b7814:
    // 0x2b7814: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2b7814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2b7818:
    // 0x2b7818: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x2b7818u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
label_2b781c:
    // 0x2b781c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b781cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2b7820:
    // 0x2b7820: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b7820u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2b7824:
    // 0x2b7824: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2b7824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2b7828:
    // 0x2b7828: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x2b7828u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
label_2b782c:
    // 0x2b782c: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x2b782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_2b7830:
    // 0x2b7830: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x2b7830u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_2b7834:
    // 0x2b7834: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2b7834u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_2b7838:
    // 0x2b7838: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2b7838u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_2b783c:
    // 0x2b783c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2b783cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2b7840:
    // 0x2b7840: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b7840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2b7844:
    // 0x2b7844: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2b7844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2b7848:
    // 0x2b7848: 0xdcab0000  ld          $t3, 0x0($a1)
    ctx->pc = 0x2b7848u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2b784c:
    // 0x2b784c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x2b784cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2b7850:
    // 0x2b7850: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2b7850u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2b7854:
    // 0x2b7854: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2b7854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2b7858:
    // 0x2b7858: 0x3273821  addu        $a3, $t9, $a3
    ctx->pc = 0x2b7858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
label_2b785c:
    // 0x2b785c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2b785cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2b7860:
    // 0x2b7860: 0x3294821  addu        $t1, $t9, $t1
    ctx->pc = 0x2b7860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
label_2b7864:
    // 0x2b7864: 0xdce30c00  ld          $v1, 0xC00($a3)
    ctx->pc = 0x2b7864u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 3072)));
label_2b7868:
    // 0x2b7868: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x2b7868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
label_2b786c:
    // 0x2b786c: 0xdd280e00  ld          $t0, 0xE00($t1)
    ctx->pc = 0x2b786cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 9), 3584)));
label_2b7870:
    // 0x2b7870: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2b7870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2b7874:
    // 0x2b7874: 0xdd460000  ld          $a2, 0x0($t2)
    ctx->pc = 0x2b7874u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 10), 0)));
label_2b7878:
    // 0x2b7878: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x2b7878u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2b787c:
    // 0x2b787c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x2b787cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_2b7880:
    // 0x2b7880: 0x340cffff  ori         $t4, $zero, 0xFFFF
    ctx->pc = 0x2b7880u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2b7884:
    // 0x2b7884: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x2b7884u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
label_2b7888:
    // 0x2b7888: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2b7888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_2b788c:
    // 0x2b788c: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x2b788cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
label_2b7890:
    // 0x2b7890: 0xa37025  or          $t6, $a1, $v1
    ctx->pc = 0x2b7890u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2b7894:
    // 0x2b7894: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2b7894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2b7898:
    // 0x2b7898: 0xe1438  dsll        $v0, $t6, 16
    ctx->pc = 0x2b7898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) << 16);
label_2b789c:
    // 0x2b789c: 0x1cc6024  and         $t4, $t6, $t4
    ctx->pc = 0x2b789cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
label_2b78a0:
    // 0x2b78a0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2b78a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2b78a4:
    // 0x2b78a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2b78a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2b78a8:
    // 0x2b78a8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2b78a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2b78ac:
    // 0x2b78ac: 0x228b8  dsll        $a1, $v0, 2
    ctx->pc = 0x2b78acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 2);
label_2b78b0:
    // 0x2b78b0: 0x21fba  dsrl        $v1, $v0, 30
    ctx->pc = 0x2b78b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 30);
label_2b78b4:
    // 0x2b78b4: 0x8c1025  or          $v0, $a0, $t4
    ctx->pc = 0x2b78b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
label_2b78b8:
    // 0x2b78b8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x2b78b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_2b78bc:
    // 0x2b78bc: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x2b78bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
label_2b78c0:
    // 0x2b78c0: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2b78c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_2b78c4:
    // 0x2b78c4: 0x216ba  dsrl        $v0, $v0, 26
    ctx->pc = 0x2b78c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 26);
label_2b78c8:
    // 0x2b78c8: 0xfe03fff8  sd          $v1, -0x8($s0)
    ctx->pc = 0x2b78c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U64(ctx, 3));
label_2b78cc:
    // 0x2b78cc: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x2b78ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_2b78d0:
    // 0x2b78d0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2b78d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2b78d4:
    // 0x2b78d4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2b78d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_2b78d8:
    // 0x2b78d8: 0x621ff8b  bgez        $s1, . + 4 + (-0x75 << 2)
label_2b78dc:
    if (ctx->pc == 0x2B78DCu) {
        ctx->pc = 0x2B78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78D8u;
        // 0x2b78dc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B78E0u;
        goto label_2b78e0;
    }
    ctx->pc = 0x2B78D8u;
    {
        const bool branch_taken_0x2b78d8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2B78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78D8u;
        // 0x2b78dc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78d8) {
            ctx->pc = 0x2B7708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b7708;
        }
    }
    ctx->pc = 0x2B78E0u;
label_2b78e0:
    // 0x2b78e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b78e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b78e4:
    // 0x2b78e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b78e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b78e8:
    // 0x2b78e8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2b78e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b78ec:
    // 0x2b78ec: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2b78ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b78f0:
    // 0x2b78f0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b78f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b78f4:
    // 0x2b78f4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b78f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b78f8:
    // 0x2b78f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b78f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b78fc:
    // 0x2b78fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b78fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b7900:
    // 0x2b7900: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b7900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b7904:
    // 0x2b7904: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b7904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b7908:
    // 0x2b7908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b790c:
    // 0x2b790c: 0x3e00008  jr          $ra
label_2b7910:
    if (ctx->pc == 0x2B7910u) {
        ctx->pc = 0x2B7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B790Cu;
        // 0x2b7910: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7914u;
        goto label_2b7914;
    }
    ctx->pc = 0x2B790Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B790Cu;
        // 0x2b7910: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B790Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7914u;
label_2b7914:
    // 0x2b7914: 0x0  nop
    ctx->pc = 0x2b7914u;
    // NOP
label_2b7918:
    // 0x2b7918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b791c:
    // 0x2b791c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b791cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b7920:
    // 0x2b7920: 0xc0add4c  jal         func_2B7530
label_2b7924:
    if (ctx->pc == 0x2B7924u) {
        ctx->pc = 0x2B7928u;
        goto label_2b7928;
    }
    ctx->pc = 0x2B7920u;
    SET_GPR_U32(ctx, 31, 0x2B7928u);
    ctx->pc = 0x2B7530u;
    goto label_2b7530;
    ctx->pc = 0x2B7928u;
label_2b7928:
    // 0x2b7928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b792c:
    // 0x2b792c: 0x3e00008  jr          $ra
label_2b7930:
    if (ctx->pc == 0x2B7930u) {
        ctx->pc = 0x2B7930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B792Cu;
        // 0x2b7930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7934u;
        goto label_2b7934;
    }
    ctx->pc = 0x2B792Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B792Cu;
        // 0x2b7930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B792Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7934u;
label_2b7934:
    // 0x2b7934: 0x0  nop
    ctx->pc = 0x2b7934u;
    // NOP
label_2b7938:
    // 0x2b7938: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2b7938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_2b793c:
    // 0x2b793c: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x2b793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
label_2b7940:
    // 0x2b7940: 0xffb70130  sd          $s7, 0x130($sp)
    ctx->pc = 0x2b7940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 23));
label_2b7944:
    // 0x2b7944: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2b7944u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b7948:
    // 0x2b7948: 0xffb100d0  sd          $s1, 0xD0($sp)
    ctx->pc = 0x2b7948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 17));
label_2b794c:
    // 0x2b794c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2b794cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b7950:
    // 0x2b7950: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x2b7950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
label_2b7954:
    // 0x2b7954: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2b7954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b7958:
    // 0x2b7958: 0xffb300f0  sd          $s3, 0xF0($sp)
    ctx->pc = 0x2b7958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 19));
label_2b795c:
    // 0x2b795c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2b795cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2b7960:
    // 0x2b7960: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x2b7960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
label_2b7964:
    // 0x2b7964: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x2b7964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
label_2b7968:
    // 0x2b7968: 0xffb50110  sd          $s5, 0x110($sp)
    ctx->pc = 0x2b7968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 21));
label_2b796c:
    // 0x2b796c: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x2b796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
label_2b7970:
    // 0x2b7970: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x2b7970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
label_2b7974:
    // 0x2b7974: 0xffa800b0  sd          $t0, 0xB0($sp)
    ctx->pc = 0x2b7974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 8));
label_2b7978:
    // 0x2b7978: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x2b7978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_2b797c:
    // 0x2b797c: 0xc0a1a9e  jal         func_286A78
label_2b7980:
    if (ctx->pc == 0x2B7980u) {
        ctx->pc = 0x2B7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B797Cu;
        // 0x2b7980: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7984u;
        goto label_2b7984;
    }
    ctx->pc = 0x2B797Cu;
    SET_GPR_U32(ctx, 31, 0x2B7984u);
    ctx->pc = 0x2B7980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B797Cu;
    // 0x2b7980: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A78u, 0x2B797Cu, 0x2B7984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7984u;
label_2b7984:
    // 0x2b7984: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b7984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7988:
    // 0x2b7988: 0x1260008f  beqz        $s3, . + 4 + (0x8F << 2)
label_2b798c:
    if (ctx->pc == 0x2B798Cu) {
        ctx->pc = 0x2B798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7988u;
        // 0x2b798c: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7990u;
        goto label_2b7990;
    }
    ctx->pc = 0x2B7988u;
    {
        const bool branch_taken_0x2b7988 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7988u;
        // 0x2b798c: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7988) {
            ctx->pc = 0x2B7BC8u;
            goto label_2b7bc8;
        }
    }
    ctx->pc = 0x2B7990u;
label_2b7990:
    // 0x2b7990: 0xc0a1a88  jal         func_286A20
label_2b7994:
    if (ctx->pc == 0x2B7994u) {
        ctx->pc = 0x2B7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7990u;
        // 0x2b7994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7998u;
        goto label_2b7998;
    }
    ctx->pc = 0x2B7990u;
    SET_GPR_U32(ctx, 31, 0x2B7998u);
    ctx->pc = 0x2B7994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7990u;
    // 0x2b7994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2B7990u, 0x2B7998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7998u;
label_2b7998:
    // 0x2b7998: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2b7998u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2b799c:
    // 0x2b799c: 0xc0a1a88  jal         func_286A20
label_2b79a0:
    if (ctx->pc == 0x2B79A0u) {
        ctx->pc = 0x2B79A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B799Cu;
        // 0x2b79a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B79A4u;
        goto label_2b79a4;
    }
    ctx->pc = 0x2B799Cu;
    SET_GPR_U32(ctx, 31, 0x2B79A4u);
    ctx->pc = 0x2B79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B799Cu;
    // 0x2b79a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2B799Cu, 0x2B79A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79A4u;
label_2b79a4:
    // 0x2b79a4: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x2b79a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b79a8:
    // 0x2b79a8: 0xc0a1a88  jal         func_286A20
label_2b79ac:
    if (ctx->pc == 0x2B79ACu) {
        ctx->pc = 0x2B79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79A8u;
        // 0x2b79ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B79B0u;
        goto label_2b79b0;
    }
    ctx->pc = 0x2B79A8u;
    SET_GPR_U32(ctx, 31, 0x2B79B0u);
    ctx->pc = 0x2B79ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79A8u;
    // 0x2b79ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2B79A8u, 0x2B79B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79B0u;
label_2b79b0:
    // 0x2b79b0: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x2b79b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2b79b4:
    // 0x2b79b4: 0xc0a1a88  jal         func_286A20
label_2b79b8:
    if (ctx->pc == 0x2B79B8u) {
        ctx->pc = 0x2B79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79B4u;
        // 0x2b79b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B79BCu;
        goto label_2b79bc;
    }
    ctx->pc = 0x2B79B4u;
    SET_GPR_U32(ctx, 31, 0x2B79BCu);
    ctx->pc = 0x2B79B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79B4u;
    // 0x2b79b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2B79B4u, 0x2B79BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79BCu;
label_2b79bc:
    // 0x2b79bc: 0xdfa200b0  ld          $v0, 0xB0($sp)
    ctx->pc = 0x2b79bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2b79c0:
    // 0x2b79c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b79c4:
    if (ctx->pc == 0x2B79C4u) {
        ctx->pc = 0x2B79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79C0u;
        // 0x2b79c4: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B79C8u;
        goto label_2b79c8;
    }
    ctx->pc = 0x2B79C0u;
    {
        const bool branch_taken_0x2b79c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79C0u;
        // 0x2b79c4: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79c0) {
            ctx->pc = 0x2B79D8u;
            goto label_2b79d8;
        }
    }
    ctx->pc = 0x2B79C8u;
label_2b79c8:
    // 0x2b79c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b79c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2b79cc:
    // 0x2b79cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b79ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b79d0:
    // 0x2b79d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b79d4:
    if (ctx->pc == 0x2B79D4u) {
        ctx->pc = 0x2B79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79D0u;
        // 0x2b79d4: 0x2221021  addu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B79D8u;
        goto label_2b79d8;
    }
    ctx->pc = 0x2B79D0u;
    {
        const bool branch_taken_0x2b79d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79D0u;
        // 0x2b79d4: 0x2221021  addu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79d0) {
            ctx->pc = 0x2B79DCu;
            goto label_2b79dc;
        }
    }
    ctx->pc = 0x2B79D8u;
label_2b79d8:
    // 0x2b79d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b79d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b79dc:
    // 0x2b79dc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2b79dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2b79e0:
    // 0x2b79e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b79e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b79e4:
    // 0x2b79e4: 0xc0a067c  jal         func_2819F0
label_2b79e8:
    if (ctx->pc == 0x2B79E8u) {
        ctx->pc = 0x2B79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79E4u;
        // 0x2b79e8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B79ECu;
        goto label_2b79ec;
    }
    ctx->pc = 0x2B79E4u;
    SET_GPR_U32(ctx, 31, 0x2B79ECu);
    ctx->pc = 0x2B79E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79E4u;
    // 0x2b79e8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2819F0u, 0x2B79E4u, 0x2B79ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79ECu;
label_2b79ec:
    // 0x2b79ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b79f0:
    if (ctx->pc == 0x2B79F0u) {
        ctx->pc = 0x2B79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79ECu;
        // 0x2b79f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B79F4u;
        goto label_2b79f4;
    }
    ctx->pc = 0x2B79ECu;
    {
        const bool branch_taken_0x2b79ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79ECu;
        // 0x2b79f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79ec) {
            ctx->pc = 0x2B7A00u;
            goto label_2b7a00;
        }
    }
    ctx->pc = 0x2B79F4u;
label_2b79f4:
    // 0x2b79f4: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2b79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_2b79f8:
    // 0x2b79f8: 0x10000076  b           . + 4 + (0x76 << 2)
label_2b79fc:
    if (ctx->pc == 0x2B79FCu) {
        ctx->pc = 0x2B79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79F8u;
        // 0x2b79fc: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A00u;
        goto label_2b7a00;
    }
    ctx->pc = 0x2B79F8u;
    {
        const bool branch_taken_0x2b79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79F8u;
        // 0x2b79fc: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79f8) {
            ctx->pc = 0x2B7BD4u;
            goto label_2b7bd4;
        }
    }
    ctx->pc = 0x2B7A00u;
label_2b7a00:
    // 0x2b7a00: 0x27b100b8  addiu       $s1, $sp, 0xB8
    ctx->pc = 0x2b7a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_2b7a04:
    // 0x2b7a04: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2b7a04u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b7a08:
    // 0x2b7a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b7a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b7a0c:
    // 0x2b7a0c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2b7a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_2b7a10:
    // 0x2b7a10: 0xc0a00b6  jal         func_2802D8
label_2b7a14:
    if (ctx->pc == 0x2B7A14u) {
        ctx->pc = 0x2B7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A10u;
        // 0x2b7a14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A18u;
        goto label_2b7a18;
    }
    ctx->pc = 0x2B7A10u;
    SET_GPR_U32(ctx, 31, 0x2B7A18u);
    ctx->pc = 0x2B7A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A10u;
    // 0x2b7a14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x2B7A10u, 0x2B7A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A18u;
label_2b7a18:
    // 0x2b7a18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b7a1c:
    if (ctx->pc == 0x2B7A1Cu) {
        ctx->pc = 0x2B7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A18u;
        // 0x2b7a1c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A20u;
        goto label_2b7a20;
    }
    ctx->pc = 0x2B7A18u;
    {
        const bool branch_taken_0x2b7a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A18u;
        // 0x2b7a1c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a18) {
            ctx->pc = 0x2B7A2Cu;
            goto label_2b7a2c;
        }
    }
    ctx->pc = 0x2B7A20u;
label_2b7a20:
    // 0x2b7a20: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2b7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2b7a24:
    // 0x2b7a24: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2b7a28:
    if (ctx->pc == 0x2B7A28u) {
        ctx->pc = 0x2B7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A24u;
        // 0x2b7a28: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A2Cu;
        goto label_2b7a2c;
    }
    ctx->pc = 0x2B7A24u;
    {
        const bool branch_taken_0x2b7a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A24u;
        // 0x2b7a28: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a24) {
            ctx->pc = 0x2B7BD4u;
            goto label_2b7bd4;
        }
    }
    ctx->pc = 0x2B7A2Cu;
label_2b7a2c:
    // 0x2b7a2c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2b7a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b7a30:
    // 0x2b7a30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b7a34:
    // 0x2b7a34: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2b7a34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b7a38:
    // 0x2b7a38: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b7a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b7a3c:
    // 0x2b7a3c: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2b7a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2b7a40:
    // 0x2b7a40: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2b7a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_2b7a44:
    // 0x2b7a44: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2b7a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2b7a48:
    // 0x2b7a48: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2b7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2b7a4c:
    // 0x2b7a4c: 0xc0a1b8c  jal         func_286E30
label_2b7a50:
    if (ctx->pc == 0x2B7A50u) {
        ctx->pc = 0x2B7A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A4Cu;
        // 0x2b7a50: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A54u;
        goto label_2b7a54;
    }
    ctx->pc = 0x2B7A4Cu;
    SET_GPR_U32(ctx, 31, 0x2B7A54u);
    ctx->pc = 0x2B7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A4Cu;
    // 0x2b7a50: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x2B7A4Cu, 0x2B7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A54u;
label_2b7a54:
    // 0x2b7a54: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_2b7a58:
    if (ctx->pc == 0x2B7A58u) {
        ctx->pc = 0x2B7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A54u;
        // 0x2b7a58: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A5Cu;
        goto label_2b7a5c;
    }
    ctx->pc = 0x2B7A54u;
    {
        const bool branch_taken_0x2b7a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A54u;
        // 0x2b7a58: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a54) {
            ctx->pc = 0x2B7BF4u;
            goto label_2b7bf4;
        }
    }
    ctx->pc = 0x2B7A5Cu;
label_2b7a5c:
    // 0x2b7a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b7a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b7a60:
    // 0x2b7a60: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2b7a60u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b7a64:
    // 0x2b7a64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b7a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b7a68:
    // 0x2b7a68: 0xc0a00b6  jal         func_2802D8
label_2b7a6c:
    if (ctx->pc == 0x2B7A6Cu) {
        ctx->pc = 0x2B7A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A68u;
        // 0x2b7a6c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A70u;
        goto label_2b7a70;
    }
    ctx->pc = 0x2B7A68u;
    SET_GPR_U32(ctx, 31, 0x2B7A70u);
    ctx->pc = 0x2B7A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A68u;
    // 0x2b7a6c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x2B7A68u, 0x2B7A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A70u;
label_2b7a70:
    // 0x2b7a70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b7a74:
    if (ctx->pc == 0x2B7A74u) {
        ctx->pc = 0x2B7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A70u;
        // 0x2b7a74: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A78u;
        goto label_2b7a78;
    }
    ctx->pc = 0x2B7A70u;
    {
        const bool branch_taken_0x2b7a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A70u;
        // 0x2b7a74: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a70) {
            ctx->pc = 0x2B7A84u;
            goto label_2b7a84;
        }
    }
    ctx->pc = 0x2B7A78u;
label_2b7a78:
    // 0x2b7a78: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x2b7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_2b7a7c:
    // 0x2b7a7c: 0x10000055  b           . + 4 + (0x55 << 2)
label_2b7a80:
    if (ctx->pc == 0x2B7A80u) {
        ctx->pc = 0x2B7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A7Cu;
        // 0x2b7a80: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A84u;
        goto label_2b7a84;
    }
    ctx->pc = 0x2B7A7Cu;
    {
        const bool branch_taken_0x2b7a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A7Cu;
        // 0x2b7a80: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a7c) {
            ctx->pc = 0x2B7BD4u;
            goto label_2b7bd4;
        }
    }
    ctx->pc = 0x2B7A84u;
label_2b7a84:
    // 0x2b7a84: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2b7a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b7a88:
    // 0x2b7a88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b7a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b7a8c:
    // 0x2b7a8c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2b7a8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b7a90:
    // 0x2b7a90: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b7a94:
    // 0x2b7a94: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2b7a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2b7a98:
    // 0x2b7a98: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2b7a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_2b7a9c:
    // 0x2b7a9c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2b7a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2b7aa0:
    // 0x2b7aa0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2b7aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2b7aa4:
    // 0x2b7aa4: 0xc0a1b8c  jal         func_286E30
label_2b7aa8:
    if (ctx->pc == 0x2B7AA8u) {
        ctx->pc = 0x2B7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AA4u;
        // 0x2b7aa8: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AACu;
        goto label_2b7aac;
    }
    ctx->pc = 0x2B7AA4u;
    SET_GPR_U32(ctx, 31, 0x2B7AACu);
    ctx->pc = 0x2B7AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7AA4u;
    // 0x2b7aa8: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x2B7AA4u, 0x2B7AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7AACu;
label_2b7aac:
    // 0x2b7aac: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_2b7ab0:
    if (ctx->pc == 0x2B7AB0u) {
        ctx->pc = 0x2B7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AACu;
        // 0x2b7ab0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AB4u;
        goto label_2b7ab4;
    }
    ctx->pc = 0x2B7AACu;
    {
        const bool branch_taken_0x2b7aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AACu;
        // 0x2b7ab0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7aac) {
            ctx->pc = 0x2B7BF8u;
            goto label_2b7bf8;
        }
    }
    ctx->pc = 0x2B7AB4u;
label_2b7ab4:
    // 0x2b7ab4: 0xc0a065c  jal         func_281970
label_2b7ab8:
    if (ctx->pc == 0x2B7AB8u) {
        ctx->pc = 0x2B7AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AB4u;
        // 0x2b7ab8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7ABCu;
        goto label_2b7abc;
    }
    ctx->pc = 0x2B7AB4u;
    SET_GPR_U32(ctx, 31, 0x2B7ABCu);
    ctx->pc = 0x2B7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7AB4u;
    // 0x2b7ab8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281970u, 0x2B7AB4u, 0x2B7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7ABCu;
label_2b7abc:
    // 0x2b7abc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_2b7ac0:
    if (ctx->pc == 0x2B7AC0u) {
        ctx->pc = 0x2B7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7ABCu;
        // 0x2b7ac0: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AC4u;
        goto label_2b7ac4;
    }
    ctx->pc = 0x2B7ABCu;
    {
        const bool branch_taken_0x2b7abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7ABCu;
        // 0x2b7ac0: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7abc) {
            ctx->pc = 0x2B7BD8u;
            goto label_2b7bd8;
        }
    }
    ctx->pc = 0x2B7AC4u;
label_2b7ac4:
    // 0x2b7ac4: 0x8e11002c  lw          $s1, 0x2C($s0)
    ctx->pc = 0x2b7ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2b7ac8:
    // 0x2b7ac8: 0x56200011  bnel        $s1, $zero, . + 4 + (0x11 << 2)
label_2b7acc:
    if (ctx->pc == 0x2B7ACCu) {
        ctx->pc = 0x2B7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AC8u;
        // 0x2b7acc: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AD0u;
        goto label_2b7ad0;
    }
    ctx->pc = 0x2B7AC8u;
    {
        const bool branch_taken_0x2b7ac8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7ac8) {
            ctx->pc = 0x2B7ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7AC8u;
            // 0x2b7acc: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7B10u;
            goto label_2b7b10;
        }
    }
    ctx->pc = 0x2B7AD0u;
label_2b7ad0:
    // 0x2b7ad0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2b7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2b7ad4:
    // 0x2b7ad4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b7ad8:
    // 0x2b7ad8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_2b7adc:
    if (ctx->pc == 0x2B7ADCu) {
        ctx->pc = 0x2B7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AD8u;
        // 0x2b7adc: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AE0u;
        goto label_2b7ae0;
    }
    ctx->pc = 0x2B7AD8u;
    {
        const bool branch_taken_0x2b7ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7ad8) {
            ctx->pc = 0x2B7ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7AD8u;
            // 0x2b7adc: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7B10u;
            goto label_2b7b10;
        }
    }
    ctx->pc = 0x2B7AE0u;
label_2b7ae0:
    // 0x2b7ae0: 0xc0a1ee8  jal         func_287BA0
label_2b7ae4:
    if (ctx->pc == 0x2B7AE4u) {
        ctx->pc = 0x2B7AE8u;
        goto label_2b7ae8;
    }
    ctx->pc = 0x2B7AE0u;
    SET_GPR_U32(ctx, 31, 0x2B7AE8u);
    ctx->pc = 0x287BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287BA0u, 0x2B7AE0u, 0x2B7AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7AE8u;
label_2b7ae8:
    // 0x2b7ae8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b7aec:
    if (ctx->pc == 0x2B7AECu) {
        ctx->pc = 0x2B7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AE8u;
        // 0x2b7aec: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AF0u;
        goto label_2b7af0;
    }
    ctx->pc = 0x2B7AE8u;
    {
        const bool branch_taken_0x2b7ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AE8u;
        // 0x2b7aec: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ae8) {
            ctx->pc = 0x2B7B0Cu;
            goto label_2b7b0c;
        }
    }
    ctx->pc = 0x2B7AF0u;
label_2b7af0:
    // 0x2b7af0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2b7af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2b7af4:
    // 0x2b7af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b7af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7af8:
    // 0x2b7af8: 0xc0a2c82  jal         func_28B208
label_2b7afc:
    if (ctx->pc == 0x2B7AFCu) {
        ctx->pc = 0x2B7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AF8u;
        // 0x2b7afc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B00u;
        goto label_2b7b00;
    }
    ctx->pc = 0x2B7AF8u;
    SET_GPR_U32(ctx, 31, 0x2B7B00u);
    ctx->pc = 0x2B7AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7AF8u;
    // 0x2b7afc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B208u, 0x2B7AF8u, 0x2B7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B00u;
label_2b7b00:
    // 0x2b7b00: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2b7b04:
    if (ctx->pc == 0x2B7B04u) {
        ctx->pc = 0x2B7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B00u;
        // 0x2b7b04: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B08u;
        goto label_2b7b08;
    }
    ctx->pc = 0x2B7B00u;
    {
        const bool branch_taken_0x2b7b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B00u;
        // 0x2b7b04: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b00) {
            ctx->pc = 0x2B7BD8u;
            goto label_2b7bd8;
        }
    }
    ctx->pc = 0x2B7B08u;
label_2b7b08:
    // 0x2b7b08: 0x8e11002c  lw          $s1, 0x2C($s0)
    ctx->pc = 0x2b7b08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2b7b0c:
    // 0x2b7b0c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2b7b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b7b10:
    // 0x2b7b10: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2b7b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2b7b14:
    // 0x2b7b14: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2b7b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b7b18:
    // 0x2b7b18: 0xc0a18f8  jal         func_2863E0
label_2b7b1c:
    if (ctx->pc == 0x2B7B1Cu) {
        ctx->pc = 0x2B7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B18u;
        // 0x2b7b1c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B20u;
        goto label_2b7b20;
    }
    ctx->pc = 0x2B7B18u;
    SET_GPR_U32(ctx, 31, 0x2B7B20u);
    ctx->pc = 0x2B7B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B18u;
    // 0x2b7b1c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2863E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2863E0u, 0x2B7B18u, 0x2B7B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B20u;
label_2b7b20:
    // 0x2b7b20: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_2b7b24:
    if (ctx->pc == 0x2B7B24u) {
        ctx->pc = 0x2B7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B20u;
        // 0x2b7b24: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B28u;
        goto label_2b7b28;
    }
    ctx->pc = 0x2B7B20u;
    {
        const bool branch_taken_0x2b7b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B20u;
        // 0x2b7b24: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b20) {
            ctx->pc = 0x2B7BF4u;
            goto label_2b7bf4;
        }
    }
    ctx->pc = 0x2B7B28u;
label_2b7b28:
    // 0x2b7b28: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2b7b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b2c:
    // 0x2b7b2c: 0xc0a1b8c  jal         func_286E30
label_2b7b30:
    if (ctx->pc == 0x2B7B30u) {
        ctx->pc = 0x2B7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B2Cu;
        // 0x2b7b30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B34u;
        goto label_2b7b34;
    }
    ctx->pc = 0x2B7B2Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B34u);
    ctx->pc = 0x2B7B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B2Cu;
    // 0x2b7b30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x2B7B2Cu, 0x2B7B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B34u;
label_2b7b34:
    // 0x2b7b34: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2b7b38:
    if (ctx->pc == 0x2B7B38u) {
        ctx->pc = 0x2B7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B34u;
        // 0x2b7b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B3Cu;
        goto label_2b7b3c;
    }
    ctx->pc = 0x2B7B34u;
    {
        const bool branch_taken_0x2b7b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B34u;
        // 0x2b7b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b34) {
            ctx->pc = 0x2B7BF4u;
            goto label_2b7bf4;
        }
    }
    ctx->pc = 0x2B7B3Cu;
label_2b7b3c:
    // 0x2b7b3c: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x2b7b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b7b40:
    // 0x2b7b40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b7b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b44:
    // 0x2b7b44: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b7b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b48:
    // 0x2b7b48: 0xc0a2c52  jal         func_28B148
label_2b7b4c:
    if (ctx->pc == 0x2B7B4Cu) {
        ctx->pc = 0x2B7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B48u;
        // 0x2b7b4c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B50u;
        goto label_2b7b50;
    }
    ctx->pc = 0x2B7B48u;
    SET_GPR_U32(ctx, 31, 0x2B7B50u);
    ctx->pc = 0x2B7B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B48u;
    // 0x2b7b4c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B148u, 0x2B7B48u, 0x2B7B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B50u;
label_2b7b50:
    // 0x2b7b50: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_2b7b54:
    if (ctx->pc == 0x2B7B54u) {
        ctx->pc = 0x2B7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B50u;
        // 0x2b7b54: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B58u;
        goto label_2b7b58;
    }
    ctx->pc = 0x2B7B50u;
    {
        const bool branch_taken_0x2b7b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B50u;
        // 0x2b7b54: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b50) {
            ctx->pc = 0x2B7BF4u;
            goto label_2b7bf4;
        }
    }
    ctx->pc = 0x2B7B58u;
label_2b7b58:
    // 0x2b7b58: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x2b7b58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b7b5c:
    // 0x2b7b5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b60:
    // 0x2b7b60: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b7b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b64:
    // 0x2b7b64: 0xc0a2c52  jal         func_28B148
label_2b7b68:
    if (ctx->pc == 0x2B7B68u) {
        ctx->pc = 0x2B7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B64u;
        // 0x2b7b68: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B6Cu;
        goto label_2b7b6c;
    }
    ctx->pc = 0x2B7B64u;
    SET_GPR_U32(ctx, 31, 0x2B7B6Cu);
    ctx->pc = 0x2B7B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B64u;
    // 0x2b7b68: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B148u, 0x2B7B64u, 0x2B7B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B6Cu;
label_2b7b6c:
    // 0x2b7b6c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_2b7b70:
    if (ctx->pc == 0x2B7B70u) {
        ctx->pc = 0x2B7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B6Cu;
        // 0x2b7b70: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B74u;
        goto label_2b7b74;
    }
    ctx->pc = 0x2B7B6Cu;
    {
        const bool branch_taken_0x2b7b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B6Cu;
        // 0x2b7b70: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b6c) {
            ctx->pc = 0x2B7BF4u;
            goto label_2b7bf4;
        }
    }
    ctx->pc = 0x2B7B74u;
label_2b7b74:
    // 0x2b7b74: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2b7b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2b7b78:
    // 0x2b7b78: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x2b7b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2b7b7c:
    // 0x2b7b7c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2b7b7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b80:
    // 0x2b7b80: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x2b7b80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2b7b84:
    // 0x2b7b84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b7b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b88:
    // 0x2b7b88: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2b7b88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b8c:
    // 0x2b7b8c: 0xc0a26ea  jal         func_289BA8
label_2b7b90:
    if (ctx->pc == 0x2B7B90u) {
        ctx->pc = 0x2B7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B8Cu;
        // 0x2b7b90: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B94u;
        goto label_2b7b94;
    }
    ctx->pc = 0x2B7B8Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B94u);
    ctx->pc = 0x2B7B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B8Cu;
    // 0x2b7b90: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289BA8u, 0x2B7B8Cu, 0x2B7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B94u;
label_2b7b94:
    // 0x2b7b94: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2b7b98:
    if (ctx->pc == 0x2B7B98u) {
        ctx->pc = 0x2B7B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B94u;
        // 0x2b7b98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B9Cu;
        goto label_2b7b9c;
    }
    ctx->pc = 0x2B7B94u;
    {
        const bool branch_taken_0x2b7b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B94u;
        // 0x2b7b98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b94) {
            ctx->pc = 0x2B7BF4u;
            goto label_2b7bf4;
        }
    }
    ctx->pc = 0x2B7B9Cu;
label_2b7b9c:
    // 0x2b7b9c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2b7b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b7ba0:
    // 0x2b7ba0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2b7ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ba4:
    // 0x2b7ba4: 0xc0a18ea  jal         func_2863A8
label_2b7ba8:
    if (ctx->pc == 0x2B7BA8u) {
        ctx->pc = 0x2B7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BA4u;
        // 0x2b7ba8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7BACu;
        goto label_2b7bac;
    }
    ctx->pc = 0x2B7BA4u;
    SET_GPR_U32(ctx, 31, 0x2B7BACu);
    ctx->pc = 0x2B7BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7BA4u;
    // 0x2b7ba8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2863A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2863A8u, 0x2B7BA4u, 0x2B7BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7BACu;
label_2b7bac:
    // 0x2b7bac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2b7bb0:
    if (ctx->pc == 0x2B7BB0u) {
        ctx->pc = 0x2B7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BACu;
        // 0x2b7bb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7BB4u;
        goto label_2b7bb4;
    }
    ctx->pc = 0x2B7BACu;
    {
        const bool branch_taken_0x2b7bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BACu;
        // 0x2b7bb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7bac) {
            ctx->pc = 0x2B7BF4u;
            goto label_2b7bf4;
        }
    }
    ctx->pc = 0x2B7BB4u;
label_2b7bb4:
    // 0x2b7bb4: 0xc0a1c04  jal         func_287010
label_2b7bb8:
    if (ctx->pc == 0x2B7BB8u) {
        ctx->pc = 0x2B7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BB4u;
        // 0x2b7bb8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7BBCu;
        goto label_2b7bbc;
    }
    ctx->pc = 0x2B7BB4u;
    SET_GPR_U32(ctx, 31, 0x2B7BBCu);
    ctx->pc = 0x2B7BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7BB4u;
    // 0x2b7bb8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287010u, 0x2B7BB4u, 0x2B7BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7BBCu;
label_2b7bbc:
    // 0x2b7bbc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b7bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b7bc0:
    // 0x2b7bc0: 0x10000012  b           . + 4 + (0x12 << 2)
label_2b7bc4:
    if (ctx->pc == 0x2B7BC4u) {
        ctx->pc = 0x2B7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BC0u;
        // 0x2b7bc4: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7BC8u;
        goto label_2b7bc8;
    }
    ctx->pc = 0x2B7BC0u;
    {
        const bool branch_taken_0x2b7bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BC0u;
        // 0x2b7bc4: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7bc0) {
            ctx->pc = 0x2B7C0Cu;
            goto label_2b7c0c;
        }
    }
    ctx->pc = 0x2B7BC8u;
label_2b7bc8:
    // 0x2b7bc8: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2b7bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2b7bcc:
    // 0x2b7bcc: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x2b7bccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b7bd0:
    // 0x2b7bd0: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x2b7bd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2b7bd4:
    // 0x2b7bd4: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2b7bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2b7bd8:
    // 0x2b7bd8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2b7bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b7bdc:
    // 0x2b7bdc: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2b7bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2b7be0:
    // 0x2b7be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b7be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7be4:
    // 0x2b7be4: 0xc0a5648  jal         func_295920
label_2b7be8:
    if (ctx->pc == 0x2B7BE8u) {
        ctx->pc = 0x2B7BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BE4u;
        // 0x2b7be8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7BECu;
        goto label_2b7bec;
    }
    ctx->pc = 0x2B7BE4u;
    SET_GPR_U32(ctx, 31, 0x2B7BECu);
    ctx->pc = 0x2B7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7BE4u;
    // 0x2b7be8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B7BE4u, 0x2B7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7BECu;
label_2b7bec:
    // 0x2b7bec: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b7bf0:
    if (ctx->pc == 0x2B7BF0u) {
        ctx->pc = 0x2B7BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BECu;
        // 0x2b7bf0: 0x8fa400b8  lw          $a0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7BF4u;
        goto label_2b7bf4;
    }
    ctx->pc = 0x2B7BECu;
    {
        const bool branch_taken_0x2b7bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BECu;
        // 0x2b7bf0: 0x8fa400b8  lw          $a0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7bec) {
            ctx->pc = 0x2B7C10u;
            goto label_2b7c10;
        }
    }
    ctx->pc = 0x2B7BF4u;
label_2b7bf4:
    // 0x2b7bf4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2b7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b7bf8:
    // 0x2b7bf8: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2b7bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2b7bfc:
    // 0x2b7bfc: 0x24060803  addiu       $a2, $zero, 0x803
    ctx->pc = 0x2b7bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_2b7c00:
    // 0x2b7c00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b7c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7c04:
    // 0x2b7c04: 0xc0a5648  jal         func_295920
label_2b7c08:
    if (ctx->pc == 0x2B7C08u) {
        ctx->pc = 0x2B7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C04u;
        // 0x2b7c08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7C0Cu;
        goto label_2b7c0c;
    }
    ctx->pc = 0x2B7C04u;
    SET_GPR_U32(ctx, 31, 0x2B7C0Cu);
    ctx->pc = 0x2B7C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C04u;
    // 0x2b7c08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B7C04u, 0x2B7C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C0Cu;
label_2b7c0c:
    // 0x2b7c0c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2b7c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2b7c10:
    // 0x2b7c10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b7c14:
    if (ctx->pc == 0x2B7C14u) {
        ctx->pc = 0x2B7C18u;
        goto label_2b7c18;
    }
    ctx->pc = 0x2B7C10u;
    {
        const bool branch_taken_0x2b7c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7c10) {
            ctx->pc = 0x2B7C20u;
            goto label_2b7c20;
        }
    }
    ctx->pc = 0x2B7C18u;
label_2b7c18:
    // 0x2b7c18: 0xc0a070c  jal         func_281C30
label_2b7c1c:
    if (ctx->pc == 0x2B7C1Cu) {
        ctx->pc = 0x2B7C20u;
        goto label_2b7c20;
    }
    ctx->pc = 0x2B7C18u;
    SET_GPR_U32(ctx, 31, 0x2B7C20u);
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x2B7C18u, 0x2B7C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C20u;
label_2b7c20:
    // 0x2b7c20: 0xc0a1a36  jal         func_2868D8
label_2b7c24:
    if (ctx->pc == 0x2B7C24u) {
        ctx->pc = 0x2B7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C20u;
        // 0x2b7c24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7C28u;
        goto label_2b7c28;
    }
    ctx->pc = 0x2B7C20u;
    SET_GPR_U32(ctx, 31, 0x2B7C28u);
    ctx->pc = 0x2B7C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C20u;
    // 0x2b7c24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2B7C20u, 0x2B7C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C28u;
label_2b7c28:
    // 0x2b7c28: 0xc0a1a36  jal         func_2868D8
label_2b7c2c:
    if (ctx->pc == 0x2B7C2Cu) {
        ctx->pc = 0x2B7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C28u;
        // 0x2b7c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7C30u;
        goto label_2b7c30;
    }
    ctx->pc = 0x2B7C28u;
    SET_GPR_U32(ctx, 31, 0x2B7C30u);
    ctx->pc = 0x2B7C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C28u;
    // 0x2b7c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2B7C28u, 0x2B7C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C30u;
label_2b7c30:
    // 0x2b7c30: 0xc0a1a36  jal         func_2868D8
label_2b7c34:
    if (ctx->pc == 0x2B7C34u) {
        ctx->pc = 0x2B7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C30u;
        // 0x2b7c34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7C38u;
        goto label_2b7c38;
    }
    ctx->pc = 0x2B7C30u;
    SET_GPR_U32(ctx, 31, 0x2B7C38u);
    ctx->pc = 0x2B7C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C30u;
    // 0x2b7c34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2B7C30u, 0x2B7C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C38u;
label_2b7c38:
    // 0x2b7c38: 0xc0a1a36  jal         func_2868D8
label_2b7c3c:
    if (ctx->pc == 0x2B7C3Cu) {
        ctx->pc = 0x2B7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C38u;
        // 0x2b7c3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7C40u;
        goto label_2b7c40;
    }
    ctx->pc = 0x2B7C38u;
    SET_GPR_U32(ctx, 31, 0x2B7C40u);
    ctx->pc = 0x2B7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C38u;
    // 0x2b7c3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2B7C38u, 0x2B7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C40u;
label_2b7c40:
    // 0x2b7c40: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2b7c44:
    if (ctx->pc == 0x2B7C44u) {
        ctx->pc = 0x2B7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C40u;
        // 0x2b7c44: 0x8fa200bc  lw          $v0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7C48u;
        goto label_2b7c48;
    }
    ctx->pc = 0x2B7C40u;
    {
        const bool branch_taken_0x2b7c40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C40u;
        // 0x2b7c44: 0x8fa200bc  lw          $v0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c40) {
            ctx->pc = 0x2B7C54u;
            goto label_2b7c54;
        }
    }
    ctx->pc = 0x2B7C48u;
label_2b7c48:
    // 0x2b7c48: 0xc0a1abe  jal         func_286AF8
label_2b7c4c:
    if (ctx->pc == 0x2B7C4Cu) {
        ctx->pc = 0x2B7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C48u;
        // 0x2b7c4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7C50u;
        goto label_2b7c50;
    }
    ctx->pc = 0x2B7C48u;
    SET_GPR_U32(ctx, 31, 0x2B7C50u);
    ctx->pc = 0x2B7C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7C48u;
    // 0x2b7c4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286AF8u, 0x2B7C48u, 0x2B7C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C50u;
label_2b7c50:
    // 0x2b7c50: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2b7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2b7c54:
    // 0x2b7c54: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x2b7c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_2b7c58:
    // 0x2b7c58: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x2b7c58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2b7c5c:
    // 0x2b7c5c: 0xdfb70130  ld          $s7, 0x130($sp)
    ctx->pc = 0x2b7c5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_2b7c60:
    // 0x2b7c60: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x2b7c60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2b7c64:
    // 0x2b7c64: 0xdfb50110  ld          $s5, 0x110($sp)
    ctx->pc = 0x2b7c64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2b7c68:
    // 0x2b7c68: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x2b7c68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2b7c6c:
    // 0x2b7c6c: 0xdfb300f0  ld          $s3, 0xF0($sp)
    ctx->pc = 0x2b7c6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2b7c70:
    // 0x2b7c70: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x2b7c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2b7c74:
    // 0x2b7c74: 0xdfb100d0  ld          $s1, 0xD0($sp)
    ctx->pc = 0x2b7c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2b7c78:
    // 0x2b7c78: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2b7c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2b7c7c:
    // 0x2b7c7c: 0x3e00008  jr          $ra
label_2b7c80:
    if (ctx->pc == 0x2B7C80u) {
        ctx->pc = 0x2B7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C7Cu;
        // 0x2b7c80: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7C84u;
        goto label_2b7c84;
    }
    ctx->pc = 0x2B7C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C7Cu;
        // 0x2b7c80: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7C84u;
label_2b7c84:
    // 0x2b7c84: 0x0  nop
    ctx->pc = 0x2b7c84u;
    // NOP
label_2b7c88:
    // 0x2b7c88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b7c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2b7c8c:
    // 0x2b7c8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b7c90:
    // 0x2b7c90: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2b7c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_2b7c94:
    // 0x2b7c94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b7c98:
    // 0x2b7c98: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2b7c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_2b7c9c:
    // 0x2b7c9c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2b7c9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ca0:
    // 0x2b7ca0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2b7ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_2b7ca4:
    // 0x2b7ca4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2b7ca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ca8:
    // 0x2b7ca8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2b7ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_2b7cac:
    // 0x2b7cac: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2b7cacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2b7cb0:
    // 0x2b7cb0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2b7cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_2b7cb4:
    // 0x2b7cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7cb8:
    // 0x2b7cb8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2b7cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2b7cbc:
    // 0x2b7cbc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b7cbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7cc0:
    // 0x2b7cc0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b7cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2b7cc4:
    // 0x2b7cc4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2b7cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2b7cc8:
    // 0x2b7cc8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2b7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_2b7ccc:
    // 0x2b7ccc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2b7cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2b7cd0:
    // 0x2b7cd0: 0xc0a099e  jal         func_282678
label_2b7cd4:
    if (ctx->pc == 0x2B7CD4u) {
        ctx->pc = 0x2B7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CD0u;
        // 0x2b7cd4: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7CD8u;
        goto label_2b7cd8;
    }
    ctx->pc = 0x2B7CD0u;
    SET_GPR_U32(ctx, 31, 0x2B7CD8u);
    ctx->pc = 0x2B7CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7CD0u;
    // 0x2b7cd4: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282678u, 0x2B7CD0u, 0x2B7CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CD8u;
label_2b7cd8:
    // 0x2b7cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7cdc:
    // 0x2b7cdc: 0xc0aa39c  jal         func_2A8E70
label_2b7ce0:
    if (ctx->pc == 0x2B7CE0u) {
        ctx->pc = 0x2B7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CDCu;
        // 0x2b7ce0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7CE4u;
        goto label_2b7ce4;
    }
    ctx->pc = 0x2B7CDCu;
    SET_GPR_U32(ctx, 31, 0x2B7CE4u);
    ctx->pc = 0x2B7CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7CDCu;
    // 0x2b7ce0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E70u, 0x2B7CDCu, 0x2B7CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CE4u;
label_2b7ce4:
    // 0x2b7ce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b7ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ce8:
    // 0x2b7ce8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2b7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2b7cec:
    // 0x2b7cec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2b7cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b7cf0:
    // 0x2b7cf0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b7cf4:
    if (ctx->pc == 0x2B7CF4u) {
        ctx->pc = 0x2B7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CF0u;
        // 0x2b7cf4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7CF8u;
        goto label_2b7cf8;
    }
    ctx->pc = 0x2B7CF0u;
    {
        const bool branch_taken_0x2b7cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CF0u;
        // 0x2b7cf4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cf0) {
            ctx->pc = 0x2B7D04u;
            goto label_2b7d04;
        }
    }
    ctx->pc = 0x2B7CF8u;
label_2b7cf8:
    // 0x2b7cf8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b7cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b7cfc:
    // 0x2b7cfc: 0x1000000a  b           . + 4 + (0xA << 2)
label_2b7d00:
    if (ctx->pc == 0x2B7D00u) {
        ctx->pc = 0x2B7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CFCu;
        // 0x2b7d00: 0x2406006f  addiu       $a2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7D04u;
        goto label_2b7d04;
    }
    ctx->pc = 0x2B7CFCu;
    {
        const bool branch_taken_0x2b7cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CFCu;
        // 0x2b7d00: 0x2406006f  addiu       $a2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cfc) {
            ctx->pc = 0x2B7D28u;
            goto label_2b7d28;
        }
    }
    ctx->pc = 0x2B7D04u;
label_2b7d04:
    // 0x2b7d04: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x2b7d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2b7d08:
    // 0x2b7d08: 0xc0a8bf6  jal         func_2A2FD8
label_2b7d0c:
    if (ctx->pc == 0x2B7D0Cu) {
        ctx->pc = 0x2B7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D08u;
        // 0x2b7d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7D10u;
        goto label_2b7d10;
    }
    ctx->pc = 0x2B7D08u;
    SET_GPR_U32(ctx, 31, 0x2B7D10u);
    ctx->pc = 0x2B7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D08u;
    // 0x2b7d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2B7D08u, 0x2B7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D10u;
label_2b7d10:
    // 0x2b7d10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b7d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d14:
    // 0x2b7d14: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
label_2b7d18:
    if (ctx->pc == 0x2B7D18u) {
        ctx->pc = 0x2B7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D14u;
        // 0x2b7d18: 0xafb10020  sw          $s1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7D1Cu;
        goto label_2b7d1c;
    }
    ctx->pc = 0x2B7D14u;
    {
        const bool branch_taken_0x2b7d14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7d14) {
            ctx->pc = 0x2B7D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7D14u;
            // 0x2b7d18: 0xafb10020  sw          $s1, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7D3Cu;
            goto label_2b7d3c;
        }
    }
    ctx->pc = 0x2B7D1Cu;
label_2b7d1c:
    // 0x2b7d1c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b7d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b7d20:
    // 0x2b7d20: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2b7d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2b7d24:
    // 0x2b7d24: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b7d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2b7d28:
    // 0x2b7d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b7d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d2c:
    // 0x2b7d2c: 0xc0a5648  jal         func_295920
label_2b7d30:
    if (ctx->pc == 0x2B7D30u) {
        ctx->pc = 0x2B7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D2Cu;
        // 0x2b7d30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7D34u;
        goto label_2b7d34;
    }
    ctx->pc = 0x2B7D2Cu;
    SET_GPR_U32(ctx, 31, 0x2B7D34u);
    ctx->pc = 0x2B7D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D2Cu;
    // 0x2b7d30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B7D2Cu, 0x2B7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D34u;
label_2b7d34:
    // 0x2b7d34: 0x10000015  b           . + 4 + (0x15 << 2)
label_2b7d38:
    if (ctx->pc == 0x2B7D38u) {
        ctx->pc = 0x2B7D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D34u;
        // 0x2b7d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7D3Cu;
        goto label_2b7d3c;
    }
    ctx->pc = 0x2B7D34u;
    {
        const bool branch_taken_0x2b7d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D34u;
        // 0x2b7d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d34) {
            ctx->pc = 0x2B7D8Cu;
            goto label_2b7d8c;
        }
    }
    ctx->pc = 0x2B7D3Cu;
label_2b7d3c:
    // 0x2b7d3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d40:
    // 0x2b7d40: 0xc0a099e  jal         func_282678
label_2b7d44:
    if (ctx->pc == 0x2B7D44u) {
        ctx->pc = 0x2B7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D40u;
        // 0x2b7d44: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7D48u;
        goto label_2b7d48;
    }
    ctx->pc = 0x2B7D40u;
    SET_GPR_U32(ctx, 31, 0x2B7D48u);
    ctx->pc = 0x2B7D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D40u;
    // 0x2b7d44: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282678u, 0x2B7D40u, 0x2B7D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D48u;
label_2b7d48:
    // 0x2b7d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d4c:
    // 0x2b7d4c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b7d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d50:
    // 0x2b7d50: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2b7d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d54:
    // 0x2b7d54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b7d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d58:
    // 0x2b7d58: 0xc0aa480  jal         func_2A9200
label_2b7d5c:
    if (ctx->pc == 0x2B7D5Cu) {
        ctx->pc = 0x2B7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D58u;
        // 0x2b7d5c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7D60u;
        goto label_2b7d60;
    }
    ctx->pc = 0x2B7D58u;
    SET_GPR_U32(ctx, 31, 0x2B7D60u);
    ctx->pc = 0x2B7D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D58u;
    // 0x2b7d5c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9200u, 0x2B7D58u, 0x2B7D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D60u;
label_2b7d60:
    // 0x2b7d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d64:
    // 0x2b7d64: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
label_2b7d68:
    if (ctx->pc == 0x2B7D68u) {
        ctx->pc = 0x2B7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D64u;
        // 0x2b7d68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7D6Cu;
        goto label_2b7d6c;
    }
    ctx->pc = 0x2B7D64u;
    {
        const bool branch_taken_0x2b7d64 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D64u;
        // 0x2b7d68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d64) {
            ctx->pc = 0x2B7D74u;
            goto label_2b7d74;
        }
    }
    ctx->pc = 0x2B7D6Cu;
label_2b7d6c:
    // 0x2b7d6c: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x2b7d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_2b7d70:
    // 0x2b7d70: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2b7d70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7d74:
    // 0x2b7d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b7d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d78:
    // 0x2b7d78: 0xc049cb6  jal         func_1272D8
label_2b7d7c:
    if (ctx->pc == 0x2B7D7Cu) {
        ctx->pc = 0x2B7D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D78u;
        // 0x2b7d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7D80u;
        goto label_2b7d80;
    }
    ctx->pc = 0x2B7D78u;
    SET_GPR_U32(ctx, 31, 0x2B7D80u);
    ctx->pc = 0x2B7D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D78u;
    // 0x2b7d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2B7D78u, 0x2B7D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D80u;
label_2b7d80:
    // 0x2b7d80: 0xc0a8c0a  jal         func_2A3028
label_2b7d84:
    if (ctx->pc == 0x2B7D84u) {
        ctx->pc = 0x2B7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D80u;
        // 0x2b7d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7D88u;
        goto label_2b7d88;
    }
    ctx->pc = 0x2B7D80u;
    SET_GPR_U32(ctx, 31, 0x2B7D88u);
    ctx->pc = 0x2B7D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D80u;
    // 0x2b7d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2B7D80u, 0x2B7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D88u;
label_2b7d88:
    // 0x2b7d88: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2b7d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d8c:
    // 0x2b7d8c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b7d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b7d90:
    // 0x2b7d90: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2b7d90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b7d94:
    // 0x2b7d94: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2b7d94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b7d98:
    // 0x2b7d98: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2b7d98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b7d9c:
    // 0x2b7d9c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2b7d9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b7da0:
    // 0x2b7da0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2b7da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b7da4:
    // 0x2b7da4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2b7da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b7da8:
    // 0x2b7da8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2b7da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b7dac:
    // 0x2b7dac: 0x3e00008  jr          $ra
label_2b7db0:
    if (ctx->pc == 0x2B7DB0u) {
        ctx->pc = 0x2B7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DACu;
        // 0x2b7db0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7DB4u;
        goto label_2b7db4;
    }
    ctx->pc = 0x2B7DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DACu;
        // 0x2b7db0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7DB4u;
label_2b7db4:
    // 0x2b7db4: 0x0  nop
    ctx->pc = 0x2b7db4u;
    // NOP
label_2b7db8:
    // 0x2b7db8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b7db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2b7dbc:
    // 0x2b7dbc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b7dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2b7dc0:
    // 0x2b7dc0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b7dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2b7dc4:
    // 0x2b7dc4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2b7dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2b7dc8:
    // 0x2b7dc8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b7dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2b7dcc:
    // 0x2b7dcc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b7dccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7dd0:
    // 0x2b7dd0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b7dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2b7dd4:
    // 0x2b7dd4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2b7dd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b7dd8:
    // 0x2b7dd8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b7dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2b7ddc:
    // 0x2b7ddc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2b7ddcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b7de0:
    // 0x2b7de0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b7de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2b7de4:
    // 0x2b7de4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b7de4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7de8:
    // 0x2b7de8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b7de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2b7dec:
    // 0x2b7dec: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2b7decu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b7df0:
    // 0x2b7df0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b7df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b7df4:
    // 0x2b7df4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2b7df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b7df8:
    // 0x2b7df8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b7df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2b7dfc:
    // 0x2b7dfc: 0xc0aa39c  jal         func_2A8E70
label_2b7e00:
    if (ctx->pc == 0x2B7E00u) {
        ctx->pc = 0x2B7E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DFCu;
        // 0x2b7e00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E04u;
        goto label_2b7e04;
    }
    ctx->pc = 0x2B7DFCu;
    SET_GPR_U32(ctx, 31, 0x2B7E04u);
    ctx->pc = 0x2B7E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7DFCu;
    // 0x2b7e00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E70u, 0x2B7DFCu, 0x2B7E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E04u;
label_2b7e04:
    // 0x2b7e04: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_2b7e08:
    if (ctx->pc == 0x2B7E08u) {
        ctx->pc = 0x2B7E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E04u;
        // 0x2b7e08: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E0Cu;
        goto label_2b7e0c;
    }
    ctx->pc = 0x2B7E04u;
    {
        const bool branch_taken_0x2b7e04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E04u;
        // 0x2b7e08: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e04) {
            ctx->pc = 0x2B7E28u;
            goto label_2b7e28;
        }
    }
    ctx->pc = 0x2B7E0Cu;
label_2b7e0c:
    // 0x2b7e0c: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x2b7e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_2b7e10:
    // 0x2b7e10: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x2b7e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_2b7e14:
    // 0x2b7e14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b7e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7e18:
    // 0x2b7e18: 0xc0a5648  jal         func_295920
label_2b7e1c:
    if (ctx->pc == 0x2B7E1Cu) {
        ctx->pc = 0x2B7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E18u;
        // 0x2b7e1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E20u;
        goto label_2b7e20;
    }
    ctx->pc = 0x2B7E18u;
    SET_GPR_U32(ctx, 31, 0x2B7E20u);
    ctx->pc = 0x2B7E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E18u;
    // 0x2b7e1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B7E18u, 0x2B7E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E20u;
label_2b7e20:
    // 0x2b7e20: 0x10000034  b           . + 4 + (0x34 << 2)
label_2b7e24:
    if (ctx->pc == 0x2B7E24u) {
        ctx->pc = 0x2B7E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E20u;
        // 0x2b7e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E28u;
        goto label_2b7e28;
    }
    ctx->pc = 0x2B7E20u;
    {
        const bool branch_taken_0x2b7e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E20u;
        // 0x2b7e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e20) {
            ctx->pc = 0x2B7EF4u;
            goto label_2b7ef4;
        }
    }
    ctx->pc = 0x2B7E28u;
label_2b7e28:
    // 0x2b7e28: 0xc0a8bf6  jal         func_2A2FD8
label_2b7e2c:
    if (ctx->pc == 0x2B7E2Cu) {
        ctx->pc = 0x2B7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E28u;
        // 0x2b7e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E30u;
        goto label_2b7e30;
    }
    ctx->pc = 0x2B7E28u;
    SET_GPR_U32(ctx, 31, 0x2B7E30u);
    ctx->pc = 0x2B7E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E28u;
    // 0x2b7e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2B7E28u, 0x2B7E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E30u;
label_2b7e30:
    // 0x2b7e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7e34:
    // 0x2b7e34: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_2b7e38:
    if (ctx->pc == 0x2B7E38u) {
        ctx->pc = 0x2B7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E34u;
        // 0x2b7e38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E3Cu;
        goto label_2b7e3c;
    }
    ctx->pc = 0x2B7E34u;
    {
        const bool branch_taken_0x2b7e34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E34u;
        // 0x2b7e38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e34) {
            ctx->pc = 0x2B7E4Cu;
            goto label_2b7e4c;
        }
    }
    ctx->pc = 0x2B7E3Cu;
label_2b7e3c:
    // 0x2b7e3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b7e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b7e40:
    // 0x2b7e40: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x2b7e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_2b7e44:
    // 0x2b7e44: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2b7e48:
    if (ctx->pc == 0x2B7E48u) {
        ctx->pc = 0x2B7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E44u;
        // 0x2b7e48: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E4Cu;
        goto label_2b7e4c;
    }
    ctx->pc = 0x2B7E44u;
    {
        const bool branch_taken_0x2b7e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E44u;
        // 0x2b7e48: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e44) {
            ctx->pc = 0x2B7EB0u;
            goto label_2b7eb0;
        }
    }
    ctx->pc = 0x2B7E4Cu;
label_2b7e4c:
    // 0x2b7e4c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b7e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b7e50:
    // 0x2b7e50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b7e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b7e54:
    // 0x2b7e54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b7e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b7e58:
    // 0x2b7e58: 0xc0aa4a6  jal         func_2A9298
label_2b7e5c:
    if (ctx->pc == 0x2B7E5Cu) {
        ctx->pc = 0x2B7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E58u;
        // 0x2b7e5c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E60u;
        goto label_2b7e60;
    }
    ctx->pc = 0x2B7E58u;
    SET_GPR_U32(ctx, 31, 0x2B7E60u);
    ctx->pc = 0x2B7E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E58u;
    // 0x2b7e5c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9298u, 0x2B7E58u, 0x2B7E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E60u;
label_2b7e60:
    // 0x2b7e60: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_2b7e64:
    if (ctx->pc == 0x2B7E64u) {
        ctx->pc = 0x2B7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E60u;
        // 0x2b7e64: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E68u;
        goto label_2b7e68;
    }
    ctx->pc = 0x2B7E60u;
    {
        const bool branch_taken_0x2b7e60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E60u;
        // 0x2b7e64: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e60) {
            ctx->pc = 0x2B7EC8u;
            goto label_2b7ec8;
        }
    }
    ctx->pc = 0x2B7E68u;
label_2b7e68:
    // 0x2b7e68: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2b7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_2b7e6c:
    // 0x2b7e6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b7e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7e70:
    // 0x2b7e70: 0xc0a09a6  jal         func_282698
label_2b7e74:
    if (ctx->pc == 0x2B7E74u) {
        ctx->pc = 0x2B7E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E70u;
        // 0x2b7e74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E78u;
        goto label_2b7e78;
    }
    ctx->pc = 0x2B7E70u;
    SET_GPR_U32(ctx, 31, 0x2B7E78u);
    ctx->pc = 0x2B7E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E70u;
    // 0x2b7e74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282698u, 0x2B7E70u, 0x2B7E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E78u;
label_2b7e78:
    // 0x2b7e78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b7e78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7e7c:
    // 0x2b7e7c: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
label_2b7e80:
    if (ctx->pc == 0x2B7E80u) {
        ctx->pc = 0x2B7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E7Cu;
        // 0x2b7e80: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E84u;
        goto label_2b7e84;
    }
    ctx->pc = 0x2B7E7Cu;
    {
        const bool branch_taken_0x2b7e7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E7Cu;
        // 0x2b7e80: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e7c) {
            ctx->pc = 0x2B7EDCu;
            goto label_2b7edc;
        }
    }
    ctx->pc = 0x2B7E84u;
label_2b7e84:
    // 0x2b7e84: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2b7e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b7e88:
    // 0x2b7e88: 0x14550007  bne         $v0, $s5, . + 4 + (0x7 << 2)
label_2b7e8c:
    if (ctx->pc == 0x2B7E8Cu) {
        ctx->pc = 0x2B7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E88u;
        // 0x2b7e8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E90u;
        goto label_2b7e90;
    }
    ctx->pc = 0x2B7E88u;
    {
        const bool branch_taken_0x2b7e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2B7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E88u;
        // 0x2b7e8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e88) {
            ctx->pc = 0x2B7EA8u;
            goto label_2b7ea8;
        }
    }
    ctx->pc = 0x2B7E90u;
label_2b7e90:
    // 0x2b7e90: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2b7e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2b7e94:
    // 0x2b7e94: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b7e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b7e98:
    // 0x2b7e98: 0xc049c22  jal         func_127088
label_2b7e9c:
    if (ctx->pc == 0x2B7E9Cu) {
        ctx->pc = 0x2B7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E98u;
        // 0x2b7e9c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7EA0u;
        goto label_2b7ea0;
    }
    ctx->pc = 0x2B7E98u;
    SET_GPR_U32(ctx, 31, 0x2B7EA0u);
    ctx->pc = 0x2B7E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E98u;
    // 0x2b7e9c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2B7E98u, 0x2B7EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7EA0u;
label_2b7ea0:
    // 0x2b7ea0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b7ea4:
    if (ctx->pc == 0x2B7EA4u) {
        ctx->pc = 0x2B7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EA0u;
        // 0x2b7ea4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7EA8u;
        goto label_2b7ea8;
    }
    ctx->pc = 0x2B7EA0u;
    {
        const bool branch_taken_0x2b7ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EA0u;
        // 0x2b7ea4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ea0) {
            ctx->pc = 0x2B7EC4u;
            goto label_2b7ec4;
        }
    }
    ctx->pc = 0x2B7EA8u;
label_2b7ea8:
    // 0x2b7ea8: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x2b7ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_2b7eac:
    // 0x2b7eac: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x2b7eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_2b7eb0:
    // 0x2b7eb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b7eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7eb4:
    // 0x2b7eb4: 0xc0a5648  jal         func_295920
label_2b7eb8:
    if (ctx->pc == 0x2B7EB8u) {
        ctx->pc = 0x2B7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EB4u;
        // 0x2b7eb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7EBCu;
        goto label_2b7ebc;
    }
    ctx->pc = 0x2B7EB4u;
    SET_GPR_U32(ctx, 31, 0x2B7EBCu);
    ctx->pc = 0x2B7EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7EB4u;
    // 0x2b7eb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B7EB4u, 0x2B7EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7EBCu;
label_2b7ebc:
    // 0x2b7ebc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b7ec0:
    if (ctx->pc == 0x2B7EC0u) {
        ctx->pc = 0x2B7EC4u;
        goto label_2b7ec4;
    }
    ctx->pc = 0x2B7EBCu;
    {
        const bool branch_taken_0x2b7ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7ebc) {
            ctx->pc = 0x2B7EC8u;
            goto label_2b7ec8;
        }
    }
    ctx->pc = 0x2B7EC4u;
label_2b7ec4:
    // 0x2b7ec4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2b7ec4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7ec8:
    // 0x2b7ec8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_2b7ecc:
    if (ctx->pc == 0x2B7ECCu) {
        ctx->pc = 0x2B7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EC8u;
        // 0x2b7ecc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7ED0u;
        goto label_2b7ed0;
    }
    ctx->pc = 0x2B7EC8u;
    {
        const bool branch_taken_0x2b7ec8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EC8u;
        // 0x2b7ecc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ec8) {
            ctx->pc = 0x2B7EDCu;
            goto label_2b7edc;
        }
    }
    ctx->pc = 0x2B7ED0u;
label_2b7ed0:
    // 0x2b7ed0: 0xc0a070c  jal         func_281C30
label_2b7ed4:
    if (ctx->pc == 0x2B7ED4u) {
        ctx->pc = 0x2B7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7ED0u;
        // 0x2b7ed4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7ED8u;
        goto label_2b7ed8;
    }
    ctx->pc = 0x2B7ED0u;
    SET_GPR_U32(ctx, 31, 0x2B7ED8u);
    ctx->pc = 0x2B7ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7ED0u;
    // 0x2b7ed4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x2B7ED0u, 0x2B7ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7ED8u;
label_2b7ed8:
    // 0x2b7ed8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b7ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b7edc:
    // 0x2b7edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ee0:
    // 0x2b7ee0: 0xc049cb6  jal         func_1272D8
label_2b7ee4:
    if (ctx->pc == 0x2B7EE4u) {
        ctx->pc = 0x2B7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EE0u;
        // 0x2b7ee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7EE8u;
        goto label_2b7ee8;
    }
    ctx->pc = 0x2B7EE0u;
    SET_GPR_U32(ctx, 31, 0x2B7EE8u);
    ctx->pc = 0x2B7EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7EE0u;
    // 0x2b7ee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2B7EE0u, 0x2B7EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7EE8u;
label_2b7ee8:
    // 0x2b7ee8: 0xc0a8c0a  jal         func_2A3028
label_2b7eec:
    if (ctx->pc == 0x2B7EECu) {
        ctx->pc = 0x2B7EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EE8u;
        // 0x2b7eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7EF0u;
        goto label_2b7ef0;
    }
    ctx->pc = 0x2B7EE8u;
    SET_GPR_U32(ctx, 31, 0x2B7EF0u);
    ctx->pc = 0x2B7EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7EE8u;
    // 0x2b7eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2B7EE8u, 0x2B7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7EF0u;
label_2b7ef0:
    // 0x2b7ef0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2b7ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ef4:
    // 0x2b7ef4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b7ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b7ef8:
    // 0x2b7ef8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b7ef8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b7efc:
    // 0x2b7efc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b7efcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b7f00:
    // 0x2b7f00: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b7f00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b7f04:
    // 0x2b7f04: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b7f04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b7f08:
    // 0x2b7f08: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b7f08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b7f0c:
    // 0x2b7f0c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b7f0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b7f10:
    // 0x2b7f10: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b7f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b7f14:
    // 0x2b7f14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b7f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b7f18:
    // 0x2b7f18: 0x3e00008  jr          $ra
label_2b7f1c:
    if (ctx->pc == 0x2B7F1Cu) {
        ctx->pc = 0x2B7F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F18u;
        // 0x2b7f1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F20u;
        goto label_2b7f20;
    }
    ctx->pc = 0x2B7F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F18u;
        // 0x2b7f1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7F20u;
label_2b7f20:
    // 0x2b7f20: 0xac8500bc  sw          $a1, 0xBC($a0)
    ctx->pc = 0x2b7f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 5));
label_2b7f24:
    // 0x2b7f24: 0x3e00008  jr          $ra
label_2b7f28:
    if (ctx->pc == 0x2B7F28u) {
        ctx->pc = 0x2B7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F24u;
        // 0x2b7f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F2Cu;
        goto label_2b7f2c;
    }
    ctx->pc = 0x2B7F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F24u;
        // 0x2b7f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7F2Cu;
label_2b7f2c:
    // 0x2b7f2c: 0x0  nop
    ctx->pc = 0x2b7f2cu;
    // NOP
label_2b7f30:
    // 0x2b7f30: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2b7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2b7f34:
    // 0x2b7f34: 0x3c036745  lui         $v1, 0x6745
    ctx->pc = 0x2b7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26437 << 16));
label_2b7f38:
    // 0x2b7f38: 0x34632301  ori         $v1, $v1, 0x2301
    ctx->pc = 0x2b7f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8961);
label_2b7f3c:
    // 0x2b7f3c: 0x24428670  addiu       $v0, $v0, -0x7990
    ctx->pc = 0x2b7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
label_2b7f40:
    // 0x2b7f40: 0x3405efcd  ori         $a1, $zero, 0xEFCD
    ctx->pc = 0x2b7f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61389);
label_2b7f44:
    // 0x2b7f44: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2b7f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2b7f48:
    // 0x2b7f48: 0x34a5ab89  ori         $a1, $a1, 0xAB89
    ctx->pc = 0x2b7f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43913);
label_2b7f4c:
    // 0x2b7f4c: 0x340698ba  ori         $a2, $zero, 0x98BA
    ctx->pc = 0x2b7f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39098);
label_2b7f50:
    // 0x2b7f50: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2b7f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_2b7f54:
    // 0x2b7f54: 0x34c6dcfe  ori         $a2, $a2, 0xDCFE
    ctx->pc = 0x2b7f54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)56574);
label_2b7f58:
    // 0x2b7f58: 0x3c071032  lui         $a3, 0x1032
    ctx->pc = 0x2b7f58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4146 << 16));
label_2b7f5c:
    // 0x2b7f5c: 0x34e75476  ori         $a3, $a3, 0x5476
    ctx->pc = 0x2b7f5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21622);
label_2b7f60:
    // 0x2b7f60: 0x3408c3d2  ori         $t0, $zero, 0xC3D2
    ctx->pc = 0x2b7f60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50130);
label_2b7f64:
    // 0x2b7f64: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2b7f64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
label_2b7f68:
    // 0x2b7f68: 0x3508e1f0  ori         $t0, $t0, 0xE1F0
    ctx->pc = 0x2b7f68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57840);
label_2b7f6c:
    // 0x2b7f6c: 0xac8200bc  sw          $v0, 0xBC($a0)
    ctx->pc = 0x2b7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 2));
label_2b7f70:
    // 0x2b7f70: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2b7f70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_2b7f74:
    // 0x2b7f74: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x2b7f74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
label_2b7f78:
    // 0x2b7f78: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x2b7f78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
label_2b7f7c:
    // 0x2b7f7c: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x2b7f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
label_2b7f80:
    // 0x2b7f80: 0xfc880020  sd          $t0, 0x20($a0)
    ctx->pc = 0x2b7f80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 8));
label_2b7f84:
    // 0x2b7f84: 0xfc800028  sd          $zero, 0x28($a0)
    ctx->pc = 0x2b7f84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 0));
label_2b7f88:
    // 0x2b7f88: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x2b7f88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
label_2b7f8c:
    // 0x2b7f8c: 0x3e00008  jr          $ra
label_2b7f90:
    if (ctx->pc == 0x2B7F90u) {
        ctx->pc = 0x2B7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F8Cu;
        // 0x2b7f90: 0xac8000b8  sw          $zero, 0xB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F94u;
        goto label_2b7f94;
    }
    ctx->pc = 0x2B7F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F8Cu;
        // 0x2b7f90: 0xac8000b8  sw          $zero, 0xB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7F94u;
label_2b7f94:
    // 0x2b7f94: 0x0  nop
    ctx->pc = 0x2b7f94u;
    // NOP
label_2b7f98:
    // 0x2b7f98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b7f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2b7f9c:
    // 0x2b7f9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b7f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b7fa0:
    // 0x2b7fa0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b7fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b7fa4:
    // 0x2b7fa4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b7fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b7fa8:
    // 0x2b7fa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b7fac:
    // 0x2b7fac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b7facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b7fb0:
    // 0x2b7fb0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b7fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2b7fb4:
    // 0x2b7fb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b7fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b7fb8:
    // 0x2b7fb8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b7fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2b7fbc:
    // 0x2b7fbc: 0x1220015f  beqz        $s1, . + 4 + (0x15F << 2)
label_2b7fc0:
    if (ctx->pc == 0x2B7FC0u) {
        ctx->pc = 0x2B7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FBCu;
        // 0x2b7fc0: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FC4u;
        goto label_2b7fc4;
    }
    ctx->pc = 0x2B7FBCu;
    {
        const bool branch_taken_0x2b7fbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FBCu;
        // 0x2b7fc0: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7fbc) {
            ctx->pc = 0x2B853Cu;
            goto label_2b853c;
        }
    }
    ctx->pc = 0x2B7FC4u;
label_2b7fc4:
    // 0x2b7fc4: 0xde420028  ld          $v0, 0x28($s2)
    ctx->pc = 0x2b7fc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_2b7fc8:
    // 0x2b7fc8: 0x1118f8  dsll        $v1, $s1, 3
    ctx->pc = 0x2b7fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << 3);
label_2b7fcc:
    // 0x2b7fcc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2b7fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_2b7fd0:
    // 0x2b7fd0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2b7fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2b7fd4:
    // 0x2b7fd4: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x2b7fd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_2b7fd8:
    // 0x2b7fd8: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x2b7fd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2b7fdc:
    // 0x2b7fdc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b7fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b7fe0:
    // 0x2b7fe0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b7fe4:
    if (ctx->pc == 0x2B7FE4u) {
        ctx->pc = 0x2B7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FE0u;
        // 0x2b7fe4: 0xde420030  ld          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FE8u;
        goto label_2b7fe8;
    }
    ctx->pc = 0x2B7FE0u;
    {
        const bool branch_taken_0x2b7fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FE0u;
        // 0x2b7fe4: 0xde420030  ld          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7fe0) {
            ctx->pc = 0x2B7FF4u;
            goto label_2b7ff4;
        }
    }
    ctx->pc = 0x2B7FE8u;
label_2b7fe8:
    // 0x2b7fe8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2b7fe8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_2b7fec:
    // 0x2b7fec: 0xfe420030  sd          $v0, 0x30($s2)
    ctx->pc = 0x2b7fecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
label_2b7ff0:
    // 0x2b7ff0: 0xde420030  ld          $v0, 0x30($s2)
    ctx->pc = 0x2b7ff0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_2b7ff4:
    // 0x2b7ff4: 0x111f7a  dsrl        $v1, $s1, 29
    ctx->pc = 0x2b7ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) >> 29);
label_2b7ff8:
    // 0x2b7ff8: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x2b7ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2b7ffc:
    // 0x2b7ffc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2b7ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_2b8000:
    // 0x2b8000: 0xfe450028  sd          $a1, 0x28($s2)
    ctx->pc = 0x2b8000u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 5));
label_2b8004:
    // 0x2b8004: 0x108000d0  beqz        $a0, . + 4 + (0xD0 << 2)
label_2b8008:
    if (ctx->pc == 0x2B8008u) {
        ctx->pc = 0x2B8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8004u;
        // 0x2b8008: 0xfe420030  sd          $v0, 0x30($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B800Cu;
        goto label_2b800c;
    }
    ctx->pc = 0x2B8004u;
    {
        const bool branch_taken_0x2b8004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8004u;
        // 0x2b8008: 0xfe420030  sd          $v0, 0x30($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8004) {
            ctx->pc = 0x2B8348u;
            goto label_2b8348;
        }
    }
    ctx->pc = 0x2B800Cu;
label_2b800c:
    // 0x2b800c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b800cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8010:
    // 0x2b8010: 0x26540038  addiu       $s4, $s2, 0x38
    ctx->pc = 0x2b8010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_2b8014:
    // 0x2b8014: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x2b8014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_2b8018:
    // 0x2b8018: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2b8018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b801c:
    // 0x2b801c: 0x44883  sra         $t1, $a0, 2
    ctx->pc = 0x2b801cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 2));
label_2b8020:
    // 0x2b8020: 0x2c420040  sltiu       $v0, $v0, 0x40
    ctx->pc = 0x2b8020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_2b8024:
    // 0x2b8024: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_2b8028:
    if (ctx->pc == 0x2B8028u) {
        ctx->pc = 0x2B8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8024u;
        // 0x2b8028: 0x30870003  andi        $a3, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B802Cu;
        goto label_2b802c;
    }
    ctx->pc = 0x2B8024u;
    {
        const bool branch_taken_0x2b8024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8024u;
        // 0x2b8028: 0x30870003  andi        $a3, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8024) {
            ctx->pc = 0x2B8144u;
            goto label_2b8144;
        }
    }
    ctx->pc = 0x2B802Cu;
label_2b802c:
    // 0x2b802c: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x2b802cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2b8030:
    // 0x2b8030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8034:
    // 0x2b8034: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x2b8034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2b8038:
    // 0x2b8038: 0x10e30011  beq         $a3, $v1, . + 4 + (0x11 << 2)
label_2b803c:
    if (ctx->pc == 0x2B803Cu) {
        ctx->pc = 0x2B803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8038u;
        // 0x2b803c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8040u;
        goto label_2b8040;
    }
    ctx->pc = 0x2B8038u;
    {
        const bool branch_taken_0x2b8038 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8038u;
        // 0x2b803c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8038) {
            ctx->pc = 0x2B8080u;
            goto label_2b8080;
        }
    }
    ctx->pc = 0x2B8040u;
label_2b8040:
    // 0x2b8040: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x2b8040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b8044:
    // 0x2b8044: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b8048:
    if (ctx->pc == 0x2B8048u) {
        ctx->pc = 0x2B8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8044u;
        // 0x2b8048: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B804Cu;
        goto label_2b804c;
    }
    ctx->pc = 0x2B8044u;
    {
        const bool branch_taken_0x2b8044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8044u;
        // 0x2b8048: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8044) {
            ctx->pc = 0x2B805Cu;
            goto label_2b805c;
        }
    }
    ctx->pc = 0x2B804Cu;
label_2b804c:
    // 0x2b804c: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_2b8050:
    if (ctx->pc == 0x2B8050u) {
        ctx->pc = 0x2B8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B804Cu;
        // 0x2b8050: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8054u;
        goto label_2b8054;
    }
    ctx->pc = 0x2B804Cu;
    {
        const bool branch_taken_0x2b804c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B804Cu;
        // 0x2b8050: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b804c) {
            ctx->pc = 0x2B8074u;
            goto label_2b8074;
        }
    }
    ctx->pc = 0x2B8054u;
label_2b8054:
    // 0x2b8054: 0x10000017  b           . + 4 + (0x17 << 2)
label_2b8058:
    if (ctx->pc == 0x2B8058u) {
        ctx->pc = 0x2B8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8054u;
        // 0x2b8058: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B805Cu;
        goto label_2b805c;
    }
    ctx->pc = 0x2B8054u;
    {
        const bool branch_taken_0x2b8054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8054u;
        // 0x2b8058: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8054) {
            ctx->pc = 0x2B80B4u;
            goto label_2b80b4;
        }
    }
    ctx->pc = 0x2B805Cu;
label_2b805c:
    // 0x2b805c: 0x10e2000c  beq         $a3, $v0, . + 4 + (0xC << 2)
label_2b8060:
    if (ctx->pc == 0x2B8060u) {
        ctx->pc = 0x2B8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B805Cu;
        // 0x2b8060: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8064u;
        goto label_2b8064;
    }
    ctx->pc = 0x2B805Cu;
    {
        const bool branch_taken_0x2b805c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B805Cu;
        // 0x2b8060: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b805c) {
            ctx->pc = 0x2B8090u;
            goto label_2b8090;
        }
    }
    ctx->pc = 0x2B8064u;
label_2b8064:
    // 0x2b8064: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
label_2b8068:
    if (ctx->pc == 0x2B8068u) {
        ctx->pc = 0x2B8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8064u;
        // 0x2b8068: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B806Cu;
        goto label_2b806c;
    }
    ctx->pc = 0x2B8064u;
    {
        const bool branch_taken_0x2b8064 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8064u;
        // 0x2b8068: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8064) {
            ctx->pc = 0x2B80A0u;
            goto label_2b80a0;
        }
    }
    ctx->pc = 0x2B806Cu;
label_2b806c:
    // 0x2b806c: 0x10000011  b           . + 4 + (0x11 << 2)
label_2b8070:
    if (ctx->pc == 0x2B8070u) {
        ctx->pc = 0x2B8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B806Cu;
        // 0x2b8070: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8074u;
        goto label_2b8074;
    }
    ctx->pc = 0x2B806Cu;
    {
        const bool branch_taken_0x2b806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B806Cu;
        // 0x2b8070: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b806c) {
            ctx->pc = 0x2B80B4u;
            goto label_2b80b4;
        }
    }
    ctx->pc = 0x2B8074u;
label_2b8074:
    // 0x2b8074: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b8074u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8078:
    // 0x2b8078: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b8078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b807c:
    // 0x2b807c: 0x22e38  dsll        $a1, $v0, 24
    ctx->pc = 0x2b807cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 24);
label_2b8080:
    // 0x2b8080: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b8080u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8084:
    // 0x2b8084: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b8084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b8088:
    // 0x2b8088: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b8088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b808c:
    // 0x2b808c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b808cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b8090:
    // 0x2b8090: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b8090u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8094:
    // 0x2b8094: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b8094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b8098:
    // 0x2b8098: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2b8098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2b809c:
    // 0x2b809c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b809cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b80a0:
    // 0x2b80a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b80a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b80a4:
    // 0x2b80a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b80a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b80a8:
    // 0x2b80a8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b80a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b80ac:
    // 0x2b80ac: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x2b80acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2b80b0:
    // 0x2b80b0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2b80b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2b80b4:
    // 0x2b80b4: 0x29220010  slti        $v0, $t1, 0x10
    ctx->pc = 0x2b80b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
label_2b80b8:
    // 0x2b80b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2b80bc:
    if (ctx->pc == 0x2B80BCu) {
        ctx->pc = 0x2B80BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80B8u;
        // 0x2b80bc: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B80C0u;
        goto label_2b80c0;
    }
    ctx->pc = 0x2B80B8u;
    {
        const bool branch_taken_0x2b80b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B80BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80B8u;
        // 0x2b80bc: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80b8) {
            ctx->pc = 0x2B8118u;
            goto label_2b8118;
        }
    }
    ctx->pc = 0x2B80C0u;
label_2b80c0:
    // 0x2b80c0: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2b80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2b80c4:
    // 0x2b80c4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2b80c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b80c8:
    // 0x2b80c8: 0x533821  addu        $a3, $v0, $s3
    ctx->pc = 0x2b80c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2b80cc:
    // 0x2b80cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2b80ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b80d0:
    // 0x2b80d0: 0x90c4ffff  lbu         $a0, -0x1($a2)
    ctx->pc = 0x2b80d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
label_2b80d4:
    // 0x2b80d4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2b80d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2b80d8:
    // 0x2b80d8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2b80d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2b80dc:
    // 0x2b80dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b80dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2b80e0:
    // 0x2b80e0: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2b80e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_2b80e4:
    // 0x2b80e4: 0x42e38  dsll        $a1, $a0, 24
    ctx->pc = 0x2b80e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 24);
label_2b80e8:
    // 0x2b80e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b80e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b80ec:
    // 0x2b80ec: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x2b80ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_2b80f0:
    // 0x2b80f0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b80f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b80f4:
    // 0x2b80f4: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2b80f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2b80f8:
    // 0x2b80f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2b80f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2b80fc:
    // 0x2b80fc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2b80fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2b8100:
    // 0x2b8100: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b8100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2b8104:
    // 0x2b8104: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2b8104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b8108:
    // 0x2b8108: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x2b8108u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
label_2b810c:
    // 0x2b810c: 0x29220010  slti        $v0, $t1, 0x10
    ctx->pc = 0x2b810cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
label_2b8110:
    // 0x2b8110: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2b8114:
    if (ctx->pc == 0x2B8114u) {
        ctx->pc = 0x2B8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8110u;
        // 0x2b8114: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8118u;
        goto label_2b8118;
    }
    ctx->pc = 0x2B8110u;
    {
        const bool branch_taken_0x2b8110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8110u;
        // 0x2b8114: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8110) {
            ctx->pc = 0x2B80D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b80d0;
        }
    }
    ctx->pc = 0x2B8118u;
label_2b8118:
    // 0x2b8118: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x2b8118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2b811c:
    // 0x2b811c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2b811cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2b8120:
    // 0x2b8120: 0x8e4700bc  lw          $a3, 0xBC($s2)
    ctx->pc = 0x2b8120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_2b8124:
    // 0x2b8124: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b8124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b8128:
    // 0x2b8128: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2b8128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b812c:
    // 0x2b812c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b812cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b8130:
    // 0x2b8130: 0x223882f  dsubu       $s1, $s1, $v1
    ctx->pc = 0x2b8130u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
label_2b8134:
    // 0x2b8134: 0xe0f809  jalr        $a3
label_2b8138:
    if (ctx->pc == 0x2B8138u) {
        ctx->pc = 0x2B8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8134u;
        // 0x2b8138: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B813Cu;
        goto label_2b813c;
    }
    ctx->pc = 0x2B8134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2B813Cu);
        ctx->pc = 0x2B8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8134u;
        // 0x2b8138: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8134u, 0x2B813Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B813Cu;
label_2b813c:
    // 0x2b813c: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_2b8140:
    if (ctx->pc == 0x2B8140u) {
        ctx->pc = 0x2B8140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B813Cu;
        // 0x2b8140: 0xae4000b8  sw          $zero, 0xB8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8144u;
        goto label_2b8144;
    }
    ctx->pc = 0x2B813Cu;
    {
        const bool branch_taken_0x2b813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B813Cu;
        // 0x2b8140: 0xae4000b8  sw          $zero, 0xB8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b813c) {
            ctx->pc = 0x2B844Cu;
            goto label_2b844c;
        }
    }
    ctx->pc = 0x2B8144u;
label_2b8144:
    // 0x2b8144: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2b8144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_2b8148:
    // 0x2b8148: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b8148u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2b814c:
    // 0x2b814c: 0xf1102d  daddu       $v0, $a3, $s1
    ctx->pc = 0x2b814cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_2b8150:
    // 0x2b8150: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x2b8150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2b8154:
    // 0x2b8154: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2b8154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2b8158:
    // 0x2b8158: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_2b815c:
    if (ctx->pc == 0x2B815Cu) {
        ctx->pc = 0x2B815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8158u;
        // 0x2b815c: 0xae4800b8  sw          $t0, 0xB8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8160u;
        goto label_2b8160;
    }
    ctx->pc = 0x2B8158u;
    {
        const bool branch_taken_0x2b8158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8158u;
        // 0x2b815c: 0xae4800b8  sw          $t0, 0xB8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8158) {
            ctx->pc = 0x2B81E0u;
            goto label_2b81e0;
        }
    }
    ctx->pc = 0x2B8160u;
label_2b8160:
    // 0x2b8160: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x2b8160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2b8164:
    // 0x2b8164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8168:
    // 0x2b8168: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x2b8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2b816c:
    // 0x2b816c: 0x10e30011  beq         $a3, $v1, . + 4 + (0x11 << 2)
label_2b8170:
    if (ctx->pc == 0x2B8170u) {
        ctx->pc = 0x2B8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B816Cu;
        // 0x2b8170: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8174u;
        goto label_2b8174;
    }
    ctx->pc = 0x2B816Cu;
    {
        const bool branch_taken_0x2b816c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B816Cu;
        // 0x2b8170: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b816c) {
            ctx->pc = 0x2B81B4u;
            goto label_2b81b4;
        }
    }
    ctx->pc = 0x2B8174u;
label_2b8174:
    // 0x2b8174: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x2b8174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b8178:
    // 0x2b8178: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b817c:
    if (ctx->pc == 0x2B817Cu) {
        ctx->pc = 0x2B817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8178u;
        // 0x2b817c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8180u;
        goto label_2b8180;
    }
    ctx->pc = 0x2B8178u;
    {
        const bool branch_taken_0x2b8178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8178u;
        // 0x2b817c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8178) {
            ctx->pc = 0x2B8190u;
            goto label_2b8190;
        }
    }
    ctx->pc = 0x2B8180u;
label_2b8180:
    // 0x2b8180: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_2b8184:
    if (ctx->pc == 0x2B8184u) {
        ctx->pc = 0x2B8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8180u;
        // 0x2b8184: 0x931021  addu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8188u;
        goto label_2b8188;
    }
    ctx->pc = 0x2B8180u;
    {
        const bool branch_taken_0x2b8180 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8180u;
        // 0x2b8184: 0x931021  addu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8180) {
            ctx->pc = 0x2B81A0u;
            goto label_2b81a0;
        }
    }
    ctx->pc = 0x2B8188u;
label_2b8188:
    // 0x2b8188: 0x100000ec  b           . + 4 + (0xEC << 2)
label_2b818c:
    if (ctx->pc == 0x2B818Cu) {
        ctx->pc = 0x2B818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8188u;
        // 0x2b818c: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8190u;
        goto label_2b8190;
    }
    ctx->pc = 0x2B8188u;
    {
        const bool branch_taken_0x2b8188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8188u;
        // 0x2b818c: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8188) {
            ctx->pc = 0x2B853Cu;
            goto label_2b853c;
        }
    }
    ctx->pc = 0x2B8190u;
label_2b8190:
    // 0x2b8190: 0x50e2000f  beql        $a3, $v0, . + 4 + (0xF << 2)
label_2b8194:
    if (ctx->pc == 0x2B8194u) {
        ctx->pc = 0x2B8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8190u;
        // 0x2b8194: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8198u;
        goto label_2b8198;
    }
    ctx->pc = 0x2B8190u;
    {
        const bool branch_taken_0x2b8190 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b8190) {
            ctx->pc = 0x2B8194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8190u;
            // 0x2b8194: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B81D0u;
            goto label_2b81d0;
        }
    }
    ctx->pc = 0x2B8198u;
label_2b8198:
    // 0x2b8198: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_2b819c:
    if (ctx->pc == 0x2B819Cu) {
        ctx->pc = 0x2B819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8198u;
        // 0x2b819c: 0x931021  addu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B81A0u;
        goto label_2b81a0;
    }
    ctx->pc = 0x2B8198u;
    {
        const bool branch_taken_0x2b8198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8198u;
        // 0x2b819c: 0x931021  addu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8198) {
            ctx->pc = 0x2B8538u;
            goto label_2b8538;
        }
    }
    ctx->pc = 0x2B81A0u;
label_2b81a0:
    // 0x2b81a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b81a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b81a4:
    // 0x2b81a4: 0x6631ffff  daddiu      $s1, $s1, -0x1
    ctx->pc = 0x2b81a4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294967295);
label_2b81a8:
    // 0x2b81a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b81a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b81ac:
    // 0x2b81ac: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_2b81b0:
    if (ctx->pc == 0x2B81B0u) {
        ctx->pc = 0x2B81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81ACu;
        // 0x2b81b0: 0x22e38  dsll        $a1, $v0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B81B4u;
        goto label_2b81b4;
    }
    ctx->pc = 0x2B81ACu;
    {
        const bool branch_taken_0x2b81ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81ACu;
        // 0x2b81b0: 0x22e38  dsll        $a1, $v0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81ac) {
            ctx->pc = 0x2B81D8u;
            goto label_2b81d8;
        }
    }
    ctx->pc = 0x2B81B4u;
label_2b81b4:
    // 0x2b81b4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b81b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b81b8:
    // 0x2b81b8: 0x6631ffff  daddiu      $s1, $s1, -0x1
    ctx->pc = 0x2b81b8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294967295);
label_2b81bc:
    // 0x2b81bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b81bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b81c0:
    // 0x2b81c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b81c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b81c4:
    // 0x2b81c4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2b81c8:
    if (ctx->pc == 0x2B81C8u) {
        ctx->pc = 0x2B81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81C4u;
        // 0x2b81c8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B81CCu;
        goto label_2b81cc;
    }
    ctx->pc = 0x2B81C4u;
    {
        const bool branch_taken_0x2b81c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81C4u;
        // 0x2b81c8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81c4) {
            ctx->pc = 0x2B81D8u;
            goto label_2b81d8;
        }
    }
    ctx->pc = 0x2B81CCu;
label_2b81cc:
    // 0x2b81cc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b81ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b81d0:
    // 0x2b81d0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2b81d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2b81d4:
    // 0x2b81d4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b81d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b81d8:
    // 0x2b81d8: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_2b81dc:
    if (ctx->pc == 0x2B81DCu) {
        ctx->pc = 0x2B81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81D8u;
        // 0x2b81dc: 0x931021  addu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B81E0u;
        goto label_2b81e0;
    }
    ctx->pc = 0x2B81D8u;
    {
        const bool branch_taken_0x2b81d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81D8u;
        // 0x2b81dc: 0x931021  addu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81d8) {
            ctx->pc = 0x2B8538u;
            goto label_2b8538;
        }
    }
    ctx->pc = 0x2B81E0u;
label_2b81e0:
    // 0x2b81e0: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x2b81e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2b81e4:
    // 0x2b81e4: 0x31060003  andi        $a2, $t0, 0x3
    ctx->pc = 0x2b81e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_2b81e8:
    // 0x2b81e8: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x2b81e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2b81ec:
    // 0x2b81ec: 0x85083  sra         $t2, $t0, 2
    ctx->pc = 0x2b81ecu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 2));
label_2b81f0:
    // 0x2b81f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b81f4:
    // 0x2b81f4: 0x10e20011  beq         $a3, $v0, . + 4 + (0x11 << 2)
label_2b81f8:
    if (ctx->pc == 0x2B81F8u) {
        ctx->pc = 0x2B81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81F4u;
        // 0x2b81f8: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B81FCu;
        goto label_2b81fc;
    }
    ctx->pc = 0x2B81F4u;
    {
        const bool branch_taken_0x2b81f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81F4u;
        // 0x2b81f8: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81f4) {
            ctx->pc = 0x2B823Cu;
            goto label_2b823c;
        }
    }
    ctx->pc = 0x2B81FCu;
label_2b81fc:
    // 0x2b81fc: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x2b81fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b8200:
    // 0x2b8200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b8204:
    if (ctx->pc == 0x2B8204u) {
        ctx->pc = 0x2B8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8200u;
        // 0x2b8204: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8208u;
        goto label_2b8208;
    }
    ctx->pc = 0x2B8200u;
    {
        const bool branch_taken_0x2b8200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8200u;
        // 0x2b8204: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8200) {
            ctx->pc = 0x2B8218u;
            goto label_2b8218;
        }
    }
    ctx->pc = 0x2B8208u;
label_2b8208:
    // 0x2b8208: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_2b820c:
    if (ctx->pc == 0x2B820Cu) {
        ctx->pc = 0x2B820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8208u;
        // 0x2b820c: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8210u;
        goto label_2b8210;
    }
    ctx->pc = 0x2B8208u;
    {
        const bool branch_taken_0x2b8208 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8208u;
        // 0x2b820c: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8208) {
            ctx->pc = 0x2B8230u;
            goto label_2b8230;
        }
    }
    ctx->pc = 0x2B8210u;
label_2b8210:
    // 0x2b8210: 0x10000017  b           . + 4 + (0x17 << 2)
label_2b8214:
    if (ctx->pc == 0x2B8214u) {
        ctx->pc = 0x2B8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8210u;
        // 0x2b8214: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8218u;
        goto label_2b8218;
    }
    ctx->pc = 0x2B8210u;
    {
        const bool branch_taken_0x2b8210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8210u;
        // 0x2b8214: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8210) {
            ctx->pc = 0x2B8270u;
            goto label_2b8270;
        }
    }
    ctx->pc = 0x2B8218u;
label_2b8218:
    // 0x2b8218: 0x10e2000c  beq         $a3, $v0, . + 4 + (0xC << 2)
label_2b821c:
    if (ctx->pc == 0x2B821Cu) {
        ctx->pc = 0x2B821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8218u;
        // 0x2b821c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8220u;
        goto label_2b8220;
    }
    ctx->pc = 0x2B8218u;
    {
        const bool branch_taken_0x2b8218 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8218u;
        // 0x2b821c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8218) {
            ctx->pc = 0x2B824Cu;
            goto label_2b824c;
        }
    }
    ctx->pc = 0x2B8220u;
label_2b8220:
    // 0x2b8220: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
label_2b8224:
    if (ctx->pc == 0x2B8224u) {
        ctx->pc = 0x2B8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8220u;
        // 0x2b8224: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8228u;
        goto label_2b8228;
    }
    ctx->pc = 0x2B8220u;
    {
        const bool branch_taken_0x2b8220 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8220u;
        // 0x2b8224: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8220) {
            ctx->pc = 0x2B825Cu;
            goto label_2b825c;
        }
    }
    ctx->pc = 0x2B8228u;
label_2b8228:
    // 0x2b8228: 0x10000011  b           . + 4 + (0x11 << 2)
label_2b822c:
    if (ctx->pc == 0x2B822Cu) {
        ctx->pc = 0x2B822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8228u;
        // 0x2b822c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8230u;
        goto label_2b8230;
    }
    ctx->pc = 0x2B8228u;
    {
        const bool branch_taken_0x2b8228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8228u;
        // 0x2b822c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8228) {
            ctx->pc = 0x2B8270u;
            goto label_2b8270;
        }
    }
    ctx->pc = 0x2B8230u;
label_2b8230:
    // 0x2b8230: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b8230u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8234:
    // 0x2b8234: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b8234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b8238:
    // 0x2b8238: 0x22e38  dsll        $a1, $v0, 24
    ctx->pc = 0x2b8238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 24);
label_2b823c:
    // 0x2b823c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b823cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8240:
    // 0x2b8240: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b8240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b8244:
    // 0x2b8244: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b8244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b8248:
    // 0x2b8248: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b8248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b824c:
    // 0x2b824c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b824cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8250:
    // 0x2b8250: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b8250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b8254:
    // 0x2b8254: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2b8254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2b8258:
    // 0x2b8258: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b8258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b825c:
    // 0x2b825c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b825cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8260:
    // 0x2b8260: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b8260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b8264:
    // 0x2b8264: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b8264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b8268:
    // 0x2b8268: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x2b8268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2b826c:
    // 0x2b826c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2b826cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2b8270:
    // 0x2b8270: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x2b8270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_2b8274:
    // 0x2b8274: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2b8278:
    if (ctx->pc == 0x2B8278u) {
        ctx->pc = 0x2B8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8274u;
        // 0x2b8278: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B827Cu;
        goto label_2b827c;
    }
    ctx->pc = 0x2B8274u;
    {
        const bool branch_taken_0x2b8274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8274u;
        // 0x2b8278: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8274) {
            ctx->pc = 0x2B82D8u;
            goto label_2b82d8;
        }
    }
    ctx->pc = 0x2B827Cu;
label_2b827c:
    // 0x2b827c: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2b827cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2b8280:
    // 0x2b8280: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2b8280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b8284:
    // 0x2b8284: 0x534021  addu        $t0, $v0, $s3
    ctx->pc = 0x2b8284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2b8288:
    // 0x2b8288: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x2b8288u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_2b828c:
    // 0x2b828c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2b828cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b8290:
    // 0x2b8290: 0x90e4ffff  lbu         $a0, -0x1($a3)
    ctx->pc = 0x2b8290u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
label_2b8294:
    // 0x2b8294: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b8294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2b8298:
    // 0x2b8298: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2b8298u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2b829c:
    // 0x2b829c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2b829cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_2b82a0:
    // 0x2b82a0: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2b82a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_2b82a4:
    // 0x2b82a4: 0x42e38  dsll        $a1, $a0, 24
    ctx->pc = 0x2b82a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 24);
label_2b82a8:
    // 0x2b82a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b82a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b82ac:
    // 0x2b82ac: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x2b82acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_2b82b0:
    // 0x2b82b0: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2b82b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2b82b4:
    // 0x2b82b4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b82b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b82b8:
    // 0x2b82b8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2b82b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2b82bc:
    // 0x2b82bc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b82bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2b82c0:
    // 0x2b82c0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b82c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2b82c4:
    // 0x2b82c4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2b82c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b82c8:
    // 0x2b82c8: 0xfd050000  sd          $a1, 0x0($t0)
    ctx->pc = 0x2b82c8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 5));
label_2b82cc:
    // 0x2b82cc: 0x1520fff0  bnez        $t1, . + 4 + (-0x10 << 2)
label_2b82d0:
    if (ctx->pc == 0x2B82D0u) {
        ctx->pc = 0x2B82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82CCu;
        // 0x2b82d0: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B82D4u;
        goto label_2b82d4;
    }
    ctx->pc = 0x2B82CCu;
    {
        const bool branch_taken_0x2b82cc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82CCu;
        // 0x2b82d0: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82cc) {
            ctx->pc = 0x2B8290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8290;
        }
    }
    ctx->pc = 0x2B82D4u;
label_2b82d4:
    // 0x2b82d4: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x2b82d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2b82d8:
    // 0x2b82d8: 0x10c00098  beqz        $a2, . + 4 + (0x98 << 2)
label_2b82dc:
    if (ctx->pc == 0x2B82DCu) {
        ctx->pc = 0x2B82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82D8u;
        // 0x2b82dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B82E0u;
        goto label_2b82e0;
    }
    ctx->pc = 0x2B82D8u;
    {
        const bool branch_taken_0x2b82d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82D8u;
        // 0x2b82dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82d8) {
            ctx->pc = 0x2B853Cu;
            goto label_2b853c;
        }
    }
    ctx->pc = 0x2B82E0u;
label_2b82e0:
    // 0x2b82e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b82e4:
    // 0x2b82e4: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
label_2b82e8:
    if (ctx->pc == 0x2B82E8u) {
        ctx->pc = 0x2B82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82E4u;
        // 0x2b82e8: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B82ECu;
        goto label_2b82ec;
    }
    ctx->pc = 0x2B82E4u;
    {
        const bool branch_taken_0x2b82e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82E4u;
        // 0x2b82e8: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82e4) {
            ctx->pc = 0x2B8320u;
            goto label_2b8320;
        }
    }
    ctx->pc = 0x2B82ECu;
label_2b82ec:
    // 0x2b82ec: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x2b82ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_2b82f0:
    // 0x2b82f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b82f4:
    if (ctx->pc == 0x2B82F4u) {
        ctx->pc = 0x2B82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82F0u;
        // 0x2b82f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B82F8u;
        goto label_2b82f8;
    }
    ctx->pc = 0x2B82F0u;
    {
        const bool branch_taken_0x2b82f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82F0u;
        // 0x2b82f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82f0) {
            ctx->pc = 0x2B8308u;
            goto label_2b8308;
        }
    }
    ctx->pc = 0x2B82F8u;
label_2b82f8:
    // 0x2b82f8: 0x50c2000e  beql        $a2, $v0, . + 4 + (0xE << 2)
label_2b82fc:
    if (ctx->pc == 0x2B82FCu) {
        ctx->pc = 0x2B82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82F8u;
        // 0x2b82fc: 0x9202ffff  lbu         $v0, -0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8300u;
        goto label_2b8300;
    }
    ctx->pc = 0x2B82F8u;
    {
        const bool branch_taken_0x2b82f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b82f8) {
            ctx->pc = 0x2B82FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B82F8u;
            // 0x2b82fc: 0x9202ffff  lbu         $v0, -0x1($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8334u;
            goto label_2b8334;
        }
    }
    ctx->pc = 0x2B8300u;
label_2b8300:
    // 0x2b8300: 0x1000000f  b           . + 4 + (0xF << 2)
label_2b8304:
    if (ctx->pc == 0x2B8304u) {
        ctx->pc = 0x2B8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8300u;
        // 0x2b8304: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8308u;
        goto label_2b8308;
    }
    ctx->pc = 0x2B8300u;
    {
        const bool branch_taken_0x2b8300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8300u;
        // 0x2b8304: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8300) {
            ctx->pc = 0x2B8340u;
            goto label_2b8340;
        }
    }
    ctx->pc = 0x2B8308u;
label_2b8308:
    // 0x2b8308: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b8308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b830c:
    // 0x2b830c: 0x54c2000c  bnel        $a2, $v0, . + 4 + (0xC << 2)
label_2b8310:
    if (ctx->pc == 0x2B8310u) {
        ctx->pc = 0x2B8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B830Cu;
        // 0x2b8310: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8314u;
        goto label_2b8314;
    }
    ctx->pc = 0x2B830Cu;
    {
        const bool branch_taken_0x2b830c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b830c) {
            ctx->pc = 0x2B8310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B830Cu;
            // 0x2b8310: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8340u;
            goto label_2b8340;
        }
    }
    ctx->pc = 0x2B8314u;
label_2b8314:
    // 0x2b8314: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b8314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2b8318:
    // 0x2b8318: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b8318u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b831c:
    // 0x2b831c: 0x22a38  dsll        $a1, $v0, 8
    ctx->pc = 0x2b831cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 8);
label_2b8320:
    // 0x2b8320: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b8320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2b8324:
    // 0x2b8324: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b8324u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8328:
    // 0x2b8328: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b8328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b832c:
    // 0x2b832c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b832cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b8330:
    // 0x2b8330: 0x9202ffff  lbu         $v0, -0x1($s0)
    ctx->pc = 0x2b8330u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
label_2b8334:
    // 0x2b8334: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2b8334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2b8338:
    // 0x2b8338: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b8338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b833c:
    // 0x2b833c: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2b833cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2b8340:
    // 0x2b8340: 0x1000007d  b           . + 4 + (0x7D << 2)
label_2b8344:
    if (ctx->pc == 0x2B8344u) {
        ctx->pc = 0x2B8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8340u;
        // 0x2b8344: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8348u;
        goto label_2b8348;
    }
    ctx->pc = 0x2B8340u;
    {
        const bool branch_taken_0x2b8340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8340u;
        // 0x2b8344: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8340) {
            ctx->pc = 0x2B8538u;
            goto label_2b8538;
        }
    }
    ctx->pc = 0x2B8348u;
label_2b8348:
    // 0x2b8348: 0x10000040  b           . + 4 + (0x40 << 2)
label_2b834c:
    if (ctx->pc == 0x2B834Cu) {
        ctx->pc = 0x2B834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8348u;
        // 0x2b834c: 0x26540038  addiu       $s4, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8350u;
        goto label_2b8350;
    }
    ctx->pc = 0x2B8348u;
    {
        const bool branch_taken_0x2b8348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8348u;
        // 0x2b834c: 0x26540038  addiu       $s4, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8348) {
            ctx->pc = 0x2B844Cu;
            goto label_2b844c;
        }
    }
    ctx->pc = 0x2B8350u;
label_2b8350:
    // 0x2b8350: 0x6631ffc0  daddiu      $s1, $s1, -0x40
    ctx->pc = 0x2b8350u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294967232);
label_2b8354:
    // 0x2b8354: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2b8354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b8358:
    // 0x2b8358: 0x26680018  addiu       $t0, $s3, 0x18
    ctx->pc = 0x2b8358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_2b835c:
    // 0x2b835c: 0x266a0008  addiu       $t2, $s3, 0x8
    ctx->pc = 0x2b835cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_2b8360:
    // 0x2b8360: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x2b8360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2b8364:
    // 0x2b8364: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2b8364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b8368:
    // 0x2b8368: 0x90e4fff4  lbu         $a0, -0xC($a3)
    ctx->pc = 0x2b8368u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967284)));
label_2b836c:
    // 0x2b836c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2b836cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2b8370:
    // 0x2b8370: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2b8370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2b8374:
    // 0x2b8374: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x2b8374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2b8378:
    // 0x2b8378: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2b8378u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_2b837c:
    // 0x2b837c: 0x42e38  dsll        $a1, $a0, 24
    ctx->pc = 0x2b837cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 24);
label_2b8380:
    // 0x2b8380: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b8380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b8384:
    // 0x2b8384: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x2b8384u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_2b8388:
    // 0x2b8388: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b8388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b838c:
    // 0x2b838c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2b838cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2b8390:
    // 0x2b8390: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2b8390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2b8394:
    // 0x2b8394: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2b8394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_2b8398:
    // 0x2b8398: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b8398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2b839c:
    // 0x2b839c: 0xfd05ffe8  sd          $a1, -0x18($t0)
    ctx->pc = 0x2b839cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294967272), GPR_U64(ctx, 5));
label_2b83a0:
    // 0x2b83a0: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x2b83a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_2b83a4:
    // 0x2b83a4: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x2b83a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_2b83a8:
    // 0x2b83a8: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x2b83a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
label_2b83ac:
    // 0x2b83ac: 0x42e38  dsll        $a1, $a0, 24
    ctx->pc = 0x2b83acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 24);
label_2b83b0:
    // 0x2b83b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b83b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b83b4:
    // 0x2b83b4: 0x90c40006  lbu         $a0, 0x6($a2)
    ctx->pc = 0x2b83b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
label_2b83b8:
    // 0x2b83b8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b83b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b83bc:
    // 0x2b83bc: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2b83bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2b83c0:
    // 0x2b83c0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2b83c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2b83c4:
    // 0x2b83c4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b83c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2b83c8:
    // 0x2b83c8: 0xfd450000  sd          $a1, 0x0($t2)
    ctx->pc = 0x2b83c8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 5));
label_2b83cc:
    // 0x2b83cc: 0x90c40007  lbu         $a0, 0x7($a2)
    ctx->pc = 0x2b83ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
label_2b83d0:
    // 0x2b83d0: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x2b83d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
label_2b83d4:
    // 0x2b83d4: 0x90c30009  lbu         $v1, 0x9($a2)
    ctx->pc = 0x2b83d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
label_2b83d8:
    // 0x2b83d8: 0x42e38  dsll        $a1, $a0, 24
    ctx->pc = 0x2b83d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 24);
label_2b83dc:
    // 0x2b83dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b83dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b83e0:
    // 0x2b83e0: 0x90c4000a  lbu         $a0, 0xA($a2)
    ctx->pc = 0x2b83e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
label_2b83e4:
    // 0x2b83e4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b83e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b83e8:
    // 0x2b83e8: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2b83e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2b83ec:
    // 0x2b83ec: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2b83ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2b83f0:
    // 0x2b83f0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b83f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2b83f4:
    // 0x2b83f4: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x2b83f4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
label_2b83f8:
    // 0x2b83f8: 0x266a0008  addiu       $t2, $s3, 0x8
    ctx->pc = 0x2b83f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_2b83fc:
    // 0x2b83fc: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x2b83fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2b8400:
    // 0x2b8400: 0x90c2000c  lbu         $v0, 0xC($a2)
    ctx->pc = 0x2b8400u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
label_2b8404:
    // 0x2b8404: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2b8404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_2b8408:
    // 0x2b8408: 0x90c3000d  lbu         $v1, 0xD($a2)
    ctx->pc = 0x2b8408u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
label_2b840c:
    // 0x2b840c: 0x42e38  dsll        $a1, $a0, 24
    ctx->pc = 0x2b840cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 24);
label_2b8410:
    // 0x2b8410: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b8410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b8414:
    // 0x2b8414: 0x90c4000e  lbu         $a0, 0xE($a2)
    ctx->pc = 0x2b8414u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
label_2b8418:
    // 0x2b8418: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b8418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b841c:
    // 0x2b841c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2b841cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2b8420:
    // 0x2b8420: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2b8420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2b8424:
    // 0x2b8424: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2b8424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b8428:
    // 0x2b8428: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b8428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2b842c:
    // 0x2b842c: 0xfd050000  sd          $a1, 0x0($t0)
    ctx->pc = 0x2b842cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 5));
label_2b8430:
    // 0x2b8430: 0x1520ffcd  bnez        $t1, . + 4 + (-0x33 << 2)
label_2b8434:
    if (ctx->pc == 0x2B8434u) {
        ctx->pc = 0x2B8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8430u;
        // 0x2b8434: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8438u;
        goto label_2b8438;
    }
    ctx->pc = 0x2B8430u;
    {
        const bool branch_taken_0x2b8430 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8430u;
        // 0x2b8434: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8430) {
            ctx->pc = 0x2B8368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8368;
        }
    }
    ctx->pc = 0x2B8438u;
label_2b8438:
    // 0x2b8438: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x2b8438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_2b843c:
    // 0x2b843c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b8440:
    // 0x2b8440: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b8440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b8444:
    // 0x2b8444: 0x40f809  jalr        $v0
label_2b8448:
    if (ctx->pc == 0x2B8448u) {
        ctx->pc = 0x2B8448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8444u;
        // 0x2b8448: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B844Cu;
        goto label_2b844c;
    }
    ctx->pc = 0x2B8444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B844Cu);
        ctx->pc = 0x2B8448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8444u;
        // 0x2b8448: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8444u, 0x2B844Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B844Cu;
label_2b844c:
    // 0x2b844c: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x2b844cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_2b8450:
    // 0x2b8450: 0x1040ffbf  beqz        $v0, . + 4 + (-0x41 << 2)
label_2b8454:
    if (ctx->pc == 0x2B8454u) {
        ctx->pc = 0x2B8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8450u;
        // 0x2b8454: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8458u;
        goto label_2b8458;
    }
    ctx->pc = 0x2B8450u;
    {
        const bool branch_taken_0x2b8450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8450u;
        // 0x2b8454: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8450) {
            ctx->pc = 0x2B8350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8350;
        }
    }
    ctx->pc = 0x2B8458u;
label_2b8458:
    // 0x2b8458: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x2b8458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
label_2b845c:
    // 0x2b845c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2b845cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_2b8460:
    // 0x2b8460: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b8460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8464:
    // 0x2b8464: 0xae4600b8  sw          $a2, 0xB8($s2)
    ctx->pc = 0x2b8464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 6));
label_2b8468:
    // 0x2b8468: 0x65083  sra         $t2, $a2, 2
    ctx->pc = 0x2b8468u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 2));
label_2b846c:
    // 0x2b846c: 0x19400018  blez        $t2, . + 4 + (0x18 << 2)
label_2b8470:
    if (ctx->pc == 0x2B8470u) {
        ctx->pc = 0x2B8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B846Cu;
        // 0x2b8470: 0x30c60003  andi        $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8474u;
        goto label_2b8474;
    }
    ctx->pc = 0x2B846Cu;
    {
        const bool branch_taken_0x2b846c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2B8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B846Cu;
        // 0x2b8470: 0x30c60003  andi        $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b846c) {
            ctx->pc = 0x2B84D0u;
            goto label_2b84d0;
        }
    }
    ctx->pc = 0x2B8474u;
label_2b8474:
    // 0x2b8474: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2b8474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b8478:
    // 0x2b8478: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2b8478u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b847c:
    // 0x2b847c: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x2b847cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2b8480:
    // 0x2b8480: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2b8480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b8484:
    // 0x2b8484: 0x0  nop
    ctx->pc = 0x2b8484u;
    // NOP
label_2b8488:
    // 0x2b8488: 0x90e4ffff  lbu         $a0, -0x1($a3)
    ctx->pc = 0x2b8488u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
label_2b848c:
    // 0x2b848c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b848cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2b8490:
    // 0x2b8490: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2b8490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2b8494:
    // 0x2b8494: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2b8494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_2b8498:
    // 0x2b8498: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2b8498u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_2b849c:
    // 0x2b849c: 0x42e38  dsll        $a1, $a0, 24
    ctx->pc = 0x2b849cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 24);
label_2b84a0:
    // 0x2b84a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b84a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b84a4:
    // 0x2b84a4: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x2b84a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_2b84a8:
    // 0x2b84a8: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2b84a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2b84ac:
    // 0x2b84ac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b84acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b84b0:
    // 0x2b84b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2b84b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2b84b4:
    // 0x2b84b4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b84b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2b84b8:
    // 0x2b84b8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b84b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2b84bc:
    // 0x2b84bc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2b84bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b84c0:
    // 0x2b84c0: 0xfd050000  sd          $a1, 0x0($t0)
    ctx->pc = 0x2b84c0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 5));
label_2b84c4:
    // 0x2b84c4: 0x1520fff0  bnez        $t1, . + 4 + (-0x10 << 2)
label_2b84c8:
    if (ctx->pc == 0x2B84C8u) {
        ctx->pc = 0x2B84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84C4u;
        // 0x2b84c8: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B84CCu;
        goto label_2b84cc;
    }
    ctx->pc = 0x2B84C4u;
    {
        const bool branch_taken_0x2b84c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84C4u;
        // 0x2b84c8: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84c4) {
            ctx->pc = 0x2B8488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8488;
        }
    }
    ctx->pc = 0x2B84CCu;
label_2b84cc:
    // 0x2b84cc: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x2b84ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2b84d0:
    // 0x2b84d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b84d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b84d4:
    // 0x2b84d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b84d8:
    // 0x2b84d8: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
label_2b84dc:
    if (ctx->pc == 0x2B84DCu) {
        ctx->pc = 0x2B84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84D8u;
        // 0x2b84dc: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B84E0u;
        goto label_2b84e0;
    }
    ctx->pc = 0x2B84D8u;
    {
        const bool branch_taken_0x2b84d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84D8u;
        // 0x2b84dc: 0x2068021  addu        $s0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84d8) {
            ctx->pc = 0x2B8514u;
            goto label_2b8514;
        }
    }
    ctx->pc = 0x2B84E0u;
label_2b84e0:
    // 0x2b84e0: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x2b84e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_2b84e4:
    // 0x2b84e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b84e8:
    if (ctx->pc == 0x2B84E8u) {
        ctx->pc = 0x2B84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84E4u;
        // 0x2b84e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B84ECu;
        goto label_2b84ec;
    }
    ctx->pc = 0x2B84E4u;
    {
        const bool branch_taken_0x2b84e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84E4u;
        // 0x2b84e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84e4) {
            ctx->pc = 0x2B84FCu;
            goto label_2b84fc;
        }
    }
    ctx->pc = 0x2B84ECu;
label_2b84ec:
    // 0x2b84ec: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
label_2b84f0:
    if (ctx->pc == 0x2B84F0u) {
        ctx->pc = 0x2B84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84ECu;
        // 0x2b84f0: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B84F4u;
        goto label_2b84f4;
    }
    ctx->pc = 0x2B84ECu;
    {
        const bool branch_taken_0x2b84ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84ECu;
        // 0x2b84f0: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84ec) {
            ctx->pc = 0x2B8524u;
            goto label_2b8524;
        }
    }
    ctx->pc = 0x2B84F4u;
label_2b84f4:
    // 0x2b84f4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2b84f8:
    if (ctx->pc == 0x2B84F8u) {
        ctx->pc = 0x2B84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84F4u;
        // 0x2b84f8: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B84FCu;
        goto label_2b84fc;
    }
    ctx->pc = 0x2B84F4u;
    {
        const bool branch_taken_0x2b84f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84F4u;
        // 0x2b84f8: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84f4) {
            ctx->pc = 0x2B8538u;
            goto label_2b8538;
        }
    }
    ctx->pc = 0x2B84FCu;
label_2b84fc:
    // 0x2b84fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b8500:
    // 0x2b8500: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
label_2b8504:
    if (ctx->pc == 0x2B8504u) {
        ctx->pc = 0x2B8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8500u;
        // 0x2b8504: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8508u;
        goto label_2b8508;
    }
    ctx->pc = 0x2B8500u;
    {
        const bool branch_taken_0x2b8500 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8500u;
        // 0x2b8504: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8500) {
            ctx->pc = 0x2B8534u;
            goto label_2b8534;
        }
    }
    ctx->pc = 0x2B8508u;
label_2b8508:
    // 0x2b8508: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b8508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2b850c:
    // 0x2b850c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b850cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8510:
    // 0x2b8510: 0x22a38  dsll        $a1, $v0, 8
    ctx->pc = 0x2b8510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 8);
label_2b8514:
    // 0x2b8514: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b8514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2b8518:
    // 0x2b8518: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b8518u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b851c:
    // 0x2b851c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b851cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b8520:
    // 0x2b8520: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b8520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b8524:
    // 0x2b8524: 0x9202ffff  lbu         $v0, -0x1($s0)
    ctx->pc = 0x2b8524u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
label_2b8528:
    // 0x2b8528: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2b8528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2b852c:
    // 0x2b852c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2b852cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b8530:
    // 0x2b8530: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2b8530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2b8534:
    // 0x2b8534: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b8534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2b8538:
    // 0x2b8538: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x2b8538u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_2b853c:
    // 0x2b853c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b853cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b8540:
    // 0x2b8540: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b8540u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b8544:
    // 0x2b8544: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b8544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b8548:
    // 0x2b8548: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b8548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b854c:
    // 0x2b854c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b854cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b8550:
    // 0x2b8550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b8554:
    // 0x2b8554: 0x3e00008  jr          $ra
label_2b8558:
    if (ctx->pc == 0x2B8558u) {
        ctx->pc = 0x2B8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8554u;
        // 0x2b8558: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B855Cu;
        goto label_2b855c;
    }
    ctx->pc = 0x2B8554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8554u;
        // 0x2b8558: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B855Cu;
label_2b855c:
    // 0x2b855c: 0x0  nop
    ctx->pc = 0x2b855cu;
    // NOP
label_2b8560:
    // 0x2b8560: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b8560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2b8564:
    // 0x2b8564: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2b8564u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8568:
    // 0x2b8568: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b8568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2b856c:
    // 0x2b856c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2b856cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b8570:
    // 0x2b8570: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x2b8570u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b8574:
    // 0x2b8574: 0x27aa0018  addiu       $t2, $sp, 0x18
    ctx->pc = 0x2b8574u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2b8578:
    // 0x2b8578: 0x8d8d00bc  lw          $t5, 0xBC($t4)
    ctx->pc = 0x2b8578u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 188)));
label_2b857c:
    // 0x2b857c: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x2b857cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_2b8580:
    // 0x2b8580: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x2b8580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2b8584:
    // 0x2b8584: 0x0  nop
    ctx->pc = 0x2b8584u;
    // NOP
label_2b8588:
    // 0x2b8588: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x2b8588u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2b858c:
    // 0x2b858c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2b858cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_2b8590:
    // 0x2b8590: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2b8590u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2b8594:
    // 0x2b8594: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x2b8594u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_2b8598:
    // 0x2b8598: 0x43638  dsll        $a2, $a0, 24
    ctx->pc = 0x2b8598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 24);
label_2b859c:
    // 0x2b859c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b85a0:
    // 0x2b85a0: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x2b85a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_2b85a4:
    // 0x2b85a4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2b85a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2b85a8:
    // 0x2b85a8: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2b85a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2b85ac:
    // 0x2b85ac: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2b85acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2b85b0:
    // 0x2b85b0: 0x9105000d  lbu         $a1, 0xD($t0)
    ctx->pc = 0x2b85b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
label_2b85b4:
    // 0x2b85b4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x2b85b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_2b85b8:
    // 0x2b85b8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x2b85b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_2b85bc:
    // 0x2b85bc: 0xfd46ffe8  sd          $a2, -0x18($t2)
    ctx->pc = 0x2b85bcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294967272), GPR_U64(ctx, 6));
label_2b85c0:
    // 0x2b85c0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2b85c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2b85c4:
    // 0x2b85c4: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x2b85c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_2b85c8:
    // 0x2b85c8: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x2b85c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_2b85cc:
    // 0x2b85cc: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x2b85ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_2b85d0:
    // 0x2b85d0: 0x43638  dsll        $a2, $a0, 24
    ctx->pc = 0x2b85d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 24);
label_2b85d4:
    // 0x2b85d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b85d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b85d8:
    // 0x2b85d8: 0x90e40006  lbu         $a0, 0x6($a3)
    ctx->pc = 0x2b85d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_2b85dc:
    // 0x2b85dc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2b85dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2b85e0:
    // 0x2b85e0: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2b85e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2b85e4:
    // 0x2b85e4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2b85e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2b85e8:
    // 0x2b85e8: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x2b85e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_2b85ec:
    // 0x2b85ec: 0xfd260000  sd          $a2, 0x0($t1)
    ctx->pc = 0x2b85ecu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 6));
label_2b85f0:
    // 0x2b85f0: 0x90e40007  lbu         $a0, 0x7($a3)
    ctx->pc = 0x2b85f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_2b85f4:
    // 0x2b85f4: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x2b85f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_2b85f8:
    // 0x2b85f8: 0x90e30009  lbu         $v1, 0x9($a3)
    ctx->pc = 0x2b85f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
label_2b85fc:
    // 0x2b85fc: 0x43638  dsll        $a2, $a0, 24
    ctx->pc = 0x2b85fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 24);
label_2b8600:
    // 0x2b8600: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b8600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b8604:
    // 0x2b8604: 0x90e4000a  lbu         $a0, 0xA($a3)
    ctx->pc = 0x2b8604u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
label_2b8608:
    // 0x2b8608: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2b8608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2b860c:
    // 0x2b860c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2b860cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2b8610:
    // 0x2b8610: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2b8610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2b8614:
    // 0x2b8614: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x2b8614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_2b8618:
    // 0x2b8618: 0xfd260008  sd          $a2, 0x8($t1)
    ctx->pc = 0x2b8618u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 6));
label_2b861c:
    // 0x2b861c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x2b861cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_2b8620:
    // 0x2b8620: 0x90e3000b  lbu         $v1, 0xB($a3)
    ctx->pc = 0x2b8620u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
label_2b8624:
    // 0x2b8624: 0x90e2000d  lbu         $v0, 0xD($a3)
    ctx->pc = 0x2b8624u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
label_2b8628:
    // 0x2b8628: 0x33638  dsll        $a2, $v1, 24
    ctx->pc = 0x2b8628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 24);
label_2b862c:
    // 0x2b862c: 0x90e4000e  lbu         $a0, 0xE($a3)
    ctx->pc = 0x2b862cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
label_2b8630:
    // 0x2b8630: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2b8630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_2b8634:
    // 0x2b8634: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2b8634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2b8638:
    // 0x2b8638: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2b8638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2b863c:
    // 0x2b863c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2b863cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_2b8640:
    // 0x2b8640: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x2b8640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_2b8644:
    // 0x2b8644: 0xfd460000  sd          $a2, 0x0($t2)
    ctx->pc = 0x2b8644u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 6));
label_2b8648:
    // 0x2b8648: 0x1560ffcf  bnez        $t3, . + 4 + (-0x31 << 2)
label_2b864c:
    if (ctx->pc == 0x2B864Cu) {
        ctx->pc = 0x2B864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8648u;
        // 0x2b864c: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8650u;
        goto label_2b8650;
    }
    ctx->pc = 0x2B8648u;
    {
        const bool branch_taken_0x2b8648 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8648u;
        // 0x2b864c: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8648) {
            ctx->pc = 0x2B8588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8588;
        }
    }
    ctx->pc = 0x2B8650u;
label_2b8650:
    // 0x2b8650: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x2b8650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2b8654:
    // 0x2b8654: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b8654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b8658:
    // 0x2b8658: 0x1a0f809  jalr        $t5
label_2b865c:
    if (ctx->pc == 0x2B865Cu) {
        ctx->pc = 0x2B865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8658u;
        // 0x2b865c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8660u;
        goto label_2b8660;
    }
    ctx->pc = 0x2B8658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        SET_GPR_U32(ctx, 31, 0x2B8660u);
        ctx->pc = 0x2B865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8658u;
        // 0x2b865c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8658u, 0x2B8660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B8660u;
label_2b8660:
    // 0x2b8660: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b8660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b8664:
    // 0x2b8664: 0x3e00008  jr          $ra
label_2b8668:
    if (ctx->pc == 0x2B8668u) {
        ctx->pc = 0x2B8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8664u;
        // 0x2b8668: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B866Cu;
        goto label_2b866c;
    }
    ctx->pc = 0x2B8664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8664u;
        // 0x2b8668: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B866Cu;
label_2b866c:
    // 0x2b866c: 0x0  nop
    ctx->pc = 0x2b866cu;
    // NOP
label_2b8670:
    // 0x2b8670: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2b8670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2b8674:
    // 0x2b8674: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2b8674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b8678:
    // 0x2b8678: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x2b8678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
label_2b867c:
    // 0x2b867c: 0xffb70110  sd          $s7, 0x110($sp)
    ctx->pc = 0x2b867cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 23));
label_2b8680:
    // 0x2b8680: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x2b8680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
label_2b8684:
    // 0x2b8684: 0xffb300d0  sd          $s3, 0xD0($sp)
    ctx->pc = 0x2b8684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
label_2b8688:
    // 0x2b8688: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x2b8688u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_2b868c:
    // 0x2b868c: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x2b868cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
label_2b8690:
    // 0x2b8690: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2b8690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_2b8694:
    // 0x2b8694: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b8694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8698:
    // 0x2b8698: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x2b8698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
label_2b869c:
    // 0x2b869c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b869cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b86a0:
    // 0x2b86a0: 0xffb500f0  sd          $s5, 0xF0($sp)
    ctx->pc = 0x2b86a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
label_2b86a4:
    // 0x2b86a4: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x2b86a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
label_2b86a8:
    // 0x2b86a8: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x2b86a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
label_2b86ac:
    // 0x2b86ac: 0xde6c0008  ld          $t4, 0x8($s3)
    ctx->pc = 0x2b86acu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 19), 8)));
label_2b86b0:
    // 0x2b86b0: 0xde760000  ld          $s6, 0x0($s3)
    ctx->pc = 0x2b86b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_2b86b4:
    // 0x2b86b4: 0xde6f0018  ld          $t7, 0x18($s3)
    ctx->pc = 0x2b86b4u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_2b86b8:
    // 0x2b86b8: 0xde780010  ld          $t8, 0x10($s3)
    ctx->pc = 0x2b86b8u;
    SET_GPR_U64(ctx, 24, READ64(ADD32(GPR_U32(ctx, 19), 16)));
label_2b86bc:
    // 0x2b86bc: 0x2c0682d  daddu       $t5, $s6, $zero
    ctx->pc = 0x2b86bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b86c0:
    // 0x2b86c0: 0xffac0080  sd          $t4, 0x80($sp)
    ctx->pc = 0x2b86c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 12));
label_2b86c4:
    // 0x2b86c4: 0x1e0f02d  daddu       $fp, $t7, $zero
    ctx->pc = 0x2b86c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2b86c8:
    // 0x2b86c8: 0xde710020  ld          $s1, 0x20($s3)
    ctx->pc = 0x2b86c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 32)));
label_2b86cc:
    // 0x2b86cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b86d0:
    if (ctx->pc == 0x2B86D0u) {
        ctx->pc = 0x2B86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86CCu;
        // 0x2b86d0: 0xffb80088  sd          $t8, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B86D4u;
        goto label_2b86d4;
    }
    ctx->pc = 0x2B86CCu;
    {
        const bool branch_taken_0x2b86cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86CCu;
        // 0x2b86d0: 0xffb80088  sd          $t8, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b86cc) {
            ctx->pc = 0x2B8700u;
            goto label_2b8700;
        }
    }
    ctx->pc = 0x2B86D4u;
label_2b86d4:
    // 0x2b86d4: 0x0  nop
    ctx->pc = 0x2b86d4u;
    // NOP
label_2b86d8:
    // 0x2b86d8: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x2b86d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b86dc:
    // 0x2b86dc: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x2b86dcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b86e0:
    // 0x2b86e0: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2b86e0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b86e4:
    // 0x2b86e4: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x2b86e4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b86e8:
    // 0x2b86e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b86e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b86ec:
    // 0x2b86ec: 0x8fb00094  lw          $s0, 0x94($sp)
    ctx->pc = 0x2b86ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2b86f0:
    // 0x2b86f0: 0xffac0080  sd          $t4, 0x80($sp)
    ctx->pc = 0x2b86f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 12));
label_2b86f4:
    // 0x2b86f4: 0x1a0b02d  daddu       $s6, $t5, $zero
    ctx->pc = 0x2b86f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2b86f8:
    // 0x2b86f8: 0xffb80088  sd          $t8, 0x88($sp)
    ctx->pc = 0x2b86f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 24));
label_2b86fc:
    // 0x2b86fc: 0x1e0f02d  daddu       $fp, $t7, $zero
    ctx->pc = 0x2b86fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2b8700:
    // 0x2b8700: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2b8700u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b8704:
    // 0x2b8704: 0x24e7ffc0  addiu       $a3, $a3, -0x40
    ctx->pc = 0x2b8704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
label_2b8708:
    // 0x2b8708: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x2b8708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2b870c:
    // 0x2b870c: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x2b870cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
label_2b8710:
    // 0x2b8710: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b8710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8714:
    // 0x2b8714: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2b8714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_2b8718:
    // 0x2b8718: 0x240e000f  addiu       $t6, $zero, 0xF
    ctx->pc = 0x2b8718u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b871c:
    // 0x2b871c: 0x0  nop
    ctx->pc = 0x2b871cu;
    // NOP
label_2b8720:
    // 0x2b8720: 0x30f1826  xor         $v1, $t8, $t7
    ctx->pc = 0x2b8720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) ^ GPR_U64(ctx, 15));
label_2b8724:
    // 0x2b8724: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2b8724u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2b8728:
    // 0x2b8728: 0x6c1824  and         $v1, $v1, $t4
    ctx->pc = 0x2b8728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
label_2b872c:
    // 0x2b872c: 0x1b42824  and         $a1, $t5, $s4
    ctx->pc = 0x2b872cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & GPR_U64(ctx, 20));
label_2b8730:
    // 0x2b8730: 0x6f1826  xor         $v1, $v1, $t7
    ctx->pc = 0x2b8730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 15));
label_2b8734:
    // 0x2b8734: 0xd1178  dsll        $v0, $t5, 5
    ctx->pc = 0x2b8734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << 5);
label_2b8738:
    // 0x2b8738: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x2b8738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
label_2b873c:
    // 0x2b873c: 0x52efa  dsrl        $a1, $a1, 27
    ctx->pc = 0x2b873cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 27);
label_2b8740:
    // 0x2b8740: 0x3c035a82  lui         $v1, 0x5A82
    ctx->pc = 0x2b8740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23170 << 16));
label_2b8744:
    // 0x2b8744: 0x34637999  ori         $v1, $v1, 0x7999
    ctx->pc = 0x2b8744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31129);
label_2b8748:
    // 0x2b8748: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2b8748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2b874c:
    // 0x2b874c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2b874cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_2b8750:
    // 0x2b8750: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2b8750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2b8754:
    // 0x2b8754: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x2b8754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_2b8758:
    // 0x2b8758: 0x1941824  and         $v1, $t4, $s4
    ctx->pc = 0x2b8758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 20));
label_2b875c:
    // 0x2b875c: 0x91582d  daddu       $t3, $a0, $s1
    ctx->pc = 0x2b875cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 17));
label_2b8760:
    // 0x2b8760: 0xc17b8  dsll        $v0, $t4, 30
    ctx->pc = 0x2b8760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << 30);
label_2b8764:
    // 0x2b8764: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x2b8764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2b8768:
    // 0x2b8768: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x2b8768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
label_2b876c:
    // 0x2b876c: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x2b876cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_2b8770:
    // 0x2b8770: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x2b8770u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2b8774:
    // 0x2b8774: 0x43c025  or          $t8, $v0, $v1
    ctx->pc = 0x2b8774u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2b8778:
    // 0x2b8778: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x2b8778u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_2b877c:
    // 0x2b877c: 0x5c1ffe8  bgez        $t6, . + 4 + (-0x18 << 2)
label_2b8780:
    if (ctx->pc == 0x2B8780u) {
        ctx->pc = 0x2B8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B877Cu;
        // 0x2b8780: 0x160682d  daddu       $t5, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8784u;
        goto label_2b8784;
    }
    ctx->pc = 0x2B877Cu;
    {
        const bool branch_taken_0x2b877c = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x2B8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B877Cu;
        // 0x2b8780: 0x160682d  daddu       $t5, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b877c) {
            ctx->pc = 0x2B8720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8720;
        }
    }
    ctx->pc = 0x2B8784u;
label_2b8784:
    // 0x2b8784: 0x200c82d  daddu       $t9, $s0, $zero
    ctx->pc = 0x2b8784u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8788:
    // 0x2b8788: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x2b8788u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b878c:
    // 0x2b878c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x2b878cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_2b8790:
    // 0x2b8790: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x2b8790u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
label_2b8794:
    // 0x2b8794: 0x3c155a82  lui         $s5, 0x5A82
    ctx->pc = 0x2b8794u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)23170 << 16));
label_2b8798:
    // 0x2b8798: 0x36b57999  ori         $s5, $s5, 0x7999
    ctx->pc = 0x2b8798u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)31129);
label_2b879c:
    // 0x2b879c: 0x0  nop
    ctx->pc = 0x2b879cu;
    // NOP
label_2b87a0:
    // 0x2b87a0: 0x39c20013  xori        $v0, $t6, 0x13
    ctx->pc = 0x2b87a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)19);
label_2b87a4:
    // 0x2b87a4: 0x25c40008  addiu       $a0, $t6, 0x8
    ctx->pc = 0x2b87a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_2b87a8:
    // 0x2b87a8: 0x31ca000f  andi        $t2, $t6, 0xF
    ctx->pc = 0x2b87a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_2b87ac:
    // 0x2b87ac: 0x25c3000d  addiu       $v1, $t6, 0xD
    ctx->pc = 0x2b87acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 13));
label_2b87b0:
    // 0x2b87b0: 0x25c50002  addiu       $a1, $t6, 0x2
    ctx->pc = 0x2b87b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
label_2b87b4:
    // 0x2b87b4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x2b87b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_2b87b8:
    // 0x2b87b8: 0x3a2c80a  movz        $t9, $sp, $v0
    ctx->pc = 0x2b87b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 29));
label_2b87bc:
    // 0x2b87bc: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2b87bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_2b87c0:
    // 0x2b87c0: 0x1501021  addu        $v0, $t2, $s0
    ctx->pc = 0x2b87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
label_2b87c4:
    // 0x2b87c4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2b87c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2b87c8:
    // 0x2b87c8: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2b87c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_2b87cc:
    // 0x2b87cc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2b87ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2b87d0:
    // 0x2b87d0: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x2b87d0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2b87d4:
    // 0x2b87d4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2b87d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2b87d8:
    // 0x2b87d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b87d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2b87dc:
    // 0x2b87dc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2b87dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2b87e0:
    // 0x2b87e0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2b87e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2b87e4:
    // 0x2b87e4: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x2b87e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
label_2b87e8:
    // 0x2b87e8: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2b87e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2b87ec:
    // 0x2b87ec: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x2b87ecu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2b87f0:
    // 0x2b87f0: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2b87f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2b87f4:
    // 0x2b87f4: 0x1b23024  and         $a2, $t5, $s2
    ctx->pc = 0x2b87f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 13) & GPR_U64(ctx, 18));
label_2b87f8:
    // 0x2b87f8: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x2b87f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
label_2b87fc:
    // 0x2b87fc: 0x636fa  dsrl        $a2, $a2, 27
    ctx->pc = 0x2b87fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 27);
label_2b8800:
    // 0x2b8800: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2b8800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_2b8804:
    // 0x2b8804: 0xd1978  dsll        $v1, $t5, 5
    ctx->pc = 0x2b8804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << 5);
label_2b8808:
    // 0x2b8808: 0xe25826  xor         $t3, $a3, $v0
    ctx->pc = 0x2b8808u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
label_2b880c:
    // 0x2b880c: 0x30f4026  xor         $t0, $t8, $t7
    ctx->pc = 0x2b880cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 24) ^ GPR_U64(ctx, 15));
label_2b8810:
    // 0x2b8810: 0x1721024  and         $v0, $t3, $s2
    ctx->pc = 0x2b8810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 18));
label_2b8814:
    // 0x2b8814: 0xb2078  dsll        $a0, $t3, 1
    ctx->pc = 0x2b8814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) << 1);
label_2b8818:
    // 0x2b8818: 0x217fa  dsrl        $v0, $v0, 31
    ctx->pc = 0x2b8818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 31);
label_2b881c:
    // 0x2b881c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2b881cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_2b8820:
    // 0x2b8820: 0x825825  or          $t3, $a0, $v0
    ctx->pc = 0x2b8820u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2b8824:
    // 0x2b8824: 0x10c4024  and         $t0, $t0, $t4
    ctx->pc = 0x2b8824u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 12));
label_2b8828:
    // 0x2b8828: 0x1922824  and         $a1, $t4, $s2
    ctx->pc = 0x2b8828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & GPR_U64(ctx, 18));
label_2b882c:
    // 0x2b882c: 0x171102d  daddu       $v0, $t3, $s1
    ctx->pc = 0x2b882cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 17));
label_2b8830:
    // 0x2b8830: 0xc27b8  dsll        $a0, $t4, 30
    ctx->pc = 0x2b8830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) << 30);
label_2b8834:
    // 0x2b8834: 0x75182d  daddu       $v1, $v1, $s5
    ctx->pc = 0x2b8834u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 21));
label_2b8838:
    // 0x2b8838: 0x10f4026  xor         $t0, $t0, $t7
    ctx->pc = 0x2b8838u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 15));
label_2b883c:
    // 0x2b883c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2b883cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_2b8840:
    // 0x2b8840: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x2b8840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2b8844:
    // 0x2b8844: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x2b8844u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2b8848:
    // 0x2b8848: 0x3aa3021  addu        $a2, $sp, $t2
    ctx->pc = 0x2b8848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 10)));
label_2b884c:
    // 0x2b884c: 0x528ba  dsrl        $a1, $a1, 2
    ctx->pc = 0x2b884cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
label_2b8850:
    // 0x2b8850: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x2b8850u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_2b8854:
    // 0x2b8854: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2b8854u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_2b8858:
    // 0x2b8858: 0x48682d  daddu       $t5, $v0, $t0
    ctx->pc = 0x2b8858u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 8));
label_2b885c:
    // 0x2b885c: 0x85c025  or          $t8, $a0, $a1
    ctx->pc = 0x2b885cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2b8860:
    // 0x2b8860: 0x29c20014  slti        $v0, $t6, 0x14
    ctx->pc = 0x2b8860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)20) ? 1 : 0);
label_2b8864:
    // 0x2b8864: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2b8868:
    if (ctx->pc == 0x2B8868u) {
        ctx->pc = 0x2B8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8864u;
        // 0x2b8868: 0xfccb0000  sd          $t3, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B886Cu;
        goto label_2b886c;
    }
    ctx->pc = 0x2B8864u;
    {
        const bool branch_taken_0x2b8864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8864u;
        // 0x2b8868: 0xfccb0000  sd          $t3, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8864) {
            ctx->pc = 0x2B87A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b87a0;
        }
    }
    ctx->pc = 0x2B886Cu;
label_2b886c:
    // 0x2b886c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2b886cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8870:
    // 0x2b8870: 0x240e0014  addiu       $t6, $zero, 0x14
    ctx->pc = 0x2b8870u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b8874:
    // 0x2b8874: 0x140c82d  daddu       $t9, $t2, $zero
    ctx->pc = 0x2b8874u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2b8878:
    // 0x2b8878: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x2b8878u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_2b887c:
    // 0x2b887c: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x2b887cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
label_2b8880:
    // 0x2b8880: 0x3c156ed9  lui         $s5, 0x6ED9
    ctx->pc = 0x2b8880u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)28377 << 16));
label_2b8884:
    // 0x2b8884: 0x36b5eba1  ori         $s5, $s5, 0xEBA1
    ctx->pc = 0x2b8884u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)60321);
label_2b8888:
    // 0x2b8888: 0x25c2000d  addiu       $v0, $t6, 0xD
    ctx->pc = 0x2b8888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 13));
label_2b888c:
    // 0x2b888c: 0x39c40018  xori        $a0, $t6, 0x18
    ctx->pc = 0x2b888cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)24);
label_2b8890:
    // 0x2b8890: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2b8890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2b8894:
    // 0x2b8894: 0x39c70020  xori        $a3, $t6, 0x20
    ctx->pc = 0x2b8894u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)32);
label_2b8898:
    // 0x2b8898: 0x25c30008  addiu       $v1, $t6, 0x8
    ctx->pc = 0x2b8898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_2b889c:
    // 0x2b889c: 0x25c50002  addiu       $a1, $t6, 0x2
    ctx->pc = 0x2b889cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
label_2b88a0:
    // 0x2b88a0: 0x31c9000f  andi        $t1, $t6, 0xF
    ctx->pc = 0x2b88a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_2b88a4:
    // 0x2b88a4: 0x3a4800a  movz        $s0, $sp, $a0
    ctx->pc = 0x2b88a4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 29));
label_2b88a8:
    // 0x2b88a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2b88ac:
    // 0x2b88ac: 0x39c6001e  xori        $a2, $t6, 0x1E
    ctx->pc = 0x2b88acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)30);
label_2b88b0:
    // 0x2b88b0: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x2b88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2b88b4:
    // 0x2b88b4: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x2b88b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2b88b8:
    // 0x2b88b8: 0x3a7c80a  movz        $t9, $sp, $a3
    ctx->pc = 0x2b88b8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 29));
label_2b88bc:
    // 0x2b88bc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2b88bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2b88c0:
    // 0x2b88c0: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2b88c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_2b88c4:
    // 0x2b88c4: 0x3a6500a  movz        $t2, $sp, $a2
    ctx->pc = 0x2b88c4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 29));
label_2b88c8:
    // 0x2b88c8: 0x1391021  addu        $v0, $t1, $t9
    ctx->pc = 0x2b88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 25)));
label_2b88cc:
    // 0x2b88cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2b88d0:
    // 0x2b88d0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2b88d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2b88d4:
    // 0x2b88d4: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2b88d4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2b88d8:
    // 0x2b88d8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2b88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2b88dc:
    // 0x2b88dc: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2b88dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_2b88e0:
    // 0x2b88e0: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x2b88e0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2b88e4:
    // 0x2b88e4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2b88e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_2b88e8:
    // 0x2b88e8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2b88e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2b88ec:
    // 0x2b88ec: 0x1b22024  and         $a0, $t5, $s2
    ctx->pc = 0x2b88ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & GPR_U64(ctx, 18));
label_2b88f0:
    // 0x2b88f0: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x2b88f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2b88f4:
    // 0x2b88f4: 0xc83026  xor         $a2, $a2, $t0
    ctx->pc = 0x2b88f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
label_2b88f8:
    // 0x2b88f8: 0x426fa  dsrl        $a0, $a0, 27
    ctx->pc = 0x2b88f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 27);
label_2b88fc:
    // 0x2b88fc: 0xd1978  dsll        $v1, $t5, 5
    ctx->pc = 0x2b88fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << 5);
label_2b8900:
    // 0x2b8900: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x2b8900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
label_2b8904:
    // 0x2b8904: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b8904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2b8908:
    // 0x2b8908: 0xc25826  xor         $t3, $a2, $v0
    ctx->pc = 0x2b8908u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
label_2b890c:
    // 0x2b890c: 0x1984026  xor         $t0, $t4, $t8
    ctx->pc = 0x2b890cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 24));
label_2b8910:
    // 0x2b8910: 0x1721024  and         $v0, $t3, $s2
    ctx->pc = 0x2b8910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 18));
label_2b8914:
    // 0x2b8914: 0xb2078  dsll        $a0, $t3, 1
    ctx->pc = 0x2b8914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) << 1);
label_2b8918:
    // 0x2b8918: 0x217fa  dsrl        $v0, $v0, 31
    ctx->pc = 0x2b8918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 31);
label_2b891c:
    // 0x2b891c: 0x1922824  and         $a1, $t4, $s2
    ctx->pc = 0x2b891cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & GPR_U64(ctx, 18));
label_2b8920:
    // 0x2b8920: 0x825825  or          $t3, $a0, $v0
    ctx->pc = 0x2b8920u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2b8924:
    // 0x2b8924: 0xc37b8  dsll        $a2, $t4, 30
    ctx->pc = 0x2b8924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) << 30);
label_2b8928:
    // 0x2b8928: 0x171102d  daddu       $v0, $t3, $s1
    ctx->pc = 0x2b8928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 17));
label_2b892c:
    // 0x2b892c: 0x75182d  daddu       $v1, $v1, $s5
    ctx->pc = 0x2b892cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 21));
label_2b8930:
    // 0x2b8930: 0x10f4026  xor         $t0, $t0, $t7
    ctx->pc = 0x2b8930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 15));
label_2b8934:
    // 0x2b8934: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2b8934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_2b8938:
    // 0x2b8938: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x2b8938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2b893c:
    // 0x2b893c: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x2b893cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2b8940:
    // 0x2b8940: 0x3a92021  addu        $a0, $sp, $t1
    ctx->pc = 0x2b8940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 9)));
label_2b8944:
    // 0x2b8944: 0x528ba  dsrl        $a1, $a1, 2
    ctx->pc = 0x2b8944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
label_2b8948:
    // 0x2b8948: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x2b8948u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_2b894c:
    // 0x2b894c: 0x48682d  daddu       $t5, $v0, $t0
    ctx->pc = 0x2b894cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 8));
label_2b8950:
    // 0x2b8950: 0xc5c025  or          $t8, $a2, $a1
    ctx->pc = 0x2b8950u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_2b8954:
    // 0x2b8954: 0x29c20028  slti        $v0, $t6, 0x28
    ctx->pc = 0x2b8954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)40) ? 1 : 0);
label_2b8958:
    // 0x2b8958: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_2b895c:
    if (ctx->pc == 0x2B895Cu) {
        ctx->pc = 0x2B895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8958u;
        // 0x2b895c: 0xfc8b0000  sd          $t3, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8960u;
        goto label_2b8960;
    }
    ctx->pc = 0x2B8958u;
    {
        const bool branch_taken_0x2b8958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8958u;
        // 0x2b895c: 0xfc8b0000  sd          $t3, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8958) {
            ctx->pc = 0x2B8888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8888;
        }
    }
    ctx->pc = 0x2B8960u;
label_2b8960:
    // 0x2b8960: 0x240e0028  addiu       $t6, $zero, 0x28
    ctx->pc = 0x2b8960u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2b8964:
    // 0x2b8964: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2b8964u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_2b8968:
    // 0x2b8968: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x2b8968u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
label_2b896c:
    // 0x2b896c: 0x34108f1b  ori         $s0, $zero, 0x8F1B
    ctx->pc = 0x2b896cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36635);
label_2b8970:
    // 0x2b8970: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x2b8970u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
label_2b8974:
    // 0x2b8974: 0x3610bcdc  ori         $s0, $s0, 0xBCDC
    ctx->pc = 0x2b8974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)48348);
label_2b8978:
    // 0x2b8978: 0x25c3000d  addiu       $v1, $t6, 0xD
    ctx->pc = 0x2b8978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 13));
label_2b897c:
    // 0x2b897c: 0x25c50002  addiu       $a1, $t6, 0x2
    ctx->pc = 0x2b897cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
label_2b8980:
    // 0x2b8980: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2b8980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2b8984:
    // 0x2b8984: 0x25c40008  addiu       $a0, $t6, 0x8
    ctx->pc = 0x2b8984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_2b8988:
    // 0x2b8988: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b8988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2b898c:
    // 0x2b898c: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2b898cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_2b8990:
    // 0x2b8990: 0x3a33021  addu        $a2, $sp, $v1
    ctx->pc = 0x2b8990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_2b8994:
    // 0x2b8994: 0x31c2000f  andi        $v0, $t6, 0xF
    ctx->pc = 0x2b8994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_2b8998:
    // 0x2b8998: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2b8998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2b899c:
    // 0x2b899c: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2b899cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_2b89a0:
    // 0x2b89a0: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x2b89a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_2b89a4:
    // 0x2b89a4: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x2b89a4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2b89a8:
    // 0x2b89a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2b89ac:
    // 0x2b89ac: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2b89acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2b89b0:
    // 0x2b89b0: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x2b89b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2b89b4:
    // 0x2b89b4: 0x3a24821  addu        $t1, $sp, $v0
    ctx->pc = 0x2b89b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2b89b8:
    // 0x2b89b8: 0x3a43821  addu        $a3, $sp, $a0
    ctx->pc = 0x2b89b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_2b89bc:
    // 0x2b89bc: 0xdd230000  ld          $v1, 0x0($t1)
    ctx->pc = 0x2b89bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_2b89c0:
    // 0x2b89c0: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x2b89c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_2b89c4:
    // 0x2b89c4: 0x1aa1024  and         $v0, $t5, $t2
    ctx->pc = 0x2b89c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
label_2b89c8:
    // 0x2b89c8: 0x216fa  dsrl        $v0, $v0, 27
    ctx->pc = 0x2b89c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 27);
label_2b89cc:
    // 0x2b89cc: 0xd2178  dsll        $a0, $t5, 5
    ctx->pc = 0x2b89ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) << 5);
label_2b89d0:
    // 0x2b89d0: 0xa62826  xor         $a1, $a1, $a2
    ctx->pc = 0x2b89d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
label_2b89d4:
    // 0x2b89d4: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x2b89d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
label_2b89d8:
    // 0x2b89d8: 0x655826  xor         $t3, $v1, $a1
    ctx->pc = 0x2b89d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
label_2b89dc:
    // 0x2b89dc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2b89dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2b89e0:
    // 0x2b89e0: 0x16a1024  and         $v0, $t3, $t2
    ctx->pc = 0x2b89e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
label_2b89e4:
    // 0x2b89e4: 0xb1878  dsll        $v1, $t3, 1
    ctx->pc = 0x2b89e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << 1);
label_2b89e8:
    // 0x2b89e8: 0x217fa  dsrl        $v0, $v0, 31
    ctx->pc = 0x2b89e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 31);
label_2b89ec:
    // 0x2b89ec: 0x1983025  or          $a2, $t4, $t8
    ctx->pc = 0x2b89ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | GPR_U64(ctx, 24));
label_2b89f0:
    // 0x2b89f0: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x2b89f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2b89f4:
    // 0x2b89f4: 0xcf3024  and         $a2, $a2, $t7
    ctx->pc = 0x2b89f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 15));
label_2b89f8:
    // 0x2b89f8: 0x1981024  and         $v0, $t4, $t8
    ctx->pc = 0x2b89f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 24));
label_2b89fc:
    // 0x2b89fc: 0x18a2824  and         $a1, $t4, $t2
    ctx->pc = 0x2b89fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
label_2b8a00:
    // 0x2b8a00: 0x171182d  daddu       $v1, $t3, $s1
    ctx->pc = 0x2b8a00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 17));
label_2b8a04:
    // 0x2b8a04: 0xc3fb8  dsll        $a3, $t4, 30
    ctx->pc = 0x2b8a04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) << 30);
label_2b8a08:
    // 0x2b8a08: 0x90202d  daddu       $a0, $a0, $s0
    ctx->pc = 0x2b8a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
label_2b8a0c:
    // 0x2b8a0c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2b8a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2b8a10:
    // 0x2b8a10: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x2b8a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2b8a14:
    // 0x2b8a14: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x2b8a14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_2b8a18:
    // 0x2b8a18: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x2b8a18u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2b8a1c:
    // 0x2b8a1c: 0x528ba  dsrl        $a1, $a1, 2
    ctx->pc = 0x2b8a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
label_2b8a20:
    // 0x2b8a20: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x2b8a20u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_2b8a24:
    // 0x2b8a24: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2b8a24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_2b8a28:
    // 0x2b8a28: 0x62682d  daddu       $t5, $v1, $v0
    ctx->pc = 0x2b8a28u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_2b8a2c:
    // 0x2b8a2c: 0xe5c025  or          $t8, $a3, $a1
    ctx->pc = 0x2b8a2cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_2b8a30:
    // 0x2b8a30: 0x29c2003c  slti        $v0, $t6, 0x3C
    ctx->pc = 0x2b8a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)60) ? 1 : 0);
label_2b8a34:
    // 0x2b8a34: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_2b8a38:
    if (ctx->pc == 0x2B8A38u) {
        ctx->pc = 0x2B8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A34u;
        // 0x2b8a38: 0xfd2b0000  sd          $t3, 0x0($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A3Cu;
        goto label_2b8a3c;
    }
    ctx->pc = 0x2B8A34u;
    {
        const bool branch_taken_0x2b8a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A34u;
        // 0x2b8a38: 0xfd2b0000  sd          $t3, 0x0($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a34) {
            ctx->pc = 0x2B8978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8978;
        }
    }
    ctx->pc = 0x2B8A3Cu;
label_2b8a3c:
    // 0x2b8a3c: 0x240e003c  addiu       $t6, $zero, 0x3C
    ctx->pc = 0x2b8a3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2b8a40:
    // 0x2b8a40: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x2b8a40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_2b8a44:
    // 0x2b8a44: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x2b8a44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
label_2b8a48:
    // 0x2b8a48: 0x3410ca62  ori         $s0, $zero, 0xCA62
    ctx->pc = 0x2b8a48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51810);
label_2b8a4c:
    // 0x2b8a4c: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x2b8a4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
label_2b8a50:
    // 0x2b8a50: 0x3610c1d6  ori         $s0, $s0, 0xC1D6
    ctx->pc = 0x2b8a50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)49622);
label_2b8a54:
    // 0x2b8a54: 0x0  nop
    ctx->pc = 0x2b8a54u;
    // NOP
label_2b8a58:
    // 0x2b8a58: 0x25c3000d  addiu       $v1, $t6, 0xD
    ctx->pc = 0x2b8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 13));
label_2b8a5c:
    // 0x2b8a5c: 0x25c40008  addiu       $a0, $t6, 0x8
    ctx->pc = 0x2b8a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_2b8a60:
    // 0x2b8a60: 0x31c2000f  andi        $v0, $t6, 0xF
    ctx->pc = 0x2b8a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_2b8a64:
    // 0x2b8a64: 0x25c50002  addiu       $a1, $t6, 0x2
    ctx->pc = 0x2b8a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
label_2b8a68:
    // 0x2b8a68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2b8a6c:
    // 0x2b8a6c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2b8a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2b8a70:
    // 0x2b8a70: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2b8a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_2b8a74:
    // 0x2b8a74: 0x3a24821  addu        $t1, $sp, $v0
    ctx->pc = 0x2b8a74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2b8a78:
    // 0x2b8a78: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2b8a7c:
    // 0x2b8a7c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2b8a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2b8a80:
    // 0x2b8a80: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2b8a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_2b8a84:
    // 0x2b8a84: 0x3a33021  addu        $a2, $sp, $v1
    ctx->pc = 0x2b8a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_2b8a88:
    // 0x2b8a88: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x2b8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_2b8a8c:
    // 0x2b8a8c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2b8a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2b8a90:
    // 0x2b8a90: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x2b8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_2b8a94:
    // 0x2b8a94: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x2b8a94u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2b8a98:
    // 0x2b8a98: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x2b8a98u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2b8a9c:
    // 0x2b8a9c: 0x1aa2824  and         $a1, $t5, $t2
    ctx->pc = 0x2b8a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
label_2b8aa0:
    // 0x2b8aa0: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x2b8aa0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2b8aa4:
    // 0x2b8aa4: 0x52efa  dsrl        $a1, $a1, 27
    ctx->pc = 0x2b8aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 27);
label_2b8aa8:
    // 0x2b8aa8: 0xdd220000  ld          $v0, 0x0($t1)
    ctx->pc = 0x2b8aa8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_2b8aac:
    // 0x2b8aac: 0xd2178  dsll        $a0, $t5, 5
    ctx->pc = 0x2b8aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) << 5);
label_2b8ab0:
    // 0x2b8ab0: 0xe63826  xor         $a3, $a3, $a2
    ctx->pc = 0x2b8ab0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
label_2b8ab4:
    // 0x2b8ab4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2b8ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2b8ab8:
    // 0x2b8ab8: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x2b8ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
label_2b8abc:
    // 0x2b8abc: 0x1981826  xor         $v1, $t4, $t8
    ctx->pc = 0x2b8abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 24));
label_2b8ac0:
    // 0x2b8ac0: 0x475826  xor         $t3, $v0, $a3
    ctx->pc = 0x2b8ac0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
label_2b8ac4:
    // 0x2b8ac4: 0x6f1826  xor         $v1, $v1, $t7
    ctx->pc = 0x2b8ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 15));
label_2b8ac8:
    // 0x2b8ac8: 0x16a1024  and         $v0, $t3, $t2
    ctx->pc = 0x2b8ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
label_2b8acc:
    // 0x2b8acc: 0xb2878  dsll        $a1, $t3, 1
    ctx->pc = 0x2b8accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) << 1);
label_2b8ad0:
    // 0x2b8ad0: 0x217fa  dsrl        $v0, $v0, 31
    ctx->pc = 0x2b8ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 31);
label_2b8ad4:
    // 0x2b8ad4: 0x90202d  daddu       $a0, $a0, $s0
    ctx->pc = 0x2b8ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 16));
label_2b8ad8:
    // 0x2b8ad8: 0xa25825  or          $t3, $a1, $v0
    ctx->pc = 0x2b8ad8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2b8adc:
    // 0x2b8adc: 0x18a3024  and         $a2, $t4, $t2
    ctx->pc = 0x2b8adcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
label_2b8ae0:
    // 0x2b8ae0: 0x163182d  daddu       $v1, $t3, $v1
    ctx->pc = 0x2b8ae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 3));
label_2b8ae4:
    // 0x2b8ae4: 0xfd2b0000  sd          $t3, 0x0($t1)
    ctx->pc = 0x2b8ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 11));
label_2b8ae8:
    // 0x2b8ae8: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x2b8ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_2b8aec:
    // 0x2b8aec: 0xc17b8  dsll        $v0, $t4, 30
    ctx->pc = 0x2b8aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << 30);
label_2b8af0:
    // 0x2b8af0: 0x71582d  daddu       $t3, $v1, $s1
    ctx->pc = 0x2b8af0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
label_2b8af4:
    // 0x2b8af4: 0x630ba  dsrl        $a2, $a2, 2
    ctx->pc = 0x2b8af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 2);
label_2b8af8:
    // 0x2b8af8: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x2b8af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2b8afc:
    // 0x2b8afc: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x2b8afcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b00:
    // 0x2b8b00: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x2b8b00u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b04:
    // 0x2b8b04: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2b8b04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_2b8b08:
    // 0x2b8b08: 0x46c025  or          $t8, $v0, $a2
    ctx->pc = 0x2b8b08u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2b8b0c:
    // 0x2b8b0c: 0x29c20050  slti        $v0, $t6, 0x50
    ctx->pc = 0x2b8b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)80) ? 1 : 0);
label_2b8b10:
    // 0x2b8b10: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_2b8b14:
    if (ctx->pc == 0x2B8B14u) {
        ctx->pc = 0x2B8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B10u;
        // 0x2b8b14: 0x160682d  daddu       $t5, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B18u;
        goto label_2b8b18;
    }
    ctx->pc = 0x2B8B10u;
    {
        const bool branch_taken_0x2b8b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B10u;
        // 0x2b8b14: 0x160682d  daddu       $t5, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b10) {
            ctx->pc = 0x2B8A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8a58;
        }
    }
    ctx->pc = 0x2B8B18u;
label_2b8b18:
    // 0x2b8b18: 0xdfa40080  ld          $a0, 0x80($sp)
    ctx->pc = 0x2b8b18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b8b1c:
    // 0x2b8b1c: 0x2cb102d  daddu       $v0, $s6, $t3
    ctx->pc = 0x2b8b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 11));
label_2b8b20:
    // 0x2b8b20: 0xdfa50088  ld          $a1, 0x88($sp)
    ctx->pc = 0x2b8b20u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2b8b24:
    // 0x2b8b24: 0x2f1302d  daddu       $a2, $s7, $s1
    ctx->pc = 0x2b8b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 17));
label_2b8b28:
    // 0x2b8b28: 0x8c182d  daddu       $v1, $a0, $t4
    ctx->pc = 0x2b8b28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 12));
label_2b8b2c:
    // 0x2b8b2c: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2b8b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2b8b30:
    // 0x2b8b30: 0xb8202d  daddu       $a0, $a1, $t8
    ctx->pc = 0x2b8b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 24));
label_2b8b34:
    // 0x2b8b34: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2b8b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_2b8b38:
    // 0x2b8b38: 0x3cf282d  daddu       $a1, $fp, $t7
    ctx->pc = 0x2b8b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 15));
label_2b8b3c:
    // 0x2b8b3c: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x2b8b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
label_2b8b40:
    // 0x2b8b40: 0x942024  and         $a0, $a0, $s4
    ctx->pc = 0x2b8b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
label_2b8b44:
    // 0x2b8b44: 0xb42824  and         $a1, $a1, $s4
    ctx->pc = 0x2b8b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
label_2b8b48:
    // 0x2b8b48: 0xd43024  and         $a2, $a2, $s4
    ctx->pc = 0x2b8b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 20));
label_2b8b4c:
    // 0x2b8b4c: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x2b8b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
label_2b8b50:
    // 0x2b8b50: 0xfe630008  sd          $v1, 0x8($s3)
    ctx->pc = 0x2b8b50u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
label_2b8b54:
    // 0x2b8b54: 0xfe640010  sd          $a0, 0x10($s3)
    ctx->pc = 0x2b8b54u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 4));
label_2b8b58:
    // 0x2b8b58: 0xfe650018  sd          $a1, 0x18($s3)
    ctx->pc = 0x2b8b58u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 5));
label_2b8b5c:
    // 0x2b8b5c: 0x1ce0fede  bgtz        $a3, . + 4 + (-0x122 << 2)
label_2b8b60:
    if (ctx->pc == 0x2B8B60u) {
        ctx->pc = 0x2B8B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B5Cu;
        // 0x2b8b60: 0xfe660020  sd          $a2, 0x20($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B64u;
        goto label_2b8b64;
    }
    ctx->pc = 0x2B8B5Cu;
    {
        const bool branch_taken_0x2b8b5c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2B8B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B5Cu;
        // 0x2b8b60: 0xfe660020  sd          $a2, 0x20($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b5c) {
            ctx->pc = 0x2B86D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b86d8;
        }
    }
    ctx->pc = 0x2B8B64u;
label_2b8b64:
    // 0x2b8b64: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x2b8b64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2b8b68:
    // 0x2b8b68: 0xdfb70110  ld          $s7, 0x110($sp)
    ctx->pc = 0x2b8b68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2b8b6c:
    // 0x2b8b6c: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x2b8b6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2b8b70:
    // 0x2b8b70: 0xdfb500f0  ld          $s5, 0xF0($sp)
    ctx->pc = 0x2b8b70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2b8b74:
    // 0x2b8b74: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x2b8b74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2b8b78:
    // 0x2b8b78: 0xdfb300d0  ld          $s3, 0xD0($sp)
    ctx->pc = 0x2b8b78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2b8b7c:
    // 0x2b8b7c: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x2b8b7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2b8b80:
    // 0x2b8b80: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x2b8b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2b8b84:
    // 0x2b8b84: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x2b8b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b8b88:
    // 0x2b8b88: 0x3e00008  jr          $ra
label_2b8b8c:
    if (ctx->pc == 0x2B8B8Cu) {
        ctx->pc = 0x2B8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B88u;
        // 0x2b8b8c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B90u;
        goto label_2b8b90;
    }
    ctx->pc = 0x2B8B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B88u;
        // 0x2b8b8c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8B90u;
label_2b8b90:
    // 0x2b8b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b8b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b8b94:
    // 0x2b8b94: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2b8b94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
label_2b8b98:
    // 0x2b8b98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b8b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b8b9c:
    // 0x2b8b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8ba0:
    // 0x2b8ba0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b8ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b8ba4:
    // 0x2b8ba4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b8ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ba8:
    // 0x2b8ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b8bac:
    // 0x2b8bac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b8bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b8bb0:
    // 0x2b8bb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b8bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b8bb4:
    // 0x2b8bb4: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x2b8bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_2b8bb8:
    // 0x2b8bb8: 0x252576d0  addiu       $a1, $t1, 0x76D0
    ctx->pc = 0x2b8bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 30416));
label_2b8bbc:
    // 0x2b8bbc: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x2b8bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_2b8bc0:
    // 0x2b8bc0: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2b8bc0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2b8bc4:
    // 0x2b8bc4: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x2b8bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2b8bc8:
    // 0x2b8bc8: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x2b8bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2b8bcc:
    // 0x2b8bcc: 0x1111021  addu        $v0, $t0, $s1
    ctx->pc = 0x2b8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
label_2b8bd0:
    // 0x2b8bd0: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_2b8bd4:
    if (ctx->pc == 0x2B8BD4u) {
        ctx->pc = 0x2B8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BD0u;
        // 0x2b8bd4: 0xdc470000  ld          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BD8u;
        goto label_2b8bd8;
    }
    ctx->pc = 0x2B8BD0u;
    {
        const bool branch_taken_0x2b8bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BD0u;
        // 0x2b8bd4: 0xdc470000  ld          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bd0) {
            ctx->pc = 0x2B8C18u;
            goto label_2b8c18;
        }
    }
    ctx->pc = 0x2B8BD8u;
label_2b8bd8:
    // 0x2b8bd8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2b8bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b8bdc:
    // 0x2b8bdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b8be0:
    if (ctx->pc == 0x2B8BE0u) {
        ctx->pc = 0x2B8BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BDCu;
        // 0x2b8be0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BE4u;
        goto label_2b8be4;
    }
    ctx->pc = 0x2B8BDCu;
    {
        const bool branch_taken_0x2b8bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BDCu;
        // 0x2b8be0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bdc) {
            ctx->pc = 0x2B8BF4u;
            goto label_2b8bf4;
        }
    }
    ctx->pc = 0x2B8BE4u;
label_2b8be4:
    // 0x2b8be4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2b8be8:
    if (ctx->pc == 0x2B8BE8u) {
        ctx->pc = 0x2B8BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BE4u;
        // 0x2b8be8: 0x1111821  addu        $v1, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BECu;
        goto label_2b8bec;
    }
    ctx->pc = 0x2B8BE4u;
    {
        const bool branch_taken_0x2b8be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BE4u;
        // 0x2b8be8: 0x1111821  addu        $v1, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8be4) {
            ctx->pc = 0x2B8C0Cu;
            goto label_2b8c0c;
        }
    }
    ctx->pc = 0x2B8BECu;
label_2b8bec:
    // 0x2b8bec: 0x10000016  b           . + 4 + (0x16 << 2)
label_2b8bf0:
    if (ctx->pc == 0x2B8BF0u) {
        ctx->pc = 0x2B8BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BECu;
        // 0x2b8bf0: 0xfc670000  sd          $a3, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BF4u;
        goto label_2b8bf4;
    }
    ctx->pc = 0x2B8BECu;
    {
        const bool branch_taken_0x2b8bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BECu;
        // 0x2b8bf0: 0xfc670000  sd          $a3, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bec) {
            ctx->pc = 0x2B8C48u;
            goto label_2b8c48;
        }
    }
    ctx->pc = 0x2B8BF4u;
label_2b8bf4:
    // 0x2b8bf4: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
label_2b8bf8:
    if (ctx->pc == 0x2B8BF8u) {
        ctx->pc = 0x2B8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BF4u;
        // 0x2b8bf8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BFCu;
        goto label_2b8bfc;
    }
    ctx->pc = 0x2B8BF4u;
    {
        const bool branch_taken_0x2b8bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BF4u;
        // 0x2b8bf8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bf4) {
            ctx->pc = 0x2B8C28u;
            goto label_2b8c28;
        }
    }
    ctx->pc = 0x2B8BFCu;
label_2b8bfc:
    // 0x2b8bfc: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
label_2b8c00:
    if (ctx->pc == 0x2B8C00u) {
        ctx->pc = 0x2B8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BFCu;
        // 0x2b8c00: 0x1111821  addu        $v1, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C04u;
        goto label_2b8c04;
    }
    ctx->pc = 0x2B8BFCu;
    {
        const bool branch_taken_0x2b8bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BFCu;
        // 0x2b8c00: 0x1111821  addu        $v1, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bfc) {
            ctx->pc = 0x2B8C38u;
            goto label_2b8c38;
        }
    }
    ctx->pc = 0x2B8C04u;
label_2b8c04:
    // 0x2b8c04: 0x10000010  b           . + 4 + (0x10 << 2)
label_2b8c08:
    if (ctx->pc == 0x2B8C08u) {
        ctx->pc = 0x2B8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C04u;
        // 0x2b8c08: 0xfc670000  sd          $a3, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C0Cu;
        goto label_2b8c0c;
    }
    ctx->pc = 0x2B8C04u;
    {
        const bool branch_taken_0x2b8c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C04u;
        // 0x2b8c08: 0xfc670000  sd          $a3, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c04) {
            ctx->pc = 0x2B8C48u;
            goto label_2b8c48;
        }
    }
    ctx->pc = 0x2B8C0Cu;
label_2b8c0c:
    // 0x2b8c0c: 0x912276d0  lbu         $v0, 0x76D0($t1)
    ctx->pc = 0x2b8c0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 30416)));
label_2b8c10:
    // 0x2b8c10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8c14:
    // 0x2b8c14: 0x23e38  dsll        $a3, $v0, 24
    ctx->pc = 0x2b8c14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 24);
label_2b8c18:
    // 0x2b8c18: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2b8c18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2b8c1c:
    // 0x2b8c1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8c20:
    // 0x2b8c20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2b8c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2b8c24:
    // 0x2b8c24: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2b8c24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_2b8c28:
    // 0x2b8c28: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2b8c28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2b8c2c:
    // 0x2b8c2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8c30:
    // 0x2b8c30: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2b8c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2b8c34:
    // 0x2b8c34: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2b8c34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_2b8c38:
    // 0x2b8c38: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2b8c38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2b8c3c:
    // 0x2b8c3c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2b8c3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_2b8c40:
    // 0x2b8c40: 0x1111821  addu        $v1, $t0, $s1
    ctx->pc = 0x2b8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
label_2b8c44:
    // 0x2b8c44: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x2b8c44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
label_2b8c48:
    // 0x2b8c48: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x2b8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_2b8c4c:
    // 0x2b8c4c: 0x28420038  slti        $v0, $v0, 0x38
    ctx->pc = 0x2b8c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)56) ? 1 : 0);
label_2b8c50:
    // 0x2b8c50: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2b8c54:
    if (ctx->pc == 0x2B8C54u) {
        ctx->pc = 0x2B8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C50u;
        // 0x2b8c54: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C58u;
        goto label_2b8c58;
    }
    ctx->pc = 0x2B8C50u;
    {
        const bool branch_taken_0x2b8c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C50u;
        // 0x2b8c54: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c50) {
            ctx->pc = 0x2B8C9Cu;
            goto label_2b8c9c;
        }
    }
    ctx->pc = 0x2B8C58u;
label_2b8c58:
    // 0x2b8c58: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x2b8c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_2b8c5c:
    // 0x2b8c5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2b8c60:
    if (ctx->pc == 0x2B8C60u) {
        ctx->pc = 0x2B8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C5Cu;
        // 0x2b8c60: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C64u;
        goto label_2b8c64;
    }
    ctx->pc = 0x2B8C5Cu;
    {
        const bool branch_taken_0x2b8c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C5Cu;
        // 0x2b8c60: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c5c) {
            ctx->pc = 0x2B8C84u;
            goto label_2b8c84;
        }
    }
    ctx->pc = 0x2B8C64u;
label_2b8c64:
    // 0x2b8c64: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2b8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2b8c68:
    // 0x2b8c68: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2b8c68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
label_2b8c6c:
    // 0x2b8c6c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b8c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2b8c70:
    // 0x2b8c70: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2b8c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2b8c74:
    // 0x2b8c74: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x2b8c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_2b8c78:
    // 0x2b8c78: 0x0  nop
    ctx->pc = 0x2b8c78u;
    // NOP
label_2b8c7c:
    // 0x2b8c7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2b8c80:
    if (ctx->pc == 0x2B8C80u) {
        ctx->pc = 0x2B8C84u;
        goto label_2b8c84;
    }
    ctx->pc = 0x2B8C7Cu;
    {
        const bool branch_taken_0x2b8c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8c7c) {
            ctx->pc = 0x2B8C68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8c68;
        }
    }
    ctx->pc = 0x2B8C84u;
label_2b8c84:
    // 0x2b8c84: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2b8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2b8c88:
    // 0x2b8c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8c8c:
    // 0x2b8c8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b8c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b8c90:
    // 0x2b8c90: 0x40f809  jalr        $v0
label_2b8c94:
    if (ctx->pc == 0x2B8C94u) {
        ctx->pc = 0x2B8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C90u;
        // 0x2b8c94: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C98u;
        goto label_2b8c98;
    }
    ctx->pc = 0x2B8C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B8C98u);
        ctx->pc = 0x2B8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C90u;
        // 0x2b8c94: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8C90u, 0x2B8C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B8C98u;
label_2b8c98:
    // 0x2b8c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8c9c:
    // 0x2b8c9c: 0x28c2000e  slti        $v0, $a2, 0xE
    ctx->pc = 0x2b8c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
label_2b8ca0:
    // 0x2b8ca0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2b8ca4:
    if (ctx->pc == 0x2B8CA4u) {
        ctx->pc = 0x2B8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CA0u;
        // 0x2b8ca4: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CA8u;
        goto label_2b8ca8;
    }
    ctx->pc = 0x2B8CA0u;
    {
        const bool branch_taken_0x2b8ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CA0u;
        // 0x2b8ca4: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ca0) {
            ctx->pc = 0x2B8CCCu;
            goto label_2b8ccc;
        }
    }
    ctx->pc = 0x2B8CA8u;
label_2b8ca8:
    // 0x2b8ca8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2b8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2b8cac:
    // 0x2b8cac: 0x0  nop
    ctx->pc = 0x2b8cacu;
    // NOP
label_2b8cb0:
    // 0x2b8cb0: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2b8cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
label_2b8cb4:
    // 0x2b8cb4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b8cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2b8cb8:
    // 0x2b8cb8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2b8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2b8cbc:
    // 0x2b8cbc: 0x28c2000e  slti        $v0, $a2, 0xE
    ctx->pc = 0x2b8cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
label_2b8cc0:
    // 0x2b8cc0: 0x0  nop
    ctx->pc = 0x2b8cc0u;
    // NOP
label_2b8cc4:
    // 0x2b8cc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2b8cc8:
    if (ctx->pc == 0x2B8CC8u) {
        ctx->pc = 0x2B8CCCu;
        goto label_2b8ccc;
    }
    ctx->pc = 0x2B8CC4u;
    {
        const bool branch_taken_0x2b8cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8cc4) {
            ctx->pc = 0x2B8CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8cb0;
        }
    }
    ctx->pc = 0x2B8CCCu;
label_2b8ccc:
    // 0x2b8ccc: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x2b8cccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
label_2b8cd0:
    // 0x2b8cd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b8cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b8cd4:
    // 0x2b8cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8cd8:
    // 0x2b8cd8: 0xfe230070  sd          $v1, 0x70($s1)
    ctx->pc = 0x2b8cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 3));
label_2b8cdc:
    // 0x2b8cdc: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x2b8cdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
label_2b8ce0:
    // 0x2b8ce0: 0xfe220078  sd          $v0, 0x78($s1)
    ctx->pc = 0x2b8ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 2));
label_2b8ce4:
    // 0x2b8ce4: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x2b8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2b8ce8:
    // 0x2b8ce8: 0x60f809  jalr        $v1
label_2b8cec:
    if (ctx->pc == 0x2B8CECu) {
        ctx->pc = 0x2B8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CE8u;
        // 0x2b8cec: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CF0u;
        goto label_2b8cf0;
    }
    ctx->pc = 0x2B8CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B8CF0u);
        ctx->pc = 0x2B8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CE8u;
        // 0x2b8cec: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8CE8u, 0x2B8CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B8CF0u;
label_2b8cf0:
    // 0x2b8cf0: 0xde070000  ld          $a3, 0x0($s0)
    ctx->pc = 0x2b8cf0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_2b8cf4:
    // 0x2b8cf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b8cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b8cf8:
    // 0x2b8cf8: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2b8cf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_2b8cfc:
    // 0x2b8cfc: 0x71c3a  dsrl        $v1, $a3, 16
    ctx->pc = 0x2b8cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 16);
label_2b8d00:
    // 0x2b8d00: 0x7223a  dsrl        $a0, $a3, 8
    ctx->pc = 0x2b8d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 8);
label_2b8d04:
    // 0x2b8d04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b8d08:
    // 0x2b8d08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b8d0c:
    // 0x2b8d0c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2b8d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b8d10:
    // 0x2b8d10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b8d14:
    // 0x2b8d14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8d18:
    // 0x2b8d18: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b8d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b8d1c:
    // 0x2b8d1c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2b8d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b8d20:
    // 0x2b8d20: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b8d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b8d24:
    // 0x2b8d24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8d28:
    // 0x2b8d28: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2b8d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2b8d2c:
    // 0x2b8d2c: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2b8d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_2b8d30:
    // 0x2b8d30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b8d34:
    // 0x2b8d34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8d38:
    // 0x2b8d38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b8d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b8d3c:
    // 0x2b8d3c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2b8d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b8d40:
    // 0x2b8d40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8d44:
    // 0x2b8d44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b8d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b8d48:
    // 0x2b8d48: 0xde070008  ld          $a3, 0x8($s0)
    ctx->pc = 0x2b8d48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_2b8d4c:
    // 0x2b8d4c: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x2b8d4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_2b8d50:
    // 0x2b8d50: 0x71c3a  dsrl        $v1, $a3, 16
    ctx->pc = 0x2b8d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 16);
label_2b8d54:
    // 0x2b8d54: 0x7223a  dsrl        $a0, $a3, 8
    ctx->pc = 0x2b8d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 8);
label_2b8d58:
    // 0x2b8d58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b8d5c:
    // 0x2b8d5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b8d60:
    // 0x2b8d60: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2b8d60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b8d64:
    // 0x2b8d64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b8d68:
    // 0x2b8d68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8d6c:
    // 0x2b8d6c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b8d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b8d70:
    // 0x2b8d70: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2b8d70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b8d74:
    // 0x2b8d74: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b8d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b8d78:
    // 0x2b8d78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8d7c:
    // 0x2b8d7c: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2b8d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2b8d80:
    // 0x2b8d80: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2b8d80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_2b8d84:
    // 0x2b8d84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b8d88:
    // 0x2b8d88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8d8c:
    // 0x2b8d8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b8d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b8d90:
    // 0x2b8d90: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2b8d90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b8d94:
    // 0x2b8d94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8d98:
    // 0x2b8d98: 0xde070010  ld          $a3, 0x10($s0)
    ctx->pc = 0x2b8d98u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_2b8d9c:
    // 0x2b8d9c: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x2b8d9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
label_2b8da0:
    // 0x2b8da0: 0x71c3a  dsrl        $v1, $a3, 16
    ctx->pc = 0x2b8da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 16);
label_2b8da4:
    // 0x2b8da4: 0x7223a  dsrl        $a0, $a3, 8
    ctx->pc = 0x2b8da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 8);
label_2b8da8:
    // 0x2b8da8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b8dac:
    // 0x2b8dac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b8db0:
    // 0x2b8db0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2b8db0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b8db4:
    // 0x2b8db4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b8db8:
    // 0x2b8db8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8dbc:
    // 0x2b8dbc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b8dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b8dc0:
    // 0x2b8dc0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2b8dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b8dc4:
    // 0x2b8dc4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b8dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b8dc8:
    // 0x2b8dc8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8dcc:
    // 0x2b8dcc: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2b8dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2b8dd0:
    // 0x2b8dd0: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2b8dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_2b8dd4:
    // 0x2b8dd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b8dd8:
    // 0x2b8dd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8ddc:
    // 0x2b8ddc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2b8ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b8de0:
    // 0x2b8de0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8de4:
    // 0x2b8de4: 0xde070018  ld          $a3, 0x18($s0)
    ctx->pc = 0x2b8de4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_2b8de8:
    // 0x2b8de8: 0x9202001b  lbu         $v0, 0x1B($s0)
    ctx->pc = 0x2b8de8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
label_2b8dec:
    // 0x2b8dec: 0x71c3a  dsrl        $v1, $a3, 16
    ctx->pc = 0x2b8decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 16);
label_2b8df0:
    // 0x2b8df0: 0x7223a  dsrl        $a0, $a3, 8
    ctx->pc = 0x2b8df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 8);
label_2b8df4:
    // 0x2b8df4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b8df8:
    // 0x2b8df8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b8dfc:
    // 0x2b8dfc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2b8dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b8e00:
    // 0x2b8e00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b8e04:
    // 0x2b8e04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8e08:
    // 0x2b8e08: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b8e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b8e0c:
    // 0x2b8e0c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2b8e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b8e10:
    // 0x2b8e10: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b8e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b8e14:
    // 0x2b8e14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8e18:
    // 0x2b8e18: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2b8e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2b8e1c:
    // 0x2b8e1c: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2b8e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_2b8e20:
    // 0x2b8e20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b8e24:
    // 0x2b8e24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8e28:
    // 0x2b8e28: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2b8e28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b8e2c:
    // 0x2b8e2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8e30:
    // 0x2b8e30: 0xde070020  ld          $a3, 0x20($s0)
    ctx->pc = 0x2b8e30u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_2b8e34:
    // 0x2b8e34: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x2b8e34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
label_2b8e38:
    // 0x2b8e38: 0x71c3a  dsrl        $v1, $a3, 16
    ctx->pc = 0x2b8e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 16);
label_2b8e3c:
    // 0x2b8e3c: 0x7223a  dsrl        $a0, $a3, 8
    ctx->pc = 0x2b8e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 8);
label_2b8e40:
    // 0x2b8e40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b8e44:
    // 0x2b8e44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b8e48:
    // 0x2b8e48: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2b8e48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b8e4c:
    // 0x2b8e4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b8e50:
    // 0x2b8e50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8e54:
    // 0x2b8e54: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2b8e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2b8e58:
    // 0x2b8e58: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2b8e58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2b8e5c:
    // 0x2b8e5c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b8e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b8e60:
    // 0x2b8e60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b8e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b8e64:
    // 0x2b8e64: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b8e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b8e68:
    // 0x2b8e68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b8e6c:
    // 0x2b8e6c: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2b8e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_2b8e70:
    // 0x2b8e70: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2b8e70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_2b8e74:
    // 0x2b8e74: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2b8e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_2b8e78:
    // 0x2b8e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b8e7c:
    // 0x2b8e7c: 0x3e00008  jr          $ra
label_2b8e80:
    if (ctx->pc == 0x2B8E80u) {
        ctx->pc = 0x2B8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E7Cu;
        // 0x2b8e80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8E84u;
        goto label_2b8e84;
    }
    ctx->pc = 0x2B8E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E7Cu;
        // 0x2b8e80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8E84u;
label_2b8e84:
    // 0x2b8e84: 0x0  nop
    ctx->pc = 0x2b8e84u;
    // NOP
label_2b8e88:
    // 0x2b8e88: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x2b8e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_2b8e8c:
    // 0x2b8e8c: 0xffb702c0  sd          $s7, 0x2C0($sp)
    ctx->pc = 0x2b8e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 23));
label_2b8e90:
    // 0x2b8e90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b8e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b8e94:
    // 0x2b8e94: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x2b8e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_2b8e98:
    // 0x2b8e98: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2b8e98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b8e9c:
    // 0x2b8e9c: 0xffb10260  sd          $s1, 0x260($sp)
    ctx->pc = 0x2b8e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 17));
label_2b8ea0:
    // 0x2b8ea0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b8ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ea4:
    // 0x2b8ea4: 0xffb00250  sd          $s0, 0x250($sp)
    ctx->pc = 0x2b8ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 16));
label_2b8ea8:
    // 0x2b8ea8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b8ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b8eac:
    // 0x2b8eac: 0xffbe02d0  sd          $fp, 0x2D0($sp)
    ctx->pc = 0x2b8eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 30));
label_2b8eb0:
    // 0x2b8eb0: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2b8eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2b8eb4:
    // 0x2b8eb4: 0xffb602b0  sd          $s6, 0x2B0($sp)
    ctx->pc = 0x2b8eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 22));
label_2b8eb8:
    // 0x2b8eb8: 0xffb502a0  sd          $s5, 0x2A0($sp)
    ctx->pc = 0x2b8eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 21));
label_2b8ebc:
    // 0x2b8ebc: 0xffb40290  sd          $s4, 0x290($sp)
    ctx->pc = 0x2b8ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 20));
label_2b8ec0:
    // 0x2b8ec0: 0xffb30280  sd          $s3, 0x280($sp)
    ctx->pc = 0x2b8ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 19));
label_2b8ec4:
    // 0x2b8ec4: 0xffbf02e0  sd          $ra, 0x2E0($sp)
    ctx->pc = 0x2b8ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 31));
label_2b8ec8:
    // 0x2b8ec8: 0xafa8023c  sw          $t0, 0x23C($sp)
    ctx->pc = 0x2b8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 8));
label_2b8ecc:
    // 0x2b8ecc: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x2b8eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
label_2b8ed0:
    // 0x2b8ed0: 0xc0a1ab0  jal         func_286AC0
label_2b8ed4:
    if (ctx->pc == 0x2B8ED4u) {
        ctx->pc = 0x2B8ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8ED0u;
        // 0x2b8ed4: 0xafa00230  sw          $zero, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8ED8u;
        goto label_2b8ed8;
    }
    ctx->pc = 0x2B8ED0u;
    SET_GPR_U32(ctx, 31, 0x2B8ED8u);
    ctx->pc = 0x2B8ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8ED0u;
    // 0x2b8ed4: 0xafa00230  sw          $zero, 0x230($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286AC0u, 0x2B8ED0u, 0x2B8ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8ED8u;
label_2b8ed8:
    // 0x2b8ed8: 0x27b60110  addiu       $s6, $sp, 0x110
    ctx->pc = 0x2b8ed8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2b8edc:
    // 0x2b8edc: 0x24020803  addiu       $v0, $zero, 0x803
    ctx->pc = 0x2b8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_2b8ee0:
    // 0x2b8ee0: 0xafa00240  sw          $zero, 0x240($sp)
    ctx->pc = 0x2b8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
label_2b8ee4:
    // 0x2b8ee4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b8ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ee8:
    // 0x2b8ee8: 0xc0a1a88  jal         func_286A20
label_2b8eec:
    if (ctx->pc == 0x2B8EECu) {
        ctx->pc = 0x2B8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EE8u;
        // 0x2b8eec: 0xafa20244  sw          $v0, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8EF0u;
        goto label_2b8ef0;
    }
    ctx->pc = 0x2B8EE8u;
    SET_GPR_U32(ctx, 31, 0x2B8EF0u);
    ctx->pc = 0x2B8EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8EE8u;
    // 0x2b8eec: 0xafa20244  sw          $v0, 0x244($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2B8EE8u, 0x2B8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8EF0u;
label_2b8ef0:
    // 0x2b8ef0: 0x27b50130  addiu       $s5, $sp, 0x130
    ctx->pc = 0x2b8ef0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2b8ef4:
    // 0x2b8ef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b8ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ef8:
    // 0x2b8ef8: 0xc0a1a88  jal         func_286A20
label_2b8efc:
    if (ctx->pc == 0x2B8EFCu) {
        ctx->pc = 0x2B8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EF8u;
        // 0x2b8efc: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F00u;
        goto label_2b8f00;
    }
    ctx->pc = 0x2B8EF8u;
    SET_GPR_U32(ctx, 31, 0x2B8F00u);
    ctx->pc = 0x2B8EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8EF8u;
    // 0x2b8efc: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2B8EF8u, 0x2B8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F00u;
label_2b8f00:
    // 0x2b8f00: 0x27b40150  addiu       $s4, $sp, 0x150
    ctx->pc = 0x2b8f00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2b8f04:
    // 0x2b8f04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b8f08:
    // 0x2b8f08: 0xc0a1a88  jal         func_286A20
label_2b8f0c:
    if (ctx->pc == 0x2B8F0Cu) {
        ctx->pc = 0x2B8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F08u;
        // 0x2b8f0c: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F10u;
        goto label_2b8f10;
    }
    ctx->pc = 0x2B8F08u;
    SET_GPR_U32(ctx, 31, 0x2B8F10u);
    ctx->pc = 0x2B8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F08u;
    // 0x2b8f0c: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2B8F08u, 0x2B8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F10u;
label_2b8f10:
    // 0x2b8f10: 0xc0a1a02  jal         func_286808
label_2b8f14:
    if (ctx->pc == 0x2B8F14u) {
        ctx->pc = 0x2B8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F10u;
        // 0x2b8f14: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F18u;
        goto label_2b8f18;
    }
    ctx->pc = 0x2B8F10u;
    SET_GPR_U32(ctx, 31, 0x2B8F18u);
    ctx->pc = 0x2B8F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F10u;
    // 0x2b8f14: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x2B8F10u, 0x2B8F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F18u;
label_2b8f18:
    // 0x2b8f18: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2b8f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_2b8f1c:
    // 0x2b8f1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b8f20:
    // 0x2b8f20: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2b8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_2b8f24:
    // 0x2b8f24: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2b8f24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2b8f28:
    // 0x2b8f28: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2b8f28u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2b8f2c:
    // 0x2b8f2c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2b8f2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_2b8f30:
    // 0x2b8f30: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2b8f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2b8f34:
    // 0x2b8f34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b8f38:
    if (ctx->pc == 0x2B8F38u) {
        ctx->pc = 0x2B8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F34u;
        // 0x2b8f38: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F3Cu;
        goto label_2b8f3c;
    }
    ctx->pc = 0x2B8F34u;
    {
        const bool branch_taken_0x2b8f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F34u;
        // 0x2b8f38: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f34) {
            ctx->pc = 0x2B8F4Cu;
            goto label_2b8f4c;
        }
    }
    ctx->pc = 0x2B8F3Cu;
label_2b8f3c:
    // 0x2b8f3c: 0x2a220035  slti        $v0, $s1, 0x35
    ctx->pc = 0x2b8f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)53) ? 1 : 0);
label_2b8f40:
    // 0x2b8f40: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b8f44:
    if (ctx->pc == 0x2B8F44u) {
        ctx->pc = 0x2B8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F40u;
        // 0x2b8f44: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F48u;
        goto label_2b8f48;
    }
    ctx->pc = 0x2B8F40u;
    {
        const bool branch_taken_0x2b8f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f40) {
            ctx->pc = 0x2B8F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8F40u;
            // 0x2b8f44: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F54u;
            goto label_2b8f54;
        }
    }
    ctx->pc = 0x2B8F48u;
label_2b8f48:
    // 0x2b8f48: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2b8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2b8f4c:
    // 0x2b8f4c: 0x10000062  b           . + 4 + (0x62 << 2)
label_2b8f50:
    if (ctx->pc == 0x2B8F50u) {
        ctx->pc = 0x2B8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F4Cu;
        // 0x2b8f50: 0xafa20244  sw          $v0, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F54u;
        goto label_2b8f54;
    }
    ctx->pc = 0x2B8F4Cu;
    {
        const bool branch_taken_0x2b8f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F4Cu;
        // 0x2b8f50: 0xafa20244  sw          $v0, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f4c) {
            ctx->pc = 0x2B90D8u;
            goto label_2b90d8;
        }
    }
    ctx->pc = 0x2B8F54u;
label_2b8f54:
    // 0x2b8f54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2b8f58:
    if (ctx->pc == 0x2B8F58u) {
        ctx->pc = 0x2B8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F54u;
        // 0x2b8f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F5Cu;
        goto label_2b8f5c;
    }
    ctx->pc = 0x2B8F54u;
    {
        const bool branch_taken_0x2b8f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F54u;
        // 0x2b8f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f54) {
            ctx->pc = 0x2B8F6Cu;
            goto label_2b8f6c;
        }
    }
    ctx->pc = 0x2B8F5Cu;
label_2b8f5c:
    // 0x2b8f5c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2b8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2b8f60:
    // 0x2b8f60: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2b8f64:
    if (ctx->pc == 0x2B8F64u) {
        ctx->pc = 0x2B8F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F60u;
        // 0x2b8f64: 0xafa30230  sw          $v1, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F68u;
        goto label_2b8f68;
    }
    ctx->pc = 0x2B8F60u;
    {
        const bool branch_taken_0x2b8f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f60) {
            ctx->pc = 0x2B8F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8F60u;
            // 0x2b8f64: 0xafa30230  sw          $v1, 0x230($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F8Cu;
            goto label_2b8f8c;
        }
    }
    ctx->pc = 0x2B8F68u;
label_2b8f68:
    // 0x2b8f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8f6c:
    // 0x2b8f6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b8f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b8f70:
    // 0x2b8f70: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x2b8f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2b8f74:
    // 0x2b8f74: 0xc0a518a  jal         func_294628
label_2b8f78:
    if (ctx->pc == 0x2B8F78u) {
        ctx->pc = 0x2B8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F74u;
        // 0x2b8f78: 0x27a70234  addiu       $a3, $sp, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F7Cu;
        goto label_2b8f7c;
    }
    ctx->pc = 0x2B8F74u;
    SET_GPR_U32(ctx, 31, 0x2B8F7Cu);
    ctx->pc = 0x2B8F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F74u;
    // 0x2b8f78: 0x27a70234  addiu       $a3, $sp, 0x234 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294628u, 0x2B8F74u, 0x2B8F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F7Cu;
label_2b8f7c:
    // 0x2b8f7c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_2b8f80:
    if (ctx->pc == 0x2B8F80u) {
        ctx->pc = 0x2B8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F7Cu;
        // 0x2b8f80: 0x8fa60244  lw          $a2, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F84u;
        goto label_2b8f84;
    }
    ctx->pc = 0x2B8F7Cu;
    {
        const bool branch_taken_0x2b8f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F7Cu;
        // 0x2b8f80: 0x8fa60244  lw          $a2, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f7c) {
            ctx->pc = 0x2B90DCu;
            goto label_2b90dc;
        }
    }
    ctx->pc = 0x2B8F84u;
label_2b8f84:
    // 0x2b8f84: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b8f88:
    if (ctx->pc == 0x2B8F88u) {
        ctx->pc = 0x2B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F84u;
        // 0x2b8f88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F8Cu;
        goto label_2b8f8c;
    }
    ctx->pc = 0x2B8F84u;
    {
        const bool branch_taken_0x2b8f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F84u;
        // 0x2b8f88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f84) {
            ctx->pc = 0x2B8F9Cu;
            goto label_2b8f9c;
        }
    }
    ctx->pc = 0x2B8F8Cu;
label_2b8f8c:
    // 0x2b8f8c: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x2b8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
label_2b8f90:
    // 0x2b8f90: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2b8f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2b8f94:
    // 0x2b8f94: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2b8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2b8f98:
    // 0x2b8f98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b8f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b8f9c:
    // 0x2b8f9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b8f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b8fa0:
    // 0x2b8fa0: 0xc0a1b8c  jal         func_286E30
label_2b8fa4:
    if (ctx->pc == 0x2B8FA4u) {
        ctx->pc = 0x2B8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FA0u;
        // 0x2b8fa4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FA8u;
        goto label_2b8fa8;
    }
    ctx->pc = 0x2B8FA0u;
    SET_GPR_U32(ctx, 31, 0x2B8FA8u);
    ctx->pc = 0x2B8FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FA0u;
    // 0x2b8fa4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x2B8FA0u, 0x2B8FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FA8u;
label_2b8fa8:
    // 0x2b8fa8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_2b8fac:
    if (ctx->pc == 0x2B8FACu) {
        ctx->pc = 0x2B8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FA8u;
        // 0x2b8fac: 0x8fa60234  lw          $a2, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FB0u;
        goto label_2b8fb0;
    }
    ctx->pc = 0x2B8FA8u;
    {
        const bool branch_taken_0x2b8fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FA8u;
        // 0x2b8fac: 0x8fa60234  lw          $a2, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fa8) {
            ctx->pc = 0x2B90D8u;
            goto label_2b90d8;
        }
    }
    ctx->pc = 0x2B8FB0u;
label_2b8fb0:
    // 0x2b8fb0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2b8fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2b8fb4:
    // 0x2b8fb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b8fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b8fb8:
    // 0x2b8fb8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2b8fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b8fbc:
    // 0x2b8fbc: 0xc0a2c52  jal         func_28B148
label_2b8fc0:
    if (ctx->pc == 0x2B8FC0u) {
        ctx->pc = 0x2B8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FBCu;
        // 0x2b8fc0: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FC4u;
        goto label_2b8fc4;
    }
    ctx->pc = 0x2B8FBCu;
    SET_GPR_U32(ctx, 31, 0x2B8FC4u);
    ctx->pc = 0x2B8FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FBCu;
    // 0x2b8fc0: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B148u, 0x2B8FBCu, 0x2B8FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FC4u;
label_2b8fc4:
    // 0x2b8fc4: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_2b8fc8:
    if (ctx->pc == 0x2B8FC8u) {
        ctx->pc = 0x2B8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FC4u;
        // 0x2b8fc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FCCu;
        goto label_2b8fcc;
    }
    ctx->pc = 0x2B8FC4u;
    {
        const bool branch_taken_0x2b8fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FC4u;
        // 0x2b8fc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fc4) {
            ctx->pc = 0x2B90D8u;
            goto label_2b90d8;
        }
    }
    ctx->pc = 0x2B8FCCu;
label_2b8fcc:
    // 0x2b8fcc: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2b8fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2b8fd0:
    // 0x2b8fd0: 0xc0a15fa  jal         func_2857E8
label_2b8fd4:
    if (ctx->pc == 0x2B8FD4u) {
        ctx->pc = 0x2B8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FD0u;
        // 0x2b8fd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FD8u;
        goto label_2b8fd8;
    }
    ctx->pc = 0x2B8FD0u;
    SET_GPR_U32(ctx, 31, 0x2B8FD8u);
    ctx->pc = 0x2B8FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FD0u;
    // 0x2b8fd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857E8u, 0x2B8FD0u, 0x2B8FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FD8u;
label_2b8fd8:
    // 0x2b8fd8: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_2b8fdc:
    if (ctx->pc == 0x2B8FDCu) {
        ctx->pc = 0x2B8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FD8u;
        // 0x2b8fdc: 0x8fa60244  lw          $a2, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FE0u;
        goto label_2b8fe0;
    }
    ctx->pc = 0x2B8FD8u;
    {
        const bool branch_taken_0x2b8fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FD8u;
        // 0x2b8fdc: 0x8fa60244  lw          $a2, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fd8) {
            ctx->pc = 0x2B90DCu;
            goto label_2b90dc;
        }
    }
    ctx->pc = 0x2B8FE0u;
label_2b8fe0:
    // 0x2b8fe0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2b8fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b8fe4:
    // 0x2b8fe4: 0xc0a1c20  jal         func_287080
label_2b8fe8:
    if (ctx->pc == 0x2B8FE8u) {
        ctx->pc = 0x2B8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FE4u;
        // 0x2b8fe8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FECu;
        goto label_2b8fec;
    }
    ctx->pc = 0x2B8FE4u;
    SET_GPR_U32(ctx, 31, 0x2B8FECu);
    ctx->pc = 0x2B8FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FE4u;
    // 0x2b8fe8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287080u, 0x2B8FE4u, 0x2B8FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FECu;
label_2b8fec:
    // 0x2b8fec: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2b8ff0:
    if (ctx->pc == 0x2B8FF0u) {
        ctx->pc = 0x2B8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FECu;
        // 0x2b8ff0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FF4u;
        goto label_2b8ff4;
    }
    ctx->pc = 0x2B8FECu;
    {
        const bool branch_taken_0x2b8fec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FECu;
        // 0x2b8ff0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fec) {
            ctx->pc = 0x2B9000u;
            goto label_2b9000;
        }
    }
    ctx->pc = 0x2B8FF4u;
label_2b8ff4:
    // 0x2b8ff4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2b8ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b8ff8:
    // 0x2b8ff8: 0xc0a16fa  jal         func_285BE8
label_2b8ffc:
    if (ctx->pc == 0x2B8FFCu) {
        ctx->pc = 0x2B8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FF8u;
        // 0x2b8ffc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9000u;
        goto label_2b9000;
    }
    ctx->pc = 0x2B8FF8u;
    SET_GPR_U32(ctx, 31, 0x2B9000u);
    ctx->pc = 0x2B8FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FF8u;
    // 0x2b8ffc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285BE8u, 0x2B8FF8u, 0x2B9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9000u;
label_2b9000:
    // 0x2b9000: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x2b9000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b9004:
    // 0x2b9004: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b9004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b9008:
    // 0x2b9008: 0x8fa60230  lw          $a2, 0x230($sp)
    ctx->pc = 0x2b9008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_2b900c:
    // 0x2b900c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b900cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b9010:
    // 0x2b9010: 0xc0a2c52  jal         func_28B148
label_2b9014:
    if (ctx->pc == 0x2B9014u) {
        ctx->pc = 0x2B9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9010u;
        // 0x2b9014: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9018u;
        goto label_2b9018;
    }
    ctx->pc = 0x2B9010u;
    SET_GPR_U32(ctx, 31, 0x2B9018u);
    ctx->pc = 0x2B9014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9010u;
    // 0x2b9014: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B148u, 0x2B9010u, 0x2B9018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9018u;
label_2b9018:
    // 0x2b9018: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2b901c:
    if (ctx->pc == 0x2B901Cu) {
        ctx->pc = 0x2B901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9018u;
        // 0x2b901c: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9020u;
        goto label_2b9020;
    }
    ctx->pc = 0x2B9018u;
    {
        const bool branch_taken_0x2b9018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9018u;
        // 0x2b901c: 0x27a20170  addiu       $v0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9018) {
            ctx->pc = 0x2B90D8u;
            goto label_2b90d8;
        }
    }
    ctx->pc = 0x2B9020u;
label_2b9020:
    // 0x2b9020: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2b9020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9024:
    // 0x2b9024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9028:
    // 0x2b9028: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x2b9028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
label_2b902c:
    // 0x2b902c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9030:
    // 0x2b9030: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x2b9030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_2b9034:
    // 0x2b9034: 0xafb001f4  sw          $s0, 0x1F4($sp)
    ctx->pc = 0x2b9034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
label_2b9038:
    // 0x2b9038: 0xc0a1bdc  jal         func_286F70
label_2b903c:
    if (ctx->pc == 0x2B903Cu) {
        ctx->pc = 0x2B903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9038u;
        // 0x2b903c: 0xafa20240  sw          $v0, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9040u;
        goto label_2b9040;
    }
    ctx->pc = 0x2B9038u;
    SET_GPR_U32(ctx, 31, 0x2B9040u);
    ctx->pc = 0x2B903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9038u;
    // 0x2b903c: 0xafa20240  sw          $v0, 0x240($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286F70u, 0x2B9038u, 0x2B9040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9040u;
label_2b9040:
    // 0x2b9040: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x2b9040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2b9044:
    // 0x2b9044: 0xafb00214  sw          $s0, 0x214($sp)
    ctx->pc = 0x2b9044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 16));
label_2b9048:
    // 0x2b9048: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x2b9048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_2b904c:
    // 0x2b904c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b904cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b9050:
    // 0x2b9050: 0xafa30218  sw          $v1, 0x218($sp)
    ctx->pc = 0x2b9050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 3));
label_2b9054:
    // 0x2b9054: 0xc0a1bdc  jal         func_286F70
label_2b9058:
    if (ctx->pc == 0x2B9058u) {
        ctx->pc = 0x2B9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9054u;
        // 0x2b9058: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B905Cu;
        goto label_2b905c;
    }
    ctx->pc = 0x2B9054u;
    SET_GPR_U32(ctx, 31, 0x2B905Cu);
    ctx->pc = 0x2B9058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9054u;
    // 0x2b9058: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286F70u, 0x2B9054u, 0x2B905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B905Cu;
label_2b905c:
    // 0x2b905c: 0x27b301f0  addiu       $s3, $sp, 0x1F0
    ctx->pc = 0x2b905cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2b9060:
    // 0x2b9060: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x2b9060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_2b9064:
    // 0x2b9064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b9064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9068:
    // 0x2b9068: 0xc0a004a  jal         func_280128
label_2b906c:
    if (ctx->pc == 0x2B906Cu) {
        ctx->pc = 0x2B906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9068u;
        // 0x2b906c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9070u;
        goto label_2b9070;
    }
    ctx->pc = 0x2B9068u;
    SET_GPR_U32(ctx, 31, 0x2B9070u);
    ctx->pc = 0x2B906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9068u;
    // 0x2b906c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280128u, 0x2B9068u, 0x2B9070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9070u;
label_2b9070:
    // 0x2b9070: 0x27b20210  addiu       $s2, $sp, 0x210
    ctx->pc = 0x2b9070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2b9074:
    // 0x2b9074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b9074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9078:
    // 0x2b9078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b9078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b907c:
    // 0x2b907c: 0xc0a004a  jal         func_280128
label_2b9080:
    if (ctx->pc == 0x2B9080u) {
        ctx->pc = 0x2B9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B907Cu;
        // 0x2b9080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9084u;
        goto label_2b9084;
    }
    ctx->pc = 0x2B907Cu;
    SET_GPR_U32(ctx, 31, 0x2B9084u);
    ctx->pc = 0x2B9080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B907Cu;
    // 0x2b9080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280128u, 0x2B907Cu, 0x2B9084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9084u;
label_2b9084:
    // 0x2b9084: 0x27b10238  addiu       $s1, $sp, 0x238
    ctx->pc = 0x2b9084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
label_2b9088:
    // 0x2b9088: 0x50802d  daddu       $s0, $v0, $s0
    ctx->pc = 0x2b9088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
label_2b908c:
    // 0x2b908c: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x2b908cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
label_2b9090:
    // 0x2b9090: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2b9090u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_2b9094:
    // 0x2b9094: 0xafb70238  sw          $s7, 0x238($sp)
    ctx->pc = 0x2b9094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 23));
label_2b9098:
    // 0x2b9098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b909c:
    // 0x2b909c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b909cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b90a0:
    // 0x2b90a0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2b90a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b90a4:
    // 0x2b90a4: 0xc0a05d0  jal         func_281740
label_2b90a8:
    if (ctx->pc == 0x2B90A8u) {
        ctx->pc = 0x2B90A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90A4u;
        // 0x2b90a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90ACu;
        goto label_2b90ac;
    }
    ctx->pc = 0x2B90A4u;
    SET_GPR_U32(ctx, 31, 0x2B90ACu);
    ctx->pc = 0x2B90A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90A4u;
    // 0x2b90a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x2B90A4u, 0x2B90ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90ACu;
label_2b90ac:
    // 0x2b90ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b90acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b90b0:
    // 0x2b90b0: 0xc0a004a  jal         func_280128
label_2b90b4:
    if (ctx->pc == 0x2B90B4u) {
        ctx->pc = 0x2B90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90B0u;
        // 0x2b90b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90B8u;
        goto label_2b90b8;
    }
    ctx->pc = 0x2B90B0u;
    SET_GPR_U32(ctx, 31, 0x2B90B8u);
    ctx->pc = 0x2B90B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90B0u;
    // 0x2b90b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280128u, 0x2B90B0u, 0x2B90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90B8u;
label_2b90b8:
    // 0x2b90b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b90b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b90bc:
    // 0x2b90bc: 0xc0a004a  jal         func_280128
label_2b90c0:
    if (ctx->pc == 0x2B90C0u) {
        ctx->pc = 0x2B90C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90BCu;
        // 0x2b90c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90C4u;
        goto label_2b90c4;
    }
    ctx->pc = 0x2B90BCu;
    SET_GPR_U32(ctx, 31, 0x2B90C4u);
    ctx->pc = 0x2B90C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90BCu;
    // 0x2b90c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280128u, 0x2B90BCu, 0x2B90C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90C4u;
label_2b90c4:
    // 0x2b90c4: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x2b90c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_2b90c8:
    // 0x2b90c8: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x2b90c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_2b90cc:
    // 0x2b90cc: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x2b90ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_2b90d0:
    // 0x2b90d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b90d4:
    if (ctx->pc == 0x2B90D4u) {
        ctx->pc = 0x2B90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90D0u;
        // 0x2b90d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90D8u;
        goto label_2b90d8;
    }
    ctx->pc = 0x2B90D0u;
    {
        const bool branch_taken_0x2b90d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90D0u;
        // 0x2b90d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90d0) {
            ctx->pc = 0x2B90F0u;
            goto label_2b90f0;
        }
    }
    ctx->pc = 0x2B90D8u;
label_2b90d8:
    // 0x2b90d8: 0x8fa60244  lw          $a2, 0x244($sp)
    ctx->pc = 0x2b90d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_2b90dc:
    // 0x2b90dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2b90dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b90e0:
    // 0x2b90e0: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x2b90e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_2b90e4:
    // 0x2b90e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b90e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b90e8:
    // 0x2b90e8: 0xc0a5648  jal         func_295920
label_2b90ec:
    if (ctx->pc == 0x2B90ECu) {
        ctx->pc = 0x2B90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90E8u;
        // 0x2b90ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90F0u;
        goto label_2b90f0;
    }
    ctx->pc = 0x2B90E8u;
    SET_GPR_U32(ctx, 31, 0x2B90F0u);
    ctx->pc = 0x2B90ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90E8u;
    // 0x2b90ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B90E8u, 0x2B90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90F0u;
label_2b90f0:
    // 0x2b90f0: 0xc0a1abe  jal         func_286AF8
label_2b90f4:
    if (ctx->pc == 0x2B90F4u) {
        ctx->pc = 0x2B90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90F0u;
        // 0x2b90f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90F8u;
        goto label_2b90f8;
    }
    ctx->pc = 0x2B90F0u;
    SET_GPR_U32(ctx, 31, 0x2B90F8u);
    ctx->pc = 0x2B90F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90F0u;
    // 0x2b90f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286AF8u, 0x2B90F0u, 0x2B90F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90F8u;
label_2b90f8:
    // 0x2b90f8: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x2b90f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_2b90fc:
    // 0x2b90fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2b9100:
    if (ctx->pc == 0x2B9100u) {
        ctx->pc = 0x2B9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90FCu;
        // 0x2b9100: 0x8fa40234  lw          $a0, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9104u;
        goto label_2b9104;
    }
    ctx->pc = 0x2B90FCu;
    {
        const bool branch_taken_0x2b90fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b90fc) {
            ctx->pc = 0x2B9100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B90FCu;
            // 0x2b9100: 0x8fa40234  lw          $a0, 0x234($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9110u;
            goto label_2b9110;
        }
    }
    ctx->pc = 0x2B9104u;
label_2b9104:
    // 0x2b9104: 0xc0a1a14  jal         func_286850
label_2b9108:
    if (ctx->pc == 0x2B9108u) {
        ctx->pc = 0x2B910Cu;
        goto label_2b910c;
    }
    ctx->pc = 0x2B9104u;
    SET_GPR_U32(ctx, 31, 0x2B910Cu);
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2B9104u, 0x2B910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B910Cu;
label_2b910c:
    // 0x2b910c: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x2b910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_2b9110:
    // 0x2b9110: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b9114:
    if (ctx->pc == 0x2B9114u) {
        ctx->pc = 0x2B9118u;
        goto label_2b9118;
    }
    ctx->pc = 0x2B9110u;
    {
        const bool branch_taken_0x2b9110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9110) {
            ctx->pc = 0x2B9120u;
            goto label_2b9120;
        }
    }
    ctx->pc = 0x2B9118u;
label_2b9118:
    // 0x2b9118: 0xc0a1a14  jal         func_286850
label_2b911c:
    if (ctx->pc == 0x2B911Cu) {
        ctx->pc = 0x2B9120u;
        goto label_2b9120;
    }
    ctx->pc = 0x2B9118u;
    SET_GPR_U32(ctx, 31, 0x2B9120u);
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2B9118u, 0x2B9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9120u;
label_2b9120:
    // 0x2b9120: 0xc0a1a14  jal         func_286850
label_2b9124:
    if (ctx->pc == 0x2B9124u) {
        ctx->pc = 0x2B9124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9120u;
        // 0x2b9124: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9128u;
        goto label_2b9128;
    }
    ctx->pc = 0x2B9120u;
    SET_GPR_U32(ctx, 31, 0x2B9128u);
    ctx->pc = 0x2B9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9120u;
    // 0x2b9124: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2B9120u, 0x2B9128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9128u;
label_2b9128:
    // 0x2b9128: 0xc0a1a14  jal         func_286850
label_2b912c:
    if (ctx->pc == 0x2B912Cu) {
        ctx->pc = 0x2B912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9128u;
        // 0x2b912c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9130u;
        goto label_2b9130;
    }
    ctx->pc = 0x2B9128u;
    SET_GPR_U32(ctx, 31, 0x2B9130u);
    ctx->pc = 0x2B912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9128u;
    // 0x2b912c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2B9128u, 0x2B9130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9130u;
label_2b9130:
    // 0x2b9130: 0xc0a1a14  jal         func_286850
label_2b9134:
    if (ctx->pc == 0x2B9134u) {
        ctx->pc = 0x2B9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9130u;
        // 0x2b9134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9138u;
        goto label_2b9138;
    }
    ctx->pc = 0x2B9130u;
    SET_GPR_U32(ctx, 31, 0x2B9138u);
    ctx->pc = 0x2B9134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9130u;
    // 0x2b9134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2B9130u, 0x2B9138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9138u;
label_2b9138:
    // 0x2b9138: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x2b9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_2b913c:
    // 0x2b913c: 0xdfbf02e0  ld          $ra, 0x2E0($sp)
    ctx->pc = 0x2b913cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 736)));
label_2b9140:
    // 0x2b9140: 0xdfbe02d0  ld          $fp, 0x2D0($sp)
    ctx->pc = 0x2b9140u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_2b9144:
    // 0x2b9144: 0xdfb702c0  ld          $s7, 0x2C0($sp)
    ctx->pc = 0x2b9144u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_2b9148:
    // 0x2b9148: 0xdfb602b0  ld          $s6, 0x2B0($sp)
    ctx->pc = 0x2b9148u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_2b914c:
    // 0x2b914c: 0xdfb502a0  ld          $s5, 0x2A0($sp)
    ctx->pc = 0x2b914cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_2b9150:
    // 0x2b9150: 0xdfb40290  ld          $s4, 0x290($sp)
    ctx->pc = 0x2b9150u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_2b9154:
    // 0x2b9154: 0xdfb30280  ld          $s3, 0x280($sp)
    ctx->pc = 0x2b9154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_2b9158:
    // 0x2b9158: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x2b9158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_2b915c:
    // 0x2b915c: 0xdfb10260  ld          $s1, 0x260($sp)
    ctx->pc = 0x2b915cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_2b9160:
    // 0x2b9160: 0xdfb00250  ld          $s0, 0x250($sp)
    ctx->pc = 0x2b9160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_2b9164:
    // 0x2b9164: 0x3e00008  jr          $ra
label_2b9168:
    if (ctx->pc == 0x2B9168u) {
        ctx->pc = 0x2B9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9164u;
        // 0x2b9168: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B916Cu;
        goto label_2b916c;
    }
    ctx->pc = 0x2B9164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9164u;
        // 0x2b9168: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B916Cu;
label_2b916c:
    // 0x2b916c: 0x0  nop
    ctx->pc = 0x2b916cu;
    // NOP
label_2b9170:
    // 0x2b9170: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2b9170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2b9174:
    // 0x2b9174: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2b9174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_2b9178:
    // 0x2b9178: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2b9178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_2b917c:
    // 0x2b917c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2b917cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b9180:
    // 0x2b9180: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2b9180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_2b9184:
    // 0x2b9184: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2b9184u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b9188:
    // 0x2b9188: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2b9188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_2b918c:
    // 0x2b918c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b918cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9190:
    // 0x2b9190: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2b9190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_2b9194:
    // 0x2b9194: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b9194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9198:
    // 0x2b9198: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2b9198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_2b919c:
    // 0x2b919c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b919cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b91a0:
    // 0x2b91a0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2b91a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2b91a4:
    // 0x2b91a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b91a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b91a8:
    // 0x2b91a8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2b91a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_2b91ac:
    // 0x2b91ac: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2b91acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2b91b0:
    // 0x2b91b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2b91b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2b91b4:
    // 0x2b91b4: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
label_2b91b8:
    if (ctx->pc == 0x2B91B8u) {
        ctx->pc = 0x2B91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91B4u;
        // 0x2b91b8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91BCu;
        goto label_2b91bc;
    }
    ctx->pc = 0x2B91B4u;
    {
        const bool branch_taken_0x2b91b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91B4u;
        // 0x2b91b8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91b4) {
            ctx->pc = 0x2B91D8u;
            goto label_2b91d8;
        }
    }
    ctx->pc = 0x2B91BCu;
label_2b91bc:
    // 0x2b91bc: 0xc0a1a9e  jal         func_286A78
label_2b91c0:
    if (ctx->pc == 0x2B91C0u) {
        ctx->pc = 0x2B91C4u;
        goto label_2b91c4;
    }
    ctx->pc = 0x2B91BCu;
    SET_GPR_U32(ctx, 31, 0x2B91C4u);
    ctx->pc = 0x286A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A78u, 0x2B91BCu, 0x2B91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B91C4u;
label_2b91c4:
    // 0x2b91c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b91c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b91c8:
    // 0x2b91c8: 0x12400062  beqz        $s2, . + 4 + (0x62 << 2)
label_2b91cc:
    if (ctx->pc == 0x2B91CCu) {
        ctx->pc = 0x2B91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91C8u;
        // 0x2b91cc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91D0u;
        goto label_2b91d0;
    }
    ctx->pc = 0x2B91C8u;
    {
        const bool branch_taken_0x2b91c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91C8u;
        // 0x2b91cc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91c8) {
            ctx->pc = 0x2B9354u;
            goto label_2b9354;
        }
    }
    ctx->pc = 0x2B91D0u;
label_2b91d0:
    // 0x2b91d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b91d4:
    if (ctx->pc == 0x2B91D4u) {
        ctx->pc = 0x2B91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91D0u;
        // 0x2b91d4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91D8u;
        goto label_2b91d8;
    }
    ctx->pc = 0x2B91D0u;
    {
        const bool branch_taken_0x2b91d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91D0u;
        // 0x2b91d4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91d0) {
            ctx->pc = 0x2B91E0u;
            goto label_2b91e0;
        }
    }
    ctx->pc = 0x2B91D8u;
label_2b91d8:
    // 0x2b91d8: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2b91d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b91dc:
    // 0x2b91dc: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2b91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2b91e0:
    // 0x2b91e0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2b91e4:
    if (ctx->pc == 0x2B91E4u) {
        ctx->pc = 0x2B91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91E0u;
        // 0x2b91e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91E8u;
        goto label_2b91e8;
    }
    ctx->pc = 0x2B91E0u;
    {
        const bool branch_taken_0x2b91e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91E0u;
        // 0x2b91e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91e0) {
            ctx->pc = 0x2B9224u;
            goto label_2b9224;
        }
    }
    ctx->pc = 0x2B91E8u;
label_2b91e8:
    // 0x2b91e8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2b91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2b91ec:
    // 0x2b91ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b91ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b91f0:
    // 0x2b91f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2b91f4:
    if (ctx->pc == 0x2B91F4u) {
        ctx->pc = 0x2B91F8u;
        goto label_2b91f8;
    }
    ctx->pc = 0x2B91F0u;
    {
        const bool branch_taken_0x2b91f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b91f0) {
            ctx->pc = 0x2B9224u;
            goto label_2b9224;
        }
    }
    ctx->pc = 0x2B91F8u;
label_2b91f8:
    // 0x2b91f8: 0xc0a1ee8  jal         func_287BA0
label_2b91fc:
    if (ctx->pc == 0x2B91FCu) {
        ctx->pc = 0x2B9200u;
        goto label_2b9200;
    }
    ctx->pc = 0x2B91F8u;
    SET_GPR_U32(ctx, 31, 0x2B9200u);
    ctx->pc = 0x287BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287BA0u, 0x2B91F8u, 0x2B9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9200u;
label_2b9200:
    // 0x2b9200: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b9204:
    if (ctx->pc == 0x2B9204u) {
        ctx->pc = 0x2B9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9200u;
        // 0x2b9204: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9208u;
        goto label_2b9208;
    }
    ctx->pc = 0x2B9200u;
    {
        const bool branch_taken_0x2b9200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9200u;
        // 0x2b9204: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9200) {
            ctx->pc = 0x2B9220u;
            goto label_2b9220;
        }
    }
    ctx->pc = 0x2B9208u;
label_2b9208:
    // 0x2b9208: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2b9208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2b920c:
    // 0x2b920c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b920cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9210:
    // 0x2b9210: 0xc0a2c82  jal         func_28B208
label_2b9214:
    if (ctx->pc == 0x2B9214u) {
        ctx->pc = 0x2B9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9210u;
        // 0x2b9214: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9218u;
        goto label_2b9218;
    }
    ctx->pc = 0x2B9210u;
    SET_GPR_U32(ctx, 31, 0x2B9218u);
    ctx->pc = 0x2B9214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9210u;
    // 0x2b9214: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B208u, 0x2B9210u, 0x2B9218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9218u;
label_2b9218:
    // 0x2b9218: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_2b921c:
    if (ctx->pc == 0x2B921Cu) {
        ctx->pc = 0x2B921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9218u;
        // 0x2b921c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9220u;
        goto label_2b9220;
    }
    ctx->pc = 0x2B9218u;
    {
        const bool branch_taken_0x2b9218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9218u;
        // 0x2b921c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9218) {
            ctx->pc = 0x2B9354u;
            goto label_2b9354;
        }
    }
    ctx->pc = 0x2B9220u;
label_2b9220:
    // 0x2b9220: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b9224:
    // 0x2b9224: 0xc0a1a88  jal         func_286A20
label_2b9228:
    if (ctx->pc == 0x2B9228u) {
        ctx->pc = 0x2B9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9224u;
        // 0x2b9228: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B922Cu;
        goto label_2b922c;
    }
    ctx->pc = 0x2B9224u;
    SET_GPR_U32(ctx, 31, 0x2B922Cu);
    ctx->pc = 0x2B9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9224u;
    // 0x2b9228: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2B9224u, 0x2B922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B922Cu;
label_2b922c:
    // 0x2b922c: 0xc0a1a8c  jal         func_286A30
label_2b9230:
    if (ctx->pc == 0x2B9230u) {
        ctx->pc = 0x2B9234u;
        goto label_2b9234;
    }
    ctx->pc = 0x2B922Cu;
    SET_GPR_U32(ctx, 31, 0x2B9234u);
    ctx->pc = 0x286A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A30u, 0x2B922Cu, 0x2B9234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9234u;
label_2b9234:
    // 0x2b9234: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b9234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9238:
    // 0x2b9238: 0x12600045  beqz        $s3, . + 4 + (0x45 << 2)
label_2b923c:
    if (ctx->pc == 0x2B923Cu) {
        ctx->pc = 0x2B923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9238u;
        // 0x2b923c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9240u;
        goto label_2b9240;
    }
    ctx->pc = 0x2B9238u;
    {
        const bool branch_taken_0x2b9238 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9238u;
        // 0x2b923c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9238) {
            ctx->pc = 0x2B9350u;
            goto label_2b9350;
        }
    }
    ctx->pc = 0x2B9240u;
label_2b9240:
    // 0x2b9240: 0xc0a8d8a  jal         func_2A3628
label_2b9244:
    if (ctx->pc == 0x2B9244u) {
        ctx->pc = 0x2B9248u;
        goto label_2b9248;
    }
    ctx->pc = 0x2B9240u;
    SET_GPR_U32(ctx, 31, 0x2B9248u);
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x2B9240u, 0x2B9248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9248u;
label_2b9248:
    // 0x2b9248: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2b9248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b924c:
    // 0x2b924c: 0xc0a1a02  jal         func_286808
label_2b9250:
    if (ctx->pc == 0x2B9250u) {
        ctx->pc = 0x2B9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B924Cu;
        // 0x2b9250: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9254u;
        goto label_2b9254;
    }
    ctx->pc = 0x2B924Cu;
    SET_GPR_U32(ctx, 31, 0x2B9254u);
    ctx->pc = 0x2B9250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B924Cu;
    // 0x2b9250: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x2B924Cu, 0x2B9254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9254u;
label_2b9254:
    // 0x2b9254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9258:
    // 0x2b9258: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b9258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b925c:
    // 0x2b925c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b9260:
    // 0x2b9260: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b9260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9264:
    // 0x2b9264: 0xc0a2cec  jal         func_28B3B0
label_2b9268:
    if (ctx->pc == 0x2B9268u) {
        ctx->pc = 0x2B9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9264u;
        // 0x2b9268: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B926Cu;
        goto label_2b926c;
    }
    ctx->pc = 0x2B9264u;
    SET_GPR_U32(ctx, 31, 0x2B926Cu);
    ctx->pc = 0x2B9268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9264u;
    // 0x2b9268: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B3B0u, 0x2B9264u, 0x2B926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B926Cu;
label_2b926c:
    // 0x2b926c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_2b9270:
    if (ctx->pc == 0x2B9270u) {
        ctx->pc = 0x2B9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B926Cu;
        // 0x2b9270: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9274u;
        goto label_2b9274;
    }
    ctx->pc = 0x2B926Cu;
    {
        const bool branch_taken_0x2b926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B926Cu;
        // 0x2b9270: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b926c) {
            ctx->pc = 0x2B9354u;
            goto label_2b9354;
        }
    }
    ctx->pc = 0x2B9274u;
label_2b9274:
    // 0x2b9274: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2b9274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b9278:
    // 0x2b9278: 0xc0a1c20  jal         func_287080
label_2b927c:
    if (ctx->pc == 0x2B927Cu) {
        ctx->pc = 0x2B927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9278u;
        // 0x2b927c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9280u;
        goto label_2b9280;
    }
    ctx->pc = 0x2B9278u;
    SET_GPR_U32(ctx, 31, 0x2B9280u);
    ctx->pc = 0x2B927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9278u;
    // 0x2b927c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287080u, 0x2B9278u, 0x2B9280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9280u;
label_2b9280:
    // 0x2b9280: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2b9284:
    if (ctx->pc == 0x2B9284u) {
        ctx->pc = 0x2B9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9280u;
        // 0x2b9284: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9288u;
        goto label_2b9288;
    }
    ctx->pc = 0x2B9280u;
    {
        const bool branch_taken_0x2b9280 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9280u;
        // 0x2b9284: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9280) {
            ctx->pc = 0x2B9294u;
            goto label_2b9294;
        }
    }
    ctx->pc = 0x2B9288u;
label_2b9288:
    // 0x2b9288: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2b9288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b928c:
    // 0x2b928c: 0xc0a16fa  jal         func_285BE8
label_2b9290:
    if (ctx->pc == 0x2B9290u) {
        ctx->pc = 0x2B9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B928Cu;
        // 0x2b9290: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9294u;
        goto label_2b9294;
    }
    ctx->pc = 0x2B928Cu;
    SET_GPR_U32(ctx, 31, 0x2B9294u);
    ctx->pc = 0x2B9290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B928Cu;
    // 0x2b9290: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285BE8u, 0x2B928Cu, 0x2B9294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9294u;
label_2b9294:
    // 0x2b9294: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2b9294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2b9298:
    // 0x2b9298: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_2b929c:
    if (ctx->pc == 0x2B929Cu) {
        ctx->pc = 0x2B92A0u;
        goto label_2b92a0;
    }
    ctx->pc = 0x2B9298u;
    {
        const bool branch_taken_0x2b9298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9298) {
            ctx->pc = 0x2B9240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b9240;
        }
    }
    ctx->pc = 0x2B92A0u;
label_2b92a0:
    // 0x2b92a0: 0x14560004  bne         $v0, $s6, . + 4 + (0x4 << 2)
label_2b92a4:
    if (ctx->pc == 0x2B92A4u) {
        ctx->pc = 0x2B92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92A0u;
        // 0x2b92a4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92A8u;
        goto label_2b92a8;
    }
    ctx->pc = 0x2B92A0u;
    {
        const bool branch_taken_0x2b92a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2B92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92A0u;
        // 0x2b92a4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92a0) {
            ctx->pc = 0x2B92B4u;
            goto label_2b92b4;
        }
    }
    ctx->pc = 0x2B92A8u;
label_2b92a8:
    // 0x2b92a8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2b92a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2b92ac:
    // 0x2b92ac: 0x1060ffe4  beqz        $v1, . + 4 + (-0x1C << 2)
label_2b92b0:
    if (ctx->pc == 0x2B92B0u) {
        ctx->pc = 0x2B92B4u;
        goto label_2b92b4;
    }
    ctx->pc = 0x2B92ACu;
    {
        const bool branch_taken_0x2b92ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b92ac) {
            ctx->pc = 0x2B9240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b9240;
        }
    }
    ctx->pc = 0x2B92B4u;
label_2b92b4:
    // 0x2b92b4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2b92b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2b92b8:
    // 0x2b92b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b92b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b92bc:
    // 0x2b92bc: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x2b92bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2b92c0:
    // 0x2b92c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b92c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b92c4:
    // 0x2b92c4: 0x8e29002c  lw          $t1, 0x2C($s1)
    ctx->pc = 0x2b92c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2b92c8:
    // 0x2b92c8: 0xc0a28be  jal         func_28A2F8
label_2b92cc:
    if (ctx->pc == 0x2B92CCu) {
        ctx->pc = 0x2B92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92C8u;
        // 0x2b92cc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92D0u;
        goto label_2b92d0;
    }
    ctx->pc = 0x2B92C8u;
    SET_GPR_U32(ctx, 31, 0x2B92D0u);
    ctx->pc = 0x2B92CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92C8u;
    // 0x2b92cc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A2F8u, 0x2B92C8u, 0x2B92D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92D0u;
label_2b92d0:
    // 0x2b92d0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2b92d4:
    if (ctx->pc == 0x2B92D4u) {
        ctx->pc = 0x2B92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92D0u;
        // 0x2b92d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92D8u;
        goto label_2b92d8;
    }
    ctx->pc = 0x2B92D0u;
    {
        const bool branch_taken_0x2b92d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92D0u;
        // 0x2b92d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92d0) {
            ctx->pc = 0x2B9350u;
            goto label_2b9350;
        }
    }
    ctx->pc = 0x2B92D8u;
label_2b92d8:
    // 0x2b92d8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2b92d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b92dc:
    // 0x2b92dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b92dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b92e0:
    // 0x2b92e0: 0xc0a18ea  jal         func_2863A8
label_2b92e4:
    if (ctx->pc == 0x2B92E4u) {
        ctx->pc = 0x2B92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92E0u;
        // 0x2b92e4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92E8u;
        goto label_2b92e8;
    }
    ctx->pc = 0x2B92E0u;
    SET_GPR_U32(ctx, 31, 0x2B92E8u);
    ctx->pc = 0x2B92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92E0u;
    // 0x2b92e4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2863A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2863A8u, 0x2B92E0u, 0x2B92E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92E8u;
label_2b92e8:
    // 0x2b92e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2b92ec:
    if (ctx->pc == 0x2B92ECu) {
        ctx->pc = 0x2B92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92E8u;
        // 0x2b92ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92F0u;
        goto label_2b92f0;
    }
    ctx->pc = 0x2B92E8u;
    {
        const bool branch_taken_0x2b92e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92E8u;
        // 0x2b92ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92e8) {
            ctx->pc = 0x2B9350u;
            goto label_2b9350;
        }
    }
    ctx->pc = 0x2B92F0u;
label_2b92f0:
    // 0x2b92f0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2b92f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b92f4:
    // 0x2b92f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b92f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b92f8:
    // 0x2b92f8: 0xc0a18f8  jal         func_2863E0
label_2b92fc:
    if (ctx->pc == 0x2B92FCu) {
        ctx->pc = 0x2B92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92F8u;
        // 0x2b92fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9300u;
        goto label_2b9300;
    }
    ctx->pc = 0x2B92F8u;
    SET_GPR_U32(ctx, 31, 0x2B9300u);
    ctx->pc = 0x2B92FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92F8u;
    // 0x2b92fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2863E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2863E0u, 0x2B92F8u, 0x2B9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9300u;
label_2b9300:
    // 0x2b9300: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b9300u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9304:
    // 0x2b9304: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
label_2b9308:
    if (ctx->pc == 0x2B9308u) {
        ctx->pc = 0x2B9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9304u;
        // 0x2b9308: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B930Cu;
        goto label_2b930c;
    }
    ctx->pc = 0x2B9304u;
    {
        const bool branch_taken_0x2b9304 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9304u;
        // 0x2b9308: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9304) {
            ctx->pc = 0x2B9354u;
            goto label_2b9354;
        }
    }
    ctx->pc = 0x2B930Cu;
label_2b930c:
    // 0x2b930c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2b930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2b9310:
    // 0x2b9310: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2b9314:
    if (ctx->pc == 0x2B9314u) {
        ctx->pc = 0x2B9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9310u;
        // 0x2b9314: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9318u;
        goto label_2b9318;
    }
    ctx->pc = 0x2B9310u;
    {
        const bool branch_taken_0x2b9310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9310) {
            ctx->pc = 0x2B9314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9310u;
            // 0x2b9314: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9324u;
            goto label_2b9324;
        }
    }
    ctx->pc = 0x2B9318u;
label_2b9318:
    // 0x2b9318: 0xc0a1a14  jal         func_286850
label_2b931c:
    if (ctx->pc == 0x2B931Cu) {
        ctx->pc = 0x2B9320u;
        goto label_2b9320;
    }
    ctx->pc = 0x2B9318u;
    SET_GPR_U32(ctx, 31, 0x2B9320u);
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2B9318u, 0x2B9320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9320u;
label_2b9320:
    // 0x2b9320: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2b9320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2b9324:
    // 0x2b9324: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2b9328:
    if (ctx->pc == 0x2B9328u) {
        ctx->pc = 0x2B9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9324u;
        // 0x2b9328: 0xaef30000  sw          $s3, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B932Cu;
        goto label_2b932c;
    }
    ctx->pc = 0x2B9324u;
    {
        const bool branch_taken_0x2b9324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9324) {
            ctx->pc = 0x2B9328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9324u;
            // 0x2b9328: 0xaef30000  sw          $s3, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9338u;
            goto label_2b9338;
        }
    }
    ctx->pc = 0x2B932Cu;
label_2b932c:
    // 0x2b932c: 0xc0a1a14  jal         func_286850
label_2b9330:
    if (ctx->pc == 0x2B9330u) {
        ctx->pc = 0x2B9334u;
        goto label_2b9334;
    }
    ctx->pc = 0x2B932Cu;
    SET_GPR_U32(ctx, 31, 0x2B9334u);
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2B932Cu, 0x2B9334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9334u;
label_2b9334:
    // 0x2b9334: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x2b9334u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
label_2b9338:
    // 0x2b9338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b933c:
    // 0x2b933c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2b933cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2b9340:
    // 0x2b9340: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b9340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9344:
    // 0x2b9344: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x2b9344u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_2b9348:
    // 0x2b9348: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b934c:
    if (ctx->pc == 0x2B934Cu) {
        ctx->pc = 0x2B934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9348u;
        // 0x2b934c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9350u;
        goto label_2b9350;
    }
    ctx->pc = 0x2B9348u;
    {
        const bool branch_taken_0x2b9348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9348u;
        // 0x2b934c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9348) {
            ctx->pc = 0x2B9368u;
            goto label_2b9368;
        }
    }
    ctx->pc = 0x2B9350u;
label_2b9350:
    // 0x2b9350: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2b9350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b9354:
    // 0x2b9354: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x2b9354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_2b9358:
    // 0x2b9358: 0x24060803  addiu       $a2, $zero, 0x803
    ctx->pc = 0x2b9358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_2b935c:
    // 0x2b935c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b935cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9360:
    // 0x2b9360: 0xc0a5648  jal         func_295920
label_2b9364:
    if (ctx->pc == 0x2B9364u) {
        ctx->pc = 0x2B9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9360u;
        // 0x2b9364: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9368u;
        goto label_2b9368;
    }
    ctx->pc = 0x2B9360u;
    SET_GPR_U32(ctx, 31, 0x2B9368u);
    ctx->pc = 0x2B9364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9360u;
    // 0x2b9364: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B9360u, 0x2B9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9368u;
label_2b9368:
    // 0x2b9368: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_2b936c:
    if (ctx->pc == 0x2B936Cu) {
        ctx->pc = 0x2B9370u;
        goto label_2b9370;
    }
    ctx->pc = 0x2B9368u;
    {
        const bool branch_taken_0x2b9368 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9368) {
            ctx->pc = 0x2B9378u;
            goto label_2b9378;
        }
    }
    ctx->pc = 0x2B9370u;
label_2b9370:
    // 0x2b9370: 0xc0a1abe  jal         func_286AF8
label_2b9374:
    if (ctx->pc == 0x2B9374u) {
        ctx->pc = 0x2B9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9370u;
        // 0x2b9374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9378u;
        goto label_2b9378;
    }
    ctx->pc = 0x2B9370u;
    SET_GPR_U32(ctx, 31, 0x2B9378u);
    ctx->pc = 0x2B9374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9370u;
    // 0x2b9374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286AF8u, 0x2B9370u, 0x2B9378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9378u;
label_2b9378:
    // 0x2b9378: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_2b937c:
    if (ctx->pc == 0x2B937Cu) {
        ctx->pc = 0x2B9380u;
        goto label_2b9380;
    }
    ctx->pc = 0x2B9378u;
    {
        const bool branch_taken_0x2b9378 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9378) {
            ctx->pc = 0x2B9388u;
            goto label_2b9388;
        }
    }
    ctx->pc = 0x2B9380u;
label_2b9380:
    // 0x2b9380: 0xc0a1a14  jal         func_286850
label_2b9384:
    if (ctx->pc == 0x2B9384u) {
        ctx->pc = 0x2B9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9380u;
        // 0x2b9384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9388u;
        goto label_2b9388;
    }
    ctx->pc = 0x2B9380u;
    SET_GPR_U32(ctx, 31, 0x2B9388u);
    ctx->pc = 0x2B9384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9380u;
    // 0x2b9384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2B9380u, 0x2B9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9388u;
label_2b9388:
    // 0x2b9388: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2b938c:
    if (ctx->pc == 0x2B938Cu) {
        ctx->pc = 0x2B9390u;
        goto label_2b9390;
    }
    ctx->pc = 0x2B9388u;
    {
        const bool branch_taken_0x2b9388 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9388) {
            ctx->pc = 0x2B9398u;
            goto label_2b9398;
        }
    }
    ctx->pc = 0x2B9390u;
label_2b9390:
    // 0x2b9390: 0xc0a1a14  jal         func_286850
label_2b9394:
    if (ctx->pc == 0x2B9394u) {
        ctx->pc = 0x2B9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9390u;
        // 0x2b9394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9398u;
        goto label_2b9398;
    }
    ctx->pc = 0x2B9390u;
    SET_GPR_U32(ctx, 31, 0x2B9398u);
    ctx->pc = 0x2B9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9390u;
    // 0x2b9394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2B9390u, 0x2B9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9398u;
label_2b9398:
    // 0x2b9398: 0xc0a1a14  jal         func_286850
label_2b939c:
    if (ctx->pc == 0x2B939Cu) {
        ctx->pc = 0x2B939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9398u;
        // 0x2b939c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B93A0u;
        goto label_2b93a0;
    }
    ctx->pc = 0x2B9398u;
    SET_GPR_U32(ctx, 31, 0x2B93A0u);
    ctx->pc = 0x2B939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9398u;
    // 0x2b939c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2B9398u, 0x2B93A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93A0u;
label_2b93a0:
    // 0x2b93a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b93a4:
    // 0x2b93a4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2b93a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2b93a8:
    // 0x2b93a8: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2b93a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2b93ac:
    // 0x2b93ac: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2b93acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b93b0:
    // 0x2b93b0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2b93b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b93b4:
    // 0x2b93b4: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2b93b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b93b8:
    // 0x2b93b8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2b93b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b93bc:
    // 0x2b93bc: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2b93bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b93c0:
    // 0x2b93c0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2b93c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b93c4:
    // 0x2b93c4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2b93c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b93c8:
    // 0x2b93c8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2b93c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b93cc:
    // 0x2b93cc: 0x3e00008  jr          $ra
label_2b93d0:
    if (ctx->pc == 0x2B93D0u) {
        ctx->pc = 0x2B93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93CCu;
        // 0x2b93d0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B93D4u;
        goto label_2b93d4;
    }
    ctx->pc = 0x2B93CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93CCu;
        // 0x2b93d0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B93CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B93D4u;
label_2b93d4:
    // 0x2b93d4: 0x0  nop
    ctx->pc = 0x2b93d4u;
    // NOP
label_2b93d8:
    // 0x2b93d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2b93d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2b93dc:
    // 0x2b93dc: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x2b93dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
label_2b93e0:
    // 0x2b93e0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2b93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b93e4:
    // 0x2b93e4: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2b93e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_2b93e8:
    // 0x2b93e8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2b93e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b93ec:
    // 0x2b93ec: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x2b93ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
label_2b93f0:
    // 0x2b93f0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2b93f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b93f4:
    // 0x2b93f4: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2b93f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
label_2b93f8:
    // 0x2b93f8: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2b93f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2b93fc:
    // 0x2b93fc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2b93fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_2b9400:
    // 0x2b9400: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b9400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b9404:
    // 0x2b9404: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2b9404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
label_2b9408:
    // 0x2b9408: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b9408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b940c:
    // 0x2b940c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2b940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_2b9410:
    // 0x2b9410: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2b9410u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9414:
    // 0x2b9414: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2b9414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_2b9418:
    // 0x2b9418: 0xc0a69c2  jal         func_29A708
label_2b941c:
    if (ctx->pc == 0x2B941Cu) {
        ctx->pc = 0x2B941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9418u;
        // 0x2b941c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9420u;
        goto label_2b9420;
    }
    ctx->pc = 0x2B9418u;
    SET_GPR_U32(ctx, 31, 0x2B9420u);
    ctx->pc = 0x2B941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9418u;
    // 0x2b941c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A708u, 0x2B9418u, 0x2B9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9420u;
label_2b9420:
    // 0x2b9420: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b9420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9424:
    // 0x2b9424: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2b9424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2b9428:
    // 0x2b9428: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2b9428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b942c:
    // 0x2b942c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9430:
    // 0x2b9430: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2b9434:
    if (ctx->pc == 0x2B9434u) {
        ctx->pc = 0x2B9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9430u;
        // 0x2b9434: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9438u;
        goto label_2b9438;
    }
    ctx->pc = 0x2B9430u;
    {
        const bool branch_taken_0x2b9430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9430) {
            ctx->pc = 0x2B9434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9430u;
            // 0x2b9434: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9448u;
            goto label_2b9448;
        }
    }
    ctx->pc = 0x2B9438u;
label_2b9438:
    // 0x2b9438: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b9438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b943c:
    // 0x2b943c: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x2b943cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2b9440:
    // 0x2b9440: 0x10000027  b           . + 4 + (0x27 << 2)
label_2b9444:
    if (ctx->pc == 0x2B9444u) {
        ctx->pc = 0x2B9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9440u;
        // 0x2b9444: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9448u;
        goto label_2b9448;
    }
    ctx->pc = 0x2B9440u;
    {
        const bool branch_taken_0x2b9440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9440u;
        // 0x2b9444: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9440) {
            ctx->pc = 0x2B94E0u;
            goto label_2b94e0;
        }
    }
    ctx->pc = 0x2B9448u;
label_2b9448:
    // 0x2b9448: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b944c:
    if (ctx->pc == 0x2B944Cu) {
        ctx->pc = 0x2B944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9448u;
        // 0x2b944c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9450u;
        goto label_2b9450;
    }
    ctx->pc = 0x2B9448u;
    {
        const bool branch_taken_0x2b9448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9448u;
        // 0x2b944c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9448) {
            ctx->pc = 0x2B9460u;
            goto label_2b9460;
        }
    }
    ctx->pc = 0x2B9450u;
label_2b9450:
    // 0x2b9450: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b9450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b9454:
    // 0x2b9454: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x2b9454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2b9458:
    // 0x2b9458: 0x10000021  b           . + 4 + (0x21 << 2)
label_2b945c:
    if (ctx->pc == 0x2B945Cu) {
        ctx->pc = 0x2B945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9458u;
        // 0x2b945c: 0x24060077  addiu       $a2, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9460u;
        goto label_2b9460;
    }
    ctx->pc = 0x2B9458u;
    {
        const bool branch_taken_0x2b9458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9458u;
        // 0x2b945c: 0x24060077  addiu       $a2, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9458) {
            ctx->pc = 0x2B94E0u;
            goto label_2b94e0;
        }
    }
    ctx->pc = 0x2B9460u;
label_2b9460:
    // 0x2b9460: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2b9460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2b9464:
    // 0x2b9464: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2b9464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2b9468:
    // 0x2b9468: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2b9468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b946c:
    // 0x2b946c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2b946cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2b9470:
    // 0x2b9470: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2b9470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b9474:
    // 0x2b9474: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2b9474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2b9478:
    // 0x2b9478: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b947c:
    // 0x2b947c: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x2b947cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_2b9480:
    // 0x2b9480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b9480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9484:
    // 0x2b9484: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2b9484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2b9488:
    // 0x2b9488: 0xc0b1372  jal         func_2C4DC8
label_2b948c:
    if (ctx->pc == 0x2B948Cu) {
        ctx->pc = 0x2B948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9488u;
        // 0x2b948c: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9490u;
        goto label_2b9490;
    }
    ctx->pc = 0x2B9488u;
    SET_GPR_U32(ctx, 31, 0x2B9490u);
    ctx->pc = 0x2B948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9488u;
    // 0x2b948c: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DC8u, 0x2B9488u, 0x2B9490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9490u;
label_2b9490:
    // 0x2b9490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b9490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9494:
    // 0x2b9494: 0xc0aa39c  jal         func_2A8E70
label_2b9498:
    if (ctx->pc == 0x2B9498u) {
        ctx->pc = 0x2B9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9494u;
        // 0x2b9498: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B949Cu;
        goto label_2b949c;
    }
    ctx->pc = 0x2B9494u;
    SET_GPR_U32(ctx, 31, 0x2B949Cu);
    ctx->pc = 0x2B9498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9494u;
    // 0x2b9498: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E70u, 0x2B9494u, 0x2B949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B949Cu;
label_2b949c:
    // 0x2b949c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b949cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b94a0:
    // 0x2b94a0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2b94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2b94a4:
    // 0x2b94a4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2b94a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b94a8:
    // 0x2b94a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b94ac:
    if (ctx->pc == 0x2B94ACu) {
        ctx->pc = 0x2B94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94A8u;
        // 0x2b94ac: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94B0u;
        goto label_2b94b0;
    }
    ctx->pc = 0x2B94A8u;
    {
        const bool branch_taken_0x2b94a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94A8u;
        // 0x2b94ac: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94a8) {
            ctx->pc = 0x2B94BCu;
            goto label_2b94bc;
        }
    }
    ctx->pc = 0x2B94B0u;
label_2b94b0:
    // 0x2b94b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b94b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b94b4:
    // 0x2b94b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2b94b8:
    if (ctx->pc == 0x2B94B8u) {
        ctx->pc = 0x2B94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94B4u;
        // 0x2b94b8: 0x2406006f  addiu       $a2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94BCu;
        goto label_2b94bc;
    }
    ctx->pc = 0x2B94B4u;
    {
        const bool branch_taken_0x2b94b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94B4u;
        // 0x2b94b8: 0x2406006f  addiu       $a2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94b4) {
            ctx->pc = 0x2B94E0u;
            goto label_2b94e0;
        }
    }
    ctx->pc = 0x2B94BCu;
label_2b94bc:
    // 0x2b94bc: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x2b94bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2b94c0:
    // 0x2b94c0: 0xc0a8bf6  jal         func_2A2FD8
label_2b94c4:
    if (ctx->pc == 0x2B94C4u) {
        ctx->pc = 0x2B94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94C0u;
        // 0x2b94c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94C8u;
        goto label_2b94c8;
    }
    ctx->pc = 0x2B94C0u;
    SET_GPR_U32(ctx, 31, 0x2B94C8u);
    ctx->pc = 0x2B94C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94C0u;
    // 0x2b94c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2B94C0u, 0x2B94C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94C8u;
label_2b94c8:
    // 0x2b94c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b94c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b94cc:
    // 0x2b94cc: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
label_2b94d0:
    if (ctx->pc == 0x2B94D0u) {
        ctx->pc = 0x2B94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94CCu;
        // 0x2b94d0: 0xafb10050  sw          $s1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94D4u;
        goto label_2b94d4;
    }
    ctx->pc = 0x2B94CCu;
    {
        const bool branch_taken_0x2b94cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b94cc) {
            ctx->pc = 0x2B94D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B94CCu;
            // 0x2b94d0: 0xafb10050  sw          $s1, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B94F4u;
            goto label_2b94f4;
        }
    }
    ctx->pc = 0x2B94D4u;
label_2b94d4:
    // 0x2b94d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b94d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b94d8:
    // 0x2b94d8: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x2b94d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2b94dc:
    // 0x2b94dc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b94dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2b94e0:
    // 0x2b94e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b94e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b94e4:
    // 0x2b94e4: 0xc0a5648  jal         func_295920
label_2b94e8:
    if (ctx->pc == 0x2B94E8u) {
        ctx->pc = 0x2B94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94E4u;
        // 0x2b94e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94ECu;
        goto label_2b94ec;
    }
    ctx->pc = 0x2B94E4u;
    SET_GPR_U32(ctx, 31, 0x2B94ECu);
    ctx->pc = 0x2B94E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94E4u;
    // 0x2b94e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B94E4u, 0x2B94ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94ECu;
label_2b94ec:
    // 0x2b94ec: 0x10000015  b           . + 4 + (0x15 << 2)
label_2b94f0:
    if (ctx->pc == 0x2B94F0u) {
        ctx->pc = 0x2B94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94ECu;
        // 0x2b94f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94F4u;
        goto label_2b94f4;
    }
    ctx->pc = 0x2B94ECu;
    {
        const bool branch_taken_0x2b94ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94ECu;
        // 0x2b94f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94ec) {
            ctx->pc = 0x2B9544u;
            goto label_2b9544;
        }
    }
    ctx->pc = 0x2B94F4u;
label_2b94f4:
    // 0x2b94f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b94f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b94f8:
    // 0x2b94f8: 0xc0b1372  jal         func_2C4DC8
label_2b94fc:
    if (ctx->pc == 0x2B94FCu) {
        ctx->pc = 0x2B94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94F8u;
        // 0x2b94fc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9500u;
        goto label_2b9500;
    }
    ctx->pc = 0x2B94F8u;
    SET_GPR_U32(ctx, 31, 0x2B9500u);
    ctx->pc = 0x2B94FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94F8u;
    // 0x2b94fc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DC8u, 0x2B94F8u, 0x2B9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9500u;
label_2b9500:
    // 0x2b9500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9504:
    // 0x2b9504: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b9504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b9508:
    // 0x2b9508: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2b9508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b950c:
    // 0x2b950c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b950cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9510:
    // 0x2b9510: 0xc0aa480  jal         func_2A9200
label_2b9514:
    if (ctx->pc == 0x2B9514u) {
        ctx->pc = 0x2B9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9510u;
        // 0x2b9514: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9518u;
        goto label_2b9518;
    }
    ctx->pc = 0x2B9510u;
    SET_GPR_U32(ctx, 31, 0x2B9518u);
    ctx->pc = 0x2B9514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9510u;
    // 0x2b9514: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9200u, 0x2B9510u, 0x2B9518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9518u;
label_2b9518:
    // 0x2b9518: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b9518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b951c:
    // 0x2b951c: 0x5e000002  bgtzl       $s0, . + 4 + (0x2 << 2)
label_2b9520:
    if (ctx->pc == 0x2B9520u) {
        ctx->pc = 0x2B9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B951Cu;
        // 0x2b9520: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9524u;
        goto label_2b9524;
    }
    ctx->pc = 0x2B951Cu;
    {
        const bool branch_taken_0x2b951c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2b951c) {
            ctx->pc = 0x2B9520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B951Cu;
            // 0x2b9520: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9528u;
            goto label_2b9528;
        }
    }
    ctx->pc = 0x2B9524u;
label_2b9524:
    // 0x2b9524: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b9524u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9528:
    // 0x2b9528: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b9528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b952c:
    // 0x2b952c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9530:
    // 0x2b9530: 0xc049cb6  jal         func_1272D8
label_2b9534:
    if (ctx->pc == 0x2B9534u) {
        ctx->pc = 0x2B9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9530u;
        // 0x2b9534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9538u;
        goto label_2b9538;
    }
    ctx->pc = 0x2B9530u;
    SET_GPR_U32(ctx, 31, 0x2B9538u);
    ctx->pc = 0x2B9534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9530u;
    // 0x2b9534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2B9530u, 0x2B9538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9538u;
label_2b9538:
    // 0x2b9538: 0xc0a8c0a  jal         func_2A3028
label_2b953c:
    if (ctx->pc == 0x2B953Cu) {
        ctx->pc = 0x2B953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9538u;
        // 0x2b953c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9540u;
        goto label_2b9540;
    }
    ctx->pc = 0x2B9538u;
    SET_GPR_U32(ctx, 31, 0x2B9540u);
    ctx->pc = 0x2B953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9538u;
    // 0x2b953c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2B9538u, 0x2B9540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9540u;
label_2b9540:
    // 0x2b9540: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2b9540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b9544:
    // 0x2b9544: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2b9544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2b9548:
    // 0x2b9548: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2b9548u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2b954c:
    // 0x2b954c: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x2b954cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2b9550:
    // 0x2b9550: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2b9550u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b9554:
    // 0x2b9554: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x2b9554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b9558:
    // 0x2b9558: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2b9558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b955c:
    // 0x2b955c: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2b955cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b9560:
    // 0x2b9560: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2b9560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b9564:
    // 0x2b9564: 0x3e00008  jr          $ra
label_2b9568:
    if (ctx->pc == 0x2B9568u) {
        ctx->pc = 0x2B9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9564u;
        // 0x2b9568: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B956Cu;
        goto label_2b956c;
    }
    ctx->pc = 0x2B9564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9564u;
        // 0x2b9568: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B956Cu;
label_2b956c:
    // 0x2b956c: 0x0  nop
    ctx->pc = 0x2b956cu;
    // NOP
label_2b9570:
    // 0x2b9570: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b9570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2b9574:
    // 0x2b9574: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b9574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2b9578:
    // 0x2b9578: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b9578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2b957c:
    // 0x2b957c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2b957cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9580:
    // 0x2b9580: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b9580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_2b9584:
    // 0x2b9584: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2b9584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2b9588:
    // 0x2b9588: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b9588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2b958c:
    // 0x2b958c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2b958cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9590:
    // 0x2b9590: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b9590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2b9594:
    // 0x2b9594: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2b9594u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9598:
    // 0x2b9598: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b9598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2b959c:
    // 0x2b959c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2b959cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b95a0:
    // 0x2b95a0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b95a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2b95a4:
    // 0x2b95a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b95a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b95a8:
    // 0x2b95a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b95a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2b95ac:
    // 0x2b95ac: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2b95acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b95b0:
    // 0x2b95b0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b95b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2b95b4:
    // 0x2b95b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2b95b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b95b8:
    // 0x2b95b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b95b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2b95bc:
    // 0x2b95bc: 0xc0aa39c  jal         func_2A8E70
label_2b95c0:
    if (ctx->pc == 0x2B95C0u) {
        ctx->pc = 0x2B95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95BCu;
        // 0x2b95c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95C4u;
        goto label_2b95c4;
    }
    ctx->pc = 0x2B95BCu;
    SET_GPR_U32(ctx, 31, 0x2B95C4u);
    ctx->pc = 0x2B95C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95BCu;
    // 0x2b95c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E70u, 0x2B95BCu, 0x2B95C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95C4u;
label_2b95c4:
    // 0x2b95c4: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_2b95c8:
    if (ctx->pc == 0x2B95C8u) {
        ctx->pc = 0x2B95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95C4u;
        // 0x2b95c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95CCu;
        goto label_2b95cc;
    }
    ctx->pc = 0x2B95C4u;
    {
        const bool branch_taken_0x2b95c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95C4u;
        // 0x2b95c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95c4) {
            ctx->pc = 0x2B95E8u;
            goto label_2b95e8;
        }
    }
    ctx->pc = 0x2B95CCu;
label_2b95cc:
    // 0x2b95cc: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2b95ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2b95d0:
    // 0x2b95d0: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x2b95d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_2b95d4:
    // 0x2b95d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b95d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b95d8:
    // 0x2b95d8: 0xc0a5648  jal         func_295920
label_2b95dc:
    if (ctx->pc == 0x2B95DCu) {
        ctx->pc = 0x2B95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95D8u;
        // 0x2b95dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95E0u;
        goto label_2b95e0;
    }
    ctx->pc = 0x2B95D8u;
    SET_GPR_U32(ctx, 31, 0x2B95E0u);
    ctx->pc = 0x2B95DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95D8u;
    // 0x2b95dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B95D8u, 0x2B95E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95E0u;
label_2b95e0:
    // 0x2b95e0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2b95e4:
    if (ctx->pc == 0x2B95E4u) {
        ctx->pc = 0x2B95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95E0u;
        // 0x2b95e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95E8u;
        goto label_2b95e8;
    }
    ctx->pc = 0x2B95E0u;
    {
        const bool branch_taken_0x2b95e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95E0u;
        // 0x2b95e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95e0) {
            ctx->pc = 0x2B96D8u;
            goto label_2b96d8;
        }
    }
    ctx->pc = 0x2B95E8u;
label_2b95e8:
    // 0x2b95e8: 0xc0a8bf6  jal         func_2A2FD8
label_2b95ec:
    if (ctx->pc == 0x2B95ECu) {
        ctx->pc = 0x2B95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95E8u;
        // 0x2b95ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95F0u;
        goto label_2b95f0;
    }
    ctx->pc = 0x2B95E8u;
    SET_GPR_U32(ctx, 31, 0x2B95F0u);
    ctx->pc = 0x2B95ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95E8u;
    // 0x2b95ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2B95E8u, 0x2B95F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95F0u;
label_2b95f0:
    // 0x2b95f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b95f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b95f4:
    // 0x2b95f4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_2b95f8:
    if (ctx->pc == 0x2B95F8u) {
        ctx->pc = 0x2B95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95F4u;
        // 0x2b95f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95FCu;
        goto label_2b95fc;
    }
    ctx->pc = 0x2B95F4u;
    {
        const bool branch_taken_0x2b95f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95F4u;
        // 0x2b95f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95f4) {
            ctx->pc = 0x2B960Cu;
            goto label_2b960c;
        }
    }
    ctx->pc = 0x2B95FCu;
label_2b95fc:
    // 0x2b95fc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b95fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b9600:
    // 0x2b9600: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2b9600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2b9604:
    // 0x2b9604: 0x10000023  b           . + 4 + (0x23 << 2)
label_2b9608:
    if (ctx->pc == 0x2B9608u) {
        ctx->pc = 0x2B9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9604u;
        // 0x2b9608: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B960Cu;
        goto label_2b960c;
    }
    ctx->pc = 0x2B9604u;
    {
        const bool branch_taken_0x2b9604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9604u;
        // 0x2b9608: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9604) {
            ctx->pc = 0x2B9694u;
            goto label_2b9694;
        }
    }
    ctx->pc = 0x2B960Cu;
label_2b960c:
    // 0x2b960c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b960cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9610:
    // 0x2b9610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b9610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9614:
    // 0x2b9614: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b9614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9618:
    // 0x2b9618: 0xc0aa4a6  jal         func_2A9298
label_2b961c:
    if (ctx->pc == 0x2B961Cu) {
        ctx->pc = 0x2B961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9618u;
        // 0x2b961c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9620u;
        goto label_2b9620;
    }
    ctx->pc = 0x2B9618u;
    SET_GPR_U32(ctx, 31, 0x2B9620u);
    ctx->pc = 0x2B961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9618u;
    // 0x2b961c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9298u, 0x2B9618u, 0x2B9620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9620u;
label_2b9620:
    // 0x2b9620: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_2b9624:
    if (ctx->pc == 0x2B9624u) {
        ctx->pc = 0x2B9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9620u;
        // 0x2b9624: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9628u;
        goto label_2b9628;
    }
    ctx->pc = 0x2B9620u;
    {
        const bool branch_taken_0x2b9620 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9620u;
        // 0x2b9624: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9620) {
            ctx->pc = 0x2B96ACu;
            goto label_2b96ac;
        }
    }
    ctx->pc = 0x2B9628u;
label_2b9628:
    // 0x2b9628: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2b9628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_2b962c:
    // 0x2b962c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b962cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9630:
    // 0x2b9630: 0xc0b13a4  jal         func_2C4E90
label_2b9634:
    if (ctx->pc == 0x2B9634u) {
        ctx->pc = 0x2B9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9630u;
        // 0x2b9634: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9638u;
        goto label_2b9638;
    }
    ctx->pc = 0x2B9630u;
    SET_GPR_U32(ctx, 31, 0x2B9638u);
    ctx->pc = 0x2B9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9630u;
    // 0x2b9634: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4E90u, 0x2B9630u, 0x2B9638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9638u;
label_2b9638:
    // 0x2b9638: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b9638u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b963c:
    // 0x2b963c: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
label_2b9640:
    if (ctx->pc == 0x2B9640u) {
        ctx->pc = 0x2B9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B963Cu;
        // 0x2b9640: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9644u;
        goto label_2b9644;
    }
    ctx->pc = 0x2B963Cu;
    {
        const bool branch_taken_0x2b963c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B963Cu;
        // 0x2b9640: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b963c) {
            ctx->pc = 0x2B96C0u;
            goto label_2b96c0;
        }
    }
    ctx->pc = 0x2B9644u;
label_2b9644:
    // 0x2b9644: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2b9644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b9648:
    // 0x2b9648: 0xc0a6a4e  jal         func_29A938
label_2b964c:
    if (ctx->pc == 0x2B964Cu) {
        ctx->pc = 0x2B964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9648u;
        // 0x2b964c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9650u;
        goto label_2b9650;
    }
    ctx->pc = 0x2B9648u;
    SET_GPR_U32(ctx, 31, 0x2B9650u);
    ctx->pc = 0x2B964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9648u;
    // 0x2b964c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A938u, 0x2B9648u, 0x2B9650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9650u;
label_2b9650:
    // 0x2b9650: 0x10560004  beq         $v0, $s6, . + 4 + (0x4 << 2)
label_2b9654:
    if (ctx->pc == 0x2B9654u) {
        ctx->pc = 0x2B9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9650u;
        // 0x2b9654: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9658u;
        goto label_2b9658;
    }
    ctx->pc = 0x2B9650u;
    {
        const bool branch_taken_0x2b9650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x2B9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9650u;
        // 0x2b9654: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9650) {
            ctx->pc = 0x2B9664u;
            goto label_2b9664;
        }
    }
    ctx->pc = 0x2B9658u;
label_2b9658:
    // 0x2b9658: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2b9658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2b965c:
    // 0x2b965c: 0x1000000d  b           . + 4 + (0xD << 2)
label_2b9660:
    if (ctx->pc == 0x2B9660u) {
        ctx->pc = 0x2B9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B965Cu;
        // 0x2b9660: 0x24060076  addiu       $a2, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9664u;
        goto label_2b9664;
    }
    ctx->pc = 0x2B965Cu;
    {
        const bool branch_taken_0x2b965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B965Cu;
        // 0x2b9660: 0x24060076  addiu       $a2, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b965c) {
            ctx->pc = 0x2B9694u;
            goto label_2b9694;
        }
    }
    ctx->pc = 0x2B9664u;
label_2b9664:
    // 0x2b9664: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2b9664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2b9668:
    // 0x2b9668: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b9668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b966c:
    // 0x2b966c: 0x14550008  bne         $v0, $s5, . + 4 + (0x8 << 2)
label_2b9670:
    if (ctx->pc == 0x2B9670u) {
        ctx->pc = 0x2B9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B966Cu;
        // 0x2b9670: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9674u;
        goto label_2b9674;
    }
    ctx->pc = 0x2B966Cu;
    {
        const bool branch_taken_0x2b966c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2B9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B966Cu;
        // 0x2b9670: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b966c) {
            ctx->pc = 0x2B9690u;
            goto label_2b9690;
        }
    }
    ctx->pc = 0x2B9674u;
label_2b9674:
    // 0x2b9674: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2b9674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2b9678:
    // 0x2b9678: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b9678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b967c:
    // 0x2b967c: 0xc049c22  jal         func_127088
label_2b9680:
    if (ctx->pc == 0x2B9680u) {
        ctx->pc = 0x2B9680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B967Cu;
        // 0x2b9680: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9684u;
        goto label_2b9684;
    }
    ctx->pc = 0x2B967Cu;
    SET_GPR_U32(ctx, 31, 0x2B9684u);
    ctx->pc = 0x2B9680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B967Cu;
    // 0x2b9680: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2B967Cu, 0x2B9684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9684u;
label_2b9684:
    // 0x2b9684: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b9688:
    if (ctx->pc == 0x2B9688u) {
        ctx->pc = 0x2B9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9684u;
        // 0x2b9688: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B968Cu;
        goto label_2b968c;
    }
    ctx->pc = 0x2B9684u;
    {
        const bool branch_taken_0x2b9684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9684u;
        // 0x2b9688: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9684) {
            ctx->pc = 0x2B96A8u;
            goto label_2b96a8;
        }
    }
    ctx->pc = 0x2B968Cu;
label_2b968c:
    // 0x2b968c: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2b968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2b9690:
    // 0x2b9690: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x2b9690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_2b9694:
    // 0x2b9694: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b9694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9698:
    // 0x2b9698: 0xc0a5648  jal         func_295920
label_2b969c:
    if (ctx->pc == 0x2B969Cu) {
        ctx->pc = 0x2B969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9698u;
        // 0x2b969c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96A0u;
        goto label_2b96a0;
    }
    ctx->pc = 0x2B9698u;
    SET_GPR_U32(ctx, 31, 0x2B96A0u);
    ctx->pc = 0x2B969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9698u;
    // 0x2b969c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B9698u, 0x2B96A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B96A0u;
label_2b96a0:
    // 0x2b96a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b96a4:
    if (ctx->pc == 0x2B96A4u) {
        ctx->pc = 0x2B96A8u;
        goto label_2b96a8;
    }
    ctx->pc = 0x2B96A0u;
    {
        const bool branch_taken_0x2b96a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b96a0) {
            ctx->pc = 0x2B96ACu;
            goto label_2b96ac;
        }
    }
    ctx->pc = 0x2B96A8u;
label_2b96a8:
    // 0x2b96a8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2b96a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b96ac:
    // 0x2b96ac: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_2b96b0:
    if (ctx->pc == 0x2B96B0u) {
        ctx->pc = 0x2B96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96ACu;
        // 0x2b96b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96B4u;
        goto label_2b96b4;
    }
    ctx->pc = 0x2B96ACu;
    {
        const bool branch_taken_0x2b96ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96ACu;
        // 0x2b96b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96ac) {
            ctx->pc = 0x2B96C0u;
            goto label_2b96c0;
        }
    }
    ctx->pc = 0x2B96B4u;
label_2b96b4:
    // 0x2b96b4: 0xc0b1432  jal         func_2C50C8
label_2b96b8:
    if (ctx->pc == 0x2B96B8u) {
        ctx->pc = 0x2B96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96B4u;
        // 0x2b96b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96BCu;
        goto label_2b96bc;
    }
    ctx->pc = 0x2B96B4u;
    SET_GPR_U32(ctx, 31, 0x2B96BCu);
    ctx->pc = 0x2B96B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B96B4u;
    // 0x2b96b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C50C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C50C8u, 0x2B96B4u, 0x2B96BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B96BCu;
label_2b96bc:
    // 0x2b96bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b96bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b96c0:
    // 0x2b96c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b96c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b96c4:
    // 0x2b96c4: 0xc049cb6  jal         func_1272D8
label_2b96c8:
    if (ctx->pc == 0x2B96C8u) {
        ctx->pc = 0x2B96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96C4u;
        // 0x2b96c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96CCu;
        goto label_2b96cc;
    }
    ctx->pc = 0x2B96C4u;
    SET_GPR_U32(ctx, 31, 0x2B96CCu);
    ctx->pc = 0x2B96C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B96C4u;
    // 0x2b96c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2B96C4u, 0x2B96CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B96CCu;
label_2b96cc:
    // 0x2b96cc: 0xc0a8c0a  jal         func_2A3028
label_2b96d0:
    if (ctx->pc == 0x2B96D0u) {
        ctx->pc = 0x2B96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96CCu;
        // 0x2b96d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96D4u;
        goto label_2b96d4;
    }
    ctx->pc = 0x2B96CCu;
    SET_GPR_U32(ctx, 31, 0x2B96D4u);
    ctx->pc = 0x2B96D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B96CCu;
    // 0x2b96d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2B96CCu, 0x2B96D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B96D4u;
label_2b96d4:
    // 0x2b96d4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2b96d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b96d8:
    // 0x2b96d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b96d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b96dc:
    // 0x2b96dc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b96dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b96e0:
    // 0x2b96e0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b96e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b96e4:
    // 0x2b96e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b96e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b96e8:
    // 0x2b96e8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b96e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b96ec:
    // 0x2b96ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b96ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b96f0:
    // 0x2b96f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b96f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b96f4:
    // 0x2b96f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b96f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b96f8:
    // 0x2b96f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b96f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b96fc:
    // 0x2b96fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b96fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9700:
    // 0x2b9700: 0x3e00008  jr          $ra
label_2b9704:
    if (ctx->pc == 0x2B9704u) {
        ctx->pc = 0x2B9704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9700u;
        // 0x2b9704: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9708u;
        goto label_fallthrough_0x2b9700;
    }
    ctx->pc = 0x2B9700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9700u;
        // 0x2b9704: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b9700:
    ctx->pc = 0x2B9708u;
}
