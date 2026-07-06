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

// Function: sub_0023E498
// Address: 0x23e498 - 0x23eca0
void sub_0023E498_0x23e498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E498_0x23e498");
#endif

    switch (ctx->pc) {
        case 0x23e498u: goto label_23e498;
        case 0x23e49cu: goto label_23e49c;
        case 0x23e4a0u: goto label_23e4a0;
        case 0x23e4a4u: goto label_23e4a4;
        case 0x23e4a8u: goto label_23e4a8;
        case 0x23e4acu: goto label_23e4ac;
        case 0x23e4b0u: goto label_23e4b0;
        case 0x23e4b4u: goto label_23e4b4;
        case 0x23e4b8u: goto label_23e4b8;
        case 0x23e4bcu: goto label_23e4bc;
        case 0x23e4c0u: goto label_23e4c0;
        case 0x23e4c4u: goto label_23e4c4;
        case 0x23e4c8u: goto label_23e4c8;
        case 0x23e4ccu: goto label_23e4cc;
        case 0x23e4d0u: goto label_23e4d0;
        case 0x23e4d4u: goto label_23e4d4;
        case 0x23e4d8u: goto label_23e4d8;
        case 0x23e4dcu: goto label_23e4dc;
        case 0x23e4e0u: goto label_23e4e0;
        case 0x23e4e4u: goto label_23e4e4;
        case 0x23e4e8u: goto label_23e4e8;
        case 0x23e4ecu: goto label_23e4ec;
        case 0x23e4f0u: goto label_23e4f0;
        case 0x23e4f4u: goto label_23e4f4;
        case 0x23e4f8u: goto label_23e4f8;
        case 0x23e4fcu: goto label_23e4fc;
        case 0x23e500u: goto label_23e500;
        case 0x23e504u: goto label_23e504;
        case 0x23e508u: goto label_23e508;
        case 0x23e50cu: goto label_23e50c;
        case 0x23e510u: goto label_23e510;
        case 0x23e514u: goto label_23e514;
        case 0x23e518u: goto label_23e518;
        case 0x23e51cu: goto label_23e51c;
        case 0x23e520u: goto label_23e520;
        case 0x23e524u: goto label_23e524;
        case 0x23e528u: goto label_23e528;
        case 0x23e52cu: goto label_23e52c;
        case 0x23e530u: goto label_23e530;
        case 0x23e534u: goto label_23e534;
        case 0x23e538u: goto label_23e538;
        case 0x23e53cu: goto label_23e53c;
        case 0x23e540u: goto label_23e540;
        case 0x23e544u: goto label_23e544;
        case 0x23e548u: goto label_23e548;
        case 0x23e54cu: goto label_23e54c;
        case 0x23e550u: goto label_23e550;
        case 0x23e554u: goto label_23e554;
        case 0x23e558u: goto label_23e558;
        case 0x23e55cu: goto label_23e55c;
        case 0x23e560u: goto label_23e560;
        case 0x23e564u: goto label_23e564;
        case 0x23e568u: goto label_23e568;
        case 0x23e56cu: goto label_23e56c;
        case 0x23e570u: goto label_23e570;
        case 0x23e574u: goto label_23e574;
        case 0x23e578u: goto label_23e578;
        case 0x23e57cu: goto label_23e57c;
        case 0x23e580u: goto label_23e580;
        case 0x23e584u: goto label_23e584;
        case 0x23e588u: goto label_23e588;
        case 0x23e58cu: goto label_23e58c;
        case 0x23e590u: goto label_23e590;
        case 0x23e594u: goto label_23e594;
        case 0x23e598u: goto label_23e598;
        case 0x23e59cu: goto label_23e59c;
        case 0x23e5a0u: goto label_23e5a0;
        case 0x23e5a4u: goto label_23e5a4;
        case 0x23e5a8u: goto label_23e5a8;
        case 0x23e5acu: goto label_23e5ac;
        case 0x23e5b0u: goto label_23e5b0;
        case 0x23e5b4u: goto label_23e5b4;
        case 0x23e5b8u: goto label_23e5b8;
        case 0x23e5bcu: goto label_23e5bc;
        case 0x23e5c0u: goto label_23e5c0;
        case 0x23e5c4u: goto label_23e5c4;
        case 0x23e5c8u: goto label_23e5c8;
        case 0x23e5ccu: goto label_23e5cc;
        case 0x23e5d0u: goto label_23e5d0;
        case 0x23e5d4u: goto label_23e5d4;
        case 0x23e5d8u: goto label_23e5d8;
        case 0x23e5dcu: goto label_23e5dc;
        case 0x23e5e0u: goto label_23e5e0;
        case 0x23e5e4u: goto label_23e5e4;
        case 0x23e5e8u: goto label_23e5e8;
        case 0x23e5ecu: goto label_23e5ec;
        case 0x23e5f0u: goto label_23e5f0;
        case 0x23e5f4u: goto label_23e5f4;
        case 0x23e5f8u: goto label_23e5f8;
        case 0x23e5fcu: goto label_23e5fc;
        case 0x23e600u: goto label_23e600;
        case 0x23e604u: goto label_23e604;
        case 0x23e608u: goto label_23e608;
        case 0x23e60cu: goto label_23e60c;
        case 0x23e610u: goto label_23e610;
        case 0x23e614u: goto label_23e614;
        case 0x23e618u: goto label_23e618;
        case 0x23e61cu: goto label_23e61c;
        case 0x23e620u: goto label_23e620;
        case 0x23e624u: goto label_23e624;
        case 0x23e628u: goto label_23e628;
        case 0x23e62cu: goto label_23e62c;
        case 0x23e630u: goto label_23e630;
        case 0x23e634u: goto label_23e634;
        case 0x23e638u: goto label_23e638;
        case 0x23e63cu: goto label_23e63c;
        case 0x23e640u: goto label_23e640;
        case 0x23e644u: goto label_23e644;
        case 0x23e648u: goto label_23e648;
        case 0x23e64cu: goto label_23e64c;
        case 0x23e650u: goto label_23e650;
        case 0x23e654u: goto label_23e654;
        case 0x23e658u: goto label_23e658;
        case 0x23e65cu: goto label_23e65c;
        case 0x23e660u: goto label_23e660;
        case 0x23e664u: goto label_23e664;
        case 0x23e668u: goto label_23e668;
        case 0x23e66cu: goto label_23e66c;
        case 0x23e670u: goto label_23e670;
        case 0x23e674u: goto label_23e674;
        case 0x23e678u: goto label_23e678;
        case 0x23e67cu: goto label_23e67c;
        case 0x23e680u: goto label_23e680;
        case 0x23e684u: goto label_23e684;
        case 0x23e688u: goto label_23e688;
        case 0x23e68cu: goto label_23e68c;
        case 0x23e690u: goto label_23e690;
        case 0x23e694u: goto label_23e694;
        case 0x23e698u: goto label_23e698;
        case 0x23e69cu: goto label_23e69c;
        case 0x23e6a0u: goto label_23e6a0;
        case 0x23e6a4u: goto label_23e6a4;
        case 0x23e6a8u: goto label_23e6a8;
        case 0x23e6acu: goto label_23e6ac;
        case 0x23e6b0u: goto label_23e6b0;
        case 0x23e6b4u: goto label_23e6b4;
        case 0x23e6b8u: goto label_23e6b8;
        case 0x23e6bcu: goto label_23e6bc;
        case 0x23e6c0u: goto label_23e6c0;
        case 0x23e6c4u: goto label_23e6c4;
        case 0x23e6c8u: goto label_23e6c8;
        case 0x23e6ccu: goto label_23e6cc;
        case 0x23e6d0u: goto label_23e6d0;
        case 0x23e6d4u: goto label_23e6d4;
        case 0x23e6d8u: goto label_23e6d8;
        case 0x23e6dcu: goto label_23e6dc;
        case 0x23e6e0u: goto label_23e6e0;
        case 0x23e6e4u: goto label_23e6e4;
        case 0x23e6e8u: goto label_23e6e8;
        case 0x23e6ecu: goto label_23e6ec;
        case 0x23e6f0u: goto label_23e6f0;
        case 0x23e6f4u: goto label_23e6f4;
        case 0x23e6f8u: goto label_23e6f8;
        case 0x23e6fcu: goto label_23e6fc;
        case 0x23e700u: goto label_23e700;
        case 0x23e704u: goto label_23e704;
        case 0x23e708u: goto label_23e708;
        case 0x23e70cu: goto label_23e70c;
        case 0x23e710u: goto label_23e710;
        case 0x23e714u: goto label_23e714;
        case 0x23e718u: goto label_23e718;
        case 0x23e71cu: goto label_23e71c;
        case 0x23e720u: goto label_23e720;
        case 0x23e724u: goto label_23e724;
        case 0x23e728u: goto label_23e728;
        case 0x23e72cu: goto label_23e72c;
        case 0x23e730u: goto label_23e730;
        case 0x23e734u: goto label_23e734;
        case 0x23e738u: goto label_23e738;
        case 0x23e73cu: goto label_23e73c;
        case 0x23e740u: goto label_23e740;
        case 0x23e744u: goto label_23e744;
        case 0x23e748u: goto label_23e748;
        case 0x23e74cu: goto label_23e74c;
        case 0x23e750u: goto label_23e750;
        case 0x23e754u: goto label_23e754;
        case 0x23e758u: goto label_23e758;
        case 0x23e75cu: goto label_23e75c;
        case 0x23e760u: goto label_23e760;
        case 0x23e764u: goto label_23e764;
        case 0x23e768u: goto label_23e768;
        case 0x23e76cu: goto label_23e76c;
        case 0x23e770u: goto label_23e770;
        case 0x23e774u: goto label_23e774;
        case 0x23e778u: goto label_23e778;
        case 0x23e77cu: goto label_23e77c;
        case 0x23e780u: goto label_23e780;
        case 0x23e784u: goto label_23e784;
        case 0x23e788u: goto label_23e788;
        case 0x23e78cu: goto label_23e78c;
        case 0x23e790u: goto label_23e790;
        case 0x23e794u: goto label_23e794;
        case 0x23e798u: goto label_23e798;
        case 0x23e79cu: goto label_23e79c;
        case 0x23e7a0u: goto label_23e7a0;
        case 0x23e7a4u: goto label_23e7a4;
        case 0x23e7a8u: goto label_23e7a8;
        case 0x23e7acu: goto label_23e7ac;
        case 0x23e7b0u: goto label_23e7b0;
        case 0x23e7b4u: goto label_23e7b4;
        case 0x23e7b8u: goto label_23e7b8;
        case 0x23e7bcu: goto label_23e7bc;
        case 0x23e7c0u: goto label_23e7c0;
        case 0x23e7c4u: goto label_23e7c4;
        case 0x23e7c8u: goto label_23e7c8;
        case 0x23e7ccu: goto label_23e7cc;
        case 0x23e7d0u: goto label_23e7d0;
        case 0x23e7d4u: goto label_23e7d4;
        case 0x23e7d8u: goto label_23e7d8;
        case 0x23e7dcu: goto label_23e7dc;
        case 0x23e7e0u: goto label_23e7e0;
        case 0x23e7e4u: goto label_23e7e4;
        case 0x23e7e8u: goto label_23e7e8;
        case 0x23e7ecu: goto label_23e7ec;
        case 0x23e7f0u: goto label_23e7f0;
        case 0x23e7f4u: goto label_23e7f4;
        case 0x23e7f8u: goto label_23e7f8;
        case 0x23e7fcu: goto label_23e7fc;
        case 0x23e800u: goto label_23e800;
        case 0x23e804u: goto label_23e804;
        case 0x23e808u: goto label_23e808;
        case 0x23e80cu: goto label_23e80c;
        case 0x23e810u: goto label_23e810;
        case 0x23e814u: goto label_23e814;
        case 0x23e818u: goto label_23e818;
        case 0x23e81cu: goto label_23e81c;
        case 0x23e820u: goto label_23e820;
        case 0x23e824u: goto label_23e824;
        case 0x23e828u: goto label_23e828;
        case 0x23e82cu: goto label_23e82c;
        case 0x23e830u: goto label_23e830;
        case 0x23e834u: goto label_23e834;
        case 0x23e838u: goto label_23e838;
        case 0x23e83cu: goto label_23e83c;
        case 0x23e840u: goto label_23e840;
        case 0x23e844u: goto label_23e844;
        case 0x23e848u: goto label_23e848;
        case 0x23e84cu: goto label_23e84c;
        case 0x23e850u: goto label_23e850;
        case 0x23e854u: goto label_23e854;
        case 0x23e858u: goto label_23e858;
        case 0x23e85cu: goto label_23e85c;
        case 0x23e860u: goto label_23e860;
        case 0x23e864u: goto label_23e864;
        case 0x23e868u: goto label_23e868;
        case 0x23e86cu: goto label_23e86c;
        case 0x23e870u: goto label_23e870;
        case 0x23e874u: goto label_23e874;
        case 0x23e878u: goto label_23e878;
        case 0x23e87cu: goto label_23e87c;
        case 0x23e880u: goto label_23e880;
        case 0x23e884u: goto label_23e884;
        case 0x23e888u: goto label_23e888;
        case 0x23e88cu: goto label_23e88c;
        case 0x23e890u: goto label_23e890;
        case 0x23e894u: goto label_23e894;
        case 0x23e898u: goto label_23e898;
        case 0x23e89cu: goto label_23e89c;
        case 0x23e8a0u: goto label_23e8a0;
        case 0x23e8a4u: goto label_23e8a4;
        case 0x23e8a8u: goto label_23e8a8;
        case 0x23e8acu: goto label_23e8ac;
        case 0x23e8b0u: goto label_23e8b0;
        case 0x23e8b4u: goto label_23e8b4;
        case 0x23e8b8u: goto label_23e8b8;
        case 0x23e8bcu: goto label_23e8bc;
        case 0x23e8c0u: goto label_23e8c0;
        case 0x23e8c4u: goto label_23e8c4;
        case 0x23e8c8u: goto label_23e8c8;
        case 0x23e8ccu: goto label_23e8cc;
        case 0x23e8d0u: goto label_23e8d0;
        case 0x23e8d4u: goto label_23e8d4;
        case 0x23e8d8u: goto label_23e8d8;
        case 0x23e8dcu: goto label_23e8dc;
        case 0x23e8e0u: goto label_23e8e0;
        case 0x23e8e4u: goto label_23e8e4;
        case 0x23e8e8u: goto label_23e8e8;
        case 0x23e8ecu: goto label_23e8ec;
        case 0x23e8f0u: goto label_23e8f0;
        case 0x23e8f4u: goto label_23e8f4;
        case 0x23e8f8u: goto label_23e8f8;
        case 0x23e8fcu: goto label_23e8fc;
        case 0x23e900u: goto label_23e900;
        case 0x23e904u: goto label_23e904;
        case 0x23e908u: goto label_23e908;
        case 0x23e90cu: goto label_23e90c;
        case 0x23e910u: goto label_23e910;
        case 0x23e914u: goto label_23e914;
        case 0x23e918u: goto label_23e918;
        case 0x23e91cu: goto label_23e91c;
        case 0x23e920u: goto label_23e920;
        case 0x23e924u: goto label_23e924;
        case 0x23e928u: goto label_23e928;
        case 0x23e92cu: goto label_23e92c;
        case 0x23e930u: goto label_23e930;
        case 0x23e934u: goto label_23e934;
        case 0x23e938u: goto label_23e938;
        case 0x23e93cu: goto label_23e93c;
        case 0x23e940u: goto label_23e940;
        case 0x23e944u: goto label_23e944;
        case 0x23e948u: goto label_23e948;
        case 0x23e94cu: goto label_23e94c;
        case 0x23e950u: goto label_23e950;
        case 0x23e954u: goto label_23e954;
        case 0x23e958u: goto label_23e958;
        case 0x23e95cu: goto label_23e95c;
        case 0x23e960u: goto label_23e960;
        case 0x23e964u: goto label_23e964;
        case 0x23e968u: goto label_23e968;
        case 0x23e96cu: goto label_23e96c;
        case 0x23e970u: goto label_23e970;
        case 0x23e974u: goto label_23e974;
        case 0x23e978u: goto label_23e978;
        case 0x23e97cu: goto label_23e97c;
        case 0x23e980u: goto label_23e980;
        case 0x23e984u: goto label_23e984;
        case 0x23e988u: goto label_23e988;
        case 0x23e98cu: goto label_23e98c;
        case 0x23e990u: goto label_23e990;
        case 0x23e994u: goto label_23e994;
        case 0x23e998u: goto label_23e998;
        case 0x23e99cu: goto label_23e99c;
        case 0x23e9a0u: goto label_23e9a0;
        case 0x23e9a4u: goto label_23e9a4;
        case 0x23e9a8u: goto label_23e9a8;
        case 0x23e9acu: goto label_23e9ac;
        case 0x23e9b0u: goto label_23e9b0;
        case 0x23e9b4u: goto label_23e9b4;
        case 0x23e9b8u: goto label_23e9b8;
        case 0x23e9bcu: goto label_23e9bc;
        case 0x23e9c0u: goto label_23e9c0;
        case 0x23e9c4u: goto label_23e9c4;
        case 0x23e9c8u: goto label_23e9c8;
        case 0x23e9ccu: goto label_23e9cc;
        case 0x23e9d0u: goto label_23e9d0;
        case 0x23e9d4u: goto label_23e9d4;
        case 0x23e9d8u: goto label_23e9d8;
        case 0x23e9dcu: goto label_23e9dc;
        case 0x23e9e0u: goto label_23e9e0;
        case 0x23e9e4u: goto label_23e9e4;
        case 0x23e9e8u: goto label_23e9e8;
        case 0x23e9ecu: goto label_23e9ec;
        case 0x23e9f0u: goto label_23e9f0;
        case 0x23e9f4u: goto label_23e9f4;
        case 0x23e9f8u: goto label_23e9f8;
        case 0x23e9fcu: goto label_23e9fc;
        case 0x23ea00u: goto label_23ea00;
        case 0x23ea04u: goto label_23ea04;
        case 0x23ea08u: goto label_23ea08;
        case 0x23ea0cu: goto label_23ea0c;
        case 0x23ea10u: goto label_23ea10;
        case 0x23ea14u: goto label_23ea14;
        case 0x23ea18u: goto label_23ea18;
        case 0x23ea1cu: goto label_23ea1c;
        case 0x23ea20u: goto label_23ea20;
        case 0x23ea24u: goto label_23ea24;
        case 0x23ea28u: goto label_23ea28;
        case 0x23ea2cu: goto label_23ea2c;
        case 0x23ea30u: goto label_23ea30;
        case 0x23ea34u: goto label_23ea34;
        case 0x23ea38u: goto label_23ea38;
        case 0x23ea3cu: goto label_23ea3c;
        case 0x23ea40u: goto label_23ea40;
        case 0x23ea44u: goto label_23ea44;
        case 0x23ea48u: goto label_23ea48;
        case 0x23ea4cu: goto label_23ea4c;
        case 0x23ea50u: goto label_23ea50;
        case 0x23ea54u: goto label_23ea54;
        case 0x23ea58u: goto label_23ea58;
        case 0x23ea5cu: goto label_23ea5c;
        case 0x23ea60u: goto label_23ea60;
        case 0x23ea64u: goto label_23ea64;
        case 0x23ea68u: goto label_23ea68;
        case 0x23ea6cu: goto label_23ea6c;
        case 0x23ea70u: goto label_23ea70;
        case 0x23ea74u: goto label_23ea74;
        case 0x23ea78u: goto label_23ea78;
        case 0x23ea7cu: goto label_23ea7c;
        case 0x23ea80u: goto label_23ea80;
        case 0x23ea84u: goto label_23ea84;
        case 0x23ea88u: goto label_23ea88;
        case 0x23ea8cu: goto label_23ea8c;
        case 0x23ea90u: goto label_23ea90;
        case 0x23ea94u: goto label_23ea94;
        case 0x23ea98u: goto label_23ea98;
        case 0x23ea9cu: goto label_23ea9c;
        case 0x23eaa0u: goto label_23eaa0;
        case 0x23eaa4u: goto label_23eaa4;
        case 0x23eaa8u: goto label_23eaa8;
        case 0x23eaacu: goto label_23eaac;
        case 0x23eab0u: goto label_23eab0;
        case 0x23eab4u: goto label_23eab4;
        case 0x23eab8u: goto label_23eab8;
        case 0x23eabcu: goto label_23eabc;
        case 0x23eac0u: goto label_23eac0;
        case 0x23eac4u: goto label_23eac4;
        case 0x23eac8u: goto label_23eac8;
        case 0x23eaccu: goto label_23eacc;
        case 0x23ead0u: goto label_23ead0;
        case 0x23ead4u: goto label_23ead4;
        case 0x23ead8u: goto label_23ead8;
        case 0x23eadcu: goto label_23eadc;
        case 0x23eae0u: goto label_23eae0;
        case 0x23eae4u: goto label_23eae4;
        case 0x23eae8u: goto label_23eae8;
        case 0x23eaecu: goto label_23eaec;
        case 0x23eaf0u: goto label_23eaf0;
        case 0x23eaf4u: goto label_23eaf4;
        case 0x23eaf8u: goto label_23eaf8;
        case 0x23eafcu: goto label_23eafc;
        case 0x23eb00u: goto label_23eb00;
        case 0x23eb04u: goto label_23eb04;
        case 0x23eb08u: goto label_23eb08;
        case 0x23eb0cu: goto label_23eb0c;
        case 0x23eb10u: goto label_23eb10;
        case 0x23eb14u: goto label_23eb14;
        case 0x23eb18u: goto label_23eb18;
        case 0x23eb1cu: goto label_23eb1c;
        case 0x23eb20u: goto label_23eb20;
        case 0x23eb24u: goto label_23eb24;
        case 0x23eb28u: goto label_23eb28;
        case 0x23eb2cu: goto label_23eb2c;
        case 0x23eb30u: goto label_23eb30;
        case 0x23eb34u: goto label_23eb34;
        case 0x23eb38u: goto label_23eb38;
        case 0x23eb3cu: goto label_23eb3c;
        case 0x23eb40u: goto label_23eb40;
        case 0x23eb44u: goto label_23eb44;
        case 0x23eb48u: goto label_23eb48;
        case 0x23eb4cu: goto label_23eb4c;
        case 0x23eb50u: goto label_23eb50;
        case 0x23eb54u: goto label_23eb54;
        case 0x23eb58u: goto label_23eb58;
        case 0x23eb5cu: goto label_23eb5c;
        case 0x23eb60u: goto label_23eb60;
        case 0x23eb64u: goto label_23eb64;
        case 0x23eb68u: goto label_23eb68;
        case 0x23eb6cu: goto label_23eb6c;
        case 0x23eb70u: goto label_23eb70;
        case 0x23eb74u: goto label_23eb74;
        case 0x23eb78u: goto label_23eb78;
        case 0x23eb7cu: goto label_23eb7c;
        case 0x23eb80u: goto label_23eb80;
        case 0x23eb84u: goto label_23eb84;
        case 0x23eb88u: goto label_23eb88;
        case 0x23eb8cu: goto label_23eb8c;
        case 0x23eb90u: goto label_23eb90;
        case 0x23eb94u: goto label_23eb94;
        case 0x23eb98u: goto label_23eb98;
        case 0x23eb9cu: goto label_23eb9c;
        case 0x23eba0u: goto label_23eba0;
        case 0x23eba4u: goto label_23eba4;
        case 0x23eba8u: goto label_23eba8;
        case 0x23ebacu: goto label_23ebac;
        case 0x23ebb0u: goto label_23ebb0;
        case 0x23ebb4u: goto label_23ebb4;
        case 0x23ebb8u: goto label_23ebb8;
        case 0x23ebbcu: goto label_23ebbc;
        case 0x23ebc0u: goto label_23ebc0;
        case 0x23ebc4u: goto label_23ebc4;
        case 0x23ebc8u: goto label_23ebc8;
        case 0x23ebccu: goto label_23ebcc;
        case 0x23ebd0u: goto label_23ebd0;
        case 0x23ebd4u: goto label_23ebd4;
        case 0x23ebd8u: goto label_23ebd8;
        case 0x23ebdcu: goto label_23ebdc;
        case 0x23ebe0u: goto label_23ebe0;
        case 0x23ebe4u: goto label_23ebe4;
        case 0x23ebe8u: goto label_23ebe8;
        case 0x23ebecu: goto label_23ebec;
        case 0x23ebf0u: goto label_23ebf0;
        case 0x23ebf4u: goto label_23ebf4;
        case 0x23ebf8u: goto label_23ebf8;
        case 0x23ebfcu: goto label_23ebfc;
        case 0x23ec00u: goto label_23ec00;
        case 0x23ec04u: goto label_23ec04;
        case 0x23ec08u: goto label_23ec08;
        case 0x23ec0cu: goto label_23ec0c;
        case 0x23ec10u: goto label_23ec10;
        case 0x23ec14u: goto label_23ec14;
        case 0x23ec18u: goto label_23ec18;
        case 0x23ec1cu: goto label_23ec1c;
        case 0x23ec20u: goto label_23ec20;
        case 0x23ec24u: goto label_23ec24;
        case 0x23ec28u: goto label_23ec28;
        case 0x23ec2cu: goto label_23ec2c;
        case 0x23ec30u: goto label_23ec30;
        case 0x23ec34u: goto label_23ec34;
        case 0x23ec38u: goto label_23ec38;
        case 0x23ec3cu: goto label_23ec3c;
        case 0x23ec40u: goto label_23ec40;
        case 0x23ec44u: goto label_23ec44;
        case 0x23ec48u: goto label_23ec48;
        case 0x23ec4cu: goto label_23ec4c;
        case 0x23ec50u: goto label_23ec50;
        case 0x23ec54u: goto label_23ec54;
        case 0x23ec58u: goto label_23ec58;
        case 0x23ec5cu: goto label_23ec5c;
        case 0x23ec60u: goto label_23ec60;
        case 0x23ec64u: goto label_23ec64;
        case 0x23ec68u: goto label_23ec68;
        case 0x23ec6cu: goto label_23ec6c;
        case 0x23ec70u: goto label_23ec70;
        case 0x23ec74u: goto label_23ec74;
        case 0x23ec78u: goto label_23ec78;
        case 0x23ec7cu: goto label_23ec7c;
        case 0x23ec80u: goto label_23ec80;
        case 0x23ec84u: goto label_23ec84;
        case 0x23ec88u: goto label_23ec88;
        case 0x23ec8cu: goto label_23ec8c;
        case 0x23ec90u: goto label_23ec90;
        case 0x23ec94u: goto label_23ec94;
        case 0x23ec98u: goto label_23ec98;
        case 0x23ec9cu: goto label_23ec9c;
        default: break;
    }

    ctx->pc = 0x23e498u;

