#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00352210
// Address: 0x352210 - 0x352ee0
void sub_00352210_0x352210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352210_0x352210");
#endif

    switch (ctx->pc) {
        case 0x352210u: goto label_352210;
        case 0x352214u: goto label_352214;
        case 0x352218u: goto label_352218;
        case 0x35221cu: goto label_35221c;
        case 0x352220u: goto label_352220;
        case 0x352224u: goto label_352224;
        case 0x352228u: goto label_352228;
        case 0x35222cu: goto label_35222c;
        case 0x352230u: goto label_352230;
        case 0x352234u: goto label_352234;
        case 0x352238u: goto label_352238;
        case 0x35223cu: goto label_35223c;
        case 0x352240u: goto label_352240;
        case 0x352244u: goto label_352244;
        case 0x352248u: goto label_352248;
        case 0x35224cu: goto label_35224c;
        case 0x352250u: goto label_352250;
        case 0x352254u: goto label_352254;
        case 0x352258u: goto label_352258;
        case 0x35225cu: goto label_35225c;
        case 0x352260u: goto label_352260;
        case 0x352264u: goto label_352264;
        case 0x352268u: goto label_352268;
        case 0x35226cu: goto label_35226c;
        case 0x352270u: goto label_352270;
        case 0x352274u: goto label_352274;
        case 0x352278u: goto label_352278;
        case 0x35227cu: goto label_35227c;
        case 0x352280u: goto label_352280;
        case 0x352284u: goto label_352284;
        case 0x352288u: goto label_352288;
        case 0x35228cu: goto label_35228c;
        case 0x352290u: goto label_352290;
        case 0x352294u: goto label_352294;
        case 0x352298u: goto label_352298;
        case 0x35229cu: goto label_35229c;
        case 0x3522a0u: goto label_3522a0;
        case 0x3522a4u: goto label_3522a4;
        case 0x3522a8u: goto label_3522a8;
        case 0x3522acu: goto label_3522ac;
        case 0x3522b0u: goto label_3522b0;
        case 0x3522b4u: goto label_3522b4;
        case 0x3522b8u: goto label_3522b8;
        case 0x3522bcu: goto label_3522bc;
        case 0x3522c0u: goto label_3522c0;
        case 0x3522c4u: goto label_3522c4;
        case 0x3522c8u: goto label_3522c8;
        case 0x3522ccu: goto label_3522cc;
        case 0x3522d0u: goto label_3522d0;
        case 0x3522d4u: goto label_3522d4;
        case 0x3522d8u: goto label_3522d8;
        case 0x3522dcu: goto label_3522dc;
        case 0x3522e0u: goto label_3522e0;
        case 0x3522e4u: goto label_3522e4;
        case 0x3522e8u: goto label_3522e8;
        case 0x3522ecu: goto label_3522ec;
        case 0x3522f0u: goto label_3522f0;
        case 0x3522f4u: goto label_3522f4;
        case 0x3522f8u: goto label_3522f8;
        case 0x3522fcu: goto label_3522fc;
        case 0x352300u: goto label_352300;
        case 0x352304u: goto label_352304;
        case 0x352308u: goto label_352308;
        case 0x35230cu: goto label_35230c;
        case 0x352310u: goto label_352310;
        case 0x352314u: goto label_352314;
        case 0x352318u: goto label_352318;
        case 0x35231cu: goto label_35231c;
        case 0x352320u: goto label_352320;
        case 0x352324u: goto label_352324;
        case 0x352328u: goto label_352328;
        case 0x35232cu: goto label_35232c;
        case 0x352330u: goto label_352330;
        case 0x352334u: goto label_352334;
        case 0x352338u: goto label_352338;
        case 0x35233cu: goto label_35233c;
        case 0x352340u: goto label_352340;
        case 0x352344u: goto label_352344;
        case 0x352348u: goto label_352348;
        case 0x35234cu: goto label_35234c;
        case 0x352350u: goto label_352350;
        case 0x352354u: goto label_352354;
        case 0x352358u: goto label_352358;
        case 0x35235cu: goto label_35235c;
        case 0x352360u: goto label_352360;
        case 0x352364u: goto label_352364;
        case 0x352368u: goto label_352368;
        case 0x35236cu: goto label_35236c;
        case 0x352370u: goto label_352370;
        case 0x352374u: goto label_352374;
        case 0x352378u: goto label_352378;
        case 0x35237cu: goto label_35237c;
        case 0x352380u: goto label_352380;
        case 0x352384u: goto label_352384;
        case 0x352388u: goto label_352388;
        case 0x35238cu: goto label_35238c;
        case 0x352390u: goto label_352390;
        case 0x352394u: goto label_352394;
        case 0x352398u: goto label_352398;
        case 0x35239cu: goto label_35239c;
        case 0x3523a0u: goto label_3523a0;
        case 0x3523a4u: goto label_3523a4;
        case 0x3523a8u: goto label_3523a8;
        case 0x3523acu: goto label_3523ac;
        case 0x3523b0u: goto label_3523b0;
        case 0x3523b4u: goto label_3523b4;
        case 0x3523b8u: goto label_3523b8;
        case 0x3523bcu: goto label_3523bc;
        case 0x3523c0u: goto label_3523c0;
        case 0x3523c4u: goto label_3523c4;
        case 0x3523c8u: goto label_3523c8;
        case 0x3523ccu: goto label_3523cc;
        case 0x3523d0u: goto label_3523d0;
        case 0x3523d4u: goto label_3523d4;
        case 0x3523d8u: goto label_3523d8;
        case 0x3523dcu: goto label_3523dc;
        case 0x3523e0u: goto label_3523e0;
        case 0x3523e4u: goto label_3523e4;
        case 0x3523e8u: goto label_3523e8;
        case 0x3523ecu: goto label_3523ec;
        case 0x3523f0u: goto label_3523f0;
        case 0x3523f4u: goto label_3523f4;
        case 0x3523f8u: goto label_3523f8;
        case 0x3523fcu: goto label_3523fc;
        case 0x352400u: goto label_352400;
        case 0x352404u: goto label_352404;
        case 0x352408u: goto label_352408;
        case 0x35240cu: goto label_35240c;
        case 0x352410u: goto label_352410;
        case 0x352414u: goto label_352414;
        case 0x352418u: goto label_352418;
        case 0x35241cu: goto label_35241c;
        case 0x352420u: goto label_352420;
        case 0x352424u: goto label_352424;
        case 0x352428u: goto label_352428;
        case 0x35242cu: goto label_35242c;
        case 0x352430u: goto label_352430;
        case 0x352434u: goto label_352434;
        case 0x352438u: goto label_352438;
        case 0x35243cu: goto label_35243c;
        case 0x352440u: goto label_352440;
        case 0x352444u: goto label_352444;
        case 0x352448u: goto label_352448;
        case 0x35244cu: goto label_35244c;
        case 0x352450u: goto label_352450;
        case 0x352454u: goto label_352454;
        case 0x352458u: goto label_352458;
        case 0x35245cu: goto label_35245c;
        case 0x352460u: goto label_352460;
        case 0x352464u: goto label_352464;
        case 0x352468u: goto label_352468;
        case 0x35246cu: goto label_35246c;
        case 0x352470u: goto label_352470;
        case 0x352474u: goto label_352474;
        case 0x352478u: goto label_352478;
        case 0x35247cu: goto label_35247c;
        case 0x352480u: goto label_352480;
        case 0x352484u: goto label_352484;
        case 0x352488u: goto label_352488;
        case 0x35248cu: goto label_35248c;
        case 0x352490u: goto label_352490;
        case 0x352494u: goto label_352494;
        case 0x352498u: goto label_352498;
        case 0x35249cu: goto label_35249c;
        case 0x3524a0u: goto label_3524a0;
        case 0x3524a4u: goto label_3524a4;
        case 0x3524a8u: goto label_3524a8;
        case 0x3524acu: goto label_3524ac;
        case 0x3524b0u: goto label_3524b0;
        case 0x3524b4u: goto label_3524b4;
        case 0x3524b8u: goto label_3524b8;
        case 0x3524bcu: goto label_3524bc;
        case 0x3524c0u: goto label_3524c0;
        case 0x3524c4u: goto label_3524c4;
        case 0x3524c8u: goto label_3524c8;
        case 0x3524ccu: goto label_3524cc;
        case 0x3524d0u: goto label_3524d0;
        case 0x3524d4u: goto label_3524d4;
        case 0x3524d8u: goto label_3524d8;
        case 0x3524dcu: goto label_3524dc;
        case 0x3524e0u: goto label_3524e0;
        case 0x3524e4u: goto label_3524e4;
        case 0x3524e8u: goto label_3524e8;
        case 0x3524ecu: goto label_3524ec;
        case 0x3524f0u: goto label_3524f0;
        case 0x3524f4u: goto label_3524f4;
        case 0x3524f8u: goto label_3524f8;
        case 0x3524fcu: goto label_3524fc;
        case 0x352500u: goto label_352500;
        case 0x352504u: goto label_352504;
        case 0x352508u: goto label_352508;
        case 0x35250cu: goto label_35250c;
        case 0x352510u: goto label_352510;
        case 0x352514u: goto label_352514;
        case 0x352518u: goto label_352518;
        case 0x35251cu: goto label_35251c;
        case 0x352520u: goto label_352520;
        case 0x352524u: goto label_352524;
        case 0x352528u: goto label_352528;
        case 0x35252cu: goto label_35252c;
        case 0x352530u: goto label_352530;
        case 0x352534u: goto label_352534;
        case 0x352538u: goto label_352538;
        case 0x35253cu: goto label_35253c;
        case 0x352540u: goto label_352540;
        case 0x352544u: goto label_352544;
        case 0x352548u: goto label_352548;
        case 0x35254cu: goto label_35254c;
        case 0x352550u: goto label_352550;
        case 0x352554u: goto label_352554;
        case 0x352558u: goto label_352558;
        case 0x35255cu: goto label_35255c;
        case 0x352560u: goto label_352560;
        case 0x352564u: goto label_352564;
        case 0x352568u: goto label_352568;
        case 0x35256cu: goto label_35256c;
        case 0x352570u: goto label_352570;
        case 0x352574u: goto label_352574;
        case 0x352578u: goto label_352578;
        case 0x35257cu: goto label_35257c;
        case 0x352580u: goto label_352580;
        case 0x352584u: goto label_352584;
        case 0x352588u: goto label_352588;
        case 0x35258cu: goto label_35258c;
        case 0x352590u: goto label_352590;
        case 0x352594u: goto label_352594;
        case 0x352598u: goto label_352598;
        case 0x35259cu: goto label_35259c;
        case 0x3525a0u: goto label_3525a0;
        case 0x3525a4u: goto label_3525a4;
        case 0x3525a8u: goto label_3525a8;
        case 0x3525acu: goto label_3525ac;
        case 0x3525b0u: goto label_3525b0;
        case 0x3525b4u: goto label_3525b4;
        case 0x3525b8u: goto label_3525b8;
        case 0x3525bcu: goto label_3525bc;
        case 0x3525c0u: goto label_3525c0;
        case 0x3525c4u: goto label_3525c4;
        case 0x3525c8u: goto label_3525c8;
        case 0x3525ccu: goto label_3525cc;
        case 0x3525d0u: goto label_3525d0;
        case 0x3525d4u: goto label_3525d4;
        case 0x3525d8u: goto label_3525d8;
        case 0x3525dcu: goto label_3525dc;
        case 0x3525e0u: goto label_3525e0;
        case 0x3525e4u: goto label_3525e4;
        case 0x3525e8u: goto label_3525e8;
        case 0x3525ecu: goto label_3525ec;
        case 0x3525f0u: goto label_3525f0;
        case 0x3525f4u: goto label_3525f4;
        case 0x3525f8u: goto label_3525f8;
        case 0x3525fcu: goto label_3525fc;
        case 0x352600u: goto label_352600;
        case 0x352604u: goto label_352604;
        case 0x352608u: goto label_352608;
        case 0x35260cu: goto label_35260c;
        case 0x352610u: goto label_352610;
        case 0x352614u: goto label_352614;
        case 0x352618u: goto label_352618;
        case 0x35261cu: goto label_35261c;
        case 0x352620u: goto label_352620;
        case 0x352624u: goto label_352624;
        case 0x352628u: goto label_352628;
        case 0x35262cu: goto label_35262c;
        case 0x352630u: goto label_352630;
        case 0x352634u: goto label_352634;
        case 0x352638u: goto label_352638;
        case 0x35263cu: goto label_35263c;
        case 0x352640u: goto label_352640;
        case 0x352644u: goto label_352644;
        case 0x352648u: goto label_352648;
        case 0x35264cu: goto label_35264c;
        case 0x352650u: goto label_352650;
        case 0x352654u: goto label_352654;
        case 0x352658u: goto label_352658;
        case 0x35265cu: goto label_35265c;
        case 0x352660u: goto label_352660;
        case 0x352664u: goto label_352664;
        case 0x352668u: goto label_352668;
        case 0x35266cu: goto label_35266c;
        case 0x352670u: goto label_352670;
        case 0x352674u: goto label_352674;
        case 0x352678u: goto label_352678;
        case 0x35267cu: goto label_35267c;
        case 0x352680u: goto label_352680;
        case 0x352684u: goto label_352684;
        case 0x352688u: goto label_352688;
        case 0x35268cu: goto label_35268c;
        case 0x352690u: goto label_352690;
        case 0x352694u: goto label_352694;
        case 0x352698u: goto label_352698;
        case 0x35269cu: goto label_35269c;
        case 0x3526a0u: goto label_3526a0;
        case 0x3526a4u: goto label_3526a4;
        case 0x3526a8u: goto label_3526a8;
        case 0x3526acu: goto label_3526ac;
        case 0x3526b0u: goto label_3526b0;
        case 0x3526b4u: goto label_3526b4;
        case 0x3526b8u: goto label_3526b8;
        case 0x3526bcu: goto label_3526bc;
        case 0x3526c0u: goto label_3526c0;
        case 0x3526c4u: goto label_3526c4;
        case 0x3526c8u: goto label_3526c8;
        case 0x3526ccu: goto label_3526cc;
        case 0x3526d0u: goto label_3526d0;
        case 0x3526d4u: goto label_3526d4;
        case 0x3526d8u: goto label_3526d8;
        case 0x3526dcu: goto label_3526dc;
        case 0x3526e0u: goto label_3526e0;
        case 0x3526e4u: goto label_3526e4;
        case 0x3526e8u: goto label_3526e8;
        case 0x3526ecu: goto label_3526ec;
        case 0x3526f0u: goto label_3526f0;
        case 0x3526f4u: goto label_3526f4;
        case 0x3526f8u: goto label_3526f8;
        case 0x3526fcu: goto label_3526fc;
        case 0x352700u: goto label_352700;
        case 0x352704u: goto label_352704;
        case 0x352708u: goto label_352708;
        case 0x35270cu: goto label_35270c;
        case 0x352710u: goto label_352710;
        case 0x352714u: goto label_352714;
        case 0x352718u: goto label_352718;
        case 0x35271cu: goto label_35271c;
        case 0x352720u: goto label_352720;
        case 0x352724u: goto label_352724;
        case 0x352728u: goto label_352728;
        case 0x35272cu: goto label_35272c;
        case 0x352730u: goto label_352730;
        case 0x352734u: goto label_352734;
        case 0x352738u: goto label_352738;
        case 0x35273cu: goto label_35273c;
        case 0x352740u: goto label_352740;
        case 0x352744u: goto label_352744;
        case 0x352748u: goto label_352748;
        case 0x35274cu: goto label_35274c;
        case 0x352750u: goto label_352750;
        case 0x352754u: goto label_352754;
        case 0x352758u: goto label_352758;
        case 0x35275cu: goto label_35275c;
        case 0x352760u: goto label_352760;
        case 0x352764u: goto label_352764;
        case 0x352768u: goto label_352768;
        case 0x35276cu: goto label_35276c;
        case 0x352770u: goto label_352770;
        case 0x352774u: goto label_352774;
        case 0x352778u: goto label_352778;
        case 0x35277cu: goto label_35277c;
        case 0x352780u: goto label_352780;
        case 0x352784u: goto label_352784;
        case 0x352788u: goto label_352788;
        case 0x35278cu: goto label_35278c;
        case 0x352790u: goto label_352790;
        case 0x352794u: goto label_352794;
        case 0x352798u: goto label_352798;
        case 0x35279cu: goto label_35279c;
        case 0x3527a0u: goto label_3527a0;
        case 0x3527a4u: goto label_3527a4;
        case 0x3527a8u: goto label_3527a8;
        case 0x3527acu: goto label_3527ac;
        case 0x3527b0u: goto label_3527b0;
        case 0x3527b4u: goto label_3527b4;
        case 0x3527b8u: goto label_3527b8;
        case 0x3527bcu: goto label_3527bc;
        case 0x3527c0u: goto label_3527c0;
        case 0x3527c4u: goto label_3527c4;
        case 0x3527c8u: goto label_3527c8;
        case 0x3527ccu: goto label_3527cc;
        case 0x3527d0u: goto label_3527d0;
        case 0x3527d4u: goto label_3527d4;
        case 0x3527d8u: goto label_3527d8;
        case 0x3527dcu: goto label_3527dc;
        case 0x3527e0u: goto label_3527e0;
        case 0x3527e4u: goto label_3527e4;
        case 0x3527e8u: goto label_3527e8;
        case 0x3527ecu: goto label_3527ec;
        case 0x3527f0u: goto label_3527f0;
        case 0x3527f4u: goto label_3527f4;
        case 0x3527f8u: goto label_3527f8;
        case 0x3527fcu: goto label_3527fc;
        case 0x352800u: goto label_352800;
        case 0x352804u: goto label_352804;
        case 0x352808u: goto label_352808;
        case 0x35280cu: goto label_35280c;
        case 0x352810u: goto label_352810;
        case 0x352814u: goto label_352814;
        case 0x352818u: goto label_352818;
        case 0x35281cu: goto label_35281c;
        case 0x352820u: goto label_352820;
        case 0x352824u: goto label_352824;
        case 0x352828u: goto label_352828;
        case 0x35282cu: goto label_35282c;
        case 0x352830u: goto label_352830;
        case 0x352834u: goto label_352834;
        case 0x352838u: goto label_352838;
        case 0x35283cu: goto label_35283c;
        case 0x352840u: goto label_352840;
        case 0x352844u: goto label_352844;
        case 0x352848u: goto label_352848;
        case 0x35284cu: goto label_35284c;
        case 0x352850u: goto label_352850;
        case 0x352854u: goto label_352854;
        case 0x352858u: goto label_352858;
        case 0x35285cu: goto label_35285c;
        case 0x352860u: goto label_352860;
        case 0x352864u: goto label_352864;
        case 0x352868u: goto label_352868;
        case 0x35286cu: goto label_35286c;
        case 0x352870u: goto label_352870;
        case 0x352874u: goto label_352874;
        case 0x352878u: goto label_352878;
        case 0x35287cu: goto label_35287c;
        case 0x352880u: goto label_352880;
        case 0x352884u: goto label_352884;
        case 0x352888u: goto label_352888;
        case 0x35288cu: goto label_35288c;
        case 0x352890u: goto label_352890;
        case 0x352894u: goto label_352894;
        case 0x352898u: goto label_352898;
        case 0x35289cu: goto label_35289c;
        case 0x3528a0u: goto label_3528a0;
        case 0x3528a4u: goto label_3528a4;
        case 0x3528a8u: goto label_3528a8;
        case 0x3528acu: goto label_3528ac;
        case 0x3528b0u: goto label_3528b0;
        case 0x3528b4u: goto label_3528b4;
        case 0x3528b8u: goto label_3528b8;
        case 0x3528bcu: goto label_3528bc;
        case 0x3528c0u: goto label_3528c0;
        case 0x3528c4u: goto label_3528c4;
        case 0x3528c8u: goto label_3528c8;
        case 0x3528ccu: goto label_3528cc;
        case 0x3528d0u: goto label_3528d0;
        case 0x3528d4u: goto label_3528d4;
        case 0x3528d8u: goto label_3528d8;
        case 0x3528dcu: goto label_3528dc;
        case 0x3528e0u: goto label_3528e0;
        case 0x3528e4u: goto label_3528e4;
        case 0x3528e8u: goto label_3528e8;
        case 0x3528ecu: goto label_3528ec;
        case 0x3528f0u: goto label_3528f0;
        case 0x3528f4u: goto label_3528f4;
        case 0x3528f8u: goto label_3528f8;
        case 0x3528fcu: goto label_3528fc;
        case 0x352900u: goto label_352900;
        case 0x352904u: goto label_352904;
        case 0x352908u: goto label_352908;
        case 0x35290cu: goto label_35290c;
        case 0x352910u: goto label_352910;
        case 0x352914u: goto label_352914;
        case 0x352918u: goto label_352918;
        case 0x35291cu: goto label_35291c;
        case 0x352920u: goto label_352920;
        case 0x352924u: goto label_352924;
        case 0x352928u: goto label_352928;
        case 0x35292cu: goto label_35292c;
        case 0x352930u: goto label_352930;
        case 0x352934u: goto label_352934;
        case 0x352938u: goto label_352938;
        case 0x35293cu: goto label_35293c;
        case 0x352940u: goto label_352940;
        case 0x352944u: goto label_352944;
        case 0x352948u: goto label_352948;
        case 0x35294cu: goto label_35294c;
        case 0x352950u: goto label_352950;
        case 0x352954u: goto label_352954;
        case 0x352958u: goto label_352958;
        case 0x35295cu: goto label_35295c;
        case 0x352960u: goto label_352960;
        case 0x352964u: goto label_352964;
        case 0x352968u: goto label_352968;
        case 0x35296cu: goto label_35296c;
        case 0x352970u: goto label_352970;
        case 0x352974u: goto label_352974;
        case 0x352978u: goto label_352978;
        case 0x35297cu: goto label_35297c;
        case 0x352980u: goto label_352980;
        case 0x352984u: goto label_352984;
        case 0x352988u: goto label_352988;
        case 0x35298cu: goto label_35298c;
        case 0x352990u: goto label_352990;
        case 0x352994u: goto label_352994;
        case 0x352998u: goto label_352998;
        case 0x35299cu: goto label_35299c;
        case 0x3529a0u: goto label_3529a0;
        case 0x3529a4u: goto label_3529a4;
        case 0x3529a8u: goto label_3529a8;
        case 0x3529acu: goto label_3529ac;
        case 0x3529b0u: goto label_3529b0;
        case 0x3529b4u: goto label_3529b4;
        case 0x3529b8u: goto label_3529b8;
        case 0x3529bcu: goto label_3529bc;
        case 0x3529c0u: goto label_3529c0;
        case 0x3529c4u: goto label_3529c4;
        case 0x3529c8u: goto label_3529c8;
        case 0x3529ccu: goto label_3529cc;
        case 0x3529d0u: goto label_3529d0;
        case 0x3529d4u: goto label_3529d4;
        case 0x3529d8u: goto label_3529d8;
        case 0x3529dcu: goto label_3529dc;
        case 0x3529e0u: goto label_3529e0;
        case 0x3529e4u: goto label_3529e4;
        case 0x3529e8u: goto label_3529e8;
        case 0x3529ecu: goto label_3529ec;
        case 0x3529f0u: goto label_3529f0;
        case 0x3529f4u: goto label_3529f4;
        case 0x3529f8u: goto label_3529f8;
        case 0x3529fcu: goto label_3529fc;
        case 0x352a00u: goto label_352a00;
        case 0x352a04u: goto label_352a04;
        case 0x352a08u: goto label_352a08;
        case 0x352a0cu: goto label_352a0c;
        case 0x352a10u: goto label_352a10;
        case 0x352a14u: goto label_352a14;
        case 0x352a18u: goto label_352a18;
        case 0x352a1cu: goto label_352a1c;
        case 0x352a20u: goto label_352a20;
        case 0x352a24u: goto label_352a24;
        case 0x352a28u: goto label_352a28;
        case 0x352a2cu: goto label_352a2c;
        case 0x352a30u: goto label_352a30;
        case 0x352a34u: goto label_352a34;
        case 0x352a38u: goto label_352a38;
        case 0x352a3cu: goto label_352a3c;
        case 0x352a40u: goto label_352a40;
        case 0x352a44u: goto label_352a44;
        case 0x352a48u: goto label_352a48;
        case 0x352a4cu: goto label_352a4c;
        case 0x352a50u: goto label_352a50;
        case 0x352a54u: goto label_352a54;
        case 0x352a58u: goto label_352a58;
        case 0x352a5cu: goto label_352a5c;
        case 0x352a60u: goto label_352a60;
        case 0x352a64u: goto label_352a64;
        case 0x352a68u: goto label_352a68;
        case 0x352a6cu: goto label_352a6c;
        case 0x352a70u: goto label_352a70;
        case 0x352a74u: goto label_352a74;
        case 0x352a78u: goto label_352a78;
        case 0x352a7cu: goto label_352a7c;
        case 0x352a80u: goto label_352a80;
        case 0x352a84u: goto label_352a84;
        case 0x352a88u: goto label_352a88;
        case 0x352a8cu: goto label_352a8c;
        case 0x352a90u: goto label_352a90;
        case 0x352a94u: goto label_352a94;
        case 0x352a98u: goto label_352a98;
        case 0x352a9cu: goto label_352a9c;
        case 0x352aa0u: goto label_352aa0;
        case 0x352aa4u: goto label_352aa4;
        case 0x352aa8u: goto label_352aa8;
        case 0x352aacu: goto label_352aac;
        case 0x352ab0u: goto label_352ab0;
        case 0x352ab4u: goto label_352ab4;
        case 0x352ab8u: goto label_352ab8;
        case 0x352abcu: goto label_352abc;
        case 0x352ac0u: goto label_352ac0;
        case 0x352ac4u: goto label_352ac4;
        case 0x352ac8u: goto label_352ac8;
        case 0x352accu: goto label_352acc;
        case 0x352ad0u: goto label_352ad0;
        case 0x352ad4u: goto label_352ad4;
        case 0x352ad8u: goto label_352ad8;
        case 0x352adcu: goto label_352adc;
        case 0x352ae0u: goto label_352ae0;
        case 0x352ae4u: goto label_352ae4;
        case 0x352ae8u: goto label_352ae8;
        case 0x352aecu: goto label_352aec;
        case 0x352af0u: goto label_352af0;
        case 0x352af4u: goto label_352af4;
        case 0x352af8u: goto label_352af8;
        case 0x352afcu: goto label_352afc;
        case 0x352b00u: goto label_352b00;
        case 0x352b04u: goto label_352b04;
        case 0x352b08u: goto label_352b08;
        case 0x352b0cu: goto label_352b0c;
        case 0x352b10u: goto label_352b10;
        case 0x352b14u: goto label_352b14;
        case 0x352b18u: goto label_352b18;
        case 0x352b1cu: goto label_352b1c;
        case 0x352b20u: goto label_352b20;
        case 0x352b24u: goto label_352b24;
        case 0x352b28u: goto label_352b28;
        case 0x352b2cu: goto label_352b2c;
        case 0x352b30u: goto label_352b30;
        case 0x352b34u: goto label_352b34;
        case 0x352b38u: goto label_352b38;
        case 0x352b3cu: goto label_352b3c;
        case 0x352b40u: goto label_352b40;
        case 0x352b44u: goto label_352b44;
        case 0x352b48u: goto label_352b48;
        case 0x352b4cu: goto label_352b4c;
        case 0x352b50u: goto label_352b50;
        case 0x352b54u: goto label_352b54;
        case 0x352b58u: goto label_352b58;
        case 0x352b5cu: goto label_352b5c;
        case 0x352b60u: goto label_352b60;
        case 0x352b64u: goto label_352b64;
        case 0x352b68u: goto label_352b68;
        case 0x352b6cu: goto label_352b6c;
        case 0x352b70u: goto label_352b70;
        case 0x352b74u: goto label_352b74;
        case 0x352b78u: goto label_352b78;
        case 0x352b7cu: goto label_352b7c;
        case 0x352b80u: goto label_352b80;
        case 0x352b84u: goto label_352b84;
        case 0x352b88u: goto label_352b88;
        case 0x352b8cu: goto label_352b8c;
        case 0x352b90u: goto label_352b90;
        case 0x352b94u: goto label_352b94;
        case 0x352b98u: goto label_352b98;
        case 0x352b9cu: goto label_352b9c;
        case 0x352ba0u: goto label_352ba0;
        case 0x352ba4u: goto label_352ba4;
        case 0x352ba8u: goto label_352ba8;
        case 0x352bacu: goto label_352bac;
        case 0x352bb0u: goto label_352bb0;
        case 0x352bb4u: goto label_352bb4;
        case 0x352bb8u: goto label_352bb8;
        case 0x352bbcu: goto label_352bbc;
        case 0x352bc0u: goto label_352bc0;
        case 0x352bc4u: goto label_352bc4;
        case 0x352bc8u: goto label_352bc8;
        case 0x352bccu: goto label_352bcc;
        case 0x352bd0u: goto label_352bd0;
        case 0x352bd4u: goto label_352bd4;
        case 0x352bd8u: goto label_352bd8;
        case 0x352bdcu: goto label_352bdc;
        case 0x352be0u: goto label_352be0;
        case 0x352be4u: goto label_352be4;
        case 0x352be8u: goto label_352be8;
        case 0x352becu: goto label_352bec;
        case 0x352bf0u: goto label_352bf0;
        case 0x352bf4u: goto label_352bf4;
        case 0x352bf8u: goto label_352bf8;
        case 0x352bfcu: goto label_352bfc;
        case 0x352c00u: goto label_352c00;
        case 0x352c04u: goto label_352c04;
        case 0x352c08u: goto label_352c08;
        case 0x352c0cu: goto label_352c0c;
        case 0x352c10u: goto label_352c10;
        case 0x352c14u: goto label_352c14;
        case 0x352c18u: goto label_352c18;
        case 0x352c1cu: goto label_352c1c;
        case 0x352c20u: goto label_352c20;
        case 0x352c24u: goto label_352c24;
        case 0x352c28u: goto label_352c28;
        case 0x352c2cu: goto label_352c2c;
        case 0x352c30u: goto label_352c30;
        case 0x352c34u: goto label_352c34;
        case 0x352c38u: goto label_352c38;
        case 0x352c3cu: goto label_352c3c;
        case 0x352c40u: goto label_352c40;
        case 0x352c44u: goto label_352c44;
        case 0x352c48u: goto label_352c48;
        case 0x352c4cu: goto label_352c4c;
        case 0x352c50u: goto label_352c50;
        case 0x352c54u: goto label_352c54;
        case 0x352c58u: goto label_352c58;
        case 0x352c5cu: goto label_352c5c;
        case 0x352c60u: goto label_352c60;
        case 0x352c64u: goto label_352c64;
        case 0x352c68u: goto label_352c68;
        case 0x352c6cu: goto label_352c6c;
        case 0x352c70u: goto label_352c70;
        case 0x352c74u: goto label_352c74;
        case 0x352c78u: goto label_352c78;
        case 0x352c7cu: goto label_352c7c;
        case 0x352c80u: goto label_352c80;
        case 0x352c84u: goto label_352c84;
        case 0x352c88u: goto label_352c88;
        case 0x352c8cu: goto label_352c8c;
        case 0x352c90u: goto label_352c90;
        case 0x352c94u: goto label_352c94;
        case 0x352c98u: goto label_352c98;
        case 0x352c9cu: goto label_352c9c;
        case 0x352ca0u: goto label_352ca0;
        case 0x352ca4u: goto label_352ca4;
        case 0x352ca8u: goto label_352ca8;
        case 0x352cacu: goto label_352cac;
        case 0x352cb0u: goto label_352cb0;
        case 0x352cb4u: goto label_352cb4;
        case 0x352cb8u: goto label_352cb8;
        case 0x352cbcu: goto label_352cbc;
        case 0x352cc0u: goto label_352cc0;
        case 0x352cc4u: goto label_352cc4;
        case 0x352cc8u: goto label_352cc8;
        case 0x352cccu: goto label_352ccc;
        case 0x352cd0u: goto label_352cd0;
        case 0x352cd4u: goto label_352cd4;
        case 0x352cd8u: goto label_352cd8;
        case 0x352cdcu: goto label_352cdc;
        case 0x352ce0u: goto label_352ce0;
        case 0x352ce4u: goto label_352ce4;
        case 0x352ce8u: goto label_352ce8;
        case 0x352cecu: goto label_352cec;
        case 0x352cf0u: goto label_352cf0;
        case 0x352cf4u: goto label_352cf4;
        case 0x352cf8u: goto label_352cf8;
        case 0x352cfcu: goto label_352cfc;
        case 0x352d00u: goto label_352d00;
        case 0x352d04u: goto label_352d04;
        case 0x352d08u: goto label_352d08;
        case 0x352d0cu: goto label_352d0c;
        case 0x352d10u: goto label_352d10;
        case 0x352d14u: goto label_352d14;
        case 0x352d18u: goto label_352d18;
        case 0x352d1cu: goto label_352d1c;
        case 0x352d20u: goto label_352d20;
        case 0x352d24u: goto label_352d24;
        case 0x352d28u: goto label_352d28;
        case 0x352d2cu: goto label_352d2c;
        case 0x352d30u: goto label_352d30;
        case 0x352d34u: goto label_352d34;
        case 0x352d38u: goto label_352d38;
        case 0x352d3cu: goto label_352d3c;
        case 0x352d40u: goto label_352d40;
        case 0x352d44u: goto label_352d44;
        case 0x352d48u: goto label_352d48;
        case 0x352d4cu: goto label_352d4c;
        case 0x352d50u: goto label_352d50;
        case 0x352d54u: goto label_352d54;
        case 0x352d58u: goto label_352d58;
        case 0x352d5cu: goto label_352d5c;
        case 0x352d60u: goto label_352d60;
        case 0x352d64u: goto label_352d64;
        case 0x352d68u: goto label_352d68;
        case 0x352d6cu: goto label_352d6c;
        case 0x352d70u: goto label_352d70;
        case 0x352d74u: goto label_352d74;
        case 0x352d78u: goto label_352d78;
        case 0x352d7cu: goto label_352d7c;
        case 0x352d80u: goto label_352d80;
        case 0x352d84u: goto label_352d84;
        case 0x352d88u: goto label_352d88;
        case 0x352d8cu: goto label_352d8c;
        case 0x352d90u: goto label_352d90;
        case 0x352d94u: goto label_352d94;
        case 0x352d98u: goto label_352d98;
        case 0x352d9cu: goto label_352d9c;
        case 0x352da0u: goto label_352da0;
        case 0x352da4u: goto label_352da4;
        case 0x352da8u: goto label_352da8;
        case 0x352dacu: goto label_352dac;
        case 0x352db0u: goto label_352db0;
        case 0x352db4u: goto label_352db4;
        case 0x352db8u: goto label_352db8;
        case 0x352dbcu: goto label_352dbc;
        case 0x352dc0u: goto label_352dc0;
        case 0x352dc4u: goto label_352dc4;
        case 0x352dc8u: goto label_352dc8;
        case 0x352dccu: goto label_352dcc;
        case 0x352dd0u: goto label_352dd0;
        case 0x352dd4u: goto label_352dd4;
        case 0x352dd8u: goto label_352dd8;
        case 0x352ddcu: goto label_352ddc;
        case 0x352de0u: goto label_352de0;
        case 0x352de4u: goto label_352de4;
        case 0x352de8u: goto label_352de8;
        case 0x352decu: goto label_352dec;
        case 0x352df0u: goto label_352df0;
        case 0x352df4u: goto label_352df4;
        case 0x352df8u: goto label_352df8;
        case 0x352dfcu: goto label_352dfc;
        case 0x352e00u: goto label_352e00;
        case 0x352e04u: goto label_352e04;
        case 0x352e08u: goto label_352e08;
        case 0x352e0cu: goto label_352e0c;
        case 0x352e10u: goto label_352e10;
        case 0x352e14u: goto label_352e14;
        case 0x352e18u: goto label_352e18;
        case 0x352e1cu: goto label_352e1c;
        case 0x352e20u: goto label_352e20;
        case 0x352e24u: goto label_352e24;
        case 0x352e28u: goto label_352e28;
        case 0x352e2cu: goto label_352e2c;
        case 0x352e30u: goto label_352e30;
        case 0x352e34u: goto label_352e34;
        case 0x352e38u: goto label_352e38;
        case 0x352e3cu: goto label_352e3c;
        case 0x352e40u: goto label_352e40;
        case 0x352e44u: goto label_352e44;
        case 0x352e48u: goto label_352e48;
        case 0x352e4cu: goto label_352e4c;
        case 0x352e50u: goto label_352e50;
        case 0x352e54u: goto label_352e54;
        case 0x352e58u: goto label_352e58;
        case 0x352e5cu: goto label_352e5c;
        case 0x352e60u: goto label_352e60;
        case 0x352e64u: goto label_352e64;
        case 0x352e68u: goto label_352e68;
        case 0x352e6cu: goto label_352e6c;
        case 0x352e70u: goto label_352e70;
        case 0x352e74u: goto label_352e74;
        case 0x352e78u: goto label_352e78;
        case 0x352e7cu: goto label_352e7c;
        case 0x352e80u: goto label_352e80;
        case 0x352e84u: goto label_352e84;
        case 0x352e88u: goto label_352e88;
        case 0x352e8cu: goto label_352e8c;
        case 0x352e90u: goto label_352e90;
        case 0x352e94u: goto label_352e94;
        case 0x352e98u: goto label_352e98;
        case 0x352e9cu: goto label_352e9c;
        case 0x352ea0u: goto label_352ea0;
        case 0x352ea4u: goto label_352ea4;
        case 0x352ea8u: goto label_352ea8;
        case 0x352eacu: goto label_352eac;
        case 0x352eb0u: goto label_352eb0;
        case 0x352eb4u: goto label_352eb4;
        case 0x352eb8u: goto label_352eb8;
        case 0x352ebcu: goto label_352ebc;
        case 0x352ec0u: goto label_352ec0;
        case 0x352ec4u: goto label_352ec4;
        case 0x352ec8u: goto label_352ec8;
        case 0x352eccu: goto label_352ecc;
        case 0x352ed0u: goto label_352ed0;
        case 0x352ed4u: goto label_352ed4;
        case 0x352ed8u: goto label_352ed8;
        case 0x352edcu: goto label_352edc;
        default: break;
    }

    ctx->pc = 0x352210u;

