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

// Function: sub_0023B460
// Address: 0x23b460 - 0x23bbc8
void sub_0023B460_0x23b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B460_0x23b460");
#endif

    switch (ctx->pc) {
        case 0x23b460u: goto label_23b460;
        case 0x23b464u: goto label_23b464;
        case 0x23b468u: goto label_23b468;
        case 0x23b46cu: goto label_23b46c;
        case 0x23b470u: goto label_23b470;
        case 0x23b474u: goto label_23b474;
        case 0x23b478u: goto label_23b478;
        case 0x23b47cu: goto label_23b47c;
        case 0x23b480u: goto label_23b480;
        case 0x23b484u: goto label_23b484;
        case 0x23b488u: goto label_23b488;
        case 0x23b48cu: goto label_23b48c;
        case 0x23b490u: goto label_23b490;
        case 0x23b494u: goto label_23b494;
        case 0x23b498u: goto label_23b498;
        case 0x23b49cu: goto label_23b49c;
        case 0x23b4a0u: goto label_23b4a0;
        case 0x23b4a4u: goto label_23b4a4;
        case 0x23b4a8u: goto label_23b4a8;
        case 0x23b4acu: goto label_23b4ac;
        case 0x23b4b0u: goto label_23b4b0;
        case 0x23b4b4u: goto label_23b4b4;
        case 0x23b4b8u: goto label_23b4b8;
        case 0x23b4bcu: goto label_23b4bc;
        case 0x23b4c0u: goto label_23b4c0;
        case 0x23b4c4u: goto label_23b4c4;
        case 0x23b4c8u: goto label_23b4c8;
        case 0x23b4ccu: goto label_23b4cc;
        case 0x23b4d0u: goto label_23b4d0;
        case 0x23b4d4u: goto label_23b4d4;
        case 0x23b4d8u: goto label_23b4d8;
        case 0x23b4dcu: goto label_23b4dc;
        case 0x23b4e0u: goto label_23b4e0;
        case 0x23b4e4u: goto label_23b4e4;
        case 0x23b4e8u: goto label_23b4e8;
        case 0x23b4ecu: goto label_23b4ec;
        case 0x23b4f0u: goto label_23b4f0;
        case 0x23b4f4u: goto label_23b4f4;
        case 0x23b4f8u: goto label_23b4f8;
        case 0x23b4fcu: goto label_23b4fc;
        case 0x23b500u: goto label_23b500;
        case 0x23b504u: goto label_23b504;
        case 0x23b508u: goto label_23b508;
        case 0x23b50cu: goto label_23b50c;
        case 0x23b510u: goto label_23b510;
        case 0x23b514u: goto label_23b514;
        case 0x23b518u: goto label_23b518;
        case 0x23b51cu: goto label_23b51c;
        case 0x23b520u: goto label_23b520;
        case 0x23b524u: goto label_23b524;
        case 0x23b528u: goto label_23b528;
        case 0x23b52cu: goto label_23b52c;
        case 0x23b530u: goto label_23b530;
        case 0x23b534u: goto label_23b534;
        case 0x23b538u: goto label_23b538;
        case 0x23b53cu: goto label_23b53c;
        case 0x23b540u: goto label_23b540;
        case 0x23b544u: goto label_23b544;
        case 0x23b548u: goto label_23b548;
        case 0x23b54cu: goto label_23b54c;
        case 0x23b550u: goto label_23b550;
        case 0x23b554u: goto label_23b554;
        case 0x23b558u: goto label_23b558;
        case 0x23b55cu: goto label_23b55c;
        case 0x23b560u: goto label_23b560;
        case 0x23b564u: goto label_23b564;
        case 0x23b568u: goto label_23b568;
        case 0x23b56cu: goto label_23b56c;
        case 0x23b570u: goto label_23b570;
        case 0x23b574u: goto label_23b574;
        case 0x23b578u: goto label_23b578;
        case 0x23b57cu: goto label_23b57c;
        case 0x23b580u: goto label_23b580;
        case 0x23b584u: goto label_23b584;
        case 0x23b588u: goto label_23b588;
        case 0x23b58cu: goto label_23b58c;
        case 0x23b590u: goto label_23b590;
        case 0x23b594u: goto label_23b594;
        case 0x23b598u: goto label_23b598;
        case 0x23b59cu: goto label_23b59c;
        case 0x23b5a0u: goto label_23b5a0;
        case 0x23b5a4u: goto label_23b5a4;
        case 0x23b5a8u: goto label_23b5a8;
        case 0x23b5acu: goto label_23b5ac;
        case 0x23b5b0u: goto label_23b5b0;
        case 0x23b5b4u: goto label_23b5b4;
        case 0x23b5b8u: goto label_23b5b8;
        case 0x23b5bcu: goto label_23b5bc;
        case 0x23b5c0u: goto label_23b5c0;
        case 0x23b5c4u: goto label_23b5c4;
        case 0x23b5c8u: goto label_23b5c8;
        case 0x23b5ccu: goto label_23b5cc;
        case 0x23b5d0u: goto label_23b5d0;
        case 0x23b5d4u: goto label_23b5d4;
        case 0x23b5d8u: goto label_23b5d8;
        case 0x23b5dcu: goto label_23b5dc;
        case 0x23b5e0u: goto label_23b5e0;
        case 0x23b5e4u: goto label_23b5e4;
        case 0x23b5e8u: goto label_23b5e8;
        case 0x23b5ecu: goto label_23b5ec;
        case 0x23b5f0u: goto label_23b5f0;
        case 0x23b5f4u: goto label_23b5f4;
        case 0x23b5f8u: goto label_23b5f8;
        case 0x23b5fcu: goto label_23b5fc;
        case 0x23b600u: goto label_23b600;
        case 0x23b604u: goto label_23b604;
        case 0x23b608u: goto label_23b608;
        case 0x23b60cu: goto label_23b60c;
        case 0x23b610u: goto label_23b610;
        case 0x23b614u: goto label_23b614;
        case 0x23b618u: goto label_23b618;
        case 0x23b61cu: goto label_23b61c;
        case 0x23b620u: goto label_23b620;
        case 0x23b624u: goto label_23b624;
        case 0x23b628u: goto label_23b628;
        case 0x23b62cu: goto label_23b62c;
        case 0x23b630u: goto label_23b630;
        case 0x23b634u: goto label_23b634;
        case 0x23b638u: goto label_23b638;
        case 0x23b63cu: goto label_23b63c;
        case 0x23b640u: goto label_23b640;
        case 0x23b644u: goto label_23b644;
        case 0x23b648u: goto label_23b648;
        case 0x23b64cu: goto label_23b64c;
        case 0x23b650u: goto label_23b650;
        case 0x23b654u: goto label_23b654;
        case 0x23b658u: goto label_23b658;
        case 0x23b65cu: goto label_23b65c;
        case 0x23b660u: goto label_23b660;
        case 0x23b664u: goto label_23b664;
        case 0x23b668u: goto label_23b668;
        case 0x23b66cu: goto label_23b66c;
        case 0x23b670u: goto label_23b670;
        case 0x23b674u: goto label_23b674;
        case 0x23b678u: goto label_23b678;
        case 0x23b67cu: goto label_23b67c;
        case 0x23b680u: goto label_23b680;
        case 0x23b684u: goto label_23b684;
        case 0x23b688u: goto label_23b688;
        case 0x23b68cu: goto label_23b68c;
        case 0x23b690u: goto label_23b690;
        case 0x23b694u: goto label_23b694;
        case 0x23b698u: goto label_23b698;
        case 0x23b69cu: goto label_23b69c;
        case 0x23b6a0u: goto label_23b6a0;
        case 0x23b6a4u: goto label_23b6a4;
        case 0x23b6a8u: goto label_23b6a8;
        case 0x23b6acu: goto label_23b6ac;
        case 0x23b6b0u: goto label_23b6b0;
        case 0x23b6b4u: goto label_23b6b4;
        case 0x23b6b8u: goto label_23b6b8;
        case 0x23b6bcu: goto label_23b6bc;
        case 0x23b6c0u: goto label_23b6c0;
        case 0x23b6c4u: goto label_23b6c4;
        case 0x23b6c8u: goto label_23b6c8;
        case 0x23b6ccu: goto label_23b6cc;
        case 0x23b6d0u: goto label_23b6d0;
        case 0x23b6d4u: goto label_23b6d4;
        case 0x23b6d8u: goto label_23b6d8;
        case 0x23b6dcu: goto label_23b6dc;
        case 0x23b6e0u: goto label_23b6e0;
        case 0x23b6e4u: goto label_23b6e4;
        case 0x23b6e8u: goto label_23b6e8;
        case 0x23b6ecu: goto label_23b6ec;
        case 0x23b6f0u: goto label_23b6f0;
        case 0x23b6f4u: goto label_23b6f4;
        case 0x23b6f8u: goto label_23b6f8;
        case 0x23b6fcu: goto label_23b6fc;
        case 0x23b700u: goto label_23b700;
        case 0x23b704u: goto label_23b704;
        case 0x23b708u: goto label_23b708;
        case 0x23b70cu: goto label_23b70c;
        case 0x23b710u: goto label_23b710;
        case 0x23b714u: goto label_23b714;
        case 0x23b718u: goto label_23b718;
        case 0x23b71cu: goto label_23b71c;
        case 0x23b720u: goto label_23b720;
        case 0x23b724u: goto label_23b724;
        case 0x23b728u: goto label_23b728;
        case 0x23b72cu: goto label_23b72c;
        case 0x23b730u: goto label_23b730;
        case 0x23b734u: goto label_23b734;
        case 0x23b738u: goto label_23b738;
        case 0x23b73cu: goto label_23b73c;
        case 0x23b740u: goto label_23b740;
        case 0x23b744u: goto label_23b744;
        case 0x23b748u: goto label_23b748;
        case 0x23b74cu: goto label_23b74c;
        case 0x23b750u: goto label_23b750;
        case 0x23b754u: goto label_23b754;
        case 0x23b758u: goto label_23b758;
        case 0x23b75cu: goto label_23b75c;
        case 0x23b760u: goto label_23b760;
        case 0x23b764u: goto label_23b764;
        case 0x23b768u: goto label_23b768;
        case 0x23b76cu: goto label_23b76c;
        case 0x23b770u: goto label_23b770;
        case 0x23b774u: goto label_23b774;
        case 0x23b778u: goto label_23b778;
        case 0x23b77cu: goto label_23b77c;
        case 0x23b780u: goto label_23b780;
        case 0x23b784u: goto label_23b784;
        case 0x23b788u: goto label_23b788;
        case 0x23b78cu: goto label_23b78c;
        case 0x23b790u: goto label_23b790;
        case 0x23b794u: goto label_23b794;
        case 0x23b798u: goto label_23b798;
        case 0x23b79cu: goto label_23b79c;
        case 0x23b7a0u: goto label_23b7a0;
        case 0x23b7a4u: goto label_23b7a4;
        case 0x23b7a8u: goto label_23b7a8;
        case 0x23b7acu: goto label_23b7ac;
        case 0x23b7b0u: goto label_23b7b0;
        case 0x23b7b4u: goto label_23b7b4;
        case 0x23b7b8u: goto label_23b7b8;
        case 0x23b7bcu: goto label_23b7bc;
        case 0x23b7c0u: goto label_23b7c0;
        case 0x23b7c4u: goto label_23b7c4;
        case 0x23b7c8u: goto label_23b7c8;
        case 0x23b7ccu: goto label_23b7cc;
        case 0x23b7d0u: goto label_23b7d0;
        case 0x23b7d4u: goto label_23b7d4;
        case 0x23b7d8u: goto label_23b7d8;
        case 0x23b7dcu: goto label_23b7dc;
        case 0x23b7e0u: goto label_23b7e0;
        case 0x23b7e4u: goto label_23b7e4;
        case 0x23b7e8u: goto label_23b7e8;
        case 0x23b7ecu: goto label_23b7ec;
        case 0x23b7f0u: goto label_23b7f0;
        case 0x23b7f4u: goto label_23b7f4;
        case 0x23b7f8u: goto label_23b7f8;
        case 0x23b7fcu: goto label_23b7fc;
        case 0x23b800u: goto label_23b800;
        case 0x23b804u: goto label_23b804;
        case 0x23b808u: goto label_23b808;
        case 0x23b80cu: goto label_23b80c;
        case 0x23b810u: goto label_23b810;
        case 0x23b814u: goto label_23b814;
        case 0x23b818u: goto label_23b818;
        case 0x23b81cu: goto label_23b81c;
        case 0x23b820u: goto label_23b820;
        case 0x23b824u: goto label_23b824;
        case 0x23b828u: goto label_23b828;
        case 0x23b82cu: goto label_23b82c;
        case 0x23b830u: goto label_23b830;
        case 0x23b834u: goto label_23b834;
        case 0x23b838u: goto label_23b838;
        case 0x23b83cu: goto label_23b83c;
        case 0x23b840u: goto label_23b840;
        case 0x23b844u: goto label_23b844;
        case 0x23b848u: goto label_23b848;
        case 0x23b84cu: goto label_23b84c;
        case 0x23b850u: goto label_23b850;
        case 0x23b854u: goto label_23b854;
        case 0x23b858u: goto label_23b858;
        case 0x23b85cu: goto label_23b85c;
        case 0x23b860u: goto label_23b860;
        case 0x23b864u: goto label_23b864;
        case 0x23b868u: goto label_23b868;
        case 0x23b86cu: goto label_23b86c;
        case 0x23b870u: goto label_23b870;
        case 0x23b874u: goto label_23b874;
        case 0x23b878u: goto label_23b878;
        case 0x23b87cu: goto label_23b87c;
        case 0x23b880u: goto label_23b880;
        case 0x23b884u: goto label_23b884;
        case 0x23b888u: goto label_23b888;
        case 0x23b88cu: goto label_23b88c;
        case 0x23b890u: goto label_23b890;
        case 0x23b894u: goto label_23b894;
        case 0x23b898u: goto label_23b898;
        case 0x23b89cu: goto label_23b89c;
        case 0x23b8a0u: goto label_23b8a0;
        case 0x23b8a4u: goto label_23b8a4;
        case 0x23b8a8u: goto label_23b8a8;
        case 0x23b8acu: goto label_23b8ac;
        case 0x23b8b0u: goto label_23b8b0;
        case 0x23b8b4u: goto label_23b8b4;
        case 0x23b8b8u: goto label_23b8b8;
        case 0x23b8bcu: goto label_23b8bc;
        case 0x23b8c0u: goto label_23b8c0;
        case 0x23b8c4u: goto label_23b8c4;
        case 0x23b8c8u: goto label_23b8c8;
        case 0x23b8ccu: goto label_23b8cc;
        case 0x23b8d0u: goto label_23b8d0;
        case 0x23b8d4u: goto label_23b8d4;
        case 0x23b8d8u: goto label_23b8d8;
        case 0x23b8dcu: goto label_23b8dc;
        case 0x23b8e0u: goto label_23b8e0;
        case 0x23b8e4u: goto label_23b8e4;
        case 0x23b8e8u: goto label_23b8e8;
        case 0x23b8ecu: goto label_23b8ec;
        case 0x23b8f0u: goto label_23b8f0;
        case 0x23b8f4u: goto label_23b8f4;
        case 0x23b8f8u: goto label_23b8f8;
        case 0x23b8fcu: goto label_23b8fc;
        case 0x23b900u: goto label_23b900;
        case 0x23b904u: goto label_23b904;
        case 0x23b908u: goto label_23b908;
        case 0x23b90cu: goto label_23b90c;
        case 0x23b910u: goto label_23b910;
        case 0x23b914u: goto label_23b914;
        case 0x23b918u: goto label_23b918;
        case 0x23b91cu: goto label_23b91c;
        case 0x23b920u: goto label_23b920;
        case 0x23b924u: goto label_23b924;
        case 0x23b928u: goto label_23b928;
        case 0x23b92cu: goto label_23b92c;
        case 0x23b930u: goto label_23b930;
        case 0x23b934u: goto label_23b934;
        case 0x23b938u: goto label_23b938;
        case 0x23b93cu: goto label_23b93c;
        case 0x23b940u: goto label_23b940;
        case 0x23b944u: goto label_23b944;
        case 0x23b948u: goto label_23b948;
        case 0x23b94cu: goto label_23b94c;
        case 0x23b950u: goto label_23b950;
        case 0x23b954u: goto label_23b954;
        case 0x23b958u: goto label_23b958;
        case 0x23b95cu: goto label_23b95c;
        case 0x23b960u: goto label_23b960;
        case 0x23b964u: goto label_23b964;
        case 0x23b968u: goto label_23b968;
        case 0x23b96cu: goto label_23b96c;
        case 0x23b970u: goto label_23b970;
        case 0x23b974u: goto label_23b974;
        case 0x23b978u: goto label_23b978;
        case 0x23b97cu: goto label_23b97c;
        case 0x23b980u: goto label_23b980;
        case 0x23b984u: goto label_23b984;
        case 0x23b988u: goto label_23b988;
        case 0x23b98cu: goto label_23b98c;
        case 0x23b990u: goto label_23b990;
        case 0x23b994u: goto label_23b994;
        case 0x23b998u: goto label_23b998;
        case 0x23b99cu: goto label_23b99c;
        case 0x23b9a0u: goto label_23b9a0;
        case 0x23b9a4u: goto label_23b9a4;
        case 0x23b9a8u: goto label_23b9a8;
        case 0x23b9acu: goto label_23b9ac;
        case 0x23b9b0u: goto label_23b9b0;
        case 0x23b9b4u: goto label_23b9b4;
        case 0x23b9b8u: goto label_23b9b8;
        case 0x23b9bcu: goto label_23b9bc;
        case 0x23b9c0u: goto label_23b9c0;
        case 0x23b9c4u: goto label_23b9c4;
        case 0x23b9c8u: goto label_23b9c8;
        case 0x23b9ccu: goto label_23b9cc;
        case 0x23b9d0u: goto label_23b9d0;
        case 0x23b9d4u: goto label_23b9d4;
        case 0x23b9d8u: goto label_23b9d8;
        case 0x23b9dcu: goto label_23b9dc;
        case 0x23b9e0u: goto label_23b9e0;
        case 0x23b9e4u: goto label_23b9e4;
        case 0x23b9e8u: goto label_23b9e8;
        case 0x23b9ecu: goto label_23b9ec;
        case 0x23b9f0u: goto label_23b9f0;
        case 0x23b9f4u: goto label_23b9f4;
        case 0x23b9f8u: goto label_23b9f8;
        case 0x23b9fcu: goto label_23b9fc;
        case 0x23ba00u: goto label_23ba00;
        case 0x23ba04u: goto label_23ba04;
        case 0x23ba08u: goto label_23ba08;
        case 0x23ba0cu: goto label_23ba0c;
        case 0x23ba10u: goto label_23ba10;
        case 0x23ba14u: goto label_23ba14;
        case 0x23ba18u: goto label_23ba18;
        case 0x23ba1cu: goto label_23ba1c;
        case 0x23ba20u: goto label_23ba20;
        case 0x23ba24u: goto label_23ba24;
        case 0x23ba28u: goto label_23ba28;
        case 0x23ba2cu: goto label_23ba2c;
        case 0x23ba30u: goto label_23ba30;
        case 0x23ba34u: goto label_23ba34;
        case 0x23ba38u: goto label_23ba38;
        case 0x23ba3cu: goto label_23ba3c;
        case 0x23ba40u: goto label_23ba40;
        case 0x23ba44u: goto label_23ba44;
        case 0x23ba48u: goto label_23ba48;
        case 0x23ba4cu: goto label_23ba4c;
        case 0x23ba50u: goto label_23ba50;
        case 0x23ba54u: goto label_23ba54;
        case 0x23ba58u: goto label_23ba58;
        case 0x23ba5cu: goto label_23ba5c;
        case 0x23ba60u: goto label_23ba60;
        case 0x23ba64u: goto label_23ba64;
        case 0x23ba68u: goto label_23ba68;
        case 0x23ba6cu: goto label_23ba6c;
        case 0x23ba70u: goto label_23ba70;
        case 0x23ba74u: goto label_23ba74;
        case 0x23ba78u: goto label_23ba78;
        case 0x23ba7cu: goto label_23ba7c;
        case 0x23ba80u: goto label_23ba80;
        case 0x23ba84u: goto label_23ba84;
        case 0x23ba88u: goto label_23ba88;
        case 0x23ba8cu: goto label_23ba8c;
        case 0x23ba90u: goto label_23ba90;
        case 0x23ba94u: goto label_23ba94;
        case 0x23ba98u: goto label_23ba98;
        case 0x23ba9cu: goto label_23ba9c;
        case 0x23baa0u: goto label_23baa0;
        case 0x23baa4u: goto label_23baa4;
        case 0x23baa8u: goto label_23baa8;
        case 0x23baacu: goto label_23baac;
        case 0x23bab0u: goto label_23bab0;
        case 0x23bab4u: goto label_23bab4;
        case 0x23bab8u: goto label_23bab8;
        case 0x23babcu: goto label_23babc;
        case 0x23bac0u: goto label_23bac0;
        case 0x23bac4u: goto label_23bac4;
        case 0x23bac8u: goto label_23bac8;
        case 0x23baccu: goto label_23bacc;
        case 0x23bad0u: goto label_23bad0;
        case 0x23bad4u: goto label_23bad4;
        case 0x23bad8u: goto label_23bad8;
        case 0x23badcu: goto label_23badc;
        case 0x23bae0u: goto label_23bae0;
        case 0x23bae4u: goto label_23bae4;
        case 0x23bae8u: goto label_23bae8;
        case 0x23baecu: goto label_23baec;
        case 0x23baf0u: goto label_23baf0;
        case 0x23baf4u: goto label_23baf4;
        case 0x23baf8u: goto label_23baf8;
        case 0x23bafcu: goto label_23bafc;
        case 0x23bb00u: goto label_23bb00;
        case 0x23bb04u: goto label_23bb04;
        case 0x23bb08u: goto label_23bb08;
        case 0x23bb0cu: goto label_23bb0c;
        case 0x23bb10u: goto label_23bb10;
        case 0x23bb14u: goto label_23bb14;
        case 0x23bb18u: goto label_23bb18;
        case 0x23bb1cu: goto label_23bb1c;
        case 0x23bb20u: goto label_23bb20;
        case 0x23bb24u: goto label_23bb24;
        case 0x23bb28u: goto label_23bb28;
        case 0x23bb2cu: goto label_23bb2c;
        case 0x23bb30u: goto label_23bb30;
        case 0x23bb34u: goto label_23bb34;
        case 0x23bb38u: goto label_23bb38;
        case 0x23bb3cu: goto label_23bb3c;
        case 0x23bb40u: goto label_23bb40;
        case 0x23bb44u: goto label_23bb44;
        case 0x23bb48u: goto label_23bb48;
        case 0x23bb4cu: goto label_23bb4c;
        case 0x23bb50u: goto label_23bb50;
        case 0x23bb54u: goto label_23bb54;
        case 0x23bb58u: goto label_23bb58;
        case 0x23bb5cu: goto label_23bb5c;
        case 0x23bb60u: goto label_23bb60;
        case 0x23bb64u: goto label_23bb64;
        case 0x23bb68u: goto label_23bb68;
        case 0x23bb6cu: goto label_23bb6c;
        case 0x23bb70u: goto label_23bb70;
        case 0x23bb74u: goto label_23bb74;
        case 0x23bb78u: goto label_23bb78;
        case 0x23bb7cu: goto label_23bb7c;
        case 0x23bb80u: goto label_23bb80;
        case 0x23bb84u: goto label_23bb84;
        case 0x23bb88u: goto label_23bb88;
        case 0x23bb8cu: goto label_23bb8c;
        case 0x23bb90u: goto label_23bb90;
        case 0x23bb94u: goto label_23bb94;
        case 0x23bb98u: goto label_23bb98;
        case 0x23bb9cu: goto label_23bb9c;
        case 0x23bba0u: goto label_23bba0;
        case 0x23bba4u: goto label_23bba4;
        case 0x23bba8u: goto label_23bba8;
        case 0x23bbacu: goto label_23bbac;
        case 0x23bbb0u: goto label_23bbb0;
        case 0x23bbb4u: goto label_23bbb4;
        case 0x23bbb8u: goto label_23bbb8;
        case 0x23bbbcu: goto label_23bbbc;
        case 0x23bbc0u: goto label_23bbc0;
        case 0x23bbc4u: goto label_23bbc4;
        default: break;
    }

    ctx->pc = 0x23b460u;

