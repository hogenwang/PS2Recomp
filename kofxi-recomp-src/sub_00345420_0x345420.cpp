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

// Function: sub_00345420
// Address: 0x345420 - 0x345d70
void sub_00345420_0x345420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345420_0x345420");
#endif

    switch (ctx->pc) {
        case 0x345420u: goto label_345420;
        case 0x345424u: goto label_345424;
        case 0x345428u: goto label_345428;
        case 0x34542cu: goto label_34542c;
        case 0x345430u: goto label_345430;
        case 0x345434u: goto label_345434;
        case 0x345438u: goto label_345438;
        case 0x34543cu: goto label_34543c;
        case 0x345440u: goto label_345440;
        case 0x345444u: goto label_345444;
        case 0x345448u: goto label_345448;
        case 0x34544cu: goto label_34544c;
        case 0x345450u: goto label_345450;
        case 0x345454u: goto label_345454;
        case 0x345458u: goto label_345458;
        case 0x34545cu: goto label_34545c;
        case 0x345460u: goto label_345460;
        case 0x345464u: goto label_345464;
        case 0x345468u: goto label_345468;
        case 0x34546cu: goto label_34546c;
        case 0x345470u: goto label_345470;
        case 0x345474u: goto label_345474;
        case 0x345478u: goto label_345478;
        case 0x34547cu: goto label_34547c;
        case 0x345480u: goto label_345480;
        case 0x345484u: goto label_345484;
        case 0x345488u: goto label_345488;
        case 0x34548cu: goto label_34548c;
        case 0x345490u: goto label_345490;
        case 0x345494u: goto label_345494;
        case 0x345498u: goto label_345498;
        case 0x34549cu: goto label_34549c;
        case 0x3454a0u: goto label_3454a0;
        case 0x3454a4u: goto label_3454a4;
        case 0x3454a8u: goto label_3454a8;
        case 0x3454acu: goto label_3454ac;
        case 0x3454b0u: goto label_3454b0;
        case 0x3454b4u: goto label_3454b4;
        case 0x3454b8u: goto label_3454b8;
        case 0x3454bcu: goto label_3454bc;
        case 0x3454c0u: goto label_3454c0;
        case 0x3454c4u: goto label_3454c4;
        case 0x3454c8u: goto label_3454c8;
        case 0x3454ccu: goto label_3454cc;
        case 0x3454d0u: goto label_3454d0;
        case 0x3454d4u: goto label_3454d4;
        case 0x3454d8u: goto label_3454d8;
        case 0x3454dcu: goto label_3454dc;
        case 0x3454e0u: goto label_3454e0;
        case 0x3454e4u: goto label_3454e4;
        case 0x3454e8u: goto label_3454e8;
        case 0x3454ecu: goto label_3454ec;
        case 0x3454f0u: goto label_3454f0;
        case 0x3454f4u: goto label_3454f4;
        case 0x3454f8u: goto label_3454f8;
        case 0x3454fcu: goto label_3454fc;
        case 0x345500u: goto label_345500;
        case 0x345504u: goto label_345504;
        case 0x345508u: goto label_345508;
        case 0x34550cu: goto label_34550c;
        case 0x345510u: goto label_345510;
        case 0x345514u: goto label_345514;
        case 0x345518u: goto label_345518;
        case 0x34551cu: goto label_34551c;
        case 0x345520u: goto label_345520;
        case 0x345524u: goto label_345524;
        case 0x345528u: goto label_345528;
        case 0x34552cu: goto label_34552c;
        case 0x345530u: goto label_345530;
        case 0x345534u: goto label_345534;
        case 0x345538u: goto label_345538;
        case 0x34553cu: goto label_34553c;
        case 0x345540u: goto label_345540;
        case 0x345544u: goto label_345544;
        case 0x345548u: goto label_345548;
        case 0x34554cu: goto label_34554c;
        case 0x345550u: goto label_345550;
        case 0x345554u: goto label_345554;
        case 0x345558u: goto label_345558;
        case 0x34555cu: goto label_34555c;
        case 0x345560u: goto label_345560;
        case 0x345564u: goto label_345564;
        case 0x345568u: goto label_345568;
        case 0x34556cu: goto label_34556c;
        case 0x345570u: goto label_345570;
        case 0x345574u: goto label_345574;
        case 0x345578u: goto label_345578;
        case 0x34557cu: goto label_34557c;
        case 0x345580u: goto label_345580;
        case 0x345584u: goto label_345584;
        case 0x345588u: goto label_345588;
        case 0x34558cu: goto label_34558c;
        case 0x345590u: goto label_345590;
        case 0x345594u: goto label_345594;
        case 0x345598u: goto label_345598;
        case 0x34559cu: goto label_34559c;
        case 0x3455a0u: goto label_3455a0;
        case 0x3455a4u: goto label_3455a4;
        case 0x3455a8u: goto label_3455a8;
        case 0x3455acu: goto label_3455ac;
        case 0x3455b0u: goto label_3455b0;
        case 0x3455b4u: goto label_3455b4;
        case 0x3455b8u: goto label_3455b8;
        case 0x3455bcu: goto label_3455bc;
        case 0x3455c0u: goto label_3455c0;
        case 0x3455c4u: goto label_3455c4;
        case 0x3455c8u: goto label_3455c8;
        case 0x3455ccu: goto label_3455cc;
        case 0x3455d0u: goto label_3455d0;
        case 0x3455d4u: goto label_3455d4;
        case 0x3455d8u: goto label_3455d8;
        case 0x3455dcu: goto label_3455dc;
        case 0x3455e0u: goto label_3455e0;
        case 0x3455e4u: goto label_3455e4;
        case 0x3455e8u: goto label_3455e8;
        case 0x3455ecu: goto label_3455ec;
        case 0x3455f0u: goto label_3455f0;
        case 0x3455f4u: goto label_3455f4;
        case 0x3455f8u: goto label_3455f8;
        case 0x3455fcu: goto label_3455fc;
        case 0x345600u: goto label_345600;
        case 0x345604u: goto label_345604;
        case 0x345608u: goto label_345608;
        case 0x34560cu: goto label_34560c;
        case 0x345610u: goto label_345610;
        case 0x345614u: goto label_345614;
        case 0x345618u: goto label_345618;
        case 0x34561cu: goto label_34561c;
        case 0x345620u: goto label_345620;
        case 0x345624u: goto label_345624;
        case 0x345628u: goto label_345628;
        case 0x34562cu: goto label_34562c;
        case 0x345630u: goto label_345630;
        case 0x345634u: goto label_345634;
        case 0x345638u: goto label_345638;
        case 0x34563cu: goto label_34563c;
        case 0x345640u: goto label_345640;
        case 0x345644u: goto label_345644;
        case 0x345648u: goto label_345648;
        case 0x34564cu: goto label_34564c;
        case 0x345650u: goto label_345650;
        case 0x345654u: goto label_345654;
        case 0x345658u: goto label_345658;
        case 0x34565cu: goto label_34565c;
        case 0x345660u: goto label_345660;
        case 0x345664u: goto label_345664;
        case 0x345668u: goto label_345668;
        case 0x34566cu: goto label_34566c;
        case 0x345670u: goto label_345670;
        case 0x345674u: goto label_345674;
        case 0x345678u: goto label_345678;
        case 0x34567cu: goto label_34567c;
        case 0x345680u: goto label_345680;
        case 0x345684u: goto label_345684;
        case 0x345688u: goto label_345688;
        case 0x34568cu: goto label_34568c;
        case 0x345690u: goto label_345690;
        case 0x345694u: goto label_345694;
        case 0x345698u: goto label_345698;
        case 0x34569cu: goto label_34569c;
        case 0x3456a0u: goto label_3456a0;
        case 0x3456a4u: goto label_3456a4;
        case 0x3456a8u: goto label_3456a8;
        case 0x3456acu: goto label_3456ac;
        case 0x3456b0u: goto label_3456b0;
        case 0x3456b4u: goto label_3456b4;
        case 0x3456b8u: goto label_3456b8;
        case 0x3456bcu: goto label_3456bc;
        case 0x3456c0u: goto label_3456c0;
        case 0x3456c4u: goto label_3456c4;
        case 0x3456c8u: goto label_3456c8;
        case 0x3456ccu: goto label_3456cc;
        case 0x3456d0u: goto label_3456d0;
        case 0x3456d4u: goto label_3456d4;
        case 0x3456d8u: goto label_3456d8;
        case 0x3456dcu: goto label_3456dc;
        case 0x3456e0u: goto label_3456e0;
        case 0x3456e4u: goto label_3456e4;
        case 0x3456e8u: goto label_3456e8;
        case 0x3456ecu: goto label_3456ec;
        case 0x3456f0u: goto label_3456f0;
        case 0x3456f4u: goto label_3456f4;
        case 0x3456f8u: goto label_3456f8;
        case 0x3456fcu: goto label_3456fc;
        case 0x345700u: goto label_345700;
        case 0x345704u: goto label_345704;
        case 0x345708u: goto label_345708;
        case 0x34570cu: goto label_34570c;
        case 0x345710u: goto label_345710;
        case 0x345714u: goto label_345714;
        case 0x345718u: goto label_345718;
        case 0x34571cu: goto label_34571c;
        case 0x345720u: goto label_345720;
        case 0x345724u: goto label_345724;
        case 0x345728u: goto label_345728;
        case 0x34572cu: goto label_34572c;
        case 0x345730u: goto label_345730;
        case 0x345734u: goto label_345734;
        case 0x345738u: goto label_345738;
        case 0x34573cu: goto label_34573c;
        case 0x345740u: goto label_345740;
        case 0x345744u: goto label_345744;
        case 0x345748u: goto label_345748;
        case 0x34574cu: goto label_34574c;
        case 0x345750u: goto label_345750;
        case 0x345754u: goto label_345754;
        case 0x345758u: goto label_345758;
        case 0x34575cu: goto label_34575c;
        case 0x345760u: goto label_345760;
        case 0x345764u: goto label_345764;
        case 0x345768u: goto label_345768;
        case 0x34576cu: goto label_34576c;
        case 0x345770u: goto label_345770;
        case 0x345774u: goto label_345774;
        case 0x345778u: goto label_345778;
        case 0x34577cu: goto label_34577c;
        case 0x345780u: goto label_345780;
        case 0x345784u: goto label_345784;
        case 0x345788u: goto label_345788;
        case 0x34578cu: goto label_34578c;
        case 0x345790u: goto label_345790;
        case 0x345794u: goto label_345794;
        case 0x345798u: goto label_345798;
        case 0x34579cu: goto label_34579c;
        case 0x3457a0u: goto label_3457a0;
        case 0x3457a4u: goto label_3457a4;
        case 0x3457a8u: goto label_3457a8;
        case 0x3457acu: goto label_3457ac;
        case 0x3457b0u: goto label_3457b0;
        case 0x3457b4u: goto label_3457b4;
        case 0x3457b8u: goto label_3457b8;
        case 0x3457bcu: goto label_3457bc;
        case 0x3457c0u: goto label_3457c0;
        case 0x3457c4u: goto label_3457c4;
        case 0x3457c8u: goto label_3457c8;
        case 0x3457ccu: goto label_3457cc;
        case 0x3457d0u: goto label_3457d0;
        case 0x3457d4u: goto label_3457d4;
        case 0x3457d8u: goto label_3457d8;
        case 0x3457dcu: goto label_3457dc;
        case 0x3457e0u: goto label_3457e0;
        case 0x3457e4u: goto label_3457e4;
        case 0x3457e8u: goto label_3457e8;
        case 0x3457ecu: goto label_3457ec;
        case 0x3457f0u: goto label_3457f0;
        case 0x3457f4u: goto label_3457f4;
        case 0x3457f8u: goto label_3457f8;
        case 0x3457fcu: goto label_3457fc;
        case 0x345800u: goto label_345800;
        case 0x345804u: goto label_345804;
        case 0x345808u: goto label_345808;
        case 0x34580cu: goto label_34580c;
        case 0x345810u: goto label_345810;
        case 0x345814u: goto label_345814;
        case 0x345818u: goto label_345818;
        case 0x34581cu: goto label_34581c;
        case 0x345820u: goto label_345820;
        case 0x345824u: goto label_345824;
        case 0x345828u: goto label_345828;
        case 0x34582cu: goto label_34582c;
        case 0x345830u: goto label_345830;
        case 0x345834u: goto label_345834;
        case 0x345838u: goto label_345838;
        case 0x34583cu: goto label_34583c;
        case 0x345840u: goto label_345840;
        case 0x345844u: goto label_345844;
        case 0x345848u: goto label_345848;
        case 0x34584cu: goto label_34584c;
        case 0x345850u: goto label_345850;
        case 0x345854u: goto label_345854;
        case 0x345858u: goto label_345858;
        case 0x34585cu: goto label_34585c;
        case 0x345860u: goto label_345860;
        case 0x345864u: goto label_345864;
        case 0x345868u: goto label_345868;
        case 0x34586cu: goto label_34586c;
        case 0x345870u: goto label_345870;
        case 0x345874u: goto label_345874;
        case 0x345878u: goto label_345878;
        case 0x34587cu: goto label_34587c;
        case 0x345880u: goto label_345880;
        case 0x345884u: goto label_345884;
        case 0x345888u: goto label_345888;
        case 0x34588cu: goto label_34588c;
        case 0x345890u: goto label_345890;
        case 0x345894u: goto label_345894;
        case 0x345898u: goto label_345898;
        case 0x34589cu: goto label_34589c;
        case 0x3458a0u: goto label_3458a0;
        case 0x3458a4u: goto label_3458a4;
        case 0x3458a8u: goto label_3458a8;
        case 0x3458acu: goto label_3458ac;
        case 0x3458b0u: goto label_3458b0;
        case 0x3458b4u: goto label_3458b4;
        case 0x3458b8u: goto label_3458b8;
        case 0x3458bcu: goto label_3458bc;
        case 0x3458c0u: goto label_3458c0;
        case 0x3458c4u: goto label_3458c4;
        case 0x3458c8u: goto label_3458c8;
        case 0x3458ccu: goto label_3458cc;
        case 0x3458d0u: goto label_3458d0;
        case 0x3458d4u: goto label_3458d4;
        case 0x3458d8u: goto label_3458d8;
        case 0x3458dcu: goto label_3458dc;
        case 0x3458e0u: goto label_3458e0;
        case 0x3458e4u: goto label_3458e4;
        case 0x3458e8u: goto label_3458e8;
        case 0x3458ecu: goto label_3458ec;
        case 0x3458f0u: goto label_3458f0;
        case 0x3458f4u: goto label_3458f4;
        case 0x3458f8u: goto label_3458f8;
        case 0x3458fcu: goto label_3458fc;
        case 0x345900u: goto label_345900;
        case 0x345904u: goto label_345904;
        case 0x345908u: goto label_345908;
        case 0x34590cu: goto label_34590c;
        case 0x345910u: goto label_345910;
        case 0x345914u: goto label_345914;
        case 0x345918u: goto label_345918;
        case 0x34591cu: goto label_34591c;
        case 0x345920u: goto label_345920;
        case 0x345924u: goto label_345924;
        case 0x345928u: goto label_345928;
        case 0x34592cu: goto label_34592c;
        case 0x345930u: goto label_345930;
        case 0x345934u: goto label_345934;
        case 0x345938u: goto label_345938;
        case 0x34593cu: goto label_34593c;
        case 0x345940u: goto label_345940;
        case 0x345944u: goto label_345944;
        case 0x345948u: goto label_345948;
        case 0x34594cu: goto label_34594c;
        case 0x345950u: goto label_345950;
        case 0x345954u: goto label_345954;
        case 0x345958u: goto label_345958;
        case 0x34595cu: goto label_34595c;
        case 0x345960u: goto label_345960;
        case 0x345964u: goto label_345964;
        case 0x345968u: goto label_345968;
        case 0x34596cu: goto label_34596c;
        case 0x345970u: goto label_345970;
        case 0x345974u: goto label_345974;
        case 0x345978u: goto label_345978;
        case 0x34597cu: goto label_34597c;
        case 0x345980u: goto label_345980;
        case 0x345984u: goto label_345984;
        case 0x345988u: goto label_345988;
        case 0x34598cu: goto label_34598c;
        case 0x345990u: goto label_345990;
        case 0x345994u: goto label_345994;
        case 0x345998u: goto label_345998;
        case 0x34599cu: goto label_34599c;
        case 0x3459a0u: goto label_3459a0;
        case 0x3459a4u: goto label_3459a4;
        case 0x3459a8u: goto label_3459a8;
        case 0x3459acu: goto label_3459ac;
        case 0x3459b0u: goto label_3459b0;
        case 0x3459b4u: goto label_3459b4;
        case 0x3459b8u: goto label_3459b8;
        case 0x3459bcu: goto label_3459bc;
        case 0x3459c0u: goto label_3459c0;
        case 0x3459c4u: goto label_3459c4;
        case 0x3459c8u: goto label_3459c8;
        case 0x3459ccu: goto label_3459cc;
        case 0x3459d0u: goto label_3459d0;
        case 0x3459d4u: goto label_3459d4;
        case 0x3459d8u: goto label_3459d8;
        case 0x3459dcu: goto label_3459dc;
        case 0x3459e0u: goto label_3459e0;
        case 0x3459e4u: goto label_3459e4;
        case 0x3459e8u: goto label_3459e8;
        case 0x3459ecu: goto label_3459ec;
        case 0x3459f0u: goto label_3459f0;
        case 0x3459f4u: goto label_3459f4;
        case 0x3459f8u: goto label_3459f8;
        case 0x3459fcu: goto label_3459fc;
        case 0x345a00u: goto label_345a00;
        case 0x345a04u: goto label_345a04;
        case 0x345a08u: goto label_345a08;
        case 0x345a0cu: goto label_345a0c;
        case 0x345a10u: goto label_345a10;
        case 0x345a14u: goto label_345a14;
        case 0x345a18u: goto label_345a18;
        case 0x345a1cu: goto label_345a1c;
        case 0x345a20u: goto label_345a20;
        case 0x345a24u: goto label_345a24;
        case 0x345a28u: goto label_345a28;
        case 0x345a2cu: goto label_345a2c;
        case 0x345a30u: goto label_345a30;
        case 0x345a34u: goto label_345a34;
        case 0x345a38u: goto label_345a38;
        case 0x345a3cu: goto label_345a3c;
        case 0x345a40u: goto label_345a40;
        case 0x345a44u: goto label_345a44;
        case 0x345a48u: goto label_345a48;
        case 0x345a4cu: goto label_345a4c;
        case 0x345a50u: goto label_345a50;
        case 0x345a54u: goto label_345a54;
        case 0x345a58u: goto label_345a58;
        case 0x345a5cu: goto label_345a5c;
        case 0x345a60u: goto label_345a60;
        case 0x345a64u: goto label_345a64;
        case 0x345a68u: goto label_345a68;
        case 0x345a6cu: goto label_345a6c;
        case 0x345a70u: goto label_345a70;
        case 0x345a74u: goto label_345a74;
        case 0x345a78u: goto label_345a78;
        case 0x345a7cu: goto label_345a7c;
        case 0x345a80u: goto label_345a80;
        case 0x345a84u: goto label_345a84;
        case 0x345a88u: goto label_345a88;
        case 0x345a8cu: goto label_345a8c;
        case 0x345a90u: goto label_345a90;
        case 0x345a94u: goto label_345a94;
        case 0x345a98u: goto label_345a98;
        case 0x345a9cu: goto label_345a9c;
        case 0x345aa0u: goto label_345aa0;
        case 0x345aa4u: goto label_345aa4;
        case 0x345aa8u: goto label_345aa8;
        case 0x345aacu: goto label_345aac;
        case 0x345ab0u: goto label_345ab0;
        case 0x345ab4u: goto label_345ab4;
        case 0x345ab8u: goto label_345ab8;
        case 0x345abcu: goto label_345abc;
        case 0x345ac0u: goto label_345ac0;
        case 0x345ac4u: goto label_345ac4;
        case 0x345ac8u: goto label_345ac8;
        case 0x345accu: goto label_345acc;
        case 0x345ad0u: goto label_345ad0;
        case 0x345ad4u: goto label_345ad4;
        case 0x345ad8u: goto label_345ad8;
        case 0x345adcu: goto label_345adc;
        case 0x345ae0u: goto label_345ae0;
        case 0x345ae4u: goto label_345ae4;
        case 0x345ae8u: goto label_345ae8;
        case 0x345aecu: goto label_345aec;
        case 0x345af0u: goto label_345af0;
        case 0x345af4u: goto label_345af4;
        case 0x345af8u: goto label_345af8;
        case 0x345afcu: goto label_345afc;
        case 0x345b00u: goto label_345b00;
        case 0x345b04u: goto label_345b04;
        case 0x345b08u: goto label_345b08;
        case 0x345b0cu: goto label_345b0c;
        case 0x345b10u: goto label_345b10;
        case 0x345b14u: goto label_345b14;
        case 0x345b18u: goto label_345b18;
        case 0x345b1cu: goto label_345b1c;
        case 0x345b20u: goto label_345b20;
        case 0x345b24u: goto label_345b24;
        case 0x345b28u: goto label_345b28;
        case 0x345b2cu: goto label_345b2c;
        case 0x345b30u: goto label_345b30;
        case 0x345b34u: goto label_345b34;
        case 0x345b38u: goto label_345b38;
        case 0x345b3cu: goto label_345b3c;
        case 0x345b40u: goto label_345b40;
        case 0x345b44u: goto label_345b44;
        case 0x345b48u: goto label_345b48;
        case 0x345b4cu: goto label_345b4c;
        case 0x345b50u: goto label_345b50;
        case 0x345b54u: goto label_345b54;
        case 0x345b58u: goto label_345b58;
        case 0x345b5cu: goto label_345b5c;
        case 0x345b60u: goto label_345b60;
        case 0x345b64u: goto label_345b64;
        case 0x345b68u: goto label_345b68;
        case 0x345b6cu: goto label_345b6c;
        case 0x345b70u: goto label_345b70;
        case 0x345b74u: goto label_345b74;
        case 0x345b78u: goto label_345b78;
        case 0x345b7cu: goto label_345b7c;
        case 0x345b80u: goto label_345b80;
        case 0x345b84u: goto label_345b84;
        case 0x345b88u: goto label_345b88;
        case 0x345b8cu: goto label_345b8c;
        case 0x345b90u: goto label_345b90;
        case 0x345b94u: goto label_345b94;
        case 0x345b98u: goto label_345b98;
        case 0x345b9cu: goto label_345b9c;
        case 0x345ba0u: goto label_345ba0;
        case 0x345ba4u: goto label_345ba4;
        case 0x345ba8u: goto label_345ba8;
        case 0x345bacu: goto label_345bac;
        case 0x345bb0u: goto label_345bb0;
        case 0x345bb4u: goto label_345bb4;
        case 0x345bb8u: goto label_345bb8;
        case 0x345bbcu: goto label_345bbc;
        case 0x345bc0u: goto label_345bc0;
        case 0x345bc4u: goto label_345bc4;
        case 0x345bc8u: goto label_345bc8;
        case 0x345bccu: goto label_345bcc;
        case 0x345bd0u: goto label_345bd0;
        case 0x345bd4u: goto label_345bd4;
        case 0x345bd8u: goto label_345bd8;
        case 0x345bdcu: goto label_345bdc;
        case 0x345be0u: goto label_345be0;
        case 0x345be4u: goto label_345be4;
        case 0x345be8u: goto label_345be8;
        case 0x345becu: goto label_345bec;
        case 0x345bf0u: goto label_345bf0;
        case 0x345bf4u: goto label_345bf4;
        case 0x345bf8u: goto label_345bf8;
        case 0x345bfcu: goto label_345bfc;
        case 0x345c00u: goto label_345c00;
        case 0x345c04u: goto label_345c04;
        case 0x345c08u: goto label_345c08;
        case 0x345c0cu: goto label_345c0c;
        case 0x345c10u: goto label_345c10;
        case 0x345c14u: goto label_345c14;
        case 0x345c18u: goto label_345c18;
        case 0x345c1cu: goto label_345c1c;
        case 0x345c20u: goto label_345c20;
        case 0x345c24u: goto label_345c24;
        case 0x345c28u: goto label_345c28;
        case 0x345c2cu: goto label_345c2c;
        case 0x345c30u: goto label_345c30;
        case 0x345c34u: goto label_345c34;
        case 0x345c38u: goto label_345c38;
        case 0x345c3cu: goto label_345c3c;
        case 0x345c40u: goto label_345c40;
        case 0x345c44u: goto label_345c44;
        case 0x345c48u: goto label_345c48;
        case 0x345c4cu: goto label_345c4c;
        case 0x345c50u: goto label_345c50;
        case 0x345c54u: goto label_345c54;
        case 0x345c58u: goto label_345c58;
        case 0x345c5cu: goto label_345c5c;
        case 0x345c60u: goto label_345c60;
        case 0x345c64u: goto label_345c64;
        case 0x345c68u: goto label_345c68;
        case 0x345c6cu: goto label_345c6c;
        case 0x345c70u: goto label_345c70;
        case 0x345c74u: goto label_345c74;
        case 0x345c78u: goto label_345c78;
        case 0x345c7cu: goto label_345c7c;
        case 0x345c80u: goto label_345c80;
        case 0x345c84u: goto label_345c84;
        case 0x345c88u: goto label_345c88;
        case 0x345c8cu: goto label_345c8c;
        case 0x345c90u: goto label_345c90;
        case 0x345c94u: goto label_345c94;
        case 0x345c98u: goto label_345c98;
        case 0x345c9cu: goto label_345c9c;
        case 0x345ca0u: goto label_345ca0;
        case 0x345ca4u: goto label_345ca4;
        case 0x345ca8u: goto label_345ca8;
        case 0x345cacu: goto label_345cac;
        case 0x345cb0u: goto label_345cb0;
        case 0x345cb4u: goto label_345cb4;
        case 0x345cb8u: goto label_345cb8;
        case 0x345cbcu: goto label_345cbc;
        case 0x345cc0u: goto label_345cc0;
        case 0x345cc4u: goto label_345cc4;
        case 0x345cc8u: goto label_345cc8;
        case 0x345cccu: goto label_345ccc;
        case 0x345cd0u: goto label_345cd0;
        case 0x345cd4u: goto label_345cd4;
        case 0x345cd8u: goto label_345cd8;
        case 0x345cdcu: goto label_345cdc;
        case 0x345ce0u: goto label_345ce0;
        case 0x345ce4u: goto label_345ce4;
        case 0x345ce8u: goto label_345ce8;
        case 0x345cecu: goto label_345cec;
        case 0x345cf0u: goto label_345cf0;
        case 0x345cf4u: goto label_345cf4;
        case 0x345cf8u: goto label_345cf8;
        case 0x345cfcu: goto label_345cfc;
        case 0x345d00u: goto label_345d00;
        case 0x345d04u: goto label_345d04;
        case 0x345d08u: goto label_345d08;
        case 0x345d0cu: goto label_345d0c;
        case 0x345d10u: goto label_345d10;
        case 0x345d14u: goto label_345d14;
        case 0x345d18u: goto label_345d18;
        case 0x345d1cu: goto label_345d1c;
        case 0x345d20u: goto label_345d20;
        case 0x345d24u: goto label_345d24;
        case 0x345d28u: goto label_345d28;
        case 0x345d2cu: goto label_345d2c;
        case 0x345d30u: goto label_345d30;
        case 0x345d34u: goto label_345d34;
        case 0x345d38u: goto label_345d38;
        case 0x345d3cu: goto label_345d3c;
        case 0x345d40u: goto label_345d40;
        case 0x345d44u: goto label_345d44;
        case 0x345d48u: goto label_345d48;
        case 0x345d4cu: goto label_345d4c;
        case 0x345d50u: goto label_345d50;
        case 0x345d54u: goto label_345d54;
        case 0x345d58u: goto label_345d58;
        case 0x345d5cu: goto label_345d5c;
        case 0x345d60u: goto label_345d60;
        case 0x345d64u: goto label_345d64;
        case 0x345d68u: goto label_345d68;
        case 0x345d6cu: goto label_345d6c;
        default: break;
    }

    ctx->pc = 0x345420u;

