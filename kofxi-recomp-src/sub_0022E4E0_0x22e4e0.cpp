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

// Function: sub_0022E4E0
// Address: 0x22e4e0 - 0x22f8b8
void sub_0022E4E0_0x22e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E4E0_0x22e4e0");
#endif

    switch (ctx->pc) {
        case 0x22e4e0u: goto label_22e4e0;
        case 0x22e4e4u: goto label_22e4e4;
        case 0x22e4e8u: goto label_22e4e8;
        case 0x22e4ecu: goto label_22e4ec;
        case 0x22e4f0u: goto label_22e4f0;
        case 0x22e4f4u: goto label_22e4f4;
        case 0x22e4f8u: goto label_22e4f8;
        case 0x22e4fcu: goto label_22e4fc;
        case 0x22e500u: goto label_22e500;
        case 0x22e504u: goto label_22e504;
        case 0x22e508u: goto label_22e508;
        case 0x22e50cu: goto label_22e50c;
        case 0x22e510u: goto label_22e510;
        case 0x22e514u: goto label_22e514;
        case 0x22e518u: goto label_22e518;
        case 0x22e51cu: goto label_22e51c;
        case 0x22e520u: goto label_22e520;
        case 0x22e524u: goto label_22e524;
        case 0x22e528u: goto label_22e528;
        case 0x22e52cu: goto label_22e52c;
        case 0x22e530u: goto label_22e530;
        case 0x22e534u: goto label_22e534;
        case 0x22e538u: goto label_22e538;
        case 0x22e53cu: goto label_22e53c;
        case 0x22e540u: goto label_22e540;
        case 0x22e544u: goto label_22e544;
        case 0x22e548u: goto label_22e548;
        case 0x22e54cu: goto label_22e54c;
        case 0x22e550u: goto label_22e550;
        case 0x22e554u: goto label_22e554;
        case 0x22e558u: goto label_22e558;
        case 0x22e55cu: goto label_22e55c;
        case 0x22e560u: goto label_22e560;
        case 0x22e564u: goto label_22e564;
        case 0x22e568u: goto label_22e568;
        case 0x22e56cu: goto label_22e56c;
        case 0x22e570u: goto label_22e570;
        case 0x22e574u: goto label_22e574;
        case 0x22e578u: goto label_22e578;
        case 0x22e57cu: goto label_22e57c;
        case 0x22e580u: goto label_22e580;
        case 0x22e584u: goto label_22e584;
        case 0x22e588u: goto label_22e588;
        case 0x22e58cu: goto label_22e58c;
        case 0x22e590u: goto label_22e590;
        case 0x22e594u: goto label_22e594;
        case 0x22e598u: goto label_22e598;
        case 0x22e59cu: goto label_22e59c;
        case 0x22e5a0u: goto label_22e5a0;
        case 0x22e5a4u: goto label_22e5a4;
        case 0x22e5a8u: goto label_22e5a8;
        case 0x22e5acu: goto label_22e5ac;
        case 0x22e5b0u: goto label_22e5b0;
        case 0x22e5b4u: goto label_22e5b4;
        case 0x22e5b8u: goto label_22e5b8;
        case 0x22e5bcu: goto label_22e5bc;
        case 0x22e5c0u: goto label_22e5c0;
        case 0x22e5c4u: goto label_22e5c4;
        case 0x22e5c8u: goto label_22e5c8;
        case 0x22e5ccu: goto label_22e5cc;
        case 0x22e5d0u: goto label_22e5d0;
        case 0x22e5d4u: goto label_22e5d4;
        case 0x22e5d8u: goto label_22e5d8;
        case 0x22e5dcu: goto label_22e5dc;
        case 0x22e5e0u: goto label_22e5e0;
        case 0x22e5e4u: goto label_22e5e4;
        case 0x22e5e8u: goto label_22e5e8;
        case 0x22e5ecu: goto label_22e5ec;
        case 0x22e5f0u: goto label_22e5f0;
        case 0x22e5f4u: goto label_22e5f4;
        case 0x22e5f8u: goto label_22e5f8;
        case 0x22e5fcu: goto label_22e5fc;
        case 0x22e600u: goto label_22e600;
        case 0x22e604u: goto label_22e604;
        case 0x22e608u: goto label_22e608;
        case 0x22e60cu: goto label_22e60c;
        case 0x22e610u: goto label_22e610;
        case 0x22e614u: goto label_22e614;
        case 0x22e618u: goto label_22e618;
        case 0x22e61cu: goto label_22e61c;
        case 0x22e620u: goto label_22e620;
        case 0x22e624u: goto label_22e624;
        case 0x22e628u: goto label_22e628;
        case 0x22e62cu: goto label_22e62c;
        case 0x22e630u: goto label_22e630;
        case 0x22e634u: goto label_22e634;
        case 0x22e638u: goto label_22e638;
        case 0x22e63cu: goto label_22e63c;
        case 0x22e640u: goto label_22e640;
        case 0x22e644u: goto label_22e644;
        case 0x22e648u: goto label_22e648;
        case 0x22e64cu: goto label_22e64c;
        case 0x22e650u: goto label_22e650;
        case 0x22e654u: goto label_22e654;
        case 0x22e658u: goto label_22e658;
        case 0x22e65cu: goto label_22e65c;
        case 0x22e660u: goto label_22e660;
        case 0x22e664u: goto label_22e664;
        case 0x22e668u: goto label_22e668;
        case 0x22e66cu: goto label_22e66c;
        case 0x22e670u: goto label_22e670;
        case 0x22e674u: goto label_22e674;
        case 0x22e678u: goto label_22e678;
        case 0x22e67cu: goto label_22e67c;
        case 0x22e680u: goto label_22e680;
        case 0x22e684u: goto label_22e684;
        case 0x22e688u: goto label_22e688;
        case 0x22e68cu: goto label_22e68c;
        case 0x22e690u: goto label_22e690;
        case 0x22e694u: goto label_22e694;
        case 0x22e698u: goto label_22e698;
        case 0x22e69cu: goto label_22e69c;
        case 0x22e6a0u: goto label_22e6a0;
        case 0x22e6a4u: goto label_22e6a4;
        case 0x22e6a8u: goto label_22e6a8;
        case 0x22e6acu: goto label_22e6ac;
        case 0x22e6b0u: goto label_22e6b0;
        case 0x22e6b4u: goto label_22e6b4;
        case 0x22e6b8u: goto label_22e6b8;
        case 0x22e6bcu: goto label_22e6bc;
        case 0x22e6c0u: goto label_22e6c0;
        case 0x22e6c4u: goto label_22e6c4;
        case 0x22e6c8u: goto label_22e6c8;
        case 0x22e6ccu: goto label_22e6cc;
        case 0x22e6d0u: goto label_22e6d0;
        case 0x22e6d4u: goto label_22e6d4;
        case 0x22e6d8u: goto label_22e6d8;
        case 0x22e6dcu: goto label_22e6dc;
        case 0x22e6e0u: goto label_22e6e0;
        case 0x22e6e4u: goto label_22e6e4;
        case 0x22e6e8u: goto label_22e6e8;
        case 0x22e6ecu: goto label_22e6ec;
        case 0x22e6f0u: goto label_22e6f0;
        case 0x22e6f4u: goto label_22e6f4;
        case 0x22e6f8u: goto label_22e6f8;
        case 0x22e6fcu: goto label_22e6fc;
        case 0x22e700u: goto label_22e700;
        case 0x22e704u: goto label_22e704;
        case 0x22e708u: goto label_22e708;
        case 0x22e70cu: goto label_22e70c;
        case 0x22e710u: goto label_22e710;
        case 0x22e714u: goto label_22e714;
        case 0x22e718u: goto label_22e718;
        case 0x22e71cu: goto label_22e71c;
        case 0x22e720u: goto label_22e720;
        case 0x22e724u: goto label_22e724;
        case 0x22e728u: goto label_22e728;
        case 0x22e72cu: goto label_22e72c;
        case 0x22e730u: goto label_22e730;
        case 0x22e734u: goto label_22e734;
        case 0x22e738u: goto label_22e738;
        case 0x22e73cu: goto label_22e73c;
        case 0x22e740u: goto label_22e740;
        case 0x22e744u: goto label_22e744;
        case 0x22e748u: goto label_22e748;
        case 0x22e74cu: goto label_22e74c;
        case 0x22e750u: goto label_22e750;
        case 0x22e754u: goto label_22e754;
        case 0x22e758u: goto label_22e758;
        case 0x22e75cu: goto label_22e75c;
        case 0x22e760u: goto label_22e760;
        case 0x22e764u: goto label_22e764;
        case 0x22e768u: goto label_22e768;
        case 0x22e76cu: goto label_22e76c;
        case 0x22e770u: goto label_22e770;
        case 0x22e774u: goto label_22e774;
        case 0x22e778u: goto label_22e778;
        case 0x22e77cu: goto label_22e77c;
        case 0x22e780u: goto label_22e780;
        case 0x22e784u: goto label_22e784;
        case 0x22e788u: goto label_22e788;
        case 0x22e78cu: goto label_22e78c;
        case 0x22e790u: goto label_22e790;
        case 0x22e794u: goto label_22e794;
        case 0x22e798u: goto label_22e798;
        case 0x22e79cu: goto label_22e79c;
        case 0x22e7a0u: goto label_22e7a0;
        case 0x22e7a4u: goto label_22e7a4;
        case 0x22e7a8u: goto label_22e7a8;
        case 0x22e7acu: goto label_22e7ac;
        case 0x22e7b0u: goto label_22e7b0;
        case 0x22e7b4u: goto label_22e7b4;
        case 0x22e7b8u: goto label_22e7b8;
        case 0x22e7bcu: goto label_22e7bc;
        case 0x22e7c0u: goto label_22e7c0;
        case 0x22e7c4u: goto label_22e7c4;
        case 0x22e7c8u: goto label_22e7c8;
        case 0x22e7ccu: goto label_22e7cc;
        case 0x22e7d0u: goto label_22e7d0;
        case 0x22e7d4u: goto label_22e7d4;
        case 0x22e7d8u: goto label_22e7d8;
        case 0x22e7dcu: goto label_22e7dc;
        case 0x22e7e0u: goto label_22e7e0;
        case 0x22e7e4u: goto label_22e7e4;
        case 0x22e7e8u: goto label_22e7e8;
        case 0x22e7ecu: goto label_22e7ec;
        case 0x22e7f0u: goto label_22e7f0;
        case 0x22e7f4u: goto label_22e7f4;
        case 0x22e7f8u: goto label_22e7f8;
        case 0x22e7fcu: goto label_22e7fc;
        case 0x22e800u: goto label_22e800;
        case 0x22e804u: goto label_22e804;
        case 0x22e808u: goto label_22e808;
        case 0x22e80cu: goto label_22e80c;
        case 0x22e810u: goto label_22e810;
        case 0x22e814u: goto label_22e814;
        case 0x22e818u: goto label_22e818;
        case 0x22e81cu: goto label_22e81c;
        case 0x22e820u: goto label_22e820;
        case 0x22e824u: goto label_22e824;
        case 0x22e828u: goto label_22e828;
        case 0x22e82cu: goto label_22e82c;
        case 0x22e830u: goto label_22e830;
        case 0x22e834u: goto label_22e834;
        case 0x22e838u: goto label_22e838;
        case 0x22e83cu: goto label_22e83c;
        case 0x22e840u: goto label_22e840;
        case 0x22e844u: goto label_22e844;
        case 0x22e848u: goto label_22e848;
        case 0x22e84cu: goto label_22e84c;
        case 0x22e850u: goto label_22e850;
        case 0x22e854u: goto label_22e854;
        case 0x22e858u: goto label_22e858;
        case 0x22e85cu: goto label_22e85c;
        case 0x22e860u: goto label_22e860;
        case 0x22e864u: goto label_22e864;
        case 0x22e868u: goto label_22e868;
        case 0x22e86cu: goto label_22e86c;
        case 0x22e870u: goto label_22e870;
        case 0x22e874u: goto label_22e874;
        case 0x22e878u: goto label_22e878;
        case 0x22e87cu: goto label_22e87c;
        case 0x22e880u: goto label_22e880;
        case 0x22e884u: goto label_22e884;
        case 0x22e888u: goto label_22e888;
        case 0x22e88cu: goto label_22e88c;
        case 0x22e890u: goto label_22e890;
        case 0x22e894u: goto label_22e894;
        case 0x22e898u: goto label_22e898;
        case 0x22e89cu: goto label_22e89c;
        case 0x22e8a0u: goto label_22e8a0;
        case 0x22e8a4u: goto label_22e8a4;
        case 0x22e8a8u: goto label_22e8a8;
        case 0x22e8acu: goto label_22e8ac;
        case 0x22e8b0u: goto label_22e8b0;
        case 0x22e8b4u: goto label_22e8b4;
        case 0x22e8b8u: goto label_22e8b8;
        case 0x22e8bcu: goto label_22e8bc;
        case 0x22e8c0u: goto label_22e8c0;
        case 0x22e8c4u: goto label_22e8c4;
        case 0x22e8c8u: goto label_22e8c8;
        case 0x22e8ccu: goto label_22e8cc;
        case 0x22e8d0u: goto label_22e8d0;
        case 0x22e8d4u: goto label_22e8d4;
        case 0x22e8d8u: goto label_22e8d8;
        case 0x22e8dcu: goto label_22e8dc;
        case 0x22e8e0u: goto label_22e8e0;
        case 0x22e8e4u: goto label_22e8e4;
        case 0x22e8e8u: goto label_22e8e8;
        case 0x22e8ecu: goto label_22e8ec;
        case 0x22e8f0u: goto label_22e8f0;
        case 0x22e8f4u: goto label_22e8f4;
        case 0x22e8f8u: goto label_22e8f8;
        case 0x22e8fcu: goto label_22e8fc;
        case 0x22e900u: goto label_22e900;
        case 0x22e904u: goto label_22e904;
        case 0x22e908u: goto label_22e908;
        case 0x22e90cu: goto label_22e90c;
        case 0x22e910u: goto label_22e910;
        case 0x22e914u: goto label_22e914;
        case 0x22e918u: goto label_22e918;
        case 0x22e91cu: goto label_22e91c;
        case 0x22e920u: goto label_22e920;
        case 0x22e924u: goto label_22e924;
        case 0x22e928u: goto label_22e928;
        case 0x22e92cu: goto label_22e92c;
        case 0x22e930u: goto label_22e930;
        case 0x22e934u: goto label_22e934;
        case 0x22e938u: goto label_22e938;
        case 0x22e93cu: goto label_22e93c;
        case 0x22e940u: goto label_22e940;
        case 0x22e944u: goto label_22e944;
        case 0x22e948u: goto label_22e948;
        case 0x22e94cu: goto label_22e94c;
        case 0x22e950u: goto label_22e950;
        case 0x22e954u: goto label_22e954;
        case 0x22e958u: goto label_22e958;
        case 0x22e95cu: goto label_22e95c;
        case 0x22e960u: goto label_22e960;
        case 0x22e964u: goto label_22e964;
        case 0x22e968u: goto label_22e968;
        case 0x22e96cu: goto label_22e96c;
        case 0x22e970u: goto label_22e970;
        case 0x22e974u: goto label_22e974;
        case 0x22e978u: goto label_22e978;
        case 0x22e97cu: goto label_22e97c;
        case 0x22e980u: goto label_22e980;
        case 0x22e984u: goto label_22e984;
        case 0x22e988u: goto label_22e988;
        case 0x22e98cu: goto label_22e98c;
        case 0x22e990u: goto label_22e990;
        case 0x22e994u: goto label_22e994;
        case 0x22e998u: goto label_22e998;
        case 0x22e99cu: goto label_22e99c;
        case 0x22e9a0u: goto label_22e9a0;
        case 0x22e9a4u: goto label_22e9a4;
        case 0x22e9a8u: goto label_22e9a8;
        case 0x22e9acu: goto label_22e9ac;
        case 0x22e9b0u: goto label_22e9b0;
        case 0x22e9b4u: goto label_22e9b4;
        case 0x22e9b8u: goto label_22e9b8;
        case 0x22e9bcu: goto label_22e9bc;
        case 0x22e9c0u: goto label_22e9c0;
        case 0x22e9c4u: goto label_22e9c4;
        case 0x22e9c8u: goto label_22e9c8;
        case 0x22e9ccu: goto label_22e9cc;
        case 0x22e9d0u: goto label_22e9d0;
        case 0x22e9d4u: goto label_22e9d4;
        case 0x22e9d8u: goto label_22e9d8;
        case 0x22e9dcu: goto label_22e9dc;
        case 0x22e9e0u: goto label_22e9e0;
        case 0x22e9e4u: goto label_22e9e4;
        case 0x22e9e8u: goto label_22e9e8;
        case 0x22e9ecu: goto label_22e9ec;
        case 0x22e9f0u: goto label_22e9f0;
        case 0x22e9f4u: goto label_22e9f4;
        case 0x22e9f8u: goto label_22e9f8;
        case 0x22e9fcu: goto label_22e9fc;
        case 0x22ea00u: goto label_22ea00;
        case 0x22ea04u: goto label_22ea04;
        case 0x22ea08u: goto label_22ea08;
        case 0x22ea0cu: goto label_22ea0c;
        case 0x22ea10u: goto label_22ea10;
        case 0x22ea14u: goto label_22ea14;
        case 0x22ea18u: goto label_22ea18;
        case 0x22ea1cu: goto label_22ea1c;
        case 0x22ea20u: goto label_22ea20;
        case 0x22ea24u: goto label_22ea24;
        case 0x22ea28u: goto label_22ea28;
        case 0x22ea2cu: goto label_22ea2c;
        case 0x22ea30u: goto label_22ea30;
        case 0x22ea34u: goto label_22ea34;
        case 0x22ea38u: goto label_22ea38;
        case 0x22ea3cu: goto label_22ea3c;
        case 0x22ea40u: goto label_22ea40;
        case 0x22ea44u: goto label_22ea44;
        case 0x22ea48u: goto label_22ea48;
        case 0x22ea4cu: goto label_22ea4c;
        case 0x22ea50u: goto label_22ea50;
        case 0x22ea54u: goto label_22ea54;
        case 0x22ea58u: goto label_22ea58;
        case 0x22ea5cu: goto label_22ea5c;
        case 0x22ea60u: goto label_22ea60;
        case 0x22ea64u: goto label_22ea64;
        case 0x22ea68u: goto label_22ea68;
        case 0x22ea6cu: goto label_22ea6c;
        case 0x22ea70u: goto label_22ea70;
        case 0x22ea74u: goto label_22ea74;
        case 0x22ea78u: goto label_22ea78;
        case 0x22ea7cu: goto label_22ea7c;
        case 0x22ea80u: goto label_22ea80;
        case 0x22ea84u: goto label_22ea84;
        case 0x22ea88u: goto label_22ea88;
        case 0x22ea8cu: goto label_22ea8c;
        case 0x22ea90u: goto label_22ea90;
        case 0x22ea94u: goto label_22ea94;
        case 0x22ea98u: goto label_22ea98;
        case 0x22ea9cu: goto label_22ea9c;
        case 0x22eaa0u: goto label_22eaa0;
        case 0x22eaa4u: goto label_22eaa4;
        case 0x22eaa8u: goto label_22eaa8;
        case 0x22eaacu: goto label_22eaac;
        case 0x22eab0u: goto label_22eab0;
        case 0x22eab4u: goto label_22eab4;
        case 0x22eab8u: goto label_22eab8;
        case 0x22eabcu: goto label_22eabc;
        case 0x22eac0u: goto label_22eac0;
        case 0x22eac4u: goto label_22eac4;
        case 0x22eac8u: goto label_22eac8;
        case 0x22eaccu: goto label_22eacc;
        case 0x22ead0u: goto label_22ead0;
        case 0x22ead4u: goto label_22ead4;
        case 0x22ead8u: goto label_22ead8;
        case 0x22eadcu: goto label_22eadc;
        case 0x22eae0u: goto label_22eae0;
        case 0x22eae4u: goto label_22eae4;
        case 0x22eae8u: goto label_22eae8;
        case 0x22eaecu: goto label_22eaec;
        case 0x22eaf0u: goto label_22eaf0;
        case 0x22eaf4u: goto label_22eaf4;
        case 0x22eaf8u: goto label_22eaf8;
        case 0x22eafcu: goto label_22eafc;
        case 0x22eb00u: goto label_22eb00;
        case 0x22eb04u: goto label_22eb04;
        case 0x22eb08u: goto label_22eb08;
        case 0x22eb0cu: goto label_22eb0c;
        case 0x22eb10u: goto label_22eb10;
        case 0x22eb14u: goto label_22eb14;
        case 0x22eb18u: goto label_22eb18;
        case 0x22eb1cu: goto label_22eb1c;
        case 0x22eb20u: goto label_22eb20;
        case 0x22eb24u: goto label_22eb24;
        case 0x22eb28u: goto label_22eb28;
        case 0x22eb2cu: goto label_22eb2c;
        case 0x22eb30u: goto label_22eb30;
        case 0x22eb34u: goto label_22eb34;
        case 0x22eb38u: goto label_22eb38;
        case 0x22eb3cu: goto label_22eb3c;
        case 0x22eb40u: goto label_22eb40;
        case 0x22eb44u: goto label_22eb44;
        case 0x22eb48u: goto label_22eb48;
        case 0x22eb4cu: goto label_22eb4c;
        case 0x22eb50u: goto label_22eb50;
        case 0x22eb54u: goto label_22eb54;
        case 0x22eb58u: goto label_22eb58;
        case 0x22eb5cu: goto label_22eb5c;
        case 0x22eb60u: goto label_22eb60;
        case 0x22eb64u: goto label_22eb64;
        case 0x22eb68u: goto label_22eb68;
        case 0x22eb6cu: goto label_22eb6c;
        case 0x22eb70u: goto label_22eb70;
        case 0x22eb74u: goto label_22eb74;
        case 0x22eb78u: goto label_22eb78;
        case 0x22eb7cu: goto label_22eb7c;
        case 0x22eb80u: goto label_22eb80;
        case 0x22eb84u: goto label_22eb84;
        case 0x22eb88u: goto label_22eb88;
        case 0x22eb8cu: goto label_22eb8c;
        case 0x22eb90u: goto label_22eb90;
        case 0x22eb94u: goto label_22eb94;
        case 0x22eb98u: goto label_22eb98;
        case 0x22eb9cu: goto label_22eb9c;
        case 0x22eba0u: goto label_22eba0;
        case 0x22eba4u: goto label_22eba4;
        case 0x22eba8u: goto label_22eba8;
        case 0x22ebacu: goto label_22ebac;
        case 0x22ebb0u: goto label_22ebb0;
        case 0x22ebb4u: goto label_22ebb4;
        case 0x22ebb8u: goto label_22ebb8;
        case 0x22ebbcu: goto label_22ebbc;
        case 0x22ebc0u: goto label_22ebc0;
        case 0x22ebc4u: goto label_22ebc4;
        case 0x22ebc8u: goto label_22ebc8;
        case 0x22ebccu: goto label_22ebcc;
        case 0x22ebd0u: goto label_22ebd0;
        case 0x22ebd4u: goto label_22ebd4;
        case 0x22ebd8u: goto label_22ebd8;
        case 0x22ebdcu: goto label_22ebdc;
        case 0x22ebe0u: goto label_22ebe0;
        case 0x22ebe4u: goto label_22ebe4;
        case 0x22ebe8u: goto label_22ebe8;
        case 0x22ebecu: goto label_22ebec;
        case 0x22ebf0u: goto label_22ebf0;
        case 0x22ebf4u: goto label_22ebf4;
        case 0x22ebf8u: goto label_22ebf8;
        case 0x22ebfcu: goto label_22ebfc;
        case 0x22ec00u: goto label_22ec00;
        case 0x22ec04u: goto label_22ec04;
        case 0x22ec08u: goto label_22ec08;
        case 0x22ec0cu: goto label_22ec0c;
        case 0x22ec10u: goto label_22ec10;
        case 0x22ec14u: goto label_22ec14;
        case 0x22ec18u: goto label_22ec18;
        case 0x22ec1cu: goto label_22ec1c;
        case 0x22ec20u: goto label_22ec20;
        case 0x22ec24u: goto label_22ec24;
        case 0x22ec28u: goto label_22ec28;
        case 0x22ec2cu: goto label_22ec2c;
        case 0x22ec30u: goto label_22ec30;
        case 0x22ec34u: goto label_22ec34;
        case 0x22ec38u: goto label_22ec38;
        case 0x22ec3cu: goto label_22ec3c;
        case 0x22ec40u: goto label_22ec40;
        case 0x22ec44u: goto label_22ec44;
        case 0x22ec48u: goto label_22ec48;
        case 0x22ec4cu: goto label_22ec4c;
        case 0x22ec50u: goto label_22ec50;
        case 0x22ec54u: goto label_22ec54;
        case 0x22ec58u: goto label_22ec58;
        case 0x22ec5cu: goto label_22ec5c;
        case 0x22ec60u: goto label_22ec60;
        case 0x22ec64u: goto label_22ec64;
        case 0x22ec68u: goto label_22ec68;
        case 0x22ec6cu: goto label_22ec6c;
        case 0x22ec70u: goto label_22ec70;
        case 0x22ec74u: goto label_22ec74;
        case 0x22ec78u: goto label_22ec78;
        case 0x22ec7cu: goto label_22ec7c;
        case 0x22ec80u: goto label_22ec80;
        case 0x22ec84u: goto label_22ec84;
        case 0x22ec88u: goto label_22ec88;
        case 0x22ec8cu: goto label_22ec8c;
        case 0x22ec90u: goto label_22ec90;
        case 0x22ec94u: goto label_22ec94;
        case 0x22ec98u: goto label_22ec98;
        case 0x22ec9cu: goto label_22ec9c;
        case 0x22eca0u: goto label_22eca0;
        case 0x22eca4u: goto label_22eca4;
        case 0x22eca8u: goto label_22eca8;
        case 0x22ecacu: goto label_22ecac;
        case 0x22ecb0u: goto label_22ecb0;
        case 0x22ecb4u: goto label_22ecb4;
        case 0x22ecb8u: goto label_22ecb8;
        case 0x22ecbcu: goto label_22ecbc;
        case 0x22ecc0u: goto label_22ecc0;
        case 0x22ecc4u: goto label_22ecc4;
        case 0x22ecc8u: goto label_22ecc8;
        case 0x22ecccu: goto label_22eccc;
        case 0x22ecd0u: goto label_22ecd0;
        case 0x22ecd4u: goto label_22ecd4;
        case 0x22ecd8u: goto label_22ecd8;
        case 0x22ecdcu: goto label_22ecdc;
        case 0x22ece0u: goto label_22ece0;
        case 0x22ece4u: goto label_22ece4;
        case 0x22ece8u: goto label_22ece8;
        case 0x22ececu: goto label_22ecec;
        case 0x22ecf0u: goto label_22ecf0;
        case 0x22ecf4u: goto label_22ecf4;
        case 0x22ecf8u: goto label_22ecf8;
        case 0x22ecfcu: goto label_22ecfc;
        case 0x22ed00u: goto label_22ed00;
        case 0x22ed04u: goto label_22ed04;
        case 0x22ed08u: goto label_22ed08;
        case 0x22ed0cu: goto label_22ed0c;
        case 0x22ed10u: goto label_22ed10;
        case 0x22ed14u: goto label_22ed14;
        case 0x22ed18u: goto label_22ed18;
        case 0x22ed1cu: goto label_22ed1c;
        case 0x22ed20u: goto label_22ed20;
        case 0x22ed24u: goto label_22ed24;
        case 0x22ed28u: goto label_22ed28;
        case 0x22ed2cu: goto label_22ed2c;
        case 0x22ed30u: goto label_22ed30;
        case 0x22ed34u: goto label_22ed34;
        case 0x22ed38u: goto label_22ed38;
        case 0x22ed3cu: goto label_22ed3c;
        case 0x22ed40u: goto label_22ed40;
        case 0x22ed44u: goto label_22ed44;
        case 0x22ed48u: goto label_22ed48;
        case 0x22ed4cu: goto label_22ed4c;
        case 0x22ed50u: goto label_22ed50;
        case 0x22ed54u: goto label_22ed54;
        case 0x22ed58u: goto label_22ed58;
        case 0x22ed5cu: goto label_22ed5c;
        case 0x22ed60u: goto label_22ed60;
        case 0x22ed64u: goto label_22ed64;
        case 0x22ed68u: goto label_22ed68;
        case 0x22ed6cu: goto label_22ed6c;
        case 0x22ed70u: goto label_22ed70;
        case 0x22ed74u: goto label_22ed74;
        case 0x22ed78u: goto label_22ed78;
        case 0x22ed7cu: goto label_22ed7c;
        case 0x22ed80u: goto label_22ed80;
        case 0x22ed84u: goto label_22ed84;
        case 0x22ed88u: goto label_22ed88;
        case 0x22ed8cu: goto label_22ed8c;
        case 0x22ed90u: goto label_22ed90;
        case 0x22ed94u: goto label_22ed94;
        case 0x22ed98u: goto label_22ed98;
        case 0x22ed9cu: goto label_22ed9c;
        case 0x22eda0u: goto label_22eda0;
        case 0x22eda4u: goto label_22eda4;
        case 0x22eda8u: goto label_22eda8;
        case 0x22edacu: goto label_22edac;
        case 0x22edb0u: goto label_22edb0;
        case 0x22edb4u: goto label_22edb4;
        case 0x22edb8u: goto label_22edb8;
        case 0x22edbcu: goto label_22edbc;
        case 0x22edc0u: goto label_22edc0;
        case 0x22edc4u: goto label_22edc4;
        case 0x22edc8u: goto label_22edc8;
        case 0x22edccu: goto label_22edcc;
        case 0x22edd0u: goto label_22edd0;
        case 0x22edd4u: goto label_22edd4;
        case 0x22edd8u: goto label_22edd8;
        case 0x22eddcu: goto label_22eddc;
        case 0x22ede0u: goto label_22ede0;
        case 0x22ede4u: goto label_22ede4;
        case 0x22ede8u: goto label_22ede8;
        case 0x22edecu: goto label_22edec;
        case 0x22edf0u: goto label_22edf0;
        case 0x22edf4u: goto label_22edf4;
        case 0x22edf8u: goto label_22edf8;
        case 0x22edfcu: goto label_22edfc;
        case 0x22ee00u: goto label_22ee00;
        case 0x22ee04u: goto label_22ee04;
        case 0x22ee08u: goto label_22ee08;
        case 0x22ee0cu: goto label_22ee0c;
        case 0x22ee10u: goto label_22ee10;
        case 0x22ee14u: goto label_22ee14;
        case 0x22ee18u: goto label_22ee18;
        case 0x22ee1cu: goto label_22ee1c;
        case 0x22ee20u: goto label_22ee20;
        case 0x22ee24u: goto label_22ee24;
        case 0x22ee28u: goto label_22ee28;
        case 0x22ee2cu: goto label_22ee2c;
        case 0x22ee30u: goto label_22ee30;
        case 0x22ee34u: goto label_22ee34;
        case 0x22ee38u: goto label_22ee38;
        case 0x22ee3cu: goto label_22ee3c;
        case 0x22ee40u: goto label_22ee40;
        case 0x22ee44u: goto label_22ee44;
        case 0x22ee48u: goto label_22ee48;
        case 0x22ee4cu: goto label_22ee4c;
        case 0x22ee50u: goto label_22ee50;
        case 0x22ee54u: goto label_22ee54;
        case 0x22ee58u: goto label_22ee58;
        case 0x22ee5cu: goto label_22ee5c;
        case 0x22ee60u: goto label_22ee60;
        case 0x22ee64u: goto label_22ee64;
        case 0x22ee68u: goto label_22ee68;
        case 0x22ee6cu: goto label_22ee6c;
        case 0x22ee70u: goto label_22ee70;
        case 0x22ee74u: goto label_22ee74;
        case 0x22ee78u: goto label_22ee78;
        case 0x22ee7cu: goto label_22ee7c;
        case 0x22ee80u: goto label_22ee80;
        case 0x22ee84u: goto label_22ee84;
        case 0x22ee88u: goto label_22ee88;
        case 0x22ee8cu: goto label_22ee8c;
        case 0x22ee90u: goto label_22ee90;
        case 0x22ee94u: goto label_22ee94;
        case 0x22ee98u: goto label_22ee98;
        case 0x22ee9cu: goto label_22ee9c;
        case 0x22eea0u: goto label_22eea0;
        case 0x22eea4u: goto label_22eea4;
        case 0x22eea8u: goto label_22eea8;
        case 0x22eeacu: goto label_22eeac;
        case 0x22eeb0u: goto label_22eeb0;
        case 0x22eeb4u: goto label_22eeb4;
        case 0x22eeb8u: goto label_22eeb8;
        case 0x22eebcu: goto label_22eebc;
        case 0x22eec0u: goto label_22eec0;
        case 0x22eec4u: goto label_22eec4;
        case 0x22eec8u: goto label_22eec8;
        case 0x22eeccu: goto label_22eecc;
        case 0x22eed0u: goto label_22eed0;
        case 0x22eed4u: goto label_22eed4;
        case 0x22eed8u: goto label_22eed8;
        case 0x22eedcu: goto label_22eedc;
        case 0x22eee0u: goto label_22eee0;
        case 0x22eee4u: goto label_22eee4;
        case 0x22eee8u: goto label_22eee8;
        case 0x22eeecu: goto label_22eeec;
        case 0x22eef0u: goto label_22eef0;
        case 0x22eef4u: goto label_22eef4;
        case 0x22eef8u: goto label_22eef8;
        case 0x22eefcu: goto label_22eefc;
        case 0x22ef00u: goto label_22ef00;
        case 0x22ef04u: goto label_22ef04;
        case 0x22ef08u: goto label_22ef08;
        case 0x22ef0cu: goto label_22ef0c;
        case 0x22ef10u: goto label_22ef10;
        case 0x22ef14u: goto label_22ef14;
        case 0x22ef18u: goto label_22ef18;
        case 0x22ef1cu: goto label_22ef1c;
        case 0x22ef20u: goto label_22ef20;
        case 0x22ef24u: goto label_22ef24;
        case 0x22ef28u: goto label_22ef28;
        case 0x22ef2cu: goto label_22ef2c;
        case 0x22ef30u: goto label_22ef30;
        case 0x22ef34u: goto label_22ef34;
        case 0x22ef38u: goto label_22ef38;
        case 0x22ef3cu: goto label_22ef3c;
        case 0x22ef40u: goto label_22ef40;
        case 0x22ef44u: goto label_22ef44;
        case 0x22ef48u: goto label_22ef48;
        case 0x22ef4cu: goto label_22ef4c;
        case 0x22ef50u: goto label_22ef50;
        case 0x22ef54u: goto label_22ef54;
        case 0x22ef58u: goto label_22ef58;
        case 0x22ef5cu: goto label_22ef5c;
        case 0x22ef60u: goto label_22ef60;
        case 0x22ef64u: goto label_22ef64;
        case 0x22ef68u: goto label_22ef68;
        case 0x22ef6cu: goto label_22ef6c;
        case 0x22ef70u: goto label_22ef70;
        case 0x22ef74u: goto label_22ef74;
        case 0x22ef78u: goto label_22ef78;
        case 0x22ef7cu: goto label_22ef7c;
        case 0x22ef80u: goto label_22ef80;
        case 0x22ef84u: goto label_22ef84;
        case 0x22ef88u: goto label_22ef88;
        case 0x22ef8cu: goto label_22ef8c;
        case 0x22ef90u: goto label_22ef90;
        case 0x22ef94u: goto label_22ef94;
        case 0x22ef98u: goto label_22ef98;
        case 0x22ef9cu: goto label_22ef9c;
        case 0x22efa0u: goto label_22efa0;
        case 0x22efa4u: goto label_22efa4;
        case 0x22efa8u: goto label_22efa8;
        case 0x22efacu: goto label_22efac;
        case 0x22efb0u: goto label_22efb0;
        case 0x22efb4u: goto label_22efb4;
        case 0x22efb8u: goto label_22efb8;
        case 0x22efbcu: goto label_22efbc;
        case 0x22efc0u: goto label_22efc0;
        case 0x22efc4u: goto label_22efc4;
        case 0x22efc8u: goto label_22efc8;
        case 0x22efccu: goto label_22efcc;
        case 0x22efd0u: goto label_22efd0;
        case 0x22efd4u: goto label_22efd4;
        case 0x22efd8u: goto label_22efd8;
        case 0x22efdcu: goto label_22efdc;
        case 0x22efe0u: goto label_22efe0;
        case 0x22efe4u: goto label_22efe4;
        case 0x22efe8u: goto label_22efe8;
        case 0x22efecu: goto label_22efec;
        case 0x22eff0u: goto label_22eff0;
        case 0x22eff4u: goto label_22eff4;
        case 0x22eff8u: goto label_22eff8;
        case 0x22effcu: goto label_22effc;
        case 0x22f000u: goto label_22f000;
        case 0x22f004u: goto label_22f004;
        case 0x22f008u: goto label_22f008;
        case 0x22f00cu: goto label_22f00c;
        case 0x22f010u: goto label_22f010;
        case 0x22f014u: goto label_22f014;
        case 0x22f018u: goto label_22f018;
        case 0x22f01cu: goto label_22f01c;
        case 0x22f020u: goto label_22f020;
        case 0x22f024u: goto label_22f024;
        case 0x22f028u: goto label_22f028;
        case 0x22f02cu: goto label_22f02c;
        case 0x22f030u: goto label_22f030;
        case 0x22f034u: goto label_22f034;
        case 0x22f038u: goto label_22f038;
        case 0x22f03cu: goto label_22f03c;
        case 0x22f040u: goto label_22f040;
        case 0x22f044u: goto label_22f044;
        case 0x22f048u: goto label_22f048;
        case 0x22f04cu: goto label_22f04c;
        case 0x22f050u: goto label_22f050;
        case 0x22f054u: goto label_22f054;
        case 0x22f058u: goto label_22f058;
        case 0x22f05cu: goto label_22f05c;
        case 0x22f060u: goto label_22f060;
        case 0x22f064u: goto label_22f064;
        case 0x22f068u: goto label_22f068;
        case 0x22f06cu: goto label_22f06c;
        case 0x22f070u: goto label_22f070;
        case 0x22f074u: goto label_22f074;
        case 0x22f078u: goto label_22f078;
        case 0x22f07cu: goto label_22f07c;
        case 0x22f080u: goto label_22f080;
        case 0x22f084u: goto label_22f084;
        case 0x22f088u: goto label_22f088;
        case 0x22f08cu: goto label_22f08c;
        case 0x22f090u: goto label_22f090;
        case 0x22f094u: goto label_22f094;
        case 0x22f098u: goto label_22f098;
        case 0x22f09cu: goto label_22f09c;
        case 0x22f0a0u: goto label_22f0a0;
        case 0x22f0a4u: goto label_22f0a4;
        case 0x22f0a8u: goto label_22f0a8;
        case 0x22f0acu: goto label_22f0ac;
        case 0x22f0b0u: goto label_22f0b0;
        case 0x22f0b4u: goto label_22f0b4;
        case 0x22f0b8u: goto label_22f0b8;
        case 0x22f0bcu: goto label_22f0bc;
        case 0x22f0c0u: goto label_22f0c0;
        case 0x22f0c4u: goto label_22f0c4;
        case 0x22f0c8u: goto label_22f0c8;
        case 0x22f0ccu: goto label_22f0cc;
        case 0x22f0d0u: goto label_22f0d0;
        case 0x22f0d4u: goto label_22f0d4;
        case 0x22f0d8u: goto label_22f0d8;
        case 0x22f0dcu: goto label_22f0dc;
        case 0x22f0e0u: goto label_22f0e0;
        case 0x22f0e4u: goto label_22f0e4;
        case 0x22f0e8u: goto label_22f0e8;
        case 0x22f0ecu: goto label_22f0ec;
        case 0x22f0f0u: goto label_22f0f0;
        case 0x22f0f4u: goto label_22f0f4;
        case 0x22f0f8u: goto label_22f0f8;
        case 0x22f0fcu: goto label_22f0fc;
        case 0x22f100u: goto label_22f100;
        case 0x22f104u: goto label_22f104;
        case 0x22f108u: goto label_22f108;
        case 0x22f10cu: goto label_22f10c;
        case 0x22f110u: goto label_22f110;
        case 0x22f114u: goto label_22f114;
        case 0x22f118u: goto label_22f118;
        case 0x22f11cu: goto label_22f11c;
        case 0x22f120u: goto label_22f120;
        case 0x22f124u: goto label_22f124;
        case 0x22f128u: goto label_22f128;
        case 0x22f12cu: goto label_22f12c;
        case 0x22f130u: goto label_22f130;
        case 0x22f134u: goto label_22f134;
        case 0x22f138u: goto label_22f138;
        case 0x22f13cu: goto label_22f13c;
        case 0x22f140u: goto label_22f140;
        case 0x22f144u: goto label_22f144;
        case 0x22f148u: goto label_22f148;
        case 0x22f14cu: goto label_22f14c;
        case 0x22f150u: goto label_22f150;
        case 0x22f154u: goto label_22f154;
        case 0x22f158u: goto label_22f158;
        case 0x22f15cu: goto label_22f15c;
        case 0x22f160u: goto label_22f160;
        case 0x22f164u: goto label_22f164;
        case 0x22f168u: goto label_22f168;
        case 0x22f16cu: goto label_22f16c;
        case 0x22f170u: goto label_22f170;
        case 0x22f174u: goto label_22f174;
        case 0x22f178u: goto label_22f178;
        case 0x22f17cu: goto label_22f17c;
        case 0x22f180u: goto label_22f180;
        case 0x22f184u: goto label_22f184;
        case 0x22f188u: goto label_22f188;
        case 0x22f18cu: goto label_22f18c;
        case 0x22f190u: goto label_22f190;
        case 0x22f194u: goto label_22f194;
        case 0x22f198u: goto label_22f198;
        case 0x22f19cu: goto label_22f19c;
        case 0x22f1a0u: goto label_22f1a0;
        case 0x22f1a4u: goto label_22f1a4;
        case 0x22f1a8u: goto label_22f1a8;
        case 0x22f1acu: goto label_22f1ac;
        case 0x22f1b0u: goto label_22f1b0;
        case 0x22f1b4u: goto label_22f1b4;
        case 0x22f1b8u: goto label_22f1b8;
        case 0x22f1bcu: goto label_22f1bc;
        case 0x22f1c0u: goto label_22f1c0;
        case 0x22f1c4u: goto label_22f1c4;
        case 0x22f1c8u: goto label_22f1c8;
        case 0x22f1ccu: goto label_22f1cc;
        case 0x22f1d0u: goto label_22f1d0;
        case 0x22f1d4u: goto label_22f1d4;
        case 0x22f1d8u: goto label_22f1d8;
        case 0x22f1dcu: goto label_22f1dc;
        case 0x22f1e0u: goto label_22f1e0;
        case 0x22f1e4u: goto label_22f1e4;
        case 0x22f1e8u: goto label_22f1e8;
        case 0x22f1ecu: goto label_22f1ec;
        case 0x22f1f0u: goto label_22f1f0;
        case 0x22f1f4u: goto label_22f1f4;
        case 0x22f1f8u: goto label_22f1f8;
        case 0x22f1fcu: goto label_22f1fc;
        case 0x22f200u: goto label_22f200;
        case 0x22f204u: goto label_22f204;
        case 0x22f208u: goto label_22f208;
        case 0x22f20cu: goto label_22f20c;
        case 0x22f210u: goto label_22f210;
        case 0x22f214u: goto label_22f214;
        case 0x22f218u: goto label_22f218;
        case 0x22f21cu: goto label_22f21c;
        case 0x22f220u: goto label_22f220;
        case 0x22f224u: goto label_22f224;
        case 0x22f228u: goto label_22f228;
        case 0x22f22cu: goto label_22f22c;
        case 0x22f230u: goto label_22f230;
        case 0x22f234u: goto label_22f234;
        case 0x22f238u: goto label_22f238;
        case 0x22f23cu: goto label_22f23c;
        case 0x22f240u: goto label_22f240;
        case 0x22f244u: goto label_22f244;
        case 0x22f248u: goto label_22f248;
        case 0x22f24cu: goto label_22f24c;
        case 0x22f250u: goto label_22f250;
        case 0x22f254u: goto label_22f254;
        case 0x22f258u: goto label_22f258;
        case 0x22f25cu: goto label_22f25c;
        case 0x22f260u: goto label_22f260;
        case 0x22f264u: goto label_22f264;
        case 0x22f268u: goto label_22f268;
        case 0x22f26cu: goto label_22f26c;
        case 0x22f270u: goto label_22f270;
        case 0x22f274u: goto label_22f274;
        case 0x22f278u: goto label_22f278;
        case 0x22f27cu: goto label_22f27c;
        case 0x22f280u: goto label_22f280;
        case 0x22f284u: goto label_22f284;
        case 0x22f288u: goto label_22f288;
        case 0x22f28cu: goto label_22f28c;
        case 0x22f290u: goto label_22f290;
        case 0x22f294u: goto label_22f294;
        case 0x22f298u: goto label_22f298;
        case 0x22f29cu: goto label_22f29c;
        case 0x22f2a0u: goto label_22f2a0;
        case 0x22f2a4u: goto label_22f2a4;
        case 0x22f2a8u: goto label_22f2a8;
        case 0x22f2acu: goto label_22f2ac;
        case 0x22f2b0u: goto label_22f2b0;
        case 0x22f2b4u: goto label_22f2b4;
        case 0x22f2b8u: goto label_22f2b8;
        case 0x22f2bcu: goto label_22f2bc;
        case 0x22f2c0u: goto label_22f2c0;
        case 0x22f2c4u: goto label_22f2c4;
        case 0x22f2c8u: goto label_22f2c8;
        case 0x22f2ccu: goto label_22f2cc;
        case 0x22f2d0u: goto label_22f2d0;
        case 0x22f2d4u: goto label_22f2d4;
        case 0x22f2d8u: goto label_22f2d8;
        case 0x22f2dcu: goto label_22f2dc;
        case 0x22f2e0u: goto label_22f2e0;
        case 0x22f2e4u: goto label_22f2e4;
        case 0x22f2e8u: goto label_22f2e8;
        case 0x22f2ecu: goto label_22f2ec;
        case 0x22f2f0u: goto label_22f2f0;
        case 0x22f2f4u: goto label_22f2f4;
        case 0x22f2f8u: goto label_22f2f8;
        case 0x22f2fcu: goto label_22f2fc;
        case 0x22f300u: goto label_22f300;
        case 0x22f304u: goto label_22f304;
        case 0x22f308u: goto label_22f308;
        case 0x22f30cu: goto label_22f30c;
        case 0x22f310u: goto label_22f310;
        case 0x22f314u: goto label_22f314;
        case 0x22f318u: goto label_22f318;
        case 0x22f31cu: goto label_22f31c;
        case 0x22f320u: goto label_22f320;
        case 0x22f324u: goto label_22f324;
        case 0x22f328u: goto label_22f328;
        case 0x22f32cu: goto label_22f32c;
        case 0x22f330u: goto label_22f330;
        case 0x22f334u: goto label_22f334;
        case 0x22f338u: goto label_22f338;
        case 0x22f33cu: goto label_22f33c;
        case 0x22f340u: goto label_22f340;
        case 0x22f344u: goto label_22f344;
        case 0x22f348u: goto label_22f348;
        case 0x22f34cu: goto label_22f34c;
        case 0x22f350u: goto label_22f350;
        case 0x22f354u: goto label_22f354;
        case 0x22f358u: goto label_22f358;
        case 0x22f35cu: goto label_22f35c;
        case 0x22f360u: goto label_22f360;
        case 0x22f364u: goto label_22f364;
        case 0x22f368u: goto label_22f368;
        case 0x22f36cu: goto label_22f36c;
        case 0x22f370u: goto label_22f370;
        case 0x22f374u: goto label_22f374;
        case 0x22f378u: goto label_22f378;
        case 0x22f37cu: goto label_22f37c;
        case 0x22f380u: goto label_22f380;
        case 0x22f384u: goto label_22f384;
        case 0x22f388u: goto label_22f388;
        case 0x22f38cu: goto label_22f38c;
        case 0x22f390u: goto label_22f390;
        case 0x22f394u: goto label_22f394;
        case 0x22f398u: goto label_22f398;
        case 0x22f39cu: goto label_22f39c;
        case 0x22f3a0u: goto label_22f3a0;
        case 0x22f3a4u: goto label_22f3a4;
        case 0x22f3a8u: goto label_22f3a8;
        case 0x22f3acu: goto label_22f3ac;
        case 0x22f3b0u: goto label_22f3b0;
        case 0x22f3b4u: goto label_22f3b4;
        case 0x22f3b8u: goto label_22f3b8;
        case 0x22f3bcu: goto label_22f3bc;
        case 0x22f3c0u: goto label_22f3c0;
        case 0x22f3c4u: goto label_22f3c4;
        case 0x22f3c8u: goto label_22f3c8;
        case 0x22f3ccu: goto label_22f3cc;
        case 0x22f3d0u: goto label_22f3d0;
        case 0x22f3d4u: goto label_22f3d4;
        case 0x22f3d8u: goto label_22f3d8;
        case 0x22f3dcu: goto label_22f3dc;
        case 0x22f3e0u: goto label_22f3e0;
        case 0x22f3e4u: goto label_22f3e4;
        case 0x22f3e8u: goto label_22f3e8;
        case 0x22f3ecu: goto label_22f3ec;
        case 0x22f3f0u: goto label_22f3f0;
        case 0x22f3f4u: goto label_22f3f4;
        case 0x22f3f8u: goto label_22f3f8;
        case 0x22f3fcu: goto label_22f3fc;
        case 0x22f400u: goto label_22f400;
        case 0x22f404u: goto label_22f404;
        case 0x22f408u: goto label_22f408;
        case 0x22f40cu: goto label_22f40c;
        case 0x22f410u: goto label_22f410;
        case 0x22f414u: goto label_22f414;
        case 0x22f418u: goto label_22f418;
        case 0x22f41cu: goto label_22f41c;
        case 0x22f420u: goto label_22f420;
        case 0x22f424u: goto label_22f424;
        case 0x22f428u: goto label_22f428;
        case 0x22f42cu: goto label_22f42c;
        case 0x22f430u: goto label_22f430;
        case 0x22f434u: goto label_22f434;
        case 0x22f438u: goto label_22f438;
        case 0x22f43cu: goto label_22f43c;
        case 0x22f440u: goto label_22f440;
        case 0x22f444u: goto label_22f444;
        case 0x22f448u: goto label_22f448;
        case 0x22f44cu: goto label_22f44c;
        case 0x22f450u: goto label_22f450;
        case 0x22f454u: goto label_22f454;
        case 0x22f458u: goto label_22f458;
        case 0x22f45cu: goto label_22f45c;
        case 0x22f460u: goto label_22f460;
        case 0x22f464u: goto label_22f464;
        case 0x22f468u: goto label_22f468;
        case 0x22f46cu: goto label_22f46c;
        case 0x22f470u: goto label_22f470;
        case 0x22f474u: goto label_22f474;
        case 0x22f478u: goto label_22f478;
        case 0x22f47cu: goto label_22f47c;
        case 0x22f480u: goto label_22f480;
        case 0x22f484u: goto label_22f484;
        case 0x22f488u: goto label_22f488;
        case 0x22f48cu: goto label_22f48c;
        case 0x22f490u: goto label_22f490;
        case 0x22f494u: goto label_22f494;
        case 0x22f498u: goto label_22f498;
        case 0x22f49cu: goto label_22f49c;
        case 0x22f4a0u: goto label_22f4a0;
        case 0x22f4a4u: goto label_22f4a4;
        case 0x22f4a8u: goto label_22f4a8;
        case 0x22f4acu: goto label_22f4ac;
        case 0x22f4b0u: goto label_22f4b0;
        case 0x22f4b4u: goto label_22f4b4;
        case 0x22f4b8u: goto label_22f4b8;
        case 0x22f4bcu: goto label_22f4bc;
        case 0x22f4c0u: goto label_22f4c0;
        case 0x22f4c4u: goto label_22f4c4;
        case 0x22f4c8u: goto label_22f4c8;
        case 0x22f4ccu: goto label_22f4cc;
        case 0x22f4d0u: goto label_22f4d0;
        case 0x22f4d4u: goto label_22f4d4;
        case 0x22f4d8u: goto label_22f4d8;
        case 0x22f4dcu: goto label_22f4dc;
        case 0x22f4e0u: goto label_22f4e0;
        case 0x22f4e4u: goto label_22f4e4;
        case 0x22f4e8u: goto label_22f4e8;
        case 0x22f4ecu: goto label_22f4ec;
        case 0x22f4f0u: goto label_22f4f0;
        case 0x22f4f4u: goto label_22f4f4;
        case 0x22f4f8u: goto label_22f4f8;
        case 0x22f4fcu: goto label_22f4fc;
        case 0x22f500u: goto label_22f500;
        case 0x22f504u: goto label_22f504;
        case 0x22f508u: goto label_22f508;
        case 0x22f50cu: goto label_22f50c;
        case 0x22f510u: goto label_22f510;
        case 0x22f514u: goto label_22f514;
        case 0x22f518u: goto label_22f518;
        case 0x22f51cu: goto label_22f51c;
        case 0x22f520u: goto label_22f520;
        case 0x22f524u: goto label_22f524;
        case 0x22f528u: goto label_22f528;
        case 0x22f52cu: goto label_22f52c;
        case 0x22f530u: goto label_22f530;
        case 0x22f534u: goto label_22f534;
        case 0x22f538u: goto label_22f538;
        case 0x22f53cu: goto label_22f53c;
        case 0x22f540u: goto label_22f540;
        case 0x22f544u: goto label_22f544;
        case 0x22f548u: goto label_22f548;
        case 0x22f54cu: goto label_22f54c;
        case 0x22f550u: goto label_22f550;
        case 0x22f554u: goto label_22f554;
        case 0x22f558u: goto label_22f558;
        case 0x22f55cu: goto label_22f55c;
        case 0x22f560u: goto label_22f560;
        case 0x22f564u: goto label_22f564;
        case 0x22f568u: goto label_22f568;
        case 0x22f56cu: goto label_22f56c;
        case 0x22f570u: goto label_22f570;
        case 0x22f574u: goto label_22f574;
        case 0x22f578u: goto label_22f578;
        case 0x22f57cu: goto label_22f57c;
        case 0x22f580u: goto label_22f580;
        case 0x22f584u: goto label_22f584;
        case 0x22f588u: goto label_22f588;
        case 0x22f58cu: goto label_22f58c;
        case 0x22f590u: goto label_22f590;
        case 0x22f594u: goto label_22f594;
        case 0x22f598u: goto label_22f598;
        case 0x22f59cu: goto label_22f59c;
        case 0x22f5a0u: goto label_22f5a0;
        case 0x22f5a4u: goto label_22f5a4;
        case 0x22f5a8u: goto label_22f5a8;
        case 0x22f5acu: goto label_22f5ac;
        case 0x22f5b0u: goto label_22f5b0;
        case 0x22f5b4u: goto label_22f5b4;
        case 0x22f5b8u: goto label_22f5b8;
        case 0x22f5bcu: goto label_22f5bc;
        case 0x22f5c0u: goto label_22f5c0;
        case 0x22f5c4u: goto label_22f5c4;
        case 0x22f5c8u: goto label_22f5c8;
        case 0x22f5ccu: goto label_22f5cc;
        case 0x22f5d0u: goto label_22f5d0;
        case 0x22f5d4u: goto label_22f5d4;
        case 0x22f5d8u: goto label_22f5d8;
        case 0x22f5dcu: goto label_22f5dc;
        case 0x22f5e0u: goto label_22f5e0;
        case 0x22f5e4u: goto label_22f5e4;
        case 0x22f5e8u: goto label_22f5e8;
        case 0x22f5ecu: goto label_22f5ec;
        case 0x22f5f0u: goto label_22f5f0;
        case 0x22f5f4u: goto label_22f5f4;
        case 0x22f5f8u: goto label_22f5f8;
        case 0x22f5fcu: goto label_22f5fc;
        case 0x22f600u: goto label_22f600;
        case 0x22f604u: goto label_22f604;
        case 0x22f608u: goto label_22f608;
        case 0x22f60cu: goto label_22f60c;
        case 0x22f610u: goto label_22f610;
        case 0x22f614u: goto label_22f614;
        case 0x22f618u: goto label_22f618;
        case 0x22f61cu: goto label_22f61c;
        case 0x22f620u: goto label_22f620;
        case 0x22f624u: goto label_22f624;
        case 0x22f628u: goto label_22f628;
        case 0x22f62cu: goto label_22f62c;
        case 0x22f630u: goto label_22f630;
        case 0x22f634u: goto label_22f634;
        case 0x22f638u: goto label_22f638;
        case 0x22f63cu: goto label_22f63c;
        case 0x22f640u: goto label_22f640;
        case 0x22f644u: goto label_22f644;
        case 0x22f648u: goto label_22f648;
        case 0x22f64cu: goto label_22f64c;
        case 0x22f650u: goto label_22f650;
        case 0x22f654u: goto label_22f654;
        case 0x22f658u: goto label_22f658;
        case 0x22f65cu: goto label_22f65c;
        case 0x22f660u: goto label_22f660;
        case 0x22f664u: goto label_22f664;
        case 0x22f668u: goto label_22f668;
        case 0x22f66cu: goto label_22f66c;
        case 0x22f670u: goto label_22f670;
        case 0x22f674u: goto label_22f674;
        case 0x22f678u: goto label_22f678;
        case 0x22f67cu: goto label_22f67c;
        case 0x22f680u: goto label_22f680;
        case 0x22f684u: goto label_22f684;
        case 0x22f688u: goto label_22f688;
        case 0x22f68cu: goto label_22f68c;
        case 0x22f690u: goto label_22f690;
        case 0x22f694u: goto label_22f694;
        case 0x22f698u: goto label_22f698;
        case 0x22f69cu: goto label_22f69c;
        case 0x22f6a0u: goto label_22f6a0;
        case 0x22f6a4u: goto label_22f6a4;
        case 0x22f6a8u: goto label_22f6a8;
        case 0x22f6acu: goto label_22f6ac;
        case 0x22f6b0u: goto label_22f6b0;
        case 0x22f6b4u: goto label_22f6b4;
        case 0x22f6b8u: goto label_22f6b8;
        case 0x22f6bcu: goto label_22f6bc;
        case 0x22f6c0u: goto label_22f6c0;
        case 0x22f6c4u: goto label_22f6c4;
        case 0x22f6c8u: goto label_22f6c8;
        case 0x22f6ccu: goto label_22f6cc;
        case 0x22f6d0u: goto label_22f6d0;
        case 0x22f6d4u: goto label_22f6d4;
        case 0x22f6d8u: goto label_22f6d8;
        case 0x22f6dcu: goto label_22f6dc;
        case 0x22f6e0u: goto label_22f6e0;
        case 0x22f6e4u: goto label_22f6e4;
        case 0x22f6e8u: goto label_22f6e8;
        case 0x22f6ecu: goto label_22f6ec;
        case 0x22f6f0u: goto label_22f6f0;
        case 0x22f6f4u: goto label_22f6f4;
        case 0x22f6f8u: goto label_22f6f8;
        case 0x22f6fcu: goto label_22f6fc;
        case 0x22f700u: goto label_22f700;
        case 0x22f704u: goto label_22f704;
        case 0x22f708u: goto label_22f708;
        case 0x22f70cu: goto label_22f70c;
        case 0x22f710u: goto label_22f710;
        case 0x22f714u: goto label_22f714;
        case 0x22f718u: goto label_22f718;
        case 0x22f71cu: goto label_22f71c;
        case 0x22f720u: goto label_22f720;
        case 0x22f724u: goto label_22f724;
        case 0x22f728u: goto label_22f728;
        case 0x22f72cu: goto label_22f72c;
        case 0x22f730u: goto label_22f730;
        case 0x22f734u: goto label_22f734;
        case 0x22f738u: goto label_22f738;
        case 0x22f73cu: goto label_22f73c;
        case 0x22f740u: goto label_22f740;
        case 0x22f744u: goto label_22f744;
        case 0x22f748u: goto label_22f748;
        case 0x22f74cu: goto label_22f74c;
        case 0x22f750u: goto label_22f750;
        case 0x22f754u: goto label_22f754;
        case 0x22f758u: goto label_22f758;
        case 0x22f75cu: goto label_22f75c;
        case 0x22f760u: goto label_22f760;
        case 0x22f764u: goto label_22f764;
        case 0x22f768u: goto label_22f768;
        case 0x22f76cu: goto label_22f76c;
        case 0x22f770u: goto label_22f770;
        case 0x22f774u: goto label_22f774;
        case 0x22f778u: goto label_22f778;
        case 0x22f77cu: goto label_22f77c;
        case 0x22f780u: goto label_22f780;
        case 0x22f784u: goto label_22f784;
        case 0x22f788u: goto label_22f788;
        case 0x22f78cu: goto label_22f78c;
        case 0x22f790u: goto label_22f790;
        case 0x22f794u: goto label_22f794;
        case 0x22f798u: goto label_22f798;
        case 0x22f79cu: goto label_22f79c;
        case 0x22f7a0u: goto label_22f7a0;
        case 0x22f7a4u: goto label_22f7a4;
        case 0x22f7a8u: goto label_22f7a8;
        case 0x22f7acu: goto label_22f7ac;
        case 0x22f7b0u: goto label_22f7b0;
        case 0x22f7b4u: goto label_22f7b4;
        case 0x22f7b8u: goto label_22f7b8;
        case 0x22f7bcu: goto label_22f7bc;
        case 0x22f7c0u: goto label_22f7c0;
        case 0x22f7c4u: goto label_22f7c4;
        case 0x22f7c8u: goto label_22f7c8;
        case 0x22f7ccu: goto label_22f7cc;
        case 0x22f7d0u: goto label_22f7d0;
        case 0x22f7d4u: goto label_22f7d4;
        case 0x22f7d8u: goto label_22f7d8;
        case 0x22f7dcu: goto label_22f7dc;
        case 0x22f7e0u: goto label_22f7e0;
        case 0x22f7e4u: goto label_22f7e4;
        case 0x22f7e8u: goto label_22f7e8;
        case 0x22f7ecu: goto label_22f7ec;
        case 0x22f7f0u: goto label_22f7f0;
        case 0x22f7f4u: goto label_22f7f4;
        case 0x22f7f8u: goto label_22f7f8;
        case 0x22f7fcu: goto label_22f7fc;
        case 0x22f800u: goto label_22f800;
        case 0x22f804u: goto label_22f804;
        case 0x22f808u: goto label_22f808;
        case 0x22f80cu: goto label_22f80c;
        case 0x22f810u: goto label_22f810;
        case 0x22f814u: goto label_22f814;
        case 0x22f818u: goto label_22f818;
        case 0x22f81cu: goto label_22f81c;
        case 0x22f820u: goto label_22f820;
        case 0x22f824u: goto label_22f824;
        case 0x22f828u: goto label_22f828;
        case 0x22f82cu: goto label_22f82c;
        case 0x22f830u: goto label_22f830;
        case 0x22f834u: goto label_22f834;
        case 0x22f838u: goto label_22f838;
        case 0x22f83cu: goto label_22f83c;
        case 0x22f840u: goto label_22f840;
        case 0x22f844u: goto label_22f844;
        case 0x22f848u: goto label_22f848;
        case 0x22f84cu: goto label_22f84c;
        case 0x22f850u: goto label_22f850;
        case 0x22f854u: goto label_22f854;
        case 0x22f858u: goto label_22f858;
        case 0x22f85cu: goto label_22f85c;
        case 0x22f860u: goto label_22f860;
        case 0x22f864u: goto label_22f864;
        case 0x22f868u: goto label_22f868;
        case 0x22f86cu: goto label_22f86c;
        case 0x22f870u: goto label_22f870;
        case 0x22f874u: goto label_22f874;
        case 0x22f878u: goto label_22f878;
        case 0x22f87cu: goto label_22f87c;
        case 0x22f880u: goto label_22f880;
        case 0x22f884u: goto label_22f884;
        case 0x22f888u: goto label_22f888;
        case 0x22f88cu: goto label_22f88c;
        case 0x22f890u: goto label_22f890;
        case 0x22f894u: goto label_22f894;
        case 0x22f898u: goto label_22f898;
        case 0x22f89cu: goto label_22f89c;
        case 0x22f8a0u: goto label_22f8a0;
        case 0x22f8a4u: goto label_22f8a4;
        case 0x22f8a8u: goto label_22f8a8;
        case 0x22f8acu: goto label_22f8ac;
        case 0x22f8b0u: goto label_22f8b0;
        case 0x22f8b4u: goto label_22f8b4;
        default: break;
    }

    ctx->pc = 0x22e4e0u;