label_23b460:
    // 0x23b460: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23b464:
    // 0x23b464: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23b468:
    // 0x23b468: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23b46c:
    // 0x23b46c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23b470:
    // 0x23b470: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23b470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b474:
    // 0x23b474: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23b474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23b478:
    // 0x23b478: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23b478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b47c:
    // 0x23b47c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23b480:
    // 0x23b480: 0x26710164  addiu       $s1, $s3, 0x164
    ctx->pc = 0x23b480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 356));
label_23b484:
    // 0x23b484: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23b488:
    // 0x23b488: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23b488u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23b48c:
    // 0x23b48c: 0x261056c0  addiu       $s0, $s0, 0x56C0
    ctx->pc = 0x23b48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22208));
label_23b490:
    // 0x23b490: 0x26740014  addiu       $s4, $s3, 0x14
    ctx->pc = 0x23b490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_23b494:
    // 0x23b494: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x23b494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_23b498:
    // 0x23b498: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b49c:
    // 0x23b49c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23b4a0:
    // 0x23b4a0: 0xc09038e  jal         func_240E38
label_23b4a4:
    if (ctx->pc == 0x23B4A4u) {
        ctx->pc = 0x23B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4A0u;
        // 0x23b4a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4A8u;
        goto label_23b4a8;
    }
    ctx->pc = 0x23B4A0u;
    SET_GPR_U32(ctx, 31, 0x23B4A8u);
    ctx->pc = 0x23B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B4A0u;
    // 0x23b4a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E38u, 0x23B4A0u, 0x23B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4A8u;
