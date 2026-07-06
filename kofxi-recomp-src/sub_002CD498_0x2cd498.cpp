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

// Function: sub_002CD498
// Address: 0x2cd498 - 0x2cdca8
void sub_002CD498_0x2cd498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD498_0x2cd498");
#endif

    switch (ctx->pc) {
        case 0x2cd498u: goto label_2cd498;
        case 0x2cd49cu: goto label_2cd49c;
        case 0x2cd4a0u: goto label_2cd4a0;
        case 0x2cd4a4u: goto label_2cd4a4;
        case 0x2cd4a8u: goto label_2cd4a8;
        case 0x2cd4acu: goto label_2cd4ac;
        case 0x2cd4b0u: goto label_2cd4b0;
        case 0x2cd4b4u: goto label_2cd4b4;
        case 0x2cd4b8u: goto label_2cd4b8;
        case 0x2cd4bcu: goto label_2cd4bc;
        case 0x2cd4c0u: goto label_2cd4c0;
        case 0x2cd4c4u: goto label_2cd4c4;
        case 0x2cd4c8u: goto label_2cd4c8;
        case 0x2cd4ccu: goto label_2cd4cc;
        case 0x2cd4d0u: goto label_2cd4d0;
        case 0x2cd4d4u: goto label_2cd4d4;
        case 0x2cd4d8u: goto label_2cd4d8;
        case 0x2cd4dcu: goto label_2cd4dc;
        case 0x2cd4e0u: goto label_2cd4e0;
        case 0x2cd4e4u: goto label_2cd4e4;
        case 0x2cd4e8u: goto label_2cd4e8;
        case 0x2cd4ecu: goto label_2cd4ec;
        case 0x2cd4f0u: goto label_2cd4f0;
        case 0x2cd4f4u: goto label_2cd4f4;
        case 0x2cd4f8u: goto label_2cd4f8;
        case 0x2cd4fcu: goto label_2cd4fc;
        case 0x2cd500u: goto label_2cd500;
        case 0x2cd504u: goto label_2cd504;
        case 0x2cd508u: goto label_2cd508;
        case 0x2cd50cu: goto label_2cd50c;
        case 0x2cd510u: goto label_2cd510;
        case 0x2cd514u: goto label_2cd514;
        case 0x2cd518u: goto label_2cd518;
        case 0x2cd51cu: goto label_2cd51c;
        case 0x2cd520u: goto label_2cd520;
        case 0x2cd524u: goto label_2cd524;
        case 0x2cd528u: goto label_2cd528;
        case 0x2cd52cu: goto label_2cd52c;
        case 0x2cd530u: goto label_2cd530;
        case 0x2cd534u: goto label_2cd534;
        case 0x2cd538u: goto label_2cd538;
        case 0x2cd53cu: goto label_2cd53c;
        case 0x2cd540u: goto label_2cd540;
        case 0x2cd544u: goto label_2cd544;
        case 0x2cd548u: goto label_2cd548;
        case 0x2cd54cu: goto label_2cd54c;
        case 0x2cd550u: goto label_2cd550;
        case 0x2cd554u: goto label_2cd554;
        case 0x2cd558u: goto label_2cd558;
        case 0x2cd55cu: goto label_2cd55c;
        case 0x2cd560u: goto label_2cd560;
        case 0x2cd564u: goto label_2cd564;
        case 0x2cd568u: goto label_2cd568;
        case 0x2cd56cu: goto label_2cd56c;
        case 0x2cd570u: goto label_2cd570;
        case 0x2cd574u: goto label_2cd574;
        case 0x2cd578u: goto label_2cd578;
        case 0x2cd57cu: goto label_2cd57c;
        case 0x2cd580u: goto label_2cd580;
        case 0x2cd584u: goto label_2cd584;
        case 0x2cd588u: goto label_2cd588;
        case 0x2cd58cu: goto label_2cd58c;
        case 0x2cd590u: goto label_2cd590;
        case 0x2cd594u: goto label_2cd594;
        case 0x2cd598u: goto label_2cd598;
        case 0x2cd59cu: goto label_2cd59c;
        case 0x2cd5a0u: goto label_2cd5a0;
        case 0x2cd5a4u: goto label_2cd5a4;
        case 0x2cd5a8u: goto label_2cd5a8;
        case 0x2cd5acu: goto label_2cd5ac;
        case 0x2cd5b0u: goto label_2cd5b0;
        case 0x2cd5b4u: goto label_2cd5b4;
        case 0x2cd5b8u: goto label_2cd5b8;
        case 0x2cd5bcu: goto label_2cd5bc;
        case 0x2cd5c0u: goto label_2cd5c0;
        case 0x2cd5c4u: goto label_2cd5c4;
        case 0x2cd5c8u: goto label_2cd5c8;
        case 0x2cd5ccu: goto label_2cd5cc;
        case 0x2cd5d0u: goto label_2cd5d0;
        case 0x2cd5d4u: goto label_2cd5d4;
        case 0x2cd5d8u: goto label_2cd5d8;
        case 0x2cd5dcu: goto label_2cd5dc;
        case 0x2cd5e0u: goto label_2cd5e0;
        case 0x2cd5e4u: goto label_2cd5e4;
        case 0x2cd5e8u: goto label_2cd5e8;
        case 0x2cd5ecu: goto label_2cd5ec;
        case 0x2cd5f0u: goto label_2cd5f0;
        case 0x2cd5f4u: goto label_2cd5f4;
        case 0x2cd5f8u: goto label_2cd5f8;
        case 0x2cd5fcu: goto label_2cd5fc;
        case 0x2cd600u: goto label_2cd600;
        case 0x2cd604u: goto label_2cd604;
        case 0x2cd608u: goto label_2cd608;
        case 0x2cd60cu: goto label_2cd60c;
        case 0x2cd610u: goto label_2cd610;
        case 0x2cd614u: goto label_2cd614;
        case 0x2cd618u: goto label_2cd618;
        case 0x2cd61cu: goto label_2cd61c;
        case 0x2cd620u: goto label_2cd620;
        case 0x2cd624u: goto label_2cd624;
        case 0x2cd628u: goto label_2cd628;
        case 0x2cd62cu: goto label_2cd62c;
        case 0x2cd630u: goto label_2cd630;
        case 0x2cd634u: goto label_2cd634;
        case 0x2cd638u: goto label_2cd638;
        case 0x2cd63cu: goto label_2cd63c;
        case 0x2cd640u: goto label_2cd640;
        case 0x2cd644u: goto label_2cd644;
        case 0x2cd648u: goto label_2cd648;
        case 0x2cd64cu: goto label_2cd64c;
        case 0x2cd650u: goto label_2cd650;
        case 0x2cd654u: goto label_2cd654;
        case 0x2cd658u: goto label_2cd658;
        case 0x2cd65cu: goto label_2cd65c;
        case 0x2cd660u: goto label_2cd660;
        case 0x2cd664u: goto label_2cd664;
        case 0x2cd668u: goto label_2cd668;
        case 0x2cd66cu: goto label_2cd66c;
        case 0x2cd670u: goto label_2cd670;
        case 0x2cd674u: goto label_2cd674;
        case 0x2cd678u: goto label_2cd678;
        case 0x2cd67cu: goto label_2cd67c;
        case 0x2cd680u: goto label_2cd680;
        case 0x2cd684u: goto label_2cd684;
        case 0x2cd688u: goto label_2cd688;
        case 0x2cd68cu: goto label_2cd68c;
        case 0x2cd690u: goto label_2cd690;
        case 0x2cd694u: goto label_2cd694;
        case 0x2cd698u: goto label_2cd698;
        case 0x2cd69cu: goto label_2cd69c;
        case 0x2cd6a0u: goto label_2cd6a0;
        case 0x2cd6a4u: goto label_2cd6a4;
        case 0x2cd6a8u: goto label_2cd6a8;
        case 0x2cd6acu: goto label_2cd6ac;
        case 0x2cd6b0u: goto label_2cd6b0;
        case 0x2cd6b4u: goto label_2cd6b4;
        case 0x2cd6b8u: goto label_2cd6b8;
        case 0x2cd6bcu: goto label_2cd6bc;
        case 0x2cd6c0u: goto label_2cd6c0;
        case 0x2cd6c4u: goto label_2cd6c4;
        case 0x2cd6c8u: goto label_2cd6c8;
        case 0x2cd6ccu: goto label_2cd6cc;
        case 0x2cd6d0u: goto label_2cd6d0;
        case 0x2cd6d4u: goto label_2cd6d4;
        case 0x2cd6d8u: goto label_2cd6d8;
        case 0x2cd6dcu: goto label_2cd6dc;
        case 0x2cd6e0u: goto label_2cd6e0;
        case 0x2cd6e4u: goto label_2cd6e4;
        case 0x2cd6e8u: goto label_2cd6e8;
        case 0x2cd6ecu: goto label_2cd6ec;
        case 0x2cd6f0u: goto label_2cd6f0;
        case 0x2cd6f4u: goto label_2cd6f4;
        case 0x2cd6f8u: goto label_2cd6f8;
        case 0x2cd6fcu: goto label_2cd6fc;
        case 0x2cd700u: goto label_2cd700;
        case 0x2cd704u: goto label_2cd704;
        case 0x2cd708u: goto label_2cd708;
        case 0x2cd70cu: goto label_2cd70c;
        case 0x2cd710u: goto label_2cd710;
        case 0x2cd714u: goto label_2cd714;
        case 0x2cd718u: goto label_2cd718;
        case 0x2cd71cu: goto label_2cd71c;
        case 0x2cd720u: goto label_2cd720;
        case 0x2cd724u: goto label_2cd724;
        case 0x2cd728u: goto label_2cd728;
        case 0x2cd72cu: goto label_2cd72c;
        case 0x2cd730u: goto label_2cd730;
        case 0x2cd734u: goto label_2cd734;
        case 0x2cd738u: goto label_2cd738;
        case 0x2cd73cu: goto label_2cd73c;
        case 0x2cd740u: goto label_2cd740;
        case 0x2cd744u: goto label_2cd744;
        case 0x2cd748u: goto label_2cd748;
        case 0x2cd74cu: goto label_2cd74c;
        case 0x2cd750u: goto label_2cd750;
        case 0x2cd754u: goto label_2cd754;
        case 0x2cd758u: goto label_2cd758;
        case 0x2cd75cu: goto label_2cd75c;
        case 0x2cd760u: goto label_2cd760;
        case 0x2cd764u: goto label_2cd764;
        case 0x2cd768u: goto label_2cd768;
        case 0x2cd76cu: goto label_2cd76c;
        case 0x2cd770u: goto label_2cd770;
        case 0x2cd774u: goto label_2cd774;
        case 0x2cd778u: goto label_2cd778;
        case 0x2cd77cu: goto label_2cd77c;
        case 0x2cd780u: goto label_2cd780;
        case 0x2cd784u: goto label_2cd784;
        case 0x2cd788u: goto label_2cd788;
        case 0x2cd78cu: goto label_2cd78c;
        case 0x2cd790u: goto label_2cd790;
        case 0x2cd794u: goto label_2cd794;
        case 0x2cd798u: goto label_2cd798;
        case 0x2cd79cu: goto label_2cd79c;
        case 0x2cd7a0u: goto label_2cd7a0;
        case 0x2cd7a4u: goto label_2cd7a4;
        case 0x2cd7a8u: goto label_2cd7a8;
        case 0x2cd7acu: goto label_2cd7ac;
        case 0x2cd7b0u: goto label_2cd7b0;
        case 0x2cd7b4u: goto label_2cd7b4;
        case 0x2cd7b8u: goto label_2cd7b8;
        case 0x2cd7bcu: goto label_2cd7bc;
        case 0x2cd7c0u: goto label_2cd7c0;
        case 0x2cd7c4u: goto label_2cd7c4;
        case 0x2cd7c8u: goto label_2cd7c8;
        case 0x2cd7ccu: goto label_2cd7cc;
        case 0x2cd7d0u: goto label_2cd7d0;
        case 0x2cd7d4u: goto label_2cd7d4;
        case 0x2cd7d8u: goto label_2cd7d8;
        case 0x2cd7dcu: goto label_2cd7dc;
        case 0x2cd7e0u: goto label_2cd7e0;
        case 0x2cd7e4u: goto label_2cd7e4;
        case 0x2cd7e8u: goto label_2cd7e8;
        case 0x2cd7ecu: goto label_2cd7ec;
        case 0x2cd7f0u: goto label_2cd7f0;
        case 0x2cd7f4u: goto label_2cd7f4;
        case 0x2cd7f8u: goto label_2cd7f8;
        case 0x2cd7fcu: goto label_2cd7fc;
        case 0x2cd800u: goto label_2cd800;
        case 0x2cd804u: goto label_2cd804;
        case 0x2cd808u: goto label_2cd808;
        case 0x2cd80cu: goto label_2cd80c;
        case 0x2cd810u: goto label_2cd810;
        case 0x2cd814u: goto label_2cd814;
        case 0x2cd818u: goto label_2cd818;
        case 0x2cd81cu: goto label_2cd81c;
        case 0x2cd820u: goto label_2cd820;
        case 0x2cd824u: goto label_2cd824;
        case 0x2cd828u: goto label_2cd828;
        case 0x2cd82cu: goto label_2cd82c;
        case 0x2cd830u: goto label_2cd830;
        case 0x2cd834u: goto label_2cd834;
        case 0x2cd838u: goto label_2cd838;
        case 0x2cd83cu: goto label_2cd83c;
        case 0x2cd840u: goto label_2cd840;
        case 0x2cd844u: goto label_2cd844;
        case 0x2cd848u: goto label_2cd848;
        case 0x2cd84cu: goto label_2cd84c;
        case 0x2cd850u: goto label_2cd850;
        case 0x2cd854u: goto label_2cd854;
        case 0x2cd858u: goto label_2cd858;
        case 0x2cd85cu: goto label_2cd85c;
        case 0x2cd860u: goto label_2cd860;
        case 0x2cd864u: goto label_2cd864;
        case 0x2cd868u: goto label_2cd868;
        case 0x2cd86cu: goto label_2cd86c;
        case 0x2cd870u: goto label_2cd870;
        case 0x2cd874u: goto label_2cd874;
        case 0x2cd878u: goto label_2cd878;
        case 0x2cd87cu: goto label_2cd87c;
        case 0x2cd880u: goto label_2cd880;
        case 0x2cd884u: goto label_2cd884;
        case 0x2cd888u: goto label_2cd888;
        case 0x2cd88cu: goto label_2cd88c;
        case 0x2cd890u: goto label_2cd890;
        case 0x2cd894u: goto label_2cd894;
        case 0x2cd898u: goto label_2cd898;
        case 0x2cd89cu: goto label_2cd89c;
        case 0x2cd8a0u: goto label_2cd8a0;
        case 0x2cd8a4u: goto label_2cd8a4;
        case 0x2cd8a8u: goto label_2cd8a8;
        case 0x2cd8acu: goto label_2cd8ac;
        case 0x2cd8b0u: goto label_2cd8b0;
        case 0x2cd8b4u: goto label_2cd8b4;
        case 0x2cd8b8u: goto label_2cd8b8;
        case 0x2cd8bcu: goto label_2cd8bc;
        case 0x2cd8c0u: goto label_2cd8c0;
        case 0x2cd8c4u: goto label_2cd8c4;
        case 0x2cd8c8u: goto label_2cd8c8;
        case 0x2cd8ccu: goto label_2cd8cc;
        case 0x2cd8d0u: goto label_2cd8d0;
        case 0x2cd8d4u: goto label_2cd8d4;
        case 0x2cd8d8u: goto label_2cd8d8;
        case 0x2cd8dcu: goto label_2cd8dc;
        case 0x2cd8e0u: goto label_2cd8e0;
        case 0x2cd8e4u: goto label_2cd8e4;
        case 0x2cd8e8u: goto label_2cd8e8;
        case 0x2cd8ecu: goto label_2cd8ec;
        case 0x2cd8f0u: goto label_2cd8f0;
        case 0x2cd8f4u: goto label_2cd8f4;
        case 0x2cd8f8u: goto label_2cd8f8;
        case 0x2cd8fcu: goto label_2cd8fc;
        case 0x2cd900u: goto label_2cd900;
        case 0x2cd904u: goto label_2cd904;
        case 0x2cd908u: goto label_2cd908;
        case 0x2cd90cu: goto label_2cd90c;
        case 0x2cd910u: goto label_2cd910;
        case 0x2cd914u: goto label_2cd914;
        case 0x2cd918u: goto label_2cd918;
        case 0x2cd91cu: goto label_2cd91c;
        case 0x2cd920u: goto label_2cd920;
        case 0x2cd924u: goto label_2cd924;
        case 0x2cd928u: goto label_2cd928;
        case 0x2cd92cu: goto label_2cd92c;
        case 0x2cd930u: goto label_2cd930;
        case 0x2cd934u: goto label_2cd934;
        case 0x2cd938u: goto label_2cd938;
        case 0x2cd93cu: goto label_2cd93c;
        case 0x2cd940u: goto label_2cd940;
        case 0x2cd944u: goto label_2cd944;
        case 0x2cd948u: goto label_2cd948;
        case 0x2cd94cu: goto label_2cd94c;
        case 0x2cd950u: goto label_2cd950;
        case 0x2cd954u: goto label_2cd954;
        case 0x2cd958u: goto label_2cd958;
        case 0x2cd95cu: goto label_2cd95c;
        case 0x2cd960u: goto label_2cd960;
        case 0x2cd964u: goto label_2cd964;
        case 0x2cd968u: goto label_2cd968;
        case 0x2cd96cu: goto label_2cd96c;
        case 0x2cd970u: goto label_2cd970;
        case 0x2cd974u: goto label_2cd974;
        case 0x2cd978u: goto label_2cd978;
        case 0x2cd97cu: goto label_2cd97c;
        case 0x2cd980u: goto label_2cd980;
        case 0x2cd984u: goto label_2cd984;
        case 0x2cd988u: goto label_2cd988;
        case 0x2cd98cu: goto label_2cd98c;
        case 0x2cd990u: goto label_2cd990;
        case 0x2cd994u: goto label_2cd994;
        case 0x2cd998u: goto label_2cd998;
        case 0x2cd99cu: goto label_2cd99c;
        case 0x2cd9a0u: goto label_2cd9a0;
        case 0x2cd9a4u: goto label_2cd9a4;
        case 0x2cd9a8u: goto label_2cd9a8;
        case 0x2cd9acu: goto label_2cd9ac;
        case 0x2cd9b0u: goto label_2cd9b0;
        case 0x2cd9b4u: goto label_2cd9b4;
        case 0x2cd9b8u: goto label_2cd9b8;
        case 0x2cd9bcu: goto label_2cd9bc;
        case 0x2cd9c0u: goto label_2cd9c0;
        case 0x2cd9c4u: goto label_2cd9c4;
        case 0x2cd9c8u: goto label_2cd9c8;
        case 0x2cd9ccu: goto label_2cd9cc;
        case 0x2cd9d0u: goto label_2cd9d0;
        case 0x2cd9d4u: goto label_2cd9d4;
        case 0x2cd9d8u: goto label_2cd9d8;
        case 0x2cd9dcu: goto label_2cd9dc;
        case 0x2cd9e0u: goto label_2cd9e0;
        case 0x2cd9e4u: goto label_2cd9e4;
        case 0x2cd9e8u: goto label_2cd9e8;
        case 0x2cd9ecu: goto label_2cd9ec;
        case 0x2cd9f0u: goto label_2cd9f0;
        case 0x2cd9f4u: goto label_2cd9f4;
        case 0x2cd9f8u: goto label_2cd9f8;
        case 0x2cd9fcu: goto label_2cd9fc;
        case 0x2cda00u: goto label_2cda00;
        case 0x2cda04u: goto label_2cda04;
        case 0x2cda08u: goto label_2cda08;
        case 0x2cda0cu: goto label_2cda0c;
        case 0x2cda10u: goto label_2cda10;
        case 0x2cda14u: goto label_2cda14;
        case 0x2cda18u: goto label_2cda18;
        case 0x2cda1cu: goto label_2cda1c;
        case 0x2cda20u: goto label_2cda20;
        case 0x2cda24u: goto label_2cda24;
        case 0x2cda28u: goto label_2cda28;
        case 0x2cda2cu: goto label_2cda2c;
        case 0x2cda30u: goto label_2cda30;
        case 0x2cda34u: goto label_2cda34;
        case 0x2cda38u: goto label_2cda38;
        case 0x2cda3cu: goto label_2cda3c;
        case 0x2cda40u: goto label_2cda40;
        case 0x2cda44u: goto label_2cda44;
        case 0x2cda48u: goto label_2cda48;
        case 0x2cda4cu: goto label_2cda4c;
        case 0x2cda50u: goto label_2cda50;
        case 0x2cda54u: goto label_2cda54;
        case 0x2cda58u: goto label_2cda58;
        case 0x2cda5cu: goto label_2cda5c;
        case 0x2cda60u: goto label_2cda60;
        case 0x2cda64u: goto label_2cda64;
        case 0x2cda68u: goto label_2cda68;
        case 0x2cda6cu: goto label_2cda6c;
        case 0x2cda70u: goto label_2cda70;
        case 0x2cda74u: goto label_2cda74;
        case 0x2cda78u: goto label_2cda78;
        case 0x2cda7cu: goto label_2cda7c;
        case 0x2cda80u: goto label_2cda80;
        case 0x2cda84u: goto label_2cda84;
        case 0x2cda88u: goto label_2cda88;
        case 0x2cda8cu: goto label_2cda8c;
        case 0x2cda90u: goto label_2cda90;
        case 0x2cda94u: goto label_2cda94;
        case 0x2cda98u: goto label_2cda98;
        case 0x2cda9cu: goto label_2cda9c;
        case 0x2cdaa0u: goto label_2cdaa0;
        case 0x2cdaa4u: goto label_2cdaa4;
        case 0x2cdaa8u: goto label_2cdaa8;
        case 0x2cdaacu: goto label_2cdaac;
        case 0x2cdab0u: goto label_2cdab0;
        case 0x2cdab4u: goto label_2cdab4;
        case 0x2cdab8u: goto label_2cdab8;
        case 0x2cdabcu: goto label_2cdabc;
        case 0x2cdac0u: goto label_2cdac0;
        case 0x2cdac4u: goto label_2cdac4;
        case 0x2cdac8u: goto label_2cdac8;
        case 0x2cdaccu: goto label_2cdacc;
        case 0x2cdad0u: goto label_2cdad0;
        case 0x2cdad4u: goto label_2cdad4;
        case 0x2cdad8u: goto label_2cdad8;
        case 0x2cdadcu: goto label_2cdadc;
        case 0x2cdae0u: goto label_2cdae0;
        case 0x2cdae4u: goto label_2cdae4;
        case 0x2cdae8u: goto label_2cdae8;
        case 0x2cdaecu: goto label_2cdaec;
        case 0x2cdaf0u: goto label_2cdaf0;
        case 0x2cdaf4u: goto label_2cdaf4;
        case 0x2cdaf8u: goto label_2cdaf8;
        case 0x2cdafcu: goto label_2cdafc;
        case 0x2cdb00u: goto label_2cdb00;
        case 0x2cdb04u: goto label_2cdb04;
        case 0x2cdb08u: goto label_2cdb08;
        case 0x2cdb0cu: goto label_2cdb0c;
        case 0x2cdb10u: goto label_2cdb10;
        case 0x2cdb14u: goto label_2cdb14;
        case 0x2cdb18u: goto label_2cdb18;
        case 0x2cdb1cu: goto label_2cdb1c;
        case 0x2cdb20u: goto label_2cdb20;
        case 0x2cdb24u: goto label_2cdb24;
        case 0x2cdb28u: goto label_2cdb28;
        case 0x2cdb2cu: goto label_2cdb2c;
        case 0x2cdb30u: goto label_2cdb30;
        case 0x2cdb34u: goto label_2cdb34;
        case 0x2cdb38u: goto label_2cdb38;
        case 0x2cdb3cu: goto label_2cdb3c;
        case 0x2cdb40u: goto label_2cdb40;
        case 0x2cdb44u: goto label_2cdb44;
        case 0x2cdb48u: goto label_2cdb48;
        case 0x2cdb4cu: goto label_2cdb4c;
        case 0x2cdb50u: goto label_2cdb50;
        case 0x2cdb54u: goto label_2cdb54;
        case 0x2cdb58u: goto label_2cdb58;
        case 0x2cdb5cu: goto label_2cdb5c;
        case 0x2cdb60u: goto label_2cdb60;
        case 0x2cdb64u: goto label_2cdb64;
        case 0x2cdb68u: goto label_2cdb68;
        case 0x2cdb6cu: goto label_2cdb6c;
        case 0x2cdb70u: goto label_2cdb70;
        case 0x2cdb74u: goto label_2cdb74;
        case 0x2cdb78u: goto label_2cdb78;
        case 0x2cdb7cu: goto label_2cdb7c;
        case 0x2cdb80u: goto label_2cdb80;
        case 0x2cdb84u: goto label_2cdb84;
        case 0x2cdb88u: goto label_2cdb88;
        case 0x2cdb8cu: goto label_2cdb8c;
        case 0x2cdb90u: goto label_2cdb90;
        case 0x2cdb94u: goto label_2cdb94;
        case 0x2cdb98u: goto label_2cdb98;
        case 0x2cdb9cu: goto label_2cdb9c;
        case 0x2cdba0u: goto label_2cdba0;
        case 0x2cdba4u: goto label_2cdba4;
        case 0x2cdba8u: goto label_2cdba8;
        case 0x2cdbacu: goto label_2cdbac;
        case 0x2cdbb0u: goto label_2cdbb0;
        case 0x2cdbb4u: goto label_2cdbb4;
        case 0x2cdbb8u: goto label_2cdbb8;
        case 0x2cdbbcu: goto label_2cdbbc;
        case 0x2cdbc0u: goto label_2cdbc0;
        case 0x2cdbc4u: goto label_2cdbc4;
        case 0x2cdbc8u: goto label_2cdbc8;
        case 0x2cdbccu: goto label_2cdbcc;
        case 0x2cdbd0u: goto label_2cdbd0;
        case 0x2cdbd4u: goto label_2cdbd4;
        case 0x2cdbd8u: goto label_2cdbd8;
        case 0x2cdbdcu: goto label_2cdbdc;
        case 0x2cdbe0u: goto label_2cdbe0;
        case 0x2cdbe4u: goto label_2cdbe4;
        case 0x2cdbe8u: goto label_2cdbe8;
        case 0x2cdbecu: goto label_2cdbec;
        case 0x2cdbf0u: goto label_2cdbf0;
        case 0x2cdbf4u: goto label_2cdbf4;
        case 0x2cdbf8u: goto label_2cdbf8;
        case 0x2cdbfcu: goto label_2cdbfc;
        case 0x2cdc00u: goto label_2cdc00;
        case 0x2cdc04u: goto label_2cdc04;
        case 0x2cdc08u: goto label_2cdc08;
        case 0x2cdc0cu: goto label_2cdc0c;
        case 0x2cdc10u: goto label_2cdc10;
        case 0x2cdc14u: goto label_2cdc14;
        case 0x2cdc18u: goto label_2cdc18;
        case 0x2cdc1cu: goto label_2cdc1c;
        case 0x2cdc20u: goto label_2cdc20;
        case 0x2cdc24u: goto label_2cdc24;
        case 0x2cdc28u: goto label_2cdc28;
        case 0x2cdc2cu: goto label_2cdc2c;
        case 0x2cdc30u: goto label_2cdc30;
        case 0x2cdc34u: goto label_2cdc34;
        case 0x2cdc38u: goto label_2cdc38;
        case 0x2cdc3cu: goto label_2cdc3c;
        case 0x2cdc40u: goto label_2cdc40;
        case 0x2cdc44u: goto label_2cdc44;
        case 0x2cdc48u: goto label_2cdc48;
        case 0x2cdc4cu: goto label_2cdc4c;
        case 0x2cdc50u: goto label_2cdc50;
        case 0x2cdc54u: goto label_2cdc54;
        case 0x2cdc58u: goto label_2cdc58;
        case 0x2cdc5cu: goto label_2cdc5c;
        case 0x2cdc60u: goto label_2cdc60;
        case 0x2cdc64u: goto label_2cdc64;
        case 0x2cdc68u: goto label_2cdc68;
        case 0x2cdc6cu: goto label_2cdc6c;
        case 0x2cdc70u: goto label_2cdc70;
        case 0x2cdc74u: goto label_2cdc74;
        case 0x2cdc78u: goto label_2cdc78;
        case 0x2cdc7cu: goto label_2cdc7c;
        case 0x2cdc80u: goto label_2cdc80;
        case 0x2cdc84u: goto label_2cdc84;
        case 0x2cdc88u: goto label_2cdc88;
        case 0x2cdc8cu: goto label_2cdc8c;
        case 0x2cdc90u: goto label_2cdc90;
        case 0x2cdc94u: goto label_2cdc94;
        case 0x2cdc98u: goto label_2cdc98;
        case 0x2cdc9cu: goto label_2cdc9c;
        case 0x2cdca0u: goto label_2cdca0;
        case 0x2cdca4u: goto label_2cdca4;
        default: break;
    }

    ctx->pc = 0x2cd498u;