label_352210:
    // 0x352210: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352214:
    // 0x352214: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x352214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352218:
    // 0x352218: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x352218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
label_35221c:
    // 0x35221c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x35221cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_352220:
    // 0x352220: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352224:
    // 0x352224: 0xac85e7c0  sw          $a1, -0x1840($a0)
    ctx->pc = 0x352224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961088), GPR_U32(ctx, 5));
label_352228:
    // 0x352228: 0xac60e7d0  sw          $zero, -0x1830($v1)
    ctx->pc = 0x352228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 0));
label_35222c:
    // 0x35222c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x35222cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352230:
    // 0x352230: 0xac60e7c8  sw          $zero, -0x1838($v1)
    ctx->pc = 0x352230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 0));
label_352234:
    // 0x352234: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352238:
    // 0x352238: 0x3e00008  jr          $ra
label_35223c:
    if (ctx->pc == 0x35223Cu) {
        ctx->pc = 0x35223Cu;
            // 0x35223c: 0xac60e7e0  sw          $zero, -0x1820($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961120), GPR_U32(ctx, 0));
        ctx->pc = 0x352240u;
        goto label_352240;
    }
    ctx->pc = 0x352238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352238u;
            // 0x35223c: 0xac60e7e0  sw          $zero, -0x1820($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352240u;
