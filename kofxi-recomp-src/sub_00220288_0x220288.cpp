#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220288
// Address: 0x220288 - 0x220f08
void sub_00220288_0x220288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220288_0x220288");
#endif

    switch (ctx->pc) {
        case 0x220288u: goto label_220288;
        case 0x22028cu: goto label_22028c;
        case 0x220290u: goto label_220290;
        case 0x220294u: goto label_220294;
        case 0x220298u: goto label_220298;
        case 0x22029cu: goto label_22029c;
        case 0x2202a0u: goto label_2202a0;
        case 0x2202a4u: goto label_2202a4;
        case 0x2202a8u: goto label_2202a8;
        case 0x2202acu: goto label_2202ac;
        case 0x2202b0u: goto label_2202b0;
        case 0x2202b4u: goto label_2202b4;
        case 0x2202b8u: goto label_2202b8;
        case 0x2202bcu: goto label_2202bc;
        case 0x2202c0u: goto label_2202c0;
        case 0x2202c4u: goto label_2202c4;
        case 0x2202c8u: goto label_2202c8;
        case 0x2202ccu: goto label_2202cc;
        case 0x2202d0u: goto label_2202d0;
        case 0x2202d4u: goto label_2202d4;
        case 0x2202d8u: goto label_2202d8;
        case 0x2202dcu: goto label_2202dc;
        case 0x2202e0u: goto label_2202e0;
        case 0x2202e4u: goto label_2202e4;
        case 0x2202e8u: goto label_2202e8;
        case 0x2202ecu: goto label_2202ec;
        case 0x2202f0u: goto label_2202f0;
        case 0x2202f4u: goto label_2202f4;
        case 0x2202f8u: goto label_2202f8;
        case 0x2202fcu: goto label_2202fc;
        case 0x220300u: goto label_220300;
        case 0x220304u: goto label_220304;
        case 0x220308u: goto label_220308;
        case 0x22030cu: goto label_22030c;
        case 0x220310u: goto label_220310;
        case 0x220314u: goto label_220314;
        case 0x220318u: goto label_220318;
        case 0x22031cu: goto label_22031c;
        case 0x220320u: goto label_220320;
        case 0x220324u: goto label_220324;
        case 0x220328u: goto label_220328;
        case 0x22032cu: goto label_22032c;
        case 0x220330u: goto label_220330;
        case 0x220334u: goto label_220334;
        case 0x220338u: goto label_220338;
        case 0x22033cu: goto label_22033c;
        case 0x220340u: goto label_220340;
        case 0x220344u: goto label_220344;
        case 0x220348u: goto label_220348;
        case 0x22034cu: goto label_22034c;
        case 0x220350u: goto label_220350;
        case 0x220354u: goto label_220354;
        case 0x220358u: goto label_220358;
        case 0x22035cu: goto label_22035c;
        case 0x220360u: goto label_220360;
        case 0x220364u: goto label_220364;
        case 0x220368u: goto label_220368;
        case 0x22036cu: goto label_22036c;
        case 0x220370u: goto label_220370;
        case 0x220374u: goto label_220374;
        case 0x220378u: goto label_220378;
        case 0x22037cu: goto label_22037c;
        case 0x220380u: goto label_220380;
        case 0x220384u: goto label_220384;
        case 0x220388u: goto label_220388;
        case 0x22038cu: goto label_22038c;
        case 0x220390u: goto label_220390;
        case 0x220394u: goto label_220394;
        case 0x220398u: goto label_220398;
        case 0x22039cu: goto label_22039c;
        case 0x2203a0u: goto label_2203a0;
        case 0x2203a4u: goto label_2203a4;
        case 0x2203a8u: goto label_2203a8;
        case 0x2203acu: goto label_2203ac;
        case 0x2203b0u: goto label_2203b0;
        case 0x2203b4u: goto label_2203b4;
        case 0x2203b8u: goto label_2203b8;
        case 0x2203bcu: goto label_2203bc;
        case 0x2203c0u: goto label_2203c0;
        case 0x2203c4u: goto label_2203c4;
        case 0x2203c8u: goto label_2203c8;
        case 0x2203ccu: goto label_2203cc;
        case 0x2203d0u: goto label_2203d0;
        case 0x2203d4u: goto label_2203d4;
        case 0x2203d8u: goto label_2203d8;
        case 0x2203dcu: goto label_2203dc;
        case 0x2203e0u: goto label_2203e0;
        case 0x2203e4u: goto label_2203e4;
        case 0x2203e8u: goto label_2203e8;
        case 0x2203ecu: goto label_2203ec;
        case 0x2203f0u: goto label_2203f0;
        case 0x2203f4u: goto label_2203f4;
        case 0x2203f8u: goto label_2203f8;
        case 0x2203fcu: goto label_2203fc;
        case 0x220400u: goto label_220400;
        case 0x220404u: goto label_220404;
        case 0x220408u: goto label_220408;
        case 0x22040cu: goto label_22040c;
        case 0x220410u: goto label_220410;
        case 0x220414u: goto label_220414;
        case 0x220418u: goto label_220418;
        case 0x22041cu: goto label_22041c;
        case 0x220420u: goto label_220420;
        case 0x220424u: goto label_220424;
        case 0x220428u: goto label_220428;
        case 0x22042cu: goto label_22042c;
        case 0x220430u: goto label_220430;
        case 0x220434u: goto label_220434;
        case 0x220438u: goto label_220438;
        case 0x22043cu: goto label_22043c;
        case 0x220440u: goto label_220440;
        case 0x220444u: goto label_220444;
        case 0x220448u: goto label_220448;
        case 0x22044cu: goto label_22044c;
        case 0x220450u: goto label_220450;
        case 0x220454u: goto label_220454;
        case 0x220458u: goto label_220458;
        case 0x22045cu: goto label_22045c;
        case 0x220460u: goto label_220460;
        case 0x220464u: goto label_220464;
        case 0x220468u: goto label_220468;
        case 0x22046cu: goto label_22046c;
        case 0x220470u: goto label_220470;
        case 0x220474u: goto label_220474;
        case 0x220478u: goto label_220478;
        case 0x22047cu: goto label_22047c;
        case 0x220480u: goto label_220480;
        case 0x220484u: goto label_220484;
        case 0x220488u: goto label_220488;
        case 0x22048cu: goto label_22048c;
        case 0x220490u: goto label_220490;
        case 0x220494u: goto label_220494;
        case 0x220498u: goto label_220498;
        case 0x22049cu: goto label_22049c;
        case 0x2204a0u: goto label_2204a0;
        case 0x2204a4u: goto label_2204a4;
        case 0x2204a8u: goto label_2204a8;
        case 0x2204acu: goto label_2204ac;
        case 0x2204b0u: goto label_2204b0;
        case 0x2204b4u: goto label_2204b4;
        case 0x2204b8u: goto label_2204b8;
        case 0x2204bcu: goto label_2204bc;
        case 0x2204c0u: goto label_2204c0;
        case 0x2204c4u: goto label_2204c4;
        case 0x2204c8u: goto label_2204c8;
        case 0x2204ccu: goto label_2204cc;
        case 0x2204d0u: goto label_2204d0;
        case 0x2204d4u: goto label_2204d4;
        case 0x2204d8u: goto label_2204d8;
        case 0x2204dcu: goto label_2204dc;
        case 0x2204e0u: goto label_2204e0;
        case 0x2204e4u: goto label_2204e4;
        case 0x2204e8u: goto label_2204e8;
        case 0x2204ecu: goto label_2204ec;
        case 0x2204f0u: goto label_2204f0;
        case 0x2204f4u: goto label_2204f4;
        case 0x2204f8u: goto label_2204f8;
        case 0x2204fcu: goto label_2204fc;
        case 0x220500u: goto label_220500;
        case 0x220504u: goto label_220504;
        case 0x220508u: goto label_220508;
        case 0x22050cu: goto label_22050c;
        case 0x220510u: goto label_220510;
        case 0x220514u: goto label_220514;
        case 0x220518u: goto label_220518;
        case 0x22051cu: goto label_22051c;
        case 0x220520u: goto label_220520;
        case 0x220524u: goto label_220524;
        case 0x220528u: goto label_220528;
        case 0x22052cu: goto label_22052c;
        case 0x220530u: goto label_220530;
        case 0x220534u: goto label_220534;
        case 0x220538u: goto label_220538;
        case 0x22053cu: goto label_22053c;
        case 0x220540u: goto label_220540;
        case 0x220544u: goto label_220544;
        case 0x220548u: goto label_220548;
        case 0x22054cu: goto label_22054c;
        case 0x220550u: goto label_220550;
        case 0x220554u: goto label_220554;
        case 0x220558u: goto label_220558;
        case 0x22055cu: goto label_22055c;
        case 0x220560u: goto label_220560;
        case 0x220564u: goto label_220564;
        case 0x220568u: goto label_220568;
        case 0x22056cu: goto label_22056c;
        case 0x220570u: goto label_220570;
        case 0x220574u: goto label_220574;
        case 0x220578u: goto label_220578;
        case 0x22057cu: goto label_22057c;
        case 0x220580u: goto label_220580;
        case 0x220584u: goto label_220584;
        case 0x220588u: goto label_220588;
        case 0x22058cu: goto label_22058c;
        case 0x220590u: goto label_220590;
        case 0x220594u: goto label_220594;
        case 0x220598u: goto label_220598;
        case 0x22059cu: goto label_22059c;
        case 0x2205a0u: goto label_2205a0;
        case 0x2205a4u: goto label_2205a4;
        case 0x2205a8u: goto label_2205a8;
        case 0x2205acu: goto label_2205ac;
        case 0x2205b0u: goto label_2205b0;
        case 0x2205b4u: goto label_2205b4;
        case 0x2205b8u: goto label_2205b8;
        case 0x2205bcu: goto label_2205bc;
        case 0x2205c0u: goto label_2205c0;
        case 0x2205c4u: goto label_2205c4;
        case 0x2205c8u: goto label_2205c8;
        case 0x2205ccu: goto label_2205cc;
        case 0x2205d0u: goto label_2205d0;
        case 0x2205d4u: goto label_2205d4;
        case 0x2205d8u: goto label_2205d8;
        case 0x2205dcu: goto label_2205dc;
        case 0x2205e0u: goto label_2205e0;
        case 0x2205e4u: goto label_2205e4;
        case 0x2205e8u: goto label_2205e8;
        case 0x2205ecu: goto label_2205ec;
        case 0x2205f0u: goto label_2205f0;
        case 0x2205f4u: goto label_2205f4;
        case 0x2205f8u: goto label_2205f8;
        case 0x2205fcu: goto label_2205fc;
        case 0x220600u: goto label_220600;
        case 0x220604u: goto label_220604;
        case 0x220608u: goto label_220608;
        case 0x22060cu: goto label_22060c;
        case 0x220610u: goto label_220610;
        case 0x220614u: goto label_220614;
        case 0x220618u: goto label_220618;
        case 0x22061cu: goto label_22061c;
        case 0x220620u: goto label_220620;
        case 0x220624u: goto label_220624;
        case 0x220628u: goto label_220628;
        case 0x22062cu: goto label_22062c;
        case 0x220630u: goto label_220630;
        case 0x220634u: goto label_220634;
        case 0x220638u: goto label_220638;
        case 0x22063cu: goto label_22063c;
        case 0x220640u: goto label_220640;
        case 0x220644u: goto label_220644;
        case 0x220648u: goto label_220648;
        case 0x22064cu: goto label_22064c;
        case 0x220650u: goto label_220650;
        case 0x220654u: goto label_220654;
        case 0x220658u: goto label_220658;
        case 0x22065cu: goto label_22065c;
        case 0x220660u: goto label_220660;
        case 0x220664u: goto label_220664;
        case 0x220668u: goto label_220668;
        case 0x22066cu: goto label_22066c;
        case 0x220670u: goto label_220670;
        case 0x220674u: goto label_220674;
        case 0x220678u: goto label_220678;
        case 0x22067cu: goto label_22067c;
        case 0x220680u: goto label_220680;
        case 0x220684u: goto label_220684;
        case 0x220688u: goto label_220688;
        case 0x22068cu: goto label_22068c;
        case 0x220690u: goto label_220690;
        case 0x220694u: goto label_220694;
        case 0x220698u: goto label_220698;
        case 0x22069cu: goto label_22069c;
        case 0x2206a0u: goto label_2206a0;
        case 0x2206a4u: goto label_2206a4;
        case 0x2206a8u: goto label_2206a8;
        case 0x2206acu: goto label_2206ac;
        case 0x2206b0u: goto label_2206b0;
        case 0x2206b4u: goto label_2206b4;
        case 0x2206b8u: goto label_2206b8;
        case 0x2206bcu: goto label_2206bc;
        case 0x2206c0u: goto label_2206c0;
        case 0x2206c4u: goto label_2206c4;
        case 0x2206c8u: goto label_2206c8;
        case 0x2206ccu: goto label_2206cc;
        case 0x2206d0u: goto label_2206d0;
        case 0x2206d4u: goto label_2206d4;
        case 0x2206d8u: goto label_2206d8;
        case 0x2206dcu: goto label_2206dc;
        case 0x2206e0u: goto label_2206e0;
        case 0x2206e4u: goto label_2206e4;
        case 0x2206e8u: goto label_2206e8;
        case 0x2206ecu: goto label_2206ec;
        case 0x2206f0u: goto label_2206f0;
        case 0x2206f4u: goto label_2206f4;
        case 0x2206f8u: goto label_2206f8;
        case 0x2206fcu: goto label_2206fc;
        case 0x220700u: goto label_220700;
        case 0x220704u: goto label_220704;
        case 0x220708u: goto label_220708;
        case 0x22070cu: goto label_22070c;
        case 0x220710u: goto label_220710;
        case 0x220714u: goto label_220714;
        case 0x220718u: goto label_220718;
        case 0x22071cu: goto label_22071c;
        case 0x220720u: goto label_220720;
        case 0x220724u: goto label_220724;
        case 0x220728u: goto label_220728;
        case 0x22072cu: goto label_22072c;
        case 0x220730u: goto label_220730;
        case 0x220734u: goto label_220734;
        case 0x220738u: goto label_220738;
        case 0x22073cu: goto label_22073c;
        case 0x220740u: goto label_220740;
        case 0x220744u: goto label_220744;
        case 0x220748u: goto label_220748;
        case 0x22074cu: goto label_22074c;
        case 0x220750u: goto label_220750;
        case 0x220754u: goto label_220754;
        case 0x220758u: goto label_220758;
        case 0x22075cu: goto label_22075c;
        case 0x220760u: goto label_220760;
        case 0x220764u: goto label_220764;
        case 0x220768u: goto label_220768;
        case 0x22076cu: goto label_22076c;
        case 0x220770u: goto label_220770;
        case 0x220774u: goto label_220774;
        case 0x220778u: goto label_220778;
        case 0x22077cu: goto label_22077c;
        case 0x220780u: goto label_220780;
        case 0x220784u: goto label_220784;
        case 0x220788u: goto label_220788;
        case 0x22078cu: goto label_22078c;
        case 0x220790u: goto label_220790;
        case 0x220794u: goto label_220794;
        case 0x220798u: goto label_220798;
        case 0x22079cu: goto label_22079c;
        case 0x2207a0u: goto label_2207a0;
        case 0x2207a4u: goto label_2207a4;
        case 0x2207a8u: goto label_2207a8;
        case 0x2207acu: goto label_2207ac;
        case 0x2207b0u: goto label_2207b0;
        case 0x2207b4u: goto label_2207b4;
        case 0x2207b8u: goto label_2207b8;
        case 0x2207bcu: goto label_2207bc;
        case 0x2207c0u: goto label_2207c0;
        case 0x2207c4u: goto label_2207c4;
        case 0x2207c8u: goto label_2207c8;
        case 0x2207ccu: goto label_2207cc;
        case 0x2207d0u: goto label_2207d0;
        case 0x2207d4u: goto label_2207d4;
        case 0x2207d8u: goto label_2207d8;
        case 0x2207dcu: goto label_2207dc;
        case 0x2207e0u: goto label_2207e0;
        case 0x2207e4u: goto label_2207e4;
        case 0x2207e8u: goto label_2207e8;
        case 0x2207ecu: goto label_2207ec;
        case 0x2207f0u: goto label_2207f0;
        case 0x2207f4u: goto label_2207f4;
        case 0x2207f8u: goto label_2207f8;
        case 0x2207fcu: goto label_2207fc;
        case 0x220800u: goto label_220800;
        case 0x220804u: goto label_220804;
        case 0x220808u: goto label_220808;
        case 0x22080cu: goto label_22080c;
        case 0x220810u: goto label_220810;
        case 0x220814u: goto label_220814;
        case 0x220818u: goto label_220818;
        case 0x22081cu: goto label_22081c;
        case 0x220820u: goto label_220820;
        case 0x220824u: goto label_220824;
        case 0x220828u: goto label_220828;
        case 0x22082cu: goto label_22082c;
        case 0x220830u: goto label_220830;
        case 0x220834u: goto label_220834;
        case 0x220838u: goto label_220838;
        case 0x22083cu: goto label_22083c;
        case 0x220840u: goto label_220840;
        case 0x220844u: goto label_220844;
        case 0x220848u: goto label_220848;
        case 0x22084cu: goto label_22084c;
        case 0x220850u: goto label_220850;
        case 0x220854u: goto label_220854;
        case 0x220858u: goto label_220858;
        case 0x22085cu: goto label_22085c;
        case 0x220860u: goto label_220860;
        case 0x220864u: goto label_220864;
        case 0x220868u: goto label_220868;
        case 0x22086cu: goto label_22086c;
        case 0x220870u: goto label_220870;
        case 0x220874u: goto label_220874;
        case 0x220878u: goto label_220878;
        case 0x22087cu: goto label_22087c;
        case 0x220880u: goto label_220880;
        case 0x220884u: goto label_220884;
        case 0x220888u: goto label_220888;
        case 0x22088cu: goto label_22088c;
        case 0x220890u: goto label_220890;
        case 0x220894u: goto label_220894;
        case 0x220898u: goto label_220898;
        case 0x22089cu: goto label_22089c;
        case 0x2208a0u: goto label_2208a0;
        case 0x2208a4u: goto label_2208a4;
        case 0x2208a8u: goto label_2208a8;
        case 0x2208acu: goto label_2208ac;
        case 0x2208b0u: goto label_2208b0;
        case 0x2208b4u: goto label_2208b4;
        case 0x2208b8u: goto label_2208b8;
        case 0x2208bcu: goto label_2208bc;
        case 0x2208c0u: goto label_2208c0;
        case 0x2208c4u: goto label_2208c4;
        case 0x2208c8u: goto label_2208c8;
        case 0x2208ccu: goto label_2208cc;
        case 0x2208d0u: goto label_2208d0;
        case 0x2208d4u: goto label_2208d4;
        case 0x2208d8u: goto label_2208d8;
        case 0x2208dcu: goto label_2208dc;
        case 0x2208e0u: goto label_2208e0;
        case 0x2208e4u: goto label_2208e4;
        case 0x2208e8u: goto label_2208e8;
        case 0x2208ecu: goto label_2208ec;
        case 0x2208f0u: goto label_2208f0;
        case 0x2208f4u: goto label_2208f4;
        case 0x2208f8u: goto label_2208f8;
        case 0x2208fcu: goto label_2208fc;
        case 0x220900u: goto label_220900;
        case 0x220904u: goto label_220904;
        case 0x220908u: goto label_220908;
        case 0x22090cu: goto label_22090c;
        case 0x220910u: goto label_220910;
        case 0x220914u: goto label_220914;
        case 0x220918u: goto label_220918;
        case 0x22091cu: goto label_22091c;
        case 0x220920u: goto label_220920;
        case 0x220924u: goto label_220924;
        case 0x220928u: goto label_220928;
        case 0x22092cu: goto label_22092c;
        case 0x220930u: goto label_220930;
        case 0x220934u: goto label_220934;
        case 0x220938u: goto label_220938;
        case 0x22093cu: goto label_22093c;
        case 0x220940u: goto label_220940;
        case 0x220944u: goto label_220944;
        case 0x220948u: goto label_220948;
        case 0x22094cu: goto label_22094c;
        case 0x220950u: goto label_220950;
        case 0x220954u: goto label_220954;
        case 0x220958u: goto label_220958;
        case 0x22095cu: goto label_22095c;
        case 0x220960u: goto label_220960;
        case 0x220964u: goto label_220964;
        case 0x220968u: goto label_220968;
        case 0x22096cu: goto label_22096c;
        case 0x220970u: goto label_220970;
        case 0x220974u: goto label_220974;
        case 0x220978u: goto label_220978;
        case 0x22097cu: goto label_22097c;
        case 0x220980u: goto label_220980;
        case 0x220984u: goto label_220984;
        case 0x220988u: goto label_220988;
        case 0x22098cu: goto label_22098c;
        case 0x220990u: goto label_220990;
        case 0x220994u: goto label_220994;
        case 0x220998u: goto label_220998;
        case 0x22099cu: goto label_22099c;
        case 0x2209a0u: goto label_2209a0;
        case 0x2209a4u: goto label_2209a4;
        case 0x2209a8u: goto label_2209a8;
        case 0x2209acu: goto label_2209ac;
        case 0x2209b0u: goto label_2209b0;
        case 0x2209b4u: goto label_2209b4;
        case 0x2209b8u: goto label_2209b8;
        case 0x2209bcu: goto label_2209bc;
        case 0x2209c0u: goto label_2209c0;
        case 0x2209c4u: goto label_2209c4;
        case 0x2209c8u: goto label_2209c8;
        case 0x2209ccu: goto label_2209cc;
        case 0x2209d0u: goto label_2209d0;
        case 0x2209d4u: goto label_2209d4;
        case 0x2209d8u: goto label_2209d8;
        case 0x2209dcu: goto label_2209dc;
        case 0x2209e0u: goto label_2209e0;
        case 0x2209e4u: goto label_2209e4;
        case 0x2209e8u: goto label_2209e8;
        case 0x2209ecu: goto label_2209ec;
        case 0x2209f0u: goto label_2209f0;
        case 0x2209f4u: goto label_2209f4;
        case 0x2209f8u: goto label_2209f8;
        case 0x2209fcu: goto label_2209fc;
        case 0x220a00u: goto label_220a00;
        case 0x220a04u: goto label_220a04;
        case 0x220a08u: goto label_220a08;
        case 0x220a0cu: goto label_220a0c;
        case 0x220a10u: goto label_220a10;
        case 0x220a14u: goto label_220a14;
        case 0x220a18u: goto label_220a18;
        case 0x220a1cu: goto label_220a1c;
        case 0x220a20u: goto label_220a20;
        case 0x220a24u: goto label_220a24;
        case 0x220a28u: goto label_220a28;
        case 0x220a2cu: goto label_220a2c;
        case 0x220a30u: goto label_220a30;
        case 0x220a34u: goto label_220a34;
        case 0x220a38u: goto label_220a38;
        case 0x220a3cu: goto label_220a3c;
        case 0x220a40u: goto label_220a40;
        case 0x220a44u: goto label_220a44;
        case 0x220a48u: goto label_220a48;
        case 0x220a4cu: goto label_220a4c;
        case 0x220a50u: goto label_220a50;
        case 0x220a54u: goto label_220a54;
        case 0x220a58u: goto label_220a58;
        case 0x220a5cu: goto label_220a5c;
        case 0x220a60u: goto label_220a60;
        case 0x220a64u: goto label_220a64;
        case 0x220a68u: goto label_220a68;
        case 0x220a6cu: goto label_220a6c;
        case 0x220a70u: goto label_220a70;
        case 0x220a74u: goto label_220a74;
        case 0x220a78u: goto label_220a78;
        case 0x220a7cu: goto label_220a7c;
        case 0x220a80u: goto label_220a80;
        case 0x220a84u: goto label_220a84;
        case 0x220a88u: goto label_220a88;
        case 0x220a8cu: goto label_220a8c;
        case 0x220a90u: goto label_220a90;
        case 0x220a94u: goto label_220a94;
        case 0x220a98u: goto label_220a98;
        case 0x220a9cu: goto label_220a9c;
        case 0x220aa0u: goto label_220aa0;
        case 0x220aa4u: goto label_220aa4;
        case 0x220aa8u: goto label_220aa8;
        case 0x220aacu: goto label_220aac;
        case 0x220ab0u: goto label_220ab0;
        case 0x220ab4u: goto label_220ab4;
        case 0x220ab8u: goto label_220ab8;
        case 0x220abcu: goto label_220abc;
        case 0x220ac0u: goto label_220ac0;
        case 0x220ac4u: goto label_220ac4;
        case 0x220ac8u: goto label_220ac8;
        case 0x220accu: goto label_220acc;
        case 0x220ad0u: goto label_220ad0;
        case 0x220ad4u: goto label_220ad4;
        case 0x220ad8u: goto label_220ad8;
        case 0x220adcu: goto label_220adc;
        case 0x220ae0u: goto label_220ae0;
        case 0x220ae4u: goto label_220ae4;
        case 0x220ae8u: goto label_220ae8;
        case 0x220aecu: goto label_220aec;
        case 0x220af0u: goto label_220af0;
        case 0x220af4u: goto label_220af4;
        case 0x220af8u: goto label_220af8;
        case 0x220afcu: goto label_220afc;
        case 0x220b00u: goto label_220b00;
        case 0x220b04u: goto label_220b04;
        case 0x220b08u: goto label_220b08;
        case 0x220b0cu: goto label_220b0c;
        case 0x220b10u: goto label_220b10;
        case 0x220b14u: goto label_220b14;
        case 0x220b18u: goto label_220b18;
        case 0x220b1cu: goto label_220b1c;
        case 0x220b20u: goto label_220b20;
        case 0x220b24u: goto label_220b24;
        case 0x220b28u: goto label_220b28;
        case 0x220b2cu: goto label_220b2c;
        case 0x220b30u: goto label_220b30;
        case 0x220b34u: goto label_220b34;
        case 0x220b38u: goto label_220b38;
        case 0x220b3cu: goto label_220b3c;
        case 0x220b40u: goto label_220b40;
        case 0x220b44u: goto label_220b44;
        case 0x220b48u: goto label_220b48;
        case 0x220b4cu: goto label_220b4c;
        case 0x220b50u: goto label_220b50;
        case 0x220b54u: goto label_220b54;
        case 0x220b58u: goto label_220b58;
        case 0x220b5cu: goto label_220b5c;
        case 0x220b60u: goto label_220b60;
        case 0x220b64u: goto label_220b64;
        case 0x220b68u: goto label_220b68;
        case 0x220b6cu: goto label_220b6c;
        case 0x220b70u: goto label_220b70;
        case 0x220b74u: goto label_220b74;
        case 0x220b78u: goto label_220b78;
        case 0x220b7cu: goto label_220b7c;
        case 0x220b80u: goto label_220b80;
        case 0x220b84u: goto label_220b84;
        case 0x220b88u: goto label_220b88;
        case 0x220b8cu: goto label_220b8c;
        case 0x220b90u: goto label_220b90;
        case 0x220b94u: goto label_220b94;
        case 0x220b98u: goto label_220b98;
        case 0x220b9cu: goto label_220b9c;
        case 0x220ba0u: goto label_220ba0;
        case 0x220ba4u: goto label_220ba4;
        case 0x220ba8u: goto label_220ba8;
        case 0x220bacu: goto label_220bac;
        case 0x220bb0u: goto label_220bb0;
        case 0x220bb4u: goto label_220bb4;
        case 0x220bb8u: goto label_220bb8;
        case 0x220bbcu: goto label_220bbc;
        case 0x220bc0u: goto label_220bc0;
        case 0x220bc4u: goto label_220bc4;
        case 0x220bc8u: goto label_220bc8;
        case 0x220bccu: goto label_220bcc;
        case 0x220bd0u: goto label_220bd0;
        case 0x220bd4u: goto label_220bd4;
        case 0x220bd8u: goto label_220bd8;
        case 0x220bdcu: goto label_220bdc;
        case 0x220be0u: goto label_220be0;
        case 0x220be4u: goto label_220be4;
        case 0x220be8u: goto label_220be8;
        case 0x220becu: goto label_220bec;
        case 0x220bf0u: goto label_220bf0;
        case 0x220bf4u: goto label_220bf4;
        case 0x220bf8u: goto label_220bf8;
        case 0x220bfcu: goto label_220bfc;
        case 0x220c00u: goto label_220c00;
        case 0x220c04u: goto label_220c04;
        case 0x220c08u: goto label_220c08;
        case 0x220c0cu: goto label_220c0c;
        case 0x220c10u: goto label_220c10;
        case 0x220c14u: goto label_220c14;
        case 0x220c18u: goto label_220c18;
        case 0x220c1cu: goto label_220c1c;
        case 0x220c20u: goto label_220c20;
        case 0x220c24u: goto label_220c24;
        case 0x220c28u: goto label_220c28;
        case 0x220c2cu: goto label_220c2c;
        case 0x220c30u: goto label_220c30;
        case 0x220c34u: goto label_220c34;
        case 0x220c38u: goto label_220c38;
        case 0x220c3cu: goto label_220c3c;
        case 0x220c40u: goto label_220c40;
        case 0x220c44u: goto label_220c44;
        case 0x220c48u: goto label_220c48;
        case 0x220c4cu: goto label_220c4c;
        case 0x220c50u: goto label_220c50;
        case 0x220c54u: goto label_220c54;
        case 0x220c58u: goto label_220c58;
        case 0x220c5cu: goto label_220c5c;
        case 0x220c60u: goto label_220c60;
        case 0x220c64u: goto label_220c64;
        case 0x220c68u: goto label_220c68;
        case 0x220c6cu: goto label_220c6c;
        case 0x220c70u: goto label_220c70;
        case 0x220c74u: goto label_220c74;
        case 0x220c78u: goto label_220c78;
        case 0x220c7cu: goto label_220c7c;
        case 0x220c80u: goto label_220c80;
        case 0x220c84u: goto label_220c84;
        case 0x220c88u: goto label_220c88;
        case 0x220c8cu: goto label_220c8c;
        case 0x220c90u: goto label_220c90;
        case 0x220c94u: goto label_220c94;
        case 0x220c98u: goto label_220c98;
        case 0x220c9cu: goto label_220c9c;
        case 0x220ca0u: goto label_220ca0;
        case 0x220ca4u: goto label_220ca4;
        case 0x220ca8u: goto label_220ca8;
        case 0x220cacu: goto label_220cac;
        case 0x220cb0u: goto label_220cb0;
        case 0x220cb4u: goto label_220cb4;
        case 0x220cb8u: goto label_220cb8;
        case 0x220cbcu: goto label_220cbc;
        case 0x220cc0u: goto label_220cc0;
        case 0x220cc4u: goto label_220cc4;
        case 0x220cc8u: goto label_220cc8;
        case 0x220cccu: goto label_220ccc;
        case 0x220cd0u: goto label_220cd0;
        case 0x220cd4u: goto label_220cd4;
        case 0x220cd8u: goto label_220cd8;
        case 0x220cdcu: goto label_220cdc;
        case 0x220ce0u: goto label_220ce0;
        case 0x220ce4u: goto label_220ce4;
        case 0x220ce8u: goto label_220ce8;
        case 0x220cecu: goto label_220cec;
        case 0x220cf0u: goto label_220cf0;
        case 0x220cf4u: goto label_220cf4;
        case 0x220cf8u: goto label_220cf8;
        case 0x220cfcu: goto label_220cfc;
        case 0x220d00u: goto label_220d00;
        case 0x220d04u: goto label_220d04;
        case 0x220d08u: goto label_220d08;
        case 0x220d0cu: goto label_220d0c;
        case 0x220d10u: goto label_220d10;
        case 0x220d14u: goto label_220d14;
        case 0x220d18u: goto label_220d18;
        case 0x220d1cu: goto label_220d1c;
        case 0x220d20u: goto label_220d20;
        case 0x220d24u: goto label_220d24;
        case 0x220d28u: goto label_220d28;
        case 0x220d2cu: goto label_220d2c;
        case 0x220d30u: goto label_220d30;
        case 0x220d34u: goto label_220d34;
        case 0x220d38u: goto label_220d38;
        case 0x220d3cu: goto label_220d3c;
        case 0x220d40u: goto label_220d40;
        case 0x220d44u: goto label_220d44;
        case 0x220d48u: goto label_220d48;
        case 0x220d4cu: goto label_220d4c;
        case 0x220d50u: goto label_220d50;
        case 0x220d54u: goto label_220d54;
        case 0x220d58u: goto label_220d58;
        case 0x220d5cu: goto label_220d5c;
        case 0x220d60u: goto label_220d60;
        case 0x220d64u: goto label_220d64;
        case 0x220d68u: goto label_220d68;
        case 0x220d6cu: goto label_220d6c;
        case 0x220d70u: goto label_220d70;
        case 0x220d74u: goto label_220d74;
        case 0x220d78u: goto label_220d78;
        case 0x220d7cu: goto label_220d7c;
        case 0x220d80u: goto label_220d80;
        case 0x220d84u: goto label_220d84;
        case 0x220d88u: goto label_220d88;
        case 0x220d8cu: goto label_220d8c;
        case 0x220d90u: goto label_220d90;
        case 0x220d94u: goto label_220d94;
        case 0x220d98u: goto label_220d98;
        case 0x220d9cu: goto label_220d9c;
        case 0x220da0u: goto label_220da0;
        case 0x220da4u: goto label_220da4;
        case 0x220da8u: goto label_220da8;
        case 0x220dacu: goto label_220dac;
        case 0x220db0u: goto label_220db0;
        case 0x220db4u: goto label_220db4;
        case 0x220db8u: goto label_220db8;
        case 0x220dbcu: goto label_220dbc;
        case 0x220dc0u: goto label_220dc0;
        case 0x220dc4u: goto label_220dc4;
        case 0x220dc8u: goto label_220dc8;
        case 0x220dccu: goto label_220dcc;
        case 0x220dd0u: goto label_220dd0;
        case 0x220dd4u: goto label_220dd4;
        case 0x220dd8u: goto label_220dd8;
        case 0x220ddcu: goto label_220ddc;
        case 0x220de0u: goto label_220de0;
        case 0x220de4u: goto label_220de4;
        case 0x220de8u: goto label_220de8;
        case 0x220decu: goto label_220dec;
        case 0x220df0u: goto label_220df0;
        case 0x220df4u: goto label_220df4;
        case 0x220df8u: goto label_220df8;
        case 0x220dfcu: goto label_220dfc;
        case 0x220e00u: goto label_220e00;
        case 0x220e04u: goto label_220e04;
        case 0x220e08u: goto label_220e08;
        case 0x220e0cu: goto label_220e0c;
        case 0x220e10u: goto label_220e10;
        case 0x220e14u: goto label_220e14;
        case 0x220e18u: goto label_220e18;
        case 0x220e1cu: goto label_220e1c;
        case 0x220e20u: goto label_220e20;
        case 0x220e24u: goto label_220e24;
        case 0x220e28u: goto label_220e28;
        case 0x220e2cu: goto label_220e2c;
        case 0x220e30u: goto label_220e30;
        case 0x220e34u: goto label_220e34;
        case 0x220e38u: goto label_220e38;
        case 0x220e3cu: goto label_220e3c;
        case 0x220e40u: goto label_220e40;
        case 0x220e44u: goto label_220e44;
        case 0x220e48u: goto label_220e48;
        case 0x220e4cu: goto label_220e4c;
        case 0x220e50u: goto label_220e50;
        case 0x220e54u: goto label_220e54;
        case 0x220e58u: goto label_220e58;
        case 0x220e5cu: goto label_220e5c;
        case 0x220e60u: goto label_220e60;
        case 0x220e64u: goto label_220e64;
        case 0x220e68u: goto label_220e68;
        case 0x220e6cu: goto label_220e6c;
        case 0x220e70u: goto label_220e70;
        case 0x220e74u: goto label_220e74;
        case 0x220e78u: goto label_220e78;
        case 0x220e7cu: goto label_220e7c;
        case 0x220e80u: goto label_220e80;
        case 0x220e84u: goto label_220e84;
        case 0x220e88u: goto label_220e88;
        case 0x220e8cu: goto label_220e8c;
        case 0x220e90u: goto label_220e90;
        case 0x220e94u: goto label_220e94;
        case 0x220e98u: goto label_220e98;
        case 0x220e9cu: goto label_220e9c;
        case 0x220ea0u: goto label_220ea0;
        case 0x220ea4u: goto label_220ea4;
        case 0x220ea8u: goto label_220ea8;
        case 0x220eacu: goto label_220eac;
        case 0x220eb0u: goto label_220eb0;
        case 0x220eb4u: goto label_220eb4;
        case 0x220eb8u: goto label_220eb8;
        case 0x220ebcu: goto label_220ebc;
        case 0x220ec0u: goto label_220ec0;
        case 0x220ec4u: goto label_220ec4;
        case 0x220ec8u: goto label_220ec8;
        case 0x220eccu: goto label_220ecc;
        case 0x220ed0u: goto label_220ed0;
        case 0x220ed4u: goto label_220ed4;
        case 0x220ed8u: goto label_220ed8;
        case 0x220edcu: goto label_220edc;
        case 0x220ee0u: goto label_220ee0;
        case 0x220ee4u: goto label_220ee4;
        case 0x220ee8u: goto label_220ee8;
        case 0x220eecu: goto label_220eec;
        case 0x220ef0u: goto label_220ef0;
        case 0x220ef4u: goto label_220ef4;
        case 0x220ef8u: goto label_220ef8;
        case 0x220efcu: goto label_220efc;
        case 0x220f00u: goto label_220f00;
        case 0x220f04u: goto label_220f04;
        default: break;
    }

    ctx->pc = 0x220288u;