label_23b4a8:
    // 0x23b4a8: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x23b4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23b4ac:
    // 0x23b4ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b4b0:
    // 0x23b4b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23b4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b4b4:
    // 0x23b4b4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23b4b8:
    // 0x23b4b8: 0xc08b5ac  jal         func_22D6B0
label_23b4bc:
    if (ctx->pc == 0x23B4BCu) {
        ctx->pc = 0x23B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4B8u;
        // 0x23b4bc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4C0u;
        goto label_23b4c0;
    }
    ctx->pc = 0x23B4B8u;
    SET_GPR_U32(ctx, 31, 0x23B4C0u);
    ctx->pc = 0x23B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B4B8u;
    // 0x23b4bc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23B4B8u, 0x23B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4C0u;
label_23b4c0:
    // 0x23b4c0: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x23b4c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_23b4c4:
    // 0x23b4c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b4c8:
    // 0x23b4c8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23b4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23b4cc:
    // 0x23b4cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23b4d0:
    // 0x23b4d0: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x23b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_23b4d4:
    // 0x23b4d4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x23b4d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23b4d8:
    // 0x23b4d8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_23b4dc:
    if (ctx->pc == 0x23B4DCu) {
        ctx->pc = 0x23B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4D8u;
        // 0x23b4dc: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4E0u;
        goto label_23b4e0;
    }
    ctx->pc = 0x23B4D8u;
    {
        const bool branch_taken_0x23b4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4D8u;
        // 0x23b4dc: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4d8) {
            ctx->pc = 0x23B594u;
            goto label_23b594;
        }
    }
    ctx->pc = 0x23B4E0u;
label_23b4e0:
    // 0x23b4e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b4e4:
    // 0x23b4e4: 0x24425700  addiu       $v0, $v0, 0x5700
    ctx->pc = 0x23b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22272));
label_23b4e8:
    // 0x23b4e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b4ec:
    // 0x23b4ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b4f0:
    // 0x23b4f0: 0x800008  jr          $a0
label_23b4f4:
    if (ctx->pc == 0x23B4F4u) {
        ctx->pc = 0x23B4F8u;
        goto label_23b4f8;
    }
    ctx->pc = 0x23B4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B4F8u: goto label_23b4f8;
            case 0x23B524u: goto label_23b524;
            case 0x23B530u: goto label_23b530;
            case 0x23B55Cu: goto label_23b55c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B4F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B4F8u;
label_23b4f8:
    // 0x23b4f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23b4fc:
    // 0x23b4fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23b4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b500:
    // 0x23b500: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b504:
    // 0x23b504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23b504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b508:
    // 0x23b508: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b508u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b50c:
    // 0x23b50c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b50cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b510:
    // 0x23b510: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b514:
    // 0x23b514: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b518:
    // 0x23b518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b51c:
    // 0x23b51c: 0x808eef2  j           func_23BBC8
label_23b520:
    if (ctx->pc == 0x23B520u) {
        ctx->pc = 0x23B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B51Cu;
        // 0x23b520: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B524u;
        goto label_23b524;
    }
    ctx->pc = 0x23B51Cu;
    ctx->pc = 0x23B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B51Cu;
    // 0x23b520: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B524u;
label_23b524:
    // 0x23b524: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x23b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_23b528:
    // 0x23b528: 0x40f809  jalr        $v0