label_352240:
    // 0x352240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x352240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_352244:
    // 0x352244: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352248:
    // 0x352248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x352248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_35224c:
    // 0x35224c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35224cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_352250:
    // 0x352250: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x352250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_352254:
    // 0x352254: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x352254u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
label_352258:
    // 0x352258: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x352258u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_35225c:
    // 0x35225c: 0x5020022f  beql        $at, $zero, . + 4 + (0x22F << 2)
label_352260:
    if (ctx->pc == 0x352260u) {
        ctx->pc = 0x352260u;
            // 0x352260: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x352264u;
        goto label_352264;
    }
    ctx->pc = 0x35225Cu;
    {
        const bool branch_taken_0x35225c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35225c) {
            ctx->pc = 0x352260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35225Cu;
            // 0x352260: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352B1Cu;
            goto label_352b1c;
        }
    }
    ctx->pc = 0x352264u;
label_352264:
    // 0x352264: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x352264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_352268:
    // 0x352268: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x352268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35226c:
    // 0x35226c: 0x248455b0  addiu       $a0, $a0, 0x55B0
    ctx->pc = 0x35226cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21936));
label_352270:
    // 0x352270: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x352270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_352274:
    // 0x352274: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x352274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352278:
    // 0x352278: 0x600008  jr          $v1
label_35227c:
    if (ctx->pc == 0x35227Cu) {
        ctx->pc = 0x352280u;
        goto label_352280;
    }
    ctx->pc = 0x352278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x352280u: goto label_352280;
            case 0x3522F4u: goto label_3522f4;
            case 0x3524E0u: goto label_3524e0;
            case 0x352660u: goto label_352660;
            case 0x3527A8u: goto label_3527a8;
            case 0x352A28u: goto label_352a28;
            case 0x352AB0u: goto label_352ab0;
            case 0x352B18u: goto label_352b18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x352280u;
label_352280:
    // 0x352280: 0xc0cbf34  jal         func_32FCD0
label_352284:
    if (ctx->pc == 0x352284u) {
        ctx->pc = 0x352288u;
        goto label_352288;
    }
    ctx->pc = 0x352280u;
    SET_GPR_U32(ctx, 31, 0x352288u);
    ctx->pc = 0x32FCD0u;
    if (runtime->hasFunction(0x32FCD0u)) {
        auto targetFn = runtime->lookupFunction(0x32FCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352288u; }
        if (ctx->pc != 0x352288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FCD0_0x32fcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352288u; }
        if (ctx->pc != 0x352288u) { return; }
    }
    ctx->pc = 0x352288u;
label_352288:
    // 0x352288: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x352288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
label_35228c:
    // 0x35228c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x35228cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_352290:
    // 0x352290: 0x808abed0  lb          $t2, -0x4130($a0)
    ctx->pc = 0x352290u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294950608)));
label_352294:
    // 0x352294: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352298:
    // 0x352298: 0x3c0601de  lui         $a2, 0x1DE
    ctx->pc = 0x352298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)478 << 16));
label_35229c:
    // 0x35229c: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x35229cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
label_3522a0:
    // 0x3522a0: 0x147001a  div         $zero, $t2, $a3
    ctx->pc = 0x3522a0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3522a4:
    // 0x3522a4: 0xac6ae808  sw          $t2, -0x17F8($v1)
    ctx->pc = 0x3522a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 10));
label_3522a8:
    // 0x3522a8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3522a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3522ac:
    // 0x3522ac: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x3522acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
label_3522b0:
    // 0x3522b0: 0x34896667  ori         $t1, $a0, 0x6667
    ctx->pc = 0x3522b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
label_3522b4:
    // 0x3522b4: 0xa47c2  srl         $t0, $t2, 31
    ctx->pc = 0x3522b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_3522b8:
    // 0x3522b8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3522b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_3522bc:
    // 0x3522bc: 0x9067e818  lbu         $a3, -0x17E8($v1)
    ctx->pc = 0x3522bcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
label_3522c0:
    // 0x3522c0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3522c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_3522c4:
    // 0x3522c4: 0xa060bf18  sb          $zero, -0x40E8($v1)
    ctx->pc = 0x3522c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950680), (uint8_t)GPR_U32(ctx, 0));
label_3522c8:
    // 0x3522c8: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x3522c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3522cc:
    // 0x3522cc: 0xa083e818  sb          $v1, -0x17E8($a0)
    ctx->pc = 0x3522ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294961176), (uint8_t)GPR_U32(ctx, 3));
label_3522d0:
    // 0x3522d0: 0x1810  mfhi        $v1
    ctx->pc = 0x3522d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3522d4:
    // 0x3522d4: 0x12a0018  mult        $zero, $t1, $t2
    ctx->pc = 0x3522d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3522d8:
    // 0x3522d8: 0xacc3e800  sw          $v1, -0x1800($a2)
    ctx->pc = 0x3522d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294961152), GPR_U32(ctx, 3));
label_3522dc:
    // 0x3522dc: 0x0  nop
    ctx->pc = 0x3522dcu;
    // NOP
label_3522e0:
    // 0x3522e0: 0x1810  mfhi        $v1
    ctx->pc = 0x3522e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3522e4:
    // 0x3522e4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3522e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_3522e8:
    // 0x3522e8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3522e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3522ec:
    // 0x3522ec: 0x1000020a  b           . + 4 + (0x20A << 2)
label_3522f0:
    if (ctx->pc == 0x3522F0u) {
        ctx->pc = 0x3522F0u;
            // 0x3522f0: 0xaca3e7f8  sw          $v1, -0x1808($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294961144), GPR_U32(ctx, 3));
        ctx->pc = 0x3522F4u;
        goto label_3522f4;
    }
    ctx->pc = 0x3522ECu;
    {
        const bool branch_taken_0x3522ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3522F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3522ECu;
            // 0x3522f0: 0xaca3e7f8  sw          $v1, -0x1808($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294961144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3522ec) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x3522F4u;
label_3522f4:
    // 0x3522f4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3522f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3522f8:
    // 0x3522f8: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x3522f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
label_3522fc:
    // 0x3522fc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3522fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_352300:
    // 0x352300: 0x1460005a  bnez        $v1, . + 4 + (0x5A << 2)
label_352304:
    if (ctx->pc == 0x352304u) {
        ctx->pc = 0x352308u;
        goto label_352308;
    }
    ctx->pc = 0x352300u;
    {
        const bool branch_taken_0x352300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x352300) {
            ctx->pc = 0x35246Cu;
            goto label_35246c;
        }
    }
    ctx->pc = 0x352308u;
label_352308:
    // 0x352308: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_35230c:
    // 0x35230c: 0x8c65e7c8  lw          $a1, -0x1838($v1)
    ctx->pc = 0x35230cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
label_352310:
    // 0x352310: 0x28a10006  slti        $at, $a1, 0x6
    ctx->pc = 0x352310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
label_352314:
    // 0x352314: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_352318:
    if (ctx->pc == 0x352318u) {
        ctx->pc = 0x35231Cu;
        goto label_35231c;
    }
    ctx->pc = 0x352314u;
    {
        const bool branch_taken_0x352314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x352314) {
            ctx->pc = 0x35246Cu;
            goto label_35246c;
        }
    }
    ctx->pc = 0x35231Cu;
label_35231c:
    // 0x35231c: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x35231cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_352320:
    // 0x352320: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
label_352324:
    if (ctx->pc == 0x352324u) {
        ctx->pc = 0x352328u;
        goto label_352328;
    }
    ctx->pc = 0x352320u;
    {
        const bool branch_taken_0x352320 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x352320) {
            ctx->pc = 0x35246Cu;
            goto label_35246c;
        }
    }
    ctx->pc = 0x352328u;
label_352328:
    // 0x352328: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x352328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_35232c:
    // 0x35232c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x35232cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_352330:
    // 0x352330: 0x24845590  addiu       $a0, $a0, 0x5590
    ctx->pc = 0x352330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21904));
label_352334:
    // 0x352334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x352334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_352338:
    // 0x352338: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x352338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35233c:
    // 0x35233c: 0x600008  jr          $v1
label_352340:
    if (ctx->pc == 0x352340u) {
        ctx->pc = 0x352344u;
        goto label_352344;
    }
    ctx->pc = 0x35233Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x352344u: goto label_352344;
            case 0x352384u: goto label_352384;
            case 0x3523C4u: goto label_3523c4;
            case 0x352404u: goto label_352404;
            case 0x352438u: goto label_352438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x352344u;
label_352344:
    // 0x352344: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x352344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
label_352348:
    // 0x352348: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x352348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_35234c:
    // 0x35234c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x35234cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_352350:
    // 0x352350: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x352350u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_352354:
    // 0x352354: 0x24480080  addiu       $t0, $v0, 0x80
    ctx->pc = 0x352354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_352358:
    // 0x352358: 0x24842b30  addiu       $a0, $a0, 0x2B30
    ctx->pc = 0x352358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11056));
label_35235c:
    // 0x35235c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35235cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352360:
    // 0x352360: 0x2407fd80  addiu       $a3, $zero, -0x280
    ctx->pc = 0x352360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966656));
label_352364:
    // 0x352364: 0xc0cbfdc  jal         func_32FF70
label_352368:
    if (ctx->pc == 0x352368u) {
        ctx->pc = 0x352368u;
            // 0x352368: 0x24090050  addiu       $t1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x35236Cu;
        goto label_35236c;
    }
    ctx->pc = 0x352364u;
    SET_GPR_U32(ctx, 31, 0x35236Cu);
    ctx->pc = 0x352368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352364u;
            // 0x352368: 0x24090050  addiu       $t1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35236Cu; }
        if (ctx->pc != 0x35236Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35236Cu; }
        if (ctx->pc != 0x35236Cu) { return; }
    }
    ctx->pc = 0x35236Cu;
label_35236c:
    // 0x35236c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x35236cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_352370:
    // 0x352370: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352374:
    // 0x352374: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x352374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
label_352378:
    // 0x352378: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x352378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_35237c:
    // 0x35237c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_352380:
    if (ctx->pc == 0x352380u) {
        ctx->pc = 0x352380u;
            // 0x352380: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->pc = 0x352384u;
        goto label_352384;
    }
    ctx->pc = 0x35237Cu;
    {
        const bool branch_taken_0x35237c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35237Cu;
            // 0x352380: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35237c) {
            ctx->pc = 0x35246Cu;
            goto label_35246c;
        }
    }
    ctx->pc = 0x352384u;
label_352384:
    // 0x352384: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x352384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
label_352388:
    // 0x352388: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x352388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_35238c:
    // 0x35238c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x35238cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_352390:
    // 0x352390: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x352390u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_352394:
    // 0x352394: 0x24480080  addiu       $t0, $v0, 0x80
    ctx->pc = 0x352394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_352398:
    // 0x352398: 0x24842b30  addiu       $a0, $a0, 0x2B30
    ctx->pc = 0x352398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11056));
label_35239c:
    // 0x35239c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35239cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3523a0:
    // 0x3523a0: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x3523a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_3523a4:
    // 0x3523a4: 0xc0cbfdc  jal         func_32FF70
label_3523a8:
    if (ctx->pc == 0x3523A8u) {
        ctx->pc = 0x3523A8u;
            // 0x3523a8: 0x24090060  addiu       $t1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x3523ACu;
        goto label_3523ac;
    }
    ctx->pc = 0x3523A4u;
    SET_GPR_U32(ctx, 31, 0x3523ACu);
    ctx->pc = 0x3523A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3523A4u;
            // 0x3523a8: 0x24090060  addiu       $t1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3523ACu; }
        if (ctx->pc != 0x3523ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3523ACu; }
        if (ctx->pc != 0x3523ACu) { return; }
    }
    ctx->pc = 0x3523ACu;
label_3523ac:
    // 0x3523ac: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3523acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_3523b0:
    // 0x3523b0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3523b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3523b4:
    // 0x3523b4: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x3523b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
label_3523b8:
    // 0x3523b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3523b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3523bc:
    // 0x3523bc: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3523c0:
    if (ctx->pc == 0x3523C0u) {
        ctx->pc = 0x3523C0u;
            // 0x3523c0: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->pc = 0x3523C4u;
        goto label_3523c4;
    }
    ctx->pc = 0x3523BCu;
    {
        const bool branch_taken_0x3523bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3523C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3523BCu;
            // 0x3523c0: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3523bc) {
            ctx->pc = 0x35246Cu;
            goto label_35246c;
        }
    }
    ctx->pc = 0x3523C4u;
label_3523c4:
    // 0x3523c4: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x3523c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
label_3523c8:
    // 0x3523c8: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x3523c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_3523cc:
    // 0x3523cc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3523ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_3523d0:
    // 0x3523d0: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3523d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_3523d4:
    // 0x3523d4: 0x24480080  addiu       $t0, $v0, 0x80
    ctx->pc = 0x3523d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_3523d8:
    // 0x3523d8: 0x24842b30  addiu       $a0, $a0, 0x2B30
    ctx->pc = 0x3523d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11056));
label_3523dc:
    // 0x3523dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3523dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3523e0:
    // 0x3523e0: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x3523e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_3523e4:
    // 0x3523e4: 0xc0cc004  jal         func_330010
label_3523e8:
    if (ctx->pc == 0x3523E8u) {
        ctx->pc = 0x3523E8u;
            // 0x3523e8: 0x24090060  addiu       $t1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x3523ECu;
        goto label_3523ec;
    }
    ctx->pc = 0x3523E4u;
    SET_GPR_U32(ctx, 31, 0x3523ECu);
    ctx->pc = 0x3523E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3523E4u;
            // 0x3523e8: 0x24090060  addiu       $t1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330010u;
    if (runtime->hasFunction(0x330010u)) {
        auto targetFn = runtime->lookupFunction(0x330010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3523ECu; }
        if (ctx->pc != 0x3523ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330010_0x330010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3523ECu; }
        if (ctx->pc != 0x3523ECu) { return; }
    }
    ctx->pc = 0x3523ECu;
label_3523ec:
    // 0x3523ec: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3523ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_3523f0:
    // 0x3523f0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3523f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3523f4:
    // 0x3523f4: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x3523f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
label_3523f8:
    // 0x3523f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3523f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3523fc:
    // 0x3523fc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_352400:
    if (ctx->pc == 0x352400u) {
        ctx->pc = 0x352400u;
            // 0x352400: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->pc = 0x352404u;
        goto label_352404;
    }
    ctx->pc = 0x3523FCu;
    {
        const bool branch_taken_0x3523fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3523FCu;
            // 0x352400: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3523fc) {
            ctx->pc = 0x35246Cu;
            goto label_35246c;
        }
    }
    ctx->pc = 0x352404u;
label_352404:
    // 0x352404: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x352404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_352408:
    // 0x352408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x352408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35240c:
    // 0x35240c: 0x24842b30  addiu       $a0, $a0, 0x2B30
    ctx->pc = 0x35240cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11056));
label_352410:
    // 0x352410: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x352410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_352414:
    // 0x352414: 0x2407fee0  addiu       $a3, $zero, -0x120
    ctx->pc = 0x352414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967008));
label_352418:
    // 0x352418: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x352418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_35241c:
    // 0x35241c: 0xc0cbfdc  jal         func_32FF70
label_352420:
    if (ctx->pc == 0x352420u) {
        ctx->pc = 0x352420u;
            // 0x352420: 0x24090060  addiu       $t1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x352424u;
        goto label_352424;
    }
    ctx->pc = 0x35241Cu;
    SET_GPR_U32(ctx, 31, 0x352424u);
    ctx->pc = 0x352420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35241Cu;
            // 0x352420: 0x24090060  addiu       $t1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352424u; }
        if (ctx->pc != 0x352424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352424u; }
        if (ctx->pc != 0x352424u) { return; }
    }
    ctx->pc = 0x352424u;
label_352424:
    // 0x352424: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352428:
    // 0x352428: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_35242c:
    // 0x35242c: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x35242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
label_352430:
    // 0x352430: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x352430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_352434:
    // 0x352434: 0xac43e7c8  sw          $v1, -0x1838($v0)
    ctx->pc = 0x352434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961096), GPR_U32(ctx, 3));
