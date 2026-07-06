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

// Function: sub_00272500
// Address: 0x272500 - 0x272e98
void sub_00272500_0x272500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272500_0x272500");
#endif

    switch (ctx->pc) {
        case 0x272500u: goto label_272500;
        case 0x272504u: goto label_272504;
        case 0x272508u: goto label_272508;
        case 0x27250cu: goto label_27250c;
        case 0x272510u: goto label_272510;
        case 0x272514u: goto label_272514;
        case 0x272518u: goto label_272518;
        case 0x27251cu: goto label_27251c;
        case 0x272520u: goto label_272520;
        case 0x272524u: goto label_272524;
        case 0x272528u: goto label_272528;
        case 0x27252cu: goto label_27252c;
        case 0x272530u: goto label_272530;
        case 0x272534u: goto label_272534;
        case 0x272538u: goto label_272538;
        case 0x27253cu: goto label_27253c;
        case 0x272540u: goto label_272540;
        case 0x272544u: goto label_272544;
        case 0x272548u: goto label_272548;
        case 0x27254cu: goto label_27254c;
        case 0x272550u: goto label_272550;
        case 0x272554u: goto label_272554;
        case 0x272558u: goto label_272558;
        case 0x27255cu: goto label_27255c;
        case 0x272560u: goto label_272560;
        case 0x272564u: goto label_272564;
        case 0x272568u: goto label_272568;
        case 0x27256cu: goto label_27256c;
        case 0x272570u: goto label_272570;
        case 0x272574u: goto label_272574;
        case 0x272578u: goto label_272578;
        case 0x27257cu: goto label_27257c;
        case 0x272580u: goto label_272580;
        case 0x272584u: goto label_272584;
        case 0x272588u: goto label_272588;
        case 0x27258cu: goto label_27258c;
        case 0x272590u: goto label_272590;
        case 0x272594u: goto label_272594;
        case 0x272598u: goto label_272598;
        case 0x27259cu: goto label_27259c;
        case 0x2725a0u: goto label_2725a0;
        case 0x2725a4u: goto label_2725a4;
        case 0x2725a8u: goto label_2725a8;
        case 0x2725acu: goto label_2725ac;
        case 0x2725b0u: goto label_2725b0;
        case 0x2725b4u: goto label_2725b4;
        case 0x2725b8u: goto label_2725b8;
        case 0x2725bcu: goto label_2725bc;
        case 0x2725c0u: goto label_2725c0;
        case 0x2725c4u: goto label_2725c4;
        case 0x2725c8u: goto label_2725c8;
        case 0x2725ccu: goto label_2725cc;
        case 0x2725d0u: goto label_2725d0;
        case 0x2725d4u: goto label_2725d4;
        case 0x2725d8u: goto label_2725d8;
        case 0x2725dcu: goto label_2725dc;
        case 0x2725e0u: goto label_2725e0;
        case 0x2725e4u: goto label_2725e4;
        case 0x2725e8u: goto label_2725e8;
        case 0x2725ecu: goto label_2725ec;
        case 0x2725f0u: goto label_2725f0;
        case 0x2725f4u: goto label_2725f4;
        case 0x2725f8u: goto label_2725f8;
        case 0x2725fcu: goto label_2725fc;
        case 0x272600u: goto label_272600;
        case 0x272604u: goto label_272604;
        case 0x272608u: goto label_272608;
        case 0x27260cu: goto label_27260c;
        case 0x272610u: goto label_272610;
        case 0x272614u: goto label_272614;
        case 0x272618u: goto label_272618;
        case 0x27261cu: goto label_27261c;
        case 0x272620u: goto label_272620;
        case 0x272624u: goto label_272624;
        case 0x272628u: goto label_272628;
        case 0x27262cu: goto label_27262c;
        case 0x272630u: goto label_272630;
        case 0x272634u: goto label_272634;
        case 0x272638u: goto label_272638;
        case 0x27263cu: goto label_27263c;
        case 0x272640u: goto label_272640;
        case 0x272644u: goto label_272644;
        case 0x272648u: goto label_272648;
        case 0x27264cu: goto label_27264c;
        case 0x272650u: goto label_272650;
        case 0x272654u: goto label_272654;
        case 0x272658u: goto label_272658;
        case 0x27265cu: goto label_27265c;
        case 0x272660u: goto label_272660;
        case 0x272664u: goto label_272664;
        case 0x272668u: goto label_272668;
        case 0x27266cu: goto label_27266c;
        case 0x272670u: goto label_272670;
        case 0x272674u: goto label_272674;
        case 0x272678u: goto label_272678;
        case 0x27267cu: goto label_27267c;
        case 0x272680u: goto label_272680;
        case 0x272684u: goto label_272684;
        case 0x272688u: goto label_272688;
        case 0x27268cu: goto label_27268c;
        case 0x272690u: goto label_272690;
        case 0x272694u: goto label_272694;
        case 0x272698u: goto label_272698;
        case 0x27269cu: goto label_27269c;
        case 0x2726a0u: goto label_2726a0;
        case 0x2726a4u: goto label_2726a4;
        case 0x2726a8u: goto label_2726a8;
        case 0x2726acu: goto label_2726ac;
        case 0x2726b0u: goto label_2726b0;
        case 0x2726b4u: goto label_2726b4;
        case 0x2726b8u: goto label_2726b8;
        case 0x2726bcu: goto label_2726bc;
        case 0x2726c0u: goto label_2726c0;
        case 0x2726c4u: goto label_2726c4;
        case 0x2726c8u: goto label_2726c8;
        case 0x2726ccu: goto label_2726cc;
        case 0x2726d0u: goto label_2726d0;
        case 0x2726d4u: goto label_2726d4;
        case 0x2726d8u: goto label_2726d8;
        case 0x2726dcu: goto label_2726dc;
        case 0x2726e0u: goto label_2726e0;
        case 0x2726e4u: goto label_2726e4;
        case 0x2726e8u: goto label_2726e8;
        case 0x2726ecu: goto label_2726ec;
        case 0x2726f0u: goto label_2726f0;
        case 0x2726f4u: goto label_2726f4;
        case 0x2726f8u: goto label_2726f8;
        case 0x2726fcu: goto label_2726fc;
        case 0x272700u: goto label_272700;
        case 0x272704u: goto label_272704;
        case 0x272708u: goto label_272708;
        case 0x27270cu: goto label_27270c;
        case 0x272710u: goto label_272710;
        case 0x272714u: goto label_272714;
        case 0x272718u: goto label_272718;
        case 0x27271cu: goto label_27271c;
        case 0x272720u: goto label_272720;
        case 0x272724u: goto label_272724;
        case 0x272728u: goto label_272728;
        case 0x27272cu: goto label_27272c;
        case 0x272730u: goto label_272730;
        case 0x272734u: goto label_272734;
        case 0x272738u: goto label_272738;
        case 0x27273cu: goto label_27273c;
        case 0x272740u: goto label_272740;
        case 0x272744u: goto label_272744;
        case 0x272748u: goto label_272748;
        case 0x27274cu: goto label_27274c;
        case 0x272750u: goto label_272750;
        case 0x272754u: goto label_272754;
        case 0x272758u: goto label_272758;
        case 0x27275cu: goto label_27275c;
        case 0x272760u: goto label_272760;
        case 0x272764u: goto label_272764;
        case 0x272768u: goto label_272768;
        case 0x27276cu: goto label_27276c;
        case 0x272770u: goto label_272770;
        case 0x272774u: goto label_272774;
        case 0x272778u: goto label_272778;
        case 0x27277cu: goto label_27277c;
        case 0x272780u: goto label_272780;
        case 0x272784u: goto label_272784;
        case 0x272788u: goto label_272788;
        case 0x27278cu: goto label_27278c;
        case 0x272790u: goto label_272790;
        case 0x272794u: goto label_272794;
        case 0x272798u: goto label_272798;
        case 0x27279cu: goto label_27279c;
        case 0x2727a0u: goto label_2727a0;
        case 0x2727a4u: goto label_2727a4;
        case 0x2727a8u: goto label_2727a8;
        case 0x2727acu: goto label_2727ac;
        case 0x2727b0u: goto label_2727b0;
        case 0x2727b4u: goto label_2727b4;
        case 0x2727b8u: goto label_2727b8;
        case 0x2727bcu: goto label_2727bc;
        case 0x2727c0u: goto label_2727c0;
        case 0x2727c4u: goto label_2727c4;
        case 0x2727c8u: goto label_2727c8;
        case 0x2727ccu: goto label_2727cc;
        case 0x2727d0u: goto label_2727d0;
        case 0x2727d4u: goto label_2727d4;
        case 0x2727d8u: goto label_2727d8;
        case 0x2727dcu: goto label_2727dc;
        case 0x2727e0u: goto label_2727e0;
        case 0x2727e4u: goto label_2727e4;
        case 0x2727e8u: goto label_2727e8;
        case 0x2727ecu: goto label_2727ec;
        case 0x2727f0u: goto label_2727f0;
        case 0x2727f4u: goto label_2727f4;
        case 0x2727f8u: goto label_2727f8;
        case 0x2727fcu: goto label_2727fc;
        case 0x272800u: goto label_272800;
        case 0x272804u: goto label_272804;
        case 0x272808u: goto label_272808;
        case 0x27280cu: goto label_27280c;
        case 0x272810u: goto label_272810;
        case 0x272814u: goto label_272814;
        case 0x272818u: goto label_272818;
        case 0x27281cu: goto label_27281c;
        case 0x272820u: goto label_272820;
        case 0x272824u: goto label_272824;
        case 0x272828u: goto label_272828;
        case 0x27282cu: goto label_27282c;
        case 0x272830u: goto label_272830;
        case 0x272834u: goto label_272834;
        case 0x272838u: goto label_272838;
        case 0x27283cu: goto label_27283c;
        case 0x272840u: goto label_272840;
        case 0x272844u: goto label_272844;
        case 0x272848u: goto label_272848;
        case 0x27284cu: goto label_27284c;
        case 0x272850u: goto label_272850;
        case 0x272854u: goto label_272854;
        case 0x272858u: goto label_272858;
        case 0x27285cu: goto label_27285c;
        case 0x272860u: goto label_272860;
        case 0x272864u: goto label_272864;
        case 0x272868u: goto label_272868;
        case 0x27286cu: goto label_27286c;
        case 0x272870u: goto label_272870;
        case 0x272874u: goto label_272874;
        case 0x272878u: goto label_272878;
        case 0x27287cu: goto label_27287c;
        case 0x272880u: goto label_272880;
        case 0x272884u: goto label_272884;
        case 0x272888u: goto label_272888;
        case 0x27288cu: goto label_27288c;
        case 0x272890u: goto label_272890;
        case 0x272894u: goto label_272894;
        case 0x272898u: goto label_272898;
        case 0x27289cu: goto label_27289c;
        case 0x2728a0u: goto label_2728a0;
        case 0x2728a4u: goto label_2728a4;
        case 0x2728a8u: goto label_2728a8;
        case 0x2728acu: goto label_2728ac;
        case 0x2728b0u: goto label_2728b0;
        case 0x2728b4u: goto label_2728b4;
        case 0x2728b8u: goto label_2728b8;
        case 0x2728bcu: goto label_2728bc;
        case 0x2728c0u: goto label_2728c0;
        case 0x2728c4u: goto label_2728c4;
        case 0x2728c8u: goto label_2728c8;
        case 0x2728ccu: goto label_2728cc;
        case 0x2728d0u: goto label_2728d0;
        case 0x2728d4u: goto label_2728d4;
        case 0x2728d8u: goto label_2728d8;
        case 0x2728dcu: goto label_2728dc;
        case 0x2728e0u: goto label_2728e0;
        case 0x2728e4u: goto label_2728e4;
        case 0x2728e8u: goto label_2728e8;
        case 0x2728ecu: goto label_2728ec;
        case 0x2728f0u: goto label_2728f0;
        case 0x2728f4u: goto label_2728f4;
        case 0x2728f8u: goto label_2728f8;
        case 0x2728fcu: goto label_2728fc;
        case 0x272900u: goto label_272900;
        case 0x272904u: goto label_272904;
        case 0x272908u: goto label_272908;
        case 0x27290cu: goto label_27290c;
        case 0x272910u: goto label_272910;
        case 0x272914u: goto label_272914;
        case 0x272918u: goto label_272918;
        case 0x27291cu: goto label_27291c;
        case 0x272920u: goto label_272920;
        case 0x272924u: goto label_272924;
        case 0x272928u: goto label_272928;
        case 0x27292cu: goto label_27292c;
        case 0x272930u: goto label_272930;
        case 0x272934u: goto label_272934;
        case 0x272938u: goto label_272938;
        case 0x27293cu: goto label_27293c;
        case 0x272940u: goto label_272940;
        case 0x272944u: goto label_272944;
        case 0x272948u: goto label_272948;
        case 0x27294cu: goto label_27294c;
        case 0x272950u: goto label_272950;
        case 0x272954u: goto label_272954;
        case 0x272958u: goto label_272958;
        case 0x27295cu: goto label_27295c;
        case 0x272960u: goto label_272960;
        case 0x272964u: goto label_272964;
        case 0x272968u: goto label_272968;
        case 0x27296cu: goto label_27296c;
        case 0x272970u: goto label_272970;
        case 0x272974u: goto label_272974;
        case 0x272978u: goto label_272978;
        case 0x27297cu: goto label_27297c;
        case 0x272980u: goto label_272980;
        case 0x272984u: goto label_272984;
        case 0x272988u: goto label_272988;
        case 0x27298cu: goto label_27298c;
        case 0x272990u: goto label_272990;
        case 0x272994u: goto label_272994;
        case 0x272998u: goto label_272998;
        case 0x27299cu: goto label_27299c;
        case 0x2729a0u: goto label_2729a0;
        case 0x2729a4u: goto label_2729a4;
        case 0x2729a8u: goto label_2729a8;
        case 0x2729acu: goto label_2729ac;
        case 0x2729b0u: goto label_2729b0;
        case 0x2729b4u: goto label_2729b4;
        case 0x2729b8u: goto label_2729b8;
        case 0x2729bcu: goto label_2729bc;
        case 0x2729c0u: goto label_2729c0;
        case 0x2729c4u: goto label_2729c4;
        case 0x2729c8u: goto label_2729c8;
        case 0x2729ccu: goto label_2729cc;
        case 0x2729d0u: goto label_2729d0;
        case 0x2729d4u: goto label_2729d4;
        case 0x2729d8u: goto label_2729d8;
        case 0x2729dcu: goto label_2729dc;
        case 0x2729e0u: goto label_2729e0;
        case 0x2729e4u: goto label_2729e4;
        case 0x2729e8u: goto label_2729e8;
        case 0x2729ecu: goto label_2729ec;
        case 0x2729f0u: goto label_2729f0;
        case 0x2729f4u: goto label_2729f4;
        case 0x2729f8u: goto label_2729f8;
        case 0x2729fcu: goto label_2729fc;
        case 0x272a00u: goto label_272a00;
        case 0x272a04u: goto label_272a04;
        case 0x272a08u: goto label_272a08;
        case 0x272a0cu: goto label_272a0c;
        case 0x272a10u: goto label_272a10;
        case 0x272a14u: goto label_272a14;
        case 0x272a18u: goto label_272a18;
        case 0x272a1cu: goto label_272a1c;
        case 0x272a20u: goto label_272a20;
        case 0x272a24u: goto label_272a24;
        case 0x272a28u: goto label_272a28;
        case 0x272a2cu: goto label_272a2c;
        case 0x272a30u: goto label_272a30;
        case 0x272a34u: goto label_272a34;
        case 0x272a38u: goto label_272a38;
        case 0x272a3cu: goto label_272a3c;
        case 0x272a40u: goto label_272a40;
        case 0x272a44u: goto label_272a44;
        case 0x272a48u: goto label_272a48;
        case 0x272a4cu: goto label_272a4c;
        case 0x272a50u: goto label_272a50;
        case 0x272a54u: goto label_272a54;
        case 0x272a58u: goto label_272a58;
        case 0x272a5cu: goto label_272a5c;
        case 0x272a60u: goto label_272a60;
        case 0x272a64u: goto label_272a64;
        case 0x272a68u: goto label_272a68;
        case 0x272a6cu: goto label_272a6c;
        case 0x272a70u: goto label_272a70;
        case 0x272a74u: goto label_272a74;
        case 0x272a78u: goto label_272a78;
        case 0x272a7cu: goto label_272a7c;
        case 0x272a80u: goto label_272a80;
        case 0x272a84u: goto label_272a84;
        case 0x272a88u: goto label_272a88;
        case 0x272a8cu: goto label_272a8c;
        case 0x272a90u: goto label_272a90;
        case 0x272a94u: goto label_272a94;
        case 0x272a98u: goto label_272a98;
        case 0x272a9cu: goto label_272a9c;
        case 0x272aa0u: goto label_272aa0;
        case 0x272aa4u: goto label_272aa4;
        case 0x272aa8u: goto label_272aa8;
        case 0x272aacu: goto label_272aac;
        case 0x272ab0u: goto label_272ab0;
        case 0x272ab4u: goto label_272ab4;
        case 0x272ab8u: goto label_272ab8;
        case 0x272abcu: goto label_272abc;
        case 0x272ac0u: goto label_272ac0;
        case 0x272ac4u: goto label_272ac4;
        case 0x272ac8u: goto label_272ac8;
        case 0x272accu: goto label_272acc;
        case 0x272ad0u: goto label_272ad0;
        case 0x272ad4u: goto label_272ad4;
        case 0x272ad8u: goto label_272ad8;
        case 0x272adcu: goto label_272adc;
        case 0x272ae0u: goto label_272ae0;
        case 0x272ae4u: goto label_272ae4;
        case 0x272ae8u: goto label_272ae8;
        case 0x272aecu: goto label_272aec;
        case 0x272af0u: goto label_272af0;
        case 0x272af4u: goto label_272af4;
        case 0x272af8u: goto label_272af8;
        case 0x272afcu: goto label_272afc;
        case 0x272b00u: goto label_272b00;
        case 0x272b04u: goto label_272b04;
        case 0x272b08u: goto label_272b08;
        case 0x272b0cu: goto label_272b0c;
        case 0x272b10u: goto label_272b10;
        case 0x272b14u: goto label_272b14;
        case 0x272b18u: goto label_272b18;
        case 0x272b1cu: goto label_272b1c;
        case 0x272b20u: goto label_272b20;
        case 0x272b24u: goto label_272b24;
        case 0x272b28u: goto label_272b28;
        case 0x272b2cu: goto label_272b2c;
        case 0x272b30u: goto label_272b30;
        case 0x272b34u: goto label_272b34;
        case 0x272b38u: goto label_272b38;
        case 0x272b3cu: goto label_272b3c;
        case 0x272b40u: goto label_272b40;
        case 0x272b44u: goto label_272b44;
        case 0x272b48u: goto label_272b48;
        case 0x272b4cu: goto label_272b4c;
        case 0x272b50u: goto label_272b50;
        case 0x272b54u: goto label_272b54;
        case 0x272b58u: goto label_272b58;
        case 0x272b5cu: goto label_272b5c;
        case 0x272b60u: goto label_272b60;
        case 0x272b64u: goto label_272b64;
        case 0x272b68u: goto label_272b68;
        case 0x272b6cu: goto label_272b6c;
        case 0x272b70u: goto label_272b70;
        case 0x272b74u: goto label_272b74;
        case 0x272b78u: goto label_272b78;
        case 0x272b7cu: goto label_272b7c;
        case 0x272b80u: goto label_272b80;
        case 0x272b84u: goto label_272b84;
        case 0x272b88u: goto label_272b88;
        case 0x272b8cu: goto label_272b8c;
        case 0x272b90u: goto label_272b90;
        case 0x272b94u: goto label_272b94;
        case 0x272b98u: goto label_272b98;
        case 0x272b9cu: goto label_272b9c;
        case 0x272ba0u: goto label_272ba0;
        case 0x272ba4u: goto label_272ba4;
        case 0x272ba8u: goto label_272ba8;
        case 0x272bacu: goto label_272bac;
        case 0x272bb0u: goto label_272bb0;
        case 0x272bb4u: goto label_272bb4;
        case 0x272bb8u: goto label_272bb8;
        case 0x272bbcu: goto label_272bbc;
        case 0x272bc0u: goto label_272bc0;
        case 0x272bc4u: goto label_272bc4;
        case 0x272bc8u: goto label_272bc8;
        case 0x272bccu: goto label_272bcc;
        case 0x272bd0u: goto label_272bd0;
        case 0x272bd4u: goto label_272bd4;
        case 0x272bd8u: goto label_272bd8;
        case 0x272bdcu: goto label_272bdc;
        case 0x272be0u: goto label_272be0;
        case 0x272be4u: goto label_272be4;
        case 0x272be8u: goto label_272be8;
        case 0x272becu: goto label_272bec;
        case 0x272bf0u: goto label_272bf0;
        case 0x272bf4u: goto label_272bf4;
        case 0x272bf8u: goto label_272bf8;
        case 0x272bfcu: goto label_272bfc;
        case 0x272c00u: goto label_272c00;
        case 0x272c04u: goto label_272c04;
        case 0x272c08u: goto label_272c08;
        case 0x272c0cu: goto label_272c0c;
        case 0x272c10u: goto label_272c10;
        case 0x272c14u: goto label_272c14;
        case 0x272c18u: goto label_272c18;
        case 0x272c1cu: goto label_272c1c;
        case 0x272c20u: goto label_272c20;
        case 0x272c24u: goto label_272c24;
        case 0x272c28u: goto label_272c28;
        case 0x272c2cu: goto label_272c2c;
        case 0x272c30u: goto label_272c30;
        case 0x272c34u: goto label_272c34;
        case 0x272c38u: goto label_272c38;
        case 0x272c3cu: goto label_272c3c;
        case 0x272c40u: goto label_272c40;
        case 0x272c44u: goto label_272c44;
        case 0x272c48u: goto label_272c48;
        case 0x272c4cu: goto label_272c4c;
        case 0x272c50u: goto label_272c50;
        case 0x272c54u: goto label_272c54;
        case 0x272c58u: goto label_272c58;
        case 0x272c5cu: goto label_272c5c;
        case 0x272c60u: goto label_272c60;
        case 0x272c64u: goto label_272c64;
        case 0x272c68u: goto label_272c68;
        case 0x272c6cu: goto label_272c6c;
        case 0x272c70u: goto label_272c70;
        case 0x272c74u: goto label_272c74;
        case 0x272c78u: goto label_272c78;
        case 0x272c7cu: goto label_272c7c;
        case 0x272c80u: goto label_272c80;
        case 0x272c84u: goto label_272c84;
        case 0x272c88u: goto label_272c88;
        case 0x272c8cu: goto label_272c8c;
        case 0x272c90u: goto label_272c90;
        case 0x272c94u: goto label_272c94;
        case 0x272c98u: goto label_272c98;
        case 0x272c9cu: goto label_272c9c;
        case 0x272ca0u: goto label_272ca0;
        case 0x272ca4u: goto label_272ca4;
        case 0x272ca8u: goto label_272ca8;
        case 0x272cacu: goto label_272cac;
        case 0x272cb0u: goto label_272cb0;
        case 0x272cb4u: goto label_272cb4;
        case 0x272cb8u: goto label_272cb8;
        case 0x272cbcu: goto label_272cbc;
        case 0x272cc0u: goto label_272cc0;
        case 0x272cc4u: goto label_272cc4;
        case 0x272cc8u: goto label_272cc8;
        case 0x272cccu: goto label_272ccc;
        case 0x272cd0u: goto label_272cd0;
        case 0x272cd4u: goto label_272cd4;
        case 0x272cd8u: goto label_272cd8;
        case 0x272cdcu: goto label_272cdc;
        case 0x272ce0u: goto label_272ce0;
        case 0x272ce4u: goto label_272ce4;
        case 0x272ce8u: goto label_272ce8;
        case 0x272cecu: goto label_272cec;
        case 0x272cf0u: goto label_272cf0;
        case 0x272cf4u: goto label_272cf4;
        case 0x272cf8u: goto label_272cf8;
        case 0x272cfcu: goto label_272cfc;
        case 0x272d00u: goto label_272d00;
        case 0x272d04u: goto label_272d04;
        case 0x272d08u: goto label_272d08;
        case 0x272d0cu: goto label_272d0c;
        case 0x272d10u: goto label_272d10;
        case 0x272d14u: goto label_272d14;
        case 0x272d18u: goto label_272d18;
        case 0x272d1cu: goto label_272d1c;
        case 0x272d20u: goto label_272d20;
        case 0x272d24u: goto label_272d24;
        case 0x272d28u: goto label_272d28;
        case 0x272d2cu: goto label_272d2c;
        case 0x272d30u: goto label_272d30;
        case 0x272d34u: goto label_272d34;
        case 0x272d38u: goto label_272d38;
        case 0x272d3cu: goto label_272d3c;
        case 0x272d40u: goto label_272d40;
        case 0x272d44u: goto label_272d44;
        case 0x272d48u: goto label_272d48;
        case 0x272d4cu: goto label_272d4c;
        case 0x272d50u: goto label_272d50;
        case 0x272d54u: goto label_272d54;
        case 0x272d58u: goto label_272d58;
        case 0x272d5cu: goto label_272d5c;
        case 0x272d60u: goto label_272d60;
        case 0x272d64u: goto label_272d64;
        case 0x272d68u: goto label_272d68;
        case 0x272d6cu: goto label_272d6c;
        case 0x272d70u: goto label_272d70;
        case 0x272d74u: goto label_272d74;
        case 0x272d78u: goto label_272d78;
        case 0x272d7cu: goto label_272d7c;
        case 0x272d80u: goto label_272d80;
        case 0x272d84u: goto label_272d84;
        case 0x272d88u: goto label_272d88;
        case 0x272d8cu: goto label_272d8c;
        case 0x272d90u: goto label_272d90;
        case 0x272d94u: goto label_272d94;
        case 0x272d98u: goto label_272d98;
        case 0x272d9cu: goto label_272d9c;
        case 0x272da0u: goto label_272da0;
        case 0x272da4u: goto label_272da4;
        case 0x272da8u: goto label_272da8;
        case 0x272dacu: goto label_272dac;
        case 0x272db0u: goto label_272db0;
        case 0x272db4u: goto label_272db4;
        case 0x272db8u: goto label_272db8;
        case 0x272dbcu: goto label_272dbc;
        case 0x272dc0u: goto label_272dc0;
        case 0x272dc4u: goto label_272dc4;
        case 0x272dc8u: goto label_272dc8;
        case 0x272dccu: goto label_272dcc;
        case 0x272dd0u: goto label_272dd0;
        case 0x272dd4u: goto label_272dd4;
        case 0x272dd8u: goto label_272dd8;
        case 0x272ddcu: goto label_272ddc;
        case 0x272de0u: goto label_272de0;
        case 0x272de4u: goto label_272de4;
        case 0x272de8u: goto label_272de8;
        case 0x272decu: goto label_272dec;
        case 0x272df0u: goto label_272df0;
        case 0x272df4u: goto label_272df4;
        case 0x272df8u: goto label_272df8;
        case 0x272dfcu: goto label_272dfc;
        case 0x272e00u: goto label_272e00;
        case 0x272e04u: goto label_272e04;
        case 0x272e08u: goto label_272e08;
        case 0x272e0cu: goto label_272e0c;
        case 0x272e10u: goto label_272e10;
        case 0x272e14u: goto label_272e14;
        case 0x272e18u: goto label_272e18;
        case 0x272e1cu: goto label_272e1c;
        case 0x272e20u: goto label_272e20;
        case 0x272e24u: goto label_272e24;
        case 0x272e28u: goto label_272e28;
        case 0x272e2cu: goto label_272e2c;
        case 0x272e30u: goto label_272e30;
        case 0x272e34u: goto label_272e34;
        case 0x272e38u: goto label_272e38;
        case 0x272e3cu: goto label_272e3c;
        case 0x272e40u: goto label_272e40;
        case 0x272e44u: goto label_272e44;
        case 0x272e48u: goto label_272e48;
        case 0x272e4cu: goto label_272e4c;
        case 0x272e50u: goto label_272e50;
        case 0x272e54u: goto label_272e54;
        case 0x272e58u: goto label_272e58;
        case 0x272e5cu: goto label_272e5c;
        case 0x272e60u: goto label_272e60;
        case 0x272e64u: goto label_272e64;
        case 0x272e68u: goto label_272e68;
        case 0x272e6cu: goto label_272e6c;
        case 0x272e70u: goto label_272e70;
        case 0x272e74u: goto label_272e74;
        case 0x272e78u: goto label_272e78;
        case 0x272e7cu: goto label_272e7c;
        case 0x272e80u: goto label_272e80;
        case 0x272e84u: goto label_272e84;
        case 0x272e88u: goto label_272e88;
        case 0x272e8cu: goto label_272e8c;
        case 0x272e90u: goto label_272e90;
        case 0x272e94u: goto label_272e94;
        default: break;
    }

    ctx->pc = 0x272500u;