label_345420:
    // 0x345420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_345424:
    // 0x345424: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_345428:
    // 0x345428: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34542c:
    // 0x34542c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34542cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_345430:
    // 0x345430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x345430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_345434:
    // 0x345434: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_345438:
    // 0x345438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34543c:
    // 0x34543c: 0x8c504378  lw          $s0, 0x4378($v0)
    ctx->pc = 0x34543cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
label_345440:
    // 0x345440: 0xc068d08  jal         func_1A3420
label_345444:
    if (ctx->pc == 0x345444u) {
        ctx->pc = 0x345444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345440u;
        // 0x345444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345448u;
        goto label_345448;
    }
    ctx->pc = 0x345440u;
    SET_GPR_U32(ctx, 31, 0x345448u);
    ctx->pc = 0x345444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345440u;
    // 0x345444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x345440u, 0x345448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345448u;
label_345448:
    // 0x345448: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x345448u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_34544c:
    // 0x34544c: 0x32222000  andi        $v0, $s1, 0x2000
    ctx->pc = 0x34544cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
label_345450:
    // 0x345450: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_345454:
    if (ctx->pc == 0x345454u) {
        ctx->pc = 0x345454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345450u;
        // 0x345454: 0x32224000  andi        $v0, $s1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x345458u;
        goto label_345458;
    }
    ctx->pc = 0x345450u;
    {
        const bool branch_taken_0x345450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345450) {
            ctx->pc = 0x345454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345450u;
            // 0x345454: 0x32224000  andi        $v0, $s1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x345478u;
            goto label_345478;
        }
    }
    ctx->pc = 0x345458u;