label_23e498:
    // 0x23e498: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x23e498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_23e49c:
    // 0x23e49c: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x23e49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
label_23e4a0:
    // 0x23e4a0: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x23e4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_23e4a4:
    // 0x23e4a4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23e4a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e4a8:
    // 0x23e4a8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x23e4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_23e4ac:
    // 0x23e4ac: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x23e4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
label_23e4b0:
    // 0x23e4b0: 0xffb70110  sd          $s7, 0x110($sp)
    ctx->pc = 0x23e4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 23));
label_23e4b4:
    // 0x23e4b4: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x23e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
label_23e4b8:
    // 0x23e4b8: 0xffb300d0  sd          $s3, 0xD0($sp)
    ctx->pc = 0x23e4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 19));
label_23e4bc:
    // 0x23e4bc: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x23e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
label_23e4c0:
    // 0x23e4c0: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x23e4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
label_23e4c4:
    // 0x23e4c4: 0xffb500f0  sd          $s5, 0xF0($sp)
    ctx->pc = 0x23e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 21));
label_23e4c8:
    // 0x23e4c8: 0x8cb50018  lw          $s5, 0x18($a1)
    ctx->pc = 0x23e4c8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_23e4cc:
    // 0x23e4cc: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x23e4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_23e4d0:
    // 0x23e4d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23e4d4:
    if (ctx->pc == 0x23E4D4u) {
        ctx->pc = 0x23E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4D0u;
        // 0x23e4d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E4D8u;
        goto label_23e4d8;
    }
    ctx->pc = 0x23E4D0u;
    {
        const bool branch_taken_0x23e4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4D0u;
        // 0x23e4d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4d0) {
            ctx->pc = 0x23E4F8u;
            goto label_23e4f8;
        }
    }
    ctx->pc = 0x23E4D8u;