label_272500:
    // 0x272500: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x272500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_272504:
    // 0x272504: 0x8c62346c  lw          $v0, 0x346C($v1)
    ctx->pc = 0x272504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13420)));
label_272508:
    // 0x272508: 0x3e00008  jr          $ra
label_27250c:
    if (ctx->pc == 0x27250Cu) {
        ctx->pc = 0x27250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272508u;
        // 0x27250c: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272510u;
        goto label_272510;
    }
    ctx->pc = 0x272508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272508u;
        // 0x27250c: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272510u;
label_272510:
    // 0x272510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_272514:
    // 0x272514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x272514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_272518:
    // 0x272518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x272518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_27251c:
    // 0x27251c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27251cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_272520:
    // 0x272520: 0xc0432d4  jal         func_10CB50
label_272524:
    if (ctx->pc == 0x272524u) {
        ctx->pc = 0x272524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272520u;
        // 0x272524: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272528u;
        goto label_272528;
    }
    ctx->pc = 0x272520u;
    SET_GPR_U32(ctx, 31, 0x272528u);
    ctx->pc = 0x272524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272520u;
    // 0x272524: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x272520u, 0x272528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272528u;
label_272528:
    // 0x272528: 0xc0bf146  jal         func_2FC518
label_27252c:
    if (ctx->pc == 0x27252Cu) {
        ctx->pc = 0x27252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272528u;
        // 0x27252c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272530u;
        goto label_272530;
    }
    ctx->pc = 0x272528u;
    SET_GPR_U32(ctx, 31, 0x272530u);
    ctx->pc = 0x27252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272528u;
    // 0x27252c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC518u, 0x272528u, 0x272530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272530u;
label_272530:
    // 0x272530: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x272530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_272534:
    // 0x272534: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_272538:
    if (ctx->pc == 0x272538u) {
        ctx->pc = 0x272538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272534u;
        // 0x272538: 0x24702d78  addiu       $s0, $v1, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27253Cu;
        goto label_27253c;
    }
    ctx->pc = 0x272534u;
    {
        const bool branch_taken_0x272534 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x272538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272534u;
        // 0x272538: 0x24702d78  addiu       $s0, $v1, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272534) {
            ctx->pc = 0x272558u;
            goto label_272558;
        }
    }
    ctx->pc = 0x27253Cu;
label_27253c:
    // 0x27253c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27253cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_272540:
    // 0x272540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272544:
    // 0x272544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x272544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_272548:
    // 0x272548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27254c:
    // 0x27254c: 0x3e00008  jr          $ra
label_272550:
    if (ctx->pc == 0x272550u) {
        ctx->pc = 0x272550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27254Cu;
        // 0x272550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272554u;
        goto label_272554;
    }
    ctx->pc = 0x27254Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27254Cu;
        // 0x272550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27254Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272554u;
label_272554:
    // 0x272554: 0x0  nop
    ctx->pc = 0x272554u;
    // NOP
label_272558:
    // 0x272558: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_27255c:
    // 0x27255c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272560:
    // 0x272560: 0xc043328  jal         func_10CCA0
label_272564:
    if (ctx->pc == 0x272564u) {
        ctx->pc = 0x272564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272560u;
        // 0x272564: 0x8c8406d8  lw          $a0, 0x6D8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272568u;
        goto label_272568;
    }
    ctx->pc = 0x272560u;
    SET_GPR_U32(ctx, 31, 0x272568u);
    ctx->pc = 0x272564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272560u;
    // 0x272564: 0x8c8406d8  lw          $a0, 0x6D8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1752)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x272560u, 0x272568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272568u;
label_272568:
    // 0x272568: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_27256c:
    // 0x27256c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27256cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272570:
    // 0x272570: 0xc043328  jal         func_10CCA0
label_272574:
    if (ctx->pc == 0x272574u) {
        ctx->pc = 0x272574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272570u;
        // 0x272574: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272578u;
        goto label_272578;
    }
    ctx->pc = 0x272570u;
    SET_GPR_U32(ctx, 31, 0x272578u);
    ctx->pc = 0x272574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272570u;
    // 0x272574: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x272570u, 0x272578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272578u;