label_2cd498:
    // 0x2cd498: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2cd498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2cd49c:
    // 0x2cd49c: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x2cd49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2cd4a0:
    // 0x2cd4a0: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2cd4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_2cd4a4:
    // 0x2cd4a4: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2cd4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_2cd4a8:
    // 0x2cd4a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cd4a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd4ac:
    // 0x2cd4ac: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2cd4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
label_2cd4b0:
    // 0x2cd4b0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2cd4b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2cd4b4:
    // 0x2cd4b4: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2cd4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
label_2cd4b8:
    // 0x2cd4b8: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2cd4b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2cd4bc:
    // 0x2cd4bc: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2cd4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_2cd4c0:
    // 0x2cd4c0: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2cd4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_2cd4c4:
    // 0x2cd4c4: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2cd4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_2cd4c8:
    // 0x2cd4c8: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x2cd4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
label_2cd4cc:
    // 0x2cd4cc: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2cd4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_2cd4d0:
    // 0x2cd4d0: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2cd4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
label_2cd4d4:
    // 0x2cd4d4: 0xafab0064  sw          $t3, 0x64($sp)
    ctx->pc = 0x2cd4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 11));
label_2cd4d8:
    // 0x2cd4d8: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x2cd4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
label_2cd4dc:
    // 0x2cd4dc: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2cd4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_2cd4e0:
    // 0x2cd4e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2cd4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cd4e4:
    // 0x2cd4e4: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x2cd4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_2cd4e8:
    // 0x2cd4e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cd4ec:
    // 0x2cd4ec: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x2cd4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