label_22e4e0:
    // 0x22e4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22e4e4:
    // 0x22e4e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22e4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22e4e8:
    // 0x22e4e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22e4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22e4ec:
    // 0x22e4ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22e4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22e4f0:
    // 0x22e4f0: 0xc08c682  jal         func_231A08
label_22e4f4:
    if (ctx->pc == 0x22E4F4u) {
        ctx->pc = 0x22E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E4F0u;
        // 0x22e4f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E4F8u;
        goto label_22e4f8;
    }
    ctx->pc = 0x22E4F0u;
    SET_GPR_U32(ctx, 31, 0x22E4F8u);
    ctx->pc = 0x22E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4F0u;
    // 0x22e4f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22E4F0u, 0x22E4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4F8u;
label_22e4f8:
    // 0x22e4f8: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x22e4f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_22e4fc:
    // 0x22e4fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e4fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e500:
    // 0x22e500: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22e500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_22e504:
    // 0x22e504: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22e508:
    if (ctx->pc == 0x22E508u) {
        ctx->pc = 0x22E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E504u;
        // 0x22e508: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E50Cu;
        goto label_22e50c;
    }
    ctx->pc = 0x22E504u;
    {
        const bool branch_taken_0x22e504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E504u;
        // 0x22e508: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e504) {
            ctx->pc = 0x22E514u;
            goto label_22e514;
        }
    }
    ctx->pc = 0x22E50Cu;
label_22e50c:
    // 0x22e50c: 0x1000000d  b           . + 4 + (0xD << 2)
label_22e510:
    if (ctx->pc == 0x22E510u) {
        ctx->pc = 0x22E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E50Cu;
        // 0x22e510: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E514u;
        goto label_22e514;
    }
    ctx->pc = 0x22E50Cu;
    {
        const bool branch_taken_0x22e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E50Cu;
        // 0x22e510: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e50c) {
            ctx->pc = 0x22E544u;
            goto label_22e544;
        }
    }
    ctx->pc = 0x22E514u;
label_22e514:
    // 0x22e514: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_22e518:
    if (ctx->pc == 0x22E518u) {
        ctx->pc = 0x22E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E514u;
        // 0x22e518: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E51Cu;
        goto label_22e51c;
    }
    ctx->pc = 0x22E514u;
    {
        const bool branch_taken_0x22e514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e514) {
            ctx->pc = 0x22E518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E514u;
            // 0x22e518: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E524u;
            goto label_22e524;
        }
    }
    ctx->pc = 0x22E51Cu;
label_22e51c:
    // 0x22e51c: 0x10000009  b           . + 4 + (0x9 << 2)
label_22e520:
    if (ctx->pc == 0x22E520u) {
        ctx->pc = 0x22E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E51Cu;
        // 0x22e520: 0x24100078  addiu       $s0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E524u;
        goto label_22e524;
    }
    ctx->pc = 0x22E51Cu;
    {
        const bool branch_taken_0x22e51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E51Cu;
        // 0x22e520: 0x24100078  addiu       $s0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e51c) {
            ctx->pc = 0x22E544u;
            goto label_22e544;
        }
    }
    ctx->pc = 0x22E524u;
label_22e524:
    // 0x22e524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e528:
    // 0x22e528: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22e528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22e52c:
    // 0x22e52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e530:
    // 0x22e530: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22e530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22e534:
    // 0x22e534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22e534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e538:
    // 0x22e538: 0x40f809  jalr        $v0
label_22e53c:
    if (ctx->pc == 0x22E53Cu) {
        ctx->pc = 0x22E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E538u;
        // 0x22e53c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E540u;
        goto label_22e540;
    }
    ctx->pc = 0x22E538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E540u);
        ctx->pc = 0x22E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E538u;
        // 0x22e53c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E538u, 0x22E540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E540u;
label_22e540:
    // 0x22e540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e544:
    // 0x22e544: 0xc08c698  jal         func_231A60
label_22e548:
    if (ctx->pc == 0x22E548u) {
        ctx->pc = 0x22E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E544u;
        // 0x22e548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E54Cu;
        goto label_22e54c;
    }
    ctx->pc = 0x22E544u;
    SET_GPR_U32(ctx, 31, 0x22E54Cu);
    ctx->pc = 0x22E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E544u;
    // 0x22e548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E544u, 0x22E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E54Cu;
label_22e54c:
    // 0x22e54c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22e54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e550:
    // 0x22e550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22e550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22e554:
    // 0x22e554: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22e558:
    // 0x22e558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e55c:
    // 0x22e55c: 0x3e00008  jr          $ra
label_22e560:
    if (ctx->pc == 0x22E560u) {
        ctx->pc = 0x22E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E55Cu;
        // 0x22e560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E564u;
        goto label_22e564;
    }
    ctx->pc = 0x22E55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E55Cu;
        // 0x22e560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E564u;
label_22e564:
    // 0x22e564: 0x0  nop
    ctx->pc = 0x22e564u;
    // NOP
label_22e568:
    // 0x22e568: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22e568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_22e56c:
    // 0x22e56c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x22e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_22e570:
    // 0x22e570: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x22e570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_22e574:
    // 0x22e574: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x22e574u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22e578:
    // 0x22e578: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x22e578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_22e57c:
    // 0x22e57c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x22e57cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e580:
    // 0x22e580: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x22e580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_22e584:
    // 0x22e584: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22e584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e588:
    // 0x22e588: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x22e588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_22e58c:
    // 0x22e58c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x22e58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_22e590:
    // 0x22e590: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x22e590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_22e594:
    // 0x22e594: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x22e594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_22e598:
    // 0x22e598: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x22e598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_22e59c:
    // 0x22e59c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22e59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_22e5a0:
    // 0x22e5a0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x22e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_22e5a4:
    // 0x22e5a4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22e5a8:
    // 0x22e5a8: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x22e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_22e5ac:
    // 0x22e5ac: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x22e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