label_352438:
    // 0x352438: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x352438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_35243c:
    // 0x35243c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35243cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352440:
    // 0x352440: 0x24842b30  addiu       $a0, $a0, 0x2B30
    ctx->pc = 0x352440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11056));
label_352444:
    // 0x352444: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x352444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_352448:
    // 0x352448: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x352448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_35244c:
    // 0x35244c: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x35244cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_352450:
    // 0x352450: 0xc0cbfdc  jal         func_32FF70
label_352454:
    if (ctx->pc == 0x352454u) {
        ctx->pc = 0x352454u;
            // 0x352454: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->pc = 0x352458u;
        goto label_352458;
    }
    ctx->pc = 0x352450u;
    SET_GPR_U32(ctx, 31, 0x352458u);
    ctx->pc = 0x352454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352450u;
            // 0x352454: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352458u; }
        if (ctx->pc != 0x352458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352458u; }
        if (ctx->pc != 0x352458u) { return; }
    }
    ctx->pc = 0x352458u;
label_352458:
    // 0x352458: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x352458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_35245c:
    // 0x35245c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x35245cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352460:
    // 0x352460: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x352460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
label_352464:
    // 0x352464: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x352464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_352468:
    // 0x352468: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x352468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_35246c:
    // 0x35246c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x35246cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352470:
    // 0x352470: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x352470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_352474:
    // 0x352474: 0x8c66e7d0  lw          $a2, -0x1830($v1)
    ctx->pc = 0x352474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
label_352478:
    // 0x352478: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_35247c:
    // 0x35247c: 0x9065e810  lbu         $a1, -0x17F0($v1)
    ctx->pc = 0x35247cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
label_352480:
    // 0x352480: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x352480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_352484:
    // 0x352484: 0xac83e7d0  sw          $v1, -0x1830($a0)
    ctx->pc = 0x352484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961104), GPR_U32(ctx, 3));
label_352488:
    // 0x352488: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x352488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_35248c:
    // 0x35248c: 0x106001a2  beqz        $v1, . + 4 + (0x1A2 << 2)
label_352490:
    if (ctx->pc == 0x352490u) {
        ctx->pc = 0x352494u;
        goto label_352494;
    }
    ctx->pc = 0x35248Cu;
    {
        const bool branch_taken_0x35248c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35248c) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x352494u;
label_352494:
    // 0x352494: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x352494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_352498:
    // 0x352498: 0x1060019f  beqz        $v1, . + 4 + (0x19F << 2)
label_35249c:
    if (ctx->pc == 0x35249Cu) {
        ctx->pc = 0x3524A0u;
        goto label_3524a0;
    }
    ctx->pc = 0x352498u;
    {
        const bool branch_taken_0x352498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x352498) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x3524A0u;
label_3524a0:
    // 0x3524a0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3524a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3524a4:
    // 0x3524a4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3524a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3524a8:
    // 0x3524a8: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x3524a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
label_3524ac:
    // 0x3524ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3524acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3524b0:
    // 0x3524b0: 0xc0d4884  jal         func_352210
label_3524b4:
    if (ctx->pc == 0x3524B4u) {
        ctx->pc = 0x3524B4u;
            // 0x3524b4: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3524B8u;
        goto label_3524b8;
    }
    ctx->pc = 0x3524B0u;
    SET_GPR_U32(ctx, 31, 0x3524B8u);
    ctx->pc = 0x3524B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3524B0u;
            // 0x3524b4: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352210u;
    goto label_352210;
    ctx->pc = 0x3524B8u;
label_3524b8:
    // 0x3524b8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3524b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_3524bc:
    // 0x3524bc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3524bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_3524c0:
    // 0x3524c0: 0x24842dc0  addiu       $a0, $a0, 0x2DC0
    ctx->pc = 0x3524c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11712));
label_3524c4:
    // 0x3524c4: 0x24a55580  addiu       $a1, $a1, 0x5580
    ctx->pc = 0x3524c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21888));
label_3524c8:
    // 0x3524c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3524c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3524cc:
    // 0x3524cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3524ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3524d0:
    // 0x3524d0: 0xc0556d4  jal         func_155B50
label_3524d4:
    if (ctx->pc == 0x3524D4u) {
        ctx->pc = 0x3524D4u;
            // 0x3524d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3524D8u;
        goto label_3524d8;
    }
    ctx->pc = 0x3524D0u;
    SET_GPR_U32(ctx, 31, 0x3524D8u);
    ctx->pc = 0x3524D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3524D0u;
            // 0x3524d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3524D8u; }
        if (ctx->pc != 0x3524D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3524D8u; }
        if (ctx->pc != 0x3524D8u) { return; }
    }
    ctx->pc = 0x3524D8u;
label_3524d8:
    // 0x3524d8: 0x1000018f  b           . + 4 + (0x18F << 2)
label_3524dc:
    if (ctx->pc == 0x3524DCu) {
        ctx->pc = 0x3524E0u;
        goto label_3524e0;
    }
    ctx->pc = 0x3524D8u;
    {
        const bool branch_taken_0x3524d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3524d8) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x3524E0u;
label_3524e0:
    // 0x3524e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3524e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3524e4:
    // 0x3524e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3524e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3524e8:
    // 0x3524e8: 0xc068d08  jal         func_1A3420
label_3524ec:
    if (ctx->pc == 0x3524ECu) {
        ctx->pc = 0x3524ECu;
            // 0x3524ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3524F0u;
        goto label_3524f0;
    }
    ctx->pc = 0x3524E8u;
    SET_GPR_U32(ctx, 31, 0x3524F0u);
    ctx->pc = 0x3524ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3524E8u;
            // 0x3524ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3524F0u; }
        if (ctx->pc != 0x3524F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3524F0u; }
        if (ctx->pc != 0x3524F0u) { return; }
    }
    ctx->pc = 0x3524F0u;
label_3524f0:
    // 0x3524f0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3524f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3524f4:
    // 0x3524f4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x3524f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
label_3524f8:
    // 0x3524f8: 0x8c64e800  lw          $a0, -0x1800($v1)
    ctx->pc = 0x3524f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961152)));
label_3524fc:
    // 0x3524fc: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3524fcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_352500:
    // 0x352500: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352504:
    // 0x352504: 0x48c3c  dsll32      $s1, $a0, 16
    ctx->pc = 0x352504u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 16));
label_352508:
    // 0x352508: 0x8c63e7f8  lw          $v1, -0x1808($v1)
    ctx->pc = 0x352508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961144)));
label_35250c:
    // 0x35250c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x35250cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_352510:
    // 0x352510: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_352514:
    if (ctx->pc == 0x352514u) {
        ctx->pc = 0x352514u;
            // 0x352514: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->pc = 0x352518u;
        goto label_352518;
    }
    ctx->pc = 0x352510u;
    {
        const bool branch_taken_0x352510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x352514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352510u;
            // 0x352514: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352510) {
            ctx->pc = 0x352538u;
            goto label_352538;
        }
    }
    ctx->pc = 0x352518u;
label_352518:
    // 0x352518: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x352518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_35251c:
    // 0x35251c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x35251cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_352520:
    // 0x352520: 0xc0cd9f0  jal         func_3367C0
label_352524:
    if (ctx->pc == 0x352524u) {
        ctx->pc = 0x352524u;
            // 0x352524: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x352528u;
        goto label_352528;
    }
    ctx->pc = 0x352520u;
    SET_GPR_U32(ctx, 31, 0x352528u);
    ctx->pc = 0x352524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352520u;
            // 0x352524: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352528u; }
        if (ctx->pc != 0x352528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352528u; }
        if (ctx->pc != 0x352528u) { return; }
    }
    ctx->pc = 0x352528u;
label_352528:
    // 0x352528: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x352528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_35252c:
    // 0x35252c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x35252cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352530:
    // 0x352530: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x352530u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_352534:
    // 0x352534: 0xac64e800  sw          $a0, -0x1800($v1)
    ctx->pc = 0x352534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 4));
label_352538:
    // 0x352538: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_35253c:
    // 0x35253c: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x35253cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
label_352540:
    // 0x352540: 0x8c63e800  lw          $v1, -0x1800($v1)
    ctx->pc = 0x352540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961152)));
label_352544:
    // 0x352544: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x352544u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_352548:
    // 0x352548: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_35254c:
    if (ctx->pc == 0x35254Cu) {
        ctx->pc = 0x352550u;
        goto label_352550;
    }
    ctx->pc = 0x352548u;
    {
        const bool branch_taken_0x352548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x352548) {
            ctx->pc = 0x352570u;
            goto label_352570;
        }
    }
    ctx->pc = 0x352550u;
label_352550:
    // 0x352550: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352554:
    // 0x352554: 0x8044e7f8  lb          $a0, -0x1808($v0)
    ctx->pc = 0x352554u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961144)));
label_352558:
    // 0x352558: 0xc0cd948  jal         func_336520
label_35255c:
    if (ctx->pc == 0x35255Cu) {
        ctx->pc = 0x35255Cu;
            // 0x35255c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x352560u;
        goto label_352560;
    }
    ctx->pc = 0x352558u;
    SET_GPR_U32(ctx, 31, 0x352560u);
    ctx->pc = 0x35255Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352558u;
            // 0x35255c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (runtime->hasFunction(0x336520u)) {
        auto targetFn = runtime->lookupFunction(0x336520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352560u; }
        if (ctx->pc != 0x352560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336520_0x336520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352560u; }
        if (ctx->pc != 0x352560u) { return; }
    }
    ctx->pc = 0x352560u;
label_352560:
    // 0x352560: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x352560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_352564:
    // 0x352564: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352568:
    // 0x352568: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x352568u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_35256c:
    // 0x35256c: 0xac64e7f8  sw          $a0, -0x1808($v1)
    ctx->pc = 0x35256cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 4));
label_352570:
    // 0x352570: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352574:
    // 0x352574: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x352574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
label_352578:
    // 0x352578: 0x8c68e7f8  lw          $t0, -0x1808($v1)
    ctx->pc = 0x352578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961144)));
label_35257c:
    // 0x35257c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x35257cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_352580:
    // 0x352580: 0x30a42000  andi        $a0, $a1, 0x2000
    ctx->pc = 0x352580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
label_352584:
    // 0x352584: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352588:
    // 0x352588: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x352588u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_35258c:
    // 0x35258c: 0x8c66e800  lw          $a2, -0x1800($v1)
    ctx->pc = 0x35258cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961152)));
label_352590:
    // 0x352590: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x352590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_352594:
    // 0x352594: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x352594u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_352598:
    // 0x352598: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_35259c:
    // 0x35259c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x35259cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3525a0:
    // 0x3525a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3525a4:
    if (ctx->pc == 0x3525A4u) {
        ctx->pc = 0x3525A4u;
            // 0x3525a4: 0xac66e808  sw          $a2, -0x17F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 6));
        ctx->pc = 0x3525A8u;
        goto label_3525a8;
    }
    ctx->pc = 0x3525A0u;
    {
        const bool branch_taken_0x3525a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3525A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3525A0u;
            // 0x3525a4: 0xac66e808  sw          $a2, -0x17F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3525a0) {
            ctx->pc = 0x3525B4u;
            goto label_3525b4;
        }
    }
    ctx->pc = 0x3525A8u;
label_3525a8:
    // 0x3525a8: 0x28c10028  slti        $at, $a2, 0x28
    ctx->pc = 0x3525a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)40) ? 1 : 0);
label_3525ac:
    // 0x3525ac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3525b0:
    if (ctx->pc == 0x3525B0u) {
        ctx->pc = 0x3525B4u;
        goto label_3525b4;
    }
    ctx->pc = 0x3525ACu;
    {
        const bool branch_taken_0x3525ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3525ac) {
            ctx->pc = 0x3525C0u;
            goto label_3525c0;
        }
    }
    ctx->pc = 0x3525B4u;
label_3525b4:
    // 0x3525b4: 0x30a34000  andi        $v1, $a1, 0x4000
    ctx->pc = 0x3525b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
label_3525b8:
    // 0x3525b8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_3525bc:
    if (ctx->pc == 0x3525BCu) {
        ctx->pc = 0x3525C0u;
        goto label_3525c0;
    }
    ctx->pc = 0x3525B8u;
    {
        const bool branch_taken_0x3525b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3525b8) {
            ctx->pc = 0x3525FCu;
            goto label_3525fc;
        }
    }
    ctx->pc = 0x3525C0u;
label_3525c0:
    // 0x3525c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3525c4:
    if (ctx->pc == 0x3525C4u) {
        ctx->pc = 0x3525C4u;
            // 0x3525c4: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->pc = 0x3525C8u;
        goto label_3525c8;
    }
    ctx->pc = 0x3525C0u;
    {
        const bool branch_taken_0x3525c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3525c0) {
            ctx->pc = 0x3525C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3525C0u;
            // 0x3525c4: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3525DCu;
            goto label_3525dc;
        }
    }
    ctx->pc = 0x3525C8u;
label_3525c8:
    // 0x3525c8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3525c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_3525cc:
    // 0x3525cc: 0xc0538fc  jal         func_14E3F0
label_3525d0:
    if (ctx->pc == 0x3525D0u) {
        ctx->pc = 0x3525D0u;
            // 0x3525d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3525D4u;
        goto label_3525d4;
    }
    ctx->pc = 0x3525CCu;
    SET_GPR_U32(ctx, 31, 0x3525D4u);
    ctx->pc = 0x3525D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3525CCu;
            // 0x3525d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3525D4u; }
        if (ctx->pc != 0x3525D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3525D4u; }
        if (ctx->pc != 0x3525D4u) { return; }
    }
    ctx->pc = 0x3525D4u;
label_3525d4:
    // 0x3525d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3525d8:
    if (ctx->pc == 0x3525D8u) {
        ctx->pc = 0x3525D8u;
            // 0x3525d8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3525DCu;
        goto label_3525dc;
    }
    ctx->pc = 0x3525D4u;
    {
        const bool branch_taken_0x3525d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3525D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3525D4u;
            // 0x3525d8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3525d4) {
            ctx->pc = 0x3525E8u;
            goto label_3525e8;
        }
    }
    ctx->pc = 0x3525DCu;
label_3525dc:
    // 0x3525dc: 0xc0538fc  jal         func_14E3F0
label_3525e0:
    if (ctx->pc == 0x3525E0u) {
        ctx->pc = 0x3525E0u;
            // 0x3525e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3525E4u;
        goto label_3525e4;
    }
    ctx->pc = 0x3525DCu;
    SET_GPR_U32(ctx, 31, 0x3525E4u);
    ctx->pc = 0x3525E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3525DCu;
            // 0x3525e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3525E4u; }
        if (ctx->pc != 0x3525E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3525E4u; }
        if (ctx->pc != 0x3525E4u) { return; }
    }
    ctx->pc = 0x3525E4u;
label_3525e4:
    // 0x3525e4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3525e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3525e8:
    // 0x3525e8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3525e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3525ec:
    // 0x3525ec: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x3525ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_3525f0:
    // 0x3525f0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3525f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3525f4:
    // 0x3525f4: 0x10000148  b           . + 4 + (0x148 << 2)
label_3525f8:
    if (ctx->pc == 0x3525F8u) {
        ctx->pc = 0x3525F8u;
            // 0x3525f8: 0xa060e810  sb          $zero, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3525FCu;
        goto label_3525fc;
    }
    ctx->pc = 0x3525F4u;
    {
        const bool branch_taken_0x3525f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3525F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3525F4u;
            // 0x3525f8: 0xa060e810  sb          $zero, -0x17F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3525f4) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x3525FCu;
label_3525fc:
    // 0x3525fc: 0x10800146  beqz        $a0, . + 4 + (0x146 << 2)
label_352600:
    if (ctx->pc == 0x352600u) {
        ctx->pc = 0x352604u;
        goto label_352604;
    }
    ctx->pc = 0x3525FCu;
    {
        const bool branch_taken_0x3525fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3525fc) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x352604u;
label_352604:
    // 0x352604: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x352604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_352608:
    // 0x352608: 0xc0538fc  jal         func_14E3F0
label_35260c:
    if (ctx->pc == 0x35260Cu) {
        ctx->pc = 0x35260Cu;
            // 0x35260c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352610u;
        goto label_352610;
    }
    ctx->pc = 0x352608u;
    SET_GPR_U32(ctx, 31, 0x352610u);
    ctx->pc = 0x35260Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352608u;
            // 0x35260c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352610u; }
        if (ctx->pc != 0x352610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352610u; }
        if (ctx->pc != 0x352610u) { return; }
    }
    ctx->pc = 0x352610u;
label_352610:
    // 0x352610: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352614:
    // 0x352614: 0x8c44e808  lw          $a0, -0x17F8($v0)
    ctx->pc = 0x352614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
label_352618:
    // 0x352618: 0xc0c06b8  jal         func_301AE0
label_35261c:
    if (ctx->pc == 0x35261Cu) {
        ctx->pc = 0x35261Cu;
            // 0x35261c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x352620u;
        goto label_352620;
    }
    ctx->pc = 0x352618u;
    SET_GPR_U32(ctx, 31, 0x352620u);
    ctx->pc = 0x35261Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352618u;
            // 0x35261c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (runtime->hasFunction(0x301AE0u)) {
        auto targetFn = runtime->lookupFunction(0x301AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352620u; }
        if (ctx->pc != 0x352620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301AE0_0x301ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352620u; }
        if (ctx->pc != 0x352620u) { return; }
    }
    ctx->pc = 0x352620u;
label_352620:
    // 0x352620: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x352620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_352624:
    // 0x352624: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x352624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_352628:
    // 0x352628: 0x24842f40  addiu       $a0, $a0, 0x2F40
    ctx->pc = 0x352628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12096));
label_35262c:
    // 0x35262c: 0x24a55580  addiu       $a1, $a1, 0x5580
    ctx->pc = 0x35262cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21888));
label_352630:
    // 0x352630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x352630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352634:
    // 0x352634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x352634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352638:
    // 0x352638: 0xc0556d4  jal         func_155B50
label_35263c:
    if (ctx->pc == 0x35263Cu) {
        ctx->pc = 0x35263Cu;
            // 0x35263c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352640u;
        goto label_352640;
    }
    ctx->pc = 0x352638u;
    SET_GPR_U32(ctx, 31, 0x352640u);
    ctx->pc = 0x35263Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352638u;
            // 0x35263c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352640u; }
        if (ctx->pc != 0x352640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352640u; }
        if (ctx->pc != 0x352640u) { return; }
    }
    ctx->pc = 0x352640u;
label_352640:
    // 0x352640: 0x3c043f73  lui         $a0, 0x3F73
    ctx->pc = 0x352640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16243 << 16));
label_352644:
    // 0x352644: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x352644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_352648:
    // 0x352648: 0x34853333  ori         $a1, $a0, 0x3333
    ctx->pc = 0x352648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