label_23e4d8:
    // 0x23e4d8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e4dc:
    // 0x23e4dc: 0x26c60014  addiu       $a2, $s6, 0x14
    ctx->pc = 0x23e4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_23e4e0:
    // 0x23e4e0: 0x24a55c00  addiu       $a1, $a1, 0x5C00
    ctx->pc = 0x23e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23552));
label_23e4e4:
    // 0x23e4e4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x23e4e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23e4e8:
    // 0x23e4e8: 0xc08b5ac  jal         func_22D6B0
label_23e4ec:
    if (ctx->pc == 0x23E4ECu) {
        ctx->pc = 0x23E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4E8u;
        // 0x23e4ec: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E4F0u;
        goto label_23e4f0;
    }
    ctx->pc = 0x23E4E8u;
    SET_GPR_U32(ctx, 31, 0x23E4F0u);
    ctx->pc = 0x23E4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E4E8u;
    // 0x23e4ec: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E4E8u, 0x23E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E4F0u;
label_23e4f0:
    // 0x23e4f0: 0x100001e0  b           . + 4 + (0x1E0 << 2)
label_23e4f4:
    if (ctx->pc == 0x23E4F4u) {
        ctx->pc = 0x23E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4F0u;
        // 0x23e4f4: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E4F8u;
        goto label_23e4f8;
    }
    ctx->pc = 0x23E4F0u;
    {
        const bool branch_taken_0x23e4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4F0u;
        // 0x23e4f4: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4f0) {
            ctx->pc = 0x23EC74u;
            goto label_23ec74;
        }
    }
    ctx->pc = 0x23E4F8u;
label_23e4f8:
    // 0x23e4f8: 0x8cb70008  lw          $s7, 0x8($a1)
    ctx->pc = 0x23e4f8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23e4fc:
    // 0x23e4fc: 0x92e40003  lbu         $a0, 0x3($s7)
    ctx->pc = 0x23e4fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3)));
label_23e500:
    // 0x23e500: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x23e500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
label_23e504:
    // 0x23e504: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x23e504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23e508:
    // 0x23e508: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23e508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23e50c:
    // 0x23e50c: 0xc08b60c  jal         func_22D830
label_23e510:
    if (ctx->pc == 0x23E510u) {
        ctx->pc = 0x23E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E50Cu;
        // 0x23e510: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E514u;
        goto label_23e514;
    }
    ctx->pc = 0x23E50Cu;
    SET_GPR_U32(ctx, 31, 0x23E514u);
    ctx->pc = 0x23E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E50Cu;
    // 0x23e510: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x23E50Cu, 0x23E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E514u;
label_23e514:
    // 0x23e514: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23e514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e518:
    // 0x23e518: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x23e518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_23e51c:
    // 0x23e51c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_23e520:
    if (ctx->pc == 0x23E520u) {
        ctx->pc = 0x23E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E51Cu;
        // 0x23e520: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E524u;
        goto label_23e524;
    }
    ctx->pc = 0x23E51Cu;
    {
        const bool branch_taken_0x23e51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e51c) {
            ctx->pc = 0x23E520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E51Cu;
            // 0x23e520: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E524u;
            goto label_23e524;
        }
    }
    ctx->pc = 0x23E524u;
label_23e524:
    // 0x23e524: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x23e524u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23e528:
    // 0x23e528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23e52c:
    // 0x23e52c: 0x106200dc  beq         $v1, $v0, . + 4 + (0xDC << 2)
label_23e530:
    if (ctx->pc == 0x23E530u) {
        ctx->pc = 0x23E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E52Cu;
        // 0x23e530: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E534u;
        goto label_23e534;
    }
    ctx->pc = 0x23E52Cu;
    {
        const bool branch_taken_0x23e52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E52Cu;
        // 0x23e530: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e52c) {
            ctx->pc = 0x23E8A0u;
            goto label_23e8a0;
        }
    }
    ctx->pc = 0x23E534u;
label_23e534:
    // 0x23e534: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23e538:
    if (ctx->pc == 0x23E538u) {
        ctx->pc = 0x23E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E534u;
        // 0x23e538: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E53Cu;
        goto label_23e53c;
    }
    ctx->pc = 0x23E534u;
    {
        const bool branch_taken_0x23e534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E534u;
        // 0x23e538: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e534) {
            ctx->pc = 0x23E54Cu;
            goto label_23e54c;
        }
    }
    ctx->pc = 0x23E53Cu;
label_23e53c:
    // 0x23e53c: 0x50700009  beql        $v1, $s0, . + 4 + (0x9 << 2)
label_23e540:
    if (ctx->pc == 0x23E540u) {
        ctx->pc = 0x23E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E53Cu;
        // 0x23e540: 0x92e20004  lbu         $v0, 0x4($s7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E544u;
        goto label_23e544;
    }
    ctx->pc = 0x23E53Cu;
    {
        const bool branch_taken_0x23e53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x23e53c) {
            ctx->pc = 0x23E540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E53Cu;
            // 0x23e540: 0x92e20004  lbu         $v0, 0x4($s7) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E564u;
            goto label_23e564;
        }
    }
    ctx->pc = 0x23E544u;
label_23e544:
    // 0x23e544: 0x100001aa  b           . + 4 + (0x1AA << 2)
label_23e548:
    if (ctx->pc == 0x23E548u) {
        ctx->pc = 0x23E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E544u;
        // 0x23e548: 0x8ec40174  lw          $a0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E54Cu;
        goto label_23e54c;
    }
    ctx->pc = 0x23E544u;
    {
        const bool branch_taken_0x23e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E544u;
        // 0x23e548: 0x8ec40174  lw          $a0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e544) {
            ctx->pc = 0x23EBF0u;
            goto label_23ebf0;
        }
    }
    ctx->pc = 0x23E54Cu;
label_23e54c:
    // 0x23e54c: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
label_23e550:
    if (ctx->pc == 0x23E550u) {
        ctx->pc = 0x23E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E54Cu;
        // 0x23e550: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E554u;
        goto label_23e554;
    }
    ctx->pc = 0x23E54Cu;
    {
        const bool branch_taken_0x23e54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E54Cu;
        // 0x23e550: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e54c) {
            ctx->pc = 0x23E714u;
            goto label_23e714;
        }
    }
    ctx->pc = 0x23E554u;
label_23e554:
    // 0x23e554: 0x106200ae  beq         $v1, $v0, . + 4 + (0xAE << 2)
label_23e558:
    if (ctx->pc == 0x23E558u) {
        ctx->pc = 0x23E55Cu;
        goto label_23e55c;
    }
    ctx->pc = 0x23E554u;
    {
        const bool branch_taken_0x23e554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23e554) {
            ctx->pc = 0x23E810u;
            goto label_23e810;
        }
    }
    ctx->pc = 0x23E55Cu;
label_23e55c:
    // 0x23e55c: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_23e560:
    if (ctx->pc == 0x23E560u) {
        ctx->pc = 0x23E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E55Cu;
        // 0x23e560: 0x8ec40174  lw          $a0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E564u;
        goto label_23e564;
    }
    ctx->pc = 0x23E55Cu;
    {
        const bool branch_taken_0x23e55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E55Cu;
        // 0x23e560: 0x8ec40174  lw          $a0, 0x174($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e55c) {
            ctx->pc = 0x23EBF0u;
            goto label_23ebf0;
        }
    }
    ctx->pc = 0x23E564u;
label_23e564:
    // 0x23e564: 0x26e30005  addiu       $v1, $s7, 0x5
    ctx->pc = 0x23e564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5));
label_23e568:
    // 0x23e568: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x23e568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_23e56c:
    // 0x23e56c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x23e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_23e570:
    // 0x23e570: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x23e570u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_23e574:
    // 0x23e574: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x23e574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_23e578:
    // 0x23e578: 0x245efffb  addiu       $fp, $v0, -0x5
    ctx->pc = 0x23e578u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_23e57c:
    // 0x23e57c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x23e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23e580:
    // 0x23e580: 0x7c10006  bgez        $fp, . + 4 + (0x6 << 2)
label_23e584:
    if (ctx->pc == 0x23E584u) {
        ctx->pc = 0x23E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E580u;
        // 0x23e584: 0xafa40098  sw          $a0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E588u;
        goto label_23e588;
    }
    ctx->pc = 0x23E580u;
    {
        const bool branch_taken_0x23e580 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x23E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E580u;
        // 0x23e584: 0xafa40098  sw          $a0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e580) {
            ctx->pc = 0x23E59Cu;
            goto label_23e59c;
        }
    }
    ctx->pc = 0x23E588u;
label_23e588:
    // 0x23e588: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23e588u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23e58c:
    // 0x23e58c: 0x3404c223  ori         $a0, $zero, 0xC223
    ctx->pc = 0x23e58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_23e590:
    // 0x23e590: 0x26105c30  addiu       $s0, $s0, 0x5C30
    ctx->pc = 0x23e590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23600));
label_23e594:
    // 0x23e594: 0x100000cf  b           . + 4 + (0xCF << 2)
label_23e598:
    if (ctx->pc == 0x23E598u) {
        ctx->pc = 0x23E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E594u;
        // 0x23e598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E59Cu;
        goto label_23e59c;
    }
    ctx->pc = 0x23E594u;
    {
        const bool branch_taken_0x23e594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E594u;
        // 0x23e598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e594) {
            ctx->pc = 0x23E8D4u;
            goto label_23e8d4;
        }
    }
    ctx->pc = 0x23E59Cu;
label_23e59c:
    // 0x23e59c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23e59cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23e5a0:
    // 0x23e5a0: 0x3404c223  ori         $a0, $zero, 0xC223
    ctx->pc = 0x23e5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_23e5a4:
    // 0x23e5a4: 0x26105c60  addiu       $s0, $s0, 0x5C60
    ctx->pc = 0x23e5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23648));
label_23e5a8:
    // 0x23e5a8: 0xc0902e8  jal         func_240BA0
label_23e5ac:
    if (ctx->pc == 0x23E5ACu) {
        ctx->pc = 0x23E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5A8u;
        // 0x23e5ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5B0u;
        goto label_23e5b0;
    }
    ctx->pc = 0x23E5A8u;
    SET_GPR_U32(ctx, 31, 0x23E5B0u);
    ctx->pc = 0x23E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5A8u;
    // 0x23e5ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BA0u, 0x23E5A8u, 0x23E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5B0u;
label_23e5b0:
    // 0x23e5b0: 0x26d30014  addiu       $s3, $s6, 0x14
    ctx->pc = 0x23e5b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_23e5b4:
    // 0x23e5b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23e5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e5b8:
    // 0x23e5b8: 0x92e40003  lbu         $a0, 0x3($s7)
    ctx->pc = 0x23e5b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3)));
label_23e5bc:
    // 0x23e5bc: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x23e5bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
label_23e5c0:
    // 0x23e5c0: 0x26d44128  addiu       $s4, $s6, 0x4128
    ctx->pc = 0x23e5c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 16680));
label_23e5c4:
    // 0x23e5c4: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x23e5c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23e5c8:
    // 0x23e5c8: 0x92f10001  lbu         $s1, 0x1($s7)
    ctx->pc = 0x23e5c8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23e5cc:
    // 0x23e5cc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23e5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23e5d0:
    // 0x23e5d0: 0x26d54028  addiu       $s5, $s6, 0x4028
    ctx->pc = 0x23e5d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16424));
label_23e5d4:
    // 0x23e5d4: 0xc08b60c  jal         func_22D830
label_23e5d8:
    if (ctx->pc == 0x23E5D8u) {
        ctx->pc = 0x23E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5D4u;
        // 0x23e5d8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5DCu;
        goto label_23e5dc;
    }
    ctx->pc = 0x23E5D4u;
    SET_GPR_U32(ctx, 31, 0x23E5DCu);
    ctx->pc = 0x23E5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5D4u;
    // 0x23e5d8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x23E5D4u, 0x23E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5DCu;
label_23e5dc:
    // 0x23e5dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23e5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e5e0:
    // 0x23e5e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23e5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23e5e4:
    // 0x23e5e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23e5e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23e5e8:
    // 0x23e5e8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23e5e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e5ec:
    // 0x23e5ec: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23e5ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e5f0:
    // 0x23e5f0: 0xc08b5ac  jal         func_22D6B0
label_23e5f4:
    if (ctx->pc == 0x23E5F4u) {
        ctx->pc = 0x23E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5F0u;
        // 0x23e5f4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5F8u;
        goto label_23e5f8;
    }
    ctx->pc = 0x23E5F0u;
    SET_GPR_U32(ctx, 31, 0x23E5F8u);
    ctx->pc = 0x23E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5F0u;
    // 0x23e5f4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E5F0u, 0x23E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5F8u;
label_23e5f8:
    // 0x23e5f8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x23e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23e5fc:
    // 0x23e5fc: 0xc090424  jal         func_241090
label_23e600:
    if (ctx->pc == 0x23E600u) {
        ctx->pc = 0x23E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5FCu;
        // 0x23e600: 0x33c5ffff  andi        $a1, $fp, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E604u;
        goto label_23e604;
    }
    ctx->pc = 0x23E5FCu;
    SET_GPR_U32(ctx, 31, 0x23E604u);
    ctx->pc = 0x23E600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5FCu;
    // 0x23e600: 0x33c5ffff  andi        $a1, $fp, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241090u, 0x23E5FCu, 0x23E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E604u;