label_272578:
    // 0x272578: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_27257c:
    // 0x27257c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x27257cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_272580:
    // 0x272580: 0xac3106f8  sw          $s1, 0x6F8($at)
    ctx->pc = 0x272580u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1784), GPR_U32(ctx, 17));
label_272584:
    // 0x272584: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272588:
    // 0x272588: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_27258c:
    // 0x27258c: 0xc043320  jal         func_10CC80
label_272590:
    if (ctx->pc == 0x272590u) {
        ctx->pc = 0x272590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27258Cu;
        // 0x272590: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272594u;
        goto label_272594;
    }
    ctx->pc = 0x27258Cu;
    SET_GPR_U32(ctx, 31, 0x272594u);
    ctx->pc = 0x272590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27258Cu;
    // 0x272590: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x27258Cu, 0x272594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272594u;
label_272594:
    // 0x272594: 0xc09cf5e  jal         func_273D78
label_272598:
    if (ctx->pc == 0x272598u) {
        ctx->pc = 0x27259Cu;
        goto label_27259c;
    }
    ctx->pc = 0x272594u;
    SET_GPR_U32(ctx, 31, 0x27259Cu);
    ctx->pc = 0x273D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D78u, 0x272594u, 0x27259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27259Cu;
label_27259c:
    // 0x27259c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_2725a0:
    if (ctx->pc == 0x2725A0u) {
        ctx->pc = 0x2725A4u;
        goto label_2725a4;
    }
    ctx->pc = 0x27259Cu;
    {
        const bool branch_taken_0x27259c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27259c) {
            ctx->pc = 0x272558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272558;
        }
    }
    ctx->pc = 0x2725A4u;
label_2725a4:
    // 0x2725a4: 0x0  nop
    ctx->pc = 0x2725a4u;
    // NOP
label_2725a8:
    // 0x2725a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2725a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2725ac:
    // 0x2725ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2725acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2725b0:
    // 0x2725b0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2725b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2725b4:
    // 0x2725b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2725b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2725b8:
    // 0x2725b8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2725b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2725bc:
    // 0x2725bc: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x2725bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_2725c0:
    // 0x2725c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2725c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2725c4:
    // 0x2725c4: 0x26702d78  addiu       $s0, $s3, 0x2D78
    ctx->pc = 0x2725c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_2725c8:
    // 0x2725c8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2725c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2725cc:
    // 0x2725cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2725ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2725d0:
    // 0x2725d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2725d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2725d4:
    // 0x2725d4: 0x8c420710  lw          $v0, 0x710($v0)
    ctx->pc = 0x2725d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
label_2725d8:
    // 0x2725d8: 0x40f809  jalr        $v0
label_2725dc:
    if (ctx->pc == 0x2725DCu) {
        ctx->pc = 0x2725DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725D8u;
        // 0x2725dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2725E0u;
        goto label_2725e0;
    }
    ctx->pc = 0x2725D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2725E0u);
        ctx->pc = 0x2725DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725D8u;
        // 0x2725dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2725D8u, 0x2725E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2725E0u;
label_2725e0:
    // 0x2725e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2725e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2725e4:
    // 0x2725e4: 0x6230008  bgezl       $s1, . + 4 + (0x8 << 2)
label_2725e8:
    if (ctx->pc == 0x2725E8u) {
        ctx->pc = 0x2725E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725E4u;
        // 0x2725e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2725ECu;
        goto label_2725ec;
    }
    ctx->pc = 0x2725E4u;
    {
        const bool branch_taken_0x2725e4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2725e4) {
            ctx->pc = 0x2725E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2725E4u;
            // 0x2725e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272608u;
            goto label_272608;
        }
    }
    ctx->pc = 0x2725ECu;
label_2725ec:
    // 0x2725ec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2725ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_2725f0:
    // 0x2725f0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2725f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2725f4:
    // 0x2725f4: 0x8c8406bc  lw          $a0, 0x6BC($a0)
    ctx->pc = 0x2725f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
label_2725f8:
    // 0x2725f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2725f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2725fc:
    // 0x2725fc: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2725fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_272600:
    // 0x272600: 0x1000021a  b           . + 4 + (0x21A << 2)
label_272604:
    if (ctx->pc == 0x272604u) {
        ctx->pc = 0x272604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272600u;
        // 0x272604: 0xac3106dc  sw          $s1, 0x6DC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1756), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272608u;
        goto label_272608;
    }
    ctx->pc = 0x272600u;
    {
        const bool branch_taken_0x272600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272600u;
        // 0x272604: 0xac3106dc  sw          $s1, 0x6DC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1756), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272600) {
            ctx->pc = 0x272E6Cu;
            goto label_272e6c;
        }
    }
    ctx->pc = 0x272608u;
label_272608:
    // 0x272608: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x272608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_27260c:
    // 0x27260c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_272610:
    // 0x272610: 0x8c42072c  lw          $v0, 0x72C($v0)
    ctx->pc = 0x272610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1836)));
label_272614:
    // 0x272614: 0x40f809  jalr        $v0
label_272618:
    if (ctx->pc == 0x272618u) {
        ctx->pc = 0x272618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272614u;
        // 0x272618: 0x240501bb  addiu       $a1, $zero, 0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27261Cu;
        goto label_27261c;
    }
    ctx->pc = 0x272614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27261Cu);
        ctx->pc = 0x272618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272614u;
        // 0x272618: 0x240501bb  addiu       $a1, $zero, 0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272614u, 0x27261Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27261Cu;
label_27261c:
    // 0x27261c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27261cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272620:
    // 0x272620: 0x6210009  bgez        $s1, . + 4 + (0x9 << 2)
label_272624:
    if (ctx->pc == 0x272624u) {
        ctx->pc = 0x272628u;
        goto label_272628;
    }
    ctx->pc = 0x272620u;
    {
        const bool branch_taken_0x272620 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x272620) {
            ctx->pc = 0x272648u;
            goto label_272648;
        }
    }
    ctx->pc = 0x272628u;
label_272628:
    // 0x272628: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_27262c:
    // 0x27262c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27262cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272630:
    // 0x272630: 0x8c8406bc  lw          $a0, 0x6BC($a0)
    ctx->pc = 0x272630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
label_272634:
    // 0x272634: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272638:
    // 0x272638: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x272638u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_27263c:
    // 0x27263c: 0x1000020b  b           . + 4 + (0x20B << 2)
label_272640:
    if (ctx->pc == 0x272640u) {
        ctx->pc = 0x272640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27263Cu;
        // 0x272640: 0xac3106dc  sw          $s1, 0x6DC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1756), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272644u;
        goto label_272644;
    }
    ctx->pc = 0x27263Cu;
    {
        const bool branch_taken_0x27263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27263Cu;
        // 0x272640: 0xac3106dc  sw          $s1, 0x6DC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1756), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27263c) {
            ctx->pc = 0x272E6Cu;
            goto label_272e6c;
        }
    }
    ctx->pc = 0x272644u;
label_272644:
    // 0x272644: 0x0  nop
    ctx->pc = 0x272644u;
    // NOP
label_272648:
    // 0x272648: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x272648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_27264c:
    // 0x27264c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_272650:
    // 0x272650: 0x8c420730  lw          $v0, 0x730($v0)
    ctx->pc = 0x272650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1840)));
label_272654:
    // 0x272654: 0x40f809  jalr        $v0
label_272658:
    if (ctx->pc == 0x272658u) {
        ctx->pc = 0x272658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272654u;
        // 0x272658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27265Cu;
        goto label_27265c;
    }
    ctx->pc = 0x272654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27265Cu);
        ctx->pc = 0x272658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272654u;
        // 0x272658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272654u, 0x27265Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27265Cu;
label_27265c:
    // 0x27265c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27265cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272660:
    // 0x272660: 0x6210009  bgez        $s1, . + 4 + (0x9 << 2)
label_272664:
    if (ctx->pc == 0x272664u) {
        ctx->pc = 0x272664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272660u;
        // 0x272664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272668u;
        goto label_272668;
    }
    ctx->pc = 0x272660u;
    {
        const bool branch_taken_0x272660 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x272664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272660u;
        // 0x272664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272660) {
            ctx->pc = 0x272688u;
            goto label_272688;
        }
    }
    ctx->pc = 0x272668u;
label_272668:
    // 0x272668: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_27266c:
    // 0x27266c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272670:
    // 0x272670: 0x8c8406bc  lw          $a0, 0x6BC($a0)
    ctx->pc = 0x272670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
label_272674:
    // 0x272674: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272678:
    // 0x272678: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x272678u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_27267c:
    // 0x27267c: 0x100001fb  b           . + 4 + (0x1FB << 2)
label_272680:
    if (ctx->pc == 0x272680u) {
        ctx->pc = 0x272680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27267Cu;
        // 0x272680: 0xac3106dc  sw          $s1, 0x6DC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1756), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272684u;
        goto label_272684;
    }
    ctx->pc = 0x27267Cu;
    {
        const bool branch_taken_0x27267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27267Cu;
        // 0x272680: 0xac3106dc  sw          $s1, 0x6DC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1756), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27267c) {
            ctx->pc = 0x272E6Cu;
            goto label_272e6c;
        }
    }
    ctx->pc = 0x272684u;
label_272684:
    // 0x272684: 0x0  nop
    ctx->pc = 0x272684u;
    // NOP
label_272688:
    // 0x272688: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x272688u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_27268c:
    // 0x27268c: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x27268cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_272690:
    // 0x272690: 0x26622d78  addiu       $v0, $s3, 0x2D78
    ctx->pc = 0x272690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_272694:
    // 0x272694: 0x0  nop
    ctx->pc = 0x272694u;
    // NOP
label_272698:
    // 0x272698: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_27269c:
    // 0x27269c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x27269cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_2726a0:
    // 0x2726a0: 0x8c2206b4  lw          $v0, 0x6B4($at)
    ctx->pc = 0x2726a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1716)));
label_2726a4:
    // 0x2726a4: 0x2c43000e  sltiu       $v1, $v0, 0xE
    ctx->pc = 0x2726a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_2726a8:
    // 0x2726a8: 0x106001b5  beqz        $v1, . + 4 + (0x1B5 << 2)
label_2726ac:
    if (ctx->pc == 0x2726ACu) {
        ctx->pc = 0x2726ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726A8u;
        // 0x2726ac: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2726B0u;
        goto label_2726b0;
    }
    ctx->pc = 0x2726A8u;
    {
        const bool branch_taken_0x2726a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726A8u;
        // 0x2726ac: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726a8) {
            ctx->pc = 0x272D80u;
            goto label_272d80;
        }
    }
    ctx->pc = 0x2726B0u;
label_2726b0:
    // 0x2726b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2726b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2726b4:
    // 0x2726b4: 0x26839e40  addiu       $v1, $s4, -0x61C0
    ctx->pc = 0x2726b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942272));
label_2726b8:
    // 0x2726b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2726b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2726bc:
    // 0x2726bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2726bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2726c0:
    // 0x2726c0: 0x800008  jr          $a0
label_2726c4:
    if (ctx->pc == 0x2726C4u) {
        ctx->pc = 0x2726C8u;
        goto label_2726c8;
    }
    ctx->pc = 0x2726C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2726C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2726C8u;
label_2726c8:
    // 0x2726c8: 0x26702d78  addiu       $s0, $s3, 0x2D78
    ctx->pc = 0x2726c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_2726cc:
    // 0x2726cc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2726ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_2726d0:
    // 0x2726d0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2726d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2726d4:
    // 0x2726d4: 0xc043328  jal         func_10CCA0
label_2726d8:
    if (ctx->pc == 0x2726D8u) {
        ctx->pc = 0x2726D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726D4u;
        // 0x2726d8: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2726DCu;
        goto label_2726dc;
    }
    ctx->pc = 0x2726D4u;
    SET_GPR_U32(ctx, 31, 0x2726DCu);
    ctx->pc = 0x2726D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2726D4u;
    // 0x2726d8: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2726D4u, 0x2726DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2726DCu;
label_2726dc:
    // 0x2726dc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2726dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2726e0:
    // 0x2726e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2726e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2726e4:
    // 0x2726e4: 0x8c6306e4  lw          $v1, 0x6E4($v1)
    ctx->pc = 0x2726e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1764)));
label_2726e8:
    // 0x2726e8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2726e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_2726ec:
    // 0x2726ec: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2726ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2726f0:
    // 0x2726f0: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x2726f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_2726f4:
    // 0x2726f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2726f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2726f8:
    // 0x2726f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2726f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2726fc:
    // 0x2726fc: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2726fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_272700:
    // 0x272700: 0xac2006f4  sw          $zero, 0x6F4($at)
    ctx->pc = 0x272700u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1780), GPR_U32(ctx, 0));
label_272704:
    // 0x272704: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272708:
    // 0x272708: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x272708u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_27270c:
    // 0x27270c: 0xc043320  jal         func_10CC80
label_272710:
    if (ctx->pc == 0x272710u) {
        ctx->pc = 0x272710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27270Cu;
        // 0x272710: 0xac2306e4  sw          $v1, 0x6E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1764), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272714u;
        goto label_272714;
    }
    ctx->pc = 0x27270Cu;
    SET_GPR_U32(ctx, 31, 0x272714u);
    ctx->pc = 0x272710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27270Cu;
    // 0x272710: 0xac2306e4  sw          $v1, 0x6E4($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 1764), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x27270Cu, 0x272714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272714u;
label_272714:
    // 0x272714: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272718:
    // 0x272718: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_27271c:
    // 0x27271c: 0x8c8406d4  lw          $a0, 0x6D4($a0)
    ctx->pc = 0x27271cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
label_272720:
    // 0x272720: 0xc043334  jal         func_10CCD0
label_272724:
    if (ctx->pc == 0x272724u) {
        ctx->pc = 0x272724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272720u;
        // 0x272724: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272728u;
        goto label_272728;
    }
    ctx->pc = 0x272720u;
    SET_GPR_U32(ctx, 31, 0x272728u);
    ctx->pc = 0x272724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272720u;
    // 0x272724: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCD0u, 0x272720u, 0x272728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272728u;
label_272728:
    // 0x272728: 0x44001af  bltz        $v0, . + 4 + (0x1AF << 2)
label_27272c:
    if (ctx->pc == 0x27272Cu) {
        ctx->pc = 0x27272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272728u;
        // 0x27272c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272730u;
        goto label_272730;
    }
    ctx->pc = 0x272728u;
    {
        const bool branch_taken_0x272728 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272728u;
        // 0x27272c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272728) {
            ctx->pc = 0x272DE8u;
            goto label_272de8;
        }
    }
    ctx->pc = 0x272730u;
label_272730:
    // 0x272730: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_272734:
    if (ctx->pc == 0x272734u) {
        ctx->pc = 0x272734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272730u;
        // 0x272734: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272738u;
        goto label_272738;
    }
    ctx->pc = 0x272730u;
    {
        const bool branch_taken_0x272730 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x272734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272730u;
        // 0x272734: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272730) {
            ctx->pc = 0x27275Cu;
            goto label_27275c;
        }
    }
    ctx->pc = 0x272738u;
label_272738:
    // 0x272738: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_27273c:
    // 0x27273c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27273cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272740:
    // 0x272740: 0x8c8406d4  lw          $a0, 0x6D4($a0)
    ctx->pc = 0x272740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
label_272744:
    // 0x272744: 0xc04332c  jal         func_10CCB0
label_272748:
    if (ctx->pc == 0x272748u) {
        ctx->pc = 0x272748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272744u;
        // 0x272748: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27274Cu;
        goto label_27274c;
    }
    ctx->pc = 0x272744u;
    SET_GPR_U32(ctx, 31, 0x27274Cu);
    ctx->pc = 0x272748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272744u;
    // 0x272748: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x272744u, 0x27274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27274Cu;
label_27274c:
    // 0x27274c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_272750:
    // 0x272750: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x272750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_272754:
    // 0x272754: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_272758:
    if (ctx->pc == 0x272758u) {
        ctx->pc = 0x27275Cu;
        goto label_27275c;
    }
    ctx->pc = 0x272754u;
    {
        const bool branch_taken_0x272754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x272754) {
            ctx->pc = 0x272738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272738;
        }
    }
    ctx->pc = 0x27275Cu;
label_27275c:
    // 0x27275c: 0x26702d78  addiu       $s0, $s3, 0x2D78
    ctx->pc = 0x27275cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_272760:
    // 0x272760: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272764:
    // 0x272764: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272768:
    // 0x272768: 0xc043320  jal         func_10CC80
label_27276c:
    if (ctx->pc == 0x27276Cu) {
        ctx->pc = 0x27276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272768u;
        // 0x27276c: 0x8c8406d4  lw          $a0, 0x6D4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272770u;
        goto label_272770;
    }
    ctx->pc = 0x272768u;
    SET_GPR_U32(ctx, 31, 0x272770u);
    ctx->pc = 0x27276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272768u;
    // 0x27276c: 0x8c8406d4  lw          $a0, 0x6D4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x272768u, 0x272770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272770u;