label_220288:
    // 0x220288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x220288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22028c:
    // 0x22028c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x22028cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_220290:
    // 0x220290: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x220290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_220294:
    // 0x220294: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x220294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_220298:
    // 0x220298: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x220298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22029c:
    // 0x22029c: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x22029cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2202a0:
    // 0x2202a0: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x2202a0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2202a4:
    // 0x2202a4: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
label_2202a8:
    if (ctx->pc == 0x2202A8u) {
        ctx->pc = 0x2202A8u;
            // 0x2202a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2202ACu;
        goto label_2202ac;
    }
    ctx->pc = 0x2202A4u;
    {
        const bool branch_taken_0x2202a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2202A4u;
            // 0x2202a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202a4) {
            ctx->pc = 0x2202FCu;
            goto label_2202fc;
        }
    }
    ctx->pc = 0x2202ACu;
label_2202ac:
    // 0x2202ac: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x2202acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2202b0:
    // 0x2202b0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2202b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2202b4:
    // 0x2202b4: 0x250823b8  addiu       $t0, $t0, 0x23B8
    ctx->pc = 0x2202b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9144));
label_2202b8:
    // 0x2202b8: 0x24050113  addiu       $a1, $zero, 0x113
    ctx->pc = 0x2202b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
label_2202bc:
    // 0x2202bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2202bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2202c0:
    // 0x2202c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2202c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2202c4:
    // 0x2202c4: 0x248423d0  addiu       $a0, $a0, 0x23D0
    ctx->pc = 0x2202c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9168));
label_2202c8:
    // 0x2202c8: 0xc089794  jal         func_225E50
label_2202cc:
    if (ctx->pc == 0x2202CCu) {
        ctx->pc = 0x2202CCu;
            // 0x2202cc: 0x2407b1df  addiu       $a3, $zero, -0x4E21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947295));
        ctx->pc = 0x2202D0u;
        goto label_2202d0;
    }
    ctx->pc = 0x2202C8u;
    SET_GPR_U32(ctx, 31, 0x2202D0u);
    ctx->pc = 0x2202CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2202C8u;
            // 0x2202cc: 0x2407b1df  addiu       $a3, $zero, -0x4E21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202D0u; }
        if (ctx->pc != 0x2202D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202D0u; }
        if (ctx->pc != 0x2202D0u) { return; }
    }
    ctx->pc = 0x2202D0u;
label_2202d0:
    // 0x2202d0: 0xc0972fa  jal         func_25CBE8
label_2202d4:
    if (ctx->pc == 0x2202D4u) {
        ctx->pc = 0x2202D8u;
        goto label_2202d8;
    }
    ctx->pc = 0x2202D0u;
    SET_GPR_U32(ctx, 31, 0x2202D8u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202D8u; }
        if (ctx->pc != 0x2202D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202D8u; }
        if (ctx->pc != 0x2202D8u) { return; }
    }
    ctx->pc = 0x2202D8u;
label_2202d8:
    // 0x2202d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2202d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2202dc:
    // 0x2202dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2202dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2202e0:
    // 0x2202e0: 0xc08867a  jal         func_2219E8
label_2202e4:
    if (ctx->pc == 0x2202E4u) {
        ctx->pc = 0x2202E4u;
            // 0x2202e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2202E8u;
        goto label_2202e8;
    }
    ctx->pc = 0x2202E0u;
    SET_GPR_U32(ctx, 31, 0x2202E8u);
    ctx->pc = 0x2202E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2202E0u;
            // 0x2202e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202E8u; }
        if (ctx->pc != 0x2202E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202E8u; }
        if (ctx->pc != 0x2202E8u) { return; }
    }
    ctx->pc = 0x2202E8u;
label_2202e8:
    // 0x2202e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2202e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2202ec:
    // 0x2202ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2202ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2202f0:
    // 0x2202f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2202f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2202f4:
    // 0x2202f4: 0x3e00008  jr          $ra
label_2202f8:
    if (ctx->pc == 0x2202F8u) {
        ctx->pc = 0x2202F8u;
            // 0x2202f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2202FCu;
        goto label_2202fc;
    }
    ctx->pc = 0x2202F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2202F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2202F4u;
            // 0x2202f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2202FCu;
label_2202fc:
    // 0x2202fc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2202fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_220300:
    // 0x220300: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x220300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220304:
    // 0x220304: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_220308:
    // 0x220308: 0xc0ba01a  jal         func_2E8068
label_22030c:
    if (ctx->pc == 0x22030Cu) {
        ctx->pc = 0x22030Cu;
            // 0x22030c: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x220310u;
        goto label_220310;
    }
    ctx->pc = 0x220308u;
    SET_GPR_U32(ctx, 31, 0x220310u);
    ctx->pc = 0x22030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220308u;
            // 0x22030c: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8068u;
    if (runtime->hasFunction(0x2E8068u)) {
        auto targetFn = runtime->lookupFunction(0x2E8068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220310u; }
        if (ctx->pc != 0x220310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8068_0x2e8068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220310u; }
        if (ctx->pc != 0x220310u) { return; }
    }
    ctx->pc = 0x220310u;
label_220310:
    // 0x220310: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x220310u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
label_220314:
    // 0x220314: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x220314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_220318:
    // 0x220318: 0x25f123d0  addiu       $s1, $t7, 0x23D0
    ctx->pc = 0x220318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 9168));
label_22031c:
    // 0x22031c: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x22031cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_220320:
    // 0x220320: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220320u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220324:
    // 0x220324: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x220324u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_220328:
    // 0x220328: 0x24e723e0  addiu       $a3, $a3, 0x23E0
    ctx->pc = 0x220328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9184));
label_22032c:
    // 0x22032c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22032cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220330:
    // 0x220330: 0x24050119  addiu       $a1, $zero, 0x119
    ctx->pc = 0x220330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
label_220334:
    // 0x220334: 0xc0897d6  jal         func_225F58
label_220338:
    if (ctx->pc == 0x220338u) {
        ctx->pc = 0x220338u;
            // 0x220338: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x22033Cu;
        goto label_22033c;
    }
    ctx->pc = 0x220334u;
    SET_GPR_U32(ctx, 31, 0x22033Cu);
    ctx->pc = 0x220338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220334u;
            // 0x220338: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22033Cu; }
        if (ctx->pc != 0x22033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22033Cu; }
        if (ctx->pc != 0x22033Cu) { return; }
    }
    ctx->pc = 0x22033Cu;
label_22033c:
    // 0x22033c: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x22033cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220340:
    // 0x220340: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x220340u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220344:
    // 0x220344: 0x91cf1320  lbu         $t7, 0x1320($t6)
    ctx->pc = 0x220344u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4896)));
label_220348:
    // 0x220348: 0x55ed0026  bnel        $t7, $t5, . + 4 + (0x26 << 2)