label_23e604:
    // 0x23e604: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e608:
    // 0x23e608: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x23e608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_23e60c:
    // 0x23e60c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e610:
    // 0x23e610: 0xc08b5ac  jal         func_22D6B0
label_23e614:
    if (ctx->pc == 0x23E614u) {
        ctx->pc = 0x23E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E610u;
        // 0x23e614: 0x24a55c88  addiu       $a1, $a1, 0x5C88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E618u;
        goto label_23e618;
    }
    ctx->pc = 0x23E610u;
    SET_GPR_U32(ctx, 31, 0x23E618u);
    ctx->pc = 0x23E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E610u;
    // 0x23e614: 0x24a55c88  addiu       $a1, $a1, 0x5C88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E610u, 0x23E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E618u;
label_23e618:
    // 0x23e618: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x23e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_23e61c:
    // 0x23e61c: 0xc090404  jal         func_241010
label_23e620:
    if (ctx->pc == 0x23E620u) {
        ctx->pc = 0x23E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E61Cu;
        // 0x23e620: 0x8fa5009c  lw          $a1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E624u;
        goto label_23e624;
    }
    ctx->pc = 0x23E61Cu;
    SET_GPR_U32(ctx, 31, 0x23E624u);
    ctx->pc = 0x23E620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E61Cu;
    // 0x23e620: 0x8fa5009c  lw          $a1, 0x9C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241010u, 0x23E61Cu, 0x23E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E624u;
label_23e624:
    // 0x23e624: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e628:
    // 0x23e628: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e62c:
    // 0x23e62c: 0xc08b5ac  jal         func_22D6B0
label_23e630:
    if (ctx->pc == 0x23E630u) {
        ctx->pc = 0x23E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E62Cu;
        // 0x23e630: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E634u;
        goto label_23e634;
    }
    ctx->pc = 0x23E62Cu;
    SET_GPR_U32(ctx, 31, 0x23E634u);
    ctx->pc = 0x23E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E62Cu;
    // 0x23e630: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E62Cu, 0x23E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E634u;
label_23e634:
    // 0x23e634: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x23e634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23e638:
    // 0x23e638: 0xc08b07e  jal         func_22C1F8
label_23e63c:
    if (ctx->pc == 0x23E63Cu) {
        ctx->pc = 0x23E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E638u;
        // 0x23e63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E640u;
        goto label_23e640;
    }
    ctx->pc = 0x23E638u;
    SET_GPR_U32(ctx, 31, 0x23E640u);
    ctx->pc = 0x23E63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E638u;
    // 0x23e63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C1F8u, 0x23E638u, 0x23E640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E640u;
label_23e640:
    // 0x23e640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e644:
    // 0x23e644: 0x26e50001  addiu       $a1, $s7, 0x1
    ctx->pc = 0x23e644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_23e648:
    // 0x23e648: 0xc08b08e  jal         func_22C238
label_23e64c:
    if (ctx->pc == 0x23E64Cu) {
        ctx->pc = 0x23E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E648u;
        // 0x23e64c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E650u;
        goto label_23e650;
    }
    ctx->pc = 0x23E648u;
    SET_GPR_U32(ctx, 31, 0x23E650u);
    ctx->pc = 0x23E64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E648u;
    // 0x23e64c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C238u, 0x23E648u, 0x23E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E650u;
label_23e650:
    // 0x23e650: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23e650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23e654:
    // 0x23e654: 0xc090460  jal         func_241180
label_23e658:
    if (ctx->pc == 0x23E658u) {
        ctx->pc = 0x23E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E654u;
        // 0x23e658: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E65Cu;
        goto label_23e65c;
    }
    ctx->pc = 0x23E654u;
    SET_GPR_U32(ctx, 31, 0x23E65Cu);
    ctx->pc = 0x23E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E654u;
    // 0x23e658: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241180u, 0x23E654u, 0x23E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E65Cu;
label_23e65c:
    // 0x23e65c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23e65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23e660:
    // 0x23e660: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e664:
    // 0x23e664: 0xc08b08e  jal         func_22C238
label_23e668:
    if (ctx->pc == 0x23E668u) {
        ctx->pc = 0x23E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E664u;
        // 0x23e668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E66Cu;
        goto label_23e66c;
    }
    ctx->pc = 0x23E664u;
    SET_GPR_U32(ctx, 31, 0x23E66Cu);
    ctx->pc = 0x23E668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E664u;
    // 0x23e668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C238u, 0x23E664u, 0x23E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E66Cu;
label_23e66c:
    // 0x23e66c: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x23e66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_23e670:
    // 0x23e670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e674:
    // 0x23e674: 0xc08b08e  jal         func_22C238
label_23e678:
    if (ctx->pc == 0x23E678u) {
        ctx->pc = 0x23E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E674u;
        // 0x23e678: 0x8fa6009c  lw          $a2, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E67Cu;
        goto label_23e67c;
    }
    ctx->pc = 0x23E674u;
    SET_GPR_U32(ctx, 31, 0x23E67Cu);
    ctx->pc = 0x23E678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E674u;
    // 0x23e678: 0x8fa6009c  lw          $a2, 0x9C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C238u, 0x23E674u, 0x23E67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E67Cu;
label_23e67c:
    // 0x23e67c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23e67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e680:
    // 0x23e680: 0xc08b0ca  jal         func_22C328
label_23e684:
    if (ctx->pc == 0x23E684u) {
        ctx->pc = 0x23E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E680u;
        // 0x23e684: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E688u;
        goto label_23e688;
    }
    ctx->pc = 0x23E680u;
    SET_GPR_U32(ctx, 31, 0x23E688u);
    ctx->pc = 0x23E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E680u;
    // 0x23e684: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C328u, 0x23E680u, 0x23E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E688u;
label_23e688:
    // 0x23e688: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23e68c:
    // 0x23e68c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23e68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23e690:
    // 0x23e690: 0xa3a20090  sb          $v0, 0x90($sp)
    ctx->pc = 0x23e690u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
label_23e694:
    // 0x23e694: 0xc090460  jal         func_241180
label_23e698:
    if (ctx->pc == 0x23E698u) {
        ctx->pc = 0x23E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E694u;
        // 0x23e698: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E69Cu;
        goto label_23e69c;
    }
    ctx->pc = 0x23E694u;
    SET_GPR_U32(ctx, 31, 0x23E69Cu);
    ctx->pc = 0x23E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E694u;
    // 0x23e698: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241180u, 0x23E694u, 0x23E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E69Cu;
label_23e69c:
    // 0x23e69c: 0x92e70001  lbu         $a3, 0x1($s7)
    ctx->pc = 0x23e69cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23e6a0:
    // 0x23e6a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23e6a4:
    // 0x23e6a4: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x23e6a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e6a8:
    // 0x23e6a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_23e6ac:
    // 0x23e6ac: 0xafb50008  sw          $s5, 0x8($sp)
    ctx->pc = 0x23e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
label_23e6b0:
    // 0x23e6b0: 0x24845180  addiu       $a0, $a0, 0x5180
    ctx->pc = 0x23e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20864));
label_23e6b4:
    // 0x23e6b4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x23e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_23e6b8:
    // 0x23e6b8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23e6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23e6bc:
    // 0x23e6bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23e6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23e6c0:
    // 0x23e6c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23e6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e6c4:
    // 0x23e6c4: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x23e6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23e6c8:
    // 0x23e6c8: 0xc08fecc  jal         func_23FB30
label_23e6cc:
    if (ctx->pc == 0x23E6CCu) {
        ctx->pc = 0x23E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6C8u;
        // 0x23e6cc: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E6D0u;
        goto label_23e6d0;
    }
    ctx->pc = 0x23E6C8u;
    SET_GPR_U32(ctx, 31, 0x23E6D0u);
    ctx->pc = 0x23E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E6C8u;
    // 0x23e6cc: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB30u, 0x23E6C8u, 0x23E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6D0u;
label_23e6d0:
    // 0x23e6d0: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x23e6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
label_23e6d4:
    // 0x23e6d4: 0x8ec54020  lw          $a1, 0x4020($s6)
    ctx->pc = 0x23e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16416)));
label_23e6d8:
    // 0x23e6d8: 0x24c6ee50  addiu       $a2, $a2, -0x11B0
    ctx->pc = 0x23e6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962768));
label_23e6dc:
    // 0x23e6dc: 0x26c40250  addiu       $a0, $s6, 0x250
    ctx->pc = 0x23e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
label_23e6e0:
    // 0x23e6e0: 0xc08a058  jal         func_228160
label_23e6e4:
    if (ctx->pc == 0x23E6E4u) {
        ctx->pc = 0x23E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6E0u;
        // 0x23e6e4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E6E8u;
        goto label_23e6e8;
    }
    ctx->pc = 0x23E6E0u;
    SET_GPR_U32(ctx, 31, 0x23E6E8u);
    ctx->pc = 0x23E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E6E0u;
    // 0x23e6e4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228160u, 0x23E6E0u, 0x23E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6E8u;
label_23e6e8:
    // 0x23e6e8: 0x8ec34024  lw          $v1, 0x4024($s6)
    ctx->pc = 0x23e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16420)));
label_23e6ec:
    // 0x23e6ec: 0x26c44459  addiu       $a0, $s6, 0x4459
    ctx->pc = 0x23e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 17497));
label_23e6f0:
    // 0x23e6f0: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x23e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_23e6f4:
    // 0x23e6f4: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x23e6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_23e6f8:
    // 0x23e6f8: 0xaec30194  sw          $v1, 0x194($s6)
    ctx->pc = 0x23e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 404), GPR_U32(ctx, 3));
label_23e6fc:
    // 0x23e6fc: 0x92e20001  lbu         $v0, 0x1($s7)
    ctx->pc = 0x23e6fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23e700:
    // 0x23e700: 0xc08b538  jal         func_22D4E0
label_23e704:
    if (ctx->pc == 0x23E704u) {
        ctx->pc = 0x23E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E700u;
        // 0x23e704: 0xa2c24458  sb          $v0, 0x4458($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 17496), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E708u;
        goto label_23e708;
    }
    ctx->pc = 0x23E700u;
    SET_GPR_U32(ctx, 31, 0x23E708u);
    ctx->pc = 0x23E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E700u;
    // 0x23e704: 0xa2c24458  sb          $v0, 0x4458($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 17496), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x23E700u, 0x23E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E708u;
label_23e708:
    // 0x23e708: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x23e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_23e70c:
    // 0x23e70c: 0x10000158  b           . + 4 + (0x158 << 2)
label_23e710:
    if (ctx->pc == 0x23E710u) {
        ctx->pc = 0x23E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E70Cu;
        // 0x23e710: 0xaec24558  sw          $v0, 0x4558($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 17752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E714u;
        goto label_23e714;
    }
    ctx->pc = 0x23E70Cu;
    {
        const bool branch_taken_0x23e70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E70Cu;
        // 0x23e710: 0xaec24558  sw          $v0, 0x4558($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 17752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e70c) {
            ctx->pc = 0x23EC70u;
            goto label_23ec70;
        }
    }
    ctx->pc = 0x23E714u;
label_23e714:
    // 0x23e714: 0xc08a08c  jal         func_228230
label_23e718:
    if (ctx->pc == 0x23E718u) {
        ctx->pc = 0x23E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E714u;
        // 0x23e718: 0x26c40250  addiu       $a0, $s6, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E71Cu;
        goto label_23e71c;
    }
    ctx->pc = 0x23E714u;
    SET_GPR_U32(ctx, 31, 0x23E71Cu);
    ctx->pc = 0x23E718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E714u;
    // 0x23e718: 0x26c40250  addiu       $a0, $s6, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228230u, 0x23E714u, 0x23E71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E71Cu;
label_23e71c:
    // 0x23e71c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e720:
    // 0x23e720: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e724:
    // 0x23e724: 0x24a55ca0  addiu       $a1, $a1, 0x5CA0
    ctx->pc = 0x23e724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23712));
label_23e728:
    // 0x23e728: 0xc08b5ac  jal         func_22D6B0
label_23e72c:
    if (ctx->pc == 0x23E72Cu) {
        ctx->pc = 0x23E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E728u;
        // 0x23e72c: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E730u;
        goto label_23e730;
    }
    ctx->pc = 0x23E728u;
    SET_GPR_U32(ctx, 31, 0x23E730u);
    ctx->pc = 0x23E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E728u;
    // 0x23e72c: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E728u, 0x23E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E730u;
label_23e730:
    // 0x23e730: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x23e730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_23e734:
    // 0x23e734: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_23e738:
    if (ctx->pc == 0x23E738u) {
        ctx->pc = 0x23E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E734u;
        // 0x23e738: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E73Cu;
        goto label_23e73c;
    }
    ctx->pc = 0x23E734u;
    {
        const bool branch_taken_0x23e734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e734) {
            ctx->pc = 0x23E738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E734u;
            // 0x23e738: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E790u;
            goto label_23e790;
        }
    }
    ctx->pc = 0x23E73Cu;
label_23e73c:
    // 0x23e73c: 0x26b3fffc  addiu       $s3, $s5, -0x4
    ctx->pc = 0x23e73cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
label_23e740:
    // 0x23e740: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x23e740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_23e744:
    // 0x23e744: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x23e744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23e748:
    // 0x23e748: 0x2a620080  slti        $v0, $s3, 0x80
    ctx->pc = 0x23e748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)128) ? 1 : 0);
label_23e74c:
    // 0x23e74c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x23e74cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_23e750:
    // 0x23e750: 0x26f10004  addiu       $s1, $s7, 0x4
    ctx->pc = 0x23e750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_23e754:
    // 0x23e754: 0x26d0455c  addiu       $s0, $s6, 0x455C
    ctx->pc = 0x23e754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 17756));
label_23e758:
    // 0x23e758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23e758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e75c:
    // 0x23e75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e760:
    // 0x23e760: 0xc08b538  jal         func_22D4E0