label_2cd4f0:
    // 0x2cd4f0: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x2cd4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_2cd4f4:
    // 0x2cd4f4: 0xafaa0060  sw          $t2, 0x60($sp)
    ctx->pc = 0x2cd4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 10));
label_2cd4f8:
    // 0x2cd4f8: 0xc0b3840  jal         func_2CE100
label_2cd4fc:
    if (ctx->pc == 0x2CD4FCu) {
        ctx->pc = 0x2CD4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4F8u;
        // 0x2cd4fc: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD500u;
        goto label_2cd500;
    }
    ctx->pc = 0x2CD4F8u;
    SET_GPR_U32(ctx, 31, 0x2CD500u);
    ctx->pc = 0x2CD4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD4F8u;
    // 0x2cd4fc: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE100u, 0x2CD4F8u, 0x2CD500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD500u;
label_2cd500:
    // 0x2cd500: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cd500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd504:
    // 0x2cd504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cd504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cd508:
    // 0x2cd508: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2cd508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_2cd50c:
    // 0x2cd50c: 0x12a00025  beqz        $s5, . + 4 + (0x25 << 2)
label_2cd510:
    if (ctx->pc == 0x2CD510u) {
        ctx->pc = 0x2CD510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD50Cu;
        // 0x2cd510: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD514u;
        goto label_2cd514;
    }
    ctx->pc = 0x2CD50Cu;
    {
        const bool branch_taken_0x2cd50c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD50Cu;
        // 0x2cd510: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd50c) {
            ctx->pc = 0x2CD5A4u;
            goto label_2cd5a4;
        }
    }
    ctx->pc = 0x2CD514u;
label_2cd514:
    // 0x2cd514: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cd514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2cd518:
    // 0x2cd518: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2cd51c:
    if (ctx->pc == 0x2CD51Cu) {
        ctx->pc = 0x2CD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD518u;
        // 0x2cd51c: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD520u;
        goto label_2cd520;
    }
    ctx->pc = 0x2CD518u;
    {
        const bool branch_taken_0x2cd518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd518) {
            ctx->pc = 0x2CD51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD518u;
            // 0x2cd51c: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD534u;
            goto label_2cd534;
        }
    }
    ctx->pc = 0x2CD520u;
label_2cd520:
    // 0x2cd520: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2cd520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cd524:
    // 0x2cd524: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x2cd524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
label_2cd528:
    // 0x2cd528: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_2cd52c:
    if (ctx->pc == 0x2CD52Cu) {
        ctx->pc = 0x2CD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD528u;
        // 0x2cd52c: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD530u;
        goto label_2cd530;
    }
    ctx->pc = 0x2CD528u;
    {
        const bool branch_taken_0x2cd528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd528) {
            ctx->pc = 0x2CD52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD528u;
            // 0x2cd52c: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD5A8u;
            goto label_2cd5a8;
        }
    }
    ctx->pc = 0x2CD530u;
label_2cd530:
    // 0x2cd530: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2cd530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cd534:
    // 0x2cd534: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cd534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cd538:
    // 0x2cd538: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2cd538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2cd53c:
    // 0x2cd53c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cd53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cd540:
    // 0x2cd540: 0x40f809  jalr        $v0
label_2cd544:
    if (ctx->pc == 0x2CD544u) {
        ctx->pc = 0x2CD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD540u;
        // 0x2cd544: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD548u;
        goto label_2cd548;
    }
    ctx->pc = 0x2CD540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD548u);
        ctx->pc = 0x2CD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD540u;
        // 0x2cd544: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD540u, 0x2CD548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD548u;
label_2cd548:
    // 0x2cd548: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd54c:
    // 0x2cd54c: 0x1600016d  bnez        $s0, . + 4 + (0x16D << 2)
label_2cd550:
    if (ctx->pc == 0x2CD550u) {
        ctx->pc = 0x2CD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD54Cu;
        // 0x2cd550: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD554u;
        goto label_2cd554;
    }
    ctx->pc = 0x2CD54Cu;
    {
        const bool branch_taken_0x2cd54c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD54Cu;
        // 0x2cd550: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd54c) {
            ctx->pc = 0x2CDB04u;
            goto label_2cdb04;
        }
    }
    ctx->pc = 0x2CD554u;
label_2cd554:
    // 0x2cd554: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x2cd554u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2cd558:
    // 0x2cd558: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cd558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2cd55c:
    // 0x2cd55c: 0x8fa90044  lw          $t1, 0x44($sp)
    ctx->pc = 0x2cd55cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2cd560:
    // 0x2cd560: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x2cd560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_2cd564:
    // 0x2cd564: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x2cd564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_2cd568:
    // 0x2cd568: 0xc0b372a  jal         func_2CDCA8
label_2cd56c:
    if (ctx->pc == 0x2CD56Cu) {
        ctx->pc = 0x2CD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD568u;
        // 0x2cd56c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD570u;
        goto label_2cd570;
    }
    ctx->pc = 0x2CD568u;
    SET_GPR_U32(ctx, 31, 0x2CD570u);
    ctx->pc = 0x2CD56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD568u;
    // 0x2cd56c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDCA8u, 0x2CD568u, 0x2CD570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD570u;
label_2cd570:
    // 0x2cd570: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_2cd574:
    if (ctx->pc == 0x2CD574u) {
        ctx->pc = 0x2CD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD570u;
        // 0x2cd574: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD578u;
        goto label_2cd578;
    }
    ctx->pc = 0x2CD570u;
    {
        const bool branch_taken_0x2cd570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd570) {
            ctx->pc = 0x2CD574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD570u;
            // 0x2cd574: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD5A8u;
            goto label_2cd5a8;
        }
    }
    ctx->pc = 0x2CD578u;
label_2cd578:
    // 0x2cd578: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2cd578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cd57c:
    // 0x2cd57c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2cd57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_2cd580:
    // 0x2cd580: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cd584:
    if (ctx->pc == 0x2CD584u) {
        ctx->pc = 0x2CD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD580u;
        // 0x2cd584: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD588u;
        goto label_2cd588;
    }
    ctx->pc = 0x2CD580u;
    {
        const bool branch_taken_0x2cd580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD580u;
        // 0x2cd584: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd580) {
            ctx->pc = 0x2CD5A4u;
            goto label_2cd5a4;
        }
    }
    ctx->pc = 0x2CD588u;
label_2cd588:
    // 0x2cd588: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x2cd588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cd58c:
    // 0x2cd58c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2cd58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2cd590:
    // 0x2cd590: 0xc0b3c28  jal         func_2CF0A0
label_2cd594:
    if (ctx->pc == 0x2CD594u) {
        ctx->pc = 0x2CD594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD590u;
        // 0x2cd594: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD598u;
        goto label_2cd598;
    }
    ctx->pc = 0x2CD590u;
    SET_GPR_U32(ctx, 31, 0x2CD598u);
    ctx->pc = 0x2CD594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD590u;
    // 0x2cd594: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF0A0u, 0x2CD590u, 0x2CD598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD598u;
label_2cd598:
    // 0x2cd598: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd59c:
    // 0x2cd59c: 0x56000159  bnel        $s0, $zero, . + 4 + (0x159 << 2)
label_2cd5a0:
    if (ctx->pc == 0x2CD5A0u) {
        ctx->pc = 0x2CD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD59Cu;
        // 0x2cd5a0: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD5A4u;
        goto label_2cd5a4;
    }
    ctx->pc = 0x2CD59Cu;
    {
        const bool branch_taken_0x2cd59c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd59c) {
            ctx->pc = 0x2CD5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD59Cu;
            // 0x2cd5a0: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDB04u;
            goto label_2cdb04;
        }
    }
    ctx->pc = 0x2CD5A4u;
label_2cd5a4:
    // 0x2cd5a4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2cd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2cd5a8:
    // 0x2cd5a8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2cd5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_2cd5ac:
    // 0x2cd5ac: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2cd5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2cd5b0:
    // 0x2cd5b0: 0x24848540  addiu       $a0, $a0, -0x7AC0
    ctx->pc = 0x2cd5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935872));
label_2cd5b4:
    // 0x2cd5b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cd5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cd5b8:
    // 0x2cd5b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cd5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cd5bc:
    // 0x2cd5bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cd5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd5c0:
    // 0x2cd5c0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_2cd5c4:
    if (ctx->pc == 0x2CD5C4u) {
        ctx->pc = 0x2CD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5C0u;
        // 0x2cd5c4: 0x8fa80040  lw          $t0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD5C8u;
        goto label_2cd5c8;
    }
    ctx->pc = 0x2CD5C0u;
    {
        const bool branch_taken_0x2cd5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5C0u;
        // 0x2cd5c4: 0x8fa80040  lw          $t0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5c0) {
            ctx->pc = 0x2CD5D0u;
            goto label_2cd5d0;
        }
    }
    ctx->pc = 0x2CD5C8u;
label_2cd5c8:
    // 0x2cd5c8: 0x100001aa  b           . + 4 + (0x1AA << 2)
label_2cd5cc:
    if (ctx->pc == 0x2CD5CCu) {
        ctx->pc = 0x2CD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5C8u;
        // 0x2cd5cc: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD5D0u;
        goto label_2cd5d0;
    }
    ctx->pc = 0x2CD5C8u;
    {
        const bool branch_taken_0x2cd5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5C8u;
        // 0x2cd5cc: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5c8) {
            ctx->pc = 0x2CDC74u;
            goto label_2cdc74;
        }
    }
    ctx->pc = 0x2CD5D0u;
label_2cd5d0:
    // 0x2cd5d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cd5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2cd5d4:
    // 0x2cd5d4: 0x8fa90044  lw          $t1, 0x44($sp)
    ctx->pc = 0x2cd5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2cd5d8:
    // 0x2cd5d8: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x2cd5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_2cd5dc:
    // 0x2cd5dc: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x2cd5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_2cd5e0:
    // 0x2cd5e0: 0xc0b372a  jal         func_2CDCA8
label_2cd5e4:
    if (ctx->pc == 0x2CD5E4u) {
        ctx->pc = 0x2CD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5E0u;
        // 0x2cd5e4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD5E8u;
        goto label_2cd5e8;
    }
    ctx->pc = 0x2CD5E0u;
    SET_GPR_U32(ctx, 31, 0x2CD5E8u);
    ctx->pc = 0x2CD5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD5E0u;
    // 0x2cd5e4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDCA8u, 0x2CD5E0u, 0x2CD5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5E8u;
label_2cd5e8:
    // 0x2cd5e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd5ec:
    // 0x2cd5ec: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_2cd5f0:
    if (ctx->pc == 0x2CD5F0u) {
        ctx->pc = 0x2CD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5ECu;
        // 0x2cd5f0: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD5F4u;
        goto label_2cd5f4;
    }
    ctx->pc = 0x2CD5ECu;
    {
        const bool branch_taken_0x2cd5ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5ECu;
        // 0x2cd5f0: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5ec) {
            ctx->pc = 0x2CD650u;
            goto label_2cd650;
        }
    }
    ctx->pc = 0x2CD5F4u;
label_2cd5f4:
    // 0x2cd5f4: 0x16020014  bne         $s0, $v0, . + 4 + (0x14 << 2)
label_2cd5f8:
    if (ctx->pc == 0x2CD5F8u) {
        ctx->pc = 0x2CD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5F4u;
        // 0x2cd5f8: 0x8fa60068  lw          $a2, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD5FCu;
        goto label_2cd5fc;
    }
    ctx->pc = 0x2CD5F4u;
    {
        const bool branch_taken_0x2cd5f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5F4u;
        // 0x2cd5f8: 0x8fa60068  lw          $a2, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5f4) {
            ctx->pc = 0x2CD648u;
            goto label_2cd648;
        }
    }
    ctx->pc = 0x2CD5FCu;