label_22034c:
    if (ctx->pc == 0x22034Cu) {
        ctx->pc = 0x22034Cu;
            // 0x22034c: 0x91cf1325  lbu         $t7, 0x1325($t6) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4901)));
        ctx->pc = 0x220350u;
        goto label_220350;
    }
    ctx->pc = 0x220348u;
    {
        const bool branch_taken_0x220348 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 13));
        if (branch_taken_0x220348) {
            ctx->pc = 0x22034Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x220348u;
            // 0x22034c: 0x91cf1325  lbu         $t7, 0x1325($t6) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4901)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2203E4u;
            goto label_2203e4;
        }
    }
    ctx->pc = 0x220350u;
label_220350:
    // 0x220350: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x220350u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_220354:
    // 0x220354: 0x11ed0018  beq         $t7, $t5, . + 4 + (0x18 << 2)
label_220358:
    if (ctx->pc == 0x220358u) {
        ctx->pc = 0x220358u;
            // 0x220358: 0x8fab0000  lw          $t3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x22035Cu;
        goto label_22035c;
    }
    ctx->pc = 0x220354u;
    {
        const bool branch_taken_0x220354 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 13));
        ctx->pc = 0x220358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220354u;
            // 0x220358: 0x8fab0000  lw          $t3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220354) {
            ctx->pc = 0x2203B8u;
            goto label_2203b8;
        }
    }
    ctx->pc = 0x22035Cu;
label_22035c:
    // 0x22035c: 0xc08808c  jal         func_220230
label_220360:
    if (ctx->pc == 0x220360u) {
        ctx->pc = 0x220360u;
            // 0x220360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220364u;
        goto label_220364;
    }
    ctx->pc = 0x22035Cu;
    SET_GPR_U32(ctx, 31, 0x220364u);
    ctx->pc = 0x220360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22035Cu;
            // 0x220360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220230u;
    if (runtime->hasFunction(0x220230u)) {
        auto targetFn = runtime->lookupFunction(0x220230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220364u; }
        if (ctx->pc != 0x220364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220230_0x220230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220364u; }
        if (ctx->pc != 0x220364u) { return; }
    }
    ctx->pc = 0x220364u;
label_220364:
    // 0x220364: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_220368:
    if (ctx->pc == 0x220368u) {
        ctx->pc = 0x220368u;
            // 0x220368: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x22036Cu;
        goto label_22036c;
    }
    ctx->pc = 0x220364u;
    {
        const bool branch_taken_0x220364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220364u;
            // 0x220368: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220364) {
            ctx->pc = 0x220398u;
            goto label_220398;
        }
    }
    ctx->pc = 0x22036Cu;
label_22036c:
    // 0x22036c: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x22036cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_220370:
    // 0x220370: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x220370u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_220374:
    // 0x220374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220378:
    // 0x220378: 0x25082418  addiu       $t0, $t0, 0x2418
    ctx->pc = 0x220378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9240));
label_22037c:
    // 0x22037c: 0x2405012f  addiu       $a1, $zero, 0x12F
    ctx->pc = 0x22037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
label_220380:
    // 0x220380: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x220380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_220384:
    // 0x220384: 0x2407b1de  addiu       $a3, $zero, -0x4E22
    ctx->pc = 0x220384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947294));
label_220388:
    // 0x220388: 0xc089794  jal         func_225E50
label_22038c:
    if (ctx->pc == 0x22038Cu) {
        ctx->pc = 0x220390u;
        goto label_220390;
    }
    ctx->pc = 0x220388u;
    SET_GPR_U32(ctx, 31, 0x220390u);
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220390u; }
        if (ctx->pc != 0x220390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220390u; }
        if (ctx->pc != 0x220390u) { return; }
    }
    ctx->pc = 0x220390u;
label_220390:
    // 0x220390: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_220394:
    if (ctx->pc == 0x220394u) {
        ctx->pc = 0x220398u;
        goto label_220398;
    }
    ctx->pc = 0x220390u;
    {
        const bool branch_taken_0x220390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220390) {
            ctx->pc = 0x2202D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2202d0;
        }
    }
    ctx->pc = 0x220398u;
label_220398:
    // 0x220398: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x220398u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_22039c:
    // 0x22039c: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x22039cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2203a0:
    // 0x2203a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2203a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2203a4:
    // 0x2203a4: 0x25082418  addiu       $t0, $t0, 0x2418
    ctx->pc = 0x2203a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9240));
label_2203a8:
    // 0x2203a8: 0x24050132  addiu       $a1, $zero, 0x132
    ctx->pc = 0x2203a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
label_2203ac:
    // 0x2203ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2203acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2203b0:
    // 0x2203b0: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_2203b4:
    if (ctx->pc == 0x2203B4u) {
        ctx->pc = 0x2203B4u;
            // 0x2203b4: 0x2407b1dc  addiu       $a3, $zero, -0x4E24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947292));
        ctx->pc = 0x2203B8u;
        goto label_2203b8;
    }
    ctx->pc = 0x2203B0u;
    {
        const bool branch_taken_0x2203b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2203B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2203B0u;
            // 0x2203b4: 0x2407b1dc  addiu       $a3, $zero, -0x4E24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203b0) {
            ctx->pc = 0x220388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220388;
        }
    }
    ctx->pc = 0x2203B8u;
label_2203b8:
    // 0x2203b8: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x2203b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
label_2203bc:
    // 0x2203bc: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x2203bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2203c0:
    // 0x2203c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2203c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2203c4:
    // 0x2203c4: 0x25292418  addiu       $t1, $t1, 0x2418
    ctx->pc = 0x2203c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9240));
label_2203c8:
    // 0x2203c8: 0x24050136  addiu       $a1, $zero, 0x136
    ctx->pc = 0x2203c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
label_2203cc:
    // 0x2203cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2203ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2203d0:
    // 0x2203d0: 0x2407b1df  addiu       $a3, $zero, -0x4E21
    ctx->pc = 0x2203d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947295));
label_2203d4:
    // 0x2203d4: 0xc089794  jal         func_225E50
label_2203d8:
    if (ctx->pc == 0x2203D8u) {
        ctx->pc = 0x2203D8u;
            // 0x2203d8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2203DCu;
        goto label_2203dc;
    }
    ctx->pc = 0x2203D4u;
    SET_GPR_U32(ctx, 31, 0x2203DCu);
    ctx->pc = 0x2203D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2203D4u;
            // 0x2203d8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203DCu; }
        if (ctx->pc != 0x2203DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2203DCu; }
        if (ctx->pc != 0x2203DCu) { return; }
    }
    ctx->pc = 0x2203DCu;
label_2203dc:
    // 0x2203dc: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
label_2203e0:
    if (ctx->pc == 0x2203E0u) {
        ctx->pc = 0x2203E4u;
        goto label_2203e4;
    }
    ctx->pc = 0x2203DCu;
    {
        const bool branch_taken_0x2203dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203dc) {
            ctx->pc = 0x2202D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2202d0;
        }
    }
    ctx->pc = 0x2203E4u;
label_2203e4:
    // 0x2203e4: 0x55ed0027  bnel        $t7, $t5, . + 4 + (0x27 << 2)
label_2203e8:
    if (ctx->pc == 0x2203E8u) {
        ctx->pc = 0x2203E8u;
            // 0x2203e8: 0x8e0f0004  lw          $t7, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2203ECu;
        goto label_2203ec;
    }
    ctx->pc = 0x2203E4u;
    {
        const bool branch_taken_0x2203e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 13));
        if (branch_taken_0x2203e4) {
            ctx->pc = 0x2203E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2203E4u;
            // 0x2203e8: 0x8e0f0004  lw          $t7, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x220484u;
            goto label_220484;
        }
    }
    ctx->pc = 0x2203ECu;
label_2203ec:
    // 0x2203ec: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x2203ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2203f0:
    // 0x2203f0: 0x240ffed2  addiu       $t7, $zero, -0x12E
    ctx->pc = 0x2203f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966994));
label_2203f4:
    // 0x2203f4: 0x554f000a  bnel        $t2, $t7, . + 4 + (0xA << 2)
label_2203f8:
    if (ctx->pc == 0x2203F8u) {
        ctx->pc = 0x2203F8u;
            // 0x2203f8: 0x8e0f0004  lw          $t7, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2203FCu;
        goto label_2203fc;
    }
    ctx->pc = 0x2203F4u;
    {
        const bool branch_taken_0x2203f4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 15));
        if (branch_taken_0x2203f4) {
            ctx->pc = 0x2203F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2203F4u;
            // 0x2203f8: 0x8e0f0004  lw          $t7, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x220420u;
            goto label_220420;
        }
    }
    ctx->pc = 0x2203FCu;
label_2203fc:
    // 0x2203fc: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2203fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_220400:
    // 0x220400: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x220400u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_220404:
    // 0x220404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220408:
    // 0x220408: 0x25082418  addiu       $t0, $t0, 0x2418
    ctx->pc = 0x220408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9240));
label_22040c:
    // 0x22040c: 0x2405013f  addiu       $a1, $zero, 0x13F
    ctx->pc = 0x22040cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
label_220410:
    // 0x220410: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x220410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_220414:
    // 0x220414: 0x2407b1dd  addiu       $a3, $zero, -0x4E23
    ctx->pc = 0x220414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947293));
label_220418:
    // 0x220418: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_22041c:
    if (ctx->pc == 0x22041Cu) {
        ctx->pc = 0x22041Cu;
            // 0x22041c: 0x240afed2  addiu       $t2, $zero, -0x12E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966994));
        ctx->pc = 0x220420u;
        goto label_220420;
    }
    ctx->pc = 0x220418u;
    {
        const bool branch_taken_0x220418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22041Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220418u;
            // 0x22041c: 0x240afed2  addiu       $t2, $zero, -0x12E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966994));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220418) {
            ctx->pc = 0x220388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220388;
        }
    }
    ctx->pc = 0x220420u;
label_220420:
    // 0x220420: 0x11ed0011  beq         $t7, $t5, . + 4 + (0x11 << 2)
label_220424:
    if (ctx->pc == 0x220424u) {
        ctx->pc = 0x220424u;
            // 0x220424: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x220428u;
        goto label_220428;
    }
    ctx->pc = 0x220420u;
    {
        const bool branch_taken_0x220420 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 13));
        ctx->pc = 0x220424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220420u;
            // 0x220424: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220420) {
            ctx->pc = 0x220468u;
            goto label_220468;
        }
    }
    ctx->pc = 0x220428u;
label_220428:
    // 0x220428: 0xc08808c  jal         func_220230
label_22042c:
    if (ctx->pc == 0x22042Cu) {
        ctx->pc = 0x22042Cu;
            // 0x22042c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220430u;
        goto label_220430;
    }
    ctx->pc = 0x220428u;
    SET_GPR_U32(ctx, 31, 0x220430u);
    ctx->pc = 0x22042Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220428u;
            // 0x22042c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220230u;
    if (runtime->hasFunction(0x220230u)) {
        auto targetFn = runtime->lookupFunction(0x220230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220430u; }
        if (ctx->pc != 0x220430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220230_0x220230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220430u; }
        if (ctx->pc != 0x220430u) { return; }
    }
    ctx->pc = 0x220430u;
label_220430:
    // 0x220430: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_220434:
    if (ctx->pc == 0x220434u) {
        ctx->pc = 0x220434u;
            // 0x220434: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x220438u;
        goto label_220438;
    }
    ctx->pc = 0x220430u;
    {
        const bool branch_taken_0x220430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220430u;
            // 0x220434: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220430) {
            ctx->pc = 0x220450u;
            goto label_220450;
        }
    }
    ctx->pc = 0x220438u;
label_220438:
    // 0x220438: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x220438u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_22043c:
    // 0x22043c: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x22043cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_220440:
    // 0x220440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220444:
    // 0x220444: 0x25082418  addiu       $t0, $t0, 0x2418
    ctx->pc = 0x220444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9240));
label_220448:
    // 0x220448: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_22044c:
    if (ctx->pc == 0x22044Cu) {
        ctx->pc = 0x22044Cu;
            // 0x22044c: 0x2405014c  addiu       $a1, $zero, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
        ctx->pc = 0x220450u;
        goto label_220450;
    }
    ctx->pc = 0x220448u;
    {
        const bool branch_taken_0x220448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220448u;
            // 0x22044c: 0x2405014c  addiu       $a1, $zero, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220448) {
            ctx->pc = 0x220380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220380;
        }
    }
    ctx->pc = 0x220450u;
label_220450:
    // 0x220450: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x220450u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_220454:
    // 0x220454: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x220454u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_220458:
    // 0x220458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22045c:
    // 0x22045c: 0x25082418  addiu       $t0, $t0, 0x2418
    ctx->pc = 0x22045cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9240));
label_220460:
    // 0x220460: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
label_220464:
    if (ctx->pc == 0x220464u) {
        ctx->pc = 0x220464u;
            // 0x220464: 0x2405014f  addiu       $a1, $zero, 0x14F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
        ctx->pc = 0x220468u;
        goto label_220468;
    }
    ctx->pc = 0x220460u;
    {
        const bool branch_taken_0x220460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220460u;
            // 0x220464: 0x2405014f  addiu       $a1, $zero, 0x14F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220460) {
            ctx->pc = 0x2203ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2203ac;
        }
    }
    ctx->pc = 0x220468u;
label_220468:
    // 0x220468: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x220468u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_22046c:
    // 0x22046c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22046cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220470:
    // 0x220470: 0x25082418  addiu       $t0, $t0, 0x2418
    ctx->pc = 0x220470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9240));
label_220474:
    // 0x220474: 0x24050153  addiu       $a1, $zero, 0x153
    ctx->pc = 0x220474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 339));
label_220478:
    // 0x220478: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x220478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22047c:
    // 0x22047c: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
label_220480:
    if (ctx->pc == 0x220480u) {
        ctx->pc = 0x220480u;
            // 0x220480: 0x2407b1df  addiu       $a3, $zero, -0x4E21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947295));
        ctx->pc = 0x220484u;
        goto label_220484;
    }
    ctx->pc = 0x22047Cu;
    {
        const bool branch_taken_0x22047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22047Cu;
            // 0x220480: 0x2407b1df  addiu       $a3, $zero, -0x4E21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22047c) {
            ctx->pc = 0x220388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220388;
        }
    }
    ctx->pc = 0x220484u;
label_220484:
    // 0x220484: 0x11ed0009  beq         $t7, $t5, . + 4 + (0x9 << 2)
label_220488:
    if (ctx->pc == 0x220488u) {
        ctx->pc = 0x220488u;
            // 0x220488: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x22048Cu;
        goto label_22048c;
    }
    ctx->pc = 0x220484u;
    {
        const bool branch_taken_0x220484 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 13));
        ctx->pc = 0x220488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220484u;
            // 0x220488: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220484) {
            ctx->pc = 0x2204ACu;
            goto label_2204ac;
        }
    }
    ctx->pc = 0x22048Cu;
label_22048c:
    // 0x22048c: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x22048cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
label_220490:
    // 0x220490: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x220490u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_220494:
    // 0x220494: 0x8fab0000  lw          $t3, 0x0($sp)
    ctx->pc = 0x220494u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_220498:
    // 0x220498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22049c:
    // 0x22049c: 0x25292418  addiu       $t1, $t1, 0x2418
    ctx->pc = 0x22049cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9240));
label_2204a0:
    // 0x2204a0: 0x2405015a  addiu       $a1, $zero, 0x15A
    ctx->pc = 0x2204a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
label_2204a4:
    // 0x2204a4: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
label_2204a8:
    if (ctx->pc == 0x2204A8u) {
        ctx->pc = 0x2204A8u;
            // 0x2204a8: 0x2407b1de  addiu       $a3, $zero, -0x4E22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947294));
        ctx->pc = 0x2204ACu;
        goto label_2204ac;
    }
    ctx->pc = 0x2204A4u;
    {
        const bool branch_taken_0x2204a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2204A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2204A4u;
            // 0x2204a8: 0x2407b1de  addiu       $a3, $zero, -0x4E22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204a4) {
            ctx->pc = 0x2203D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2203d4;
        }
    }
    ctx->pc = 0x2204ACu;
label_2204ac:
    // 0x2204ac: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x2204acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
label_2204b0:
    // 0x2204b0: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x2204b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2204b4:
    // 0x2204b4: 0x8fab0000  lw          $t3, 0x0($sp)
    ctx->pc = 0x2204b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2204b8:
    // 0x2204b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2204b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2204bc:
    // 0x2204bc: 0x25292418  addiu       $t1, $t1, 0x2418
    ctx->pc = 0x2204bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9240));
label_2204c0:
    // 0x2204c0: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
label_2204c4:
    if (ctx->pc == 0x2204C4u) {
        ctx->pc = 0x2204C4u;
            // 0x2204c4: 0x2405015d  addiu       $a1, $zero, 0x15D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
        ctx->pc = 0x2204C8u;
        goto label_2204c8;
    }
    ctx->pc = 0x2204C0u;
    {
        const bool branch_taken_0x2204c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2204C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2204C0u;
            // 0x2204c4: 0x2405015d  addiu       $a1, $zero, 0x15D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204c0) {
            ctx->pc = 0x2203CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2203cc;
        }
    }
    ctx->pc = 0x2204C8u;
label_2204c8:
    // 0x2204c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2204c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2204cc:
    // 0x2204cc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2204ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2204d0:
    // 0x2204d0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2204d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2204d4:
    // 0x2204d4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2204d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_2204d8:
    // 0x2204d8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2204d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2204dc:
    // 0x2204dc: 0x24e72438  addiu       $a3, $a3, 0x2438
    ctx->pc = 0x2204dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9272));
label_2204e0:
    // 0x2204e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2204e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2204e4:
    // 0x2204e4: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2204e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_2204e8:
    // 0x2204e8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2204e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2204ec:
    // 0x2204ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2204ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2204f0:
    // 0x2204f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2204f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2204f4:
    // 0x2204f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2204f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2204f8:
    // 0x2204f8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2204f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2204fc:
    // 0x2204fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2204fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220500:
    // 0x220500: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x220500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
label_220504:
    // 0x220504: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x220504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
label_220508:
    // 0x220508: 0x8e0ec9e8  lw          $t6, -0x3618($s0)
    ctx->pc = 0x220508u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953448)));
label_22050c:
    // 0x22050c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x22050cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_220510:
    // 0x220510: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x220510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220514:
    // 0x220514: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x220514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220518:
    // 0x220518: 0x8dcf0004  lw          $t7, 0x4($t6)
    ctx->pc = 0x220518u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
label_22051c:
    // 0x22051c: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x22051cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
label_220520:
    // 0x220520: 0xc0897d6  jal         func_225F58
label_220524:
    if (ctx->pc == 0x220524u) {
        ctx->pc = 0x220524u;
            // 0x220524: 0x8dcb000c  lw          $t3, 0xC($t6) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
        ctx->pc = 0x220528u;
        goto label_220528;
    }
    ctx->pc = 0x220520u;
    SET_GPR_U32(ctx, 31, 0x220528u);
    ctx->pc = 0x220524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220520u;
            // 0x220524: 0x8dcb000c  lw          $t3, 0xC($t6) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220528u; }
        if (ctx->pc != 0x220528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220528u; }
        if (ctx->pc != 0x220528u) { return; }
    }
    ctx->pc = 0x220528u;
label_220528:
    // 0x220528: 0x8e0fc9e8  lw          $t7, -0x3618($s0)
    ctx->pc = 0x220528u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953448)));
label_22052c:
    // 0x22052c: 0x11e0002a  beqz        $t7, . + 4 + (0x2A << 2)
label_220530:
    if (ctx->pc == 0x220530u) {
        ctx->pc = 0x220530u;
            // 0x220530: 0x2e2f000d  sltiu       $t7, $s1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
        ctx->pc = 0x220534u;
        goto label_220534;
    }
    ctx->pc = 0x22052Cu;
    {
        const bool branch_taken_0x22052c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22052Cu;
            // 0x220530: 0x2e2f000d  sltiu       $t7, $s1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22052c) {
            ctx->pc = 0x2205D8u;
            goto label_2205d8;
        }
    }
    ctx->pc = 0x220534u;
label_220534:
    // 0x220534: 0x11e00028  beqz        $t7, . + 4 + (0x28 << 2)
label_220538:
    if (ctx->pc == 0x220538u) {
        ctx->pc = 0x220538u;
            // 0x220538: 0x3c0e003f  lui         $t6, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x22053Cu;
        goto label_22053c;
    }
    ctx->pc = 0x220534u;
    {
        const bool branch_taken_0x220534 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220534u;
            // 0x220538: 0x3c0e003f  lui         $t6, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220534) {
            ctx->pc = 0x2205D8u;
            goto label_2205d8;
        }
    }
    ctx->pc = 0x22053Cu;
label_22053c:
    // 0x22053c: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x22053cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_220540:
    // 0x220540: 0x25ce25b0  addiu       $t6, $t6, 0x25B0
    ctx->pc = 0x220540u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 9648));
label_220544:
    // 0x220544: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x220544u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_220548:
    // 0x220548: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x220548u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_22054c:
    // 0x22054c: 0x1a00008  jr          $t5
label_220550:
    if (ctx->pc == 0x220550u) {
        ctx->pc = 0x220554u;
        goto label_220554;
    }
    ctx->pc = 0x22054Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220554u: goto label_220554;
            case 0x2205D8u: goto label_2205d8;
            case 0x2205F8u: goto label_2205f8;
            case 0x22060Cu: goto label_22060c;
            case 0x220730u: goto label_220730;
            case 0x22080Cu: goto label_22080c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220554u;
label_220554:
    // 0x220554: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x220554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_220558:
    // 0x220558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x220558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22055c:
    // 0x22055c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x22055cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_220560:
    // 0x220560: 0xc049cb6  jal         func_1272D8
label_220564:
    if (ctx->pc == 0x220564u) {
        ctx->pc = 0x220564u;
            // 0x220564: 0x2484a530  addiu       $a0, $a0, -0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944048));
        ctx->pc = 0x220568u;
        goto label_220568;
    }
    ctx->pc = 0x220560u;
    SET_GPR_U32(ctx, 31, 0x220568u);
    ctx->pc = 0x220564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220560u;
            // 0x220564: 0x2484a530  addiu       $a0, $a0, -0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220568u; }
        if (ctx->pc != 0x220568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220568u; }
        if (ctx->pc != 0x220568u) { return; }
    }
    ctx->pc = 0x220568u;