label_22e5b0:
    // 0x22e5b0: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x22e5b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22e5b4:
    // 0x22e5b4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x22e5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_22e5b8:
    // 0x22e5b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22e5bc:
    // 0x22e5bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22e5c0:
    if (ctx->pc == 0x22E5C0u) {
        ctx->pc = 0x22E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5BCu;
        // 0x22e5c0: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5C4u;
        goto label_22e5c4;
    }
    ctx->pc = 0x22E5BCu;
    {
        const bool branch_taken_0x22e5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5BCu;
        // 0x22e5c0: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5bc) {
            ctx->pc = 0x22E5CCu;
            goto label_22e5cc;
        }
    }
    ctx->pc = 0x22E5C4u;
label_22e5c4:
    // 0x22e5c4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_22e5c8:
    if (ctx->pc == 0x22E5C8u) {
        ctx->pc = 0x22E5CCu;
        goto label_22e5cc;
    }
    ctx->pc = 0x22E5C4u;
    {
        const bool branch_taken_0x22e5c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e5c4) {
            ctx->pc = 0x22E5D4u;
            goto label_22e5d4;
        }
    }
    ctx->pc = 0x22E5CCu;
label_22e5cc:
    // 0x22e5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e5d0:
    // 0x22e5d0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x22e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_22e5d4:
    // 0x22e5d4: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
label_22e5d8:
    if (ctx->pc == 0x22E5D8u) {
        ctx->pc = 0x22E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5D4u;
        // 0x22e5d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5DCu;
        goto label_22e5dc;
    }
    ctx->pc = 0x22E5D4u;
    {
        const bool branch_taken_0x22e5d4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5D4u;
        // 0x22e5d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5d4) {
            ctx->pc = 0x22E5E4u;
            goto label_22e5e4;
        }
    }
    ctx->pc = 0x22E5DCu;
label_22e5dc:
    // 0x22e5dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_22e5e0:
    if (ctx->pc == 0x22E5E0u) {
        ctx->pc = 0x22E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5DCu;
        // 0x22e5e0: 0x9fd50010  lwu         $s5, 0x10($fp) (Delay Slot)
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5E4u;
        goto label_22e5e4;
    }
    ctx->pc = 0x22E5DCu;
    {
        const bool branch_taken_0x22e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5DCu;
        // 0x22e5e0: 0x9fd50010  lwu         $s5, 0x10($fp) (Delay Slot)
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5dc) {
            ctx->pc = 0x22E5E8u;
            goto label_22e5e8;
        }
    }
    ctx->pc = 0x22E5E4u;
label_22e5e4:
    // 0x22e5e4: 0x8c550018  lw          $s5, 0x18($v0)
    ctx->pc = 0x22e5e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_22e5e8:
    // 0x22e5e8: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
label_22e5ec:
    if (ctx->pc == 0x22E5ECu) {
        ctx->pc = 0x22E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5E8u;
        // 0x22e5ec: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5F0u;
        goto label_22e5f0;
    }
    ctx->pc = 0x22E5E8u;
    {
        const bool branch_taken_0x22e5e8 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x22E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5E8u;
        // 0x22e5ec: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5e8) {
            ctx->pc = 0x22E5F8u;
            goto label_22e5f8;
        }
    }
    ctx->pc = 0x22E5F0u;
label_22e5f0:
    // 0x22e5f0: 0x10000188  b           . + 4 + (0x188 << 2)
label_22e5f4:
    if (ctx->pc == 0x22E5F4u) {
        ctx->pc = 0x22E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5F0u;
        // 0x22e5f4: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E5F8u;
        goto label_22e5f8;
    }
    ctx->pc = 0x22E5F0u;
    {
        const bool branch_taken_0x22e5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5F0u;
        // 0x22e5f4: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5f0) {
            ctx->pc = 0x22EC14u;
            goto label_22ec14;
        }
    }
    ctx->pc = 0x22E5F8u;
label_22e5f8:
    // 0x22e5f8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x22e5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_22e5fc:
    // 0x22e5fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22e600:
    if (ctx->pc == 0x22E600u) {
        ctx->pc = 0x22E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5FCu;
        // 0x22e600: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E604u;
        goto label_22e604;
    }
    ctx->pc = 0x22E5FCu;
    {
        const bool branch_taken_0x22e5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E5FCu;
        // 0x22e600: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e5fc) {
            ctx->pc = 0x22E620u;
            goto label_22e620;
        }
    }
    ctx->pc = 0x22E604u;
label_22e604:
    // 0x22e604: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x22e604u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_22e608:
    // 0x22e608: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_22e60c:
    // 0x22e60c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_22e610:
    if (ctx->pc == 0x22E610u) {
        ctx->pc = 0x22E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E60Cu;
        // 0x22e610: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E614u;
        goto label_22e614;
    }
    ctx->pc = 0x22E60Cu;
    {
        const bool branch_taken_0x22e60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E60Cu;
        // 0x22e610: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e60c) {
            ctx->pc = 0x22E624u;
            goto label_22e624;
        }
    }
    ctx->pc = 0x22E614u;
label_22e614:
    // 0x22e614: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x22e614u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22e618:
    // 0x22e618: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22e61c:
    // 0x22e61c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x22e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_22e620:
    // 0x22e620: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x22e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_22e624:
    // 0x22e624: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_22e628:
    if (ctx->pc == 0x22E628u) {
        ctx->pc = 0x22E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E624u;
        // 0x22e628: 0x8c57000c  lw          $s7, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E62Cu;
        goto label_22e62c;
    }
    ctx->pc = 0x22E624u;
    {
        const bool branch_taken_0x22e624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e624) {
            ctx->pc = 0x22E628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E624u;
            // 0x22e628: 0x8c57000c  lw          $s7, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E62Cu;
            goto label_22e62c;
        }
    }
    ctx->pc = 0x22E62Cu;
label_22e62c:
    // 0x22e62c: 0x964300b0  lhu         $v1, 0xB0($s2)
    ctx->pc = 0x22e62cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
label_22e630:
    // 0x22e630: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22e630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_22e634:
    // 0x22e634: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_22e638:
    if (ctx->pc == 0x22E638u) {
        ctx->pc = 0x22E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E634u;
        // 0x22e638: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E63Cu;
        goto label_22e63c;
    }
    ctx->pc = 0x22E634u;
    {
        const bool branch_taken_0x22e634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E634u;
        // 0x22e638: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e634) {
            ctx->pc = 0x22E6B4u;
            goto label_22e6b4;
        }
    }
    ctx->pc = 0x22E63Cu;
label_22e63c:
    // 0x22e63c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x22e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_22e640:
    // 0x22e640: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x22e640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_22e644:
    // 0x22e644: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_22e648:
    if (ctx->pc == 0x22E648u) {
        ctx->pc = 0x22E64Cu;
        goto label_22e64c;
    }
    ctx->pc = 0x22E644u;
    {
        const bool branch_taken_0x22e644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e644) {
            ctx->pc = 0x22E6B8u;
            goto label_22e6b8;
        }
    }
    ctx->pc = 0x22E64Cu;
label_22e64c:
    // 0x22e64c: 0xc08c21e  jal         func_230878
label_22e650:
    if (ctx->pc == 0x22E650u) {
        ctx->pc = 0x22E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E64Cu;
        // 0x22e650: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E654u;
        goto label_22e654;
    }
    ctx->pc = 0x22E64Cu;
    SET_GPR_U32(ctx, 31, 0x22E654u);
    ctx->pc = 0x22E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E64Cu;
    // 0x22e650: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230878u, 0x22E64Cu, 0x22E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E654u;
label_22e654:
    // 0x22e654: 0x10000018  b           . + 4 + (0x18 << 2)
label_22e658:
    if (ctx->pc == 0x22E658u) {
        ctx->pc = 0x22E65Cu;
        goto label_22e65c;
    }
    ctx->pc = 0x22E654u;
    {
        const bool branch_taken_0x22e654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e654) {
            ctx->pc = 0x22E6B8u;
            goto label_22e6b8;
        }
    }
    ctx->pc = 0x22E65Cu;
label_22e65c:
    // 0x22e65c: 0x96540038  lhu         $s4, 0x38($s2)
    ctx->pc = 0x22e65cu;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_22e660:
    // 0x22e660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e664:
    // 0x22e664: 0xc08c698  jal         func_231A60
label_22e668:
    if (ctx->pc == 0x22E668u) {
        ctx->pc = 0x22E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E664u;
        // 0x22e668: 0xa6400038  sh          $zero, 0x38($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E66Cu;
        goto label_22e66c;
    }
    ctx->pc = 0x22E664u;
    SET_GPR_U32(ctx, 31, 0x22E66Cu);
    ctx->pc = 0x22E668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E664u;
    // 0x22e668: 0xa6400038  sh          $zero, 0x38($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E664u, 0x22E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E66Cu;
label_22e66c:
    // 0x22e66c: 0x10000161  b           . + 4 + (0x161 << 2)
label_22e670:
    if (ctx->pc == 0x22E670u) {
        ctx->pc = 0x22E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E66Cu;
        // 0x22e670: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E674u;
        goto label_22e674;
    }
    ctx->pc = 0x22E66Cu;
    {
        const bool branch_taken_0x22e66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E66Cu;
        // 0x22e670: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e66c) {
            ctx->pc = 0x22EBF4u;
            goto label_22ebf4;
        }
    }
    ctx->pc = 0x22E674u;
label_22e674:
    // 0x22e674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e678:
    // 0x22e678: 0xc08c698  jal         func_231A60
label_22e67c:
    if (ctx->pc == 0x22E67Cu) {
        ctx->pc = 0x22E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E678u;
        // 0x22e67c: 0x24140079  addiu       $s4, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E680u;
        goto label_22e680;
    }
    ctx->pc = 0x22E678u;
    SET_GPR_U32(ctx, 31, 0x22E680u);
    ctx->pc = 0x22E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E678u;
    // 0x22e67c: 0x24140079  addiu       $s4, $zero, 0x79 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E678u, 0x22E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E680u;
label_22e680:
    // 0x22e680: 0x1000015c  b           . + 4 + (0x15C << 2)
label_22e684:
    if (ctx->pc == 0x22E684u) {
        ctx->pc = 0x22E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E680u;
        // 0x22e684: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E688u;
        goto label_22e688;
    }
    ctx->pc = 0x22E680u;
    {
        const bool branch_taken_0x22e680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E680u;
        // 0x22e684: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e680) {
            ctx->pc = 0x22EBF4u;
            goto label_22ebf4;
        }
    }
    ctx->pc = 0x22E688u;
label_22e688:
    // 0x22e688: 0xc08c698  jal         func_231A60
label_22e68c:
    if (ctx->pc == 0x22E68Cu) {
        ctx->pc = 0x22E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E688u;
        // 0x22e68c: 0x2414000b  addiu       $s4, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E690u;
        goto label_22e690;
    }
    ctx->pc = 0x22E688u;
    SET_GPR_U32(ctx, 31, 0x22E690u);
    ctx->pc = 0x22E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E688u;
    // 0x22e68c: 0x2414000b  addiu       $s4, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E688u, 0x22E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E690u;
label_22e690:
    // 0x22e690: 0x10000158  b           . + 4 + (0x158 << 2)
label_22e694:
    if (ctx->pc == 0x22E694u) {
        ctx->pc = 0x22E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E690u;
        // 0x22e694: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E698u;
        goto label_22e698;
    }
    ctx->pc = 0x22E690u;
    {
        const bool branch_taken_0x22e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E690u;
        // 0x22e694: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e690) {
            ctx->pc = 0x22EBF4u;
            goto label_22ebf4;
        }
    }
    ctx->pc = 0x22E698u;
label_22e698:
    // 0x22e698: 0x10000155  b           . + 4 + (0x155 << 2)
label_22e69c:
    if (ctx->pc == 0x22E69Cu) {
        ctx->pc = 0x22E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E698u;
        // 0x22e69c: 0x24140069  addiu       $s4, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6A0u;
        goto label_22e6a0;
    }
    ctx->pc = 0x22E698u;
    {
        const bool branch_taken_0x22e698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E698u;
        // 0x22e69c: 0x24140069  addiu       $s4, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e698) {
            ctx->pc = 0x22EBF0u;
            goto label_22ebf0;
        }
    }
    ctx->pc = 0x22E6A0u;
label_22e6a0:
    // 0x22e6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e6a4:
    // 0x22e6a4: 0xc08c698  jal         func_231A60
label_22e6a8:
    if (ctx->pc == 0x22E6A8u) {
        ctx->pc = 0x22E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6A4u;
        // 0x22e6a8: 0x24140020  addiu       $s4, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6ACu;
        goto label_22e6ac;
    }
    ctx->pc = 0x22E6A4u;
    SET_GPR_U32(ctx, 31, 0x22E6ACu);
    ctx->pc = 0x22E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E6A4u;
    // 0x22e6a8: 0x24140020  addiu       $s4, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E6A4u, 0x22E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6ACu;
label_22e6ac:
    // 0x22e6ac: 0x10000151  b           . + 4 + (0x151 << 2)
label_22e6b0:
    if (ctx->pc == 0x22E6B0u) {
        ctx->pc = 0x22E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6ACu;
        // 0x22e6b0: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6B4u;
        goto label_22e6b4;
    }
    ctx->pc = 0x22E6ACu;
    {
        const bool branch_taken_0x22e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6ACu;
        // 0x22e6b0: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6ac) {
            ctx->pc = 0x22EBF4u;
            goto label_22ebf4;
        }
    }
    ctx->pc = 0x22E6B4u;
label_22e6b4:
    // 0x22e6b4: 0xa64200b0  sh          $v0, 0xB0($s2)
    ctx->pc = 0x22e6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 176), (uint16_t)GPR_U32(ctx, 2));
label_22e6b8:
    // 0x22e6b8: 0xc08c682  jal         func_231A08
label_22e6bc:
    if (ctx->pc == 0x22E6BCu) {
        ctx->pc = 0x22E6C0u;
        goto label_22e6c0;
    }
    ctx->pc = 0x22E6B8u;
    SET_GPR_U32(ctx, 31, 0x22E6C0u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22E6B8u, 0x22E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6C0u;
label_22e6c0:
    // 0x22e6c0: 0x96470006  lhu         $a3, 0x6($s2)
    ctx->pc = 0x22e6c0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_22e6c4:
    // 0x22e6c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e6c8:
    // 0x22e6c8: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x22e6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
label_22e6cc:
    // 0x22e6cc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_22e6d0:
    if (ctx->pc == 0x22E6D0u) {
        ctx->pc = 0x22E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6CCu;
        // 0x22e6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6D4u;
        goto label_22e6d4;
    }
    ctx->pc = 0x22E6CCu;
    {
        const bool branch_taken_0x22e6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6CCu;
        // 0x22e6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6cc) {
            ctx->pc = 0x22E6A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e6a4;
        }
    }
    ctx->pc = 0x22E6D4u;
label_22e6d4:
    // 0x22e6d4: 0x96420038  lhu         $v0, 0x38($s2)
    ctx->pc = 0x22e6d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_22e6d8:
    // 0x22e6d8: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_22e6dc:
    if (ctx->pc == 0x22E6DCu) {
        ctx->pc = 0x22E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6D8u;
        // 0x22e6dc: 0x30e20002  andi        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6E0u;
        goto label_22e6e0;
    }
    ctx->pc = 0x22E6D8u;
    {
        const bool branch_taken_0x22e6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6D8u;
        // 0x22e6dc: 0x30e20002  andi        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6d8) {
            ctx->pc = 0x22E65Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e65c;
        }
    }
    ctx->pc = 0x22E6E0u;
label_22e6e0:
    // 0x22e6e0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_22e6e4:
    if (ctx->pc == 0x22E6E4u) {
        ctx->pc = 0x22E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6E0u;
        // 0x22e6e4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6E8u;
        goto label_22e6e8;
    }
    ctx->pc = 0x22E6E0u;
    {
        const bool branch_taken_0x22e6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6E0u;
        // 0x22e6e4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6e0) {
            ctx->pc = 0x22E734u;
            goto label_22e734;
        }
    }
    ctx->pc = 0x22E6E8u;
label_22e6e8:
    // 0x22e6e8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22e6ec:
    // 0x22e6ec: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x22e6ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22e6f0:
    // 0x22e6f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22e6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_22e6f4:
    // 0x22e6f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_22e6f8:
    if (ctx->pc == 0x22E6F8u) {
        ctx->pc = 0x22E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6F4u;
        // 0x22e6f8: 0x30e20200  andi        $v0, $a3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E6FCu;
        goto label_22e6fc;
    }
    ctx->pc = 0x22E6F4u;
    {
        const bool branch_taken_0x22e6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6F4u;
        // 0x22e6f8: 0x30e20200  andi        $v0, $a3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6f4) {
            ctx->pc = 0x22E728u;
            goto label_22e728;
        }
    }
    ctx->pc = 0x22E6FCu;
label_22e6fc:
    // 0x22e6fc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_22e700:
    if (ctx->pc == 0x22E700u) {
        ctx->pc = 0x22E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6FCu;
        // 0x22e700: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E704u;
        goto label_22e704;
    }
    ctx->pc = 0x22E6FCu;
    {
        const bool branch_taken_0x22e6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e6fc) {
            ctx->pc = 0x22E700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E6FCu;
            // 0x22e700: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E734u;
            goto label_22e734;
        }
    }
    ctx->pc = 0x22E704u;
label_22e704:
    // 0x22e704: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
label_22e708:
    if (ctx->pc == 0x22E708u) {
        ctx->pc = 0x22E70Cu;
        goto label_22e70c;
    }
    ctx->pc = 0x22E704u;
    {
        const bool branch_taken_0x22e704 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e704) {
            ctx->pc = 0x22E718u;
            goto label_22e718;
        }
    }
    ctx->pc = 0x22E70Cu;
label_22e70c:
    // 0x22e70c: 0x16e00009  bnez        $s7, . + 4 + (0x9 << 2)
label_22e710:
    if (ctx->pc == 0x22E710u) {
        ctx->pc = 0x22E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E70Cu;
        // 0x22e710: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E714u;
        goto label_22e714;
    }
    ctx->pc = 0x22E70Cu;
    {
        const bool branch_taken_0x22e70c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E70Cu;
        // 0x22e710: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e70c) {
            ctx->pc = 0x22E734u;
            goto label_22e734;
        }
    }
    ctx->pc = 0x22E714u;
label_22e714:
    // 0x22e714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e718:
    // 0x22e718: 0xc08c698  jal         func_231A60
label_22e71c:
    if (ctx->pc == 0x22E71Cu) {
        ctx->pc = 0x22E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E718u;
        // 0x22e71c: 0x24140080  addiu       $s4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E720u;
        goto label_22e720;
    }
    ctx->pc = 0x22E718u;
    SET_GPR_U32(ctx, 31, 0x22E720u);
    ctx->pc = 0x22E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E718u;
    // 0x22e71c: 0x24140080  addiu       $s4, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E718u, 0x22E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E720u;
label_22e720:
    // 0x22e720: 0x10000134  b           . + 4 + (0x134 << 2)
label_22e724:
    if (ctx->pc == 0x22E724u) {
        ctx->pc = 0x22E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E720u;
        // 0x22e724: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E728u;
        goto label_22e728;
    }
    ctx->pc = 0x22E720u;
    {
        const bool branch_taken_0x22e720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E720u;
        // 0x22e724: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e720) {
            ctx->pc = 0x22EBF4u;
            goto label_22ebf4;
        }
    }
    ctx->pc = 0x22E728u;
label_22e728:
    // 0x22e728: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x22e728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_22e72c:
    // 0x22e72c: 0x1080ffd1  beqz        $a0, . + 4 + (-0x2F << 2)
label_22e730:
    if (ctx->pc == 0x22E730u) {
        ctx->pc = 0x22E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E72Cu;
        // 0x22e730: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E734u;
        goto label_22e734;
    }
    ctx->pc = 0x22E72Cu;
    {
        const bool branch_taken_0x22e72c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E72Cu;
        // 0x22e730: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e72c) {
            ctx->pc = 0x22E674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e674;
        }
    }
    ctx->pc = 0x22E734u;
label_22e734:
    // 0x22e734: 0xde460088  ld          $a2, 0x88($s2)
    ctx->pc = 0x22e734u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 136)));
label_22e738:
    // 0x22e738: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22e73c:
    // 0x22e73c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x22e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_22e740:
    // 0x22e740: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x22e740u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
label_22e744:
    // 0x22e744: 0xde450080  ld          $a1, 0x80($s2)
    ctx->pc = 0x22e744u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 128)));
label_22e748:
    // 0x22e748: 0xde440098  ld          $a0, 0x98($s2)
    ctx->pc = 0x22e748u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 152)));
label_22e74c:
    // 0x22e74c: 0xc5282f  dsubu       $a1, $a2, $a1
    ctx->pc = 0x22e74cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
label_22e750:
    // 0x22e750: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x22e750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
label_22e754:
    // 0x22e754: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x22e754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_22e758:
    // 0x22e758: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x22e758u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_22e75c:
    // 0x22e75c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x22e75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_22e760:
    // 0x22e760: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x22e760u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_22e764:
    // 0x22e764: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x22e764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_22e768:
    // 0x22e768: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22e768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e76c:
    // 0x22e76c: 0xa2980b  movn        $s3, $a1, $v0
    ctx->pc = 0x22e76cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
label_22e770:
    // 0x22e770: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_22e774:
    // 0x22e774: 0x66630400  daddiu      $v1, $s3, 0x400
    ctx->pc = 0x22e774u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)1024);
label_22e778:
    // 0x22e778: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x22e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_22e77c:
    // 0x22e77c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22e780:
    if (ctx->pc == 0x22E780u) {
        ctx->pc = 0x22E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E77Cu;
        // 0x22e780: 0x64980b  movn        $s3, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E784u;
        goto label_22e784;
    }
    ctx->pc = 0x22E77Cu;
    {
        const bool branch_taken_0x22e77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E77Cu;
        // 0x22e780: 0x64980b  movn        $s3, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e77c) {
            ctx->pc = 0x22E790u;
            goto label_22e790;
        }
    }
    ctx->pc = 0x22E784u;
label_22e784:
    // 0x22e784: 0xd5102b  sltu        $v0, $a2, $s5
    ctx->pc = 0x22e784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_22e788:
    // 0x22e788: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_22e78c:
    if (ctx->pc == 0x22E78Cu) {
        ctx->pc = 0x22E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E788u;
        // 0x22e78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E790u;
        goto label_22e790;
    }
    ctx->pc = 0x22E788u;
    {
        const bool branch_taken_0x22e788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e788) {
            ctx->pc = 0x22E78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E788u;
            // 0x22e78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E7A0u;
            goto label_22e7a0;
        }
    }
    ctx->pc = 0x22E790u;
label_22e790:
    // 0x22e790: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x22e790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_22e794:
    // 0x22e794: 0xd0102b  sltu        $v0, $a2, $s0
    ctx->pc = 0x22e794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_22e798:
    // 0x22e798: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22e79c:
    if (ctx->pc == 0x22E79Cu) {
        ctx->pc = 0x22E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E798u;
        // 0x22e79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7A0u;
        goto label_22e7a0;
    }
    ctx->pc = 0x22E798u;
    {
        const bool branch_taken_0x22e798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E798u;
        // 0x22e79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e798) {
            ctx->pc = 0x22E7B0u;
            goto label_22e7b0;
        }
    }
    ctx->pc = 0x22E7A0u;
label_22e7a0:
    // 0x22e7a0: 0xc08c698  jal         func_231A60
label_22e7a4:
    if (ctx->pc == 0x22E7A4u) {
        ctx->pc = 0x22E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7A0u;
        // 0x22e7a4: 0x2414007a  addiu       $s4, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7A8u;
        goto label_22e7a8;
    }
    ctx->pc = 0x22E7A0u;
    SET_GPR_U32(ctx, 31, 0x22E7A8u);
    ctx->pc = 0x22E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7A0u;
    // 0x22e7a4: 0x2414007a  addiu       $s4, $zero, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E7A0u, 0x22E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7A8u;
label_22e7a8:
    // 0x22e7a8: 0x10000112  b           . + 4 + (0x112 << 2)
label_22e7ac:
    if (ctx->pc == 0x22E7ACu) {
        ctx->pc = 0x22E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7A8u;
        // 0x22e7ac: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7B0u;
        goto label_22e7b0;
    }
    ctx->pc = 0x22E7A8u;
    {
        const bool branch_taken_0x22e7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7A8u;
        // 0x22e7ac: 0x964200b0  lhu         $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7a8) {
            ctx->pc = 0x22EBF4u;
            goto label_22ebf4;
        }
    }
    ctx->pc = 0x22E7B0u;
label_22e7b0:
    // 0x22e7b0: 0x2b0102d  daddu       $v0, $s5, $s0
    ctx->pc = 0x22e7b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 16));
label_22e7b4:
    // 0x22e7b4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x22e7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22e7b8:
    // 0x22e7b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_22e7bc:
    if (ctx->pc == 0x22E7BCu) {
        ctx->pc = 0x22E7C0u;
        goto label_22e7c0;
    }
    ctx->pc = 0x22E7B8u;
    {
        const bool branch_taken_0x22e7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e7b8) {
            ctx->pc = 0x22E840u;
            goto label_22e840;
        }
    }
    ctx->pc = 0x22E7C0u;
label_22e7c0:
    // 0x22e7c0: 0x13c0001e  beqz        $fp, . + 4 + (0x1E << 2)
label_22e7c4:
    if (ctx->pc == 0x22E7C4u) {
        ctx->pc = 0x22E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7C0u;
        // 0x22e7c4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7C8u;
        goto label_22e7c8;
    }
    ctx->pc = 0x22E7C0u;
    {
        const bool branch_taken_0x22e7c0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7C0u;
        // 0x22e7c4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7c0) {
            ctx->pc = 0x22E83Cu;
            goto label_22e83c;
        }
    }
    ctx->pc = 0x22E7C8u;
label_22e7c8:
    // 0x22e7c8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_22e7cc:
    if (ctx->pc == 0x22E7CCu) {
        ctx->pc = 0x22E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7C8u;
        // 0x22e7cc: 0x30e20080  andi        $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7D0u;
        goto label_22e7d0;
    }
    ctx->pc = 0x22E7C8u;
    {
        const bool branch_taken_0x22e7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7C8u;
        // 0x22e7cc: 0x30e20080  andi        $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7c8) {
            ctx->pc = 0x22E7ECu;
            goto label_22e7ec;
        }
    }
    ctx->pc = 0x22E7D0u;
label_22e7d0:
    // 0x22e7d0: 0xde4200a0  ld          $v0, 0xA0($s2)
    ctx->pc = 0x22e7d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 160)));
label_22e7d4:
    // 0x22e7d4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x22e7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22e7d8:
    // 0x22e7d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_22e7dc:
    if (ctx->pc == 0x22E7DCu) {
        ctx->pc = 0x22E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7D8u;
        // 0x22e7dc: 0x30e20080  andi        $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7E0u;
        goto label_22e7e0;
    }
    ctx->pc = 0x22E7D8u;
    {
        const bool branch_taken_0x22e7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7D8u;
        // 0x22e7dc: 0x30e20080  andi        $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7d8) {
            ctx->pc = 0x22E7ECu;
            goto label_22e7ec;
        }
    }
    ctx->pc = 0x22E7E0u;
label_22e7e0:
    // 0x22e7e0: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x22e7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_22e7e4:
    // 0x22e7e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_22e7e8:
    if (ctx->pc == 0x22E7E8u) {
        ctx->pc = 0x22E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7E4u;
        // 0x22e7e8: 0x30e20080  andi        $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7ECu;
        goto label_22e7ec;
    }
    ctx->pc = 0x22E7E4u;
    {
        const bool branch_taken_0x22e7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7E4u;
        // 0x22e7e8: 0x30e20080  andi        $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7e4) {
            ctx->pc = 0x22E83Cu;
            goto label_22e83c;
        }
    }
    ctx->pc = 0x22E7ECu;
label_22e7ec:
    // 0x22e7ec: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
label_22e7f0:
    if (ctx->pc == 0x22E7F0u) {
        ctx->pc = 0x22E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7ECu;
        // 0x22e7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E7F4u;
        goto label_22e7f4;
    }
    ctx->pc = 0x22E7ECu;
    {
        const bool branch_taken_0x22e7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7ECu;
        // 0x22e7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7ec) {
            ctx->pc = 0x22E688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e688;
        }
    }
    ctx->pc = 0x22E7F4u;
label_22e7f4:
    // 0x22e7f4: 0x964200b0  lhu         $v0, 0xB0($s2)
    ctx->pc = 0x22e7f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
label_22e7f8:
    // 0x22e7f8: 0x3043fffe  andi        $v1, $v0, 0xFFFE
    ctx->pc = 0x22e7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_22e7fc:
    // 0x22e7fc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22e7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_22e800:
    // 0x22e800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22e804:
    if (ctx->pc == 0x22E804u) {
        ctx->pc = 0x22E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E800u;
        // 0x22e804: 0xa64300b0  sh          $v1, 0xB0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 176), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E808u;
        goto label_22e808;
    }
    ctx->pc = 0x22E800u;
    {
        const bool branch_taken_0x22e800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E800u;
        // 0x22e804: 0xa64300b0  sh          $v1, 0xB0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 176), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e800) {
            ctx->pc = 0x22E818u;
            goto label_22e818;
        }
    }
    ctx->pc = 0x22E808u;
label_22e808:
    // 0x22e808: 0x3062fffc  andi        $v0, $v1, 0xFFFC
    ctx->pc = 0x22e808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65532);
label_22e80c:
    // 0x22e80c: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x22e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_22e810:
    // 0x22e810: 0xc08b6f0  jal         func_22DBC0
label_22e814:
    if (ctx->pc == 0x22E814u) {
        ctx->pc = 0x22E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E810u;
        // 0x22e814: 0xa64200b0  sh          $v0, 0xB0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 176), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E818u;
        goto label_22e818;
    }
    ctx->pc = 0x22E810u;
    SET_GPR_U32(ctx, 31, 0x22E818u);
    ctx->pc = 0x22E814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E810u;
    // 0x22e814: 0xa64200b0  sh          $v0, 0xB0($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 176), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBC0u, 0x22E810u, 0x22E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E818u;
label_22e818:
    // 0x22e818: 0xc08c212  jal         func_230848
label_22e81c:
    if (ctx->pc == 0x22E81Cu) {
        ctx->pc = 0x22E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E818u;
        // 0x22e81c: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E820u;
        goto label_22e820;
    }
    ctx->pc = 0x22E818u;
    SET_GPR_U32(ctx, 31, 0x22E820u);
    ctx->pc = 0x22E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E818u;
    // 0x22e81c: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230848u, 0x22E818u, 0x22E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E820u;
label_22e820:
    // 0x22e820: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22e820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e824:
    // 0x22e824: 0xc08c698  jal         func_231A60
label_22e828:
    if (ctx->pc == 0x22E828u) {
        ctx->pc = 0x22E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E824u;
        // 0x22e828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E82Cu;
        goto label_22e82c;
    }
    ctx->pc = 0x22E824u;
    SET_GPR_U32(ctx, 31, 0x22E82Cu);
    ctx->pc = 0x22E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E824u;
    // 0x22e828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E824u, 0x22E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E82Cu;
label_22e82c:
    // 0x22e82c: 0x168000fa  bnez        $s4, . + 4 + (0xFA << 2)
label_22e830:
    if (ctx->pc == 0x22E830u) {
        ctx->pc = 0x22E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E82Cu;
        // 0x22e830: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E834u;
        goto label_22e834;
    }
    ctx->pc = 0x22E82Cu;
    {
        const bool branch_taken_0x22e82c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E82Cu;
        // 0x22e830: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e82c) {
            ctx->pc = 0x22EC18u;
            goto label_22ec18;
        }
    }
    ctx->pc = 0x22E834u;
label_22e834:
    // 0x22e834: 0x1000ff7e  b           . + 4 + (-0x82 << 2)
label_22e838:
    if (ctx->pc == 0x22E838u) {
        ctx->pc = 0x22E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E834u;
        // 0x22e838: 0x964300b0  lhu         $v1, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E83Cu;
        goto label_22e83c;
    }
    ctx->pc = 0x22E834u;
    {
        const bool branch_taken_0x22e834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E834u;
        // 0x22e838: 0x964300b0  lhu         $v1, 0xB0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e834) {
            ctx->pc = 0x22E630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e630;
        }
    }
    ctx->pc = 0x22E83Cu;
label_22e83c:
    // 0x22e83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e840:
    // 0x22e840: 0xc08c698  jal         func_231A60
label_22e844:
    if (ctx->pc == 0x22E844u) {
        ctx->pc = 0x22E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E840u;
        // 0x22e844: 0x270982f  dsubu       $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E848u;
        goto label_22e848;
    }
    ctx->pc = 0x22E840u;
    SET_GPR_U32(ctx, 31, 0x22E848u);
    ctx->pc = 0x22E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E840u;
    // 0x22e844: 0x270982f  dsubu       $s3, $s3, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E840u, 0x22E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E848u;
label_22e848:
    // 0x22e848: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x22e848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_22e84c:
    // 0x22e84c: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x22e84cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22e850:
    // 0x22e850: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x22e850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_22e854:
    // 0x22e854: 0x10000004  b           . + 4 + (0x4 << 2)
label_22e858:
    if (ctx->pc == 0x22E858u) {
        ctx->pc = 0x22E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E854u;
        // 0x22e858: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E85Cu;
        goto label_22e85c;
    }
    ctx->pc = 0x22E854u;
    {
        const bool branch_taken_0x22e854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E854u;
        // 0x22e858: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e854) {
            ctx->pc = 0x22E868u;
            goto label_22e868;
        }
    }
    ctx->pc = 0x22E85Cu;
label_22e85c:
    // 0x22e85c: 0x0  nop
    ctx->pc = 0x22e85cu;
    // NOP
label_22e860:
    // 0x22e860: 0x1a6000e1  blez        $s3, . + 4 + (0xE1 << 2)
label_22e864:
    if (ctx->pc == 0x22E864u) {
        ctx->pc = 0x22E868u;
        goto label_22e868;
    }
    ctx->pc = 0x22E860u;
    {
        const bool branch_taken_0x22e860 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x22e860) {
            ctx->pc = 0x22EBE8u;
            goto label_22ebe8;
        }
    }
    ctx->pc = 0x22E868u;
label_22e868:
    // 0x22e868: 0x57c00015  bnel        $fp, $zero, . + 4 + (0x15 << 2)
label_22e86c:
    if (ctx->pc == 0x22E86Cu) {
        ctx->pc = 0x22E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E868u;
        // 0x22e86c: 0x24170800  addiu       $s7, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E870u;
        goto label_22e870;
    }
    ctx->pc = 0x22E868u;
    {
        const bool branch_taken_0x22e868 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e868) {
            ctx->pc = 0x22E86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E868u;
            // 0x22e86c: 0x24170800  addiu       $s7, $zero, 0x800 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E8C0u;
            goto label_22e8c0;
        }
    }
    ctx->pc = 0x22E870u;
label_22e870:
    // 0x22e870: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x22e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_22e874:
    // 0x22e874: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