label_272770:
    // 0x272770: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272774:
    // 0x272774: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272778:
    // 0x272778: 0xc043320  jal         func_10CC80
label_27277c:
    if (ctx->pc == 0x27277Cu) {
        ctx->pc = 0x27277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272778u;
        // 0x27277c: 0x8c8406bc  lw          $a0, 0x6BC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272780u;
        goto label_272780;
    }
    ctx->pc = 0x272778u;
    SET_GPR_U32(ctx, 31, 0x272780u);
    ctx->pc = 0x27277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272778u;
    // 0x27277c: 0x8c8406bc  lw          $a0, 0x6BC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x272778u, 0x272780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272780u;
label_272780:
    // 0x272780: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272784:
    // 0x272784: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272788:
    // 0x272788: 0xc043328  jal         func_10CCA0
label_27278c:
    if (ctx->pc == 0x27278Cu) {
        ctx->pc = 0x27278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272788u;
        // 0x27278c: 0x8c8406c0  lw          $a0, 0x6C0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272790u;
        goto label_272790;
    }
    ctx->pc = 0x272788u;
    SET_GPR_U32(ctx, 31, 0x272790u);
    ctx->pc = 0x27278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272788u;
    // 0x27278c: 0x8c8406c0  lw          $a0, 0x6C0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x272788u, 0x272790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272790u;
label_272790:
    // 0x272790: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272794:
    // 0x272794: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272798:
    // 0x272798: 0xc043328  jal         func_10CCA0
label_27279c:
    if (ctx->pc == 0x27279Cu) {
        ctx->pc = 0x27279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272798u;
        // 0x27279c: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2727A0u;
        goto label_2727a0;
    }
    ctx->pc = 0x272798u;
    SET_GPR_U32(ctx, 31, 0x2727A0u);
    ctx->pc = 0x27279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272798u;
    // 0x27279c: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x272798u, 0x2727A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2727A0u;
label_2727a0:
    // 0x2727a0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2727a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2727a4:
    // 0x2727a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2727a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2727a8:
    // 0x2727a8: 0x8c6306e4  lw          $v1, 0x6E4($v1)
    ctx->pc = 0x2727a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1764)));
label_2727ac:
    // 0x2727ac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2727acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_2727b0:
    // 0x2727b0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2727b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2727b4:
    // 0x2727b4: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x2727b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_2727b8:
    // 0x2727b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2727b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2727bc:
    // 0x2727bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2727bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2727c0:
    // 0x2727c0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2727c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_2727c4:
    // 0x2727c4: 0xc043320  jal         func_10CC80
label_2727c8:
    if (ctx->pc == 0x2727C8u) {
        ctx->pc = 0x2727C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727C4u;
        // 0x2727c8: 0xac2306e4  sw          $v1, 0x6E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1764), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2727CCu;
        goto label_2727cc;
    }
    ctx->pc = 0x2727C4u;
    SET_GPR_U32(ctx, 31, 0x2727CCu);
    ctx->pc = 0x2727C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2727C4u;
    // 0x2727c8: 0xac2306e4  sw          $v1, 0x6E4($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 1764), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2727C4u, 0x2727CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2727CCu;
label_2727cc:
    // 0x2727cc: 0xc09c93c  jal         func_2724F0
label_2727d0:
    if (ctx->pc == 0x2727D0u) {
        ctx->pc = 0x2727D4u;
        goto label_2727d4;
    }
    ctx->pc = 0x2727CCu;
    SET_GPR_U32(ctx, 31, 0x2727D4u);
    ctx->pc = 0x2724F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2724F0u, 0x2727CCu, 0x2727D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2727D4u;
label_2727d4:
    // 0x2727d4: 0x1c40019c  bgtz        $v0, . + 4 + (0x19C << 2)
label_2727d8:
    if (ctx->pc == 0x2727D8u) {
        ctx->pc = 0x2727DCu;
        goto label_2727dc;
    }
    ctx->pc = 0x2727D4u;
    {
        const bool branch_taken_0x2727d4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2727d4) {
            ctx->pc = 0x272E48u;
            goto label_272e48;
        }
    }
    ctx->pc = 0x2727DCu;
label_2727dc:
    // 0x2727dc: 0xc09c940  jal         func_272500
label_2727e0:
    if (ctx->pc == 0x2727E0u) {
        ctx->pc = 0x2727E4u;
        goto label_2727e4;
    }
    ctx->pc = 0x2727DCu;
    SET_GPR_U32(ctx, 31, 0x2727E4u);
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x2727E4u;
label_2727e4:
    // 0x2727e4: 0x1c400156  bgtz        $v0, . + 4 + (0x156 << 2)
label_2727e8:
    if (ctx->pc == 0x2727E8u) {
        ctx->pc = 0x2727E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727E4u;
        // 0x2727e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2727ECu;
        goto label_2727ec;
    }
    ctx->pc = 0x2727E4u;
    {
        const bool branch_taken_0x2727e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2727E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727E4u;
        // 0x2727e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727e4) {
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x2727ECu;
label_2727ec:
    // 0x2727ec: 0x10000140  b           . + 4 + (0x140 << 2)
label_2727f0:
    if (ctx->pc == 0x2727F0u) {
        ctx->pc = 0x2727F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727ECu;
        // 0x2727f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2727F4u;
        goto label_2727f4;
    }
    ctx->pc = 0x2727ECu;
    {
        const bool branch_taken_0x2727ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727ECu;
        // 0x2727f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727ec) {
            ctx->pc = 0x272CF0u;
            goto label_272cf0;
        }
    }
    ctx->pc = 0x2727F4u;
label_2727f4:
    // 0x2727f4: 0x0  nop
    ctx->pc = 0x2727f4u;
    // NOP
label_2727f8:
    // 0x2727f8: 0x26702d78  addiu       $s0, $s3, 0x2D78
    ctx->pc = 0x2727f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_2727fc:
    // 0x2727fc: 0x2403fda5  addiu       $v1, $zero, -0x25B
    ctx->pc = 0x2727fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966693));
label_272800:
    // 0x272800: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x272800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_272804:
    // 0x272804: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x272804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_272808:
    // 0x272808: 0x8c420704  lw          $v0, 0x704($v0)
    ctx->pc = 0x272808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1796)));
label_27280c:
    // 0x27280c: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_272810:
    if (ctx->pc == 0x272810u) {
        ctx->pc = 0x272810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27280Cu;
        // 0x272810: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272814u;
        goto label_272814;
    }
    ctx->pc = 0x27280Cu;
    {
        const bool branch_taken_0x27280c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x272810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27280Cu;
        // 0x272810: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27280c) {
            ctx->pc = 0x272844u;
            goto label_272844;
        }
    }
    ctx->pc = 0x272814u;
label_272814:
    // 0x272814: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272818:
    // 0x272818: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_27281c:
    // 0x27281c: 0xc043328  jal         func_10CCA0
label_272820:
    if (ctx->pc == 0x272820u) {
        ctx->pc = 0x272820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27281Cu;
        // 0x272820: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272824u;
        goto label_272824;
    }
    ctx->pc = 0x27281Cu;
    SET_GPR_U32(ctx, 31, 0x272824u);
    ctx->pc = 0x272820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27281Cu;
    // 0x272820: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x27281Cu, 0x272824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272824u;
label_272824:
    // 0x272824: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272828:
    // 0x272828: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x272828u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_27282c:
    // 0x27282c: 0xac200704  sw          $zero, 0x704($at)
    ctx->pc = 0x27282cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1796), GPR_U32(ctx, 0));
label_272830:
    // 0x272830: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272834:
    // 0x272834: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272838:
    // 0x272838: 0xc043320  jal         func_10CC80
label_27283c:
    if (ctx->pc == 0x27283Cu) {
        ctx->pc = 0x27283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272838u;
        // 0x27283c: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272840u;
        goto label_272840;
    }
    ctx->pc = 0x272838u;
    SET_GPR_U32(ctx, 31, 0x272840u);
    ctx->pc = 0x27283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272838u;
    // 0x27283c: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x272838u, 0x272840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272840u;
label_272840:
    // 0x272840: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x272840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272844:
    // 0x272844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272848:
    // 0x272848: 0xc09dcec  jal         func_2773B0
label_27284c:
    if (ctx->pc == 0x27284Cu) {
        ctx->pc = 0x27284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272848u;
        // 0x27284c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272850u;
        goto label_272850;
    }
    ctx->pc = 0x272848u;
    SET_GPR_U32(ctx, 31, 0x272850u);
    ctx->pc = 0x27284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272848u;
    // 0x27284c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2773B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2773B0u, 0x272848u, 0x272850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272850u;
label_272850:
    // 0x272850: 0xc09c940  jal         func_272500
label_272854:
    if (ctx->pc == 0x272854u) {
        ctx->pc = 0x272854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272850u;
        // 0x272854: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272858u;
        goto label_272858;
    }
    ctx->pc = 0x272850u;
    SET_GPR_U32(ctx, 31, 0x272858u);
    ctx->pc = 0x272854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272850u;
    // 0x272854: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x272858u;
label_272858:
    // 0x272858: 0x5c400139  bgtzl       $v0, . + 4 + (0x139 << 2)
label_27285c:
    if (ctx->pc == 0x27285Cu) {
        ctx->pc = 0x27285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272858u;
        // 0x27285c: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272860u;
        goto label_272860;
    }
    ctx->pc = 0x272858u;
    {
        const bool branch_taken_0x272858 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x272858) {
            ctx->pc = 0x27285Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272858u;
            // 0x27285c: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x272860u;
label_272860:
    // 0x272860: 0x6400161  bltz        $s2, . + 4 + (0x161 << 2)
label_272864:
    if (ctx->pc == 0x272864u) {
        ctx->pc = 0x272864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272860u;
        // 0x272864: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272868u;
        goto label_272868;
    }
    ctx->pc = 0x272860u;
    {
        const bool branch_taken_0x272860 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x272864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272860u;
        // 0x272864: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272860) {
            ctx->pc = 0x272DE8u;
            goto label_272de8;
        }
    }
    ctx->pc = 0x272868u;
label_272868:
    // 0x272868: 0x10000121  b           . + 4 + (0x121 << 2)
label_27286c:
    if (ctx->pc == 0x27286Cu) {
        ctx->pc = 0x27286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272868u;
        // 0x27286c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272870u;
        goto label_272870;
    }
    ctx->pc = 0x272868u;
    {
        const bool branch_taken_0x272868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272868u;
        // 0x27286c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272868) {
            ctx->pc = 0x272CF0u;
            goto label_272cf0;
        }
    }
    ctx->pc = 0x272870u;
label_272870:
    // 0x272870: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x272870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_272874:
    // 0x272874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272878:
    // 0x272878: 0xc09e46c  jal         func_2791B0
label_27287c:
    if (ctx->pc == 0x27287Cu) {
        ctx->pc = 0x27287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272878u;
        // 0x27287c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272880u;
        goto label_272880;
    }
    ctx->pc = 0x272878u;
    SET_GPR_U32(ctx, 31, 0x272880u);
    ctx->pc = 0x27287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272878u;
    // 0x27287c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2791B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2791B0u, 0x272878u, 0x272880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272880u;
label_272880:
    // 0x272880: 0xc09c940  jal         func_272500
label_272884:
    if (ctx->pc == 0x272884u) {
        ctx->pc = 0x272884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272880u;
        // 0x272884: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272888u;
        goto label_272888;
    }
    ctx->pc = 0x272880u;
    SET_GPR_U32(ctx, 31, 0x272888u);
    ctx->pc = 0x272884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272880u;
    // 0x272884: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x272888u;
label_272888:
    // 0x272888: 0x1c40012c  bgtz        $v0, . + 4 + (0x12C << 2)
label_27288c:
    if (ctx->pc == 0x27288Cu) {
        ctx->pc = 0x27288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272888u;
        // 0x27288c: 0x2402ff92  addiu       $v0, $zero, -0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272890u;
        goto label_272890;
    }
    ctx->pc = 0x272888u;
    {
        const bool branch_taken_0x272888 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x27288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272888u;
        // 0x27288c: 0x2402ff92  addiu       $v0, $zero, -0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272888) {
            ctx->pc = 0x272D3Cu;
            goto label_272d3c;
        }
    }
    ctx->pc = 0x272890u;
label_272890:
    // 0x272890: 0x1642001f  bne         $s2, $v0, . + 4 + (0x1F << 2)
label_272894:
    if (ctx->pc == 0x272894u) {
        ctx->pc = 0x272894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272890u;
        // 0x272894: 0x2402ff93  addiu       $v0, $zero, -0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272898u;
        goto label_272898;
    }
    ctx->pc = 0x272890u;
    {
        const bool branch_taken_0x272890 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x272894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272890u;
        // 0x272894: 0x2402ff93  addiu       $v0, $zero, -0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272890) {
            ctx->pc = 0x272910u;
            goto label_272910;
        }
    }
    ctx->pc = 0x272898u;
label_272898:
    // 0x272898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x272898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27289c:
    // 0x27289c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27289cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2728a0:
    // 0x2728a0: 0xc09c792  jal         func_271E48
label_2728a4:
    if (ctx->pc == 0x2728A4u) {
        ctx->pc = 0x2728A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728A0u;
        // 0x2728a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728A8u;
        goto label_2728a8;
    }
    ctx->pc = 0x2728A0u;
    SET_GPR_U32(ctx, 31, 0x2728A8u);
    ctx->pc = 0x2728A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2728A0u;
    // 0x2728a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271E48u, 0x2728A0u, 0x2728A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728A8u;
label_2728a8:
    // 0x2728a8: 0x442014f  bltzl       $v0, . + 4 + (0x14F << 2)
label_2728ac:
    if (ctx->pc == 0x2728ACu) {
        ctx->pc = 0x2728ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728A8u;
        // 0x2728ac: 0x2412ff95  addiu       $s2, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728B0u;
        goto label_2728b0;
    }
    ctx->pc = 0x2728A8u;
    {
        const bool branch_taken_0x2728a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2728a8) {
            ctx->pc = 0x2728ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2728A8u;
            // 0x2728ac: 0x2412ff95  addiu       $s2, $zero, -0x6B (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272DE8u;
            goto label_272de8;
        }
    }
    ctx->pc = 0x2728B0u;
label_2728b0:
    // 0x2728b0: 0xc09c8c4  jal         func_272310
label_2728b4:
    if (ctx->pc == 0x2728B4u) {
        ctx->pc = 0x2728B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728B0u;
        // 0x2728b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728B8u;
        goto label_2728b8;
    }
    ctx->pc = 0x2728B0u;
    SET_GPR_U32(ctx, 31, 0x2728B8u);
    ctx->pc = 0x2728B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2728B0u;
    // 0x2728b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x2728B0u, 0x2728B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2728B8u;
label_2728b8:
    // 0x2728b8: 0x1c40014c  bgtz        $v0, . + 4 + (0x14C << 2)
label_2728bc:
    if (ctx->pc == 0x2728BCu) {
        ctx->pc = 0x2728BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728B8u;
        // 0x2728bc: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2728C0u;
        goto label_2728c0;
    }
    ctx->pc = 0x2728B8u;
    {
        const bool branch_taken_0x2728b8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2728BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728B8u;
        // 0x2728bc: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728b8) {
            ctx->pc = 0x272DECu;
            goto label_272dec;
        }
    }
    ctx->pc = 0x2728C0u;
label_2728c0:
    // 0x2728c0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2728c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_2728c4:
    // 0x2728c4: 0x26622d78  addiu       $v0, $s3, 0x2D78
    ctx->pc = 0x2728c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_2728c8:
    // 0x2728c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2728c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2728cc:
    // 0x2728cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2728ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2728d0:
    // 0x2728d0: 0x34630124  ori         $v1, $v1, 0x124
    ctx->pc = 0x2728d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)292);
label_2728d4:
    // 0x2728d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2728d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2728d8:
    // 0x2728d8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2728d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_2728dc:
    // 0x2728dc: 0xa0240684  sb          $a0, 0x684($at)
    ctx->pc = 0x2728dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 1668), (uint8_t)GPR_U32(ctx, 4));
label_2728e0:
    // 0x2728e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2728e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2728e4:
    // 0x2728e4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2728e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_2728e8:
    // 0x2728e8: 0xac230704  sw          $v1, 0x704($at)
    ctx->pc = 0x2728e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1796), GPR_U32(ctx, 3));