label_23b52c:
    if (ctx->pc == 0x23B52Cu) {
        ctx->pc = 0x23B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B528u;
        // 0x23b52c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B530u;
        goto label_23b530;
    }
    ctx->pc = 0x23B528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B530u);
        ctx->pc = 0x23B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B528u;
        // 0x23b52c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B528u, 0x23B530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B530u;
label_23b530:
    // 0x23b530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23b534:
    // 0x23b534: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23b534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b538:
    // 0x23b538: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b53c:
    // 0x23b53c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23b53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b540:
    // 0x23b540: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b540u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b544:
    // 0x23b544: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b548:
    // 0x23b548: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b54c:
    // 0x23b54c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b54cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b550:
    // 0x23b550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b554:
    // 0x23b554: 0x808eef2  j           func_23BBC8
label_23b558:
    if (ctx->pc == 0x23B558u) {
        ctx->pc = 0x23B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B554u;
        // 0x23b558: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B55Cu;
        goto label_23b55c;
    }
    ctx->pc = 0x23B554u;
    ctx->pc = 0x23B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B554u;
    // 0x23b558: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B55Cu;
label_23b55c:
    // 0x23b55c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x23b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_23b560:
    // 0x23b560: 0x40f809  jalr        $v0
label_23b564:
    if (ctx->pc == 0x23B564u) {
        ctx->pc = 0x23B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B560u;
        // 0x23b564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B568u;
        goto label_23b568;
    }
    ctx->pc = 0x23B560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B568u);
        ctx->pc = 0x23B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B560u;
        // 0x23b564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B560u, 0x23B568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B568u;
label_23b568:
    // 0x23b568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23b56c:
    // 0x23b56c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23b56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b570:
    // 0x23b570: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b574:
    // 0x23b574: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23b574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b578:
    // 0x23b578: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b578u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b57c:
    // 0x23b57c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b580:
    // 0x23b580: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b584:
    // 0x23b584: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b588:
    // 0x23b588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b58c:
    // 0x23b58c: 0x808eef2  j           func_23BBC8
label_23b590:
    if (ctx->pc == 0x23B590u) {
        ctx->pc = 0x23B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B58Cu;
        // 0x23b590: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B594u;
        goto label_23b594;
    }
    ctx->pc = 0x23B58Cu;
    ctx->pc = 0x23B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B58Cu;
    // 0x23b590: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B594u;
label_23b594:
    // 0x23b594: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23b594u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23b598:
    // 0x23b598: 0xc09038e  jal         func_240E38
label_23b59c:
    if (ctx->pc == 0x23B59Cu) {
        ctx->pc = 0x23B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B598u;
        // 0x23b59c: 0x261056d8  addiu       $s0, $s0, 0x56D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5A0u;
        goto label_23b5a0;
    }
    ctx->pc = 0x23B598u;
    SET_GPR_U32(ctx, 31, 0x23B5A0u);
    ctx->pc = 0x23B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B598u;
    // 0x23b59c: 0x261056d8  addiu       $s0, $s0, 0x56D8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E38u, 0x23B598u, 0x23B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5A0u;
label_23b5a0:
    // 0x23b5a0: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x23b5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23b5a4:
    // 0x23b5a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b5a8:
    // 0x23b5a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23b5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b5ac:
    // 0x23b5ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b5b0:
    // 0x23b5b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b5b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b5b4:
    // 0x23b5b4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23b5b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b5b8:
    // 0x23b5b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b5b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b5bc:
    // 0x23b5bc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23b5c0:
    // 0x23b5c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b5c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b5c4:
    // 0x23b5c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b5c8:
    // 0x23b5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b5cc:
    // 0x23b5cc: 0x808b5ac  j           func_22D6B0
label_23b5d0:
    if (ctx->pc == 0x23B5D0u) {
        ctx->pc = 0x23B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5CCu;
        // 0x23b5d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5D4u;
        goto label_23b5d4;
    }
    ctx->pc = 0x23B5CCu;
    ctx->pc = 0x23B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5CCu;
    // 0x23b5d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x23B5D4u;
label_23b5d4:
    // 0x23b5d4: 0x0  nop
    ctx->pc = 0x23b5d4u;
    // NOP
label_23b5d8:
    // 0x23b5d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23b5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23b5dc:
    // 0x23b5dc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23b5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23b5e0:
    // 0x23b5e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23b5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23b5e4:
    // 0x23b5e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23b5e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b5e8:
    // 0x23b5e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23b5ec:
    // 0x23b5ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23b5ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b5f0:
    // 0x23b5f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23b5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23b5f4:
    // 0x23b5f4: 0x26720014  addiu       $s2, $s3, 0x14
    ctx->pc = 0x23b5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_23b5f8:
    // 0x23b5f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23b5fc:
    // 0x23b5fc: 0x26710164  addiu       $s1, $s3, 0x164
    ctx->pc = 0x23b5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 356));
label_23b600:
    // 0x23b600: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23b600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23b604:
    // 0x23b604: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23b604u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23b608:
    // 0x23b608: 0x26105720  addiu       $s0, $s0, 0x5720
    ctx->pc = 0x23b608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22304));
label_23b60c:
    // 0x23b60c: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x23b60cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23b610:
    // 0x23b610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b614:
    // 0x23b614: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23b618:
    // 0x23b618: 0xc09038e  jal         func_240E38
label_23b61c:
    if (ctx->pc == 0x23B61Cu) {
        ctx->pc = 0x23B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B618u;
        // 0x23b61c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B620u;
        goto label_23b620;
    }
    ctx->pc = 0x23B618u;
    SET_GPR_U32(ctx, 31, 0x23B620u);
    ctx->pc = 0x23B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B618u;
    // 0x23b61c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E38u, 0x23B618u, 0x23B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B620u;
label_23b620:
    // 0x23b620: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23b620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23b624:
    // 0x23b624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b628:
    // 0x23b628: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23b628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23b62c:
    // 0x23b62c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23b62cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b630:
    // 0x23b630: 0xc08b5ac  jal         func_22D6B0
label_23b634:
    if (ctx->pc == 0x23B634u) {
        ctx->pc = 0x23B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B630u;
        // 0x23b634: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B638u;
        goto label_23b638;
    }
    ctx->pc = 0x23B630u;
    SET_GPR_U32(ctx, 31, 0x23B638u);
    ctx->pc = 0x23B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B630u;
    // 0x23b634: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23B630u, 0x23B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B638u;
label_23b638:
    // 0x23b638: 0x92850002  lbu         $a1, 0x2($s4)
    ctx->pc = 0x23b638u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23b63c:
    // 0x23b63c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23b640:
    // 0x23b640: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23b640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23b644:
    // 0x23b644: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23b644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23b648:
    // 0x23b648: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x23b648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_23b64c:
    // 0x23b64c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_23b650:
    if (ctx->pc == 0x23B650u) {
        ctx->pc = 0x23B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B64Cu;
        // 0x23b650: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B654u;
        goto label_23b654;
    }
    ctx->pc = 0x23B64Cu;
    {
        const bool branch_taken_0x23b64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B64Cu;
        // 0x23b650: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b64c) {
            ctx->pc = 0x23B73Cu;
            goto label_23b73c;
        }
    }
    ctx->pc = 0x23B654u;
label_23b654:
    // 0x23b654: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b658:
    // 0x23b658: 0x24425740  addiu       $v0, $v0, 0x5740
    ctx->pc = 0x23b658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22336));
label_23b65c:
    // 0x23b65c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b660:
    // 0x23b660: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b664:
    // 0x23b664: 0x800008  jr          $a0
label_23b668:
    if (ctx->pc == 0x23B668u) {
        ctx->pc = 0x23B66Cu;
        goto label_23b66c;
    }
    ctx->pc = 0x23B664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B66Cu: goto label_23b66c;
            case 0x23B6A4u: goto label_23b6a4;
            case 0x23B710u: goto label_23b710;
            case 0x23B73Cu: goto label_23b73c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B664u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B66Cu;
label_23b66c:
    // 0x23b66c: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x23b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_23b670:
    // 0x23b670: 0x40f809  jalr        $v0
label_23b674:
    if (ctx->pc == 0x23B674u) {
        ctx->pc = 0x23B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B670u;
        // 0x23b674: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B678u;
        goto label_23b678;
    }
    ctx->pc = 0x23B670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B678u);
        ctx->pc = 0x23B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B670u;
        // 0x23b674: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B670u, 0x23B678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B678u;
label_23b678:
    // 0x23b678: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b67c:
    // 0x23b67c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23b67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b680:
    // 0x23b680: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b684:
    // 0x23b684: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23b684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b688:
    // 0x23b688: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b688u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b68c:
    // 0x23b68c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b68cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b690:
    // 0x23b690: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b694:
    // 0x23b694: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b698:
    // 0x23b698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b69c:
    // 0x23b69c: 0x808eef2  j           func_23BBC8
label_23b6a0:
    if (ctx->pc == 0x23B6A0u) {
        ctx->pc = 0x23B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B69Cu;
        // 0x23b6a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6A4u;
        goto label_23b6a4;
    }
    ctx->pc = 0x23B69Cu;
    ctx->pc = 0x23B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B69Cu;
    // 0x23b6a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B6A4u;
label_23b6a4:
    // 0x23b6a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23b6a8:
    // 0x23b6a8: 0x244250a8  addiu       $v0, $v0, 0x50A8
    ctx->pc = 0x23b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20648));
label_23b6ac:
    // 0x23b6ac: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
label_23b6b0:
    if (ctx->pc == 0x23B6B0u) {
        ctx->pc = 0x23B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6ACu;
        // 0x23b6b0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6B4u;
        goto label_23b6b4;
    }
    ctx->pc = 0x23B6ACu;
    {
        const bool branch_taken_0x23b6ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6ACu;
        // 0x23b6b0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6ac) {
            ctx->pc = 0x23B6C0u;
            goto label_23b6c0;
        }
    }
    ctx->pc = 0x23B6B4u;