label_35264c:
    // 0x35264c: 0xac65bf28  sw          $a1, -0x40D8($v1)
    ctx->pc = 0x35264cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950696), GPR_U32(ctx, 5));
label_352650:
    // 0x352650: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x352650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_352654:
    // 0x352654: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352658:
    // 0x352658: 0x1000012f  b           . + 4 + (0x12F << 2)
label_35265c:
    if (ctx->pc == 0x35265Cu) {
        ctx->pc = 0x35265Cu;
            // 0x35265c: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x352660u;
        goto label_352660;
    }
    ctx->pc = 0x352658u;
    {
        const bool branch_taken_0x352658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35265Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352658u;
            // 0x35265c: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352658) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x352660u;
label_352660:
    // 0x352660: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x352660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_352664:
    // 0x352664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x352664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352668:
    // 0x352668: 0xc068d08  jal         func_1A3420
label_35266c:
    if (ctx->pc == 0x35266Cu) {
        ctx->pc = 0x35266Cu;
            // 0x35266c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352670u;
        goto label_352670;
    }
    ctx->pc = 0x352668u;
    SET_GPR_U32(ctx, 31, 0x352670u);
    ctx->pc = 0x35266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352668u;
            // 0x35266c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352670u; }
        if (ctx->pc != 0x352670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352670u; }
        if (ctx->pc != 0x352670u) { return; }
    }
    ctx->pc = 0x352670u;
label_352670:
    // 0x352670: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x352670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_352674:
    // 0x352674: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x352674u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_352678:
    // 0x352678: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x352678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_35267c:
    // 0x35267c: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
label_352680:
    if (ctx->pc == 0x352680u) {
        ctx->pc = 0x352680u;
            // 0x352680: 0x30834000  andi        $v1, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->pc = 0x352684u;
        goto label_352684;
    }
    ctx->pc = 0x35267Cu;
    {
        const bool branch_taken_0x35267c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35267c) {
            ctx->pc = 0x352680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35267Cu;
            // 0x352680: 0x30834000  andi        $v1, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3526F0u;
            goto label_3526f0;
        }
    }
    ctx->pc = 0x352684u;
label_352684:
    // 0x352684: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x352684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_352688:
    // 0x352688: 0xc0538fc  jal         func_14E3F0
label_35268c:
    if (ctx->pc == 0x35268Cu) {
        ctx->pc = 0x35268Cu;
            // 0x35268c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352690u;
        goto label_352690;
    }
    ctx->pc = 0x352688u;
    SET_GPR_U32(ctx, 31, 0x352690u);
    ctx->pc = 0x35268Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352688u;
            // 0x35268c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352690u; }
        if (ctx->pc != 0x352690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352690u; }
        if (ctx->pc != 0x352690u) { return; }
    }
    ctx->pc = 0x352690u;
label_352690:
    // 0x352690: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x352690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352694:
    // 0x352694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x352694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352698:
    // 0x352698: 0xc068d08  jal         func_1A3420
label_35269c:
    if (ctx->pc == 0x35269Cu) {
        ctx->pc = 0x35269Cu;
            // 0x35269c: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x3526A0u;
        goto label_3526a0;
    }
    ctx->pc = 0x352698u;
    SET_GPR_U32(ctx, 31, 0x3526A0u);
    ctx->pc = 0x35269Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352698u;
            // 0x35269c: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526A0u; }
        if (ctx->pc != 0x3526A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526A0u; }
        if (ctx->pc != 0x3526A0u) { return; }
    }
    ctx->pc = 0x3526A0u;
label_3526a0:
    // 0x3526a0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3526a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3526a4:
    // 0x3526a4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3526a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_3526a8:
    // 0x3526a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3526a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_3526ac:
    // 0x3526ac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3526acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_3526b0:
    // 0x3526b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3526b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3526b4:
    // 0x3526b4: 0x2484fe70  addiu       $a0, $a0, -0x190
    ctx->pc = 0x3526b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966896));
label_3526b8:
    // 0x3526b8: 0xa0439720  sb          $v1, -0x68E0($v0)
    ctx->pc = 0x3526b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940448), (uint8_t)GPR_U32(ctx, 3));
label_3526bc:
    // 0x3526bc: 0x24a55580  addiu       $a1, $a1, 0x5580
    ctx->pc = 0x3526bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21888));
label_3526c0:
    // 0x3526c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3526c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3526c4:
    // 0x3526c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3526c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3526c8:
    // 0x3526c8: 0xc0556d4  jal         func_155B50
label_3526cc:
    if (ctx->pc == 0x3526CCu) {
        ctx->pc = 0x3526CCu;
            // 0x3526cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3526D0u;
        goto label_3526d0;
    }
    ctx->pc = 0x3526C8u;
    SET_GPR_U32(ctx, 31, 0x3526D0u);
    ctx->pc = 0x3526CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3526C8u;
            // 0x3526cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526D0u; }
        if (ctx->pc != 0x3526D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3526D0u; }
        if (ctx->pc != 0x3526D0u) { return; }
    }
    ctx->pc = 0x3526D0u;
label_3526d0:
    // 0x3526d0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3526d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_3526d4:
    // 0x3526d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3526d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3526d8:
    // 0x3526d8: 0xac80e7e0  sw          $zero, -0x1820($a0)
    ctx->pc = 0x3526d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961120), GPR_U32(ctx, 0));
label_3526dc:
    // 0x3526dc: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x3526dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
label_3526e0:
    // 0x3526e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3526e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3526e4:
    // 0x3526e4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3526e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3526e8:
    // 0x3526e8: 0x1000010b  b           . + 4 + (0x10B << 2)
label_3526ec:
    if (ctx->pc == 0x3526ECu) {
        ctx->pc = 0x3526ECu;
            // 0x3526ec: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x3526F0u;
        goto label_3526f0;
    }
    ctx->pc = 0x3526E8u;
    {
        const bool branch_taken_0x3526e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3526ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3526E8u;
            // 0x3526ec: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3526e8) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x3526F0u;
label_3526f0:
    // 0x3526f0: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_3526f4:
    if (ctx->pc == 0x3526F4u) {
        ctx->pc = 0x3526F4u;
            // 0x3526f4: 0x30830200  andi        $v1, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x3526F8u;
        goto label_3526f8;
    }
    ctx->pc = 0x3526F0u;
    {
        const bool branch_taken_0x3526f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3526f0) {
            ctx->pc = 0x3526F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3526F0u;
            // 0x3526f4: 0x30830200  andi        $v1, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x352714u;
            goto label_352714;
        }
    }
    ctx->pc = 0x3526F8u;
label_3526f8:
    // 0x3526f8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x3526f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_3526fc:
    // 0x3526fc: 0xc0538fc  jal         func_14E3F0
label_352700:
    if (ctx->pc == 0x352700u) {
        ctx->pc = 0x352700u;
            // 0x352700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352704u;
        goto label_352704;
    }
    ctx->pc = 0x3526FCu;
    SET_GPR_U32(ctx, 31, 0x352704u);
    ctx->pc = 0x352700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3526FCu;
            // 0x352700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352704u; }
        if (ctx->pc != 0x352704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352704u; }
        if (ctx->pc != 0x352704u) { return; }
    }
    ctx->pc = 0x352704u;
label_352704:
    // 0x352704: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x352704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_352708:
    // 0x352708: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_35270c:
    // 0x35270c: 0x10000102  b           . + 4 + (0x102 << 2)
label_352710:
    if (ctx->pc == 0x352710u) {
        ctx->pc = 0x352710u;
            // 0x352710: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x352714u;
        goto label_352714;
    }
    ctx->pc = 0x35270Cu;
    {
        const bool branch_taken_0x35270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35270Cu;
            // 0x352710: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35270c) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x352714u;
label_352714:
    // 0x352714: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_352718:
    if (ctx->pc == 0x352718u) {
        ctx->pc = 0x352718u;
            // 0x352718: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->pc = 0x35271Cu;
        goto label_35271c;
    }
    ctx->pc = 0x352714u;
    {
        const bool branch_taken_0x352714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x352714) {
            ctx->pc = 0x352718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352714u;
            // 0x352718: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x352760u;
            goto label_352760;
        }
    }
    ctx->pc = 0x35271Cu;
label_35271c:
    // 0x35271c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x35271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_352720:
    // 0x352720: 0xc0538fc  jal         func_14E3F0
label_352724:
    if (ctx->pc == 0x352724u) {
        ctx->pc = 0x352724u;
            // 0x352724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352728u;
        goto label_352728;
    }
    ctx->pc = 0x352720u;
    SET_GPR_U32(ctx, 31, 0x352728u);
    ctx->pc = 0x352724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352720u;
            // 0x352724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352728u; }
        if (ctx->pc != 0x352728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352728u; }
        if (ctx->pc != 0x352728u) { return; }
    }
    ctx->pc = 0x352728u;
label_352728:
    // 0x352728: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x352728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35272c:
    // 0x35272c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x35272cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352730:
    // 0x352730: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x352730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_352734:
    // 0x352734: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352738:
    // 0x352738: 0x8c64e808  lw          $a0, -0x17F8($v1)
    ctx->pc = 0x352738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
label_35273c:
    // 0x35273c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x35273cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352740:
    // 0x352740: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x352740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_352744:
    // 0x352744: 0xac64e808  sw          $a0, -0x17F8($v1)
    ctx->pc = 0x352744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 4));
label_352748:
    // 0x352748: 0x28830028  slti        $v1, $a0, 0x28
    ctx->pc = 0x352748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
label_35274c:
    // 0x35274c: 0x146000f2  bnez        $v1, . + 4 + (0xF2 << 2)
label_352750:
    if (ctx->pc == 0x352750u) {
        ctx->pc = 0x352754u;
        goto label_352754;
    }
    ctx->pc = 0x35274Cu;
    {
        const bool branch_taken_0x35274c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35274c) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x352754u;
label_352754:
    // 0x352754: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352758:
    // 0x352758: 0x100000ef  b           . + 4 + (0xEF << 2)
label_35275c:
    if (ctx->pc == 0x35275Cu) {
        ctx->pc = 0x35275Cu;
            // 0x35275c: 0xac60e808  sw          $zero, -0x17F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 0));
        ctx->pc = 0x352760u;
        goto label_352760;
    }
    ctx->pc = 0x352758u;
    {
        const bool branch_taken_0x352758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35275Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352758u;
            // 0x35275c: 0xac60e808  sw          $zero, -0x17F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352758) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x352760u;
label_352760:
    // 0x352760: 0x106000ed  beqz        $v1, . + 4 + (0xED << 2)
label_352764:
    if (ctx->pc == 0x352764u) {
        ctx->pc = 0x352768u;
        goto label_352768;
    }
    ctx->pc = 0x352760u;
    {
        const bool branch_taken_0x352760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x352760) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x352768u;
label_352768:
    // 0x352768: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x352768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_35276c:
    // 0x35276c: 0xc0538fc  jal         func_14E3F0
label_352770:
    if (ctx->pc == 0x352770u) {
        ctx->pc = 0x352770u;
            // 0x352770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352774u;
        goto label_352774;
    }
    ctx->pc = 0x35276Cu;
    SET_GPR_U32(ctx, 31, 0x352774u);
    ctx->pc = 0x352770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35276Cu;
            // 0x352770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352774u; }
        if (ctx->pc != 0x352774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352774u; }
        if (ctx->pc != 0x352774u) { return; }
    }
    ctx->pc = 0x352774u;
label_352774:
    // 0x352774: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x352774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_352778:
    // 0x352778: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_35277c:
    // 0x35277c: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x35277cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_352780:
    // 0x352780: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352784:
    // 0x352784: 0x8c64e808  lw          $a0, -0x17F8($v1)
    ctx->pc = 0x352784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
label_352788:
    // 0x352788: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_35278c:
    // 0x35278c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x35278cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_352790:
    // 0x352790: 0x48100e1  bgez        $a0, . + 4 + (0xE1 << 2)
label_352794:
    if (ctx->pc == 0x352794u) {
        ctx->pc = 0x352794u;
            // 0x352794: 0xac64e808  sw          $a0, -0x17F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 4));
        ctx->pc = 0x352798u;
        goto label_352798;
    }
    ctx->pc = 0x352790u;
    {
        const bool branch_taken_0x352790 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x352794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352790u;
            // 0x352794: 0xac64e808  sw          $a0, -0x17F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352790) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x352798u;
label_352798:
    // 0x352798: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x352798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_35279c:
    // 0x35279c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x35279cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3527a0:
    // 0x3527a0: 0x100000dd  b           . + 4 + (0xDD << 2)
label_3527a4:
    if (ctx->pc == 0x3527A4u) {
        ctx->pc = 0x3527A4u;
            // 0x3527a4: 0xac64e808  sw          $a0, -0x17F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 4));
        ctx->pc = 0x3527A8u;
        goto label_3527a8;
    }
    ctx->pc = 0x3527A0u;
    {
        const bool branch_taken_0x3527a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3527A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3527A0u;
            // 0x3527a4: 0xac64e808  sw          $a0, -0x17F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3527a0) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x3527A8u;
label_3527a8:
    // 0x3527a8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3527a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3527ac:
    // 0x3527ac: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x3527acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
label_3527b0:
    // 0x3527b0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3527b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3527b4:
    // 0x3527b4: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
label_3527b8:
    if (ctx->pc == 0x3527B8u) {
        ctx->pc = 0x3527BCu;
        goto label_3527bc;
    }
    ctx->pc = 0x3527B4u;
    {
        const bool branch_taken_0x3527b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3527b4) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x3527BCu;
label_3527bc:
    // 0x3527bc: 0xc0d4d1c  jal         func_353470
label_3527c0:
    if (ctx->pc == 0x3527C0u) {
        ctx->pc = 0x3527C4u;
        goto label_3527c4;
    }
    ctx->pc = 0x3527BCu;
    SET_GPR_U32(ctx, 31, 0x3527C4u);
    ctx->pc = 0x353470u;
    if (runtime->hasFunction(0x353470u)) {
        auto targetFn = runtime->lookupFunction(0x353470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3527C4u; }
        if (ctx->pc != 0x3527C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353470_0x353470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3527C4u; }
        if (ctx->pc != 0x3527C4u) { return; }
    }
    ctx->pc = 0x3527C4u;
label_3527c4:
    // 0x3527c4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3527c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3527c8:
    // 0x3527c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3527c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3527cc:
    // 0x3527cc: 0x8c47e808  lw          $a3, -0x17F8($v0)
    ctx->pc = 0x3527ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
label_3527d0:
    // 0x3527d0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3527d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
label_3527d4:
    // 0x3527d4: 0xa065f35b  sb          $a1, -0xCA5($v1)
    ctx->pc = 0x3527d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964059), (uint8_t)GPR_U32(ctx, 5));
label_3527d8:
    // 0x3527d8: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x3527d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
label_3527dc:
    // 0x3527dc: 0x24060063  addiu       $a2, $zero, 0x63
    ctx->pc = 0x3527dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_3527e0:
    // 0x3527e0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3527e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
label_3527e4:
    // 0x3527e4: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x3527e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
label_3527e8:
    // 0x3527e8: 0xa040f35c  sb          $zero, -0xCA4($v0)
    ctx->pc = 0x3527e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964060), (uint8_t)GPR_U32(ctx, 0));
label_3527ec:
    // 0x3527ec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3527ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3527f0:
    // 0x3527f0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3527f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3527f4:
    // 0x3527f4: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x3527f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3527f8:
    // 0x3527f8: 0xa446bf0a  sh          $a2, -0x40F6($v0)
    ctx->pc = 0x3527f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950666), (uint16_t)GPR_U32(ctx, 6));
label_3527fc:
    // 0x3527fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3527fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_352800:
    // 0x352800: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_352804:
    // 0x352804: 0xa087bed0  sb          $a3, -0x4130($a0)
    ctx->pc = 0x352804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294950608), (uint8_t)GPR_U32(ctx, 7));
label_352808:
    // 0x352808: 0xa043bf15  sb          $v1, -0x40EB($v0)
    ctx->pc = 0x352808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950677), (uint8_t)GPR_U32(ctx, 3));
label_35280c:
    // 0x35280c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_352810:
    // 0x352810: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_352814:
    // 0x352814: 0xa043bf16  sb          $v1, -0x40EA($v0)
    ctx->pc = 0x352814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950678), (uint8_t)GPR_U32(ctx, 3));
label_352818:
    // 0x352818: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_35281c:
    // 0x35281c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x35281cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_352820:
    // 0x352820: 0xac44e808  sw          $a0, -0x17F8($v0)
    ctx->pc = 0x352820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 4));
label_352824:
    // 0x352824: 0x24639811  addiu       $v1, $v1, -0x67EF
    ctx->pc = 0x352824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940689));
label_352828:
    // 0x352828: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x352828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_35282c:
    // 0x35282c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x35282cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
label_352830:
    // 0x352830: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x352830u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_352834:
    // 0x352834: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x352834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_352838:
    // 0x352838: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x352838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_35283c:
    // 0x35283c: 0xa086f35a  sb          $a2, -0xCA6($a0)
    ctx->pc = 0x35283cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294964058), (uint8_t)GPR_U32(ctx, 6));
label_352840:
    // 0x352840: 0x24429810  addiu       $v0, $v0, -0x67F0
    ctx->pc = 0x352840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940688));
label_352844:
    // 0x352844: 0x240400fd  addiu       $a0, $zero, 0xFD
    ctx->pc = 0x352844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
label_352848:
    // 0x352848: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x352848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_35284c:
    // 0x35284c: 0x80a50000  lb          $a1, 0x0($a1)
    ctx->pc = 0x35284cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_352850:
    // 0x352850: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_352854:
    // 0x352854: 0xa065befc  sb          $a1, -0x4104($v1)
    ctx->pc = 0x352854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950652), (uint8_t)GPR_U32(ctx, 5));
label_352858:
    // 0x352858: 0x9042befc  lbu         $v0, -0x4104($v0)
    ctx->pc = 0x352858u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950652)));
label_35285c:
    // 0x35285c: 0x14440026  bne         $v0, $a0, . + 4 + (0x26 << 2)
label_352860:
    if (ctx->pc == 0x352860u) {
        ctx->pc = 0x352864u;
        goto label_352864;
    }
    ctx->pc = 0x35285Cu;
    {
        const bool branch_taken_0x35285c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x35285c) {
            ctx->pc = 0x3528F8u;
            goto label_3528f8;
        }
    }
    ctx->pc = 0x352864u;
label_352864:
    // 0x352864: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x352864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
label_352868:
    // 0x352868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x352868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35286c:
    // 0x35286c: 0x24a5e830  addiu       $a1, $a1, -0x17D0
    ctx->pc = 0x35286cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961200));