label_22e878:
    if (ctx->pc == 0x22E878u) {
        ctx->pc = 0x22E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E874u;
        // 0x22e878: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E87Cu;
        goto label_22e87c;
    }
    ctx->pc = 0x22E874u;
    {
        const bool branch_taken_0x22e874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E874u;
        // 0x22e878: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e874) {
            ctx->pc = 0x22EB34u;
            goto label_22eb34;
        }
    }
    ctx->pc = 0x22E87Cu;
label_22e87c:
    // 0x22e87c: 0x100000aa  b           . + 4 + (0xAA << 2)
label_22e880:
    if (ctx->pc == 0x22E880u) {
        ctx->pc = 0x22E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E87Cu;
        // 0x22e880: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E884u;
        goto label_22e884;
    }
    ctx->pc = 0x22E87Cu;
    {
        const bool branch_taken_0x22e87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E87Cu;
        // 0x22e880: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e87c) {
            ctx->pc = 0x22EB28u;
            goto label_22eb28;
        }
    }
    ctx->pc = 0x22E884u;
label_22e884:
    // 0x22e884: 0x0  nop
    ctx->pc = 0x22e884u;
    // NOP
label_22e888:
    // 0x22e888: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22e888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22e88c:
    // 0x22e88c: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x22e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_22e890:
    // 0x22e890: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x22e890u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
label_22e894:
    // 0x22e894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e898:
    // 0x22e898: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22e898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_22e89c:
    // 0x22e89c: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x22e89cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
label_22e8a0:
    // 0x22e8a0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_22e8a4:
    // 0x22e8a4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_22e8a8:
    // 0x22e8a8: 0x10000015  b           . + 4 + (0x15 << 2)
label_22e8ac:
    if (ctx->pc == 0x22E8ACu) {
        ctx->pc = 0x22E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8A8u;
        // 0x22e8ac: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8B0u;
        goto label_22e8b0;
    }
    ctx->pc = 0x22E8A8u;
    {
        const bool branch_taken_0x22e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8A8u;
        // 0x22e8ac: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8a8) {
            ctx->pc = 0x22E900u;
            goto label_22e900;
        }
    }
    ctx->pc = 0x22E8B0u;
label_22e8b0:
    // 0x22e8b0: 0x1a6000a0  blez        $s3, . + 4 + (0xA0 << 2)
label_22e8b4:
    if (ctx->pc == 0x22E8B4u) {
        ctx->pc = 0x22E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8B0u;
        // 0x22e8b4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8B8u;
        goto label_22e8b8;
    }
    ctx->pc = 0x22E8B0u;
    {
        const bool branch_taken_0x22e8b0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x22E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8B0u;
        // 0x22e8b4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8b0) {
            ctx->pc = 0x22EB34u;
            goto label_22eb34;
        }
    }
    ctx->pc = 0x22E8B8u;
label_22e8b8:
    // 0x22e8b8: 0x1080009e  beqz        $a0, . + 4 + (0x9E << 2)
label_22e8bc:
    if (ctx->pc == 0x22E8BCu) {
        ctx->pc = 0x22E8C0u;
        goto label_22e8c0;
    }
    ctx->pc = 0x22E8B8u;
    {
        const bool branch_taken_0x22e8b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8b8) {
            ctx->pc = 0x22EB34u;
            goto label_22eb34;
        }
    }
    ctx->pc = 0x22E8C0u;
label_22e8c0:
    // 0x22e8c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22e8c4:
    // 0x22e8c4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_22e8c8:
    if (ctx->pc == 0x22E8C8u) {
        ctx->pc = 0x22E8CCu;
        goto label_22e8cc;
    }
    ctx->pc = 0x22E8C4u;
    {
        const bool branch_taken_0x22e8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e8c4) {
            ctx->pc = 0x22E934u;
            goto label_22e934;
        }
    }
    ctx->pc = 0x22E8CCu;
label_22e8cc:
    // 0x22e8cc: 0xc08c682  jal         func_231A08
label_22e8d0:
    if (ctx->pc == 0x22E8D0u) {
        ctx->pc = 0x22E8D4u;
        goto label_22e8d4;
    }
    ctx->pc = 0x22E8CCu;
    SET_GPR_U32(ctx, 31, 0x22E8D4u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22E8CCu, 0x22E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8D4u;
label_22e8d4:
    // 0x22e8d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e8d8:
    // 0x22e8d8: 0xc098552  jal         func_261548
label_22e8dc:
    if (ctx->pc == 0x22E8DCu) {
        ctx->pc = 0x22E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8D8u;
        // 0x22e8dc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8E0u;
        goto label_22e8e0;
    }
    ctx->pc = 0x22E8D8u;
    SET_GPR_U32(ctx, 31, 0x22E8E0u);
    ctx->pc = 0x22E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8D8u;
    // 0x22e8dc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22E8D8u, 0x22E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8E0u;
label_22e8e0:
    // 0x22e8e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e8e4:
    // 0x22e8e4: 0xc08c698  jal         func_231A60
label_22e8e8:
    if (ctx->pc == 0x22E8E8u) {
        ctx->pc = 0x22E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8E4u;
        // 0x22e8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8ECu;
        goto label_22e8ec;
    }
    ctx->pc = 0x22E8E4u;
    SET_GPR_U32(ctx, 31, 0x22E8ECu);
    ctx->pc = 0x22E8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8E4u;
    // 0x22e8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E8E4u, 0x22E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8ECu;
label_22e8ec:
    // 0x22e8ec: 0x1620ffe6  bnez        $s1, . + 4 + (-0x1A << 2)
label_22e8f0:
    if (ctx->pc == 0x22E8F0u) {
        ctx->pc = 0x22E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8ECu;
        // 0x22e8f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8F4u;
        goto label_22e8f4;
    }
    ctx->pc = 0x22E8ECu;
    {
        const bool branch_taken_0x22e8ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8ECu;
        // 0x22e8f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8ec) {
            ctx->pc = 0x22E888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e888;
        }
    }
    ctx->pc = 0x22E8F4u;
label_22e8f4:
    // 0x22e8f4: 0xc08a8cc  jal         func_22A330
label_22e8f8:
    if (ctx->pc == 0x22E8F8u) {
        ctx->pc = 0x22E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8F4u;
        // 0x22e8f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E8FCu;
        goto label_22e8fc;
    }
    ctx->pc = 0x22E8F4u;
    SET_GPR_U32(ctx, 31, 0x22E8FCu);
    ctx->pc = 0x22E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E8F4u;
    // 0x22e8f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x22E8F4u, 0x22E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8FCu;
label_22e8fc:
    // 0x22e8fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e900:
    // 0x22e900: 0x1220ff65  beqz        $s1, . + 4 + (-0x9B << 2)
label_22e904:
    if (ctx->pc == 0x22E904u) {
        ctx->pc = 0x22E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E900u;
        // 0x22e904: 0x241400e0  addiu       $s4, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E908u;
        goto label_22e908;
    }
    ctx->pc = 0x22E900u;
    {
        const bool branch_taken_0x22e900 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E900u;
        // 0x22e904: 0x241400e0  addiu       $s4, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e900) {
            ctx->pc = 0x22E698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e698;
        }
    }
    ctx->pc = 0x22E908u;
label_22e908:
    // 0x22e908: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x22e908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_22e90c:
    // 0x22e90c: 0x10000018  b           . + 4 + (0x18 << 2)
label_22e910:
    if (ctx->pc == 0x22E910u) {
        ctx->pc = 0x22E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E90Cu;
        // 0x22e910: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E914u;
        goto label_22e914;
    }
    ctx->pc = 0x22E90Cu;
    {
        const bool branch_taken_0x22e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E90Cu;
        // 0x22e910: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e90c) {
            ctx->pc = 0x22E970u;
            goto label_22e970;
        }
    }
    ctx->pc = 0x22E914u;
label_22e914:
    // 0x22e914: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x22e914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_22e918:
    // 0x22e918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e91c:
    // 0x22e91c: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x22e91cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
label_22e920:
    // 0x22e920: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22e920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_22e924:
    // 0x22e924: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22e924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_22e928:
    // 0x22e928: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22e928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_22e92c:
    // 0x22e92c: 0x1000000e  b           . + 4 + (0xE << 2)
label_22e930:
    if (ctx->pc == 0x22E930u) {
        ctx->pc = 0x22E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E92Cu;
        // 0x22e930: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E934u;
        goto label_22e934;
    }
    ctx->pc = 0x22E92Cu;
    {
        const bool branch_taken_0x22e92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E92Cu;
        // 0x22e930: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e92c) {
            ctx->pc = 0x22E968u;
            goto label_22e968;
        }
    }
    ctx->pc = 0x22E934u;
label_22e934:
    // 0x22e934: 0xc08c682  jal         func_231A08
label_22e938:
    if (ctx->pc == 0x22E938u) {
        ctx->pc = 0x22E93Cu;
        goto label_22e93c;
    }
    ctx->pc = 0x22E934u;
    SET_GPR_U32(ctx, 31, 0x22E93Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22E934u, 0x22E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E93Cu;
label_22e93c:
    // 0x22e93c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e940:
    // 0x22e940: 0xc098552  jal         func_261548
label_22e944:
    if (ctx->pc == 0x22E944u) {
        ctx->pc = 0x22E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E940u;
        // 0x22e944: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E948u;
        goto label_22e948;
    }
    ctx->pc = 0x22E940u;
    SET_GPR_U32(ctx, 31, 0x22E948u);
    ctx->pc = 0x22E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E940u;
    // 0x22e944: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22E940u, 0x22E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E948u;
label_22e948:
    // 0x22e948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e94c:
    // 0x22e94c: 0xc08c698  jal         func_231A60
label_22e950:
    if (ctx->pc == 0x22E950u) {
        ctx->pc = 0x22E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E94Cu;
        // 0x22e950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E954u;
        goto label_22e954;
    }
    ctx->pc = 0x22E94Cu;
    SET_GPR_U32(ctx, 31, 0x22E954u);
    ctx->pc = 0x22E950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E94Cu;
    // 0x22e950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E94Cu, 0x22E954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E954u;
label_22e954:
    // 0x22e954: 0x1620ffef  bnez        $s1, . + 4 + (-0x11 << 2)
label_22e958:
    if (ctx->pc == 0x22E958u) {
        ctx->pc = 0x22E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E954u;
        // 0x22e958: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E95Cu;
        goto label_22e95c;
    }
    ctx->pc = 0x22E954u;
    {
        const bool branch_taken_0x22e954 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E954u;
        // 0x22e958: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e954) {
            ctx->pc = 0x22E914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e914;
        }
    }
    ctx->pc = 0x22E95Cu;
label_22e95c:
    // 0x22e95c: 0xc08a8ae  jal         func_22A2B8
label_22e960:
    if (ctx->pc == 0x22E960u) {
        ctx->pc = 0x22E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E95Cu;
        // 0x22e960: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E964u;
        goto label_22e964;
    }
    ctx->pc = 0x22E95Cu;
    SET_GPR_U32(ctx, 31, 0x22E964u);
    ctx->pc = 0x22E960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E95Cu;
    // 0x22e960: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2B8u, 0x22E95Cu, 0x22E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E964u;
label_22e964:
    // 0x22e964: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e968:
    // 0x22e968: 0x1220ff4b  beqz        $s1, . + 4 + (-0xB5 << 2)
label_22e96c:
    if (ctx->pc == 0x22E96Cu) {
        ctx->pc = 0x22E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E968u;
        // 0x22e96c: 0x241400ec  addiu       $s4, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E970u;
        goto label_22e970;
    }
    ctx->pc = 0x22E968u;
    {
        const bool branch_taken_0x22e968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E968u;
        // 0x22e96c: 0x241400ec  addiu       $s4, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e968) {
            ctx->pc = 0x22E698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e698;
        }
    }
    ctx->pc = 0x22E970u;
label_22e970:
    // 0x22e970: 0x2aa201cd  slti        $v0, $s5, 0x1CD
    ctx->pc = 0x22e970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)461) ? 1 : 0);
label_22e974:
    // 0x22e974: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_22e978:
    if (ctx->pc == 0x22E978u) {
        ctx->pc = 0x22E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E974u;
        // 0x22e978: 0x2a620800  slti        $v0, $s3, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E97Cu;
        goto label_22e97c;
    }
    ctx->pc = 0x22E974u;
    {
        const bool branch_taken_0x22e974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E974u;
        // 0x22e978: 0x2a620800  slti        $v0, $s3, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e974) {
            ctx->pc = 0x22EA64u;
            goto label_22ea64;
        }
    }
    ctx->pc = 0x22E97Cu;
label_22e97c:
    // 0x22e97c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_22e980:
    if (ctx->pc == 0x22E980u) {
        ctx->pc = 0x22E984u;
        goto label_22e984;
    }
    ctx->pc = 0x22E97Cu;
    {
        const bool branch_taken_0x22e97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e97c) {
            ctx->pc = 0x22EA64u;
            goto label_22ea64;
        }
    }
    ctx->pc = 0x22E984u;
label_22e984:
    // 0x22e984: 0xc08c682  jal         func_231A08
label_22e988:
    if (ctx->pc == 0x22E988u) {
        ctx->pc = 0x22E98Cu;
        goto label_22e98c;
    }
    ctx->pc = 0x22E984u;
    SET_GPR_U32(ctx, 31, 0x22E98Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22E984u, 0x22E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E98Cu;
label_22e98c:
    // 0x22e98c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e990:
    // 0x22e990: 0xc098552  jal         func_261548
label_22e994:
    if (ctx->pc == 0x22E994u) {
        ctx->pc = 0x22E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E990u;
        // 0x22e994: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E998u;
        goto label_22e998;
    }
    ctx->pc = 0x22E990u;
    SET_GPR_U32(ctx, 31, 0x22E998u);
    ctx->pc = 0x22E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E990u;
    // 0x22e994: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22E990u, 0x22E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E998u;
label_22e998:
    // 0x22e998: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22e99c:
    if (ctx->pc == 0x22E99Cu) {
        ctx->pc = 0x22E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E998u;
        // 0x22e99c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9A0u;
        goto label_22e9a0;
    }
    ctx->pc = 0x22E998u;
    {
        const bool branch_taken_0x22e998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E998u;
        // 0x22e99c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e998) {
            ctx->pc = 0x22E9B8u;
            goto label_22e9b8;
        }
    }
    ctx->pc = 0x22E9A0u;
label_22e9a0:
    // 0x22e9a0: 0xc08a8ec  jal         func_22A3B0
label_22e9a4:
    if (ctx->pc == 0x22E9A4u) {
        ctx->pc = 0x22E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9A0u;
        // 0x22e9a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9A8u;
        goto label_22e9a8;
    }
    ctx->pc = 0x22E9A0u;
    SET_GPR_U32(ctx, 31, 0x22E9A8u);
    ctx->pc = 0x22E9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9A0u;
    // 0x22e9a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3B0u, 0x22E9A0u, 0x22E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9A8u;
label_22e9a8:
    // 0x22e9a8: 0xc098552  jal         func_261548
label_22e9ac:
    if (ctx->pc == 0x22E9ACu) {
        ctx->pc = 0x22E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9A8u;
        // 0x22e9ac: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9B0u;
        goto label_22e9b0;
    }
    ctx->pc = 0x22E9A8u;
    SET_GPR_U32(ctx, 31, 0x22E9B0u);
    ctx->pc = 0x22E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9A8u;
    // 0x22e9ac: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22E9A8u, 0x22E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9B0u;
label_22e9b0:
    // 0x22e9b0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x22e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_22e9b4:
    // 0x22e9b4: 0x0  nop
    ctx->pc = 0x22e9b4u;
    // NOP
label_22e9b8:
    // 0x22e9b8: 0xc08c698  jal         func_231A60
label_22e9bc:
    if (ctx->pc == 0x22E9BCu) {
        ctx->pc = 0x22E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9B8u;
        // 0x22e9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9C0u;
        goto label_22e9c0;
    }
    ctx->pc = 0x22E9B8u;
    SET_GPR_U32(ctx, 31, 0x22E9C0u);
    ctx->pc = 0x22E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9B8u;
    // 0x22e9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E9B8u, 0x22E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9C0u;
label_22e9c0:
    // 0x22e9c0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x22e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22e9c4:
    // 0x22e9c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_22e9c8:
    if (ctx->pc == 0x22E9C8u) {
        ctx->pc = 0x22E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9C4u;
        // 0x22e9c8: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9CCu;
        goto label_22e9cc;
    }
    ctx->pc = 0x22E9C4u;
    {
        const bool branch_taken_0x22e9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9C4u;
        // 0x22e9c8: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9c4) {
            ctx->pc = 0x22E9F0u;
            goto label_22e9f0;
        }
    }
    ctx->pc = 0x22E9CCu;
label_22e9cc:
    // 0x22e9cc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x22e9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_22e9d0:
    // 0x22e9d0: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x22e9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_22e9d4:
    // 0x22e9d4: 0xae37002c  sw          $s7, 0x2C($s1)
    ctx->pc = 0x22e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 23));
label_22e9d8:
    // 0x22e9d8: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x22e9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_22e9dc:
    // 0x22e9dc: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x22e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_22e9e0:
    // 0x22e9e0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x22e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_22e9e4:
    // 0x22e9e4: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x22e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
label_22e9e8:
    // 0x22e9e8: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x22e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_22e9ec:
    // 0x22e9ec: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x22e9ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_22e9f0:
    // 0x22e9f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22e9f4:
    // 0x22e9f4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_22e9f8:
    if (ctx->pc == 0x22E9F8u) {
        ctx->pc = 0x22E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9F4u;
        // 0x22e9f8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E9FCu;
        goto label_22e9fc;
    }
    ctx->pc = 0x22E9F4u;
    {
        const bool branch_taken_0x22e9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9F4u;
        // 0x22e9f8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9f4) {
            ctx->pc = 0x22EA64u;
            goto label_22ea64;
        }
    }
    ctx->pc = 0x22E9FCu;
label_22e9fc:
    // 0x22e9fc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_22ea00:
    if (ctx->pc == 0x22EA00u) {
        ctx->pc = 0x22EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9FCu;
        // 0x22ea00: 0x24140800  addiu       $s4, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA04u;
        goto label_22ea04;
    }
    ctx->pc = 0x22E9FCu;
    {
        const bool branch_taken_0x22e9fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9FCu;
        // 0x22ea00: 0x24140800  addiu       $s4, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9fc) {
            ctx->pc = 0x22EA40u;
            goto label_22ea40;
        }
    }
    ctx->pc = 0x22EA04u;
label_22ea04:
    // 0x22ea04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22ea08:
    // 0x22ea08: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_22ea0c:
    if (ctx->pc == 0x22EA0Cu) {
        ctx->pc = 0x22EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA08u;
        // 0x22ea0c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA10u;
        goto label_22ea10;
    }
    ctx->pc = 0x22EA08u;
    {
        const bool branch_taken_0x22ea08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA08u;
        // 0x22ea0c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea08) {
            ctx->pc = 0x22EA40u;
            goto label_22ea40;
        }
    }
    ctx->pc = 0x22EA10u;
label_22ea10:
    // 0x22ea10: 0x15303c  dsll32      $a2, $s5, 0
    ctx->pc = 0x22ea10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 0));
label_22ea14:
    // 0x22ea14: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x22ea14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_22ea18:
    // 0x22ea18: 0x8c45f9f0  lw          $a1, -0x610($v0)
    ctx->pc = 0x22ea18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965744)));
label_22ea1c:
    // 0x22ea1c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x22ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22ea20:
    // 0x22ea20: 0x2851023  subu        $v0, $s4, $a1
    ctx->pc = 0x22ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_22ea24:
    // 0x22ea24: 0x46202b  sltu        $a0, $v0, $a2
    ctx->pc = 0x22ea24u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_22ea28:
    // 0x22ea28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22ea2c:
    // 0x22ea2c: 0xc4100a  movz        $v0, $a2, $a0
    ctx->pc = 0x22ea2cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_22ea30:
    // 0x22ea30: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x22ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_22ea34:
    // 0x22ea34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22ea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_22ea38:
    // 0x22ea38: 0x10000008  b           . + 4 + (0x8 << 2)
label_22ea3c:
    if (ctx->pc == 0x22EA3Cu) {
        ctx->pc = 0x22EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA38u;
        // 0x22ea3c: 0x2803e  dsrl32      $s0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA40u;
        goto label_22ea40;
    }
    ctx->pc = 0x22EA38u;
    {
        const bool branch_taken_0x22ea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA38u;
        // 0x22ea3c: 0x2803e  dsrl32      $s0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea38) {
            ctx->pc = 0x22EA5Cu;
            goto label_22ea5c;
        }
    }
    ctx->pc = 0x22EA40u;
label_22ea40:
    // 0x22ea40: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x22ea40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
label_22ea44:
    // 0x22ea44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22ea44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22ea48:
    // 0x22ea48: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x22ea48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_22ea4c:
    // 0x22ea4c: 0x2e2202b  sltu        $a0, $s7, $v0
    ctx->pc = 0x22ea4cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22ea50:
    // 0x22ea50: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x22ea50u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_22ea54:
    // 0x22ea54: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x22ea54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_22ea58:
    // 0x22ea58: 0x3803e  dsrl32      $s0, $v1, 0
    ctx->pc = 0x22ea58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) >> (32 + 0));
label_22ea5c:
    // 0x22ea5c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_22ea60:
    if (ctx->pc == 0x22EA60u) {
        ctx->pc = 0x22EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA5Cu;
        // 0x22ea60: 0x270982f  dsubu       $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA64u;
        goto label_22ea64;
    }
    ctx->pc = 0x22EA5Cu;
    {
        const bool branch_taken_0x22ea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA5Cu;
        // 0x22ea60: 0x270982f  dsubu       $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea5c) {
            ctx->pc = 0x22EAD8u;
            goto label_22ead8;
        }
    }
    ctx->pc = 0x22EA64u;
label_22ea64:
    // 0x22ea64: 0x15303c  dsll32      $a2, $s5, 0
    ctx->pc = 0x22ea64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 0));
label_22ea68:
    // 0x22ea68: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x22ea68u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_22ea6c:
    // 0x22ea6c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x22ea6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22ea70:
    // 0x22ea70: 0x286202b  sltu        $a0, $s4, $a2
    ctx->pc = 0x22ea70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_22ea74:
    // 0x22ea74: 0x13283c  dsll32      $a1, $s3, 0
    ctx->pc = 0x22ea74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 0));
label_22ea78:
    // 0x22ea78: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x22ea78u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_22ea7c:
    // 0x22ea7c: 0xc4100a  movz        $v0, $a2, $a0
    ctx->pc = 0x22ea7cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_22ea80:
    // 0x22ea80: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x22ea80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_22ea84:
    // 0x22ea84: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x22ea84u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_22ea88:
    // 0x22ea88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22ea88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_22ea8c:
    // 0x22ea8c: 0x2803e  dsrl32      $s0, $v0, 0
    ctx->pc = 0x22ea8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 0));
label_22ea90:
    // 0x22ea90: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x22ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_22ea94:
    // 0x22ea94: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_22ea98:
    if (ctx->pc == 0x22EA98u) {
        ctx->pc = 0x22EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA94u;
        // 0x22ea98: 0x270982f  dsubu       $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EA9Cu;
        goto label_22ea9c;
    }
    ctx->pc = 0x22EA94u;
    {
        const bool branch_taken_0x22ea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA94u;
        // 0x22ea98: 0x270982f  dsubu       $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea94) {
            ctx->pc = 0x22EAD8u;
            goto label_22ead8;
        }
    }
    ctx->pc = 0x22EA9Cu;
label_22ea9c:
    // 0x22ea9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22eaa0:
    // 0x22eaa0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_22eaa4:
    if (ctx->pc == 0x22EAA4u) {
        ctx->pc = 0x22EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAA0u;
        // 0x22eaa4: 0x214102a  slt         $v0, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAA8u;
        goto label_22eaa8;
    }
    ctx->pc = 0x22EAA0u;
    {
        const bool branch_taken_0x22eaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAA0u;
        // 0x22eaa4: 0x214102a  slt         $v0, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eaa0) {
            ctx->pc = 0x22EAD8u;
            goto label_22ead8;
        }
    }
    ctx->pc = 0x22EAA8u;
label_22eaa8:
    // 0x22eaa8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_22eaac:
    if (ctx->pc == 0x22EAACu) {
        ctx->pc = 0x22EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAA8u;
        // 0x22eaac: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAB0u;
        goto label_22eab0;
    }
    ctx->pc = 0x22EAA8u;
    {
        const bool branch_taken_0x22eaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAA8u;
        // 0x22eaac: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eaa8) {
            ctx->pc = 0x22EAD8u;
            goto label_22ead8;
        }
    }
    ctx->pc = 0x22EAB0u;
label_22eab0:
    // 0x22eab0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x22eab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_22eab4:
    // 0x22eab4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x22eab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_22eab8:
    // 0x22eab8: 0x3484fff8  ori         $a0, $a0, 0xFFF8
    ctx->pc = 0x22eab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65528);
label_22eabc:
    // 0x22eabc: 0x50102f  dsubu       $v0, $v0, $s0
    ctx->pc = 0x22eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
label_22eac0:
    // 0x22eac0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x22eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22eac4:
    // 0x22eac4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x22eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_22eac8:
    // 0x22eac8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22eac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_22eacc:
    // 0x22eacc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22eaccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22ead0:
    // 0x22ead0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22ead4:
    // 0x22ead4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x22ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_22ead8:
    // 0x22ead8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x22ead8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_22eadc:
    // 0x22eadc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x22eadcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_22eae0:
    // 0x22eae0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22eae4:
    // 0x22eae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22eae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22eae8:
    // 0x22eae8: 0xc08c6b0  jal         func_231AC0
label_22eaec:
    if (ctx->pc == 0x22EAECu) {
        ctx->pc = 0x22EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAE8u;
        // 0x22eaec: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAF0u;
        goto label_22eaf0;
    }
    ctx->pc = 0x22EAE8u;
    SET_GPR_U32(ctx, 31, 0x22EAF0u);
    ctx->pc = 0x22EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAE8u;
    // 0x22eaec: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AC0u, 0x22EAE8u, 0x22EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAF0u;
label_22eaf0:
    // 0x22eaf0: 0x9fd50010  lwu         $s5, 0x10($fp)
    ctx->pc = 0x22eaf0u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_22eaf4:
    // 0x22eaf4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22eaf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22eaf8:
    // 0x22eaf8: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x22eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_22eafc:
    // 0x22eafc: 0xaed10000  sw          $s1, 0x0($s6)
    ctx->pc = 0x22eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
label_22eb00:
    // 0x22eb00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22eb04:
    // 0x22eb04: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x22eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_22eb08:
    // 0x22eb08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22eb0c:
    // 0x22eb0c: 0x16800038  bnez        $s4, . + 4 + (0x38 << 2)
label_22eb10:
    if (ctx->pc == 0x22EB10u) {
        ctx->pc = 0x22EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB0Cu;
        // 0x22eb10: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB14u;
        goto label_22eb14;
    }
    ctx->pc = 0x22EB0Cu;
    {
        const bool branch_taken_0x22eb0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB0Cu;
        // 0x22eb10: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb0c) {
            ctx->pc = 0x22EBF0u;
            goto label_22ebf0;
        }
    }
    ctx->pc = 0x22EB14u;
label_22eb14:
    // 0x22eb14: 0x1ea0ff66  bgtz        $s5, . + 4 + (-0x9A << 2)
label_22eb18:
    if (ctx->pc == 0x22EB18u) {
        ctx->pc = 0x22EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB14u;
        // 0x22eb18: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB1Cu;
        goto label_22eb1c;
    }
    ctx->pc = 0x22EB14u;
    {
        const bool branch_taken_0x22eb14 = (GPR_S32(ctx, 21) > 0);
        ctx->pc = 0x22EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB14u;
        // 0x22eb18: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb14) {
            ctx->pc = 0x22E8B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e8b0;
        }
    }
    ctx->pc = 0x22EB1Cu;
label_22eb1c:
    // 0x22eb1c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x22eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_22eb20:
    // 0x22eb20: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22eb24:
    if (ctx->pc == 0x22EB24u) {
        ctx->pc = 0x22EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB20u;
        // 0x22eb24: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB28u;
        goto label_22eb28;
    }
    ctx->pc = 0x22EB20u;
    {
        const bool branch_taken_0x22eb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB20u;
        // 0x22eb24: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb20) {
            ctx->pc = 0x22EB34u;
            goto label_22eb34;
        }
    }
    ctx->pc = 0x22EB28u;
label_22eb28:
    // 0x22eb28: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x22eb28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
label_22eb2c:
    // 0x22eb2c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22eb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_22eb30:
    // 0x22eb30: 0xa4620012  sh          $v0, 0x12($v1)
    ctx->pc = 0x22eb30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
label_22eb34:
    // 0x22eb34: 0xc08c682  jal         func_231A08
label_22eb38:
    if (ctx->pc == 0x22EB38u) {
        ctx->pc = 0x22EB3Cu;
        goto label_22eb3c;
    }
    ctx->pc = 0x22EB34u;
    SET_GPR_U32(ctx, 31, 0x22EB3Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22EB34u, 0x22EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB3Cu;
label_22eb3c:
    // 0x22eb3c: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x22eb3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_22eb40:
    // 0x22eb40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22eb40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22eb44:
    // 0x22eb44: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x22eb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_22eb48:
    // 0x22eb48: 0x1440fed5  bnez        $v0, . + 4 + (-0x12B << 2)
label_22eb4c:
    if (ctx->pc == 0x22EB4Cu) {
        ctx->pc = 0x22EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB48u;
        // 0x22eb4c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB50u;
        goto label_22eb50;
    }
    ctx->pc = 0x22EB48u;
    {
        const bool branch_taken_0x22eb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB48u;
        // 0x22eb4c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb48) {
            ctx->pc = 0x22E6A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e6a0;
        }
    }
    ctx->pc = 0x22EB50u;
label_22eb50:
    // 0x22eb50: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_22eb54:
    if (ctx->pc == 0x22EB54u) {
        ctx->pc = 0x22EB58u;
        goto label_22eb58;
    }
    ctx->pc = 0x22EB50u;
    {
        const bool branch_taken_0x22eb50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eb50) {
            ctx->pc = 0x22EB64u;
            goto label_22eb64;
        }
    }
    ctx->pc = 0x22EB58u;
label_22eb58:
    // 0x22eb58: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x22eb58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_22eb5c:
    // 0x22eb5c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x22eb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_22eb60:
    // 0x22eb60: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x22eb60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_22eb64:
    // 0x22eb64: 0x1aa00002  blez        $s5, . + 4 + (0x2 << 2)
label_22eb68:
    if (ctx->pc == 0x22EB68u) {
        ctx->pc = 0x22EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB64u;
        // 0x22eb68: 0x34620400  ori         $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB6Cu;
        goto label_22eb6c;
    }
    ctx->pc = 0x22EB64u;
    {
        const bool branch_taken_0x22eb64 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x22EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB64u;
        // 0x22eb68: 0x34620400  ori         $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb64) {
            ctx->pc = 0x22EB70u;
            goto label_22eb70;
        }
    }
    ctx->pc = 0x22EB6Cu;
label_22eb6c:
    // 0x22eb6c: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x22eb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_22eb70:
    // 0x22eb70: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22eb74:
    // 0x22eb74: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x22eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_22eb78:
    // 0x22eb78: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x22eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_22eb7c:
    // 0x22eb7c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x22eb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22eb80:
    // 0x22eb80: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22eb84:
    // 0x22eb84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_22eb88:
    // 0x22eb88: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x22eb88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_22eb8c:
    // 0x22eb8c: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x22eb8cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_22eb90:
    // 0x22eb90: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x22eb90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_22eb94:
    // 0x22eb94: 0x40f809  jalr        $v0
label_22eb98:
    if (ctx->pc == 0x22EB98u) {
        ctx->pc = 0x22EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB94u;
        // 0x22eb98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB9Cu;
        goto label_22eb9c;
    }
    ctx->pc = 0x22EB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22EB9Cu);
        ctx->pc = 0x22EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB94u;
        // 0x22eb98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EB94u, 0x22EB9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EB9Cu;
label_22eb9c:
    // 0x22eb9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_22eba0:
    // 0x22eba0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_22eba4:
    if (ctx->pc == 0x22EBA4u) {
        ctx->pc = 0x22EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBA0u;
        // 0x22eba4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EBA8u;
        goto label_22eba8;
    }
    ctx->pc = 0x22EBA0u;
    {
        const bool branch_taken_0x22eba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBA0u;
        // 0x22eba4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eba0) {
            ctx->pc = 0x22EBB4u;
            goto label_22ebb4;
        }
    }
    ctx->pc = 0x22EBA8u;
label_22eba8:
    // 0x22eba8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x22eba8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_22ebac:
    // 0x22ebac: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x22ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_22ebb0:
    // 0x22ebb0: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x22ebb0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_22ebb4:
    // 0x22ebb4: 0x1aa00004  blez        $s5, . + 4 + (0x4 << 2)
label_22ebb8:
    if (ctx->pc == 0x22EBB8u) {
        ctx->pc = 0x22EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBB4u;
        // 0x22ebb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EBBCu;
        goto label_22ebbc;
    }
    ctx->pc = 0x22EBB4u;
    {
        const bool branch_taken_0x22ebb4 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x22EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBB4u;
        // 0x22ebb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebb4) {
            ctx->pc = 0x22EBC8u;
            goto label_22ebc8;
        }
    }
    ctx->pc = 0x22EBBCu;
label_22ebbc:
    // 0x22ebbc: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x22ebbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_22ebc0:
    // 0x22ebc0: 0x3042fbff  andi        $v0, $v0, 0xFBFF
    ctx->pc = 0x22ebc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64511);
label_22ebc4:
    // 0x22ebc4: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x22ebc4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_22ebc8:
    // 0x22ebc8: 0xc08c698  jal         func_231A60
label_22ebcc:
    if (ctx->pc == 0x22EBCCu) {
        ctx->pc = 0x22EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBC8u;
        // 0x22ebcc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EBD0u;
        goto label_22ebd0;
    }
    ctx->pc = 0x22EBC8u;
    SET_GPR_U32(ctx, 31, 0x22EBD0u);
    ctx->pc = 0x22EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EBC8u;
    // 0x22ebcc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22EBC8u, 0x22EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBD0u;
label_22ebd0:
    // 0x22ebd0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x22ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_22ebd4:
    // 0x22ebd4: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x22ebd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22ebd8:
    // 0x22ebd8: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_22ebdc:
    if (ctx->pc == 0x22EBDCu) {
        ctx->pc = 0x22EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBD8u;
        // 0x22ebdc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EBE0u;
        goto label_22ebe0;
    }
    ctx->pc = 0x22EBD8u;
    {
        const bool branch_taken_0x22ebd8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBD8u;
        // 0x22ebdc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebd8) {
            ctx->pc = 0x22EBF0u;
            goto label_22ebf0;
        }
    }
    ctx->pc = 0x22EBE0u;
label_22ebe0:
    // 0x22ebe0: 0x16a0ff1f  bnez        $s5, . + 4 + (-0xE1 << 2)
label_22ebe4:
    if (ctx->pc == 0x22EBE4u) {
        ctx->pc = 0x22EBE8u;
        goto label_22ebe8;
    }
    ctx->pc = 0x22EBE0u;
    {
        const bool branch_taken_0x22ebe0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ebe0) {
            ctx->pc = 0x22E860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e860;
        }
    }
    ctx->pc = 0x22EBE8u;