label_23e764:
    if (ctx->pc == 0x23E764u) {
        ctx->pc = 0x23E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E760u;
        // 0x23e764: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E768u;
        goto label_23e768;
    }
    ctx->pc = 0x23E760u;
    SET_GPR_U32(ctx, 31, 0x23E768u);
    ctx->pc = 0x23E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E760u;
    // 0x23e764: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x23E760u, 0x23E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E768u;
label_23e768:
    // 0x23e768: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x23e768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_23e76c:
    // 0x23e76c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e770:
    // 0x23e770: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23e770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23e774:
    // 0x23e774: 0x24a55cb8  addiu       $a1, $a1, 0x5CB8
    ctx->pc = 0x23e774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23736));
label_23e778:
    // 0x23e778: 0xc08b5ac  jal         func_22D6B0
label_23e77c:
    if (ctx->pc == 0x23E77Cu) {
        ctx->pc = 0x23E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E778u;
        // 0x23e77c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E780u;
        goto label_23e780;
    }
    ctx->pc = 0x23E778u;
    SET_GPR_U32(ctx, 31, 0x23E780u);
    ctx->pc = 0x23E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E778u;
    // 0x23e77c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E778u, 0x23E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E780u;
label_23e780:
    // 0x23e780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e784:
    // 0x23e784: 0xc090424  jal         func_241090
label_23e788:
    if (ctx->pc == 0x23E788u) {
        ctx->pc = 0x23E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E784u;
        // 0x23e788: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E78Cu;
        goto label_23e78c;
    }
    ctx->pc = 0x23E784u;
    SET_GPR_U32(ctx, 31, 0x23E78Cu);
    ctx->pc = 0x23E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E784u;
    // 0x23e788: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241090u, 0x23E784u, 0x23E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E78Cu;
label_23e78c:
    // 0x23e78c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e78cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e790:
    // 0x23e790: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e794:
    // 0x23e794: 0xc08b5ac  jal         func_22D6B0
label_23e798:
    if (ctx->pc == 0x23E798u) {
        ctx->pc = 0x23E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E794u;
        // 0x23e798: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E79Cu;
        goto label_23e79c;
    }
    ctx->pc = 0x23E794u;
    SET_GPR_U32(ctx, 31, 0x23E79Cu);
    ctx->pc = 0x23E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E794u;
    // 0x23e798: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E794u, 0x23E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E79Cu;
label_23e79c:
    // 0x23e79c: 0xc08c682  jal         func_231A08
label_23e7a0:
    if (ctx->pc == 0x23E7A0u) {
        ctx->pc = 0x23E7A4u;
        goto label_23e7a4;
    }
    ctx->pc = 0x23E79Cu;
    SET_GPR_U32(ctx, 31, 0x23E7A4u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23E79Cu, 0x23E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E7A4u;
label_23e7a4:
    // 0x23e7a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e7a8:
    // 0x23e7a8: 0x8ec3012c  lw          $v1, 0x12C($s6)
    ctx->pc = 0x23e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 300)));
label_23e7ac:
    // 0x23e7ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23e7b0:
    // 0x23e7b0: 0x96c5423c  lhu         $a1, 0x423C($s6)
    ctx->pc = 0x23e7b0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16956)));
label_23e7b4:
    // 0x23e7b4: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x23e7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_23e7b8:
    // 0x23e7b8: 0x3404c223  ori         $a0, $zero, 0xC223
    ctx->pc = 0x23e7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_23e7bc:
    // 0x23e7bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23e7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23e7c0:
    // 0x23e7c0: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
label_23e7c4:
    if (ctx->pc == 0x23E7C4u) {
        ctx->pc = 0x23E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7C0u;
        // 0x23e7c4: 0xaec3012c  sw          $v1, 0x12C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E7C8u;
        goto label_23e7c8;
    }
    ctx->pc = 0x23E7C0u;
    {
        const bool branch_taken_0x23e7c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x23E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7C0u;
        // 0x23e7c4: 0xaec3012c  sw          $v1, 0x12C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7c0) {
            ctx->pc = 0x23E7F8u;
            goto label_23e7f8;
        }
    }
    ctx->pc = 0x23E7C8u;
label_23e7c8:
    // 0x23e7c8: 0x8ec20270  lw          $v0, 0x270($s6)
    ctx->pc = 0x23e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 624)));
label_23e7cc:
    // 0x23e7cc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23e7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_23e7d0:
    // 0x23e7d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23e7d4:
    if (ctx->pc == 0x23E7D4u) {
        ctx->pc = 0x23E7D8u;
        goto label_23e7d8;
    }
    ctx->pc = 0x23E7D0u;
    {
        const bool branch_taken_0x23e7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e7d0) {
            ctx->pc = 0x23E7F8u;
            goto label_23e7f8;
        }
    }
    ctx->pc = 0x23E7D8u;
label_23e7d8:
    // 0x23e7d8: 0x8ec2029c  lw          $v0, 0x29C($s6)
    ctx->pc = 0x23e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 668)));
label_23e7dc:
    // 0x23e7dc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23e7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_23e7e0:
    // 0x23e7e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23e7e4:
    if (ctx->pc == 0x23E7E4u) {
        ctx->pc = 0x23E7E8u;
        goto label_23e7e8;
    }
    ctx->pc = 0x23E7E0u;
    {
        const bool branch_taken_0x23e7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e7e0) {
            ctx->pc = 0x23E7F8u;
            goto label_23e7f8;
        }
    }
    ctx->pc = 0x23E7E8u;
label_23e7e8:
    // 0x23e7e8: 0xc08c698  jal         func_231A60
label_23e7ec:
    if (ctx->pc == 0x23E7ECu) {
        ctx->pc = 0x23E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7E8u;
        // 0x23e7ec: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E7F0u;
        goto label_23e7f0;
    }
    ctx->pc = 0x23E7E8u;
    SET_GPR_U32(ctx, 31, 0x23E7F0u);
    ctx->pc = 0x23E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E7E8u;
    // 0x23e7ec: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x23E7E8u, 0x23E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E7F0u;
label_23e7f0:
    // 0x23e7f0: 0x10000120  b           . + 4 + (0x120 << 2)
label_23e7f4:
    if (ctx->pc == 0x23E7F4u) {
        ctx->pc = 0x23E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7F0u;
        // 0x23e7f4: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E7F8u;
        goto label_23e7f8;
    }
    ctx->pc = 0x23E7F0u;
    {
        const bool branch_taken_0x23e7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7F0u;
        // 0x23e7f4: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7f0) {
            ctx->pc = 0x23EC74u;
            goto label_23ec74;
        }
    }
    ctx->pc = 0x23E7F8u;
label_23e7f8:
    // 0x23e7f8: 0xc08c698  jal         func_231A60
label_23e7fc:
    if (ctx->pc == 0x23E7FCu) {
        ctx->pc = 0x23E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7F8u;
        // 0x23e7fc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E800u;
        goto label_23e800;
    }
    ctx->pc = 0x23E7F8u;
    SET_GPR_U32(ctx, 31, 0x23E800u);
    ctx->pc = 0x23E7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E7F8u;
    // 0x23e7fc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x23E7F8u, 0x23E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E800u;
label_23e800:
    // 0x23e800: 0xc09026a  jal         func_2409A8
label_23e804:
    if (ctx->pc == 0x23E804u) {
        ctx->pc = 0x23E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E800u;
        // 0x23e804: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E808u;
        goto label_23e808;
    }
    ctx->pc = 0x23E800u;
    SET_GPR_U32(ctx, 31, 0x23E808u);
    ctx->pc = 0x23E804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E800u;
    // 0x23e804: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2409A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2409A8u, 0x23E800u, 0x23E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E808u;
label_23e808:
    // 0x23e808: 0x1000011a  b           . + 4 + (0x11A << 2)
label_23e80c:
    if (ctx->pc == 0x23E80Cu) {
        ctx->pc = 0x23E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E808u;
        // 0x23e80c: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E810u;
        goto label_23e810;
    }
    ctx->pc = 0x23E808u;
    {
        const bool branch_taken_0x23e808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E808u;
        // 0x23e80c: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e808) {
            ctx->pc = 0x23EC74u;
            goto label_23ec74;
        }
    }
    ctx->pc = 0x23E810u;
label_23e810:
    // 0x23e810: 0xc08a08c  jal         func_228230
label_23e814:
    if (ctx->pc == 0x23E814u) {
        ctx->pc = 0x23E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E810u;
        // 0x23e814: 0x26c40250  addiu       $a0, $s6, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E818u;
        goto label_23e818;
    }
    ctx->pc = 0x23E810u;
    SET_GPR_U32(ctx, 31, 0x23E818u);
    ctx->pc = 0x23E814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E810u;
    // 0x23e814: 0x26c40250  addiu       $a0, $s6, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228230u, 0x23E810u, 0x23E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E818u;
label_23e818:
    // 0x23e818: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e81c:
    // 0x23e81c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23e820:
    // 0x23e820: 0x24a55cc0  addiu       $a1, $a1, 0x5CC0
    ctx->pc = 0x23e820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23744));
label_23e824:
    // 0x23e824: 0xc08b5ac  jal         func_22D6B0
label_23e828:
    if (ctx->pc == 0x23E828u) {
        ctx->pc = 0x23E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E824u;
        // 0x23e828: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E82Cu;
        goto label_23e82c;
    }
    ctx->pc = 0x23E824u;
    SET_GPR_U32(ctx, 31, 0x23E82Cu);
    ctx->pc = 0x23E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E824u;
    // 0x23e828: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E824u, 0x23E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E82Cu;
label_23e82c:
    // 0x23e82c: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x23e82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_23e830:
    // 0x23e830: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_23e834:
    if (ctx->pc == 0x23E834u) {
        ctx->pc = 0x23E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E830u;
        // 0x23e834: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E838u;
        goto label_23e838;
    }
    ctx->pc = 0x23E830u;
    {
        const bool branch_taken_0x23e830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e830) {
            ctx->pc = 0x23E834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E830u;
            // 0x23e834: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E88Cu;
            goto label_23e88c;
        }
    }
    ctx->pc = 0x23E838u;
label_23e838:
    // 0x23e838: 0x26b3fffc  addiu       $s3, $s5, -0x4
    ctx->pc = 0x23e838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
label_23e83c:
    // 0x23e83c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x23e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_23e840:
    // 0x23e840: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x23e840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23e844:
    // 0x23e844: 0x2a620080  slti        $v0, $s3, 0x80
    ctx->pc = 0x23e844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)128) ? 1 : 0);
label_23e848:
    // 0x23e848: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x23e848u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_23e84c:
    // 0x23e84c: 0x26d0455c  addiu       $s0, $s6, 0x455C
    ctx->pc = 0x23e84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 17756));
label_23e850:
    // 0x23e850: 0x26f10004  addiu       $s1, $s7, 0x4
    ctx->pc = 0x23e850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_23e854:
    // 0x23e854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e858:
    // 0x23e858: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23e858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e85c:
    // 0x23e85c: 0xc08b538  jal         func_22D4E0
label_23e860:
    if (ctx->pc == 0x23E860u) {
        ctx->pc = 0x23E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E85Cu;
        // 0x23e860: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E864u;
        goto label_23e864;
    }
    ctx->pc = 0x23E85Cu;
    SET_GPR_U32(ctx, 31, 0x23E864u);
    ctx->pc = 0x23E860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E85Cu;
    // 0x23e860: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x23E85Cu, 0x23E864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E864u;
label_23e864:
    // 0x23e864: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x23e864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_23e868:
    // 0x23e868: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e86c:
    // 0x23e86c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23e86cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_23e870:
    // 0x23e870: 0x24a55cb8  addiu       $a1, $a1, 0x5CB8
    ctx->pc = 0x23e870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23736));
label_23e874:
    // 0x23e874: 0xc08b5ac  jal         func_22D6B0
label_23e878:
    if (ctx->pc == 0x23E878u) {
        ctx->pc = 0x23E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E874u;
        // 0x23e878: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E87Cu;
        goto label_23e87c;
    }
    ctx->pc = 0x23E874u;
    SET_GPR_U32(ctx, 31, 0x23E87Cu);
    ctx->pc = 0x23E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E874u;
    // 0x23e878: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E874u, 0x23E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E87Cu;
label_23e87c:
    // 0x23e87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e880:
    // 0x23e880: 0xc090424  jal         func_241090
label_23e884:
    if (ctx->pc == 0x23E884u) {
        ctx->pc = 0x23E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E880u;
        // 0x23e884: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E888u;
        goto label_23e888;
    }
    ctx->pc = 0x23E880u;
    SET_GPR_U32(ctx, 31, 0x23E888u);
    ctx->pc = 0x23E884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E880u;
    // 0x23e884: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241090u, 0x23E880u, 0x23E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E888u;
label_23e888:
    // 0x23e888: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e88c:
    // 0x23e88c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e890:
    // 0x23e890: 0xc08b5ac  jal         func_22D6B0
label_23e894:
    if (ctx->pc == 0x23E894u) {
        ctx->pc = 0x23E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E890u;
        // 0x23e894: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E898u;
        goto label_23e898;
    }
    ctx->pc = 0x23E890u;
    SET_GPR_U32(ctx, 31, 0x23E898u);
    ctx->pc = 0x23E894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E890u;
    // 0x23e894: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E890u, 0x23E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E898u;
label_23e898:
    // 0x23e898: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_23e89c:
    if (ctx->pc == 0x23E89Cu) {
        ctx->pc = 0x23E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E898u;
        // 0x23e89c: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8A0u;
        goto label_23e8a0;
    }
    ctx->pc = 0x23E898u;
    {
        const bool branch_taken_0x23e898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E898u;
        // 0x23e89c: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e898) {
            ctx->pc = 0x23EC74u;
            goto label_23ec74;
        }
    }
    ctx->pc = 0x23E8A0u;
label_23e8a0:
    // 0x23e8a0: 0x92e30004  lbu         $v1, 0x4($s7)
    ctx->pc = 0x23e8a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
label_23e8a4:
    // 0x23e8a4: 0x26e40005  addiu       $a0, $s7, 0x5
    ctx->pc = 0x23e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 5));