label_345458:
    // 0x345458: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x345458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_34545c:
    // 0x34545c: 0xc0538fc  jal         func_14E3F0
label_345460:
    if (ctx->pc == 0x345460u) {
        ctx->pc = 0x345460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34545Cu;
        // 0x345460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345464u;
        goto label_345464;
    }
    ctx->pc = 0x34545Cu;
    SET_GPR_U32(ctx, 31, 0x345464u);
    ctx->pc = 0x345460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34545Cu;
    // 0x345460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34545Cu, 0x345464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345464u;
label_345464:
    // 0x345464: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345468:
    // 0x345468: 0xc0d0d60  jal         func_343580
label_34546c:
    if (ctx->pc == 0x34546Cu) {
        ctx->pc = 0x34546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345468u;
        // 0x34546c: 0x24845570  addiu       $a0, $a0, 0x5570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345470u;
        goto label_345470;
    }
    ctx->pc = 0x345468u;
    SET_GPR_U32(ctx, 31, 0x345470u);
    ctx->pc = 0x34546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345468u;
    // 0x34546c: 0x24845570  addiu       $a0, $a0, 0x5570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x345468u, 0x345470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345470u;
label_345470:
    // 0x345470: 0x10000039  b           . + 4 + (0x39 << 2)
label_345474:
    if (ctx->pc == 0x345474u) {
        ctx->pc = 0x345474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345470u;
        // 0x345474: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345478u;
        goto label_345478;
    }
    ctx->pc = 0x345470u;
    {
        const bool branch_taken_0x345470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345470u;
        // 0x345474: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345470) {
            ctx->pc = 0x345558u;
            goto label_345558;
        }
    }
    ctx->pc = 0x345478u;
label_345478:
    // 0x345478: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_34547c:
    if (ctx->pc == 0x34547Cu) {
        ctx->pc = 0x345480u;
        goto label_345480;
    }
    ctx->pc = 0x345478u;
    {
        const bool branch_taken_0x345478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345478) {
            ctx->pc = 0x3454A0u;
            goto label_3454a0;
        }
    }
    ctx->pc = 0x345480u;
label_345480:
    // 0x345480: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x345480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_345484:
    // 0x345484: 0xc0538fc  jal         func_14E3F0
label_345488:
    if (ctx->pc == 0x345488u) {
        ctx->pc = 0x345488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345484u;
        // 0x345488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34548Cu;
        goto label_34548c;
    }
    ctx->pc = 0x345484u;
    SET_GPR_U32(ctx, 31, 0x34548Cu);
    ctx->pc = 0x345488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345484u;
    // 0x345488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x345484u, 0x34548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34548Cu;
label_34548c:
    // 0x34548c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34548cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345490:
    // 0x345490: 0xc0d0d60  jal         func_343580
label_345494:
    if (ctx->pc == 0x345494u) {
        ctx->pc = 0x345494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345490u;
        // 0x345494: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345498u;
        goto label_345498;
    }
    ctx->pc = 0x345490u;
    SET_GPR_U32(ctx, 31, 0x345498u);
    ctx->pc = 0x345494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345490u;
    // 0x345494: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x345490u, 0x345498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345498u;
label_345498:
    // 0x345498: 0x1000002e  b           . + 4 + (0x2E << 2)
label_34549c:
    if (ctx->pc == 0x34549Cu) {
        ctx->pc = 0x3454A0u;
        goto label_3454a0;
    }
    ctx->pc = 0x345498u;
    {
        const bool branch_taken_0x345498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345498) {
            ctx->pc = 0x345554u;
            goto label_345554;
        }
    }
    ctx->pc = 0x3454A0u;
label_3454a0:
    // 0x3454a0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3454a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3454a4:
    // 0x3454a4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3454a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3454a8:
    // 0x3454a8: 0x906442f8  lbu         $a0, 0x42F8($v1)
    ctx->pc = 0x3454a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17144)));
label_3454ac:
    // 0x3454ac: 0x90454378  lbu         $a1, 0x4378($v0)
    ctx->pc = 0x3454acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17272)));
label_3454b0:
    // 0x3454b0: 0xc0d0ae0  jal         func_342B80
label_3454b4:
    if (ctx->pc == 0x3454B4u) {
        ctx->pc = 0x3454B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3454B0u;
        // 0x3454b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3454B8u;
        goto label_3454b8;
    }
    ctx->pc = 0x3454B0u;
    SET_GPR_U32(ctx, 31, 0x3454B8u);
    ctx->pc = 0x3454B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3454B0u;
    // 0x3454b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x3454B0u, 0x3454B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3454B8u;
label_3454b8:
    // 0x3454b8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3454b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3454bc:
    // 0x3454bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3454bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3454c0:
    // 0x3454c0: 0xac654378  sw          $a1, 0x4378($v1)
    ctx->pc = 0x3454c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 5));
label_3454c4:
    // 0x3454c4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3454c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3454c8:
    // 0x3454c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3454c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3454cc:
    // 0x3454cc: 0x246342e0  addiu       $v1, $v1, 0x42E0
    ctx->pc = 0x3454ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17120));
label_3454d0:
    // 0x3454d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3454d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3454d4:
    // 0x3454d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3454d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3454d8:
    // 0x3454d8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_3454dc:
    if (ctx->pc == 0x3454DCu) {
        ctx->pc = 0x3454E0u;
        goto label_3454e0;
    }
    ctx->pc = 0x3454D8u;
    {
        const bool branch_taken_0x3454d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3454d8) {
            ctx->pc = 0x345540u;
            goto label_345540;
        }
    }
    ctx->pc = 0x3454E0u;
label_3454e0:
    // 0x3454e0: 0x16050007  bne         $s0, $a1, . + 4 + (0x7 << 2)
label_3454e4:
    if (ctx->pc == 0x3454E4u) {
        ctx->pc = 0x3454E8u;
        goto label_3454e8;
    }
    ctx->pc = 0x3454E0u;
    {
        const bool branch_taken_0x3454e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x3454e0) {
            ctx->pc = 0x345500u;
            goto label_345500;
        }
    }
    ctx->pc = 0x3454E8u;
label_3454e8:
    // 0x3454e8: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x3454e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_3454ec:
    // 0x3454ec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3454ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3454f0:
    // 0x3454f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3454f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3454f4:
    // 0x3454f4: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x3454f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3454f8:
    // 0x3454f8: 0xac454378  sw          $a1, 0x4378($v0)
    ctx->pc = 0x3454f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 5));
label_3454fc:
    // 0x3454fc: 0x0  nop
    ctx->pc = 0x3454fcu;
    // NOP
label_345500:
    // 0x345500: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_345504:
    // 0x345504: 0x904442f8  lbu         $a0, 0x42F8($v0)
    ctx->pc = 0x345504u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17144)));
label_345508:
    // 0x345508: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_34550c:
    // 0x34550c: 0x90454378  lbu         $a1, 0x4378($v0)
    ctx->pc = 0x34550cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17272)));
label_345510:
    // 0x345510: 0xc0d0ae0  jal         func_342B80
label_345514:
    if (ctx->pc == 0x345514u) {
        ctx->pc = 0x345514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345510u;
        // 0x345514: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345518u;
        goto label_345518;
    }
    ctx->pc = 0x345510u;
    SET_GPR_U32(ctx, 31, 0x345518u);
    ctx->pc = 0x345514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345510u;
    // 0x345514: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x345510u, 0x345518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345518u;
label_345518:
    // 0x345518: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x345518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34551c:
    // 0x34551c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34551cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_345520:
    // 0x345520: 0xac654378  sw          $a1, 0x4378($v1)
    ctx->pc = 0x345520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 5));
label_345524:
    // 0x345524: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x345524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_345528:
    // 0x345528: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x345528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_34552c:
    // 0x34552c: 0x246342e0  addiu       $v1, $v1, 0x42E0
    ctx->pc = 0x34552cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17120));
label_345530:
    // 0x345530: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x345530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_345534:
    // 0x345534: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x345534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_345538:
    // 0x345538: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_34553c:
    if (ctx->pc == 0x34553Cu) {
        ctx->pc = 0x345540u;
        goto label_345540;
    }
    ctx->pc = 0x345538u;
    {
        const bool branch_taken_0x345538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x345538) {
            ctx->pc = 0x3454E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3454e0;
        }
    }
    ctx->pc = 0x345540u;
label_345540:
    // 0x345540: 0x10b00004  beq         $a1, $s0, . + 4 + (0x4 << 2)
label_345544:
    if (ctx->pc == 0x345544u) {
        ctx->pc = 0x345548u;
        goto label_345548;
    }
    ctx->pc = 0x345540u;
    {
        const bool branch_taken_0x345540 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x345540) {
            ctx->pc = 0x345554u;
            goto label_345554;
        }
    }
    ctx->pc = 0x345548u;
label_345548:
    // 0x345548: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_34554c:
    // 0x34554c: 0xc082674  jal         func_2099D0
label_345550:
    if (ctx->pc == 0x345550u) {
        ctx->pc = 0x345550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34554Cu;
        // 0x345550: 0x24845220  addiu       $a0, $a0, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345554u;
        goto label_345554;
    }
    ctx->pc = 0x34554Cu;
    SET_GPR_U32(ctx, 31, 0x345554u);
    ctx->pc = 0x345550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34554Cu;
    // 0x345550: 0x24845220  addiu       $a0, $a0, 0x5220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34554Cu, 0x345554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345554u;
label_345554:
    // 0x345554: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_345558:
    // 0x345558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34555c:
    // 0x34555c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34555cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_345560:
    // 0x345560: 0x3e00008  jr          $ra
label_345564:
    if (ctx->pc == 0x345564u) {
        ctx->pc = 0x345564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345560u;
        // 0x345564: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345568u;
        goto label_345568;
    }
    ctx->pc = 0x345560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345560u;
        // 0x345564: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345568u;
label_345568:
    // 0x345568: 0x0  nop
    ctx->pc = 0x345568u;
    // NOP
label_34556c:
    // 0x34556c: 0x0  nop
    ctx->pc = 0x34556cu;
    // NOP
label_345570:
    // 0x345570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_345574:
    // 0x345574: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_345578:
    // 0x345578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34557c:
    // 0x34557c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x34557cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_345580:
    // 0x345580: 0x8c424050  lw          $v0, 0x4050($v0)
    ctx->pc = 0x345580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16464)));
label_345584:
    // 0x345584: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x345584u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_345588:
    // 0x345588: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_34558c:
    if (ctx->pc == 0x34558Cu) {
        ctx->pc = 0x345590u;
        goto label_345590;
    }
    ctx->pc = 0x345588u;
    {
        const bool branch_taken_0x345588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x345588) {
            ctx->pc = 0x3455B8u;
            goto label_3455b8;
        }
    }
    ctx->pc = 0x345590u;
label_345590:
    // 0x345590: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345594:
    // 0x345594: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345598:
    // 0x345598: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x345598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_34559c:
    // 0x34559c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34559cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3455a0:
    // 0x3455a0: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x3455a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
label_3455a4:
    // 0x3455a4: 0x24845790  addiu       $a0, $a0, 0x5790
    ctx->pc = 0x3455a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22416));
label_3455a8:
    // 0x3455a8: 0xc0558d4  jal         func_156350
label_3455ac:
    if (ctx->pc == 0x3455ACu) {
        ctx->pc = 0x3455ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3455A8u;
        // 0x3455ac: 0x24a54fa0  addiu       $a1, $a1, 0x4FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3455B0u;
        goto label_3455b0;
    }
    ctx->pc = 0x3455A8u;
    SET_GPR_U32(ctx, 31, 0x3455B0u);
    ctx->pc = 0x3455ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3455A8u;
    // 0x3455ac: 0x24a54fa0  addiu       $a1, $a1, 0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x3455A8u, 0x3455B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455B0u;
label_3455b0:
    // 0x3455b0: 0x10000035  b           . + 4 + (0x35 << 2)
label_3455b4:
    if (ctx->pc == 0x3455B4u) {
        ctx->pc = 0x3455B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3455B0u;
        // 0x3455b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3455B8u;
        goto label_3455b8;
    }
    ctx->pc = 0x3455B0u;
    {
        const bool branch_taken_0x3455b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3455B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3455B0u;
        // 0x3455b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3455b0) {
            ctx->pc = 0x345688u;
            goto label_345688;
        }
    }
    ctx->pc = 0x3455B8u;
label_3455b8:
    // 0x3455b8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3455b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_3455bc:
    // 0x3455bc: 0x8c424058  lw          $v0, 0x4058($v0)
    ctx->pc = 0x3455bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16472)));
label_3455c0:
    // 0x3455c0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3455c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3455c4:
    // 0x3455c4: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_3455c8:
    if (ctx->pc == 0x3455C8u) {
        ctx->pc = 0x3455CCu;
        goto label_3455cc;
    }
    ctx->pc = 0x3455C4u;
    {
        const bool branch_taken_0x3455c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3455c4) {
            ctx->pc = 0x3455F4u;
            goto label_3455f4;
        }
    }
    ctx->pc = 0x3455CCu;
label_3455cc:
    // 0x3455cc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3455ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_3455d0:
    // 0x3455d0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3455d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_3455d4:
    // 0x3455d4: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x3455d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_3455d8:
    // 0x3455d8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3455d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3455dc:
    // 0x3455dc: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x3455dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
label_3455e0:
    // 0x3455e0: 0x24845790  addiu       $a0, $a0, 0x5790
    ctx->pc = 0x3455e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22416));
label_3455e4:
    // 0x3455e4: 0xc0558d4  jal         func_156350