label_22ebe8:
    // 0x22ebe8: 0x16a0feb3  bnez        $s5, . + 4 + (-0x14D << 2)
label_22ebec:
    if (ctx->pc == 0x22EBECu) {
        ctx->pc = 0x22EBF0u;
        goto label_22ebf0;
    }
    ctx->pc = 0x22EBE8u;
    {
        const bool branch_taken_0x22ebe8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ebe8) {
            ctx->pc = 0x22E6B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e6b8;
        }
    }
    ctx->pc = 0x22EBF0u;
label_22ebf0:
    // 0x22ebf0: 0x964200b0  lhu         $v0, 0xB0($s2)
    ctx->pc = 0x22ebf0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 176)));
label_22ebf4:
    // 0x22ebf4: 0x3043fffe  andi        $v1, $v0, 0xFFFE
    ctx->pc = 0x22ebf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_22ebf8:
    // 0x22ebf8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22ebf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_22ebfc:
    // 0x22ebfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22ec00:
    if (ctx->pc == 0x22EC00u) {
        ctx->pc = 0x22EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBFCu;
        // 0x22ec00: 0xa64300b0  sh          $v1, 0xB0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 176), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC04u;
        goto label_22ec04;
    }
    ctx->pc = 0x22EBFCu;
    {
        const bool branch_taken_0x22ebfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBFCu;
        // 0x22ec00: 0xa64300b0  sh          $v1, 0xB0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 176), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ebfc) {
            ctx->pc = 0x22EC14u;
            goto label_22ec14;
        }
    }
    ctx->pc = 0x22EC04u;
label_22ec04:
    // 0x22ec04: 0x3062fffc  andi        $v0, $v1, 0xFFFC
    ctx->pc = 0x22ec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65532);
label_22ec08:
    // 0x22ec08: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x22ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_22ec0c:
    // 0x22ec0c: 0xc08b6f0  jal         func_22DBC0
label_22ec10:
    if (ctx->pc == 0x22EC10u) {
        ctx->pc = 0x22EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC0Cu;
        // 0x22ec10: 0xa64200b0  sh          $v0, 0xB0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 176), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC14u;
        goto label_22ec14;
    }
    ctx->pc = 0x22EC0Cu;
    SET_GPR_U32(ctx, 31, 0x22EC14u);
    ctx->pc = 0x22EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC0Cu;
    // 0x22ec10: 0xa64200b0  sh          $v0, 0xB0($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 176), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBC0u, 0x22EC0Cu, 0x22EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC14u;
label_22ec14:
    // 0x22ec14: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x22ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22ec18:
    // 0x22ec18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_22ec1c:
    if (ctx->pc == 0x22EC1Cu) {
        ctx->pc = 0x22EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC18u;
        // 0x22ec1c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC20u;
        goto label_22ec20;
    }
    ctx->pc = 0x22EC18u;
    {
        const bool branch_taken_0x22ec18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC18u;
        // 0x22ec1c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec18) {
            ctx->pc = 0x22EC2Cu;
            goto label_22ec2c;
        }
    }
    ctx->pc = 0x22EC20u;
label_22ec20:
    // 0x22ec20: 0xc08a9d6  jal         func_22A758
label_22ec24:
    if (ctx->pc == 0x22EC24u) {
        ctx->pc = 0x22EC28u;
        goto label_22ec28;
    }
    ctx->pc = 0x22EC20u;
    SET_GPR_U32(ctx, 31, 0x22EC28u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22EC20u, 0x22EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC28u;
label_22ec28:
    // 0x22ec28: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x22ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_22ec2c:
    // 0x22ec2c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22ec30:
    if (ctx->pc == 0x22EC30u) {
        ctx->pc = 0x22EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC2Cu;
        // 0x22ec30: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC34u;
        goto label_22ec34;
    }
    ctx->pc = 0x22EC2Cu;
    {
        const bool branch_taken_0x22ec2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec2c) {
            ctx->pc = 0x22EC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EC2Cu;
            // 0x22ec30: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EC40u;
            goto label_22ec40;
        }
    }
    ctx->pc = 0x22EC34u;
label_22ec34:
    // 0x22ec34: 0xc08a9d6  jal         func_22A758
label_22ec38:
    if (ctx->pc == 0x22EC38u) {
        ctx->pc = 0x22EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC34u;
        // 0x22ec38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC3Cu;
        goto label_22ec3c;
    }
    ctx->pc = 0x22EC34u;
    SET_GPR_U32(ctx, 31, 0x22EC3Cu);
    ctx->pc = 0x22EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC34u;
    // 0x22ec38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22EC34u, 0x22EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC3Cu;
label_22ec3c:
    // 0x22ec3c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x22ec3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22ec40:
    // 0x22ec40: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x22ec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_22ec44:
    // 0x22ec44: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x22ec44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_22ec48:
    // 0x22ec48: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x22ec48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_22ec4c:
    // 0x22ec4c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x22ec4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22ec50:
    // 0x22ec50: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x22ec50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22ec54:
    // 0x22ec54: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x22ec54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22ec58:
    // 0x22ec58: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x22ec58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22ec5c:
    // 0x22ec5c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x22ec5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22ec60:
    // 0x22ec60: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x22ec60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22ec64:
    // 0x22ec64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x22ec64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22ec68:
    // 0x22ec68: 0x3e00008  jr          $ra
label_22ec6c:
    if (ctx->pc == 0x22EC6Cu) {
        ctx->pc = 0x22EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC68u;
        // 0x22ec6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EC70u;
        goto label_22ec70;
    }
    ctx->pc = 0x22EC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC68u;
        // 0x22ec6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EC70u;
label_22ec70:
    // 0x22ec70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_22ec74:
    // 0x22ec74: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x22ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_22ec78:
    // 0x22ec78: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x22ec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_22ec7c:
    // 0x22ec7c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x22ec7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22ec80:
    // 0x22ec80: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x22ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_22ec84:
    // 0x22ec84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22ec84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ec88:
    // 0x22ec88: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x22ec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_22ec8c:
    // 0x22ec8c: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x22ec8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_22ec90:
    // 0x22ec90: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x22ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_22ec94:
    // 0x22ec94: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x22ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_22ec98:
    // 0x22ec98: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x22ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_22ec9c:
    // 0x22ec9c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x22ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_22eca0:
    // 0x22eca0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x22eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_22eca4:
    // 0x22eca4: 0x8e3e000c  lw          $fp, 0xC($s1)
    ctx->pc = 0x22eca4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_22eca8:
    // 0x22eca8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x22eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_22ecac:
    // 0x22ecac: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x22ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
label_22ecb0:
    // 0x22ecb0: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x22ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
label_22ecb4:
    // 0x22ecb4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x22ecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_22ecb8:
    // 0x22ecb8: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x22ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_22ecbc:
    // 0x22ecbc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x22ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_22ecc0:
    // 0x22ecc0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x22ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_22ecc4:
    // 0x22ecc4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_22ecc8:
    if (ctx->pc == 0x22ECC8u) {
        ctx->pc = 0x22ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECC4u;
        // 0x22ecc8: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ECCCu;
        goto label_22eccc;
    }
    ctx->pc = 0x22ECC4u;
    {
        const bool branch_taken_0x22ecc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECC4u;
        // 0x22ecc8: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecc4) {
            ctx->pc = 0x22ECD0u;
            goto label_22ecd0;
        }
    }
    ctx->pc = 0x22ECCCu;
label_22eccc:
    // 0x22eccc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x22ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_22ecd0:
    // 0x22ecd0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x22ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_22ecd4:
    // 0x22ecd4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_22ecd8:
    if (ctx->pc == 0x22ECD8u) {
        ctx->pc = 0x22ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECD4u;
        // 0x22ecd8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ECDCu;
        goto label_22ecdc;
    }
    ctx->pc = 0x22ECD4u;
    {
        const bool branch_taken_0x22ecd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ecd4) {
            ctx->pc = 0x22ECD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ECD4u;
            // 0x22ecd8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22ECDCu;
            goto label_22ecdc;
        }
    }
    ctx->pc = 0x22ECDCu;
label_22ecdc:
    // 0x22ecdc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x22ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_22ece0:
    // 0x22ece0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_22ece4:
    if (ctx->pc == 0x22ECE4u) {
        ctx->pc = 0x22ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECE0u;
        // 0x22ece4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ECE8u;
        goto label_22ece8;
    }
    ctx->pc = 0x22ECE0u;
    {
        const bool branch_taken_0x22ece0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECE0u;
        // 0x22ece4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ece0) {
            ctx->pc = 0x22ECF4u;
            goto label_22ecf4;
        }
    }
    ctx->pc = 0x22ECE8u;
label_22ece8:
    // 0x22ece8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ecec:
    // 0x22ecec: 0x10000002  b           . + 4 + (0x2 << 2)
label_22ecf0:
    if (ctx->pc == 0x22ECF0u) {
        ctx->pc = 0x22ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECECu;
        // 0x22ecf0: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ECF4u;
        goto label_22ecf4;
    }
    ctx->pc = 0x22ECECu;
    {
        const bool branch_taken_0x22ecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECECu;
        // 0x22ecf0: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecec) {
            ctx->pc = 0x22ECF8u;
            goto label_22ecf8;
        }
    }
    ctx->pc = 0x22ECF4u;
label_22ecf4:
    // 0x22ecf4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22ecf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ecf8:
    // 0x22ecf8: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x22ecf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_22ecfc:
    // 0x22ecfc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_22ed00:
    if (ctx->pc == 0x22ED00u) {
        ctx->pc = 0x22ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECFCu;
        // 0x22ed00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED04u;
        goto label_22ed04;
    }
    ctx->pc = 0x22ECFCu;
    {
        const bool branch_taken_0x22ecfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ECFCu;
        // 0x22ed00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ecfc) {
            ctx->pc = 0x22ED9Cu;
            goto label_22ed9c;
        }
    }
    ctx->pc = 0x22ED04u;
label_22ed04:
    // 0x22ed04: 0xc08a922  jal         func_22A488
label_22ed08:
    if (ctx->pc == 0x22ED08u) {
        ctx->pc = 0x22ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED04u;
        // 0x22ed08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED0Cu;
        goto label_22ed0c;
    }
    ctx->pc = 0x22ED04u;
    SET_GPR_U32(ctx, 31, 0x22ED0Cu);
    ctx->pc = 0x22ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED04u;
    // 0x22ed08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A488u, 0x22ED04u, 0x22ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED0Cu;
label_22ed0c:
    // 0x22ed0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ed0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ed10:
    // 0x22ed10: 0x120002dc  beqz        $s0, . + 4 + (0x2DC << 2)
label_22ed14:
    if (ctx->pc == 0x22ED14u) {
        ctx->pc = 0x22ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED10u;
        // 0x22ed14: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED18u;
        goto label_22ed18;
    }
    ctx->pc = 0x22ED10u;
    {
        const bool branch_taken_0x22ed10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED10u;
        // 0x22ed14: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed10) {
            ctx->pc = 0x22F884u;
            goto label_22f884;
        }
    }
    ctx->pc = 0x22ED18u;
label_22ed18:
    // 0x22ed18: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x22ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_22ed1c:
    // 0x22ed1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ed1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ed20:
    // 0x22ed20: 0x32870002  andi        $a3, $s4, 0x2
    ctx->pc = 0x22ed20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_22ed24:
    // 0x22ed24: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x22ed24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_22ed28:
    // 0x22ed28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ed28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ed2c:
    // 0x22ed2c: 0x40f809  jalr        $v0
label_22ed30:
    if (ctx->pc == 0x22ED30u) {
        ctx->pc = 0x22ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED2Cu;
        // 0x22ed30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED34u;
        goto label_22ed34;
    }
    ctx->pc = 0x22ED2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22ED34u);
        ctx->pc = 0x22ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED2Cu;
        // 0x22ed30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ED2Cu, 0x22ED34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22ED34u;
label_22ed34:
    // 0x22ed34: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x22ed34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ed38:
    // 0x22ed38: 0x16c00012  bnez        $s6, . + 4 + (0x12 << 2)
label_22ed3c:
    if (ctx->pc == 0x22ED3Cu) {
        ctx->pc = 0x22ED40u;
        goto label_22ed40;
    }
    ctx->pc = 0x22ED38u;
    {
        const bool branch_taken_0x22ed38 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed38) {
            ctx->pc = 0x22ED84u;
            goto label_22ed84;
        }
    }
    ctx->pc = 0x22ED40u;
label_22ed40:
    // 0x22ed40: 0x8ee70010  lw          $a3, 0x10($s7)
    ctx->pc = 0x22ed40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_22ed44:
    // 0x22ed44: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x22ed44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22ed48:
    // 0x22ed48: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x22ed48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_22ed4c:
    // 0x22ed4c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22ed50:
    // 0x22ed50: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x22ed50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_22ed54:
    // 0x22ed54: 0xc08c6b0  jal         func_231AC0
label_22ed58:
    if (ctx->pc == 0x22ED58u) {
        ctx->pc = 0x22ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED54u;
        // 0x22ed58: 0xe2280b  movn        $a1, $a3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED5Cu;
        goto label_22ed5c;
    }
    ctx->pc = 0x22ED54u;
    SET_GPR_U32(ctx, 31, 0x22ED5Cu);
    ctx->pc = 0x22ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED54u;
    // 0x22ed58: 0xe2280b  movn        $a1, $a3, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AC0u, 0x22ED54u, 0x22ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED5Cu;
label_22ed5c:
    // 0x22ed5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ed5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ed60:
    // 0x22ed60: 0xc08a996  jal         func_22A658
label_22ed64:
    if (ctx->pc == 0x22ED64u) {
        ctx->pc = 0x22ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED60u;
        // 0x22ed64: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED68u;
        goto label_22ed68;
    }
    ctx->pc = 0x22ED60u;
    SET_GPR_U32(ctx, 31, 0x22ED68u);
    ctx->pc = 0x22ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED60u;
    // 0x22ed64: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x22ED60u, 0x22ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED68u;
label_22ed68:
    // 0x22ed68: 0x8ee70010  lw          $a3, 0x10($s7)
    ctx->pc = 0x22ed68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_22ed6c:
    // 0x22ed6c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_22ed70:
    if (ctx->pc == 0x22ED70u) {
        ctx->pc = 0x22ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED6Cu;
        // 0x22ed70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED74u;
        goto label_22ed74;
    }
    ctx->pc = 0x22ED6Cu;
    {
        const bool branch_taken_0x22ed6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED6Cu;
        // 0x22ed70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed6c) {
            ctx->pc = 0x22ED84u;
            goto label_22ed84;
        }
    }
    ctx->pc = 0x22ED74u;
label_22ed74:
    // 0x22ed74: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
label_22ed78:
    if (ctx->pc == 0x22ED78u) {
        ctx->pc = 0x22ED7Cu;
        goto label_22ed7c;
    }
    ctx->pc = 0x22ED74u;
    {
        const bool branch_taken_0x22ed74 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed74) {
            ctx->pc = 0x22ED84u;
            goto label_22ed84;
        }
    }
    ctx->pc = 0x22ED7Cu;
label_22ed7c:
    // 0x22ed7c: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
label_22ed80:
    if (ctx->pc == 0x22ED80u) {
        ctx->pc = 0x22ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED7Cu;
        // 0x22ed80: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED84u;
        goto label_22ed84;
    }
    ctx->pc = 0x22ED7Cu;
    {
        const bool branch_taken_0x22ed7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed7c) {
            ctx->pc = 0x22ED80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ED7Cu;
            // 0x22ed80: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22ED48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ed48;
        }
    }
    ctx->pc = 0x22ED84u;
label_22ed84:
    // 0x22ed84: 0x120002bf  beqz        $s0, . + 4 + (0x2BF << 2)
label_22ed88:
    if (ctx->pc == 0x22ED88u) {
        ctx->pc = 0x22ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED84u;
        // 0x22ed88: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED8Cu;
        goto label_22ed8c;
    }
    ctx->pc = 0x22ED84u;
    {
        const bool branch_taken_0x22ed84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED84u;
        // 0x22ed88: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed84) {
            ctx->pc = 0x22F884u;
            goto label_22f884;
        }
    }
    ctx->pc = 0x22ED8Cu;
label_22ed8c:
    // 0x22ed8c: 0xc08a9d6  jal         func_22A758
label_22ed90:
    if (ctx->pc == 0x22ED90u) {
        ctx->pc = 0x22ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED8Cu;
        // 0x22ed90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED94u;
        goto label_22ed94;
    }
    ctx->pc = 0x22ED8Cu;
    SET_GPR_U32(ctx, 31, 0x22ED94u);
    ctx->pc = 0x22ED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED8Cu;
    // 0x22ed90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22ED8Cu, 0x22ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED94u;
label_22ed94:
    // 0x22ed94: 0x100002bb  b           . + 4 + (0x2BB << 2)
label_22ed98:
    if (ctx->pc == 0x22ED98u) {
        ctx->pc = 0x22ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED94u;
        // 0x22ed98: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ED9Cu;
        goto label_22ed9c;
    }
    ctx->pc = 0x22ED94u;
    {
        const bool branch_taken_0x22ed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED94u;
        // 0x22ed98: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed94) {
            ctx->pc = 0x22F884u;
            goto label_22f884;
        }
    }
    ctx->pc = 0x22ED9Cu;
label_22ed9c:
    // 0x22ed9c: 0x54e00001  bnel        $a3, $zero, . + 4 + (0x1 << 2)
label_22eda0:
    if (ctx->pc == 0x22EDA0u) {
        ctx->pc = 0x22EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED9Cu;
        // 0x22eda0: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDA4u;
        goto label_22eda4;
    }
    ctx->pc = 0x22ED9Cu;
    {
        const bool branch_taken_0x22ed9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed9c) {
            ctx->pc = 0x22EDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ED9Cu;
            // 0x22eda0: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EDA4u;
            goto label_22eda4;
        }
    }
    ctx->pc = 0x22EDA4u;
label_22eda4:
    // 0x22eda4: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x22eda4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_22eda8:
    // 0x22eda8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x22eda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_22edac:
    // 0x22edac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_22edb0:
    if (ctx->pc == 0x22EDB0u) {
        ctx->pc = 0x22EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDACu;
        // 0x22edb0: 0x96230078  lhu         $v1, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDB4u;
        goto label_22edb4;
    }
    ctx->pc = 0x22EDACu;
    {
        const bool branch_taken_0x22edac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22edac) {
            ctx->pc = 0x22EDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EDACu;
            // 0x22edb0: 0x96230078  lhu         $v1, 0x78($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EDDCu;
            goto label_22eddc;
        }
    }
    ctx->pc = 0x22EDB4u;
label_22edb4:
    // 0x22edb4: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x22edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_22edb8:
    // 0x22edb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22edbc:
    if (ctx->pc == 0x22EDBCu) {
        ctx->pc = 0x22EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDB8u;
        // 0x22edbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDC0u;
        goto label_22edc0;
    }
    ctx->pc = 0x22EDB8u;
    {
        const bool branch_taken_0x22edb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDB8u;
        // 0x22edbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edb8) {
            ctx->pc = 0x22EDD8u;
            goto label_22edd8;
        }
    }
    ctx->pc = 0x22EDC0u;
label_22edc0:
    // 0x22edc0: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x22edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_22edc4:
    // 0x22edc4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x22edc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22edc8:
    // 0x22edc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22edc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22edcc:
    // 0x22edcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22edccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22edd0:
    // 0x22edd0: 0x40f809  jalr        $v0
label_22edd4:
    if (ctx->pc == 0x22EDD4u) {
        ctx->pc = 0x22EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDD0u;
        // 0x22edd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDD8u;
        goto label_22edd8;
    }
    ctx->pc = 0x22EDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22EDD8u);
        ctx->pc = 0x22EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDD0u;
        // 0x22edd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EDD0u, 0x22EDD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EDD8u;
label_22edd8:
    // 0x22edd8: 0x96230078  lhu         $v1, 0x78($s1)
    ctx->pc = 0x22edd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_22eddc:
    // 0x22eddc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22eddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_22ede0:
    // 0x22ede0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22ede4:
    if (ctx->pc == 0x22EDE4u) {
        ctx->pc = 0x22EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDE0u;
        // 0x22ede4: 0x32820080  andi        $v0, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDE8u;
        goto label_22ede8;
    }
    ctx->pc = 0x22EDE0u;
    {
        const bool branch_taken_0x22ede0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDE0u;
        // 0x22ede4: 0x32820080  andi        $v0, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ede0) {
            ctx->pc = 0x22EE00u;
            goto label_22ee00;
        }
    }
    ctx->pc = 0x22EDE8u;
label_22ede8:
    // 0x22ede8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22edec:
    if (ctx->pc == 0x22EDECu) {
        ctx->pc = 0x22EDF0u;
        goto label_22edf0;
    }
    ctx->pc = 0x22EDE8u;
    {
        const bool branch_taken_0x22ede8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ede8) {
            ctx->pc = 0x22EE08u;
            goto label_22ee08;
        }
    }
    ctx->pc = 0x22EDF0u;
label_22edf0:
    // 0x22edf0: 0xc08c21e  jal         func_230878
label_22edf4:
    if (ctx->pc == 0x22EDF4u) {
        ctx->pc = 0x22EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDF0u;
        // 0x22edf4: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EDF8u;
        goto label_22edf8;
    }
    ctx->pc = 0x22EDF0u;
    SET_GPR_U32(ctx, 31, 0x22EDF8u);
    ctx->pc = 0x22EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDF0u;
    // 0x22edf4: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230878u, 0x22EDF0u, 0x22EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDF8u;
label_22edf8:
    // 0x22edf8: 0x10000003  b           . + 4 + (0x3 << 2)
label_22edfc:
    if (ctx->pc == 0x22EDFCu) {
        ctx->pc = 0x22EE00u;
        goto label_22ee00;
    }
    ctx->pc = 0x22EDF8u;
    {
        const bool branch_taken_0x22edf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22edf8) {
            ctx->pc = 0x22EE08u;
            goto label_22ee08;
        }
    }
    ctx->pc = 0x22EE00u;
label_22ee00:
    // 0x22ee00: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x22ee00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_22ee04:
    // 0x22ee04: 0xa6220078  sh          $v0, 0x78($s1)
    ctx->pc = 0x22ee04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 2));
label_22ee08:
    // 0x22ee08: 0xc08c682  jal         func_231A08
label_22ee0c:
    if (ctx->pc == 0x22EE0Cu) {
        ctx->pc = 0x22EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE08u;
        // 0x22ee0c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE10u;
        goto label_22ee10;
    }
    ctx->pc = 0x22EE08u;
    SET_GPR_U32(ctx, 31, 0x22EE10u);
    ctx->pc = 0x22EE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE08u;
    // 0x22ee0c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22EE08u, 0x22EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE10u;
label_22ee10:
    // 0x22ee10: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x22ee10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_22ee14:
    // 0x22ee14: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x22ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_22ee18:
    // 0x22ee18: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_22ee1c:
    if (ctx->pc == 0x22EE1Cu) {
        ctx->pc = 0x22EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE18u;
        // 0x22ee1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE20u;
        goto label_22ee20;
    }
    ctx->pc = 0x22EE18u;
    {
        const bool branch_taken_0x22ee18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE18u;
        // 0x22ee1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee18) {
            ctx->pc = 0x22EE80u;
            goto label_22ee80;
        }
    }
    ctx->pc = 0x22EE20u;
label_22ee20:
    // 0x22ee20: 0x32820080  andi        $v0, $s4, 0x80
    ctx->pc = 0x22ee20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
label_22ee24:
    // 0x22ee24: 0x5440005a  bnel        $v0, $zero, . + 4 + (0x5A << 2)
label_22ee28:
    if (ctx->pc == 0x22EE28u) {
        ctx->pc = 0x22EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE24u;
        // 0x22ee28: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE2Cu;
        goto label_22ee2c;
    }
    ctx->pc = 0x22EE24u;
    {
        const bool branch_taken_0x22ee24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ee24) {
            ctx->pc = 0x22EE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EE24u;
            // 0x22ee28: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EF90u;
            goto label_22ef90;
        }
    }
    ctx->pc = 0x22EE2Cu;
label_22ee2c:
    // 0x22ee2c: 0x9ee40010  lwu         $a0, 0x10($s7)
    ctx->pc = 0x22ee2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_22ee30:
    // 0x22ee30: 0xde230048  ld          $v1, 0x48($s1)
    ctx->pc = 0x22ee30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 72)));
label_22ee34:
    // 0x22ee34: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x22ee34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_22ee38:
    // 0x22ee38: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
label_22ee3c:
    if (ctx->pc == 0x22EE3Cu) {
        ctx->pc = 0x22EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE38u;
        // 0x22ee3c: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE40u;
        goto label_22ee40;
    }
    ctx->pc = 0x22EE38u;
    {
        const bool branch_taken_0x22ee38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee38) {
            ctx->pc = 0x22EE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EE38u;
            // 0x22ee3c: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EF90u;
            goto label_22ef90;
        }
    }
    ctx->pc = 0x22EE40u;
label_22ee40:
    // 0x22ee40: 0xde220068  ld          $v0, 0x68($s1)
    ctx->pc = 0x22ee40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 104)));
label_22ee44:
    // 0x22ee44: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x22ee44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22ee48:
    // 0x22ee48: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_22ee4c:
    if (ctx->pc == 0x22EE4Cu) {
        ctx->pc = 0x22EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE48u;
        // 0x22ee4c: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE50u;
        goto label_22ee50;
    }
    ctx->pc = 0x22EE48u;
    {
        const bool branch_taken_0x22ee48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ee48) {
            ctx->pc = 0x22EE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EE48u;
            // 0x22ee4c: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EE6Cu;
            goto label_22ee6c;
        }
    }
    ctx->pc = 0x22EE50u;
label_22ee50:
    // 0x22ee50: 0x32820040  andi        $v0, $s4, 0x40
    ctx->pc = 0x22ee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
label_22ee54:
    // 0x22ee54: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_22ee58:
    if (ctx->pc == 0x22EE58u) {
        ctx->pc = 0x22EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE54u;
        // 0x22ee58: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE5Cu;
        goto label_22ee5c;
    }
    ctx->pc = 0x22EE54u;
    {
        const bool branch_taken_0x22ee54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE54u;
        // 0x22ee58: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee54) {
            ctx->pc = 0x22EF90u;
            goto label_22ef90;
        }
    }
    ctx->pc = 0x22EE5Cu;
label_22ee5c:
    // 0x22ee5c: 0xde220050  ld          $v0, 0x50($s1)
    ctx->pc = 0x22ee5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 80)));
label_22ee60:
    // 0x22ee60: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x22ee60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_22ee64:
    // 0x22ee64: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_22ee68:
    if (ctx->pc == 0x22EE68u) {
        ctx->pc = 0x22EE6Cu;
        goto label_22ee6c;
    }
    ctx->pc = 0x22EE64u;
    {
        const bool branch_taken_0x22ee64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ee64) {
            ctx->pc = 0x22EF90u;
            goto label_22ef90;
        }
    }
    ctx->pc = 0x22EE6Cu;
label_22ee6c:
    // 0x22ee6c: 0x16a00049  bnez        $s5, . + 4 + (0x49 << 2)
label_22ee70:
    if (ctx->pc == 0x22EE70u) {
        ctx->pc = 0x22EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE6Cu;
        // 0x22ee70: 0x97c3000a  lhu         $v1, 0xA($fp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE74u;
        goto label_22ee74;
    }
    ctx->pc = 0x22EE6Cu;
    {
        const bool branch_taken_0x22ee6c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE6Cu;
        // 0x22ee70: 0x97c3000a  lhu         $v1, 0xA($fp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee6c) {
            ctx->pc = 0x22EF94u;
            goto label_22ef94;
        }
    }
    ctx->pc = 0x22EE74u;
label_22ee74:
    // 0x22ee74: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22ee74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_22ee78:
    // 0x22ee78: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_22ee7c:
    if (ctx->pc == 0x22EE7Cu) {
        ctx->pc = 0x22EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE78u;
        // 0x22ee7c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE80u;
        goto label_22ee80;
    }
    ctx->pc = 0x22EE78u;
    {
        const bool branch_taken_0x22ee78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE78u;
        // 0x22ee7c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee78) {
            ctx->pc = 0x22EF98u;
            goto label_22ef98;
        }
    }
    ctx->pc = 0x22EE80u;
label_22ee80:
    // 0x22ee80: 0x96220038  lhu         $v0, 0x38($s1)
    ctx->pc = 0x22ee80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_22ee84:
    // 0x22ee84: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_22ee88:
    if (ctx->pc == 0x22EE88u) {
        ctx->pc = 0x22EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE84u;
        // 0x22ee88: 0x96240006  lhu         $a0, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE8Cu;
        goto label_22ee8c;
    }
    ctx->pc = 0x22EE84u;
    {
        const bool branch_taken_0x22ee84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee84) {
            ctx->pc = 0x22EE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EE84u;
            // 0x22ee88: 0x96240006  lhu         $a0, 0x6($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EEA8u;
            goto label_22eea8;
        }
    }
    ctx->pc = 0x22EE8Cu;
label_22ee8c:
    // 0x22ee8c: 0x56000040  bnel        $s0, $zero, . + 4 + (0x40 << 2)
label_22ee90:
    if (ctx->pc == 0x22EE90u) {
        ctx->pc = 0x22EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE8Cu;
        // 0x22ee90: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EE94u;
        goto label_22ee94;
    }
    ctx->pc = 0x22EE8Cu;
    {
        const bool branch_taken_0x22ee8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ee8c) {
            ctx->pc = 0x22EE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EE8Cu;
            // 0x22ee90: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EF90u;
            goto label_22ef90;
        }
    }
    ctx->pc = 0x22EE94u;
label_22ee94:
    // 0x22ee94: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x22ee94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_22ee98:
    // 0x22ee98: 0x1440026e  bnez        $v0, . + 4 + (0x26E << 2)
label_22ee9c:
    if (ctx->pc == 0x22EE9Cu) {
        ctx->pc = 0x22EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE98u;
        // 0x22ee9c: 0x96360038  lhu         $s6, 0x38($s1) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEA0u;
        goto label_22eea0;
    }
    ctx->pc = 0x22EE98u;
    {
        const bool branch_taken_0x22ee98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE98u;
        // 0x22ee9c: 0x96360038  lhu         $s6, 0x38($s1) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee98) {
            ctx->pc = 0x22F854u;
            goto label_22f854;
        }
    }
    ctx->pc = 0x22EEA0u;
label_22eea0:
    // 0x22eea0: 0x1000026c  b           . + 4 + (0x26C << 2)
label_22eea4:
    if (ctx->pc == 0x22EEA4u) {
        ctx->pc = 0x22EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEA0u;
        // 0x22eea4: 0xa6200038  sh          $zero, 0x38($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEA8u;
        goto label_22eea8;
    }
    ctx->pc = 0x22EEA0u;
    {
        const bool branch_taken_0x22eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEA0u;
        // 0x22eea4: 0xa6200038  sh          $zero, 0x38($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eea0) {
            ctx->pc = 0x22F854u;
            goto label_22f854;
        }
    }
    ctx->pc = 0x22EEA8u;
label_22eea8:
    // 0x22eea8: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x22eea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_22eeac:
    // 0x22eeac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22eeb0:
    if (ctx->pc == 0x22EEB0u) {
        ctx->pc = 0x22EEB4u;
        goto label_22eeb4;
    }
    ctx->pc = 0x22EEACu;
    {
        const bool branch_taken_0x22eeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eeac) {
            ctx->pc = 0x22EEC4u;
            goto label_22eec4;
        }
    }
    ctx->pc = 0x22EEB4u;
label_22eeb4:
    // 0x22eeb4: 0x56000036  bnel        $s0, $zero, . + 4 + (0x36 << 2)
label_22eeb8:
    if (ctx->pc == 0x22EEB8u) {
        ctx->pc = 0x22EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEB4u;
        // 0x22eeb8: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEBCu;
        goto label_22eebc;
    }
    ctx->pc = 0x22EEB4u;
    {
        const bool branch_taken_0x22eeb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eeb4) {
            ctx->pc = 0x22EEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EEB4u;
            // 0x22eeb8: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EF90u;
            goto label_22ef90;
        }
    }
    ctx->pc = 0x22EEBCu;
label_22eebc:
    // 0x22eebc: 0x10000266  b           . + 4 + (0x266 << 2)
label_22eec0:
    if (ctx->pc == 0x22EEC0u) {
        ctx->pc = 0x22EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEBCu;
        // 0x22eec0: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEC4u;
        goto label_22eec4;
    }
    ctx->pc = 0x22EEBCu;
    {
        const bool branch_taken_0x22eebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEBCu;
        // 0x22eec0: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eebc) {
            ctx->pc = 0x22F858u;
            goto label_22f858;
        }
    }
    ctx->pc = 0x22EEC4u;
label_22eec4:
    // 0x22eec4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_22eec8:
    if (ctx->pc == 0x22EEC8u) {
        ctx->pc = 0x22EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEC4u;
        // 0x22eec8: 0x30820006  andi        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EECCu;
        goto label_22eecc;
    }
    ctx->pc = 0x22EEC4u;
    {
        const bool branch_taken_0x22eec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEC4u;
        // 0x22eec8: 0x30820006  andi        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eec4) {
            ctx->pc = 0x22EF0Cu;
            goto label_22ef0c;
        }
    }
    ctx->pc = 0x22EECCu;
label_22eecc:
    // 0x22eecc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x22eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22eed0:
    // 0x22eed0: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x22eed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_22eed4:
    // 0x22eed4: 0x0  nop
    ctx->pc = 0x22eed4u;
    // NOP
label_22eed8:
    // 0x22eed8: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
label_22eedc:
    if (ctx->pc == 0x22EEDCu) {
        ctx->pc = 0x22EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EED8u;
        // 0x22eedc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEE0u;
        goto label_22eee0;
    }
    ctx->pc = 0x22EED8u;
    {
        const bool branch_taken_0x22eed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22eed8) {
            ctx->pc = 0x22EEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EED8u;
            // 0x22eedc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EEF4u;
            goto label_22eef4;
        }
    }
    ctx->pc = 0x22EEE0u;
label_22eee0:
    // 0x22eee0: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x22eee0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22eee4:
    // 0x22eee4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22eee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_22eee8:
    // 0x22eee8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22eeec:
    if (ctx->pc == 0x22EEECu) {
        ctx->pc = 0x22EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEE8u;
        // 0x22eeec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EEF0u;
        goto label_22eef0;
    }
    ctx->pc = 0x22EEE8u;
    {
        const bool branch_taken_0x22eee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eee8) {
            ctx->pc = 0x22EEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EEE8u;
            // 0x22eeec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EF00u;
            goto label_22ef00;
        }
    }
    ctx->pc = 0x22EEF0u;
label_22eef0:
    // 0x22eef0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22eef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22eef4:
    // 0x22eef4: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x22eef4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
label_22eef8:
    // 0x22eef8: 0x10000026  b           . + 4 + (0x26 << 2)
label_22eefc:
    if (ctx->pc == 0x22EEFCu) {
        ctx->pc = 0x22EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEF8u;
        // 0x22eefc: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF00u;
        goto label_22ef00;
    }
    ctx->pc = 0x22EEF8u;
    {
        const bool branch_taken_0x22eef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEF8u;
        // 0x22eefc: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eef8) {
            ctx->pc = 0x22EF94u;
            goto label_22ef94;
        }
    }
    ctx->pc = 0x22EF00u;