label_2728ec:
    // 0x2728ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2728ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2728f0:
    // 0x2728f0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2728f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_2728f4:
    // 0x2728f4: 0xa0250685  sb          $a1, 0x685($at)
    ctx->pc = 0x2728f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 1669), (uint8_t)GPR_U32(ctx, 5));
label_2728f8:
    // 0x2728f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2728f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2728fc:
    // 0x2728fc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2728fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_272900:
    // 0x272900: 0xa0240686  sb          $a0, 0x686($at)
    ctx->pc = 0x272900u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 1670), (uint8_t)GPR_U32(ctx, 4));
label_272904:
    // 0x272904: 0x1000011e  b           . + 4 + (0x11E << 2)
label_272908:
    if (ctx->pc == 0x272908u) {
        ctx->pc = 0x272908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272904u;
        // 0x272908: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27290Cu;
        goto label_27290c;
    }
    ctx->pc = 0x272904u;
    {
        const bool branch_taken_0x272904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272904u;
        // 0x272908: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272904) {
            ctx->pc = 0x272D80u;
            goto label_272d80;
        }
    }
    ctx->pc = 0x27290Cu;
label_27290c:
    // 0x27290c: 0x0  nop
    ctx->pc = 0x27290cu;
    // NOP
label_272910:
    // 0x272910: 0x16420011  bne         $s2, $v0, . + 4 + (0x11 << 2)
label_272914:
    if (ctx->pc == 0x272914u) {
        ctx->pc = 0x272914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272910u;
        // 0x272914: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272918u;
        goto label_272918;
    }
    ctx->pc = 0x272910u;
    {
        const bool branch_taken_0x272910 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x272914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272910u;
        // 0x272914: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272910) {
            ctx->pc = 0x272958u;
            goto label_272958;
        }
    }
    ctx->pc = 0x272918u;
label_272918:
    // 0x272918: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x272918u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_27291c:
    // 0x27291c: 0x34e73fff  ori         $a3, $a3, 0x3FFF
    ctx->pc = 0x27291cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16383);
label_272920:
    // 0x272920: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x272920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_272924:
    // 0x272924: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x272924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_272928:
    // 0x272928: 0xdc630688  ld          $v1, 0x688($v1)
    ctx->pc = 0x272928u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 1672)));
label_27292c:
    // 0x27292c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27292cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272930:
    // 0x272930: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272934:
    // 0x272934: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x272934u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_272938:
    // 0x272938: 0xac2006b4  sw          $zero, 0x6B4($at)
    ctx->pc = 0x272938u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1716), GPR_U32(ctx, 0));
label_27293c:
    // 0x27293c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27293cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272940:
    // 0x272940: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x272940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_272944:
    // 0x272944: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272948:
    // 0x272948: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x272948u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_27294c:
    // 0x27294c: 0xfc230688  sd          $v1, 0x688($at)
    ctx->pc = 0x27294cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 1672), GPR_U64(ctx, 3));
label_272950:
    // 0x272950: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_272954:
    if (ctx->pc == 0x272954u) {
        ctx->pc = 0x272954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272950u;
        // 0x272954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272958u;
        goto label_272958;
    }
    ctx->pc = 0x272950u;
    {
        const bool branch_taken_0x272950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272950u;
        // 0x272954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272950) {
            ctx->pc = 0x272CF4u;
            goto label_272cf4;
        }
    }
    ctx->pc = 0x272958u;
label_272958:
    // 0x272958: 0x6400123  bltz        $s2, . + 4 + (0x123 << 2)
label_27295c:
    if (ctx->pc == 0x27295Cu) {
        ctx->pc = 0x27295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272958u;
        // 0x27295c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272960u;
        goto label_272960;
    }
    ctx->pc = 0x272958u;
    {
        const bool branch_taken_0x272958 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x27295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272958u;
        // 0x27295c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272958) {
            ctx->pc = 0x272DE8u;
            goto label_272de8;
        }
    }
    ctx->pc = 0x272960u;
label_272960:
    // 0x272960: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_272964:
    if (ctx->pc == 0x272964u) {
        ctx->pc = 0x272964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272960u;
        // 0x272964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272968u;
        goto label_272968;
    }
    ctx->pc = 0x272960u;
    {
        const bool branch_taken_0x272960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272960u;
        // 0x272964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272960) {
            ctx->pc = 0x272CF0u;
            goto label_272cf0;
        }
    }
    ctx->pc = 0x272968u;
label_272968:
    // 0x272968: 0xc09c8c4  jal         func_272310
label_27296c:
    if (ctx->pc == 0x27296Cu) {
        ctx->pc = 0x27296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272968u;
        // 0x27296c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272970u;
        goto label_272970;
    }
    ctx->pc = 0x272968u;
    SET_GPR_U32(ctx, 31, 0x272970u);
    ctx->pc = 0x27296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272968u;
    // 0x27296c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x272968u, 0x272970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272970u;
label_272970:
    // 0x272970: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_272974:
    if (ctx->pc == 0x272974u) {
        ctx->pc = 0x272974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272970u;
        // 0x272974: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272978u;
        goto label_272978;
    }
    ctx->pc = 0x272970u;
    {
        const bool branch_taken_0x272970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272970u;
        // 0x272974: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272970) {
            ctx->pc = 0x2729B8u;
            goto label_2729b8;
        }
    }
    ctx->pc = 0x272978u;
label_272978:
    // 0x272978: 0xc09c8c4  jal         func_272310
label_27297c:
    if (ctx->pc == 0x27297Cu) {
        ctx->pc = 0x27297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272978u;
        // 0x27297c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272980u;
        goto label_272980;
    }
    ctx->pc = 0x272978u;
    SET_GPR_U32(ctx, 31, 0x272980u);
    ctx->pc = 0x27297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272978u;
    // 0x27297c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x272978u, 0x272980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272980u;
label_272980:
    // 0x272980: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_272984:
    if (ctx->pc == 0x272984u) {
        ctx->pc = 0x272984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272980u;
        // 0x272984: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272988u;
        goto label_272988;
    }
    ctx->pc = 0x272980u;
    {
        const bool branch_taken_0x272980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272980) {
            ctx->pc = 0x272984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272980u;
            // 0x272984: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2729B8u;
            goto label_2729b8;
        }
    }
    ctx->pc = 0x272988u;
label_272988:
    // 0x272988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27298c:
    // 0x27298c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27298cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272990:
    // 0x272990: 0xc09dcec  jal         func_2773B0
label_272994:
    if (ctx->pc == 0x272994u) {
        ctx->pc = 0x272994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272990u;
        // 0x272994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272998u;
        goto label_272998;
    }
    ctx->pc = 0x272990u;
    SET_GPR_U32(ctx, 31, 0x272998u);
    ctx->pc = 0x272994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272990u;
    // 0x272994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2773B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2773B0u, 0x272990u, 0x272998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272998u;
label_272998:
    // 0x272998: 0xc09c940  jal         func_272500
label_27299c:
    if (ctx->pc == 0x27299Cu) {
        ctx->pc = 0x27299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272998u;
        // 0x27299c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729A0u;
        goto label_2729a0;
    }
    ctx->pc = 0x272998u;
    SET_GPR_U32(ctx, 31, 0x2729A0u);
    ctx->pc = 0x27299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272998u;
    // 0x27299c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x2729A0u;
label_2729a0:
    // 0x2729a0: 0x5c4000e7  bgtzl       $v0, . + 4 + (0xE7 << 2)
label_2729a4:
    if (ctx->pc == 0x2729A4u) {
        ctx->pc = 0x2729A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729A0u;
        // 0x2729a4: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729A8u;
        goto label_2729a8;
    }
    ctx->pc = 0x2729A0u;
    {
        const bool branch_taken_0x2729a0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2729a0) {
            ctx->pc = 0x2729A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2729A0u;
            // 0x2729a4: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x2729A8u;
label_2729a8:
    // 0x2729a8: 0x64100d0  bgez        $s2, . + 4 + (0xD0 << 2)
label_2729ac:
    if (ctx->pc == 0x2729ACu) {
        ctx->pc = 0x2729ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729A8u;
        // 0x2729ac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729B0u;
        goto label_2729b0;
    }
    ctx->pc = 0x2729A8u;
    {
        const bool branch_taken_0x2729a8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2729ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729A8u;
        // 0x2729ac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729a8) {
            ctx->pc = 0x272CECu;
            goto label_272cec;
        }
    }
    ctx->pc = 0x2729B0u;
label_2729b0:
    // 0x2729b0: 0x1000010e  b           . + 4 + (0x10E << 2)
label_2729b4:
    if (ctx->pc == 0x2729B4u) {
        ctx->pc = 0x2729B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729B0u;
        // 0x2729b4: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729B8u;
        goto label_2729b8;
    }
    ctx->pc = 0x2729B0u;
    {
        const bool branch_taken_0x2729b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729B0u;
        // 0x2729b4: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729b0) {
            ctx->pc = 0x272DECu;
            goto label_272dec;
        }
    }
    ctx->pc = 0x2729B8u;
label_2729b8:
    // 0x2729b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2729b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2729bc:
    // 0x2729bc: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2729bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_2729c0:
    // 0x2729c0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2729c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2729c4:
    // 0x2729c4: 0x8cc606e0  lw          $a2, 0x6E0($a2)
    ctx->pc = 0x2729c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1760)));
label_2729c8:
    // 0x2729c8: 0xc09dcec  jal         func_2773B0
label_2729cc:
    if (ctx->pc == 0x2729CCu) {
        ctx->pc = 0x2729CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729C8u;
        // 0x2729cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729D0u;
        goto label_2729d0;
    }
    ctx->pc = 0x2729C8u;
    SET_GPR_U32(ctx, 31, 0x2729D0u);
    ctx->pc = 0x2729CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2729C8u;
    // 0x2729cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2773B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2773B0u, 0x2729C8u, 0x2729D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729D0u;
label_2729d0:
    // 0x2729d0: 0xc09c940  jal         func_272500
label_2729d4:
    if (ctx->pc == 0x2729D4u) {
        ctx->pc = 0x2729D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729D0u;
        // 0x2729d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729D8u;
        goto label_2729d8;
    }
    ctx->pc = 0x2729D0u;
    SET_GPR_U32(ctx, 31, 0x2729D8u);
    ctx->pc = 0x2729D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2729D0u;
    // 0x2729d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x2729D8u;
label_2729d8:
    // 0x2729d8: 0x5c4000d9  bgtzl       $v0, . + 4 + (0xD9 << 2)
label_2729dc:
    if (ctx->pc == 0x2729DCu) {
        ctx->pc = 0x2729DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729D8u;
        // 0x2729dc: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729E0u;
        goto label_2729e0;
    }
    ctx->pc = 0x2729D8u;
    {
        const bool branch_taken_0x2729d8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2729d8) {
            ctx->pc = 0x2729DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2729D8u;
            // 0x2729dc: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x2729E0u;
label_2729e0:
    // 0x2729e0: 0x6400101  bltz        $s2, . + 4 + (0x101 << 2)
label_2729e4:
    if (ctx->pc == 0x2729E4u) {
        ctx->pc = 0x2729E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729E0u;
        // 0x2729e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729E8u;
        goto label_2729e8;
    }
    ctx->pc = 0x2729E0u;
    {
        const bool branch_taken_0x2729e0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2729E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729E0u;
        // 0x2729e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729e0) {
            ctx->pc = 0x272DE8u;
            goto label_272de8;
        }
    }
    ctx->pc = 0x2729E8u;
label_2729e8:
    // 0x2729e8: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_2729ec:
    if (ctx->pc == 0x2729ECu) {
        ctx->pc = 0x2729ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729E8u;
        // 0x2729ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729F0u;
        goto label_2729f0;
    }
    ctx->pc = 0x2729E8u;
    {
        const bool branch_taken_0x2729e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729E8u;
        // 0x2729ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729e8) {
            ctx->pc = 0x272CF0u;
            goto label_272cf0;
        }
    }
    ctx->pc = 0x2729F0u;
label_2729f0:
    // 0x2729f0: 0xc09c8c4  jal         func_272310
label_2729f4:
    if (ctx->pc == 0x2729F4u) {
        ctx->pc = 0x2729F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729F0u;
        // 0x2729f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2729F8u;
        goto label_2729f8;
    }
    ctx->pc = 0x2729F0u;
    SET_GPR_U32(ctx, 31, 0x2729F8u);
    ctx->pc = 0x2729F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2729F0u;
    // 0x2729f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x2729F0u, 0x2729F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729F8u;
label_2729f8:
    // 0x2729f8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2729fc:
    if (ctx->pc == 0x2729FCu) {
        ctx->pc = 0x2729FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729F8u;
        // 0x2729fc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A00u;
        goto label_272a00;
    }
    ctx->pc = 0x2729F8u;
    {
        const bool branch_taken_0x2729f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2729FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729F8u;
        // 0x2729fc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729f8) {
            ctx->pc = 0x272A40u;
            goto label_272a40;
        }
    }
    ctx->pc = 0x272A00u;
label_272a00:
    // 0x272a00: 0xc09c8c4  jal         func_272310
label_272a04:
    if (ctx->pc == 0x272A04u) {
        ctx->pc = 0x272A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A00u;
        // 0x272a04: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A08u;
        goto label_272a08;
    }
    ctx->pc = 0x272A00u;
    SET_GPR_U32(ctx, 31, 0x272A08u);
    ctx->pc = 0x272A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A00u;
    // 0x272a04: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x272A00u, 0x272A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A08u;
label_272a08:
    // 0x272a08: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_272a0c:
    if (ctx->pc == 0x272A0Cu) {
        ctx->pc = 0x272A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A08u;
        // 0x272a0c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A10u;
        goto label_272a10;
    }
    ctx->pc = 0x272A08u;
    {
        const bool branch_taken_0x272a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A08u;
        // 0x272a0c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a08) {
            ctx->pc = 0x272A40u;
            goto label_272a40;
        }
    }
    ctx->pc = 0x272A10u;
label_272a10:
    // 0x272a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272a14:
    // 0x272a14: 0xc09e46c  jal         func_2791B0
label_272a18:
    if (ctx->pc == 0x272A18u) {
        ctx->pc = 0x272A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A14u;
        // 0x272a18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A1Cu;
        goto label_272a1c;
    }
    ctx->pc = 0x272A14u;
    SET_GPR_U32(ctx, 31, 0x272A1Cu);
    ctx->pc = 0x272A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A14u;
    // 0x272a18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2791B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2791B0u, 0x272A14u, 0x272A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A1Cu;
label_272a1c:
    // 0x272a1c: 0xc09c940  jal         func_272500
label_272a20:
    if (ctx->pc == 0x272A20u) {
        ctx->pc = 0x272A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A1Cu;
        // 0x272a20: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A24u;
        goto label_272a24;
    }
    ctx->pc = 0x272A1Cu;
    SET_GPR_U32(ctx, 31, 0x272A24u);
    ctx->pc = 0x272A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A1Cu;
    // 0x272a20: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x272A24u;
label_272a24:
    // 0x272a24: 0x5c4000c6  bgtzl       $v0, . + 4 + (0xC6 << 2)
label_272a28:
    if (ctx->pc == 0x272A28u) {
        ctx->pc = 0x272A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A24u;
        // 0x272a28: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A2Cu;
        goto label_272a2c;
    }
    ctx->pc = 0x272A24u;
    {
        const bool branch_taken_0x272a24 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x272a24) {
            ctx->pc = 0x272A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272A24u;
            // 0x272a28: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x272A2Cu;
label_272a2c:
    // 0x272a2c: 0x641000d  bgez        $s2, . + 4 + (0xD << 2)
label_272a30:
    if (ctx->pc == 0x272A30u) {
        ctx->pc = 0x272A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A2Cu;
        // 0x272a30: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A34u;
        goto label_272a34;
    }
    ctx->pc = 0x272A2Cu;
    {
        const bool branch_taken_0x272a2c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x272A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A2Cu;
        // 0x272a30: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a2c) {
            ctx->pc = 0x272A64u;
            goto label_272a64;
        }
    }
    ctx->pc = 0x272A34u;
label_272a34:
    // 0x272a34: 0x100000ee  b           . + 4 + (0xEE << 2)
label_272a38:
    if (ctx->pc == 0x272A38u) {
        ctx->pc = 0x272A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A34u;
        // 0x272a38: 0x2c420064  sltiu       $v0, $v0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A3Cu;
        goto label_272a3c;
    }
    ctx->pc = 0x272A34u;
    {
        const bool branch_taken_0x272a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A34u;
        // 0x272a38: 0x2c420064  sltiu       $v0, $v0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a34) {
            ctx->pc = 0x272DF0u;
            goto label_272df0;
        }
    }
    ctx->pc = 0x272A3Cu;
label_272a3c:
    // 0x272a3c: 0x0  nop
    ctx->pc = 0x272a3cu;
    // NOP