label_3455e8:
    if (ctx->pc == 0x3455E8u) {
        ctx->pc = 0x3455E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3455E4u;
        // 0x3455e8: 0x24a54fa0  addiu       $a1, $a1, 0x4FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3455ECu;
        goto label_3455ec;
    }
    ctx->pc = 0x3455E4u;
    SET_GPR_U32(ctx, 31, 0x3455ECu);
    ctx->pc = 0x3455E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3455E4u;
    // 0x3455e8: 0x24a54fa0  addiu       $a1, $a1, 0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x3455E4u, 0x3455ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455ECu;
label_3455ec:
    // 0x3455ec: 0x10000025  b           . + 4 + (0x25 << 2)
label_3455f0:
    if (ctx->pc == 0x3455F0u) {
        ctx->pc = 0x3455F4u;
        goto label_3455f4;
    }
    ctx->pc = 0x3455ECu;
    {
        const bool branch_taken_0x3455ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3455ec) {
            ctx->pc = 0x345684u;
            goto label_345684;
        }
    }
    ctx->pc = 0x3455F4u;
label_3455f4:
    // 0x3455f4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3455f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3455f8:
    // 0x3455f8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3455f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_3455fc:
    // 0x3455fc: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x3455fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
label_345600:
    // 0x345600: 0x24031340  addiu       $v1, $zero, 0x1340
    ctx->pc = 0x345600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
label_345604:
    // 0x345604: 0x24a55110  addiu       $a1, $a1, 0x5110
    ctx->pc = 0x345604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20752));
label_345608:
    // 0x345608: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_34560c:
    // 0x34560c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x34560cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_345610:
    // 0x345610: 0x8c424040  lw          $v0, 0x4040($v0)
    ctx->pc = 0x345610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16448)));
label_345614:
    // 0x345614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x345614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_345618:
    // 0x345618: 0xc04a78a  jal         func_129E28
label_34561c:
    if (ctx->pc == 0x34561Cu) {
        ctx->pc = 0x34561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345618u;
        // 0x34561c: 0x24440f00  addiu       $a0, $v0, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345620u;
        goto label_345620;
    }
    ctx->pc = 0x345618u;
    SET_GPR_U32(ctx, 31, 0x345620u);
    ctx->pc = 0x34561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345618u;
    // 0x34561c: 0x24440f00  addiu       $a0, $v0, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x345618u, 0x345620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345620u;
label_345620:
    // 0x345620: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_345624:
    if (ctx->pc == 0x345624u) {
        ctx->pc = 0x345628u;
        goto label_345628;
    }
    ctx->pc = 0x345620u;
    {
        const bool branch_taken_0x345620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345620) {
            ctx->pc = 0x345650u;
            goto label_345650;
        }
    }
    ctx->pc = 0x345628u;
label_345628:
    // 0x345628: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_34562c:
    // 0x34562c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x34562cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345630:
    // 0x345630: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x345630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_345634:
    // 0x345634: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345638:
    // 0x345638: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x345638u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
label_34563c:
    // 0x34563c: 0x24845790  addiu       $a0, $a0, 0x5790
    ctx->pc = 0x34563cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22416));
label_345640:
    // 0x345640: 0xc0558d4  jal         func_156350
label_345644:
    if (ctx->pc == 0x345644u) {
        ctx->pc = 0x345644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345640u;
        // 0x345644: 0x24a54fa0  addiu       $a1, $a1, 0x4FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345648u;
        goto label_345648;
    }
    ctx->pc = 0x345640u;
    SET_GPR_U32(ctx, 31, 0x345648u);
    ctx->pc = 0x345644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345640u;
    // 0x345644: 0x24a54fa0  addiu       $a1, $a1, 0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x345640u, 0x345648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345648u;
label_345648:
    // 0x345648: 0x1000000e  b           . + 4 + (0xE << 2)
label_34564c:
    if (ctx->pc == 0x34564Cu) {
        ctx->pc = 0x345650u;
        goto label_345650;
    }
    ctx->pc = 0x345648u;
    {
        const bool branch_taken_0x345648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345648) {
            ctx->pc = 0x345684u;
            goto label_345684;
        }
    }
    ctx->pc = 0x345650u;
label_345650:
    // 0x345650: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_345654:
    // 0x345654: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x345654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_345658:
    // 0x345658: 0x8c434378  lw          $v1, 0x4378($v0)
    ctx->pc = 0x345658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
label_34565c:
    // 0x34565c: 0x24061340  addiu       $a2, $zero, 0x1340
    ctx->pc = 0x34565cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
label_345660:
    // 0x345660: 0x2484eb00  addiu       $a0, $a0, -0x1500
    ctx->pc = 0x345660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961920));
label_345664:
    // 0x345664: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x345664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_345668:
    // 0x345668: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x345668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_34566c:
    // 0x34566c: 0x8c424040  lw          $v0, 0x4040($v0)
    ctx->pc = 0x34566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16448)));
label_345670:
    // 0x345670: 0xc049c48  jal         func_127120
label_345674:
    if (ctx->pc == 0x345674u) {
        ctx->pc = 0x345674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345670u;
        // 0x345674: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345678u;
        goto label_345678;
    }
    ctx->pc = 0x345670u;
    SET_GPR_U32(ctx, 31, 0x345678u);
    ctx->pc = 0x345674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345670u;
    // 0x345674: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x345670u, 0x345678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345678u;
label_345678:
    // 0x345678: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_34567c:
    // 0x34567c: 0xc082674  jal         func_2099D0
label_345680:
    if (ctx->pc == 0x345680u) {
        ctx->pc = 0x345680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34567Cu;
        // 0x345680: 0x24845e00  addiu       $a0, $a0, 0x5E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345684u;
        goto label_345684;
    }
    ctx->pc = 0x34567Cu;
    SET_GPR_U32(ctx, 31, 0x345684u);
    ctx->pc = 0x345680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34567Cu;
    // 0x345680: 0x24845e00  addiu       $a0, $a0, 0x5E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34567Cu, 0x345684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345684u;
label_345684:
    // 0x345684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345688:
    // 0x345688: 0x3e00008  jr          $ra
label_34568c:
    if (ctx->pc == 0x34568Cu) {
        ctx->pc = 0x34568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345688u;
        // 0x34568c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345690u;
        goto label_345690;
    }
    ctx->pc = 0x345688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345688u;
        // 0x34568c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345690u;
label_345690:
    // 0x345690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x345690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_345694:
    // 0x345694: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345698:
    // 0x345698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34569c:
    // 0x34569c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34569cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3456a0:
    // 0x3456a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3456a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3456a4:
    // 0x3456a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3456a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3456a8:
    // 0x3456a8: 0x9450be90  lhu         $s0, -0x4170($v0)
    ctx->pc = 0x3456a8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
label_3456ac:
    // 0x3456ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3456acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3456b0:
    // 0x3456b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3456b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3456b4:
    // 0x3456b4: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x3456b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_3456b8:
    // 0x3456b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3456b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3456bc:
    // 0x3456bc: 0xc047b8e  jal         func_11EE38
label_3456c0:
    if (ctx->pc == 0x3456C0u) {
        ctx->pc = 0x3456C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456BCu;
        // 0x3456c0: 0x27a80038  addiu       $t0, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3456C4u;
        goto label_3456c4;
    }
    ctx->pc = 0x3456BCu;
    SET_GPR_U32(ctx, 31, 0x3456C4u);
    ctx->pc = 0x3456C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3456BCu;
    // 0x3456c0: 0x27a80038  addiu       $t0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x3456BCu, 0x3456C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456C4u;
label_3456c4:
    // 0x3456c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3456c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3456c8:
    // 0x3456c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3456c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3456cc:
    // 0x3456cc: 0xc047b46  jal         func_11ED18
label_3456d0:
    if (ctx->pc == 0x3456D0u) {
        ctx->pc = 0x3456D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456CCu;
        // 0x3456d0: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3456D4u;
        goto label_3456d4;
    }
    ctx->pc = 0x3456CCu;
    SET_GPR_U32(ctx, 31, 0x3456D4u);
    ctx->pc = 0x3456D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3456CCu;
    // 0x3456d0: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x3456CCu, 0x3456D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456D4u;
label_3456d4:
    // 0x3456d4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x3456d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3456d8:
    // 0x3456d8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3456d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3456dc:
    // 0x3456dc: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_3456e0:
    if (ctx->pc == 0x3456E0u) {
        ctx->pc = 0x3456E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456DCu;
        // 0x3456e0: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3456E4u;
        goto label_3456e4;
    }
    ctx->pc = 0x3456DCu;
    {
        const bool branch_taken_0x3456dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3456dc) {
            ctx->pc = 0x3456E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3456DCu;
            // 0x3456e0: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34570Cu;
            goto label_34570c;
        }
    }
    ctx->pc = 0x3456E4u;
label_3456e4:
    // 0x3456e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3456e8:
    if (ctx->pc == 0x3456E8u) {
        ctx->pc = 0x3456ECu;
        goto label_3456ec;
    }
    ctx->pc = 0x3456E4u;
    {
        const bool branch_taken_0x3456e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3456e4) {
            ctx->pc = 0x345708u;
            goto label_345708;
        }
    }
    ctx->pc = 0x3456ECu;
label_3456ec:
    // 0x3456ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3456ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3456f0:
    // 0x3456f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3456f4:
    if (ctx->pc == 0x3456F4u) {
        ctx->pc = 0x3456F8u;
        goto label_3456f8;
    }
    ctx->pc = 0x3456F0u;
    {
        const bool branch_taken_0x3456f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3456f0) {
            ctx->pc = 0x345700u;
            goto label_345700;
        }
    }
    ctx->pc = 0x3456F8u;
label_3456f8:
    // 0x3456f8: 0x10000011  b           . + 4 + (0x11 << 2)
label_3456fc:
    if (ctx->pc == 0x3456FCu) {
        ctx->pc = 0x345700u;
        goto label_345700;
    }
    ctx->pc = 0x3456F8u;
    {
        const bool branch_taken_0x3456f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3456f8) {
            ctx->pc = 0x345740u;
            goto label_345740;
        }
    }
    ctx->pc = 0x345700u;
label_345700:
    // 0x345700: 0x10000010  b           . + 4 + (0x10 << 2)
label_345704:
    if (ctx->pc == 0x345704u) {
        ctx->pc = 0x345704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345700u;
        // 0x345704: 0x64100035  daddiu      $s0, $zero, 0x35 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)53);
        ctx->in_delay_slot = false;
        ctx->pc = 0x345708u;
        goto label_345708;
    }
    ctx->pc = 0x345700u;
    {
        const bool branch_taken_0x345700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345700u;
        // 0x345704: 0x64100035  daddiu      $s0, $zero, 0x35 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)53);
        ctx->in_delay_slot = false;
        if (branch_taken_0x345700) {
            ctx->pc = 0x345744u;
            goto label_345744;
        }
    }
    ctx->pc = 0x345708u;
label_345708:
    // 0x345708: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x345708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_34570c:
    // 0x34570c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_345710:
    // 0x345710: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_345714:
    if (ctx->pc == 0x345714u) {
        ctx->pc = 0x345718u;
        goto label_345718;
    }
    ctx->pc = 0x345710u;
    {
        const bool branch_taken_0x345710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x345710) {
            ctx->pc = 0x345740u;
            goto label_345740;
        }
    }
    ctx->pc = 0x345718u;
label_345718:
    // 0x345718: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_34571c:
    // 0x34571c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_345720:
    if (ctx->pc == 0x345720u) {
        ctx->pc = 0x345720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34571Cu;
        // 0x345720: 0x3204ffff  andi        $a0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x345724u;
        goto label_345724;
    }
    ctx->pc = 0x34571Cu;
    {
        const bool branch_taken_0x34571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34571c) {
            ctx->pc = 0x345720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34571Cu;
            // 0x345720: 0x3204ffff  andi        $a0, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x345748u;
            goto label_345748;
        }
    }
    ctx->pc = 0x345724u;
label_345724:
    // 0x345724: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x345724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_345728:
    // 0x345728: 0x2a210005  slti        $at, $s1, 0x5
    ctx->pc = 0x345728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_34572c:
    // 0x34572c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_345730:
    if (ctx->pc == 0x345730u) {
        ctx->pc = 0x345734u;
        goto label_345734;
    }
    ctx->pc = 0x34572Cu;
    {
        const bool branch_taken_0x34572c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34572c) {
            ctx->pc = 0x345744u;
            goto label_345744;
        }
    }
    ctx->pc = 0x345734u;
label_345734:
    // 0x345734: 0x1000ffde  b           . + 4 + (-0x22 << 2)
label_345738:
    if (ctx->pc == 0x345738u) {
        ctx->pc = 0x345738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345734u;
        // 0x345738: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34573Cu;
        goto label_34573c;
    }
    ctx->pc = 0x345734u;
    {
        const bool branch_taken_0x345734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345734u;
        // 0x345738: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345734) {
            ctx->pc = 0x3456B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3456b0;
        }
    }
    ctx->pc = 0x34573Cu;
label_34573c:
    // 0x34573c: 0x0  nop
    ctx->pc = 0x34573cu;
    // NOP
label_345740:
    // 0x345740: 0x64100025  daddiu      $s0, $zero, 0x25
    ctx->pc = 0x345740u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)37);
label_345744:
    // 0x345744: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x345744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_345748:
    // 0x345748: 0xc069230  jal         func_1A48C0
label_34574c:
    if (ctx->pc == 0x34574Cu) {
        ctx->pc = 0x345750u;
        goto label_345750;
    }
    ctx->pc = 0x345748u;
    SET_GPR_U32(ctx, 31, 0x345750u);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x345748u, 0x345750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345750u;
label_345750:
    // 0x345750: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345754:
    // 0x345754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x345754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_345758:
    // 0x345758: 0xc082678  jal         func_2099E0
label_34575c:
    if (ctx->pc == 0x34575Cu) {
        ctx->pc = 0x34575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345758u;
        // 0x34575c: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345760u;
        goto label_345760;
    }
    ctx->pc = 0x345758u;
    SET_GPR_U32(ctx, 31, 0x345760u);
    ctx->pc = 0x34575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345758u;
    // 0x34575c: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x345758u, 0x345760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345760u;
label_345760:
    // 0x345760: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345764:
    // 0x345764: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345768:
    // 0x345768: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x345768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_34576c:
    // 0x34576c: 0xc0558d4  jal         func_156350