label_22ef00:
    // 0x22ef00: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_22ef04:
    if (ctx->pc == 0x22EF04u) {
        ctx->pc = 0x22EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF00u;
        // 0x22ef04: 0x86020010  lh          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF08u;
        goto label_22ef08;
    }
    ctx->pc = 0x22EF00u;
    {
        const bool branch_taken_0x22ef00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ef00) {
            ctx->pc = 0x22EF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EF00u;
            // 0x22ef04: 0x86020010  lh          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22eed8;
        }
    }
    ctx->pc = 0x22EF08u;
label_22ef08:
    // 0x22ef08: 0x30820006  andi        $v0, $a0, 0x6
    ctx->pc = 0x22ef08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
label_22ef0c:
    // 0x22ef0c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_22ef10:
    if (ctx->pc == 0x22EF10u) {
        ctx->pc = 0x22EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF0Cu;
        // 0x22ef10: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF14u;
        goto label_22ef14;
    }
    ctx->pc = 0x22EF0Cu;
    {
        const bool branch_taken_0x22ef0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ef0c) {
            ctx->pc = 0x22EF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EF0Cu;
            // 0x22ef10: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EF30u;
            goto label_22ef30;
        }
    }
    ctx->pc = 0x22EF14u;
label_22ef14:
    // 0x22ef14: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x22ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_22ef18:
    // 0x22ef18: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x22ef18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22ef1c:
    // 0x22ef1c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22ef1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_22ef20:
    // 0x22ef20: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_22ef24:
    if (ctx->pc == 0x22EF24u) {
        ctx->pc = 0x22EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF20u;
        // 0x22ef24: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF28u;
        goto label_22ef28;
    }
    ctx->pc = 0x22EF20u;
    {
        const bool branch_taken_0x22ef20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ef20) {
            ctx->pc = 0x22EF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EF20u;
            // 0x22ef24: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EF30u;
            goto label_22ef30;
        }
    }
    ctx->pc = 0x22EF28u;
label_22ef28:
    // 0x22ef28: 0x1000024a  b           . + 4 + (0x24A << 2)
label_22ef2c:
    if (ctx->pc == 0x22EF2Cu) {
        ctx->pc = 0x22EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF28u;
        // 0x22ef2c: 0x24160080  addiu       $s6, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF30u;
        goto label_22ef30;
    }
    ctx->pc = 0x22EF28u;
    {
        const bool branch_taken_0x22ef28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF28u;
        // 0x22ef2c: 0x24160080  addiu       $s6, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef28) {
            ctx->pc = 0x22F854u;
            goto label_22f854;
        }
    }
    ctx->pc = 0x22EF30u;
label_22ef30:
    // 0x22ef30: 0x10400248  beqz        $v0, . + 4 + (0x248 << 2)
label_22ef34:
    if (ctx->pc == 0x22EF34u) {
        ctx->pc = 0x22EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF30u;
        // 0x22ef34: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF38u;
        goto label_22ef38;
    }
    ctx->pc = 0x22EF30u;
    {
        const bool branch_taken_0x22ef30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF30u;
        // 0x22ef34: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef30) {
            ctx->pc = 0x22F854u;
            goto label_22f854;
        }
    }
    ctx->pc = 0x22EF38u;
label_22ef38:
    // 0x22ef38: 0x14400246  bnez        $v0, . + 4 + (0x246 << 2)
label_22ef3c:
    if (ctx->pc == 0x22EF3Cu) {
        ctx->pc = 0x22EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF38u;
        // 0x22ef3c: 0x2416000b  addiu       $s6, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF40u;
        goto label_22ef40;
    }
    ctx->pc = 0x22EF38u;
    {
        const bool branch_taken_0x22ef38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF38u;
        // 0x22ef3c: 0x2416000b  addiu       $s6, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef38) {
            ctx->pc = 0x22F854u;
            goto label_22f854;
        }
    }
    ctx->pc = 0x22EF40u;
label_22ef40:
    // 0x22ef40: 0x32820080  andi        $v0, $s4, 0x80
    ctx->pc = 0x22ef40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
label_22ef44:
    // 0x22ef44: 0x14400244  bnez        $v0, . + 4 + (0x244 << 2)
label_22ef48:
    if (ctx->pc == 0x22EF48u) {
        ctx->pc = 0x22EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF44u;
        // 0x22ef48: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF4Cu;
        goto label_22ef4c;
    }
    ctx->pc = 0x22EF44u;
    {
        const bool branch_taken_0x22ef44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF44u;
        // 0x22ef48: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef44) {
            ctx->pc = 0x22F858u;
            goto label_22f858;
        }
    }
    ctx->pc = 0x22EF4Cu;
label_22ef4c:
    // 0x22ef4c: 0x3043fffe  andi        $v1, $v0, 0xFFFE
    ctx->pc = 0x22ef4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_22ef50:
    // 0x22ef50: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22ef50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_22ef54:
    // 0x22ef54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22ef58:
    if (ctx->pc == 0x22EF58u) {
        ctx->pc = 0x22EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF54u;
        // 0x22ef58: 0xa6230078  sh          $v1, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF5Cu;
        goto label_22ef5c;
    }
    ctx->pc = 0x22EF54u;
    {
        const bool branch_taken_0x22ef54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF54u;
        // 0x22ef58: 0xa6230078  sh          $v1, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef54) {
            ctx->pc = 0x22EF6Cu;
            goto label_22ef6c;
        }
    }
    ctx->pc = 0x22EF5Cu;
label_22ef5c:
    // 0x22ef5c: 0x3062fffc  andi        $v0, $v1, 0xFFFC
    ctx->pc = 0x22ef5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65532);
label_22ef60:
    // 0x22ef60: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x22ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_22ef64:
    // 0x22ef64: 0xc08b6f0  jal         func_22DBC0
label_22ef68:
    if (ctx->pc == 0x22EF68u) {
        ctx->pc = 0x22EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF64u;
        // 0x22ef68: 0xa6220078  sh          $v0, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF6Cu;
        goto label_22ef6c;
    }
    ctx->pc = 0x22EF64u;
    SET_GPR_U32(ctx, 31, 0x22EF6Cu);
    ctx->pc = 0x22EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EF64u;
    // 0x22ef68: 0xa6220078  sh          $v0, 0x78($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBC0u, 0x22EF64u, 0x22EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF6Cu;
label_22ef6c:
    // 0x22ef6c: 0xc08c212  jal         func_230848
label_22ef70:
    if (ctx->pc == 0x22EF70u) {
        ctx->pc = 0x22EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF6Cu;
        // 0x22ef70: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF74u;
        goto label_22ef74;
    }
    ctx->pc = 0x22EF6Cu;
    SET_GPR_U32(ctx, 31, 0x22EF74u);
    ctx->pc = 0x22EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EF6Cu;
    // 0x22ef70: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230848u, 0x22EF6Cu, 0x22EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF74u;
label_22ef74:
    // 0x22ef74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_22ef78:
    // 0x22ef78: 0xc08c698  jal         func_231A60
label_22ef7c:
    if (ctx->pc == 0x22EF7Cu) {
        ctx->pc = 0x22EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF78u;
        // 0x22ef7c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF80u;
        goto label_22ef80;
    }
    ctx->pc = 0x22EF78u;
    SET_GPR_U32(ctx, 31, 0x22EF80u);
    ctx->pc = 0x22EF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EF78u;
    // 0x22ef7c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22EF78u, 0x22EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF80u;
label_22ef80:
    // 0x22ef80: 0x12c0ff95  beqz        $s6, . + 4 + (-0x6B << 2)
label_22ef84:
    if (ctx->pc == 0x22EF84u) {
        ctx->pc = 0x22EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF80u;
        // 0x22ef84: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF88u;
        goto label_22ef88;
    }
    ctx->pc = 0x22EF80u;
    {
        const bool branch_taken_0x22ef80 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF80u;
        // 0x22ef84: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef80) {
            ctx->pc = 0x22EDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22edd8;
        }
    }
    ctx->pc = 0x22EF88u;
label_22ef88:
    // 0x22ef88: 0x1000023f  b           . + 4 + (0x23F << 2)
label_22ef8c:
    if (ctx->pc == 0x22EF8Cu) {
        ctx->pc = 0x22EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF88u;
        // 0x22ef8c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF90u;
        goto label_22ef90;
    }
    ctx->pc = 0x22EF88u;
    {
        const bool branch_taken_0x22ef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF88u;
        // 0x22ef8c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef88) {
            ctx->pc = 0x22F888u;
            goto label_22f888;
        }
    }
    ctx->pc = 0x22EF90u;
label_22ef90:
    // 0x22ef90: 0x97c3000a  lhu         $v1, 0xA($fp)
    ctx->pc = 0x22ef90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
label_22ef94:
    // 0x22ef94: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22ef94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_22ef98:
    // 0x22ef98: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_22ef9c:
    if (ctx->pc == 0x22EF9Cu) {
        ctx->pc = 0x22EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF98u;
        // 0x22ef9c: 0xafb50018  sw          $s5, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFA0u;
        goto label_22efa0;
    }
    ctx->pc = 0x22EF98u;
    {
        const bool branch_taken_0x22ef98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF98u;
        // 0x22ef9c: 0xafb50018  sw          $s5, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef98) {
            ctx->pc = 0x22F10Cu;
            goto label_22f10c;
        }
    }
    ctx->pc = 0x22EFA0u;
label_22efa0:
    // 0x22efa0: 0x32930002  andi        $s3, $s4, 0x2
    ctx->pc = 0x22efa0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_22efa4:
    // 0x22efa4: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_22efa8:
    if (ctx->pc == 0x22EFA8u) {
        ctx->pc = 0x22EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFA4u;
        // 0x22efa8: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFACu;
        goto label_22efac;
    }
    ctx->pc = 0x22EFA4u;
    {
        const bool branch_taken_0x22efa4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFA4u;
        // 0x22efa8: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efa4) {
            ctx->pc = 0x22EFD8u;
            goto label_22efd8;
        }
    }
    ctx->pc = 0x22EFACu;
label_22efac:
    // 0x22efac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22efb0:
    // 0x22efb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22efb4:
    if (ctx->pc == 0x22EFB4u) {
        ctx->pc = 0x22EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFB0u;
        // 0x22efb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFB8u;
        goto label_22efb8;
    }
    ctx->pc = 0x22EFB0u;
    {
        const bool branch_taken_0x22efb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFB0u;
        // 0x22efb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efb0) {
            ctx->pc = 0x22EFD0u;
            goto label_22efd0;
        }
    }
    ctx->pc = 0x22EFB8u;
label_22efb8:
    // 0x22efb8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x22efb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22efbc:
    // 0x22efbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22efbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22efc0:
    // 0x22efc0: 0xc08aa68  jal         func_22A9A0
label_22efc4:
    if (ctx->pc == 0x22EFC4u) {
        ctx->pc = 0x22EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFC0u;
        // 0x22efc4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFC8u;
        goto label_22efc8;
    }
    ctx->pc = 0x22EFC0u;
    SET_GPR_U32(ctx, 31, 0x22EFC8u);
    ctx->pc = 0x22EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EFC0u;
    // 0x22efc4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A9A0u, 0x22EFC0u, 0x22EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EFC8u;
label_22efc8:
    // 0x22efc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22efcc:
    // 0x22efcc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22efccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22efd0:
    // 0x22efd0: 0x1000004e  b           . + 4 + (0x4E << 2)
label_22efd4:
    if (ctx->pc == 0x22EFD4u) {
        ctx->pc = 0x22EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFD0u;
        // 0x22efd4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFD8u;
        goto label_22efd8;
    }
    ctx->pc = 0x22EFD0u;
    {
        const bool branch_taken_0x22efd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFD0u;
        // 0x22efd4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22efd0) {
            ctx->pc = 0x22F10Cu;
            goto label_22f10c;
        }
    }
    ctx->pc = 0x22EFD8u;
label_22efd8:
    // 0x22efd8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x22efd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22efdc:
    // 0x22efdc: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x22efdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
label_22efe0:
    // 0x22efe0: 0xde230058  ld          $v1, 0x58($s1)
    ctx->pc = 0x22efe0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 88)));
label_22efe4:
    // 0x22efe4: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x22efe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_22efe8:
    // 0x22efe8: 0x6463ff00  daddiu      $v1, $v1, -0x100
    ctx->pc = 0x22efe8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967040);
label_22efec:
    // 0x22efec: 0xfe220048  sd          $v0, 0x48($s1)
    ctx->pc = 0x22efecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
label_22eff0:
    // 0x22eff0: 0xfe230058  sd          $v1, 0x58($s1)
    ctx->pc = 0x22eff0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 3));
label_22eff4:
    // 0x22eff4: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x22eff4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22eff8:
    // 0x22eff8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22eff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22effc:
    // 0x22effc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22f000:
    if (ctx->pc == 0x22F000u) {
        ctx->pc = 0x22F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFFCu;
        // 0x22f000: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F004u;
        goto label_22f004;
    }
    ctx->pc = 0x22EFFCu;
    {
        const bool branch_taken_0x22effc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFFCu;
        // 0x22f000: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22effc) {
            ctx->pc = 0x22F010u;
            goto label_22f010;
        }
    }
    ctx->pc = 0x22F004u;
label_22f004:
    // 0x22f004: 0x9e02002c  lwu         $v0, 0x2C($s0)
    ctx->pc = 0x22f004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_22f008:
    // 0x22f008: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x22f008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_22f00c:
    // 0x22f00c: 0xfe220058  sd          $v0, 0x58($s1)
    ctx->pc = 0x22f00cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 2));
label_22f010:
    // 0x22f010: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22f014:
    // 0x22f014: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22f018:
    if (ctx->pc == 0x22F018u) {
        ctx->pc = 0x22F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F014u;
        // 0x22f018: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F01Cu;
        goto label_22f01c;
    }
    ctx->pc = 0x22F014u;
    {
        const bool branch_taken_0x22f014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F014u;
        // 0x22f018: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f014) {
            ctx->pc = 0x22F030u;
            goto label_22f030;
        }
    }
    ctx->pc = 0x22F01Cu;
label_22f01c:
    // 0x22f01c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x22f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_22f020:
    // 0x22f020: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22f024:
    // 0x22f024: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x22f024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_22f028:
    // 0x22f028: 0x10000037  b           . + 4 + (0x37 << 2)
label_22f02c:
    if (ctx->pc == 0x22F02Cu) {
        ctx->pc = 0x22F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F028u;
        // 0x22f02c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F030u;
        goto label_22f030;
    }
    ctx->pc = 0x22F028u;
    {
        const bool branch_taken_0x22f028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F028u;
        // 0x22f02c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f028) {
            ctx->pc = 0x22F108u;
            goto label_22f108;
        }
    }
    ctx->pc = 0x22F030u;
label_22f030:
    // 0x22f030: 0xc08c682  jal         func_231A08
label_22f034:
    if (ctx->pc == 0x22F034u) {
        ctx->pc = 0x22F038u;
        goto label_22f038;
    }
    ctx->pc = 0x22F030u;
    SET_GPR_U32(ctx, 31, 0x22F038u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22F030u, 0x22F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F038u;
label_22f038:
    // 0x22f038: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x22f038u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f03c:
    // 0x22f03c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22f03cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f040:
    // 0x22f040: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x22f040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_22f044:
    // 0x22f044: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22f048:
    if (ctx->pc == 0x22F048u) {
        ctx->pc = 0x22F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F044u;
        // 0x22f048: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F04Cu;
        goto label_22f04c;
    }
    ctx->pc = 0x22F044u;
    {
        const bool branch_taken_0x22f044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F044u;
        // 0x22f048: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f044) {
            ctx->pc = 0x22F070u;
            goto label_22f070;
        }
    }
    ctx->pc = 0x22F04Cu;
label_22f04c:
    // 0x22f04c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x22f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_22f050:
    // 0x22f050: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_22f054:
    if (ctx->pc == 0x22F054u) {
        ctx->pc = 0x22F058u;
        goto label_22f058;
    }
    ctx->pc = 0x22F050u;
    {
        const bool branch_taken_0x22f050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f050) {
            ctx->pc = 0x22F070u;
            goto label_22f070;
        }
    }
    ctx->pc = 0x22F058u;
label_22f058:
    // 0x22f058: 0xc08a9d6  jal         func_22A758
label_22f05c:
    if (ctx->pc == 0x22F05Cu) {
        ctx->pc = 0x22F060u;
        goto label_22f060;
    }
    ctx->pc = 0x22F058u;
    SET_GPR_U32(ctx, 31, 0x22F060u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22F058u, 0x22F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F060u;
label_22f060:
    // 0x22f060: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x22f060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_22f064:
    // 0x22f064: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x22f064u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f068:
    // 0x22f068: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x22f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_22f06c:
    // 0x22f06c: 0x0  nop
    ctx->pc = 0x22f06cu;
    // NOP
label_22f070:
    // 0x22f070: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_22f074:
    if (ctx->pc == 0x22F074u) {
        ctx->pc = 0x22F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F070u;
        // 0x22f074: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F078u;
        goto label_22f078;
    }
    ctx->pc = 0x22F070u;
    {
        const bool branch_taken_0x22f070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f070) {
            ctx->pc = 0x22F074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F070u;
            // 0x22f074: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F0F4u;
            goto label_22f0f4;
        }
    }
    ctx->pc = 0x22F078u;
label_22f078:
    // 0x22f078: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x22f078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_22f07c:
    // 0x22f07c: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_22f080:
    if (ctx->pc == 0x22F080u) {
        ctx->pc = 0x22F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F07Cu;
        // 0x22f080: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F084u;
        goto label_22f084;
    }
    ctx->pc = 0x22F07Cu;
    {
        const bool branch_taken_0x22f07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x22F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F07Cu;
        // 0x22f080: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f07c) {
            ctx->pc = 0x22F0A0u;
            goto label_22f0a0;
        }
    }
    ctx->pc = 0x22F084u;
label_22f084:
    // 0x22f084: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x22f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22f088:
    // 0x22f088: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x22f088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_22f08c:
    // 0x22f08c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x22f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22f090:
    // 0x22f090: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x22f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_22f094:
    // 0x22f094: 0x10000012  b           . + 4 + (0x12 << 2)
label_22f098:
    if (ctx->pc == 0x22F098u) {
        ctx->pc = 0x22F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F094u;
        // 0x22f098: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F09Cu;
        goto label_22f09c;
    }
    ctx->pc = 0x22F094u;
    {
        const bool branch_taken_0x22f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F094u;
        // 0x22f098: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f094) {
            ctx->pc = 0x22F0E0u;
            goto label_22f0e0;
        }
    }
    ctx->pc = 0x22F09Cu;
label_22f09c:
    // 0x22f09c: 0x0  nop
    ctx->pc = 0x22f09cu;
    // NOP
label_22f0a0:
    // 0x22f0a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22f0a4:
    if (ctx->pc == 0x22F0A4u) {
        ctx->pc = 0x22F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0A0u;
        // 0x22f0a4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0A8u;
        goto label_22f0a8;
    }
    ctx->pc = 0x22F0A0u;
    {
        const bool branch_taken_0x22f0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f0a0) {
            ctx->pc = 0x22F0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F0A0u;
            // 0x22f0a4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F0B8u;
            goto label_22f0b8;
        }
    }
    ctx->pc = 0x22F0A8u;
label_22f0a8:
    // 0x22f0a8: 0xc098560  jal         func_261580
label_22f0ac:
    if (ctx->pc == 0x22F0ACu) {
        ctx->pc = 0x22F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0A8u;
        // 0x22f0ac: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0B0u;
        goto label_22f0b0;
    }
    ctx->pc = 0x22F0A8u;
    SET_GPR_U32(ctx, 31, 0x22F0B0u);
    ctx->pc = 0x22F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F0A8u;
    // 0x22f0ac: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22F0A8u, 0x22F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0B0u;
label_22f0b0:
    // 0x22f0b0: 0x1000000c  b           . + 4 + (0xC << 2)
label_22f0b4:
    if (ctx->pc == 0x22F0B4u) {
        ctx->pc = 0x22F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0B0u;
        // 0x22f0b4: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0B8u;
        goto label_22f0b8;
    }
    ctx->pc = 0x22F0B0u;
    {
        const bool branch_taken_0x22f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0B0u;
        // 0x22f0b4: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f0b0) {
            ctx->pc = 0x22F0E4u;
            goto label_22f0e4;
        }
    }
    ctx->pc = 0x22F0B8u;
label_22f0b8:
    // 0x22f0b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22f0bc:
    if (ctx->pc == 0x22F0BCu) {
        ctx->pc = 0x22F0C0u;
        goto label_22f0c0;
    }
    ctx->pc = 0x22F0B8u;
    {
        const bool branch_taken_0x22f0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f0b8) {
            ctx->pc = 0x22F0D8u;
            goto label_22f0d8;
        }
    }
    ctx->pc = 0x22F0C0u;
label_22f0c0:
    // 0x22f0c0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x22f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_22f0c4:
    // 0x22f0c4: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x22f0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_22f0c8:
    // 0x22f0c8: 0x40f809  jalr        $v0
label_22f0cc:
    if (ctx->pc == 0x22F0CCu) {
        ctx->pc = 0x22F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0C8u;
        // 0x22f0cc: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0D0u;
        goto label_22f0d0;
    }
    ctx->pc = 0x22F0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22F0D0u);
        ctx->pc = 0x22F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0C8u;
        // 0x22f0cc: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F0C8u, 0x22F0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F0D0u;
label_22f0d0:
    // 0x22f0d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_22f0d4:
    if (ctx->pc == 0x22F0D4u) {
        ctx->pc = 0x22F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0D0u;
        // 0x22f0d4: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0D8u;
        goto label_22f0d8;
    }
    ctx->pc = 0x22F0D0u;
    {
        const bool branch_taken_0x22f0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0D0u;
        // 0x22f0d4: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f0d0) {
            ctx->pc = 0x22F0E4u;
            goto label_22f0e4;
        }
    }
    ctx->pc = 0x22F0D8u;
label_22f0d8:
    // 0x22f0d8: 0xc098560  jal         func_261580
label_22f0dc:
    if (ctx->pc == 0x22F0DCu) {
        ctx->pc = 0x22F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0D8u;
        // 0x22f0dc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0E0u;
        goto label_22f0e0;
    }
    ctx->pc = 0x22F0D8u;
    SET_GPR_U32(ctx, 31, 0x22F0E0u);
    ctx->pc = 0x22F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F0D8u;
    // 0x22f0dc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22F0D8u, 0x22F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0E0u;
label_22f0e0:
    // 0x22f0e0: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x22f0e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f0e4:
    // 0x22f0e4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_22f0e8:
    // 0x22f0e8: 0x3042fff6  andi        $v0, $v0, 0xFFF6
    ctx->pc = 0x22f0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65526);
label_22f0ec:
    // 0x22f0ec: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x22f0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_22f0f0:
    // 0x22f0f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22f0f4:
    // 0x22f0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f0f8:
    // 0x22f0f8: 0xc098560  jal         func_261580
label_22f0fc:
    if (ctx->pc == 0x22F0FCu) {
        ctx->pc = 0x22F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0F8u;
        // 0x22f0fc: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F100u;
        goto label_22f100;
    }
    ctx->pc = 0x22F0F8u;
    SET_GPR_U32(ctx, 31, 0x22F100u);
    ctx->pc = 0x22F0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F0F8u;
    // 0x22f0fc: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22F0F8u, 0x22F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F100u;
label_22f100:
    // 0x22f100: 0xc08c698  jal         func_231A60
label_22f104:
    if (ctx->pc == 0x22F104u) {
        ctx->pc = 0x22F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F100u;
        // 0x22f104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F108u;
        goto label_22f108;
    }
    ctx->pc = 0x22F100u;
    SET_GPR_U32(ctx, 31, 0x22F108u);
    ctx->pc = 0x22F104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F100u;
    // 0x22f104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22F100u, 0x22F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F108u;
label_22f108:
    // 0x22f108: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x22f108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_22f10c:
    // 0x22f10c: 0x12000084  beqz        $s0, . + 4 + (0x84 << 2)
label_22f110:
    if (ctx->pc == 0x22F110u) {
        ctx->pc = 0x22F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F10Cu;
        // 0x22f110: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F114u;
        goto label_22f114;
    }
    ctx->pc = 0x22F10Cu;
    {
        const bool branch_taken_0x22f10c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F10Cu;
        // 0x22f110: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f10c) {
            ctx->pc = 0x22F320u;
            goto label_22f320;
        }
    }
    ctx->pc = 0x22F114u;
label_22f114:
    // 0x22f114: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x22f114u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_22f118:
    // 0x22f118: 0x14620077  bne         $v1, $v0, . + 4 + (0x77 << 2)
label_22f11c:
    if (ctx->pc == 0x22F11Cu) {
        ctx->pc = 0x22F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F118u;
        // 0x22f11c: 0x96040010  lhu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F120u;
        goto label_22f120;
    }
    ctx->pc = 0x22F118u;
    {
        const bool branch_taken_0x22f118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F118u;
        // 0x22f11c: 0x96040010  lhu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f118) {
            ctx->pc = 0x22F2F8u;
            goto label_22f2f8;
        }
    }
    ctx->pc = 0x22F120u;
label_22f120:
    // 0x22f120: 0x32930002  andi        $s3, $s4, 0x2
    ctx->pc = 0x22f120u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_22f124:
    // 0x22f124: 0x0  nop
    ctx->pc = 0x22f124u;
    // NOP
label_22f128:
    // 0x22f128: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_22f12c:
    if (ctx->pc == 0x22F12Cu) {
        ctx->pc = 0x22F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F128u;
        // 0x22f12c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F130u;
        goto label_22f130;
    }
    ctx->pc = 0x22F128u;
    {
        const bool branch_taken_0x22f128 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F128u;
        // 0x22f12c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f128) {
            ctx->pc = 0x22F158u;
            goto label_22f158;
        }
    }
    ctx->pc = 0x22F130u;
label_22f130:
    // 0x22f130: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_22f134:
    if (ctx->pc == 0x22F134u) {
        ctx->pc = 0x22F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F130u;
        // 0x22f134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F138u;
        goto label_22f138;
    }
    ctx->pc = 0x22F130u;
    {
        const bool branch_taken_0x22f130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F130u;
        // 0x22f134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f130) {
            ctx->pc = 0x22F150u;
            goto label_22f150;
        }
    }
    ctx->pc = 0x22F138u;
label_22f138:
    // 0x22f138: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x22f138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22f13c:
    // 0x22f13c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f140:
    // 0x22f140: 0xc08aa68  jal         func_22A9A0
label_22f144:
    if (ctx->pc == 0x22F144u) {
        ctx->pc = 0x22F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F140u;
        // 0x22f144: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F148u;
        goto label_22f148;
    }
    ctx->pc = 0x22F140u;
    SET_GPR_U32(ctx, 31, 0x22F148u);
    ctx->pc = 0x22F144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F140u;
    // 0x22f144: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A9A0u, 0x22F140u, 0x22F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F148u;
label_22f148:
    // 0x22f148: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x22f148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_22f14c:
    // 0x22f14c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_22f150:
    // 0x22f150: 0x1000005c  b           . + 4 + (0x5C << 2)
label_22f154:
    if (ctx->pc == 0x22F154u) {
        ctx->pc = 0x22F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F150u;
        // 0x22f154: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F158u;
        goto label_22f158;
    }
    ctx->pc = 0x22F150u;
    {
        const bool branch_taken_0x22f150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F150u;
        // 0x22f154: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f150) {
            ctx->pc = 0x22F2C4u;
            goto label_22f2c4;
        }
    }
    ctx->pc = 0x22F158u;
label_22f158:
    // 0x22f158: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x22f158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22f15c:
    // 0x22f15c: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x22f15cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
label_22f160:
    // 0x22f160: 0xde230058  ld          $v1, 0x58($s1)
    ctx->pc = 0x22f160u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 88)));
label_22f164:
    // 0x22f164: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x22f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_22f168:
    // 0x22f168: 0x6463ff00  daddiu      $v1, $v1, -0x100
    ctx->pc = 0x22f168u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967040);
label_22f16c:
    // 0x22f16c: 0xfe220048  sd          $v0, 0x48($s1)
    ctx->pc = 0x22f16cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
label_22f170:
    // 0x22f170: 0xfe230058  sd          $v1, 0x58($s1)
    ctx->pc = 0x22f170u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 3));
label_22f174:
    // 0x22f174: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x22f174u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f178:
    // 0x22f178: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22f17c:
    // 0x22f17c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22f180:
    if (ctx->pc == 0x22F180u) {
        ctx->pc = 0x22F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F17Cu;
        // 0x22f180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F184u;
        goto label_22f184;
    }
    ctx->pc = 0x22F17Cu;
    {
        const bool branch_taken_0x22f17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F17Cu;
        // 0x22f180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f17c) {
            ctx->pc = 0x22F194u;
            goto label_22f194;
        }
    }
    ctx->pc = 0x22F184u;
label_22f184:
    // 0x22f184: 0x9e02002c  lwu         $v0, 0x2C($s0)
    ctx->pc = 0x22f184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_22f188:
    // 0x22f188: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x22f188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_22f18c:
    // 0x22f18c: 0xfe220058  sd          $v0, 0x58($s1)
    ctx->pc = 0x22f18cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 2));
label_22f190:
    // 0x22f190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22f190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f194:
    // 0x22f194: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x22f194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_22f198:
    // 0x22f198: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_22f19c:
    if (ctx->pc == 0x22F19Cu) {
        ctx->pc = 0x22F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F198u;
        // 0x22f19c: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1A0u;
        goto label_22f1a0;
    }
    ctx->pc = 0x22F198u;
    {
        const bool branch_taken_0x22f198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F198u;
        // 0x22f19c: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f198) {
            ctx->pc = 0x22F1E8u;
            goto label_22f1e8;
        }
    }
    ctx->pc = 0x22F1A0u;
label_22f1a0:
    // 0x22f1a0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x22f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_22f1a4:
    // 0x22f1a4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x22f1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22f1a8:
    // 0x22f1a8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_22f1ac:
    if (ctx->pc == 0x22F1ACu) {
        ctx->pc = 0x22F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1A8u;
        // 0x22f1ac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1B0u;
        goto label_22f1b0;
    }
    ctx->pc = 0x22F1A8u;
    {
        const bool branch_taken_0x22f1a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1A8u;
        // 0x22f1ac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1a8) {
            ctx->pc = 0x22F1D4u;
            goto label_22f1d4;
        }
    }
    ctx->pc = 0x22F1B0u;
label_22f1b0:
    // 0x22f1b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22f1b4:
    // 0x22f1b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x22f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_22f1b8:
    // 0x22f1b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_22f1bc:
    // 0x22f1bc: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_22f1c0:
    if (ctx->pc == 0x22F1C0u) {
        ctx->pc = 0x22F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1BCu;
        // 0x22f1c0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1C4u;
        goto label_22f1c4;
    }
    ctx->pc = 0x22F1BCu;
    {
        const bool branch_taken_0x22f1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1BCu;
        // 0x22f1c0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1bc) {
            ctx->pc = 0x22F1D4u;
            goto label_22f1d4;
        }
    }
    ctx->pc = 0x22F1C4u;
label_22f1c4:
    // 0x22f1c4: 0xa0f809  jalr        $a1
label_22f1c8:
    if (ctx->pc == 0x22F1C8u) {
        ctx->pc = 0x22F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1C4u;
        // 0x22f1c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1CCu;
        goto label_22f1cc;
    }
    ctx->pc = 0x22F1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x22F1CCu);
        ctx->pc = 0x22F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1C4u;
        // 0x22f1c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F1C4u, 0x22F1CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F1CCu;
label_22f1cc:
    // 0x22f1cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x22f1ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f1d0:
    // 0x22f1d0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x22f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_22f1d4:
    // 0x22f1d4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x22f1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_22f1d8:
    // 0x22f1d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22f1dc:
    // 0x22f1dc: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x22f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_22f1e0:
    // 0x22f1e0: 0x10000037  b           . + 4 + (0x37 << 2)
label_22f1e4:
    if (ctx->pc == 0x22F1E4u) {
        ctx->pc = 0x22F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1E0u;
        // 0x22f1e4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F1E8u;
        goto label_22f1e8;
    }
    ctx->pc = 0x22F1E0u;
    {
        const bool branch_taken_0x22f1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1E0u;
        // 0x22f1e4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1e0) {
            ctx->pc = 0x22F2C0u;
            goto label_22f2c0;
        }
    }
    ctx->pc = 0x22F1E8u;
label_22f1e8:
    // 0x22f1e8: 0xc08c682  jal         func_231A08
label_22f1ec:
    if (ctx->pc == 0x22F1ECu) {
        ctx->pc = 0x22F1F0u;
        goto label_22f1f0;
    }
    ctx->pc = 0x22F1E8u;
    SET_GPR_U32(ctx, 31, 0x22F1F0u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22F1E8u, 0x22F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1F0u;
label_22f1f0:
    // 0x22f1f0: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x22f1f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f1f4:
    // 0x22f1f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22f1f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f1f8:
    // 0x22f1f8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x22f1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_22f1fc:
    // 0x22f1fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22f200:
    if (ctx->pc == 0x22F200u) {
        ctx->pc = 0x22F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1FCu;
        // 0x22f200: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F204u;
        goto label_22f204;
    }
    ctx->pc = 0x22F1FCu;
    {
        const bool branch_taken_0x22f1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1FCu;
        // 0x22f200: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1fc) {
            ctx->pc = 0x22F228u;
            goto label_22f228;
        }
    }
    ctx->pc = 0x22F204u;
label_22f204:
    // 0x22f204: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x22f204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_22f208:
    // 0x22f208: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_22f20c:
    if (ctx->pc == 0x22F20Cu) {
        ctx->pc = 0x22F210u;
        goto label_22f210;
    }
    ctx->pc = 0x22F208u;
    {
        const bool branch_taken_0x22f208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f208) {
            ctx->pc = 0x22F228u;
            goto label_22f228;
        }
    }
    ctx->pc = 0x22F210u;
label_22f210:
    // 0x22f210: 0xc08a9d6  jal         func_22A758
label_22f214:
    if (ctx->pc == 0x22F214u) {
        ctx->pc = 0x22F218u;
        goto label_22f218;
    }
    ctx->pc = 0x22F210u;
    SET_GPR_U32(ctx, 31, 0x22F218u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22F210u, 0x22F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F218u;
label_22f218:
    // 0x22f218: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x22f218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_22f21c:
    // 0x22f21c: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x22f21cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f220:
    // 0x22f220: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x22f220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_22f224:
    // 0x22f224: 0x0  nop
    ctx->pc = 0x22f224u;
    // NOP
label_22f228:
    // 0x22f228: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_22f22c:
    if (ctx->pc == 0x22F22Cu) {
        ctx->pc = 0x22F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F228u;
        // 0x22f22c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F230u;
        goto label_22f230;
    }
    ctx->pc = 0x22F228u;
    {
        const bool branch_taken_0x22f228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f228) {
            ctx->pc = 0x22F22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F228u;
            // 0x22f22c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F2ACu;
            goto label_22f2ac;
        }
    }
    ctx->pc = 0x22F230u;