label_2cd5fc:
    // 0x2cd5fc: 0x30c20800  andi        $v0, $a2, 0x800
    ctx->pc = 0x2cd5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
label_2cd600:
    // 0x2cd600: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2cd604:
    if (ctx->pc == 0x2CD604u) {
        ctx->pc = 0x2CD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD600u;
        // 0x2cd604: 0x8fa70040  lw          $a3, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD608u;
        goto label_2cd608;
    }
    ctx->pc = 0x2CD600u;
    {
        const bool branch_taken_0x2cd600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD600u;
        // 0x2cd604: 0x8fa70040  lw          $a3, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd600) {
            ctx->pc = 0x2CD648u;
            goto label_2cd648;
        }
    }
    ctx->pc = 0x2CD608u;
label_2cd608:
    // 0x2cd608: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cd608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2cd60c:
    // 0x2cd60c: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x2cd60cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2cd610:
    // 0x2cd610: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2cd610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2cd614:
    // 0x2cd614: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x2cd614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2cd618:
    // 0x2cd618: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cd618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cd61c:
    // 0x2cd61c: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x2cd61cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2cd620:
    // 0x2cd620: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2cd620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cd624:
    // 0x2cd624: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x2cd624u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2cd628:
    // 0x2cd628: 0xc0b37ba  jal         func_2CDEE8
label_2cd62c:
    if (ctx->pc == 0x2CD62Cu) {
        ctx->pc = 0x2CD62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD628u;
        // 0x2cd62c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD630u;
        goto label_2cd630;
    }
    ctx->pc = 0x2CD628u;
    SET_GPR_U32(ctx, 31, 0x2CD630u);
    ctx->pc = 0x2CD62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD628u;
    // 0x2cd62c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDEE8u, 0x2CD628u, 0x2CD630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD630u;
label_2cd630:
    // 0x2cd630: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cd630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cd634:
    // 0x2cd634: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2cd634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2cd638:
    // 0x2cd638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd63c:
    // 0x2cd63c: 0x10000134  b           . + 4 + (0x134 << 2)
label_2cd640:
    if (ctx->pc == 0x2CD640u) {
        ctx->pc = 0x2CD640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD63Cu;
        // 0x2cd640: 0x8fa80064  lw          $t0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD644u;
        goto label_2cd644;
    }
    ctx->pc = 0x2CD63Cu;
    {
        const bool branch_taken_0x2cd63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD63Cu;
        // 0x2cd640: 0x8fa80064  lw          $t0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd63c) {
            ctx->pc = 0x2CDB10u;
            goto label_2cdb10;
        }
    }
    ctx->pc = 0x2CD644u;
label_2cd644:
    // 0x2cd644: 0x0  nop
    ctx->pc = 0x2cd644u;
    // NOP
label_2cd648:
    // 0x2cd648: 0x1220012e  beqz        $s1, . + 4 + (0x12E << 2)
label_2cd64c:
    if (ctx->pc == 0x2CD64Cu) {
        ctx->pc = 0x2CD64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD648u;
        // 0x2cd64c: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD650u;
        goto label_2cd650;
    }
    ctx->pc = 0x2CD648u;
    {
        const bool branch_taken_0x2cd648 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD648u;
        // 0x2cd64c: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd648) {
            ctx->pc = 0x2CDB04u;
            goto label_2cdb04;
        }
    }
    ctx->pc = 0x2CD650u;
label_2cd650:
    // 0x2cd650: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x2cd650u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cd654:
    // 0x2cd654: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
label_2cd658:
    if (ctx->pc == 0x2CD658u) {
        ctx->pc = 0x2CD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD654u;
        // 0x2cd658: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD65Cu;
        goto label_2cd65c;
    }
    ctx->pc = 0x2CD654u;
    {
        const bool branch_taken_0x2cd654 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD654u;
        // 0x2cd658: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd654) {
            ctx->pc = 0x2CD66Cu;
            goto label_2cd66c;
        }
    }
    ctx->pc = 0x2CD65Cu;
label_2cd65c:
    // 0x2cd65c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2cd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2cd660:
    // 0x2cd660: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2cd660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2cd664:
    // 0x2cd664: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2cd664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_2cd668:
    // 0x2cd668: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2cd66c:
    // 0x2cd66c: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x2cd66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_2cd670:
    // 0x2cd670: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2cd670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2cd674:
    // 0x2cd674: 0x306201ff  andi        $v0, $v1, 0x1FF
    ctx->pc = 0x2cd674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
label_2cd678:
    // 0x2cd678: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2cd678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd67c:
    // 0x2cd67c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2cd67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2cd680:
    // 0x2cd680: 0x10440117  beq         $v0, $a0, . + 4 + (0x117 << 2)
label_2cd684:
    if (ctx->pc == 0x2CD684u) {
        ctx->pc = 0x2CD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD680u;
        // 0x2cd684: 0x678823  subu        $s1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD688u;
        goto label_2cd688;
    }
    ctx->pc = 0x2CD680u;
    {
        const bool branch_taken_0x2cd680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD680u;
        // 0x2cd684: 0x678823  subu        $s1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd680) {
            ctx->pc = 0x2CDAE0u;
            goto label_2cdae0;
        }
    }
    ctx->pc = 0x2CD688u;
label_2cd688:
    // 0x2cd688: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2cd688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2cd68c:
    // 0x2cd68c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cd68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2cd690:
    // 0x2cd690: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2cd690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2cd694:
    // 0x2cd694: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
label_2cd698:
    if (ctx->pc == 0x2CD698u) {
        ctx->pc = 0x2CD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD694u;
        // 0x2cd698: 0x30c34420  andi        $v1, $a2, 0x4420 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)17440);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD69Cu;
        goto label_2cd69c;
    }
    ctx->pc = 0x2CD694u;
    {
        const bool branch_taken_0x2cd694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD694u;
        // 0x2cd698: 0x30c34420  andi        $v1, $a2, 0x4420 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)17440);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd694) {
            ctx->pc = 0x2CD724u;
            goto label_2cd724;
        }
    }
    ctx->pc = 0x2CD69Cu;
label_2cd69c:
    // 0x2cd69c: 0x24024420  addiu       $v0, $zero, 0x4420
    ctx->pc = 0x2cd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17440));
label_2cd6a0:
    // 0x2cd6a0: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
label_2cd6a4:
    if (ctx->pc == 0x2CD6A4u) {
        ctx->pc = 0x2CD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6A0u;
        // 0x2cd6a4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD6A8u;
        goto label_2cd6a8;
    }
    ctx->pc = 0x2CD6A0u;
    {
        const bool branch_taken_0x2cd6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cd6a0) {
            ctx->pc = 0x2CD6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD6A0u;
            // 0x2cd6a4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD700u;
            goto label_2cd700;
        }
    }
    ctx->pc = 0x2CD6A8u;
label_2cd6a8:
    // 0x2cd6a8: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2cd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2cd6ac:
    // 0x2cd6ac: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2cd6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2cd6b0:
    // 0x2cd6b0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2cd6b4:
    if (ctx->pc == 0x2CD6B4u) {
        ctx->pc = 0x2CD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6B0u;
        // 0x2cd6b4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD6B8u;
        goto label_2cd6b8;
    }
    ctx->pc = 0x2CD6B0u;
    {
        const bool branch_taken_0x2cd6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6b0) {
            ctx->pc = 0x2CD6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD6B0u;
            // 0x2cd6b4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD700u;
            goto label_2cd700;
        }
    }
    ctx->pc = 0x2CD6B8u;
label_2cd6b8:
    // 0x2cd6b8: 0x30c200df  andi        $v0, $a2, 0xDF
    ctx->pc = 0x2cd6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)223);
label_2cd6bc:
    // 0x2cd6bc: 0x54820010  bnel        $a0, $v0, . + 4 + (0x10 << 2)
label_2cd6c0:
    if (ctx->pc == 0x2CD6C0u) {
        ctx->pc = 0x2CD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6BCu;
        // 0x2cd6c0: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD6C4u;
        goto label_2cd6c4;
    }
    ctx->pc = 0x2CD6BCu;
    {
        const bool branch_taken_0x2cd6bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cd6bc) {
            ctx->pc = 0x2CD6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD6BCu;
            // 0x2cd6c0: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD700u;
            goto label_2cd700;
        }
    }
    ctx->pc = 0x2CD6C4u;
label_2cd6c4:
    // 0x2cd6c4: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x2cd6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2cd6c8:
    // 0x2cd6c8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2cd6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2cd6cc:
    // 0x2cd6cc: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x2cd6ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2cd6d0:
    // 0x2cd6d0: 0x26840014  addiu       $a0, $s4, 0x14
    ctx->pc = 0x2cd6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_2cd6d4:
    // 0x2cd6d4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2cd6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2cd6d8:
    // 0x2cd6d8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2cd6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cd6dc:
    // 0x2cd6dc: 0x27a90054  addiu       $t1, $sp, 0x54
    ctx->pc = 0x2cd6dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_2cd6e0:
    // 0x2cd6e0: 0xc0b3526  jal         func_2CD498
label_2cd6e4:
    if (ctx->pc == 0x2CD6E4u) {
        ctx->pc = 0x2CD6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6E0u;
        // 0x2cd6e4: 0x27ab0050  addiu       $t3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD6E8u;
        goto label_2cd6e8;
    }
    ctx->pc = 0x2CD6E0u;
    SET_GPR_U32(ctx, 31, 0x2CD6E8u);
    ctx->pc = 0x2CD6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD6E0u;
    // 0x2cd6e4: 0x27ab0050  addiu       $t3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD498u;
    goto label_2cd498;
    ctx->pc = 0x2CD6E8u;
label_2cd6e8:
    // 0x2cd6e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd6ec:
    // 0x2cd6ec: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2cd6f0:
    if (ctx->pc == 0x2CD6F0u) {
        ctx->pc = 0x2CD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6ECu;
        // 0x2cd6f0: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD6F4u;
        goto label_2cd6f4;
    }
    ctx->pc = 0x2CD6ECu;
    {
        const bool branch_taken_0x2cd6ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6ECu;
        // 0x2cd6f0: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6ec) {
            ctx->pc = 0x2CD720u;
            goto label_2cd720;
        }
    }
    ctx->pc = 0x2CD6F4u;
label_2cd6f4:
    // 0x2cd6f4: 0x10000104  b           . + 4 + (0x104 << 2)
label_2cd6f8:
    if (ctx->pc == 0x2CD6F8u) {
        ctx->pc = 0x2CD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6F4u;
        // 0x2cd6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD6FCu;
        goto label_2cd6fc;
    }
    ctx->pc = 0x2CD6F4u;
    {
        const bool branch_taken_0x2cd6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6F4u;
        // 0x2cd6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6f4) {
            ctx->pc = 0x2CDB08u;
            goto label_2cdb08;
        }
    }
    ctx->pc = 0x2CD6FCu;
label_2cd6fc:
    // 0x2cd6fc: 0x0  nop
    ctx->pc = 0x2cd6fcu;
    // NOP
label_2cd700:
    // 0x2cd700: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2cd700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_2cd704:
    // 0x2cd704: 0x5440015b  bnel        $v0, $zero, . + 4 + (0x15B << 2)
label_2cd708:
    if (ctx->pc == 0x2CD708u) {
        ctx->pc = 0x2CD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD704u;
        // 0x2cd708: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD70Cu;
        goto label_2cd70c;
    }
    ctx->pc = 0x2CD704u;
    {
        const bool branch_taken_0x2cd704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd704) {
            ctx->pc = 0x2CD708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD704u;
            // 0x2cd708: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC74u;
            goto label_2cdc74;
        }
    }
    ctx->pc = 0x2CD70Cu;
label_2cd70c:
    // 0x2cd70c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2cd70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2cd710:
    // 0x2cd710: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cd710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cd714:
    // 0x2cd714: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x2cd714u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2cd718:
    // 0x2cd718: 0x100000fd  b           . + 4 + (0xFD << 2)
label_2cd71c:
    if (ctx->pc == 0x2CD71Cu) {
        ctx->pc = 0x2CD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD718u;
        // 0x2cd71c: 0x24040807  addiu       $a0, $zero, 0x807 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD720u;
        goto label_2cd720;
    }
    ctx->pc = 0x2CD718u;
    {
        const bool branch_taken_0x2cd718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD718u;
        // 0x2cd71c: 0x24040807  addiu       $a0, $zero, 0x807 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd718) {
            ctx->pc = 0x2CDB10u;
            goto label_2cdb10;
        }
    }
    ctx->pc = 0x2CD720u;
label_2cd720:
    // 0x2cd720: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cd720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2cd724:
    // 0x2cd724: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x2cd724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_2cd728:
    // 0x2cd728: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
label_2cd72c:
    if (ctx->pc == 0x2CD72Cu) {
        ctx->pc = 0x2CD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD728u;
        // 0x2cd72c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD730u;
        goto label_2cd730;
    }
    ctx->pc = 0x2CD728u;
    {
        const bool branch_taken_0x2cd728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD728u;
        // 0x2cd72c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd728) {
            ctx->pc = 0x2CDB30u;
            goto label_2cdb30;
        }
    }
    ctx->pc = 0x2CD730u;
label_2cd730:
    // 0x2cd730: 0xc0b2748  jal         func_2C9D20
label_2cd734:
    if (ctx->pc == 0x2CD734u) {
        ctx->pc = 0x2CD734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD730u;
        // 0x2cd734: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD738u;
        goto label_2cd738;
    }
    ctx->pc = 0x2CD730u;
    SET_GPR_U32(ctx, 31, 0x2CD738u);
    ctx->pc = 0x2CD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD730u;
    // 0x2cd734: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D20u, 0x2CD730u, 0x2CD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD738u;