label_345770:
    if (ctx->pc == 0x345770u) {
        ctx->pc = 0x345770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34576Cu;
        // 0x345770: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345774u;
        goto label_345774;
    }
    ctx->pc = 0x34576Cu;
    SET_GPR_U32(ctx, 31, 0x345774u);
    ctx->pc = 0x345770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34576Cu;
    // 0x345770: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x34576Cu, 0x345774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345774u;
label_345774:
    // 0x345774: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_345778:
    // 0x345778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34577c:
    // 0x34577c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34577cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_345780:
    // 0x345780: 0x3e00008  jr          $ra
label_345784:
    if (ctx->pc == 0x345784u) {
        ctx->pc = 0x345784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345780u;
        // 0x345784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345788u;
        goto label_345788;
    }
    ctx->pc = 0x345780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345780u;
        // 0x345784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345788u;
label_345788:
    // 0x345788: 0x0  nop
    ctx->pc = 0x345788u;
    // NOP
label_34578c:
    // 0x34578c: 0x0  nop
    ctx->pc = 0x34578cu;
    // NOP
label_345790:
    // 0x345790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_345794:
    // 0x345794: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345798:
    // 0x345798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34579c:
    // 0x34579c: 0xc069230  jal         func_1A48C0
label_3457a0:
    if (ctx->pc == 0x3457A0u) {
        ctx->pc = 0x3457A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34579Cu;
        // 0x3457a0: 0x9444be90  lhu         $a0, -0x4170($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3457A4u;
        goto label_3457a4;
    }
    ctx->pc = 0x34579Cu;
    SET_GPR_U32(ctx, 31, 0x3457A4u);
    ctx->pc = 0x3457A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34579Cu;
    // 0x3457a0: 0x9444be90  lhu         $a0, -0x4170($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x34579Cu, 0x3457A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457A4u;
label_3457a4:
    // 0x3457a4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3457a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_3457a8:
    // 0x3457a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3457a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3457ac:
    // 0x3457ac: 0xc082678  jal         func_2099E0
label_3457b0:
    if (ctx->pc == 0x3457B0u) {
        ctx->pc = 0x3457B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457ACu;
        // 0x3457b0: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3457B4u;
        goto label_3457b4;
    }
    ctx->pc = 0x3457ACu;
    SET_GPR_U32(ctx, 31, 0x3457B4u);
    ctx->pc = 0x3457B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3457ACu;
    // 0x3457b0: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3457ACu, 0x3457B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457B4u;
label_3457b4:
    // 0x3457b4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3457b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_3457b8:
    // 0x3457b8: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3457b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_3457bc:
    // 0x3457bc: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x3457bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_3457c0:
    // 0x3457c0: 0xc0558d4  jal         func_156350
label_3457c4:
    if (ctx->pc == 0x3457C4u) {
        ctx->pc = 0x3457C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457C0u;
        // 0x3457c4: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3457C8u;
        goto label_3457c8;
    }
    ctx->pc = 0x3457C0u;
    SET_GPR_U32(ctx, 31, 0x3457C8u);
    ctx->pc = 0x3457C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3457C0u;
    // 0x3457c4: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x3457C0u, 0x3457C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457C8u;
label_3457c8:
    // 0x3457c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3457c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3457cc:
    // 0x3457cc: 0x3e00008  jr          $ra
label_3457d0:
    if (ctx->pc == 0x3457D0u) {
        ctx->pc = 0x3457D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457CCu;
        // 0x3457d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3457D4u;
        goto label_3457d4;
    }
    ctx->pc = 0x3457CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3457D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457CCu;
        // 0x3457d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3457CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3457D4u;
label_3457d4:
    // 0x3457d4: 0x0  nop
    ctx->pc = 0x3457d4u;
    // NOP
label_3457d8:
    // 0x3457d8: 0x0  nop
    ctx->pc = 0x3457d8u;
    // NOP
label_3457dc:
    // 0x3457dc: 0x0  nop
    ctx->pc = 0x3457dcu;
    // NOP
label_3457e0:
    // 0x3457e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3457e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3457e4:
    // 0x3457e4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3457e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_3457e8:
    // 0x3457e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3457e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3457ec:
    // 0x3457ec: 0xc069230  jal         func_1A48C0
label_3457f0:
    if (ctx->pc == 0x3457F0u) {
        ctx->pc = 0x3457F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457ECu;
        // 0x3457f0: 0x9444be90  lhu         $a0, -0x4170($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3457F4u;
        goto label_3457f4;
    }
    ctx->pc = 0x3457ECu;
    SET_GPR_U32(ctx, 31, 0x3457F4u);
    ctx->pc = 0x3457F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3457ECu;
    // 0x3457f0: 0x9444be90  lhu         $a0, -0x4170($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x3457ECu, 0x3457F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3457F4u;
label_3457f4:
    // 0x3457f4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3457f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_3457f8:
    // 0x3457f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3457f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3457fc:
    // 0x3457fc: 0xc082678  jal         func_2099E0
label_345800:
    if (ctx->pc == 0x345800u) {
        ctx->pc = 0x345800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457FCu;
        // 0x345800: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345804u;
        goto label_345804;
    }
    ctx->pc = 0x3457FCu;
    SET_GPR_U32(ctx, 31, 0x345804u);
    ctx->pc = 0x345800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3457FCu;
    // 0x345800: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3457FCu, 0x345804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345804u;
label_345804:
    // 0x345804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_345808:
    // 0x345808: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_34580c:
    // 0x34580c: 0xac434378  sw          $v1, 0x4378($v0)
    ctx->pc = 0x34580cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
label_345810:
    // 0x345810: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345814:
    // 0x345814: 0x24845970  addiu       $a0, $a0, 0x5970
    ctx->pc = 0x345814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22896));
label_345818:
    // 0x345818: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_34581c:
    // 0x34581c: 0xac44be80  sw          $a0, -0x4180($v0)
    ctx->pc = 0x34581cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 4));
label_345820:
    // 0x345820: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x345820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_345824:
    // 0x345824: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345828:
    // 0x345828: 0x24635ae0  addiu       $v1, $v1, 0x5AE0
    ctx->pc = 0x345828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23264));
label_34582c:
    // 0x34582c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34582cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345830:
    // 0x345830: 0x24845850  addiu       $a0, $a0, 0x5850
    ctx->pc = 0x345830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22608));
label_345834:
    // 0x345834: 0xc082674  jal         func_2099D0
label_345838:
    if (ctx->pc == 0x345838u) {
        ctx->pc = 0x345838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345834u;
        // 0x345838: 0xac43be84  sw          $v1, -0x417C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34583Cu;
        goto label_34583c;
    }
    ctx->pc = 0x345834u;
    SET_GPR_U32(ctx, 31, 0x34583Cu);
    ctx->pc = 0x345838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345834u;
    // 0x345838: 0xac43be84  sw          $v1, -0x417C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x345834u, 0x34583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34583Cu;
label_34583c:
    // 0x34583c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34583cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345840:
    // 0x345840: 0x3e00008  jr          $ra
label_345844:
    if (ctx->pc == 0x345844u) {
        ctx->pc = 0x345844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345840u;
        // 0x345844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345848u;
        goto label_345848;
    }
    ctx->pc = 0x345840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345840u;
        // 0x345844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345848u;
label_345848:
    // 0x345848: 0x0  nop
    ctx->pc = 0x345848u;
    // NOP
label_34584c:
    // 0x34584c: 0x0  nop
    ctx->pc = 0x34584cu;
    // NOP
label_345850:
    // 0x345850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_345854:
    // 0x345854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x345854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345858:
    // 0x345858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34585c:
    // 0x34585c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34585cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345860:
    // 0x345860: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x345860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_345864:
    // 0x345864: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x345864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345868:
    // 0x345868: 0xc047b8e  jal         func_11EE38
label_34586c:
    if (ctx->pc == 0x34586Cu) {
        ctx->pc = 0x34586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345868u;
        // 0x34586c: 0x27a80018  addiu       $t0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345870u;
        goto label_345870;
    }
    ctx->pc = 0x345868u;
    SET_GPR_U32(ctx, 31, 0x345870u);
    ctx->pc = 0x34586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345868u;
    // 0x34586c: 0x27a80018  addiu       $t0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x345868u, 0x345870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345870u;
label_345870:
    // 0x345870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x345870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345874:
    // 0x345874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x345874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345878:
    // 0x345878: 0xc047b46  jal         func_11ED18
label_34587c:
    if (ctx->pc == 0x34587Cu) {
        ctx->pc = 0x34587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345878u;
        // 0x34587c: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345880u;
        goto label_345880;
    }
    ctx->pc = 0x345878u;
    SET_GPR_U32(ctx, 31, 0x345880u);
    ctx->pc = 0x34587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345878u;
    // 0x34587c: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x345878u, 0x345880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345880u;
label_345880:
    // 0x345880: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x345880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_345884:
    // 0x345884: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x345884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_345888:
    // 0x345888: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_34588c:
    if (ctx->pc == 0x34588Cu) {
        ctx->pc = 0x34588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345888u;
        // 0x34588c: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345890u;
        goto label_345890;
    }
    ctx->pc = 0x345888u;
    {
        const bool branch_taken_0x345888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x345888) {
            ctx->pc = 0x34588Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345888u;
            // 0x34588c: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3458A4u;
            goto label_3458a4;
        }
    }
    ctx->pc = 0x345890u;
label_345890:
    // 0x345890: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x345890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_345894:
    // 0x345894: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x345894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_345898:
    // 0x345898: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_34589c:
    if (ctx->pc == 0x34589Cu) {
        ctx->pc = 0x34589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345898u;
        // 0x34589c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3458A0u;
        goto label_3458a0;
    }
    ctx->pc = 0x345898u;
    {
        const bool branch_taken_0x345898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x345898) {
            ctx->pc = 0x34589Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345898u;
            // 0x34589c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3458D8u;
            goto label_3458d8;
        }
    }
    ctx->pc = 0x3458A0u;
label_3458a0:
    // 0x3458a0: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x3458a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_3458a4:
    // 0x3458a4: 0xc069230  jal         func_1A48C0
label_3458a8:
    if (ctx->pc == 0x3458A8u) {
        ctx->pc = 0x3458ACu;
        goto label_3458ac;
    }
    ctx->pc = 0x3458A4u;
    SET_GPR_U32(ctx, 31, 0x3458ACu);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x3458A4u, 0x3458ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3458ACu;
label_3458ac:
    // 0x3458ac: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3458acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_3458b0:
    // 0x3458b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3458b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3458b4:
    // 0x3458b4: 0xc082678  jal         func_2099E0
label_3458b8:
    if (ctx->pc == 0x3458B8u) {
        ctx->pc = 0x3458B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458B4u;
        // 0x3458b8: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3458BCu;
        goto label_3458bc;
    }
    ctx->pc = 0x3458B4u;
    SET_GPR_U32(ctx, 31, 0x3458BCu);
    ctx->pc = 0x3458B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3458B4u;
    // 0x3458b8: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3458B4u, 0x3458BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3458BCu;
label_3458bc:
    // 0x3458bc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3458bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_3458c0:
    // 0x3458c0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3458c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_3458c4:
    // 0x3458c4: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x3458c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_3458c8:
    // 0x3458c8: 0xc0558d4  jal         func_156350
label_3458cc:
    if (ctx->pc == 0x3458CCu) {
        ctx->pc = 0x3458CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458C8u;
        // 0x3458cc: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3458D0u;
        goto label_3458d0;
    }
    ctx->pc = 0x3458C8u;
    SET_GPR_U32(ctx, 31, 0x3458D0u);
    ctx->pc = 0x3458CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3458C8u;
    // 0x3458cc: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x3458C8u, 0x3458D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3458D0u;
label_3458d0:
    // 0x3458d0: 0x10000023  b           . + 4 + (0x23 << 2)
label_3458d4:
    if (ctx->pc == 0x3458D4u) {
        ctx->pc = 0x3458D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458D0u;
        // 0x3458d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3458D8u;
        goto label_3458d8;
    }
    ctx->pc = 0x3458D0u;
    {
        const bool branch_taken_0x3458d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3458D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458D0u;
        // 0x3458d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3458d0) {
            ctx->pc = 0x345960u;
            goto label_345960;
        }
    }
    ctx->pc = 0x3458D8u;
label_3458d8:
    // 0x3458d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3458d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3458dc:
    // 0x3458dc: 0xc068d08  jal         func_1A3420
label_3458e0:
    if (ctx->pc == 0x3458E0u) {
        ctx->pc = 0x3458E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458DCu;
        // 0x3458e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3458E4u;
        goto label_3458e4;
    }
    ctx->pc = 0x3458DCu;
    SET_GPR_U32(ctx, 31, 0x3458E4u);
    ctx->pc = 0x3458E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3458DCu;
    // 0x3458e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x3458DCu, 0x3458E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3458E4u;
label_3458e4:
    // 0x3458e4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3458e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3458e8:
    // 0x3458e8: 0x30a300a0  andi        $v1, $a1, 0xA0
    ctx->pc = 0x3458e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)160);
label_3458ec:
    // 0x3458ec: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_3458f0:
    if (ctx->pc == 0x3458F0u) {
        ctx->pc = 0x3458F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458ECu;
        // 0x3458f0: 0x30a32000  andi        $v1, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3458F4u;
        goto label_3458f4;
    }
    ctx->pc = 0x3458ECu;
    {
        const bool branch_taken_0x3458ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3458ec) {
            ctx->pc = 0x3458F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3458ECu;
            // 0x3458f0: 0x30a32000  andi        $v1, $a1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x345910u;
            goto label_345910;
        }
    }
    ctx->pc = 0x3458F4u;
label_3458f4:
    // 0x3458f4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3458f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_3458f8:
    // 0x3458f8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3458f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3458fc:
    // 0x3458fc: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x3458fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
label_345900:
    // 0x345900: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x345900u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_345904:
    // 0x345904: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x345904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_345908:
    // 0x345908: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x345908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
label_34590c:
    // 0x34590c: 0x30a32000  andi        $v1, $a1, 0x2000
    ctx->pc = 0x34590cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
label_345910:
    // 0x345910: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_345914:
    if (ctx->pc == 0x345914u) {
        ctx->pc = 0x345918u;
        goto label_345918;
    }
    ctx->pc = 0x345910u;
    {
        const bool branch_taken_0x345910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345910) {
            ctx->pc = 0x34595Cu;
            goto label_34595c;
        }
    }
    ctx->pc = 0x345918u;
label_345918:
    // 0x345918: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x345918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_34591c:
    // 0x34591c: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x34591cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