label_23b6b4:
    // 0x23b6b4: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x23b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
label_23b6b8:
    // 0x23b6b8: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
label_23b6bc:
    if (ctx->pc == 0x23B6BCu) {
        ctx->pc = 0x23B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6B8u;
        // 0x23b6bc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6C0u;
        goto label_23b6c0;
    }
    ctx->pc = 0x23B6B8u;
    {
        const bool branch_taken_0x23b6b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6B8u;
        // 0x23b6bc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6b8) {
            ctx->pc = 0x23B6CCu;
            goto label_23b6cc;
        }
    }
    ctx->pc = 0x23B6C0u;
label_23b6c0:
    // 0x23b6c0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23b6c4:
    // 0x23b6c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_23b6c8:
    if (ctx->pc == 0x23B6C8u) {
        ctx->pc = 0x23B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6C4u;
        // 0x23b6c8: 0x8e6302d8  lw          $v1, 0x2D8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6CCu;
        goto label_23b6cc;
    }
    ctx->pc = 0x23B6C4u;
    {
        const bool branch_taken_0x23b6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6C4u;
        // 0x23b6c8: 0x8e6302d8  lw          $v1, 0x2D8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6c4) {
            ctx->pc = 0x23B6D0u;
            goto label_23b6d0;
        }
    }
    ctx->pc = 0x23B6CCu;
label_23b6cc:
    // 0x23b6cc: 0x8e6302ac  lw          $v1, 0x2AC($s3)
    ctx->pc = 0x23b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 684)));
label_23b6d0:
    // 0x23b6d0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_23b6d4:
    // 0x23b6d4: 0xac430180  sw          $v1, 0x180($v0)
    ctx->pc = 0x23b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 3));
label_23b6d8:
    // 0x23b6d8: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x23b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_23b6dc:
    // 0x23b6dc: 0x40f809  jalr        $v0
label_23b6e0:
    if (ctx->pc == 0x23B6E0u) {
        ctx->pc = 0x23B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6DCu;
        // 0x23b6e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6E4u;
        goto label_23b6e4;
    }
    ctx->pc = 0x23B6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B6E4u);
        ctx->pc = 0x23B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6DCu;
        // 0x23b6e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B6DCu, 0x23B6E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B6E4u;
label_23b6e4:
    // 0x23b6e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b6e8:
    // 0x23b6e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23b6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b6ec:
    // 0x23b6ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b6f0:
    // 0x23b6f0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x23b6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23b6f4:
    // 0x23b6f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b6f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b6f8:
    // 0x23b6f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b6f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b6fc:
    // 0x23b6fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b6fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b700:
    // 0x23b700: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b704:
    // 0x23b704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b708:
    // 0x23b708: 0x808eef2  j           func_23BBC8
label_23b70c:
    if (ctx->pc == 0x23B70Cu) {
        ctx->pc = 0x23B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B708u;
        // 0x23b70c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B710u;
        goto label_23b710;
    }
    ctx->pc = 0x23B708u;
    ctx->pc = 0x23B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B708u;
    // 0x23b70c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B710u;
label_23b710:
    // 0x23b710: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b714:
    // 0x23b714: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23b714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b718:
    // 0x23b718: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b71c:
    // 0x23b71c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x23b71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23b720:
    // 0x23b720: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b720u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b724:
    // 0x23b724: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b728:
    // 0x23b728: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b72c:
    // 0x23b72c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b730:
    // 0x23b730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b734:
    // 0x23b734: 0x808eef2  j           func_23BBC8
label_23b738:
    if (ctx->pc == 0x23B738u) {
        ctx->pc = 0x23B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B734u;
        // 0x23b738: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B73Cu;
        goto label_23b73c;
    }
    ctx->pc = 0x23B734u;
    ctx->pc = 0x23B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B734u;
    // 0x23b738: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B73Cu;
label_23b73c:
    // 0x23b73c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b740:
    // 0x23b740: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b744:
    // 0x23b744: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b748:
    // 0x23b748: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b74c:
    // 0x23b74c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b74cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b750:
    // 0x23b750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b754:
    // 0x23b754: 0x3e00008  jr          $ra
label_23b758:
    if (ctx->pc == 0x23B758u) {
        ctx->pc = 0x23B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B754u;
        // 0x23b758: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B75Cu;
        goto label_23b75c;
    }
    ctx->pc = 0x23B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B754u;
        // 0x23b758: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B75Cu;
label_23b75c:
    // 0x23b75c: 0x0  nop
    ctx->pc = 0x23b75cu;
    // NOP
label_23b760:
    // 0x23b760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23b764:
    // 0x23b764: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23b768:
    // 0x23b768: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23b76c:
    // 0x23b76c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23b76cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b770:
    // 0x23b770: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23b774:
    // 0x23b774: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23b774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b778:
    // 0x23b778: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23b778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23b77c:
    // 0x23b77c: 0x26920014  addiu       $s2, $s4, 0x14
    ctx->pc = 0x23b77cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_23b780:
    // 0x23b780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23b784:
    // 0x23b784: 0x26910164  addiu       $s1, $s4, 0x164
    ctx->pc = 0x23b784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 356));
label_23b788:
    // 0x23b788: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23b788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23b78c:
    // 0x23b78c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23b78cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23b790:
    // 0x23b790: 0x26105768  addiu       $s0, $s0, 0x5768
    ctx->pc = 0x23b790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22376));
label_23b794:
    // 0x23b794: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x23b794u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23b798:
    // 0x23b798: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b79c:
    // 0x23b79c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23b7a0:
    // 0x23b7a0: 0xc09038e  jal         func_240E38
label_23b7a4:
    if (ctx->pc == 0x23B7A4u) {
        ctx->pc = 0x23B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7A0u;
        // 0x23b7a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7A8u;
        goto label_23b7a8;
    }
    ctx->pc = 0x23B7A0u;
    SET_GPR_U32(ctx, 31, 0x23B7A8u);
    ctx->pc = 0x23B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B7A0u;
    // 0x23b7a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E38u, 0x23B7A0u, 0x23B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7A8u;
label_23b7a8:
    // 0x23b7a8: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x23b7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_23b7ac:
    // 0x23b7ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b7b0:
    // 0x23b7b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23b7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23b7b4:
    // 0x23b7b4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23b7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b7b8:
    // 0x23b7b8: 0xc08b5ac  jal         func_22D6B0
label_23b7bc:
    if (ctx->pc == 0x23B7BCu) {
        ctx->pc = 0x23B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7B8u;
        // 0x23b7bc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7C0u;
        goto label_23b7c0;
    }
    ctx->pc = 0x23B7B8u;
    SET_GPR_U32(ctx, 31, 0x23B7C0u);
    ctx->pc = 0x23B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B7B8u;
    // 0x23b7bc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23B7B8u, 0x23B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7C0u;
label_23b7c0:
    // 0x23b7c0: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x23b7c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23b7c4:
    // 0x23b7c4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23b7c8:
    // 0x23b7c8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23b7c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23b7cc:
    // 0x23b7cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23b7d0:
    // 0x23b7d0: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x23b7d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_23b7d4:
    // 0x23b7d4: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_23b7d8:
    if (ctx->pc == 0x23B7D8u) {
        ctx->pc = 0x23B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7D4u;
        // 0x23b7d8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7DCu;
        goto label_23b7dc;
    }
    ctx->pc = 0x23B7D4u;
    {
        const bool branch_taken_0x23b7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7D4u;
        // 0x23b7d8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7d4) {
            ctx->pc = 0x23B92Cu;
            goto label_23b92c;
        }
    }
    ctx->pc = 0x23B7DCu;
label_23b7dc:
    // 0x23b7dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b7e0:
    // 0x23b7e0: 0x24425780  addiu       $v0, $v0, 0x5780
    ctx->pc = 0x23b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22400));
label_23b7e4:
    // 0x23b7e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b7e8:
    // 0x23b7e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b7ec:
    // 0x23b7ec: 0x800008  jr          $a0
label_23b7f0:
    if (ctx->pc == 0x23B7F0u) {
        ctx->pc = 0x23B7F4u;
        goto label_23b7f4;
    }
    ctx->pc = 0x23B7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B7F4u: goto label_23b7f4;
            case 0x23B82Cu: goto label_23b82c;
            case 0x23B858u: goto label_23b858;
            case 0x23B884u: goto label_23b884;
            case 0x23B894u: goto label_23b894;
            case 0x23B92Cu: goto label_23b92c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B7ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23B7F4u;
label_23b7f4:
    // 0x23b7f4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x23b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_23b7f8:
    // 0x23b7f8: 0x40f809  jalr        $v0
label_23b7fc:
    if (ctx->pc == 0x23B7FCu) {
        ctx->pc = 0x23B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7F8u;
        // 0x23b7fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B800u;
        goto label_23b800;
    }
    ctx->pc = 0x23B7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B800u);
        ctx->pc = 0x23B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7F8u;
        // 0x23b7fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B7F8u, 0x23B800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B800u;
label_23b800:
    // 0x23b800: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23b800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b804:
    // 0x23b804: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23b804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b808:
    // 0x23b808: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b80c:
    // 0x23b80c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23b80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b810:
    // 0x23b810: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b810u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b814:
    // 0x23b814: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b818:
    // 0x23b818: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b81c:
    // 0x23b81c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b81cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b820:
    // 0x23b820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b824:
    // 0x23b824: 0x808eef2  j           func_23BBC8
label_23b828:
    if (ctx->pc == 0x23B828u) {
        ctx->pc = 0x23B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B824u;
        // 0x23b828: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B82Cu;
        goto label_23b82c;
    }
    ctx->pc = 0x23B824u;
    ctx->pc = 0x23B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B824u;
    // 0x23b828: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B82Cu;