label_220568:
    // 0x220568: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x220568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_22056c:
    // 0x22056c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22056cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220570:
    // 0x220570: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x220570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_220574:
    // 0x220574: 0xc049cb6  jal         func_1272D8
label_220578:
    if (ctx->pc == 0x220578u) {
        ctx->pc = 0x220578u;
            // 0x220578: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
        ctx->pc = 0x22057Cu;
        goto label_22057c;
    }
    ctx->pc = 0x220574u;
    SET_GPR_U32(ctx, 31, 0x22057Cu);
    ctx->pc = 0x220578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220574u;
            // 0x220578: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22057Cu; }
        if (ctx->pc != 0x22057Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22057Cu; }
        if (ctx->pc != 0x22057Cu) { return; }
    }
    ctx->pc = 0x22057Cu;
label_22057c:
    // 0x22057c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x22057cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_220580:
    // 0x220580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x220580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220584:
    // 0x220584: 0x2484a5c8  addiu       $a0, $a0, -0x5A38
    ctx->pc = 0x220584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944200));
label_220588:
    // 0x220588: 0xc049cb6  jal         func_1272D8
label_22058c:
    if (ctx->pc == 0x22058Cu) {
        ctx->pc = 0x22058Cu;
            // 0x22058c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x220590u;
        goto label_220590;
    }
    ctx->pc = 0x220588u;
    SET_GPR_U32(ctx, 31, 0x220590u);
    ctx->pc = 0x22058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220588u;
            // 0x22058c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220590u; }
        if (ctx->pc != 0x220590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220590u; }
        if (ctx->pc != 0x220590u) { return; }
    }
    ctx->pc = 0x220590u;
label_220590:
    // 0x220590: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x220590u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_220594:
    // 0x220594: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x220594u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220598:
    // 0x220598: 0x8de4c9e8  lw          $a0, -0x3618($t7)
    ctx->pc = 0x220598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
label_22059c:
    // 0x22059c: 0xac8e000c  sw          $t6, 0xC($a0)
    ctx->pc = 0x22059cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 14));
label_2205a0:
    // 0x2205a0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x2205a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2205a4:
    // 0x2205a4: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x2205a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2205a8:
    // 0x2205a8: 0x11af0003  beq         $t5, $t7, . + 4 + (0x3 << 2)
label_2205ac:
    if (ctx->pc == 0x2205ACu) {
        ctx->pc = 0x2205ACu;
            // 0x2205ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2205B0u;
        goto label_2205b0;
    }
    ctx->pc = 0x2205A8u;
    {
        const bool branch_taken_0x2205a8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x2205ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2205A8u;
            // 0x2205ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205a8) {
            ctx->pc = 0x2205B8u;
            goto label_2205b8;
        }
    }
    ctx->pc = 0x2205B0u;
label_2205b0:
    // 0x2205b0: 0xc08867a  jal         func_2219E8
label_2205b4:
    if (ctx->pc == 0x2205B4u) {
        ctx->pc = 0x2205B4u;
            // 0x2205b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2205B8u;
        goto label_2205b8;
    }
    ctx->pc = 0x2205B0u;
    SET_GPR_U32(ctx, 31, 0x2205B8u);
    ctx->pc = 0x2205B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2205B0u;
            // 0x2205b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2205B8u; }
        if (ctx->pc != 0x2205B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2205B8u; }
        if (ctx->pc != 0x2205B8u) { return; }
    }
    ctx->pc = 0x2205B8u;
label_2205b8:
    // 0x2205b8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2205b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2205bc:
    // 0x2205bc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2205bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_2205c0:
    // 0x2205c0: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x2205c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
label_2205c4:
    // 0x2205c4: 0x24e72480  addiu       $a3, $a3, 0x2480
    ctx->pc = 0x2205c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9344));
label_2205c8:
    // 0x2205c8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2205c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2205cc:
    // 0x2205cc: 0x24050182  addiu       $a1, $zero, 0x182
    ctx->pc = 0x2205ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
label_2205d0:
    // 0x2205d0: 0xc0897d6  jal         func_225F58
label_2205d4:
    if (ctx->pc == 0x2205D4u) {
        ctx->pc = 0x2205D4u;
            // 0x2205d4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2205D8u;
        goto label_2205d8;
    }
    ctx->pc = 0x2205D0u;
    SET_GPR_U32(ctx, 31, 0x2205D8u);
    ctx->pc = 0x2205D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2205D0u;
            // 0x2205d4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2205D8u; }
        if (ctx->pc != 0x2205D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2205D8u; }
        if (ctx->pc != 0x2205D8u) { return; }
    }
    ctx->pc = 0x2205D8u;
label_2205d8:
    // 0x2205d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2205d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2205dc:
    // 0x2205dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2205dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2205e0:
    // 0x2205e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2205e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2205e4:
    // 0x2205e4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2205e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2205e8:
    // 0x2205e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2205e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2205ec:
    // 0x2205ec: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2205ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2205f0:
    // 0x2205f0: 0x3e00008  jr          $ra
label_2205f4:
    if (ctx->pc == 0x2205F4u) {
        ctx->pc = 0x2205F4u;
            // 0x2205f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2205F8u;
        goto label_2205f8;
    }
    ctx->pc = 0x2205F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2205F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2205F0u;
            // 0x2205f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2205F8u;
label_2205f8:
    // 0x2205f8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2205f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_2205fc:
    // 0x2205fc: 0xc0880a2  jal         func_220288
label_220600:
    if (ctx->pc == 0x220600u) {
        ctx->pc = 0x220600u;
            // 0x220600: 0x8de4c9e8  lw          $a0, -0x3618($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
        ctx->pc = 0x220604u;
        goto label_220604;
    }
    ctx->pc = 0x2205FCu;
    SET_GPR_U32(ctx, 31, 0x220604u);
    ctx->pc = 0x220600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2205FCu;
            // 0x220600: 0x8de4c9e8  lw          $a0, -0x3618($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220288u;
    goto label_220288;
    ctx->pc = 0x220604u;
label_220604:
    // 0x220604: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_220608:
    if (ctx->pc == 0x220608u) {
        ctx->pc = 0x220608u;
            // 0x220608: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x22060Cu;
        goto label_22060c;
    }
    ctx->pc = 0x220604u;
    {
        const bool branch_taken_0x220604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220604u;
            // 0x220608: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220604) {
            ctx->pc = 0x2205DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2205dc;
        }
    }
    ctx->pc = 0x22060Cu;
label_22060c:
    // 0x22060c: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x22060cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_220610:
    // 0x220610: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x220610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_220614:
    // 0x220614: 0xafaf0010  sw          $t7, 0x10($sp)
    ctx->pc = 0x220614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 15));
label_220618:
    // 0x220618: 0x2484a530  addiu       $a0, $a0, -0x5AD0
    ctx->pc = 0x220618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944048));
label_22061c:
    // 0x22061c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22061cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220620:
    // 0x220620: 0xc049cb6  jal         func_1272D8
label_220624:
    if (ctx->pc == 0x220624u) {
        ctx->pc = 0x220624u;
            // 0x220624: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x220628u;
        goto label_220628;
    }
    ctx->pc = 0x220620u;
    SET_GPR_U32(ctx, 31, 0x220628u);
    ctx->pc = 0x220624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220620u;
            // 0x220624: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220628u; }
        if (ctx->pc != 0x220628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220628u; }
        if (ctx->pc != 0x220628u) { return; }
    }
    ctx->pc = 0x220628u;
label_220628:
    // 0x220628: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x220628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_22062c:
    // 0x22062c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22062cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220630:
    // 0x220630: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x220630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_220634:
    // 0x220634: 0xc049cb6  jal         func_1272D8
label_220638:
    if (ctx->pc == 0x220638u) {
        ctx->pc = 0x220638u;
            // 0x220638: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
        ctx->pc = 0x22063Cu;
        goto label_22063c;
    }
    ctx->pc = 0x220634u;
    SET_GPR_U32(ctx, 31, 0x22063Cu);
    ctx->pc = 0x220638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220634u;
            // 0x220638: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22063Cu; }
        if (ctx->pc != 0x22063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22063Cu; }
        if (ctx->pc != 0x22063Cu) { return; }
    }
    ctx->pc = 0x22063Cu;
label_22063c:
    // 0x22063c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x22063cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_220640:
    // 0x220640: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x220640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_220644:
    // 0x220644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x220644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220648:
    // 0x220648: 0xc049cb6  jal         func_1272D8
label_22064c:
    if (ctx->pc == 0x22064Cu) {
        ctx->pc = 0x22064Cu;
            // 0x22064c: 0x2484a5c8  addiu       $a0, $a0, -0x5A38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944200));
        ctx->pc = 0x220650u;
        goto label_220650;
    }
    ctx->pc = 0x220648u;
    SET_GPR_U32(ctx, 31, 0x220650u);
    ctx->pc = 0x22064Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220648u;
            // 0x22064c: 0x2484a5c8  addiu       $a0, $a0, -0x5A38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220650u; }
        if (ctx->pc != 0x220650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220650u; }
        if (ctx->pc != 0x220650u) { return; }
    }
    ctx->pc = 0x220650u;
label_220650:
    // 0x220650: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x220650u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_220654:
    // 0x220654: 0x8de6c9e8  lw          $a2, -0x3618($t7)
    ctx->pc = 0x220654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
label_220658:
    // 0x220658: 0x8cce0000  lw          $t6, 0x0($a2)
    ctx->pc = 0x220658u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22065c:
    // 0x22065c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x22065cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220660:
    // 0x220660: 0x91cd1325  lbu         $t5, 0x1325($t6)
    ctx->pc = 0x220660u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4901)));
label_220664:
    // 0x220664: 0x15af0030  bne         $t5, $t7, . + 4 + (0x30 << 2)
label_220668:
    if (ctx->pc == 0x220668u) {
        ctx->pc = 0x220668u;
            // 0x220668: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->pc = 0x22066Cu;
        goto label_22066c;
    }
    ctx->pc = 0x220664u;
    {
        const bool branch_taken_0x220664 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x220668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220664u;
            // 0x220668: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220664) {
            ctx->pc = 0x220728u;
            goto label_220728;
        }
    }
    ctx->pc = 0x22066Cu;
label_22066c:
    // 0x22066c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22066cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220670:
    // 0x220670: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x220670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
label_220674:
    // 0x220674: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x220674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_220678:
    // 0x220678: 0xc098202  jal         func_260808
label_22067c:
    if (ctx->pc == 0x22067Cu) {
        ctx->pc = 0x22067Cu;
            // 0x22067c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x220680u;
        goto label_220680;
    }
    ctx->pc = 0x220678u;
    SET_GPR_U32(ctx, 31, 0x220680u);
    ctx->pc = 0x22067Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220678u;
            // 0x22067c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260808u;
    if (runtime->hasFunction(0x260808u)) {
        auto targetFn = runtime->lookupFunction(0x260808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220680u; }
        if (ctx->pc != 0x220680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260808_0x260808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220680u; }
        if (ctx->pc != 0x220680u) { return; }
    }
    ctx->pc = 0x220680u;
label_220680:
    // 0x220680: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_220684:
    if (ctx->pc == 0x220684u) {
        ctx->pc = 0x220684u;
            // 0x220684: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220688u;
        goto label_220688;
    }
    ctx->pc = 0x220680u;
    {
        const bool branch_taken_0x220680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220680u;
            // 0x220684: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220680) {
            ctx->pc = 0x2206F0u;
            goto label_2206f0;
        }
    }
    ctx->pc = 0x220688u;
label_220688:
    // 0x220688: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_22068c:
    // 0x22068c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x22068cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_220690:
    // 0x220690: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x220690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
label_220694:
    // 0x220694: 0x250824a8  addiu       $t0, $t0, 0x24A8
    ctx->pc = 0x220694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9384));
label_220698:
    // 0x220698: 0x24050196  addiu       $a1, $zero, 0x196
    ctx->pc = 0x220698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
label_22069c:
    // 0x22069c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x22069cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2206a0:
    // 0x2206a0: 0xc089794  jal         func_225E50
label_2206a4:
    if (ctx->pc == 0x2206A4u) {
        ctx->pc = 0x2206A4u;
            // 0x2206a4: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->pc = 0x2206A8u;
        goto label_2206a8;
    }
    ctx->pc = 0x2206A0u;
    SET_GPR_U32(ctx, 31, 0x2206A8u);
    ctx->pc = 0x2206A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2206A0u;
            // 0x2206a4: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206A8u; }
        if (ctx->pc != 0x2206A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206A8u; }
        if (ctx->pc != 0x2206A8u) { return; }
    }
    ctx->pc = 0x2206A8u;
label_2206a8:
    // 0x2206a8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2206a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_2206ac:
    // 0x2206ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2206acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2206b0:
    // 0x2206b0: 0x8deec9e8  lw          $t6, -0x3618($t7)
    ctx->pc = 0x2206b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
label_2206b4:
    // 0x2206b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2206b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2206b8:
    // 0x2206b8: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x2206b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2206bc:
    // 0x2206bc: 0xadc0001c  sw          $zero, 0x1C($t6)
    ctx->pc = 0x2206bcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 28), GPR_U32(ctx, 0));
label_2206c0:
    // 0x2206c0: 0xadcf000c  sw          $t7, 0xC($t6)
    ctx->pc = 0x2206c0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 15));
label_2206c4:
    // 0x2206c4: 0xc08867a  jal         func_2219E8
label_2206c8:
    if (ctx->pc == 0x2206C8u) {
        ctx->pc = 0x2206C8u;
            // 0x2206c8: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2206CCu;
        goto label_2206cc;
    }
    ctx->pc = 0x2206C4u;
    SET_GPR_U32(ctx, 31, 0x2206CCu);
    ctx->pc = 0x2206C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2206C4u;
            // 0x2206c8: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206CCu; }
        if (ctx->pc != 0x2206CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206CCu; }
        if (ctx->pc != 0x2206CCu) { return; }
    }
    ctx->pc = 0x2206CCu;
label_2206cc:
    // 0x2206cc: 0xc087ff6  jal         func_21FFD8
label_2206d0:
    if (ctx->pc == 0x2206D0u) {
        ctx->pc = 0x2206D4u;
        goto label_2206d4;
    }
    ctx->pc = 0x2206CCu;
    SET_GPR_U32(ctx, 31, 0x2206D4u);
    ctx->pc = 0x21FFD8u;
    if (runtime->hasFunction(0x21FFD8u)) {
        auto targetFn = runtime->lookupFunction(0x21FFD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206D4u; }
        if (ctx->pc != 0x2206D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FFD8_0x21ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206D4u; }
        if (ctx->pc != 0x2206D4u) { return; }
    }
    ctx->pc = 0x2206D4u;
label_2206d4:
    // 0x2206d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2206d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2206d8:
    // 0x2206d8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2206d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_2206dc:
    // 0x2206dc: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x2206dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
label_2206e0:
    // 0x2206e0: 0x24e724d8  addiu       $a3, $a3, 0x24D8
    ctx->pc = 0x2206e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9432));
label_2206e4:
    // 0x2206e4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2206e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2206e8:
    // 0x2206e8: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
label_2206ec:
    if (ctx->pc == 0x2206ECu) {
        ctx->pc = 0x2206ECu;
            // 0x2206ec: 0x240501a1  addiu       $a1, $zero, 0x1A1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
        ctx->pc = 0x2206F0u;
        goto label_2206f0;
    }
    ctx->pc = 0x2206E8u;
    {
        const bool branch_taken_0x2206e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2206E8u;
            // 0x2206ec: 0x240501a1  addiu       $a1, $zero, 0x1A1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206e8) {
            ctx->pc = 0x2205D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2205d0;
        }
    }
    ctx->pc = 0x2206F0u;
label_2206f0:
    // 0x2206f0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2206f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_2206f4:
    // 0x2206f4: 0x8deec9e8  lw          $t6, -0x3618($t7)
    ctx->pc = 0x2206f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
label_2206f8:
    // 0x2206f8: 0xc0990d8  jal         func_264360
label_2206fc:
    if (ctx->pc == 0x2206FCu) {
        ctx->pc = 0x2206FCu;
            // 0x2206fc: 0x9dc40014  lwu         $a0, 0x14($t6) (Delay Slot)
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 14), 20)));
        ctx->pc = 0x220700u;
        goto label_220700;
    }
    ctx->pc = 0x2206F8u;
    SET_GPR_U32(ctx, 31, 0x220700u);
    ctx->pc = 0x2206FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2206F8u;
            // 0x2206fc: 0x9dc40014  lwu         $a0, 0x14($t6) (Delay Slot)
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 14), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (runtime->hasFunction(0x264360u)) {
        auto targetFn = runtime->lookupFunction(0x264360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220700u; }
        if (ctx->pc != 0x220700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264360_0x264360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220700u; }
        if (ctx->pc != 0x220700u) { return; }
    }
    ctx->pc = 0x220700u;
label_220700:
    // 0x220700: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220704:
    // 0x220704: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220704u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220708:
    // 0x220708: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x220708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22070c:
    // 0x22070c: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x22070cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
label_220710:
    // 0x220710: 0x24e724f8  addiu       $a3, $a3, 0x24F8
    ctx->pc = 0x220710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9464));
label_220714:
    // 0x220714: 0x24050199  addiu       $a1, $zero, 0x199
    ctx->pc = 0x220714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
label_220718:
    // 0x220718: 0xc0897d6  jal         func_225F58
label_22071c:
    if (ctx->pc == 0x22071Cu) {
        ctx->pc = 0x22071Cu;
            // 0x22071c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x220720u;
        goto label_220720;
    }
    ctx->pc = 0x220718u;
    SET_GPR_U32(ctx, 31, 0x220720u);
    ctx->pc = 0x22071Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220718u;
            // 0x22071c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220720u; }
        if (ctx->pc != 0x220720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220720u; }
        if (ctx->pc != 0x220720u) { return; }
    }
    ctx->pc = 0x220720u;
label_220720:
    // 0x220720: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_220724:
    if (ctx->pc == 0x220724u) {
        ctx->pc = 0x220724u;
            // 0x220724: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x220728u;
        goto label_220728;
    }
    ctx->pc = 0x220720u;
    {
        const bool branch_taken_0x220720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220720u;
            // 0x220724: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220720) {
            ctx->pc = 0x2206ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2206ac;
        }
    }
    ctx->pc = 0x220728u;
label_220728:
    // 0x220728: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
label_22072c:
    if (ctx->pc == 0x22072Cu) {
        ctx->pc = 0x22072Cu;
            // 0x22072c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220730u;
        goto label_220730;
    }
    ctx->pc = 0x220728u;
    {
        const bool branch_taken_0x220728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22072Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220728u;
            // 0x22072c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220728) {
            ctx->pc = 0x220674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220674;
        }
    }
    ctx->pc = 0x220730u;
label_220730:
    // 0x220730: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x220730u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
label_220734:
    // 0x220734: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x220734u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_220738:
    // 0x220738: 0x8e2dc9e8  lw          $t5, -0x3618($s1)
    ctx->pc = 0x220738u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953448)));
label_22073c:
    // 0x22073c: 0xadaf000c  sw          $t7, 0xC($t5)
    ctx->pc = 0x22073cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 15));
label_220740:
    // 0x220740: 0xada0001c  sw          $zero, 0x1C($t5)
    ctx->pc = 0x220740u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 0));
label_220744:
    // 0x220744: 0x8dae0004  lw          $t6, 0x4($t5)
    ctx->pc = 0x220744u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_220748:
    // 0x220748: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x220748u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22074c:
    // 0x22074c: 0x15cf0024  bne         $t6, $t7, . + 4 + (0x24 << 2)
label_220750:
    if (ctx->pc == 0x220750u) {
        ctx->pc = 0x220750u;
            // 0x220750: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x220754u;
        goto label_220754;
    }
    ctx->pc = 0x22074Cu;
    {
        const bool branch_taken_0x22074c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x220750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22074Cu;
            // 0x220750: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22074c) {
            ctx->pc = 0x2207E0u;
            goto label_2207e0;
        }
    }
    ctx->pc = 0x220754u;
label_220754:
    // 0x220754: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x220754u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_220758:
    // 0x220758: 0x8e6fca1c  lw          $t7, -0x35E4($s3)
    ctx->pc = 0x220758u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953500)));
label_22075c:
    // 0x22075c: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
label_220760:
    if (ctx->pc == 0x220760u) {
        ctx->pc = 0x220760u;
            // 0x220760: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x220764u;
        goto label_220764;
    }
    ctx->pc = 0x22075Cu;
    {
        const bool branch_taken_0x22075c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22075Cu;
            // 0x220760: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22075c) {
            ctx->pc = 0x2207D4u;
            goto label_2207d4;
        }
    }
    ctx->pc = 0x220764u;
label_220764:
    // 0x220764: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x220764u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
label_220768:
    // 0x220768: 0x25f42470  addiu       $s4, $t7, 0x2470
    ctx->pc = 0x220768u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 9328));
label_22076c:
    // 0x22076c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22076cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220770:
    // 0x220770: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_220774:
    // 0x220774: 0x24e72510  addiu       $a3, $a3, 0x2510
    ctx->pc = 0x220774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9488));
label_220778:
    // 0x220778: 0x240501b0  addiu       $a1, $zero, 0x1B0
    ctx->pc = 0x220778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
label_22077c:
    // 0x22077c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x22077cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_220780:
    // 0x220780: 0xc0897d6  jal         func_225F58
label_220784:
    if (ctx->pc == 0x220784u) {
        ctx->pc = 0x220784u;
            // 0x220784: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220788u;
        goto label_220788;
    }
    ctx->pc = 0x220780u;
    SET_GPR_U32(ctx, 31, 0x220788u);
    ctx->pc = 0x220784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220780u;
            // 0x220784: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220788u; }
        if (ctx->pc != 0x220788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220788u; }
        if (ctx->pc != 0x220788u) { return; }
    }
    ctx->pc = 0x220788u;
label_220788:
    // 0x220788: 0x8e62ca1c  lw          $v0, -0x35E4($s3)
    ctx->pc = 0x220788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953500)));
label_22078c:
    // 0x22078c: 0x40f809  jalr        $v0