label_345920:
    // 0x345920: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_345924:
    if (ctx->pc == 0x345924u) {
        ctx->pc = 0x345924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345920u;
        // 0x345924: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345928u;
        goto label_345928;
    }
    ctx->pc = 0x345920u;
    {
        const bool branch_taken_0x345920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345920) {
            ctx->pc = 0x345924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345920u;
            // 0x345924: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345948u;
            goto label_345948;
        }
    }
    ctx->pc = 0x345928u;
label_345928:
    // 0x345928: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x345928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_34592c:
    // 0x34592c: 0xc0538fc  jal         func_14E3F0
label_345930:
    if (ctx->pc == 0x345930u) {
        ctx->pc = 0x345930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34592Cu;
        // 0x345930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345934u;
        goto label_345934;
    }
    ctx->pc = 0x34592Cu;
    SET_GPR_U32(ctx, 31, 0x345934u);
    ctx->pc = 0x345930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34592Cu;
    // 0x345930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34592Cu, 0x345934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345934u;
label_345934:
    // 0x345934: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345938:
    // 0x345938: 0xc082674  jal         func_2099D0
label_34593c:
    if (ctx->pc == 0x34593Cu) {
        ctx->pc = 0x34593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345938u;
        // 0x34593c: 0x8c44be80  lw          $a0, -0x4180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345940u;
        goto label_345940;
    }
    ctx->pc = 0x345938u;
    SET_GPR_U32(ctx, 31, 0x345940u);
    ctx->pc = 0x34593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345938u;
    // 0x34593c: 0x8c44be80  lw          $a0, -0x4180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x345938u, 0x345940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345940u;
label_345940:
    // 0x345940: 0x10000006  b           . + 4 + (0x6 << 2)
label_345944:
    if (ctx->pc == 0x345944u) {
        ctx->pc = 0x345948u;
        goto label_345948;
    }
    ctx->pc = 0x345940u;
    {
        const bool branch_taken_0x345940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345940) {
            ctx->pc = 0x34595Cu;
            goto label_34595c;
        }
    }
    ctx->pc = 0x345948u;
label_345948:
    // 0x345948: 0xc0538fc  jal         func_14E3F0
label_34594c:
    if (ctx->pc == 0x34594Cu) {
        ctx->pc = 0x34594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345948u;
        // 0x34594c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345950u;
        goto label_345950;
    }
    ctx->pc = 0x345948u;
    SET_GPR_U32(ctx, 31, 0x345950u);
    ctx->pc = 0x34594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345948u;
    // 0x34594c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x345948u, 0x345950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345950u;
label_345950:
    // 0x345950: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345954:
    // 0x345954: 0xc082674  jal         func_2099D0
label_345958:
    if (ctx->pc == 0x345958u) {
        ctx->pc = 0x345958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345954u;
        // 0x345958: 0x8c44be84  lw          $a0, -0x417C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34595Cu;
        goto label_34595c;
    }
    ctx->pc = 0x345954u;
    SET_GPR_U32(ctx, 31, 0x34595Cu);
    ctx->pc = 0x345958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345954u;
    // 0x345958: 0x8c44be84  lw          $a0, -0x417C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x345954u, 0x34595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34595Cu;
label_34595c:
    // 0x34595c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34595cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345960:
    // 0x345960: 0x3e00008  jr          $ra
label_345964:
    if (ctx->pc == 0x345964u) {
        ctx->pc = 0x345964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345960u;
        // 0x345964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345968u;
        goto label_345968;
    }
    ctx->pc = 0x345960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345960u;
        // 0x345964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345968u;
label_345968:
    // 0x345968: 0x0  nop
    ctx->pc = 0x345968u;
    // NOP
label_34596c:
    // 0x34596c: 0x0  nop
    ctx->pc = 0x34596cu;
    // NOP
label_345970:
    // 0x345970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_345974:
    // 0x345974: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x345974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345978:
    // 0x345978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34597c:
    // 0x34597c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34597cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345980:
    // 0x345980: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x345980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_345984:
    // 0x345984: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x345984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345988:
    // 0x345988: 0xc047b8e  jal         func_11EE38
label_34598c:
    if (ctx->pc == 0x34598Cu) {
        ctx->pc = 0x34598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345988u;
        // 0x34598c: 0x27a80018  addiu       $t0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345990u;
        goto label_345990;
    }
    ctx->pc = 0x345988u;
    SET_GPR_U32(ctx, 31, 0x345990u);
    ctx->pc = 0x34598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345988u;
    // 0x34598c: 0x27a80018  addiu       $t0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x345988u, 0x345990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345990u;
label_345990:
    // 0x345990: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x345990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345994:
    // 0x345994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x345994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345998:
    // 0x345998: 0xc047b46  jal         func_11ED18
label_34599c:
    if (ctx->pc == 0x34599Cu) {
        ctx->pc = 0x34599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345998u;
        // 0x34599c: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3459A0u;
        goto label_3459a0;
    }
    ctx->pc = 0x345998u;
    SET_GPR_U32(ctx, 31, 0x3459A0u);
    ctx->pc = 0x34599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345998u;
    // 0x34599c: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x345998u, 0x3459A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459A0u;
label_3459a0:
    // 0x3459a0: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3459a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3459a4:
    // 0x3459a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3459a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3459a8:
    // 0x3459a8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3459ac:
    if (ctx->pc == 0x3459ACu) {
        ctx->pc = 0x3459ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459A8u;
        // 0x3459ac: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3459B0u;
        goto label_3459b0;
    }
    ctx->pc = 0x3459A8u;
    {
        const bool branch_taken_0x3459a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3459a8) {
            ctx->pc = 0x3459ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3459A8u;
            // 0x3459ac: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3459C4u;
            goto label_3459c4;
        }
    }
    ctx->pc = 0x3459B0u;
label_3459b0:
    // 0x3459b0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3459b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3459b4:
    // 0x3459b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3459b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3459b8:
    // 0x3459b8: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_3459bc:
    if (ctx->pc == 0x3459BCu) {
        ctx->pc = 0x3459BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459B8u;
        // 0x3459bc: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3459C0u;
        goto label_3459c0;
    }
    ctx->pc = 0x3459B8u;
    {
        const bool branch_taken_0x3459b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3459b8) {
            ctx->pc = 0x3459BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3459B8u;
            // 0x3459bc: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3459F8u;
            goto label_3459f8;
        }
    }
    ctx->pc = 0x3459C0u;
label_3459c0:
    // 0x3459c0: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x3459c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_3459c4:
    // 0x3459c4: 0xc069230  jal         func_1A48C0
label_3459c8:
    if (ctx->pc == 0x3459C8u) {
        ctx->pc = 0x3459CCu;
        goto label_3459cc;
    }
    ctx->pc = 0x3459C4u;
    SET_GPR_U32(ctx, 31, 0x3459CCu);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x3459C4u, 0x3459CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459CCu;
label_3459cc:
    // 0x3459cc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3459ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_3459d0:
    // 0x3459d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3459d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3459d4:
    // 0x3459d4: 0xc082678  jal         func_2099E0
label_3459d8:
    if (ctx->pc == 0x3459D8u) {
        ctx->pc = 0x3459D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459D4u;
        // 0x3459d8: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3459DCu;
        goto label_3459dc;
    }
    ctx->pc = 0x3459D4u;
    SET_GPR_U32(ctx, 31, 0x3459DCu);
    ctx->pc = 0x3459D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3459D4u;
    // 0x3459d8: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3459D4u, 0x3459DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459DCu;
label_3459dc:
    // 0x3459dc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3459dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_3459e0:
    // 0x3459e0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3459e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_3459e4:
    // 0x3459e4: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x3459e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_3459e8:
    // 0x3459e8: 0xc0558d4  jal         func_156350
label_3459ec:
    if (ctx->pc == 0x3459ECu) {
        ctx->pc = 0x3459ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459E8u;
        // 0x3459ec: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3459F0u;
        goto label_3459f0;
    }
    ctx->pc = 0x3459E8u;
    SET_GPR_U32(ctx, 31, 0x3459F0u);
    ctx->pc = 0x3459ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3459E8u;
    // 0x3459ec: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x3459E8u, 0x3459F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459F0u;
label_3459f0:
    // 0x3459f0: 0x1000000e  b           . + 4 + (0xE << 2)
label_3459f4:
    if (ctx->pc == 0x3459F4u) {
        ctx->pc = 0x3459F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459F0u;
        // 0x3459f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3459F8u;
        goto label_3459f8;
    }
    ctx->pc = 0x3459F0u;
    {
        const bool branch_taken_0x3459f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3459F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459F0u;
        // 0x3459f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3459f0) {
            ctx->pc = 0x345A2Cu;
            goto label_345a2c;
        }
    }
    ctx->pc = 0x3459F8u;
label_3459f8:
    // 0x3459f8: 0xc069230  jal         func_1A48C0
label_3459fc:
    if (ctx->pc == 0x3459FCu) {
        ctx->pc = 0x345A00u;
        goto label_345a00;
    }
    ctx->pc = 0x3459F8u;
    SET_GPR_U32(ctx, 31, 0x345A00u);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x3459F8u, 0x345A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A00u;
label_345a00:
    // 0x345a00: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345a04:
    // 0x345a04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x345a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_345a08:
    // 0x345a08: 0xc082678  jal         func_2099E0
label_345a0c:
    if (ctx->pc == 0x345A0Cu) {
        ctx->pc = 0x345A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A08u;
        // 0x345a0c: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A10u;
        goto label_345a10;
    }
    ctx->pc = 0x345A08u;
    SET_GPR_U32(ctx, 31, 0x345A10u);
    ctx->pc = 0x345A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A08u;
    // 0x345a0c: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x345A08u, 0x345A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A10u;
label_345a10:
    // 0x345a10: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x345a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_345a14:
    // 0x345a14: 0xc06a25a  jal         func_1A8968
label_345a18:
    if (ctx->pc == 0x345A18u) {
        ctx->pc = 0x345A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A14u;
        // 0x345a18: 0x248450a0  addiu       $a0, $a0, 0x50A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A1Cu;
        goto label_345a1c;
    }
    ctx->pc = 0x345A14u;
    SET_GPR_U32(ctx, 31, 0x345A1Cu);
    ctx->pc = 0x345A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A14u;
    // 0x345a18: 0x248450a0  addiu       $a0, $a0, 0x50A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x345A14u, 0x345A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A1Cu;
label_345a1c:
    // 0x345a1c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345a20:
    // 0x345a20: 0xc082674  jal         func_2099D0
label_345a24:
    if (ctx->pc == 0x345A24u) {
        ctx->pc = 0x345A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A20u;
        // 0x345a24: 0x24845a40  addiu       $a0, $a0, 0x5A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A28u;
        goto label_345a28;
    }
    ctx->pc = 0x345A20u;
    SET_GPR_U32(ctx, 31, 0x345A28u);
    ctx->pc = 0x345A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A20u;
    // 0x345a24: 0x24845a40  addiu       $a0, $a0, 0x5A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x345A20u, 0x345A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A28u;
label_345a28:
    // 0x345a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345a2c:
    // 0x345a2c: 0x3e00008  jr          $ra
label_345a30:
    if (ctx->pc == 0x345A30u) {
        ctx->pc = 0x345A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A2Cu;
        // 0x345a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A34u;
        goto label_345a34;
    }
    ctx->pc = 0x345A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A2Cu;
        // 0x345a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345A34u;
label_345a34:
    // 0x345a34: 0x0  nop
    ctx->pc = 0x345a34u;
    // NOP
label_345a38:
    // 0x345a38: 0x0  nop
    ctx->pc = 0x345a38u;
    // NOP
label_345a3c:
    // 0x345a3c: 0x0  nop
    ctx->pc = 0x345a3cu;
    // NOP
label_345a40:
    // 0x345a40: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x345a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_345a44:
    // 0x345a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_345a48:
    // 0x345a48: 0xc06a03a  jal         func_1A80E8
label_345a4c:
    if (ctx->pc == 0x345A4Cu) {
        ctx->pc = 0x345A50u;
        goto label_345a50;
    }
    ctx->pc = 0x345A48u;
    SET_GPR_U32(ctx, 31, 0x345A50u);
    ctx->pc = 0x1A80E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80E8u, 0x345A48u, 0x345A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A50u;
label_345a50:
    // 0x345a50: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_345a54:
    if (ctx->pc == 0x345A54u) {
        ctx->pc = 0x345A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A50u;
        // 0x345a54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A58u;
        goto label_345a58;
    }
    ctx->pc = 0x345A50u;
    {
        const bool branch_taken_0x345a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345a50) {
            ctx->pc = 0x345A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345A50u;
            // 0x345a54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345AD0u;
            goto label_345ad0;
        }
    }
    ctx->pc = 0x345A58u;
label_345a58:
    // 0x345a58: 0xc06a042  jal         func_1A8108
label_345a5c:
    if (ctx->pc == 0x345A5Cu) {
        ctx->pc = 0x345A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A58u;
        // 0x345a5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A60u;
        goto label_345a60;
    }
    ctx->pc = 0x345A58u;
    SET_GPR_U32(ctx, 31, 0x345A60u);
    ctx->pc = 0x345A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A58u;
    // 0x345a5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8108u, 0x345A58u, 0x345A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A60u;
label_345a60:
    // 0x345a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x345a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_345a64:
    // 0x345a64: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
label_345a68:
    if (ctx->pc == 0x345A68u) {
        ctx->pc = 0x345A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A64u;
        // 0x345a68: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A6Cu;
        goto label_345a6c;
    }
    ctx->pc = 0x345A64u;
    {
        const bool branch_taken_0x345a64 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x345a64) {
            ctx->pc = 0x345A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345A64u;
            // 0x345a68: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345AA0u;
            goto label_345aa0;
        }
    }
    ctx->pc = 0x345A6Cu;
label_345a6c:
    // 0x345a6c: 0xc069230  jal         func_1A48C0
label_345a70:
    if (ctx->pc == 0x345A70u) {
        ctx->pc = 0x345A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A6Cu;
        // 0x345a70: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A74u;
        goto label_345a74;
    }
    ctx->pc = 0x345A6Cu;
    SET_GPR_U32(ctx, 31, 0x345A74u);
    ctx->pc = 0x345A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A6Cu;
    // 0x345a70: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x345A6Cu, 0x345A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A74u;
label_345a74:
    // 0x345a74: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345a78:
    // 0x345a78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x345a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_345a7c:
    // 0x345a7c: 0xc082678  jal         func_2099E0