label_272a40:
    // 0x272a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272a44:
    // 0x272a44: 0xc09e46c  jal         func_2791B0
label_272a48:
    if (ctx->pc == 0x272A48u) {
        ctx->pc = 0x272A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A44u;
        // 0x272a48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A4Cu;
        goto label_272a4c;
    }
    ctx->pc = 0x272A44u;
    SET_GPR_U32(ctx, 31, 0x272A4Cu);
    ctx->pc = 0x272A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A44u;
    // 0x272a48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2791B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2791B0u, 0x272A44u, 0x272A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A4Cu;
label_272a4c:
    // 0x272a4c: 0xc09c940  jal         func_272500
label_272a50:
    if (ctx->pc == 0x272A50u) {
        ctx->pc = 0x272A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A4Cu;
        // 0x272a50: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A54u;
        goto label_272a54;
    }
    ctx->pc = 0x272A4Cu;
    SET_GPR_U32(ctx, 31, 0x272A54u);
    ctx->pc = 0x272A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A4Cu;
    // 0x272a50: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x272A54u;
label_272a54:
    // 0x272a54: 0x5c4000ba  bgtzl       $v0, . + 4 + (0xBA << 2)
label_272a58:
    if (ctx->pc == 0x272A58u) {
        ctx->pc = 0x272A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A54u;
        // 0x272a58: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A5Cu;
        goto label_272a5c;
    }
    ctx->pc = 0x272A54u;
    {
        const bool branch_taken_0x272a54 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x272a54) {
            ctx->pc = 0x272A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272A54u;
            // 0x272a58: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x272A5Cu;
label_272a5c:
    // 0x272a5c: 0x64000e3  bltz        $s2, . + 4 + (0xE3 << 2)
label_272a60:
    if (ctx->pc == 0x272A60u) {
        ctx->pc = 0x272A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A5Cu;
        // 0x272a60: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A64u;
        goto label_272a64;
    }
    ctx->pc = 0x272A5Cu;
    {
        const bool branch_taken_0x272a5c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x272A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A5Cu;
        // 0x272a60: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a5c) {
            ctx->pc = 0x272DECu;
            goto label_272dec;
        }
    }
    ctx->pc = 0x272A64u;
label_272a64:
    // 0x272a64: 0xc09c8c4  jal         func_272310
label_272a68:
    if (ctx->pc == 0x272A68u) {
        ctx->pc = 0x272A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A64u;
        // 0x272a68: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A6Cu;
        goto label_272a6c;
    }
    ctx->pc = 0x272A64u;
    SET_GPR_U32(ctx, 31, 0x272A6Cu);
    ctx->pc = 0x272A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A64u;
    // 0x272a68: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x272A64u, 0x272A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A6Cu;
label_272a6c:
    // 0x272a6c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_272a70:
    if (ctx->pc == 0x272A70u) {
        ctx->pc = 0x272A74u;
        goto label_272a74;
    }
    ctx->pc = 0x272A6Cu;
    {
        const bool branch_taken_0x272a6c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x272a6c) {
            ctx->pc = 0x272A84u;
            goto label_272a84;
        }
    }
    ctx->pc = 0x272A74u;
label_272a74:
    // 0x272a74: 0xc09c8c4  jal         func_272310
label_272a78:
    if (ctx->pc == 0x272A78u) {
        ctx->pc = 0x272A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A74u;
        // 0x272a78: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A7Cu;
        goto label_272a7c;
    }
    ctx->pc = 0x272A74u;
    SET_GPR_U32(ctx, 31, 0x272A7Cu);
    ctx->pc = 0x272A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A74u;
    // 0x272a78: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x272A74u, 0x272A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A7Cu;
label_272a7c:
    // 0x272a7c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_272a80:
    if (ctx->pc == 0x272A80u) {
        ctx->pc = 0x272A84u;
        goto label_272a84;
    }
    ctx->pc = 0x272A7Cu;
    {
        const bool branch_taken_0x272a7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x272a7c) {
            ctx->pc = 0x272AD0u;
            goto label_272ad0;
        }
    }
    ctx->pc = 0x272A84u;
label_272a84:
    // 0x272a84: 0xc09c8c4  jal         func_272310
label_272a88:
    if (ctx->pc == 0x272A88u) {
        ctx->pc = 0x272A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A84u;
        // 0x272a88: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A8Cu;
        goto label_272a8c;
    }
    ctx->pc = 0x272A84u;
    SET_GPR_U32(ctx, 31, 0x272A8Cu);
    ctx->pc = 0x272A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A84u;
    // 0x272a88: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x272A84u, 0x272A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A8Cu;
label_272a8c:
    // 0x272a8c: 0x584000b3  blezl       $v0, . + 4 + (0xB3 << 2)
label_272a90:
    if (ctx->pc == 0x272A90u) {
        ctx->pc = 0x272A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A8Cu;
        // 0x272a90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272A94u;
        goto label_272a94;
    }
    ctx->pc = 0x272A8Cu;
    {
        const bool branch_taken_0x272a8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x272a8c) {
            ctx->pc = 0x272A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272A8Cu;
            // 0x272a90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D5Cu;
            goto label_272d5c;
        }
    }
    ctx->pc = 0x272A94u;
label_272a94:
    // 0x272a94: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x272a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_272a98:
    // 0x272a98: 0x245031ac  addiu       $s0, $v0, 0x31AC
    ctx->pc = 0x272a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12716));
label_272a9c:
    // 0x272a9c: 0xc0b7944  jal         func_2DE510
label_272aa0:
    if (ctx->pc == 0x272AA0u) {
        ctx->pc = 0x272AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A9Cu;
        // 0x272aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AA4u;
        goto label_272aa4;
    }
    ctx->pc = 0x272A9Cu;
    SET_GPR_U32(ctx, 31, 0x272AA4u);
    ctx->pc = 0x272AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A9Cu;
    // 0x272aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE510u, 0x272A9Cu, 0x272AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AA4u;
label_272aa4:
    // 0x272aa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272aa8:
    // 0x272aa8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_272aac:
    if (ctx->pc == 0x272AACu) {
        ctx->pc = 0x272AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AA8u;
        // 0x272aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AB0u;
        goto label_272ab0;
    }
    ctx->pc = 0x272AA8u;
    {
        const bool branch_taken_0x272aa8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x272AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AA8u;
        // 0x272aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272aa8) {
            ctx->pc = 0x272AB8u;
            goto label_272ab8;
        }
    }
    ctx->pc = 0x272AB0u;
label_272ab0:
    // 0x272ab0: 0x100000cd  b           . + 4 + (0xCD << 2)
label_272ab4:
    if (ctx->pc == 0x272AB4u) {
        ctx->pc = 0x272AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AB0u;
        // 0x272ab4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AB8u;
        goto label_272ab8;
    }
    ctx->pc = 0x272AB0u;
    {
        const bool branch_taken_0x272ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AB0u;
        // 0x272ab4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ab0) {
            ctx->pc = 0x272DE8u;
            goto label_272de8;
        }
    }
    ctx->pc = 0x272AB8u;
label_272ab8:
    // 0x272ab8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272abc:
    // 0x272abc: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x272abcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_272ac0:
    // 0x272ac0: 0xac220308  sw          $v0, 0x308($at)
    ctx->pc = 0x272ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 776), GPR_U32(ctx, 2));
label_272ac4:
    // 0x272ac4: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_272ac8:
    if (ctx->pc == 0x272AC8u) {
        ctx->pc = 0x272AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AC4u;
        // 0x272ac8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272ACCu;
        goto label_272acc;
    }
    ctx->pc = 0x272AC4u;
    {
        const bool branch_taken_0x272ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AC4u;
        // 0x272ac8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ac4) {
            ctx->pc = 0x272D5Cu;
            goto label_272d5c;
        }
    }
    ctx->pc = 0x272ACCu;
label_272acc:
    // 0x272acc: 0x0  nop
    ctx->pc = 0x272accu;
    // NOP
label_272ad0:
    // 0x272ad0: 0xc09c8c4  jal         func_272310
label_272ad4:
    if (ctx->pc == 0x272AD4u) {
        ctx->pc = 0x272AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AD0u;
        // 0x272ad4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AD8u;
        goto label_272ad8;
    }
    ctx->pc = 0x272AD0u;
    SET_GPR_U32(ctx, 31, 0x272AD8u);
    ctx->pc = 0x272AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AD0u;
    // 0x272ad4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x272AD0u, 0x272AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AD8u;
label_272ad8:
    // 0x272ad8: 0x1c400084  bgtz        $v0, . + 4 + (0x84 << 2)
label_272adc:
    if (ctx->pc == 0x272ADCu) {
        ctx->pc = 0x272ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AD8u;
        // 0x272adc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AE0u;
        goto label_272ae0;
    }
    ctx->pc = 0x272AD8u;
    {
        const bool branch_taken_0x272ad8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x272ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AD8u;
        // 0x272adc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ad8) {
            ctx->pc = 0x272CECu;
            goto label_272cec;
        }
    }
    ctx->pc = 0x272AE0u;
label_272ae0:
    // 0x272ae0: 0xc09c8c4  jal         func_272310
label_272ae4:
    if (ctx->pc == 0x272AE4u) {
        ctx->pc = 0x272AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AE0u;
        // 0x272ae4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AE8u;
        goto label_272ae8;
    }
    ctx->pc = 0x272AE0u;
    SET_GPR_U32(ctx, 31, 0x272AE8u);
    ctx->pc = 0x272AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AE0u;
    // 0x272ae4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x272AE0u, 0x272AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AE8u;
label_272ae8:
    // 0x272ae8: 0x1c400080  bgtz        $v0, . + 4 + (0x80 << 2)
label_272aec:
    if (ctx->pc == 0x272AECu) {
        ctx->pc = 0x272AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AE8u;
        // 0x272aec: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AF0u;
        goto label_272af0;
    }
    ctx->pc = 0x272AE8u;
    {
        const bool branch_taken_0x272ae8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x272AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AE8u;
        // 0x272aec: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ae8) {
            ctx->pc = 0x272CECu;
            goto label_272cec;
        }
    }
    ctx->pc = 0x272AF0u;
label_272af0:
    // 0x272af0: 0xc09c8c4  jal         func_272310
label_272af4:
    if (ctx->pc == 0x272AF4u) {
        ctx->pc = 0x272AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AF0u;
        // 0x272af4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AF8u;
        goto label_272af8;
    }
    ctx->pc = 0x272AF0u;
    SET_GPR_U32(ctx, 31, 0x272AF8u);
    ctx->pc = 0x272AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AF0u;
    // 0x272af4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x272AF0u, 0x272AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AF8u;
label_272af8:
    // 0x272af8: 0x184000a1  blez        $v0, . + 4 + (0xA1 << 2)
label_272afc:
    if (ctx->pc == 0x272AFCu) {
        ctx->pc = 0x272AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AF8u;
        // 0x272afc: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B00u;
        goto label_272b00;
    }
    ctx->pc = 0x272AF8u;
    {
        const bool branch_taken_0x272af8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x272AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AF8u;
        // 0x272afc: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272af8) {
            ctx->pc = 0x272D80u;
            goto label_272d80;
        }
    }
    ctx->pc = 0x272B00u;
label_272b00:
    // 0x272b00: 0x1000007a  b           . + 4 + (0x7A << 2)
label_272b04:
    if (ctx->pc == 0x272B04u) {
        ctx->pc = 0x272B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B00u;
        // 0x272b04: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B08u;
        goto label_272b08;
    }
    ctx->pc = 0x272B00u;
    {
        const bool branch_taken_0x272b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B00u;
        // 0x272b04: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b00) {
            ctx->pc = 0x272CECu;
            goto label_272cec;
        }
    }
    ctx->pc = 0x272B08u;
label_272b08:
    // 0x272b08: 0x26702d78  addiu       $s0, $s3, 0x2D78
    ctx->pc = 0x272b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_272b0c:
    // 0x272b0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272b10:
    // 0x272b10: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272b14:
    // 0x272b14: 0xc043328  jal         func_10CCA0
label_272b18:
    if (ctx->pc == 0x272B18u) {
        ctx->pc = 0x272B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B14u;
        // 0x272b18: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B1Cu;
        goto label_272b1c;
    }
    ctx->pc = 0x272B14u;
    SET_GPR_U32(ctx, 31, 0x272B1Cu);
    ctx->pc = 0x272B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B14u;
    // 0x272b18: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x272B14u, 0x272B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B1Cu;
label_272b1c:
    // 0x272b1c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x272b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_272b20:
    // 0x272b20: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x272b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_272b24:
    // 0x272b24: 0x8c6306e8  lw          $v1, 0x6E8($v1)
    ctx->pc = 0x272b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1768)));
label_272b28:
    // 0x272b28: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272b2c:
    // 0x272b2c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272b30:
    // 0x272b30: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x272b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_272b34:
    // 0x272b34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x272b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_272b38:
    // 0x272b38: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272b3c:
    // 0x272b3c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x272b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_272b40:
    // 0x272b40: 0xc043320  jal         func_10CC80
label_272b44:
    if (ctx->pc == 0x272B44u) {
        ctx->pc = 0x272B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B40u;
        // 0x272b44: 0xac2306e8  sw          $v1, 0x6E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B48u;
        goto label_272b48;
    }
    ctx->pc = 0x272B40u;
    SET_GPR_U32(ctx, 31, 0x272B48u);
    ctx->pc = 0x272B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B40u;
    // 0x272b44: 0xac2306e8  sw          $v1, 0x6E8($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 1768), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x272B40u, 0x272B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B48u;
label_272b48:
    // 0x272b48: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272b4c:
    // 0x272b4c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272b50:
    // 0x272b50: 0xc043328  jal         func_10CCA0
label_272b54:
    if (ctx->pc == 0x272B54u) {
        ctx->pc = 0x272B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B50u;
        // 0x272b54: 0x8c8406c4  lw          $a0, 0x6C4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1732)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B58u;
        goto label_272b58;
    }
    ctx->pc = 0x272B50u;
    SET_GPR_U32(ctx, 31, 0x272B58u);
    ctx->pc = 0x272B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B50u;
    // 0x272b54: 0x8c8406c4  lw          $a0, 0x6C4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x272B50u, 0x272B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B58u;
label_272b58:
    // 0x272b58: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272b5c:
    // 0x272b5c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272b60:
    // 0x272b60: 0xc043328  jal         func_10CCA0
label_272b64:
    if (ctx->pc == 0x272B64u) {
        ctx->pc = 0x272B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B60u;
        // 0x272b64: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B68u;
        goto label_272b68;
    }
    ctx->pc = 0x272B60u;
    SET_GPR_U32(ctx, 31, 0x272B68u);
    ctx->pc = 0x272B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B60u;
    // 0x272b64: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x272B60u, 0x272B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B68u;
label_272b68:
    // 0x272b68: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x272b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_272b6c:
    // 0x272b6c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x272b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_272b70:
    // 0x272b70: 0x8c6306e8  lw          $v1, 0x6E8($v1)
    ctx->pc = 0x272b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1768)));
label_272b74:
    // 0x272b74: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272b78:
    // 0x272b78: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272b7c:
    // 0x272b7c: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x272b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_272b80:
    // 0x272b80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x272b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_272b84:
    // 0x272b84: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272b88:
    // 0x272b88: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x272b88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_272b8c:
    // 0x272b8c: 0xc043320  jal         func_10CC80
label_272b90:
    if (ctx->pc == 0x272B90u) {
        ctx->pc = 0x272B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B8Cu;
        // 0x272b90: 0xac2306e8  sw          $v1, 0x6E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272B94u;
        goto label_272b94;
    }
    ctx->pc = 0x272B8Cu;
    SET_GPR_U32(ctx, 31, 0x272B94u);
    ctx->pc = 0x272B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B8Cu;
    // 0x272b90: 0xac2306e8  sw          $v1, 0x6E8($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 1768), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x272B8Cu, 0x272B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B94u;
label_272b94:
    // 0x272b94: 0xc09c93c  jal         func_2724F0
label_272b98:
    if (ctx->pc == 0x272B98u) {
        ctx->pc = 0x272B9Cu;
        goto label_272b9c;
    }
    ctx->pc = 0x272B94u;
    SET_GPR_U32(ctx, 31, 0x272B9Cu);
    ctx->pc = 0x2724F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2724F0u, 0x272B94u, 0x272B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B9Cu;
label_272b9c:
    // 0x272b9c: 0x1c4000aa  bgtz        $v0, . + 4 + (0xAA << 2)
label_272ba0:
    if (ctx->pc == 0x272BA0u) {
        ctx->pc = 0x272BA4u;
        goto label_272ba4;
    }
    ctx->pc = 0x272B9Cu;
    {
        const bool branch_taken_0x272b9c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x272b9c) {
            ctx->pc = 0x272E48u;
            goto label_272e48;
        }
    }
    ctx->pc = 0x272BA4u;