label_220790:
    if (ctx->pc == 0x220790u) {
        ctx->pc = 0x220794u;
        goto label_220794;
    }
    ctx->pc = 0x22078Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220794u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x220794u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220794u; }
            if (ctx->pc != 0x220794u) { return; }
        }
        }
    }
    ctx->pc = 0x220794u;
label_220794:
    // 0x220794: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
label_220798:
    if (ctx->pc == 0x220798u) {
        ctx->pc = 0x220798u;
            // 0x220798: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22079Cu;
        goto label_22079c;
    }
    ctx->pc = 0x220794u;
    {
        const bool branch_taken_0x220794 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x220798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220794u;
            // 0x220798: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220794) {
            ctx->pc = 0x2207D0u;
            goto label_2207d0;
        }
    }
    ctx->pc = 0x22079Cu;
label_22079c:
    // 0x22079c: 0x8e24c9e8  lw          $a0, -0x3618($s1)
    ctx->pc = 0x22079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953448)));
label_2207a0:
    // 0x2207a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2207a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2207a4:
    // 0x2207a4: 0xc08867a  jal         func_2219E8
label_2207a8:
    if (ctx->pc == 0x2207A8u) {
        ctx->pc = 0x2207A8u;
            // 0x2207a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2207ACu;
        goto label_2207ac;
    }
    ctx->pc = 0x2207A4u;
    SET_GPR_U32(ctx, 31, 0x2207ACu);
    ctx->pc = 0x2207A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2207A4u;
            // 0x2207a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2207ACu; }
        if (ctx->pc != 0x2207ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2207ACu; }
        if (ctx->pc != 0x2207ACu) { return; }
    }
    ctx->pc = 0x2207ACu;
label_2207ac:
    // 0x2207ac: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2207acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2207b0:
    // 0x2207b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2207b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2207b4:
    // 0x2207b4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2207b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2207b8:
    // 0x2207b8: 0x25082528  addiu       $t0, $t0, 0x2528
    ctx->pc = 0x2207b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9512));
label_2207bc:
    // 0x2207bc: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2207bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_2207c0:
    // 0x2207c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2207c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2207c4:
    // 0x2207c4: 0x2407d8e6  addiu       $a3, $zero, -0x271A
    ctx->pc = 0x2207c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
label_2207c8:
    // 0x2207c8: 0xc089794  jal         func_225E50
label_2207cc:
    if (ctx->pc == 0x2207CCu) {
        ctx->pc = 0x2207CCu;
            // 0x2207cc: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2207D0u;
        goto label_2207d0;
    }
    ctx->pc = 0x2207C8u;
    SET_GPR_U32(ctx, 31, 0x2207D0u);
    ctx->pc = 0x2207CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2207C8u;
            // 0x2207cc: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2207D0u; }
        if (ctx->pc != 0x2207D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2207D0u; }
        if (ctx->pc != 0x2207D0u) { return; }
    }
    ctx->pc = 0x2207D0u;
label_2207d0:
    // 0x2207d0: 0xae60ca1c  sw          $zero, -0x35E4($s3)
    ctx->pc = 0x2207d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294953500), GPR_U32(ctx, 0));
label_2207d4:
    // 0x2207d4: 0xc087ff6  jal         func_21FFD8
label_2207d8:
    if (ctx->pc == 0x2207D8u) {
        ctx->pc = 0x2207DCu;
        goto label_2207dc;
    }
    ctx->pc = 0x2207D4u;
    SET_GPR_U32(ctx, 31, 0x2207DCu);
    ctx->pc = 0x21FFD8u;
    if (runtime->hasFunction(0x21FFD8u)) {
        auto targetFn = runtime->lookupFunction(0x21FFD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2207DCu; }
        if (ctx->pc != 0x2207DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FFD8_0x21ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2207DCu; }
        if (ctx->pc != 0x2207DCu) { return; }
    }
    ctx->pc = 0x2207DCu;
label_2207dc:
    // 0x2207dc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2207dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_2207e0:
    // 0x2207e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2207e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2207e4:
    // 0x2207e4: 0x8de4c9e8  lw          $a0, -0x3618($t7)
    ctx->pc = 0x2207e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
label_2207e8:
    // 0x2207e8: 0xc08867a  jal         func_2219E8
label_2207ec:
    if (ctx->pc == 0x2207ECu) {
        ctx->pc = 0x2207ECu;
            // 0x2207ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2207F0u;
        goto label_2207f0;
    }
    ctx->pc = 0x2207E8u;
    SET_GPR_U32(ctx, 31, 0x2207F0u);
    ctx->pc = 0x2207ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2207E8u;
            // 0x2207ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2207F0u; }
        if (ctx->pc != 0x2207F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2207F0u; }
        if (ctx->pc != 0x2207F0u) { return; }
    }
    ctx->pc = 0x2207F0u;
label_2207f0:
    // 0x2207f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2207f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2207f4:
    // 0x2207f4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2207f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_2207f8:
    // 0x2207f8: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x2207f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
label_2207fc:
    // 0x2207fc: 0x24e72548  addiu       $a3, $a3, 0x2548
    ctx->pc = 0x2207fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9544));
label_220800:
    // 0x220800: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x220800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220804:
    // 0x220804: 0x1000ff72  b           . + 4 + (-0x8E << 2)
label_220808:
    if (ctx->pc == 0x220808u) {
        ctx->pc = 0x220808u;
            // 0x220808: 0x240501be  addiu       $a1, $zero, 0x1BE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
        ctx->pc = 0x22080Cu;
        goto label_22080c;
    }
    ctx->pc = 0x220804u;
    {
        const bool branch_taken_0x220804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220804u;
            // 0x220808: 0x240501be  addiu       $a1, $zero, 0x1BE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220804) {
            ctx->pc = 0x2205D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2205d0;
        }
    }
    ctx->pc = 0x22080Cu;
label_22080c:
    // 0x22080c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x22080cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_220810:
    // 0x220810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220814:
    // 0x220814: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x220814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_220818:
    // 0x220818: 0xc049c22  jal         func_127088
label_22081c:
    if (ctx->pc == 0x22081Cu) {
        ctx->pc = 0x22081Cu;
            // 0x22081c: 0x24a524a0  addiu       $a1, $a1, 0x24A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
        ctx->pc = 0x220820u;
        goto label_220820;
    }
    ctx->pc = 0x220818u;
    SET_GPR_U32(ctx, 31, 0x220820u);
    ctx->pc = 0x22081Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220818u;
            // 0x22081c: 0x24a524a0  addiu       $a1, $a1, 0x24A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220820u; }
        if (ctx->pc != 0x220820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220820u; }
        if (ctx->pc != 0x220820u) { return; }
    }
    ctx->pc = 0x220820u;
label_220820:
    // 0x220820: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_220824:
    if (ctx->pc == 0x220824u) {
        ctx->pc = 0x220824u;
            // 0x220824: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x220828u;
        goto label_220828;
    }
    ctx->pc = 0x220820u;
    {
        const bool branch_taken_0x220820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220820u;
            // 0x220824: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220820) {
            ctx->pc = 0x220854u;
            goto label_220854;
        }
    }
    ctx->pc = 0x220828u;
label_220828:
    // 0x220828: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x220828u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22082c:
    // 0x22082c: 0x8dedc9e8  lw          $t5, -0x3618($t7)
    ctx->pc = 0x22082cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
label_220830:
    // 0x220830: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220834:
    // 0x220834: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220838:
    // 0x220838: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x220838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
label_22083c:
    // 0x22083c: 0xadae000c  sw          $t6, 0xC($t5)
    ctx->pc = 0x22083cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 14));
label_220840:
    // 0x220840: 0x24e72568  addiu       $a3, $a3, 0x2568
    ctx->pc = 0x220840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9576));
label_220844:
    // 0x220844: 0xada0001c  sw          $zero, 0x1C($t5)
    ctx->pc = 0x220844u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 0));
label_220848:
    // 0x220848: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x220848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22084c:
    // 0x22084c: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
label_220850:
    if (ctx->pc == 0x220850u) {
        ctx->pc = 0x220850u;
            // 0x220850: 0x240501c5  addiu       $a1, $zero, 0x1C5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
        ctx->pc = 0x220854u;
        goto label_220854;
    }
    ctx->pc = 0x22084Cu;
    {
        const bool branch_taken_0x22084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22084Cu;
            // 0x220850: 0x240501c5  addiu       $a1, $zero, 0x1C5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22084c) {
            ctx->pc = 0x2205D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2205d0;
        }
    }
    ctx->pc = 0x220854u;
label_220854:
    // 0x220854: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220858:
    // 0x220858: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220858u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_22085c:
    // 0x22085c: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x22085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
label_220860:
    // 0x220860: 0x24e72590  addiu       $a3, $a3, 0x2590
    ctx->pc = 0x220860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9616));
label_220864:
    // 0x220864: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x220864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220868:
    // 0x220868: 0x1000ff59  b           . + 4 + (-0xA7 << 2)
label_22086c:
    if (ctx->pc == 0x22086Cu) {
        ctx->pc = 0x22086Cu;
            // 0x22086c: 0x240501c8  addiu       $a1, $zero, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
        ctx->pc = 0x220870u;
        goto label_220870;
    }
    ctx->pc = 0x220868u;
    {
        const bool branch_taken_0x220868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22086Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220868u;
            // 0x22086c: 0x240501c8  addiu       $a1, $zero, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220868) {
            ctx->pc = 0x2205D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2205d0;
        }
    }
    ctx->pc = 0x220870u;
label_220870:
    // 0x220870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x220870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_220874:
    // 0x220874: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_220878:
    // 0x220878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22087c:
    // 0x22087c: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x22087cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
label_220880:
    // 0x220880: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x220880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_220884:
    // 0x220884: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x220884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_220888:
    // 0x220888: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x220888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22088c:
    // 0x22088c: 0x8e2fca1c  lw          $t7, -0x35E4($s1)
    ctx->pc = 0x22088cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953500)));
label_220890:
    // 0x220890: 0x11e0002b  beqz        $t7, . + 4 + (0x2B << 2)
label_220894:
    if (ctx->pc == 0x220894u) {
        ctx->pc = 0x220894u;
            // 0x220894: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220898u;
        goto label_220898;
    }
    ctx->pc = 0x220890u;
    {
        const bool branch_taken_0x220890 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220890u;
            // 0x220894: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220890) {
            ctx->pc = 0x220940u;
            goto label_220940;
        }
    }
    ctx->pc = 0x220898u;
label_220898:
    // 0x220898: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x220898u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
label_22089c:
    // 0x22089c: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x22089cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2208a0:
    // 0x2208a0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2208a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_2208a4:
    // 0x2208a4: 0x25f325e8  addiu       $s3, $t7, 0x25E8
    ctx->pc = 0x2208a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), 9704));
label_2208a8:
    // 0x2208a8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2208a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_2208ac:
    // 0x2208ac: 0x240501e3  addiu       $a1, $zero, 0x1E3
    ctx->pc = 0x2208acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 483));
label_2208b0:
    // 0x2208b0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2208b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2208b4:
    // 0x2208b4: 0x24e72510  addiu       $a3, $a3, 0x2510
    ctx->pc = 0x2208b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9488));
label_2208b8:
    // 0x2208b8: 0xc0897d6  jal         func_225F58
label_2208bc:
    if (ctx->pc == 0x2208BCu) {
        ctx->pc = 0x2208BCu;
            // 0x2208bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2208C0u;
        goto label_2208c0;
    }
    ctx->pc = 0x2208B8u;
    SET_GPR_U32(ctx, 31, 0x2208C0u);
    ctx->pc = 0x2208BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2208B8u;
            // 0x2208bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208C0u; }
        if (ctx->pc != 0x2208C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208C0u; }
        if (ctx->pc != 0x2208C0u) { return; }
    }
    ctx->pc = 0x2208C0u;
label_2208c0:
    // 0x2208c0: 0x8e22ca1c  lw          $v0, -0x35E4($s1)
    ctx->pc = 0x2208c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953500)));
label_2208c4:
    // 0x2208c4: 0x40f809  jalr        $v0
label_2208c8:
    if (ctx->pc == 0x2208C8u) {
        ctx->pc = 0x2208CCu;
        goto label_2208cc;
    }
    ctx->pc = 0x2208C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2208CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2208CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2208CCu; }
            if (ctx->pc != 0x2208CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2208CCu;
label_2208cc:
    // 0x2208cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2208ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2208d0:
    // 0x2208d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2208d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2208d4:
    // 0x2208d4: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_2208d8:
    if (ctx->pc == 0x2208D8u) {
        ctx->pc = 0x2208D8u;
            // 0x2208d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2208DCu;
        goto label_2208dc;
    }
    ctx->pc = 0x2208D4u;
    {
        const bool branch_taken_0x2208d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2208D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2208D4u;
            // 0x2208d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208d4) {
            ctx->pc = 0x22090Cu;
            goto label_22090c;
        }
    }
    ctx->pc = 0x2208DCu;
label_2208dc:
    // 0x2208dc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2208dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_2208e0:
    // 0x2208e0: 0xc08867a  jal         func_2219E8
label_2208e4:
    if (ctx->pc == 0x2208E4u) {
        ctx->pc = 0x2208E4u;
            // 0x2208e4: 0x8de4c9e8  lw          $a0, -0x3618($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
        ctx->pc = 0x2208E8u;
        goto label_2208e8;
    }
    ctx->pc = 0x2208E0u;
    SET_GPR_U32(ctx, 31, 0x2208E8u);
    ctx->pc = 0x2208E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2208E0u;
            // 0x2208e4: 0x8de4c9e8  lw          $a0, -0x3618($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208E8u; }
        if (ctx->pc != 0x2208E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2208E8u; }
        if (ctx->pc != 0x2208E8u) { return; }
    }
    ctx->pc = 0x2208E8u;
label_2208e8:
    // 0x2208e8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2208e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2208ec:
    // 0x2208ec: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x2208ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2208f0:
    // 0x2208f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2208f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2208f4:
    // 0x2208f4: 0x25082528  addiu       $t0, $t0, 0x2528
    ctx->pc = 0x2208f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9512));
label_2208f8:
    // 0x2208f8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2208f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2208fc:
    // 0x2208fc: 0x240501e7  addiu       $a1, $zero, 0x1E7
    ctx->pc = 0x2208fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 487));
label_220900:
    // 0x220900: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x220900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_220904:
    // 0x220904: 0xc089794  jal         func_225E50
label_220908:
    if (ctx->pc == 0x220908u) {
        ctx->pc = 0x220908u;
            // 0x220908: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->pc = 0x22090Cu;
        goto label_22090c;
    }
    ctx->pc = 0x220904u;
    SET_GPR_U32(ctx, 31, 0x22090Cu);
    ctx->pc = 0x220908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220904u;
            // 0x220908: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22090Cu; }
        if (ctx->pc != 0x22090Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22090Cu; }
        if (ctx->pc != 0x22090Cu) { return; }
    }
    ctx->pc = 0x22090Cu;
label_22090c:
    // 0x22090c: 0xae20ca1c  sw          $zero, -0x35E4($s1)
    ctx->pc = 0x22090cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953500), GPR_U32(ctx, 0));
label_220910:
    // 0x220910: 0xc087f92  jal         func_21FE48
label_220914:
    if (ctx->pc == 0x220914u) {
        ctx->pc = 0x220918u;
        goto label_220918;
    }
    ctx->pc = 0x220910u;
    SET_GPR_U32(ctx, 31, 0x220918u);
    ctx->pc = 0x21FE48u;
    if (runtime->hasFunction(0x21FE48u)) {
        auto targetFn = runtime->lookupFunction(0x21FE48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220918u; }
        if (ctx->pc != 0x220918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FE48_0x21fe48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220918u; }
        if (ctx->pc != 0x220918u) { return; }
    }
    ctx->pc = 0x220918u;
label_220918:
    // 0x220918: 0xc087fdc  jal         func_21FF70
label_22091c:
    if (ctx->pc == 0x22091Cu) {
        ctx->pc = 0x220920u;
        goto label_220920;
    }
    ctx->pc = 0x220918u;
    SET_GPR_U32(ctx, 31, 0x220920u);
    ctx->pc = 0x21FF70u;
    if (runtime->hasFunction(0x21FF70u)) {
        auto targetFn = runtime->lookupFunction(0x21FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220920u; }
        if (ctx->pc != 0x220920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FF70_0x21ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220920u; }
        if (ctx->pc != 0x220920u) { return; }
    }
    ctx->pc = 0x220920u;
label_220920:
    // 0x220920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_220924:
    // 0x220924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220928:
    // 0x220928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22092c:
    // 0x22092c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22092cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_220930:
    // 0x220930: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x220930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_220934:
    // 0x220934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x220934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_220938:
    // 0x220938: 0x3e00008  jr          $ra
label_22093c:
    if (ctx->pc == 0x22093Cu) {
        ctx->pc = 0x22093Cu;
            // 0x22093c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x220940u;
        goto label_220940;
    }
    ctx->pc = 0x220938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22093Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220938u;
            // 0x22093c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220940u;
label_220940:
    // 0x220940: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x220940u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_220944:
    // 0x220944: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x220944u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_220948:
    // 0x220948: 0x8dedc9e8  lw          $t5, -0x3618($t7)
    ctx->pc = 0x220948u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
label_22094c:
    // 0x22094c: 0xadae000c  sw          $t6, 0xC($t5)
    ctx->pc = 0x22094cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 14));
label_220950:
    // 0x220950: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_220954:
    if (ctx->pc == 0x220954u) {
        ctx->pc = 0x220954u;
            // 0x220954: 0xada0001c  sw          $zero, 0x1C($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x220958u;
        goto label_220958;
    }
    ctx->pc = 0x220950u;
    {
        const bool branch_taken_0x220950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220950u;
            // 0x220954: 0xada0001c  sw          $zero, 0x1C($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220950) {
            ctx->pc = 0x220910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220910;
        }
    }
    ctx->pc = 0x220958u;
label_220958:
    // 0x220958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22095c:
    // 0x22095c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_220960:
    // 0x220960: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x220960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_220964:
    // 0x220964: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_220968:
    // 0x220968: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22096c:
    // 0x22096c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22096cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_220970:
    // 0x220970: 0xc087fa0  jal         func_21FE80
label_220974:
    if (ctx->pc == 0x220974u) {
        ctx->pc = 0x220974u;
            // 0x220974: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x220978u;
        goto label_220978;
    }
    ctx->pc = 0x220970u;
    SET_GPR_U32(ctx, 31, 0x220978u);
    ctx->pc = 0x220974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220970u;
            // 0x220974: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (runtime->hasFunction(0x21FE80u)) {
        auto targetFn = runtime->lookupFunction(0x21FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220978u; }
        if (ctx->pc != 0x220978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FE80_0x21fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220978u; }
        if (ctx->pc != 0x220978u) { return; }
    }
    ctx->pc = 0x220978u;
label_220978:
    // 0x220978: 0x8e4fca1c  lw          $t7, -0x35E4($s2)
    ctx->pc = 0x220978u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953500)));
label_22097c:
    // 0x22097c: 0x15e00038  bnez        $t7, . + 4 + (0x38 << 2)
label_220980:
    if (ctx->pc == 0x220980u) {
        ctx->pc = 0x220980u;
            // 0x220980: 0x240e0002  addiu       $t6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x220984u;
        goto label_220984;
    }
    ctx->pc = 0x22097Cu;
    {
        const bool branch_taken_0x22097c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x220980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22097Cu;
            // 0x220980: 0x240e0002  addiu       $t6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22097c) {
            ctx->pc = 0x220A60u;
            goto label_220a60;
        }
    }
    ctx->pc = 0x220984u;
label_220984:
    // 0x220984: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x220984u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220988:
    // 0x220988: 0x8ded130c  lw          $t5, 0x130C($t7)
    ctx->pc = 0x220988u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4876)));
label_22098c:
    // 0x22098c: 0x11ae0051  beq         $t5, $t6, . + 4 + (0x51 << 2)
label_220990:
    if (ctx->pc == 0x220990u) {
        ctx->pc = 0x220990u;
            // 0x220990: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x220994u;
        goto label_220994;
    }
    ctx->pc = 0x22098Cu;
    {
        const bool branch_taken_0x22098c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        ctx->pc = 0x220990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22098Cu;
            // 0x220990: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22098c) {
            ctx->pc = 0x220AD4u;
            goto label_220ad4;
        }
    }
    ctx->pc = 0x220994u;
label_220994:
    // 0x220994: 0x11af0018  beq         $t5, $t7, . + 4 + (0x18 << 2)
label_220998:
    if (ctx->pc == 0x220998u) {
        ctx->pc = 0x220998u;
            // 0x220998: 0x3c0e003a  lui         $t6, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x22099Cu;
        goto label_22099c;
    }
    ctx->pc = 0x220994u;
    {
        const bool branch_taken_0x220994 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x220998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220994u;
            // 0x220998: 0x3c0e003a  lui         $t6, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220994) {
            ctx->pc = 0x2209F8u;
            goto label_2209f8;
        }
    }
    ctx->pc = 0x22099Cu;
label_22099c:
    // 0x22099c: 0xc087fac  jal         func_21FEB0
label_2209a0:
    if (ctx->pc == 0x2209A0u) {
        ctx->pc = 0x2209A4u;
        goto label_2209a4;
    }
    ctx->pc = 0x22099Cu;
    SET_GPR_U32(ctx, 31, 0x2209A4u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209A4u; }
        if (ctx->pc != 0x2209A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209A4u; }
        if (ctx->pc != 0x2209A4u) { return; }
    }
    ctx->pc = 0x2209A4u;
label_2209a4:
    // 0x2209a4: 0xc0972fa  jal         func_25CBE8
label_2209a8:
    if (ctx->pc == 0x2209A8u) {
        ctx->pc = 0x2209ACu;
        goto label_2209ac;
    }
    ctx->pc = 0x2209A4u;
    SET_GPR_U32(ctx, 31, 0x2209ACu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209ACu; }
        if (ctx->pc != 0x2209ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209ACu; }
        if (ctx->pc != 0x2209ACu) { return; }
    }
    ctx->pc = 0x2209ACu;
label_2209ac:
    // 0x2209ac: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2209acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2209b0:
    // 0x2209b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2209b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2209b4:
    // 0x2209b4: 0xc08867a  jal         func_2219E8