label_345a80:
    if (ctx->pc == 0x345A80u) {
        ctx->pc = 0x345A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A7Cu;
        // 0x345a80: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A84u;
        goto label_345a84;
    }
    ctx->pc = 0x345A7Cu;
    SET_GPR_U32(ctx, 31, 0x345A84u);
    ctx->pc = 0x345A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A7Cu;
    // 0x345a80: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x345A7Cu, 0x345A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A84u;
label_345a84:
    // 0x345a84: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345a88:
    // 0x345a88: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345a8c:
    // 0x345a8c: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x345a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_345a90:
    // 0x345a90: 0xc0558d4  jal         func_156350
label_345a94:
    if (ctx->pc == 0x345A94u) {
        ctx->pc = 0x345A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A90u;
        // 0x345a94: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A98u;
        goto label_345a98;
    }
    ctx->pc = 0x345A90u;
    SET_GPR_U32(ctx, 31, 0x345A98u);
    ctx->pc = 0x345A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A90u;
    // 0x345a94: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x345A90u, 0x345A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A98u;
label_345a98:
    // 0x345a98: 0x1000000c  b           . + 4 + (0xC << 2)
label_345a9c:
    if (ctx->pc == 0x345A9Cu) {
        ctx->pc = 0x345AA0u;
        goto label_345aa0;
    }
    ctx->pc = 0x345A98u;
    {
        const bool branch_taken_0x345a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345a98) {
            ctx->pc = 0x345ACCu;
            goto label_345acc;
        }
    }
    ctx->pc = 0x345AA0u;
label_345aa0:
    // 0x345aa0: 0xc069230  jal         func_1A48C0
label_345aa4:
    if (ctx->pc == 0x345AA4u) {
        ctx->pc = 0x345AA8u;
        goto label_345aa8;
    }
    ctx->pc = 0x345AA0u;
    SET_GPR_U32(ctx, 31, 0x345AA8u);
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x345AA0u, 0x345AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345AA8u;
label_345aa8:
    // 0x345aa8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345aac:
    // 0x345aac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x345aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_345ab0:
    // 0x345ab0: 0xc082678  jal         func_2099E0
label_345ab4:
    if (ctx->pc == 0x345AB4u) {
        ctx->pc = 0x345AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AB0u;
        // 0x345ab4: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345AB8u;
        goto label_345ab8;
    }
    ctx->pc = 0x345AB0u;
    SET_GPR_U32(ctx, 31, 0x345AB8u);
    ctx->pc = 0x345AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345AB0u;
    // 0x345ab4: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x345AB0u, 0x345AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345AB8u;
label_345ab8:
    // 0x345ab8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345abc:
    // 0x345abc: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345ac0:
    // 0x345ac0: 0x24844610  addiu       $a0, $a0, 0x4610
    ctx->pc = 0x345ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17936));
label_345ac4:
    // 0x345ac4: 0xc0558d4  jal         func_156350
label_345ac8:
    if (ctx->pc == 0x345AC8u) {
        ctx->pc = 0x345AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AC4u;
        // 0x345ac8: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345ACCu;
        goto label_345acc;
    }
    ctx->pc = 0x345AC4u;
    SET_GPR_U32(ctx, 31, 0x345ACCu);
    ctx->pc = 0x345AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345AC4u;
    // 0x345ac8: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x345AC4u, 0x345ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345ACCu;
label_345acc:
    // 0x345acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345ad0:
    // 0x345ad0: 0x3e00008  jr          $ra
label_345ad4:
    if (ctx->pc == 0x345AD4u) {
        ctx->pc = 0x345AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AD0u;
        // 0x345ad4: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345AD8u;
        goto label_345ad8;
    }
    ctx->pc = 0x345AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AD0u;
        // 0x345ad4: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345AD8u;
label_345ad8:
    // 0x345ad8: 0x0  nop
    ctx->pc = 0x345ad8u;
    // NOP
label_345adc:
    // 0x345adc: 0x0  nop
    ctx->pc = 0x345adcu;
    // NOP
label_345ae0:
    // 0x345ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_345ae4:
    // 0x345ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_345ae8:
    // 0x345ae8: 0xc069230  jal         func_1A48C0
label_345aec:
    if (ctx->pc == 0x345AECu) {
        ctx->pc = 0x345AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AE8u;
        // 0x345aec: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345AF0u;
        goto label_345af0;
    }
    ctx->pc = 0x345AE8u;
    SET_GPR_U32(ctx, 31, 0x345AF0u);
    ctx->pc = 0x345AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345AE8u;
    // 0x345aec: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x345AE8u, 0x345AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345AF0u;
label_345af0:
    // 0x345af0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345af4:
    // 0x345af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x345af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_345af8:
    // 0x345af8: 0xc082678  jal         func_2099E0
label_345afc:
    if (ctx->pc == 0x345AFCu) {
        ctx->pc = 0x345AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AF8u;
        // 0x345afc: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345B00u;
        goto label_345b00;
    }
    ctx->pc = 0x345AF8u;
    SET_GPR_U32(ctx, 31, 0x345B00u);
    ctx->pc = 0x345AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345AF8u;
    // 0x345afc: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x345AF8u, 0x345B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B00u;
label_345b00:
    // 0x345b00: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345b04:
    // 0x345b04: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345b08:
    // 0x345b08: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x345b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_345b0c:
    // 0x345b0c: 0xc0558d4  jal         func_156350
label_345b10:
    if (ctx->pc == 0x345B10u) {
        ctx->pc = 0x345B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B0Cu;
        // 0x345b10: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345B14u;
        goto label_345b14;
    }
    ctx->pc = 0x345B0Cu;
    SET_GPR_U32(ctx, 31, 0x345B14u);
    ctx->pc = 0x345B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345B0Cu;
    // 0x345b10: 0x24a54840  addiu       $a1, $a1, 0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x345B0Cu, 0x345B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B14u;
label_345b14:
    // 0x345b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345b18:
    // 0x345b18: 0x3e00008  jr          $ra
label_345b1c:
    if (ctx->pc == 0x345B1Cu) {
        ctx->pc = 0x345B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B18u;
        // 0x345b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345B20u;
        goto label_345b20;
    }
    ctx->pc = 0x345B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B18u;
        // 0x345b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345B20u;
label_345b20:
    // 0x345b20: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x345b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_345b24:
    // 0x345b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_345b28:
    // 0x345b28: 0xc06a03a  jal         func_1A80E8
label_345b2c:
    if (ctx->pc == 0x345B2Cu) {
        ctx->pc = 0x345B30u;
        goto label_345b30;
    }
    ctx->pc = 0x345B28u;
    SET_GPR_U32(ctx, 31, 0x345B30u);
    ctx->pc = 0x1A80E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80E8u, 0x345B28u, 0x345B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B30u;
label_345b30:
    // 0x345b30: 0x5440006b  bnel        $v0, $zero, . + 4 + (0x6B << 2)
label_345b34:
    if (ctx->pc == 0x345B34u) {
        ctx->pc = 0x345B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B30u;
        // 0x345b34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345B38u;
        goto label_345b38;
    }
    ctx->pc = 0x345B30u;
    {
        const bool branch_taken_0x345b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345b30) {
            ctx->pc = 0x345B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345B30u;
            // 0x345b34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345CE0u;
            goto label_345ce0;
        }
    }
    ctx->pc = 0x345B38u;
label_345b38:
    // 0x345b38: 0xc06a042  jal         func_1A8108
label_345b3c:
    if (ctx->pc == 0x345B3Cu) {
        ctx->pc = 0x345B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B38u;
        // 0x345b3c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345B40u;
        goto label_345b40;
    }
    ctx->pc = 0x345B38u;
    SET_GPR_U32(ctx, 31, 0x345B40u);
    ctx->pc = 0x345B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345B38u;
    // 0x345b3c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8108u, 0x345B38u, 0x345B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B40u;
label_345b40:
    // 0x345b40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x345b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_345b44:
    // 0x345b44: 0x4810060  bgez        $a0, . + 4 + (0x60 << 2)
label_345b48:
    if (ctx->pc == 0x345B48u) {
        ctx->pc = 0x345B4Cu;
        goto label_345b4c;
    }
    ctx->pc = 0x345B44u;
    {
        const bool branch_taken_0x345b44 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x345b44) {
            ctx->pc = 0x345CC8u;
            goto label_345cc8;
        }
    }
    ctx->pc = 0x345B4Cu;
label_345b4c:
    // 0x345b4c: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x345b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_345b50:
    // 0x345b50: 0x1082004a  beq         $a0, $v0, . + 4 + (0x4A << 2)
label_345b54:
    if (ctx->pc == 0x345B54u) {
        ctx->pc = 0x345B58u;
        goto label_345b58;
    }
    ctx->pc = 0x345B50u;
    {
        const bool branch_taken_0x345b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x345b50) {
            ctx->pc = 0x345C7Cu;
            goto label_345c7c;
        }
    }
    ctx->pc = 0x345B58u;
label_345b58:
    // 0x345b58: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x345b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
label_345b5c:
    // 0x345b5c: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
label_345b60:
    if (ctx->pc == 0x345B60u) {
        ctx->pc = 0x345B64u;
        goto label_345b64;
    }
    ctx->pc = 0x345B5Cu;
    {
        const bool branch_taken_0x345b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x345b5c) {
            ctx->pc = 0x345C54u;
            goto label_345c54;
        }
    }
    ctx->pc = 0x345B64u;
label_345b64:
    // 0x345b64: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x345b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
label_345b68:
    // 0x345b68: 0x1082003a  beq         $a0, $v0, . + 4 + (0x3A << 2)
label_345b6c:
    if (ctx->pc == 0x345B6Cu) {
        ctx->pc = 0x345B70u;
        goto label_345b70;
    }
    ctx->pc = 0x345B68u;
    {
        const bool branch_taken_0x345b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x345b68) {
            ctx->pc = 0x345C54u;
            goto label_345c54;
        }
    }
    ctx->pc = 0x345B70u;
label_345b70:
    // 0x345b70: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x345b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_345b74:
    // 0x345b74: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
label_345b78:
    if (ctx->pc == 0x345B78u) {
        ctx->pc = 0x345B7Cu;
        goto label_345b7c;
    }
    ctx->pc = 0x345B74u;
    {
        const bool branch_taken_0x345b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x345b74) {
            ctx->pc = 0x345C54u;
            goto label_345c54;
        }
    }
    ctx->pc = 0x345B7Cu;
label_345b7c:
    // 0x345b7c: 0x2402ffeb  addiu       $v0, $zero, -0x15
    ctx->pc = 0x345b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967275));
label_345b80:
    // 0x345b80: 0x1082002d  beq         $a0, $v0, . + 4 + (0x2D << 2)
label_345b84:
    if (ctx->pc == 0x345B84u) {
        ctx->pc = 0x345B88u;
        goto label_345b88;
    }
    ctx->pc = 0x345B80u;
    {
        const bool branch_taken_0x345b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x345b80) {
            ctx->pc = 0x345C38u;
            goto label_345c38;
        }
    }
    ctx->pc = 0x345B88u;
label_345b88:
    // 0x345b88: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x345b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_345b8c:
    // 0x345b8c: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
label_345b90:
    if (ctx->pc == 0x345B90u) {
        ctx->pc = 0x345B94u;
        goto label_345b94;
    }
    ctx->pc = 0x345B8Cu;
    {
        const bool branch_taken_0x345b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x345b8c) {
            ctx->pc = 0x345C10u;
            goto label_345c10;
        }
    }
    ctx->pc = 0x345B94u;
label_345b94:
    // 0x345b94: 0x2402fff2  addiu       $v0, $zero, -0xE
    ctx->pc = 0x345b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
label_345b98:
    // 0x345b98: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
label_345b9c:
    if (ctx->pc == 0x345B9Cu) {
        ctx->pc = 0x345BA0u;
        goto label_345ba0;
    }
    ctx->pc = 0x345B98u;
    {
        const bool branch_taken_0x345b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x345b98) {
            ctx->pc = 0x345BE8u;
            goto label_345be8;
        }
    }
    ctx->pc = 0x345BA0u;
label_345ba0:
    // 0x345ba0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x345ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_345ba4:
    // 0x345ba4: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_345ba8:
    if (ctx->pc == 0x345BA8u) {
        ctx->pc = 0x345BACu;
        goto label_345bac;
    }
    ctx->pc = 0x345BA4u;
    {
        const bool branch_taken_0x345ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x345ba4) {
            ctx->pc = 0x345BE8u;
            goto label_345be8;
        }
    }
    ctx->pc = 0x345BACu;
label_345bac:
    // 0x345bac: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x345bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_345bb0:
    // 0x345bb0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_345bb4:
    if (ctx->pc == 0x345BB4u) {
        ctx->pc = 0x345BB8u;
        goto label_345bb8;
    }
    ctx->pc = 0x345BB0u;
    {
        const bool branch_taken_0x345bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x345bb0) {
            ctx->pc = 0x345BC0u;
            goto label_345bc0;
        }
    }
    ctx->pc = 0x345BB8u;
label_345bb8:
    // 0x345bb8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_345bbc:
    if (ctx->pc == 0x345BBCu) {
        ctx->pc = 0x345BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345BB8u;
        // 0x345bbc: 0x3c040034  lui         $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345BC0u;
        goto label_345bc0;
    }
    ctx->pc = 0x345BB8u;
    {
        const bool branch_taken_0x345bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345BB8u;
        // 0x345bbc: 0x3c040034  lui         $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345bb8) {
            ctx->pc = 0x345CA4u;
            goto label_345ca4;
        }
    }
    ctx->pc = 0x345BC0u;
label_345bc0:
    // 0x345bc0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345bc4:
    // 0x345bc4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345bc8:
    // 0x345bc8: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x345bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_345bcc:
    // 0x345bcc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345bd0:
    // 0x345bd0: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x345bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
label_345bd4:
    // 0x345bd4: 0x248457e0  addiu       $a0, $a0, 0x57E0
    ctx->pc = 0x345bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22496));
label_345bd8:
    // 0x345bd8: 0xc0558d4  jal         func_156350
label_345bdc:
    if (ctx->pc == 0x345BDCu) {
        ctx->pc = 0x345BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345BD8u;
        // 0x345bdc: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345BE0u;
        goto label_345be0;
    }
    ctx->pc = 0x345BD8u;
    SET_GPR_U32(ctx, 31, 0x345BE0u);
    ctx->pc = 0x345BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345BD8u;
    // 0x345bdc: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x345BD8u, 0x345BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345BE0u;