label_2cd738:
    // 0x2cd738: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2cd738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd73c:
    // 0x2cd73c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2cd73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2cd740:
    // 0x2cd740: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x2cd740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2cd744:
    // 0x2cd744: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_2cd748:
    if (ctx->pc == 0x2CD748u) {
        ctx->pc = 0x2CD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD744u;
        // 0x2cd748: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD74Cu;
        goto label_2cd74c;
    }
    ctx->pc = 0x2CD744u;
    {
        const bool branch_taken_0x2cd744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd744) {
            ctx->pc = 0x2CD748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD744u;
            // 0x2cd748: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD7CCu;
            goto label_2cd7cc;
        }
    }
    ctx->pc = 0x2CD74Cu;
label_2cd74c:
    // 0x2cd74c: 0x26840014  addiu       $a0, $s4, 0x14
    ctx->pc = 0x2cd74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_2cd750:
    // 0x2cd750: 0x24030103  addiu       $v1, $zero, 0x103
    ctx->pc = 0x2cd750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2cd754:
    // 0x2cd754: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cd754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cd758:
    // 0x2cd758: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_2cd75c:
    if (ctx->pc == 0x2CD75Cu) {
        ctx->pc = 0x2CD75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD758u;
        // 0x2cd75c: 0x8fa70060  lw          $a3, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD760u;
        goto label_2cd760;
    }
    ctx->pc = 0x2CD758u;
    {
        const bool branch_taken_0x2cd758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CD75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD758u;
        // 0x2cd75c: 0x8fa70060  lw          $a3, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd758) {
            ctx->pc = 0x2CD778u;
            goto label_2cd778;
        }
    }
    ctx->pc = 0x2CD760u;
label_2cd760:
    // 0x2cd760: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2cd760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2cd764:
    // 0x2cd764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cd764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cd768:
    // 0x2cd768: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2cd768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2cd76c:
    // 0x2cd76c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cd76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd770:
    // 0x2cd770: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
label_2cd774:
    if (ctx->pc == 0x2CD774u) {
        ctx->pc = 0x2CD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD770u;
        // 0x2cd774: 0x245102b  sltu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD778u;
        goto label_2cd778;
    }
    ctx->pc = 0x2CD770u;
    {
        const bool branch_taken_0x2cd770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd770) {
            ctx->pc = 0x2CD774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD770u;
            // 0x2cd774: 0x245102b  sltu        $v0, $s2, $a1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD7C0u;
            goto label_2cd7c0;
        }
    }
    ctx->pc = 0x2CD778u;
label_2cd778:
    // 0x2cd778: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cd778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2cd77c:
    // 0x2cd77c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2cd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2cd780:
    // 0x2cd780: 0x245182b  sltu        $v1, $s2, $a1
    ctx->pc = 0x2cd780u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2cd784:
    // 0x2cd784: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_2cd788:
    if (ctx->pc == 0x2CD788u) {
        ctx->pc = 0x2CD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD784u;
        // 0x2cd788: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD78Cu;
        goto label_2cd78c;
    }
    ctx->pc = 0x2CD784u;
    {
        const bool branch_taken_0x2cd784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD784u;
        // 0x2cd788: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd784) {
            ctx->pc = 0x2CD7C8u;
            goto label_2cd7c8;
        }
    }
    ctx->pc = 0x2CD78Cu;
label_2cd78c:
    // 0x2cd78c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cd790:
    // 0x2cd790: 0x24040103  addiu       $a0, $zero, 0x103
    ctx->pc = 0x2cd790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2cd794:
    // 0x2cd794: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2cd794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2cd798:
    // 0x2cd798: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cd798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd79c:
    // 0x2cd79c: 0x1064fff6  beq         $v1, $a0, . + 4 + (-0xA << 2)
label_2cd7a0:
    if (ctx->pc == 0x2CD7A0u) {
        ctx->pc = 0x2CD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD79Cu;
        // 0x2cd7a0: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7A4u;
        goto label_2cd7a4;
    }
    ctx->pc = 0x2CD79Cu;
    {
        const bool branch_taken_0x2cd79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD79Cu;
        // 0x2cd7a0: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd79c) {
            ctx->pc = 0x2CD778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd778;
        }
    }
    ctx->pc = 0x2CD7A4u;
label_2cd7a4:
    // 0x2cd7a4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2cd7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2cd7a8:
    // 0x2cd7a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cd7ac:
    // 0x2cd7ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cd7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cd7b0:
    // 0x2cd7b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd7b4:
    // 0x2cd7b4: 0x5060fff1  beql        $v1, $zero, . + 4 + (-0xF << 2)
label_2cd7b8:
    if (ctx->pc == 0x2CD7B8u) {
        ctx->pc = 0x2CD7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7B4u;
        // 0x2cd7b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7BCu;
        goto label_2cd7bc;
    }
    ctx->pc = 0x2CD7B4u;
    {
        const bool branch_taken_0x2cd7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7b4) {
            ctx->pc = 0x2CD7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD7B4u;
            // 0x2cd7b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD77Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd77c;
        }
    }
    ctx->pc = 0x2CD7BCu;
label_2cd7bc:
    // 0x2cd7bc: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x2cd7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2cd7c0:
    // 0x2cd7c0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2cd7c4:
    if (ctx->pc == 0x2CD7C4u) {
        ctx->pc = 0x2CD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7C0u;
        // 0x2cd7c4: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7C8u;
        goto label_2cd7c8;
    }
    ctx->pc = 0x2CD7C0u;
    {
        const bool branch_taken_0x2cd7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7c0) {
            ctx->pc = 0x2CD7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD7C0u;
            // 0x2cd7c4: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD7E8u;
            goto label_2cd7e8;
        }
    }
    ctx->pc = 0x2CD7C8u;
label_2cd7c8:
    // 0x2cd7c8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2cd7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cd7cc:
    // 0x2cd7cc: 0x544000d9  bnel        $v0, $zero, . + 4 + (0xD9 << 2)
label_2cd7d0:
    if (ctx->pc == 0x2CD7D0u) {
        ctx->pc = 0x2CD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7CCu;
        // 0x2cd7d0: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7D4u;
        goto label_2cd7d4;
    }
    ctx->pc = 0x2CD7CCu;
    {
        const bool branch_taken_0x2cd7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7cc) {
            ctx->pc = 0x2CD7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD7CCu;
            // 0x2cd7d0: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDB34u;
            goto label_2cdb34;
        }
    }
    ctx->pc = 0x2CD7D4u;
label_2cd7d4:
    // 0x2cd7d4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2cd7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2cd7d8:
    // 0x2cd7d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cd7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2cd7dc:
    // 0x2cd7dc: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_2cd7e0:
    if (ctx->pc == 0x2CD7E0u) {
        ctx->pc = 0x2CD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7DCu;
        // 0x2cd7e0: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7E4u;
        goto label_2cd7e4;
    }
    ctx->pc = 0x2CD7DCu;
    {
        const bool branch_taken_0x2cd7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7DCu;
        // 0x2cd7e0: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7dc) {
            ctx->pc = 0x2CDAF0u;
            goto label_2cdaf0;
        }
    }
    ctx->pc = 0x2CD7E4u;
label_2cd7e4:
    // 0x2cd7e4: 0x0  nop
    ctx->pc = 0x2cd7e4u;
    // NOP
label_2cd7e8:
    // 0x2cd7e8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_2cd7ec:
    if (ctx->pc == 0x2CD7ECu) {
        ctx->pc = 0x2CD7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7E8u;
        // 0x2cd7ec: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7F0u;
        goto label_2cd7f0;
    }
    ctx->pc = 0x2CD7E8u;
    {
        const bool branch_taken_0x2cd7e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7E8u;
        // 0x2cd7ec: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7e8) {
            ctx->pc = 0x2CD804u;
            goto label_2cd804;
        }
    }
    ctx->pc = 0x2CD7F0u;
label_2cd7f0:
    // 0x2cd7f0: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x2cd7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2cd7f4:
    // 0x2cd7f4: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x2cd7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2cd7f8:
    // 0x2cd7f8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2cd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2cd7fc:
    // 0x2cd7fc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2cd7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2cd800:
    // 0x2cd800: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2cd804:
    // 0x2cd804: 0x306200c0  andi        $v0, $v1, 0xC0
    ctx->pc = 0x2cd804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_2cd808:
    // 0x2cd808: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2cd80c:
    if (ctx->pc == 0x2CD80Cu) {
        ctx->pc = 0x2CD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD808u;
        // 0x2cd80c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD810u;
        goto label_2cd810;
    }
    ctx->pc = 0x2CD808u;
    {
        const bool branch_taken_0x2cd808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD808u;
        // 0x2cd80c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd808) {
            ctx->pc = 0x2CD818u;
            goto label_2cd818;
        }
    }
    ctx->pc = 0x2CD810u;
label_2cd810:
    // 0x2cd810: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2cd810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_2cd814:
    // 0x2cd814: 0x2c4c0001  sltiu       $t4, $v0, 0x1
    ctx->pc = 0x2cd814u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cd818:
    // 0x2cd818: 0x52a00007  beql        $s5, $zero, . + 4 + (0x7 << 2)
label_2cd81c:
    if (ctx->pc == 0x2CD81Cu) {
        ctx->pc = 0x2CD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD818u;
        // 0x2cd81c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD820u;
        goto label_2cd820;
    }
    ctx->pc = 0x2CD818u;
    {
        const bool branch_taken_0x2cd818 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd818) {
            ctx->pc = 0x2CD81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD818u;
            // 0x2cd81c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD838u;
            goto label_2cd838;
        }
    }
    ctx->pc = 0x2CD820u;
label_2cd820:
    // 0x2cd820: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2cd820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2cd824:
    // 0x2cd824: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x2cd824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cd828:
    // 0x2cd828: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2cd828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2cd82c:
    // 0x2cd82c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x2cd82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_2cd830:
    // 0x2cd830: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cd830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd834:
    // 0x2cd834: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x2cd834u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_2cd838:
    // 0x2cd838: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2cd838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2cd83c:
    // 0x2cd83c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2cd83cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd840:
    // 0x2cd840: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2cd840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd844:
    // 0x2cd844: 0x10000031  b           . + 4 + (0x31 << 2)
label_2cd848:
    if (ctx->pc == 0x2CD848u) {
        ctx->pc = 0x2CD848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD844u;
        // 0x2cd848: 0x30de0400  andi        $fp, $a2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD84Cu;
        goto label_2cd84c;
    }
    ctx->pc = 0x2CD844u;
    {
        const bool branch_taken_0x2cd844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD844u;
        // 0x2cd848: 0x30de0400  andi        $fp, $a2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd844) {
            ctx->pc = 0x2CD90Cu;
            goto label_2cd90c;
        }
    }
    ctx->pc = 0x2CD84Cu;
label_2cd84c:
    // 0x2cd84c: 0x0  nop
    ctx->pc = 0x2cd84cu;
    // NOP
label_2cd850:
    // 0x2cd850: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x2cd850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cd854:
    // 0x2cd854: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_2cd858:
    if (ctx->pc == 0x2CD858u) {
        ctx->pc = 0x2CD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD854u;
        // 0x2cd858: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD85Cu;
        goto label_2cd85c;
    }
    ctx->pc = 0x2CD854u;
    {
        const bool branch_taken_0x2cd854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD854u;
        // 0x2cd858: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd854) {
            ctx->pc = 0x2CD984u;
            goto label_2cd984;
        }
    }
    ctx->pc = 0x2CD85Cu;
label_2cd85c:
    // 0x2cd85c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_2cd860:
    if (ctx->pc == 0x2CD860u) {
        ctx->pc = 0x2CD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD85Cu;
        // 0x2cd860: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD864u;
        goto label_2cd864;
    }
    ctx->pc = 0x2CD85Cu;
    {
        const bool branch_taken_0x2cd85c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD85Cu;
        // 0x2cd860: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd85c) {
            ctx->pc = 0x2CD878u;
            goto label_2cd878;
        }
    }
    ctx->pc = 0x2CD864u;
label_2cd864:
    // 0x2cd864: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x2cd864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2cd868:
    // 0x2cd868: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2cd868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2cd86c:
    // 0x2cd86c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2cd870:
    if (ctx->pc == 0x2CD870u) {
        ctx->pc = 0x2CD870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD86Cu;
        // 0x2cd870: 0x623823  subu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD874u;
        goto label_2cd874;
    }
    ctx->pc = 0x2CD86Cu;
    {
        const bool branch_taken_0x2cd86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD86Cu;
        // 0x2cd870: 0x623823  subu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd86c) {
            ctx->pc = 0x2CD87Cu;
            goto label_2cd87c;
        }
    }
    ctx->pc = 0x2CD874u;
label_2cd874:
    // 0x2cd874: 0x0  nop
    ctx->pc = 0x2cd874u;
    // NOP
label_2cd878:
    // 0x2cd878: 0x523823  subu        $a3, $v0, $s2
    ctx->pc = 0x2cd878u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2cd87c:
    // 0x2cd87c: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2cd87cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2cd880:
    // 0x2cd880: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x2cd880u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2cd884:
    // 0x2cd884: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cd884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cd888:
    // 0x2cd888: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x2cd888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2cd88c:
    // 0x2cd88c: 0x2332021  addu        $a0, $s1, $s3
    ctx->pc = 0x2cd88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_2cd890:
    // 0x2cd890: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x2cd890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_2cd894:
    // 0x2cd894: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cd894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cd898:
    // 0x2cd898: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2cd898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cd89c:
    // 0x2cd89c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2cd89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_2cd8a0:
    // 0x2cd8a0: 0x27a90054  addiu       $t1, $sp, 0x54
    ctx->pc = 0x2cd8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_2cd8a4:
    // 0x2cd8a4: 0x27ab0050  addiu       $t3, $sp, 0x50
    ctx->pc = 0x2cd8a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2cd8a8:
    // 0x2cd8a8: 0xc0b3526  jal         func_2CD498
label_2cd8ac:
    if (ctx->pc == 0x2CD8ACu) {
        ctx->pc = 0x2CD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8A8u;
        // 0x2cd8ac: 0x7fac0080  sq          $t4, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD8B0u;
        goto label_2cd8b0;
    }
    ctx->pc = 0x2CD8A8u;
    SET_GPR_U32(ctx, 31, 0x2CD8B0u);
    ctx->pc = 0x2CD8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8A8u;
    // 0x2cd8ac: 0x7fac0080  sq          $t4, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD498u;
    goto label_2cd498;
    ctx->pc = 0x2CD8B0u;