label_2209b8:
    if (ctx->pc == 0x2209B8u) {
        ctx->pc = 0x2209B8u;
            // 0x2209b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2209BCu;
        goto label_2209bc;
    }
    ctx->pc = 0x2209B4u;
    SET_GPR_U32(ctx, 31, 0x2209BCu);
    ctx->pc = 0x2209B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2209B4u;
            // 0x2209b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209BCu; }
        if (ctx->pc != 0x2209BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209BCu; }
        if (ctx->pc != 0x2209BCu) { return; }
    }
    ctx->pc = 0x2209BCu;
label_2209bc:
    // 0x2209bc: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x2209bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2209c0:
    // 0x2209c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2209c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2209c4:
    // 0x2209c4: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2209c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2209c8:
    // 0x2209c8: 0x248425f8  addiu       $a0, $a0, 0x25F8
    ctx->pc = 0x2209c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9720));
label_2209cc:
    // 0x2209cc: 0x8de9130c  lw          $t1, 0x130C($t7)
    ctx->pc = 0x2209ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4876)));
label_2209d0:
    // 0x2209d0: 0x25082608  addiu       $t0, $t0, 0x2608
    ctx->pc = 0x2209d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9736));
label_2209d4:
    // 0x2209d4: 0x2405023a  addiu       $a1, $zero, 0x23A
    ctx->pc = 0x2209d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
label_2209d8:
    // 0x2209d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2209d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2209dc:
    // 0x2209dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2209dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2209e0:
    // 0x2209e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2209e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2209e4:
    // 0x2209e4: 0x2407d8e6  addiu       $a3, $zero, -0x271A
    ctx->pc = 0x2209e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
label_2209e8:
    // 0x2209e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2209e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2209ec:
    // 0x2209ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2209ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2209f0:
    // 0x2209f0: 0x8089794  j           func_225E50
label_2209f4:
    if (ctx->pc == 0x2209F4u) {
        ctx->pc = 0x2209F4u;
            // 0x2209f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2209F8u;
        goto label_2209f8;
    }
    ctx->pc = 0x2209F0u;
    ctx->pc = 0x2209F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2209F0u;
            // 0x2209f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2209F8u;
label_2209f8:
    // 0x2209f8: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x2209f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
label_2209fc:
    // 0x2209fc: 0x8dc4ca00  lw          $a0, -0x3600($t6)
    ctx->pc = 0x2209fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294953472)));
label_220a00:
    // 0x220a00: 0x25ef2640  addiu       $t7, $t7, 0x2640
    ctx->pc = 0x220a00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9792));
label_220a04:
    // 0x220a04: 0xae0f0010  sw          $t7, 0x10($s0)
    ctx->pc = 0x220a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 15));
label_220a08:
    // 0x220a08: 0xc0ba8e2  jal         func_2EA388
label_220a0c:
    if (ctx->pc == 0x220A0Cu) {
        ctx->pc = 0x220A0Cu;
            // 0x220a0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220A10u;
        goto label_220a10;
    }
    ctx->pc = 0x220A08u;
    SET_GPR_U32(ctx, 31, 0x220A10u);
    ctx->pc = 0x220A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A08u;
            // 0x220a0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA388u;
    if (runtime->hasFunction(0x2EA388u)) {
        auto targetFn = runtime->lookupFunction(0x2EA388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A10u; }
        if (ctx->pc != 0x220A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA388_0x2ea388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A10u; }
        if (ctx->pc != 0x220A10u) { return; }
    }
    ctx->pc = 0x220A10u;
label_220a10:
    // 0x220a10: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_220a14:
    if (ctx->pc == 0x220A14u) {
        ctx->pc = 0x220A14u;
            // 0x220a14: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220A18u;
        goto label_220a18;
    }
    ctx->pc = 0x220A10u;
    {
        const bool branch_taken_0x220a10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x220A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220A10u;
            // 0x220a14: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a10) {
            ctx->pc = 0x220A54u;
            goto label_220a54;
        }
    }
    ctx->pc = 0x220A18u;
label_220a18:
    // 0x220a18: 0xc087fac  jal         func_21FEB0
label_220a1c:
    if (ctx->pc == 0x220A1Cu) {
        ctx->pc = 0x220A20u;
        goto label_220a20;
    }
    ctx->pc = 0x220A18u;
    SET_GPR_U32(ctx, 31, 0x220A20u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A20u; }
        if (ctx->pc != 0x220A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A20u; }
        if (ctx->pc != 0x220A20u) { return; }
    }
    ctx->pc = 0x220A20u;
label_220a20:
    // 0x220a20: 0xc0972fa  jal         func_25CBE8
label_220a24:
    if (ctx->pc == 0x220A24u) {
        ctx->pc = 0x220A28u;
        goto label_220a28;
    }
    ctx->pc = 0x220A20u;
    SET_GPR_U32(ctx, 31, 0x220A28u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A28u; }
        if (ctx->pc != 0x220A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A28u; }
        if (ctx->pc != 0x220A28u) { return; }
    }
    ctx->pc = 0x220A28u;
label_220a28:
    // 0x220a28: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x220a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_220a2c:
    // 0x220a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_220a30:
    // 0x220a30: 0xc08867a  jal         func_2219E8
label_220a34:
    if (ctx->pc == 0x220A34u) {
        ctx->pc = 0x220A34u;
            // 0x220a34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x220A38u;
        goto label_220a38;
    }
    ctx->pc = 0x220A30u;
    SET_GPR_U32(ctx, 31, 0x220A38u);
    ctx->pc = 0x220A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A30u;
            // 0x220a34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A38u; }
        if (ctx->pc != 0x220A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A38u; }
        if (ctx->pc != 0x220A38u) { return; }
    }
    ctx->pc = 0x220A38u;
label_220a38:
    // 0x220a38: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220a3c:
    // 0x220a3c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x220a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_220a40:
    // 0x220a40: 0x248425f8  addiu       $a0, $a0, 0x25F8
    ctx->pc = 0x220a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9720));
label_220a44:
    // 0x220a44: 0x25082648  addiu       $t0, $t0, 0x2648
    ctx->pc = 0x220a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9800));
label_220a48:
    // 0x220a48: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x220a48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220a4c:
    // 0x220a4c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_220a50:
    if (ctx->pc == 0x220A50u) {
        ctx->pc = 0x220A50u;
            // 0x220a50: 0x24050231  addiu       $a1, $zero, 0x231 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
        ctx->pc = 0x220A54u;
        goto label_220a54;
    }
    ctx->pc = 0x220A4Cu;
    {
        const bool branch_taken_0x220a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220A4Cu;
            // 0x220a50: 0x24050231  addiu       $a1, $zero, 0x231 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a4c) {
            ctx->pc = 0x2209D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2209d8;
        }
    }
    ctx->pc = 0x220A54u;
label_220a54:
    // 0x220a54: 0x3c0f002f  lui         $t7, 0x2F
    ctx->pc = 0x220a54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)47 << 16));
label_220a58:
    // 0x220a58: 0x25efa460  addiu       $t7, $t7, -0x5BA0
    ctx->pc = 0x220a58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943840));
label_220a5c:
    // 0x220a5c: 0xae4fca1c  sw          $t7, -0x35E4($s2)
    ctx->pc = 0x220a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294953500), GPR_U32(ctx, 15));
label_220a60:
    // 0x220a60: 0xc0b9f9a  jal         func_2E7E68
label_220a64:
    if (ctx->pc == 0x220A64u) {
        ctx->pc = 0x220A64u;
            // 0x220a64: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x220A68u;
        goto label_220a68;
    }
    ctx->pc = 0x220A60u;
    SET_GPR_U32(ctx, 31, 0x220A68u);
    ctx->pc = 0x220A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A60u;
            // 0x220a64: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7E68u;
    if (runtime->hasFunction(0x2E7E68u)) {
        auto targetFn = runtime->lookupFunction(0x2E7E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A68u; }
        if (ctx->pc != 0x220A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7E68_0x2e7e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A68u; }
        if (ctx->pc != 0x220A68u) { return; }
    }
    ctx->pc = 0x220A68u;
label_220a68:
    // 0x220a68: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_220a6c:
    if (ctx->pc == 0x220A6Cu) {
        ctx->pc = 0x220A6Cu;
            // 0x220a6c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x220A70u;
        goto label_220a70;
    }
    ctx->pc = 0x220A68u;
    {
        const bool branch_taken_0x220a68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x220A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220A68u;
            // 0x220a6c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a68) {
            ctx->pc = 0x220A9Cu;
            goto label_220a9c;
        }
    }
    ctx->pc = 0x220A70u;
label_220a70:
    // 0x220a70: 0xc0880a2  jal         func_220288
label_220a74:
    if (ctx->pc == 0x220A74u) {
        ctx->pc = 0x220A74u;
            // 0x220a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220A78u;
        goto label_220a78;
    }
    ctx->pc = 0x220A70u;
    SET_GPR_U32(ctx, 31, 0x220A78u);
    ctx->pc = 0x220A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A70u;
            // 0x220a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220288u;
    goto label_220288;
    ctx->pc = 0x220A78u;
label_220a78:
    // 0x220a78: 0xc087fac  jal         func_21FEB0
label_220a7c:
    if (ctx->pc == 0x220A7Cu) {
        ctx->pc = 0x220A80u;
        goto label_220a80;
    }
    ctx->pc = 0x220A78u;
    SET_GPR_U32(ctx, 31, 0x220A80u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A80u; }
        if (ctx->pc != 0x220A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A80u; }
        if (ctx->pc != 0x220A80u) { return; }
    }
    ctx->pc = 0x220A80u;
label_220a80:
    // 0x220a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x220a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220a84:
    // 0x220a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_220a88:
    // 0x220a88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_220a8c:
    // 0x220a8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_220a90:
    // 0x220a90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_220a94:
    // 0x220a94: 0x3e00008  jr          $ra
label_220a98:
    if (ctx->pc == 0x220A98u) {
        ctx->pc = 0x220A98u;
            // 0x220a98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x220A9Cu;
        goto label_220a9c;
    }
    ctx->pc = 0x220A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220A94u;
            // 0x220a98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220A9Cu;
label_220a9c:
    // 0x220a9c: 0xc087fac  jal         func_21FEB0
label_220aa0:
    if (ctx->pc == 0x220AA0u) {
        ctx->pc = 0x220AA0u;
            // 0x220aa0: 0xae0f001c  sw          $t7, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 15));
        ctx->pc = 0x220AA4u;
        goto label_220aa4;
    }
    ctx->pc = 0x220A9Cu;
    SET_GPR_U32(ctx, 31, 0x220AA4u);
    ctx->pc = 0x220AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220A9Cu;
            // 0x220aa0: 0xae0f001c  sw          $t7, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AA4u; }
        if (ctx->pc != 0x220AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AA4u; }
        if (ctx->pc != 0x220AA4u) { return; }
    }
    ctx->pc = 0x220AA4u;
label_220aa4:
    // 0x220aa4: 0xc087fea  jal         func_21FFA8
label_220aa8:
    if (ctx->pc == 0x220AA8u) {
        ctx->pc = 0x220AACu;
        goto label_220aac;
    }
    ctx->pc = 0x220AA4u;
    SET_GPR_U32(ctx, 31, 0x220AACu);
    ctx->pc = 0x21FFA8u;
    if (runtime->hasFunction(0x21FFA8u)) {
        auto targetFn = runtime->lookupFunction(0x21FFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AACu; }
        if (ctx->pc != 0x220AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FFA8_0x21ffa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AACu; }
        if (ctx->pc != 0x220AACu) { return; }
    }
    ctx->pc = 0x220AACu;
label_220aac:
    // 0x220aac: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x220aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_220ab0:
    // 0x220ab0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220ab4:
    // 0x220ab4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220ab8:
    // 0x220ab8: 0x248425f8  addiu       $a0, $a0, 0x25F8
    ctx->pc = 0x220ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9720));
label_220abc:
    // 0x220abc: 0x24e72668  addiu       $a3, $a3, 0x2668
    ctx->pc = 0x220abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9832));
label_220ac0:
    // 0x220ac0: 0x2405024d  addiu       $a1, $zero, 0x24D
    ctx->pc = 0x220ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 589));
label_220ac4:
    // 0x220ac4: 0xc0897d6  jal         func_225F58
label_220ac8:
    if (ctx->pc == 0x220AC8u) {
        ctx->pc = 0x220AC8u;
            // 0x220ac8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x220ACCu;
        goto label_220acc;
    }
    ctx->pc = 0x220AC4u;
    SET_GPR_U32(ctx, 31, 0x220ACCu);
    ctx->pc = 0x220AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220AC4u;
            // 0x220ac8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220ACCu; }
        if (ctx->pc != 0x220ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220ACCu; }
        if (ctx->pc != 0x220ACCu) { return; }
    }
    ctx->pc = 0x220ACCu;
label_220acc:
    // 0x220acc: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_220ad0:
    if (ctx->pc == 0x220AD0u) {
        ctx->pc = 0x220AD0u;
            // 0x220ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x220AD4u;
        goto label_220ad4;
    }
    ctx->pc = 0x220ACCu;
    {
        const bool branch_taken_0x220acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220ACCu;
            // 0x220ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220acc) {
            ctx->pc = 0x220A84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220a84;
        }
    }
    ctx->pc = 0x220AD4u;
label_220ad4:
    // 0x220ad4: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x220ad4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
label_220ad8:
    // 0x220ad8: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x220ad8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
label_220adc:
    // 0x220adc: 0x8dc4ca00  lw          $a0, -0x3600($t6)
    ctx->pc = 0x220adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294953472)));
label_220ae0:
    // 0x220ae0: 0x25ef2680  addiu       $t7, $t7, 0x2680
    ctx->pc = 0x220ae0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9856));
label_220ae4:
    // 0x220ae4: 0xae0f0010  sw          $t7, 0x10($s0)
    ctx->pc = 0x220ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 15));
label_220ae8:
    // 0x220ae8: 0xc0ba2e2  jal         func_2E8B88
label_220aec:
    if (ctx->pc == 0x220AECu) {
        ctx->pc = 0x220AECu;
            // 0x220aec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220AF0u;
        goto label_220af0;
    }
    ctx->pc = 0x220AE8u;
    SET_GPR_U32(ctx, 31, 0x220AF0u);
    ctx->pc = 0x220AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220AE8u;
            // 0x220aec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8B88u;
    if (runtime->hasFunction(0x2E8B88u)) {
        auto targetFn = runtime->lookupFunction(0x2E8B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AF0u; }
        if (ctx->pc != 0x220AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8B88_0x2e8b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220AF0u; }
        if (ctx->pc != 0x220AF0u) { return; }
    }
    ctx->pc = 0x220AF0u;
label_220af0:
    // 0x220af0: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_220af4:
    if (ctx->pc == 0x220AF4u) {
        ctx->pc = 0x220AF4u;
            // 0x220af4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220AF8u;
        goto label_220af8;
    }
    ctx->pc = 0x220AF0u;
    {
        const bool branch_taken_0x220af0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x220AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220AF0u;
            // 0x220af4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220af0) {
            ctx->pc = 0x220B34u;
            goto label_220b34;
        }
    }
    ctx->pc = 0x220AF8u;
label_220af8:
    // 0x220af8: 0xc087fac  jal         func_21FEB0
label_220afc:
    if (ctx->pc == 0x220AFCu) {
        ctx->pc = 0x220B00u;
        goto label_220b00;
    }
    ctx->pc = 0x220AF8u;
    SET_GPR_U32(ctx, 31, 0x220B00u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B00u; }
        if (ctx->pc != 0x220B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B00u; }
        if (ctx->pc != 0x220B00u) { return; }
    }
    ctx->pc = 0x220B00u;
label_220b00:
    // 0x220b00: 0xc0972fa  jal         func_25CBE8
label_220b04:
    if (ctx->pc == 0x220B04u) {
        ctx->pc = 0x220B08u;
        goto label_220b08;
    }
    ctx->pc = 0x220B00u;
    SET_GPR_U32(ctx, 31, 0x220B08u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B08u; }
        if (ctx->pc != 0x220B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B08u; }
        if (ctx->pc != 0x220B08u) { return; }
    }
    ctx->pc = 0x220B08u;
label_220b08:
    // 0x220b08: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x220b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_220b0c:
    // 0x220b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_220b10:
    // 0x220b10: 0xc08867a  jal         func_2219E8
label_220b14:
    if (ctx->pc == 0x220B14u) {
        ctx->pc = 0x220B14u;
            // 0x220b14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x220B18u;
        goto label_220b18;
    }
    ctx->pc = 0x220B10u;
    SET_GPR_U32(ctx, 31, 0x220B18u);
    ctx->pc = 0x220B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220B10u;
            // 0x220b14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B18u; }
        if (ctx->pc != 0x220B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B18u; }
        if (ctx->pc != 0x220B18u) { return; }
    }
    ctx->pc = 0x220B18u;
label_220b18:
    // 0x220b18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220b1c:
    // 0x220b1c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x220b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_220b20:
    // 0x220b20: 0x248425f8  addiu       $a0, $a0, 0x25F8
    ctx->pc = 0x220b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9720));
label_220b24:
    // 0x220b24: 0x25082688  addiu       $t0, $t0, 0x2688
    ctx->pc = 0x220b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9864));
label_220b28:
    // 0x220b28: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x220b28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220b2c:
    // 0x220b2c: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
label_220b30:
    if (ctx->pc == 0x220B30u) {
        ctx->pc = 0x220B30u;
            // 0x220b30: 0x24050223  addiu       $a1, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->pc = 0x220B34u;
        goto label_220b34;
    }
    ctx->pc = 0x220B2Cu;
    {
        const bool branch_taken_0x220b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220B2Cu;
            // 0x220b30: 0x24050223  addiu       $a1, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b2c) {
            ctx->pc = 0x2209D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2209d8;
        }
    }
    ctx->pc = 0x220B34u;
label_220b34:
    // 0x220b34: 0x3c0f002f  lui         $t7, 0x2F
    ctx->pc = 0x220b34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)47 << 16));
label_220b38:
    // 0x220b38: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
label_220b3c:
    if (ctx->pc == 0x220B3Cu) {
        ctx->pc = 0x220B3Cu;
            // 0x220b3c: 0x25ef8c68  addiu       $t7, $t7, -0x7398 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294937704));
        ctx->pc = 0x220B40u;
        goto label_220b40;
    }
    ctx->pc = 0x220B38u;
    {
        const bool branch_taken_0x220b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220B38u;
            // 0x220b3c: 0x25ef8c68  addiu       $t7, $t7, -0x7398 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294937704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b38) {
            ctx->pc = 0x220A5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220a5c;
        }
    }
    ctx->pc = 0x220B40u;
label_220b40:
    // 0x220b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x220b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_220b44:
    // 0x220b44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x220b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_220b48:
    // 0x220b48: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x220b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_220b4c:
    // 0x220b4c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x220b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_220b50:
    // 0x220b50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_220b54:
    // 0x220b54: 0xc087fa0  jal         func_21FE80
label_220b58:
    if (ctx->pc == 0x220B58u) {
        ctx->pc = 0x220B58u;
            // 0x220b58: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x220B5Cu;
        goto label_220b5c;
    }
    ctx->pc = 0x220B54u;
    SET_GPR_U32(ctx, 31, 0x220B5Cu);
    ctx->pc = 0x220B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220B54u;
            // 0x220b58: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (runtime->hasFunction(0x21FE80u)) {
        auto targetFn = runtime->lookupFunction(0x21FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B5Cu; }
        if (ctx->pc != 0x220B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FE80_0x21fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B5Cu; }
        if (ctx->pc != 0x220B5Cu) { return; }
    }
    ctx->pc = 0x220B5Cu;
label_220b5c:
    // 0x220b5c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x220b5cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_220b60:
    // 0x220b60: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x220b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
label_220b64:
    // 0x220b64: 0x8de4ca18  lw          $a0, -0x35E8($t7)
    ctx->pc = 0x220b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953496)));
label_220b68:
    // 0x220b68: 0xc043334  jal         func_10CCD0
label_220b6c:
    if (ctx->pc == 0x220B6Cu) {
        ctx->pc = 0x220B6Cu;
            // 0x220b6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220B70u;
        goto label_220b70;
    }
    ctx->pc = 0x220B68u;
    SET_GPR_U32(ctx, 31, 0x220B70u);
    ctx->pc = 0x220B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220B68u;
            // 0x220b6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCD0u;
    if (runtime->hasFunction(0x10CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B70u; }
        if (ctx->pc != 0x220B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCD0_0x10ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B70u; }
        if (ctx->pc != 0x220B70u) { return; }
    }
    ctx->pc = 0x220B70u;
label_220b70:
    // 0x220b70: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220b70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220b74:
    // 0x220b74: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x220b74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_220b78:
    // 0x220b78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220b7c:
    // 0x220b7c: 0x24e726a8  addiu       $a3, $a3, 0x26A8
    ctx->pc = 0x220b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9896));
label_220b80:
    // 0x220b80: 0x248426b8  addiu       $a0, $a0, 0x26B8
    ctx->pc = 0x220b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9912));
label_220b84:
    // 0x220b84: 0x24050267  addiu       $a1, $zero, 0x267
    ctx->pc = 0x220b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 615));
label_220b88:
    // 0x220b88: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
label_220b8c:
    if (ctx->pc == 0x220B8Cu) {
        ctx->pc = 0x220B8Cu;
            // 0x220b8c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x220B90u;
        goto label_220b90;
    }
    ctx->pc = 0x220B88u;
    {
        const bool branch_taken_0x220b88 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x220B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220B88u;
            // 0x220b8c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b88) {
            ctx->pc = 0x220BA0u;
            goto label_220ba0;
        }
    }
    ctx->pc = 0x220B90u;
label_220b90:
    // 0x220b90: 0xc0897d6  jal         func_225F58
label_220b94:
    if (ctx->pc == 0x220B94u) {
        ctx->pc = 0x220B98u;
        goto label_220b98;
    }
    ctx->pc = 0x220B90u;
    SET_GPR_U32(ctx, 31, 0x220B98u);
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B98u; }
        if (ctx->pc != 0x220B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B98u; }
        if (ctx->pc != 0x220B98u) { return; }
    }
    ctx->pc = 0x220B98u;
label_220b98:
    // 0x220b98: 0xc087ff6  jal         func_21FFD8