label_23b82c:
    // 0x23b82c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23b82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b830:
    // 0x23b830: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23b830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b834:
    // 0x23b834: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b838:
    // 0x23b838: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23b838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23b83c:
    // 0x23b83c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b83cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b840:
    // 0x23b840: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b840u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b844:
    // 0x23b844: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b848:
    // 0x23b848: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b84c:
    // 0x23b84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b850:
    // 0x23b850: 0x808eef2  j           func_23BBC8
label_23b854:
    if (ctx->pc == 0x23B854u) {
        ctx->pc = 0x23B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B850u;
        // 0x23b854: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B858u;
        goto label_23b858;
    }
    ctx->pc = 0x23B850u;
    ctx->pc = 0x23B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B850u;
    // 0x23b854: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B858u;
label_23b858:
    // 0x23b858: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23b858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b85c:
    // 0x23b85c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23b85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b860:
    // 0x23b860: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b864:
    // 0x23b864: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23b864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23b868:
    // 0x23b868: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b868u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b86c:
    // 0x23b86c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b86cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b870:
    // 0x23b870: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b874:
    // 0x23b874: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b878:
    // 0x23b878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b87c:
    // 0x23b87c: 0x808eef2  j           func_23BBC8
label_23b880:
    if (ctx->pc == 0x23B880u) {
        ctx->pc = 0x23B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B87Cu;
        // 0x23b880: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B884u;
        goto label_23b884;
    }
    ctx->pc = 0x23B87Cu;
    ctx->pc = 0x23B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B87Cu;
    // 0x23b880: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B884u;
label_23b884:
    // 0x23b884: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x23b884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_23b888:
    // 0x23b888: 0x40f809  jalr        $v0
label_23b88c:
    if (ctx->pc == 0x23B88Cu) {
        ctx->pc = 0x23B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B888u;
        // 0x23b88c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B890u;
        goto label_23b890;
    }
    ctx->pc = 0x23B888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B890u);
        ctx->pc = 0x23B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B888u;
        // 0x23b88c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B888u, 0x23B890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B890u;
label_23b890:
    // 0x23b890: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x23b890u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23b894:
    // 0x23b894: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23b894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23b898:
    // 0x23b898: 0x244250a8  addiu       $v0, $v0, 0x50A8
    ctx->pc = 0x23b898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20648));
label_23b89c:
    // 0x23b89c: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_23b8a0:
    if (ctx->pc == 0x23B8A0u) {
        ctx->pc = 0x23B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B89Cu;
        // 0x23b8a0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B8A4u;
        goto label_23b8a4;
    }
    ctx->pc = 0x23B89Cu;
    {
        const bool branch_taken_0x23b89c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B89Cu;
        // 0x23b8a0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b89c) {
            ctx->pc = 0x23B8B0u;
            goto label_23b8b0;
        }
    }
    ctx->pc = 0x23B8A4u;
label_23b8a4:
    // 0x23b8a4: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x23b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
label_23b8a8:
    // 0x23b8a8: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_23b8ac:
    if (ctx->pc == 0x23B8ACu) {
        ctx->pc = 0x23B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8A8u;
        // 0x23b8ac: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B8B0u;
        goto label_23b8b0;
    }
    ctx->pc = 0x23B8A8u;
    {
        const bool branch_taken_0x23b8a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8A8u;
        // 0x23b8ac: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8a8) {
            ctx->pc = 0x23B8BCu;
            goto label_23b8bc;
        }
    }
    ctx->pc = 0x23B8B0u;
label_23b8b0:
    // 0x23b8b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23b8b4:
    // 0x23b8b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_23b8b8:
    if (ctx->pc == 0x23B8B8u) {
        ctx->pc = 0x23B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8B4u;
        // 0x23b8b8: 0x8e8302d4  lw          $v1, 0x2D4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B8BCu;
        goto label_23b8bc;
    }
    ctx->pc = 0x23B8B4u;
    {
        const bool branch_taken_0x23b8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8B4u;
        // 0x23b8b8: 0x8e8302d4  lw          $v1, 0x2D4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8b4) {
            ctx->pc = 0x23B8C0u;
            goto label_23b8c0;
        }
    }
    ctx->pc = 0x23B8BCu;
label_23b8bc:
    // 0x23b8bc: 0x8e8302a8  lw          $v1, 0x2A8($s4)
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
label_23b8c0:
    // 0x23b8c0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x23b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_23b8c4:
    // 0x23b8c4: 0xac430180  sw          $v1, 0x180($v0)
    ctx->pc = 0x23b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 3));
label_23b8c8:
    // 0x23b8c8: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x23b8c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23b8cc:
    // 0x23b8cc: 0x26830138  addiu       $v1, $s4, 0x138
    ctx->pc = 0x23b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 312));
label_23b8d0:
    // 0x23b8d0: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x23b8d0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_23b8d4:
    // 0x23b8d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b8d8:
    // 0x23b8d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b8dc:
    // 0x23b8dc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x23b8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23b8e0:
    // 0x23b8e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b8e4:
    // 0x23b8e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23b8e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b8e8:
    // 0x23b8e8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x23b8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b8ec:
    // 0x23b8ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23b8ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b8f0:
    // 0x23b8f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23b8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23b8f4:
    // 0x23b8f4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x23b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_23b8f8:
    // 0x23b8f8: 0xc08e8be  jal         func_23A2F8
label_23b8fc:
    if (ctx->pc == 0x23B8FCu) {
        ctx->pc = 0x23B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8F8u;
        // 0x23b8fc: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B900u;
        goto label_23b900;
    }
    ctx->pc = 0x23B8F8u;
    SET_GPR_U32(ctx, 31, 0x23B900u);
    ctx->pc = 0x23B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8F8u;
    // 0x23b8fc: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A2F8u, 0x23B8F8u, 0x23B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B900u;
label_23b900:
    // 0x23b900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23b900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b904:
    // 0x23b904: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23b904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b908:
    // 0x23b908: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b90c:
    // 0x23b90c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23b90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23b910:
    // 0x23b910: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b910u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b914:
    // 0x23b914: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b918:
    // 0x23b918: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b91c:
    // 0x23b91c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b920:
    // 0x23b920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b924:
    // 0x23b924: 0x808eef2  j           func_23BBC8
label_23b928:
    if (ctx->pc == 0x23B928u) {
        ctx->pc = 0x23B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B924u;
        // 0x23b928: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B92Cu;
        goto label_23b92c;
    }
    ctx->pc = 0x23B924u;
    ctx->pc = 0x23B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B924u;
    // 0x23b928: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B92Cu;
label_23b92c:
    // 0x23b92c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b930:
    // 0x23b930: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b930u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b934:
    // 0x23b934: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b938:
    // 0x23b938: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b93c:
    // 0x23b93c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b940:
    // 0x23b940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b944:
    // 0x23b944: 0x3e00008  jr          $ra
label_23b948:
    if (ctx->pc == 0x23B948u) {
        ctx->pc = 0x23B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B944u;
        // 0x23b948: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B94Cu;
        goto label_23b94c;
    }
    ctx->pc = 0x23B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B944u;
        // 0x23b948: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B94Cu;
label_23b94c:
    // 0x23b94c: 0x0  nop
    ctx->pc = 0x23b94cu;
    // NOP
label_23b950:
    // 0x23b950: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23b954:
    // 0x23b954: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23b958:
    // 0x23b958: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23b958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23b95c:
    // 0x23b95c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23b95cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b960:
    // 0x23b960: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23b960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b964:
    // 0x23b964: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x23b964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_23b968:
    // 0x23b968: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_23b96c:
    // 0x23b96c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23b970:
    // 0x23b970: 0x26950164  addiu       $s5, $s4, 0x164
    ctx->pc = 0x23b970u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 356));
label_23b974:
    // 0x23b974: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23b978:
    // 0x23b978: 0x26920014  addiu       $s2, $s4, 0x14
    ctx->pc = 0x23b978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_23b97c:
    // 0x23b97c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23b980:
    // 0x23b980: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x23b980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_23b984:
    // 0x23b984: 0xc08c682  jal         func_231A08
label_23b988:
    if (ctx->pc == 0x23B988u) {
        ctx->pc = 0x23B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B984u;
        // 0x23b988: 0x26910180  addiu       $s1, $s4, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B98Cu;
        goto label_23b98c;
    }
    ctx->pc = 0x23B984u;
    SET_GPR_U32(ctx, 31, 0x23B98Cu);
    ctx->pc = 0x23B988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B984u;
    // 0x23b988: 0x26910180  addiu       $s1, $s4, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23B984u, 0x23B98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B98Cu;
label_23b98c:
    // 0x23b98c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x23b98cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b990:
    // 0x23b990: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23b990u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23b994:
    // 0x23b994: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x23b994u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23b998:
    // 0x23b998: 0x261057a8  addiu       $s0, $s0, 0x57A8
    ctx->pc = 0x23b998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22440));
label_23b99c:
    // 0x23b99c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b9a0:
    // 0x23b9a0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_23b9a4:
    // 0x23b9a4: 0xc09038e  jal         func_240E38
label_23b9a8:
    if (ctx->pc == 0x23B9A8u) {
        ctx->pc = 0x23B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9A4u;
        // 0x23b9a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9ACu;
        goto label_23b9ac;
    }
    ctx->pc = 0x23B9A4u;
    SET_GPR_U32(ctx, 31, 0x23B9ACu);
    ctx->pc = 0x23B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9A4u;
    // 0x23b9a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E38u, 0x23B9A4u, 0x23B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9ACu;
label_23b9ac:
    // 0x23b9ac: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x23b9acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23b9b0:
    // 0x23b9b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b9b4:
    // 0x23b9b4: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x23b9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_23b9b8:
    // 0x23b9b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23b9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23b9bc:
    // 0x23b9bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b9c0:
    // 0x23b9c0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23b9c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b9c4:
    // 0x23b9c4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x23b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_23b9c8:
    // 0x23b9c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23b9cc:
    // 0x23b9cc: 0xc08b5ac  jal         func_22D6B0