label_22f230:
    // 0x22f230: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x22f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_22f234:
    // 0x22f234: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_22f238:
    if (ctx->pc == 0x22F238u) {
        ctx->pc = 0x22F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F234u;
        // 0x22f238: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F23Cu;
        goto label_22f23c;
    }
    ctx->pc = 0x22F234u;
    {
        const bool branch_taken_0x22f234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x22F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F234u;
        // 0x22f238: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f234) {
            ctx->pc = 0x22F258u;
            goto label_22f258;
        }
    }
    ctx->pc = 0x22F23Cu;
label_22f23c:
    // 0x22f23c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x22f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22f240:
    // 0x22f240: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x22f240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_22f244:
    // 0x22f244: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x22f244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22f248:
    // 0x22f248: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x22f248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_22f24c:
    // 0x22f24c: 0x10000012  b           . + 4 + (0x12 << 2)
label_22f250:
    if (ctx->pc == 0x22F250u) {
        ctx->pc = 0x22F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F24Cu;
        // 0x22f250: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F254u;
        goto label_22f254;
    }
    ctx->pc = 0x22F24Cu;
    {
        const bool branch_taken_0x22f24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F24Cu;
        // 0x22f250: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f24c) {
            ctx->pc = 0x22F298u;
            goto label_22f298;
        }
    }
    ctx->pc = 0x22F254u;
label_22f254:
    // 0x22f254: 0x0  nop
    ctx->pc = 0x22f254u;
    // NOP
label_22f258:
    // 0x22f258: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22f25c:
    if (ctx->pc == 0x22F25Cu) {
        ctx->pc = 0x22F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F258u;
        // 0x22f25c: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F260u;
        goto label_22f260;
    }
    ctx->pc = 0x22F258u;
    {
        const bool branch_taken_0x22f258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f258) {
            ctx->pc = 0x22F25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F258u;
            // 0x22f25c: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F270u;
            goto label_22f270;
        }
    }
    ctx->pc = 0x22F260u;
label_22f260:
    // 0x22f260: 0xc098560  jal         func_261580
label_22f264:
    if (ctx->pc == 0x22F264u) {
        ctx->pc = 0x22F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F260u;
        // 0x22f264: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F268u;
        goto label_22f268;
    }
    ctx->pc = 0x22F260u;
    SET_GPR_U32(ctx, 31, 0x22F268u);
    ctx->pc = 0x22F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F260u;
    // 0x22f264: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22F260u, 0x22F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F268u;
label_22f268:
    // 0x22f268: 0x1000000c  b           . + 4 + (0xC << 2)
label_22f26c:
    if (ctx->pc == 0x22F26Cu) {
        ctx->pc = 0x22F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F268u;
        // 0x22f26c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F270u;
        goto label_22f270;
    }
    ctx->pc = 0x22F268u;
    {
        const bool branch_taken_0x22f268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F268u;
        // 0x22f26c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f268) {
            ctx->pc = 0x22F29Cu;
            goto label_22f29c;
        }
    }
    ctx->pc = 0x22F270u;
label_22f270:
    // 0x22f270: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22f274:
    if (ctx->pc == 0x22F274u) {
        ctx->pc = 0x22F278u;
        goto label_22f278;
    }
    ctx->pc = 0x22F270u;
    {
        const bool branch_taken_0x22f270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f270) {
            ctx->pc = 0x22F290u;
            goto label_22f290;
        }
    }
    ctx->pc = 0x22F278u;
label_22f278:
    // 0x22f278: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x22f278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_22f27c:
    // 0x22f27c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x22f27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_22f280:
    // 0x22f280: 0x40f809  jalr        $v0
label_22f284:
    if (ctx->pc == 0x22F284u) {
        ctx->pc = 0x22F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F280u;
        // 0x22f284: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F288u;
        goto label_22f288;
    }
    ctx->pc = 0x22F280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22F288u);
        ctx->pc = 0x22F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F280u;
        // 0x22f284: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F280u, 0x22F288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F288u;
label_22f288:
    // 0x22f288: 0x10000004  b           . + 4 + (0x4 << 2)
label_22f28c:
    if (ctx->pc == 0x22F28Cu) {
        ctx->pc = 0x22F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F288u;
        // 0x22f28c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F290u;
        goto label_22f290;
    }
    ctx->pc = 0x22F288u;
    {
        const bool branch_taken_0x22f288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F288u;
        // 0x22f28c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f288) {
            ctx->pc = 0x22F29Cu;
            goto label_22f29c;
        }
    }
    ctx->pc = 0x22F290u;
label_22f290:
    // 0x22f290: 0xc098560  jal         func_261580
label_22f294:
    if (ctx->pc == 0x22F294u) {
        ctx->pc = 0x22F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F290u;
        // 0x22f294: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F298u;
        goto label_22f298;
    }
    ctx->pc = 0x22F290u;
    SET_GPR_U32(ctx, 31, 0x22F298u);
    ctx->pc = 0x22F294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F290u;
    // 0x22f294: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22F290u, 0x22F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F298u;
label_22f298:
    // 0x22f298: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x22f298u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f29c:
    // 0x22f29c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_22f2a0:
    // 0x22f2a0: 0x3042fff6  andi        $v0, $v0, 0xFFF6
    ctx->pc = 0x22f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65526);
label_22f2a4:
    // 0x22f2a4: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x22f2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_22f2a8:
    // 0x22f2a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22f2ac:
    // 0x22f2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f2b0:
    // 0x22f2b0: 0xc098560  jal         func_261580
label_22f2b4:
    if (ctx->pc == 0x22F2B4u) {
        ctx->pc = 0x22F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2B0u;
        // 0x22f2b4: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2B8u;
        goto label_22f2b8;
    }
    ctx->pc = 0x22F2B0u;
    SET_GPR_U32(ctx, 31, 0x22F2B8u);
    ctx->pc = 0x22F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2B0u;
    // 0x22f2b4: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22F2B0u, 0x22F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2B8u;
label_22f2b8:
    // 0x22f2b8: 0xc08c698  jal         func_231A60
label_22f2bc:
    if (ctx->pc == 0x22F2BCu) {
        ctx->pc = 0x22F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2B8u;
        // 0x22f2bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2C0u;
        goto label_22f2c0;
    }
    ctx->pc = 0x22F2B8u;
    SET_GPR_U32(ctx, 31, 0x22F2C0u);
    ctx->pc = 0x22F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2B8u;
    // 0x22f2bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22F2B8u, 0x22F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2C0u;
label_22f2c0:
    // 0x22f2c0: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x22f2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_22f2c4:
    // 0x22f2c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x22f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_22f2c8:
    // 0x22f2c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22f2cc:
    if (ctx->pc == 0x22F2CCu) {
        ctx->pc = 0x22F2D0u;
        goto label_22f2d0;
    }
    ctx->pc = 0x22F2C8u;
    {
        const bool branch_taken_0x22f2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2c8) {
            ctx->pc = 0x22F2DCu;
            goto label_22f2dc;
        }
    }
    ctx->pc = 0x22F2D0u;
label_22f2d0:
    // 0x22f2d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22f2d4:
    // 0x22f2d4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x22f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_22f2d8:
    // 0x22f2d8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x22f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_22f2dc:
    // 0x22f2dc: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_22f2e0:
    if (ctx->pc == 0x22F2E0u) {
        ctx->pc = 0x22F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2DCu;
        // 0x22f2e0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2E4u;
        goto label_22f2e4;
    }
    ctx->pc = 0x22F2DCu;
    {
        const bool branch_taken_0x22f2dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2DCu;
        // 0x22f2e0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2dc) {
            ctx->pc = 0x22F320u;
            goto label_22f320;
        }
    }
    ctx->pc = 0x22F2E4u;
label_22f2e4:
    // 0x22f2e4: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x22f2e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_22f2e8:
    // 0x22f2e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_22f2ec:
    if (ctx->pc == 0x22F2ECu) {
        ctx->pc = 0x22F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2E8u;
        // 0x22f2ec: 0x96040010  lhu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F2F0u;
        goto label_22f2f0;
    }
    ctx->pc = 0x22F2E8u;
    {
        const bool branch_taken_0x22f2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2E8u;
        // 0x22f2ec: 0x96040010  lhu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2e8) {
            ctx->pc = 0x22F2F8u;
            goto label_22f2f8;
        }
    }
    ctx->pc = 0x22F2F0u;
label_22f2f0:
    // 0x22f2f0: 0x12c0ff8d  beqz        $s6, . + 4 + (-0x73 << 2)
label_22f2f4:
    if (ctx->pc == 0x22F2F4u) {
        ctx->pc = 0x22F2F8u;
        goto label_22f2f8;
    }
    ctx->pc = 0x22F2F0u;
    {
        const bool branch_taken_0x22f2f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2f0) {
            ctx->pc = 0x22F128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f128;
        }
    }
    ctx->pc = 0x22F2F8u;
label_22f2f8:
    // 0x22f2f8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_22f2fc:
    if (ctx->pc == 0x22F2FCu) {
        ctx->pc = 0x22F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2F8u;
        // 0x22f2fc: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F300u;
        goto label_22f300;
    }
    ctx->pc = 0x22F2F8u;
    {
        const bool branch_taken_0x22f2f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2F8u;
        // 0x22f2fc: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2f8) {
            ctx->pc = 0x22F320u;
            goto label_22f320;
        }
    }
    ctx->pc = 0x22F300u;
label_22f300:
    // 0x22f300: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_22f304:
    if (ctx->pc == 0x22F304u) {
        ctx->pc = 0x22F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F300u;
        // 0x22f304: 0xae150004  sw          $s5, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F308u;
        goto label_22f308;
    }
    ctx->pc = 0x22F300u;
    {
        const bool branch_taken_0x22f300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f300) {
            ctx->pc = 0x22F304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F300u;
            // 0x22f304: 0xae150004  sw          $s5, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F308u;
            goto label_22f308;
        }
    }
    ctx->pc = 0x22F308u;
label_22f308:
    // 0x22f308: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x22f308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_22f30c:
    // 0x22f30c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x22f30cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_22f310:
    // 0x22f310: 0x36840001  ori         $a0, $s4, 0x1
    ctx->pc = 0x22f310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
label_22f314:
    // 0x22f314: 0x38430007  xori        $v1, $v0, 0x7
    ctx->pc = 0x22f314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_22f318:
    // 0x22f318: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22f318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_22f31c:
    // 0x22f31c: 0x83a00a  movz        $s4, $a0, $v1
    ctx->pc = 0x22f31cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
label_22f320:
    // 0x22f320: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x22f320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_22f324:
    // 0x22f324: 0x100000fc  b           . + 4 + (0xFC << 2)
label_22f328:
    if (ctx->pc == 0x22F328u) {
        ctx->pc = 0x22F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F324u;
        // 0x22f328: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F32Cu;
        goto label_22f32c;
    }
    ctx->pc = 0x22F324u;
    {
        const bool branch_taken_0x22f324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F324u;
        // 0x22f328: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f324) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F32Cu;
label_22f32c:
    // 0x22f32c: 0x0  nop
    ctx->pc = 0x22f32cu;
    // NOP
label_22f330:
    // 0x22f330: 0xde230040  ld          $v1, 0x40($s1)
    ctx->pc = 0x22f330u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 64)));
label_22f334:
    // 0x22f334: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x22f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
label_22f338:
    // 0x22f338: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x22f338u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_22f33c:
    // 0x22f33c: 0x8ef20010  lw          $s2, 0x10($s7)
    ctx->pc = 0x22f33cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_22f340:
    // 0x22f340: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_22f344:
    if (ctx->pc == 0x22F344u) {
        ctx->pc = 0x22F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F340u;
        // 0x22f344: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F348u;
        goto label_22f348;
    }
    ctx->pc = 0x22F340u;
    {
        const bool branch_taken_0x22f340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F340u;
        // 0x22f344: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f340) {
            ctx->pc = 0x22F364u;
            goto label_22f364;
        }
    }
    ctx->pc = 0x22F348u;
label_22f348:
    // 0x22f348: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x22f348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_22f34c:
    // 0x22f34c: 0x64102f  dsubu       $v0, $v1, $a0
    ctx->pc = 0x22f34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_22f350:
    // 0x22f350: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x22f350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_22f354:
    // 0x22f354: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22f358:
    if (ctx->pc == 0x22F358u) {
        ctx->pc = 0x22F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F354u;
        // 0x22f358: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F35Cu;
        goto label_22f35c;
    }
    ctx->pc = 0x22F354u;
    {
        const bool branch_taken_0x22f354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F354u;
        // 0x22f358: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f354) {
            ctx->pc = 0x22F364u;
            goto label_22f364;
        }
    }
    ctx->pc = 0x22F35Cu;
label_22f35c:
    // 0x22f35c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x22f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_22f360:
    // 0x22f360: 0x439023  subu        $s2, $v0, $v1
    ctx->pc = 0x22f360u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22f364:
    // 0x22f364: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x22f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22f368:
    // 0x22f368: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x22f368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_22f36c:
    // 0x22f36c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x22f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22f370:
    // 0x22f370: 0x52182a  slt         $v1, $v0, $s2
    ctx->pc = 0x22f370u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_22f374:
    // 0x22f374: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x22f374u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_22f378:
    // 0x22f378: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x22f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_22f37c:
    // 0x22f37c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_22f380:
    if (ctx->pc == 0x22F380u) {
        ctx->pc = 0x22F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F37Cu;
        // 0x22f380: 0xf21023  subu        $v0, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F384u;
        goto label_22f384;
    }
    ctx->pc = 0x22F37Cu;
    {
        const bool branch_taken_0x22f37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F37Cu;
        // 0x22f380: 0xf21023  subu        $v0, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f37c) {
            ctx->pc = 0x22F3E4u;
            goto label_22f3e4;
        }
    }
    ctx->pc = 0x22F384u;
label_22f384:
    // 0x22f384: 0xc08c698  jal         func_231A60
label_22f388:
    if (ctx->pc == 0x22F388u) {
        ctx->pc = 0x22F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F384u;
        // 0x22f388: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F38Cu;
        goto label_22f38c;
    }
    ctx->pc = 0x22F384u;
    SET_GPR_U32(ctx, 31, 0x22F38Cu);
    ctx->pc = 0x22F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F384u;
    // 0x22f388: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22F384u, 0x22F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F38Cu;
label_22f38c:
    // 0x22f38c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22f390:
    // 0x22f390: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22f390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22f394:
    // 0x22f394: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x22f394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_22f398:
    // 0x22f398: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x22f398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_22f39c:
    // 0x22f39c: 0xc08c6b0  jal         func_231AC0
label_22f3a0:
    if (ctx->pc == 0x22F3A0u) {
        ctx->pc = 0x22F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F39Cu;
        // 0x22f3a0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3A4u;
        goto label_22f3a4;
    }
    ctx->pc = 0x22F39Cu;
    SET_GPR_U32(ctx, 31, 0x22F3A4u);
    ctx->pc = 0x22F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F39Cu;
    // 0x22f3a0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AC0u, 0x22F39Cu, 0x22F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3A4u;
label_22f3a4:
    // 0x22f3a4: 0xc08c682  jal         func_231A08
label_22f3a8:
    if (ctx->pc == 0x22F3A8u) {
        ctx->pc = 0x22F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3A4u;
        // 0x22f3a8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3ACu;
        goto label_22f3ac;
    }
    ctx->pc = 0x22F3A4u;
    SET_GPR_U32(ctx, 31, 0x22F3ACu);
    ctx->pc = 0x22F3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3A4u;
    // 0x22f3a8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22F3A4u, 0x22F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3ACu;
label_22f3ac:
    // 0x22f3ac: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
label_22f3b0:
    if (ctx->pc == 0x22F3B0u) {
        ctx->pc = 0x22F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3ACu;
        // 0x22f3b0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3B4u;
        goto label_22f3b4;
    }
    ctx->pc = 0x22F3ACu;
    {
        const bool branch_taken_0x22f3ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3ACu;
        // 0x22f3b0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3ac) {
            ctx->pc = 0x22F3E8u;
            goto label_22f3e8;
        }
    }
    ctx->pc = 0x22F3B4u;
label_22f3b4:
    // 0x22f3b4: 0x12000127  beqz        $s0, . + 4 + (0x127 << 2)
label_22f3b8:
    if (ctx->pc == 0x22F3B8u) {
        ctx->pc = 0x22F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3B4u;
        // 0x22f3b8: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3BCu;
        goto label_22f3bc;
    }
    ctx->pc = 0x22F3B4u;
    {
        const bool branch_taken_0x22f3b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3B4u;
        // 0x22f3b8: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3b4) {
            ctx->pc = 0x22F854u;
            goto label_22f854;
        }
    }
    ctx->pc = 0x22F3BCu;
label_22f3bc:
    // 0x22f3bc: 0x50800126  beql        $a0, $zero, . + 4 + (0x126 << 2)
label_22f3c0:
    if (ctx->pc == 0x22F3C0u) {
        ctx->pc = 0x22F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3BCu;
        // 0x22f3c0: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3C4u;
        goto label_22f3c4;
    }
    ctx->pc = 0x22F3BCu;
    {
        const bool branch_taken_0x22f3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3bc) {
            ctx->pc = 0x22F3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F3BCu;
            // 0x22f3c0: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F858u;
            goto label_22f858;
        }
    }
    ctx->pc = 0x22F3C4u;
label_22f3c4:
    // 0x22f3c4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x22f3c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
label_22f3c8:
    // 0x22f3c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22f3cc:
    // 0x22f3cc: 0x50400122  beql        $v0, $zero, . + 4 + (0x122 << 2)
label_22f3d0:
    if (ctx->pc == 0x22F3D0u) {
        ctx->pc = 0x22F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3CCu;
        // 0x22f3d0: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3D4u;
        goto label_22f3d4;
    }
    ctx->pc = 0x22F3CCu;
    {
        const bool branch_taken_0x22f3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3cc) {
            ctx->pc = 0x22F3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F3CCu;
            // 0x22f3d0: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F858u;
            goto label_22f858;
        }
    }
    ctx->pc = 0x22F3D4u;
label_22f3d4:
    // 0x22f3d4: 0xc08c5a6  jal         func_231698
label_22f3d8:
    if (ctx->pc == 0x22F3D8u) {
        ctx->pc = 0x22F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3D4u;
        // 0x22f3d8: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3DCu;
        goto label_22f3dc;
    }
    ctx->pc = 0x22F3D4u;
    SET_GPR_U32(ctx, 31, 0x22F3DCu);
    ctx->pc = 0x22F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3D4u;
    // 0x22f3d8: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231698u, 0x22F3D4u, 0x22F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3DCu;
label_22f3dc:
    // 0x22f3dc: 0x1000011e  b           . + 4 + (0x11E << 2)
label_22f3e0:
    if (ctx->pc == 0x22F3E0u) {
        ctx->pc = 0x22F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3DCu;
        // 0x22f3e0: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3E4u;
        goto label_22f3e4;
    }
    ctx->pc = 0x22F3DCu;
    {
        const bool branch_taken_0x22f3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3DCu;
        // 0x22f3e0: 0x96220078  lhu         $v0, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3dc) {
            ctx->pc = 0x22F858u;
            goto label_22f858;
        }
    }
    ctx->pc = 0x22F3E4u;
label_22f3e4:
    // 0x22f3e4: 0xaee20010  sw          $v0, 0x10($s7)
    ctx->pc = 0x22f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 2));
label_22f3e8:
    // 0x22f3e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x22f3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22f3ec:
    // 0x22f3ec: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x22f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_22f3f0:
    // 0x22f3f0: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x22f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22f3f4:
    // 0x22f3f4: 0x1642005f  bne         $s2, $v0, . + 4 + (0x5F << 2)
label_22f3f8:
    if (ctx->pc == 0x22F3F8u) {
        ctx->pc = 0x22F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3F4u;
        // 0x22f3f8: 0x32930002  andi        $s3, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3FCu;
        goto label_22f3fc;
    }
    ctx->pc = 0x22F3F4u;
    {
        const bool branch_taken_0x22f3f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3F4u;
        // 0x22f3f8: 0x32930002  andi        $s3, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3f4) {
            ctx->pc = 0x22F574u;
            goto label_22f574;
        }
    }
    ctx->pc = 0x22F3FCu;
label_22f3fc:
    // 0x22f3fc: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x22f3fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f400:
    // 0x22f400: 0x36830008  ori         $v1, $s4, 0x8
    ctx->pc = 0x22f400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
label_22f404:
    // 0x22f404: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22f404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_22f408:
    // 0x22f408: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x22f408u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_22f40c:
    // 0x22f40c: 0x32930002  andi        $s3, $s4, 0x2
    ctx->pc = 0x22f40cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_22f410:
    // 0x22f410: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_22f414:
    if (ctx->pc == 0x22F414u) {
        ctx->pc = 0x22F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F410u;
        // 0x22f414: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F418u;
        goto label_22f418;
    }
    ctx->pc = 0x22F410u;
    {
        const bool branch_taken_0x22f410 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f410) {
            ctx->pc = 0x22F414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F410u;
            // 0x22f414: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F424u;
            goto label_22f424;
        }
    }
    ctx->pc = 0x22F418u;
label_22f418:
    // 0x22f418: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x22f418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22f41c:
    // 0x22f41c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_22f420:
    if (ctx->pc == 0x22F420u) {
        ctx->pc = 0x22F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F41Cu;
        // 0x22f420: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F424u;
        goto label_22f424;
    }
    ctx->pc = 0x22F41Cu;
    {
        const bool branch_taken_0x22f41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F41Cu;
        // 0x22f420: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f41c) {
            ctx->pc = 0x22F5D0u;
            goto label_22f5d0;
        }
    }
    ctx->pc = 0x22F424u;
label_22f424:
    // 0x22f424: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x22f424u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
label_22f428:
    // 0x22f428: 0xde240058  ld          $a0, 0x58($s1)
    ctx->pc = 0x22f428u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 88)));
label_22f42c:
    // 0x22f42c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x22f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_22f430:
    // 0x22f430: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22f434:
    // 0x22f434: 0x6484ff00  daddiu      $a0, $a0, -0x100
    ctx->pc = 0x22f434u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967040);
label_22f438:
    // 0x22f438: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x22f438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_22f43c:
    // 0x22f43c: 0xfe220048  sd          $v0, 0x48($s1)
    ctx->pc = 0x22f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
label_22f440:
    // 0x22f440: 0xfe240058  sd          $a0, 0x58($s1)
    ctx->pc = 0x22f440u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 4));
label_22f444:
    // 0x22f444: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x22f444u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f448:
    // 0x22f448: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22f44c:
    // 0x22f44c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22f450:
    if (ctx->pc == 0x22F450u) {
        ctx->pc = 0x22F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F44Cu;
        // 0x22f450: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F454u;
        goto label_22f454;
    }
    ctx->pc = 0x22F44Cu;
    {
        const bool branch_taken_0x22f44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f44c) {
            ctx->pc = 0x22F450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F44Cu;
            // 0x22f450: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F464u;
            goto label_22f464;
        }
    }
    ctx->pc = 0x22F454u;
label_22f454:
    // 0x22f454: 0x9e02002c  lwu         $v0, 0x2C($s0)
    ctx->pc = 0x22f454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_22f458:
    // 0x22f458: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x22f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
label_22f45c:
    // 0x22f45c: 0xfe220058  sd          $v0, 0x58($s1)
    ctx->pc = 0x22f45cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 2));
label_22f460:
    // 0x22f460: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x22f460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_22f464:
    // 0x22f464: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_22f468:
    if (ctx->pc == 0x22F468u) {
        ctx->pc = 0x22F46Cu;
        goto label_22f46c;
    }
    ctx->pc = 0x22F464u;
    {
        const bool branch_taken_0x22f464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f464) {
            ctx->pc = 0x22F488u;
            goto label_22f488;
        }
    }
    ctx->pc = 0x22F46Cu;
label_22f46c:
    // 0x22f46c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x22f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_22f470:
    // 0x22f470: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x22f470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
label_22f474:
    // 0x22f474: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x22f474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22f478:
    // 0x22f478: 0xae300070  sw          $s0, 0x70($s1)
    ctx->pc = 0x22f478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 16));
label_22f47c:
    // 0x22f47c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x22f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_22f480:
    // 0x22f480: 0x10000038  b           . + 4 + (0x38 << 2)
label_22f484:
    if (ctx->pc == 0x22F484u) {
        ctx->pc = 0x22F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F480u;
        // 0x22f484: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F488u;
        goto label_22f488;
    }
    ctx->pc = 0x22F480u;
    {
        const bool branch_taken_0x22f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F480u;
        // 0x22f484: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f480) {
            ctx->pc = 0x22F564u;
            goto label_22f564;
        }
    }
    ctx->pc = 0x22F488u;
label_22f488:
    // 0x22f488: 0xc08c682  jal         func_231A08
label_22f48c:
    if (ctx->pc == 0x22F48Cu) {
        ctx->pc = 0x22F490u;
        goto label_22f490;
    }
    ctx->pc = 0x22F488u;
    SET_GPR_U32(ctx, 31, 0x22F490u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22F488u, 0x22F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F490u;
label_22f490:
    // 0x22f490: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x22f490u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f494:
    // 0x22f494: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x22f494u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f498:
    // 0x22f498: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x22f498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_22f49c:
    // 0x22f49c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22f4a0:
    if (ctx->pc == 0x22F4A0u) {
        ctx->pc = 0x22F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F49Cu;
        // 0x22f4a0: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4A4u;
        goto label_22f4a4;
    }
    ctx->pc = 0x22F49Cu;
    {
        const bool branch_taken_0x22f49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F49Cu;
        // 0x22f4a0: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f49c) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F4A4u;
label_22f4a4:
    // 0x22f4a4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x22f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_22f4a8:
    // 0x22f4a8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_22f4ac:
    if (ctx->pc == 0x22F4ACu) {
        ctx->pc = 0x22F4B0u;
        goto label_22f4b0;
    }
    ctx->pc = 0x22F4A8u;
    {
        const bool branch_taken_0x22f4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f4a8) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F4B0u;
label_22f4b0:
    // 0x22f4b0: 0xc08a9d6  jal         func_22A758
label_22f4b4:
    if (ctx->pc == 0x22F4B4u) {
        ctx->pc = 0x22F4B8u;
        goto label_22f4b8;
    }
    ctx->pc = 0x22F4B0u;
    SET_GPR_U32(ctx, 31, 0x22F4B8u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22F4B0u, 0x22F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4B8u;
label_22f4b8:
    // 0x22f4b8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x22f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_22f4bc:
    // 0x22f4bc: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x22f4bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f4c0:
    // 0x22f4c0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x22f4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_22f4c4:
    // 0x22f4c4: 0x0  nop
    ctx->pc = 0x22f4c4u;
    // NOP
label_22f4c8:
    // 0x22f4c8: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_22f4cc:
    if (ctx->pc == 0x22F4CCu) {
        ctx->pc = 0x22F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4C8u;
        // 0x22f4cc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4D0u;
        goto label_22f4d0;
    }
    ctx->pc = 0x22F4C8u;
    {
        const bool branch_taken_0x22f4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f4c8) {
            ctx->pc = 0x22F4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F4C8u;
            // 0x22f4cc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F54Cu;
            goto label_22f54c;
        }
    }
    ctx->pc = 0x22F4D0u;
label_22f4d0:
    // 0x22f4d0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x22f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_22f4d4:
    // 0x22f4d4: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_22f4d8:
    if (ctx->pc == 0x22F4D8u) {
        ctx->pc = 0x22F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4D4u;
        // 0x22f4d8: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4DCu;
        goto label_22f4dc;
    }
    ctx->pc = 0x22F4D4u;
    {
        const bool branch_taken_0x22f4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x22F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4D4u;
        // 0x22f4d8: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4d4) {
            ctx->pc = 0x22F4F8u;
            goto label_22f4f8;
        }
    }
    ctx->pc = 0x22F4DCu;
label_22f4dc:
    // 0x22f4dc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x22f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22f4e0:
    // 0x22f4e0: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x22f4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_22f4e4:
    // 0x22f4e4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x22f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22f4e8:
    // 0x22f4e8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x22f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_22f4ec:
    // 0x22f4ec: 0x10000012  b           . + 4 + (0x12 << 2)
label_22f4f0:
    if (ctx->pc == 0x22F4F0u) {
        ctx->pc = 0x22F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4ECu;
        // 0x22f4f0: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4F4u;
        goto label_22f4f4;
    }
    ctx->pc = 0x22F4ECu;
    {
        const bool branch_taken_0x22f4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4ECu;
        // 0x22f4f0: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4ec) {
            ctx->pc = 0x22F538u;
            goto label_22f538;
        }
    }
    ctx->pc = 0x22F4F4u;
label_22f4f4:
    // 0x22f4f4: 0x0  nop
    ctx->pc = 0x22f4f4u;
    // NOP
label_22f4f8:
    // 0x22f4f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22f4fc:
    if (ctx->pc == 0x22F4FCu) {
        ctx->pc = 0x22F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4F8u;
        // 0x22f4fc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F500u;
        goto label_22f500;
    }
    ctx->pc = 0x22F4F8u;
    {
        const bool branch_taken_0x22f4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f4f8) {
            ctx->pc = 0x22F4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F4F8u;
            // 0x22f4fc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F510u;
            goto label_22f510;
        }
    }
    ctx->pc = 0x22F500u;
label_22f500:
    // 0x22f500: 0xc098560  jal         func_261580
label_22f504:
    if (ctx->pc == 0x22F504u) {
        ctx->pc = 0x22F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F500u;
        // 0x22f504: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F508u;
        goto label_22f508;
    }
    ctx->pc = 0x22F500u;
    SET_GPR_U32(ctx, 31, 0x22F508u);
    ctx->pc = 0x22F504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F500u;
    // 0x22f504: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22F500u, 0x22F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F508u;
label_22f508:
    // 0x22f508: 0x1000000c  b           . + 4 + (0xC << 2)
label_22f50c:
    if (ctx->pc == 0x22F50Cu) {
        ctx->pc = 0x22F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F508u;
        // 0x22f50c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F510u;
        goto label_22f510;
    }
    ctx->pc = 0x22F508u;
    {
        const bool branch_taken_0x22f508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F508u;
        // 0x22f50c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f508) {
            ctx->pc = 0x22F53Cu;
            goto label_22f53c;
        }
    }
    ctx->pc = 0x22F510u;
label_22f510:
    // 0x22f510: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22f514:
    if (ctx->pc == 0x22F514u) {
        ctx->pc = 0x22F518u;
        goto label_22f518;
    }
    ctx->pc = 0x22F510u;
    {
        const bool branch_taken_0x22f510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f510) {
            ctx->pc = 0x22F530u;
            goto label_22f530;
        }
    }
    ctx->pc = 0x22F518u;
label_22f518:
    // 0x22f518: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x22f518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_22f51c:
    // 0x22f51c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x22f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_22f520:
    // 0x22f520: 0x40f809  jalr        $v0
label_22f524:
    if (ctx->pc == 0x22F524u) {
        ctx->pc = 0x22F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F520u;
        // 0x22f524: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F528u;
        goto label_22f528;
    }
    ctx->pc = 0x22F520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22F528u);
        ctx->pc = 0x22F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F520u;
        // 0x22f524: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F520u, 0x22F528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F528u;
label_22f528:
    // 0x22f528: 0x10000004  b           . + 4 + (0x4 << 2)
label_22f52c:
    if (ctx->pc == 0x22F52Cu) {
        ctx->pc = 0x22F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F528u;
        // 0x22f52c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F530u;
        goto label_22f530;
    }
    ctx->pc = 0x22F528u;
    {
        const bool branch_taken_0x22f528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F528u;
        // 0x22f52c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f528) {
            ctx->pc = 0x22F53Cu;
            goto label_22f53c;
        }
    }
    ctx->pc = 0x22F530u;
label_22f530:
    // 0x22f530: 0xc098560  jal         func_261580
label_22f534:
    if (ctx->pc == 0x22F534u) {
        ctx->pc = 0x22F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F530u;
        // 0x22f534: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F538u;
        goto label_22f538;
    }
    ctx->pc = 0x22F530u;
    SET_GPR_U32(ctx, 31, 0x22F538u);
    ctx->pc = 0x22F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F530u;
    // 0x22f534: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22F530u, 0x22F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F538u;
label_22f538:
    // 0x22f538: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x22f538u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22f53c:
    // 0x22f53c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_22f540:
    // 0x22f540: 0x3042fff6  andi        $v0, $v0, 0xFFF6
    ctx->pc = 0x22f540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65526);
label_22f544:
    // 0x22f544: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x22f544u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_22f548:
    // 0x22f548: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22f548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22f54c:
    // 0x22f54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f550:
    // 0x22f550: 0xc098560  jal         func_261580
label_22f554:
    if (ctx->pc == 0x22F554u) {
        ctx->pc = 0x22F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F550u;
        // 0x22f554: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F558u;
        goto label_22f558;
    }
    ctx->pc = 0x22F550u;
    SET_GPR_U32(ctx, 31, 0x22F558u);
    ctx->pc = 0x22F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F550u;
    // 0x22f554: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x22F550u, 0x22F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F558u;
label_22f558:
    // 0x22f558: 0xc08c698  jal         func_231A60
label_22f55c:
    if (ctx->pc == 0x22F55Cu) {
        ctx->pc = 0x22F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F558u;
        // 0x22f55c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F560u;
        goto label_22f560;
    }
    ctx->pc = 0x22F558u;
    SET_GPR_U32(ctx, 31, 0x22F560u);
    ctx->pc = 0x22F55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F558u;
    // 0x22f55c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22F558u, 0x22F560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F560u;
label_22f560:
    // 0x22f560: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x22f560u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_22f564:
    // 0x22f564: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_22f568:
    if (ctx->pc == 0x22F568u) {
        ctx->pc = 0x22F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F564u;
        // 0x22f568: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F56Cu;
        goto label_22f56c;
    }
    ctx->pc = 0x22F564u;
    {
        const bool branch_taken_0x22f564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F564u;
        // 0x22f568: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f564) {
            ctx->pc = 0x22F5D0u;
            goto label_22f5d0;
        }
    }
    ctx->pc = 0x22F56Cu;
label_22f56c:
    // 0x22f56c: 0x10000018  b           . + 4 + (0x18 << 2)
label_22f570:
    if (ctx->pc == 0x22F570u) {
        ctx->pc = 0x22F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F56Cu;
        // 0x22f570: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F574u;
        goto label_22f574;
    }
    ctx->pc = 0x22F56Cu;
    {
        const bool branch_taken_0x22f56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F56Cu;
        // 0x22f570: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f56c) {
            ctx->pc = 0x22F5D0u;
            goto label_22f5d0;
        }
    }
    ctx->pc = 0x22F574u;
label_22f574:
    // 0x22f574: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_22f578:
    if (ctx->pc == 0x22F578u) {
        ctx->pc = 0x22F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F574u;
        // 0x22f578: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F57Cu;
        goto label_22f57c;
    }
    ctx->pc = 0x22F574u;
    {
        const bool branch_taken_0x22f574 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F574u;
        // 0x22f578: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f574) {
            ctx->pc = 0x22F58Cu;
            goto label_22f58c;
        }
    }
    ctx->pc = 0x22F57Cu;
label_22f57c:
    // 0x22f57c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x22f57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_22f580:
    // 0x22f580: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x22f580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_22f584:
    // 0x22f584: 0x10000012  b           . + 4 + (0x12 << 2)