label_23e8a8:
    // 0x23e8a8: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x23e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_23e8ac:
    // 0x23e8ac: 0x2a31023  subu        $v0, $s5, $v1
    ctx->pc = 0x23e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_23e8b0:
    // 0x23e8b0: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x23e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_23e8b4:
    // 0x23e8b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x23e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23e8b8:
    // 0x23e8b8: 0x245efffb  addiu       $fp, $v0, -0x5
    ctx->pc = 0x23e8b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_23e8bc:
    // 0x23e8bc: 0x7c10023  bgez        $fp, . + 4 + (0x23 << 2)
label_23e8c0:
    if (ctx->pc == 0x23E8C0u) {
        ctx->pc = 0x23E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8BCu;
        // 0x23e8c0: 0xafa30098  sw          $v1, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8C4u;
        goto label_23e8c4;
    }
    ctx->pc = 0x23E8BCu;
    {
        const bool branch_taken_0x23e8bc = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x23E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8BCu;
        // 0x23e8c0: 0xafa30098  sw          $v1, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8bc) {
            ctx->pc = 0x23E94Cu;
            goto label_23e94c;
        }
    }
    ctx->pc = 0x23E8C4u;
label_23e8c4:
    // 0x23e8c4: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23e8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23e8c8:
    // 0x23e8c8: 0x3404c223  ori         $a0, $zero, 0xC223
    ctx->pc = 0x23e8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
label_23e8cc:
    // 0x23e8cc: 0x26105cd8  addiu       $s0, $s0, 0x5CD8
    ctx->pc = 0x23e8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23768));
label_23e8d0:
    // 0x23e8d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23e8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23e8d4:
    // 0x23e8d4: 0xc0902e8  jal         func_240BA0
label_23e8d8:
    if (ctx->pc == 0x23E8D8u) {
        ctx->pc = 0x23E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8D4u;
        // 0x23e8d8: 0x26d30014  addiu       $s3, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8DCu;
        goto label_23e8dc;
    }
    ctx->pc = 0x23E8D4u;
    SET_GPR_U32(ctx, 31, 0x23E8DCu);
    ctx->pc = 0x23E8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8D4u;
    // 0x23e8d8: 0x26d30014  addiu       $s3, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BA0u, 0x23E8D4u, 0x23E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8DCu;
label_23e8dc:
    // 0x23e8dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23e8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e8e0:
    // 0x23e8e0: 0x92e40003  lbu         $a0, 0x3($s7)
    ctx->pc = 0x23e8e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3)));
label_23e8e4:
    // 0x23e8e4: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x23e8e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
label_23e8e8:
    // 0x23e8e8: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x23e8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23e8ec:
    // 0x23e8ec: 0x92f10001  lbu         $s1, 0x1($s7)
    ctx->pc = 0x23e8ecu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23e8f0:
    // 0x23e8f0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23e8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23e8f4:
    // 0x23e8f4: 0xc08b60c  jal         func_22D830
label_23e8f8:
    if (ctx->pc == 0x23E8F8u) {
        ctx->pc = 0x23E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8F4u;
        // 0x23e8f8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8FCu;
        goto label_23e8fc;
    }
    ctx->pc = 0x23E8F4u;
    SET_GPR_U32(ctx, 31, 0x23E8FCu);
    ctx->pc = 0x23E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8F4u;
    // 0x23e8f8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x23E8F4u, 0x23E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8FCu;
label_23e8fc:
    // 0x23e8fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23e8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e900:
    // 0x23e900: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23e900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23e904:
    // 0x23e904: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23e904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23e908:
    // 0x23e908: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23e908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e90c:
    // 0x23e90c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23e90cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e910:
    // 0x23e910: 0xc08b5ac  jal         func_22D6B0
label_23e914:
    if (ctx->pc == 0x23E914u) {
        ctx->pc = 0x23E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E910u;
        // 0x23e914: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E918u;
        goto label_23e918;
    }
    ctx->pc = 0x23E910u;
    SET_GPR_U32(ctx, 31, 0x23E918u);
    ctx->pc = 0x23E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E910u;
    // 0x23e914: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E910u, 0x23E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E918u;
label_23e918:
    // 0x23e918: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x23e918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_23e91c:
    // 0x23e91c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23e920:
    if (ctx->pc == 0x23E920u) {
        ctx->pc = 0x23E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E91Cu;
        // 0x23e920: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E924u;
        goto label_23e924;
    }
    ctx->pc = 0x23E91Cu;
    {
        const bool branch_taken_0x23e91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e91c) {
            ctx->pc = 0x23E920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E91Cu;
            // 0x23e920: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E938u;
            goto label_23e938;
        }
    }
    ctx->pc = 0x23E924u;
label_23e924:
    // 0x23e924: 0x26a5fffc  addiu       $a1, $s5, -0x4
    ctx->pc = 0x23e924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
label_23e928:
    // 0x23e928: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x23e928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_23e92c:
    // 0x23e92c: 0xc090404  jal         func_241010
label_23e930:
    if (ctx->pc == 0x23E930u) {
        ctx->pc = 0x23E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E92Cu;
        // 0x23e930: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E934u;
        goto label_23e934;
    }
    ctx->pc = 0x23E92Cu;
    SET_GPR_U32(ctx, 31, 0x23E934u);
    ctx->pc = 0x23E930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E92Cu;
    // 0x23e930: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241010u, 0x23E92Cu, 0x23E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E934u;
label_23e934:
    // 0x23e934: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e938:
    // 0x23e938: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e93c:
    // 0x23e93c: 0xc08b5ac  jal         func_22D6B0
label_23e940:
    if (ctx->pc == 0x23E940u) {
        ctx->pc = 0x23E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E93Cu;
        // 0x23e940: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E944u;
        goto label_23e944;
    }
    ctx->pc = 0x23E93Cu;
    SET_GPR_U32(ctx, 31, 0x23E944u);
    ctx->pc = 0x23E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E93Cu;
    // 0x23e940: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E93Cu, 0x23E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E944u;
label_23e944:
    // 0x23e944: 0x100000cb  b           . + 4 + (0xCB << 2)
label_23e948:
    if (ctx->pc == 0x23E948u) {
        ctx->pc = 0x23E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E944u;
        // 0x23e948: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E94Cu;
        goto label_23e94c;
    }
    ctx->pc = 0x23E944u;
    {
        const bool branch_taken_0x23e944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E944u;
        // 0x23e948: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e944) {
            ctx->pc = 0x23EC74u;
            goto label_23ec74;
        }
    }
    ctx->pc = 0x23E94Cu;
label_23e94c:
    // 0x23e94c: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x23e94cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23e950:
    // 0x23e950: 0x92c2017c  lbu         $v0, 0x17C($s6)
    ctx->pc = 0x23e950u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 380)));
label_23e954:
    // 0x23e954: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_23e958:
    if (ctx->pc == 0x23E958u) {
        ctx->pc = 0x23E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E954u;
        // 0x23e958: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E95Cu;
        goto label_23e95c;
    }
    ctx->pc = 0x23E954u;
    {
        const bool branch_taken_0x23e954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E954u;
        // 0x23e958: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e954) {
            ctx->pc = 0x23E97Cu;
            goto label_23e97c;
        }
    }
    ctx->pc = 0x23E95Cu;
label_23e95c:
    // 0x23e95c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23e95cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23e960:
    // 0x23e960: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23e960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e964:
    // 0x23e964: 0x24a55d08  addiu       $a1, $a1, 0x5D08
    ctx->pc = 0x23e964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23816));
label_23e968:
    // 0x23e968: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e96c:
    // 0x23e96c: 0xc08b5ac  jal         func_22D6B0
label_23e970:
    if (ctx->pc == 0x23E970u) {
        ctx->pc = 0x23E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E96Cu;
        // 0x23e970: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E974u;
        goto label_23e974;
    }
    ctx->pc = 0x23E96Cu;
    SET_GPR_U32(ctx, 31, 0x23E974u);
    ctx->pc = 0x23E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E96Cu;
    // 0x23e970: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E96Cu, 0x23E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E974u;
label_23e974:
    // 0x23e974: 0x100000bf  b           . + 4 + (0xBF << 2)
label_23e978:
    if (ctx->pc == 0x23E978u) {
        ctx->pc = 0x23E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E974u;
        // 0x23e978: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E97Cu;
        goto label_23e97c;
    }
    ctx->pc = 0x23E974u;
    {
        const bool branch_taken_0x23e974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E974u;
        // 0x23e978: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e974) {
            ctx->pc = 0x23EC74u;
            goto label_23ec74;
        }
    }
    ctx->pc = 0x23E97Cu;
label_23e97c:
    // 0x23e97c: 0x26d04248  addiu       $s0, $s6, 0x4248
    ctx->pc = 0x23e97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 16968));
label_23e980:
    // 0x23e980: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x23e980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_23e984:
    // 0x23e984: 0xc090460  jal         func_241180
label_23e988:
    if (ctx->pc == 0x23E988u) {
        ctx->pc = 0x23E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E984u;
        // 0x23e988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E98Cu;
        goto label_23e98c;
    }
    ctx->pc = 0x23E984u;
    SET_GPR_U32(ctx, 31, 0x23E98Cu);
    ctx->pc = 0x23E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E984u;
    // 0x23e988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241180u, 0x23E984u, 0x23E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E98Cu;
label_23e98c:
    // 0x23e98c: 0x17c20008  bne         $fp, $v0, . + 4 + (0x8 << 2)
label_23e990:
    if (ctx->pc == 0x23E990u) {
        ctx->pc = 0x23E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E98Cu;
        // 0x23e990: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E994u;
        goto label_23e994;
    }
    ctx->pc = 0x23E98Cu;
    {
        const bool branch_taken_0x23e98c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E98Cu;
        // 0x23e990: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e98c) {
            ctx->pc = 0x23E9B0u;
            goto label_23e9b0;
        }
    }
    ctx->pc = 0x23E994u;
label_23e994:
    // 0x23e994: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x23e994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23e998:
    // 0x23e998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23e998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e99c:
    // 0x23e99c: 0xc048c5e  jal         func_123178
label_23e9a0:
    if (ctx->pc == 0x23E9A0u) {
        ctx->pc = 0x23E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E99Cu;
        // 0x23e9a0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9A4u;
        goto label_23e9a4;
    }
    ctx->pc = 0x23E99Cu;
    SET_GPR_U32(ctx, 31, 0x23E9A4u);
    ctx->pc = 0x23E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E99Cu;
    // 0x23e9a0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x23E99Cu, 0x23E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9A4u;
label_23e9a4:
    // 0x23e9a4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_23e9a8:
    if (ctx->pc == 0x23E9A8u) {
        ctx->pc = 0x23E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9A4u;
        // 0x23e9a8: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9ACu;
        goto label_23e9ac;
    }
    ctx->pc = 0x23E9A4u;
    {
        const bool branch_taken_0x23e9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e9a4) {
            ctx->pc = 0x23E9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E9A4u;
            // 0x23e9a8: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA08u;
            goto label_23ea08;
        }
    }
    ctx->pc = 0x23E9ACu;
label_23e9ac:
    // 0x23e9ac: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e9b0:
    // 0x23e9b0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23e9b4:
    // 0x23e9b4: 0x24a55d48  addiu       $a1, $a1, 0x5D48
    ctx->pc = 0x23e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23880));
label_23e9b8:
    // 0x23e9b8: 0xc08b5ac  jal         func_22D6B0
label_23e9bc:
    if (ctx->pc == 0x23E9BCu) {
        ctx->pc = 0x23E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9B8u;
        // 0x23e9bc: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9C0u;
        goto label_23e9c0;
    }
    ctx->pc = 0x23E9B8u;
    SET_GPR_U32(ctx, 31, 0x23E9C0u);
    ctx->pc = 0x23E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9B8u;
    // 0x23e9bc: 0x26c60014  addiu       $a2, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E9B8u, 0x23E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9C0u;
label_23e9c0:
    // 0x23e9c0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x23e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23e9c4:
    // 0x23e9c4: 0xc090424  jal         func_241090
label_23e9c8:
    if (ctx->pc == 0x23E9C8u) {
        ctx->pc = 0x23E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9C4u;
        // 0x23e9c8: 0x33c5ffff  andi        $a1, $fp, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9CCu;
        goto label_23e9cc;
    }
    ctx->pc = 0x23E9C4u;
    SET_GPR_U32(ctx, 31, 0x23E9CCu);
    ctx->pc = 0x23E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9C4u;
    // 0x23e9c8: 0x33c5ffff  andi        $a1, $fp, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241090u, 0x23E9C4u, 0x23E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9CCu;
label_23e9cc:
    // 0x23e9cc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e9d0:
    // 0x23e9d0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e9d4:
    // 0x23e9d4: 0xc08b5ac  jal         func_22D6B0
label_23e9d8:
    if (ctx->pc == 0x23E9D8u) {
        ctx->pc = 0x23E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9D4u;
        // 0x23e9d8: 0x24a55d68  addiu       $a1, $a1, 0x5D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9DCu;
        goto label_23e9dc;
    }
    ctx->pc = 0x23E9D4u;
    SET_GPR_U32(ctx, 31, 0x23E9DCu);
    ctx->pc = 0x23E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9D4u;
    // 0x23e9d8: 0x24a55d68  addiu       $a1, $a1, 0x5D68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E9D4u, 0x23E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9DCu;
label_23e9dc:
    // 0x23e9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e9e0:
    // 0x23e9e0: 0xc090460  jal         func_241180
label_23e9e4:
    if (ctx->pc == 0x23E9E4u) {
        ctx->pc = 0x23E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9E0u;
        // 0x23e9e4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9E8u;
        goto label_23e9e8;
    }
    ctx->pc = 0x23E9E0u;
    SET_GPR_U32(ctx, 31, 0x23E9E8u);
    ctx->pc = 0x23E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9E0u;
    // 0x23e9e4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241180u, 0x23E9E0u, 0x23E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9E8u;
label_23e9e8:
    // 0x23e9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e9ec:
    // 0x23e9ec: 0xc090424  jal         func_241090