label_352870:
    // 0x352870: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x352870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_352874:
    // 0x352874: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x352874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_352878:
    // 0x352878: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x352878u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_35287c:
    // 0x35287c: 0x28820021  slti        $v0, $a0, 0x21
    ctx->pc = 0x35287cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
label_352880:
    // 0x352880: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_352884:
    if (ctx->pc == 0x352884u) {
        ctx->pc = 0x352888u;
        goto label_352888;
    }
    ctx->pc = 0x352880u;
    {
        const bool branch_taken_0x352880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x352880) {
            ctx->pc = 0x3528A0u;
            goto label_3528a0;
        }
    }
    ctx->pc = 0x352888u;
label_352888:
    // 0x352888: 0x28810026  slti        $at, $a0, 0x26
    ctx->pc = 0x352888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)38) ? 1 : 0);
label_35288c:
    // 0x35288c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_352890:
    if (ctx->pc == 0x352890u) {
        ctx->pc = 0x352894u;
        goto label_352894;
    }
    ctx->pc = 0x35288Cu;
    {
        const bool branch_taken_0x35288c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35288c) {
            ctx->pc = 0x3528A0u;
            goto label_3528a0;
        }
    }
    ctx->pc = 0x352894u;
label_352894:
    // 0x352894: 0x10000004  b           . + 4 + (0x4 << 2)
label_352898:
    if (ctx->pc == 0x352898u) {
        ctx->pc = 0x352898u;
            // 0x352898: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x35289Cu;
        goto label_35289c;
    }
    ctx->pc = 0x352894u;
    {
        const bool branch_taken_0x352894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352894u;
            // 0x352898: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352894) {
            ctx->pc = 0x3528A8u;
            goto label_3528a8;
        }
    }
    ctx->pc = 0x35289Cu;
label_35289c:
    // 0x35289c: 0x0  nop
    ctx->pc = 0x35289cu;
    // NOP
label_3528a0:
    // 0x3528a0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3528a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3528a4:
    // 0x3528a4: 0x0  nop
    ctx->pc = 0x3528a4u;
    // NOP
label_3528a8:
    // 0x3528a8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3528a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3528ac:
    // 0x3528ac: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x3528acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_3528b0:
    // 0x3528b0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3528b0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_3528b4:
    // 0x3528b4: 0x28c20030  slti        $v0, $a2, 0x30
    ctx->pc = 0x3528b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)48) ? 1 : 0);
label_3528b8:
    // 0x3528b8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_3528bc:
    if (ctx->pc == 0x3528BCu) {
        ctx->pc = 0x3528BCu;
            // 0x3528bc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3528C0u;
        goto label_3528c0;
    }
    ctx->pc = 0x3528B8u;
    {
        const bool branch_taken_0x3528b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3528BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3528B8u;
            // 0x3528bc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3528b8) {
            ctx->pc = 0x352874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_352874;
        }
    }
    ctx->pc = 0x3528C0u;
label_3528c0:
    // 0x3528c0: 0x3c1101e0  lui         $s1, 0x1E0
    ctx->pc = 0x3528c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)480 << 16));
label_3528c4:
    // 0x3528c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3528c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3528c8:
    // 0x3528c8: 0x2631bed0  addiu       $s1, $s1, -0x4130
    ctx->pc = 0x3528c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950608));
label_3528cc:
    // 0x3528cc: 0xc0cf7a4  jal         func_33DE90
label_3528d0:
    if (ctx->pc == 0x3528D0u) {
        ctx->pc = 0x3528D4u;
        goto label_3528d4;
    }
    ctx->pc = 0x3528CCu;
    SET_GPR_U32(ctx, 31, 0x3528D4u);
    ctx->pc = 0x33DE90u;
    if (runtime->hasFunction(0x33DE90u)) {
        auto targetFn = runtime->lookupFunction(0x33DE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528D4u; }
        if (ctx->pc != 0x3528D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033DE90_0x33de90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3528D4u; }
        if (ctx->pc != 0x3528D4u) { return; }
    }
    ctx->pc = 0x3528D4u;
label_3528d4:
    // 0x3528d4: 0xa222002d  sb          $v0, 0x2D($s1)
    ctx->pc = 0x3528d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 45), (uint8_t)GPR_U32(ctx, 2));
label_3528d8:
    // 0x3528d8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3528d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3528dc:
    // 0x3528dc: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x3528dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
label_3528e0:
    // 0x3528e0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3528e0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_3528e4:
    // 0x3528e4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3528e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_3528e8:
    // 0x3528e8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_3528ec:
    if (ctx->pc == 0x3528ECu) {
        ctx->pc = 0x3528ECu;
            // 0x3528ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x3528F0u;
        goto label_3528f0;
    }
    ctx->pc = 0x3528E8u;
    {
        const bool branch_taken_0x3528e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3528ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3528E8u;
            // 0x3528ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3528e8) {
            ctx->pc = 0x3528CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3528cc;
        }
    }
    ctx->pc = 0x3528F0u;
label_3528f0:
    // 0x3528f0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3528f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3528f4:
    // 0x3528f4: 0xa040befc  sb          $zero, -0x4104($v0)
    ctx->pc = 0x3528f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950652), (uint8_t)GPR_U32(ctx, 0));
label_3528f8:
    // 0x3528f8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3528f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3528fc:
    // 0x3528fc: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x3528fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_352900:
    // 0x352900: 0x9042befc  lbu         $v0, -0x4104($v0)
    ctx->pc = 0x352900u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950652)));
label_352904:
    // 0x352904: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_352908:
    if (ctx->pc == 0x352908u) {
        ctx->pc = 0x35290Cu;
        goto label_35290c;
    }
    ctx->pc = 0x352904u;
    {
        const bool branch_taken_0x352904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x352904) {
            ctx->pc = 0x352934u;
            goto label_352934;
        }
    }
    ctx->pc = 0x35290Cu;
label_35290c:
    // 0x35290c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_352910:
    // 0x352910: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x352910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_352914:
    // 0x352914: 0xa040befd  sb          $zero, -0x4103($v0)
    ctx->pc = 0x352914u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950653), (uint8_t)GPR_U32(ctx, 0));
label_352918:
    // 0x352918: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x352918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35291c:
    // 0x35291c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35291cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_352920:
    // 0x352920: 0xa043befe  sb          $v1, -0x4102($v0)
    ctx->pc = 0x352920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950654), (uint8_t)GPR_U32(ctx, 3));
label_352924:
    // 0x352924: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x352924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_352928:
    // 0x352928: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35292c:
    // 0x35292c: 0xa064beff  sb          $a0, -0x4101($v1)
    ctx->pc = 0x35292cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950655), (uint8_t)GPR_U32(ctx, 4));
label_352930:
    // 0x352930: 0xa040befc  sb          $zero, -0x4104($v0)
    ctx->pc = 0x352930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950652), (uint8_t)GPR_U32(ctx, 0));
label_352934:
    // 0x352934: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_352938:
    // 0x352938: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x352938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
label_35293c:
    // 0x35293c: 0x9042befc  lbu         $v0, -0x4104($v0)
    ctx->pc = 0x35293cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950652)));
label_352940:
    // 0x352940: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_352944:
    if (ctx->pc == 0x352944u) {
        ctx->pc = 0x352948u;
        goto label_352948;
    }
    ctx->pc = 0x352940u;
    {
        const bool branch_taken_0x352940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x352940) {
            ctx->pc = 0x352974u;
            goto label_352974;
        }
    }
    ctx->pc = 0x352948u;
label_352948:
    // 0x352948: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x352948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_35294c:
    // 0x35294c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35294cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_352950:
    // 0x352950: 0xa043befd  sb          $v1, -0x4103($v0)
    ctx->pc = 0x352950u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950653), (uint8_t)GPR_U32(ctx, 3));
label_352954:
    // 0x352954: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x352954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_352958:
    // 0x352958: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_35295c:
    // 0x35295c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x35295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_352960:
    // 0x352960: 0xa044befe  sb          $a0, -0x4102($v0)
    ctx->pc = 0x352960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950654), (uint8_t)GPR_U32(ctx, 4));
label_352964:
    // 0x352964: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_352968:
    // 0x352968: 0xa043beff  sb          $v1, -0x4101($v0)
    ctx->pc = 0x352968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950655), (uint8_t)GPR_U32(ctx, 3));
label_35296c:
    // 0x35296c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35296cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_352970:
    // 0x352970: 0xa040befc  sb          $zero, -0x4104($v0)
    ctx->pc = 0x352970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950652), (uint8_t)GPR_U32(ctx, 0));
label_352974:
    // 0x352974: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352978:
    // 0x352978: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x352978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35297c:
    // 0x35297c: 0xac40e808  sw          $zero, -0x17F8($v0)
    ctx->pc = 0x35297cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 0));
label_352980:
    // 0x352980: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x352980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352984:
    // 0x352984: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x352984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_352988:
    // 0x352988: 0xa043bf00  sb          $v1, -0x4100($v0)
    ctx->pc = 0x352988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950656), (uint8_t)GPR_U32(ctx, 3));
label_35298c:
    // 0x35298c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x35298cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
label_352990:
    // 0x352990: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x352990u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
label_352994:
    // 0x352994: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
label_352998:
    if (ctx->pc == 0x352998u) {
        ctx->pc = 0x352998u;
            // 0x352998: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x35299Cu;
        goto label_35299c;
    }
    ctx->pc = 0x352994u;
    {
        const bool branch_taken_0x352994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x352994) {
            ctx->pc = 0x352998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352994u;
            // 0x352998: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3529B4u;
            goto label_3529b4;
        }
    }
    ctx->pc = 0x35299Cu;
label_35299c:
    // 0x35299c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35299cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3529a0:
    // 0x3529a0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3529a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3529a4:
    // 0x3529a4: 0xac43e808  sw          $v1, -0x17F8($v0)
    ctx->pc = 0x3529a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 3));
label_3529a8:
    // 0x3529a8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3529a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3529ac:
    // 0x3529ac: 0xa044bf00  sb          $a0, -0x4100($v0)
    ctx->pc = 0x3529acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950656), (uint8_t)GPR_U32(ctx, 4));
label_3529b0:
    // 0x3529b0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x3529b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3529b4:
    // 0x3529b4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3529b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3529b8:
    // 0x3529b8: 0xa443bf0c  sh          $v1, -0x40F4($v0)
    ctx->pc = 0x3529b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950668), (uint16_t)GPR_U32(ctx, 3));
label_3529bc:
    // 0x3529bc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3529bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3529c0:
    // 0x3529c0: 0xa443bf0e  sh          $v1, -0x40F2($v0)
    ctx->pc = 0x3529c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950670), (uint16_t)GPR_U32(ctx, 3));
label_3529c4:
    // 0x3529c4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3529c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3529c8:
    // 0x3529c8: 0xa443bf10  sh          $v1, -0x40F0($v0)
    ctx->pc = 0x3529c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950672), (uint16_t)GPR_U32(ctx, 3));
label_3529cc:
    // 0x3529cc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3529ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3529d0:
    // 0x3529d0: 0xa443bf12  sh          $v1, -0x40EE($v0)
    ctx->pc = 0x3529d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950674), (uint16_t)GPR_U32(ctx, 3));
label_3529d4:
    // 0x3529d4: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3529d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
label_3529d8:
    // 0x3529d8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3529d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_3529dc:
    // 0x3529dc: 0xac40d918  sw          $zero, -0x26E8($v0)
    ctx->pc = 0x3529dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957336), GPR_U32(ctx, 0));
label_3529e0:
    // 0x3529e0: 0x24639870  addiu       $v1, $v1, -0x6790
    ctx->pc = 0x3529e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940784));
label_3529e4:
    // 0x3529e4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3529e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3529e8:
    // 0x3529e8: 0x8044bed0  lb          $a0, -0x4130($v0)
    ctx->pc = 0x3529e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950608)));
label_3529ec:
    // 0x3529ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3529ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3529f0:
    // 0x3529f0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3529f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3529f4:
    // 0x3529f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3529f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3529f8:
    // 0x3529f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3529f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3529fc:
    // 0x3529fc: 0x60f809  jalr        $v1
label_352a00:
    if (ctx->pc == 0x352A00u) {
        ctx->pc = 0x352A00u;
            // 0x352a00: 0xac43bf20  sw          $v1, -0x40E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950688), GPR_U32(ctx, 3));
        ctx->pc = 0x352A04u;
        goto label_352a04;
    }
    ctx->pc = 0x3529FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x352A04u);
        ctx->pc = 0x352A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3529FCu;
            // 0x352a00: 0xac43bf20  sw          $v1, -0x40E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x352A04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x352A04u; }
            if (ctx->pc != 0x352A04u) { return; }
        }
        }
    }
    ctx->pc = 0x352A04u;
label_352a04:
    // 0x352a04: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x352a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_352a08:
    // 0x352a08: 0xc0cc518  jal         func_331460
label_352a0c:
    if (ctx->pc == 0x352A0Cu) {
        ctx->pc = 0x352A0Cu;
            // 0x352a0c: 0x90449720  lbu         $a0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->pc = 0x352A10u;
        goto label_352a10;
    }
    ctx->pc = 0x352A08u;
    SET_GPR_U32(ctx, 31, 0x352A10u);
    ctx->pc = 0x352A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352A08u;
            // 0x352a0c: 0x90449720  lbu         $a0, -0x68E0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x331460u;
    if (runtime->hasFunction(0x331460u)) {
        auto targetFn = runtime->lookupFunction(0x331460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A10u; }
        if (ctx->pc != 0x352A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00331460_0x331460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A10u; }
        if (ctx->pc != 0x352A10u) { return; }
    }
    ctx->pc = 0x352A10u;
label_352a10:
    // 0x352a10: 0xc0d4884  jal         func_352210
label_352a14:
    if (ctx->pc == 0x352A14u) {
        ctx->pc = 0x352A18u;
        goto label_352a18;
    }
    ctx->pc = 0x352A10u;
    SET_GPR_U32(ctx, 31, 0x352A18u);
    ctx->pc = 0x352210u;
    goto label_352210;
    ctx->pc = 0x352A18u;
label_352a18:
    // 0x352a18: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x352a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_352a1c:
    // 0x352a1c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352a20:
    // 0x352a20: 0x1000003d  b           . + 4 + (0x3D << 2)
label_352a24:
    if (ctx->pc == 0x352A24u) {
        ctx->pc = 0x352A24u;
            // 0x352a24: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x352A28u;
        goto label_352a28;
    }
    ctx->pc = 0x352A20u;
    {
        const bool branch_taken_0x352a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352A20u;
            // 0x352a24: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352a20) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x352A28u;
label_352a28:
    // 0x352a28: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352a2c:
    // 0x352a2c: 0x3c066666  lui         $a2, 0x6666
    ctx->pc = 0x352a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_352a30:
    // 0x352a30: 0x8c44e808  lw          $a0, -0x17F8($v0)
    ctx->pc = 0x352a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
label_352a34:
    // 0x352a34: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x352a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_352a38:
    // 0x352a38: 0x34c76667  ori         $a3, $a2, 0x6667
    ctx->pc = 0x352a38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26215);
label_352a3c:
    // 0x352a3c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352a40:
    // 0x352a40: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x352a40u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_352a44:
    // 0x352a44: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x352a44u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_352a48:
    // 0x352a48: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352a4c:
    // 0x352a4c: 0x4010  mfhi        $t0
    ctx->pc = 0x352a4cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_352a50:
    // 0x352a50: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x352a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_352a54:
    // 0x352a54: 0xac68e800  sw          $t0, -0x1800($v1)
    ctx->pc = 0x352a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 8));
label_352a58:
    // 0x352a58: 0x0  nop
    ctx->pc = 0x352a58u;
    // NOP
label_352a5c:
    // 0x352a5c: 0x1810  mfhi        $v1
    ctx->pc = 0x352a5cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_352a60:
    // 0x352a60: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x352a60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_352a64:
    // 0x352a64: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x352a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_352a68:
    // 0x352a68: 0xc0c06b8  jal         func_301AE0
label_352a6c:
    if (ctx->pc == 0x352A6Cu) {
        ctx->pc = 0x352A6Cu;
            // 0x352a6c: 0xac43e7f8  sw          $v1, -0x1808($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 3));
        ctx->pc = 0x352A70u;
        goto label_352a70;
    }
    ctx->pc = 0x352A68u;
    SET_GPR_U32(ctx, 31, 0x352A70u);
    ctx->pc = 0x352A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352A68u;
            // 0x352a6c: 0xac43e7f8  sw          $v1, -0x1808($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (runtime->hasFunction(0x301AE0u)) {
        auto targetFn = runtime->lookupFunction(0x301AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A70u; }
        if (ctx->pc != 0x352A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301AE0_0x301ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A70u; }
        if (ctx->pc != 0x352A70u) { return; }
    }
    ctx->pc = 0x352A70u;
label_352a70:
    // 0x352a70: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x352a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_352a74:
    // 0x352a74: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x352a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_352a78:
    // 0x352a78: 0x24842f40  addiu       $a0, $a0, 0x2F40
    ctx->pc = 0x352a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12096));
label_352a7c:
    // 0x352a7c: 0x24a55580  addiu       $a1, $a1, 0x5580
    ctx->pc = 0x352a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21888));
label_352a80:
    // 0x352a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x352a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352a84:
    // 0x352a84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x352a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352a88:
    // 0x352a88: 0xc0556d4  jal         func_155B50
label_352a8c:
    if (ctx->pc == 0x352A8Cu) {
        ctx->pc = 0x352A8Cu;
            // 0x352a8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352A90u;
        goto label_352a90;
    }
    ctx->pc = 0x352A88u;
    SET_GPR_U32(ctx, 31, 0x352A90u);
    ctx->pc = 0x352A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352A88u;
            // 0x352a8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A90u; }
        if (ctx->pc != 0x352A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352A90u; }
        if (ctx->pc != 0x352A90u) { return; }
    }
    ctx->pc = 0x352A90u;
label_352a90:
    // 0x352a90: 0x3c043f73  lui         $a0, 0x3F73
    ctx->pc = 0x352a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16243 << 16));
label_352a94:
    // 0x352a94: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x352a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_352a98:
    // 0x352a98: 0x34853333  ori         $a1, $a0, 0x3333
    ctx->pc = 0x352a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
label_352a9c:
    // 0x352a9c: 0xac65bf28  sw          $a1, -0x40D8($v1)
    ctx->pc = 0x352a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950696), GPR_U32(ctx, 5));