label_272ba4:
    // 0x272ba4: 0xc09c940  jal         func_272500
label_272ba8:
    if (ctx->pc == 0x272BA8u) {
        ctx->pc = 0x272BACu;
        goto label_272bac;
    }
    ctx->pc = 0x272BA4u;
    SET_GPR_U32(ctx, 31, 0x272BACu);
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x272BACu;
label_272bac:
    // 0x272bac: 0x1c400064  bgtz        $v0, . + 4 + (0x64 << 2)
label_272bb0:
    if (ctx->pc == 0x272BB0u) {
        ctx->pc = 0x272BB4u;
        goto label_272bb4;
    }
    ctx->pc = 0x272BACu;
    {
        const bool branch_taken_0x272bac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x272bac) {
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x272BB4u;
label_272bb4:
    // 0x272bb4: 0xc09c900  jal         func_272400
label_272bb8:
    if (ctx->pc == 0x272BB8u) {
        ctx->pc = 0x272BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BB4u;
        // 0x272bb8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272BBCu;
        goto label_272bbc;
    }
    ctx->pc = 0x272BB4u;
    SET_GPR_U32(ctx, 31, 0x272BBCu);
    ctx->pc = 0x272BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272BB4u;
    // 0x272bb8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272400u, 0x272BB4u, 0x272BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BBCu;
label_272bbc:
    // 0x272bbc: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
label_272bc0:
    if (ctx->pc == 0x272BC0u) {
        ctx->pc = 0x272BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BBCu;
        // 0x272bc0: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272BC4u;
        goto label_272bc4;
    }
    ctx->pc = 0x272BBCu;
    {
        const bool branch_taken_0x272bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272bbc) {
            ctx->pc = 0x272BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272BBCu;
            // 0x272bc0: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D80u;
            goto label_272d80;
        }
    }
    ctx->pc = 0x272BC4u;
label_272bc4:
    // 0x272bc4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x272bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_272bc8:
    // 0x272bc8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x272bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_272bcc:
    // 0x272bcc: 0x8cc606e0  lw          $a2, 0x6E0($a2)
    ctx->pc = 0x272bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1760)));
label_272bd0:
    // 0x272bd0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x272bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_272bd4:
    // 0x272bd4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x272bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_272bd8:
    // 0x272bd8: 0x8ca50690  lw          $a1, 0x690($a1)
    ctx->pc = 0x272bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1680)));
label_272bdc:
    // 0x272bdc: 0xc09dcec  jal         func_2773B0
label_272be0:
    if (ctx->pc == 0x272BE0u) {
        ctx->pc = 0x272BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BDCu;
        // 0x272be0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272BE4u;
        goto label_272be4;
    }
    ctx->pc = 0x272BDCu;
    SET_GPR_U32(ctx, 31, 0x272BE4u);
    ctx->pc = 0x272BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272BDCu;
    // 0x272be0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2773B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2773B0u, 0x272BDCu, 0x272BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BE4u;
label_272be4:
    // 0x272be4: 0xc09c940  jal         func_272500
label_272be8:
    if (ctx->pc == 0x272BE8u) {
        ctx->pc = 0x272BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BE4u;
        // 0x272be8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272BECu;
        goto label_272bec;
    }
    ctx->pc = 0x272BE4u;
    SET_GPR_U32(ctx, 31, 0x272BECu);
    ctx->pc = 0x272BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272BE4u;
    // 0x272be8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x272BECu;
label_272bec:
    // 0x272bec: 0x5c400054  bgtzl       $v0, . + 4 + (0x54 << 2)
label_272bf0:
    if (ctx->pc == 0x272BF0u) {
        ctx->pc = 0x272BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BECu;
        // 0x272bf0: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272BF4u;
        goto label_272bf4;
    }
    ctx->pc = 0x272BECu;
    {
        const bool branch_taken_0x272bec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x272bec) {
            ctx->pc = 0x272BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272BECu;
            // 0x272bf0: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x272BF4u;
label_272bf4:
    // 0x272bf4: 0x640007c  bltz        $s2, . + 4 + (0x7C << 2)
label_272bf8:
    if (ctx->pc == 0x272BF8u) {
        ctx->pc = 0x272BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BF4u;
        // 0x272bf8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272BFCu;
        goto label_272bfc;
    }
    ctx->pc = 0x272BF4u;
    {
        const bool branch_taken_0x272bf4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x272BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BF4u;
        // 0x272bf8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bf4) {
            ctx->pc = 0x272DE8u;
            goto label_272de8;
        }
    }
    ctx->pc = 0x272BFCu;
label_272bfc:
    // 0x272bfc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_272c00:
    if (ctx->pc == 0x272C00u) {
        ctx->pc = 0x272C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BFCu;
        // 0x272c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C04u;
        goto label_272c04;
    }
    ctx->pc = 0x272BFCu;
    {
        const bool branch_taken_0x272bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BFCu;
        // 0x272c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bfc) {
            ctx->pc = 0x272CF0u;
            goto label_272cf0;
        }
    }
    ctx->pc = 0x272C04u;
label_272c04:
    // 0x272c04: 0x0  nop
    ctx->pc = 0x272c04u;
    // NOP
label_272c08:
    // 0x272c08: 0x26702d78  addiu       $s0, $s3, 0x2D78
    ctx->pc = 0x272c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_272c0c:
    // 0x272c0c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x272c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_272c10:
    // 0x272c10: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x272c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_272c14:
    // 0x272c14: 0x8ca50690  lw          $a1, 0x690($a1)
    ctx->pc = 0x272c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1680)));
label_272c18:
    // 0x272c18: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x272c18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_272c1c:
    // 0x272c1c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x272c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_272c20:
    // 0x272c20: 0x8cc606e0  lw          $a2, 0x6E0($a2)
    ctx->pc = 0x272c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1760)));
label_272c24:
    // 0x272c24: 0xc09e46c  jal         func_2791B0
label_272c28:
    if (ctx->pc == 0x272C28u) {
        ctx->pc = 0x272C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C24u;
        // 0x272c28: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C2Cu;
        goto label_272c2c;
    }
    ctx->pc = 0x272C24u;
    SET_GPR_U32(ctx, 31, 0x272C2Cu);
    ctx->pc = 0x272C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C24u;
    // 0x272c28: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2791B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2791B0u, 0x272C24u, 0x272C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C2Cu;
label_272c2c:
    // 0x272c2c: 0xc09c940  jal         func_272500
label_272c30:
    if (ctx->pc == 0x272C30u) {
        ctx->pc = 0x272C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C2Cu;
        // 0x272c30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C34u;
        goto label_272c34;
    }
    ctx->pc = 0x272C2Cu;
    SET_GPR_U32(ctx, 31, 0x272C34u);
    ctx->pc = 0x272C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C2Cu;
    // 0x272c30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x272C34u;
label_272c34:
    // 0x272c34: 0x5c400042  bgtzl       $v0, . + 4 + (0x42 << 2)
label_272c38:
    if (ctx->pc == 0x272C38u) {
        ctx->pc = 0x272C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C34u;
        // 0x272c38: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C3Cu;
        goto label_272c3c;
    }
    ctx->pc = 0x272C34u;
    {
        const bool branch_taken_0x272c34 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x272c34) {
            ctx->pc = 0x272C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272C34u;
            // 0x272c38: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x272C3Cu;
label_272c3c:
    // 0x272c3c: 0x640006b  bltz        $s2, . + 4 + (0x6B << 2)
label_272c40:
    if (ctx->pc == 0x272C40u) {
        ctx->pc = 0x272C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C3Cu;
        // 0x272c40: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C44u;
        goto label_272c44;
    }
    ctx->pc = 0x272C3Cu;
    {
        const bool branch_taken_0x272c3c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x272C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C3Cu;
        // 0x272c40: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c3c) {
            ctx->pc = 0x272DECu;
            goto label_272dec;
        }
    }
    ctx->pc = 0x272C44u;
label_272c44:
    // 0x272c44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x272c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_272c48:
    // 0x272c48: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x272c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_272c4c:
    // 0x272c4c: 0x8c4206e0  lw          $v0, 0x6E0($v0)
    ctx->pc = 0x272c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
label_272c50:
    // 0x272c50: 0x1c400041  bgtz        $v0, . + 4 + (0x41 << 2)
label_272c54:
    if (ctx->pc == 0x272C54u) {
        ctx->pc = 0x272C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C50u;
        // 0x272c54: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C58u;
        goto label_272c58;
    }
    ctx->pc = 0x272C50u;
    {
        const bool branch_taken_0x272c50 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x272C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C50u;
        // 0x272c54: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c50) {
            ctx->pc = 0x272D58u;
            goto label_272d58;
        }
    }
    ctx->pc = 0x272C58u;
label_272c58:
    // 0x272c58: 0x10000025  b           . + 4 + (0x25 << 2)
label_272c5c:
    if (ctx->pc == 0x272C5Cu) {
        ctx->pc = 0x272C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C58u;
        // 0x272c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C60u;
        goto label_272c60;
    }
    ctx->pc = 0x272C58u;
    {
        const bool branch_taken_0x272c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C58u;
        // 0x272c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c58) {
            ctx->pc = 0x272CF0u;
            goto label_272cf0;
        }
    }
    ctx->pc = 0x272C60u;
label_272c60:
    // 0x272c60: 0x26622d78  addiu       $v0, $s3, 0x2D78
    ctx->pc = 0x272c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_272c64:
    // 0x272c64: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x272c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_272c68:
    // 0x272c68: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x272c68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_272c6c:
    // 0x272c6c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x272c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_272c70:
    // 0x272c70: 0x8ca50694  lw          $a1, 0x694($a1)
    ctx->pc = 0x272c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1684)));
label_272c74:
    // 0x272c74: 0xc09dcec  jal         func_2773B0
label_272c78:
    if (ctx->pc == 0x272C78u) {
        ctx->pc = 0x272C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C74u;
        // 0x272c78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C7Cu;
        goto label_272c7c;
    }
    ctx->pc = 0x272C74u;
    SET_GPR_U32(ctx, 31, 0x272C7Cu);
    ctx->pc = 0x272C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C74u;
    // 0x272c78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2773B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2773B0u, 0x272C74u, 0x272C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C7Cu;
label_272c7c:
    // 0x272c7c: 0xc09c940  jal         func_272500
label_272c80:
    if (ctx->pc == 0x272C80u) {
        ctx->pc = 0x272C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C7Cu;
        // 0x272c80: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C84u;
        goto label_272c84;
    }
    ctx->pc = 0x272C7Cu;
    SET_GPR_U32(ctx, 31, 0x272C84u);
    ctx->pc = 0x272C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C7Cu;
    // 0x272c80: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x272C84u;
label_272c84:
    // 0x272c84: 0x5c40002e  bgtzl       $v0, . + 4 + (0x2E << 2)
label_272c88:
    if (ctx->pc == 0x272C88u) {
        ctx->pc = 0x272C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C84u;
        // 0x272c88: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C8Cu;
        goto label_272c8c;
    }
    ctx->pc = 0x272C84u;
    {
        const bool branch_taken_0x272c84 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x272c84) {
            ctx->pc = 0x272C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272C84u;
            // 0x272c88: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x272C8Cu;
label_272c8c:
    // 0x272c8c: 0x6400056  bltz        $s2, . + 4 + (0x56 << 2)
label_272c90:
    if (ctx->pc == 0x272C90u) {
        ctx->pc = 0x272C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C8Cu;
        // 0x272c90: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C94u;
        goto label_272c94;
    }
    ctx->pc = 0x272C8Cu;
    {
        const bool branch_taken_0x272c8c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x272C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C8Cu;
        // 0x272c90: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c8c) {
            ctx->pc = 0x272DE8u;
            goto label_272de8;
        }
    }
    ctx->pc = 0x272C94u;
label_272c94:
    // 0x272c94: 0x10000016  b           . + 4 + (0x16 << 2)
label_272c98:
    if (ctx->pc == 0x272C98u) {
        ctx->pc = 0x272C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C94u;
        // 0x272c98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272C9Cu;
        goto label_272c9c;
    }
    ctx->pc = 0x272C94u;
    {
        const bool branch_taken_0x272c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C94u;
        // 0x272c98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c94) {
            ctx->pc = 0x272CF0u;
            goto label_272cf0;
        }
    }
    ctx->pc = 0x272C9Cu;
label_272c9c:
    // 0x272c9c: 0x0  nop
    ctx->pc = 0x272c9cu;
    // NOP
label_272ca0:
    // 0x272ca0: 0x26622d78  addiu       $v0, $s3, 0x2D78
    ctx->pc = 0x272ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_272ca4:
    // 0x272ca4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x272ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_272ca8:
    // 0x272ca8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x272ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_272cac:
    // 0x272cac: 0x8ca50694  lw          $a1, 0x694($a1)
    ctx->pc = 0x272cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1684)));
label_272cb0:
    // 0x272cb0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_272cb4:
    if (ctx->pc == 0x272CB4u) {
        ctx->pc = 0x272CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CB0u;
        // 0x272cb4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272CB8u;
        goto label_272cb8;
    }
    ctx->pc = 0x272CB0u;
    {
        const bool branch_taken_0x272cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CB0u;
        // 0x272cb4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272cb0) {
            ctx->pc = 0x272D24u;
            goto label_272d24;
        }
    }
    ctx->pc = 0x272CB8u;
label_272cb8:
    // 0x272cb8: 0x26622d78  addiu       $v0, $s3, 0x2D78
    ctx->pc = 0x272cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_272cbc:
    // 0x272cbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x272cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_272cc0:
    // 0x272cc0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x272cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_272cc4:
    // 0x272cc4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x272cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_272cc8:
    // 0x272cc8: 0x8ca5068c  lw          $a1, 0x68C($a1)
    ctx->pc = 0x272cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1676)));
label_272ccc:
    // 0x272ccc: 0xc09dcec  jal         func_2773B0
label_272cd0:
    if (ctx->pc == 0x272CD0u) {
        ctx->pc = 0x272CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CCCu;
        // 0x272cd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272CD4u;
        goto label_272cd4;
    }
    ctx->pc = 0x272CCCu;
    SET_GPR_U32(ctx, 31, 0x272CD4u);
    ctx->pc = 0x272CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CCCu;
    // 0x272cd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2773B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2773B0u, 0x272CCCu, 0x272CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CD4u;
label_272cd4:
    // 0x272cd4: 0xc09c940  jal         func_272500
label_272cd8:
    if (ctx->pc == 0x272CD8u) {
        ctx->pc = 0x272CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CD4u;
        // 0x272cd8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272CDCu;
        goto label_272cdc;
    }
    ctx->pc = 0x272CD4u;
    SET_GPR_U32(ctx, 31, 0x272CDCu);
    ctx->pc = 0x272CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CD4u;
    // 0x272cd8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x272CDCu;
label_272cdc:
    // 0x272cdc: 0x5c400018  bgtzl       $v0, . + 4 + (0x18 << 2)
label_272ce0:
    if (ctx->pc == 0x272CE0u) {
        ctx->pc = 0x272CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CDCu;
        // 0x272ce0: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272CE4u;
        goto label_272ce4;
    }
    ctx->pc = 0x272CDCu;
    {
        const bool branch_taken_0x272cdc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x272cdc) {
            ctx->pc = 0x272CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272CDCu;
            // 0x272ce0: 0x2412fda7  addiu       $s2, $zero, -0x259 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D40u;
            goto label_272d40;
        }
    }
    ctx->pc = 0x272CE4u;
label_272ce4:
    // 0x272ce4: 0x6400040  bltz        $s2, . + 4 + (0x40 << 2)
label_272ce8:
    if (ctx->pc == 0x272CE8u) {
        ctx->pc = 0x272CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CE4u;
        // 0x272ce8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272CECu;
        goto label_272cec;
    }
    ctx->pc = 0x272CE4u;
    {
        const bool branch_taken_0x272ce4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x272CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CE4u;
        // 0x272ce8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ce4) {
            ctx->pc = 0x272DE8u;
            goto label_272de8;
        }
    }
    ctx->pc = 0x272CECu;
label_272cec:
    // 0x272cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272cf0:
    // 0x272cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272cf4:
    // 0x272cf4: 0xc09c792  jal         func_271E48
label_272cf8:
    if (ctx->pc == 0x272CF8u) {
        ctx->pc = 0x272CFCu;
        goto label_272cfc;
    }
    ctx->pc = 0x272CF4u;
    SET_GPR_U32(ctx, 31, 0x272CFCu);
    ctx->pc = 0x271E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271E48u, 0x272CF4u, 0x272CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CFCu;