label_2cd8b0:
    // 0x2cd8b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd8b4:
    // 0x2cd8b4: 0x160000d8  bnez        $s0, . + 4 + (0xD8 << 2)
label_2cd8b8:
    if (ctx->pc == 0x2CD8B8u) {
        ctx->pc = 0x2CD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8B4u;
        // 0x2cd8b8: 0x7bac0080  lq          $t4, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD8BCu;
        goto label_2cd8bc;
    }
    ctx->pc = 0x2CD8B4u;
    {
        const bool branch_taken_0x2cd8b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8B4u;
        // 0x2cd8b8: 0x7bac0080  lq          $t4, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8b4) {
            ctx->pc = 0x2CDC18u;
            goto label_2cdc18;
        }
    }
    ctx->pc = 0x2CD8BCu;
label_2cd8bc:
    // 0x2cd8bc: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_2cd8c0:
    if (ctx->pc == 0x2CD8C0u) {
        ctx->pc = 0x2CD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8BCu;
        // 0x2cd8c0: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD8C4u;
        goto label_2cd8c4;
    }
    ctx->pc = 0x2CD8BCu;
    {
        const bool branch_taken_0x2cd8bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8BCu;
        // 0x2cd8c0: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8bc) {
            ctx->pc = 0x2CD8D8u;
            goto label_2cd8d8;
        }
    }
    ctx->pc = 0x2CD8C4u;
label_2cd8c4:
    // 0x2cd8c4: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x2cd8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cd8c8:
    // 0x2cd8c8: 0x8eb20014  lw          $s2, 0x14($s5)
    ctx->pc = 0x2cd8c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2cd8cc:
    // 0x2cd8cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2cd8d0:
    if (ctx->pc == 0x2CD8D0u) {
        ctx->pc = 0x2CD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8CCu;
        // 0x2cd8d0: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD8D4u;
        goto label_2cd8d4;
    }
    ctx->pc = 0x2CD8CCu;
    {
        const bool branch_taken_0x2cd8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8CCu;
        // 0x2cd8d0: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8cc) {
            ctx->pc = 0x2CD8DCu;
            goto label_2cd8dc;
        }
    }
    ctx->pc = 0x2CD8D4u;
label_2cd8d4:
    // 0x2cd8d4: 0x0  nop
    ctx->pc = 0x2cd8d4u;
    // NOP
label_2cd8d8:
    // 0x2cd8d8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2cd8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2cd8dc:
    // 0x2cd8dc: 0x15800028  bnez        $t4, . + 4 + (0x28 << 2)
label_2cd8e0:
    if (ctx->pc == 0x2CD8E0u) {
        ctx->pc = 0x2CD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8DCu;
        // 0x2cd8e0: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD8E4u;
        goto label_2cd8e4;
    }
    ctx->pc = 0x2CD8DCu;
    {
        const bool branch_taken_0x2cd8dc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8DCu;
        // 0x2cd8e0: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8dc) {
            ctx->pc = 0x2CD980u;
            goto label_2cd980;
        }
    }
    ctx->pc = 0x2CD8E4u;
label_2cd8e4:
    // 0x2cd8e4: 0x17c00009  bnez        $fp, . + 4 + (0x9 << 2)
label_2cd8e8:
    if (ctx->pc == 0x2CD8E8u) {
        ctx->pc = 0x2CD8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8E4u;
        // 0x2cd8e8: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD8ECu;
        goto label_2cd8ec;
    }
    ctx->pc = 0x2CD8E4u;
    {
        const bool branch_taken_0x2cd8e4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8E4u;
        // 0x2cd8e8: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8e4) {
            ctx->pc = 0x2CD90Cu;
            goto label_2cd90c;
        }
    }
    ctx->pc = 0x2CD8ECu;
label_2cd8ec:
    // 0x2cd8ec: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x2cd8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_2cd8f0:
    // 0x2cd8f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2cd8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2cd8f4:
    // 0x2cd8f4: 0x7fac0080  sq          $t4, 0x80($sp)
    ctx->pc = 0x2cd8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 12));
label_2cd8f8:
    // 0x2cd8f8: 0xc0b2748  jal         func_2C9D20
label_2cd8fc:
    if (ctx->pc == 0x2CD8FCu) {
        ctx->pc = 0x2CD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8F8u;
        // 0x2cd8fc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD900u;
        goto label_2cd900;
    }
    ctx->pc = 0x2CD8F8u;
    SET_GPR_U32(ctx, 31, 0x2CD900u);
    ctx->pc = 0x2CD8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8F8u;
    // 0x2cd8fc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D20u, 0x2CD8F8u, 0x2CD900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD900u;
label_2cd900:
    // 0x2cd900: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cd900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2cd904:
    // 0x2cd904: 0x7bac0080  lq          $t4, 0x80($sp)
    ctx->pc = 0x2cd904u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cd908:
    // 0x2cd908: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2cd908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2cd90c:
    // 0x2cd90c: 0x1580ffd3  bnez        $t4, . + 4 + (-0x2D << 2)
label_2cd910:
    if (ctx->pc == 0x2CD910u) {
        ctx->pc = 0x2CD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD90Cu;
        // 0x2cd910: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD914u;
        goto label_2cd914;
    }
    ctx->pc = 0x2CD90Cu;
    {
        const bool branch_taken_0x2cd90c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD90Cu;
        // 0x2cd910: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd90c) {
            ctx->pc = 0x2CD85Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd85c;
        }
    }
    ctx->pc = 0x2CD914u;
label_2cd914:
    // 0x2cd914: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
label_2cd918:
    if (ctx->pc == 0x2CD918u) {
        ctx->pc = 0x2CD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD914u;
        // 0x2cd918: 0x8fa70070  lw          $a3, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD91Cu;
        goto label_2cd91c;
    }
    ctx->pc = 0x2CD914u;
    {
        const bool branch_taken_0x2cd914 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD914u;
        // 0x2cd918: 0x8fa70070  lw          $a3, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd914) {
            ctx->pc = 0x2CD928u;
            goto label_2cd928;
        }
    }
    ctx->pc = 0x2CD91Cu;
label_2cd91c:
    // 0x2cd91c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2cd91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2cd920:
    // 0x2cd920: 0x10000009  b           . + 4 + (0x9 << 2)
label_2cd924:
    if (ctx->pc == 0x2CD924u) {
        ctx->pc = 0x2CD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD920u;
        // 0x2cd924: 0xafa70070  sw          $a3, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD928u;
        goto label_2cd928;
    }
    ctx->pc = 0x2CD920u;
    {
        const bool branch_taken_0x2cd920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD920u;
        // 0x2cd924: 0xafa70070  sw          $a3, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd920) {
            ctx->pc = 0x2CD948u;
            goto label_2cd948;
        }
    }
    ctx->pc = 0x2CD928u;
label_2cd928:
    // 0x2cd928: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2cd928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2cd92c:
    // 0x2cd92c: 0x24040103  addiu       $a0, $zero, 0x103
    ctx->pc = 0x2cd92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2cd930:
    // 0x2cd930: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2cd930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2cd934:
    // 0x2cd934: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cd934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cd938:
    // 0x2cd938: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2cd938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2cd93c:
    // 0x2cd93c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cd93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd940:
    // 0x2cd940: 0x50640010  beql        $v1, $a0, . + 4 + (0x10 << 2)
label_2cd944:
    if (ctx->pc == 0x2CD944u) {
        ctx->pc = 0x2CD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD940u;
        // 0x2cd944: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD948u;
        goto label_2cd948;
    }
    ctx->pc = 0x2CD940u;
    {
        const bool branch_taken_0x2cd940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2cd940) {
            ctx->pc = 0x2CD944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD940u;
            // 0x2cd944: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD984u;
            goto label_2cd984;
        }
    }
    ctx->pc = 0x2CD948u;
label_2cd948:
    // 0x2cd948: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2cd948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cd94c:
    // 0x2cd94c: 0x1480ffc0  bnez        $a0, . + 4 + (-0x40 << 2)
label_2cd950:
    if (ctx->pc == 0x2CD950u) {
        ctx->pc = 0x2CD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD94Cu;
        // 0x2cd950: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD954u;
        goto label_2cd954;
    }
    ctx->pc = 0x2CD94Cu;
    {
        const bool branch_taken_0x2cd94c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD94Cu;
        // 0x2cd950: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd94c) {
            ctx->pc = 0x2CD850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd850;
        }
    }
    ctx->pc = 0x2CD954u;
label_2cd954:
    // 0x2cd954: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cd954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd958:
    // 0x2cd958: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cd958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd95c:
    // 0x2cd95c: 0xd21821  addu        $v1, $a2, $s2
    ctx->pc = 0x2cd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_2cd960:
    // 0x2cd960: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2cd960u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2cd964:
    // 0x2cd964: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_2cd968:
    if (ctx->pc == 0x2CD968u) {
        ctx->pc = 0x2CD96Cu;
        goto label_2cd96c;
    }
    ctx->pc = 0x2CD964u;
    {
        const bool branch_taken_0x2cd964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd964) {
            ctx->pc = 0x2CD85Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd85c;
        }
    }
    ctx->pc = 0x2CD96Cu;
label_2cd96c:
    // 0x2cd96c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2cd96cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_2cd970:
    // 0x2cd970: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_2cd974:
    if (ctx->pc == 0x2CD974u) {
        ctx->pc = 0x2CD978u;
        goto label_2cd978;
    }
    ctx->pc = 0x2CD970u;
    {
        const bool branch_taken_0x2cd970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd970) {
            ctx->pc = 0x2CD85Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd85c;
        }
    }
    ctx->pc = 0x2CD978u;
label_2cd978:
    // 0x2cd978: 0x10000002  b           . + 4 + (0x2 << 2)
label_2cd97c:
    if (ctx->pc == 0x2CD97Cu) {
        ctx->pc = 0x2CD980u;
        goto label_2cd980;
    }
    ctx->pc = 0x2CD978u;
    {
        const bool branch_taken_0x2cd978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd978) {
            ctx->pc = 0x2CD984u;
            goto label_2cd984;
        }
    }
    ctx->pc = 0x2CD980u;
label_2cd980:
    // 0x2cd980: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2cd980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cd984:
    // 0x2cd984: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_2cd988:
    if (ctx->pc == 0x2CD988u) {
        ctx->pc = 0x2CD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD984u;
        // 0x2cd988: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD98Cu;
        goto label_2cd98c;
    }
    ctx->pc = 0x2CD984u;
    {
        const bool branch_taken_0x2cd984 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD984u;
        // 0x2cd988: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd984) {
            ctx->pc = 0x2CD9B8u;
            goto label_2cd9b8;
        }
    }
    ctx->pc = 0x2CD98Cu;
label_2cd98c:
    // 0x2cd98c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2cd990:
    if (ctx->pc == 0x2CD990u) {
        ctx->pc = 0x2CD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD98Cu;
        // 0x2cd990: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD994u;
        goto label_2cd994;
    }
    ctx->pc = 0x2CD98Cu;
    {
        const bool branch_taken_0x2cd98c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD98Cu;
        // 0x2cd990: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd98c) {
            ctx->pc = 0x2CD9A4u;
            goto label_2cd9a4;
        }
    }
    ctx->pc = 0x2CD994u;
label_2cd994:
    // 0x2cd994: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2cd994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2cd998:
    // 0x2cd998: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x2cd998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_2cd99c:
    // 0x2cd99c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cd9a0:
    // 0x2cd9a0: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x2cd9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_2cd9a4:
    // 0x2cd9a4: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x2cd9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2cd9a8:
    // 0x2cd9a8: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x2cd9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
label_2cd9ac:
    // 0x2cd9ac: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x2cd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_2cd9b0:
    // 0x2cd9b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2cd9b4:
    if (ctx->pc == 0x2CD9B4u) {
        ctx->pc = 0x2CD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9B0u;
        // 0x2cd9b4: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9B8u;
        goto label_2cd9b8;
    }
    ctx->pc = 0x2CD9B0u;
    {
        const bool branch_taken_0x2cd9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9B0u;
        // 0x2cd9b4: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9b0) {
            ctx->pc = 0x2CD9D0u;
            goto label_2cd9d0;
        }
    }
    ctx->pc = 0x2CD9B8u;
label_2cd9b8:
    // 0x2cd9b8: 0x12e20005  beq         $s7, $v0, . + 4 + (0x5 << 2)
label_2cd9bc:
    if (ctx->pc == 0x2CD9BCu) {
        ctx->pc = 0x2CD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9B8u;
        // 0x2cd9bc: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9C0u;
        goto label_2cd9c0;
    }
    ctx->pc = 0x2CD9B8u;
    {
        const bool branch_taken_0x2cd9b8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9B8u;
        // 0x2cd9bc: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9b8) {
            ctx->pc = 0x2CD9D0u;
            goto label_2cd9d0;
        }
    }
    ctx->pc = 0x2CD9C0u;
label_2cd9c0:
    // 0x2cd9c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cd9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cd9c4:
    // 0x2cd9c4: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2cd9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2cd9c8:
    // 0x2cd9c8: 0x10000097  b           . + 4 + (0x97 << 2)
label_2cd9cc:
    if (ctx->pc == 0x2CD9CCu) {
        ctx->pc = 0x2CD9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9C8u;
        // 0x2cd9cc: 0x24040806  addiu       $a0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9D0u;
        goto label_2cd9d0;
    }
    ctx->pc = 0x2CD9C8u;
    {
        const bool branch_taken_0x2cd9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9C8u;
        // 0x2cd9cc: 0x24040806  addiu       $a0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd9c8) {
            ctx->pc = 0x2CDC28u;
            goto label_2cdc28;
        }
    }
    ctx->pc = 0x2CD9D0u;
label_2cd9d0:
    // 0x2cd9d0: 0x55800058  bnel        $t4, $zero, . + 4 + (0x58 << 2)