label_23b9d0:
    if (ctx->pc == 0x23B9D0u) {
        ctx->pc = 0x23B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9CCu;
        // 0x23b9d0: 0x8c690000  lw          $t1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9D4u;
        goto label_23b9d4;
    }
    ctx->pc = 0x23B9CCu;
    SET_GPR_U32(ctx, 31, 0x23B9D4u);
    ctx->pc = 0x23B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B9CCu;
    // 0x23b9d0: 0x8c690000  lw          $t1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23B9CCu, 0x23B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9D4u;
label_23b9d4:
    // 0x23b9d4: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x23b9d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23b9d8:
    // 0x23b9d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b9dc:
    // 0x23b9dc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23b9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23b9e0:
    // 0x23b9e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23b9e4:
    // 0x23b9e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23b9e8:
    // 0x23b9e8: 0x4610025  bgez        $v1, . + 4 + (0x25 << 2)
label_23b9ec:
    if (ctx->pc == 0x23B9ECu) {
        ctx->pc = 0x23B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E8u;
        // 0x23b9ec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9F0u;
        goto label_23b9f0;
    }
    ctx->pc = 0x23B9E8u;
    {
        const bool branch_taken_0x23b9e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x23B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E8u;
        // 0x23b9ec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9e8) {
            ctx->pc = 0x23BA80u;
            goto label_23ba80;
        }
    }
    ctx->pc = 0x23B9F0u;
label_23b9f0:
    // 0x23b9f0: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x23b9f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23b9f4:
    // 0x23b9f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23b9f8:
    // 0x23b9f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b9fc:
    // 0x23b9fc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_23ba00:
    // 0x23ba00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23ba04:
    // 0x23ba04: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_23ba08:
    if (ctx->pc == 0x23BA08u) {
        ctx->pc = 0x23BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA04u;
        // 0x23ba08: 0x28820006  slti        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA0Cu;
        goto label_23ba0c;
    }
    ctx->pc = 0x23BA04u;
    {
        const bool branch_taken_0x23ba04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA04u;
        // 0x23ba08: 0x28820006  slti        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba04) {
            ctx->pc = 0x23BA50u;
            goto label_23ba50;
        }
    }
    ctx->pc = 0x23BA0Cu;
label_23ba0c:
    // 0x23ba0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23ba10:
    if (ctx->pc == 0x23BA10u) {
        ctx->pc = 0x23BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA0Cu;
        // 0x23ba10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA14u;
        goto label_23ba14;
    }
    ctx->pc = 0x23BA0Cu;
    {
        const bool branch_taken_0x23ba0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA0Cu;
        // 0x23ba10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba0c) {
            ctx->pc = 0x23BA24u;
            goto label_23ba24;
        }
    }
    ctx->pc = 0x23BA14u;
label_23ba14:
    // 0x23ba14: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
label_23ba18:
    if (ctx->pc == 0x23BA18u) {
        ctx->pc = 0x23BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA14u;
        // 0x23ba18: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA1Cu;
        goto label_23ba1c;
    }
    ctx->pc = 0x23BA14u;
    {
        const bool branch_taken_0x23ba14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ba14) {
            ctx->pc = 0x23BA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BA14u;
            // 0x23ba18: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BA38u;
            goto label_23ba38;
        }
    }
    ctx->pc = 0x23BA1Cu;
label_23ba1c:
    // 0x23ba1c: 0x10000060  b           . + 4 + (0x60 << 2)
label_23ba20:
    if (ctx->pc == 0x23BA20u) {
        ctx->pc = 0x23BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA1Cu;
        // 0x23ba20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA24u;
        goto label_23ba24;
    }
    ctx->pc = 0x23BA1Cu;
    {
        const bool branch_taken_0x23ba1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA1Cu;
        // 0x23ba20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba1c) {
            ctx->pc = 0x23BBA0u;
            goto label_23bba0;
        }
    }
    ctx->pc = 0x23BA24u;
label_23ba24:
    // 0x23ba24: 0x28820009  slti        $v0, $a0, 0x9
    ctx->pc = 0x23ba24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_23ba28:
    // 0x23ba28: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
label_23ba2c:
    if (ctx->pc == 0x23BA2Cu) {
        ctx->pc = 0x23BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA28u;
        // 0x23ba2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA30u;
        goto label_23ba30;
    }
    ctx->pc = 0x23BA28u;
    {
        const bool branch_taken_0x23ba28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ba28) {
            ctx->pc = 0x23BA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BA28u;
            // 0x23ba2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BBA0u;
            goto label_23bba0;
        }
    }
    ctx->pc = 0x23BA30u;
label_23ba30:
    // 0x23ba30: 0x10000008  b           . + 4 + (0x8 << 2)
label_23ba34:
    if (ctx->pc == 0x23BA34u) {
        ctx->pc = 0x23BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA30u;
        // 0x23ba34: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA38u;
        goto label_23ba38;
    }
    ctx->pc = 0x23BA30u;
    {
        const bool branch_taken_0x23ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA30u;
        // 0x23ba34: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba30) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23BA38u;
label_23ba38:
    // 0x23ba38: 0x40f809  jalr        $v0
label_23ba3c:
    if (ctx->pc == 0x23BA3Cu) {
        ctx->pc = 0x23BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA38u;
        // 0x23ba3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA40u;
        goto label_23ba40;
    }
    ctx->pc = 0x23BA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23BA40u);
        ctx->pc = 0x23BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA38u;
        // 0x23ba3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BA38u, 0x23BA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BA40u;
label_23ba40:
    // 0x23ba40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23ba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ba44:
    // 0x23ba44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23ba44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ba48:
    // 0x23ba48: 0x10000007  b           . + 4 + (0x7 << 2)
label_23ba4c:
    if (ctx->pc == 0x23BA4Cu) {
        ctx->pc = 0x23BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA48u;
        // 0x23ba4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA50u;
        goto label_23ba50;
    }
    ctx->pc = 0x23BA48u;
    {
        const bool branch_taken_0x23ba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA48u;
        // 0x23ba4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba48) {
            ctx->pc = 0x23BA68u;
            goto label_23ba68;
        }
    }
    ctx->pc = 0x23BA50u;
label_23ba50:
    // 0x23ba50: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x23ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_23ba54:
    // 0x23ba54: 0x40f809  jalr        $v0
label_23ba58:
    if (ctx->pc == 0x23BA58u) {
        ctx->pc = 0x23BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA54u;
        // 0x23ba58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA5Cu;
        goto label_23ba5c;
    }
    ctx->pc = 0x23BA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23BA5Cu);
        ctx->pc = 0x23BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA54u;
        // 0x23ba58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BA54u, 0x23BA5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BA5Cu;
label_23ba5c:
    // 0x23ba5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23ba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ba60:
    // 0x23ba60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23ba60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ba64:
    // 0x23ba64: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23ba64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23ba68:
    // 0x23ba68: 0xc08eef2  jal         func_23BBC8
label_23ba6c:
    if (ctx->pc == 0x23BA6Cu) {
        ctx->pc = 0x23BA70u;
        goto label_23ba70;
    }
    ctx->pc = 0x23BA68u;
    SET_GPR_U32(ctx, 31, 0x23BA70u);
    ctx->pc = 0x23BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBC8u, 0x23BA68u, 0x23BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA70u;
label_23ba70:
    // 0x23ba70: 0xc08f512  jal         func_23D448
label_23ba74:
    if (ctx->pc == 0x23BA74u) {
        ctx->pc = 0x23BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA70u;
        // 0x23ba74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA78u;
        goto label_23ba78;
    }
    ctx->pc = 0x23BA70u;
    SET_GPR_U32(ctx, 31, 0x23BA78u);
    ctx->pc = 0x23BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BA70u;
    // 0x23ba74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D448u, 0x23BA70u, 0x23BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA78u;
label_23ba78:
    // 0x23ba78: 0x10000049  b           . + 4 + (0x49 << 2)
label_23ba7c:
    if (ctx->pc == 0x23BA7Cu) {
        ctx->pc = 0x23BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA78u;
        // 0x23ba7c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA80u;
        goto label_23ba80;
    }
    ctx->pc = 0x23BA78u;
    {
        const bool branch_taken_0x23ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA78u;
        // 0x23ba7c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba78) {
            ctx->pc = 0x23BBA0u;
            goto label_23bba0;
        }
    }
    ctx->pc = 0x23BA80u;
label_23ba80:
    // 0x23ba80: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x23ba80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23ba84:
    // 0x23ba84: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23ba88:
    // 0x23ba88: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_23ba8c:
    // 0x23ba8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23ba90:
    // 0x23ba90: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x23ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_23ba94:
    // 0x23ba94: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x23ba94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_23ba98:
    // 0x23ba98: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_23ba9c:
    if (ctx->pc == 0x23BA9Cu) {
        ctx->pc = 0x23BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA98u;
        // 0x23ba9c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BAA0u;
        goto label_23baa0;
    }
    ctx->pc = 0x23BA98u;
    {
        const bool branch_taken_0x23ba98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA98u;
        // 0x23ba9c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba98) {
            ctx->pc = 0x23BB9Cu;
            goto label_23bb9c;
        }
    }
    ctx->pc = 0x23BAA0u;
label_23baa0:
    // 0x23baa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23baa4:
    // 0x23baa4: 0x244257d0  addiu       $v0, $v0, 0x57D0
    ctx->pc = 0x23baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22480));
label_23baa8:
    // 0x23baa8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23baac:
    // 0x23baac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23baacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23bab0:
    // 0x23bab0: 0x800008  jr          $a0
label_23bab4:
    if (ctx->pc == 0x23BAB4u) {
        ctx->pc = 0x23BAB8u;
        goto label_23bab8;
    }
    ctx->pc = 0x23BAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BAB8u: goto label_23bab8;
            case 0x23BB30u: goto label_23bb30;
            case 0x23BB54u: goto label_23bb54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BAB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23BAB8u;
label_23bab8:
    // 0x23bab8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23babc:
    // 0x23babc: 0x26820138  addiu       $v0, $s4, 0x138
    ctx->pc = 0x23babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 312));