label_272cfc:
    // 0x272cfc: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
label_272d00:
    if (ctx->pc == 0x272D00u) {
        ctx->pc = 0x272D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CFCu;
        // 0x272d00: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D04u;
        goto label_272d04;
    }
    ctx->pc = 0x272CFCu;
    {
        const bool branch_taken_0x272cfc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x272D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CFCu;
        // 0x272d00: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272cfc) {
            ctx->pc = 0x272D80u;
            goto label_272d80;
        }
    }
    ctx->pc = 0x272D04u;
label_272d04:
    // 0x272d04: 0x10000038  b           . + 4 + (0x38 << 2)
label_272d08:
    if (ctx->pc == 0x272D08u) {
        ctx->pc = 0x272D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D04u;
        // 0x272d08: 0x2412ff95  addiu       $s2, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D0Cu;
        goto label_272d0c;
    }
    ctx->pc = 0x272D04u;
    {
        const bool branch_taken_0x272d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D04u;
        // 0x272d08: 0x2412ff95  addiu       $s2, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d04) {
            ctx->pc = 0x272DE8u;
            goto label_272de8;
        }
    }
    ctx->pc = 0x272D0Cu;
label_272d0c:
    // 0x272d0c: 0x0  nop
    ctx->pc = 0x272d0cu;
    // NOP
label_272d10:
    // 0x272d10: 0x26622d78  addiu       $v0, $s3, 0x2D78
    ctx->pc = 0x272d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_272d14:
    // 0x272d14: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x272d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_272d18:
    // 0x272d18: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x272d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_272d1c:
    // 0x272d1c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x272d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_272d20:
    // 0x272d20: 0x8ca5068c  lw          $a1, 0x68C($a1)
    ctx->pc = 0x272d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1676)));
label_272d24:
    // 0x272d24: 0xc09e46c  jal         func_2791B0
label_272d28:
    if (ctx->pc == 0x272D28u) {
        ctx->pc = 0x272D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D24u;
        // 0x272d28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D2Cu;
        goto label_272d2c;
    }
    ctx->pc = 0x272D24u;
    SET_GPR_U32(ctx, 31, 0x272D2Cu);
    ctx->pc = 0x272D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D24u;
    // 0x272d28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2791B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2791B0u, 0x272D24u, 0x272D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D2Cu;
label_272d2c:
    // 0x272d2c: 0xc09c940  jal         func_272500
label_272d30:
    if (ctx->pc == 0x272D30u) {
        ctx->pc = 0x272D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D2Cu;
        // 0x272d30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D34u;
        goto label_272d34;
    }
    ctx->pc = 0x272D2Cu;
    SET_GPR_U32(ctx, 31, 0x272D34u);
    ctx->pc = 0x272D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D2Cu;
    // 0x272d30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    goto label_272500;
    ctx->pc = 0x272D34u;
label_272d34:
    // 0x272d34: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_272d38:
    if (ctx->pc == 0x272D38u) {
        ctx->pc = 0x272D3Cu;
        goto label_272d3c;
    }
    ctx->pc = 0x272D34u;
    {
        const bool branch_taken_0x272d34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x272d34) {
            ctx->pc = 0x272D50u;
            goto label_272d50;
        }
    }
    ctx->pc = 0x272D3Cu;
label_272d3c:
    // 0x272d3c: 0x2412fda7  addiu       $s2, $zero, -0x259
    ctx->pc = 0x272d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
label_272d40:
    // 0x272d40: 0xc09c778  jal         func_271DE0
label_272d44:
    if (ctx->pc == 0x272D44u) {
        ctx->pc = 0x272D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D40u;
        // 0x272d44: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D48u;
        goto label_272d48;
    }
    ctx->pc = 0x272D40u;
    SET_GPR_U32(ctx, 31, 0x272D48u);
    ctx->pc = 0x272D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D40u;
    // 0x272d44: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271DE0u, 0x272D40u, 0x272D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D48u;
label_272d48:
    // 0x272d48: 0x1000000d  b           . + 4 + (0xD << 2)
label_272d4c:
    if (ctx->pc == 0x272D4Cu) {
        ctx->pc = 0x272D50u;
        goto label_272d50;
    }
    ctx->pc = 0x272D48u;
    {
        const bool branch_taken_0x272d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272d48) {
            ctx->pc = 0x272D80u;
            goto label_272d80;
        }
    }
    ctx->pc = 0x272D50u;
label_272d50:
    // 0x272d50: 0x6400026  bltz        $s2, . + 4 + (0x26 << 2)
label_272d54:
    if (ctx->pc == 0x272D54u) {
        ctx->pc = 0x272D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D50u;
        // 0x272d54: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D58u;
        goto label_272d58;
    }
    ctx->pc = 0x272D50u;
    {
        const bool branch_taken_0x272d50 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x272D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D50u;
        // 0x272d54: 0x264202bb  addiu       $v0, $s2, 0x2BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d50) {
            ctx->pc = 0x272DECu;
            goto label_272dec;
        }
    }
    ctx->pc = 0x272D58u;
label_272d58:
    // 0x272d58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x272d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272d5c:
    // 0x272d5c: 0xc09c74c  jal         func_271D30
label_272d60:
    if (ctx->pc == 0x272D60u) {
        ctx->pc = 0x272D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D5Cu;
        // 0x272d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D64u;
        goto label_272d64;
    }
    ctx->pc = 0x272D5Cu;
    SET_GPR_U32(ctx, 31, 0x272D64u);
    ctx->pc = 0x272D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D5Cu;
    // 0x272d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271D30u, 0x272D5Cu, 0x272D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D64u;
label_272d64:
    // 0x272d64: 0x10000006  b           . + 4 + (0x6 << 2)
label_272d68:
    if (ctx->pc == 0x272D68u) {
        ctx->pc = 0x272D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D64u;
        // 0x272d68: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D6Cu;
        goto label_272d6c;
    }
    ctx->pc = 0x272D64u;
    {
        const bool branch_taken_0x272d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D64u;
        // 0x272d68: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d64) {
            ctx->pc = 0x272D80u;
            goto label_272d80;
        }
    }
    ctx->pc = 0x272D6Cu;
label_272d6c:
    // 0x272d6c: 0x0  nop
    ctx->pc = 0x272d6cu;
    // NOP
label_272d70:
    // 0x272d70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272d74:
    // 0x272d74: 0xc09c74c  jal         func_271D30
label_272d78:
    if (ctx->pc == 0x272D78u) {
        ctx->pc = 0x272D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D74u;
        // 0x272d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D7Cu;
        goto label_272d7c;
    }
    ctx->pc = 0x272D74u;
    SET_GPR_U32(ctx, 31, 0x272D7Cu);
    ctx->pc = 0x272D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D74u;
    // 0x272d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271D30u, 0x272D74u, 0x272D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D7Cu;
label_272d7c:
    // 0x272d7c: 0x26702d78  addiu       $s0, $s3, 0x2D78
    ctx->pc = 0x272d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_272d80:
    // 0x272d80: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x272d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_272d84:
    // 0x272d84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x272d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_272d88:
    // 0x272d88: 0x8c4206f8  lw          $v0, 0x6F8($v0)
    ctx->pc = 0x272d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1784)));
label_272d8c:
    // 0x272d8c: 0x5040fe42  beql        $v0, $zero, . + 4 + (-0x1BE << 2)
label_272d90:
    if (ctx->pc == 0x272D90u) {
        ctx->pc = 0x272D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D8Cu;
        // 0x272d90: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D94u;
        goto label_272d94;
    }
    ctx->pc = 0x272D8Cu;
    {
        const bool branch_taken_0x272d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272d8c) {
            ctx->pc = 0x272D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272D8Cu;
            // 0x272d90: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272698;
        }
    }
    ctx->pc = 0x272D94u;
label_272d94:
    // 0x272d94: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272d98:
    // 0x272d98: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272d9c:
    // 0x272d9c: 0xc043328  jal         func_10CCA0
label_272da0:
    if (ctx->pc == 0x272DA0u) {
        ctx->pc = 0x272DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D9Cu;
        // 0x272da0: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272DA4u;
        goto label_272da4;
    }
    ctx->pc = 0x272D9Cu;
    SET_GPR_U32(ctx, 31, 0x272DA4u);
    ctx->pc = 0x272DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D9Cu;
    // 0x272da0: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x272D9Cu, 0x272DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272DA4u;
label_272da4:
    // 0x272da4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x272da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_272da8:
    // 0x272da8: 0x2402fda5  addiu       $v0, $zero, -0x25B
    ctx->pc = 0x272da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966693));
label_272dac:
    // 0x272dac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272db0:
    // 0x272db0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272db4:
    // 0x272db4: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x272db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_272db8:
    // 0x272db8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272dbc:
    // 0x272dbc: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x272dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_272dc0:
    // 0x272dc0: 0xac230700  sw          $v1, 0x700($at)
    ctx->pc = 0x272dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1792), GPR_U32(ctx, 3));
label_272dc4:
    // 0x272dc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272dc8:
    // 0x272dc8: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x272dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_272dcc:
    // 0x272dcc: 0xac220704  sw          $v0, 0x704($at)
    ctx->pc = 0x272dccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1796), GPR_U32(ctx, 2));
label_272dd0:
    // 0x272dd0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_272dd4:
    // 0x272dd4: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x272dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_272dd8:
    // 0x272dd8: 0xc043320  jal         func_10CC80
label_272ddc:
    if (ctx->pc == 0x272DDCu) {
        ctx->pc = 0x272DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DD8u;
        // 0x272ddc: 0xac2006f8  sw          $zero, 0x6F8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272DE0u;
        goto label_272de0;
    }
    ctx->pc = 0x272DD8u;
    SET_GPR_U32(ctx, 31, 0x272DE0u);
    ctx->pc = 0x272DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272DD8u;
    // 0x272ddc: 0xac2006f8  sw          $zero, 0x6F8($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 1784), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x272DD8u, 0x272DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272DE0u;
label_272de0:
    // 0x272de0: 0x1000fe2d  b           . + 4 + (-0x1D3 << 2)
label_272de4:
    if (ctx->pc == 0x272DE4u) {
        ctx->pc = 0x272DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DE0u;
        // 0x272de4: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272DE8u;
        goto label_272de8;
    }
    ctx->pc = 0x272DE0u;
    {
        const bool branch_taken_0x272de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DE0u;
        // 0x272de4: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272de0) {
            ctx->pc = 0x272698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272698;
        }
    }
    ctx->pc = 0x272DE8u;
label_272de8:
    // 0x272de8: 0x264202bb  addiu       $v0, $s2, 0x2BB
    ctx->pc = 0x272de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 699));
label_272dec:
    // 0x272dec: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x272decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_272df0:
    // 0x272df0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_272df4:
    if (ctx->pc == 0x272DF4u) {
        ctx->pc = 0x272DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DF0u;
        // 0x272df4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272DF8u;
        goto label_272df8;
    }
    ctx->pc = 0x272DF0u;
    {
        const bool branch_taken_0x272df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DF0u;
        // 0x272df4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272df0) {
            ctx->pc = 0x272E08u;
            goto label_272e08;
        }
    }
    ctx->pc = 0x272DF8u;
label_272df8:
    // 0x272df8: 0x2a42ff9d  slti        $v0, $s2, -0x63
    ctx->pc = 0x272df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4294967197) ? 1 : 0);
label_272dfc:
    // 0x272dfc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_272e00:
    if (ctx->pc == 0x272E00u) {
        ctx->pc = 0x272E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DFCu;
        // 0x272e00: 0x2402ff92  addiu       $v0, $zero, -0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E04u;
        goto label_272e04;
    }
    ctx->pc = 0x272DFCu;
    {
        const bool branch_taken_0x272dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272dfc) {
            ctx->pc = 0x272E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272DFCu;
            // 0x272e00: 0x2402ff92  addiu       $v0, $zero, -0x6E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967186));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272E20u;
            goto label_272e20;
        }
    }
    ctx->pc = 0x272E04u;
label_272e04:
    // 0x272e04: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x272e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_272e08:
    // 0x272e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272e0c:
    // 0x272e0c: 0xc09c792  jal         func_271E48
label_272e10:
    if (ctx->pc == 0x272E10u) {
        ctx->pc = 0x272E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E0Cu;
        // 0x272e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E14u;
        goto label_272e14;
    }
    ctx->pc = 0x272E0Cu;
    SET_GPR_U32(ctx, 31, 0x272E14u);
    ctx->pc = 0x272E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E0Cu;
    // 0x272e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271E48u, 0x272E0Cu, 0x272E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E14u;
label_272e14:
    // 0x272e14: 0x1000fe20  b           . + 4 + (-0x1E0 << 2)
label_272e18:
    if (ctx->pc == 0x272E18u) {
        ctx->pc = 0x272E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E14u;
        // 0x272e18: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E1Cu;
        goto label_272e1c;
    }
    ctx->pc = 0x272E14u;
    {
        const bool branch_taken_0x272e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E14u;
        // 0x272e18: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e14) {
            ctx->pc = 0x272698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272698;
        }
    }
    ctx->pc = 0x272E1Cu;
label_272e1c:
    // 0x272e1c: 0x0  nop
    ctx->pc = 0x272e1cu;
    // NOP
label_272e20:
    // 0x272e20: 0x2403fd40  addiu       $v1, $zero, -0x2C0
    ctx->pc = 0x272e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966592));
label_272e24:
    // 0x272e24: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x272e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_272e28:
    // 0x272e28: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x272e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_272e2c:
    // 0x272e2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272e30:
    // 0x272e30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272e34:
    // 0x272e34: 0xc09c792  jal         func_271E48
label_272e38:
    if (ctx->pc == 0x272E38u) {
        ctx->pc = 0x272E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E34u;
        // 0x272e38: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E3Cu;
        goto label_272e3c;
    }
    ctx->pc = 0x272E34u;
    SET_GPR_U32(ctx, 31, 0x272E3Cu);
    ctx->pc = 0x272E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E34u;
    // 0x272e38: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271E48u, 0x272E34u, 0x272E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E3Cu;
label_272e3c:
    // 0x272e3c: 0x1000fe16  b           . + 4 + (-0x1EA << 2)
label_272e40:
    if (ctx->pc == 0x272E40u) {
        ctx->pc = 0x272E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E3Cu;
        // 0x272e40: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E44u;
        goto label_272e44;
    }
    ctx->pc = 0x272E3Cu;
    {
        const bool branch_taken_0x272e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E3Cu;
        // 0x272e40: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e3c) {
            ctx->pc = 0x272698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272698;
        }
    }
    ctx->pc = 0x272E44u;
label_272e44:
    // 0x272e44: 0x0  nop
    ctx->pc = 0x272e44u;
    // NOP
label_272e48:
    // 0x272e48: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x272e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_272e4c:
    // 0x272e4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x272e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_272e50:
    // 0x272e50: 0x8c420724  lw          $v0, 0x724($v0)
    ctx->pc = 0x272e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1828)));
label_272e54:
    // 0x272e54: 0x40f809  jalr        $v0
label_272e58:
    if (ctx->pc == 0x272E58u) {
        ctx->pc = 0x272E5Cu;
        goto label_272e5c;
    }
    ctx->pc = 0x272E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272E5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272E54u, 0x272E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272E5Cu;
label_272e5c:
    // 0x272e5c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_272e60:
    // 0x272e60: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272e64:
    // 0x272e64: 0x8c8406cc  lw          $a0, 0x6CC($a0)
    ctx->pc = 0x272e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
label_272e68:
    // 0x272e68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272e6c:
    // 0x272e6c: 0xc043320  jal         func_10CC80
label_272e70:
    if (ctx->pc == 0x272E70u) {
        ctx->pc = 0x272E74u;
        goto label_272e74;
    }
    ctx->pc = 0x272E6Cu;
    SET_GPR_U32(ctx, 31, 0x272E74u);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x272E6Cu, 0x272E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E74u;
label_272e74:
    // 0x272e74: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x272e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272e78:
    // 0x272e78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x272e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_272e7c:
    // 0x272e7c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x272e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_272e80:
    // 0x272e80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x272e80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_272e84:
    // 0x272e84: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x272e84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_272e88:
    // 0x272e88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x272e88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_272e8c:
    // 0x272e8c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x272e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_272e90:
    // 0x272e90: 0x3e00008  jr          $ra
label_272e94:
    if (ctx->pc == 0x272E94u) {
        ctx->pc = 0x272E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E90u;
        // 0x272e94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E98u;
        goto label_fallthrough_0x272e90;
    }
    ctx->pc = 0x272E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E90u;
        // 0x272e94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x272e90:
    ctx->pc = 0x272E98u;
}