label_352aa0:
    // 0x352aa0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x352aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_352aa4:
    // 0x352aa4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352aa8:
    // 0x352aa8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_352aac:
    if (ctx->pc == 0x352AACu) {
        ctx->pc = 0x352AACu;
            // 0x352aac: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x352AB0u;
        goto label_352ab0;
    }
    ctx->pc = 0x352AA8u;
    {
        const bool branch_taken_0x352aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352AA8u;
            // 0x352aac: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352aa8) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x352AB0u;
label_352ab0:
    // 0x352ab0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x352ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_352ab4:
    // 0x352ab4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352ab8:
    // 0x352ab8: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x352ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
label_352abc:
    // 0x352abc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x352abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_352ac0:
    // 0x352ac0: 0x2881001f  slti        $at, $a0, 0x1F
    ctx->pc = 0x352ac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
label_352ac4:
    // 0x352ac4: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_352ac8:
    if (ctx->pc == 0x352AC8u) {
        ctx->pc = 0x352AC8u;
            // 0x352ac8: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->pc = 0x352ACCu;
        goto label_352acc;
    }
    ctx->pc = 0x352AC4u;
    {
        const bool branch_taken_0x352ac4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x352AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352AC4u;
            // 0x352ac8: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352ac4) {
            ctx->pc = 0x352B18u;
            goto label_352b18;
        }
    }
    ctx->pc = 0x352ACCu;
label_352acc:
    // 0x352acc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x352accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_352ad0:
    // 0x352ad0: 0xc0558e0  jal         func_156380
label_352ad4:
    if (ctx->pc == 0x352AD4u) {
        ctx->pc = 0x352AD4u;
            // 0x352ad4: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
        ctx->pc = 0x352AD8u;
        goto label_352ad8;
    }
    ctx->pc = 0x352AD0u;
    SET_GPR_U32(ctx, 31, 0x352AD8u);
    ctx->pc = 0x352AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352AD0u;
            // 0x352ad4: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352AD8u; }
        if (ctx->pc != 0x352AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352AD8u; }
        if (ctx->pc != 0x352AD8u) { return; }
    }
    ctx->pc = 0x352AD8u;
label_352ad8:
    // 0x352ad8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352adc:
    // 0x352adc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x352adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_352ae0:
    // 0x352ae0: 0xa040e820  sb          $zero, -0x17E0($v0)
    ctx->pc = 0x352ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 0));
label_352ae4:
    // 0x352ae4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x352ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_352ae8:
    // 0x352ae8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352aec:
    // 0x352aec: 0xa043e818  sb          $v1, -0x17E8($v0)
    ctx->pc = 0x352aecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
label_352af0:
    // 0x352af0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352af4:
    // 0x352af4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x352af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_352af8:
    // 0x352af8: 0xac44e800  sw          $a0, -0x1800($v0)
    ctx->pc = 0x352af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 4));
label_352afc:
    // 0x352afc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x352afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_352b00:
    // 0x352b00: 0xac60e7f8  sw          $zero, -0x1808($v1)
    ctx->pc = 0x352b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 0));
label_352b04:
    // 0x352b04: 0xc0c358c  jal         func_30D630
label_352b08:
    if (ctx->pc == 0x352B08u) {
        ctx->pc = 0x352B08u;
            // 0x352b08: 0xa0409780  sb          $zero, -0x6880($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x352B0Cu;
        goto label_352b0c;
    }
    ctx->pc = 0x352B04u;
    SET_GPR_U32(ctx, 31, 0x352B0Cu);
    ctx->pc = 0x352B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352B04u;
            // 0x352b08: 0xa0409780  sb          $zero, -0x6880($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D630u;
    if (runtime->hasFunction(0x30D630u)) {
        auto targetFn = runtime->lookupFunction(0x30D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B0Cu; }
        if (ctx->pc != 0x352B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030D630_0x30d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B0Cu; }
        if (ctx->pc != 0x352B0Cu) { return; }
    }
    ctx->pc = 0x352B0Cu;
label_352b0c:
    // 0x352b0c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x352b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_352b10:
    // 0x352b10: 0xc0558e0  jal         func_156380
label_352b14:
    if (ctx->pc == 0x352B14u) {
        ctx->pc = 0x352B14u;
            // 0x352b14: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
        ctx->pc = 0x352B18u;
        goto label_352b18;
    }
    ctx->pc = 0x352B10u;
    SET_GPR_U32(ctx, 31, 0x352B18u);
    ctx->pc = 0x352B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352B10u;
            // 0x352b14: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B18u; }
        if (ctx->pc != 0x352B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B18u; }
        if (ctx->pc != 0x352B18u) { return; }
    }
    ctx->pc = 0x352B18u;
label_352b18:
    // 0x352b18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x352b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_352b1c:
    // 0x352b1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x352b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_352b20:
    // 0x352b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x352b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_352b24:
    // 0x352b24: 0x3e00008  jr          $ra
label_352b28:
    if (ctx->pc == 0x352B28u) {
        ctx->pc = 0x352B28u;
            // 0x352b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x352B2Cu;
        goto label_352b2c;
    }
    ctx->pc = 0x352B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352B24u;
            // 0x352b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352B2Cu;
label_352b2c:
    // 0x352b2c: 0x0  nop
    ctx->pc = 0x352b2cu;
    // NOP
label_352b30:
    // 0x352b30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x352b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_352b34:
    // 0x352b34: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352b38:
    // 0x352b38: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x352b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_352b3c:
    // 0x352b3c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x352b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_352b40:
    // 0x352b40: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x352b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_352b44:
    // 0x352b44: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x352b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_352b48:
    // 0x352b48: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x352b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_352b4c:
    // 0x352b4c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x352b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_352b50:
    // 0x352b50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x352b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_352b54:
    // 0x352b54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x352b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_352b58:
    // 0x352b58: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x352b58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
label_352b5c:
    // 0x352b5c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_352b60:
    if (ctx->pc == 0x352B60u) {
        ctx->pc = 0x352B60u;
            // 0x352b60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352B64u;
        goto label_352b64;
    }
    ctx->pc = 0x352B5Cu;
    {
        const bool branch_taken_0x352b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x352B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352B5Cu;
            // 0x352b60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b5c) {
            ctx->pc = 0x352B74u;
            goto label_352b74;
        }
    }
    ctx->pc = 0x352B64u;
label_352b64:
    // 0x352b64: 0xc055728  jal         func_155CA0
label_352b68:
    if (ctx->pc == 0x352B68u) {
        ctx->pc = 0x352B6Cu;
        goto label_352b6c;
    }
    ctx->pc = 0x352B64u;
    SET_GPR_U32(ctx, 31, 0x352B6Cu);
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B6Cu; }
        if (ctx->pc != 0x352B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B6Cu; }
        if (ctx->pc != 0x352B6Cu) { return; }
    }
    ctx->pc = 0x352B6Cu;
label_352b6c:
    // 0x352b6c: 0x1000008b  b           . + 4 + (0x8B << 2)
label_352b70:
    if (ctx->pc == 0x352B70u) {
        ctx->pc = 0x352B70u;
            // 0x352b70: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x352B74u;
        goto label_352b74;
    }
    ctx->pc = 0x352B6Cu;
    {
        const bool branch_taken_0x352b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352B6Cu;
            // 0x352b70: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b6c) {
            ctx->pc = 0x352D9Cu;
            goto label_352d9c;
        }
    }
    ctx->pc = 0x352B74u;
label_352b74:
    // 0x352b74: 0xc0cc088  jal         func_330220
label_352b78:
    if (ctx->pc == 0x352B78u) {
        ctx->pc = 0x352B7Cu;
        goto label_352b7c;
    }
    ctx->pc = 0x352B74u;
    SET_GPR_U32(ctx, 31, 0x352B7Cu);
    ctx->pc = 0x330220u;
    if (runtime->hasFunction(0x330220u)) {
        auto targetFn = runtime->lookupFunction(0x330220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B7Cu; }
        if (ctx->pc != 0x352B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330220_0x330220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352B7Cu; }
        if (ctx->pc != 0x352B7Cu) { return; }
    }
    ctx->pc = 0x352B7Cu;
label_352b7c:
    // 0x352b7c: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x352b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_352b80:
    // 0x352b80: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x352b80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_352b84:
    // 0x352b84: 0x86510004  lh          $s1, 0x4($s2)
    ctx->pc = 0x352b84u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_352b88:
    // 0x352b88: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x352b88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_352b8c:
    // 0x352b8c: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
label_352b90:
    if (ctx->pc == 0x352B90u) {
        ctx->pc = 0x352B90u;
            // 0x352b90: 0x86500002  lh          $s0, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x352B94u;
        goto label_352b94;
    }
    ctx->pc = 0x352B8Cu;
    {
        const bool branch_taken_0x352b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x352B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352B8Cu;
            // 0x352b90: 0x86500002  lh          $s0, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352b8c) {
            ctx->pc = 0x352D98u;
            goto label_352d98;
        }
    }
    ctx->pc = 0x352B94u;
label_352b94:
    // 0x352b94: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x352b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_352b98:
    // 0x352b98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x352b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_352b9c:
    // 0x352b9c: 0x248455e0  addiu       $a0, $a0, 0x55E0
    ctx->pc = 0x352b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21984));
label_352ba0:
    // 0x352ba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x352ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_352ba4:
    // 0x352ba4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x352ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352ba8:
    // 0x352ba8: 0x600008  jr          $v1
label_352bac:
    if (ctx->pc == 0x352BACu) {
        ctx->pc = 0x352BB0u;
        goto label_352bb0;
    }
    ctx->pc = 0x352BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x352BB0u: goto label_352bb0;
            case 0x352C94u: goto label_352c94;
            case 0x352D28u: goto label_352d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x352BB0u;
label_352bb0:
    // 0x352bb0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x352bb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352bb4:
    // 0x352bb4: 0x2633fff0  addiu       $s3, $s1, -0x10
    ctx->pc = 0x352bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_352bb8:
    // 0x352bb8: 0x82480000  lb          $t0, 0x0($s2)
    ctx->pc = 0x352bb8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_352bbc:
    // 0x352bbc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x352bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
label_352bc0:
    // 0x352bc0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x352bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_352bc4:
    // 0x352bc4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x352bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_352bc8:
    // 0x352bc8: 0x2484ec50  addiu       $a0, $a0, -0x13B0
    ctx->pc = 0x352bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962256));
label_352bcc:
    // 0x352bcc: 0x24639800  addiu       $v1, $v1, -0x6800
    ctx->pc = 0x352bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940672));
label_352bd0:
    // 0x352bd0: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x352bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_352bd4:
    // 0x352bd4: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x352bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
label_352bd8:
    // 0x352bd8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x352bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_352bdc:
    // 0x352bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x352bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_352be0:
    // 0x352be0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x352be0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_352be4:
    // 0x352be4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x352be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_352be8:
    // 0x352be8: 0x2a7a021  addu        $s4, $s5, $a3
    ctx->pc = 0x352be8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_352bec:
    // 0x352bec: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x352becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_352bf0:
    // 0x352bf0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x352bf0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_352bf4:
    // 0x352bf4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x352bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_352bf8:
    // 0x352bf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x352bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_352bfc:
    // 0x352bfc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352c00:
    // 0x352c00: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x352c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_352c04:
    // 0x352c04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x352c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_352c08:
    // 0x352c08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x352c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_352c0c:
    // 0x352c0c: 0xc0c0ab8  jal         func_302AE0
label_352c10:
    if (ctx->pc == 0x352C10u) {
        ctx->pc = 0x352C10u;
            // 0x352c10: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x352C14u;
        goto label_352c14;
    }
    ctx->pc = 0x352C0Cu;
    SET_GPR_U32(ctx, 31, 0x352C14u);
    ctx->pc = 0x352C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352C0Cu;
            // 0x352c10: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352C14u; }
        if (ctx->pc != 0x352C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352C14u; }
        if (ctx->pc != 0x352C14u) { return; }
    }
    ctx->pc = 0x352C14u;
label_352c14:
    // 0x352c14: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x352c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_352c18:
    // 0x352c18: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x352c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_352c1c:
    // 0x352c1c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x352c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_352c20:
    // 0x352c20: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x352c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_352c24:
    // 0x352c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352c28:
    // 0x352c28: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x352c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_352c2c:
    // 0x352c2c: 0x32820007  andi        $v0, $s4, 0x7
    ctx->pc = 0x352c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
label_352c30:
    // 0x352c30: 0x6810004  bgez        $s4, . + 4 + (0x4 << 2)
label_352c34:
    if (ctx->pc == 0x352C34u) {
        ctx->pc = 0x352C34u;
            // 0x352c34: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->pc = 0x352C38u;
        goto label_352c38;
    }
    ctx->pc = 0x352C30u;
    {
        const bool branch_taken_0x352c30 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x352C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352C30u;
            // 0x352c34: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c30) {
            ctx->pc = 0x352C44u;
            goto label_352c44;
        }
    }
    ctx->pc = 0x352C38u;
label_352c38:
    // 0x352c38: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_352c3c:
    if (ctx->pc == 0x352C3Cu) {
        ctx->pc = 0x352C3Cu;
            // 0x352c3c: 0x24940  sll         $t1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->pc = 0x352C40u;
        goto label_352c40;
    }
    ctx->pc = 0x352C38u;
    {
        const bool branch_taken_0x352c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352c38) {
            ctx->pc = 0x352C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352C38u;
            // 0x352c3c: 0x24940  sll         $t1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352C48u;
            goto label_352c48;
        }
    }
    ctx->pc = 0x352C40u;
label_352c40:
    // 0x352c40: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x352c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_352c44:
    // 0x352c44: 0x24940  sll         $t1, $v0, 5
    ctx->pc = 0x352c44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_352c48:
    // 0x352c48: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_352c4c:
    if (ctx->pc == 0x352C4Cu) {
        ctx->pc = 0x352C4Cu;
            // 0x352c4c: 0x1410c3  sra         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 3));
        ctx->pc = 0x352C50u;
        goto label_352c50;
    }
    ctx->pc = 0x352C48u;
    {
        const bool branch_taken_0x352c48 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x352C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352C48u;
            // 0x352c4c: 0x1410c3  sra         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c48) {
            ctx->pc = 0x352C58u;
            goto label_352c58;
        }
    }
    ctx->pc = 0x352C50u;
label_352c50:
    // 0x352c50: 0x26820007  addiu       $v0, $s4, 0x7
    ctx->pc = 0x352c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
label_352c54:
    // 0x352c54: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x352c54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_352c58:
    // 0x352c58: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x352c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_352c5c:
    // 0x352c5c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x352c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_352c60:
    // 0x352c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x352c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_352c64:
    // 0x352c64: 0x244a00c0  addiu       $t2, $v0, 0xC0
    ctx->pc = 0x352c64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_352c68:
    // 0x352c68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x352c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_352c6c:
    // 0x352c6c: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x352c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
label_352c70:
    // 0x352c70: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x352c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_352c74:
    // 0x352c74: 0xc0c0ba8  jal         func_302EA0
label_352c78:
    if (ctx->pc == 0x352C78u) {
        ctx->pc = 0x352C78u;
            // 0x352c78: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352C7Cu;
        goto label_352c7c;
    }
    ctx->pc = 0x352C74u;
    SET_GPR_U32(ctx, 31, 0x352C7Cu);
    ctx->pc = 0x352C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352C74u;
            // 0x352c78: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352C7Cu; }
        if (ctx->pc != 0x352C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352C7Cu; }
        if (ctx->pc != 0x352C7Cu) { return; }
    }
    ctx->pc = 0x352C7Cu;
label_352c7c:
    // 0x352c7c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x352c7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_352c80:
    // 0x352c80: 0x2aa3000a  slti        $v1, $s5, 0xA
    ctx->pc = 0x352c80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
label_352c84:
    // 0x352c84: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_352c88:
    if (ctx->pc == 0x352C88u) {
        ctx->pc = 0x352C88u;
            // 0x352c88: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x352C8Cu;
        goto label_352c8c;
    }
    ctx->pc = 0x352C84u;
    {
        const bool branch_taken_0x352c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352C84u;
            // 0x352c88: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352c84) {
            ctx->pc = 0x352BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_352bb8;
        }
    }
    ctx->pc = 0x352C8Cu;
label_352c8c:
    // 0x352c8c: 0x10000042  b           . + 4 + (0x42 << 2)
label_352c90:
    if (ctx->pc == 0x352C90u) {
        ctx->pc = 0x352C94u;
        goto label_352c94;
    }
    ctx->pc = 0x352C8Cu;
    {
        const bool branch_taken_0x352c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352c8c) {
            ctx->pc = 0x352D98u;
            goto label_352d98;
        }
    }
    ctx->pc = 0x352C94u;
label_352c94:
    // 0x352c94: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352c98:
    // 0x352c98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x352c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_352c9c:
    // 0x352c9c: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x352c9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
label_352ca0:
    // 0x352ca0: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
label_352ca4:
    if (ctx->pc == 0x352CA4u) {
        ctx->pc = 0x352CA4u;
            // 0x352ca4: 0x26130080  addiu       $s3, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x352CA8u;
        goto label_352ca8;
    }
    ctx->pc = 0x352CA0u;
    {
        const bool branch_taken_0x352ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x352ca0) {
            ctx->pc = 0x352CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352CA0u;
            // 0x352ca4: 0x26130080  addiu       $s3, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352CE8u;
            goto label_352ce8;
        }
    }
    ctx->pc = 0x352CA8u;
label_352ca8:
    // 0x352ca8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x352ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352cac:
    // 0x352cac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x352cacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352cb0:
    // 0x352cb0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x352cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_352cb4:
    // 0x352cb4: 0x266300cc  addiu       $v1, $s3, 0xCC
    ctx->pc = 0x352cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 204));
label_352cb8:
    // 0x352cb8: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x352cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
label_352cbc:
    // 0x352cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x352cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_352cc0:
    // 0x352cc0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x352cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_352cc4:
    // 0x352cc4: 0xc0c0ab8  jal         func_302AE0
label_352cc8:
    if (ctx->pc == 0x352CC8u) {
        ctx->pc = 0x352CC8u;
            // 0x352cc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352CCCu;
        goto label_352ccc;
    }
    ctx->pc = 0x352CC4u;
    SET_GPR_U32(ctx, 31, 0x352CCCu);
    ctx->pc = 0x352CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352CC4u;
            // 0x352cc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352CCCu; }
        if (ctx->pc != 0x352CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352CCCu; }
        if (ctx->pc != 0x352CCCu) { return; }
    }
    ctx->pc = 0x352CCCu;
label_352ccc:
    // 0x352ccc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x352cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_352cd0:
    // 0x352cd0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x352cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_352cd4:
    // 0x352cd4: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x352cd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_352cd8:
    // 0x352cd8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_352cdc:
    if (ctx->pc == 0x352CDCu) {
        ctx->pc = 0x352CDCu;
            // 0x352cdc: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->pc = 0x352CE0u;
        goto label_352ce0;
    }
    ctx->pc = 0x352CD8u;
    {
        const bool branch_taken_0x352cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352CD8u;
            // 0x352cdc: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352cd8) {
            ctx->pc = 0x352CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_352cb0;
        }
    }
    ctx->pc = 0x352CE0u;