label_345be0:
    // 0x345be0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_345be4:
    if (ctx->pc == 0x345BE4u) {
        ctx->pc = 0x345BE8u;
        goto label_345be8;
    }
    ctx->pc = 0x345BE0u;
    {
        const bool branch_taken_0x345be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345be0) {
            ctx->pc = 0x345CDCu;
            goto label_345cdc;
        }
    }
    ctx->pc = 0x345BE8u;
label_345be8:
    // 0x345be8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345bec:
    // 0x345bec: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345bf0:
    // 0x345bf0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x345bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_345bf4:
    // 0x345bf4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345bf8:
    // 0x345bf8: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x345bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
label_345bfc:
    // 0x345bfc: 0x248457e0  addiu       $a0, $a0, 0x57E0
    ctx->pc = 0x345bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22496));
label_345c00:
    // 0x345c00: 0xc0558d4  jal         func_156350
label_345c04:
    if (ctx->pc == 0x345C04u) {
        ctx->pc = 0x345C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C00u;
        // 0x345c04: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345C08u;
        goto label_345c08;
    }
    ctx->pc = 0x345C00u;
    SET_GPR_U32(ctx, 31, 0x345C08u);
    ctx->pc = 0x345C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C00u;
    // 0x345c04: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x345C00u, 0x345C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C08u;
label_345c08:
    // 0x345c08: 0x10000034  b           . + 4 + (0x34 << 2)
label_345c0c:
    if (ctx->pc == 0x345C0Cu) {
        ctx->pc = 0x345C10u;
        goto label_345c10;
    }
    ctx->pc = 0x345C08u;
    {
        const bool branch_taken_0x345c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345c08) {
            ctx->pc = 0x345CDCu;
            goto label_345cdc;
        }
    }
    ctx->pc = 0x345C10u;
label_345c10:
    // 0x345c10: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345c14:
    // 0x345c14: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345c18:
    // 0x345c18: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x345c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_345c1c:
    // 0x345c1c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345c20:
    // 0x345c20: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x345c20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
label_345c24:
    // 0x345c24: 0x24845690  addiu       $a0, $a0, 0x5690
    ctx->pc = 0x345c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22160));
label_345c28:
    // 0x345c28: 0xc0558d4  jal         func_156350
label_345c2c:
    if (ctx->pc == 0x345C2Cu) {
        ctx->pc = 0x345C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C28u;
        // 0x345c2c: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345C30u;
        goto label_345c30;
    }
    ctx->pc = 0x345C28u;
    SET_GPR_U32(ctx, 31, 0x345C30u);
    ctx->pc = 0x345C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C28u;
    // 0x345c2c: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x345C28u, 0x345C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C30u;
label_345c30:
    // 0x345c30: 0x1000002a  b           . + 4 + (0x2A << 2)
label_345c34:
    if (ctx->pc == 0x345C34u) {
        ctx->pc = 0x345C38u;
        goto label_345c38;
    }
    ctx->pc = 0x345C30u;
    {
        const bool branch_taken_0x345c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345c30) {
            ctx->pc = 0x345CDCu;
            goto label_345cdc;
        }
    }
    ctx->pc = 0x345C38u;
label_345c38:
    // 0x345c38: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x345c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
label_345c3c:
    // 0x345c3c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x345c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_345c40:
    // 0x345c40: 0x8c44f78c  lw          $a0, -0x874($v0)
    ctx->pc = 0x345c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
label_345c44:
    // 0x345c44: 0xc082674  jal         func_2099D0
label_345c48:
    if (ctx->pc == 0x345C48u) {
        ctx->pc = 0x345C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C44u;
        // 0x345c48: 0xac60be80  sw          $zero, -0x4180($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345C4Cu;
        goto label_345c4c;
    }
    ctx->pc = 0x345C44u;
    SET_GPR_U32(ctx, 31, 0x345C4Cu);
    ctx->pc = 0x345C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C44u;
    // 0x345c48: 0xac60be80  sw          $zero, -0x4180($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950528), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x345C44u, 0x345C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C4Cu;
label_345c4c:
    // 0x345c4c: 0x10000023  b           . + 4 + (0x23 << 2)
label_345c50:
    if (ctx->pc == 0x345C50u) {
        ctx->pc = 0x345C54u;
        goto label_345c54;
    }
    ctx->pc = 0x345C4Cu;
    {
        const bool branch_taken_0x345c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345c4c) {
            ctx->pc = 0x345CDCu;
            goto label_345cdc;
        }
    }
    ctx->pc = 0x345C54u;
label_345c54:
    // 0x345c54: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345c58:
    // 0x345c58: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345c5c:
    // 0x345c5c: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x345c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_345c60:
    // 0x345c60: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345c64:
    // 0x345c64: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x345c64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
label_345c68:
    // 0x345c68: 0x24845690  addiu       $a0, $a0, 0x5690
    ctx->pc = 0x345c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22160));
label_345c6c:
    // 0x345c6c: 0xc0558d4  jal         func_156350
label_345c70:
    if (ctx->pc == 0x345C70u) {
        ctx->pc = 0x345C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C6Cu;
        // 0x345c70: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345C74u;
        goto label_345c74;
    }
    ctx->pc = 0x345C6Cu;
    SET_GPR_U32(ctx, 31, 0x345C74u);
    ctx->pc = 0x345C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C6Cu;
    // 0x345c70: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x345C6Cu, 0x345C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C74u;
label_345c74:
    // 0x345c74: 0x10000019  b           . + 4 + (0x19 << 2)
label_345c78:
    if (ctx->pc == 0x345C78u) {
        ctx->pc = 0x345C7Cu;
        goto label_345c7c;
    }
    ctx->pc = 0x345C74u;
    {
        const bool branch_taken_0x345c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345c74) {
            ctx->pc = 0x345CDCu;
            goto label_345cdc;
        }
    }
    ctx->pc = 0x345C7Cu;
label_345c7c:
    // 0x345c7c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x345c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_345c80:
    // 0x345c80: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345c84:
    // 0x345c84: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x345c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_345c88:
    // 0x345c88: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345c8c:
    // 0x345c8c: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x345c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
label_345c90:
    // 0x345c90: 0x24845690  addiu       $a0, $a0, 0x5690
    ctx->pc = 0x345c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22160));
label_345c94:
    // 0x345c94: 0xc0558d4  jal         func_156350
label_345c98:
    if (ctx->pc == 0x345C98u) {
        ctx->pc = 0x345C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C94u;
        // 0x345c98: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345C9Cu;
        goto label_345c9c;
    }
    ctx->pc = 0x345C94u;
    SET_GPR_U32(ctx, 31, 0x345C9Cu);
    ctx->pc = 0x345C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C94u;
    // 0x345c98: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x345C94u, 0x345C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C9Cu;
label_345c9c:
    // 0x345c9c: 0x1000000f  b           . + 4 + (0xF << 2)
label_345ca0:
    if (ctx->pc == 0x345CA0u) {
        ctx->pc = 0x345CA4u;
        goto label_345ca4;
    }
    ctx->pc = 0x345C9Cu;
    {
        const bool branch_taken_0x345c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345c9c) {
            ctx->pc = 0x345CDCu;
            goto label_345cdc;
        }
    }
    ctx->pc = 0x345CA4u;
label_345ca4:
    // 0x345ca4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x345ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_345ca8:
    // 0x345ca8: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x345ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_345cac:
    // 0x345cac: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345cb0:
    // 0x345cb0: 0xa443be90  sh          $v1, -0x4170($v0)
    ctx->pc = 0x345cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
label_345cb4:
    // 0x345cb4: 0x24845690  addiu       $a0, $a0, 0x5690
    ctx->pc = 0x345cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22160));
label_345cb8:
    // 0x345cb8: 0xc0558d4  jal         func_156350
label_345cbc:
    if (ctx->pc == 0x345CBCu) {
        ctx->pc = 0x345CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CB8u;
        // 0x345cbc: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345CC0u;
        goto label_345cc0;
    }
    ctx->pc = 0x345CB8u;
    SET_GPR_U32(ctx, 31, 0x345CC0u);
    ctx->pc = 0x345CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CB8u;
    // 0x345cbc: 0x24a54380  addiu       $a1, $a1, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x345CB8u, 0x345CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CC0u;
label_345cc0:
    // 0x345cc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_345cc4:
    if (ctx->pc == 0x345CC4u) {
        ctx->pc = 0x345CC8u;
        goto label_345cc8;
    }
    ctx->pc = 0x345CC0u;
    {
        const bool branch_taken_0x345cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345cc0) {
            ctx->pc = 0x345CDCu;
            goto label_345cdc;
        }
    }
    ctx->pc = 0x345CC8u;
label_345cc8:
    // 0x345cc8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x345cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_345ccc:
    // 0x345ccc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x345cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
label_345cd0:
    // 0x345cd0: 0xac64be80  sw          $a0, -0x4180($v1)
    ctx->pc = 0x345cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950528), GPR_U32(ctx, 4));
label_345cd4:
    // 0x345cd4: 0xc082674  jal         func_2099D0
label_345cd8:
    if (ctx->pc == 0x345CD8u) {
        ctx->pc = 0x345CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CD4u;
        // 0x345cd8: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345CDCu;
        goto label_345cdc;
    }
    ctx->pc = 0x345CD4u;
    SET_GPR_U32(ctx, 31, 0x345CDCu);
    ctx->pc = 0x345CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CD4u;
    // 0x345cd8: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x345CD4u, 0x345CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CDCu;
label_345cdc:
    // 0x345cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345ce0:
    // 0x345ce0: 0x3e00008  jr          $ra
label_345ce4:
    if (ctx->pc == 0x345CE4u) {
        ctx->pc = 0x345CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CE0u;
        // 0x345ce4: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345CE8u;
        goto label_345ce8;
    }
    ctx->pc = 0x345CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CE0u;
        // 0x345ce4: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345CE8u;
label_345ce8:
    // 0x345ce8: 0x0  nop
    ctx->pc = 0x345ce8u;
    // NOP
label_345cec:
    // 0x345cec: 0x0  nop
    ctx->pc = 0x345cecu;
    // NOP
label_345cf0:
    // 0x345cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_345cf4:
    // 0x345cf4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345cf8:
    // 0x345cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x345cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_345cfc:
    // 0x345cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_345d00:
    // 0x345d00: 0x8c50be84  lw          $s0, -0x417C($v0)
    ctx->pc = 0x345d00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950532)));
label_345d04:
    // 0x345d04: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345d08:
    // 0x345d08: 0x8c42be80  lw          $v0, -0x4180($v0)
    ctx->pc = 0x345d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
label_345d0c:
    // 0x345d0c: 0x40f809  jalr        $v0
label_345d10:
    if (ctx->pc == 0x345D10u) {
        ctx->pc = 0x345D14u;
        goto label_345d14;
    }
    ctx->pc = 0x345D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x345D14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345D0Cu, 0x345D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x345D14u;
label_345d14:
    // 0x345d14: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_345d18:
    if (ctx->pc == 0x345D18u) {
        ctx->pc = 0x345D1Cu;
        goto label_345d1c;
    }
    ctx->pc = 0x345D14u;
    {
        const bool branch_taken_0x345d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x345d14) {
            ctx->pc = 0x345D30u;
            goto label_345d30;
        }
    }
    ctx->pc = 0x345D1Cu;
label_345d1c:
    // 0x345d1c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345d20:
    // 0x345d20: 0xc082674  jal         func_2099D0
label_345d24:
    if (ctx->pc == 0x345D24u) {
        ctx->pc = 0x345D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D20u;
        // 0x345d24: 0x8c44be88  lw          $a0, -0x4178($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345D28u;
        goto label_345d28;
    }
    ctx->pc = 0x345D20u;
    SET_GPR_U32(ctx, 31, 0x345D28u);
    ctx->pc = 0x345D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D20u;
    // 0x345d24: 0x8c44be88  lw          $a0, -0x4178($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x345D20u, 0x345D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D28u;
label_345d28:
    // 0x345d28: 0x1000000d  b           . + 4 + (0xD << 2)
label_345d2c:
    if (ctx->pc == 0x345D2Cu) {
        ctx->pc = 0x345D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D28u;
        // 0x345d2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345D30u;
        goto label_345d30;
    }
    ctx->pc = 0x345D28u;
    {
        const bool branch_taken_0x345d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D28u;
        // 0x345d2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345d28) {
            ctx->pc = 0x345D60u;
            goto label_345d60;
        }
    }
    ctx->pc = 0x345D30u;
label_345d30:
    // 0x345d30: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x345d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
label_345d34:
    // 0x345d34: 0x2484be90  addiu       $a0, $a0, -0x4170
    ctx->pc = 0x345d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950544));
label_345d38:
    // 0x345d38: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x345d38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_345d3c:
    // 0x345d3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x345d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_345d40:
    // 0x345d40: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x345d40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_345d44:
    // 0x345d44: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x345d44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_345d48:
    // 0x345d48: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_345d4c:
    if (ctx->pc == 0x345D4Cu) {
        ctx->pc = 0x345D50u;
        goto label_345d50;
    }
    ctx->pc = 0x345D48u;
    {
        const bool branch_taken_0x345d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x345d48) {
            ctx->pc = 0x345D5Cu;
            goto label_345d5c;
        }
    }
    ctx->pc = 0x345D50u;
label_345d50:
    // 0x345d50: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x345d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_345d54:
    // 0x345d54: 0xc0d1b18  jal         func_346C60
label_345d58:
    if (ctx->pc == 0x345D58u) {
        ctx->pc = 0x345D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D54u;
        // 0x345d58: 0x9444be92  lhu         $a0, -0x416E($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950546)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345D5Cu;
        goto label_345d5c;
    }
    ctx->pc = 0x345D54u;
    SET_GPR_U32(ctx, 31, 0x345D5Cu);
    ctx->pc = 0x345D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D54u;
    // 0x345d58: 0x9444be92  lhu         $a0, -0x416E($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950546)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C60u, 0x345D54u, 0x345D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D5Cu;
label_345d5c:
    // 0x345d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x345d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_345d60:
    // 0x345d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_345d64:
    // 0x345d64: 0x3e00008  jr          $ra
label_345d68:
    if (ctx->pc == 0x345D68u) {
        ctx->pc = 0x345D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D64u;
        // 0x345d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345D6Cu;
        goto label_345d6c;
    }
    ctx->pc = 0x345D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D64u;
        // 0x345d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345D6Cu;
label_345d6c:
    // 0x345d6c: 0x0  nop
    ctx->pc = 0x345d6cu;
    // NOP
}