label_2cd9d4:
    if (ctx->pc == 0x2CD9D4u) {
        ctx->pc = 0x2CD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9D0u;
        // 0x2cd9d4: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9D8u;
        goto label_2cd9d8;
    }
    ctx->pc = 0x2CD9D0u;
    {
        const bool branch_taken_0x2cd9d0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd9d0) {
            ctx->pc = 0x2CD9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD9D0u;
            // 0x2cd9d4: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDB34u;
            goto label_2cdb34;
        }
    }
    ctx->pc = 0x2CD9D8u;
label_2cd9d8:
    // 0x2cd9d8: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x2cd9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2cd9dc:
    // 0x2cd9dc: 0x30e20400  andi        $v0, $a3, 0x400
    ctx->pc = 0x2cd9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
label_2cd9e0:
    // 0x2cd9e0: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
label_2cd9e4:
    if (ctx->pc == 0x2CD9E4u) {
        ctx->pc = 0x2CD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD9E0u;
        // 0x2cd9e4: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD9E8u;
        goto label_2cd9e8;
    }
    ctx->pc = 0x2CD9E0u;
    {
        const bool branch_taken_0x2cd9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd9e0) {
            ctx->pc = 0x2CD9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD9E0u;
            // 0x2cd9e4: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDB34u;
            goto label_2cdb34;
        }
    }
    ctx->pc = 0x2CD9E8u;
label_2cd9e8:
    // 0x2cd9e8: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2cd9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2cd9ec:
    // 0x2cd9ec: 0x24020103  addiu       $v0, $zero, 0x103
    ctx->pc = 0x2cd9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2cd9f0:
    // 0x2cd9f0: 0xb31821  addu        $v1, $a1, $s3
    ctx->pc = 0x2cd9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2cd9f4:
    // 0x2cd9f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cd9f8:
    // 0x2cd9f8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2cd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2cd9fc:
    // 0x2cd9fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cd9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cda00:
    // 0x2cda00: 0x1082004b  beq         $a0, $v0, . + 4 + (0x4B << 2)
label_2cda04:
    if (ctx->pc == 0x2CDA04u) {
        ctx->pc = 0x2CDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA00u;
        // 0x2cda04: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA08u;
        goto label_2cda08;
    }
    ctx->pc = 0x2CDA00u;
    {
        const bool branch_taken_0x2cda00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA00u;
        // 0x2cda04: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda00) {
            ctx->pc = 0x2CDB30u;
            goto label_2cdb30;
        }
    }
    ctx->pc = 0x2CDA08u;
label_2cda08:
    // 0x2cda08: 0x24120103  addiu       $s2, $zero, 0x103
    ctx->pc = 0x2cda08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_2cda0c:
    // 0x2cda0c: 0x24518540  addiu       $s1, $v0, -0x7AC0
    ctx->pc = 0x2cda0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
label_2cda10:
    // 0x2cda10: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x2cda10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2cda14:
    // 0x2cda14: 0x0  nop
    ctx->pc = 0x2cda14u;
    // NOP
label_2cda18:
    // 0x2cda18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cda18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cda1c:
    // 0x2cda1c: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x2cda1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2cda20:
    // 0x2cda20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cda20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cda24:
    // 0x2cda24: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x2cda24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_2cda28:
    // 0x2cda28: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
label_2cda2c:
    if (ctx->pc == 0x2CDA2Cu) {
        ctx->pc = 0x2CDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA28u;
        // 0x2cda2c: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA30u;
        goto label_2cda30;
    }
    ctx->pc = 0x2CDA28u;
    {
        const bool branch_taken_0x2cda28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cda28) {
            ctx->pc = 0x2CDA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDA28u;
            // 0x2cda2c: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDAA0u;
            goto label_2cdaa0;
        }
    }
    ctx->pc = 0x2CDA30u;
label_2cda30:
    // 0x2cda30: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2cda30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cda34:
    // 0x2cda34: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2cda34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2cda38:
    // 0x2cda38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cda38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cda3c:
    // 0x2cda3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cda3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cda40:
    // 0x2cda40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cda40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cda44:
    // 0x2cda44: 0x50710016  beql        $v1, $s1, . + 4 + (0x16 << 2)
label_2cda48:
    if (ctx->pc == 0x2CDA48u) {
        ctx->pc = 0x2CDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA44u;
        // 0x2cda48: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA4Cu;
        goto label_2cda4c;
    }
    ctx->pc = 0x2CDA44u;
    {
        const bool branch_taken_0x2cda44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x2cda44) {
            ctx->pc = 0x2CDA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDA44u;
            // 0x2cda48: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDAA0u;
            goto label_2cdaa0;
        }
    }
    ctx->pc = 0x2CDA4Cu;
label_2cda4c:
    // 0x2cda4c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2cda4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cda50:
    // 0x2cda50: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_2cda54:
    if (ctx->pc == 0x2CDA54u) {
        ctx->pc = 0x2CDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA50u;
        // 0x2cda54: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA58u;
        goto label_2cda58;
    }
    ctx->pc = 0x2CDA50u;
    {
        const bool branch_taken_0x2cda50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cda50) {
            ctx->pc = 0x2CDA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDA50u;
            // 0x2cda54: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDA80u;
            goto label_2cda80;
        }
    }
    ctx->pc = 0x2CDA58u;
label_2cda58:
    // 0x2cda58: 0xc0b60e6  jal         func_2D8398
label_2cda5c:
    if (ctx->pc == 0x2CDA5Cu) {
        ctx->pc = 0x2CDA60u;
        goto label_2cda60;
    }
    ctx->pc = 0x2CDA58u;
    SET_GPR_U32(ctx, 31, 0x2CDA60u);
    ctx->pc = 0x2D8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8398u, 0x2CDA58u, 0x2CDA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA60u;
label_2cda60:
    // 0x2cda60: 0xc0b60b8  jal         func_2D82E0
label_2cda64:
    if (ctx->pc == 0x2CDA64u) {
        ctx->pc = 0x2CDA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA60u;
        // 0x2cda64: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA68u;
        goto label_2cda68;
    }
    ctx->pc = 0x2CDA60u;
    SET_GPR_U32(ctx, 31, 0x2CDA68u);
    ctx->pc = 0x2CDA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA60u;
    // 0x2cda64: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2CDA60u, 0x2CDA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA68u;
label_2cda68:
    // 0x2cda68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cda6c:
    if (ctx->pc == 0x2CDA6Cu) {
        ctx->pc = 0x2CDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA68u;
        // 0x2cda6c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA70u;
        goto label_2cda70;
    }
    ctx->pc = 0x2CDA68u;
    {
        const bool branch_taken_0x2cda68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA68u;
        // 0x2cda6c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda68) {
            ctx->pc = 0x2CDA80u;
            goto label_2cda80;
        }
    }
    ctx->pc = 0x2CDA70u;
label_2cda70:
    // 0x2cda70: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2cda70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cda74:
    // 0x2cda74: 0xc0b60ec  jal         func_2D83B0
label_2cda78:
    if (ctx->pc == 0x2CDA78u) {
        ctx->pc = 0x2CDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA74u;
        // 0x2cda78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA7Cu;
        goto label_2cda7c;
    }
    ctx->pc = 0x2CDA74u;
    SET_GPR_U32(ctx, 31, 0x2CDA7Cu);
    ctx->pc = 0x2CDA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA74u;
    // 0x2cda78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D83B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D83B0u, 0x2CDA74u, 0x2CDA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA7Cu;
label_2cda7c:
    // 0x2cda7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2cda80:
    // 0x2cda80: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2cda80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2cda84:
    // 0x2cda84: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cda84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cda88:
    // 0x2cda88: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x2cda88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2cda8c:
    // 0x2cda8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cda8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cda90:
    // 0x2cda90: 0xc0b2940  jal         func_2CA500
label_2cda94:
    if (ctx->pc == 0x2CDA94u) {
        ctx->pc = 0x2CDA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA90u;
        // 0x2cda94: 0x24040805  addiu       $a0, $zero, 0x805 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDA98u;
        goto label_2cda98;
    }
    ctx->pc = 0x2CDA90u;
    SET_GPR_U32(ctx, 31, 0x2CDA98u);
    ctx->pc = 0x2CDA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA90u;
    // 0x2cda94: 0x24040805  addiu       $a0, $zero, 0x805 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA500u, 0x2CDA90u, 0x2CDA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA98u;
label_2cda98:
    // 0x2cda98: 0x10000078  b           . + 4 + (0x78 << 2)
label_2cda9c:
    if (ctx->pc == 0x2CDA9Cu) {
        ctx->pc = 0x2CDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA98u;
        // 0x2cda9c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDAA0u;
        goto label_2cdaa0;
    }
    ctx->pc = 0x2CDA98u;
    {
        const bool branch_taken_0x2cda98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA98u;
        // 0x2cda9c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda98) {
            ctx->pc = 0x2CDC7Cu;
            goto label_2cdc7c;
        }
    }
    ctx->pc = 0x2CDAA0u;
label_2cdaa0:
    // 0x2cdaa0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2cdaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_2cdaa4:
    // 0x2cdaa4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2cdaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2cdaa8:
    // 0x2cdaa8: 0xc0b2748  jal         func_2C9D20
label_2cdaac:
    if (ctx->pc == 0x2CDAACu) {
        ctx->pc = 0x2CDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAA8u;
        // 0x2cdaac: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDAB0u;
        goto label_2cdab0;
    }
    ctx->pc = 0x2CDAA8u;
    SET_GPR_U32(ctx, 31, 0x2CDAB0u);
    ctx->pc = 0x2CDAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDAA8u;
    // 0x2cdaac: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D20u, 0x2CDAA8u, 0x2CDAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAB0u;
label_2cdab0:
    // 0x2cdab0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cdab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2cdab4:
    // 0x2cdab4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2cdab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2cdab8:
    // 0x2cdab8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2cdab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2cdabc:
    // 0x2cdabc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2cdabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2cdac0:
    // 0x2cdac0: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x2cdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2cdac4:
    // 0x2cdac4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cdac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cdac8:
    // 0x2cdac8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2cdac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2cdacc:
    // 0x2cdacc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cdaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cdad0:
    // 0x2cdad0: 0x5472ffd1  bnel        $v1, $s2, . + 4 + (-0x2F << 2)
label_2cdad4:
    if (ctx->pc == 0x2CDAD4u) {
        ctx->pc = 0x2CDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAD0u;
        // 0x2cdad4: 0xb31021  addu        $v0, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDAD8u;
        goto label_2cdad8;
    }
    ctx->pc = 0x2CDAD0u;
    {
        const bool branch_taken_0x2cdad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2cdad0) {
            ctx->pc = 0x2CDAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDAD0u;
            // 0x2cdad4: 0xb31021  addu        $v0, $a1, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDA18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cda18;
        }
    }
    ctx->pc = 0x2CDAD8u;
label_2cdad8:
    // 0x2cdad8: 0x10000016  b           . + 4 + (0x16 << 2)
label_2cdadc:
    if (ctx->pc == 0x2CDADCu) {
        ctx->pc = 0x2CDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAD8u;
        // 0x2cdadc: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDAE0u;
        goto label_2cdae0;
    }
    ctx->pc = 0x2CDAD8u;
    {
        const bool branch_taken_0x2cdad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAD8u;
        // 0x2cdadc: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdad8) {
            ctx->pc = 0x2CDB34u;
            goto label_2cdb34;
        }
    }
    ctx->pc = 0x2CDAE0u;
label_2cdae0:
    // 0x2cdae0: 0x55000014  bnel        $t0, $zero, . + 4 + (0x14 << 2)
label_2cdae4:
    if (ctx->pc == 0x2CDAE4u) {
        ctx->pc = 0x2CDAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAE0u;
        // 0x2cdae4: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDAE8u;
        goto label_2cdae8;
    }
    ctx->pc = 0x2CDAE0u;
    {
        const bool branch_taken_0x2cdae0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdae0) {
            ctx->pc = 0x2CDAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDAE0u;
            // 0x2cdae4: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDB34u;
            goto label_2cdb34;
        }
    }
    ctx->pc = 0x2CDAE8u;
label_2cdae8:
    // 0x2cdae8: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x2cdae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2cdaec:
    // 0x2cdaec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cdaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2cdaf0:
    // 0x2cdaf0: 0xc0b28e4  jal         func_2CA390
label_2cdaf4:
    if (ctx->pc == 0x2CDAF4u) {
        ctx->pc = 0x2CDAF8u;
        goto label_2cdaf8;
    }
    ctx->pc = 0x2CDAF0u;
    SET_GPR_U32(ctx, 31, 0x2CDAF8u);
    ctx->pc = 0x2CA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA390u, 0x2CDAF0u, 0x2CDAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAF8u;
label_2cdaf8:
    // 0x2cdaf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cdaf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdafc:
    // 0x2cdafc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2cdb00:
    if (ctx->pc == 0x2CDB00u) {
        ctx->pc = 0x2CDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAFCu;
        // 0x2cdb00: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB04u;
        goto label_2cdb04;
    }
    ctx->pc = 0x2CDAFCu;
    {
        const bool branch_taken_0x2cdafc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAFCu;
        // 0x2cdb00: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdafc) {
            ctx->pc = 0x2CDB20u;
            goto label_2cdb20;
        }
    }
    ctx->pc = 0x2CDB04u;
label_2cdb04:
    // 0x2cdb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cdb08:
    // 0x2cdb08: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x2cdb08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2cdb0c:
    // 0x2cdb0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cdb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cdb10:
    // 0x2cdb10: 0xc0b2940  jal         func_2CA500
label_2cdb14:
    if (ctx->pc == 0x2CDB14u) {
        ctx->pc = 0x2CDB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB10u;
        // 0x2cdb14: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB18u;
        goto label_2cdb18;
    }
    ctx->pc = 0x2CDB10u;
    SET_GPR_U32(ctx, 31, 0x2CDB18u);
    ctx->pc = 0x2CDB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB10u;
    // 0x2cdb14: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA500u, 0x2CDB10u, 0x2CDB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB18u;
label_2cdb18:
    // 0x2cdb18: 0x10000058  b           . + 4 + (0x58 << 2)
label_2cdb1c:
    if (ctx->pc == 0x2CDB1Cu) {
        ctx->pc = 0x2CDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB18u;
        // 0x2cdb1c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB20u;
        goto label_2cdb20;
    }
    ctx->pc = 0x2CDB18u;
    {
        const bool branch_taken_0x2cdb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB18u;
        // 0x2cdb1c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb18) {
            ctx->pc = 0x2CDC7Cu;
            goto label_2cdc7c;
        }
    }
    ctx->pc = 0x2CDB20u;