label_23e9f0:
    if (ctx->pc == 0x23E9F0u) {
        ctx->pc = 0x23E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9ECu;
        // 0x23e9f0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E9F4u;
        goto label_23e9f4;
    }
    ctx->pc = 0x23E9ECu;
    SET_GPR_U32(ctx, 31, 0x23E9F4u);
    ctx->pc = 0x23E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9ECu;
    // 0x23e9f0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241090u, 0x23E9ECu, 0x23E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9F4u;
label_23e9f4:
    // 0x23e9f4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23e9f8:
    // 0x23e9f8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23e9fc:
    // 0x23e9fc: 0xc08b5ac  jal         func_22D6B0
label_23ea00:
    if (ctx->pc == 0x23EA00u) {
        ctx->pc = 0x23EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9FCu;
        // 0x23ea00: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA04u;
        goto label_23ea04;
    }
    ctx->pc = 0x23E9FCu;
    SET_GPR_U32(ctx, 31, 0x23EA04u);
    ctx->pc = 0x23EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9FCu;
    // 0x23ea00: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23E9FCu, 0x23EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA04u;
label_23ea04:
    // 0x23ea04: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ea04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ea08:
    // 0x23ea08: 0x8ec40174  lw          $a0, 0x174($s6)
    ctx->pc = 0x23ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
label_23ea0c:
    // 0x23ea0c: 0x26105d78  addiu       $s0, $s0, 0x5D78
    ctx->pc = 0x23ea0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23928));
label_23ea10:
    // 0x23ea10: 0xc09038e  jal         func_240E38
label_23ea14:
    if (ctx->pc == 0x23EA14u) {
        ctx->pc = 0x23EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA10u;
        // 0x23ea14: 0x26d40014  addiu       $s4, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA18u;
        goto label_23ea18;
    }
    ctx->pc = 0x23EA10u;
    SET_GPR_U32(ctx, 31, 0x23EA18u);
    ctx->pc = 0x23EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA10u;
    // 0x23ea14: 0x26d40014  addiu       $s4, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E38u, 0x23EA10u, 0x23EA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA18u;
label_23ea18:
    // 0x23ea18: 0x92e50000  lbu         $a1, 0x0($s7)
    ctx->pc = 0x23ea18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23ea1c:
    // 0x23ea1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23ea1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ea20:
    // 0x23ea20: 0xc0902e8  jal         func_240BA0
label_23ea24:
    if (ctx->pc == 0x23EA24u) {
        ctx->pc = 0x23EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA20u;
        // 0x23ea24: 0x3404c223  ori         $a0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA28u;
        goto label_23ea28;
    }
    ctx->pc = 0x23EA20u;
    SET_GPR_U32(ctx, 31, 0x23EA28u);
    ctx->pc = 0x23EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA20u;
    // 0x23ea24: 0x3404c223  ori         $a0, $zero, 0xC223 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
    ctx->in_delay_slot = false;
    ctx->pc = 0x240BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BA0u, 0x23EA20u, 0x23EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA28u;
label_23ea28:
    // 0x23ea28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23ea28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ea2c:
    // 0x23ea2c: 0x92e40003  lbu         $a0, 0x3($s7)
    ctx->pc = 0x23ea2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3)));
label_23ea30:
    // 0x23ea30: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x23ea30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
label_23ea34:
    // 0x23ea34: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x23ea34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23ea38:
    // 0x23ea38: 0x92f10001  lbu         $s1, 0x1($s7)
    ctx->pc = 0x23ea38u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23ea3c:
    // 0x23ea3c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23ea3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23ea40:
    // 0x23ea40: 0xc08b60c  jal         func_22D830
label_23ea44:
    if (ctx->pc == 0x23EA44u) {
        ctx->pc = 0x23EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA40u;
        // 0x23ea44: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA48u;
        goto label_23ea48;
    }
    ctx->pc = 0x23EA40u;
    SET_GPR_U32(ctx, 31, 0x23EA48u);
    ctx->pc = 0x23EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA40u;
    // 0x23ea44: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x23EA40u, 0x23EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA48u;
label_23ea48:
    // 0x23ea48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23ea48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ea4c:
    // 0x23ea4c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23ea4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ea50:
    // 0x23ea50: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x23ea50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ea54:
    // 0x23ea54: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x23ea54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ea58:
    // 0x23ea58: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x23ea58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ea5c:
    // 0x23ea5c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23ea60:
    // 0x23ea60: 0xc08b5ac  jal         func_22D6B0
label_23ea64:
    if (ctx->pc == 0x23EA64u) {
        ctx->pc = 0x23EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA60u;
        // 0x23ea64: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA68u;
        goto label_23ea68;
    }
    ctx->pc = 0x23EA60u;
    SET_GPR_U32(ctx, 31, 0x23EA68u);
    ctx->pc = 0x23EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA60u;
    // 0x23ea64: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23EA60u, 0x23EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA68u;
label_23ea68:
    // 0x23ea68: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x23ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23ea6c:
    // 0x23ea6c: 0xc090424  jal         func_241090
label_23ea70:
    if (ctx->pc == 0x23EA70u) {
        ctx->pc = 0x23EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA6Cu;
        // 0x23ea70: 0x33c5ffff  andi        $a1, $fp, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA74u;
        goto label_23ea74;
    }
    ctx->pc = 0x23EA6Cu;
    SET_GPR_U32(ctx, 31, 0x23EA74u);
    ctx->pc = 0x23EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA6Cu;
    // 0x23ea70: 0x33c5ffff  andi        $a1, $fp, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241090u, 0x23EA6Cu, 0x23EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA74u;
label_23ea74:
    // 0x23ea74: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23ea78:
    // 0x23ea78: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x23ea78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_23ea7c:
    // 0x23ea7c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23ea80:
    // 0x23ea80: 0xc08b5ac  jal         func_22D6B0
label_23ea84:
    if (ctx->pc == 0x23EA84u) {
        ctx->pc = 0x23EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA80u;
        // 0x23ea84: 0x24a55c88  addiu       $a1, $a1, 0x5C88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA88u;
        goto label_23ea88;
    }
    ctx->pc = 0x23EA80u;
    SET_GPR_U32(ctx, 31, 0x23EA88u);
    ctx->pc = 0x23EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA80u;
    // 0x23ea84: 0x24a55c88  addiu       $a1, $a1, 0x5C88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23EA80u, 0x23EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA88u;
label_23ea88:
    // 0x23ea88: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x23ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_23ea8c:
    // 0x23ea8c: 0xc090404  jal         func_241010
label_23ea90:
    if (ctx->pc == 0x23EA90u) {
        ctx->pc = 0x23EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA8Cu;
        // 0x23ea90: 0x8fa5009c  lw          $a1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EA94u;
        goto label_23ea94;
    }
    ctx->pc = 0x23EA8Cu;
    SET_GPR_U32(ctx, 31, 0x23EA94u);
    ctx->pc = 0x23EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA8Cu;
    // 0x23ea90: 0x8fa5009c  lw          $a1, 0x9C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241010u, 0x23EA8Cu, 0x23EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA94u;
label_23ea94:
    // 0x23ea94: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23ea98:
    // 0x23ea98: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23ea9c:
    // 0x23ea9c: 0xc08b5ac  jal         func_22D6B0
label_23eaa0:
    if (ctx->pc == 0x23EAA0u) {
        ctx->pc = 0x23EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA9Cu;
        // 0x23eaa0: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EAA4u;
        goto label_23eaa4;
    }
    ctx->pc = 0x23EA9Cu;
    SET_GPR_U32(ctx, 31, 0x23EAA4u);
    ctx->pc = 0x23EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA9Cu;
    // 0x23eaa0: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23EA9Cu, 0x23EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EAA4u;
label_23eaa4:
    // 0x23eaa4: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x23eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_23eaa8:
    // 0x23eaa8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23eaac:
    // 0x23eaac: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_23eab0:
    if (ctx->pc == 0x23EAB0u) {
        ctx->pc = 0x23EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAACu;
        // 0x23eab0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EAB4u;
        goto label_23eab4;
    }
    ctx->pc = 0x23EAACu;
    {
        const bool branch_taken_0x23eaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAACu;
        // 0x23eab0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eaac) {
            ctx->pc = 0x23EAD4u;
            goto label_23ead4;
        }
    }
    ctx->pc = 0x23EAB4u;
label_23eab4:
    // 0x23eab4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23eab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23eab8:
    // 0x23eab8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23eab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23eabc:
    // 0x23eabc: 0x24a55da8  addiu       $a1, $a1, 0x5DA8
    ctx->pc = 0x23eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23976));
label_23eac0:
    // 0x23eac0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23eac4:
    // 0x23eac4: 0xc08b5ac  jal         func_22D6B0
label_23eac8:
    if (ctx->pc == 0x23EAC8u) {
        ctx->pc = 0x23EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAC4u;
        // 0x23eac8: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EACCu;
        goto label_23eacc;
    }
    ctx->pc = 0x23EAC4u;
    SET_GPR_U32(ctx, 31, 0x23EACCu);
    ctx->pc = 0x23EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EAC4u;
    // 0x23eac8: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23EAC4u, 0x23EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EACCu;
label_23eacc:
    // 0x23eacc: 0x10000069  b           . + 4 + (0x69 << 2)
label_23ead0:
    if (ctx->pc == 0x23EAD0u) {
        ctx->pc = 0x23EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EACCu;
        // 0x23ead0: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EAD4u;
        goto label_23ead4;
    }
    ctx->pc = 0x23EACCu;
    {
        const bool branch_taken_0x23eacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EACCu;
        // 0x23ead0: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eacc) {
            ctx->pc = 0x23EC74u;
            goto label_23ec74;
        }
    }
    ctx->pc = 0x23EAD4u;
label_23ead4:
    // 0x23ead4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x23ead4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23ead8:
    // 0x23ead8: 0x26d14348  addiu       $s1, $s6, 0x4348
    ctx->pc = 0x23ead8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 17224));
label_23eadc:
    // 0x23eadc: 0xc08b07e  jal         func_22C1F8
label_23eae0:
    if (ctx->pc == 0x23EAE0u) {
        ctx->pc = 0x23EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EADCu;
        // 0x23eae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EAE4u;
        goto label_23eae4;
    }
    ctx->pc = 0x23EADCu;
    SET_GPR_U32(ctx, 31, 0x23EAE4u);
    ctx->pc = 0x23EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EADCu;
    // 0x23eae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C1F8u, 0x23EADCu, 0x23EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EAE4u;
label_23eae4:
    // 0x23eae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23eae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23eae8:
    // 0x23eae8: 0x26e50001  addiu       $a1, $s7, 0x1
    ctx->pc = 0x23eae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_23eaec:
    // 0x23eaec: 0xc08b08e  jal         func_22C238
label_23eaf0:
    if (ctx->pc == 0x23EAF0u) {
        ctx->pc = 0x23EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAECu;
        // 0x23eaf0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EAF4u;
        goto label_23eaf4;
    }
    ctx->pc = 0x23EAECu;
    SET_GPR_U32(ctx, 31, 0x23EAF4u);
    ctx->pc = 0x23EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EAECu;
    // 0x23eaf0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C238u, 0x23EAECu, 0x23EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EAF4u;
label_23eaf4:
    // 0x23eaf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23eaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23eaf8:
    // 0x23eaf8: 0xc090460  jal         func_241180
label_23eafc:
    if (ctx->pc == 0x23EAFCu) {
        ctx->pc = 0x23EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAF8u;
        // 0x23eafc: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB00u;
        goto label_23eb00;
    }
    ctx->pc = 0x23EAF8u;
    SET_GPR_U32(ctx, 31, 0x23EB00u);
    ctx->pc = 0x23EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EAF8u;
    // 0x23eafc: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241180u, 0x23EAF8u, 0x23EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB00u;
label_23eb00:
    // 0x23eb00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23eb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23eb04:
    // 0x23eb04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23eb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23eb08:
    // 0x23eb08: 0xc08b08e  jal         func_22C238
label_23eb0c:
    if (ctx->pc == 0x23EB0Cu) {
        ctx->pc = 0x23EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB08u;
        // 0x23eb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB10u;
        goto label_23eb10;
    }
    ctx->pc = 0x23EB08u;
    SET_GPR_U32(ctx, 31, 0x23EB10u);
    ctx->pc = 0x23EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB08u;
    // 0x23eb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C238u, 0x23EB08u, 0x23EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB10u;
label_23eb10:
    // 0x23eb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23eb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23eb14:
    // 0x23eb14: 0x26c54228  addiu       $a1, $s6, 0x4228
    ctx->pc = 0x23eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16936));
label_23eb18:
    // 0x23eb18: 0xc08b08e  jal         func_22C238
label_23eb1c:
    if (ctx->pc == 0x23EB1Cu) {
        ctx->pc = 0x23EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB18u;
        // 0x23eb1c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB20u;
        goto label_23eb20;
    }
    ctx->pc = 0x23EB18u;
    SET_GPR_U32(ctx, 31, 0x23EB20u);
    ctx->pc = 0x23EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB18u;
    // 0x23eb1c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C238u, 0x23EB18u, 0x23EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB20u;
label_23eb20:
    // 0x23eb20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23eb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23eb24:
    // 0x23eb24: 0xc08b0ca  jal         func_22C328
label_23eb28:
    if (ctx->pc == 0x23EB28u) {
        ctx->pc = 0x23EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB24u;
        // 0x23eb28: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB2Cu;
        goto label_23eb2c;
    }
    ctx->pc = 0x23EB24u;
    SET_GPR_U32(ctx, 31, 0x23EB2Cu);
    ctx->pc = 0x23EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB24u;
    // 0x23eb28: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C328u, 0x23EB24u, 0x23EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB2Cu;
label_23eb2c:
    // 0x23eb2c: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x23eb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_23eb30:
    // 0x23eb30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23eb34:
    // 0x23eb34: 0xc048c5e  jal         func_123178