label_220b9c:
    if (ctx->pc == 0x220B9Cu) {
        ctx->pc = 0x220BA0u;
        goto label_220ba0;
    }
    ctx->pc = 0x220B98u;
    SET_GPR_U32(ctx, 31, 0x220BA0u);
    ctx->pc = 0x21FFD8u;
    if (runtime->hasFunction(0x21FFD8u)) {
        auto targetFn = runtime->lookupFunction(0x21FFD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BA0u; }
        if (ctx->pc != 0x220BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FFD8_0x21ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BA0u; }
        if (ctx->pc != 0x220BA0u) { return; }
    }
    ctx->pc = 0x220BA0u;
label_220ba0:
    // 0x220ba0: 0xc087fea  jal         func_21FFA8
label_220ba4:
    if (ctx->pc == 0x220BA4u) {
        ctx->pc = 0x220BA8u;
        goto label_220ba8;
    }
    ctx->pc = 0x220BA0u;
    SET_GPR_U32(ctx, 31, 0x220BA8u);
    ctx->pc = 0x21FFA8u;
    if (runtime->hasFunction(0x21FFA8u)) {
        auto targetFn = runtime->lookupFunction(0x21FFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BA8u; }
        if (ctx->pc != 0x220BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FFA8_0x21ffa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BA8u; }
        if (ctx->pc != 0x220BA8u) { return; }
    }
    ctx->pc = 0x220BA8u;
label_220ba8:
    // 0x220ba8: 0xc0432d4  jal         func_10CB50
label_220bac:
    if (ctx->pc == 0x220BACu) {
        ctx->pc = 0x220BB0u;
        goto label_220bb0;
    }
    ctx->pc = 0x220BA8u;
    SET_GPR_U32(ctx, 31, 0x220BB0u);
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BB0u; }
        if (ctx->pc != 0x220BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BB0u; }
        if (ctx->pc != 0x220BB0u) { return; }
    }
    ctx->pc = 0x220BB0u;
label_220bb0:
    // 0x220bb0: 0xc097360  jal         func_25CD80
label_220bb4:
    if (ctx->pc == 0x220BB4u) {
        ctx->pc = 0x220BB4u;
            // 0x220bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220BB8u;
        goto label_220bb8;
    }
    ctx->pc = 0x220BB0u;
    SET_GPR_U32(ctx, 31, 0x220BB8u);
    ctx->pc = 0x220BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220BB0u;
            // 0x220bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CD80u;
    if (runtime->hasFunction(0x25CD80u)) {
        auto targetFn = runtime->lookupFunction(0x25CD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BB8u; }
        if (ctx->pc != 0x220BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD80_0x25cd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BB8u; }
        if (ctx->pc != 0x220BB8u) { return; }
    }
    ctx->pc = 0x220BB8u;
label_220bb8:
    // 0x220bb8: 0xc0b9fa2  jal         func_2E7E88
label_220bbc:
    if (ctx->pc == 0x220BBCu) {
        ctx->pc = 0x220BBCu;
            // 0x220bbc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x220BC0u;
        goto label_220bc0;
    }
    ctx->pc = 0x220BB8u;
    SET_GPR_U32(ctx, 31, 0x220BC0u);
    ctx->pc = 0x220BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220BB8u;
            // 0x220bbc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7E88u;
    if (runtime->hasFunction(0x2E7E88u)) {
        auto targetFn = runtime->lookupFunction(0x2E7E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BC0u; }
        if (ctx->pc != 0x220BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7E88_0x2e7e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BC0u; }
        if (ctx->pc != 0x220BC0u) { return; }
    }
    ctx->pc = 0x220BC0u;
label_220bc0:
    // 0x220bc0: 0x4410014  bgez        $v0, . + 4 + (0x14 << 2)
label_220bc4:
    if (ctx->pc == 0x220BC4u) {
        ctx->pc = 0x220BC4u;
            // 0x220bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220BC8u;
        goto label_220bc8;
    }
    ctx->pc = 0x220BC0u;
    {
        const bool branch_taken_0x220bc0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x220BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220BC0u;
            // 0x220bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220bc0) {
            ctx->pc = 0x220C14u;
            goto label_220c14;
        }
    }
    ctx->pc = 0x220BC8u;
label_220bc8:
    // 0x220bc8: 0xc0880a2  jal         func_220288
label_220bcc:
    if (ctx->pc == 0x220BCCu) {
        ctx->pc = 0x220BD0u;
        goto label_220bd0;
    }
    ctx->pc = 0x220BC8u;
    SET_GPR_U32(ctx, 31, 0x220BD0u);
    ctx->pc = 0x220288u;
    goto label_220288;
    ctx->pc = 0x220BD0u;
label_220bd0:
    // 0x220bd0: 0xc087fac  jal         func_21FEB0
label_220bd4:
    if (ctx->pc == 0x220BD4u) {
        ctx->pc = 0x220BD8u;
        goto label_220bd8;
    }
    ctx->pc = 0x220BD0u;
    SET_GPR_U32(ctx, 31, 0x220BD8u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BD8u; }
        if (ctx->pc != 0x220BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BD8u; }
        if (ctx->pc != 0x220BD8u) { return; }
    }
    ctx->pc = 0x220BD8u;
label_220bd8:
    // 0x220bd8: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x220bd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_220bdc:
    // 0x220bdc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x220bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_220be0:
    // 0x220be0: 0xae0f000c  sw          $t7, 0xC($s0)
    ctx->pc = 0x220be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 15));
label_220be4:
    // 0x220be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_220be8:
    // 0x220be8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x220be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_220bec:
    // 0x220bec: 0xc08867a  jal         func_2219E8
label_220bf0:
    if (ctx->pc == 0x220BF0u) {
        ctx->pc = 0x220BF0u;
            // 0x220bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220BF4u;
        goto label_220bf4;
    }
    ctx->pc = 0x220BECu;
    SET_GPR_U32(ctx, 31, 0x220BF4u);
    ctx->pc = 0x220BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220BECu;
            // 0x220bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BF4u; }
        if (ctx->pc != 0x220BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BF4u; }
        if (ctx->pc != 0x220BF4u) { return; }
    }
    ctx->pc = 0x220BF4u;
label_220bf4:
    // 0x220bf4: 0xc087ff6  jal         func_21FFD8
label_220bf8:
    if (ctx->pc == 0x220BF8u) {
        ctx->pc = 0x220BFCu;
        goto label_220bfc;
    }
    ctx->pc = 0x220BF4u;
    SET_GPR_U32(ctx, 31, 0x220BFCu);
    ctx->pc = 0x21FFD8u;
    if (runtime->hasFunction(0x21FFD8u)) {
        auto targetFn = runtime->lookupFunction(0x21FFD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BFCu; }
        if (ctx->pc != 0x220BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FFD8_0x21ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BFCu; }
        if (ctx->pc != 0x220BFCu) { return; }
    }
    ctx->pc = 0x220BFCu;
label_220bfc:
    // 0x220bfc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x220bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_220c00:
    // 0x220c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220c04:
    // 0x220c04: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x220c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_220c08:
    // 0x220c08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x220c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_220c0c:
    // 0x220c0c: 0x3e00008  jr          $ra
label_220c10:
    if (ctx->pc == 0x220C10u) {
        ctx->pc = 0x220C10u;
            // 0x220c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x220C14u;
        goto label_220c14;
    }
    ctx->pc = 0x220C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220C0Cu;
            // 0x220c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220C14u;
label_220c14:
    // 0x220c14: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x220c14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220c18:
    // 0x220c18: 0x91ee1320  lbu         $t6, 0x1320($t7)
    ctx->pc = 0x220c18u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 4896)));
label_220c1c:
    // 0x220c1c: 0x11d1000c  beq         $t6, $s1, . + 4 + (0xC << 2)
label_220c20:
    if (ctx->pc == 0x220C20u) {
        ctx->pc = 0x220C20u;
            // 0x220c20: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x220C24u;
        goto label_220c24;
    }
    ctx->pc = 0x220C1Cu;
    {
        const bool branch_taken_0x220c1c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 17));
        ctx->pc = 0x220C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220C1Cu;
            // 0x220c20: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c1c) {
            ctx->pc = 0x220C50u;
            goto label_220c50;
        }
    }
    ctx->pc = 0x220C24u;
label_220c24:
    // 0x220c24: 0x8deec9e8  lw          $t6, -0x3618($t7)
    ctx->pc = 0x220c24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953448)));
label_220c28:
    // 0x220c28: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x220c28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_220c2c:
    // 0x220c2c: 0x91af1325  lbu         $t7, 0x1325($t5)
    ctx->pc = 0x220c2cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4901)));
label_220c30:
    // 0x220c30: 0x11f10007  beq         $t7, $s1, . + 4 + (0x7 << 2)
label_220c34:
    if (ctx->pc == 0x220C34u) {
        ctx->pc = 0x220C34u;
            // 0x220c34: 0x240f000b  addiu       $t7, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x220C38u;
        goto label_220c38;
    }
    ctx->pc = 0x220C30u;
    {
        const bool branch_taken_0x220c30 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 17));
        ctx->pc = 0x220C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220C30u;
            // 0x220c34: 0x240f000b  addiu       $t7, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c30) {
            ctx->pc = 0x220C50u;
            goto label_220c50;
        }
    }
    ctx->pc = 0x220C38u;
label_220c38:
    // 0x220c38: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x220c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_220c3c:
    // 0x220c3c: 0xae0f000c  sw          $t7, 0xC($s0)
    ctx->pc = 0x220c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 15));
label_220c40:
    // 0x220c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_220c44:
    // 0x220c44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x220c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_220c48:
    // 0x220c48: 0xc08867a  jal         func_2219E8
label_220c4c:
    if (ctx->pc == 0x220C4Cu) {
        ctx->pc = 0x220C4Cu;
            // 0x220c4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220C50u;
        goto label_220c50;
    }
    ctx->pc = 0x220C48u;
    SET_GPR_U32(ctx, 31, 0x220C50u);
    ctx->pc = 0x220C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C48u;
            // 0x220c4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C50u; }
        if (ctx->pc != 0x220C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C50u; }
        if (ctx->pc != 0x220C50u) { return; }
    }
    ctx->pc = 0x220C50u;
label_220c50:
    // 0x220c50: 0xc087fac  jal         func_21FEB0
label_220c54:
    if (ctx->pc == 0x220C54u) {
        ctx->pc = 0x220C58u;
        goto label_220c58;
    }
    ctx->pc = 0x220C50u;
    SET_GPR_U32(ctx, 31, 0x220C58u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C58u; }
        if (ctx->pc != 0x220C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C58u; }
        if (ctx->pc != 0x220C58u) { return; }
    }
    ctx->pc = 0x220C58u;
label_220c58:
    // 0x220c58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220c5c:
    // 0x220c5c: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x220c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_220c60:
    // 0x220c60: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220c60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220c64:
    // 0x220c64: 0x248426b8  addiu       $a0, $a0, 0x26B8
    ctx->pc = 0x220c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9912));
label_220c68:
    // 0x220c68: 0x24e726c8  addiu       $a3, $a3, 0x26C8
    ctx->pc = 0x220c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9928));
label_220c6c:
    // 0x220c6c: 0x2405028c  addiu       $a1, $zero, 0x28C
    ctx->pc = 0x220c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 652));
label_220c70:
    // 0x220c70: 0xc0897d6  jal         func_225F58
label_220c74:
    if (ctx->pc == 0x220C74u) {
        ctx->pc = 0x220C74u;
            // 0x220c74: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x220C78u;
        goto label_220c78;
    }
    ctx->pc = 0x220C70u;
    SET_GPR_U32(ctx, 31, 0x220C78u);
    ctx->pc = 0x220C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C70u;
            // 0x220c74: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C78u; }
        if (ctx->pc != 0x220C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C78u; }
        if (ctx->pc != 0x220C78u) { return; }
    }
    ctx->pc = 0x220C78u;
label_220c78:
    // 0x220c78: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_220c7c:
    if (ctx->pc == 0x220C7Cu) {
        ctx->pc = 0x220C7Cu;
            // 0x220c7c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x220C80u;
        goto label_220c80;
    }
    ctx->pc = 0x220C78u;
    {
        const bool branch_taken_0x220c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220C78u;
            // 0x220c7c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c78) {
            ctx->pc = 0x220C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220c00;
        }
    }
    ctx->pc = 0x220C80u;
label_220c80:
    // 0x220c80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x220c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_220c84:
    // 0x220c84: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x220c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
label_220c88:
    // 0x220c88: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x220c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
label_220c8c:
    // 0x220c8c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x220c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_220c90:
    // 0x220c90: 0xc087fa0  jal         func_21FE80
label_220c94:
    if (ctx->pc == 0x220C94u) {
        ctx->pc = 0x220C94u;
            // 0x220c94: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220C98u;
        goto label_220c98;
    }
    ctx->pc = 0x220C90u;
    SET_GPR_U32(ctx, 31, 0x220C98u);
    ctx->pc = 0x220C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C90u;
            // 0x220c94: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (runtime->hasFunction(0x21FE80u)) {
        auto targetFn = runtime->lookupFunction(0x21FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C98u; }
        if (ctx->pc != 0x220C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FE80_0x21fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C98u; }
        if (ctx->pc != 0x220C98u) { return; }
    }
    ctx->pc = 0x220C98u;
label_220c98:
    // 0x220c98: 0x8e2e000c  lw          $t6, 0xC($s1)
    ctx->pc = 0x220c98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_220c9c:
    // 0x220c9c: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x220c9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_220ca0:
    // 0x220ca0: 0x15cf0042  bne         $t6, $t7, . + 4 + (0x42 << 2)
label_220ca4:
    if (ctx->pc == 0x220CA4u) {
        ctx->pc = 0x220CA4u;
            // 0x220ca4: 0x240f000a  addiu       $t7, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x220CA8u;
        goto label_220ca8;
    }
    ctx->pc = 0x220CA0u;
    {
        const bool branch_taken_0x220ca0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x220CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220CA0u;
            // 0x220ca4: 0x240f000a  addiu       $t7, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ca0) {
            ctx->pc = 0x220DACu;
            goto label_220dac;
        }
    }
    ctx->pc = 0x220CA8u;
label_220ca8:
    // 0x220ca8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x220ca8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_220cac:
    // 0x220cac: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x220cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_220cb0:
    // 0x220cb0: 0x0  nop
    ctx->pc = 0x220cb0u;
    // NOP
label_220cb4:
    // 0x220cb4: 0xc0b9fca  jal         func_2E7F28
label_220cb8:
    if (ctx->pc == 0x220CB8u) {
        ctx->pc = 0x220CB8u;
            // 0x220cb8: 0x248404c8  addiu       $a0, $a0, 0x4C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1224));
        ctx->pc = 0x220CBCu;
        goto label_220cbc;
    }
    ctx->pc = 0x220CB4u;
    SET_GPR_U32(ctx, 31, 0x220CBCu);
    ctx->pc = 0x220CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220CB4u;
            // 0x220cb8: 0x248404c8  addiu       $a0, $a0, 0x4C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F28u;
    if (runtime->hasFunction(0x2E7F28u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CBCu; }
        if (ctx->pc != 0x220CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F28_0x2e7f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CBCu; }
        if (ctx->pc != 0x220CBCu) { return; }
    }
    ctx->pc = 0x220CBCu;
label_220cbc:
    // 0x220cbc: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_220cc0:
    if (ctx->pc == 0x220CC0u) {
        ctx->pc = 0x220CC0u;
            // 0x220cc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220CC4u;
        goto label_220cc4;
    }
    ctx->pc = 0x220CBCu;
    {
        const bool branch_taken_0x220cbc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x220CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220CBCu;
            // 0x220cc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220cbc) {
            ctx->pc = 0x220D04u;
            goto label_220d04;
        }
    }
    ctx->pc = 0x220CC4u;
label_220cc4:
    // 0x220cc4: 0xc087fac  jal         func_21FEB0
label_220cc8:
    if (ctx->pc == 0x220CC8u) {
        ctx->pc = 0x220CCCu;
        goto label_220ccc;
    }
    ctx->pc = 0x220CC4u;
    SET_GPR_U32(ctx, 31, 0x220CCCu);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CCCu; }
        if (ctx->pc != 0x220CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CCCu; }
        if (ctx->pc != 0x220CCCu) { return; }
    }
    ctx->pc = 0x220CCCu;
label_220ccc:
    // 0x220ccc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220cd0:
    // 0x220cd0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x220cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_220cd4:
    // 0x220cd4: 0x248426e0  addiu       $a0, $a0, 0x26E0
    ctx->pc = 0x220cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
label_220cd8:
    // 0x220cd8: 0x250826f0  addiu       $t0, $t0, 0x26F0
    ctx->pc = 0x220cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9968));
label_220cdc:
    // 0x220cdc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x220cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_220ce0:
    // 0x220ce0: 0x240502aa  addiu       $a1, $zero, 0x2AA
    ctx->pc = 0x220ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 682));
label_220ce4:
    // 0x220ce4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220ce8:
    // 0x220ce8: 0xc089794  jal         func_225E50
label_220cec:
    if (ctx->pc == 0x220CECu) {
        ctx->pc = 0x220CECu;
            // 0x220cec: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->pc = 0x220CF0u;
        goto label_220cf0;
    }
    ctx->pc = 0x220CE8u;
    SET_GPR_U32(ctx, 31, 0x220CF0u);
    ctx->pc = 0x220CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220CE8u;
            // 0x220cec: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CF0u; }
        if (ctx->pc != 0x220CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220CF0u; }
        if (ctx->pc != 0x220CF0u) { return; }
    }
    ctx->pc = 0x220CF0u;
label_220cf0:
    // 0x220cf0: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x220cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_220cf4:
    // 0x220cf4: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x220cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_220cf8:
    // 0x220cf8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x220cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_220cfc:
    // 0x220cfc: 0x3e00008  jr          $ra
label_220d00:
    if (ctx->pc == 0x220D00u) {
        ctx->pc = 0x220D00u;
            // 0x220d00: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x220D04u;
        goto label_220d04;
    }
    ctx->pc = 0x220CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220CFCu;
            // 0x220d00: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220D04u;
label_220d04:
    // 0x220d04: 0xc0b965e  jal         func_2E5978
label_220d08:
    if (ctx->pc == 0x220D08u) {
        ctx->pc = 0x220D0Cu;
        goto label_220d0c;
    }
    ctx->pc = 0x220D04u;
    SET_GPR_U32(ctx, 31, 0x220D0Cu);
    ctx->pc = 0x2E5978u;
    if (runtime->hasFunction(0x2E5978u)) {
        auto targetFn = runtime->lookupFunction(0x2E5978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D0Cu; }
        if (ctx->pc != 0x220D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5978_0x2e5978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D0Cu; }
        if (ctx->pc != 0x220D0Cu) { return; }
    }
    ctx->pc = 0x220D0Cu;
label_220d0c:
    // 0x220d0c: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
label_220d10:
    if (ctx->pc == 0x220D10u) {
        ctx->pc = 0x220D10u;
            // 0x220d10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220D14u;
        goto label_220d14;
    }
    ctx->pc = 0x220D0Cu;
    {
        const bool branch_taken_0x220d0c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x220D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220D0Cu;
            // 0x220d10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d0c) {
            ctx->pc = 0x220D38u;
            goto label_220d38;
        }
    }
    ctx->pc = 0x220D14u;
label_220d14:
    // 0x220d14: 0xc087fac  jal         func_21FEB0
label_220d18:
    if (ctx->pc == 0x220D18u) {
        ctx->pc = 0x220D1Cu;
        goto label_220d1c;
    }
    ctx->pc = 0x220D14u;
    SET_GPR_U32(ctx, 31, 0x220D1Cu);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D1Cu; }
        if (ctx->pc != 0x220D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D1Cu; }
        if (ctx->pc != 0x220D1Cu) { return; }
    }
    ctx->pc = 0x220D1Cu;
label_220d1c:
    // 0x220d1c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220d20:
    // 0x220d20: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x220d20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_220d24:
    // 0x220d24: 0x248426e0  addiu       $a0, $a0, 0x26E0
    ctx->pc = 0x220d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
label_220d28:
    // 0x220d28: 0x25082718  addiu       $t0, $t0, 0x2718
    ctx->pc = 0x220d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10008));
label_220d2c:
    // 0x220d2c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x220d2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_220d30:
    // 0x220d30: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_220d34:
    if (ctx->pc == 0x220D34u) {
        ctx->pc = 0x220D34u;
            // 0x220d34: 0x240502b2  addiu       $a1, $zero, 0x2B2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 690));
        ctx->pc = 0x220D38u;
        goto label_220d38;
    }
    ctx->pc = 0x220D30u;
    {
        const bool branch_taken_0x220d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220D30u;
            // 0x220d34: 0x240502b2  addiu       $a1, $zero, 0x2B2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 690));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d30) {
            ctx->pc = 0x220CE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220ce4;
        }
    }
    ctx->pc = 0x220D38u;
label_220d38:
    // 0x220d38: 0xc097ebe  jal         func_25FAF8
label_220d3c:
    if (ctx->pc == 0x220D3Cu) {
        ctx->pc = 0x220D40u;
        goto label_220d40;
    }
    ctx->pc = 0x220D38u;
    SET_GPR_U32(ctx, 31, 0x220D40u);
    ctx->pc = 0x25FAF8u;
    if (runtime->hasFunction(0x25FAF8u)) {
        auto targetFn = runtime->lookupFunction(0x25FAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D40u; }
        if (ctx->pc != 0x220D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FAF8_0x25faf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D40u; }
        if (ctx->pc != 0x220D40u) { return; }
    }
    ctx->pc = 0x220D40u;
label_220d40:
    // 0x220d40: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
label_220d44:
    if (ctx->pc == 0x220D44u) {
        ctx->pc = 0x220D44u;
            // 0x220d44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220D48u;
        goto label_220d48;
    }
    ctx->pc = 0x220D40u;
    {
        const bool branch_taken_0x220d40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x220D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220D40u;
            // 0x220d44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d40) {
            ctx->pc = 0x220D6Cu;
            goto label_220d6c;
        }
    }
    ctx->pc = 0x220D48u;
label_220d48:
    // 0x220d48: 0xc087fac  jal         func_21FEB0