label_352ce0:
    // 0x352ce0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_352ce4:
    if (ctx->pc == 0x352CE4u) {
        ctx->pc = 0x352CE8u;
        goto label_352ce8;
    }
    ctx->pc = 0x352CE0u;
    {
        const bool branch_taken_0x352ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ce0) {
            ctx->pc = 0x352D98u;
            goto label_352d98;
        }
    }
    ctx->pc = 0x352CE8u;
label_352ce8:
    // 0x352ce8: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x352ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_352cec:
    // 0x352cec: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x352cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_352cf0:
    // 0x352cf0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x352cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_352cf4:
    // 0x352cf4: 0x264300cc  addiu       $v1, $s2, 0xCC
    ctx->pc = 0x352cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
label_352cf8:
    // 0x352cf8: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x352cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
label_352cfc:
    // 0x352cfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x352cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_352d00:
    // 0x352d00: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x352d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_352d04:
    // 0x352d04: 0xc0c0ab8  jal         func_302AE0
label_352d08:
    if (ctx->pc == 0x352D08u) {
        ctx->pc = 0x352D08u;
            // 0x352d08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352D0Cu;
        goto label_352d0c;
    }
    ctx->pc = 0x352D04u;
    SET_GPR_U32(ctx, 31, 0x352D0Cu);
    ctx->pc = 0x352D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352D04u;
            // 0x352d08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352D0Cu; }
        if (ctx->pc != 0x352D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352D0Cu; }
        if (ctx->pc != 0x352D0Cu) { return; }
    }
    ctx->pc = 0x352D0Cu;
label_352d0c:
    // 0x352d0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x352d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_352d10:
    // 0x352d10: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x352d10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_352d14:
    // 0x352d14: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x352d14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_352d18:
    // 0x352d18: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_352d1c:
    if (ctx->pc == 0x352D1Cu) {
        ctx->pc = 0x352D1Cu;
            // 0x352d1c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x352D20u;
        goto label_352d20;
    }
    ctx->pc = 0x352D18u;
    {
        const bool branch_taken_0x352d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352D18u;
            // 0x352d1c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352d18) {
            ctx->pc = 0x352CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_352cf0;
        }
    }
    ctx->pc = 0x352D20u;
label_352d20:
    // 0x352d20: 0x1000001d  b           . + 4 + (0x1D << 2)
label_352d24:
    if (ctx->pc == 0x352D24u) {
        ctx->pc = 0x352D28u;
        goto label_352d28;
    }
    ctx->pc = 0x352D20u;
    {
        const bool branch_taken_0x352d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352d20) {
            ctx->pc = 0x352D98u;
            goto label_352d98;
        }
    }
    ctx->pc = 0x352D28u;
label_352d28:
    // 0x352d28: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x352d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_352d2c:
    // 0x352d2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x352d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_352d30:
    // 0x352d30: 0x24849778  addiu       $a0, $a0, -0x6888
    ctx->pc = 0x352d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940536));
label_352d34:
    // 0x352d34: 0xc0c0ab8  jal         func_302AE0
label_352d38:
    if (ctx->pc == 0x352D38u) {
        ctx->pc = 0x352D38u;
            // 0x352d38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352D3Cu;
        goto label_352d3c;
    }
    ctx->pc = 0x352D34u;
    SET_GPR_U32(ctx, 31, 0x352D3Cu);
    ctx->pc = 0x352D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352D34u;
            // 0x352d38: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352D3Cu; }
        if (ctx->pc != 0x352D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352D3Cu; }
        if (ctx->pc != 0x352D3Cu) { return; }
    }
    ctx->pc = 0x352D3Cu;
label_352d3c:
    // 0x352d3c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x352d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_352d40:
    // 0x352d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x352d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_352d44:
    // 0x352d44: 0x24849700  addiu       $a0, $a0, -0x6900
    ctx->pc = 0x352d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940416));
label_352d48:
    // 0x352d48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x352d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_352d4c:
    // 0x352d4c: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x352d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
label_352d50:
    // 0x352d50: 0xc0c0b2c  jal         func_302CB0
label_352d54:
    if (ctx->pc == 0x352D54u) {
        ctx->pc = 0x352D54u;
            // 0x352d54: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x352D58u;
        goto label_352d58;
    }
    ctx->pc = 0x352D50u;
    SET_GPR_U32(ctx, 31, 0x352D58u);
    ctx->pc = 0x352D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352D50u;
            // 0x352d54: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (runtime->hasFunction(0x302CB0u)) {
        auto targetFn = runtime->lookupFunction(0x302CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352D58u; }
        if (ctx->pc != 0x352D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302CB0_0x302cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352D58u; }
        if (ctx->pc != 0x352D58u) { return; }
    }
    ctx->pc = 0x352D58u;
label_352d58:
    // 0x352d58: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x352d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_352d5c:
    // 0x352d5c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x352d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_352d60:
    // 0x352d60: 0x2484970c  addiu       $a0, $a0, -0x68F4
    ctx->pc = 0x352d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940428));
label_352d64:
    // 0x352d64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x352d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_352d68:
    // 0x352d68: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x352d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
label_352d6c:
    // 0x352d6c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x352d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_352d70:
    // 0x352d70: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x352d70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_352d74:
    // 0x352d74: 0xc0c0ad0  jal         func_302B40
label_352d78:
    if (ctx->pc == 0x352D78u) {
        ctx->pc = 0x352D78u;
            // 0x352d78: 0x240a00a0  addiu       $t2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x352D7Cu;
        goto label_352d7c;
    }
    ctx->pc = 0x352D74u;
    SET_GPR_U32(ctx, 31, 0x352D7Cu);
    ctx->pc = 0x352D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352D74u;
            // 0x352d78: 0x240a00a0  addiu       $t2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (runtime->hasFunction(0x302B40u)) {
        auto targetFn = runtime->lookupFunction(0x302B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352D7Cu; }
        if (ctx->pc != 0x352D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302B40_0x302b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352D7Cu; }
        if (ctx->pc != 0x352D7Cu) { return; }
    }
    ctx->pc = 0x352D7Cu;
label_352d7c:
    // 0x352d7c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x352d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_352d80:
    // 0x352d80: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x352d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_352d84:
    // 0x352d84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x352d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_352d88:
    // 0x352d88: 0x24849718  addiu       $a0, $a0, -0x68E8
    ctx->pc = 0x352d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940440));
label_352d8c:
    // 0x352d8c: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x352d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
label_352d90:
    // 0x352d90: 0xc0c0b2c  jal         func_302CB0
label_352d94:
    if (ctx->pc == 0x352D94u) {
        ctx->pc = 0x352D94u;
            // 0x352d94: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x352D98u;
        goto label_352d98;
    }
    ctx->pc = 0x352D90u;
    SET_GPR_U32(ctx, 31, 0x352D98u);
    ctx->pc = 0x352D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352D90u;
            // 0x352d94: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (runtime->hasFunction(0x302CB0u)) {
        auto targetFn = runtime->lookupFunction(0x302CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352D98u; }
        if (ctx->pc != 0x352D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302CB0_0x302cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352D98u; }
        if (ctx->pc != 0x352D98u) { return; }
    }
    ctx->pc = 0x352D98u;
label_352d98:
    // 0x352d98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x352d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_352d9c:
    // 0x352d9c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x352d9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_352da0:
    // 0x352da0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x352da0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_352da4:
    // 0x352da4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x352da4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_352da8:
    // 0x352da8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x352da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_352dac:
    // 0x352dac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x352dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_352db0:
    // 0x352db0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x352db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_352db4:
    // 0x352db4: 0x3e00008  jr          $ra
label_352db8:
    if (ctx->pc == 0x352DB8u) {
        ctx->pc = 0x352DB8u;
            // 0x352db8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x352DBCu;
        goto label_352dbc;
    }
    ctx->pc = 0x352DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352DB4u;
            // 0x352db8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352DBCu;
label_352dbc:
    // 0x352dbc: 0x0  nop
    ctx->pc = 0x352dbcu;
    // NOP
label_352dc0:
    // 0x352dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x352dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_352dc4:
    // 0x352dc4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352dc8:
    // 0x352dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x352dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_352dcc:
    // 0x352dcc: 0x9043e818  lbu         $v1, -0x17E8($v0)
    ctx->pc = 0x352dccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
label_352dd0:
    // 0x352dd0: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x352dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_352dd4:
    // 0x352dd4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_352dd8:
    if (ctx->pc == 0x352DD8u) {
        ctx->pc = 0x352DDCu;
        goto label_352ddc;
    }
    ctx->pc = 0x352DD4u;
    {
        const bool branch_taken_0x352dd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x352dd4) {
            ctx->pc = 0x352DF8u;
            goto label_352df8;
        }
    }
    ctx->pc = 0x352DDCu;
label_352ddc:
    // 0x352ddc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x352ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_352de0:
    // 0x352de0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_352de4:
    if (ctx->pc == 0x352DE4u) {
        ctx->pc = 0x352DE8u;
        goto label_352de8;
    }
    ctx->pc = 0x352DE0u;
    {
        const bool branch_taken_0x352de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x352de0) {
            ctx->pc = 0x352DF8u;
            goto label_352df8;
        }
    }
    ctx->pc = 0x352DE8u;
label_352de8:
    // 0x352de8: 0xc055728  jal         func_155CA0
label_352dec:
    if (ctx->pc == 0x352DECu) {
        ctx->pc = 0x352DF0u;
        goto label_352df0;
    }
    ctx->pc = 0x352DE8u;
    SET_GPR_U32(ctx, 31, 0x352DF0u);
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352DF0u; }
        if (ctx->pc != 0x352DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352DF0u; }
        if (ctx->pc != 0x352DF0u) { return; }
    }
    ctx->pc = 0x352DF0u;
label_352df0:
    // 0x352df0: 0x10000036  b           . + 4 + (0x36 << 2)
label_352df4:
    if (ctx->pc == 0x352DF4u) {
        ctx->pc = 0x352DF4u;
            // 0x352df4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x352DF8u;
        goto label_352df8;
    }
    ctx->pc = 0x352DF0u;
    {
        const bool branch_taken_0x352df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352DF0u;
            // 0x352df4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352df0) {
            ctx->pc = 0x352ECCu;
            goto label_352ecc;
        }
    }
    ctx->pc = 0x352DF8u;
label_352df8:
    // 0x352df8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x352df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_352dfc:
    // 0x352dfc: 0x8c46e808  lw          $a2, -0x17F8($v0)
    ctx->pc = 0x352dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
label_352e00:
    // 0x352e00: 0x28c20028  slti        $v0, $a2, 0x28
    ctx->pc = 0x352e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)40) ? 1 : 0);
label_352e04:
    // 0x352e04: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_352e08:
    if (ctx->pc == 0x352E08u) {
        ctx->pc = 0x352E08u;
            // 0x352e08: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x352E0Cu;
        goto label_352e0c;
    }
    ctx->pc = 0x352E04u;
    {
        const bool branch_taken_0x352e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x352e04) {
            ctx->pc = 0x352E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352E04u;
            // 0x352e08: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352E68u;
            goto label_352e68;
        }
    }
    ctx->pc = 0x352E0Cu;
label_352e0c:
    // 0x352e0c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x352e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_352e10:
    // 0x352e10: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x352e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_352e14:
    // 0x352e14: 0x24849724  addiu       $a0, $a0, -0x68DC
    ctx->pc = 0x352e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940452));
label_352e18:
    // 0x352e18: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x352e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_352e1c:
    // 0x352e1c: 0xc0c0b14  jal         func_302C50
label_352e20:
    if (ctx->pc == 0x352E20u) {
        ctx->pc = 0x352E20u;
            // 0x352e20: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->pc = 0x352E24u;
        goto label_352e24;
    }
    ctx->pc = 0x352E1Cu;
    SET_GPR_U32(ctx, 31, 0x352E24u);
    ctx->pc = 0x352E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352E1Cu;
            // 0x352e20: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352E24u; }
        if (ctx->pc != 0x352E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352E24u; }
        if (ctx->pc != 0x352E24u) { return; }
    }
    ctx->pc = 0x352E24u;
label_352e24:
    // 0x352e24: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x352e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_352e28:
    // 0x352e28: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x352e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_352e2c:
    // 0x352e2c: 0x24849730  addiu       $a0, $a0, -0x68D0
    ctx->pc = 0x352e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940464));
label_352e30:
    // 0x352e30: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x352e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_352e34:
    // 0x352e34: 0x2407a829  addiu       $a3, $zero, -0x57D7
    ctx->pc = 0x352e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
label_352e38:
    // 0x352e38: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x352e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_352e3c:
    // 0x352e3c: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x352e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_352e40:
    // 0x352e40: 0xc0c0ad0  jal         func_302B40
label_352e44:
    if (ctx->pc == 0x352E44u) {
        ctx->pc = 0x352E44u;
            // 0x352e44: 0x240a00ff  addiu       $t2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x352E48u;
        goto label_352e48;
    }
    ctx->pc = 0x352E40u;
    SET_GPR_U32(ctx, 31, 0x352E48u);
    ctx->pc = 0x352E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352E40u;
            // 0x352e44: 0x240a00ff  addiu       $t2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (runtime->hasFunction(0x302B40u)) {
        auto targetFn = runtime->lookupFunction(0x302B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352E48u; }
        if (ctx->pc != 0x352E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302B40_0x302b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352E48u; }
        if (ctx->pc != 0x352E48u) { return; }
    }
    ctx->pc = 0x352E48u;
label_352e48:
    // 0x352e48: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x352e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_352e4c:
    // 0x352e4c: 0x24050240  addiu       $a1, $zero, 0x240
    ctx->pc = 0x352e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_352e50:
    // 0x352e50: 0x2484973c  addiu       $a0, $a0, -0x68C4
    ctx->pc = 0x352e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940476));
label_352e54:
    // 0x352e54: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x352e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_352e58:
    // 0x352e58: 0xc0c0b14  jal         func_302C50
label_352e5c:
    if (ctx->pc == 0x352E5Cu) {
        ctx->pc = 0x352E5Cu;
            // 0x352e5c: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->pc = 0x352E60u;
        goto label_352e60;
    }
    ctx->pc = 0x352E58u;
    SET_GPR_U32(ctx, 31, 0x352E60u);
    ctx->pc = 0x352E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352E58u;
            // 0x352e5c: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352E60u; }
        if (ctx->pc != 0x352E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352E60u; }
        if (ctx->pc != 0x352E60u) { return; }
    }
    ctx->pc = 0x352E60u;
label_352e60:
    // 0x352e60: 0x10000019  b           . + 4 + (0x19 << 2)
label_352e64:
    if (ctx->pc == 0x352E64u) {
        ctx->pc = 0x352E68u;
        goto label_352e68;
    }
    ctx->pc = 0x352E60u;
    {
        const bool branch_taken_0x352e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352e60) {
            ctx->pc = 0x352EC8u;
            goto label_352ec8;
        }
    }
    ctx->pc = 0x352E68u;
label_352e68:
    // 0x352e68: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x352e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_352e6c:
    // 0x352e6c: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x352e6cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_352e70:
    // 0x352e70: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x352e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_352e74:
    // 0x352e74: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x352e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_352e78:
    // 0x352e78: 0x2810  mfhi        $a1
    ctx->pc = 0x352e78u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_352e7c:
    // 0x352e7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352e80:
    // 0x352e80: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x352e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_352e84:
    // 0x352e84: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x352e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_352e88:
    // 0x352e88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x352e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_352e8c:
    // 0x352e8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x352e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_352e90:
    // 0x352e90: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x352e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_352e94:
    // 0x352e94: 0x1810  mfhi        $v1
    ctx->pc = 0x352e94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_352e98:
    // 0x352e98: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x352e98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_352e9c:
    // 0x352e9c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x352e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_352ea0:
    // 0x352ea0: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x352ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_352ea4:
    // 0x352ea4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_352ea8:
    if (ctx->pc == 0x352EA8u) {
        ctx->pc = 0x352EA8u;
            // 0x352ea8: 0x24660070  addiu       $a2, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->pc = 0x352EACu;
        goto label_352eac;
    }
    ctx->pc = 0x352EA4u;
    {
        const bool branch_taken_0x352ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x352EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352EA4u;
            // 0x352ea8: 0x24660070  addiu       $a2, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352ea4) {
            ctx->pc = 0x352EB8u;
            goto label_352eb8;
        }
    }
    ctx->pc = 0x352EACu;
label_352eac:
    // 0x352eac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x352eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_352eb0:
    // 0x352eb0: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_352eb4:
    if (ctx->pc == 0x352EB4u) {
        ctx->pc = 0x352EB8u;
        goto label_352eb8;
    }
    ctx->pc = 0x352EB0u;
    {
        const bool branch_taken_0x352eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x352eb0) {
            ctx->pc = 0x352EBCu;
            goto label_352ebc;
        }
    }
    ctx->pc = 0x352EB8u;
label_352eb8:
    // 0x352eb8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x352eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_352ebc:
    // 0x352ebc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x352ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_352ec0:
    // 0x352ec0: 0xc0c0ab8  jal         func_302AE0
label_352ec4:
    if (ctx->pc == 0x352EC4u) {
        ctx->pc = 0x352EC4u;
            // 0x352ec4: 0x2484976c  addiu       $a0, $a0, -0x6894 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940524));
        ctx->pc = 0x352EC8u;
        goto label_352ec8;
    }
    ctx->pc = 0x352EC0u;
    SET_GPR_U32(ctx, 31, 0x352EC8u);
    ctx->pc = 0x352EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352EC0u;
            // 0x352ec4: 0x2484976c  addiu       $a0, $a0, -0x6894 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940524));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352EC8u; }
        if (ctx->pc != 0x352EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352EC8u; }
        if (ctx->pc != 0x352EC8u) { return; }
    }
    ctx->pc = 0x352EC8u;
label_352ec8:
    // 0x352ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x352ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_352ecc:
    // 0x352ecc: 0x3e00008  jr          $ra
label_352ed0:
    if (ctx->pc == 0x352ED0u) {
        ctx->pc = 0x352ED0u;
            // 0x352ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x352ED4u;
        goto label_352ed4;
    }
    ctx->pc = 0x352ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352ECCu;
            // 0x352ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352ED4u;
label_352ed4:
    // 0x352ed4: 0x0  nop
    ctx->pc = 0x352ed4u;
    // NOP
label_352ed8:
    // 0x352ed8: 0x0  nop
    ctx->pc = 0x352ed8u;
    // NOP
label_352edc:
    // 0x352edc: 0x0  nop
    ctx->pc = 0x352edcu;
    // NOP
    ctx->pc = 0x352ee0u;
}