label_23eb38:
    if (ctx->pc == 0x23EB38u) {
        ctx->pc = 0x23EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB34u;
        // 0x23eb38: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB3Cu;
        goto label_23eb3c;
    }
    ctx->pc = 0x23EB34u;
    SET_GPR_U32(ctx, 31, 0x23EB3Cu);
    ctx->pc = 0x23EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB34u;
    // 0x23eb38: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x23EB34u, 0x23EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB3Cu;
label_23eb3c:
    // 0x23eb3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_23eb40:
    if (ctx->pc == 0x23EB40u) {
        ctx->pc = 0x23EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB3Cu;
        // 0x23eb40: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB44u;
        goto label_23eb44;
    }
    ctx->pc = 0x23EB3Cu;
    {
        const bool branch_taken_0x23eb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB3Cu;
        // 0x23eb40: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb3c) {
            ctx->pc = 0x23EB74u;
            goto label_23eb74;
        }
    }
    ctx->pc = 0x23EB44u;
label_23eb44:
    // 0x23eb44: 0x92e70001  lbu         $a3, 0x1($s7)
    ctx->pc = 0x23eb44u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23eb48:
    // 0x23eb48: 0x26105180  addiu       $s0, $s0, 0x5180
    ctx->pc = 0x23eb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20864));
label_23eb4c:
    // 0x23eb4c: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x23eb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
label_23eb50:
    // 0x23eb50: 0x25295de0  addiu       $t1, $t1, 0x5DE0
    ctx->pc = 0x23eb50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24032));
label_23eb54:
    // 0x23eb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23eb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23eb58:
    // 0x23eb58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23eb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23eb5c:
    // 0x23eb5c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23eb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23eb60:
    // 0x23eb60: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x23eb60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23eb64:
    // 0x23eb64: 0xc08fecc  jal         func_23FB30
label_23eb68:
    if (ctx->pc == 0x23EB68u) {
        ctx->pc = 0x23EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB64u;
        // 0x23eb68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB6Cu;
        goto label_23eb6c;
    }
    ctx->pc = 0x23EB64u;
    SET_GPR_U32(ctx, 31, 0x23EB6Cu);
    ctx->pc = 0x23EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB64u;
    // 0x23eb68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB30u, 0x23EB64u, 0x23EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB6Cu;
label_23eb6c:
    // 0x23eb6c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_23eb70:
    if (ctx->pc == 0x23EB70u) {
        ctx->pc = 0x23EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB6Cu;
        // 0x23eb70: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB74u;
        goto label_23eb74;
    }
    ctx->pc = 0x23EB6Cu;
    {
        const bool branch_taken_0x23eb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB6Cu;
        // 0x23eb70: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb6c) {
            ctx->pc = 0x23EBE0u;
            goto label_23ebe0;
        }
    }
    ctx->pc = 0x23EB74u;
label_23eb74:
    // 0x23eb74: 0x8ec30174  lw          $v1, 0x174($s6)
    ctx->pc = 0x23eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
label_23eb78:
    // 0x23eb78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23eb7c:
    // 0x23eb7c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23eb80:
    if (ctx->pc == 0x23EB80u) {
        ctx->pc = 0x23EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB7Cu;
        // 0x23eb80: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB84u;
        goto label_23eb84;
    }
    ctx->pc = 0x23EB7Cu;
    {
        const bool branch_taken_0x23eb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB7Cu;
        // 0x23eb80: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb7c) {
            ctx->pc = 0x23EB8Cu;
            goto label_23eb8c;
        }
    }
    ctx->pc = 0x23EB84u;
label_23eb84:
    // 0x23eb84: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_23eb88:
    if (ctx->pc == 0x23EB88u) {
        ctx->pc = 0x23EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB84u;
        // 0x23eb88: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EB8Cu;
        goto label_23eb8c;
    }
    ctx->pc = 0x23EB84u;
    {
        const bool branch_taken_0x23eb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB84u;
        // 0x23eb88: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb84) {
            ctx->pc = 0x23EBBCu;
            goto label_23ebbc;
        }
    }
    ctx->pc = 0x23EB8Cu;
label_23eb8c:
    // 0x23eb8c: 0x92e70001  lbu         $a3, 0x1($s7)
    ctx->pc = 0x23eb8cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23eb90:
    // 0x23eb90: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x23eb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_23eb94:
    // 0x23eb94: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x23eb94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
label_23eb98:
    // 0x23eb98: 0x24845180  addiu       $a0, $a0, 0x5180
    ctx->pc = 0x23eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20864));
label_23eb9c:
    // 0x23eb9c: 0x25295df0  addiu       $t1, $t1, 0x5DF0
    ctx->pc = 0x23eb9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24048));
label_23eba0:
    // 0x23eba0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23eba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23eba4:
    // 0x23eba4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23eba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23eba8:
    // 0x23eba8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x23eba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23ebac:
    // 0x23ebac: 0xc08fecc  jal         func_23FB30
label_23ebb0:
    if (ctx->pc == 0x23EBB0u) {
        ctx->pc = 0x23EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBACu;
        // 0x23ebb0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBB4u;
        goto label_23ebb4;
    }
    ctx->pc = 0x23EBACu;
    SET_GPR_U32(ctx, 31, 0x23EBB4u);
    ctx->pc = 0x23EBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EBACu;
    // 0x23ebb0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB30u, 0x23EBACu, 0x23EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EBB4u;
label_23ebb4:
    // 0x23ebb4: 0x8ec30174  lw          $v1, 0x174($s6)
    ctx->pc = 0x23ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
label_23ebb8:
    // 0x23ebb8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23ebbc:
    // 0x23ebbc: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_23ebc0:
    if (ctx->pc == 0x23EBC0u) {
        ctx->pc = 0x23EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBBCu;
        // 0x23ebc0: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBC4u;
        goto label_23ebc4;
    }
    ctx->pc = 0x23EBBCu;
    {
        const bool branch_taken_0x23ebbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBBCu;
        // 0x23ebc0: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ebbc) {
            ctx->pc = 0x23EC74u;
            goto label_23ec74;
        }
    }
    ctx->pc = 0x23EBC4u;
label_23ebc4:
    // 0x23ebc4: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ebc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ebc8:
    // 0x23ebc8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23ebc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23ebcc:
    // 0x23ebcc: 0x26105180  addiu       $s0, $s0, 0x5180
    ctx->pc = 0x23ebccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20864));
label_23ebd0:
    // 0x23ebd0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x23ebd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23ebd4:
    // 0x23ebd4: 0xc08eef2  jal         func_23BBC8
label_23ebd8:
    if (ctx->pc == 0x23EBD8u) {
        ctx->pc = 0x23EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBD4u;
        // 0x23ebd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBDCu;
        goto label_23ebdc;
    }
    ctx->pc = 0x23EBD4u;
    SET_GPR_U32(ctx, 31, 0x23EBDCu);
    ctx->pc = 0x23EBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EBD4u;
    // 0x23ebd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBC8u, 0x23EBD4u, 0x23EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EBDCu;
label_23ebdc:
    // 0x23ebdc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x23ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_23ebe0:
    // 0x23ebe0: 0x40f809  jalr        $v0
label_23ebe4:
    if (ctx->pc == 0x23EBE4u) {
        ctx->pc = 0x23EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBE0u;
        // 0x23ebe4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBE8u;
        goto label_23ebe8;
    }
    ctx->pc = 0x23EBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23EBE8u);
        ctx->pc = 0x23EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBE0u;
        // 0x23ebe4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EBE0u, 0x23EBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23EBE8u;
label_23ebe8:
    // 0x23ebe8: 0x10000022  b           . + 4 + (0x22 << 2)
label_23ebec:
    if (ctx->pc == 0x23EBECu) {
        ctx->pc = 0x23EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBE8u;
        // 0x23ebec: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EBF0u;
        goto label_23ebf0;
    }
    ctx->pc = 0x23EBE8u;
    {
        const bool branch_taken_0x23ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBE8u;
        // 0x23ebec: 0xdfbf0130  ld          $ra, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ebe8) {
            ctx->pc = 0x23EC74u;
            goto label_23ec74;
        }
    }
    ctx->pc = 0x23EBF0u;
label_23ebf0:
    // 0x23ebf0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ebf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ebf4:
    // 0x23ebf4: 0x26105e00  addiu       $s0, $s0, 0x5E00
    ctx->pc = 0x23ebf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24064));
label_23ebf8:
    // 0x23ebf8: 0xc09038e  jal         func_240E38
label_23ebfc:
    if (ctx->pc == 0x23EBFCu) {
        ctx->pc = 0x23EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBF8u;
        // 0x23ebfc: 0x26d40014  addiu       $s4, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC00u;
        goto label_23ec00;
    }
    ctx->pc = 0x23EBF8u;
    SET_GPR_U32(ctx, 31, 0x23EC00u);
    ctx->pc = 0x23EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EBF8u;
    // 0x23ebfc: 0x26d40014  addiu       $s4, $s6, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E38u, 0x23EBF8u, 0x23EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC00u;
label_23ec00:
    // 0x23ec00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23ec00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ec04:
    // 0x23ec04: 0x92e40003  lbu         $a0, 0x3($s7)
    ctx->pc = 0x23ec04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3)));
label_23ec08:
    // 0x23ec08: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x23ec08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
label_23ec0c:
    // 0x23ec0c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x23ec0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23ec10:
    // 0x23ec10: 0x92f20000  lbu         $s2, 0x0($s7)
    ctx->pc = 0x23ec10u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23ec14:
    // 0x23ec14: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23ec14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23ec18:
    // 0x23ec18: 0x92f10001  lbu         $s1, 0x1($s7)
    ctx->pc = 0x23ec18u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23ec1c:
    // 0x23ec1c: 0xc08b60c  jal         func_22D830
label_23ec20:
    if (ctx->pc == 0x23EC20u) {
        ctx->pc = 0x23EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC1Cu;
        // 0x23ec20: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC24u;
        goto label_23ec24;
    }
    ctx->pc = 0x23EC1Cu;
    SET_GPR_U32(ctx, 31, 0x23EC24u);
    ctx->pc = 0x23EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC1Cu;
    // 0x23ec20: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x23EC1Cu, 0x23EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC24u;
label_23ec24:
    // 0x23ec24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23ec24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ec28:
    // 0x23ec28: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23ec28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ec2c:
    // 0x23ec2c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23ec2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ec30:
    // 0x23ec30: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x23ec30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ec34:
    // 0x23ec34: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x23ec34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ec38:
    // 0x23ec38: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x23ec38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ec3c:
    // 0x23ec3c: 0xc08b5ac  jal         func_22D6B0
label_23ec40:
    if (ctx->pc == 0x23EC40u) {
        ctx->pc = 0x23EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC3Cu;
        // 0x23ec40: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC44u;
        goto label_23ec44;
    }
    ctx->pc = 0x23EC3Cu;
    SET_GPR_U32(ctx, 31, 0x23EC44u);
    ctx->pc = 0x23EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC3Cu;
    // 0x23ec40: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23EC3Cu, 0x23EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC44u;
label_23ec44:
    // 0x23ec44: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x23ec44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_23ec48:
    // 0x23ec48: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23ec4c:
    if (ctx->pc == 0x23EC4Cu) {
        ctx->pc = 0x23EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC48u;
        // 0x23ec4c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC50u;
        goto label_23ec50;
    }
    ctx->pc = 0x23EC48u;
    {
        const bool branch_taken_0x23ec48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ec48) {
            ctx->pc = 0x23EC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EC48u;
            // 0x23ec4c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EC64u;
            goto label_23ec64;
        }
    }
    ctx->pc = 0x23EC50u;
label_23ec50:
    // 0x23ec50: 0x26a5fffc  addiu       $a1, $s5, -0x4
    ctx->pc = 0x23ec50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
label_23ec54:
    // 0x23ec54: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x23ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_23ec58:
    // 0x23ec58: 0xc090404  jal         func_241010
label_23ec5c:
    if (ctx->pc == 0x23EC5Cu) {
        ctx->pc = 0x23EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC58u;
        // 0x23ec5c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC60u;
        goto label_23ec60;
    }
    ctx->pc = 0x23EC58u;
    SET_GPR_U32(ctx, 31, 0x23EC60u);
    ctx->pc = 0x23EC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC58u;
    // 0x23ec5c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x241010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241010u, 0x23EC58u, 0x23EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC60u;
label_23ec60:
    // 0x23ec60: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23ec64:
    // 0x23ec64: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23ec68:
    // 0x23ec68: 0xc08b5ac  jal         func_22D6B0
label_23ec6c:
    if (ctx->pc == 0x23EC6Cu) {
        ctx->pc = 0x23EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC68u;
        // 0x23ec6c: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EC70u;
        goto label_23ec70;
    }
    ctx->pc = 0x23EC68u;
    SET_GPR_U32(ctx, 31, 0x23EC70u);
    ctx->pc = 0x23EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC68u;
    // 0x23ec6c: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23EC68u, 0x23EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC70u;
label_23ec70:
    // 0x23ec70: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x23ec70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_23ec74:
    // 0x23ec74: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x23ec74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_23ec78:
    // 0x23ec78: 0xdfb70110  ld          $s7, 0x110($sp)
    ctx->pc = 0x23ec78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_23ec7c:
    // 0x23ec7c: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x23ec7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_23ec80:
    // 0x23ec80: 0xdfb500f0  ld          $s5, 0xF0($sp)
    ctx->pc = 0x23ec80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_23ec84:
    // 0x23ec84: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x23ec84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_23ec88:
    // 0x23ec88: 0xdfb300d0  ld          $s3, 0xD0($sp)
    ctx->pc = 0x23ec88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_23ec8c:
    // 0x23ec8c: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x23ec8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_23ec90:
    // 0x23ec90: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x23ec90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23ec94:
    // 0x23ec94: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x23ec94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23ec98:
    // 0x23ec98: 0x3e00008  jr          $ra
label_23ec9c:
    if (ctx->pc == 0x23EC9Cu) {
        ctx->pc = 0x23EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC98u;
        // 0x23ec9c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ECA0u;
        goto label_fallthrough_0x23ec98;
    }
    ctx->pc = 0x23EC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC98u;
        // 0x23ec9c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23ec98:
    ctx->pc = 0x23ECA0u;
}