label_220d4c:
    if (ctx->pc == 0x220D4Cu) {
        ctx->pc = 0x220D50u;
        goto label_220d50;
    }
    ctx->pc = 0x220D48u;
    SET_GPR_U32(ctx, 31, 0x220D50u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D50u; }
        if (ctx->pc != 0x220D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D50u; }
        if (ctx->pc != 0x220D50u) { return; }
    }
    ctx->pc = 0x220D50u;
label_220d50:
    // 0x220d50: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220d54:
    // 0x220d54: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x220d54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_220d58:
    // 0x220d58: 0x248426e0  addiu       $a0, $a0, 0x26E0
    ctx->pc = 0x220d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
label_220d5c:
    // 0x220d5c: 0x25082730  addiu       $t0, $t0, 0x2730
    ctx->pc = 0x220d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10032));
label_220d60:
    // 0x220d60: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x220d60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_220d64:
    // 0x220d64: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_220d68:
    if (ctx->pc == 0x220D68u) {
        ctx->pc = 0x220D68u;
            // 0x220d68: 0x240502bc  addiu       $a1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->pc = 0x220D6Cu;
        goto label_220d6c;
    }
    ctx->pc = 0x220D64u;
    {
        const bool branch_taken_0x220d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220D64u;
            // 0x220d68: 0x240502bc  addiu       $a1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d64) {
            ctx->pc = 0x220CE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220ce4;
        }
    }
    ctx->pc = 0x220D6Cu;
label_220d6c:
    // 0x220d6c: 0xc087fac  jal         func_21FEB0
label_220d70:
    if (ctx->pc == 0x220D70u) {
        ctx->pc = 0x220D74u;
        goto label_220d74;
    }
    ctx->pc = 0x220D6Cu;
    SET_GPR_U32(ctx, 31, 0x220D74u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D74u; }
        if (ctx->pc != 0x220D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D74u; }
        if (ctx->pc != 0x220D74u) { return; }
    }
    ctx->pc = 0x220D74u;
label_220d74:
    // 0x220d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220d78:
    // 0x220d78: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x220d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_220d7c:
    // 0x220d7c: 0xc08867a  jal         func_2219E8
label_220d80:
    if (ctx->pc == 0x220D80u) {
        ctx->pc = 0x220D80u;
            // 0x220d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220D84u;
        goto label_220d84;
    }
    ctx->pc = 0x220D7Cu;
    SET_GPR_U32(ctx, 31, 0x220D84u);
    ctx->pc = 0x220D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D7Cu;
            // 0x220d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D84u; }
        if (ctx->pc != 0x220D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D84u; }
        if (ctx->pc != 0x220D84u) { return; }
    }
    ctx->pc = 0x220D84u;
label_220d84:
    // 0x220d84: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x220d84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_220d88:
    // 0x220d88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x220d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_220d8c:
    // 0x220d8c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220d90:
    // 0x220d90: 0x248426e0  addiu       $a0, $a0, 0x26E0
    ctx->pc = 0x220d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
label_220d94:
    // 0x220d94: 0x24e72748  addiu       $a3, $a3, 0x2748
    ctx->pc = 0x220d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10056));
label_220d98:
    // 0x220d98: 0x240502c4  addiu       $a1, $zero, 0x2C4
    ctx->pc = 0x220d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 708));
label_220d9c:
    // 0x220d9c: 0xc0897d6  jal         func_225F58
label_220da0:
    if (ctx->pc == 0x220DA0u) {
        ctx->pc = 0x220DA0u;
            // 0x220da0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x220DA4u;
        goto label_220da4;
    }
    ctx->pc = 0x220D9Cu;
    SET_GPR_U32(ctx, 31, 0x220DA4u);
    ctx->pc = 0x220DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D9Cu;
            // 0x220da0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DA4u; }
        if (ctx->pc != 0x220DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DA4u; }
        if (ctx->pc != 0x220DA4u) { return; }
    }
    ctx->pc = 0x220DA4u;
label_220da4:
    // 0x220da4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
label_220da8:
    if (ctx->pc == 0x220DA8u) {
        ctx->pc = 0x220DA8u;
            // 0x220da8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x220DACu;
        goto label_220dac;
    }
    ctx->pc = 0x220DA4u;
    {
        const bool branch_taken_0x220da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220DA4u;
            // 0x220da8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220da4) {
            ctx->pc = 0x220CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220cf0;
        }
    }
    ctx->pc = 0x220DACu;
label_220dac:
    // 0x220dac: 0x11cf002e  beq         $t6, $t7, . + 4 + (0x2E << 2)
label_220db0:
    if (ctx->pc == 0x220DB0u) {
        ctx->pc = 0x220DB0u;
            // 0x220db0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x220DB4u;
        goto label_220db4;
    }
    ctx->pc = 0x220DACu;
    {
        const bool branch_taken_0x220dac = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x220DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220DACu;
            // 0x220db0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220dac) {
            ctx->pc = 0x220E68u;
            goto label_220e68;
        }
    }
    ctx->pc = 0x220DB4u;
label_220db4:
    // 0x220db4: 0x55cf0019  bnel        $t6, $t7, . + 4 + (0x19 << 2)
label_220db8:
    if (ctx->pc == 0x220DB8u) {
        ctx->pc = 0x220DB8u;
            // 0x220db8: 0x8e2f001c  lw          $t7, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x220DBCu;
        goto label_220dbc;
    }
    ctx->pc = 0x220DB4u;
    {
        const bool branch_taken_0x220db4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x220db4) {
            ctx->pc = 0x220DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x220DB4u;
            // 0x220db8: 0x8e2f001c  lw          $t7, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x220E1Cu;
            goto label_220e1c;
        }
    }
    ctx->pc = 0x220DBCu;
label_220dbc:
    // 0x220dbc: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x220dbcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_220dc0:
    // 0x220dc0: 0x91af1320  lbu         $t7, 0x1320($t5)
    ctx->pc = 0x220dc0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4896)));
label_220dc4:
    // 0x220dc4: 0x55ee002c  bnel        $t7, $t6, . + 4 + (0x2C << 2)
label_220dc8:
    if (ctx->pc == 0x220DC8u) {
        ctx->pc = 0x220DC8u;
            // 0x220dc8: 0x91af1325  lbu         $t7, 0x1325($t5) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4901)));
        ctx->pc = 0x220DCCu;
        goto label_220dcc;
    }
    ctx->pc = 0x220DC4u;
    {
        const bool branch_taken_0x220dc4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        if (branch_taken_0x220dc4) {
            ctx->pc = 0x220DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x220DC4u;
            // 0x220dc8: 0x91af1325  lbu         $t7, 0x1325($t5) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4901)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x220E78u;
            goto label_220e78;
        }
    }
    ctx->pc = 0x220DCCu;
label_220dcc:
    // 0x220dcc: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x220dccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
label_220dd0:
    // 0x220dd0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x220dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_220dd4:
    // 0x220dd4: 0x2606a520  addiu       $a2, $s0, -0x5AE0
    ctx->pc = 0x220dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944032));
label_220dd8:
    // 0x220dd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x220dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220ddc:
    // 0x220ddc: 0xc0ba052  jal         func_2E8148
label_220de0:
    if (ctx->pc == 0x220DE0u) {
        ctx->pc = 0x220DE0u;
            // 0x220de0: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x220DE4u;
        goto label_220de4;
    }
    ctx->pc = 0x220DDCu;
    SET_GPR_U32(ctx, 31, 0x220DE4u);
    ctx->pc = 0x220DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220DDCu;
            // 0x220de0: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8148u;
    if (runtime->hasFunction(0x2E8148u)) {
        auto targetFn = runtime->lookupFunction(0x2E8148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DE4u; }
        if (ctx->pc != 0x220DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8148_0x2e8148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DE4u; }
        if (ctx->pc != 0x220DE4u) { return; }
    }
    ctx->pc = 0x220DE4u;
label_220de4:
    // 0x220de4: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x220de4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
label_220de8:
    // 0x220de8: 0x8e08a520  lw          $t0, -0x5AE0($s0)
    ctx->pc = 0x220de8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944032)));
label_220dec:
    // 0x220dec: 0x8dcfa530  lw          $t7, -0x5AD0($t6)
    ctx->pc = 0x220decu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294944048)));
label_220df0:
    // 0x220df0: 0x1e8782a  slt         $t7, $t7, $t0
    ctx->pc = 0x220df0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_220df4:
    // 0x220df4: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
label_220df8:
    if (ctx->pc == 0x220DF8u) {
        ctx->pc = 0x220DF8u;
            // 0x220df8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x220DFCu;
        goto label_220dfc;
    }
    ctx->pc = 0x220DF4u;
    {
        const bool branch_taken_0x220df4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220DF4u;
            // 0x220df8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220df4) {
            ctx->pc = 0x220E18u;
            goto label_220e18;
        }
    }
    ctx->pc = 0x220DFCu;
label_220dfc:
    // 0x220dfc: 0xadc8a530  sw          $t0, -0x5AD0($t6)
    ctx->pc = 0x220dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294944048), GPR_U32(ctx, 8));
label_220e00:
    // 0x220e00: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220e00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220e04:
    // 0x220e04: 0x248426e0  addiu       $a0, $a0, 0x26E0
    ctx->pc = 0x220e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
label_220e08:
    // 0x220e08: 0x24e72768  addiu       $a3, $a3, 0x2768
    ctx->pc = 0x220e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10088));
label_220e0c:
    // 0x220e0c: 0x240502d6  addiu       $a1, $zero, 0x2D6
    ctx->pc = 0x220e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 726));
label_220e10:
    // 0x220e10: 0xc0897d6  jal         func_225F58
label_220e14:
    if (ctx->pc == 0x220E14u) {
        ctx->pc = 0x220E14u;
            // 0x220e14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x220E18u;
        goto label_220e18;
    }
    ctx->pc = 0x220E10u;
    SET_GPR_U32(ctx, 31, 0x220E18u);
    ctx->pc = 0x220E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220E10u;
            // 0x220e14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E18u; }
        if (ctx->pc != 0x220E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E18u; }
        if (ctx->pc != 0x220E18u) { return; }
    }
    ctx->pc = 0x220E18u;
label_220e18:
    // 0x220e18: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x220e18u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_220e1c:
    // 0x220e1c: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
label_220e20:
    if (ctx->pc == 0x220E20u) {
        ctx->pc = 0x220E20u;
            // 0x220e20: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->pc = 0x220E24u;
        goto label_220e24;
    }
    ctx->pc = 0x220E1Cu;
    {
        const bool branch_taken_0x220e1c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E1Cu;
            // 0x220e20: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e1c) {
            ctx->pc = 0x220E68u;
            goto label_220e68;
        }
    }
    ctx->pc = 0x220E24u;
label_220e24:
    // 0x220e24: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x220e24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_220e28:
    // 0x220e28: 0xae2f001c  sw          $t7, 0x1C($s1)
    ctx->pc = 0x220e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 15));
label_220e2c:
    // 0x220e2c: 0x10f782a  slt         $t7, $t0, $t7
    ctx->pc = 0x220e2cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
label_220e30:
    // 0x220e30: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
label_220e34:
    if (ctx->pc == 0x220E34u) {
        ctx->pc = 0x220E34u;
            // 0x220e34: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x220E38u;
        goto label_220e38;
    }
    ctx->pc = 0x220E30u;
    {
        const bool branch_taken_0x220e30 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E30u;
            // 0x220e34: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e30) {
            ctx->pc = 0x220E68u;
            goto label_220e68;
        }
    }
    ctx->pc = 0x220E38u;
label_220e38:
    // 0x220e38: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220e38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220e3c:
    // 0x220e3c: 0x24e72780  addiu       $a3, $a3, 0x2780
    ctx->pc = 0x220e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10112));
label_220e40:
    // 0x220e40: 0x24050309  addiu       $a1, $zero, 0x309
    ctx->pc = 0x220e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
label_220e44:
    // 0x220e44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220e48:
    // 0x220e48: 0xc0897d6  jal         func_225F58
label_220e4c:
    if (ctx->pc == 0x220E4Cu) {
        ctx->pc = 0x220E4Cu;
            // 0x220e4c: 0x248426e0  addiu       $a0, $a0, 0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
        ctx->pc = 0x220E50u;
        goto label_220e50;
    }
    ctx->pc = 0x220E48u;
    SET_GPR_U32(ctx, 31, 0x220E50u);
    ctx->pc = 0x220E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220E48u;
            // 0x220e4c: 0x248426e0  addiu       $a0, $a0, 0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E50u; }
        if (ctx->pc != 0x220E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E50u; }
        if (ctx->pc != 0x220E50u) { return; }
    }
    ctx->pc = 0x220E50u;
label_220e50:
    // 0x220e50: 0xc0880a2  jal         func_220288
label_220e54:
    if (ctx->pc == 0x220E54u) {
        ctx->pc = 0x220E54u;
            // 0x220e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220E58u;
        goto label_220e58;
    }
    ctx->pc = 0x220E50u;
    SET_GPR_U32(ctx, 31, 0x220E58u);
    ctx->pc = 0x220E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220E50u;
            // 0x220e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220288u;
    goto label_220288;
    ctx->pc = 0x220E58u;
label_220e58:
    // 0x220e58: 0xc087fac  jal         func_21FEB0
label_220e5c:
    if (ctx->pc == 0x220E5Cu) {
        ctx->pc = 0x220E5Cu;
            // 0x220e5c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x220E60u;
        goto label_220e60;
    }
    ctx->pc = 0x220E58u;
    SET_GPR_U32(ctx, 31, 0x220E60u);
    ctx->pc = 0x220E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220E58u;
            // 0x220e5c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E60u; }
        if (ctx->pc != 0x220E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E60u; }
        if (ctx->pc != 0x220E60u) { return; }
    }
    ctx->pc = 0x220E60u;
label_220e60:
    // 0x220e60: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
label_220e64:
    if (ctx->pc == 0x220E64u) {
        ctx->pc = 0x220E64u;
            // 0x220e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x220E68u;
        goto label_220e68;
    }
    ctx->pc = 0x220E60u;
    {
        const bool branch_taken_0x220e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E60u;
            // 0x220e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e60) {
            ctx->pc = 0x220CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220cf0;
        }
    }
    ctx->pc = 0x220E68u;
label_220e68:
    // 0x220e68: 0xc087fac  jal         func_21FEB0
label_220e6c:
    if (ctx->pc == 0x220E6Cu) {
        ctx->pc = 0x220E70u;
        goto label_220e70;
    }
    ctx->pc = 0x220E68u;
    SET_GPR_U32(ctx, 31, 0x220E70u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E70u; }
        if (ctx->pc != 0x220E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E70u; }
        if (ctx->pc != 0x220E70u) { return; }
    }
    ctx->pc = 0x220E70u;
label_220e70:
    // 0x220e70: 0x1000ff9f  b           . + 4 + (-0x61 << 2)
label_220e74:
    if (ctx->pc == 0x220E74u) {
        ctx->pc = 0x220E74u;
            // 0x220e74: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x220E78u;
        goto label_220e78;
    }
    ctx->pc = 0x220E70u;
    {
        const bool branch_taken_0x220e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E70u;
            // 0x220e74: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e70) {
            ctx->pc = 0x220CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220cf0;
        }
    }
    ctx->pc = 0x220E78u;
label_220e78:
    // 0x220e78: 0x15ee0012  bne         $t7, $t6, . + 4 + (0x12 << 2)
label_220e7c:
    if (ctx->pc == 0x220E7Cu) {
        ctx->pc = 0x220E7Cu;
            // 0x220e7c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x220E80u;
        goto label_220e80;
    }
    ctx->pc = 0x220E78u;
    {
        const bool branch_taken_0x220e78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x220E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220E78u;
            // 0x220e7c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e78) {
            ctx->pc = 0x220EC4u;
            goto label_220ec4;
        }
    }
    ctx->pc = 0x220E80u;
label_220e80:
    // 0x220e80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x220e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220e84:
    // 0x220e84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x220e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_220e88:
    // 0x220e88: 0xc0ba052  jal         func_2E8148
label_220e8c:
    if (ctx->pc == 0x220E8Cu) {
        ctx->pc = 0x220E8Cu;
            // 0x220e8c: 0x24070088  addiu       $a3, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->pc = 0x220E90u;
        goto label_220e90;
    }
    ctx->pc = 0x220E88u;
    SET_GPR_U32(ctx, 31, 0x220E90u);
    ctx->pc = 0x220E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220E88u;
            // 0x220e8c: 0x24070088  addiu       $a3, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8148u;
    if (runtime->hasFunction(0x2E8148u)) {
        auto targetFn = runtime->lookupFunction(0x2E8148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E90u; }
        if (ctx->pc != 0x220E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8148_0x2e8148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E90u; }
        if (ctx->pc != 0x220E90u) { return; }
    }
    ctx->pc = 0x220E90u;
label_220e90:
    // 0x220e90: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x220e90u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
label_220e94:
    // 0x220e94: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x220e94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_220e98:
    // 0x220e98: 0x25cea540  addiu       $t6, $t6, -0x5AC0
    ctx->pc = 0x220e98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294944064));
label_220e9c:
    // 0x220e9c: 0x8dcf0004  lw          $t7, 0x4($t6)
    ctx->pc = 0x220e9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
label_220ea0:
    // 0x220ea0: 0x1e8782a  slt         $t7, $t7, $t0
    ctx->pc = 0x220ea0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_220ea4:
    // 0x220ea4: 0x11e0ffdc  beqz        $t7, . + 4 + (-0x24 << 2)
label_220ea8:
    if (ctx->pc == 0x220EA8u) {
        ctx->pc = 0x220EA8u;
            // 0x220ea8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x220EACu;
        goto label_220eac;
    }
    ctx->pc = 0x220EA4u;
    {
        const bool branch_taken_0x220ea4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220EA4u;
            // 0x220ea8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ea4) {
            ctx->pc = 0x220E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220e18;
        }
    }
    ctx->pc = 0x220EACu;
label_220eac:
    // 0x220eac: 0xadc80004  sw          $t0, 0x4($t6)
    ctx->pc = 0x220eacu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 8));
label_220eb0:
    // 0x220eb0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220eb4:
    // 0x220eb4: 0x248426e0  addiu       $a0, $a0, 0x26E0
    ctx->pc = 0x220eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
label_220eb8:
    // 0x220eb8: 0x24e727a0  addiu       $a3, $a3, 0x27A0
    ctx->pc = 0x220eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10144));
label_220ebc:
    // 0x220ebc: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
label_220ec0:
    if (ctx->pc == 0x220EC0u) {
        ctx->pc = 0x220EC0u;
            // 0x220ec0: 0x240502e7  addiu       $a1, $zero, 0x2E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 743));
        ctx->pc = 0x220EC4u;
        goto label_220ec4;
    }
    ctx->pc = 0x220EBCu;
    {
        const bool branch_taken_0x220ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220EBCu;
            // 0x220ec0: 0x240502e7  addiu       $a1, $zero, 0x2E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 743));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ebc) {
            ctx->pc = 0x220E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220e10;
        }
    }
    ctx->pc = 0x220EC4u;
label_220ec4:
    // 0x220ec4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x220ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_220ec8:
    // 0x220ec8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x220ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220ecc:
    // 0x220ecc: 0xc0ba052  jal         func_2E8148
label_220ed0:
    if (ctx->pc == 0x220ED0u) {
        ctx->pc = 0x220ED0u;
            // 0x220ed0: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x220ED4u;
        goto label_220ed4;
    }
    ctx->pc = 0x220ECCu;
    SET_GPR_U32(ctx, 31, 0x220ED4u);
    ctx->pc = 0x220ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220ECCu;
            // 0x220ed0: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8148u;
    if (runtime->hasFunction(0x2E8148u)) {
        auto targetFn = runtime->lookupFunction(0x2E8148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220ED4u; }
        if (ctx->pc != 0x220ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8148_0x2e8148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220ED4u; }
        if (ctx->pc != 0x220ED4u) { return; }
    }
    ctx->pc = 0x220ED4u;
label_220ed4:
    // 0x220ed4: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x220ed4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
label_220ed8:
    // 0x220ed8: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x220ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_220edc:
    // 0x220edc: 0x8dcfa5c8  lw          $t7, -0x5A38($t6)
    ctx->pc = 0x220edcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294944200)));
label_220ee0:
    // 0x220ee0: 0x1e8782a  slt         $t7, $t7, $t0
    ctx->pc = 0x220ee0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_220ee4:
    // 0x220ee4: 0x11e0ffcc  beqz        $t7, . + 4 + (-0x34 << 2)
label_220ee8:
    if (ctx->pc == 0x220EE8u) {
        ctx->pc = 0x220EE8u;
            // 0x220ee8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x220EECu;
        goto label_220eec;
    }
    ctx->pc = 0x220EE4u;
    {
        const bool branch_taken_0x220ee4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x220EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220EE4u;
            // 0x220ee8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ee4) {
            ctx->pc = 0x220E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220e18;
        }
    }
    ctx->pc = 0x220EECu;
label_220eec:
    // 0x220eec: 0xadc8a5c8  sw          $t0, -0x5A38($t6)
    ctx->pc = 0x220eecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294944200), GPR_U32(ctx, 8));
label_220ef0:
    // 0x220ef0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_220ef4:
    // 0x220ef4: 0x248426e0  addiu       $a0, $a0, 0x26E0
    ctx->pc = 0x220ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
label_220ef8:
    // 0x220ef8: 0x24e727b8  addiu       $a3, $a3, 0x27B8
    ctx->pc = 0x220ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10168));
label_220efc:
    // 0x220efc: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_220f00:
    if (ctx->pc == 0x220F00u) {
        ctx->pc = 0x220F00u;
            // 0x220f00: 0x24050302  addiu       $a1, $zero, 0x302 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 770));
        ctx->pc = 0x220F04u;
        goto label_220f04;
    }
    ctx->pc = 0x220EFCu;
    {
        const bool branch_taken_0x220efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220EFCu;
            // 0x220f00: 0x24050302  addiu       $a1, $zero, 0x302 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 770));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220efc) {
            ctx->pc = 0x220E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220e10;
        }
    }
    ctx->pc = 0x220F04u;
label_220f04:
    // 0x220f04: 0x0  nop
    ctx->pc = 0x220f04u;
    // NOP
    ctx->pc = 0x220f08u;
}