label_2cdb20:
    // 0x2cdb20: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2cdb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cdb24:
    // 0x2cdb24: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x2cdb24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2cdb28:
    // 0x2cdb28: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2cdb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2cdb2c:
    // 0x2cdb2c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2cdb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2cdb30:
    // 0x2cdb30: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2cdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2cdb34:
    // 0x2cdb34: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x2cdb34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2cdb38:
    // 0x2cdb38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cdb3c:
    // 0x2cdb3c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2cdb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2cdb40:
    // 0x2cdb40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2cdb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cdb44:
    // 0x2cdb44: 0x50a0003d  beql        $a1, $zero, . + 4 + (0x3D << 2)
label_2cdb48:
    if (ctx->pc == 0x2CDB48u) {
        ctx->pc = 0x2CDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB44u;
        // 0x2cdb48: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB4Cu;
        goto label_2cdb4c;
    }
    ctx->pc = 0x2CDB44u;
    {
        const bool branch_taken_0x2cdb44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb44) {
            ctx->pc = 0x2CDB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDB44u;
            // 0x2cdb48: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC3Cu;
            goto label_2cdc3c;
        }
    }
    ctx->pc = 0x2CDB4Cu;
label_2cdb4c:
    // 0x2cdb4c: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x2cdb4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2cdb50:
    // 0x2cdb50: 0x11000025  beqz        $t0, . + 4 + (0x25 << 2)
label_2cdb54:
    if (ctx->pc == 0x2CDB54u) {
        ctx->pc = 0x2CDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB50u;
        // 0x2cdb54: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB58u;
        goto label_2cdb58;
    }
    ctx->pc = 0x2CDB50u;
    {
        const bool branch_taken_0x2cdb50 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB50u;
        // 0x2cdb54: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb50) {
            ctx->pc = 0x2CDBE8u;
            goto label_2cdbe8;
        }
    }
    ctx->pc = 0x2CDB58u;
label_2cdb58:
    // 0x2cdb58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cdb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cdb5c:
    // 0x2cdb5c: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x2cdb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cdb60:
    // 0x2cdb60: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2cdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2cdb64:
    // 0x2cdb64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cdb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2cdb68:
    // 0x2cdb68: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2cdb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_2cdb6c:
    // 0x2cdb6c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2cdb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2cdb70:
    // 0x2cdb70: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2cdb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_2cdb74:
    // 0x2cdb74: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2cdb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_2cdb78:
    // 0x2cdb78: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x2cdb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
label_2cdb7c:
    // 0x2cdb7c: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x2cdb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_2cdb80:
    // 0x2cdb80: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x2cdb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cdb84:
    // 0x2cdb84: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x2cdb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2cdb88:
    // 0x2cdb88: 0xb3a30033  sdl         $v1, 0x33($sp)
    ctx->pc = 0x2cdb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cdb8c:
    // 0x2cdb8c: 0xb7a3002c  sdr         $v1, 0x2C($sp)
    ctx->pc = 0x2cdb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cdb90:
    // 0x2cdb90: 0x100f809  jalr        $t0
label_2cdb94:
    if (ctx->pc == 0x2CDB94u) {
        ctx->pc = 0x2CDB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB90u;
        // 0x2cdb94: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB98u;
        goto label_2cdb98;
    }
    ctx->pc = 0x2CDB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x2CDB98u);
        ctx->pc = 0x2CDB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB90u;
        // 0x2cdb94: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDB90u, 0x2CDB98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDB98u;
label_2cdb98:
    // 0x2cdb98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cdb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdb9c:
    // 0x2cdb9c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2cdb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2cdba0:
    // 0x2cdba0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2cdba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2cdba4:
    // 0x2cdba4: 0xc0b29b4  jal         func_2CA6D0
label_2cdba8:
    if (ctx->pc == 0x2CDBA8u) {
        ctx->pc = 0x2CDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBA4u;
        // 0x2cdba8: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDBACu;
        goto label_2cdbac;
    }
    ctx->pc = 0x2CDBA4u;
    SET_GPR_U32(ctx, 31, 0x2CDBACu);
    ctx->pc = 0x2CDBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDBA4u;
    // 0x2cdba8: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6D0u, 0x2CDBA4u, 0x2CDBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDBACu;
label_2cdbac:
    // 0x2cdbac: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
label_2cdbb0:
    if (ctx->pc == 0x2CDBB0u) {
        ctx->pc = 0x2CDBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBACu;
        // 0x2cdbb0: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDBB4u;
        goto label_2cdbb4;
    }
    ctx->pc = 0x2CDBACu;
    {
        const bool branch_taken_0x2cdbac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBACu;
        // 0x2cdbb0: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbac) {
            ctx->pc = 0x2CDC1Cu;
            goto label_2cdc1c;
        }
    }
    ctx->pc = 0x2CDBB4u;
label_2cdbb4:
    // 0x2cdbb4: 0x12a00021  beqz        $s5, . + 4 + (0x21 << 2)
label_2cdbb8:
    if (ctx->pc == 0x2CDBB8u) {
        ctx->pc = 0x2CDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBB4u;
        // 0x2cdbb8: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDBBCu;
        goto label_2cdbbc;
    }
    ctx->pc = 0x2CDBB4u;
    {
        const bool branch_taken_0x2cdbb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBB4u;
        // 0x2cdbb8: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbb4) {
            ctx->pc = 0x2CDC3Cu;
            goto label_2cdc3c;
        }
    }
    ctx->pc = 0x2CDBBCu;
label_2cdbbc:
    // 0x2cdbbc: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x2cdbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_2cdbc0:
    // 0x2cdbc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2cdbc4:
    if (ctx->pc == 0x2CDBC4u) {
        ctx->pc = 0x2CDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBC0u;
        // 0x2cdbc4: 0x24020103  addiu       $v0, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDBC8u;
        goto label_2cdbc8;
    }
    ctx->pc = 0x2CDBC0u;
    {
        const bool branch_taken_0x2cdbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBC0u;
        // 0x2cdbc4: 0x24020103  addiu       $v0, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbc0) {
            ctx->pc = 0x2CDBD4u;
            goto label_2cdbd4;
        }
    }
    ctx->pc = 0x2CDBC8u;
label_2cdbc8:
    // 0x2cdbc8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2cdbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2cdbcc:
    // 0x2cdbcc: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_2cdbd0:
    if (ctx->pc == 0x2CDBD0u) {
        ctx->pc = 0x2CDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBCCu;
        // 0x2cdbd0: 0x30828000  andi        $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDBD4u;
        goto label_2cdbd4;
    }
    ctx->pc = 0x2CDBCCu;
    {
        const bool branch_taken_0x2cdbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBCCu;
        // 0x2cdbd0: 0x30828000  andi        $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbcc) {
            ctx->pc = 0x2CDC40u;
            goto label_2cdc40;
        }
    }
    ctx->pc = 0x2CDBD4u;
label_2cdbd4:
    // 0x2cdbd4: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2cdbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2cdbd8:
    // 0x2cdbd8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2cdbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cdbdc:
    // 0x2cdbdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cdbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cdbe0:
    // 0x2cdbe0: 0x10000015  b           . + 4 + (0x15 << 2)
label_2cdbe4:
    if (ctx->pc == 0x2CDBE4u) {
        ctx->pc = 0x2CDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBE0u;
        // 0x2cdbe4: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDBE8u;
        goto label_2cdbe8;
    }
    ctx->pc = 0x2CDBE0u;
    {
        const bool branch_taken_0x2cdbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBE0u;
        // 0x2cdbe4: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbe0) {
            ctx->pc = 0x2CDC38u;
            goto label_2cdc38;
        }
    }
    ctx->pc = 0x2CDBE8u;
label_2cdbe8:
    // 0x2cdbe8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2cdbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2cdbec:
    // 0x2cdbec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2cdbecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2cdbf0:
    // 0x2cdbf0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2cdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2cdbf4:
    // 0x2cdbf4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2cdbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2cdbf8:
    // 0x2cdbf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cdbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2cdbfc:
    // 0x2cdbfc: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2cdbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cdc00:
    // 0x2cdc00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cdc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cdc04:
    // 0x2cdc04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cdc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cdc08:
    // 0x2cdc08: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
label_2cdc0c:
    if (ctx->pc == 0x2CDC0Cu) {
        ctx->pc = 0x2CDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC08u;
        // 0x2cdc0c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC10u;
        goto label_2cdc10;
    }
    ctx->pc = 0x2CDC08u;
    {
        const bool branch_taken_0x2cdc08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC08u;
        // 0x2cdc0c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc08) {
            ctx->pc = 0x2CDC38u;
            goto label_2cdc38;
        }
    }
    ctx->pc = 0x2CDC10u;
label_2cdc10:
    // 0x2cdc10: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_2cdc14:
    if (ctx->pc == 0x2CDC14u) {
        ctx->pc = 0x2CDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC10u;
        // 0x2cdc14: 0x8ea20014  lw          $v0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC18u;
        goto label_2cdc18;
    }
    ctx->pc = 0x2CDC10u;
    {
        const bool branch_taken_0x2cdc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC10u;
        // 0x2cdc14: 0x8ea20014  lw          $v0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc10) {
            ctx->pc = 0x2CDBD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cdbd8;
        }
    }
    ctx->pc = 0x2CDC18u;
label_2cdc18:
    // 0x2cdc18: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2cdc18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2cdc1c:
    // 0x2cdc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cdc20:
    // 0x2cdc20: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x2cdc20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2cdc24:
    // 0x2cdc24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cdc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cdc28:
    // 0x2cdc28: 0xc0b2940  jal         func_2CA500
label_2cdc2c:
    if (ctx->pc == 0x2CDC2Cu) {
        ctx->pc = 0x2CDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC28u;
        // 0x2cdc2c: 0x8fa80064  lw          $t0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC30u;
        goto label_2cdc30;
    }
    ctx->pc = 0x2CDC28u;
    SET_GPR_U32(ctx, 31, 0x2CDC30u);
    ctx->pc = 0x2CDC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC28u;
    // 0x2cdc2c: 0x8fa80064  lw          $t0, 0x64($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA500u, 0x2CDC28u, 0x2CDC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC30u;
label_2cdc30:
    // 0x2cdc30: 0x10000012  b           . + 4 + (0x12 << 2)
label_2cdc34:
    if (ctx->pc == 0x2CDC34u) {
        ctx->pc = 0x2CDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC30u;
        // 0x2cdc34: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC38u;
        goto label_2cdc38;
    }
    ctx->pc = 0x2CDC30u;
    {
        const bool branch_taken_0x2cdc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC30u;
        // 0x2cdc34: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc30) {
            ctx->pc = 0x2CDC7Cu;
            goto label_2cdc7c;
        }
    }
    ctx->pc = 0x2CDC38u;
label_2cdc38:
    // 0x2cdc38: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2cdc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cdc3c:
    // 0x2cdc3c: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x2cdc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_2cdc40:
    // 0x2cdc40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2cdc44:
    if (ctx->pc == 0x2CDC44u) {
        ctx->pc = 0x2CDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC40u;
        // 0x2cdc44: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC48u;
        goto label_2cdc48;
    }
    ctx->pc = 0x2CDC40u;
    {
        const bool branch_taken_0x2cdc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC40u;
        // 0x2cdc44: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc40) {
            ctx->pc = 0x2CDC74u;
            goto label_2cdc74;
        }
    }
    ctx->pc = 0x2CDC48u;
label_2cdc48:
    // 0x2cdc48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cdc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cdc4c:
    // 0x2cdc4c: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x2cdc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2cdc50:
    // 0x2cdc50: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2cdc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2cdc54:
    // 0x2cdc54: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2cdc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cdc58:
    // 0x2cdc58: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2cdc58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2cdc5c:
    // 0x2cdc5c: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x2cdc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_2cdc60:
    // 0x2cdc60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cdc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cdc64:
    // 0x2cdc64: 0x40f809  jalr        $v0
label_2cdc68:
    if (ctx->pc == 0x2CDC68u) {
        ctx->pc = 0x2CDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC64u;
        // 0x2cdc68: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC6Cu;
        goto label_2cdc6c;
    }
    ctx->pc = 0x2CDC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CDC6Cu);
        ctx->pc = 0x2CDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC64u;
        // 0x2cdc68: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDC64u, 0x2CDC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDC6Cu;
label_2cdc6c:
    // 0x2cdc6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2cdc70:
    if (ctx->pc == 0x2CDC70u) {
        ctx->pc = 0x2CDC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC6Cu;
        // 0x2cdc70: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC74u;
        goto label_2cdc74;
    }
    ctx->pc = 0x2CDC6Cu;
    {
        const bool branch_taken_0x2cdc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC6Cu;
        // 0x2cdc70: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc6c) {
            ctx->pc = 0x2CDC7Cu;
            goto label_2cdc7c;
        }
    }
    ctx->pc = 0x2CDC74u;
label_2cdc74:
    // 0x2cdc74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdc74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cdc78:
    // 0x2cdc78: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2cdc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2cdc7c:
    // 0x2cdc7c: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2cdc7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2cdc80:
    // 0x2cdc80: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2cdc80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2cdc84:
    // 0x2cdc84: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2cdc84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2cdc88:
    // 0x2cdc88: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2cdc88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2cdc8c:
    // 0x2cdc8c: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x2cdc8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_2cdc90:
    // 0x2cdc90: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2cdc90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2cdc94:
    // 0x2cdc94: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x2cdc94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_2cdc98:
    // 0x2cdc98: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2cdc98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2cdc9c:
    // 0x2cdc9c: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x2cdc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_2cdca0:
    // 0x2cdca0: 0x3e00008  jr          $ra
label_2cdca4:
    if (ctx->pc == 0x2CDCA4u) {
        ctx->pc = 0x2CDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCA0u;
        // 0x2cdca4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCA8u;
        goto label_fallthrough_0x2cdca0;
    }
    ctx->pc = 0x2CDCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCA0u;
        // 0x2cdca4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cdca0:
    ctx->pc = 0x2CDCA8u;
}