label_23bac0:
    // 0x23bac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23bac4:
    // 0x23bac4: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x23bac4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_23bac8:
    // 0x23bac8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x23bac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23bacc:
    // 0x23bacc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23baccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23bad0:
    // 0x23bad0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x23bad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23bad4:
    // 0x23bad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23bad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bad8:
    // 0x23bad8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23bad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23badc:
    // 0x23badc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23badcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bae0:
    // 0x23bae0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x23bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_23bae4:
    // 0x23bae4: 0xc08e8be  jal         func_23A2F8
label_23bae8:
    if (ctx->pc == 0x23BAE8u) {
        ctx->pc = 0x23BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAE4u;
        // 0x23bae8: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BAECu;
        goto label_23baec;
    }
    ctx->pc = 0x23BAE4u;
    SET_GPR_U32(ctx, 31, 0x23BAECu);
    ctx->pc = 0x23BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BAE4u;
    // 0x23bae8: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A2F8u, 0x23BAE4u, 0x23BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BAECu;
label_23baec:
    // 0x23baec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23baecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23baf0:
    // 0x23baf0: 0x244250a8  addiu       $v0, $v0, 0x50A8
    ctx->pc = 0x23baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20648));
label_23baf4:
    // 0x23baf4: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_23baf8:
    if (ctx->pc == 0x23BAF8u) {
        ctx->pc = 0x23BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAF4u;
        // 0x23baf8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BAFCu;
        goto label_23bafc;
    }
    ctx->pc = 0x23BAF4u;
    {
        const bool branch_taken_0x23baf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAF4u;
        // 0x23baf8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23baf4) {
            ctx->pc = 0x23BB08u;
            goto label_23bb08;
        }
    }
    ctx->pc = 0x23BAFCu;
label_23bafc:
    // 0x23bafc: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x23bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
label_23bb00:
    // 0x23bb00: 0x56620002  bnel        $s3, $v0, . + 4 + (0x2 << 2)
label_23bb04:
    if (ctx->pc == 0x23BB04u) {
        ctx->pc = 0x23BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB00u;
        // 0x23bb04: 0x8e8502a4  lw          $a1, 0x2A4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB08u;
        goto label_23bb08;
    }
    ctx->pc = 0x23BB00u;
    {
        const bool branch_taken_0x23bb00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x23bb00) {
            ctx->pc = 0x23BB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BB00u;
            // 0x23bb04: 0x8e8502a4  lw          $a1, 0x2A4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BB0Cu;
            goto label_23bb0c;
        }
    }
    ctx->pc = 0x23BB08u;
label_23bb08:
    // 0x23bb08: 0x8e8502d0  lw          $a1, 0x2D0($s4)
    ctx->pc = 0x23bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
label_23bb0c:
    // 0x23bb0c: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x23bb0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23bb10:
    // 0x23bb10: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x23bb10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23bb14:
    // 0x23bb14: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x23bb14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_23bb18:
    // 0x23bb18: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_23bb1c:
    // 0x23bb1c: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x23bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
label_23bb20:
    // 0x23bb20: 0xc08a058  jal         func_228160
label_23bb24:
    if (ctx->pc == 0x23BB24u) {
        ctx->pc = 0x23BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB20u;
        // 0x23bb24: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB28u;
        goto label_23bb28;
    }
    ctx->pc = 0x23BB20u;
    SET_GPR_U32(ctx, 31, 0x23BB28u);
    ctx->pc = 0x23BB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB20u;
    // 0x23bb24: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228160u, 0x23BB20u, 0x23BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB28u;
label_23bb28:
    // 0x23bb28: 0x1000001d  b           . + 4 + (0x1D << 2)
label_23bb2c:
    if (ctx->pc == 0x23BB2Cu) {
        ctx->pc = 0x23BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB28u;
        // 0x23bb2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB30u;
        goto label_23bb30;
    }
    ctx->pc = 0x23BB28u;
    {
        const bool branch_taken_0x23bb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB28u;
        // 0x23bb2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb28) {
            ctx->pc = 0x23BBA0u;
            goto label_23bba0;
        }
    }
    ctx->pc = 0x23BB30u;
label_23bb30:
    // 0x23bb30: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x23bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_23bb34:
    // 0x23bb34: 0x40f809  jalr        $v0
label_23bb38:
    if (ctx->pc == 0x23BB38u) {
        ctx->pc = 0x23BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB34u;
        // 0x23bb38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB3Cu;
        goto label_23bb3c;
    }
    ctx->pc = 0x23BB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23BB3Cu);
        ctx->pc = 0x23BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB34u;
        // 0x23bb38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BB34u, 0x23BB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BB3Cu;
label_23bb3c:
    // 0x23bb3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23bb40:
    // 0x23bb40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23bb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23bb44:
    // 0x23bb44: 0xc08eef2  jal         func_23BBC8
label_23bb48:
    if (ctx->pc == 0x23BB48u) {
        ctx->pc = 0x23BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB44u;
        // 0x23bb48: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB4Cu;
        goto label_23bb4c;
    }
    ctx->pc = 0x23BB44u;
    SET_GPR_U32(ctx, 31, 0x23BB4Cu);
    ctx->pc = 0x23BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB44u;
    // 0x23bb48: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBC8u, 0x23BB44u, 0x23BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB4Cu;
label_23bb4c:
    // 0x23bb4c: 0x10000014  b           . + 4 + (0x14 << 2)
label_23bb50:
    if (ctx->pc == 0x23BB50u) {
        ctx->pc = 0x23BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB4Cu;
        // 0x23bb50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB54u;
        goto label_23bb54;
    }
    ctx->pc = 0x23BB4Cu;
    {
        const bool branch_taken_0x23bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB4Cu;
        // 0x23bb50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb4c) {
            ctx->pc = 0x23BBA0u;
            goto label_23bba0;
        }
    }
    ctx->pc = 0x23BB54u;
label_23bb54:
    // 0x23bb54: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x23bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_23bb58:
    // 0x23bb58: 0x60f809  jalr        $v1
label_23bb5c:
    if (ctx->pc == 0x23BB5Cu) {
        ctx->pc = 0x23BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB58u;
        // 0x23bb5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB60u;
        goto label_23bb60;
    }
    ctx->pc = 0x23BB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23BB60u);
        ctx->pc = 0x23BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB58u;
        // 0x23bb5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BB58u, 0x23BB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BB60u;
label_23bb60:
    // 0x23bb60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23bb64:
    // 0x23bb64: 0x244250a8  addiu       $v0, $v0, 0x50A8
    ctx->pc = 0x23bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20648));
label_23bb68:
    // 0x23bb68: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_23bb6c:
    if (ctx->pc == 0x23BB6Cu) {
        ctx->pc = 0x23BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB68u;
        // 0x23bb6c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB70u;
        goto label_23bb70;
    }
    ctx->pc = 0x23BB68u;
    {
        const bool branch_taken_0x23bb68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB68u;
        // 0x23bb6c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb68) {
            ctx->pc = 0x23BB7Cu;
            goto label_23bb7c;
        }
    }
    ctx->pc = 0x23BB70u;
label_23bb70:
    // 0x23bb70: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x23bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
label_23bb74:
    // 0x23bb74: 0x56620002  bnel        $s3, $v0, . + 4 + (0x2 << 2)
label_23bb78:
    if (ctx->pc == 0x23BB78u) {
        ctx->pc = 0x23BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB74u;
        // 0x23bb78: 0x8e8502a4  lw          $a1, 0x2A4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB7Cu;
        goto label_23bb7c;
    }
    ctx->pc = 0x23BB74u;
    {
        const bool branch_taken_0x23bb74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x23bb74) {
            ctx->pc = 0x23BB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BB74u;
            // 0x23bb78: 0x8e8502a4  lw          $a1, 0x2A4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BB80u;
            goto label_23bb80;
        }
    }
    ctx->pc = 0x23BB7Cu;
label_23bb7c:
    // 0x23bb7c: 0x8e8502d0  lw          $a1, 0x2D0($s4)
    ctx->pc = 0x23bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
label_23bb80:
    // 0x23bb80: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x23bb80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_23bb84:
    // 0x23bb84: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x23bb84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23bb88:
    // 0x23bb88: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x23bb88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_23bb8c:
    // 0x23bb8c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_23bb90:
    // 0x23bb90: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x23bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
label_23bb94:
    // 0x23bb94: 0xc08a058  jal         func_228160
label_23bb98:
    if (ctx->pc == 0x23BB98u) {
        ctx->pc = 0x23BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BB94u;
        // 0x23bb98: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BB9Cu;
        goto label_23bb9c;
    }
    ctx->pc = 0x23BB94u;
    SET_GPR_U32(ctx, 31, 0x23BB9Cu);
    ctx->pc = 0x23BB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB94u;
    // 0x23bb98: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228160u, 0x23BB94u, 0x23BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB9Cu;
label_23bb9c:
    // 0x23bb9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23bb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23bba0:
    // 0x23bba0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23bba4:
    // 0x23bba4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x23bba4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23bba8:
    // 0x23bba8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23bba8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23bbac:
    // 0x23bbac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23bbacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23bbb0:
    // 0x23bbb0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23bbb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23bbb4:
    // 0x23bbb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23bbb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23bbb8:
    // 0x23bbb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23bbb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23bbbc:
    // 0x23bbbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23bbc0:
    // 0x23bbc0: 0x808c698  j           func_231A60
label_23bbc4:
    if (ctx->pc == 0x23BBC4u) {
        ctx->pc = 0x23BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBC0u;
        // 0x23bbc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BBC8u;
        goto label_fallthrough_0x23bbc0;
    }
    ctx->pc = 0x23BBC0u;
    ctx->pc = 0x23BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBC0u;
    // 0x23bbc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
label_fallthrough_0x23bbc0:
    ctx->pc = 0x23BBC8u;
}