label_22f588:
    if (ctx->pc == 0x22F588u) {
        ctx->pc = 0x22F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F584u;
        // 0x22f588: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F58Cu;
        goto label_22f58c;
    }
    ctx->pc = 0x22F584u;
    {
        const bool branch_taken_0x22f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F584u;
        // 0x22f588: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f584) {
            ctx->pc = 0x22F5D0u;
            goto label_22f5d0;
        }
    }
    ctx->pc = 0x22F58Cu;
label_22f58c:
    // 0x22f58c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22f590:
    if (ctx->pc == 0x22F590u) {
        ctx->pc = 0x22F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F58Cu;
        // 0x22f590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F594u;
        goto label_22f594;
    }
    ctx->pc = 0x22F58Cu;
    {
        const bool branch_taken_0x22f58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F58Cu;
        // 0x22f590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f58c) {
            ctx->pc = 0x22F5B0u;
            goto label_22f5b0;
        }
    }
    ctx->pc = 0x22F594u;
label_22f594:
    // 0x22f594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f598:
    // 0x22f598: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22f59c:
    // 0x22f59c: 0xc08aa68  jal         func_22A9A0
label_22f5a0:
    if (ctx->pc == 0x22F5A0u) {
        ctx->pc = 0x22F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F59Cu;
        // 0x22f5a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F5A4u;
        goto label_22f5a4;
    }
    ctx->pc = 0x22F59Cu;
    SET_GPR_U32(ctx, 31, 0x22F5A4u);
    ctx->pc = 0x22F5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F59Cu;
    // 0x22f5a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A9A0u, 0x22F59Cu, 0x22F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5A4u;
label_22f5a4:
    // 0x22f5a4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x22f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_22f5a8:
    // 0x22f5a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22f5ac:
    // 0x22f5ac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x22f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22f5b0:
    // 0x22f5b0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22f5b4:
    // 0x22f5b4: 0x921023  subu        $v0, $a0, $s2
    ctx->pc = 0x22f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_22f5b8:
    // 0x22f5b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x22f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_22f5bc:
    // 0x22f5bc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x22f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_22f5c0:
    // 0x22f5c0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x22f5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_22f5c4:
    // 0x22f5c4: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x22f5c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
label_22f5c8:
    // 0x22f5c8: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x22f5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
label_22f5cc:
    // 0x22f5cc: 0xfe220048  sd          $v0, 0x48($s1)
    ctx->pc = 0x22f5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
label_22f5d0:
    // 0x22f5d0: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x22f5d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
label_22f5d4:
    // 0x22f5d4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_22f5d8:
    if (ctx->pc == 0x22F5D8u) {
        ctx->pc = 0x22F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5D4u;
        // 0x22f5d8: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F5DCu;
        goto label_22f5dc;
    }
    ctx->pc = 0x22F5D4u;
    {
        const bool branch_taken_0x22f5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f5d4) {
            ctx->pc = 0x22F5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F5D4u;
            // 0x22f5d8: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F614u;
            goto label_22f614;
        }
    }
    ctx->pc = 0x22F5DCu;
label_22f5dc:
    // 0x22f5dc: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
label_22f5e0:
    if (ctx->pc == 0x22F5E0u) {
        ctx->pc = 0x22F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5DCu;
        // 0x22f5e0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F5E4u;
        goto label_22f5e4;
    }
    ctx->pc = 0x22F5DCu;
    {
        const bool branch_taken_0x22f5dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5DCu;
        // 0x22f5e0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5dc) {
            ctx->pc = 0x22F600u;
            goto label_22f600;
        }
    }
    ctx->pc = 0x22F5E4u;
label_22f5e4:
    // 0x22f5e4: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x22f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
label_22f5e8:
    // 0x22f5e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_22f5ec:
    if (ctx->pc == 0x22F5ECu) {
        ctx->pc = 0x22F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5E8u;
        // 0x22f5ec: 0xfe220040  sd          $v0, 0x40($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F5F0u;
        goto label_22f5f0;
    }
    ctx->pc = 0x22F5E8u;
    {
        const bool branch_taken_0x22f5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5E8u;
        // 0x22f5ec: 0xfe220040  sd          $v0, 0x40($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5e8) {
            ctx->pc = 0x22F610u;
            goto label_22f610;
        }
    }
    ctx->pc = 0x22F5F0u;
label_22f5f0:
    // 0x22f5f0: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x22f5f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_22f5f4:
    // 0x22f5f4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x22f5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_22f5f8:
    // 0x22f5f8: 0x10000058  b           . + 4 + (0x58 << 2)
label_22f5fc:
    if (ctx->pc == 0x22F5FCu) {
        ctx->pc = 0x22F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5F8u;
        // 0x22f5fc: 0xa6220006  sh          $v0, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F600u;
        goto label_22f600;
    }
    ctx->pc = 0x22F5F8u;
    {
        const bool branch_taken_0x22f5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5F8u;
        // 0x22f5fc: 0xa6220006  sh          $v0, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5f8) {
            ctx->pc = 0x22F75Cu;
            goto label_22f75c;
        }
    }
    ctx->pc = 0x22F600u;
label_22f600:
    // 0x22f600: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x22f600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_22f604:
    // 0x22f604: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x22f604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22f608:
    // 0x22f608: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
label_22f60c:
    if (ctx->pc == 0x22F60Cu) {
        ctx->pc = 0x22F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F608u;
        // 0x22f60c: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F610u;
        goto label_22f610;
    }
    ctx->pc = 0x22F608u;
    {
        const bool branch_taken_0x22f608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F608u;
        // 0x22f60c: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f608) {
            ctx->pc = 0x22F75Cu;
            goto label_22f75c;
        }
    }
    ctx->pc = 0x22F610u;
label_22f610:
    // 0x22f610: 0x32820008  andi        $v0, $s4, 0x8
    ctx->pc = 0x22f610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_22f614:
    // 0x22f614: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
label_22f618:
    if (ctx->pc == 0x22F618u) {
        ctx->pc = 0x22F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F614u;
        // 0x22f618: 0x32930040  andi        $s3, $s4, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F61Cu;
        goto label_22f61c;
    }
    ctx->pc = 0x22F614u;
    {
        const bool branch_taken_0x22f614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F614u;
        // 0x22f618: 0x32930040  andi        $s3, $s4, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f614) {
            ctx->pc = 0x22F75Cu;
            goto label_22f75c;
        }
    }
    ctx->pc = 0x22F61Cu;
label_22f61c:
    // 0x22f61c: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
label_22f620:
    if (ctx->pc == 0x22F620u) {
        ctx->pc = 0x22F624u;
        goto label_22f624;
    }
    ctx->pc = 0x22F61Cu;
    {
        const bool branch_taken_0x22f61c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f61c) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F624u;
label_22f624:
    // 0x22f624: 0x1600003f  bnez        $s0, . + 4 + (0x3F << 2)
label_22f628:
    if (ctx->pc == 0x22F628u) {
        ctx->pc = 0x22F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F624u;
        // 0x22f628: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F62Cu;
        goto label_22f62c;
    }
    ctx->pc = 0x22F624u;
    {
        const bool branch_taken_0x22f624 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F624u;
        // 0x22f628: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f624) {
            ctx->pc = 0x22F724u;
            goto label_22f724;
        }
    }
    ctx->pc = 0x22F62Cu;
label_22f62c:
    // 0x22f62c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_22f630:
    if (ctx->pc == 0x22F630u) {
        ctx->pc = 0x22F634u;
        goto label_22f634;
    }
    ctx->pc = 0x22F62Cu;
    {
        const bool branch_taken_0x22f62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f62c) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F634u;
label_22f634:
    // 0x22f634: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x22f634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_22f638:
    // 0x22f638: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x22f638u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22f63c:
    // 0x22f63c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22f640:
    // 0x22f640: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_22f644:
    if (ctx->pc == 0x22F644u) {
        ctx->pc = 0x22F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F640u;
        // 0x22f644: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F648u;
        goto label_22f648;
    }
    ctx->pc = 0x22F640u;
    {
        const bool branch_taken_0x22f640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F640u;
        // 0x22f644: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f640) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F648u;
label_22f648:
    // 0x22f648: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
label_22f64c:
    if (ctx->pc == 0x22F64Cu) {
        ctx->pc = 0x22F650u;
        goto label_22f650;
    }
    ctx->pc = 0x22F648u;
    {
        const bool branch_taken_0x22f648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f648) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F650u;
label_22f650:
    // 0x22f650: 0x96220038  lhu         $v0, 0x38($s1)
    ctx->pc = 0x22f650u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_22f654:
    // 0x22f654: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_22f658:
    if (ctx->pc == 0x22F658u) {
        ctx->pc = 0x22F65Cu;
        goto label_22f65c;
    }
    ctx->pc = 0x22F654u;
    {
        const bool branch_taken_0x22f654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f654) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F65Cu;
label_22f65c:
    // 0x22f65c: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x22f65cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_22f660:
    // 0x22f660: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22f660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_22f664:
    // 0x22f664: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_22f668:
    if (ctx->pc == 0x22F668u) {
        ctx->pc = 0x22F66Cu;
        goto label_22f66c;
    }
    ctx->pc = 0x22F664u;
    {
        const bool branch_taken_0x22f664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f664) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F66Cu;
label_22f66c:
    // 0x22f66c: 0x26320048  addiu       $s2, $s1, 0x48
    ctx->pc = 0x22f66cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_22f670:
    // 0x22f670: 0xc08c212  jal         func_230848
label_22f674:
    if (ctx->pc == 0x22F674u) {
        ctx->pc = 0x22F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F670u;
        // 0x22f674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F678u;
        goto label_22f678;
    }
    ctx->pc = 0x22F670u;
    SET_GPR_U32(ctx, 31, 0x22F678u);
    ctx->pc = 0x22F674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F670u;
    // 0x22f674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230848u, 0x22F670u, 0x22F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F678u;
label_22f678:
    // 0x22f678: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x22f678u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f67c:
    // 0x22f67c: 0x52c0000e  beql        $s6, $zero, . + 4 + (0xE << 2)
label_22f680:
    if (ctx->pc == 0x22F680u) {
        ctx->pc = 0x22F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F67Cu;
        // 0x22f680: 0x8e300070  lw          $s0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F684u;
        goto label_22f684;
    }
    ctx->pc = 0x22F67Cu;
    {
        const bool branch_taken_0x22f67c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f67c) {
            ctx->pc = 0x22F680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F67Cu;
            // 0x22f680: 0x8e300070  lw          $s0, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F6B8u;
            goto label_22f6b8;
        }
    }
    ctx->pc = 0x22F684u;
label_22f684:
    // 0x22f684: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x22f684u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_22f688:
    // 0x22f688: 0x3043fffe  andi        $v1, $v0, 0xFFFE
    ctx->pc = 0x22f688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_22f68c:
    // 0x22f68c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22f68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_22f690:
    // 0x22f690: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22f694:
    if (ctx->pc == 0x22F694u) {
        ctx->pc = 0x22F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F690u;
        // 0x22f694: 0xa6230078  sh          $v1, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F698u;
        goto label_22f698;
    }
    ctx->pc = 0x22F690u;
    {
        const bool branch_taken_0x22f690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F690u;
        // 0x22f694: 0xa6230078  sh          $v1, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f690) {
            ctx->pc = 0x22F6A8u;
            goto label_22f6a8;
        }
    }
    ctx->pc = 0x22F698u;
label_22f698:
    // 0x22f698: 0x3062fffc  andi        $v0, $v1, 0xFFFC
    ctx->pc = 0x22f698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65532);
label_22f69c:
    // 0x22f69c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x22f69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_22f6a0:
    // 0x22f6a0: 0xc08b6f0  jal         func_22DBC0
label_22f6a4:
    if (ctx->pc == 0x22F6A4u) {
        ctx->pc = 0x22F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6A0u;
        // 0x22f6a4: 0xa6220078  sh          $v0, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F6A8u;
        goto label_22f6a8;
    }
    ctx->pc = 0x22F6A0u;
    SET_GPR_U32(ctx, 31, 0x22F6A8u);
    ctx->pc = 0x22F6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6A0u;
    // 0x22f6a4: 0xa6220078  sh          $v0, 0x78($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBC0u, 0x22F6A0u, 0x22F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6A8u;
label_22f6a8:
    // 0x22f6a8: 0xc08c698  jal         func_231A60
label_22f6ac:
    if (ctx->pc == 0x22F6ACu) {
        ctx->pc = 0x22F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6A8u;
        // 0x22f6ac: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F6B0u;
        goto label_22f6b0;
    }
    ctx->pc = 0x22F6A8u;
    SET_GPR_U32(ctx, 31, 0x22F6B0u);
    ctx->pc = 0x22F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6A8u;
    // 0x22f6ac: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22F6A8u, 0x22F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6B0u;
label_22f6b0:
    // 0x22f6b0: 0x10000074  b           . + 4 + (0x74 << 2)
label_22f6b4:
    if (ctx->pc == 0x22F6B4u) {
        ctx->pc = 0x22F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6B0u;
        // 0x22f6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F6B8u;
        goto label_22f6b8;
    }
    ctx->pc = 0x22F6B0u;
    {
        const bool branch_taken_0x22f6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6B0u;
        // 0x22f6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6b0) {
            ctx->pc = 0x22F884u;
            goto label_22f884;
        }
    }
    ctx->pc = 0x22F6B8u;
label_22f6b8:
    // 0x22f6b8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_22f6bc:
    if (ctx->pc == 0x22F6BCu) {
        ctx->pc = 0x22F6C0u;
        goto label_22f6c0;
    }
    ctx->pc = 0x22F6B8u;
    {
        const bool branch_taken_0x22f6b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f6b8) {
            ctx->pc = 0x22F6C8u;
            goto label_22f6c8;
        }
    }
    ctx->pc = 0x22F6C0u;
label_22f6c0:
    // 0x22f6c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22f6c4:
    // 0x22f6c4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x22f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_22f6c8:
    // 0x22f6c8: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_22f6cc:
    if (ctx->pc == 0x22F6CCu) {
        ctx->pc = 0x22F6D0u;
        goto label_22f6d0;
    }
    ctx->pc = 0x22F6C8u;
    {
        const bool branch_taken_0x22f6c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f6c8) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F6D0u;
label_22f6d0:
    // 0x22f6d0: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
label_22f6d4:
    if (ctx->pc == 0x22F6D4u) {
        ctx->pc = 0x22F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6D0u;
        // 0x22f6d4: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F6D8u;
        goto label_22f6d8;
    }
    ctx->pc = 0x22F6D0u;
    {
        const bool branch_taken_0x22f6d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6D0u;
        // 0x22f6d4: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6d0) {
            ctx->pc = 0x22F724u;
            goto label_22f724;
        }
    }
    ctx->pc = 0x22F6D8u;
label_22f6d8:
    // 0x22f6d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_22f6dc:
    if (ctx->pc == 0x22F6DCu) {
        ctx->pc = 0x22F6E0u;
        goto label_22f6e0;
    }
    ctx->pc = 0x22F6D8u;
    {
        const bool branch_taken_0x22f6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f6d8) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F6E0u;
label_22f6e0:
    // 0x22f6e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x22f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_22f6e4:
    // 0x22f6e4: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x22f6e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22f6e8:
    // 0x22f6e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22f6ec:
    // 0x22f6ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22f6f0:
    if (ctx->pc == 0x22F6F0u) {
        ctx->pc = 0x22F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6ECu;
        // 0x22f6f0: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F6F4u;
        goto label_22f6f4;
    }
    ctx->pc = 0x22F6ECu;
    {
        const bool branch_taken_0x22f6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6ECu;
        // 0x22f6f0: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6ec) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F6F4u;
label_22f6f4:
    // 0x22f6f4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_22f6f8:
    if (ctx->pc == 0x22F6F8u) {
        ctx->pc = 0x22F6FCu;
        goto label_22f6fc;
    }
    ctx->pc = 0x22F6F4u;
    {
        const bool branch_taken_0x22f6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f6f4) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F6FCu;
label_22f6fc:
    // 0x22f6fc: 0x96220038  lhu         $v0, 0x38($s1)
    ctx->pc = 0x22f6fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_22f700:
    // 0x22f700: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_22f704:
    if (ctx->pc == 0x22F704u) {
        ctx->pc = 0x22F708u;
        goto label_22f708;
    }
    ctx->pc = 0x22F700u;
    {
        const bool branch_taken_0x22f700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f700) {
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F708u;
label_22f708:
    // 0x22f708: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x22f708u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_22f70c:
    // 0x22f70c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22f70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_22f710:
    // 0x22f710: 0x1040ffd7  beqz        $v0, . + 4 + (-0x29 << 2)
label_22f714:
    if (ctx->pc == 0x22F714u) {
        ctx->pc = 0x22F718u;
        goto label_22f718;
    }
    ctx->pc = 0x22F710u;
    {
        const bool branch_taken_0x22f710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f710) {
            ctx->pc = 0x22F670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f670;
        }
    }
    ctx->pc = 0x22F718u;
label_22f718:
    // 0x22f718: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
label_22f71c:
    if (ctx->pc == 0x22F71Cu) {
        ctx->pc = 0x22F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F718u;
        // 0x22f71c: 0x32930002  andi        $s3, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F720u;
        goto label_22f720;
    }
    ctx->pc = 0x22F718u;
    {
        const bool branch_taken_0x22f718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f718) {
            ctx->pc = 0x22F71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F718u;
            // 0x22f71c: 0x32930002  andi        $s3, $s4, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F78Cu;
            goto label_22f78c;
        }
    }
    ctx->pc = 0x22F720u;
label_22f720:
    // 0x22f720: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x22f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_22f724:
    // 0x22f724: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_22f728:
    if (ctx->pc == 0x22F728u) {
        ctx->pc = 0x22F72Cu;
        goto label_22f72c;
    }
    ctx->pc = 0x22F724u;
    {
        const bool branch_taken_0x22f724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f724) {
            ctx->pc = 0x22F75Cu;
            goto label_22f75c;
        }
    }
    ctx->pc = 0x22F72Cu;
label_22f72c:
    // 0x22f72c: 0x16c0000b  bnez        $s6, . + 4 + (0xB << 2)
label_22f730:
    if (ctx->pc == 0x22F730u) {
        ctx->pc = 0x22F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F72Cu;
        // 0x22f730: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F734u;
        goto label_22f734;
    }
    ctx->pc = 0x22F72Cu;
    {
        const bool branch_taken_0x22f72c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F72Cu;
        // 0x22f730: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f72c) {
            ctx->pc = 0x22F75Cu;
            goto label_22f75c;
        }
    }
    ctx->pc = 0x22F734u;
label_22f734:
    // 0x22f734: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x22f734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_22f738:
    // 0x22f738: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_22f73c:
    if (ctx->pc == 0x22F73Cu) {
        ctx->pc = 0x22F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F738u;
        // 0x22f73c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F740u;
        goto label_22f740;
    }
    ctx->pc = 0x22F738u;
    {
        const bool branch_taken_0x22f738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F738u;
        // 0x22f73c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f738) {
            ctx->pc = 0x22F754u;
            goto label_22f754;
        }
    }
    ctx->pc = 0x22F740u;
label_22f740:
    // 0x22f740: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_22f744:
    // 0x22f744: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_22f748:
    if (ctx->pc == 0x22F748u) {
        ctx->pc = 0x22F74Cu;
        goto label_22f74c;
    }
    ctx->pc = 0x22F744u;
    {
        const bool branch_taken_0x22f744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f744) {
            ctx->pc = 0x22F75Cu;
            goto label_22f75c;
        }
    }
    ctx->pc = 0x22F74Cu;
label_22f74c:
    // 0x22f74c: 0x1000fef8  b           . + 4 + (-0x108 << 2)
label_22f750:
    if (ctx->pc == 0x22F750u) {
        ctx->pc = 0x22F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F74Cu;
        // 0x22f750: 0x96220006  lhu         $v0, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F754u;
        goto label_22f754;
    }
    ctx->pc = 0x22F74Cu;
    {
        const bool branch_taken_0x22f74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F74Cu;
        // 0x22f750: 0x96220006  lhu         $v0, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f74c) {
            ctx->pc = 0x22F330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f330;
        }
    }
    ctx->pc = 0x22F754u;
label_22f754:
    // 0x22f754: 0x5443fef6  bnel        $v0, $v1, . + 4 + (-0x10A << 2)
label_22f758:
    if (ctx->pc == 0x22F758u) {
        ctx->pc = 0x22F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F754u;
        // 0x22f758: 0x96220006  lhu         $v0, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F75Cu;
        goto label_22f75c;
    }
    ctx->pc = 0x22F754u;
    {
        const bool branch_taken_0x22f754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f754) {
            ctx->pc = 0x22F758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F754u;
            // 0x22f758: 0x96220006  lhu         $v0, 0x6($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f330;
        }
    }
    ctx->pc = 0x22F75Cu;
label_22f75c:
    // 0x22f75c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_22f760:
    if (ctx->pc == 0x22F760u) {
        ctx->pc = 0x22F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F75Cu;
        // 0x22f760: 0x32930002  andi        $s3, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F764u;
        goto label_22f764;
    }
    ctx->pc = 0x22F75Cu;
    {
        const bool branch_taken_0x22f75c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F75Cu;
        // 0x22f760: 0x32930002  andi        $s3, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f75c) {
            ctx->pc = 0x22F78Cu;
            goto label_22f78c;
        }
    }
    ctx->pc = 0x22F764u;
label_22f764:
    // 0x22f764: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x22f764u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
label_22f768:
    // 0x22f768: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22f76c:
    // 0x22f76c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22f770:
    if (ctx->pc == 0x22F770u) {
        ctx->pc = 0x22F774u;
        goto label_22f774;
    }
    ctx->pc = 0x22F76Cu;
    {
        const bool branch_taken_0x22f76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f76c) {
            ctx->pc = 0x22F78Cu;
            goto label_22f78c;
        }
    }
    ctx->pc = 0x22F774u;
label_22f774:
    // 0x22f774: 0x36940010  ori         $s4, $s4, 0x10
    ctx->pc = 0x22f774u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16);
label_22f778:
    // 0x22f778: 0x32930002  andi        $s3, $s4, 0x2
    ctx->pc = 0x22f778u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_22f77c:
    // 0x22f77c: 0x56600017  bnel        $s3, $zero, . + 4 + (0x17 << 2)
label_22f780:
    if (ctx->pc == 0x22F780u) {
        ctx->pc = 0x22F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F77Cu;
        // 0x22f780: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F784u;
        goto label_22f784;
    }
    ctx->pc = 0x22F77Cu;
    {
        const bool branch_taken_0x22f77c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f77c) {
            ctx->pc = 0x22F780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F77Cu;
            // 0x22f780: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F7DCu;
            goto label_22f7dc;
        }
    }
    ctx->pc = 0x22F784u;
label_22f784:
    // 0x22f784: 0xc08c5a6  jal         func_231698
label_22f788:
    if (ctx->pc == 0x22F788u) {
        ctx->pc = 0x22F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F784u;
        // 0x22f788: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F78Cu;
        goto label_22f78c;
    }
    ctx->pc = 0x22F784u;
    SET_GPR_U32(ctx, 31, 0x22F78Cu);
    ctx->pc = 0x22F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F784u;
    // 0x22f788: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231698u, 0x22F784u, 0x22F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F78Cu;
label_22f78c:
    // 0x22f78c: 0x56600013  bnel        $s3, $zero, . + 4 + (0x13 << 2)
label_22f790:
    if (ctx->pc == 0x22F790u) {
        ctx->pc = 0x22F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F78Cu;
        // 0x22f790: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F794u;
        goto label_22f794;
    }
    ctx->pc = 0x22F78Cu;
    {
        const bool branch_taken_0x22f78c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f78c) {
            ctx->pc = 0x22F790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F78Cu;
            // 0x22f790: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F7DCu;
            goto label_22f7dc;
        }
    }
    ctx->pc = 0x22F794u;
label_22f794:
    // 0x22f794: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
label_22f798:
    if (ctx->pc == 0x22F798u) {
        ctx->pc = 0x22F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F794u;
        // 0x22f798: 0x97c2000a  lhu         $v0, 0xA($fp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F79Cu;
        goto label_22f79c;
    }
    ctx->pc = 0x22F794u;
    {
        const bool branch_taken_0x22f794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f794) {
            ctx->pc = 0x22F798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F794u;
            // 0x22f798: 0x97c2000a  lhu         $v0, 0xA($fp) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F7A8u;
            goto label_22f7a8;
        }
    }
    ctx->pc = 0x22F79Cu;
label_22f79c:
    // 0x22f79c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_22f7a0:
    // 0x22f7a0: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x22f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_22f7a4:
    // 0x22f7a4: 0x97c2000a  lhu         $v0, 0xA($fp)
    ctx->pc = 0x22f7a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
label_22f7a8:
    // 0x22f7a8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x22f7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_22f7ac:
    // 0x22f7ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_22f7b0:
    if (ctx->pc == 0x22F7B0u) {
        ctx->pc = 0x22F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7ACu;
        // 0x22f7b0: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7B4u;
        goto label_22f7b4;
    }
    ctx->pc = 0x22F7ACu;
    {
        const bool branch_taken_0x22f7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f7ac) {
            ctx->pc = 0x22F7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F7ACu;
            // 0x22f7b0: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F7DCu;
            goto label_22f7dc;
        }
    }
    ctx->pc = 0x22F7B4u;
label_22f7b4:
    // 0x22f7b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x22f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22f7b8:
    // 0x22f7b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22f7bc:
    if (ctx->pc == 0x22F7BCu) {
        ctx->pc = 0x22F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7B8u;
        // 0x22f7bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7C0u;
        goto label_22f7c0;
    }
    ctx->pc = 0x22F7B8u;
    {
        const bool branch_taken_0x22f7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7B8u;
        // 0x22f7bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7b8) {
            ctx->pc = 0x22F7D8u;
            goto label_22f7d8;
        }
    }
    ctx->pc = 0x22F7C0u;
label_22f7c0:
    // 0x22f7c0: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x22f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_22f7c4:
    // 0x22f7c4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x22f7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22f7c8:
    // 0x22f7c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f7cc:
    // 0x22f7cc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22f7ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22f7d0:
    // 0x22f7d0: 0x40f809  jalr        $v0
label_22f7d4:
    if (ctx->pc == 0x22F7D4u) {
        ctx->pc = 0x22F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7D0u;
        // 0x22f7d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7D8u;
        goto label_22f7d8;
    }
    ctx->pc = 0x22F7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22F7D8u);
        ctx->pc = 0x22F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7D0u;
        // 0x22f7d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F7D0u, 0x22F7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F7D8u;
label_22f7d8:
    // 0x22f7d8: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x22f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_22f7dc:
    // 0x22f7dc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x22f7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_22f7e0:
    // 0x22f7e0: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
label_22f7e4:
    if (ctx->pc == 0x22F7E4u) {
        ctx->pc = 0x22F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7E0u;
        // 0x22f7e4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7E8u;
        goto label_22f7e8;
    }
    ctx->pc = 0x22F7E0u;
    {
        const bool branch_taken_0x22f7e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7E0u;
        // 0x22f7e4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7e0) {
            ctx->pc = 0x22F840u;
            goto label_22f840;
        }
    }
    ctx->pc = 0x22F7E8u;
label_22f7e8:
    // 0x22f7e8: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_22f7ec:
    if (ctx->pc == 0x22F7ECu) {
        ctx->pc = 0x22F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7E8u;
        // 0x22f7ec: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7F0u;
        goto label_22f7f0;
    }
    ctx->pc = 0x22F7E8u;
    {
        const bool branch_taken_0x22f7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7E8u;
        // 0x22f7ec: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7e8) {
            ctx->pc = 0x22F83Cu;
            goto label_22f83c;
        }
    }
    ctx->pc = 0x22F7F0u;
label_22f7f0:
    // 0x22f7f0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_22f7f4:
    if (ctx->pc == 0x22F7F4u) {
        ctx->pc = 0x22F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7F0u;
        // 0x22f7f4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7F8u;
        goto label_22f7f8;
    }
    ctx->pc = 0x22F7F0u;
    {
        const bool branch_taken_0x22f7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7F0u;
        // 0x22f7f4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7f0) {
            ctx->pc = 0x22F840u;
            goto label_22f840;
        }
    }
    ctx->pc = 0x22F7F8u;
label_22f7f8:
    // 0x22f7f8: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x22f7f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_22f7fc:
    // 0x22f7fc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x22f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_22f800:
    // 0x22f800: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_22f804:
    if (ctx->pc == 0x22F804u) {
        ctx->pc = 0x22F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F800u;
        // 0x22f804: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F808u;
        goto label_22f808;
    }
    ctx->pc = 0x22F800u;
    {
        const bool branch_taken_0x22f800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F800u;
        // 0x22f804: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f800) {
            ctx->pc = 0x22F840u;
            goto label_22f840;
        }
    }
    ctx->pc = 0x22F808u;
label_22f808:
    // 0x22f808: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x22f808u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_22f80c:
    // 0x22f80c: 0x3043fffe  andi        $v1, $v0, 0xFFFE
    ctx->pc = 0x22f80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_22f810:
    // 0x22f810: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22f810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_22f814:
    // 0x22f814: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22f818:
    if (ctx->pc == 0x22F818u) {
        ctx->pc = 0x22F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F814u;
        // 0x22f818: 0xa6230078  sh          $v1, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F81Cu;
        goto label_22f81c;
    }
    ctx->pc = 0x22F814u;
    {
        const bool branch_taken_0x22f814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F814u;
        // 0x22f818: 0xa6230078  sh          $v1, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f814) {
            ctx->pc = 0x22F82Cu;
            goto label_22f82c;
        }
    }
    ctx->pc = 0x22F81Cu;
label_22f81c:
    // 0x22f81c: 0x3062fffc  andi        $v0, $v1, 0xFFFC
    ctx->pc = 0x22f81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65532);
label_22f820:
    // 0x22f820: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x22f820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_22f824:
    // 0x22f824: 0xc08b6f0  jal         func_22DBC0
label_22f828:
    if (ctx->pc == 0x22F828u) {
        ctx->pc = 0x22F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F824u;
        // 0x22f828: 0xa6220078  sh          $v0, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F82Cu;
        goto label_22f82c;
    }
    ctx->pc = 0x22F824u;
    SET_GPR_U32(ctx, 31, 0x22F82Cu);
    ctx->pc = 0x22F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F824u;
    // 0x22f828: 0xa6220078  sh          $v0, 0x78($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBC0u, 0x22F824u, 0x22F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F82Cu;
label_22f82c:
    // 0x22f82c: 0xc08c698  jal         func_231A60
label_22f830:
    if (ctx->pc == 0x22F830u) {
        ctx->pc = 0x22F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F82Cu;
        // 0x22f830: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F834u;
        goto label_22f834;
    }
    ctx->pc = 0x22F82Cu;
    SET_GPR_U32(ctx, 31, 0x22F834u);
    ctx->pc = 0x22F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F82Cu;
    // 0x22f830: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22F82Cu, 0x22F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F834u;
label_22f834:
    // 0x22f834: 0x1000fd69  b           . + 4 + (-0x297 << 2)
label_22f838:
    if (ctx->pc == 0x22F838u) {
        ctx->pc = 0x22F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F834u;
        // 0x22f838: 0x96230078  lhu         $v1, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F83Cu;
        goto label_22f83c;
    }
    ctx->pc = 0x22F834u;
    {
        const bool branch_taken_0x22f834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F834u;
        // 0x22f838: 0x96230078  lhu         $v1, 0x78($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f834) {
            ctx->pc = 0x22EDDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22eddc;
        }
    }
    ctx->pc = 0x22F83Cu;
label_22f83c:
    // 0x22f83c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x22f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_22f840:
    // 0x22f840: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22f844:
    if (ctx->pc == 0x22F844u) {
        ctx->pc = 0x22F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F840u;
        // 0x22f844: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F848u;
        goto label_22f848;
    }
    ctx->pc = 0x22F840u;
    {
        const bool branch_taken_0x22f840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F840u;
        // 0x22f844: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f840) {
            ctx->pc = 0x22F854u;
            goto label_22f854;
        }
    }
    ctx->pc = 0x22F848u;
label_22f848:
    // 0x22f848: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22f84c:
    // 0x22f84c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x22f84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_22f850:
    // 0x22f850: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22f850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22f854:
    // 0x22f854: 0x96220078  lhu         $v0, 0x78($s1)
    ctx->pc = 0x22f854u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_22f858:
    // 0x22f858: 0x3043fffe  andi        $v1, $v0, 0xFFFE
    ctx->pc = 0x22f858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_22f85c:
    // 0x22f85c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22f85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_22f860:
    // 0x22f860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22f864:
    if (ctx->pc == 0x22F864u) {
        ctx->pc = 0x22F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F860u;
        // 0x22f864: 0xa6230078  sh          $v1, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F868u;
        goto label_22f868;
    }
    ctx->pc = 0x22F860u;
    {
        const bool branch_taken_0x22f860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F860u;
        // 0x22f864: 0xa6230078  sh          $v1, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f860) {
            ctx->pc = 0x22F878u;
            goto label_22f878;
        }
    }
    ctx->pc = 0x22F868u;
label_22f868:
    // 0x22f868: 0x3062fffc  andi        $v0, $v1, 0xFFFC
    ctx->pc = 0x22f868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65532);
label_22f86c:
    // 0x22f86c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x22f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_22f870:
    // 0x22f870: 0xc08b6f0  jal         func_22DBC0
label_22f874:
    if (ctx->pc == 0x22F874u) {
        ctx->pc = 0x22F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F870u;
        // 0x22f874: 0xa6220078  sh          $v0, 0x78($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F878u;
        goto label_22f878;
    }
    ctx->pc = 0x22F870u;
    SET_GPR_U32(ctx, 31, 0x22F878u);
    ctx->pc = 0x22F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F870u;
    // 0x22f874: 0xa6220078  sh          $v0, 0x78($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBC0u, 0x22F870u, 0x22F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F878u;
label_22f878:
    // 0x22f878: 0xc08c698  jal         func_231A60
label_22f87c:
    if (ctx->pc == 0x22F87Cu) {
        ctx->pc = 0x22F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F878u;
        // 0x22f87c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F880u;
        goto label_22f880;
    }
    ctx->pc = 0x22F878u;
    SET_GPR_U32(ctx, 31, 0x22F880u);
    ctx->pc = 0x22F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F878u;
    // 0x22f87c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22F878u, 0x22F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F880u;
label_22f880:
    // 0x22f880: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x22f880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_22f884:
    // 0x22f884: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x22f884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_22f888:
    // 0x22f888: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x22f888u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_22f88c:
    // 0x22f88c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x22f88cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_22f890:
    // 0x22f890: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x22f890u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_22f894:
    // 0x22f894: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x22f894u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22f898:
    // 0x22f898: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x22f898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22f89c:
    // 0x22f89c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x22f89cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22f8a0:
    // 0x22f8a0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x22f8a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22f8a4:
    // 0x22f8a4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x22f8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22f8a8:
    // 0x22f8a8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x22f8a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22f8ac:
    // 0x22f8ac: 0x3e00008  jr          $ra
label_22f8b0:
    if (ctx->pc == 0x22F8B0u) {
        ctx->pc = 0x22F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8ACu;
        // 0x22f8b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F8B4u;
        goto label_22f8b4;
    }
    ctx->pc = 0x22F8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8ACu;
        // 0x22f8b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F8B4u;
label_22f8b4:
    // 0x22f8b4: 0x0  nop
    ctx->pc = 0x22f8b4u;
    // NOP
}
