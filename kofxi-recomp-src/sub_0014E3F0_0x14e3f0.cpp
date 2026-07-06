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

// Function: sub_0014E3F0
// Address: 0x14e3f0 - 0x1502a0
void sub_0014E3F0_0x14e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E3F0_0x14e3f0");
#endif

    switch (ctx->pc) {
        case 0x14e3f0u: goto label_14e3f0;
        case 0x14e3f4u: goto label_14e3f4;
        case 0x14e3f8u: goto label_14e3f8;
        case 0x14e3fcu: goto label_14e3fc;
        case 0x14e400u: goto label_14e400;
        case 0x14e404u: goto label_14e404;
        case 0x14e408u: goto label_14e408;
        case 0x14e40cu: goto label_14e40c;
        case 0x14e410u: goto label_14e410;
        case 0x14e414u: goto label_14e414;
        case 0x14e418u: goto label_14e418;
        case 0x14e41cu: goto label_14e41c;
        case 0x14e420u: goto label_14e420;
        case 0x14e424u: goto label_14e424;
        case 0x14e428u: goto label_14e428;
        case 0x14e42cu: goto label_14e42c;
        case 0x14e430u: goto label_14e430;
        case 0x14e434u: goto label_14e434;
        case 0x14e438u: goto label_14e438;
        case 0x14e43cu: goto label_14e43c;
        case 0x14e440u: goto label_14e440;
        case 0x14e444u: goto label_14e444;
        case 0x14e448u: goto label_14e448;
        case 0x14e44cu: goto label_14e44c;
        case 0x14e450u: goto label_14e450;
        case 0x14e454u: goto label_14e454;
        case 0x14e458u: goto label_14e458;
        case 0x14e45cu: goto label_14e45c;
        case 0x14e460u: goto label_14e460;
        case 0x14e464u: goto label_14e464;
        case 0x14e468u: goto label_14e468;
        case 0x14e46cu: goto label_14e46c;
        case 0x14e470u: goto label_14e470;
        case 0x14e474u: goto label_14e474;
        case 0x14e478u: goto label_14e478;
        case 0x14e47cu: goto label_14e47c;
        case 0x14e480u: goto label_14e480;
        case 0x14e484u: goto label_14e484;
        case 0x14e488u: goto label_14e488;
        case 0x14e48cu: goto label_14e48c;
        case 0x14e490u: goto label_14e490;
        case 0x14e494u: goto label_14e494;
        case 0x14e498u: goto label_14e498;
        case 0x14e49cu: goto label_14e49c;
        case 0x14e4a0u: goto label_14e4a0;
        case 0x14e4a4u: goto label_14e4a4;
        case 0x14e4a8u: goto label_14e4a8;
        case 0x14e4acu: goto label_14e4ac;
        case 0x14e4b0u: goto label_14e4b0;
        case 0x14e4b4u: goto label_14e4b4;
        case 0x14e4b8u: goto label_14e4b8;
        case 0x14e4bcu: goto label_14e4bc;
        case 0x14e4c0u: goto label_14e4c0;
        case 0x14e4c4u: goto label_14e4c4;
        case 0x14e4c8u: goto label_14e4c8;
        case 0x14e4ccu: goto label_14e4cc;
        case 0x14e4d0u: goto label_14e4d0;
        case 0x14e4d4u: goto label_14e4d4;
        case 0x14e4d8u: goto label_14e4d8;
        case 0x14e4dcu: goto label_14e4dc;
        case 0x14e4e0u: goto label_14e4e0;
        case 0x14e4e4u: goto label_14e4e4;
        case 0x14e4e8u: goto label_14e4e8;
        case 0x14e4ecu: goto label_14e4ec;
        case 0x14e4f0u: goto label_14e4f0;
        case 0x14e4f4u: goto label_14e4f4;
        case 0x14e4f8u: goto label_14e4f8;
        case 0x14e4fcu: goto label_14e4fc;
        case 0x14e500u: goto label_14e500;
        case 0x14e504u: goto label_14e504;
        case 0x14e508u: goto label_14e508;
        case 0x14e50cu: goto label_14e50c;
        case 0x14e510u: goto label_14e510;
        case 0x14e514u: goto label_14e514;
        case 0x14e518u: goto label_14e518;
        case 0x14e51cu: goto label_14e51c;
        case 0x14e520u: goto label_14e520;
        case 0x14e524u: goto label_14e524;
        case 0x14e528u: goto label_14e528;
        case 0x14e52cu: goto label_14e52c;
        case 0x14e530u: goto label_14e530;
        case 0x14e534u: goto label_14e534;
        case 0x14e538u: goto label_14e538;
        case 0x14e53cu: goto label_14e53c;
        case 0x14e540u: goto label_14e540;
        case 0x14e544u: goto label_14e544;
        case 0x14e548u: goto label_14e548;
        case 0x14e54cu: goto label_14e54c;
        case 0x14e550u: goto label_14e550;
        case 0x14e554u: goto label_14e554;
        case 0x14e558u: goto label_14e558;
        case 0x14e55cu: goto label_14e55c;
        case 0x14e560u: goto label_14e560;
        case 0x14e564u: goto label_14e564;
        case 0x14e568u: goto label_14e568;
        case 0x14e56cu: goto label_14e56c;
        case 0x14e570u: goto label_14e570;
        case 0x14e574u: goto label_14e574;
        case 0x14e578u: goto label_14e578;
        case 0x14e57cu: goto label_14e57c;
        case 0x14e580u: goto label_14e580;
        case 0x14e584u: goto label_14e584;
        case 0x14e588u: goto label_14e588;
        case 0x14e58cu: goto label_14e58c;
        case 0x14e590u: goto label_14e590;
        case 0x14e594u: goto label_14e594;
        case 0x14e598u: goto label_14e598;
        case 0x14e59cu: goto label_14e59c;
        case 0x14e5a0u: goto label_14e5a0;
        case 0x14e5a4u: goto label_14e5a4;
        case 0x14e5a8u: goto label_14e5a8;
        case 0x14e5acu: goto label_14e5ac;
        case 0x14e5b0u: goto label_14e5b0;
        case 0x14e5b4u: goto label_14e5b4;
        case 0x14e5b8u: goto label_14e5b8;
        case 0x14e5bcu: goto label_14e5bc;
        case 0x14e5c0u: goto label_14e5c0;
        case 0x14e5c4u: goto label_14e5c4;
        case 0x14e5c8u: goto label_14e5c8;
        case 0x14e5ccu: goto label_14e5cc;
        case 0x14e5d0u: goto label_14e5d0;
        case 0x14e5d4u: goto label_14e5d4;
        case 0x14e5d8u: goto label_14e5d8;
        case 0x14e5dcu: goto label_14e5dc;
        case 0x14e5e0u: goto label_14e5e0;
        case 0x14e5e4u: goto label_14e5e4;
        case 0x14e5e8u: goto label_14e5e8;
        case 0x14e5ecu: goto label_14e5ec;
        case 0x14e5f0u: goto label_14e5f0;
        case 0x14e5f4u: goto label_14e5f4;
        case 0x14e5f8u: goto label_14e5f8;
        case 0x14e5fcu: goto label_14e5fc;
        case 0x14e600u: goto label_14e600;
        case 0x14e604u: goto label_14e604;
        case 0x14e608u: goto label_14e608;
        case 0x14e60cu: goto label_14e60c;
        case 0x14e610u: goto label_14e610;
        case 0x14e614u: goto label_14e614;
        case 0x14e618u: goto label_14e618;
        case 0x14e61cu: goto label_14e61c;
        case 0x14e620u: goto label_14e620;
        case 0x14e624u: goto label_14e624;
        case 0x14e628u: goto label_14e628;
        case 0x14e62cu: goto label_14e62c;
        case 0x14e630u: goto label_14e630;
        case 0x14e634u: goto label_14e634;
        case 0x14e638u: goto label_14e638;
        case 0x14e63cu: goto label_14e63c;
        case 0x14e640u: goto label_14e640;
        case 0x14e644u: goto label_14e644;
        case 0x14e648u: goto label_14e648;
        case 0x14e64cu: goto label_14e64c;
        case 0x14e650u: goto label_14e650;
        case 0x14e654u: goto label_14e654;
        case 0x14e658u: goto label_14e658;
        case 0x14e65cu: goto label_14e65c;
        case 0x14e660u: goto label_14e660;
        case 0x14e664u: goto label_14e664;
        case 0x14e668u: goto label_14e668;
        case 0x14e66cu: goto label_14e66c;
        case 0x14e670u: goto label_14e670;
        case 0x14e674u: goto label_14e674;
        case 0x14e678u: goto label_14e678;
        case 0x14e67cu: goto label_14e67c;
        case 0x14e680u: goto label_14e680;
        case 0x14e684u: goto label_14e684;
        case 0x14e688u: goto label_14e688;
        case 0x14e68cu: goto label_14e68c;
        case 0x14e690u: goto label_14e690;
        case 0x14e694u: goto label_14e694;
        case 0x14e698u: goto label_14e698;
        case 0x14e69cu: goto label_14e69c;
        case 0x14e6a0u: goto label_14e6a0;
        case 0x14e6a4u: goto label_14e6a4;
        case 0x14e6a8u: goto label_14e6a8;
        case 0x14e6acu: goto label_14e6ac;
        case 0x14e6b0u: goto label_14e6b0;
        case 0x14e6b4u: goto label_14e6b4;
        case 0x14e6b8u: goto label_14e6b8;
        case 0x14e6bcu: goto label_14e6bc;
        case 0x14e6c0u: goto label_14e6c0;
        case 0x14e6c4u: goto label_14e6c4;
        case 0x14e6c8u: goto label_14e6c8;
        case 0x14e6ccu: goto label_14e6cc;
        case 0x14e6d0u: goto label_14e6d0;
        case 0x14e6d4u: goto label_14e6d4;
        case 0x14e6d8u: goto label_14e6d8;
        case 0x14e6dcu: goto label_14e6dc;
        case 0x14e6e0u: goto label_14e6e0;
        case 0x14e6e4u: goto label_14e6e4;
        case 0x14e6e8u: goto label_14e6e8;
        case 0x14e6ecu: goto label_14e6ec;
        case 0x14e6f0u: goto label_14e6f0;
        case 0x14e6f4u: goto label_14e6f4;
        case 0x14e6f8u: goto label_14e6f8;
        case 0x14e6fcu: goto label_14e6fc;
        case 0x14e700u: goto label_14e700;
        case 0x14e704u: goto label_14e704;
        case 0x14e708u: goto label_14e708;
        case 0x14e70cu: goto label_14e70c;
        case 0x14e710u: goto label_14e710;
        case 0x14e714u: goto label_14e714;
        case 0x14e718u: goto label_14e718;
        case 0x14e71cu: goto label_14e71c;
        case 0x14e720u: goto label_14e720;
        case 0x14e724u: goto label_14e724;
        case 0x14e728u: goto label_14e728;
        case 0x14e72cu: goto label_14e72c;
        case 0x14e730u: goto label_14e730;
        case 0x14e734u: goto label_14e734;
        case 0x14e738u: goto label_14e738;
        case 0x14e73cu: goto label_14e73c;
        case 0x14e740u: goto label_14e740;
        case 0x14e744u: goto label_14e744;
        case 0x14e748u: goto label_14e748;
        case 0x14e74cu: goto label_14e74c;
        case 0x14e750u: goto label_14e750;
        case 0x14e754u: goto label_14e754;
        case 0x14e758u: goto label_14e758;
        case 0x14e75cu: goto label_14e75c;
        case 0x14e760u: goto label_14e760;
        case 0x14e764u: goto label_14e764;
        case 0x14e768u: goto label_14e768;
        case 0x14e76cu: goto label_14e76c;
        case 0x14e770u: goto label_14e770;
        case 0x14e774u: goto label_14e774;
        case 0x14e778u: goto label_14e778;
        case 0x14e77cu: goto label_14e77c;
        case 0x14e780u: goto label_14e780;
        case 0x14e784u: goto label_14e784;
        case 0x14e788u: goto label_14e788;
        case 0x14e78cu: goto label_14e78c;
        case 0x14e790u: goto label_14e790;
        case 0x14e794u: goto label_14e794;
        case 0x14e798u: goto label_14e798;
        case 0x14e79cu: goto label_14e79c;
        case 0x14e7a0u: goto label_14e7a0;
        case 0x14e7a4u: goto label_14e7a4;
        case 0x14e7a8u: goto label_14e7a8;
        case 0x14e7acu: goto label_14e7ac;
        case 0x14e7b0u: goto label_14e7b0;
        case 0x14e7b4u: goto label_14e7b4;
        case 0x14e7b8u: goto label_14e7b8;
        case 0x14e7bcu: goto label_14e7bc;
        case 0x14e7c0u: goto label_14e7c0;
        case 0x14e7c4u: goto label_14e7c4;
        case 0x14e7c8u: goto label_14e7c8;
        case 0x14e7ccu: goto label_14e7cc;
        case 0x14e7d0u: goto label_14e7d0;
        case 0x14e7d4u: goto label_14e7d4;
        case 0x14e7d8u: goto label_14e7d8;
        case 0x14e7dcu: goto label_14e7dc;
        case 0x14e7e0u: goto label_14e7e0;
        case 0x14e7e4u: goto label_14e7e4;
        case 0x14e7e8u: goto label_14e7e8;
        case 0x14e7ecu: goto label_14e7ec;
        case 0x14e7f0u: goto label_14e7f0;
        case 0x14e7f4u: goto label_14e7f4;
        case 0x14e7f8u: goto label_14e7f8;
        case 0x14e7fcu: goto label_14e7fc;
        case 0x14e800u: goto label_14e800;
        case 0x14e804u: goto label_14e804;
        case 0x14e808u: goto label_14e808;
        case 0x14e80cu: goto label_14e80c;
        case 0x14e810u: goto label_14e810;
        case 0x14e814u: goto label_14e814;
        case 0x14e818u: goto label_14e818;
        case 0x14e81cu: goto label_14e81c;
        case 0x14e820u: goto label_14e820;
        case 0x14e824u: goto label_14e824;
        case 0x14e828u: goto label_14e828;
        case 0x14e82cu: goto label_14e82c;
        case 0x14e830u: goto label_14e830;
        case 0x14e834u: goto label_14e834;
        case 0x14e838u: goto label_14e838;
        case 0x14e83cu: goto label_14e83c;
        case 0x14e840u: goto label_14e840;
        case 0x14e844u: goto label_14e844;
        case 0x14e848u: goto label_14e848;
        case 0x14e84cu: goto label_14e84c;
        case 0x14e850u: goto label_14e850;
        case 0x14e854u: goto label_14e854;
        case 0x14e858u: goto label_14e858;
        case 0x14e85cu: goto label_14e85c;
        case 0x14e860u: goto label_14e860;
        case 0x14e864u: goto label_14e864;
        case 0x14e868u: goto label_14e868;
        case 0x14e86cu: goto label_14e86c;
        case 0x14e870u: goto label_14e870;
        case 0x14e874u: goto label_14e874;
        case 0x14e878u: goto label_14e878;
        case 0x14e87cu: goto label_14e87c;
        case 0x14e880u: goto label_14e880;
        case 0x14e884u: goto label_14e884;
        case 0x14e888u: goto label_14e888;
        case 0x14e88cu: goto label_14e88c;
        case 0x14e890u: goto label_14e890;
        case 0x14e894u: goto label_14e894;
        case 0x14e898u: goto label_14e898;
        case 0x14e89cu: goto label_14e89c;
        case 0x14e8a0u: goto label_14e8a0;
        case 0x14e8a4u: goto label_14e8a4;
        case 0x14e8a8u: goto label_14e8a8;
        case 0x14e8acu: goto label_14e8ac;
        case 0x14e8b0u: goto label_14e8b0;
        case 0x14e8b4u: goto label_14e8b4;
        case 0x14e8b8u: goto label_14e8b8;
        case 0x14e8bcu: goto label_14e8bc;
        case 0x14e8c0u: goto label_14e8c0;
        case 0x14e8c4u: goto label_14e8c4;
        case 0x14e8c8u: goto label_14e8c8;
        case 0x14e8ccu: goto label_14e8cc;
        case 0x14e8d0u: goto label_14e8d0;
        case 0x14e8d4u: goto label_14e8d4;
        case 0x14e8d8u: goto label_14e8d8;
        case 0x14e8dcu: goto label_14e8dc;
        case 0x14e8e0u: goto label_14e8e0;
        case 0x14e8e4u: goto label_14e8e4;
        case 0x14e8e8u: goto label_14e8e8;
        case 0x14e8ecu: goto label_14e8ec;
        case 0x14e8f0u: goto label_14e8f0;
        case 0x14e8f4u: goto label_14e8f4;
        case 0x14e8f8u: goto label_14e8f8;
        case 0x14e8fcu: goto label_14e8fc;
        case 0x14e900u: goto label_14e900;
        case 0x14e904u: goto label_14e904;
        case 0x14e908u: goto label_14e908;
        case 0x14e90cu: goto label_14e90c;
        case 0x14e910u: goto label_14e910;
        case 0x14e914u: goto label_14e914;
        case 0x14e918u: goto label_14e918;
        case 0x14e91cu: goto label_14e91c;
        case 0x14e920u: goto label_14e920;
        case 0x14e924u: goto label_14e924;
        case 0x14e928u: goto label_14e928;
        case 0x14e92cu: goto label_14e92c;
        case 0x14e930u: goto label_14e930;
        case 0x14e934u: goto label_14e934;
        case 0x14e938u: goto label_14e938;
        case 0x14e93cu: goto label_14e93c;
        case 0x14e940u: goto label_14e940;
        case 0x14e944u: goto label_14e944;
        case 0x14e948u: goto label_14e948;
        case 0x14e94cu: goto label_14e94c;
        case 0x14e950u: goto label_14e950;
        case 0x14e954u: goto label_14e954;
        case 0x14e958u: goto label_14e958;
        case 0x14e95cu: goto label_14e95c;
        case 0x14e960u: goto label_14e960;
        case 0x14e964u: goto label_14e964;
        case 0x14e968u: goto label_14e968;
        case 0x14e96cu: goto label_14e96c;
        case 0x14e970u: goto label_14e970;
        case 0x14e974u: goto label_14e974;
        case 0x14e978u: goto label_14e978;
        case 0x14e97cu: goto label_14e97c;
        case 0x14e980u: goto label_14e980;
        case 0x14e984u: goto label_14e984;
        case 0x14e988u: goto label_14e988;
        case 0x14e98cu: goto label_14e98c;
        case 0x14e990u: goto label_14e990;
        case 0x14e994u: goto label_14e994;
        case 0x14e998u: goto label_14e998;
        case 0x14e99cu: goto label_14e99c;
        case 0x14e9a0u: goto label_14e9a0;
        case 0x14e9a4u: goto label_14e9a4;
        case 0x14e9a8u: goto label_14e9a8;
        case 0x14e9acu: goto label_14e9ac;
        case 0x14e9b0u: goto label_14e9b0;
        case 0x14e9b4u: goto label_14e9b4;
        case 0x14e9b8u: goto label_14e9b8;
        case 0x14e9bcu: goto label_14e9bc;
        case 0x14e9c0u: goto label_14e9c0;
        case 0x14e9c4u: goto label_14e9c4;
        case 0x14e9c8u: goto label_14e9c8;
        case 0x14e9ccu: goto label_14e9cc;
        case 0x14e9d0u: goto label_14e9d0;
        case 0x14e9d4u: goto label_14e9d4;
        case 0x14e9d8u: goto label_14e9d8;
        case 0x14e9dcu: goto label_14e9dc;
        case 0x14e9e0u: goto label_14e9e0;
        case 0x14e9e4u: goto label_14e9e4;
        case 0x14e9e8u: goto label_14e9e8;
        case 0x14e9ecu: goto label_14e9ec;
        case 0x14e9f0u: goto label_14e9f0;
        case 0x14e9f4u: goto label_14e9f4;
        case 0x14e9f8u: goto label_14e9f8;
        case 0x14e9fcu: goto label_14e9fc;
        case 0x14ea00u: goto label_14ea00;
        case 0x14ea04u: goto label_14ea04;
        case 0x14ea08u: goto label_14ea08;
        case 0x14ea0cu: goto label_14ea0c;
        case 0x14ea10u: goto label_14ea10;
        case 0x14ea14u: goto label_14ea14;
        case 0x14ea18u: goto label_14ea18;
        case 0x14ea1cu: goto label_14ea1c;
        case 0x14ea20u: goto label_14ea20;
        case 0x14ea24u: goto label_14ea24;
        case 0x14ea28u: goto label_14ea28;
        case 0x14ea2cu: goto label_14ea2c;
        case 0x14ea30u: goto label_14ea30;
        case 0x14ea34u: goto label_14ea34;
        case 0x14ea38u: goto label_14ea38;
        case 0x14ea3cu: goto label_14ea3c;
        case 0x14ea40u: goto label_14ea40;
        case 0x14ea44u: goto label_14ea44;
        case 0x14ea48u: goto label_14ea48;
        case 0x14ea4cu: goto label_14ea4c;
        case 0x14ea50u: goto label_14ea50;
        case 0x14ea54u: goto label_14ea54;
        case 0x14ea58u: goto label_14ea58;
        case 0x14ea5cu: goto label_14ea5c;
        case 0x14ea60u: goto label_14ea60;
        case 0x14ea64u: goto label_14ea64;
        case 0x14ea68u: goto label_14ea68;
        case 0x14ea6cu: goto label_14ea6c;
        case 0x14ea70u: goto label_14ea70;
        case 0x14ea74u: goto label_14ea74;
        case 0x14ea78u: goto label_14ea78;
        case 0x14ea7cu: goto label_14ea7c;
        case 0x14ea80u: goto label_14ea80;
        case 0x14ea84u: goto label_14ea84;
        case 0x14ea88u: goto label_14ea88;
        case 0x14ea8cu: goto label_14ea8c;
        case 0x14ea90u: goto label_14ea90;
        case 0x14ea94u: goto label_14ea94;
        case 0x14ea98u: goto label_14ea98;
        case 0x14ea9cu: goto label_14ea9c;
        case 0x14eaa0u: goto label_14eaa0;
        case 0x14eaa4u: goto label_14eaa4;
        case 0x14eaa8u: goto label_14eaa8;
        case 0x14eaacu: goto label_14eaac;
        case 0x14eab0u: goto label_14eab0;
        case 0x14eab4u: goto label_14eab4;
        case 0x14eab8u: goto label_14eab8;
        case 0x14eabcu: goto label_14eabc;
        case 0x14eac0u: goto label_14eac0;
        case 0x14eac4u: goto label_14eac4;
        case 0x14eac8u: goto label_14eac8;
        case 0x14eaccu: goto label_14eacc;
        case 0x14ead0u: goto label_14ead0;
        case 0x14ead4u: goto label_14ead4;
        case 0x14ead8u: goto label_14ead8;
        case 0x14eadcu: goto label_14eadc;
        case 0x14eae0u: goto label_14eae0;
        case 0x14eae4u: goto label_14eae4;
        case 0x14eae8u: goto label_14eae8;
        case 0x14eaecu: goto label_14eaec;
        case 0x14eaf0u: goto label_14eaf0;
        case 0x14eaf4u: goto label_14eaf4;
        case 0x14eaf8u: goto label_14eaf8;
        case 0x14eafcu: goto label_14eafc;
        case 0x14eb00u: goto label_14eb00;
        case 0x14eb04u: goto label_14eb04;
        case 0x14eb08u: goto label_14eb08;
        case 0x14eb0cu: goto label_14eb0c;
        case 0x14eb10u: goto label_14eb10;
        case 0x14eb14u: goto label_14eb14;
        case 0x14eb18u: goto label_14eb18;
        case 0x14eb1cu: goto label_14eb1c;
        case 0x14eb20u: goto label_14eb20;
        case 0x14eb24u: goto label_14eb24;
        case 0x14eb28u: goto label_14eb28;
        case 0x14eb2cu: goto label_14eb2c;
        case 0x14eb30u: goto label_14eb30;
        case 0x14eb34u: goto label_14eb34;
        case 0x14eb38u: goto label_14eb38;
        case 0x14eb3cu: goto label_14eb3c;
        case 0x14eb40u: goto label_14eb40;
        case 0x14eb44u: goto label_14eb44;
        case 0x14eb48u: goto label_14eb48;
        case 0x14eb4cu: goto label_14eb4c;
        case 0x14eb50u: goto label_14eb50;
        case 0x14eb54u: goto label_14eb54;
        case 0x14eb58u: goto label_14eb58;
        case 0x14eb5cu: goto label_14eb5c;
        case 0x14eb60u: goto label_14eb60;
        case 0x14eb64u: goto label_14eb64;
        case 0x14eb68u: goto label_14eb68;
        case 0x14eb6cu: goto label_14eb6c;
        case 0x14eb70u: goto label_14eb70;
        case 0x14eb74u: goto label_14eb74;
        case 0x14eb78u: goto label_14eb78;
        case 0x14eb7cu: goto label_14eb7c;
        case 0x14eb80u: goto label_14eb80;
        case 0x14eb84u: goto label_14eb84;
        case 0x14eb88u: goto label_14eb88;
        case 0x14eb8cu: goto label_14eb8c;
        case 0x14eb90u: goto label_14eb90;
        case 0x14eb94u: goto label_14eb94;
        case 0x14eb98u: goto label_14eb98;
        case 0x14eb9cu: goto label_14eb9c;
        case 0x14eba0u: goto label_14eba0;
        case 0x14eba4u: goto label_14eba4;
        case 0x14eba8u: goto label_14eba8;
        case 0x14ebacu: goto label_14ebac;
        case 0x14ebb0u: goto label_14ebb0;
        case 0x14ebb4u: goto label_14ebb4;
        case 0x14ebb8u: goto label_14ebb8;
        case 0x14ebbcu: goto label_14ebbc;
        case 0x14ebc0u: goto label_14ebc0;
        case 0x14ebc4u: goto label_14ebc4;
        case 0x14ebc8u: goto label_14ebc8;
        case 0x14ebccu: goto label_14ebcc;
        case 0x14ebd0u: goto label_14ebd0;
        case 0x14ebd4u: goto label_14ebd4;
        case 0x14ebd8u: goto label_14ebd8;
        case 0x14ebdcu: goto label_14ebdc;
        case 0x14ebe0u: goto label_14ebe0;
        case 0x14ebe4u: goto label_14ebe4;
        case 0x14ebe8u: goto label_14ebe8;
        case 0x14ebecu: goto label_14ebec;
        case 0x14ebf0u: goto label_14ebf0;
        case 0x14ebf4u: goto label_14ebf4;
        case 0x14ebf8u: goto label_14ebf8;
        case 0x14ebfcu: goto label_14ebfc;
        case 0x14ec00u: goto label_14ec00;
        case 0x14ec04u: goto label_14ec04;
        case 0x14ec08u: goto label_14ec08;
        case 0x14ec0cu: goto label_14ec0c;
        case 0x14ec10u: goto label_14ec10;
        case 0x14ec14u: goto label_14ec14;
        case 0x14ec18u: goto label_14ec18;
        case 0x14ec1cu: goto label_14ec1c;
        case 0x14ec20u: goto label_14ec20;
        case 0x14ec24u: goto label_14ec24;
        case 0x14ec28u: goto label_14ec28;
        case 0x14ec2cu: goto label_14ec2c;
        case 0x14ec30u: goto label_14ec30;
        case 0x14ec34u: goto label_14ec34;
        case 0x14ec38u: goto label_14ec38;
        case 0x14ec3cu: goto label_14ec3c;
        case 0x14ec40u: goto label_14ec40;
        case 0x14ec44u: goto label_14ec44;
        case 0x14ec48u: goto label_14ec48;
        case 0x14ec4cu: goto label_14ec4c;
        case 0x14ec50u: goto label_14ec50;
        case 0x14ec54u: goto label_14ec54;
        case 0x14ec58u: goto label_14ec58;
        case 0x14ec5cu: goto label_14ec5c;
        case 0x14ec60u: goto label_14ec60;
        case 0x14ec64u: goto label_14ec64;
        case 0x14ec68u: goto label_14ec68;
        case 0x14ec6cu: goto label_14ec6c;
        case 0x14ec70u: goto label_14ec70;
        case 0x14ec74u: goto label_14ec74;
        case 0x14ec78u: goto label_14ec78;
        case 0x14ec7cu: goto label_14ec7c;
        case 0x14ec80u: goto label_14ec80;
        case 0x14ec84u: goto label_14ec84;
        case 0x14ec88u: goto label_14ec88;
        case 0x14ec8cu: goto label_14ec8c;
        case 0x14ec90u: goto label_14ec90;
        case 0x14ec94u: goto label_14ec94;
        case 0x14ec98u: goto label_14ec98;
        case 0x14ec9cu: goto label_14ec9c;
        case 0x14eca0u: goto label_14eca0;
        case 0x14eca4u: goto label_14eca4;
        case 0x14eca8u: goto label_14eca8;
        case 0x14ecacu: goto label_14ecac;
        case 0x14ecb0u: goto label_14ecb0;
        case 0x14ecb4u: goto label_14ecb4;
        case 0x14ecb8u: goto label_14ecb8;
        case 0x14ecbcu: goto label_14ecbc;
        case 0x14ecc0u: goto label_14ecc0;
        case 0x14ecc4u: goto label_14ecc4;
        case 0x14ecc8u: goto label_14ecc8;
        case 0x14ecccu: goto label_14eccc;
        case 0x14ecd0u: goto label_14ecd0;
        case 0x14ecd4u: goto label_14ecd4;
        case 0x14ecd8u: goto label_14ecd8;
        case 0x14ecdcu: goto label_14ecdc;
        case 0x14ece0u: goto label_14ece0;
        case 0x14ece4u: goto label_14ece4;
        case 0x14ece8u: goto label_14ece8;
        case 0x14ececu: goto label_14ecec;
        case 0x14ecf0u: goto label_14ecf0;
        case 0x14ecf4u: goto label_14ecf4;
        case 0x14ecf8u: goto label_14ecf8;
        case 0x14ecfcu: goto label_14ecfc;
        case 0x14ed00u: goto label_14ed00;
        case 0x14ed04u: goto label_14ed04;
        case 0x14ed08u: goto label_14ed08;
        case 0x14ed0cu: goto label_14ed0c;
        case 0x14ed10u: goto label_14ed10;
        case 0x14ed14u: goto label_14ed14;
        case 0x14ed18u: goto label_14ed18;
        case 0x14ed1cu: goto label_14ed1c;
        case 0x14ed20u: goto label_14ed20;
        case 0x14ed24u: goto label_14ed24;
        case 0x14ed28u: goto label_14ed28;
        case 0x14ed2cu: goto label_14ed2c;
        case 0x14ed30u: goto label_14ed30;
        case 0x14ed34u: goto label_14ed34;
        case 0x14ed38u: goto label_14ed38;
        case 0x14ed3cu: goto label_14ed3c;
        case 0x14ed40u: goto label_14ed40;
        case 0x14ed44u: goto label_14ed44;
        case 0x14ed48u: goto label_14ed48;
        case 0x14ed4cu: goto label_14ed4c;
        case 0x14ed50u: goto label_14ed50;
        case 0x14ed54u: goto label_14ed54;
        case 0x14ed58u: goto label_14ed58;
        case 0x14ed5cu: goto label_14ed5c;
        case 0x14ed60u: goto label_14ed60;
        case 0x14ed64u: goto label_14ed64;
        case 0x14ed68u: goto label_14ed68;
        case 0x14ed6cu: goto label_14ed6c;
        case 0x14ed70u: goto label_14ed70;
        case 0x14ed74u: goto label_14ed74;
        case 0x14ed78u: goto label_14ed78;
        case 0x14ed7cu: goto label_14ed7c;
        case 0x14ed80u: goto label_14ed80;
        case 0x14ed84u: goto label_14ed84;
        case 0x14ed88u: goto label_14ed88;
        case 0x14ed8cu: goto label_14ed8c;
        case 0x14ed90u: goto label_14ed90;
        case 0x14ed94u: goto label_14ed94;
        case 0x14ed98u: goto label_14ed98;
        case 0x14ed9cu: goto label_14ed9c;
        case 0x14eda0u: goto label_14eda0;
        case 0x14eda4u: goto label_14eda4;
        case 0x14eda8u: goto label_14eda8;
        case 0x14edacu: goto label_14edac;
        case 0x14edb0u: goto label_14edb0;
        case 0x14edb4u: goto label_14edb4;
        case 0x14edb8u: goto label_14edb8;
        case 0x14edbcu: goto label_14edbc;
        case 0x14edc0u: goto label_14edc0;
        case 0x14edc4u: goto label_14edc4;
        case 0x14edc8u: goto label_14edc8;
        case 0x14edccu: goto label_14edcc;
        case 0x14edd0u: goto label_14edd0;
        case 0x14edd4u: goto label_14edd4;
        case 0x14edd8u: goto label_14edd8;
        case 0x14eddcu: goto label_14eddc;
        case 0x14ede0u: goto label_14ede0;
        case 0x14ede4u: goto label_14ede4;
        case 0x14ede8u: goto label_14ede8;
        case 0x14edecu: goto label_14edec;
        case 0x14edf0u: goto label_14edf0;
        case 0x14edf4u: goto label_14edf4;
        case 0x14edf8u: goto label_14edf8;
        case 0x14edfcu: goto label_14edfc;
        case 0x14ee00u: goto label_14ee00;
        case 0x14ee04u: goto label_14ee04;
        case 0x14ee08u: goto label_14ee08;
        case 0x14ee0cu: goto label_14ee0c;
        case 0x14ee10u: goto label_14ee10;
        case 0x14ee14u: goto label_14ee14;
        case 0x14ee18u: goto label_14ee18;
        case 0x14ee1cu: goto label_14ee1c;
        case 0x14ee20u: goto label_14ee20;
        case 0x14ee24u: goto label_14ee24;
        case 0x14ee28u: goto label_14ee28;
        case 0x14ee2cu: goto label_14ee2c;
        case 0x14ee30u: goto label_14ee30;
        case 0x14ee34u: goto label_14ee34;
        case 0x14ee38u: goto label_14ee38;
        case 0x14ee3cu: goto label_14ee3c;
        case 0x14ee40u: goto label_14ee40;
        case 0x14ee44u: goto label_14ee44;
        case 0x14ee48u: goto label_14ee48;
        case 0x14ee4cu: goto label_14ee4c;
        case 0x14ee50u: goto label_14ee50;
        case 0x14ee54u: goto label_14ee54;
        case 0x14ee58u: goto label_14ee58;
        case 0x14ee5cu: goto label_14ee5c;
        case 0x14ee60u: goto label_14ee60;
        case 0x14ee64u: goto label_14ee64;
        case 0x14ee68u: goto label_14ee68;
        case 0x14ee6cu: goto label_14ee6c;
        case 0x14ee70u: goto label_14ee70;
        case 0x14ee74u: goto label_14ee74;
        case 0x14ee78u: goto label_14ee78;
        case 0x14ee7cu: goto label_14ee7c;
        case 0x14ee80u: goto label_14ee80;
        case 0x14ee84u: goto label_14ee84;
        case 0x14ee88u: goto label_14ee88;
        case 0x14ee8cu: goto label_14ee8c;
        case 0x14ee90u: goto label_14ee90;
        case 0x14ee94u: goto label_14ee94;
        case 0x14ee98u: goto label_14ee98;
        case 0x14ee9cu: goto label_14ee9c;
        case 0x14eea0u: goto label_14eea0;
        case 0x14eea4u: goto label_14eea4;
        case 0x14eea8u: goto label_14eea8;
        case 0x14eeacu: goto label_14eeac;
        case 0x14eeb0u: goto label_14eeb0;
        case 0x14eeb4u: goto label_14eeb4;
        case 0x14eeb8u: goto label_14eeb8;
        case 0x14eebcu: goto label_14eebc;
        case 0x14eec0u: goto label_14eec0;
        case 0x14eec4u: goto label_14eec4;
        case 0x14eec8u: goto label_14eec8;
        case 0x14eeccu: goto label_14eecc;
        case 0x14eed0u: goto label_14eed0;
        case 0x14eed4u: goto label_14eed4;
        case 0x14eed8u: goto label_14eed8;
        case 0x14eedcu: goto label_14eedc;
        case 0x14eee0u: goto label_14eee0;
        case 0x14eee4u: goto label_14eee4;
        case 0x14eee8u: goto label_14eee8;
        case 0x14eeecu: goto label_14eeec;
        case 0x14eef0u: goto label_14eef0;
        case 0x14eef4u: goto label_14eef4;
        case 0x14eef8u: goto label_14eef8;
        case 0x14eefcu: goto label_14eefc;
        case 0x14ef00u: goto label_14ef00;
        case 0x14ef04u: goto label_14ef04;
        case 0x14ef08u: goto label_14ef08;
        case 0x14ef0cu: goto label_14ef0c;
        case 0x14ef10u: goto label_14ef10;
        case 0x14ef14u: goto label_14ef14;
        case 0x14ef18u: goto label_14ef18;
        case 0x14ef1cu: goto label_14ef1c;
        case 0x14ef20u: goto label_14ef20;
        case 0x14ef24u: goto label_14ef24;
        case 0x14ef28u: goto label_14ef28;
        case 0x14ef2cu: goto label_14ef2c;
        case 0x14ef30u: goto label_14ef30;
        case 0x14ef34u: goto label_14ef34;
        case 0x14ef38u: goto label_14ef38;
        case 0x14ef3cu: goto label_14ef3c;
        case 0x14ef40u: goto label_14ef40;
        case 0x14ef44u: goto label_14ef44;
        case 0x14ef48u: goto label_14ef48;
        case 0x14ef4cu: goto label_14ef4c;
        case 0x14ef50u: goto label_14ef50;
        case 0x14ef54u: goto label_14ef54;
        case 0x14ef58u: goto label_14ef58;
        case 0x14ef5cu: goto label_14ef5c;
        case 0x14ef60u: goto label_14ef60;
        case 0x14ef64u: goto label_14ef64;
        case 0x14ef68u: goto label_14ef68;
        case 0x14ef6cu: goto label_14ef6c;
        case 0x14ef70u: goto label_14ef70;
        case 0x14ef74u: goto label_14ef74;
        case 0x14ef78u: goto label_14ef78;
        case 0x14ef7cu: goto label_14ef7c;
        case 0x14ef80u: goto label_14ef80;
        case 0x14ef84u: goto label_14ef84;
        case 0x14ef88u: goto label_14ef88;
        case 0x14ef8cu: goto label_14ef8c;
        case 0x14ef90u: goto label_14ef90;
        case 0x14ef94u: goto label_14ef94;
        case 0x14ef98u: goto label_14ef98;
        case 0x14ef9cu: goto label_14ef9c;
        case 0x14efa0u: goto label_14efa0;
        case 0x14efa4u: goto label_14efa4;
        case 0x14efa8u: goto label_14efa8;
        case 0x14efacu: goto label_14efac;
        case 0x14efb0u: goto label_14efb0;
        case 0x14efb4u: goto label_14efb4;
        case 0x14efb8u: goto label_14efb8;
        case 0x14efbcu: goto label_14efbc;
        case 0x14efc0u: goto label_14efc0;
        case 0x14efc4u: goto label_14efc4;
        case 0x14efc8u: goto label_14efc8;
        case 0x14efccu: goto label_14efcc;
        case 0x14efd0u: goto label_14efd0;
        case 0x14efd4u: goto label_14efd4;
        case 0x14efd8u: goto label_14efd8;
        case 0x14efdcu: goto label_14efdc;
        case 0x14efe0u: goto label_14efe0;
        case 0x14efe4u: goto label_14efe4;
        case 0x14efe8u: goto label_14efe8;
        case 0x14efecu: goto label_14efec;
        case 0x14eff0u: goto label_14eff0;
        case 0x14eff4u: goto label_14eff4;
        case 0x14eff8u: goto label_14eff8;
        case 0x14effcu: goto label_14effc;
        case 0x14f000u: goto label_14f000;
        case 0x14f004u: goto label_14f004;
        case 0x14f008u: goto label_14f008;
        case 0x14f00cu: goto label_14f00c;
        case 0x14f010u: goto label_14f010;
        case 0x14f014u: goto label_14f014;
        case 0x14f018u: goto label_14f018;
        case 0x14f01cu: goto label_14f01c;
        case 0x14f020u: goto label_14f020;
        case 0x14f024u: goto label_14f024;
        case 0x14f028u: goto label_14f028;
        case 0x14f02cu: goto label_14f02c;
        case 0x14f030u: goto label_14f030;
        case 0x14f034u: goto label_14f034;
        case 0x14f038u: goto label_14f038;
        case 0x14f03cu: goto label_14f03c;
        case 0x14f040u: goto label_14f040;
        case 0x14f044u: goto label_14f044;
        case 0x14f048u: goto label_14f048;
        case 0x14f04cu: goto label_14f04c;
        case 0x14f050u: goto label_14f050;
        case 0x14f054u: goto label_14f054;
        case 0x14f058u: goto label_14f058;
        case 0x14f05cu: goto label_14f05c;
        case 0x14f060u: goto label_14f060;
        case 0x14f064u: goto label_14f064;
        case 0x14f068u: goto label_14f068;
        case 0x14f06cu: goto label_14f06c;
        case 0x14f070u: goto label_14f070;
        case 0x14f074u: goto label_14f074;
        case 0x14f078u: goto label_14f078;
        case 0x14f07cu: goto label_14f07c;
        case 0x14f080u: goto label_14f080;
        case 0x14f084u: goto label_14f084;
        case 0x14f088u: goto label_14f088;
        case 0x14f08cu: goto label_14f08c;
        case 0x14f090u: goto label_14f090;
        case 0x14f094u: goto label_14f094;
        case 0x14f098u: goto label_14f098;
        case 0x14f09cu: goto label_14f09c;
        case 0x14f0a0u: goto label_14f0a0;
        case 0x14f0a4u: goto label_14f0a4;
        case 0x14f0a8u: goto label_14f0a8;
        case 0x14f0acu: goto label_14f0ac;
        case 0x14f0b0u: goto label_14f0b0;
        case 0x14f0b4u: goto label_14f0b4;
        case 0x14f0b8u: goto label_14f0b8;
        case 0x14f0bcu: goto label_14f0bc;
        case 0x14f0c0u: goto label_14f0c0;
        case 0x14f0c4u: goto label_14f0c4;
        case 0x14f0c8u: goto label_14f0c8;
        case 0x14f0ccu: goto label_14f0cc;
        case 0x14f0d0u: goto label_14f0d0;
        case 0x14f0d4u: goto label_14f0d4;
        case 0x14f0d8u: goto label_14f0d8;
        case 0x14f0dcu: goto label_14f0dc;
        case 0x14f0e0u: goto label_14f0e0;
        case 0x14f0e4u: goto label_14f0e4;
        case 0x14f0e8u: goto label_14f0e8;
        case 0x14f0ecu: goto label_14f0ec;
        case 0x14f0f0u: goto label_14f0f0;
        case 0x14f0f4u: goto label_14f0f4;
        case 0x14f0f8u: goto label_14f0f8;
        case 0x14f0fcu: goto label_14f0fc;
        case 0x14f100u: goto label_14f100;
        case 0x14f104u: goto label_14f104;
        case 0x14f108u: goto label_14f108;
        case 0x14f10cu: goto label_14f10c;
        case 0x14f110u: goto label_14f110;
        case 0x14f114u: goto label_14f114;
        case 0x14f118u: goto label_14f118;
        case 0x14f11cu: goto label_14f11c;
        case 0x14f120u: goto label_14f120;
        case 0x14f124u: goto label_14f124;
        case 0x14f128u: goto label_14f128;
        case 0x14f12cu: goto label_14f12c;
        case 0x14f130u: goto label_14f130;
        case 0x14f134u: goto label_14f134;
        case 0x14f138u: goto label_14f138;
        case 0x14f13cu: goto label_14f13c;
        case 0x14f140u: goto label_14f140;
        case 0x14f144u: goto label_14f144;
        case 0x14f148u: goto label_14f148;
        case 0x14f14cu: goto label_14f14c;
        case 0x14f150u: goto label_14f150;
        case 0x14f154u: goto label_14f154;
        case 0x14f158u: goto label_14f158;
        case 0x14f15cu: goto label_14f15c;
        case 0x14f160u: goto label_14f160;
        case 0x14f164u: goto label_14f164;
        case 0x14f168u: goto label_14f168;
        case 0x14f16cu: goto label_14f16c;
        case 0x14f170u: goto label_14f170;
        case 0x14f174u: goto label_14f174;
        case 0x14f178u: goto label_14f178;
        case 0x14f17cu: goto label_14f17c;
        case 0x14f180u: goto label_14f180;
        case 0x14f184u: goto label_14f184;
        case 0x14f188u: goto label_14f188;
        case 0x14f18cu: goto label_14f18c;
        case 0x14f190u: goto label_14f190;
        case 0x14f194u: goto label_14f194;
        case 0x14f198u: goto label_14f198;
        case 0x14f19cu: goto label_14f19c;
        case 0x14f1a0u: goto label_14f1a0;
        case 0x14f1a4u: goto label_14f1a4;
        case 0x14f1a8u: goto label_14f1a8;
        case 0x14f1acu: goto label_14f1ac;
        case 0x14f1b0u: goto label_14f1b0;
        case 0x14f1b4u: goto label_14f1b4;
        case 0x14f1b8u: goto label_14f1b8;
        case 0x14f1bcu: goto label_14f1bc;
        case 0x14f1c0u: goto label_14f1c0;
        case 0x14f1c4u: goto label_14f1c4;
        case 0x14f1c8u: goto label_14f1c8;
        case 0x14f1ccu: goto label_14f1cc;
        case 0x14f1d0u: goto label_14f1d0;
        case 0x14f1d4u: goto label_14f1d4;
        case 0x14f1d8u: goto label_14f1d8;
        case 0x14f1dcu: goto label_14f1dc;
        case 0x14f1e0u: goto label_14f1e0;
        case 0x14f1e4u: goto label_14f1e4;
        case 0x14f1e8u: goto label_14f1e8;
        case 0x14f1ecu: goto label_14f1ec;
        case 0x14f1f0u: goto label_14f1f0;
        case 0x14f1f4u: goto label_14f1f4;
        case 0x14f1f8u: goto label_14f1f8;
        case 0x14f1fcu: goto label_14f1fc;
        case 0x14f200u: goto label_14f200;
        case 0x14f204u: goto label_14f204;
        case 0x14f208u: goto label_14f208;
        case 0x14f20cu: goto label_14f20c;
        case 0x14f210u: goto label_14f210;
        case 0x14f214u: goto label_14f214;
        case 0x14f218u: goto label_14f218;
        case 0x14f21cu: goto label_14f21c;
        case 0x14f220u: goto label_14f220;
        case 0x14f224u: goto label_14f224;
        case 0x14f228u: goto label_14f228;
        case 0x14f22cu: goto label_14f22c;
        case 0x14f230u: goto label_14f230;
        case 0x14f234u: goto label_14f234;
        case 0x14f238u: goto label_14f238;
        case 0x14f23cu: goto label_14f23c;
        case 0x14f240u: goto label_14f240;
        case 0x14f244u: goto label_14f244;
        case 0x14f248u: goto label_14f248;
        case 0x14f24cu: goto label_14f24c;
        case 0x14f250u: goto label_14f250;
        case 0x14f254u: goto label_14f254;
        case 0x14f258u: goto label_14f258;
        case 0x14f25cu: goto label_14f25c;
        case 0x14f260u: goto label_14f260;
        case 0x14f264u: goto label_14f264;
        case 0x14f268u: goto label_14f268;
        case 0x14f26cu: goto label_14f26c;
        case 0x14f270u: goto label_14f270;
        case 0x14f274u: goto label_14f274;
        case 0x14f278u: goto label_14f278;
        case 0x14f27cu: goto label_14f27c;
        case 0x14f280u: goto label_14f280;
        case 0x14f284u: goto label_14f284;
        case 0x14f288u: goto label_14f288;
        case 0x14f28cu: goto label_14f28c;
        case 0x14f290u: goto label_14f290;
        case 0x14f294u: goto label_14f294;
        case 0x14f298u: goto label_14f298;
        case 0x14f29cu: goto label_14f29c;
        case 0x14f2a0u: goto label_14f2a0;
        case 0x14f2a4u: goto label_14f2a4;
        case 0x14f2a8u: goto label_14f2a8;
        case 0x14f2acu: goto label_14f2ac;
        case 0x14f2b0u: goto label_14f2b0;
        case 0x14f2b4u: goto label_14f2b4;
        case 0x14f2b8u: goto label_14f2b8;
        case 0x14f2bcu: goto label_14f2bc;
        case 0x14f2c0u: goto label_14f2c0;
        case 0x14f2c4u: goto label_14f2c4;
        case 0x14f2c8u: goto label_14f2c8;
        case 0x14f2ccu: goto label_14f2cc;
        case 0x14f2d0u: goto label_14f2d0;
        case 0x14f2d4u: goto label_14f2d4;
        case 0x14f2d8u: goto label_14f2d8;
        case 0x14f2dcu: goto label_14f2dc;
        case 0x14f2e0u: goto label_14f2e0;
        case 0x14f2e4u: goto label_14f2e4;
        case 0x14f2e8u: goto label_14f2e8;
        case 0x14f2ecu: goto label_14f2ec;
        case 0x14f2f0u: goto label_14f2f0;
        case 0x14f2f4u: goto label_14f2f4;
        case 0x14f2f8u: goto label_14f2f8;
        case 0x14f2fcu: goto label_14f2fc;
        case 0x14f300u: goto label_14f300;
        case 0x14f304u: goto label_14f304;
        case 0x14f308u: goto label_14f308;
        case 0x14f30cu: goto label_14f30c;
        case 0x14f310u: goto label_14f310;
        case 0x14f314u: goto label_14f314;
        case 0x14f318u: goto label_14f318;
        case 0x14f31cu: goto label_14f31c;
        case 0x14f320u: goto label_14f320;
        case 0x14f324u: goto label_14f324;
        case 0x14f328u: goto label_14f328;
        case 0x14f32cu: goto label_14f32c;
        case 0x14f330u: goto label_14f330;
        case 0x14f334u: goto label_14f334;
        case 0x14f338u: goto label_14f338;
        case 0x14f33cu: goto label_14f33c;
        case 0x14f340u: goto label_14f340;
        case 0x14f344u: goto label_14f344;
        case 0x14f348u: goto label_14f348;
        case 0x14f34cu: goto label_14f34c;
        case 0x14f350u: goto label_14f350;
        case 0x14f354u: goto label_14f354;
        case 0x14f358u: goto label_14f358;
        case 0x14f35cu: goto label_14f35c;
        case 0x14f360u: goto label_14f360;
        case 0x14f364u: goto label_14f364;
        case 0x14f368u: goto label_14f368;
        case 0x14f36cu: goto label_14f36c;
        case 0x14f370u: goto label_14f370;
        case 0x14f374u: goto label_14f374;
        case 0x14f378u: goto label_14f378;
        case 0x14f37cu: goto label_14f37c;
        case 0x14f380u: goto label_14f380;
        case 0x14f384u: goto label_14f384;
        case 0x14f388u: goto label_14f388;
        case 0x14f38cu: goto label_14f38c;
        case 0x14f390u: goto label_14f390;
        case 0x14f394u: goto label_14f394;
        case 0x14f398u: goto label_14f398;
        case 0x14f39cu: goto label_14f39c;
        case 0x14f3a0u: goto label_14f3a0;
        case 0x14f3a4u: goto label_14f3a4;
        case 0x14f3a8u: goto label_14f3a8;
        case 0x14f3acu: goto label_14f3ac;
        case 0x14f3b0u: goto label_14f3b0;
        case 0x14f3b4u: goto label_14f3b4;
        case 0x14f3b8u: goto label_14f3b8;
        case 0x14f3bcu: goto label_14f3bc;
        case 0x14f3c0u: goto label_14f3c0;
        case 0x14f3c4u: goto label_14f3c4;
        case 0x14f3c8u: goto label_14f3c8;
        case 0x14f3ccu: goto label_14f3cc;
        case 0x14f3d0u: goto label_14f3d0;
        case 0x14f3d4u: goto label_14f3d4;
        case 0x14f3d8u: goto label_14f3d8;
        case 0x14f3dcu: goto label_14f3dc;
        case 0x14f3e0u: goto label_14f3e0;
        case 0x14f3e4u: goto label_14f3e4;
        case 0x14f3e8u: goto label_14f3e8;
        case 0x14f3ecu: goto label_14f3ec;
        case 0x14f3f0u: goto label_14f3f0;
        case 0x14f3f4u: goto label_14f3f4;
        case 0x14f3f8u: goto label_14f3f8;
        case 0x14f3fcu: goto label_14f3fc;
        case 0x14f400u: goto label_14f400;
        case 0x14f404u: goto label_14f404;
        case 0x14f408u: goto label_14f408;
        case 0x14f40cu: goto label_14f40c;
        case 0x14f410u: goto label_14f410;
        case 0x14f414u: goto label_14f414;
        case 0x14f418u: goto label_14f418;
        case 0x14f41cu: goto label_14f41c;
        case 0x14f420u: goto label_14f420;
        case 0x14f424u: goto label_14f424;
        case 0x14f428u: goto label_14f428;
        case 0x14f42cu: goto label_14f42c;
        case 0x14f430u: goto label_14f430;
        case 0x14f434u: goto label_14f434;
        case 0x14f438u: goto label_14f438;
        case 0x14f43cu: goto label_14f43c;
        case 0x14f440u: goto label_14f440;
        case 0x14f444u: goto label_14f444;
        case 0x14f448u: goto label_14f448;
        case 0x14f44cu: goto label_14f44c;
        case 0x14f450u: goto label_14f450;
        case 0x14f454u: goto label_14f454;
        case 0x14f458u: goto label_14f458;
        case 0x14f45cu: goto label_14f45c;
        case 0x14f460u: goto label_14f460;
        case 0x14f464u: goto label_14f464;
        case 0x14f468u: goto label_14f468;
        case 0x14f46cu: goto label_14f46c;
        case 0x14f470u: goto label_14f470;
        case 0x14f474u: goto label_14f474;
        case 0x14f478u: goto label_14f478;
        case 0x14f47cu: goto label_14f47c;
        case 0x14f480u: goto label_14f480;
        case 0x14f484u: goto label_14f484;
        case 0x14f488u: goto label_14f488;
        case 0x14f48cu: goto label_14f48c;
        case 0x14f490u: goto label_14f490;
        case 0x14f494u: goto label_14f494;
        case 0x14f498u: goto label_14f498;
        case 0x14f49cu: goto label_14f49c;
        case 0x14f4a0u: goto label_14f4a0;
        case 0x14f4a4u: goto label_14f4a4;
        case 0x14f4a8u: goto label_14f4a8;
        case 0x14f4acu: goto label_14f4ac;
        case 0x14f4b0u: goto label_14f4b0;
        case 0x14f4b4u: goto label_14f4b4;
        case 0x14f4b8u: goto label_14f4b8;
        case 0x14f4bcu: goto label_14f4bc;
        case 0x14f4c0u: goto label_14f4c0;
        case 0x14f4c4u: goto label_14f4c4;
        case 0x14f4c8u: goto label_14f4c8;
        case 0x14f4ccu: goto label_14f4cc;
        case 0x14f4d0u: goto label_14f4d0;
        case 0x14f4d4u: goto label_14f4d4;
        case 0x14f4d8u: goto label_14f4d8;
        case 0x14f4dcu: goto label_14f4dc;
        case 0x14f4e0u: goto label_14f4e0;
        case 0x14f4e4u: goto label_14f4e4;
        case 0x14f4e8u: goto label_14f4e8;
        case 0x14f4ecu: goto label_14f4ec;
        case 0x14f4f0u: goto label_14f4f0;
        case 0x14f4f4u: goto label_14f4f4;
        case 0x14f4f8u: goto label_14f4f8;
        case 0x14f4fcu: goto label_14f4fc;
        case 0x14f500u: goto label_14f500;
        case 0x14f504u: goto label_14f504;
        case 0x14f508u: goto label_14f508;
        case 0x14f50cu: goto label_14f50c;
        case 0x14f510u: goto label_14f510;
        case 0x14f514u: goto label_14f514;
        case 0x14f518u: goto label_14f518;
        case 0x14f51cu: goto label_14f51c;
        case 0x14f520u: goto label_14f520;
        case 0x14f524u: goto label_14f524;
        case 0x14f528u: goto label_14f528;
        case 0x14f52cu: goto label_14f52c;
        case 0x14f530u: goto label_14f530;
        case 0x14f534u: goto label_14f534;
        case 0x14f538u: goto label_14f538;
        case 0x14f53cu: goto label_14f53c;
        case 0x14f540u: goto label_14f540;
        case 0x14f544u: goto label_14f544;
        case 0x14f548u: goto label_14f548;
        case 0x14f54cu: goto label_14f54c;
        case 0x14f550u: goto label_14f550;
        case 0x14f554u: goto label_14f554;
        case 0x14f558u: goto label_14f558;
        case 0x14f55cu: goto label_14f55c;
        case 0x14f560u: goto label_14f560;
        case 0x14f564u: goto label_14f564;
        case 0x14f568u: goto label_14f568;
        case 0x14f56cu: goto label_14f56c;
        case 0x14f570u: goto label_14f570;
        case 0x14f574u: goto label_14f574;
        case 0x14f578u: goto label_14f578;
        case 0x14f57cu: goto label_14f57c;
        case 0x14f580u: goto label_14f580;
        case 0x14f584u: goto label_14f584;
        case 0x14f588u: goto label_14f588;
        case 0x14f58cu: goto label_14f58c;
        case 0x14f590u: goto label_14f590;
        case 0x14f594u: goto label_14f594;
        case 0x14f598u: goto label_14f598;
        case 0x14f59cu: goto label_14f59c;
        case 0x14f5a0u: goto label_14f5a0;
        case 0x14f5a4u: goto label_14f5a4;
        case 0x14f5a8u: goto label_14f5a8;
        case 0x14f5acu: goto label_14f5ac;
        case 0x14f5b0u: goto label_14f5b0;
        case 0x14f5b4u: goto label_14f5b4;
        case 0x14f5b8u: goto label_14f5b8;
        case 0x14f5bcu: goto label_14f5bc;
        case 0x14f5c0u: goto label_14f5c0;
        case 0x14f5c4u: goto label_14f5c4;
        case 0x14f5c8u: goto label_14f5c8;
        case 0x14f5ccu: goto label_14f5cc;
        case 0x14f5d0u: goto label_14f5d0;
        case 0x14f5d4u: goto label_14f5d4;
        case 0x14f5d8u: goto label_14f5d8;
        case 0x14f5dcu: goto label_14f5dc;
        case 0x14f5e0u: goto label_14f5e0;
        case 0x14f5e4u: goto label_14f5e4;
        case 0x14f5e8u: goto label_14f5e8;
        case 0x14f5ecu: goto label_14f5ec;
        case 0x14f5f0u: goto label_14f5f0;
        case 0x14f5f4u: goto label_14f5f4;
        case 0x14f5f8u: goto label_14f5f8;
        case 0x14f5fcu: goto label_14f5fc;
        case 0x14f600u: goto label_14f600;
        case 0x14f604u: goto label_14f604;
        case 0x14f608u: goto label_14f608;
        case 0x14f60cu: goto label_14f60c;
        case 0x14f610u: goto label_14f610;
        case 0x14f614u: goto label_14f614;
        case 0x14f618u: goto label_14f618;
        case 0x14f61cu: goto label_14f61c;
        case 0x14f620u: goto label_14f620;
        case 0x14f624u: goto label_14f624;
        case 0x14f628u: goto label_14f628;
        case 0x14f62cu: goto label_14f62c;
        case 0x14f630u: goto label_14f630;
        case 0x14f634u: goto label_14f634;
        case 0x14f638u: goto label_14f638;
        case 0x14f63cu: goto label_14f63c;
        case 0x14f640u: goto label_14f640;
        case 0x14f644u: goto label_14f644;
        case 0x14f648u: goto label_14f648;
        case 0x14f64cu: goto label_14f64c;
        case 0x14f650u: goto label_14f650;
        case 0x14f654u: goto label_14f654;
        case 0x14f658u: goto label_14f658;
        case 0x14f65cu: goto label_14f65c;
        case 0x14f660u: goto label_14f660;
        case 0x14f664u: goto label_14f664;
        case 0x14f668u: goto label_14f668;
        case 0x14f66cu: goto label_14f66c;
        case 0x14f670u: goto label_14f670;
        case 0x14f674u: goto label_14f674;
        case 0x14f678u: goto label_14f678;
        case 0x14f67cu: goto label_14f67c;
        case 0x14f680u: goto label_14f680;
        case 0x14f684u: goto label_14f684;
        case 0x14f688u: goto label_14f688;
        case 0x14f68cu: goto label_14f68c;
        case 0x14f690u: goto label_14f690;
        case 0x14f694u: goto label_14f694;
        case 0x14f698u: goto label_14f698;
        case 0x14f69cu: goto label_14f69c;
        case 0x14f6a0u: goto label_14f6a0;
        case 0x14f6a4u: goto label_14f6a4;
        case 0x14f6a8u: goto label_14f6a8;
        case 0x14f6acu: goto label_14f6ac;
        case 0x14f6b0u: goto label_14f6b0;
        case 0x14f6b4u: goto label_14f6b4;
        case 0x14f6b8u: goto label_14f6b8;
        case 0x14f6bcu: goto label_14f6bc;
        case 0x14f6c0u: goto label_14f6c0;
        case 0x14f6c4u: goto label_14f6c4;
        case 0x14f6c8u: goto label_14f6c8;
        case 0x14f6ccu: goto label_14f6cc;
        case 0x14f6d0u: goto label_14f6d0;
        case 0x14f6d4u: goto label_14f6d4;
        case 0x14f6d8u: goto label_14f6d8;
        case 0x14f6dcu: goto label_14f6dc;
        case 0x14f6e0u: goto label_14f6e0;
        case 0x14f6e4u: goto label_14f6e4;
        case 0x14f6e8u: goto label_14f6e8;
        case 0x14f6ecu: goto label_14f6ec;
        case 0x14f6f0u: goto label_14f6f0;
        case 0x14f6f4u: goto label_14f6f4;
        case 0x14f6f8u: goto label_14f6f8;
        case 0x14f6fcu: goto label_14f6fc;
        case 0x14f700u: goto label_14f700;
        case 0x14f704u: goto label_14f704;
        case 0x14f708u: goto label_14f708;
        case 0x14f70cu: goto label_14f70c;
        case 0x14f710u: goto label_14f710;
        case 0x14f714u: goto label_14f714;
        case 0x14f718u: goto label_14f718;
        case 0x14f71cu: goto label_14f71c;
        case 0x14f720u: goto label_14f720;
        case 0x14f724u: goto label_14f724;
        case 0x14f728u: goto label_14f728;
        case 0x14f72cu: goto label_14f72c;
        case 0x14f730u: goto label_14f730;
        case 0x14f734u: goto label_14f734;
        case 0x14f738u: goto label_14f738;
        case 0x14f73cu: goto label_14f73c;
        case 0x14f740u: goto label_14f740;
        case 0x14f744u: goto label_14f744;
        case 0x14f748u: goto label_14f748;
        case 0x14f74cu: goto label_14f74c;
        case 0x14f750u: goto label_14f750;
        case 0x14f754u: goto label_14f754;
        case 0x14f758u: goto label_14f758;
        case 0x14f75cu: goto label_14f75c;
        case 0x14f760u: goto label_14f760;
        case 0x14f764u: goto label_14f764;
        case 0x14f768u: goto label_14f768;
        case 0x14f76cu: goto label_14f76c;
        case 0x14f770u: goto label_14f770;
        case 0x14f774u: goto label_14f774;
        case 0x14f778u: goto label_14f778;
        case 0x14f77cu: goto label_14f77c;
        case 0x14f780u: goto label_14f780;
        case 0x14f784u: goto label_14f784;
        case 0x14f788u: goto label_14f788;
        case 0x14f78cu: goto label_14f78c;
        case 0x14f790u: goto label_14f790;
        case 0x14f794u: goto label_14f794;
        case 0x14f798u: goto label_14f798;
        case 0x14f79cu: goto label_14f79c;
        case 0x14f7a0u: goto label_14f7a0;
        case 0x14f7a4u: goto label_14f7a4;
        case 0x14f7a8u: goto label_14f7a8;
        case 0x14f7acu: goto label_14f7ac;
        case 0x14f7b0u: goto label_14f7b0;
        case 0x14f7b4u: goto label_14f7b4;
        case 0x14f7b8u: goto label_14f7b8;
        case 0x14f7bcu: goto label_14f7bc;
        case 0x14f7c0u: goto label_14f7c0;
        case 0x14f7c4u: goto label_14f7c4;
        case 0x14f7c8u: goto label_14f7c8;
        case 0x14f7ccu: goto label_14f7cc;
        case 0x14f7d0u: goto label_14f7d0;
        case 0x14f7d4u: goto label_14f7d4;
        case 0x14f7d8u: goto label_14f7d8;
        case 0x14f7dcu: goto label_14f7dc;
        case 0x14f7e0u: goto label_14f7e0;
        case 0x14f7e4u: goto label_14f7e4;
        case 0x14f7e8u: goto label_14f7e8;
        case 0x14f7ecu: goto label_14f7ec;
        case 0x14f7f0u: goto label_14f7f0;
        case 0x14f7f4u: goto label_14f7f4;
        case 0x14f7f8u: goto label_14f7f8;
        case 0x14f7fcu: goto label_14f7fc;
        case 0x14f800u: goto label_14f800;
        case 0x14f804u: goto label_14f804;
        case 0x14f808u: goto label_14f808;
        case 0x14f80cu: goto label_14f80c;
        case 0x14f810u: goto label_14f810;
        case 0x14f814u: goto label_14f814;
        case 0x14f818u: goto label_14f818;
        case 0x14f81cu: goto label_14f81c;
        case 0x14f820u: goto label_14f820;
        case 0x14f824u: goto label_14f824;
        case 0x14f828u: goto label_14f828;
        case 0x14f82cu: goto label_14f82c;
        case 0x14f830u: goto label_14f830;
        case 0x14f834u: goto label_14f834;
        case 0x14f838u: goto label_14f838;
        case 0x14f83cu: goto label_14f83c;
        case 0x14f840u: goto label_14f840;
        case 0x14f844u: goto label_14f844;
        case 0x14f848u: goto label_14f848;
        case 0x14f84cu: goto label_14f84c;
        case 0x14f850u: goto label_14f850;
        case 0x14f854u: goto label_14f854;
        case 0x14f858u: goto label_14f858;
        case 0x14f85cu: goto label_14f85c;
        case 0x14f860u: goto label_14f860;
        case 0x14f864u: goto label_14f864;
        case 0x14f868u: goto label_14f868;
        case 0x14f86cu: goto label_14f86c;
        case 0x14f870u: goto label_14f870;
        case 0x14f874u: goto label_14f874;
        case 0x14f878u: goto label_14f878;
        case 0x14f87cu: goto label_14f87c;
        case 0x14f880u: goto label_14f880;
        case 0x14f884u: goto label_14f884;
        case 0x14f888u: goto label_14f888;
        case 0x14f88cu: goto label_14f88c;
        case 0x14f890u: goto label_14f890;
        case 0x14f894u: goto label_14f894;
        case 0x14f898u: goto label_14f898;
        case 0x14f89cu: goto label_14f89c;
        case 0x14f8a0u: goto label_14f8a0;
        case 0x14f8a4u: goto label_14f8a4;
        case 0x14f8a8u: goto label_14f8a8;
        case 0x14f8acu: goto label_14f8ac;
        case 0x14f8b0u: goto label_14f8b0;
        case 0x14f8b4u: goto label_14f8b4;
        case 0x14f8b8u: goto label_14f8b8;
        case 0x14f8bcu: goto label_14f8bc;
        case 0x14f8c0u: goto label_14f8c0;
        case 0x14f8c4u: goto label_14f8c4;
        case 0x14f8c8u: goto label_14f8c8;
        case 0x14f8ccu: goto label_14f8cc;
        case 0x14f8d0u: goto label_14f8d0;
        case 0x14f8d4u: goto label_14f8d4;
        case 0x14f8d8u: goto label_14f8d8;
        case 0x14f8dcu: goto label_14f8dc;
        case 0x14f8e0u: goto label_14f8e0;
        case 0x14f8e4u: goto label_14f8e4;
        case 0x14f8e8u: goto label_14f8e8;
        case 0x14f8ecu: goto label_14f8ec;
        case 0x14f8f0u: goto label_14f8f0;
        case 0x14f8f4u: goto label_14f8f4;
        case 0x14f8f8u: goto label_14f8f8;
        case 0x14f8fcu: goto label_14f8fc;
        case 0x14f900u: goto label_14f900;
        case 0x14f904u: goto label_14f904;
        case 0x14f908u: goto label_14f908;
        case 0x14f90cu: goto label_14f90c;
        case 0x14f910u: goto label_14f910;
        case 0x14f914u: goto label_14f914;
        case 0x14f918u: goto label_14f918;
        case 0x14f91cu: goto label_14f91c;
        case 0x14f920u: goto label_14f920;
        case 0x14f924u: goto label_14f924;
        case 0x14f928u: goto label_14f928;
        case 0x14f92cu: goto label_14f92c;
        case 0x14f930u: goto label_14f930;
        case 0x14f934u: goto label_14f934;
        case 0x14f938u: goto label_14f938;
        case 0x14f93cu: goto label_14f93c;
        case 0x14f940u: goto label_14f940;
        case 0x14f944u: goto label_14f944;
        case 0x14f948u: goto label_14f948;
        case 0x14f94cu: goto label_14f94c;
        case 0x14f950u: goto label_14f950;
        case 0x14f954u: goto label_14f954;
        case 0x14f958u: goto label_14f958;
        case 0x14f95cu: goto label_14f95c;
        case 0x14f960u: goto label_14f960;
        case 0x14f964u: goto label_14f964;
        case 0x14f968u: goto label_14f968;
        case 0x14f96cu: goto label_14f96c;
        case 0x14f970u: goto label_14f970;
        case 0x14f974u: goto label_14f974;
        case 0x14f978u: goto label_14f978;
        case 0x14f97cu: goto label_14f97c;
        case 0x14f980u: goto label_14f980;
        case 0x14f984u: goto label_14f984;
        case 0x14f988u: goto label_14f988;
        case 0x14f98cu: goto label_14f98c;
        case 0x14f990u: goto label_14f990;
        case 0x14f994u: goto label_14f994;
        case 0x14f998u: goto label_14f998;
        case 0x14f99cu: goto label_14f99c;
        case 0x14f9a0u: goto label_14f9a0;
        case 0x14f9a4u: goto label_14f9a4;
        case 0x14f9a8u: goto label_14f9a8;
        case 0x14f9acu: goto label_14f9ac;
        case 0x14f9b0u: goto label_14f9b0;
        case 0x14f9b4u: goto label_14f9b4;
        case 0x14f9b8u: goto label_14f9b8;
        case 0x14f9bcu: goto label_14f9bc;
        case 0x14f9c0u: goto label_14f9c0;
        case 0x14f9c4u: goto label_14f9c4;
        case 0x14f9c8u: goto label_14f9c8;
        case 0x14f9ccu: goto label_14f9cc;
        case 0x14f9d0u: goto label_14f9d0;
        case 0x14f9d4u: goto label_14f9d4;
        case 0x14f9d8u: goto label_14f9d8;
        case 0x14f9dcu: goto label_14f9dc;
        case 0x14f9e0u: goto label_14f9e0;
        case 0x14f9e4u: goto label_14f9e4;
        case 0x14f9e8u: goto label_14f9e8;
        case 0x14f9ecu: goto label_14f9ec;
        case 0x14f9f0u: goto label_14f9f0;
        case 0x14f9f4u: goto label_14f9f4;
        case 0x14f9f8u: goto label_14f9f8;
        case 0x14f9fcu: goto label_14f9fc;
        case 0x14fa00u: goto label_14fa00;
        case 0x14fa04u: goto label_14fa04;
        case 0x14fa08u: goto label_14fa08;
        case 0x14fa0cu: goto label_14fa0c;
        case 0x14fa10u: goto label_14fa10;
        case 0x14fa14u: goto label_14fa14;
        case 0x14fa18u: goto label_14fa18;
        case 0x14fa1cu: goto label_14fa1c;
        case 0x14fa20u: goto label_14fa20;
        case 0x14fa24u: goto label_14fa24;
        case 0x14fa28u: goto label_14fa28;
        case 0x14fa2cu: goto label_14fa2c;
        case 0x14fa30u: goto label_14fa30;
        case 0x14fa34u: goto label_14fa34;
        case 0x14fa38u: goto label_14fa38;
        case 0x14fa3cu: goto label_14fa3c;
        case 0x14fa40u: goto label_14fa40;
        case 0x14fa44u: goto label_14fa44;
        case 0x14fa48u: goto label_14fa48;
        case 0x14fa4cu: goto label_14fa4c;
        case 0x14fa50u: goto label_14fa50;
        case 0x14fa54u: goto label_14fa54;
        case 0x14fa58u: goto label_14fa58;
        case 0x14fa5cu: goto label_14fa5c;
        case 0x14fa60u: goto label_14fa60;
        case 0x14fa64u: goto label_14fa64;
        case 0x14fa68u: goto label_14fa68;
        case 0x14fa6cu: goto label_14fa6c;
        case 0x14fa70u: goto label_14fa70;
        case 0x14fa74u: goto label_14fa74;
        case 0x14fa78u: goto label_14fa78;
        case 0x14fa7cu: goto label_14fa7c;
        case 0x14fa80u: goto label_14fa80;
        case 0x14fa84u: goto label_14fa84;
        case 0x14fa88u: goto label_14fa88;
        case 0x14fa8cu: goto label_14fa8c;
        case 0x14fa90u: goto label_14fa90;
        case 0x14fa94u: goto label_14fa94;
        case 0x14fa98u: goto label_14fa98;
        case 0x14fa9cu: goto label_14fa9c;
        case 0x14faa0u: goto label_14faa0;
        case 0x14faa4u: goto label_14faa4;
        case 0x14faa8u: goto label_14faa8;
        case 0x14faacu: goto label_14faac;
        case 0x14fab0u: goto label_14fab0;
        case 0x14fab4u: goto label_14fab4;
        case 0x14fab8u: goto label_14fab8;
        case 0x14fabcu: goto label_14fabc;
        case 0x14fac0u: goto label_14fac0;
        case 0x14fac4u: goto label_14fac4;
        case 0x14fac8u: goto label_14fac8;
        case 0x14faccu: goto label_14facc;
        case 0x14fad0u: goto label_14fad0;
        case 0x14fad4u: goto label_14fad4;
        case 0x14fad8u: goto label_14fad8;
        case 0x14fadcu: goto label_14fadc;
        case 0x14fae0u: goto label_14fae0;
        case 0x14fae4u: goto label_14fae4;
        case 0x14fae8u: goto label_14fae8;
        case 0x14faecu: goto label_14faec;
        case 0x14faf0u: goto label_14faf0;
        case 0x14faf4u: goto label_14faf4;
        case 0x14faf8u: goto label_14faf8;
        case 0x14fafcu: goto label_14fafc;
        case 0x14fb00u: goto label_14fb00;
        case 0x14fb04u: goto label_14fb04;
        case 0x14fb08u: goto label_14fb08;
        case 0x14fb0cu: goto label_14fb0c;
        case 0x14fb10u: goto label_14fb10;
        case 0x14fb14u: goto label_14fb14;
        case 0x14fb18u: goto label_14fb18;
        case 0x14fb1cu: goto label_14fb1c;
        case 0x14fb20u: goto label_14fb20;
        case 0x14fb24u: goto label_14fb24;
        case 0x14fb28u: goto label_14fb28;
        case 0x14fb2cu: goto label_14fb2c;
        case 0x14fb30u: goto label_14fb30;
        case 0x14fb34u: goto label_14fb34;
        case 0x14fb38u: goto label_14fb38;
        case 0x14fb3cu: goto label_14fb3c;
        case 0x14fb40u: goto label_14fb40;
        case 0x14fb44u: goto label_14fb44;
        case 0x14fb48u: goto label_14fb48;
        case 0x14fb4cu: goto label_14fb4c;
        case 0x14fb50u: goto label_14fb50;
        case 0x14fb54u: goto label_14fb54;
        case 0x14fb58u: goto label_14fb58;
        case 0x14fb5cu: goto label_14fb5c;
        case 0x14fb60u: goto label_14fb60;
        case 0x14fb64u: goto label_14fb64;
        case 0x14fb68u: goto label_14fb68;
        case 0x14fb6cu: goto label_14fb6c;
        case 0x14fb70u: goto label_14fb70;
        case 0x14fb74u: goto label_14fb74;
        case 0x14fb78u: goto label_14fb78;
        case 0x14fb7cu: goto label_14fb7c;
        case 0x14fb80u: goto label_14fb80;
        case 0x14fb84u: goto label_14fb84;
        case 0x14fb88u: goto label_14fb88;
        case 0x14fb8cu: goto label_14fb8c;
        case 0x14fb90u: goto label_14fb90;
        case 0x14fb94u: goto label_14fb94;
        case 0x14fb98u: goto label_14fb98;
        case 0x14fb9cu: goto label_14fb9c;
        case 0x14fba0u: goto label_14fba0;
        case 0x14fba4u: goto label_14fba4;
        case 0x14fba8u: goto label_14fba8;
        case 0x14fbacu: goto label_14fbac;
        case 0x14fbb0u: goto label_14fbb0;
        case 0x14fbb4u: goto label_14fbb4;
        case 0x14fbb8u: goto label_14fbb8;
        case 0x14fbbcu: goto label_14fbbc;
        case 0x14fbc0u: goto label_14fbc0;
        case 0x14fbc4u: goto label_14fbc4;
        case 0x14fbc8u: goto label_14fbc8;
        case 0x14fbccu: goto label_14fbcc;
        case 0x14fbd0u: goto label_14fbd0;
        case 0x14fbd4u: goto label_14fbd4;
        case 0x14fbd8u: goto label_14fbd8;
        case 0x14fbdcu: goto label_14fbdc;
        case 0x14fbe0u: goto label_14fbe0;
        case 0x14fbe4u: goto label_14fbe4;
        case 0x14fbe8u: goto label_14fbe8;
        case 0x14fbecu: goto label_14fbec;
        case 0x14fbf0u: goto label_14fbf0;
        case 0x14fbf4u: goto label_14fbf4;
        case 0x14fbf8u: goto label_14fbf8;
        case 0x14fbfcu: goto label_14fbfc;
        case 0x14fc00u: goto label_14fc00;
        case 0x14fc04u: goto label_14fc04;
        case 0x14fc08u: goto label_14fc08;
        case 0x14fc0cu: goto label_14fc0c;
        case 0x14fc10u: goto label_14fc10;
        case 0x14fc14u: goto label_14fc14;
        case 0x14fc18u: goto label_14fc18;
        case 0x14fc1cu: goto label_14fc1c;
        case 0x14fc20u: goto label_14fc20;
        case 0x14fc24u: goto label_14fc24;
        case 0x14fc28u: goto label_14fc28;
        case 0x14fc2cu: goto label_14fc2c;
        case 0x14fc30u: goto label_14fc30;
        case 0x14fc34u: goto label_14fc34;
        case 0x14fc38u: goto label_14fc38;
        case 0x14fc3cu: goto label_14fc3c;
        case 0x14fc40u: goto label_14fc40;
        case 0x14fc44u: goto label_14fc44;
        case 0x14fc48u: goto label_14fc48;
        case 0x14fc4cu: goto label_14fc4c;
        case 0x14fc50u: goto label_14fc50;
        case 0x14fc54u: goto label_14fc54;
        case 0x14fc58u: goto label_14fc58;
        case 0x14fc5cu: goto label_14fc5c;
        case 0x14fc60u: goto label_14fc60;
        case 0x14fc64u: goto label_14fc64;
        case 0x14fc68u: goto label_14fc68;
        case 0x14fc6cu: goto label_14fc6c;
        case 0x14fc70u: goto label_14fc70;
        case 0x14fc74u: goto label_14fc74;
        case 0x14fc78u: goto label_14fc78;
        case 0x14fc7cu: goto label_14fc7c;
        case 0x14fc80u: goto label_14fc80;
        case 0x14fc84u: goto label_14fc84;
        case 0x14fc88u: goto label_14fc88;
        case 0x14fc8cu: goto label_14fc8c;
        case 0x14fc90u: goto label_14fc90;
        case 0x14fc94u: goto label_14fc94;
        case 0x14fc98u: goto label_14fc98;
        case 0x14fc9cu: goto label_14fc9c;
        case 0x14fca0u: goto label_14fca0;
        case 0x14fca4u: goto label_14fca4;
        case 0x14fca8u: goto label_14fca8;
        case 0x14fcacu: goto label_14fcac;
        case 0x14fcb0u: goto label_14fcb0;
        case 0x14fcb4u: goto label_14fcb4;
        case 0x14fcb8u: goto label_14fcb8;
        case 0x14fcbcu: goto label_14fcbc;
        case 0x14fcc0u: goto label_14fcc0;
        case 0x14fcc4u: goto label_14fcc4;
        case 0x14fcc8u: goto label_14fcc8;
        case 0x14fcccu: goto label_14fccc;
        case 0x14fcd0u: goto label_14fcd0;
        case 0x14fcd4u: goto label_14fcd4;
        case 0x14fcd8u: goto label_14fcd8;
        case 0x14fcdcu: goto label_14fcdc;
        case 0x14fce0u: goto label_14fce0;
        case 0x14fce4u: goto label_14fce4;
        case 0x14fce8u: goto label_14fce8;
        case 0x14fcecu: goto label_14fcec;
        case 0x14fcf0u: goto label_14fcf0;
        case 0x14fcf4u: goto label_14fcf4;
        case 0x14fcf8u: goto label_14fcf8;
        case 0x14fcfcu: goto label_14fcfc;
        case 0x14fd00u: goto label_14fd00;
        case 0x14fd04u: goto label_14fd04;
        case 0x14fd08u: goto label_14fd08;
        case 0x14fd0cu: goto label_14fd0c;
        case 0x14fd10u: goto label_14fd10;
        case 0x14fd14u: goto label_14fd14;
        case 0x14fd18u: goto label_14fd18;
        case 0x14fd1cu: goto label_14fd1c;
        case 0x14fd20u: goto label_14fd20;
        case 0x14fd24u: goto label_14fd24;
        case 0x14fd28u: goto label_14fd28;
        case 0x14fd2cu: goto label_14fd2c;
        case 0x14fd30u: goto label_14fd30;
        case 0x14fd34u: goto label_14fd34;
        case 0x14fd38u: goto label_14fd38;
        case 0x14fd3cu: goto label_14fd3c;
        case 0x14fd40u: goto label_14fd40;
        case 0x14fd44u: goto label_14fd44;
        case 0x14fd48u: goto label_14fd48;
        case 0x14fd4cu: goto label_14fd4c;
        case 0x14fd50u: goto label_14fd50;
        case 0x14fd54u: goto label_14fd54;
        case 0x14fd58u: goto label_14fd58;
        case 0x14fd5cu: goto label_14fd5c;
        case 0x14fd60u: goto label_14fd60;
        case 0x14fd64u: goto label_14fd64;
        case 0x14fd68u: goto label_14fd68;
        case 0x14fd6cu: goto label_14fd6c;
        case 0x14fd70u: goto label_14fd70;
        case 0x14fd74u: goto label_14fd74;
        case 0x14fd78u: goto label_14fd78;
        case 0x14fd7cu: goto label_14fd7c;
        case 0x14fd80u: goto label_14fd80;
        case 0x14fd84u: goto label_14fd84;
        case 0x14fd88u: goto label_14fd88;
        case 0x14fd8cu: goto label_14fd8c;
        case 0x14fd90u: goto label_14fd90;
        case 0x14fd94u: goto label_14fd94;
        case 0x14fd98u: goto label_14fd98;
        case 0x14fd9cu: goto label_14fd9c;
        case 0x14fda0u: goto label_14fda0;
        case 0x14fda4u: goto label_14fda4;
        case 0x14fda8u: goto label_14fda8;
        case 0x14fdacu: goto label_14fdac;
        case 0x14fdb0u: goto label_14fdb0;
        case 0x14fdb4u: goto label_14fdb4;
        case 0x14fdb8u: goto label_14fdb8;
        case 0x14fdbcu: goto label_14fdbc;
        case 0x14fdc0u: goto label_14fdc0;
        case 0x14fdc4u: goto label_14fdc4;
        case 0x14fdc8u: goto label_14fdc8;
        case 0x14fdccu: goto label_14fdcc;
        case 0x14fdd0u: goto label_14fdd0;
        case 0x14fdd4u: goto label_14fdd4;
        case 0x14fdd8u: goto label_14fdd8;
        case 0x14fddcu: goto label_14fddc;
        case 0x14fde0u: goto label_14fde0;
        case 0x14fde4u: goto label_14fde4;
        case 0x14fde8u: goto label_14fde8;
        case 0x14fdecu: goto label_14fdec;
        case 0x14fdf0u: goto label_14fdf0;
        case 0x14fdf4u: goto label_14fdf4;
        case 0x14fdf8u: goto label_14fdf8;
        case 0x14fdfcu: goto label_14fdfc;
        case 0x14fe00u: goto label_14fe00;
        case 0x14fe04u: goto label_14fe04;
        case 0x14fe08u: goto label_14fe08;
        case 0x14fe0cu: goto label_14fe0c;
        case 0x14fe10u: goto label_14fe10;
        case 0x14fe14u: goto label_14fe14;
        case 0x14fe18u: goto label_14fe18;
        case 0x14fe1cu: goto label_14fe1c;
        case 0x14fe20u: goto label_14fe20;
        case 0x14fe24u: goto label_14fe24;
        case 0x14fe28u: goto label_14fe28;
        case 0x14fe2cu: goto label_14fe2c;
        case 0x14fe30u: goto label_14fe30;
        case 0x14fe34u: goto label_14fe34;
        case 0x14fe38u: goto label_14fe38;
        case 0x14fe3cu: goto label_14fe3c;
        case 0x14fe40u: goto label_14fe40;
        case 0x14fe44u: goto label_14fe44;
        case 0x14fe48u: goto label_14fe48;
        case 0x14fe4cu: goto label_14fe4c;
        case 0x14fe50u: goto label_14fe50;
        case 0x14fe54u: goto label_14fe54;
        case 0x14fe58u: goto label_14fe58;
        case 0x14fe5cu: goto label_14fe5c;
        case 0x14fe60u: goto label_14fe60;
        case 0x14fe64u: goto label_14fe64;
        case 0x14fe68u: goto label_14fe68;
        case 0x14fe6cu: goto label_14fe6c;
        case 0x14fe70u: goto label_14fe70;
        case 0x14fe74u: goto label_14fe74;
        case 0x14fe78u: goto label_14fe78;
        case 0x14fe7cu: goto label_14fe7c;
        case 0x14fe80u: goto label_14fe80;
        case 0x14fe84u: goto label_14fe84;
        case 0x14fe88u: goto label_14fe88;
        case 0x14fe8cu: goto label_14fe8c;
        case 0x14fe90u: goto label_14fe90;
        case 0x14fe94u: goto label_14fe94;
        case 0x14fe98u: goto label_14fe98;
        case 0x14fe9cu: goto label_14fe9c;
        case 0x14fea0u: goto label_14fea0;
        case 0x14fea4u: goto label_14fea4;
        case 0x14fea8u: goto label_14fea8;
        case 0x14feacu: goto label_14feac;
        case 0x14feb0u: goto label_14feb0;
        case 0x14feb4u: goto label_14feb4;
        case 0x14feb8u: goto label_14feb8;
        case 0x14febcu: goto label_14febc;
        case 0x14fec0u: goto label_14fec0;
        case 0x14fec4u: goto label_14fec4;
        case 0x14fec8u: goto label_14fec8;
        case 0x14feccu: goto label_14fecc;
        case 0x14fed0u: goto label_14fed0;
        case 0x14fed4u: goto label_14fed4;
        case 0x14fed8u: goto label_14fed8;
        case 0x14fedcu: goto label_14fedc;
        case 0x14fee0u: goto label_14fee0;
        case 0x14fee4u: goto label_14fee4;
        case 0x14fee8u: goto label_14fee8;
        case 0x14feecu: goto label_14feec;
        case 0x14fef0u: goto label_14fef0;
        case 0x14fef4u: goto label_14fef4;
        case 0x14fef8u: goto label_14fef8;
        case 0x14fefcu: goto label_14fefc;
        case 0x14ff00u: goto label_14ff00;
        case 0x14ff04u: goto label_14ff04;
        case 0x14ff08u: goto label_14ff08;
        case 0x14ff0cu: goto label_14ff0c;
        case 0x14ff10u: goto label_14ff10;
        case 0x14ff14u: goto label_14ff14;
        case 0x14ff18u: goto label_14ff18;
        case 0x14ff1cu: goto label_14ff1c;
        case 0x14ff20u: goto label_14ff20;
        case 0x14ff24u: goto label_14ff24;
        case 0x14ff28u: goto label_14ff28;
        case 0x14ff2cu: goto label_14ff2c;
        case 0x14ff30u: goto label_14ff30;
        case 0x14ff34u: goto label_14ff34;
        case 0x14ff38u: goto label_14ff38;
        case 0x14ff3cu: goto label_14ff3c;
        case 0x14ff40u: goto label_14ff40;
        case 0x14ff44u: goto label_14ff44;
        case 0x14ff48u: goto label_14ff48;
        case 0x14ff4cu: goto label_14ff4c;
        case 0x14ff50u: goto label_14ff50;
        case 0x14ff54u: goto label_14ff54;
        case 0x14ff58u: goto label_14ff58;
        case 0x14ff5cu: goto label_14ff5c;
        case 0x14ff60u: goto label_14ff60;
        case 0x14ff64u: goto label_14ff64;
        case 0x14ff68u: goto label_14ff68;
        case 0x14ff6cu: goto label_14ff6c;
        case 0x14ff70u: goto label_14ff70;
        case 0x14ff74u: goto label_14ff74;
        case 0x14ff78u: goto label_14ff78;
        case 0x14ff7cu: goto label_14ff7c;
        case 0x14ff80u: goto label_14ff80;
        case 0x14ff84u: goto label_14ff84;
        case 0x14ff88u: goto label_14ff88;
        case 0x14ff8cu: goto label_14ff8c;
        case 0x14ff90u: goto label_14ff90;
        case 0x14ff94u: goto label_14ff94;
        case 0x14ff98u: goto label_14ff98;
        case 0x14ff9cu: goto label_14ff9c;
        case 0x14ffa0u: goto label_14ffa0;
        case 0x14ffa4u: goto label_14ffa4;
        case 0x14ffa8u: goto label_14ffa8;
        case 0x14ffacu: goto label_14ffac;
        case 0x14ffb0u: goto label_14ffb0;
        case 0x14ffb4u: goto label_14ffb4;
        case 0x14ffb8u: goto label_14ffb8;
        case 0x14ffbcu: goto label_14ffbc;
        case 0x14ffc0u: goto label_14ffc0;
        case 0x14ffc4u: goto label_14ffc4;
        case 0x14ffc8u: goto label_14ffc8;
        case 0x14ffccu: goto label_14ffcc;
        case 0x14ffd0u: goto label_14ffd0;
        case 0x14ffd4u: goto label_14ffd4;
        case 0x14ffd8u: goto label_14ffd8;
        case 0x14ffdcu: goto label_14ffdc;
        case 0x14ffe0u: goto label_14ffe0;
        case 0x14ffe4u: goto label_14ffe4;
        case 0x14ffe8u: goto label_14ffe8;
        case 0x14ffecu: goto label_14ffec;
        case 0x14fff0u: goto label_14fff0;
        case 0x14fff4u: goto label_14fff4;
        case 0x14fff8u: goto label_14fff8;
        case 0x14fffcu: goto label_14fffc;
        case 0x150000u: goto label_150000;
        case 0x150004u: goto label_150004;
        case 0x150008u: goto label_150008;
        case 0x15000cu: goto label_15000c;
        case 0x150010u: goto label_150010;
        case 0x150014u: goto label_150014;
        case 0x150018u: goto label_150018;
        case 0x15001cu: goto label_15001c;
        case 0x150020u: goto label_150020;
        case 0x150024u: goto label_150024;
        case 0x150028u: goto label_150028;
        case 0x15002cu: goto label_15002c;
        case 0x150030u: goto label_150030;
        case 0x150034u: goto label_150034;
        case 0x150038u: goto label_150038;
        case 0x15003cu: goto label_15003c;
        case 0x150040u: goto label_150040;
        case 0x150044u: goto label_150044;
        case 0x150048u: goto label_150048;
        case 0x15004cu: goto label_15004c;
        case 0x150050u: goto label_150050;
        case 0x150054u: goto label_150054;
        case 0x150058u: goto label_150058;
        case 0x15005cu: goto label_15005c;
        case 0x150060u: goto label_150060;
        case 0x150064u: goto label_150064;
        case 0x150068u: goto label_150068;
        case 0x15006cu: goto label_15006c;
        case 0x150070u: goto label_150070;
        case 0x150074u: goto label_150074;
        case 0x150078u: goto label_150078;
        case 0x15007cu: goto label_15007c;
        case 0x150080u: goto label_150080;
        case 0x150084u: goto label_150084;
        case 0x150088u: goto label_150088;
        case 0x15008cu: goto label_15008c;
        case 0x150090u: goto label_150090;
        case 0x150094u: goto label_150094;
        case 0x150098u: goto label_150098;
        case 0x15009cu: goto label_15009c;
        case 0x1500a0u: goto label_1500a0;
        case 0x1500a4u: goto label_1500a4;
        case 0x1500a8u: goto label_1500a8;
        case 0x1500acu: goto label_1500ac;
        case 0x1500b0u: goto label_1500b0;
        case 0x1500b4u: goto label_1500b4;
        case 0x1500b8u: goto label_1500b8;
        case 0x1500bcu: goto label_1500bc;
        case 0x1500c0u: goto label_1500c0;
        case 0x1500c4u: goto label_1500c4;
        case 0x1500c8u: goto label_1500c8;
        case 0x1500ccu: goto label_1500cc;
        case 0x1500d0u: goto label_1500d0;
        case 0x1500d4u: goto label_1500d4;
        case 0x1500d8u: goto label_1500d8;
        case 0x1500dcu: goto label_1500dc;
        case 0x1500e0u: goto label_1500e0;
        case 0x1500e4u: goto label_1500e4;
        case 0x1500e8u: goto label_1500e8;
        case 0x1500ecu: goto label_1500ec;
        case 0x1500f0u: goto label_1500f0;
        case 0x1500f4u: goto label_1500f4;
        case 0x1500f8u: goto label_1500f8;
        case 0x1500fcu: goto label_1500fc;
        case 0x150100u: goto label_150100;
        case 0x150104u: goto label_150104;
        case 0x150108u: goto label_150108;
        case 0x15010cu: goto label_15010c;
        case 0x150110u: goto label_150110;
        case 0x150114u: goto label_150114;
        case 0x150118u: goto label_150118;
        case 0x15011cu: goto label_15011c;
        case 0x150120u: goto label_150120;
        case 0x150124u: goto label_150124;
        case 0x150128u: goto label_150128;
        case 0x15012cu: goto label_15012c;
        case 0x150130u: goto label_150130;
        case 0x150134u: goto label_150134;
        case 0x150138u: goto label_150138;
        case 0x15013cu: goto label_15013c;
        case 0x150140u: goto label_150140;
        case 0x150144u: goto label_150144;
        case 0x150148u: goto label_150148;
        case 0x15014cu: goto label_15014c;
        case 0x150150u: goto label_150150;
        case 0x150154u: goto label_150154;
        case 0x150158u: goto label_150158;
        case 0x15015cu: goto label_15015c;
        case 0x150160u: goto label_150160;
        case 0x150164u: goto label_150164;
        case 0x150168u: goto label_150168;
        case 0x15016cu: goto label_15016c;
        case 0x150170u: goto label_150170;
        case 0x150174u: goto label_150174;
        case 0x150178u: goto label_150178;
        case 0x15017cu: goto label_15017c;
        case 0x150180u: goto label_150180;
        case 0x150184u: goto label_150184;
        case 0x150188u: goto label_150188;
        case 0x15018cu: goto label_15018c;
        case 0x150190u: goto label_150190;
        case 0x150194u: goto label_150194;
        case 0x150198u: goto label_150198;
        case 0x15019cu: goto label_15019c;
        case 0x1501a0u: goto label_1501a0;
        case 0x1501a4u: goto label_1501a4;
        case 0x1501a8u: goto label_1501a8;
        case 0x1501acu: goto label_1501ac;
        case 0x1501b0u: goto label_1501b0;
        case 0x1501b4u: goto label_1501b4;
        case 0x1501b8u: goto label_1501b8;
        case 0x1501bcu: goto label_1501bc;
        case 0x1501c0u: goto label_1501c0;
        case 0x1501c4u: goto label_1501c4;
        case 0x1501c8u: goto label_1501c8;
        case 0x1501ccu: goto label_1501cc;
        case 0x1501d0u: goto label_1501d0;
        case 0x1501d4u: goto label_1501d4;
        case 0x1501d8u: goto label_1501d8;
        case 0x1501dcu: goto label_1501dc;
        case 0x1501e0u: goto label_1501e0;
        case 0x1501e4u: goto label_1501e4;
        case 0x1501e8u: goto label_1501e8;
        case 0x1501ecu: goto label_1501ec;
        case 0x1501f0u: goto label_1501f0;
        case 0x1501f4u: goto label_1501f4;
        case 0x1501f8u: goto label_1501f8;
        case 0x1501fcu: goto label_1501fc;
        case 0x150200u: goto label_150200;
        case 0x150204u: goto label_150204;
        case 0x150208u: goto label_150208;
        case 0x15020cu: goto label_15020c;
        case 0x150210u: goto label_150210;
        case 0x150214u: goto label_150214;
        case 0x150218u: goto label_150218;
        case 0x15021cu: goto label_15021c;
        case 0x150220u: goto label_150220;
        case 0x150224u: goto label_150224;
        case 0x150228u: goto label_150228;
        case 0x15022cu: goto label_15022c;
        case 0x150230u: goto label_150230;
        case 0x150234u: goto label_150234;
        case 0x150238u: goto label_150238;
        case 0x15023cu: goto label_15023c;
        case 0x150240u: goto label_150240;
        case 0x150244u: goto label_150244;
        case 0x150248u: goto label_150248;
        case 0x15024cu: goto label_15024c;
        case 0x150250u: goto label_150250;
        case 0x150254u: goto label_150254;
        case 0x150258u: goto label_150258;
        case 0x15025cu: goto label_15025c;
        case 0x150260u: goto label_150260;
        case 0x150264u: goto label_150264;
        case 0x150268u: goto label_150268;
        case 0x15026cu: goto label_15026c;
        case 0x150270u: goto label_150270;
        case 0x150274u: goto label_150274;
        case 0x150278u: goto label_150278;
        case 0x15027cu: goto label_15027c;
        case 0x150280u: goto label_150280;
        case 0x150284u: goto label_150284;
        case 0x150288u: goto label_150288;
        case 0x15028cu: goto label_15028c;
        case 0x150290u: goto label_150290;
        case 0x150294u: goto label_150294;
        case 0x150298u: goto label_150298;
        case 0x15029cu: goto label_15029c;
        default: break;
    }

    ctx->pc = 0x14e3f0u;

label_14e3f0:
    // 0x14e3f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x14e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_14e3f4:
    // 0x14e3f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_14e3f8:
    // 0x14e3f8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x14e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_14e3fc:
    // 0x14e3fc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14e3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_14e400:
    // 0x14e400: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x14e400u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e404:
    // 0x14e404: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_14e408:
    // 0x14e408: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_14e40c:
    // 0x14e40c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14e40cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e410:
    // 0x14e410: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14e410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_14e414:
    // 0x14e414: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14e414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14e418:
    // 0x14e418: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_14e41c:
    // 0x14e41c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14e41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_14e420:
    // 0x14e420: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14e424:
    // 0x14e424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14e424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14e428:
    // 0x14e428: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_14e42c:
    // 0x14e42c: 0x111202  srl         $v0, $s1, 8
    ctx->pc = 0x14e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
label_14e430:
    // 0x14e430: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x14e430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_14e434:
    // 0x14e434: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14e438:
    // 0x14e438: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_14e43c:
    if (ctx->pc == 0x14E43Cu) {
        ctx->pc = 0x14E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E438u;
        // 0x14e43c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E440u;
        goto label_14e440;
    }
    ctx->pc = 0x14E438u;
    {
        const bool branch_taken_0x14e438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E438u;
        // 0x14e43c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e438) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E440u;
label_14e440:
    // 0x14e440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e444:
    // 0x14e444: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_14e448:
    if (ctx->pc == 0x14E448u) {
        ctx->pc = 0x14E44Cu;
        goto label_14e44c;
    }
    ctx->pc = 0x14E444u;
    {
        const bool branch_taken_0x14e444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e444) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E44Cu;
label_14e44c:
    // 0x14e44c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14e450:
    // 0x14e450: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_14e454:
    if (ctx->pc == 0x14E454u) {
        ctx->pc = 0x14E458u;
        goto label_14e458;
    }
    ctx->pc = 0x14E450u;
    {
        const bool branch_taken_0x14e450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e450) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E458u;
label_14e458:
    // 0x14e458: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14e45c:
    // 0x14e45c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_14e460:
    if (ctx->pc == 0x14E460u) {
        ctx->pc = 0x14E464u;
        goto label_14e464;
    }
    ctx->pc = 0x14E45Cu;
    {
        const bool branch_taken_0x14e45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e45c) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E464u;
label_14e464:
    // 0x14e464: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14e468:
    // 0x14e468: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_14e46c:
    if (ctx->pc == 0x14E46Cu) {
        ctx->pc = 0x14E470u;
        goto label_14e470;
    }
    ctx->pc = 0x14E468u;
    {
        const bool branch_taken_0x14e468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e468) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E470u;
label_14e470:
    // 0x14e470: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14e474:
    // 0x14e474: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_14e478:
    if (ctx->pc == 0x14E478u) {
        ctx->pc = 0x14E47Cu;
        goto label_14e47c;
    }
    ctx->pc = 0x14E474u;
    {
        const bool branch_taken_0x14e474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e474) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E47Cu;
label_14e47c:
    // 0x14e47c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14e480:
    // 0x14e480: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_14e484:
    if (ctx->pc == 0x14E484u) {
        ctx->pc = 0x14E488u;
        goto label_14e488;
    }
    ctx->pc = 0x14E480u;
    {
        const bool branch_taken_0x14e480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e480) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E488u;
label_14e488:
    // 0x14e488: 0x10000775  b           . + 4 + (0x775 << 2)
label_14e48c:
    if (ctx->pc == 0x14E48Cu) {
        ctx->pc = 0x14E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E488u;
        // 0x14e48c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E490u;
        goto label_14e490;
    }
    ctx->pc = 0x14E488u;
    {
        const bool branch_taken_0x14e488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E488u;
        // 0x14e48c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e488) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14E490u;
label_14e490:
    // 0x14e490: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14e490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
label_14e494:
    // 0x14e494: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x14e494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14e498:
    // 0x14e498: 0xac40ea20  sw          $zero, -0x15E0($v0)
    ctx->pc = 0x14e498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961696), GPR_U32(ctx, 0));
label_14e49c:
    // 0x14e49c: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x14e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_14e4a0:
    // 0x14e4a0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_14e4a4:
    // 0x14e4a4: 0xafb5011c  sw          $s5, 0x11C($sp)
    ctx->pc = 0x14e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 21));
label_14e4a8:
    // 0x14e4a8: 0x16240005  bne         $s1, $a0, . + 4 + (0x5 << 2)
label_14e4ac:
    if (ctx->pc == 0x14E4ACu) {
        ctx->pc = 0x14E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4A8u;
        // 0x14e4ac: 0xa045e060  sb          $a1, -0x1FA0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294959200), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E4B0u;
        goto label_14e4b0;
    }
    ctx->pc = 0x14E4A8u;
    {
        const bool branch_taken_0x14e4a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x14E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4A8u;
        // 0x14e4ac: 0xa045e060  sb          $a1, -0x1FA0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294959200), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4a8) {
            ctx->pc = 0x14E4C0u;
            goto label_14e4c0;
        }
    }
    ctx->pc = 0x14E4B0u;
label_14e4b0:
    // 0x14e4b0: 0xc0532c8  jal         func_14CB20
label_14e4b4:
    if (ctx->pc == 0x14E4B4u) {
        ctx->pc = 0x14E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4B0u;
        // 0x14e4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E4B8u;
        goto label_14e4b8;
    }
    ctx->pc = 0x14E4B0u;
    SET_GPR_U32(ctx, 31, 0x14E4B8u);
    ctx->pc = 0x14E4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4B0u;
    // 0x14e4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CB20u, 0x14E4B0u, 0x14E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4B8u;
label_14e4b8:
    // 0x14e4b8: 0x10000769  b           . + 4 + (0x769 << 2)
label_14e4bc:
    if (ctx->pc == 0x14E4BCu) {
        ctx->pc = 0x14E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4B8u;
        // 0x14e4bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E4C0u;
        goto label_14e4c0;
    }
    ctx->pc = 0x14E4B8u;
    {
        const bool branch_taken_0x14e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4B8u;
        // 0x14e4bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4b8) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14E4C0u;
label_14e4c0:
    // 0x14e4c0: 0x12a00071  beqz        $s5, . + 4 + (0x71 << 2)
label_14e4c4:
    if (ctx->pc == 0x14E4C4u) {
        ctx->pc = 0x14E4C8u;
        goto label_14e4c8;
    }
    ctx->pc = 0x14E4C0u;
    {
        const bool branch_taken_0x14e4c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4c0) {
            ctx->pc = 0x14E688u;
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E4C8u;
label_14e4c8:
    // 0x14e4c8: 0x96a50274  lhu         $a1, 0x274($s5)
    ctx->pc = 0x14e4c8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 628)));
label_14e4cc:
    // 0x14e4cc: 0x28a10181  slti        $at, $a1, 0x181
    ctx->pc = 0x14e4ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)385) ? 1 : 0);
label_14e4d0:
    // 0x14e4d0: 0x54200008  bnel        $at, $zero, . + 4 + (0x8 << 2)
label_14e4d4:
    if (ctx->pc == 0x14E4D4u) {
        ctx->pc = 0x14E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4D0u;
        // 0x14e4d4: 0x96a200ea  lhu         $v0, 0xEA($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E4D8u;
        goto label_14e4d8;
    }
    ctx->pc = 0x14E4D0u;
    {
        const bool branch_taken_0x14e4d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e4d0) {
            ctx->pc = 0x14E4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E4D0u;
            // 0x14e4d4: 0x96a200ea  lhu         $v0, 0xEA($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E4F4u;
            goto label_14e4f4;
        }
    }
    ctx->pc = 0x14E4D8u;
label_14e4d8:
    // 0x14e4d8: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x14e4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_14e4dc:
    // 0x14e4dc: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x14e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_14e4e0:
    // 0x14e4e0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_14e4e4:
    if (ctx->pc == 0x14E4E4u) {
        ctx->pc = 0x14E4E8u;
        goto label_14e4e8;
    }
    ctx->pc = 0x14E4E0u;
    {
        const bool branch_taken_0x14e4e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e4e0) {
            ctx->pc = 0x14E4F0u;
            goto label_14e4f0;
        }
    }
    ctx->pc = 0x14E4E8u;
label_14e4e8:
    // 0x14e4e8: 0x1000075d  b           . + 4 + (0x75D << 2)
label_14e4ec:
    if (ctx->pc == 0x14E4ECu) {
        ctx->pc = 0x14E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4E8u;
        // 0x14e4ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E4F0u;
        goto label_14e4f0;
    }
    ctx->pc = 0x14E4E8u;
    {
        const bool branch_taken_0x14e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4E8u;
        // 0x14e4ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4e8) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14E4F0u;
label_14e4f0:
    // 0x14e4f0: 0x96a200ea  lhu         $v0, 0xEA($s5)
    ctx->pc = 0x14e4f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
label_14e4f4:
    // 0x14e4f4: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x14e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_14e4f8:
    // 0x14e4f8: 0x5444000f  bnel        $v0, $a0, . + 4 + (0xF << 2)
label_14e4fc:
    if (ctx->pc == 0x14E4FCu) {
        ctx->pc = 0x14E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4F8u;
        // 0x14e4fc: 0x28410029  slti        $at, $v0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E500u;
        goto label_14e500;
    }
    ctx->pc = 0x14E4F8u;
    {
        const bool branch_taken_0x14e4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14e4f8) {
            ctx->pc = 0x14E4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E4F8u;
            // 0x14e4fc: 0x28410029  slti        $at, $v0, 0x29 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E538u;
            goto label_14e538;
        }
    }
    ctx->pc = 0x14E500u;
label_14e500:
    // 0x14e500: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x14e500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_14e504:
    // 0x14e504: 0x34840126  ori         $a0, $a0, 0x126
    ctx->pc = 0x14e504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)294);
label_14e508:
    // 0x14e508: 0x1624000a  bne         $s1, $a0, . + 4 + (0xA << 2)
label_14e50c:
    if (ctx->pc == 0x14E50Cu) {
        ctx->pc = 0x14E510u;
        goto label_14e510;
    }
    ctx->pc = 0x14E508u;
    {
        const bool branch_taken_0x14e508 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x14e508) {
            ctx->pc = 0x14E534u;
            goto label_14e534;
        }
    }
    ctx->pc = 0x14E510u;
label_14e510:
    // 0x14e510: 0x24040086  addiu       $a0, $zero, 0x86
    ctx->pc = 0x14e510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_14e514:
    // 0x14e514: 0x50a40005  beql        $a1, $a0, . + 4 + (0x5 << 2)
label_14e518:
    if (ctx->pc == 0x14E518u) {
        ctx->pc = 0x14E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E514u;
        // 0x14e518: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E51Cu;
        goto label_14e51c;
    }
    ctx->pc = 0x14E514u;
    {
        const bool branch_taken_0x14e514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x14e514) {
            ctx->pc = 0x14E518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E514u;
            // 0x14e518: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E52Cu;
            goto label_14e52c;
        }
    }
    ctx->pc = 0x14E51Cu;
label_14e51c:
    // 0x14e51c: 0x24040089  addiu       $a0, $zero, 0x89
    ctx->pc = 0x14e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
label_14e520:
    // 0x14e520: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
label_14e524:
    if (ctx->pc == 0x14E524u) {
        ctx->pc = 0x14E528u;
        goto label_14e528;
    }
    ctx->pc = 0x14E520u;
    {
        const bool branch_taken_0x14e520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x14e520) {
            ctx->pc = 0x14E534u;
            goto label_14e534;
        }
    }
    ctx->pc = 0x14E528u;
label_14e528:
    // 0x14e528: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x14e528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_14e52c:
    // 0x14e52c: 0x10000056  b           . + 4 + (0x56 << 2)
label_14e530:
    if (ctx->pc == 0x14E530u) {
        ctx->pc = 0x14E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E52Cu;
        // 0x14e530: 0x34510303  ori         $s1, $v0, 0x303 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)771);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E534u;
        goto label_14e534;
    }
    ctx->pc = 0x14E52Cu;
    {
        const bool branch_taken_0x14e52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E52Cu;
        // 0x14e530: 0x34510303  ori         $s1, $v0, 0x303 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e52c) {
            ctx->pc = 0x14E688u;
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E534u;
label_14e534:
    // 0x14e534: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x14e534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
label_14e538:
    // 0x14e538: 0x14200053  bnez        $at, . + 4 + (0x53 << 2)
label_14e53c:
    if (ctx->pc == 0x14E53Cu) {
        ctx->pc = 0x14E540u;
        goto label_14e540;
    }
    ctx->pc = 0x14E538u;
    {
        const bool branch_taken_0x14e538 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e538) {
            ctx->pc = 0x14E688u;
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E540u;
label_14e540:
    // 0x14e540: 0x28410030  slti        $at, $v0, 0x30
    ctx->pc = 0x14e540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_14e544:
    // 0x14e544: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_14e548:
    if (ctx->pc == 0x14E548u) {
        ctx->pc = 0x14E54Cu;
        goto label_14e54c;
    }
    ctx->pc = 0x14E544u;
    {
        const bool branch_taken_0x14e544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e544) {
            ctx->pc = 0x14E688u;
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E54Cu;
label_14e54c:
    // 0x14e54c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e550:
    // 0x14e550: 0x1464004d  bne         $v1, $a0, . + 4 + (0x4D << 2)
label_14e554:
    if (ctx->pc == 0x14E554u) {
        ctx->pc = 0x14E558u;
        goto label_14e558;
    }
    ctx->pc = 0x14E550u;
    {
        const bool branch_taken_0x14e550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x14e550) {
            ctx->pc = 0x14E688u;
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E558u;
label_14e558:
    // 0x14e558: 0x28a10180  slti        $at, $a1, 0x180
    ctx->pc = 0x14e558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)384) ? 1 : 0);
label_14e55c:
    // 0x14e55c: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_14e560:
    if (ctx->pc == 0x14E560u) {
        ctx->pc = 0x14E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E55Cu;
        // 0x14e560: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E564u;
        goto label_14e564;
    }
    ctx->pc = 0x14E55Cu;
    {
        const bool branch_taken_0x14e55c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e55c) {
            ctx->pc = 0x14E560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E55Cu;
            // 0x14e560: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E574u;
            goto label_14e574;
        }
    }
    ctx->pc = 0x14E564u;
label_14e564:
    // 0x14e564: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x14e564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_14e568:
    // 0x14e568: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_14e56c:
    if (ctx->pc == 0x14E56Cu) {
        ctx->pc = 0x14E570u;
        goto label_14e570;
    }
    ctx->pc = 0x14E568u;
    {
        const bool branch_taken_0x14e568 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x14e568) {
            ctx->pc = 0x14E590u;
            goto label_14e590;
        }
    }
    ctx->pc = 0x14E570u;
label_14e570:
    // 0x14e570: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x14e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_14e574:
    // 0x14e574: 0x14a20044  bne         $a1, $v0, . + 4 + (0x44 << 2)
label_14e578:
    if (ctx->pc == 0x14E578u) {
        ctx->pc = 0x14E57Cu;
        goto label_14e57c;
    }
    ctx->pc = 0x14E574u;
    {
        const bool branch_taken_0x14e574 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e574) {
            ctx->pc = 0x14E688u;
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E57Cu;
label_14e57c:
    // 0x14e57c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x14e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_14e580:
    // 0x14e580: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x14e580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_14e584:
    // 0x14e584: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14e584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_14e588:
    // 0x14e588: 0x1000003f  b           . + 4 + (0x3F << 2)
label_14e58c:
    if (ctx->pc == 0x14E58Cu) {
        ctx->pc = 0x14E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E588u;
        // 0x14e58c: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E590u;
        goto label_14e590;
    }
    ctx->pc = 0x14E588u;
    {
        const bool branch_taken_0x14e588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E588u;
        // 0x14e58c: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e588) {
            ctx->pc = 0x14E688u;
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E590u;
label_14e590:
    // 0x14e590: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x14e590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_14e594:
    // 0x14e594: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14e594u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e598:
    // 0x14e598: 0x322800ff  andi        $t0, $s1, 0xFF
    ctx->pc = 0x14e598u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_14e59c:
    // 0x14e59c: 0x24a597e0  addiu       $a1, $a1, -0x6820
    ctx->pc = 0x14e59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940640));
label_14e5a0:
    // 0x14e5a0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x14e5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14e5a4:
    // 0x14e5a4: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x14e5a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14e5a8:
    // 0x14e5a8: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x14e5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_14e5ac:
    // 0x14e5ac: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x14e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_14e5b0:
    // 0x14e5b0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x14e5b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_14e5b4:
    // 0x14e5b4: 0x10640018  beq         $v1, $a0, . + 4 + (0x18 << 2)
label_14e5b8:
    if (ctx->pc == 0x14E5B8u) {
        ctx->pc = 0x14E5BCu;
        goto label_14e5bc;
    }
    ctx->pc = 0x14E5B4u;
    {
        const bool branch_taken_0x14e5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14e5b4) {
            ctx->pc = 0x14E618u;
            goto label_14e618;
        }
    }
    ctx->pc = 0x14E5BCu;
label_14e5bc:
    // 0x14e5bc: 0x55030013  bnel        $t0, $v1, . + 4 + (0x13 << 2)
label_14e5c0:
    if (ctx->pc == 0x14E5C0u) {
        ctx->pc = 0x14E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5BCu;
        // 0x14e5c0: 0x24e30002  addiu       $v1, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5C4u;
        goto label_14e5c4;
    }
    ctx->pc = 0x14E5BCu;
    {
        const bool branch_taken_0x14e5bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x14e5bc) {
            ctx->pc = 0x14E5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E5BCu;
            // 0x14e5c0: 0x24e30002  addiu       $v1, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E60Cu;
            goto label_14e60c;
        }
    }
    ctx->pc = 0x14E5C4u;
label_14e5c4:
    // 0x14e5c4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x14e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_14e5c8:
    // 0x14e5c8: 0x24030509  addiu       $v1, $zero, 0x509
    ctx->pc = 0x14e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
label_14e5cc:
    // 0x14e5cc: 0x248497e2  addiu       $a0, $a0, -0x681E
    ctx->pc = 0x14e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940642));
label_14e5d0:
    // 0x14e5d0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x14e5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_14e5d4:
    // 0x14e5d4: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x14e5d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_14e5d8:
    // 0x14e5d8: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_14e5dc:
    if (ctx->pc == 0x14E5DCu) {
        ctx->pc = 0x14E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5D8u;
        // 0x14e5dc: 0x34830100  ori         $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5E0u;
        goto label_14e5e0;
    }
    ctx->pc = 0x14E5D8u;
    {
        const bool branch_taken_0x14e5d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14e5d8) {
            ctx->pc = 0x14E5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E5D8u;
            // 0x14e5dc: 0x34830100  ori         $v1, $a0, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E5FCu;
            goto label_14e5fc;
        }
    }
    ctx->pc = 0x14E5E0u;
label_14e5e0:
    // 0x14e5e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x14e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_14e5e4:
    // 0x14e5e4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x14e5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_14e5e8:
    // 0x14e5e8: 0x2232824  and         $a1, $s1, $v1
    ctx->pc = 0x14e5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_14e5ec:
    // 0x14e5ec: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x14e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_14e5f0:
    // 0x14e5f0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x14e5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_14e5f4:
    // 0x14e5f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_14e5f8:
    if (ctx->pc == 0x14E5F8u) {
        ctx->pc = 0x14E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5F4u;
        // 0x14e5f8: 0x838825  or          $s1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5FCu;
        goto label_14e5fc;
    }
    ctx->pc = 0x14E5F4u;
    {
        const bool branch_taken_0x14e5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5F4u;
        // 0x14e5f8: 0x838825  or          $s1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5f4) {
            ctx->pc = 0x14E618u;
            goto label_14e618;
        }
    }
    ctx->pc = 0x14E5FCu;
label_14e5fc:
    // 0x14e5fc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x14e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_14e600:
    // 0x14e600: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x14e600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_14e604:
    // 0x14e604: 0x10000004  b           . + 4 + (0x4 << 2)
label_14e608:
    if (ctx->pc == 0x14E608u) {
        ctx->pc = 0x14E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E604u;
        // 0x14e608: 0x838825  or          $s1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E60Cu;
        goto label_14e60c;
    }
    ctx->pc = 0x14E604u;
    {
        const bool branch_taken_0x14e604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E604u;
        // 0x14e608: 0x838825  or          $s1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e604) {
            ctx->pc = 0x14E618u;
            goto label_14e618;
        }
    }
    ctx->pc = 0x14E60Cu;
label_14e60c:
    // 0x14e60c: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_14e610:
    if (ctx->pc == 0x14E610u) {
        ctx->pc = 0x14E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E60Cu;
        // 0x14e610: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E614u;
        goto label_14e614;
    }
    ctx->pc = 0x14E60Cu;
    {
        const bool branch_taken_0x14e60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E60Cu;
        // 0x14e610: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e60c) {
            ctx->pc = 0x14E5A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e5a4;
        }
    }
    ctx->pc = 0x14E614u;
label_14e614:
    // 0x14e614: 0x0  nop
    ctx->pc = 0x14e614u;
    // NOP
label_14e618:
    // 0x14e618: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x14e618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_14e61c:
    // 0x14e61c: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_14e620:
    if (ctx->pc == 0x14E620u) {
        ctx->pc = 0x14E624u;
        goto label_14e624;
    }
    ctx->pc = 0x14E61Cu;
    {
        const bool branch_taken_0x14e61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14e61c) {
            ctx->pc = 0x14E688u;
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E624u;
label_14e624:
    // 0x14e624: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x14e624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_14e628:
    // 0x14e628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14e628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e62c:
    // 0x14e62c: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x14e62cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_14e630:
    // 0x14e630: 0x248497d0  addiu       $a0, $a0, -0x6830
    ctx->pc = 0x14e630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940624));
label_14e634:
    // 0x14e634: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x14e634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_14e638:
    // 0x14e638: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x14e638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14e63c:
    // 0x14e63c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x14e63cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_14e640:
    // 0x14e640: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x14e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_14e644:
    // 0x14e644: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x14e644u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e648:
    // 0x14e648: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_14e64c:
    if (ctx->pc == 0x14E64Cu) {
        ctx->pc = 0x14E650u;
        goto label_14e650;
    }
    ctx->pc = 0x14E648u;
    {
        const bool branch_taken_0x14e648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e648) {
            ctx->pc = 0x14E688u;
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E650u;
label_14e650:
    // 0x14e650: 0x54e2000a  bnel        $a3, $v0, . + 4 + (0xA << 2)
label_14e654:
    if (ctx->pc == 0x14E654u) {
        ctx->pc = 0x14E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E650u;
        // 0x14e654: 0x24c20002  addiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E658u;
        goto label_14e658;
    }
    ctx->pc = 0x14E650u;
    {
        const bool branch_taken_0x14e650 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e650) {
            ctx->pc = 0x14E654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E650u;
            // 0x14e654: 0x24c20002  addiu       $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E67Cu;
            goto label_14e67c;
        }
    }
    ctx->pc = 0x14E658u;
label_14e658:
    // 0x14e658: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x14e658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_14e65c:
    // 0x14e65c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_14e660:
    // 0x14e660: 0x246397d2  addiu       $v1, $v1, -0x682E
    ctx->pc = 0x14e660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940626));
label_14e664:
    // 0x14e664: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14e664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14e668:
    // 0x14e668: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14e668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14e66c:
    // 0x14e66c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x14e66cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_14e670:
    // 0x14e670: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x14e670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_14e674:
    // 0x14e674: 0x10000004  b           . + 4 + (0x4 << 2)
label_14e678:
    if (ctx->pc == 0x14E678u) {
        ctx->pc = 0x14E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E674u;
        // 0x14e678: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E67Cu;
        goto label_14e67c;
    }
    ctx->pc = 0x14E674u;
    {
        const bool branch_taken_0x14e674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E674u;
        // 0x14e678: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e674) {
            ctx->pc = 0x14E688u;
            goto label_14e688;
        }
    }
    ctx->pc = 0x14E67Cu;
label_14e67c:
    // 0x14e67c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_14e680:
    if (ctx->pc == 0x14E680u) {
        ctx->pc = 0x14E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E67Cu;
        // 0x14e680: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E684u;
        goto label_14e684;
    }
    ctx->pc = 0x14E67Cu;
    {
        const bool branch_taken_0x14e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E67Cu;
        // 0x14e680: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e67c) {
            ctx->pc = 0x14E638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e638;
        }
    }
    ctx->pc = 0x14E684u;
label_14e684:
    // 0x14e684: 0x0  nop
    ctx->pc = 0x14e684u;
    // NOP
label_14e688:
    // 0x14e688: 0x111202  srl         $v0, $s1, 8
    ctx->pc = 0x14e688u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
label_14e68c:
    // 0x14e68c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x14e68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_14e690:
    // 0x14e690: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14e690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14e694:
    // 0x14e694: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_14e698:
    if (ctx->pc == 0x14E698u) {
        ctx->pc = 0x14E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E694u;
        // 0x14e698: 0x111202  srl         $v0, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E69Cu;
        goto label_14e69c;
    }
    ctx->pc = 0x14E694u;
    {
        const bool branch_taken_0x14e694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e694) {
            ctx->pc = 0x14E698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E694u;
            // 0x14e698: 0x111202  srl         $v0, $s1, 8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E6DCu;
            goto label_14e6dc;
        }
    }
    ctx->pc = 0x14E69Cu;
label_14e69c:
    // 0x14e69c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x14e69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_14e6a0:
    // 0x14e6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e6a4:
    // 0x14e6a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e6a8:
    // 0x14e6a8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_14e6ac:
    // 0x14e6ac: 0x2442e440  addiu       $v0, $v0, -0x1BC0
    ctx->pc = 0x14e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960192));
label_14e6b0:
    // 0x14e6b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e6b4:
    // 0x14e6b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e6b8:
    // 0x14e6b8: 0x40f809  jalr        $v0
label_14e6bc:
    if (ctx->pc == 0x14E6BCu) {
        ctx->pc = 0x14E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6B8u;
        // 0x14e6bc: 0x27a5011c  addiu       $a1, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6C0u;
        goto label_14e6c0;
    }
    ctx->pc = 0x14E6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E6C0u);
        ctx->pc = 0x14E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6B8u;
        // 0x14e6bc: 0x27a5011c  addiu       $a1, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E6B8u, 0x14E6C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E6C0u;
label_14e6c0:
    // 0x14e6c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14e6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e6c4:
    // 0x14e6c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e6c8:
    // 0x14e6c8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_14e6cc:
    if (ctx->pc == 0x14E6CCu) {
        ctx->pc = 0x14E6D0u;
        goto label_14e6d0;
    }
    ctx->pc = 0x14E6C8u;
    {
        const bool branch_taken_0x14e6c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e6c8) {
            ctx->pc = 0x14E6D8u;
            goto label_14e6d8;
        }
    }
    ctx->pc = 0x14E6D0u;
label_14e6d0:
    // 0x14e6d0: 0x100006e4  b           . + 4 + (0x6E4 << 2)
label_14e6d4:
    if (ctx->pc == 0x14E6D4u) {
        ctx->pc = 0x14E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6D0u;
        // 0x14e6d4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6D8u;
        goto label_14e6d8;
    }
    ctx->pc = 0x14E6D0u;
    {
        const bool branch_taken_0x14e6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6D0u;
        // 0x14e6d4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6d0) {
            ctx->pc = 0x150264u;
            goto label_150264;
        }
    }
    ctx->pc = 0x14E6D8u;
label_14e6d8:
    // 0x14e6d8: 0x111202  srl         $v0, $s1, 8
    ctx->pc = 0x14e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
label_14e6dc:
    // 0x14e6dc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14e6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_14e6e0:
    // 0x14e6e0: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x14e6e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_14e6e4:
    // 0x14e6e4: 0x502006de  beql        $at, $zero, . + 4 + (0x6DE << 2)
label_14e6e8:
    if (ctx->pc == 0x14E6E8u) {
        ctx->pc = 0x14E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6E4u;
        // 0x14e6e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6ECu;
        goto label_14e6ec;
    }
    ctx->pc = 0x14E6E4u;
    {
        const bool branch_taken_0x14e6e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e6e4) {
            ctx->pc = 0x14E6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E6E4u;
            // 0x14e6e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14E6ECu;
label_14e6ec:
    // 0x14e6ec: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x14e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_14e6f0:
    // 0x14e6f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e6f4:
    // 0x14e6f4: 0x2463d090  addiu       $v1, $v1, -0x2F70
    ctx->pc = 0x14e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955152));
label_14e6f8:
    // 0x14e6f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e6fc:
    // 0x14e6fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e700:
    // 0x14e700: 0x400008  jr          $v0
label_14e704:
    if (ctx->pc == 0x14E704u) {
        ctx->pc = 0x14E708u;
        goto label_14e708;
    }
    ctx->pc = 0x14E700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E708u: goto label_14e708;
            case 0x14E718u: goto label_14e718;
            case 0x14E724u: goto label_14e724;
            case 0x14E860u: goto label_14e860;
            case 0x14E8A4u: goto label_14e8a4;
            case 0x14E8BCu: goto label_14e8bc;
            case 0x14E8DCu: goto label_14e8dc;
            case 0x14E8E8u: goto label_14e8e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E700u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14E708u;
label_14e708:
    // 0x14e708: 0xc0635c4  jal         func_18D710
label_14e70c:
    if (ctx->pc == 0x14E70Cu) {
        ctx->pc = 0x14E710u;
        goto label_14e710;
    }
    ctx->pc = 0x14E708u;
    SET_GPR_U32(ctx, 31, 0x14E710u);
    ctx->pc = 0x18D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D710u, 0x14E708u, 0x14E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E710u;
label_14e710:
    // 0x14e710: 0x10000078  b           . + 4 + (0x78 << 2)
label_14e714:
    if (ctx->pc == 0x14E714u) {
        ctx->pc = 0x14E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E710u;
        // 0x14e714: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E718u;
        goto label_14e718;
    }
    ctx->pc = 0x14E710u;
    {
        const bool branch_taken_0x14e710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E710u;
        // 0x14e714: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e710) {
            ctx->pc = 0x14E8F4u;
            goto label_14e8f4;
        }
    }
    ctx->pc = 0x14E718u;
label_14e718:
    // 0x14e718: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x14e718u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_14e71c:
    // 0x14e71c: 0x10000075  b           . + 4 + (0x75 << 2)
label_14e720:
    if (ctx->pc == 0x14E720u) {
        ctx->pc = 0x14E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E71Cu;
        // 0x14e720: 0x26108f00  addiu       $s0, $s0, -0x7100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E724u;
        goto label_14e724;
    }
    ctx->pc = 0x14E71Cu;
    {
        const bool branch_taken_0x14e71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E71Cu;
        // 0x14e720: 0x26108f00  addiu       $s0, $s0, -0x7100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e71c) {
            ctx->pc = 0x14E8F4u;
            goto label_14e8f4;
        }
    }
    ctx->pc = 0x14E724u;
label_14e724:
    // 0x14e724: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x14e724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14e728:
    // 0x14e728: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x14e728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_14e72c:
    // 0x14e72c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14e72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_14e730:
    // 0x14e730: 0x8c6400dc  lw          $a0, 0xDC($v1)
    ctx->pc = 0x14e730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_14e734:
    // 0x14e734: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14e734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14e738:
    // 0x14e738: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_14e73c:
    if (ctx->pc == 0x14E73Cu) {
        ctx->pc = 0x14E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E738u;
        // 0x14e73c: 0x907200ea  lbu         $s2, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E740u;
        goto label_14e740;
    }
    ctx->pc = 0x14E738u;
    {
        const bool branch_taken_0x14e738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e738) {
            ctx->pc = 0x14E73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E738u;
            // 0x14e73c: 0x907200ea  lbu         $s2, 0xEA($v1) (Delay Slot)
            SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E74Cu;
            goto label_14e74c;
        }
    }
    ctx->pc = 0x14E740u;
label_14e740:
    // 0x14e740: 0xc0627f8  jal         func_189FE0
label_14e744:
    if (ctx->pc == 0x14E744u) {
        ctx->pc = 0x14E748u;
        goto label_14e748;
    }
    ctx->pc = 0x14E740u;
    SET_GPR_U32(ctx, 31, 0x14E748u);
    ctx->pc = 0x189FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FE0u, 0x14E740u, 0x14E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E748u;
label_14e748:
    // 0x14e748: 0x905200ea  lbu         $s2, 0xEA($v0)
    ctx->pc = 0x14e748u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 234)));
label_14e74c:
    // 0x14e74c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x14e74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e750:
    // 0x14e750: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14e750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_14e754:
    // 0x14e754: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x14e754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_14e758:
    // 0x14e758: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x14e758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_14e75c:
    // 0x14e75c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x14e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14e760:
    // 0x14e760: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x14e760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_14e764:
    // 0x14e764: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14e768:
    // 0x14e768: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_14e76c:
    if (ctx->pc == 0x14E76Cu) {
        ctx->pc = 0x14E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E768u;
        // 0x14e76c: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E770u;
        goto label_14e770;
    }
    ctx->pc = 0x14E768u;
    {
        const bool branch_taken_0x14e768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E768u;
        // 0x14e76c: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e768) {
            ctx->pc = 0x14E828u;
            goto label_14e828;
        }
    }
    ctx->pc = 0x14E770u;
label_14e770:
    // 0x14e770: 0x3c02ff0f  lui         $v0, 0xFF0F
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65295 << 16));
label_14e774:
    // 0x14e774: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14e774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_14e778:
    // 0x14e778: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x14e778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_14e77c:
    // 0x14e77c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14e77cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e780:
    // 0x14e780: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14e780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14e784:
    // 0x14e784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e788:
    // 0x14e788: 0x24845dc0  addiu       $a0, $a0, 0x5DC0
    ctx->pc = 0x14e788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24000));
label_14e78c:
    // 0x14e78c: 0x3451002f  ori         $s1, $v0, 0x2F
    ctx->pc = 0x14e78cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47);
label_14e790:
    // 0x14e790: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x14e790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_14e794:
    // 0x14e794: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x14e794u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_14e798:
    // 0x14e798: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_14e79c:
    if (ctx->pc == 0x14E79Cu) {
        ctx->pc = 0x14E7A0u;
        goto label_14e7a0;
    }
    ctx->pc = 0x14E798u;
    {
        const bool branch_taken_0x14e798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14e798) {
            ctx->pc = 0x14E7A8u;
            goto label_14e7a8;
        }
    }
    ctx->pc = 0x14E7A0u;
label_14e7a0:
    // 0x14e7a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14e7a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_14e7a4:
    // 0x14e7a4: 0x0  nop
    ctx->pc = 0x14e7a4u;
    // NOP
label_14e7a8:
    // 0x14e7a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14e7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14e7ac:
    // 0x14e7ac: 0x28a2000d  slti        $v0, $a1, 0xD
    ctx->pc = 0x14e7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
label_14e7b0:
    // 0x14e7b0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_14e7b4:
    if (ctx->pc == 0x14E7B4u) {
        ctx->pc = 0x14E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7B0u;
        // 0x14e7b4: 0x24844180  addiu       $a0, $a0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7B8u;
        goto label_14e7b8;
    }
    ctx->pc = 0x14E7B0u;
    {
        const bool branch_taken_0x14e7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7B0u;
        // 0x14e7b4: 0x24844180  addiu       $a0, $a0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7b0) {
            ctx->pc = 0x14E794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e794;
        }
    }
    ctx->pc = 0x14E7B8u;
label_14e7b8:
    // 0x14e7b8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_14e7bc:
    // 0x14e7bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14e7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14e7c0:
    // 0x14e7c0: 0xc04a12a  jal         func_1284A8
label_14e7c4:
    if (ctx->pc == 0x14E7C4u) {
        ctx->pc = 0x14E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7C0u;
        // 0x14e7c4: 0x2484cfd0  addiu       $a0, $a0, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7C8u;
        goto label_14e7c8;
    }
    ctx->pc = 0x14E7C0u;
    SET_GPR_U32(ctx, 31, 0x14E7C8u);
    ctx->pc = 0x14E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E7C0u;
    // 0x14e7c4: 0x2484cfd0  addiu       $a0, $a0, -0x3030 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14E7C0u, 0x14E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7C8u;
label_14e7c8:
    // 0x14e7c8: 0x2a610007  slti        $at, $s3, 0x7
    ctx->pc = 0x14e7c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
label_14e7cc:
    // 0x14e7cc: 0x14200049  bnez        $at, . + 4 + (0x49 << 2)
label_14e7d0:
    if (ctx->pc == 0x14E7D0u) {
        ctx->pc = 0x14E7D4u;
        goto label_14e7d4;
    }
    ctx->pc = 0x14E7CCu;
    {
        const bool branch_taken_0x14e7cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e7cc) {
            ctx->pc = 0x14E8F4u;
            goto label_14e8f4;
        }
    }
    ctx->pc = 0x14E7D4u;
label_14e7d4:
    // 0x14e7d4: 0x3c140043  lui         $s4, 0x43
    ctx->pc = 0x14e7d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)67 << 16));
label_14e7d8:
    // 0x14e7d8: 0x240300cd  addiu       $v1, $zero, 0xCD
    ctx->pc = 0x14e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_14e7dc:
    // 0x14e7dc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_14e7e0:
    // 0x14e7e0: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x14e7e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14e7e4:
    // 0x14e7e4: 0xa0435d18  sb          $v1, 0x5D18($v0)
    ctx->pc = 0x14e7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23832), (uint8_t)GPR_U32(ctx, 3));
label_14e7e8:
    // 0x14e7e8: 0x269469c0  addiu       $s4, $s4, 0x69C0
    ctx->pc = 0x14e7e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 27072));
label_14e7ec:
    // 0x14e7ec: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_14e7f0:
    if (ctx->pc == 0x14E7F0u) {
        ctx->pc = 0x14E7F4u;
        goto label_14e7f4;
    }
    ctx->pc = 0x14E7ECu;
    {
        const bool branch_taken_0x14e7ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e7ec) {
            ctx->pc = 0x14E810u;
            goto label_14e810;
        }
    }
    ctx->pc = 0x14E7F4u;
label_14e7f4:
    // 0x14e7f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14e7f8:
    // 0x14e7f8: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_14e7fc:
    if (ctx->pc == 0x14E7FCu) {
        ctx->pc = 0x14E800u;
        goto label_14e800;
    }
    ctx->pc = 0x14E7F8u;
    {
        const bool branch_taken_0x14e7f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e7f8) {
            ctx->pc = 0x14E810u;
            goto label_14e810;
        }
    }
    ctx->pc = 0x14E800u;
label_14e800:
    // 0x14e800: 0xc06e4a0  jal         func_1B9280
label_14e804:
    if (ctx->pc == 0x14E804u) {
        ctx->pc = 0x14E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E800u;
        // 0x14e804: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E808u;
        goto label_14e808;
    }
    ctx->pc = 0x14E800u;
    SET_GPR_U32(ctx, 31, 0x14E808u);
    ctx->pc = 0x14E804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E800u;
    // 0x14e804: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14E800u, 0x14E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E808u;
label_14e808:
    // 0x14e808: 0xc05329c  jal         func_14CA70
label_14e80c:
    if (ctx->pc == 0x14E80Cu) {
        ctx->pc = 0x14E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E808u;
        // 0x14e80c: 0x326400ff  andi        $a0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E810u;
        goto label_14e810;
    }
    ctx->pc = 0x14E808u;
    SET_GPR_U32(ctx, 31, 0x14E810u);
    ctx->pc = 0x14E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E808u;
    // 0x14e80c: 0x326400ff  andi        $a0, $s3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA70u, 0x14E808u, 0x14E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E810u;
label_14e810:
    // 0x14e810: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14e810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_14e814:
    // 0x14e814: 0x2a62000d  slti        $v0, $s3, 0xD
    ctx->pc = 0x14e814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)13) ? 1 : 0);
label_14e818:
    // 0x14e818: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_14e81c:
    if (ctx->pc == 0x14E81Cu) {
        ctx->pc = 0x14E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E818u;
        // 0x14e81c: 0x26944180  addiu       $s4, $s4, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E820u;
        goto label_14e820;
    }
    ctx->pc = 0x14E818u;
    {
        const bool branch_taken_0x14e818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E818u;
        // 0x14e81c: 0x26944180  addiu       $s4, $s4, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e818) {
            ctx->pc = 0x14E7ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e7ec;
        }
    }
    ctx->pc = 0x14E820u;
label_14e820:
    // 0x14e820: 0x10000034  b           . + 4 + (0x34 << 2)
label_14e824:
    if (ctx->pc == 0x14E824u) {
        ctx->pc = 0x14E828u;
        goto label_14e828;
    }
    ctx->pc = 0x14E820u;
    {
        const bool branch_taken_0x14e820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e820) {
            ctx->pc = 0x14E8F4u;
            goto label_14e8f4;
        }
    }
    ctx->pc = 0x14E828u;
label_14e828:
    // 0x14e828: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x14e828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14e82c:
    // 0x14e82c: 0xc062884  jal         func_18A210
label_14e830:
    if (ctx->pc == 0x14E830u) {
        ctx->pc = 0x14E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E82Cu;
        // 0x14e830: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E834u;
        goto label_14e834;
    }
    ctx->pc = 0x14E82Cu;
    SET_GPR_U32(ctx, 31, 0x14E834u);
    ctx->pc = 0x14E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E82Cu;
    // 0x14e830: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A210u, 0x14E82Cu, 0x14E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E834u;
label_14e834:
    // 0x14e834: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14e834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_14e838:
    // 0x14e838: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14e838u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_14e83c:
    // 0x14e83c: 0x441002d  bgez        $v0, . + 4 + (0x2D << 2)
label_14e840:
    if (ctx->pc == 0x14E840u) {
        ctx->pc = 0x14E844u;
        goto label_14e844;
    }
    ctx->pc = 0x14E83Cu;
    {
        const bool branch_taken_0x14e83c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14e83c) {
            ctx->pc = 0x14E8F4u;
            goto label_14e8f4;
        }
    }
    ctx->pc = 0x14E844u;
label_14e844:
    // 0x14e844: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x14e844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14e848:
    // 0x14e848: 0x8c420494  lw          $v0, 0x494($v0)
    ctx->pc = 0x14e848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
label_14e84c:
    // 0x14e84c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14e84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14e850:
    // 0x14e850: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_14e854:
    if (ctx->pc == 0x14E854u) {
        ctx->pc = 0x14E858u;
        goto label_14e858;
    }
    ctx->pc = 0x14E850u;
    {
        const bool branch_taken_0x14e850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e850) {
            ctx->pc = 0x14E8F4u;
            goto label_14e8f4;
        }
    }
    ctx->pc = 0x14E858u;
label_14e858:
    // 0x14e858: 0x10000681  b           . + 4 + (0x681 << 2)
label_14e85c:
    if (ctx->pc == 0x14E85Cu) {
        ctx->pc = 0x14E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E858u;
        // 0x14e85c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E860u;
        goto label_14e860;
    }
    ctx->pc = 0x14E858u;
    {
        const bool branch_taken_0x14e858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E858u;
        // 0x14e85c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e858) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14E860u;
label_14e860:
    // 0x14e860: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x14e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14e864:
    // 0x14e864: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x14e864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_14e868:
    // 0x14e868: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14e868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_14e86c:
    // 0x14e86c: 0x8c6400dc  lw          $a0, 0xDC($v1)
    ctx->pc = 0x14e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_14e870:
    // 0x14e870: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14e870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14e874:
    // 0x14e874: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_14e878:
    if (ctx->pc == 0x14E878u) {
        ctx->pc = 0x14E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E874u;
        // 0x14e878: 0x907200ea  lbu         $s2, 0xEA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 234)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E87Cu;
        goto label_14e87c;
    }
    ctx->pc = 0x14E874u;
    {
        const bool branch_taken_0x14e874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e874) {
            ctx->pc = 0x14E878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E874u;
            // 0x14e878: 0x907200ea  lbu         $s2, 0xEA($v1) (Delay Slot)
            SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E888u;
            goto label_14e888;
        }
    }
    ctx->pc = 0x14E87Cu;
label_14e87c:
    // 0x14e87c: 0xc0627f8  jal         func_189FE0
label_14e880:
    if (ctx->pc == 0x14E880u) {
        ctx->pc = 0x14E884u;
        goto label_14e884;
    }
    ctx->pc = 0x14E87Cu;
    SET_GPR_U32(ctx, 31, 0x14E884u);
    ctx->pc = 0x189FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FE0u, 0x14E87Cu, 0x14E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E884u;
label_14e884:
    // 0x14e884: 0x905200ea  lbu         $s2, 0xEA($v0)
    ctx->pc = 0x14e884u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 234)));
label_14e888:
    // 0x14e888: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x14e888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14e88c:
    // 0x14e88c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_14e890:
    // 0x14e890: 0x24422244  addiu       $v0, $v0, 0x2244
    ctx->pc = 0x14e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8772));
label_14e894:
    // 0x14e894: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x14e894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_14e898:
    // 0x14e898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e89c:
    // 0x14e89c: 0x10000015  b           . + 4 + (0x15 << 2)
label_14e8a0:
    if (ctx->pc == 0x14E8A0u) {
        ctx->pc = 0x14E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E89Cu;
        // 0x14e8a0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8A4u;
        goto label_14e8a4;
    }
    ctx->pc = 0x14E89Cu;
    {
        const bool branch_taken_0x14e89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E89Cu;
        // 0x14e8a0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e89c) {
            ctx->pc = 0x14E8F4u;
            goto label_14e8f4;
        }
    }
    ctx->pc = 0x14E8A4u;
label_14e8a4:
    // 0x14e8a4: 0xc0635cc  jal         func_18D730
label_14e8a8:
    if (ctx->pc == 0x14E8A8u) {
        ctx->pc = 0x14E8ACu;
        goto label_14e8ac;
    }
    ctx->pc = 0x14E8A4u;
    SET_GPR_U32(ctx, 31, 0x14E8ACu);
    ctx->pc = 0x18D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D730u, 0x14E8A4u, 0x14E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8ACu;
label_14e8ac:
    // 0x14e8ac: 0xc0532e0  jal         func_14CB80
label_14e8b0:
    if (ctx->pc == 0x14E8B0u) {
        ctx->pc = 0x14E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8ACu;
        // 0x14e8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8B4u;
        goto label_14e8b4;
    }
    ctx->pc = 0x14E8ACu;
    SET_GPR_U32(ctx, 31, 0x14E8B4u);
    ctx->pc = 0x14E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8ACu;
    // 0x14e8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CB80u, 0x14E8ACu, 0x14E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8B4u;
label_14e8b4:
    // 0x14e8b4: 0x1000066a  b           . + 4 + (0x66A << 2)
label_14e8b8:
    if (ctx->pc == 0x14E8B8u) {
        ctx->pc = 0x14E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8B4u;
        // 0x14e8b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8BCu;
        goto label_14e8bc;
    }
    ctx->pc = 0x14E8B4u;
    {
        const bool branch_taken_0x14e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8B4u;
        // 0x14e8b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8b4) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14E8BCu;
label_14e8bc:
    // 0x14e8bc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
label_14e8c0:
    // 0x14e8c0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x14e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_14e8c4:
    // 0x14e8c4: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x14e8c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
label_14e8c8:
    // 0x14e8c8: 0x246321a0  addiu       $v1, $v1, 0x21A0
    ctx->pc = 0x14e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8608));
label_14e8cc:
    // 0x14e8cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e8d0:
    // 0x14e8d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14e8d4:
    // 0x14e8d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_14e8d8:
    if (ctx->pc == 0x14E8D8u) {
        ctx->pc = 0x14E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8D4u;
        // 0x14e8d8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8DCu;
        goto label_14e8dc;
    }
    ctx->pc = 0x14E8D4u;
    {
        const bool branch_taken_0x14e8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8D4u;
        // 0x14e8d8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8d4) {
            ctx->pc = 0x14E8F4u;
            goto label_14e8f4;
        }
    }
    ctx->pc = 0x14E8DCu;
label_14e8dc:
    // 0x14e8dc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_14e8e0:
    // 0x14e8e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_14e8e4:
    if (ctx->pc == 0x14E8E4u) {
        ctx->pc = 0x14E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8E0u;
        // 0x14e8e4: 0x8c505d38  lw          $s0, 0x5D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8E8u;
        goto label_14e8e8;
    }
    ctx->pc = 0x14E8E0u;
    {
        const bool branch_taken_0x14e8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8E0u;
        // 0x14e8e4: 0x8c505d38  lw          $s0, 0x5D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8e0) {
            ctx->pc = 0x14E8F4u;
            goto label_14e8f4;
        }
    }
    ctx->pc = 0x14E8E8u;
label_14e8e8:
    // 0x14e8e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e8ec:
    // 0x14e8ec: 0x1000065c  b           . + 4 + (0x65C << 2)
label_14e8f0:
    if (ctx->pc == 0x14E8F0u) {
        ctx->pc = 0x14E8F4u;
        goto label_14e8f4;
    }
    ctx->pc = 0x14E8ECu;
    {
        const bool branch_taken_0x14e8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e8ec) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14E8F4u;
label_14e8f4:
    // 0x14e8f4: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_14e8f8:
    if (ctx->pc == 0x14E8F8u) {
        ctx->pc = 0x14E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8F4u;
        // 0x14e8f8: 0x111202  srl         $v0, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8FCu;
        goto label_14e8fc;
    }
    ctx->pc = 0x14E8F4u;
    {
        const bool branch_taken_0x14e8f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e8f4) {
            ctx->pc = 0x14E8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E8F4u;
            // 0x14e8f8: 0x111202  srl         $v0, $s1, 8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E904u;
            goto label_14e904;
        }
    }
    ctx->pc = 0x14E8FCu;
label_14e8fc:
    // 0x14e8fc: 0x10000658  b           . + 4 + (0x658 << 2)
label_14e900:
    if (ctx->pc == 0x14E900u) {
        ctx->pc = 0x14E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8FCu;
        // 0x14e900: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E904u;
        goto label_14e904;
    }
    ctx->pc = 0x14E8FCu;
    {
        const bool branch_taken_0x14e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8FCu;
        // 0x14e900: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8fc) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14E904u;
label_14e904:
    // 0x14e904: 0x323300ff  andi        $s3, $s1, 0xFF
    ctx->pc = 0x14e904u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_14e908:
    // 0x14e908: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x14e908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_14e90c:
    // 0x14e90c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14e910:
    // 0x14e910: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x14e910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_14e914:
    // 0x14e914: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x14e914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_14e918:
    // 0x14e918: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x14e918u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_14e91c:
    // 0x14e91c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14e91cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_14e920:
    // 0x14e920: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x14e920u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_14e924:
    // 0x14e924: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x14e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_14e928:
    // 0x14e928: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14e928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14e92c:
    // 0x14e92c: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_14e930:
    if (ctx->pc == 0x14E930u) {
        ctx->pc = 0x14E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E92Cu;
        // 0x14e930: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E934u;
        goto label_14e934;
    }
    ctx->pc = 0x14E92Cu;
    {
        const bool branch_taken_0x14e92c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E92Cu;
        // 0x14e930: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e92c) {
            ctx->pc = 0x14E94Cu;
            goto label_14e94c;
        }
    }
    ctx->pc = 0x14E934u;
label_14e934:
    // 0x14e934: 0xc0534bc  jal         func_14D2F0
label_14e938:
    if (ctx->pc == 0x14E938u) {
        ctx->pc = 0x14E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E934u;
        // 0x14e938: 0x70402628  paddub      $a0, $v0, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E93Cu;
        goto label_14e93c;
    }
    ctx->pc = 0x14E934u;
    SET_GPR_U32(ctx, 31, 0x14E93Cu);
    ctx->pc = 0x14E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E934u;
    // 0x14e938: 0x70402628  paddub      $a0, $v0, $zero (Delay Slot)
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D2F0u, 0x14E934u, 0x14E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E93Cu;
label_14e93c:
    // 0x14e93c: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x14e93cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14e940:
    // 0x14e940: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_14e944:
    if (ctx->pc == 0x14E944u) {
        ctx->pc = 0x14E948u;
        goto label_14e948;
    }
    ctx->pc = 0x14E940u;
    {
        const bool branch_taken_0x14e940 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e940) {
            ctx->pc = 0x14E94Cu;
            goto label_14e94c;
        }
    }
    ctx->pc = 0x14E948u;
label_14e948:
    // 0x14e948: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x14e948u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14e94c:
    // 0x14e94c: 0x52c0000a  beql        $s6, $zero, . + 4 + (0xA << 2)
label_14e950:
    if (ctx->pc == 0x14E950u) {
        ctx->pc = 0x14E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E94Cu;
        // 0x14e950: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E954u;
        goto label_14e954;
    }
    ctx->pc = 0x14E94Cu;
    {
        const bool branch_taken_0x14e94c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e94c) {
            ctx->pc = 0x14E950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E94Cu;
            // 0x14e950: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E978u;
            goto label_14e978;
        }
    }
    ctx->pc = 0x14E954u;
label_14e954:
    // 0x14e954: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x14e954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_14e958:
    // 0x14e958: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14e958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14e95c:
    // 0x14e95c: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
label_14e960:
    if (ctx->pc == 0x14E960u) {
        ctx->pc = 0x14E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E95Cu;
        // 0x14e960: 0x3c0200f0  lui         $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)240 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E964u;
        goto label_14e964;
    }
    ctx->pc = 0x14E95Cu;
    {
        const bool branch_taken_0x14e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e95c) {
            ctx->pc = 0x14E960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E95Cu;
            // 0x14e960: 0x3c0200f0  lui         $v0, 0xF0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)240 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EAA4u;
            goto label_14eaa4;
        }
    }
    ctx->pc = 0x14E964u;
label_14e964:
    // 0x14e964: 0x92c20135  lbu         $v0, 0x135($s6)
    ctx->pc = 0x14e964u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 309)));
label_14e968:
    // 0x14e968: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_14e96c:
    if (ctx->pc == 0x14E96Cu) {
        ctx->pc = 0x14E970u;
        goto label_14e970;
    }
    ctx->pc = 0x14E968u;
    {
        const bool branch_taken_0x14e968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e968) {
            ctx->pc = 0x14EAA0u;
            goto label_14eaa0;
        }
    }
    ctx->pc = 0x14E970u;
label_14e970:
    // 0x14e970: 0x1000063b  b           . + 4 + (0x63B << 2)
label_14e974:
    if (ctx->pc == 0x14E974u) {
        ctx->pc = 0x14E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E970u;
        // 0x14e974: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E978u;
        goto label_14e978;
    }
    ctx->pc = 0x14E970u;
    {
        const bool branch_taken_0x14e970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E970u;
        // 0x14e974: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e970) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14E978u;
label_14e978:
    // 0x14e978: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_14e97c:
    if (ctx->pc == 0x14E97Cu) {
        ctx->pc = 0x14E980u;
        goto label_14e980;
    }
    ctx->pc = 0x14E978u;
    {
        const bool branch_taken_0x14e978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e978) {
            ctx->pc = 0x14EAA0u;
            goto label_14eaa0;
        }
    }
    ctx->pc = 0x14E980u;
label_14e980:
    // 0x14e980: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x14e980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_14e984:
    // 0x14e984: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x14e984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_14e988:
    // 0x14e988: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
label_14e98c:
    if (ctx->pc == 0x14E98Cu) {
        ctx->pc = 0x14E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E988u;
        // 0x14e98c: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E990u;
        goto label_14e990;
    }
    ctx->pc = 0x14E988u;
    {
        const bool branch_taken_0x14e988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e988) {
            ctx->pc = 0x14E98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E988u;
            // 0x14e98c: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EA00u;
            goto label_14ea00;
        }
    }
    ctx->pc = 0x14E990u;
label_14e990:
    // 0x14e990: 0x9044059c  lbu         $a0, 0x59C($v0)
    ctx->pc = 0x14e990u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1436)));
label_14e994:
    // 0x14e994: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x14e994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_14e998:
    // 0x14e998: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14e998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_14e99c:
    // 0x14e99c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x14e99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_14e9a0:
    // 0x14e9a0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x14e9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_14e9a4:
    // 0x14e9a4: 0xa044059c  sb          $a0, 0x59C($v0)
    ctx->pc = 0x14e9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1436), (uint8_t)GPR_U32(ctx, 4));
label_14e9a8:
    // 0x14e9a8: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x14e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14e9ac:
    // 0x14e9ac: 0xac4305a4  sw          $v1, 0x5A4($v0)
    ctx->pc = 0x14e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1444), GPR_U32(ctx, 3));
label_14e9b0:
    // 0x14e9b0: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x14e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14e9b4:
    // 0x14e9b4: 0x8c4505dc  lw          $a1, 0x5DC($v0)
    ctx->pc = 0x14e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1500)));
label_14e9b8:
    // 0x14e9b8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_14e9bc:
    if (ctx->pc == 0x14E9BCu) {
        ctx->pc = 0x14E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9B8u;
        // 0x14e9bc: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9C0u;
        goto label_14e9c0;
    }
    ctx->pc = 0x14E9B8u;
    {
        const bool branch_taken_0x14e9b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e9b8) {
            ctx->pc = 0x14E9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E9B8u;
            // 0x14e9bc: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E9D8u;
            goto label_14e9d8;
        }
    }
    ctx->pc = 0x14E9C0u;
label_14e9c0:
    // 0x14e9c0: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x14e9c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_14e9c4:
    // 0x14e9c4: 0x24041104  addiu       $a0, $zero, 0x1104
    ctx->pc = 0x14e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4356));
label_14e9c8:
    // 0x14e9c8: 0xc05721c  jal         func_15C870
label_14e9cc:
    if (ctx->pc == 0x14E9CCu) {
        ctx->pc = 0x14E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9C8u;
        // 0x14e9cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9D0u;
        goto label_14e9d0;
    }
    ctx->pc = 0x14E9C8u;
    SET_GPR_U32(ctx, 31, 0x14E9D0u);
    ctx->pc = 0x14E9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9C8u;
    // 0x14e9cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C870u, 0x14E9C8u, 0x14E9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9D0u;
label_14e9d0:
    // 0x14e9d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_14e9d4:
    if (ctx->pc == 0x14E9D4u) {
        ctx->pc = 0x14E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9D0u;
        // 0x14e9d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9D8u;
        goto label_14e9d8;
    }
    ctx->pc = 0x14E9D0u;
    {
        const bool branch_taken_0x14e9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9D0u;
        // 0x14e9d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9d0) {
            ctx->pc = 0x14E9F8u;
            goto label_14e9f8;
        }
    }
    ctx->pc = 0x14E9D8u;
label_14e9d8:
    // 0x14e9d8: 0xc0627c8  jal         func_189F20
label_14e9dc:
    if (ctx->pc == 0x14E9DCu) {
        ctx->pc = 0x14E9E0u;
        goto label_14e9e0;
    }
    ctx->pc = 0x14E9D8u;
    SET_GPR_U32(ctx, 31, 0x14E9E0u);
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x14E9D8u, 0x14E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9E0u;
label_14e9e0:
    // 0x14e9e0: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x14e9e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_14e9e4:
    // 0x14e9e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e9e8:
    // 0x14e9e8: 0x24041104  addiu       $a0, $zero, 0x1104
    ctx->pc = 0x14e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4356));
label_14e9ec:
    // 0x14e9ec: 0xc05721c  jal         func_15C870
label_14e9f0:
    if (ctx->pc == 0x14E9F0u) {
        ctx->pc = 0x14E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9ECu;
        // 0x14e9f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E9F4u;
        goto label_14e9f4;
    }
    ctx->pc = 0x14E9ECu;
    SET_GPR_U32(ctx, 31, 0x14E9F4u);
    ctx->pc = 0x14E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9ECu;
    // 0x14e9f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C870u, 0x14E9ECu, 0x14E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9F4u;
label_14e9f4:
    // 0x14e9f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e9f8:
    // 0x14e9f8: 0x10000619  b           . + 4 + (0x619 << 2)
label_14e9fc:
    if (ctx->pc == 0x14E9FCu) {
        ctx->pc = 0x14EA00u;
        goto label_14ea00;
    }
    ctx->pc = 0x14E9F8u;
    {
        const bool branch_taken_0x14e9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e9f8) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14EA00u;
label_14ea00:
    // 0x14ea00: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x14ea00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_14ea04:
    // 0x14ea04: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_14ea08:
    if (ctx->pc == 0x14EA08u) {
        ctx->pc = 0x14EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA04u;
        // 0x14ea08: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA0Cu;
        goto label_14ea0c;
    }
    ctx->pc = 0x14EA04u;
    {
        const bool branch_taken_0x14ea04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea04) {
            ctx->pc = 0x14EA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EA04u;
            // 0x14ea08: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EA28u;
            goto label_14ea28;
        }
    }
    ctx->pc = 0x14EA0Cu;
label_14ea0c:
    // 0x14ea0c: 0x9043059c  lbu         $v1, 0x59C($v0)
    ctx->pc = 0x14ea0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1436)));
label_14ea10:
    // 0x14ea10: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x14ea10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_14ea14:
    // 0x14ea14: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_14ea18:
    if (ctx->pc == 0x14EA18u) {
        ctx->pc = 0x14EA1Cu;
        goto label_14ea1c;
    }
    ctx->pc = 0x14EA14u;
    {
        const bool branch_taken_0x14ea14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ea14) {
            ctx->pc = 0x14EA24u;
            goto label_14ea24;
        }
    }
    ctx->pc = 0x14EA1Cu;
label_14ea1c:
    // 0x14ea1c: 0x10000610  b           . + 4 + (0x610 << 2)
label_14ea20:
    if (ctx->pc == 0x14EA20u) {
        ctx->pc = 0x14EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA1Cu;
        // 0x14ea20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA24u;
        goto label_14ea24;
    }
    ctx->pc = 0x14EA1Cu;
    {
        const bool branch_taken_0x14ea1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA1Cu;
        // 0x14ea20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea1c) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14EA24u;
label_14ea24:
    // 0x14ea24: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x14ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_14ea28:
    // 0x14ea28: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x14ea28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_14ea2c:
    // 0x14ea2c: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_14ea30:
    if (ctx->pc == 0x14EA30u) {
        ctx->pc = 0x14EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA2Cu;
        // 0x14ea30: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA34u;
        goto label_14ea34;
    }
    ctx->pc = 0x14EA2Cu;
    {
        const bool branch_taken_0x14ea2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea2c) {
            ctx->pc = 0x14EA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EA2Cu;
            // 0x14ea30: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EA80u;
            goto label_14ea80;
        }
    }
    ctx->pc = 0x14EA34u;
label_14ea34:
    // 0x14ea34: 0x8c4505dc  lw          $a1, 0x5DC($v0)
    ctx->pc = 0x14ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1500)));
label_14ea38:
    // 0x14ea38: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_14ea3c:
    if (ctx->pc == 0x14EA3Cu) {
        ctx->pc = 0x14EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA38u;
        // 0x14ea3c: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA40u;
        goto label_14ea40;
    }
    ctx->pc = 0x14EA38u;
    {
        const bool branch_taken_0x14ea38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea38) {
            ctx->pc = 0x14EA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EA38u;
            // 0x14ea3c: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EA58u;
            goto label_14ea58;
        }
    }
    ctx->pc = 0x14EA40u;
label_14ea40:
    // 0x14ea40: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x14ea40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_14ea44:
    // 0x14ea44: 0x24041107  addiu       $a0, $zero, 0x1107
    ctx->pc = 0x14ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4359));
label_14ea48:
    // 0x14ea48: 0xc05721c  jal         func_15C870
label_14ea4c:
    if (ctx->pc == 0x14EA4Cu) {
        ctx->pc = 0x14EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA48u;
        // 0x14ea4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA50u;
        goto label_14ea50;
    }
    ctx->pc = 0x14EA48u;
    SET_GPR_U32(ctx, 31, 0x14EA50u);
    ctx->pc = 0x14EA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA48u;
    // 0x14ea4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C870u, 0x14EA48u, 0x14EA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA50u;
label_14ea50:
    // 0x14ea50: 0x10000009  b           . + 4 + (0x9 << 2)
label_14ea54:
    if (ctx->pc == 0x14EA54u) {
        ctx->pc = 0x14EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA50u;
        // 0x14ea54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA58u;
        goto label_14ea58;
    }
    ctx->pc = 0x14EA50u;
    {
        const bool branch_taken_0x14ea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA50u;
        // 0x14ea54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea50) {
            ctx->pc = 0x14EA78u;
            goto label_14ea78;
        }
    }
    ctx->pc = 0x14EA58u;
label_14ea58:
    // 0x14ea58: 0xc0627c8  jal         func_189F20
label_14ea5c:
    if (ctx->pc == 0x14EA5Cu) {
        ctx->pc = 0x14EA60u;
        goto label_14ea60;
    }
    ctx->pc = 0x14EA58u;
    SET_GPR_U32(ctx, 31, 0x14EA60u);
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x14EA58u, 0x14EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA60u;
label_14ea60:
    // 0x14ea60: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x14ea60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_14ea64:
    // 0x14ea64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14ea64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14ea68:
    // 0x14ea68: 0x24041107  addiu       $a0, $zero, 0x1107
    ctx->pc = 0x14ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4359));
label_14ea6c:
    // 0x14ea6c: 0xc05721c  jal         func_15C870
label_14ea70:
    if (ctx->pc == 0x14EA70u) {
        ctx->pc = 0x14EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA6Cu;
        // 0x14ea70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA74u;
        goto label_14ea74;
    }
    ctx->pc = 0x14EA6Cu;
    SET_GPR_U32(ctx, 31, 0x14EA74u);
    ctx->pc = 0x14EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA6Cu;
    // 0x14ea70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C870u, 0x14EA6Cu, 0x14EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA74u;
label_14ea74:
    // 0x14ea74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14ea78:
    // 0x14ea78: 0x100005f9  b           . + 4 + (0x5F9 << 2)
label_14ea7c:
    if (ctx->pc == 0x14EA7Cu) {
        ctx->pc = 0x14EA80u;
        goto label_14ea80;
    }
    ctx->pc = 0x14EA78u;
    {
        const bool branch_taken_0x14ea78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea78) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14EA80u;
label_14ea80:
    // 0x14ea80: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x14ea80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_14ea84:
    // 0x14ea84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_14ea88:
    if (ctx->pc == 0x14EA88u) {
        ctx->pc = 0x14EA8Cu;
        goto label_14ea8c;
    }
    ctx->pc = 0x14EA84u;
    {
        const bool branch_taken_0x14ea84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea84) {
            ctx->pc = 0x14EAA0u;
            goto label_14eaa0;
        }
    }
    ctx->pc = 0x14EA8Cu;
label_14ea8c:
    // 0x14ea8c: 0x9042027b  lbu         $v0, 0x27B($v0)
    ctx->pc = 0x14ea8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 635)));
label_14ea90:
    // 0x14ea90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14ea94:
    if (ctx->pc == 0x14EA94u) {
        ctx->pc = 0x14EA98u;
        goto label_14ea98;
    }
    ctx->pc = 0x14EA90u;
    {
        const bool branch_taken_0x14ea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea90) {
            ctx->pc = 0x14EAA0u;
            goto label_14eaa0;
        }
    }
    ctx->pc = 0x14EA98u;
label_14ea98:
    // 0x14ea98: 0x100005f1  b           . + 4 + (0x5F1 << 2)
label_14ea9c:
    if (ctx->pc == 0x14EA9Cu) {
        ctx->pc = 0x14EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA98u;
        // 0x14ea9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EAA0u;
        goto label_14eaa0;
    }
    ctx->pc = 0x14EA98u;
    {
        const bool branch_taken_0x14ea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA98u;
        // 0x14ea9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea98) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14EAA0u;
label_14eaa0:
    // 0x14eaa0: 0x3c0200f0  lui         $v0, 0xF0
    ctx->pc = 0x14eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)240 << 16));
label_14eaa4:
    // 0x14eaa4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14eaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14eaa8:
    // 0x14eaa8: 0x22502  srl         $a0, $v0, 20
    ctx->pc = 0x14eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_14eaac:
    // 0x14eaac: 0x50800044  beql        $a0, $zero, . + 4 + (0x44 << 2)
label_14eab0:
    if (ctx->pc == 0x14EAB0u) {
        ctx->pc = 0x14EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAACu;
        // 0x14eab0: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EAB4u;
        goto label_14eab4;
    }
    ctx->pc = 0x14EAACu;
    {
        const bool branch_taken_0x14eaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eaac) {
            ctx->pc = 0x14EAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EAACu;
            // 0x14eab0: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EBC0u;
            goto label_14ebc0;
        }
    }
    ctx->pc = 0x14EAB4u;
label_14eab4:
    // 0x14eab4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x14eab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14eab8:
    // 0x14eab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14eab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14eabc:
    // 0x14eabc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14eac0:
    // 0x14eac0: 0xa31004  sllv        $v0, $v1, $a1
    ctx->pc = 0x14eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_14eac4:
    // 0x14eac4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14eac8:
    // 0x14eac8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14eac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14eacc:
    // 0x14eacc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14eaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_14ead0:
    // 0x14ead0: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_14ead4:
    if (ctx->pc == 0x14EAD4u) {
        ctx->pc = 0x14EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAD0u;
        // 0x14ead4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EAD8u;
        goto label_14ead8;
    }
    ctx->pc = 0x14EAD0u;
    {
        const bool branch_taken_0x14ead0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ead0) {
            ctx->pc = 0x14EAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EAD0u;
            // 0x14ead4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EB88u;
            goto label_14eb88;
        }
    }
    ctx->pc = 0x14EAD8u;
label_14ead8:
    // 0x14ead8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14eadc:
    // 0x14eadc: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
label_14eae0:
    if (ctx->pc == 0x14EAE0u) {
        ctx->pc = 0x14EAE4u;
        goto label_14eae4;
    }
    ctx->pc = 0x14EADCu;
    {
        const bool branch_taken_0x14eadc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x14eadc) {
            ctx->pc = 0x14EB68u;
            goto label_14eb68;
        }
    }
    ctx->pc = 0x14EAE4u;
label_14eae4:
    // 0x14eae4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14eae8:
    // 0x14eae8: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
label_14eaec:
    if (ctx->pc == 0x14EAECu) {
        ctx->pc = 0x14EAF0u;
        goto label_14eaf0;
    }
    ctx->pc = 0x14EAE8u;
    {
        const bool branch_taken_0x14eae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x14eae8) {
            ctx->pc = 0x14EB48u;
            goto label_14eb48;
        }
    }
    ctx->pc = 0x14EAF0u;
label_14eaf0:
    // 0x14eaf0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
label_14eaf4:
    if (ctx->pc == 0x14EAF4u) {
        ctx->pc = 0x14EAF8u;
        goto label_14eaf8;
    }
    ctx->pc = 0x14EAF0u;
    {
        const bool branch_taken_0x14eaf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x14eaf0) {
            ctx->pc = 0x14EB28u;
            goto label_14eb28;
        }
    }
    ctx->pc = 0x14EAF8u;
label_14eaf8:
    // 0x14eaf8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_14eafc:
    if (ctx->pc == 0x14EAFCu) {
        ctx->pc = 0x14EB00u;
        goto label_14eb00;
    }
    ctx->pc = 0x14EAF8u;
    {
        const bool branch_taken_0x14eaf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eaf8) {
            ctx->pc = 0x14EB08u;
            goto label_14eb08;
        }
    }
    ctx->pc = 0x14EB00u;
label_14eb00:
    // 0x14eb00: 0x10000025  b           . + 4 + (0x25 << 2)
label_14eb04:
    if (ctx->pc == 0x14EB04u) {
        ctx->pc = 0x14EB08u;
        goto label_14eb08;
    }
    ctx->pc = 0x14EB00u;
    {
        const bool branch_taken_0x14eb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb00) {
            ctx->pc = 0x14EB98u;
            goto label_14eb98;
        }
    }
    ctx->pc = 0x14EB08u;
label_14eb08:
    // 0x14eb08: 0xc067c8c  jal         func_19F230
label_14eb0c:
    if (ctx->pc == 0x14EB0Cu) {
        ctx->pc = 0x14EB10u;
        goto label_14eb10;
    }
    ctx->pc = 0x14EB08u;
    SET_GPR_U32(ctx, 31, 0x14EB10u);
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x14EB08u, 0x14EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB10u;
label_14eb10:
    // 0x14eb10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14eb14:
    // 0x14eb14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14eb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14eb18:
    // 0x14eb18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14eb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14eb1c:
    // 0x14eb1c: 0x46140818  adda.s      $f1, $f20
    ctx->pc = 0x14eb1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[20]));
label_14eb20:
    // 0x14eb20: 0x1000001d  b           . + 4 + (0x1D << 2)
label_14eb24:
    if (ctx->pc == 0x14EB24u) {
        ctx->pc = 0x14EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB20u;
        // 0x14eb24: 0x4600151c  madd.s      $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EB28u;
        goto label_14eb28;
    }
    ctx->pc = 0x14EB20u;
    {
        const bool branch_taken_0x14eb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB20u;
        // 0x14eb24: 0x4600151c  madd.s      $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb20) {
            ctx->pc = 0x14EB98u;
            goto label_14eb98;
        }
    }
    ctx->pc = 0x14EB28u;
label_14eb28:
    // 0x14eb28: 0xc067c8c  jal         func_19F230
label_14eb2c:
    if (ctx->pc == 0x14EB2Cu) {
        ctx->pc = 0x14EB30u;
        goto label_14eb30;
    }
    ctx->pc = 0x14EB28u;
    SET_GPR_U32(ctx, 31, 0x14EB30u);
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x14EB28u, 0x14EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB30u;
label_14eb30:
    // 0x14eb30: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14eb34:
    // 0x14eb34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14eb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14eb38:
    // 0x14eb38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14eb38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14eb3c:
    // 0x14eb3c: 0x46140818  adda.s      $f1, $f20
    ctx->pc = 0x14eb3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[20]));
label_14eb40:
    // 0x14eb40: 0x10000015  b           . + 4 + (0x15 << 2)
label_14eb44:
    if (ctx->pc == 0x14EB44u) {
        ctx->pc = 0x14EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB40u;
        // 0x14eb44: 0x4600151c  madd.s      $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EB48u;
        goto label_14eb48;
    }
    ctx->pc = 0x14EB40u;
    {
        const bool branch_taken_0x14eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB40u;
        // 0x14eb44: 0x4600151c  madd.s      $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb40) {
            ctx->pc = 0x14EB98u;
            goto label_14eb98;
        }
    }
    ctx->pc = 0x14EB48u;
label_14eb48:
    // 0x14eb48: 0xc067c8c  jal         func_19F230
label_14eb4c:
    if (ctx->pc == 0x14EB4Cu) {
        ctx->pc = 0x14EB50u;
        goto label_14eb50;
    }
    ctx->pc = 0x14EB48u;
    SET_GPR_U32(ctx, 31, 0x14EB50u);
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x14EB48u, 0x14EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB50u;
label_14eb50:
    // 0x14eb50: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x14eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_14eb54:
    // 0x14eb54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14eb54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14eb58:
    // 0x14eb58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14eb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14eb5c:
    // 0x14eb5c: 0x46140818  adda.s      $f1, $f20
    ctx->pc = 0x14eb5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[20]));
label_14eb60:
    // 0x14eb60: 0x1000000d  b           . + 4 + (0xD << 2)
label_14eb64:
    if (ctx->pc == 0x14EB64u) {
        ctx->pc = 0x14EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB60u;
        // 0x14eb64: 0x4600151c  madd.s      $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EB68u;
        goto label_14eb68;
    }
    ctx->pc = 0x14EB60u;
    {
        const bool branch_taken_0x14eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB60u;
        // 0x14eb64: 0x4600151c  madd.s      $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb60) {
            ctx->pc = 0x14EB98u;
            goto label_14eb98;
        }
    }
    ctx->pc = 0x14EB68u;
label_14eb68:
    // 0x14eb68: 0xc067c8c  jal         func_19F230
label_14eb6c:
    if (ctx->pc == 0x14EB6Cu) {
        ctx->pc = 0x14EB70u;
        goto label_14eb70;
    }
    ctx->pc = 0x14EB68u;
    SET_GPR_U32(ctx, 31, 0x14EB70u);
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x14EB68u, 0x14EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB70u;
label_14eb70:
    // 0x14eb70: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x14eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_14eb74:
    // 0x14eb74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14eb74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14eb78:
    // 0x14eb78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14eb78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14eb7c:
    // 0x14eb7c: 0x46140818  adda.s      $f1, $f20
    ctx->pc = 0x14eb7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[20]));
label_14eb80:
    // 0x14eb80: 0x10000005  b           . + 4 + (0x5 << 2)
label_14eb84:
    if (ctx->pc == 0x14EB84u) {
        ctx->pc = 0x14EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB80u;
        // 0x14eb84: 0x4600151c  madd.s      $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EB88u;
        goto label_14eb88;
    }
    ctx->pc = 0x14EB80u;
    {
        const bool branch_taken_0x14eb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB80u;
        // 0x14eb84: 0x4600151c  madd.s      $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb80) {
            ctx->pc = 0x14EB98u;
            goto label_14eb98;
        }
    }
    ctx->pc = 0x14EB88u;
label_14eb88:
    // 0x14eb88: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x14eb88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_14eb8c:
    // 0x14eb8c: 0x5440ffcd  bnel        $v0, $zero, . + 4 + (-0x33 << 2)
label_14eb90:
    if (ctx->pc == 0x14EB90u) {
        ctx->pc = 0x14EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB8Cu;
        // 0x14eb90: 0xa31004  sllv        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EB94u;
        goto label_14eb94;
    }
    ctx->pc = 0x14EB8Cu;
    {
        const bool branch_taken_0x14eb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eb8c) {
            ctx->pc = 0x14EB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EB8Cu;
            // 0x14eb90: 0xa31004  sllv        $v0, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EAC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14eac4;
        }
    }
    ctx->pc = 0x14EB94u;
label_14eb94:
    // 0x14eb94: 0x0  nop
    ctx->pc = 0x14eb94u;
    // NOP
label_14eb98:
    // 0x14eb98: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14eb98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_14eb9c:
    // 0x14eb9c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14eb9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14eba0:
    // 0x14eba0: 0x0  nop
    ctx->pc = 0x14eba0u;
    // NOP
label_14eba4:
    // 0x14eba4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14eba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_14eba8:
    // 0x14eba8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14eba8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_14ebac:
    // 0x14ebac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14ebb0:
    if (ctx->pc == 0x14EBB0u) {
        ctx->pc = 0x14EBB4u;
        goto label_14ebb4;
    }
    ctx->pc = 0x14EBACu;
    {
        const bool branch_taken_0x14ebac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ebac) {
            ctx->pc = 0x14EBBCu;
            goto label_14ebbc;
        }
    }
    ctx->pc = 0x14EBB4u;
label_14ebb4:
    // 0x14ebb4: 0x100005aa  b           . + 4 + (0x5AA << 2)
label_14ebb8:
    if (ctx->pc == 0x14EBB8u) {
        ctx->pc = 0x14EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBB4u;
        // 0x14ebb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EBBCu;
        goto label_14ebbc;
    }
    ctx->pc = 0x14EBB4u;
    {
        const bool branch_taken_0x14ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBB4u;
        // 0x14ebb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebb4) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14EBBCu;
label_14ebbc:
    // 0x14ebbc: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x14ebbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_14ebc0:
    // 0x14ebc0: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x14ebc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_14ebc4:
    // 0x14ebc4: 0x502005a6  beql        $at, $zero, . + 4 + (0x5A6 << 2)
label_14ebc8:
    if (ctx->pc == 0x14EBC8u) {
        ctx->pc = 0x14EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBC4u;
        // 0x14ebc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EBCCu;
        goto label_14ebcc;
    }
    ctx->pc = 0x14EBC4u;
    {
        const bool branch_taken_0x14ebc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ebc4) {
            ctx->pc = 0x14EBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EBC4u;
            // 0x14ebc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14EBCCu;
label_14ebcc:
    // 0x14ebcc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x14ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_14ebd0:
    // 0x14ebd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14ebd4:
    // 0x14ebd4: 0x2463d060  addiu       $v1, $v1, -0x2FA0
    ctx->pc = 0x14ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955104));
label_14ebd8:
    // 0x14ebd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ebdc:
    // 0x14ebdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14ebe0:
    // 0x14ebe0: 0x400008  jr          $v0
label_14ebe4:
    if (ctx->pc == 0x14EBE4u) {
        ctx->pc = 0x14EBE8u;
        goto label_14ebe8;
    }
    ctx->pc = 0x14EBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EBE8u: goto label_14ebe8;
            case 0x14ECD4u: goto label_14ecd4;
            case 0x14F0C0u: goto label_14f0c0;
            case 0x14F15Cu: goto label_14f15c;
            case 0x14F4FCu: goto label_14f4fc;
            case 0x14F5FCu: goto label_14f5fc;
            case 0x14F7F4u: goto label_14f7f4;
            case 0x14F8F4u: goto label_14f8f4;
            case 0x14FAF8u: goto label_14faf8;
            case 0x150018u: goto label_150018;
            case 0x15025Cu: goto label_15025c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EBE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14EBE8u;
label_14ebe8:
    // 0x14ebe8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x14ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_14ebec:
    // 0x14ebec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x14ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14ebf0:
    // 0x14ebf0: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x14ebf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
label_14ebf4:
    // 0x14ebf4: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_14ebf8:
    if (ctx->pc == 0x14EBF8u) {
        ctx->pc = 0x14EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBF4u;
        // 0x14ebf8: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EBFCu;
        goto label_14ebfc;
    }
    ctx->pc = 0x14EBF4u;
    {
        const bool branch_taken_0x14ebf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14ebf4) {
            ctx->pc = 0x14EBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EBF4u;
            // 0x14ebf8: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EC18u;
            goto label_14ec18;
        }
    }
    ctx->pc = 0x14EBFCu;
label_14ebfc:
    // 0x14ebfc: 0x2662ff92  addiu       $v0, $s3, -0x6E
    ctx->pc = 0x14ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967186));
label_14ec00:
    // 0x14ec00: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x14ec00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14ec04:
    // 0x14ec04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_14ec08:
    if (ctx->pc == 0x14EC08u) {
        ctx->pc = 0x14EC0Cu;
        goto label_14ec0c;
    }
    ctx->pc = 0x14EC04u;
    {
        const bool branch_taken_0x14ec04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ec04) {
            ctx->pc = 0x14EC14u;
            goto label_14ec14;
        }
    }
    ctx->pc = 0x14EC0Cu;
label_14ec0c:
    // 0x14ec0c: 0x10000594  b           . + 4 + (0x594 << 2)
label_14ec10:
    if (ctx->pc == 0x14EC10u) {
        ctx->pc = 0x14EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC0Cu;
        // 0x14ec10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC14u;
        goto label_14ec14;
    }
    ctx->pc = 0x14EC0Cu;
    {
        const bool branch_taken_0x14ec0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC0Cu;
        // 0x14ec10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec0c) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14EC14u;
label_14ec14:
    // 0x14ec14: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x14ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_14ec18:
    // 0x14ec18: 0x5662000a  bnel        $s3, $v0, . + 4 + (0xA << 2)
label_14ec1c:
    if (ctx->pc == 0x14EC1Cu) {
        ctx->pc = 0x14EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC18u;
        // 0x14ec1c: 0x92040004  lbu         $a0, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC20u;
        goto label_14ec20;
    }
    ctx->pc = 0x14EC18u;
    {
        const bool branch_taken_0x14ec18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x14ec18) {
            ctx->pc = 0x14EC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EC18u;
            // 0x14ec1c: 0x92040004  lbu         $a0, 0x4($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EC44u;
            goto label_14ec44;
        }
    }
    ctx->pc = 0x14EC20u;
label_14ec20:
    // 0x14ec20: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14ec24:
    // 0x14ec24: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_14ec28:
    // 0x14ec28: 0xdc655d30  ld          $a1, 0x5D30($v1)
    ctx->pc = 0x14ec28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 23856)));
label_14ec2c:
    // 0x14ec2c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_14ec30:
    // 0x14ec30: 0x2484d000  addiu       $a0, $a0, -0x3000
    ctx->pc = 0x14ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955008));
label_14ec34:
    // 0x14ec34: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x14ec34u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_14ec38:
    // 0x14ec38: 0xc04a12a  jal         func_1284A8
label_14ec3c:
    if (ctx->pc == 0x14EC3Cu) {
        ctx->pc = 0x14EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC38u;
        // 0x14ec3c: 0xfc435d30  sd          $v1, 0x5D30($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 23856), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC40u;
        goto label_14ec40;
    }
    ctx->pc = 0x14EC38u;
    SET_GPR_U32(ctx, 31, 0x14EC40u);
    ctx->pc = 0x14EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC38u;
    // 0x14ec3c: 0xfc435d30  sd          $v1, 0x5D30($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 23856), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14EC38u, 0x14EC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC40u;
label_14ec40:
    // 0x14ec40: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x14ec40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_14ec44:
    // 0x14ec44: 0xc052abc  jal         func_14AAF0
label_14ec48:
    if (ctx->pc == 0x14EC48u) {
        ctx->pc = 0x14EC4Cu;
        goto label_14ec4c;
    }
    ctx->pc = 0x14EC44u;
    SET_GPR_U32(ctx, 31, 0x14EC4Cu);
    ctx->pc = 0x14AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AAF0u, 0x14EC44u, 0x14EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC4Cu;
label_14ec4c:
    // 0x14ec4c: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x14ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
label_14ec50:
    // 0x14ec50: 0x82040007  lb          $a0, 0x7($s0)
    ctx->pc = 0x14ec50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_14ec54:
    // 0x14ec54: 0xac62ead0  sw          $v0, -0x1530($v1)
    ctx->pc = 0x14ec54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961872), GPR_U32(ctx, 2));
label_14ec58:
    // 0x14ec58: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x14ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_14ec5c:
    // 0x14ec5c: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x14ec5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_14ec60:
    // 0x14ec60: 0xac44eac8  sw          $a0, -0x1538($v0)
    ctx->pc = 0x14ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961864), GPR_U32(ctx, 4));
label_14ec64:
    // 0x14ec64: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x14ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
label_14ec68:
    // 0x14ec68: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x14ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_14ec6c:
    // 0x14ec6c: 0x8c44eae0  lw          $a0, -0x1520($v0)
    ctx->pc = 0x14ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961888)));
label_14ec70:
    // 0x14ec70: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x14ec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_14ec74:
    // 0x14ec74: 0xc06e4a0  jal         func_1B9280
label_14ec78:
    if (ctx->pc == 0x14EC78u) {
        ctx->pc = 0x14EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC74u;
        // 0x14ec78: 0xa062eac0  sb          $v0, -0x1540($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961856), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC7Cu;
        goto label_14ec7c;
    }
    ctx->pc = 0x14EC74u;
    SET_GPR_U32(ctx, 31, 0x14EC7Cu);
    ctx->pc = 0x14EC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC74u;
    // 0x14ec78: 0xa062eac0  sb          $v0, -0x1540($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961856), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14EC74u, 0x14EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC7Cu;
label_14ec7c:
    // 0x14ec7c: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x14ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
label_14ec80:
    // 0x14ec80: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x14ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_14ec84:
    // 0x14ec84: 0x8c45ead0  lw          $a1, -0x1530($v0)
    ctx->pc = 0x14ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961872)));
label_14ec88:
    // 0x14ec88: 0xc06e822  jal         func_1BA088
label_14ec8c:
    if (ctx->pc == 0x14EC8Cu) {
        ctx->pc = 0x14EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC88u;
        // 0x14ec8c: 0x8c64eae0  lw          $a0, -0x1520($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961888)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC90u;
        goto label_14ec90;
    }
    ctx->pc = 0x14EC88u;
    SET_GPR_U32(ctx, 31, 0x14EC90u);
    ctx->pc = 0x14EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC88u;
    // 0x14ec8c: 0x8c64eae0  lw          $a0, -0x1520($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961888)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x14EC88u, 0x14EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC90u;
label_14ec90:
    // 0x14ec90: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x14ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
label_14ec94:
    // 0x14ec94: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x14ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_14ec98:
    // 0x14ec98: 0x8c44eae0  lw          $a0, -0x1520($v0)
    ctx->pc = 0x14ec98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961888)));
label_14ec9c:
    // 0x14ec9c: 0xc06d28c  jal         func_1B4A30
label_14eca0:
    if (ctx->pc == 0x14ECA0u) {
        ctx->pc = 0x14ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC9Cu;
        // 0x14eca0: 0x9065eac0  lbu         $a1, -0x1540($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ECA4u;
        goto label_14eca4;
    }
    ctx->pc = 0x14EC9Cu;
    SET_GPR_U32(ctx, 31, 0x14ECA4u);
    ctx->pc = 0x14ECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC9Cu;
    // 0x14eca0: 0x9065eac0  lbu         $a1, -0x1540($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14EC9Cu, 0x14ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECA4u;
label_14eca4:
    // 0x14eca4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x14eca4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_14eca8:
    // 0x14eca8: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x14eca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
label_14ecac:
    // 0x14ecac: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x14ecacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14ecb0:
    // 0x14ecb0: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x14ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_14ecb4:
    // 0x14ecb4: 0x8c44eae0  lw          $a0, -0x1520($v0)
    ctx->pc = 0x14ecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961888)));
label_14ecb8:
    // 0x14ecb8: 0xc06f098  jal         func_1BC260
label_14ecbc:
    if (ctx->pc == 0x14ECBCu) {
        ctx->pc = 0x14ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECB8u;
        // 0x14ecbc: 0x24a56cc0  addiu       $a1, $a1, 0x6CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ECC0u;
        goto label_14ecc0;
    }
    ctx->pc = 0x14ECB8u;
    SET_GPR_U32(ctx, 31, 0x14ECC0u);
    ctx->pc = 0x14ECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECB8u;
    // 0x14ecbc: 0x24a56cc0  addiu       $a1, $a1, 0x6CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC260u, 0x14ECB8u, 0x14ECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECC0u;
label_14ecc0:
    // 0x14ecc0: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x14ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_14ecc4:
    // 0x14ecc4: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x14ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_14ecc8:
    // 0x14ecc8: 0xa043ead8  sb          $v1, -0x1528($v0)
    ctx->pc = 0x14ecc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961880), (uint8_t)GPR_U32(ctx, 3));
label_14eccc:
    // 0x14eccc: 0x10000564  b           . + 4 + (0x564 << 2)
label_14ecd0:
    if (ctx->pc == 0x14ECD0u) {
        ctx->pc = 0x14ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECCCu;
        // 0x14ecd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ECD4u;
        goto label_14ecd4;
    }
    ctx->pc = 0x14ECCCu;
    {
        const bool branch_taken_0x14eccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECCCu;
        // 0x14ecd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eccc) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14ECD4u;
label_14ecd4:
    // 0x14ecd4: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x14ecd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_14ecd8:
    // 0x14ecd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14ecdc:
    // 0x14ecdc: 0x3066001f  andi        $a2, $v1, 0x1F
    ctx->pc = 0x14ecdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_14ece0:
    // 0x14ece0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x14ece0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_14ece4:
    // 0x14ece4: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x14ece4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_14ece8:
    // 0x14ece8: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
label_14ecec:
    if (ctx->pc == 0x14ECECu) {
        ctx->pc = 0x14ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECE8u;
        // 0x14ecec: 0x64120008  daddiu      $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ECF0u;
        goto label_14ecf0;
    }
    ctx->pc = 0x14ECE8u;
    {
        const bool branch_taken_0x14ece8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x14ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECE8u;
        // 0x14ecec: 0x64120008  daddiu      $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ece8) {
            ctx->pc = 0x14ED20u;
            goto label_14ed20;
        }
    }
    ctx->pc = 0x14ECF0u;
label_14ecf0:
    // 0x14ecf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ecf4:
    // 0x14ecf4: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
label_14ecf8:
    if (ctx->pc == 0x14ECF8u) {
        ctx->pc = 0x14ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECF4u;
        // 0x14ecf8: 0x26420005  addiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ECFCu;
        goto label_14ecfc;
    }
    ctx->pc = 0x14ECF4u;
    {
        const bool branch_taken_0x14ecf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ecf4) {
            ctx->pc = 0x14ECF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ECF4u;
            // 0x14ecf8: 0x26420005  addiu       $v0, $s2, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ED14u;
            goto label_14ed14;
        }
    }
    ctx->pc = 0x14ECFCu;
label_14ecfc:
    // 0x14ecfc: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_14ed00:
    if (ctx->pc == 0x14ED00u) {
        ctx->pc = 0x14ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECFCu;
        // 0x14ed00: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED04u;
        goto label_14ed04;
    }
    ctx->pc = 0x14ECFCu;
    {
        const bool branch_taken_0x14ecfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ecfc) {
            ctx->pc = 0x14ED00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ECFCu;
            // 0x14ed00: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ED0Cu;
            goto label_14ed0c;
        }
    }
    ctx->pc = 0x14ED04u;
label_14ed04:
    // 0x14ed04: 0x10000009  b           . + 4 + (0x9 << 2)
label_14ed08:
    if (ctx->pc == 0x14ED08u) {
        ctx->pc = 0x14ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED04u;
        // 0x14ed08: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED0Cu;
        goto label_14ed0c;
    }
    ctx->pc = 0x14ED04u;
    {
        const bool branch_taken_0x14ed04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED04u;
        // 0x14ed08: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed04) {
            ctx->pc = 0x14ED2Cu;
            goto label_14ed2c;
        }
    }
    ctx->pc = 0x14ED0Cu;
label_14ed0c:
    // 0x14ed0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_14ed10:
    if (ctx->pc == 0x14ED10u) {
        ctx->pc = 0x14ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED0Cu;
        // 0x14ed10: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED14u;
        goto label_14ed14;
    }
    ctx->pc = 0x14ED0Cu;
    {
        const bool branch_taken_0x14ed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED0Cu;
        // 0x14ed10: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed0c) {
            ctx->pc = 0x14ED30u;
            goto label_14ed30;
        }
    }
    ctx->pc = 0x14ED14u;
label_14ed14:
    // 0x14ed14: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x14ed14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14ed18:
    // 0x14ed18: 0x10000005  b           . + 4 + (0x5 << 2)
label_14ed1c:
    if (ctx->pc == 0x14ED1Cu) {
        ctx->pc = 0x14ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED18u;
        // 0x14ed1c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED20u;
        goto label_14ed20;
    }
    ctx->pc = 0x14ED18u;
    {
        const bool branch_taken_0x14ed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED18u;
        // 0x14ed1c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed18) {
            ctx->pc = 0x14ED30u;
            goto label_14ed30;
        }
    }
    ctx->pc = 0x14ED20u;
label_14ed20:
    // 0x14ed20: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x14ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_14ed24:
    // 0x14ed24: 0x10000002  b           . + 4 + (0x2 << 2)
label_14ed28:
    if (ctx->pc == 0x14ED28u) {
        ctx->pc = 0x14ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED24u;
        // 0x14ed28: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED2Cu;
        goto label_14ed2c;
    }
    ctx->pc = 0x14ED24u;
    {
        const bool branch_taken_0x14ed24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED24u;
        // 0x14ed28: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed24) {
            ctx->pc = 0x14ED30u;
            goto label_14ed30;
        }
    }
    ctx->pc = 0x14ED2Cu;
label_14ed2c:
    // 0x14ed2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14ed2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14ed30:
    // 0x14ed30: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x14ed30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_14ed34:
    // 0x14ed34: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x14ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_14ed38:
    // 0x14ed38: 0x5082000c  beql        $a0, $v0, . + 4 + (0xC << 2)
label_14ed3c:
    if (ctx->pc == 0x14ED3Cu) {
        ctx->pc = 0x14ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED38u;
        // 0x14ed3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED40u;
        goto label_14ed40;
    }
    ctx->pc = 0x14ED38u;
    {
        const bool branch_taken_0x14ed38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ed38) {
            ctx->pc = 0x14ED3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ED38u;
            // 0x14ed3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ED6Cu;
            goto label_14ed6c;
        }
    }
    ctx->pc = 0x14ED40u;
label_14ed40:
    // 0x14ed40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14ed40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14ed44:
    // 0x14ed44: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14ed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14ed48:
    // 0x14ed48: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14ed4c:
    // 0x14ed4c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x14ed4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_14ed50:
    // 0x14ed50: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_14ed54:
    if (ctx->pc == 0x14ED54u) {
        ctx->pc = 0x14ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED50u;
        // 0x14ed54: 0x2461021  addu        $v0, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED58u;
        goto label_14ed58;
    }
    ctx->pc = 0x14ED50u;
    {
        const bool branch_taken_0x14ed50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed50) {
            ctx->pc = 0x14ED54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ED50u;
            // 0x14ed54: 0x2461021  addu        $v0, $s2, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ED60u;
            goto label_14ed60;
        }
    }
    ctx->pc = 0x14ED58u;
label_14ed58:
    // 0x14ed58: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ed58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14ed5c:
    // 0x14ed5c: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x14ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_14ed60:
    // 0x14ed60: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x14ed60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14ed64:
    // 0x14ed64: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x14ed64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14ed68:
    // 0x14ed68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ed6c:
    // 0x14ed6c: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
label_14ed70:
    if (ctx->pc == 0x14ED70u) {
        ctx->pc = 0x14ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED6Cu;
        // 0x14ed70: 0x307600ff  andi        $s6, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED74u;
        goto label_14ed74;
    }
    ctx->pc = 0x14ED6Cu;
    {
        const bool branch_taken_0x14ed6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14ed6c) {
            ctx->pc = 0x14ED70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ED6Cu;
            // 0x14ed70: 0x307600ff  andi        $s6, $v1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ED94u;
            goto label_14ed94;
        }
    }
    ctx->pc = 0x14ED74u;
label_14ed74:
    // 0x14ed74: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x14ed74u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14ed78:
    // 0x14ed78: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x14ed78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_14ed7c:
    // 0x14ed7c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x14ed7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_14ed80:
    // 0x14ed80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ed80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14ed84:
    // 0x14ed84: 0xc0533bc  jal         func_14CEF0
label_14ed88:
    if (ctx->pc == 0x14ED88u) {
        ctx->pc = 0x14ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED84u;
        // 0x14ed88: 0x32e500ff  andi        $a1, $s7, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED8Cu;
        goto label_14ed8c;
    }
    ctx->pc = 0x14ED84u;
    SET_GPR_U32(ctx, 31, 0x14ED8Cu);
    ctx->pc = 0x14ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED84u;
    // 0x14ed88: 0x32e500ff  andi        $a1, $s7, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CEF0u, 0x14ED84u, 0x14ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED8Cu;
label_14ed8c:
    // 0x14ed8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_14ed90:
    if (ctx->pc == 0x14ED90u) {
        ctx->pc = 0x14ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED8Cu;
        // 0x14ed90: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED94u;
        goto label_14ed94;
    }
    ctx->pc = 0x14ED8Cu;
    {
        const bool branch_taken_0x14ed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED8Cu;
        // 0x14ed90: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed8c) {
            ctx->pc = 0x14EDACu;
            goto label_14edac;
        }
    }
    ctx->pc = 0x14ED94u;
label_14ed94:
    // 0x14ed94: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x14ed94u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_14ed98:
    // 0x14ed98: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x14ed98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_14ed9c:
    // 0x14ed9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14eda0:
    // 0x14eda0: 0xc0533cc  jal         func_14CF30
label_14eda4:
    if (ctx->pc == 0x14EDA4u) {
        ctx->pc = 0x14EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDA0u;
        // 0x14eda4: 0x32e500ff  andi        $a1, $s7, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EDA8u;
        goto label_14eda8;
    }
    ctx->pc = 0x14EDA0u;
    SET_GPR_U32(ctx, 31, 0x14EDA8u);
    ctx->pc = 0x14EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDA0u;
    // 0x14eda4: 0x32e500ff  andi        $a1, $s7, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF30u, 0x14EDA0u, 0x14EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDA8u;
label_14eda8:
    // 0x14eda8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x14eda8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14edac:
    // 0x14edac: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x14edacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_14edb0:
    // 0x14edb0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14edb4:
    // 0x14edb4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_14edb8:
    if (ctx->pc == 0x14EDB8u) {
        ctx->pc = 0x14EDBCu;
        goto label_14edbc;
    }
    ctx->pc = 0x14EDB4u;
    {
        const bool branch_taken_0x14edb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14edb4) {
            ctx->pc = 0x14EDC4u;
            goto label_14edc4;
        }
    }
    ctx->pc = 0x14EDBCu;
label_14edbc:
    // 0x14edbc: 0x10000528  b           . + 4 + (0x528 << 2)
label_14edc0:
    if (ctx->pc == 0x14EDC0u) {
        ctx->pc = 0x14EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDBCu;
        // 0x14edc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EDC4u;
        goto label_14edc4;
    }
    ctx->pc = 0x14EDBCu;
    {
        const bool branch_taken_0x14edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDBCu;
        // 0x14edc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14edbc) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14EDC4u;
label_14edc4:
    // 0x14edc4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
label_14edc8:
    // 0x14edc8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x14edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14edcc:
    // 0x14edcc: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x14edccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
label_14edd0:
    // 0x14edd0: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_14edd4:
    if (ctx->pc == 0x14EDD4u) {
        ctx->pc = 0x14EDD8u;
        goto label_14edd8;
    }
    ctx->pc = 0x14EDD0u;
    {
        const bool branch_taken_0x14edd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14edd0) {
            ctx->pc = 0x14EE48u;
            goto label_14ee48;
        }
    }
    ctx->pc = 0x14EDD8u;
label_14edd8:
    // 0x14edd8: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x14edd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_14eddc:
    // 0x14eddc: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_14ede0:
    if (ctx->pc == 0x14EDE0u) {
        ctx->pc = 0x14EDE4u;
        goto label_14ede4;
    }
    ctx->pc = 0x14EDDCu;
    {
        const bool branch_taken_0x14eddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eddc) {
            ctx->pc = 0x14EE48u;
            goto label_14ee48;
        }
    }
    ctx->pc = 0x14EDE4u;
label_14ede4:
    // 0x14ede4: 0x324700ff  andi        $a3, $s2, 0xFF
    ctx->pc = 0x14ede4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14ede8:
    // 0x14ede8: 0xf7082a  slt         $at, $a3, $s7
    ctx->pc = 0x14ede8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_14edec:
    // 0x14edec: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_14edf0:
    if (ctx->pc == 0x14EDF0u) {
        ctx->pc = 0x14EDF4u;
        goto label_14edf4;
    }
    ctx->pc = 0x14EDECu;
    {
        const bool branch_taken_0x14edec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14edec) {
            ctx->pc = 0x14EE48u;
            goto label_14ee48;
        }
    }
    ctx->pc = 0x14EDF4u;
label_14edf4:
    // 0x14edf4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_14edf8:
    // 0x14edf8: 0x26c60001  addiu       $a2, $s6, 0x1
    ctx->pc = 0x14edf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_14edfc:
    // 0x14edfc: 0x24845dc0  addiu       $a0, $a0, 0x5DC0
    ctx->pc = 0x14edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24000));
label_14ee00:
    // 0x14ee00: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x14ee00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_14ee04:
    // 0x14ee04: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x14ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_14ee08:
    // 0x14ee08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14ee0c:
    // 0x14ee0c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14ee10:
    // 0x14ee10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14ee14:
    // 0x14ee14: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x14ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14ee18:
    // 0x14ee18: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_14ee1c:
    // 0x14ee1c: 0x94634144  lhu         $v1, 0x4144($v1)
    ctx->pc = 0x14ee1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16708)));
label_14ee20:
    // 0x14ee20: 0x2c630605  sltiu       $v1, $v1, 0x605
    ctx->pc = 0x14ee20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1541) ? 1 : 0);
label_14ee24:
    // 0x14ee24: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_14ee28:
    if (ctx->pc == 0x14EE28u) {
        ctx->pc = 0x14EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE24u;
        // 0x14ee28: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EE2Cu;
        goto label_14ee2c;
    }
    ctx->pc = 0x14EE24u;
    {
        const bool branch_taken_0x14ee24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ee24) {
            ctx->pc = 0x14EE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EE24u;
            // 0x14ee28: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EE34u;
            goto label_14ee34;
        }
    }
    ctx->pc = 0x14EE2Cu;
label_14ee2c:
    // 0x14ee2c: 0x1000050c  b           . + 4 + (0x50C << 2)
label_14ee30:
    if (ctx->pc == 0x14EE30u) {
        ctx->pc = 0x14EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE2Cu;
        // 0x14ee30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EE34u;
        goto label_14ee34;
    }
    ctx->pc = 0x14EE2Cu;
    {
        const bool branch_taken_0x14ee2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE2Cu;
        // 0x14ee30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee2c) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14EE34u;
label_14ee34:
    // 0x14ee34: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x14ee34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14ee38:
    // 0x14ee38: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x14ee38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_14ee3c:
    // 0x14ee3c: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
label_14ee40:
    if (ctx->pc == 0x14EE40u) {
        ctx->pc = 0x14EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE3Cu;
        // 0x14ee40: 0x30e5ffff  andi        $a1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EE44u;
        goto label_14ee44;
    }
    ctx->pc = 0x14EE3Cu;
    {
        const bool branch_taken_0x14ee3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ee3c) {
            ctx->pc = 0x14EE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EE3Cu;
            // 0x14ee40: 0x30e5ffff  andi        $a1, $a3, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EE04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ee04;
        }
    }
    ctx->pc = 0x14EE44u;
label_14ee44:
    // 0x14ee44: 0x0  nop
    ctx->pc = 0x14ee44u;
    // NOP
label_14ee48:
    // 0x14ee48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14ee4c:
    // 0x14ee4c: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
label_14ee50:
    if (ctx->pc == 0x14EE50u) {
        ctx->pc = 0x14EE54u;
        goto label_14ee54;
    }
    ctx->pc = 0x14EE4Cu;
    {
        const bool branch_taken_0x14ee4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14ee4c) {
            ctx->pc = 0x14EEC0u;
            goto label_14eec0;
        }
    }
    ctx->pc = 0x14EE54u;
label_14ee54:
    // 0x14ee54: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x14ee54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_14ee58:
    // 0x14ee58: 0x16660019  bne         $s3, $a2, . + 4 + (0x19 << 2)
label_14ee5c:
    if (ctx->pc == 0x14EE5Cu) {
        ctx->pc = 0x14EE60u;
        goto label_14ee60;
    }
    ctx->pc = 0x14EE58u;
    {
        const bool branch_taken_0x14ee58 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 6));
        if (branch_taken_0x14ee58) {
            ctx->pc = 0x14EEC0u;
            goto label_14eec0;
        }
    }
    ctx->pc = 0x14EE60u;
label_14ee60:
    // 0x14ee60: 0x324700ff  andi        $a3, $s2, 0xFF
    ctx->pc = 0x14ee60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14ee64:
    // 0x14ee64: 0xf7082a  slt         $at, $a3, $s7
    ctx->pc = 0x14ee64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_14ee68:
    // 0x14ee68: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_14ee6c:
    if (ctx->pc == 0x14EE6Cu) {
        ctx->pc = 0x14EE70u;
        goto label_14ee70;
    }
    ctx->pc = 0x14EE68u;
    {
        const bool branch_taken_0x14ee68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee68) {
            ctx->pc = 0x14EEC0u;
            goto label_14eec0;
        }
    }
    ctx->pc = 0x14EE70u;
label_14ee70:
    // 0x14ee70: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14ee74:
    // 0x14ee74: 0x26c50001  addiu       $a1, $s6, 0x1
    ctx->pc = 0x14ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_14ee78:
    // 0x14ee78: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x14ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
label_14ee7c:
    // 0x14ee7c: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x14ee7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_14ee80:
    // 0x14ee80: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x14ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_14ee84:
    // 0x14ee84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14ee88:
    // 0x14ee88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14ee8c:
    // 0x14ee8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14ee90:
    // 0x14ee90: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x14ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_14ee94:
    // 0x14ee94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14ee98:
    // 0x14ee98: 0x90424144  lbu         $v0, 0x4144($v0)
    ctx->pc = 0x14ee98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16708)));
label_14ee9c:
    // 0x14ee9c: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
label_14eea0:
    if (ctx->pc == 0x14EEA0u) {
        ctx->pc = 0x14EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE9Cu;
        // 0x14eea0: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EEA4u;
        goto label_14eea4;
    }
    ctx->pc = 0x14EE9Cu;
    {
        const bool branch_taken_0x14ee9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x14ee9c) {
            ctx->pc = 0x14EEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EE9Cu;
            // 0x14eea0: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EEACu;
            goto label_14eeac;
        }
    }
    ctx->pc = 0x14EEA4u;
label_14eea4:
    // 0x14eea4: 0x100004ee  b           . + 4 + (0x4EE << 2)
label_14eea8:
    if (ctx->pc == 0x14EEA8u) {
        ctx->pc = 0x14EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEA4u;
        // 0x14eea8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EEACu;
        goto label_14eeac;
    }
    ctx->pc = 0x14EEA4u;
    {
        const bool branch_taken_0x14eea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEA4u;
        // 0x14eea8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eea4) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14EEACu;
label_14eeac:
    // 0x14eeac: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x14eeacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14eeb0:
    // 0x14eeb0: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x14eeb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_14eeb4:
    // 0x14eeb4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_14eeb8:
    if (ctx->pc == 0x14EEB8u) {
        ctx->pc = 0x14EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEB4u;
        // 0x14eeb8: 0x30e4ffff  andi        $a0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EEBCu;
        goto label_14eebc;
    }
    ctx->pc = 0x14EEB4u;
    {
        const bool branch_taken_0x14eeb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eeb4) {
            ctx->pc = 0x14EEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EEB4u;
            // 0x14eeb8: 0x30e4ffff  andi        $a0, $a3, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EE80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ee80;
        }
    }
    ctx->pc = 0x14EEBCu;
label_14eebc:
    // 0x14eebc: 0x0  nop
    ctx->pc = 0x14eebcu;
    // NOP
label_14eec0:
    // 0x14eec0: 0x328600ff  andi        $a2, $s4, 0xFF
    ctx->pc = 0x14eec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_14eec4:
    // 0x14eec4: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x14eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_14eec8:
    // 0x14eec8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14eecc:
    // 0x14eecc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_14eed0:
    // 0x14eed0: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x14eed0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_14eed4:
    // 0x14eed4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14eed8:
    // 0x14eed8: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14eedc:
    // 0x14eedc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_14eee0:
    // 0x14eee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14eee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14eee4:
    // 0x14eee4: 0x391c0  sll         $s2, $v1, 7
    ctx->pc = 0x14eee4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14eee8:
    // 0x14eee8: 0xc052a80  jal         func_14AA00
label_14eeec:
    if (ctx->pc == 0x14EEECu) {
        ctx->pc = 0x14EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEE8u;
        // 0x14eeec: 0x52b021  addu        $s6, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EEF0u;
        goto label_14eef0;
    }
    ctx->pc = 0x14EEE8u;
    SET_GPR_U32(ctx, 31, 0x14EEF0u);
    ctx->pc = 0x14EEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EEE8u;
    // 0x14eeec: 0x52b021  addu        $s6, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA00u, 0x14EEE8u, 0x14EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EEF0u;
label_14eef0:
    // 0x14eef0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_14eef4:
    // 0x14eef4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14eef8:
    // 0x14eef8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14eefc:
    // 0x14eefc: 0x24635dc4  addiu       $v1, $v1, 0x5DC4
    ctx->pc = 0x14eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24004));
label_14ef00:
    // 0x14ef00: 0x24429f10  addiu       $v0, $v0, -0x60F0
    ctx->pc = 0x14ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942480));
label_14ef04:
    // 0x14ef04: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x14ef04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_14ef08:
    // 0x14ef08: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14ef0c:
    // 0x14ef0c: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x14ef0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_14ef10:
    // 0x14ef10: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x14ef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_14ef14:
    // 0x14ef14: 0x729821  addu        $s3, $v1, $s2
    ctx->pc = 0x14ef14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14ef18:
    // 0x14ef18: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14ef1c:
    // 0x14ef1c: 0x24429f14  addiu       $v0, $v0, -0x60EC
    ctx->pc = 0x14ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942484));
label_14ef20:
    // 0x14ef20: 0x52b821  addu        $s7, $v0, $s2
    ctx->pc = 0x14ef20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14ef24:
    // 0x14ef24: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x14ef24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_14ef28:
    // 0x14ef28: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x14ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_14ef2c:
    // 0x14ef2c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x14ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_14ef30:
    // 0x14ef30: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x14ef30u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
label_14ef34:
    // 0x14ef34: 0xc06e4a0  jal         func_1B9280
label_14ef38:
    if (ctx->pc == 0x14EF38u) {
        ctx->pc = 0x14EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF34u;
        // 0x14ef38: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF3Cu;
        goto label_14ef3c;
    }
    ctx->pc = 0x14EF34u;
    SET_GPR_U32(ctx, 31, 0x14EF3Cu);
    ctx->pc = 0x14EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF34u;
    // 0x14ef38: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14EF34u, 0x14EF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF3Cu;
label_14ef3c:
    // 0x14ef3c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14ef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14ef40:
    // 0x14ef40: 0xc06d28c  jal         func_1B4A30
label_14ef44:
    if (ctx->pc == 0x14EF44u) {
        ctx->pc = 0x14EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF40u;
        // 0x14ef44: 0x92e50000  lbu         $a1, 0x0($s7) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF48u;
        goto label_14ef48;
    }
    ctx->pc = 0x14EF40u;
    SET_GPR_U32(ctx, 31, 0x14EF48u);
    ctx->pc = 0x14EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF40u;
    // 0x14ef44: 0x92e50000  lbu         $a1, 0x0($s7) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14EF40u, 0x14EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF48u;
label_14ef48:
    // 0x14ef48: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14ef4c:
    // 0x14ef4c: 0xc06e822  jal         func_1BA088
label_14ef50:
    if (ctx->pc == 0x14EF50u) {
        ctx->pc = 0x14EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF4Cu;
        // 0x14ef50: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF54u;
        goto label_14ef54;
    }
    ctx->pc = 0x14EF4Cu;
    SET_GPR_U32(ctx, 31, 0x14EF54u);
    ctx->pc = 0x14EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF4Cu;
    // 0x14ef50: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x14EF4Cu, 0x14EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF54u;
label_14ef54:
    // 0x14ef54: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14ef58:
    // 0x14ef58: 0xc06d28c  jal         func_1B4A30
label_14ef5c:
    if (ctx->pc == 0x14EF5Cu) {
        ctx->pc = 0x14EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF58u;
        // 0x14ef5c: 0x92e50000  lbu         $a1, 0x0($s7) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF60u;
        goto label_14ef60;
    }
    ctx->pc = 0x14EF58u;
    SET_GPR_U32(ctx, 31, 0x14EF60u);
    ctx->pc = 0x14EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF58u;
    // 0x14ef5c: 0x92e50000  lbu         $a1, 0x0($s7) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14EF58u, 0x14EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF60u;
label_14ef60:
    // 0x14ef60: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x14ef60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_14ef64:
    // 0x14ef64: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14ef68:
    // 0x14ef68: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14ef68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14ef6c:
    // 0x14ef6c: 0xc06e75a  jal         func_1B9D68
label_14ef70:
    if (ctx->pc == 0x14EF70u) {
        ctx->pc = 0x14EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF6Cu;
        // 0x14ef70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF74u;
        goto label_14ef74;
    }
    ctx->pc = 0x14EF6Cu;
    SET_GPR_U32(ctx, 31, 0x14EF74u);
    ctx->pc = 0x14EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF6Cu;
    // 0x14ef70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x14EF6Cu, 0x14EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF74u;
label_14ef74:
    // 0x14ef74: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14ef78:
    // 0x14ef78: 0xc06d28c  jal         func_1B4A30
label_14ef7c:
    if (ctx->pc == 0x14EF7Cu) {
        ctx->pc = 0x14EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF78u;
        // 0x14ef7c: 0x92e50000  lbu         $a1, 0x0($s7) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF80u;
        goto label_14ef80;
    }
    ctx->pc = 0x14EF78u;
    SET_GPR_U32(ctx, 31, 0x14EF80u);
    ctx->pc = 0x14EF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF78u;
    // 0x14ef7c: 0x92e50000  lbu         $a1, 0x0($s7) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14EF78u, 0x14EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF80u;
label_14ef80:
    // 0x14ef80: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x14ef80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_14ef84:
    // 0x14ef84: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x14ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_14ef88:
    // 0x14ef88: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14ef8c:
    // 0x14ef8c: 0x24a5f2c0  addiu       $a1, $a1, -0xD40
    ctx->pc = 0x14ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
label_14ef90:
    // 0x14ef90: 0xc06f098  jal         func_1BC260
label_14ef94:
    if (ctx->pc == 0x14EF94u) {
        ctx->pc = 0x14EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF90u;
        // 0x14ef94: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EF98u;
        goto label_14ef98;
    }
    ctx->pc = 0x14EF90u;
    SET_GPR_U32(ctx, 31, 0x14EF98u);
    ctx->pc = 0x14EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF90u;
    // 0x14ef94: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC260u, 0x14EF90u, 0x14EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF98u;
label_14ef98:
    // 0x14ef98: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14ef9c:
    // 0x14ef9c: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x14ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14efa0:
    // 0x14efa0: 0x24429f00  addiu       $v0, $v0, -0x6100
    ctx->pc = 0x14efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
label_14efa4:
    // 0x14efa4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14efa8:
    // 0x14efa8: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
label_14efac:
    if (ctx->pc == 0x14EFACu) {
        ctx->pc = 0x14EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFA8u;
        // 0x14efac: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EFB0u;
        goto label_14efb0;
    }
    ctx->pc = 0x14EFA8u;
    {
        const bool branch_taken_0x14efa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFA8u;
        // 0x14efac: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efa8) {
            ctx->pc = 0x14F04Cu;
            goto label_14f04c;
        }
    }
    ctx->pc = 0x14EFB0u;
label_14efb0:
    // 0x14efb0: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x14efb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_14efb4:
    // 0x14efb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14efb8:
    // 0x14efb8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_14efbc:
    if (ctx->pc == 0x14EFBCu) {
        ctx->pc = 0x14EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFB8u;
        // 0x14efbc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EFC0u;
        goto label_14efc0;
    }
    ctx->pc = 0x14EFB8u;
    {
        const bool branch_taken_0x14efb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14efb8) {
            ctx->pc = 0x14EFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EFB8u;
            // 0x14efbc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EFC8u;
            goto label_14efc8;
        }
    }
    ctx->pc = 0x14EFC0u;
label_14efc0:
    // 0x14efc0: 0x10000011  b           . + 4 + (0x11 << 2)
label_14efc4:
    if (ctx->pc == 0x14EFC4u) {
        ctx->pc = 0x14EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFC0u;
        // 0x14efc4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EFC8u;
        goto label_14efc8;
    }
    ctx->pc = 0x14EFC0u;
    {
        const bool branch_taken_0x14efc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFC0u;
        // 0x14efc4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efc0) {
            ctx->pc = 0x14F008u;
            goto label_14f008;
        }
    }
    ctx->pc = 0x14EFC8u;
label_14efc8:
    // 0x14efc8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14efc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14efcc:
    // 0x14efcc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_14efd0:
    if (ctx->pc == 0x14EFD0u) {
        ctx->pc = 0x14EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFCCu;
        // 0x14efd0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EFD4u;
        goto label_14efd4;
    }
    ctx->pc = 0x14EFCCu;
    {
        const bool branch_taken_0x14efcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14efcc) {
            ctx->pc = 0x14EFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EFCCu;
            // 0x14efd0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EFE8u;
            goto label_14efe8;
        }
    }
    ctx->pc = 0x14EFD4u;
label_14efd4:
    // 0x14efd4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14efd8:
    // 0x14efd8: 0x24429f1c  addiu       $v0, $v0, -0x60E4
    ctx->pc = 0x14efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942492));
label_14efdc:
    // 0x14efdc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14efe0:
    // 0x14efe0: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x14efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_14efe4:
    // 0x14efe4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14efe8:
    // 0x14efe8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14efe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14efec:
    // 0x14efec: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_14eff0:
    if (ctx->pc == 0x14EFF0u) {
        ctx->pc = 0x14EFF4u;
        goto label_14eff4;
    }
    ctx->pc = 0x14EFECu;
    {
        const bool branch_taken_0x14efec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14efec) {
            ctx->pc = 0x14F04Cu;
            goto label_14f04c;
        }
    }
    ctx->pc = 0x14EFF4u;
label_14eff4:
    // 0x14eff4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14eff8:
    // 0x14eff8: 0x24429f1c  addiu       $v0, $v0, -0x60E4
    ctx->pc = 0x14eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942492));
label_14effc:
    // 0x14effc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f000:
    // 0x14f000: 0x10000012  b           . + 4 + (0x12 << 2)
label_14f004:
    if (ctx->pc == 0x14F004u) {
        ctx->pc = 0x14F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F000u;
        // 0x14f004: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F008u;
        goto label_14f008;
    }
    ctx->pc = 0x14F000u;
    {
        const bool branch_taken_0x14f000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F000u;
        // 0x14f004: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f000) {
            ctx->pc = 0x14F04Cu;
            goto label_14f04c;
        }
    }
    ctx->pc = 0x14F008u;
label_14f008:
    // 0x14f008: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14f008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14f00c:
    // 0x14f00c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_14f010:
    if (ctx->pc == 0x14F010u) {
        ctx->pc = 0x14F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F00Cu;
        // 0x14f010: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F014u;
        goto label_14f014;
    }
    ctx->pc = 0x14F00Cu;
    {
        const bool branch_taken_0x14f00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f00c) {
            ctx->pc = 0x14F010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F00Cu;
            // 0x14f010: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F02Cu;
            goto label_14f02c;
        }
    }
    ctx->pc = 0x14F014u;
label_14f014:
    // 0x14f014: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f018:
    // 0x14f018: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x14f018u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_14f01c:
    // 0x14f01c: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x14f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_14f020:
    // 0x14f020: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f024:
    // 0x14f024: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x14f024u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_14f028:
    // 0x14f028: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14f028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14f02c:
    // 0x14f02c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14f02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14f030:
    // 0x14f030: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14f034:
    if (ctx->pc == 0x14F034u) {
        ctx->pc = 0x14F038u;
        goto label_14f038;
    }
    ctx->pc = 0x14F030u;
    {
        const bool branch_taken_0x14f030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f030) {
            ctx->pc = 0x14F04Cu;
            goto label_14f04c;
        }
    }
    ctx->pc = 0x14F038u;
label_14f038:
    // 0x14f038: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f03c:
    // 0x14f03c: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x14f03cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_14f040:
    // 0x14f040: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x14f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_14f044:
    // 0x14f044: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f048:
    // 0x14f048: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x14f048u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_14f04c:
    // 0x14f04c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14f050:
    // 0x14f050: 0x14163c  dsll32      $v0, $s4, 24
    ctx->pc = 0x14f050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
label_14f054:
    // 0x14f054: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x14f054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
label_14f058:
    // 0x14f058: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x14f058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_14f05c:
    // 0x14f05c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f060:
    // 0x14f060: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x14f060u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_14f064:
    // 0x14f064: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f068:
    // 0x14f068: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x14f068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_14f06c:
    // 0x14f06c: 0x24639f04  addiu       $v1, $v1, -0x60FC
    ctx->pc = 0x14f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942468));
label_14f070:
    // 0x14f070: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x14f070u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_14f074:
    // 0x14f074: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14f074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f078:
    // 0x14f078: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14f078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_14f07c:
    // 0x14f07c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f080:
    // 0x14f080: 0x24639f0a  addiu       $v1, $v1, -0x60F6
    ctx->pc = 0x14f080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942474));
label_14f084:
    // 0x14f084: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14f084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f088:
    // 0x14f088: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f08c:
    // 0x14f08c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x14f08cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_14f090:
    // 0x14f090: 0x24639f16  addiu       $v1, $v1, -0x60EA
    ctx->pc = 0x14f090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942486));
label_14f094:
    // 0x14f094: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14f094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f098:
    // 0x14f098: 0xa07e0000  sb          $fp, 0x0($v1)
    ctx->pc = 0x14f098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 30));
label_14f09c:
    // 0x14f09c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f0a0:
    // 0x14f0a0: 0x24639f18  addiu       $v1, $v1, -0x60E8
    ctx->pc = 0x14f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942488));
label_14f0a4:
    // 0x14f0a4: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f0a8:
    // 0x14f0a8: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f0ac:
    // 0x14f0ac: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x14f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_14f0b0:
    // 0x14f0b0: 0x24639f15  addiu       $v1, $v1, -0x60EB
    ctx->pc = 0x14f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942485));
label_14f0b4:
    // 0x14f0b4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f0b8:
    // 0x14f0b8: 0x10000469  b           . + 4 + (0x469 << 2)
label_14f0bc:
    if (ctx->pc == 0x14F0BCu) {
        ctx->pc = 0x14F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0B8u;
        // 0x14f0bc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F0C0u;
        goto label_14f0c0;
    }
    ctx->pc = 0x14F0B8u;
    {
        const bool branch_taken_0x14f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0B8u;
        // 0x14f0bc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0b8) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F0C0u;
label_14f0c0:
    // 0x14f0c0: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x14f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14f0c4:
    // 0x14f0c4: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x14f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_14f0c8:
    // 0x14f0c8: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x14f0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_14f0cc:
    // 0x14f0cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14f0d0:
    // 0x14f0d0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14f0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f0d4:
    // 0x14f0d4: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x14f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_14f0d8:
    // 0x14f0d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14f0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f0dc:
    // 0x14f0dc: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x14f0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14f0e0:
    // 0x14f0e0: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x14f0e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_14f0e4:
    // 0x14f0e4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_14f0e8:
    if (ctx->pc == 0x14F0E8u) {
        ctx->pc = 0x14F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0E4u;
        // 0x14f0e8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F0ECu;
        goto label_14f0ec;
    }
    ctx->pc = 0x14F0E4u;
    {
        const bool branch_taken_0x14f0e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0E4u;
        // 0x14f0e8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0e4) {
            ctx->pc = 0x14F138u;
            goto label_14f138;
        }
    }
    ctx->pc = 0x14F0ECu;
label_14f0ec:
    // 0x14f0ec: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14f0f0:
    // 0x14f0f0: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x14f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
label_14f0f4:
    // 0x14f0f4: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x14f0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_14f0f8:
    // 0x14f0f8: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x14f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_14f0fc:
    // 0x14f0fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_14f100:
    // 0x14f100: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_14f104:
    // 0x14f104: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14f104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_14f108:
    // 0x14f108: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x14f108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_14f10c:
    // 0x14f10c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14f110:
    // 0x14f110: 0x90424144  lbu         $v0, 0x4144($v0)
    ctx->pc = 0x14f110u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16708)));
label_14f114:
    // 0x14f114: 0x56620003  bnel        $s3, $v0, . + 4 + (0x3 << 2)
label_14f118:
    if (ctx->pc == 0x14F118u) {
        ctx->pc = 0x14F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F114u;
        // 0x14f118: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F11Cu;
        goto label_14f11c;
    }
    ctx->pc = 0x14F114u;
    {
        const bool branch_taken_0x14f114 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f114) {
            ctx->pc = 0x14F118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F114u;
            // 0x14f118: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F124u;
            goto label_14f124;
        }
    }
    ctx->pc = 0x14F11Cu;
label_14f11c:
    // 0x14f11c: 0x10000450  b           . + 4 + (0x450 << 2)
label_14f120:
    if (ctx->pc == 0x14F120u) {
        ctx->pc = 0x14F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F11Cu;
        // 0x14f120: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F124u;
        goto label_14f124;
    }
    ctx->pc = 0x14F11Cu;
    {
        const bool branch_taken_0x14f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F11Cu;
        // 0x14f120: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f11c) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F124u;
label_14f124:
    // 0x14f124: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x14f124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14f128:
    // 0x14f128: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x14f128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_14f12c:
    // 0x14f12c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_14f130:
    if (ctx->pc == 0x14F130u) {
        ctx->pc = 0x14F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F12Cu;
        // 0x14f130: 0x30e5ffff  andi        $a1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F134u;
        goto label_14f134;
    }
    ctx->pc = 0x14F12Cu;
    {
        const bool branch_taken_0x14f12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f12c) {
            ctx->pc = 0x14F130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F12Cu;
            // 0x14f130: 0x30e5ffff  andi        $a1, $a3, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f0f8;
        }
    }
    ctx->pc = 0x14F134u;
label_14f134:
    // 0x14f134: 0x0  nop
    ctx->pc = 0x14f134u;
    // NOP
label_14f138:
    // 0x14f138: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x14f138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_14f13c:
    // 0x14f13c: 0xc053388  jal         func_14CE20
label_14f140:
    if (ctx->pc == 0x14F140u) {
        ctx->pc = 0x14F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F13Cu;
        // 0x14f140: 0x92060003  lbu         $a2, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F144u;
        goto label_14f144;
    }
    ctx->pc = 0x14F13Cu;
    SET_GPR_U32(ctx, 31, 0x14F144u);
    ctx->pc = 0x14F140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F13Cu;
    // 0x14f140: 0x92060003  lbu         $a2, 0x3($s0) (Delay Slot)
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CE20u, 0x14F13Cu, 0x14F144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F144u;
label_14f144:
    // 0x14f144: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x14f144u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f148:
    // 0x14f148: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14f148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14f14c:
    // 0x14f14c: 0x5282001a  beql        $s4, $v0, . + 4 + (0x1A << 2)
label_14f150:
    if (ctx->pc == 0x14F150u) {
        ctx->pc = 0x14F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F14Cu;
        // 0x14f150: 0x92030005  lbu         $v1, 0x5($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F154u;
        goto label_14f154;
    }
    ctx->pc = 0x14F14Cu;
    {
        const bool branch_taken_0x14f14c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f14c) {
            ctx->pc = 0x14F150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F14Cu;
            // 0x14f150: 0x92030005  lbu         $v1, 0x5($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F1B8u;
            goto label_14f1b8;
        }
    }
    ctx->pc = 0x14F154u;
label_14f154:
    // 0x14f154: 0x10000082  b           . + 4 + (0x82 << 2)
label_14f158:
    if (ctx->pc == 0x14F158u) {
        ctx->pc = 0x14F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F154u;
        // 0x14f158: 0x328600ff  andi        $a2, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F15Cu;
        goto label_14f15c;
    }
    ctx->pc = 0x14F154u;
    {
        const bool branch_taken_0x14f154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F154u;
        // 0x14f158: 0x328600ff  andi        $a2, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f154) {
            ctx->pc = 0x14F360u;
            goto label_14f360;
        }
    }
    ctx->pc = 0x14F15Cu;
label_14f15c:
    // 0x14f15c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x14f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_14f160:
    // 0x14f160: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
label_14f164:
    if (ctx->pc == 0x14F164u) {
        ctx->pc = 0x14F168u;
        goto label_14f168;
    }
    ctx->pc = 0x14F160u;
    {
        const bool branch_taken_0x14f160 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f160) {
            ctx->pc = 0x14F1B4u;
            goto label_14f1b4;
        }
    }
    ctx->pc = 0x14F168u;
label_14f168:
    // 0x14f168: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x14f168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_14f16c:
    // 0x14f16c: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
label_14f170:
    if (ctx->pc == 0x14F170u) {
        ctx->pc = 0x14F174u;
        goto label_14f174;
    }
    ctx->pc = 0x14F16Cu;
    {
        const bool branch_taken_0x14f16c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f16c) {
            ctx->pc = 0x14F1B4u;
            goto label_14f1b4;
        }
    }
    ctx->pc = 0x14F174u;
label_14f174:
    // 0x14f174: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x14f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_14f178:
    // 0x14f178: 0x1262000e  beq         $s3, $v0, . + 4 + (0xE << 2)
label_14f17c:
    if (ctx->pc == 0x14F17Cu) {
        ctx->pc = 0x14F180u;
        goto label_14f180;
    }
    ctx->pc = 0x14F178u;
    {
        const bool branch_taken_0x14f178 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f178) {
            ctx->pc = 0x14F1B4u;
            goto label_14f1b4;
        }
    }
    ctx->pc = 0x14F180u;
label_14f180:
    // 0x14f180: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x14f180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_14f184:
    // 0x14f184: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
label_14f188:
    if (ctx->pc == 0x14F188u) {
        ctx->pc = 0x14F18Cu;
        goto label_14f18c;
    }
    ctx->pc = 0x14F184u;
    {
        const bool branch_taken_0x14f184 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f184) {
            ctx->pc = 0x14F1B4u;
            goto label_14f1b4;
        }
    }
    ctx->pc = 0x14F18Cu;
label_14f18c:
    // 0x14f18c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_14f190:
    // 0x14f190: 0x90425d18  lbu         $v0, 0x5D18($v0)
    ctx->pc = 0x14f190u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23832)));
label_14f194:
    // 0x14f194: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_14f198:
    if (ctx->pc == 0x14F198u) {
        ctx->pc = 0x14F19Cu;
        goto label_14f19c;
    }
    ctx->pc = 0x14F194u;
    {
        const bool branch_taken_0x14f194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f194) {
            ctx->pc = 0x14F1B4u;
            goto label_14f1b4;
        }
    }
    ctx->pc = 0x14F19Cu;
label_14f19c:
    // 0x14f19c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_14f1a0:
    // 0x14f1a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14f1a4:
    // 0x14f1a4: 0xc04a12a  jal         func_1284A8
label_14f1a8:
    if (ctx->pc == 0x14F1A8u) {
        ctx->pc = 0x14F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1A4u;
        // 0x14f1a8: 0x2484d020  addiu       $a0, $a0, -0x2FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1ACu;
        goto label_14f1ac;
    }
    ctx->pc = 0x14F1A4u;
    SET_GPR_U32(ctx, 31, 0x14F1ACu);
    ctx->pc = 0x14F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1A4u;
    // 0x14f1a8: 0x2484d020  addiu       $a0, $a0, -0x2FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14F1A4u, 0x14F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1ACu;
label_14f1ac:
    // 0x14f1ac: 0x1000042c  b           . + 4 + (0x42C << 2)
label_14f1b0:
    if (ctx->pc == 0x14F1B0u) {
        ctx->pc = 0x14F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1ACu;
        // 0x14f1b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1B4u;
        goto label_14f1b4;
    }
    ctx->pc = 0x14F1ACu;
    {
        const bool branch_taken_0x14f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1ACu;
        // 0x14f1b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1ac) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F1B4u;
label_14f1b4:
    // 0x14f1b4: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x14f1b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_14f1b8:
    // 0x14f1b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14f1bc:
    // 0x14f1bc: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x14f1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_14f1c0:
    // 0x14f1c0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x14f1c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_14f1c4:
    // 0x14f1c4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x14f1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_14f1c8:
    // 0x14f1c8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_14f1cc:
    if (ctx->pc == 0x14F1CCu) {
        ctx->pc = 0x14F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1C8u;
        // 0x14f1cc: 0x64040008  daddiu      $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1D0u;
        goto label_14f1d0;
    }
    ctx->pc = 0x14F1C8u;
    {
        const bool branch_taken_0x14f1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1C8u;
        // 0x14f1cc: 0x64040008  daddiu      $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1c8) {
            ctx->pc = 0x14F1FCu;
            goto label_14f1fc;
        }
    }
    ctx->pc = 0x14F1D0u;
label_14f1d0:
    // 0x14f1d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f1d4:
    // 0x14f1d4: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_14f1d8:
    if (ctx->pc == 0x14F1D8u) {
        ctx->pc = 0x14F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1D4u;
        // 0x14f1d8: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1DCu;
        goto label_14f1dc;
    }
    ctx->pc = 0x14F1D4u;
    {
        const bool branch_taken_0x14f1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f1d4) {
            ctx->pc = 0x14F1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F1D4u;
            // 0x14f1d8: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F1F4u;
            goto label_14f1f4;
        }
    }
    ctx->pc = 0x14F1DCu;
label_14f1dc:
    // 0x14f1dc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_14f1e0:
    if (ctx->pc == 0x14F1E0u) {
        ctx->pc = 0x14F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1DCu;
        // 0x14f1e0: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1E4u;
        goto label_14f1e4;
    }
    ctx->pc = 0x14F1DCu;
    {
        const bool branch_taken_0x14f1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f1dc) {
            ctx->pc = 0x14F1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F1DCu;
            // 0x14f1e0: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F1ECu;
            goto label_14f1ec;
        }
    }
    ctx->pc = 0x14F1E4u;
label_14f1e4:
    // 0x14f1e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_14f1e8:
    if (ctx->pc == 0x14F1E8u) {
        ctx->pc = 0x14F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1E4u;
        // 0x14f1e8: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1ECu;
        goto label_14f1ec;
    }
    ctx->pc = 0x14F1E4u;
    {
        const bool branch_taken_0x14f1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1E4u;
        // 0x14f1e8: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1e4) {
            ctx->pc = 0x14F208u;
            goto label_14f208;
        }
    }
    ctx->pc = 0x14F1ECu;
label_14f1ec:
    // 0x14f1ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_14f1f0:
    if (ctx->pc == 0x14F1F0u) {
        ctx->pc = 0x14F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1ECu;
        // 0x14f1f0: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1F4u;
        goto label_14f1f4;
    }
    ctx->pc = 0x14F1ECu;
    {
        const bool branch_taken_0x14f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1ECu;
        // 0x14f1f0: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1ec) {
            ctx->pc = 0x14F20Cu;
            goto label_14f20c;
        }
    }
    ctx->pc = 0x14F1F4u;
label_14f1f4:
    // 0x14f1f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_14f1f8:
    if (ctx->pc == 0x14F1F8u) {
        ctx->pc = 0x14F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1F4u;
        // 0x14f1f8: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F1FCu;
        goto label_14f1fc;
    }
    ctx->pc = 0x14F1F4u;
    {
        const bool branch_taken_0x14f1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1F4u;
        // 0x14f1f8: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1f4) {
            ctx->pc = 0x14F20Cu;
            goto label_14f20c;
        }
    }
    ctx->pc = 0x14F1FCu;
label_14f1fc:
    // 0x14f1fc: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x14f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_14f200:
    // 0x14f200: 0x10000002  b           . + 4 + (0x2 << 2)
label_14f204:
    if (ctx->pc == 0x14F204u) {
        ctx->pc = 0x14F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F200u;
        // 0x14f204: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F208u;
        goto label_14f208;
    }
    ctx->pc = 0x14F200u;
    {
        const bool branch_taken_0x14f200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F200u;
        // 0x14f204: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f200) {
            ctx->pc = 0x14F20Cu;
            goto label_14f20c;
        }
    }
    ctx->pc = 0x14F208u;
label_14f208:
    // 0x14f208: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14f208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f20c:
    // 0x14f20c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x14f20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_14f210:
    // 0x14f210: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x14f210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_14f214:
    // 0x14f214: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_14f218:
    if (ctx->pc == 0x14F218u) {
        ctx->pc = 0x14F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F214u;
        // 0x14f218: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F21Cu;
        goto label_14f21c;
    }
    ctx->pc = 0x14F214u;
    {
        const bool branch_taken_0x14f214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f214) {
            ctx->pc = 0x14F218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F214u;
            // 0x14f218: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F244u;
            goto label_14f244;
        }
    }
    ctx->pc = 0x14F21Cu;
label_14f21c:
    // 0x14f21c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x14f21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_14f220:
    // 0x14f220: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_14f224:
    // 0x14f224: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x14f224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_14f228:
    // 0x14f228: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_14f22c:
    if (ctx->pc == 0x14F22Cu) {
        ctx->pc = 0x14F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F228u;
        // 0x14f22c: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F230u;
        goto label_14f230;
    }
    ctx->pc = 0x14F228u;
    {
        const bool branch_taken_0x14f228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f228) {
            ctx->pc = 0x14F22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F228u;
            // 0x14f22c: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F238u;
            goto label_14f238;
        }
    }
    ctx->pc = 0x14F230u;
label_14f230:
    // 0x14f230: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x14f230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f234:
    // 0x14f234: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x14f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_14f238:
    // 0x14f238: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14f238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f23c:
    // 0x14f23c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14f23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14f240:
    // 0x14f240: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x14f240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_14f244:
    // 0x14f244: 0x5262000b  beql        $s3, $v0, . + 4 + (0xB << 2)
label_14f248:
    if (ctx->pc == 0x14F248u) {
        ctx->pc = 0x14F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F244u;
        // 0x14f248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F24Cu;
        goto label_14f24c;
    }
    ctx->pc = 0x14F244u;
    {
        const bool branch_taken_0x14f244 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f244) {
            ctx->pc = 0x14F248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F244u;
            // 0x14f248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F274u;
            goto label_14f274;
        }
    }
    ctx->pc = 0x14F24Cu;
label_14f24c:
    // 0x14f24c: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_14f250:
    // 0x14f250: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_14f254:
    if (ctx->pc == 0x14F254u) {
        ctx->pc = 0x14F258u;
        goto label_14f258;
    }
    ctx->pc = 0x14F250u;
    {
        const bool branch_taken_0x14f250 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f250) {
            ctx->pc = 0x14F270u;
            goto label_14f270;
        }
    }
    ctx->pc = 0x14F258u;
label_14f258:
    // 0x14f258: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x14f258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_14f25c:
    // 0x14f25c: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_14f260:
    if (ctx->pc == 0x14F260u) {
        ctx->pc = 0x14F264u;
        goto label_14f264;
    }
    ctx->pc = 0x14F25Cu;
    {
        const bool branch_taken_0x14f25c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f25c) {
            ctx->pc = 0x14F270u;
            goto label_14f270;
        }
    }
    ctx->pc = 0x14F264u;
label_14f264:
    // 0x14f264: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x14f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_14f268:
    // 0x14f268: 0x56620004  bnel        $s3, $v0, . + 4 + (0x4 << 2)
label_14f26c:
    if (ctx->pc == 0x14F26Cu) {
        ctx->pc = 0x14F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F268u;
        // 0x14f26c: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F270u;
        goto label_14f270;
    }
    ctx->pc = 0x14F268u;
    {
        const bool branch_taken_0x14f268 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f268) {
            ctx->pc = 0x14F26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F268u;
            // 0x14f26c: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F27Cu;
            goto label_14f27c;
        }
    }
    ctx->pc = 0x14F270u;
label_14f270:
    // 0x14f270: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14f270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f274:
    // 0x14f274: 0x6406000c  daddiu      $a2, $zero, 0xC
    ctx->pc = 0x14f274u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
label_14f278:
    // 0x14f278: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x14f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_14f27c:
    // 0x14f27c: 0x5662000a  bnel        $s3, $v0, . + 4 + (0xA << 2)
label_14f280:
    if (ctx->pc == 0x14F280u) {
        ctx->pc = 0x14F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F27Cu;
        // 0x14f280: 0x30c200ff  andi        $v0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F284u;
        goto label_14f284;
    }
    ctx->pc = 0x14F27Cu;
    {
        const bool branch_taken_0x14f27c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f27c) {
            ctx->pc = 0x14F280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F27Cu;
            // 0x14f280: 0x30c200ff  andi        $v0, $a2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F2A8u;
            goto label_14f2a8;
        }
    }
    ctx->pc = 0x14F284u;
label_14f284:
    // 0x14f284: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14f284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_14f288:
    // 0x14f288: 0x90425d10  lbu         $v0, 0x5D10($v0)
    ctx->pc = 0x14f288u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23824)));
label_14f28c:
    // 0x14f28c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_14f290:
    if (ctx->pc == 0x14F290u) {
        ctx->pc = 0x14F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F28Cu;
        // 0x14f290: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F294u;
        goto label_14f294;
    }
    ctx->pc = 0x14F28Cu;
    {
        const bool branch_taken_0x14f28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f28c) {
            ctx->pc = 0x14F290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F28Cu;
            // 0x14f290: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F29Cu;
            goto label_14f29c;
        }
    }
    ctx->pc = 0x14F294u;
label_14f294:
    // 0x14f294: 0x100003f2  b           . + 4 + (0x3F2 << 2)
label_14f298:
    if (ctx->pc == 0x14F298u) {
        ctx->pc = 0x14F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F294u;
        // 0x14f298: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F29Cu;
        goto label_14f29c;
    }
    ctx->pc = 0x14F294u;
    {
        const bool branch_taken_0x14f294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F294u;
        // 0x14f298: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f294) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F29Cu;
label_14f29c:
    // 0x14f29c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_14f2a0:
    // 0x14f2a0: 0xa0435d10  sb          $v1, 0x5D10($v0)
    ctx->pc = 0x14f2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23824), (uint8_t)GPR_U32(ctx, 3));
label_14f2a4:
    // 0x14f2a4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x14f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_14f2a8:
    // 0x14f2a8: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x14f2a8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_14f2ac:
    // 0x14f2ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14f2b0:
    // 0x14f2b0: 0xc0533cc  jal         func_14CF30
label_14f2b4:
    if (ctx->pc == 0x14F2B4u) {
        ctx->pc = 0x14F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2B0u;
        // 0x14f2b4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F2B8u;
        goto label_14f2b8;
    }
    ctx->pc = 0x14F2B0u;
    SET_GPR_U32(ctx, 31, 0x14F2B8u);
    ctx->pc = 0x14F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2B0u;
    // 0x14f2b4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF30u, 0x14F2B0u, 0x14F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2B8u;
label_14f2b8:
    // 0x14f2b8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x14f2b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f2bc:
    // 0x14f2bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14f2c0:
    // 0x14f2c0: 0x56820011  bnel        $s4, $v0, . + 4 + (0x11 << 2)
label_14f2c4:
    if (ctx->pc == 0x14F2C4u) {
        ctx->pc = 0x14F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2C0u;
        // 0x14f2c4: 0x141180  sll         $v0, $s4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F2C8u;
        goto label_14f2c8;
    }
    ctx->pc = 0x14F2C0u;
    {
        const bool branch_taken_0x14f2c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f2c0) {
            ctx->pc = 0x14F2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F2C0u;
            // 0x14f2c4: 0x141180  sll         $v0, $s4, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F308u;
            goto label_14f308;
        }
    }
    ctx->pc = 0x14F2C8u;
label_14f2c8:
    // 0x14f2c8: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x14f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
label_14f2cc:
    // 0x14f2cc: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_14f2d0:
    if (ctx->pc == 0x14F2D0u) {
        ctx->pc = 0x14F2D4u;
        goto label_14f2d4;
    }
    ctx->pc = 0x14F2CCu;
    {
        const bool branch_taken_0x14f2cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f2cc) {
            ctx->pc = 0x14F2F0u;
            goto label_14f2f0;
        }
    }
    ctx->pc = 0x14F2D4u;
label_14f2d4:
    // 0x14f2d4: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x14f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_14f2d8:
    // 0x14f2d8: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_14f2dc:
    if (ctx->pc == 0x14F2DCu) {
        ctx->pc = 0x14F2E0u;
        goto label_14f2e0;
    }
    ctx->pc = 0x14F2D8u;
    {
        const bool branch_taken_0x14f2d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f2d8) {
            ctx->pc = 0x14F2F0u;
            goto label_14f2f0;
        }
    }
    ctx->pc = 0x14F2E0u;
label_14f2e0:
    // 0x14f2e0: 0x2622feee  addiu       $v0, $s1, -0x112
    ctx->pc = 0x14f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967022));
label_14f2e4:
    // 0x14f2e4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x14f2e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14f2e8:
    // 0x14f2e8: 0x502003dd  beql        $at, $zero, . + 4 + (0x3DD << 2)
label_14f2ec:
    if (ctx->pc == 0x14F2ECu) {
        ctx->pc = 0x14F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2E8u;
        // 0x14f2ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F2F0u;
        goto label_14f2f0;
    }
    ctx->pc = 0x14F2E8u;
    {
        const bool branch_taken_0x14f2e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f2e8) {
            ctx->pc = 0x14F2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F2E8u;
            // 0x14f2ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F2F0u;
label_14f2f0:
    // 0x14f2f0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_14f2f4:
    // 0x14f2f4: 0xc04a12a  jal         func_1284A8
label_14f2f8:
    if (ctx->pc == 0x14F2F8u) {
        ctx->pc = 0x14F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2F4u;
        // 0x14f2f8: 0x2484d040  addiu       $a0, $a0, -0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F2FCu;
        goto label_14f2fc;
    }
    ctx->pc = 0x14F2F4u;
    SET_GPR_U32(ctx, 31, 0x14F2FCu);
    ctx->pc = 0x14F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2F4u;
    // 0x14f2f8: 0x2484d040  addiu       $a0, $a0, -0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x14F2F4u, 0x14F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2FCu;
label_14f2fc:
    // 0x14f2fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14f300:
    // 0x14f300: 0x100003d7  b           . + 4 + (0x3D7 << 2)
label_14f304:
    if (ctx->pc == 0x14F304u) {
        ctx->pc = 0x14F308u;
        goto label_14f308;
    }
    ctx->pc = 0x14F300u;
    {
        const bool branch_taken_0x14f300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f300) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F308u;
label_14f308:
    // 0x14f308: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f30c:
    // 0x14f30c: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x14f30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_14f310:
    // 0x14f310: 0x24639f04  addiu       $v1, $v1, -0x60FC
    ctx->pc = 0x14f310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942468));
label_14f314:
    // 0x14f314: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x14f314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_14f318:
    // 0x14f318: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x14f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
label_14f31c:
    // 0x14f31c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x14f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_14f320:
    // 0x14f320: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x14f320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_14f324:
    // 0x14f324: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14f324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14f328:
    // 0x14f328: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14f328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14f32c:
    // 0x14f32c: 0x506203cc  beql        $v1, $v0, . + 4 + (0x3CC << 2)
label_14f330:
    if (ctx->pc == 0x14F330u) {
        ctx->pc = 0x14F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F32Cu;
        // 0x14f330: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F334u;
        goto label_14f334;
    }
    ctx->pc = 0x14F32Cu;
    {
        const bool branch_taken_0x14f32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f32c) {
            ctx->pc = 0x14F330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F32Cu;
            // 0x14f330: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F334u;
label_14f334:
    // 0x14f334: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x14f334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_14f338:
    // 0x14f338: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_14f33c:
    if (ctx->pc == 0x14F33Cu) {
        ctx->pc = 0x14F340u;
        goto label_14f340;
    }
    ctx->pc = 0x14F338u;
    {
        const bool branch_taken_0x14f338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f338) {
            ctx->pc = 0x14F350u;
            goto label_14f350;
        }
    }
    ctx->pc = 0x14F340u;
label_14f340:
    // 0x14f340: 0x2462feee  addiu       $v0, $v1, -0x112
    ctx->pc = 0x14f340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967022));
label_14f344:
    // 0x14f344: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x14f344u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14f348:
    // 0x14f348: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_14f34c:
    if (ctx->pc == 0x14F34Cu) {
        ctx->pc = 0x14F350u;
        goto label_14f350;
    }
    ctx->pc = 0x14F348u;
    {
        const bool branch_taken_0x14f348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f348) {
            ctx->pc = 0x14F35Cu;
            goto label_14f35c;
        }
    }
    ctx->pc = 0x14F350u;
label_14f350:
    // 0x14f350: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14f354:
    // 0x14f354: 0x100003c2  b           . + 4 + (0x3C2 << 2)
label_14f358:
    if (ctx->pc == 0x14F358u) {
        ctx->pc = 0x14F35Cu;
        goto label_14f35c;
    }
    ctx->pc = 0x14F354u;
    {
        const bool branch_taken_0x14f354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f354) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F35Cu;
label_14f35c:
    // 0x14f35c: 0x328600ff  andi        $a2, $s4, 0xFF
    ctx->pc = 0x14f35cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_14f360:
    // 0x14f360: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f364:
    // 0x14f364: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x14f364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_14f368:
    // 0x14f368: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x14f368u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_14f36c:
    // 0x14f36c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_14f370:
    // 0x14f370: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14f374:
    // 0x14f374: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14f374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14f378:
    // 0x14f378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14f37c:
    // 0x14f37c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_14f380:
    // 0x14f380: 0x391c0  sll         $s2, $v1, 7
    ctx->pc = 0x14f380u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14f384:
    // 0x14f384: 0xc052a80  jal         func_14AA00
label_14f388:
    if (ctx->pc == 0x14F388u) {
        ctx->pc = 0x14F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F384u;
        // 0x14f388: 0x52b021  addu        $s6, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F38Cu;
        goto label_14f38c;
    }
    ctx->pc = 0x14F384u;
    SET_GPR_U32(ctx, 31, 0x14F38Cu);
    ctx->pc = 0x14F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F384u;
    // 0x14f388: 0x52b021  addu        $s6, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA00u, 0x14F384u, 0x14F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F38Cu;
label_14f38c:
    // 0x14f38c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_14f390:
    // 0x14f390: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f394:
    // 0x14f394: 0x82040007  lb          $a0, 0x7($s0)
    ctx->pc = 0x14f394u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_14f398:
    // 0x14f398: 0x24429f10  addiu       $v0, $v0, -0x60F0
    ctx->pc = 0x14f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942480));
label_14f39c:
    // 0x14f39c: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x14f39cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_14f3a0:
    // 0x14f3a0: 0x52b821  addu        $s7, $v0, $s2
    ctx->pc = 0x14f3a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f3a4:
    // 0x14f3a4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f3a8:
    // 0x14f3a8: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x14f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_14f3ac:
    // 0x14f3ac: 0x24429f14  addiu       $v0, $v0, -0x60EC
    ctx->pc = 0x14f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942484));
label_14f3b0:
    // 0x14f3b0: 0x52a821  addu        $s5, $v0, $s2
    ctx->pc = 0x14f3b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f3b4:
    // 0x14f3b4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_14f3b8:
    // 0x14f3b8: 0x24425dc4  addiu       $v0, $v0, 0x5DC4
    ctx->pc = 0x14f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24004));
label_14f3bc:
    // 0x14f3bc: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x14f3bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f3c0:
    // 0x14f3c0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x14f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_14f3c4:
    // 0x14f3c4: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x14f3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_14f3c8:
    // 0x14f3c8: 0xc06e4a0  jal         func_1B9280
label_14f3cc:
    if (ctx->pc == 0x14F3CCu) {
        ctx->pc = 0x14F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3C8u;
        // 0x14f3cc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F3D0u;
        goto label_14f3d0;
    }
    ctx->pc = 0x14F3C8u;
    SET_GPR_U32(ctx, 31, 0x14F3D0u);
    ctx->pc = 0x14F3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3C8u;
    // 0x14f3cc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14F3C8u, 0x14F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3D0u;
label_14f3d0:
    // 0x14f3d0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14f3d4:
    // 0x14f3d4: 0xc06d28c  jal         func_1B4A30
label_14f3d8:
    if (ctx->pc == 0x14F3D8u) {
        ctx->pc = 0x14F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3D4u;
        // 0x14f3d8: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F3DCu;
        goto label_14f3dc;
    }
    ctx->pc = 0x14F3D4u;
    SET_GPR_U32(ctx, 31, 0x14F3DCu);
    ctx->pc = 0x14F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3D4u;
    // 0x14f3d8: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14F3D4u, 0x14F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3DCu;
label_14f3dc:
    // 0x14f3dc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14f3e0:
    // 0x14f3e0: 0xc06e822  jal         func_1BA088
label_14f3e4:
    if (ctx->pc == 0x14F3E4u) {
        ctx->pc = 0x14F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3E0u;
        // 0x14f3e4: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F3E8u;
        goto label_14f3e8;
    }
    ctx->pc = 0x14F3E0u;
    SET_GPR_U32(ctx, 31, 0x14F3E8u);
    ctx->pc = 0x14F3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3E0u;
    // 0x14f3e4: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x14F3E0u, 0x14F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3E8u;
label_14f3e8:
    // 0x14f3e8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14f3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14f3ec:
    // 0x14f3ec: 0xc06d28c  jal         func_1B4A30
label_14f3f0:
    if (ctx->pc == 0x14F3F0u) {
        ctx->pc = 0x14F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3ECu;
        // 0x14f3f0: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F3F4u;
        goto label_14f3f4;
    }
    ctx->pc = 0x14F3ECu;
    SET_GPR_U32(ctx, 31, 0x14F3F4u);
    ctx->pc = 0x14F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3ECu;
    // 0x14f3f0: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14F3ECu, 0x14F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3F4u;
label_14f3f4:
    // 0x14f3f4: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x14f3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_14f3f8:
    // 0x14f3f8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14f3fc:
    // 0x14f3fc: 0xc06e75a  jal         func_1B9D68
label_14f400:
    if (ctx->pc == 0x14F400u) {
        ctx->pc = 0x14F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3FCu;
        // 0x14f400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F404u;
        goto label_14f404;
    }
    ctx->pc = 0x14F3FCu;
    SET_GPR_U32(ctx, 31, 0x14F404u);
    ctx->pc = 0x14F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3FCu;
    // 0x14f400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x14F3FCu, 0x14F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F404u;
label_14f404:
    // 0x14f404: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14f404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14f408:
    // 0x14f408: 0xc06d28c  jal         func_1B4A30
label_14f40c:
    if (ctx->pc == 0x14F40Cu) {
        ctx->pc = 0x14F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F408u;
        // 0x14f40c: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F410u;
        goto label_14f410;
    }
    ctx->pc = 0x14F408u;
    SET_GPR_U32(ctx, 31, 0x14F410u);
    ctx->pc = 0x14F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F408u;
    // 0x14f40c: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14F408u, 0x14F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F410u;
label_14f410:
    // 0x14f410: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x14f410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_14f414:
    // 0x14f414: 0x3c050082  lui         $a1, 0x82
    ctx->pc = 0x14f414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)130 << 16));
label_14f418:
    // 0x14f418: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x14f418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14f41c:
    // 0x14f41c: 0x24a5c2c0  addiu       $a1, $a1, -0x3D40
    ctx->pc = 0x14f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951616));
label_14f420:
    // 0x14f420: 0xc06f098  jal         func_1BC260
label_14f424:
    if (ctx->pc == 0x14F424u) {
        ctx->pc = 0x14F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F420u;
        // 0x14f424: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F428u;
        goto label_14f428;
    }
    ctx->pc = 0x14F420u;
    SET_GPR_U32(ctx, 31, 0x14F428u);
    ctx->pc = 0x14F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F420u;
    // 0x14f424: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC260u, 0x14F420u, 0x14F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F428u;
label_14f428:
    // 0x14f428: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f42c:
    // 0x14f42c: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x14f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14f430:
    // 0x14f430: 0x24429f00  addiu       $v0, $v0, -0x6100
    ctx->pc = 0x14f430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
label_14f434:
    // 0x14f434: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f438:
    // 0x14f438: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_14f43c:
    if (ctx->pc == 0x14F43Cu) {
        ctx->pc = 0x14F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F438u;
        // 0x14f43c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F440u;
        goto label_14f440;
    }
    ctx->pc = 0x14F438u;
    {
        const bool branch_taken_0x14f438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F438u;
        // 0x14f43c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f438) {
            ctx->pc = 0x14F488u;
            goto label_14f488;
        }
    }
    ctx->pc = 0x14F440u;
label_14f440:
    // 0x14f440: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14f440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_14f444:
    // 0x14f444: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14f444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14f448:
    // 0x14f448: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_14f44c:
    if (ctx->pc == 0x14F44Cu) {
        ctx->pc = 0x14F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F448u;
        // 0x14f44c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F450u;
        goto label_14f450;
    }
    ctx->pc = 0x14F448u;
    {
        const bool branch_taken_0x14f448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f448) {
            ctx->pc = 0x14F44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F448u;
            // 0x14f44c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F468u;
            goto label_14f468;
        }
    }
    ctx->pc = 0x14F450u;
label_14f450:
    // 0x14f450: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f454:
    // 0x14f454: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x14f454u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_14f458:
    // 0x14f458: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x14f458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_14f45c:
    // 0x14f45c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f460:
    // 0x14f460: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x14f460u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_14f464:
    // 0x14f464: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14f464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14f468:
    // 0x14f468: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14f468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14f46c:
    // 0x14f46c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14f470:
    if (ctx->pc == 0x14F470u) {
        ctx->pc = 0x14F474u;
        goto label_14f474;
    }
    ctx->pc = 0x14F46Cu;
    {
        const bool branch_taken_0x14f46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f46c) {
            ctx->pc = 0x14F488u;
            goto label_14f488;
        }
    }
    ctx->pc = 0x14F474u;
label_14f474:
    // 0x14f474: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f478:
    // 0x14f478: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x14f478u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_14f47c:
    // 0x14f47c: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x14f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_14f480:
    // 0x14f480: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f484:
    // 0x14f484: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x14f484u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_14f488:
    // 0x14f488: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14f488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14f48c:
    // 0x14f48c: 0x14163c  dsll32      $v0, $s4, 24
    ctx->pc = 0x14f48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
label_14f490:
    // 0x14f490: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x14f490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
label_14f494:
    // 0x14f494: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x14f494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_14f498:
    // 0x14f498: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14f498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f49c:
    // 0x14f49c: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x14f49cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_14f4a0:
    // 0x14f4a0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f4a4:
    // 0x14f4a4: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x14f4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_14f4a8:
    // 0x14f4a8: 0x24639f04  addiu       $v1, $v1, -0x60FC
    ctx->pc = 0x14f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942468));
label_14f4ac:
    // 0x14f4ac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x14f4acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_14f4b0:
    // 0x14f4b0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f4b4:
    // 0x14f4b4: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14f4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_14f4b8:
    // 0x14f4b8: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f4bc:
    // 0x14f4bc: 0x24639f0a  addiu       $v1, $v1, -0x60F6
    ctx->pc = 0x14f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942474));
label_14f4c0:
    // 0x14f4c0: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f4c4:
    // 0x14f4c4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f4c8:
    // 0x14f4c8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x14f4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_14f4cc:
    // 0x14f4cc: 0x24639f16  addiu       $v1, $v1, -0x60EA
    ctx->pc = 0x14f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942486));
label_14f4d0:
    // 0x14f4d0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f4d4:
    // 0x14f4d4: 0xa07e0000  sb          $fp, 0x0($v1)
    ctx->pc = 0x14f4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 30));
label_14f4d8:
    // 0x14f4d8: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f4dc:
    // 0x14f4dc: 0x24639f18  addiu       $v1, $v1, -0x60E8
    ctx->pc = 0x14f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942488));
label_14f4e0:
    // 0x14f4e0: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f4e4:
    // 0x14f4e4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f4e8:
    // 0x14f4e8: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x14f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_14f4ec:
    // 0x14f4ec: 0x24639f15  addiu       $v1, $v1, -0x60EB
    ctx->pc = 0x14f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942485));
label_14f4f0:
    // 0x14f4f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f4f4:
    // 0x14f4f4: 0x1000035a  b           . + 4 + (0x35A << 2)
label_14f4f8:
    if (ctx->pc == 0x14F4F8u) {
        ctx->pc = 0x14F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4F4u;
        // 0x14f4f8: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F4FCu;
        goto label_14f4fc;
    }
    ctx->pc = 0x14F4F4u;
    {
        const bool branch_taken_0x14f4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4F4u;
        // 0x14f4f8: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4f4) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F4FCu;
label_14f4fc:
    // 0x14f4fc: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x14f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14f500:
    // 0x14f500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14f504:
    // 0x14f504: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x14f504u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_14f508:
    // 0x14f508: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x14f508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_14f50c:
    // 0x14f50c: 0x3066001f  andi        $a2, $v1, 0x1F
    ctx->pc = 0x14f50cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_14f510:
    // 0x14f510: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x14f510u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_14f514:
    // 0x14f514: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x14f514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
label_14f518:
    // 0x14f518: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x14f518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_14f51c:
    // 0x14f51c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_14f520:
    // 0x14f520: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_14f524:
    if (ctx->pc == 0x14F524u) {
        ctx->pc = 0x14F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F520u;
        // 0x14f524: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F528u;
        goto label_14f528;
    }
    ctx->pc = 0x14F520u;
    {
        const bool branch_taken_0x14f520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F520u;
        // 0x14f524: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f520) {
            ctx->pc = 0x14F554u;
            goto label_14f554;
        }
    }
    ctx->pc = 0x14F528u;
label_14f528:
    // 0x14f528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f52c:
    // 0x14f52c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_14f530:
    if (ctx->pc == 0x14F530u) {
        ctx->pc = 0x14F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F52Cu;
        // 0x14f530: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F534u;
        goto label_14f534;
    }
    ctx->pc = 0x14F52Cu;
    {
        const bool branch_taken_0x14f52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f52c) {
            ctx->pc = 0x14F530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F52Cu;
            // 0x14f530: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F54Cu;
            goto label_14f54c;
        }
    }
    ctx->pc = 0x14F534u;
label_14f534:
    // 0x14f534: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_14f538:
    if (ctx->pc == 0x14F538u) {
        ctx->pc = 0x14F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F534u;
        // 0x14f538: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F53Cu;
        goto label_14f53c;
    }
    ctx->pc = 0x14F534u;
    {
        const bool branch_taken_0x14f534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f534) {
            ctx->pc = 0x14F538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F534u;
            // 0x14f538: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F544u;
            goto label_14f544;
        }
    }
    ctx->pc = 0x14F53Cu;
label_14f53c:
    // 0x14f53c: 0x10000008  b           . + 4 + (0x8 << 2)
label_14f540:
    if (ctx->pc == 0x14F540u) {
        ctx->pc = 0x14F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F53Cu;
        // 0x14f540: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F544u;
        goto label_14f544;
    }
    ctx->pc = 0x14F53Cu;
    {
        const bool branch_taken_0x14f53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F53Cu;
        // 0x14f540: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f53c) {
            ctx->pc = 0x14F560u;
            goto label_14f560;
        }
    }
    ctx->pc = 0x14F544u;
label_14f544:
    // 0x14f544: 0x10000007  b           . + 4 + (0x7 << 2)
label_14f548:
    if (ctx->pc == 0x14F548u) {
        ctx->pc = 0x14F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F544u;
        // 0x14f548: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F54Cu;
        goto label_14f54c;
    }
    ctx->pc = 0x14F544u;
    {
        const bool branch_taken_0x14f544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F544u;
        // 0x14f548: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f544) {
            ctx->pc = 0x14F564u;
            goto label_14f564;
        }
    }
    ctx->pc = 0x14F54Cu;
label_14f54c:
    // 0x14f54c: 0x10000005  b           . + 4 + (0x5 << 2)
label_14f550:
    if (ctx->pc == 0x14F550u) {
        ctx->pc = 0x14F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F54Cu;
        // 0x14f550: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F554u;
        goto label_14f554;
    }
    ctx->pc = 0x14F54Cu;
    {
        const bool branch_taken_0x14f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F54Cu;
        // 0x14f550: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f54c) {
            ctx->pc = 0x14F564u;
            goto label_14f564;
        }
    }
    ctx->pc = 0x14F554u;
label_14f554:
    // 0x14f554: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x14f554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_14f558:
    // 0x14f558: 0x10000002  b           . + 4 + (0x2 << 2)
label_14f55c:
    if (ctx->pc == 0x14F55Cu) {
        ctx->pc = 0x14F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F558u;
        // 0x14f55c: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F560u;
        goto label_14f560;
    }
    ctx->pc = 0x14F558u;
    {
        const bool branch_taken_0x14f558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F558u;
        // 0x14f55c: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f558) {
            ctx->pc = 0x14F564u;
            goto label_14f564;
        }
    }
    ctx->pc = 0x14F560u;
label_14f560:
    // 0x14f560: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f564:
    // 0x14f564: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x14f564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_14f568:
    // 0x14f568: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x14f568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_14f56c:
    // 0x14f56c: 0x50a2000c  beql        $a1, $v0, . + 4 + (0xC << 2)
label_14f570:
    if (ctx->pc == 0x14F570u) {
        ctx->pc = 0x14F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F56Cu;
        // 0x14f570: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F574u;
        goto label_14f574;
    }
    ctx->pc = 0x14F56Cu;
    {
        const bool branch_taken_0x14f56c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f56c) {
            ctx->pc = 0x14F570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F56Cu;
            // 0x14f570: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F5A0u;
            goto label_14f5a0;
        }
    }
    ctx->pc = 0x14F574u;
label_14f574:
    // 0x14f574: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14f574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14f578:
    // 0x14f578: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14f578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14f57c:
    // 0x14f57c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14f580:
    // 0x14f580: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x14f580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_14f584:
    // 0x14f584: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_14f588:
    if (ctx->pc == 0x14F588u) {
        ctx->pc = 0x14F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F584u;
        // 0x14f588: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F58Cu;
        goto label_14f58c;
    }
    ctx->pc = 0x14F584u;
    {
        const bool branch_taken_0x14f584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f584) {
            ctx->pc = 0x14F588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F584u;
            // 0x14f588: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F594u;
            goto label_14f594;
        }
    }
    ctx->pc = 0x14F58Cu;
label_14f58c:
    // 0x14f58c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14f58cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f590:
    // 0x14f590: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x14f590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_14f594:
    // 0x14f594: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14f594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f598:
    // 0x14f598: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14f598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14f59c:
    // 0x14f59c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x14f59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14f5a0:
    // 0x14f5a0: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x14f5a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_14f5a4:
    // 0x14f5a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14f5a8:
    // 0x14f5a8: 0xc0533cc  jal         func_14CF30
label_14f5ac:
    if (ctx->pc == 0x14F5ACu) {
        ctx->pc = 0x14F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5A8u;
        // 0x14f5ac: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F5B0u;
        goto label_14f5b0;
    }
    ctx->pc = 0x14F5A8u;
    SET_GPR_U32(ctx, 31, 0x14F5B0u);
    ctx->pc = 0x14F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5A8u;
    // 0x14f5ac: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF30u, 0x14F5A8u, 0x14F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F5B0u;
label_14f5b0:
    // 0x14f5b0: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x14f5b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f5b4:
    // 0x14f5b4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14f5b8:
    // 0x14f5b8: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
label_14f5bc:
    if (ctx->pc == 0x14F5BCu) {
        ctx->pc = 0x14F5C0u;
        goto label_14f5c0;
    }
    ctx->pc = 0x14F5B8u;
    {
        const bool branch_taken_0x14f5b8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f5b8) {
            ctx->pc = 0x14F5C8u;
            goto label_14f5c8;
        }
    }
    ctx->pc = 0x14F5C0u;
label_14f5c0:
    // 0x14f5c0: 0x10000327  b           . + 4 + (0x327 << 2)
label_14f5c4:
    if (ctx->pc == 0x14F5C4u) {
        ctx->pc = 0x14F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5C0u;
        // 0x14f5c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F5C8u;
        goto label_14f5c8;
    }
    ctx->pc = 0x14F5C0u;
    {
        const bool branch_taken_0x14f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5C0u;
        // 0x14f5c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5c0) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F5C8u;
label_14f5c8:
    // 0x14f5c8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_14f5cc:
    // 0x14f5cc: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x14f5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14f5d0:
    // 0x14f5d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14f5d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f5d4:
    // 0x14f5d4: 0x24845d80  addiu       $a0, $a0, 0x5D80
    ctx->pc = 0x14f5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23936));
label_14f5d8:
    // 0x14f5d8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x14f5d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_14f5dc:
    // 0x14f5dc: 0x50430019  beql        $v0, $v1, . + 4 + (0x19 << 2)
label_14f5e0:
    if (ctx->pc == 0x14F5E0u) {
        ctx->pc = 0x14F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5DCu;
        // 0x14f5e0: 0x32c500ff  andi        $a1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F5E4u;
        goto label_14f5e4;
    }
    ctx->pc = 0x14F5DCu;
    {
        const bool branch_taken_0x14f5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f5dc) {
            ctx->pc = 0x14F5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F5DCu;
            // 0x14f5e0: 0x32c500ff  andi        $a1, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F644u;
            goto label_14f644;
        }
    }
    ctx->pc = 0x14F5E4u;
label_14f5e4:
    // 0x14f5e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14f5e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_14f5e8:
    // 0x14f5e8: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x14f5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_14f5ec:
    // 0x14f5ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_14f5f0:
    if (ctx->pc == 0x14F5F0u) {
        ctx->pc = 0x14F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5ECu;
        // 0x14f5f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F5F4u;
        goto label_14f5f4;
    }
    ctx->pc = 0x14F5ECu;
    {
        const bool branch_taken_0x14f5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5ECu;
        // 0x14f5f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5ec) {
            ctx->pc = 0x14F5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f5d8;
        }
    }
    ctx->pc = 0x14F5F4u;
label_14f5f4:
    // 0x14f5f4: 0x1000031a  b           . + 4 + (0x31A << 2)
label_14f5f8:
    if (ctx->pc == 0x14F5F8u) {
        ctx->pc = 0x14F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5F4u;
        // 0x14f5f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F5FCu;
        goto label_14f5fc;
    }
    ctx->pc = 0x14F5F4u;
    {
        const bool branch_taken_0x14f5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5F4u;
        // 0x14f5f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5f4) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F5FCu;
label_14f5fc:
    // 0x14f5fc: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x14f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14f600:
    // 0x14f600: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14f600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_14f604:
    // 0x14f604: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x14f604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14f608:
    // 0x14f608: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14f608u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f60c:
    // 0x14f60c: 0x24845d80  addiu       $a0, $a0, 0x5D80
    ctx->pc = 0x14f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23936));
label_14f610:
    // 0x14f610: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x14f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_14f614:
    // 0x14f614: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x14f614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_14f618:
    // 0x14f618: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x14f618u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f61c:
    // 0x14f61c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x14f61cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_14f620:
    // 0x14f620: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_14f624:
    if (ctx->pc == 0x14F624u) {
        ctx->pc = 0x14F628u;
        goto label_14f628;
    }
    ctx->pc = 0x14F620u;
    {
        const bool branch_taken_0x14f620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f620) {
            ctx->pc = 0x14F640u;
            goto label_14f640;
        }
    }
    ctx->pc = 0x14F628u;
label_14f628:
    // 0x14f628: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14f628u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_14f62c:
    // 0x14f62c: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x14f62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_14f630:
    // 0x14f630: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_14f634:
    if (ctx->pc == 0x14F634u) {
        ctx->pc = 0x14F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F630u;
        // 0x14f634: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F638u;
        goto label_14f638;
    }
    ctx->pc = 0x14F630u;
    {
        const bool branch_taken_0x14f630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F630u;
        // 0x14f634: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f630) {
            ctx->pc = 0x14F61Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f61c;
        }
    }
    ctx->pc = 0x14F638u;
label_14f638:
    // 0x14f638: 0x10000309  b           . + 4 + (0x309 << 2)
label_14f63c:
    if (ctx->pc == 0x14F63Cu) {
        ctx->pc = 0x14F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F638u;
        // 0x14f63c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F640u;
        goto label_14f640;
    }
    ctx->pc = 0x14F638u;
    {
        const bool branch_taken_0x14f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F638u;
        // 0x14f63c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f638) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F640u;
label_14f640:
    // 0x14f640: 0x32c500ff  andi        $a1, $s6, 0xFF
    ctx->pc = 0x14f640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_14f644:
    // 0x14f644: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f648:
    // 0x14f648: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x14f648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_14f64c:
    // 0x14f64c: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x14f64cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_14f650:
    // 0x14f650: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14f650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14f654:
    // 0x14f654: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14f654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14f658:
    // 0x14f658: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14f658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14f65c:
    // 0x14f65c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14f660:
    // 0x14f660: 0x391c0  sll         $s2, $v1, 7
    ctx->pc = 0x14f660u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14f664:
    // 0x14f664: 0xc052abc  jal         func_14AAF0
label_14f668:
    if (ctx->pc == 0x14F668u) {
        ctx->pc = 0x14F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F664u;
        // 0x14f668: 0x52b821  addu        $s7, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F66Cu;
        goto label_14f66c;
    }
    ctx->pc = 0x14F664u;
    SET_GPR_U32(ctx, 31, 0x14F66Cu);
    ctx->pc = 0x14F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F664u;
    // 0x14f668: 0x52b821  addu        $s7, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AAF0u, 0x14F664u, 0x14F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F66Cu;
label_14f66c:
    // 0x14f66c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x14f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_14f670:
    // 0x14f670: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14f670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14f674:
    // 0x14f674: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f678:
    // 0x14f678: 0x24635dc4  addiu       $v1, $v1, 0x5DC4
    ctx->pc = 0x14f678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24004));
label_14f67c:
    // 0x14f67c: 0x24429f10  addiu       $v0, $v0, -0x60F0
    ctx->pc = 0x14f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942480));
label_14f680:
    // 0x14f680: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x14f680u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_14f684:
    // 0x14f684: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14f684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f688:
    // 0x14f688: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x14f688u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_14f68c:
    // 0x14f68c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x14f68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_14f690:
    // 0x14f690: 0x72a021  addu        $s4, $v1, $s2
    ctx->pc = 0x14f690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f694:
    // 0x14f694: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f698:
    // 0x14f698: 0x24429f14  addiu       $v0, $v0, -0x60EC
    ctx->pc = 0x14f698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942484));
label_14f69c:
    // 0x14f69c: 0x52a821  addu        $s5, $v0, $s2
    ctx->pc = 0x14f69cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f6a0:
    // 0x14f6a0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x14f6a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_14f6a4:
    // 0x14f6a4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x14f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_14f6a8:
    // 0x14f6a8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x14f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_14f6ac:
    // 0x14f6ac: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x14f6acu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_14f6b0:
    // 0x14f6b0: 0xc06e4a0  jal         func_1B9280
label_14f6b4:
    if (ctx->pc == 0x14F6B4u) {
        ctx->pc = 0x14F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6B0u;
        // 0x14f6b4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F6B8u;
        goto label_14f6b8;
    }
    ctx->pc = 0x14F6B0u;
    SET_GPR_U32(ctx, 31, 0x14F6B8u);
    ctx->pc = 0x14F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6B0u;
    // 0x14f6b4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14F6B0u, 0x14F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6B8u;
label_14f6b8:
    // 0x14f6b8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14f6bc:
    // 0x14f6bc: 0xc06d28c  jal         func_1B4A30
label_14f6c0:
    if (ctx->pc == 0x14F6C0u) {
        ctx->pc = 0x14F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6BCu;
        // 0x14f6c0: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F6C4u;
        goto label_14f6c4;
    }
    ctx->pc = 0x14F6BCu;
    SET_GPR_U32(ctx, 31, 0x14F6C4u);
    ctx->pc = 0x14F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6BCu;
    // 0x14f6c0: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14F6BCu, 0x14F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6C4u;
label_14f6c4:
    // 0x14f6c4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14f6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14f6c8:
    // 0x14f6c8: 0xc06e822  jal         func_1BA088
label_14f6cc:
    if (ctx->pc == 0x14F6CCu) {
        ctx->pc = 0x14F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6C8u;
        // 0x14f6cc: 0x8ee50000  lw          $a1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F6D0u;
        goto label_14f6d0;
    }
    ctx->pc = 0x14F6C8u;
    SET_GPR_U32(ctx, 31, 0x14F6D0u);
    ctx->pc = 0x14F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6C8u;
    // 0x14f6cc: 0x8ee50000  lw          $a1, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x14F6C8u, 0x14F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6D0u;
label_14f6d0:
    // 0x14f6d0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14f6d4:
    // 0x14f6d4: 0xc06d28c  jal         func_1B4A30
label_14f6d8:
    if (ctx->pc == 0x14F6D8u) {
        ctx->pc = 0x14F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6D4u;
        // 0x14f6d8: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F6DCu;
        goto label_14f6dc;
    }
    ctx->pc = 0x14F6D4u;
    SET_GPR_U32(ctx, 31, 0x14F6DCu);
    ctx->pc = 0x14F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6D4u;
    // 0x14f6d8: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14F6D4u, 0x14F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6DCu;
label_14f6dc:
    // 0x14f6dc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x14f6dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_14f6e0:
    // 0x14f6e0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14f6e4:
    // 0x14f6e4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14f6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14f6e8:
    // 0x14f6e8: 0xc06e75a  jal         func_1B9D68
label_14f6ec:
    if (ctx->pc == 0x14F6ECu) {
        ctx->pc = 0x14F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6E8u;
        // 0x14f6ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F6F0u;
        goto label_14f6f0;
    }
    ctx->pc = 0x14F6E8u;
    SET_GPR_U32(ctx, 31, 0x14F6F0u);
    ctx->pc = 0x14F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6E8u;
    // 0x14f6ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x14F6E8u, 0x14F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6F0u;
label_14f6f0:
    // 0x14f6f0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14f6f4:
    // 0x14f6f4: 0xc06d28c  jal         func_1B4A30
label_14f6f8:
    if (ctx->pc == 0x14F6F8u) {
        ctx->pc = 0x14F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6F4u;
        // 0x14f6f8: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F6FCu;
        goto label_14f6fc;
    }
    ctx->pc = 0x14F6F4u;
    SET_GPR_U32(ctx, 31, 0x14F6FCu);
    ctx->pc = 0x14F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6F4u;
    // 0x14f6f8: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14F6F4u, 0x14F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6FCu;
label_14f6fc:
    // 0x14f6fc: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x14f6fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_14f700:
    // 0x14f700: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x14f700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_14f704:
    // 0x14f704: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x14f704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14f708:
    // 0x14f708: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14f708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_14f70c:
    // 0x14f70c: 0x24425d50  addiu       $v0, $v0, 0x5D50
    ctx->pc = 0x14f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23888));
label_14f710:
    // 0x14f710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14f714:
    // 0x14f714: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14f714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14f718:
    // 0x14f718: 0xc06f098  jal         func_1BC260
label_14f71c:
    if (ctx->pc == 0x14F71Cu) {
        ctx->pc = 0x14F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F718u;
        // 0x14f71c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F720u;
        goto label_14f720;
    }
    ctx->pc = 0x14F718u;
    SET_GPR_U32(ctx, 31, 0x14F720u);
    ctx->pc = 0x14F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F718u;
    // 0x14f71c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC260u, 0x14F718u, 0x14F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F720u;
label_14f720:
    // 0x14f720: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f724:
    // 0x14f724: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x14f724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14f728:
    // 0x14f728: 0x24429f00  addiu       $v0, $v0, -0x6100
    ctx->pc = 0x14f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
label_14f72c:
    // 0x14f72c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f730:
    // 0x14f730: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_14f734:
    if (ctx->pc == 0x14F734u) {
        ctx->pc = 0x14F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F730u;
        // 0x14f734: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F738u;
        goto label_14f738;
    }
    ctx->pc = 0x14F730u;
    {
        const bool branch_taken_0x14f730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F730u;
        // 0x14f734: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f730) {
            ctx->pc = 0x14F780u;
            goto label_14f780;
        }
    }
    ctx->pc = 0x14F738u;
label_14f738:
    // 0x14f738: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14f738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_14f73c:
    // 0x14f73c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14f73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14f740:
    // 0x14f740: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_14f744:
    if (ctx->pc == 0x14F744u) {
        ctx->pc = 0x14F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F740u;
        // 0x14f744: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F748u;
        goto label_14f748;
    }
    ctx->pc = 0x14F740u;
    {
        const bool branch_taken_0x14f740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f740) {
            ctx->pc = 0x14F744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F740u;
            // 0x14f744: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F760u;
            goto label_14f760;
        }
    }
    ctx->pc = 0x14F748u;
label_14f748:
    // 0x14f748: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f74c:
    // 0x14f74c: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x14f74cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_14f750:
    // 0x14f750: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x14f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_14f754:
    // 0x14f754: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f758:
    // 0x14f758: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x14f758u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_14f75c:
    // 0x14f75c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14f760:
    // 0x14f760: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14f760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14f764:
    // 0x14f764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14f768:
    if (ctx->pc == 0x14F768u) {
        ctx->pc = 0x14F76Cu;
        goto label_14f76c;
    }
    ctx->pc = 0x14F764u;
    {
        const bool branch_taken_0x14f764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f764) {
            ctx->pc = 0x14F780u;
            goto label_14f780;
        }
    }
    ctx->pc = 0x14F76Cu;
label_14f76c:
    // 0x14f76c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f770:
    // 0x14f770: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x14f770u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_14f774:
    // 0x14f774: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x14f774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_14f778:
    // 0x14f778: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f77c:
    // 0x14f77c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x14f77cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_14f780:
    // 0x14f780: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14f780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14f784:
    // 0x14f784: 0x16163c  dsll32      $v0, $s6, 24
    ctx->pc = 0x14f784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 24));
label_14f788:
    // 0x14f788: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x14f788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
label_14f78c:
    // 0x14f78c: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x14f78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_14f790:
    // 0x14f790: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14f790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f794:
    // 0x14f794: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x14f794u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_14f798:
    // 0x14f798: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f79c:
    // 0x14f79c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x14f79cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_14f7a0:
    // 0x14f7a0: 0x24639f04  addiu       $v1, $v1, -0x60FC
    ctx->pc = 0x14f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942468));
label_14f7a4:
    // 0x14f7a4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x14f7a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_14f7a8:
    // 0x14f7a8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f7ac:
    // 0x14f7ac: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_14f7b0:
    // 0x14f7b0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f7b4:
    // 0x14f7b4: 0x24639f0a  addiu       $v1, $v1, -0x60F6
    ctx->pc = 0x14f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942474));
label_14f7b8:
    // 0x14f7b8: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f7bc:
    // 0x14f7bc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f7c0:
    // 0x14f7c0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x14f7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_14f7c4:
    // 0x14f7c4: 0x24639f16  addiu       $v1, $v1, -0x60EA
    ctx->pc = 0x14f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942486));
label_14f7c8:
    // 0x14f7c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f7cc:
    // 0x14f7cc: 0xa07e0000  sb          $fp, 0x0($v1)
    ctx->pc = 0x14f7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 30));
label_14f7d0:
    // 0x14f7d0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f7d4:
    // 0x14f7d4: 0x24639f18  addiu       $v1, $v1, -0x60E8
    ctx->pc = 0x14f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942488));
label_14f7d8:
    // 0x14f7d8: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f7dc:
    // 0x14f7dc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14f7e0:
    // 0x14f7e0: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x14f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_14f7e4:
    // 0x14f7e4: 0x24639f15  addiu       $v1, $v1, -0x60EB
    ctx->pc = 0x14f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942485));
label_14f7e8:
    // 0x14f7e8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f7ec:
    // 0x14f7ec: 0x1000029c  b           . + 4 + (0x29C << 2)
label_14f7f0:
    if (ctx->pc == 0x14F7F0u) {
        ctx->pc = 0x14F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7ECu;
        // 0x14f7f0: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F7F4u;
        goto label_14f7f4;
    }
    ctx->pc = 0x14F7ECu;
    {
        const bool branch_taken_0x14f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7ECu;
        // 0x14f7f0: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7ec) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F7F4u;
label_14f7f4:
    // 0x14f7f4: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x14f7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14f7f8:
    // 0x14f7f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14f7fc:
    // 0x14f7fc: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x14f7fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_14f800:
    // 0x14f800: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x14f800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_14f804:
    // 0x14f804: 0x3066001f  andi        $a2, $v1, 0x1F
    ctx->pc = 0x14f804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_14f808:
    // 0x14f808: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x14f808u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_14f80c:
    // 0x14f80c: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x14f80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
label_14f810:
    // 0x14f810: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x14f810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_14f814:
    // 0x14f814: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14f814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_14f818:
    // 0x14f818: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_14f81c:
    if (ctx->pc == 0x14F81Cu) {
        ctx->pc = 0x14F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F818u;
        // 0x14f81c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F820u;
        goto label_14f820;
    }
    ctx->pc = 0x14F818u;
    {
        const bool branch_taken_0x14f818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F818u;
        // 0x14f81c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f818) {
            ctx->pc = 0x14F84Cu;
            goto label_14f84c;
        }
    }
    ctx->pc = 0x14F820u;
label_14f820:
    // 0x14f820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f824:
    // 0x14f824: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_14f828:
    if (ctx->pc == 0x14F828u) {
        ctx->pc = 0x14F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F824u;
        // 0x14f828: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F82Cu;
        goto label_14f82c;
    }
    ctx->pc = 0x14F824u;
    {
        const bool branch_taken_0x14f824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f824) {
            ctx->pc = 0x14F828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F824u;
            // 0x14f828: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F844u;
            goto label_14f844;
        }
    }
    ctx->pc = 0x14F82Cu;
label_14f82c:
    // 0x14f82c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_14f830:
    if (ctx->pc == 0x14F830u) {
        ctx->pc = 0x14F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F82Cu;
        // 0x14f830: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F834u;
        goto label_14f834;
    }
    ctx->pc = 0x14F82Cu;
    {
        const bool branch_taken_0x14f82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f82c) {
            ctx->pc = 0x14F830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F82Cu;
            // 0x14f830: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F83Cu;
            goto label_14f83c;
        }
    }
    ctx->pc = 0x14F834u;
label_14f834:
    // 0x14f834: 0x10000008  b           . + 4 + (0x8 << 2)
label_14f838:
    if (ctx->pc == 0x14F838u) {
        ctx->pc = 0x14F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F834u;
        // 0x14f838: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F83Cu;
        goto label_14f83c;
    }
    ctx->pc = 0x14F834u;
    {
        const bool branch_taken_0x14f834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F834u;
        // 0x14f838: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f834) {
            ctx->pc = 0x14F858u;
            goto label_14f858;
        }
    }
    ctx->pc = 0x14F83Cu;
label_14f83c:
    // 0x14f83c: 0x10000007  b           . + 4 + (0x7 << 2)
label_14f840:
    if (ctx->pc == 0x14F840u) {
        ctx->pc = 0x14F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F83Cu;
        // 0x14f840: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F844u;
        goto label_14f844;
    }
    ctx->pc = 0x14F83Cu;
    {
        const bool branch_taken_0x14f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F83Cu;
        // 0x14f840: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f83c) {
            ctx->pc = 0x14F85Cu;
            goto label_14f85c;
        }
    }
    ctx->pc = 0x14F844u;
label_14f844:
    // 0x14f844: 0x10000005  b           . + 4 + (0x5 << 2)
label_14f848:
    if (ctx->pc == 0x14F848u) {
        ctx->pc = 0x14F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F844u;
        // 0x14f848: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F84Cu;
        goto label_14f84c;
    }
    ctx->pc = 0x14F844u;
    {
        const bool branch_taken_0x14f844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F844u;
        // 0x14f848: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f844) {
            ctx->pc = 0x14F85Cu;
            goto label_14f85c;
        }
    }
    ctx->pc = 0x14F84Cu;
label_14f84c:
    // 0x14f84c: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x14f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_14f850:
    // 0x14f850: 0x10000002  b           . + 4 + (0x2 << 2)
label_14f854:
    if (ctx->pc == 0x14F854u) {
        ctx->pc = 0x14F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F850u;
        // 0x14f854: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F858u;
        goto label_14f858;
    }
    ctx->pc = 0x14F850u;
    {
        const bool branch_taken_0x14f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F850u;
        // 0x14f854: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f850) {
            ctx->pc = 0x14F85Cu;
            goto label_14f85c;
        }
    }
    ctx->pc = 0x14F858u;
label_14f858:
    // 0x14f858: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f85c:
    // 0x14f85c: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x14f85cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_14f860:
    // 0x14f860: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x14f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_14f864:
    // 0x14f864: 0x50a2000c  beql        $a1, $v0, . + 4 + (0xC << 2)
label_14f868:
    if (ctx->pc == 0x14F868u) {
        ctx->pc = 0x14F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F864u;
        // 0x14f868: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F86Cu;
        goto label_14f86c;
    }
    ctx->pc = 0x14F864u;
    {
        const bool branch_taken_0x14f864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f864) {
            ctx->pc = 0x14F868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F864u;
            // 0x14f868: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F898u;
            goto label_14f898;
        }
    }
    ctx->pc = 0x14F86Cu;
label_14f86c:
    // 0x14f86c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14f86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14f870:
    // 0x14f870: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x14f870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14f874:
    // 0x14f874: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14f874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14f878:
    // 0x14f878: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x14f878u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_14f87c:
    // 0x14f87c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_14f880:
    if (ctx->pc == 0x14F880u) {
        ctx->pc = 0x14F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F87Cu;
        // 0x14f880: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F884u;
        goto label_14f884;
    }
    ctx->pc = 0x14F87Cu;
    {
        const bool branch_taken_0x14f87c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f87c) {
            ctx->pc = 0x14F880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F87Cu;
            // 0x14f880: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F88Cu;
            goto label_14f88c;
        }
    }
    ctx->pc = 0x14F884u;
label_14f884:
    // 0x14f884: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14f884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f888:
    // 0x14f888: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x14f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_14f88c:
    // 0x14f88c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14f88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f890:
    // 0x14f890: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14f890u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14f894:
    // 0x14f894: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x14f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14f898:
    // 0x14f898: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x14f898u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_14f89c:
    // 0x14f89c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14f8a0:
    // 0x14f8a0: 0xc0533cc  jal         func_14CF30
label_14f8a4:
    if (ctx->pc == 0x14F8A4u) {
        ctx->pc = 0x14F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8A0u;
        // 0x14f8a4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8A8u;
        goto label_14f8a8;
    }
    ctx->pc = 0x14F8A0u;
    SET_GPR_U32(ctx, 31, 0x14F8A8u);
    ctx->pc = 0x14F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F8A0u;
    // 0x14f8a4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF30u, 0x14F8A0u, 0x14F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F8A8u;
label_14f8a8:
    // 0x14f8a8: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x14f8a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f8ac:
    // 0x14f8ac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14f8b0:
    // 0x14f8b0: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
label_14f8b4:
    if (ctx->pc == 0x14F8B4u) {
        ctx->pc = 0x14F8B8u;
        goto label_14f8b8;
    }
    ctx->pc = 0x14F8B0u;
    {
        const bool branch_taken_0x14f8b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f8b0) {
            ctx->pc = 0x14F8C0u;
            goto label_14f8c0;
        }
    }
    ctx->pc = 0x14F8B8u;
label_14f8b8:
    // 0x14f8b8: 0x10000269  b           . + 4 + (0x269 << 2)
label_14f8bc:
    if (ctx->pc == 0x14F8BCu) {
        ctx->pc = 0x14F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8B8u;
        // 0x14f8bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8C0u;
        goto label_14f8c0;
    }
    ctx->pc = 0x14F8B8u;
    {
        const bool branch_taken_0x14f8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8B8u;
        // 0x14f8bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8b8) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F8C0u;
label_14f8c0:
    // 0x14f8c0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_14f8c4:
    // 0x14f8c4: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x14f8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14f8c8:
    // 0x14f8c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14f8c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f8cc:
    // 0x14f8cc: 0x24845d40  addiu       $a0, $a0, 0x5D40
    ctx->pc = 0x14f8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23872));
label_14f8d0:
    // 0x14f8d0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x14f8d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_14f8d4:
    // 0x14f8d4: 0x50430019  beql        $v0, $v1, . + 4 + (0x19 << 2)
label_14f8d8:
    if (ctx->pc == 0x14F8D8u) {
        ctx->pc = 0x14F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8D4u;
        // 0x14f8d8: 0x32c500ff  andi        $a1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8DCu;
        goto label_14f8dc;
    }
    ctx->pc = 0x14F8D4u;
    {
        const bool branch_taken_0x14f8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f8d4) {
            ctx->pc = 0x14F8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F8D4u;
            // 0x14f8d8: 0x32c500ff  andi        $a1, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F93Cu;
            goto label_14f93c;
        }
    }
    ctx->pc = 0x14F8DCu;
label_14f8dc:
    // 0x14f8dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14f8dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_14f8e0:
    // 0x14f8e0: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x14f8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_14f8e4:
    // 0x14f8e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_14f8e8:
    if (ctx->pc == 0x14F8E8u) {
        ctx->pc = 0x14F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8E4u;
        // 0x14f8e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8ECu;
        goto label_14f8ec;
    }
    ctx->pc = 0x14F8E4u;
    {
        const bool branch_taken_0x14f8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8E4u;
        // 0x14f8e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8e4) {
            ctx->pc = 0x14F8D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f8d0;
        }
    }
    ctx->pc = 0x14F8ECu;
label_14f8ec:
    // 0x14f8ec: 0x1000025c  b           . + 4 + (0x25C << 2)
label_14f8f0:
    if (ctx->pc == 0x14F8F0u) {
        ctx->pc = 0x14F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8ECu;
        // 0x14f8f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8F4u;
        goto label_14f8f4;
    }
    ctx->pc = 0x14F8ECu;
    {
        const bool branch_taken_0x14f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8ECu;
        // 0x14f8f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8ec) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F8F4u;
label_14f8f4:
    // 0x14f8f4: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x14f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14f8f8:
    // 0x14f8f8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_14f8fc:
    // 0x14f8fc: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x14f8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_14f900:
    // 0x14f900: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14f900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f904:
    // 0x14f904: 0x24845d40  addiu       $a0, $a0, 0x5D40
    ctx->pc = 0x14f904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23872));
label_14f908:
    // 0x14f908: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x14f908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_14f90c:
    // 0x14f90c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x14f90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_14f910:
    // 0x14f910: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x14f910u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f914:
    // 0x14f914: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x14f914u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_14f918:
    // 0x14f918: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_14f91c:
    if (ctx->pc == 0x14F91Cu) {
        ctx->pc = 0x14F920u;
        goto label_14f920;
    }
    ctx->pc = 0x14F918u;
    {
        const bool branch_taken_0x14f918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f918) {
            ctx->pc = 0x14F938u;
            goto label_14f938;
        }
    }
    ctx->pc = 0x14F920u;
label_14f920:
    // 0x14f920: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14f920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_14f924:
    // 0x14f924: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x14f924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_14f928:
    // 0x14f928: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_14f92c:
    if (ctx->pc == 0x14F92Cu) {
        ctx->pc = 0x14F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F928u;
        // 0x14f92c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F930u;
        goto label_14f930;
    }
    ctx->pc = 0x14F928u;
    {
        const bool branch_taken_0x14f928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F928u;
        // 0x14f92c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f928) {
            ctx->pc = 0x14F914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f914;
        }
    }
    ctx->pc = 0x14F930u;
label_14f930:
    // 0x14f930: 0x1000024b  b           . + 4 + (0x24B << 2)
label_14f934:
    if (ctx->pc == 0x14F934u) {
        ctx->pc = 0x14F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F930u;
        // 0x14f934: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F938u;
        goto label_14f938;
    }
    ctx->pc = 0x14F930u;
    {
        const bool branch_taken_0x14f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F930u;
        // 0x14f934: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f930) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14F938u;
label_14f938:
    // 0x14f938: 0x32c500ff  andi        $a1, $s6, 0xFF
    ctx->pc = 0x14f938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_14f93c:
    // 0x14f93c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f940:
    // 0x14f940: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x14f940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_14f944:
    // 0x14f944: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x14f944u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_14f948:
    // 0x14f948: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14f948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14f94c:
    // 0x14f94c: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14f950:
    // 0x14f950: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14f950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14f954:
    // 0x14f954: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14f954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14f958:
    // 0x14f958: 0x391c0  sll         $s2, $v1, 7
    ctx->pc = 0x14f958u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14f95c:
    // 0x14f95c: 0xc052abc  jal         func_14AAF0
label_14f960:
    if (ctx->pc == 0x14F960u) {
        ctx->pc = 0x14F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F95Cu;
        // 0x14f960: 0x52b821  addu        $s7, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F964u;
        goto label_14f964;
    }
    ctx->pc = 0x14F95Cu;
    SET_GPR_U32(ctx, 31, 0x14F964u);
    ctx->pc = 0x14F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F95Cu;
    // 0x14f960: 0x52b821  addu        $s7, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AAF0u, 0x14F95Cu, 0x14F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F964u;
label_14f964:
    // 0x14f964: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x14f964u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_14f968:
    // 0x14f968: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14f968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14f96c:
    // 0x14f96c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f970:
    // 0x14f970: 0x24635dc4  addiu       $v1, $v1, 0x5DC4
    ctx->pc = 0x14f970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24004));
label_14f974:
    // 0x14f974: 0x24429f10  addiu       $v0, $v0, -0x60F0
    ctx->pc = 0x14f974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942480));
label_14f978:
    // 0x14f978: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x14f978u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_14f97c:
    // 0x14f97c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f980:
    // 0x14f980: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x14f980u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_14f984:
    // 0x14f984: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x14f984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_14f988:
    // 0x14f988: 0x72a021  addu        $s4, $v1, $s2
    ctx->pc = 0x14f988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14f98c:
    // 0x14f98c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14f990:
    // 0x14f990: 0x24429f14  addiu       $v0, $v0, -0x60EC
    ctx->pc = 0x14f990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942484));
label_14f994:
    // 0x14f994: 0x52a821  addu        $s5, $v0, $s2
    ctx->pc = 0x14f994u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14f998:
    // 0x14f998: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x14f998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_14f99c:
    // 0x14f99c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x14f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_14f9a0:
    // 0x14f9a0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x14f9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_14f9a4:
    // 0x14f9a4: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x14f9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_14f9a8:
    // 0x14f9a8: 0xc06e4a0  jal         func_1B9280
label_14f9ac:
    if (ctx->pc == 0x14F9ACu) {
        ctx->pc = 0x14F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9A8u;
        // 0x14f9ac: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F9B0u;
        goto label_14f9b0;
    }
    ctx->pc = 0x14F9A8u;
    SET_GPR_U32(ctx, 31, 0x14F9B0u);
    ctx->pc = 0x14F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9A8u;
    // 0x14f9ac: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14F9A8u, 0x14F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9B0u;
label_14f9b0:
    // 0x14f9b0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14f9b4:
    // 0x14f9b4: 0xc06d28c  jal         func_1B4A30
label_14f9b8:
    if (ctx->pc == 0x14F9B8u) {
        ctx->pc = 0x14F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9B4u;
        // 0x14f9b8: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F9BCu;
        goto label_14f9bc;
    }
    ctx->pc = 0x14F9B4u;
    SET_GPR_U32(ctx, 31, 0x14F9BCu);
    ctx->pc = 0x14F9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9B4u;
    // 0x14f9b8: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14F9B4u, 0x14F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9BCu;
label_14f9bc:
    // 0x14f9bc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14f9c0:
    // 0x14f9c0: 0xc06e822  jal         func_1BA088
label_14f9c4:
    if (ctx->pc == 0x14F9C4u) {
        ctx->pc = 0x14F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9C0u;
        // 0x14f9c4: 0x8ee50000  lw          $a1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F9C8u;
        goto label_14f9c8;
    }
    ctx->pc = 0x14F9C0u;
    SET_GPR_U32(ctx, 31, 0x14F9C8u);
    ctx->pc = 0x14F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9C0u;
    // 0x14f9c4: 0x8ee50000  lw          $a1, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x14F9C0u, 0x14F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9C8u;
label_14f9c8:
    // 0x14f9c8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14f9cc:
    // 0x14f9cc: 0xc06d28c  jal         func_1B4A30
label_14f9d0:
    if (ctx->pc == 0x14F9D0u) {
        ctx->pc = 0x14F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9CCu;
        // 0x14f9d0: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F9D4u;
        goto label_14f9d4;
    }
    ctx->pc = 0x14F9CCu;
    SET_GPR_U32(ctx, 31, 0x14F9D4u);
    ctx->pc = 0x14F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9CCu;
    // 0x14f9d0: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14F9CCu, 0x14F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9D4u;
label_14f9d4:
    // 0x14f9d4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x14f9d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_14f9d8:
    // 0x14f9d8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14f9dc:
    // 0x14f9dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14f9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14f9e0:
    // 0x14f9e0: 0xc06e75a  jal         func_1B9D68
label_14f9e4:
    if (ctx->pc == 0x14F9E4u) {
        ctx->pc = 0x14F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9E0u;
        // 0x14f9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F9E8u;
        goto label_14f9e8;
    }
    ctx->pc = 0x14F9E0u;
    SET_GPR_U32(ctx, 31, 0x14F9E8u);
    ctx->pc = 0x14F9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9E0u;
    // 0x14f9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x14F9E0u, 0x14F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9E8u;
label_14f9e8:
    // 0x14f9e8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14f9ec:
    // 0x14f9ec: 0xc06d28c  jal         func_1B4A30
label_14f9f0:
    if (ctx->pc == 0x14F9F0u) {
        ctx->pc = 0x14F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9ECu;
        // 0x14f9f0: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F9F4u;
        goto label_14f9f4;
    }
    ctx->pc = 0x14F9ECu;
    SET_GPR_U32(ctx, 31, 0x14F9F4u);
    ctx->pc = 0x14F9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9ECu;
    // 0x14f9f0: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14F9ECu, 0x14F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9F4u;
label_14f9f4:
    // 0x14f9f4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x14f9f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_14f9f8:
    // 0x14f9f8: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x14f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_14f9fc:
    // 0x14f9fc: 0x732823  subu        $a1, $v1, $s3
    ctx->pc = 0x14f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fa00:
    // 0x14fa00: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_14fa04:
    // 0x14fa04: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14fa08:
    // 0x14fa08: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x14fa08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14fa0c:
    // 0x14fa0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_14fa10:
    // 0x14fa10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x14fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_14fa14:
    // 0x14fa14: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x14fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
label_14fa18:
    // 0x14fa18: 0x2442b2c0  addiu       $v0, $v0, -0x4D40
    ctx->pc = 0x14fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947520));
label_14fa1c:
    // 0x14fa1c: 0xc06f098  jal         func_1BC260
label_14fa20:
    if (ctx->pc == 0x14FA20u) {
        ctx->pc = 0x14FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA1Cu;
        // 0x14fa20: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FA24u;
        goto label_14fa24;
    }
    ctx->pc = 0x14FA1Cu;
    SET_GPR_U32(ctx, 31, 0x14FA24u);
    ctx->pc = 0x14FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA1Cu;
    // 0x14fa20: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC260u, 0x14FA1Cu, 0x14FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA24u;
label_14fa24:
    // 0x14fa24: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fa28:
    // 0x14fa28: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x14fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14fa2c:
    // 0x14fa2c: 0x24429f00  addiu       $v0, $v0, -0x6100
    ctx->pc = 0x14fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
label_14fa30:
    // 0x14fa30: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14fa34:
    // 0x14fa34: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_14fa38:
    if (ctx->pc == 0x14FA38u) {
        ctx->pc = 0x14FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA34u;
        // 0x14fa38: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FA3Cu;
        goto label_14fa3c;
    }
    ctx->pc = 0x14FA34u;
    {
        const bool branch_taken_0x14fa34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA34u;
        // 0x14fa38: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa34) {
            ctx->pc = 0x14FA84u;
            goto label_14fa84;
        }
    }
    ctx->pc = 0x14FA3Cu;
label_14fa3c:
    // 0x14fa3c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_14fa40:
    // 0x14fa40: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14fa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14fa44:
    // 0x14fa44: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_14fa48:
    if (ctx->pc == 0x14FA48u) {
        ctx->pc = 0x14FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA44u;
        // 0x14fa48: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FA4Cu;
        goto label_14fa4c;
    }
    ctx->pc = 0x14FA44u;
    {
        const bool branch_taken_0x14fa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa44) {
            ctx->pc = 0x14FA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FA44u;
            // 0x14fa48: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FA64u;
            goto label_14fa64;
        }
    }
    ctx->pc = 0x14FA4Cu;
label_14fa4c:
    // 0x14fa4c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fa50:
    // 0x14fa50: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x14fa50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_14fa54:
    // 0x14fa54: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x14fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_14fa58:
    // 0x14fa58: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14fa5c:
    // 0x14fa5c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x14fa5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_14fa60:
    // 0x14fa60: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14fa64:
    // 0x14fa64: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14fa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14fa68:
    // 0x14fa68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14fa6c:
    if (ctx->pc == 0x14FA6Cu) {
        ctx->pc = 0x14FA70u;
        goto label_14fa70;
    }
    ctx->pc = 0x14FA68u;
    {
        const bool branch_taken_0x14fa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa68) {
            ctx->pc = 0x14FA84u;
            goto label_14fa84;
        }
    }
    ctx->pc = 0x14FA70u;
label_14fa70:
    // 0x14fa70: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fa74:
    // 0x14fa74: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x14fa74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_14fa78:
    // 0x14fa78: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x14fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_14fa7c:
    // 0x14fa7c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14fa80:
    // 0x14fa80: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x14fa80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_14fa84:
    // 0x14fa84: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14fa88:
    // 0x14fa88: 0x16163c  dsll32      $v0, $s6, 24
    ctx->pc = 0x14fa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 24));
label_14fa8c:
    // 0x14fa8c: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x14fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
label_14fa90:
    // 0x14fa90: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x14fa90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_14fa94:
    // 0x14fa94: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14fa98:
    // 0x14fa98: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x14fa98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_14fa9c:
    // 0x14fa9c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14faa0:
    // 0x14faa0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x14faa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_14faa4:
    // 0x14faa4: 0x24639f04  addiu       $v1, $v1, -0x60FC
    ctx->pc = 0x14faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942468));
label_14faa8:
    // 0x14faa8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x14faa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_14faac:
    // 0x14faac: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14fab0:
    // 0x14fab0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_14fab4:
    // 0x14fab4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14fab8:
    // 0x14fab8: 0x24639f0a  addiu       $v1, $v1, -0x60F6
    ctx->pc = 0x14fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942474));
label_14fabc:
    // 0x14fabc: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14fac0:
    // 0x14fac0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14fac4:
    // 0x14fac4: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x14fac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_14fac8:
    // 0x14fac8: 0x24639f16  addiu       $v1, $v1, -0x60EA
    ctx->pc = 0x14fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942486));
label_14facc:
    // 0x14facc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14faccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14fad0:
    // 0x14fad0: 0xa07e0000  sb          $fp, 0x0($v1)
    ctx->pc = 0x14fad0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 30));
label_14fad4:
    // 0x14fad4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14fad8:
    // 0x14fad8: 0x24639f18  addiu       $v1, $v1, -0x60E8
    ctx->pc = 0x14fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942488));
label_14fadc:
    // 0x14fadc: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14fae0:
    // 0x14fae0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14fae4:
    // 0x14fae4: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x14fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_14fae8:
    // 0x14fae8: 0x24639f15  addiu       $v1, $v1, -0x60EB
    ctx->pc = 0x14fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942485));
label_14faec:
    // 0x14faec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14faecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_14faf0:
    // 0x14faf0: 0x100001db  b           . + 4 + (0x1DB << 2)
label_14faf4:
    if (ctx->pc == 0x14FAF4u) {
        ctx->pc = 0x14FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAF0u;
        // 0x14faf4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FAF8u;
        goto label_14faf8;
    }
    ctx->pc = 0x14FAF0u;
    {
        const bool branch_taken_0x14faf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAF0u;
        // 0x14faf4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14faf0) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14FAF8u;
label_14faf8:
    // 0x14faf8: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x14faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14fafc:
    // 0x14fafc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14fb00:
    // 0x14fb00: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x14fb00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_14fb04:
    // 0x14fb04: 0x8c4600dc  lw          $a2, 0xDC($v0)
    ctx->pc = 0x14fb04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_14fb08:
    // 0x14fb08: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x14fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_14fb0c:
    // 0x14fb0c: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x14fb0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_14fb10:
    // 0x14fb10: 0x30850007  andi        $a1, $a0, 0x7
    ctx->pc = 0x14fb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_14fb14:
    // 0x14fb14: 0x30c4000c  andi        $a0, $a2, 0xC
    ctx->pc = 0x14fb14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
label_14fb18:
    // 0x14fb18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_14fb1c:
    // 0x14fb1c: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_14fb20:
    if (ctx->pc == 0x14FB20u) {
        ctx->pc = 0x14FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB1Cu;
        // 0x14fb20: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB24u;
        goto label_14fb24;
    }
    ctx->pc = 0x14FB1Cu;
    {
        const bool branch_taken_0x14fb1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x14FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB1Cu;
        // 0x14fb20: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb1c) {
            ctx->pc = 0x14FB50u;
            goto label_14fb50;
        }
    }
    ctx->pc = 0x14FB24u;
label_14fb24:
    // 0x14fb24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14fb28:
    // 0x14fb28: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
label_14fb2c:
    if (ctx->pc == 0x14FB2Cu) {
        ctx->pc = 0x14FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB28u;
        // 0x14fb2c: 0x24830002  addiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB30u;
        goto label_14fb30;
    }
    ctx->pc = 0x14FB28u;
    {
        const bool branch_taken_0x14fb28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x14fb28) {
            ctx->pc = 0x14FB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FB28u;
            // 0x14fb2c: 0x24830002  addiu       $v1, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB48u;
            goto label_14fb48;
        }
    }
    ctx->pc = 0x14FB30u;
label_14fb30:
    // 0x14fb30: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_14fb34:
    if (ctx->pc == 0x14FB34u) {
        ctx->pc = 0x14FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB30u;
        // 0x14fb34: 0x24830002  addiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB38u;
        goto label_14fb38;
    }
    ctx->pc = 0x14FB30u;
    {
        const bool branch_taken_0x14fb30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb30) {
            ctx->pc = 0x14FB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FB30u;
            // 0x14fb34: 0x24830002  addiu       $v1, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB40u;
            goto label_14fb40;
        }
    }
    ctx->pc = 0x14FB38u;
label_14fb38:
    // 0x14fb38: 0x10000008  b           . + 4 + (0x8 << 2)
label_14fb3c:
    if (ctx->pc == 0x14FB3Cu) {
        ctx->pc = 0x14FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB38u;
        // 0x14fb3c: 0x24830002  addiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB40u;
        goto label_14fb40;
    }
    ctx->pc = 0x14FB38u;
    {
        const bool branch_taken_0x14fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB38u;
        // 0x14fb3c: 0x24830002  addiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb38) {
            ctx->pc = 0x14FB5Cu;
            goto label_14fb5c;
        }
    }
    ctx->pc = 0x14FB40u;
label_14fb40:
    // 0x14fb40: 0x10000007  b           . + 4 + (0x7 << 2)
label_14fb44:
    if (ctx->pc == 0x14FB44u) {
        ctx->pc = 0x14FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB40u;
        // 0x14fb44: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB48u;
        goto label_14fb48;
    }
    ctx->pc = 0x14FB40u;
    {
        const bool branch_taken_0x14fb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB40u;
        // 0x14fb44: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb40) {
            ctx->pc = 0x14FB60u;
            goto label_14fb60;
        }
    }
    ctx->pc = 0x14FB48u;
label_14fb48:
    // 0x14fb48: 0x10000005  b           . + 4 + (0x5 << 2)
label_14fb4c:
    if (ctx->pc == 0x14FB4Cu) {
        ctx->pc = 0x14FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB48u;
        // 0x14fb4c: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB50u;
        goto label_14fb50;
    }
    ctx->pc = 0x14FB48u;
    {
        const bool branch_taken_0x14fb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB48u;
        // 0x14fb4c: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb48) {
            ctx->pc = 0x14FB60u;
            goto label_14fb60;
        }
    }
    ctx->pc = 0x14FB50u;
label_14fb50:
    // 0x14fb50: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x14fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_14fb54:
    // 0x14fb54: 0x10000002  b           . + 4 + (0x2 << 2)
label_14fb58:
    if (ctx->pc == 0x14FB58u) {
        ctx->pc = 0x14FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB54u;
        // 0x14fb58: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB5Cu;
        goto label_14fb5c;
    }
    ctx->pc = 0x14FB54u;
    {
        const bool branch_taken_0x14fb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB54u;
        // 0x14fb58: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb54) {
            ctx->pc = 0x14FB60u;
            goto label_14fb60;
        }
    }
    ctx->pc = 0x14FB5Cu;
label_14fb5c:
    // 0x14fb5c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x14fb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14fb60:
    // 0x14fb60: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14fb60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14fb64:
    // 0x14fb64: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x14fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_14fb68:
    // 0x14fb68: 0x50c3000c  beql        $a2, $v1, . + 4 + (0xC << 2)
label_14fb6c:
    if (ctx->pc == 0x14FB6Cu) {
        ctx->pc = 0x14FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB68u;
        // 0x14fb6c: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB70u;
        goto label_14fb70;
    }
    ctx->pc = 0x14FB68u;
    {
        const bool branch_taken_0x14fb68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x14fb68) {
            ctx->pc = 0x14FB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FB68u;
            // 0x14fb6c: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB9Cu;
            goto label_14fb9c;
        }
    }
    ctx->pc = 0x14FB70u;
label_14fb70:
    // 0x14fb70: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14fb70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_14fb74:
    // 0x14fb74: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x14fb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14fb78:
    // 0x14fb78: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x14fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_14fb7c:
    // 0x14fb7c: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x14fb7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_14fb80:
    // 0x14fb80: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_14fb84:
    if (ctx->pc == 0x14FB84u) {
        ctx->pc = 0x14FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB80u;
        // 0x14fb84: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB88u;
        goto label_14fb88;
    }
    ctx->pc = 0x14FB80u;
    {
        const bool branch_taken_0x14fb80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb80) {
            ctx->pc = 0x14FB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FB80u;
            // 0x14fb84: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB90u;
            goto label_14fb90;
        }
    }
    ctx->pc = 0x14FB88u;
label_14fb88:
    // 0x14fb88: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x14fb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14fb8c:
    // 0x14fb8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_14fb90:
    // 0x14fb90: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14fb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14fb94:
    // 0x14fb94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14fb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14fb98:
    // 0x14fb98: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x14fb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_14fb9c:
    // 0x14fb9c: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x14fb9cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_14fba0:
    // 0x14fba0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14fba4:
    // 0x14fba4: 0xc0533cc  jal         func_14CF30
label_14fba8:
    if (ctx->pc == 0x14FBA8u) {
        ctx->pc = 0x14FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBA4u;
        // 0x14fba8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FBACu;
        goto label_14fbac;
    }
    ctx->pc = 0x14FBA4u;
    SET_GPR_U32(ctx, 31, 0x14FBACu);
    ctx->pc = 0x14FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FBA4u;
    // 0x14fba8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF30u, 0x14FBA4u, 0x14FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBACu;
label_14fbac:
    // 0x14fbac: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x14fbacu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14fbb0:
    // 0x14fbb0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14fbb4:
    // 0x14fbb4: 0x56c20003  bnel        $s6, $v0, . + 4 + (0x3 << 2)
label_14fbb8:
    if (ctx->pc == 0x14FBB8u) {
        ctx->pc = 0x14FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBB4u;
        // 0x14fbb8: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FBBCu;
        goto label_14fbbc;
    }
    ctx->pc = 0x14FBB4u;
    {
        const bool branch_taken_0x14fbb4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fbb4) {
            ctx->pc = 0x14FBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FBB4u;
            // 0x14fbb8: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FBC4u;
            goto label_14fbc4;
        }
    }
    ctx->pc = 0x14FBBCu;
label_14fbbc:
    // 0x14fbbc: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_14fbc0:
    if (ctx->pc == 0x14FBC0u) {
        ctx->pc = 0x14FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBBCu;
        // 0x14fbc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FBC4u;
        goto label_14fbc4;
    }
    ctx->pc = 0x14FBBCu;
    {
        const bool branch_taken_0x14fbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBBCu;
        // 0x14fbc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbbc) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14FBC4u;
label_14fbc4:
    // 0x14fbc4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_14fbc8:
    // 0x14fbc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14fbc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14fbcc:
    // 0x14fbcc: 0x24845d80  addiu       $a0, $a0, 0x5D80
    ctx->pc = 0x14fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23936));
label_14fbd0:
    // 0x14fbd0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x14fbd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_14fbd4:
    // 0x14fbd4: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_14fbd8:
    if (ctx->pc == 0x14FBD8u) {
        ctx->pc = 0x14FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBD4u;
        // 0x14fbd8: 0x8fa3011c  lw          $v1, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FBDCu;
        goto label_14fbdc;
    }
    ctx->pc = 0x14FBD4u;
    {
        const bool branch_taken_0x14fbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14fbd4) {
            ctx->pc = 0x14FBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FBD4u;
            // 0x14fbd8: 0x8fa3011c  lw          $v1, 0x11C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FBF4u;
            goto label_14fbf4;
        }
    }
    ctx->pc = 0x14FBDCu;
label_14fbdc:
    // 0x14fbdc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14fbdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_14fbe0:
    // 0x14fbe0: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x14fbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_14fbe4:
    // 0x14fbe4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_14fbe8:
    if (ctx->pc == 0x14FBE8u) {
        ctx->pc = 0x14FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBE4u;
        // 0x14fbe8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FBECu;
        goto label_14fbec;
    }
    ctx->pc = 0x14FBE4u;
    {
        const bool branch_taken_0x14fbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBE4u;
        // 0x14fbe8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbe4) {
            ctx->pc = 0x14FBD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14fbd0;
        }
    }
    ctx->pc = 0x14FBECu;
label_14fbec:
    // 0x14fbec: 0x1000019c  b           . + 4 + (0x19C << 2)
label_14fbf0:
    if (ctx->pc == 0x14FBF0u) {
        ctx->pc = 0x14FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBECu;
        // 0x14fbf0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FBF4u;
        goto label_14fbf4;
    }
    ctx->pc = 0x14FBECu;
    {
        const bool branch_taken_0x14fbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBECu;
        // 0x14fbf0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbec) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x14FBF4u;
label_14fbf4:
    // 0x14fbf4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x14fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_14fbf8:
    // 0x14fbf8: 0x946300ea  lhu         $v1, 0xEA($v1)
    ctx->pc = 0x14fbf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 234)));
label_14fbfc:
    // 0x14fbfc: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
label_14fc00:
    if (ctx->pc == 0x14FC00u) {
        ctx->pc = 0x14FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBFCu;
        // 0x14fc00: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC04u;
        goto label_14fc04;
    }
    ctx->pc = 0x14FBFCu;
    {
        const bool branch_taken_0x14fbfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fbfc) {
            ctx->pc = 0x14FC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FBFCu;
            // 0x14fc00: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FC78u;
            goto label_14fc78;
        }
    }
    ctx->pc = 0x14FC04u;
label_14fc04:
    // 0x14fc04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14fc08:
    // 0x14fc08: 0x5662000e  bnel        $s3, $v0, . + 4 + (0xE << 2)
label_14fc0c:
    if (ctx->pc == 0x14FC0Cu) {
        ctx->pc = 0x14FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC08u;
        // 0x14fc0c: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC10u;
        goto label_14fc10;
    }
    ctx->pc = 0x14FC08u;
    {
        const bool branch_taken_0x14fc08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fc08) {
            ctx->pc = 0x14FC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC08u;
            // 0x14fc0c: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FC44u;
            goto label_14fc44;
        }
    }
    ctx->pc = 0x14FC10u;
label_14fc10:
    // 0x14fc10: 0x32d300ff  andi        $s3, $s6, 0xFF
    ctx->pc = 0x14fc10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_14fc14:
    // 0x14fc14: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fc18:
    // 0x14fc18: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x14fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_14fc1c:
    // 0x14fc1c: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14fc20:
    // 0x14fc20: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fc24:
    // 0x14fc24: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x14fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_14fc28:
    // 0x14fc28: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14fc2c:
    // 0x14fc2c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fc30:
    // 0x14fc30: 0x3a9c0  sll         $s5, $v1, 7
    ctx->pc = 0x14fc30u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14fc34:
    // 0x14fc34: 0xc052ae0  jal         func_14AB80
label_14fc38:
    if (ctx->pc == 0x14FC38u) {
        ctx->pc = 0x14FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC34u;
        // 0x14fc38: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC3Cu;
        goto label_14fc3c;
    }
    ctx->pc = 0x14FC34u;
    SET_GPR_U32(ctx, 31, 0x14FC3Cu);
    ctx->pc = 0x14FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC34u;
    // 0x14fc38: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB80u, 0x14FC34u, 0x14FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC3Cu;
label_14fc3c:
    // 0x14fc3c: 0x1000008b  b           . + 4 + (0x8B << 2)
label_14fc40:
    if (ctx->pc == 0x14FC40u) {
        ctx->pc = 0x14FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC3Cu;
        // 0x14fc40: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC44u;
        goto label_14fc44;
    }
    ctx->pc = 0x14FC3Cu;
    {
        const bool branch_taken_0x14fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC3Cu;
        // 0x14fc40: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc3c) {
            ctx->pc = 0x14FE6Cu;
            goto label_14fe6c;
        }
    }
    ctx->pc = 0x14FC44u;
label_14fc44:
    // 0x14fc44: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fc48:
    // 0x14fc48: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x14fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_14fc4c:
    // 0x14fc4c: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x14fc4cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_14fc50:
    // 0x14fc50: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fc54:
    // 0x14fc54: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14fc58:
    // 0x14fc58: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14fc5c:
    // 0x14fc5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14fc60:
    // 0x14fc60: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fc64:
    // 0x14fc64: 0x3a9c0  sll         $s5, $v1, 7
    ctx->pc = 0x14fc64u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14fc68:
    // 0x14fc68: 0xc052a80  jal         func_14AA00
label_14fc6c:
    if (ctx->pc == 0x14FC6Cu) {
        ctx->pc = 0x14FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC68u;
        // 0x14fc6c: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC70u;
        goto label_14fc70;
    }
    ctx->pc = 0x14FC68u;
    SET_GPR_U32(ctx, 31, 0x14FC70u);
    ctx->pc = 0x14FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC68u;
    // 0x14fc6c: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA00u, 0x14FC68u, 0x14FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC70u;
label_14fc70:
    // 0x14fc70: 0x1000007e  b           . + 4 + (0x7E << 2)
label_14fc74:
    if (ctx->pc == 0x14FC74u) {
        ctx->pc = 0x14FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC70u;
        // 0x14fc74: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC78u;
        goto label_14fc78;
    }
    ctx->pc = 0x14FC70u;
    {
        const bool branch_taken_0x14fc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC70u;
        // 0x14fc74: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc70) {
            ctx->pc = 0x14FE6Cu;
            goto label_14fe6c;
        }
    }
    ctx->pc = 0x14FC78u;
label_14fc78:
    // 0x14fc78: 0x5462002e  bnel        $v1, $v0, . + 4 + (0x2E << 2)
label_14fc7c:
    if (ctx->pc == 0x14FC7Cu) {
        ctx->pc = 0x14FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC78u;
        // 0x14fc7c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC80u;
        goto label_14fc80;
    }
    ctx->pc = 0x14FC78u;
    {
        const bool branch_taken_0x14fc78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fc78) {
            ctx->pc = 0x14FC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC78u;
            // 0x14fc7c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FD34u;
            goto label_14fd34;
        }
    }
    ctx->pc = 0x14FC80u;
label_14fc80:
    // 0x14fc80: 0x2662fff8  addiu       $v0, $s3, -0x8
    ctx->pc = 0x14fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
label_14fc84:
    // 0x14fc84: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x14fc84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14fc88:
    // 0x14fc88: 0x5020000e  beql        $at, $zero, . + 4 + (0xE << 2)
label_14fc8c:
    if (ctx->pc == 0x14FC8Cu) {
        ctx->pc = 0x14FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC88u;
        // 0x14fc8c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC90u;
        goto label_14fc90;
    }
    ctx->pc = 0x14FC88u;
    {
        const bool branch_taken_0x14fc88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc88) {
            ctx->pc = 0x14FC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC88u;
            // 0x14fc8c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FCC4u;
            goto label_14fcc4;
        }
    }
    ctx->pc = 0x14FC90u;
label_14fc90:
    // 0x14fc90: 0x32d300ff  andi        $s3, $s6, 0xFF
    ctx->pc = 0x14fc90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_14fc94:
    // 0x14fc94: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fc98:
    // 0x14fc98: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x14fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_14fc9c:
    // 0x14fc9c: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14fca0:
    // 0x14fca0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fca4:
    // 0x14fca4: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x14fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_14fca8:
    // 0x14fca8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14fcac:
    // 0x14fcac: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fcb0:
    // 0x14fcb0: 0x3a9c0  sll         $s5, $v1, 7
    ctx->pc = 0x14fcb0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14fcb4:
    // 0x14fcb4: 0xc052ae0  jal         func_14AB80
label_14fcb8:
    if (ctx->pc == 0x14FCB8u) {
        ctx->pc = 0x14FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCB4u;
        // 0x14fcb8: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FCBCu;
        goto label_14fcbc;
    }
    ctx->pc = 0x14FCB4u;
    SET_GPR_U32(ctx, 31, 0x14FCBCu);
    ctx->pc = 0x14FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCB4u;
    // 0x14fcb8: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB80u, 0x14FCB4u, 0x14FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCBCu;
label_14fcbc:
    // 0x14fcbc: 0x1000006b  b           . + 4 + (0x6B << 2)
label_14fcc0:
    if (ctx->pc == 0x14FCC0u) {
        ctx->pc = 0x14FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCBCu;
        // 0x14fcc0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FCC4u;
        goto label_14fcc4;
    }
    ctx->pc = 0x14FCBCu;
    {
        const bool branch_taken_0x14fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCBCu;
        // 0x14fcc0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcbc) {
            ctx->pc = 0x14FE6Cu;
            goto label_14fe6c;
        }
    }
    ctx->pc = 0x14FCC4u;
label_14fcc4:
    // 0x14fcc4: 0x5662000e  bnel        $s3, $v0, . + 4 + (0xE << 2)
label_14fcc8:
    if (ctx->pc == 0x14FCC8u) {
        ctx->pc = 0x14FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCC4u;
        // 0x14fcc8: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FCCCu;
        goto label_14fccc;
    }
    ctx->pc = 0x14FCC4u;
    {
        const bool branch_taken_0x14fcc4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fcc4) {
            ctx->pc = 0x14FCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FCC4u;
            // 0x14fcc8: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FCCCu;
label_14fccc:
    // 0x14fccc: 0x32d300ff  andi        $s3, $s6, 0xFF
    ctx->pc = 0x14fcccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_14fcd0:
    // 0x14fcd0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fcd4:
    // 0x14fcd4: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x14fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_14fcd8:
    // 0x14fcd8: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14fcdc:
    // 0x14fcdc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fce0:
    // 0x14fce0: 0x240400dc  addiu       $a0, $zero, 0xDC
    ctx->pc = 0x14fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_14fce4:
    // 0x14fce4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14fce8:
    // 0x14fce8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fcec:
    // 0x14fcec: 0x3a9c0  sll         $s5, $v1, 7
    ctx->pc = 0x14fcecu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14fcf0:
    // 0x14fcf0: 0xc052ae0  jal         func_14AB80
label_14fcf4:
    if (ctx->pc == 0x14FCF4u) {
        ctx->pc = 0x14FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCF0u;
        // 0x14fcf4: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FCF8u;
        goto label_14fcf8;
    }
    ctx->pc = 0x14FCF0u;
    SET_GPR_U32(ctx, 31, 0x14FCF8u);
    ctx->pc = 0x14FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCF0u;
    // 0x14fcf4: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB80u, 0x14FCF0u, 0x14FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCF8u;
label_14fcf8:
    // 0x14fcf8: 0x1000005c  b           . + 4 + (0x5C << 2)
label_14fcfc:
    if (ctx->pc == 0x14FCFCu) {
        ctx->pc = 0x14FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCF8u;
        // 0x14fcfc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD00u;
        goto label_14fd00;
    }
    ctx->pc = 0x14FCF8u;
    {
        const bool branch_taken_0x14fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCF8u;
        // 0x14fcfc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcf8) {
            ctx->pc = 0x14FE6Cu;
            goto label_14fe6c;
        }
    }
    ctx->pc = 0x14FD00u;
label_14fd00:
    // 0x14fd00: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fd04:
    // 0x14fd04: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x14fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_14fd08:
    // 0x14fd08: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x14fd08u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_14fd0c:
    // 0x14fd0c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fd10:
    // 0x14fd10: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14fd14:
    // 0x14fd14: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14fd18:
    // 0x14fd18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14fd1c:
    // 0x14fd1c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fd20:
    // 0x14fd20: 0x3a9c0  sll         $s5, $v1, 7
    ctx->pc = 0x14fd20u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14fd24:
    // 0x14fd24: 0xc052a80  jal         func_14AA00
label_14fd28:
    if (ctx->pc == 0x14FD28u) {
        ctx->pc = 0x14FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD24u;
        // 0x14fd28: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD2Cu;
        goto label_14fd2c;
    }
    ctx->pc = 0x14FD24u;
    SET_GPR_U32(ctx, 31, 0x14FD2Cu);
    ctx->pc = 0x14FD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD24u;
    // 0x14fd28: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA00u, 0x14FD24u, 0x14FD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD2Cu;
label_14fd2c:
    // 0x14fd2c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_14fd30:
    if (ctx->pc == 0x14FD30u) {
        ctx->pc = 0x14FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD2Cu;
        // 0x14fd30: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD34u;
        goto label_14fd34;
    }
    ctx->pc = 0x14FD2Cu;
    {
        const bool branch_taken_0x14fd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD2Cu;
        // 0x14fd30: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd2c) {
            ctx->pc = 0x14FE6Cu;
            goto label_14fe6c;
        }
    }
    ctx->pc = 0x14FD34u;
label_14fd34:
    // 0x14fd34: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
label_14fd38:
    if (ctx->pc == 0x14FD38u) {
        ctx->pc = 0x14FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD34u;
        // 0x14fd38: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD3Cu;
        goto label_14fd3c;
    }
    ctx->pc = 0x14FD34u;
    {
        const bool branch_taken_0x14fd34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fd34) {
            ctx->pc = 0x14FD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FD34u;
            // 0x14fd38: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FDB4u;
            goto label_14fdb4;
        }
    }
    ctx->pc = 0x14FD3Cu;
label_14fd3c:
    // 0x14fd3c: 0x2662fff3  addiu       $v0, $s3, -0xD
    ctx->pc = 0x14fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967283));
label_14fd40:
    // 0x14fd40: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x14fd40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_14fd44:
    // 0x14fd44: 0x5020000e  beql        $at, $zero, . + 4 + (0xE << 2)
label_14fd48:
    if (ctx->pc == 0x14FD48u) {
        ctx->pc = 0x14FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD44u;
        // 0x14fd48: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD4Cu;
        goto label_14fd4c;
    }
    ctx->pc = 0x14FD44u;
    {
        const bool branch_taken_0x14fd44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fd44) {
            ctx->pc = 0x14FD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FD44u;
            // 0x14fd48: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FD80u;
            goto label_14fd80;
        }
    }
    ctx->pc = 0x14FD4Cu;
label_14fd4c:
    // 0x14fd4c: 0x32d300ff  andi        $s3, $s6, 0xFF
    ctx->pc = 0x14fd4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_14fd50:
    // 0x14fd50: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fd54:
    // 0x14fd54: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x14fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_14fd58:
    // 0x14fd58: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14fd5c:
    // 0x14fd5c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fd60:
    // 0x14fd60: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x14fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_14fd64:
    // 0x14fd64: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14fd68:
    // 0x14fd68: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fd6c:
    // 0x14fd6c: 0x3a9c0  sll         $s5, $v1, 7
    ctx->pc = 0x14fd6cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14fd70:
    // 0x14fd70: 0xc052ae0  jal         func_14AB80
label_14fd74:
    if (ctx->pc == 0x14FD74u) {
        ctx->pc = 0x14FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD70u;
        // 0x14fd74: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD78u;
        goto label_14fd78;
    }
    ctx->pc = 0x14FD70u;
    SET_GPR_U32(ctx, 31, 0x14FD78u);
    ctx->pc = 0x14FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD70u;
    // 0x14fd74: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB80u, 0x14FD70u, 0x14FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD78u;
label_14fd78:
    // 0x14fd78: 0x1000003c  b           . + 4 + (0x3C << 2)
label_14fd7c:
    if (ctx->pc == 0x14FD7Cu) {
        ctx->pc = 0x14FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD78u;
        // 0x14fd7c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD80u;
        goto label_14fd80;
    }
    ctx->pc = 0x14FD78u;
    {
        const bool branch_taken_0x14fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD78u;
        // 0x14fd7c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd78) {
            ctx->pc = 0x14FE6Cu;
            goto label_14fe6c;
        }
    }
    ctx->pc = 0x14FD80u;
label_14fd80:
    // 0x14fd80: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fd84:
    // 0x14fd84: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x14fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_14fd88:
    // 0x14fd88: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x14fd88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_14fd8c:
    // 0x14fd8c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fd90:
    // 0x14fd90: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14fd94:
    // 0x14fd94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14fd98:
    // 0x14fd98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14fd9c:
    // 0x14fd9c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fda0:
    // 0x14fda0: 0x3a9c0  sll         $s5, $v1, 7
    ctx->pc = 0x14fda0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14fda4:
    // 0x14fda4: 0xc052a80  jal         func_14AA00
label_14fda8:
    if (ctx->pc == 0x14FDA8u) {
        ctx->pc = 0x14FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDA4u;
        // 0x14fda8: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FDACu;
        goto label_14fdac;
    }
    ctx->pc = 0x14FDA4u;
    SET_GPR_U32(ctx, 31, 0x14FDACu);
    ctx->pc = 0x14FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDA4u;
    // 0x14fda8: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA00u, 0x14FDA4u, 0x14FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDACu;
label_14fdac:
    // 0x14fdac: 0x1000002f  b           . + 4 + (0x2F << 2)
label_14fdb0:
    if (ctx->pc == 0x14FDB0u) {
        ctx->pc = 0x14FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDACu;
        // 0x14fdb0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FDB4u;
        goto label_14fdb4;
    }
    ctx->pc = 0x14FDACu;
    {
        const bool branch_taken_0x14fdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDACu;
        // 0x14fdb0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdac) {
            ctx->pc = 0x14FE6Cu;
            goto label_14fe6c;
        }
    }
    ctx->pc = 0x14FDB4u;
label_14fdb4:
    // 0x14fdb4: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
label_14fdb8:
    if (ctx->pc == 0x14FDB8u) {
        ctx->pc = 0x14FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDB4u;
        // 0x14fdb8: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FDBCu;
        goto label_14fdbc;
    }
    ctx->pc = 0x14FDB4u;
    {
        const bool branch_taken_0x14fdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fdb4) {
            ctx->pc = 0x14FDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FDB4u;
            // 0x14fdb8: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FE3Cu;
            goto label_14fe3c;
        }
    }
    ctx->pc = 0x14FDBCu;
label_14fdbc:
    // 0x14fdbc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x14fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_14fdc0:
    // 0x14fdc0: 0x52620005  beql        $s3, $v0, . + 4 + (0x5 << 2)
label_14fdc4:
    if (ctx->pc == 0x14FDC4u) {
        ctx->pc = 0x14FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDC0u;
        // 0x14fdc4: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FDC8u;
        goto label_14fdc8;
    }
    ctx->pc = 0x14FDC0u;
    {
        const bool branch_taken_0x14fdc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14fdc0) {
            ctx->pc = 0x14FDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FDC0u;
            // 0x14fdc4: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FDD8u;
            goto label_14fdd8;
        }
    }
    ctx->pc = 0x14FDC8u;
label_14fdc8:
    // 0x14fdc8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14fdcc:
    // 0x14fdcc: 0x5662000e  bnel        $s3, $v0, . + 4 + (0xE << 2)
label_14fdd0:
    if (ctx->pc == 0x14FDD0u) {
        ctx->pc = 0x14FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDCCu;
        // 0x14fdd0: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FDD4u;
        goto label_14fdd4;
    }
    ctx->pc = 0x14FDCCu;
    {
        const bool branch_taken_0x14fdcc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fdcc) {
            ctx->pc = 0x14FDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FDCCu;
            // 0x14fdd0: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FE08u;
            goto label_14fe08;
        }
    }
    ctx->pc = 0x14FDD4u;
label_14fdd4:
    // 0x14fdd4: 0x32d300ff  andi        $s3, $s6, 0xFF
    ctx->pc = 0x14fdd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_14fdd8:
    // 0x14fdd8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fddc:
    // 0x14fddc: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x14fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_14fde0:
    // 0x14fde0: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14fde4:
    // 0x14fde4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fde8:
    // 0x14fde8: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x14fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_14fdec:
    // 0x14fdec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14fdf0:
    // 0x14fdf0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fdf4:
    // 0x14fdf4: 0x3a9c0  sll         $s5, $v1, 7
    ctx->pc = 0x14fdf4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14fdf8:
    // 0x14fdf8: 0xc052ae0  jal         func_14AB80
label_14fdfc:
    if (ctx->pc == 0x14FDFCu) {
        ctx->pc = 0x14FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDF8u;
        // 0x14fdfc: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FE00u;
        goto label_14fe00;
    }
    ctx->pc = 0x14FDF8u;
    SET_GPR_U32(ctx, 31, 0x14FE00u);
    ctx->pc = 0x14FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDF8u;
    // 0x14fdfc: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB80u, 0x14FDF8u, 0x14FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE00u;
label_14fe00:
    // 0x14fe00: 0x1000001a  b           . + 4 + (0x1A << 2)
label_14fe04:
    if (ctx->pc == 0x14FE04u) {
        ctx->pc = 0x14FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE00u;
        // 0x14fe04: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FE08u;
        goto label_14fe08;
    }
    ctx->pc = 0x14FE00u;
    {
        const bool branch_taken_0x14fe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE00u;
        // 0x14fe04: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe00) {
            ctx->pc = 0x14FE6Cu;
            goto label_14fe6c;
        }
    }
    ctx->pc = 0x14FE08u;
label_14fe08:
    // 0x14fe08: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fe0c:
    // 0x14fe0c: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x14fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_14fe10:
    // 0x14fe10: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x14fe10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_14fe14:
    // 0x14fe14: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fe18:
    // 0x14fe18: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14fe1c:
    // 0x14fe1c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14fe20:
    // 0x14fe20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14fe24:
    // 0x14fe24: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fe28:
    // 0x14fe28: 0x3a9c0  sll         $s5, $v1, 7
    ctx->pc = 0x14fe28u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14fe2c:
    // 0x14fe2c: 0xc052a80  jal         func_14AA00
label_14fe30:
    if (ctx->pc == 0x14FE30u) {
        ctx->pc = 0x14FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE2Cu;
        // 0x14fe30: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FE34u;
        goto label_14fe34;
    }
    ctx->pc = 0x14FE2Cu;
    SET_GPR_U32(ctx, 31, 0x14FE34u);
    ctx->pc = 0x14FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE2Cu;
    // 0x14fe30: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA00u, 0x14FE2Cu, 0x14FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE34u;
label_14fe34:
    // 0x14fe34: 0x1000000d  b           . + 4 + (0xD << 2)
label_14fe38:
    if (ctx->pc == 0x14FE38u) {
        ctx->pc = 0x14FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE34u;
        // 0x14fe38: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FE3Cu;
        goto label_14fe3c;
    }
    ctx->pc = 0x14FE34u;
    {
        const bool branch_taken_0x14fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE34u;
        // 0x14fe38: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe34) {
            ctx->pc = 0x14FE6Cu;
            goto label_14fe6c;
        }
    }
    ctx->pc = 0x14FE3Cu;
label_14fe3c:
    // 0x14fe3c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fe40:
    // 0x14fe40: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x14fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_14fe44:
    // 0x14fe44: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x14fe44u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_14fe48:
    // 0x14fe48: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fe4c:
    // 0x14fe4c: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x14fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_14fe50:
    // 0x14fe50: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14fe54:
    // 0x14fe54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14fe58:
    // 0x14fe58: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fe5c:
    // 0x14fe5c: 0x3a9c0  sll         $s5, $v1, 7
    ctx->pc = 0x14fe5cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14fe60:
    // 0x14fe60: 0xc052a80  jal         func_14AA00
label_14fe64:
    if (ctx->pc == 0x14FE64u) {
        ctx->pc = 0x14FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE60u;
        // 0x14fe64: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FE68u;
        goto label_14fe68;
    }
    ctx->pc = 0x14FE60u;
    SET_GPR_U32(ctx, 31, 0x14FE68u);
    ctx->pc = 0x14FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE60u;
    // 0x14fe64: 0x55a021  addu        $s4, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA00u, 0x14FE60u, 0x14FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE68u;
label_14fe68:
    // 0x14fe68: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x14fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_14fe6c:
    // 0x14fe6c: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x14fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_14fe70:
    // 0x14fe70: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14fe74:
    // 0x14fe74: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fe78:
    // 0x14fe78: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x14fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_14fe7c:
    // 0x14fe7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_14fe80:
    // 0x14fe80: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x14fe80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_14fe84:
    // 0x14fe84: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fe88:
    // 0x14fe88: 0x24429f10  addiu       $v0, $v0, -0x60F0
    ctx->pc = 0x14fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942480));
label_14fe8c:
    // 0x14fe8c: 0x399c0  sll         $s3, $v1, 7
    ctx->pc = 0x14fe8cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_14fe90:
    // 0x14fe90: 0x24a59f14  addiu       $a1, $a1, -0x60EC
    ctx->pc = 0x14fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942484));
label_14fe94:
    // 0x14fe94: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x14fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_14fe98:
    // 0x14fe98: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14fe9c:
    // 0x14fe9c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x14fe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_14fea0:
    // 0x14fea0: 0x24635dc4  addiu       $v1, $v1, 0x5DC4
    ctx->pc = 0x14fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24004));
label_14fea4:
    // 0x14fea4: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x14fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_14fea8:
    // 0x14fea8: 0x82060007  lb          $a2, 0x7($s0)
    ctx->pc = 0x14fea8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_14feac:
    // 0x14feac: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x14feacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_14feb0:
    // 0x14feb0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x14feb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_14feb4:
    // 0x14feb4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x14feb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_14feb8:
    // 0x14feb8: 0x73b821  addu        $s7, $v1, $s3
    ctx->pc = 0x14feb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14febc:
    // 0x14febc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x14febcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_14fec0:
    // 0x14fec0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x14fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_14fec4:
    // 0x14fec4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x14fec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_14fec8:
    // 0x14fec8: 0xc06e4a0  jal         func_1B9280
label_14fecc:
    if (ctx->pc == 0x14FECCu) {
        ctx->pc = 0x14FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEC8u;
        // 0x14fecc: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FED0u;
        goto label_14fed0;
    }
    ctx->pc = 0x14FEC8u;
    SET_GPR_U32(ctx, 31, 0x14FED0u);
    ctx->pc = 0x14FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEC8u;
    // 0x14fecc: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14FEC8u, 0x14FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FED0u;
label_14fed0:
    // 0x14fed0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x14fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_14fed4:
    // 0x14fed4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x14fed4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_14fed8:
    // 0x14fed8: 0xc06d28c  jal         func_1B4A30
label_14fedc:
    if (ctx->pc == 0x14FEDCu) {
        ctx->pc = 0x14FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FED8u;
        // 0x14fedc: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FEE0u;
        goto label_14fee0;
    }
    ctx->pc = 0x14FED8u;
    SET_GPR_U32(ctx, 31, 0x14FEE0u);
    ctx->pc = 0x14FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FED8u;
    // 0x14fedc: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14FED8u, 0x14FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEE0u;
label_14fee0:
    // 0x14fee0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x14fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_14fee4:
    // 0x14fee4: 0xc06e822  jal         func_1BA088
label_14fee8:
    if (ctx->pc == 0x14FEE8u) {
        ctx->pc = 0x14FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEE4u;
        // 0x14fee8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FEECu;
        goto label_14feec;
    }
    ctx->pc = 0x14FEE4u;
    SET_GPR_U32(ctx, 31, 0x14FEECu);
    ctx->pc = 0x14FEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEE4u;
    // 0x14fee8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x14FEE4u, 0x14FEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEECu;
label_14feec:
    // 0x14feec: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x14feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_14fef0:
    // 0x14fef0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x14fef0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_14fef4:
    // 0x14fef4: 0xc06d28c  jal         func_1B4A30
label_14fef8:
    if (ctx->pc == 0x14FEF8u) {
        ctx->pc = 0x14FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEF4u;
        // 0x14fef8: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FEFCu;
        goto label_14fefc;
    }
    ctx->pc = 0x14FEF4u;
    SET_GPR_U32(ctx, 31, 0x14FEFCu);
    ctx->pc = 0x14FEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEF4u;
    // 0x14fef8: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14FEF4u, 0x14FEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEFCu;
label_14fefc:
    // 0x14fefc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x14fefcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_14ff00:
    // 0x14ff00: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x14ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_14ff04:
    // 0x14ff04: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14ff04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14ff08:
    // 0x14ff08: 0xc06e75a  jal         func_1B9D68
label_14ff0c:
    if (ctx->pc == 0x14FF0Cu) {
        ctx->pc = 0x14FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF08u;
        // 0x14ff0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FF10u;
        goto label_14ff10;
    }
    ctx->pc = 0x14FF08u;
    SET_GPR_U32(ctx, 31, 0x14FF10u);
    ctx->pc = 0x14FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF08u;
    // 0x14ff0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x14FF08u, 0x14FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF10u;
label_14ff10:
    // 0x14ff10: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x14ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_14ff14:
    // 0x14ff14: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x14ff14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_14ff18:
    // 0x14ff18: 0xc06d28c  jal         func_1B4A30
label_14ff1c:
    if (ctx->pc == 0x14FF1Cu) {
        ctx->pc = 0x14FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF18u;
        // 0x14ff1c: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FF20u;
        goto label_14ff20;
    }
    ctx->pc = 0x14FF18u;
    SET_GPR_U32(ctx, 31, 0x14FF20u);
    ctx->pc = 0x14FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF18u;
    // 0x14ff1c: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x14FF18u, 0x14FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF20u;
label_14ff20:
    // 0x14ff20: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x14ff20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_14ff24:
    // 0x14ff24: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x14ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_14ff28:
    // 0x14ff28: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x14ff28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14ff2c:
    // 0x14ff2c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_14ff30:
    // 0x14ff30: 0x24425d50  addiu       $v0, $v0, 0x5D50
    ctx->pc = 0x14ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23888));
label_14ff34:
    // 0x14ff34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ff38:
    // 0x14ff38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14ff38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14ff3c:
    // 0x14ff3c: 0xc06f098  jal         func_1BC260
label_14ff40:
    if (ctx->pc == 0x14FF40u) {
        ctx->pc = 0x14FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF3Cu;
        // 0x14ff40: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FF44u;
        goto label_14ff44;
    }
    ctx->pc = 0x14FF3Cu;
    SET_GPR_U32(ctx, 31, 0x14FF44u);
    ctx->pc = 0x14FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF3Cu;
    // 0x14ff40: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC260u, 0x14FF3Cu, 0x14FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF44u;
label_14ff44:
    // 0x14ff44: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14ff48:
    // 0x14ff48: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x14ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_14ff4c:
    // 0x14ff4c: 0x24429f00  addiu       $v0, $v0, -0x6100
    ctx->pc = 0x14ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
label_14ff50:
    // 0x14ff50: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x14ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_14ff54:
    // 0x14ff54: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_14ff58:
    if (ctx->pc == 0x14FF58u) {
        ctx->pc = 0x14FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF54u;
        // 0x14ff58: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FF5Cu;
        goto label_14ff5c;
    }
    ctx->pc = 0x14FF54u;
    {
        const bool branch_taken_0x14ff54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF54u;
        // 0x14ff58: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff54) {
            ctx->pc = 0x14FFA4u;
            goto label_14ffa4;
        }
    }
    ctx->pc = 0x14FF5Cu;
label_14ff5c:
    // 0x14ff5c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_14ff60:
    // 0x14ff60: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14ff60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14ff64:
    // 0x14ff64: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_14ff68:
    if (ctx->pc == 0x14FF68u) {
        ctx->pc = 0x14FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF64u;
        // 0x14ff68: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FF6Cu;
        goto label_14ff6c;
    }
    ctx->pc = 0x14FF64u;
    {
        const bool branch_taken_0x14ff64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff64) {
            ctx->pc = 0x14FF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FF64u;
            // 0x14ff68: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF84u;
            goto label_14ff84;
        }
    }
    ctx->pc = 0x14FF6Cu;
label_14ff6c:
    // 0x14ff6c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14ff70:
    // 0x14ff70: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x14ff70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_14ff74:
    // 0x14ff74: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x14ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_14ff78:
    // 0x14ff78: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x14ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_14ff7c:
    // 0x14ff7c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x14ff7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_14ff80:
    // 0x14ff80: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_14ff84:
    // 0x14ff84: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x14ff84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_14ff88:
    // 0x14ff88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14ff8c:
    if (ctx->pc == 0x14FF8Cu) {
        ctx->pc = 0x14FF90u;
        goto label_14ff90;
    }
    ctx->pc = 0x14FF88u;
    {
        const bool branch_taken_0x14ff88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff88) {
            ctx->pc = 0x14FFA4u;
            goto label_14ffa4;
        }
    }
    ctx->pc = 0x14FF90u;
label_14ff90:
    // 0x14ff90: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_14ff94:
    // 0x14ff94: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x14ff94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_14ff98:
    // 0x14ff98: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x14ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_14ff9c:
    // 0x14ff9c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x14ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_14ffa0:
    // 0x14ffa0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x14ffa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_14ffa4:
    // 0x14ffa4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_14ffa8:
    // 0x14ffa8: 0x16163c  dsll32      $v0, $s6, 24
    ctx->pc = 0x14ffa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 24));
label_14ffac:
    // 0x14ffac: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x14ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
label_14ffb0:
    // 0x14ffb0: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x14ffb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_14ffb4:
    // 0x14ffb4: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x14ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14ffb8:
    // 0x14ffb8: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x14ffb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_14ffbc:
    // 0x14ffbc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14ffc0:
    // 0x14ffc0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x14ffc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_14ffc4:
    // 0x14ffc4: 0x24639f04  addiu       $v1, $v1, -0x60FC
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942468));
label_14ffc8:
    // 0x14ffc8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x14ffc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_14ffcc:
    // 0x14ffcc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14ffd0:
    // 0x14ffd0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_14ffd4:
    // 0x14ffd4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14ffd8:
    // 0x14ffd8: 0x24639f0a  addiu       $v1, $v1, -0x60F6
    ctx->pc = 0x14ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942474));
label_14ffdc:
    // 0x14ffdc: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x14ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14ffe0:
    // 0x14ffe0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14ffe4:
    // 0x14ffe4: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x14ffe4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_14ffe8:
    // 0x14ffe8: 0x24639f16  addiu       $v1, $v1, -0x60EA
    ctx->pc = 0x14ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942486));
label_14ffec:
    // 0x14ffec: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_14fff0:
    // 0x14fff0: 0xa07e0000  sb          $fp, 0x0($v1)
    ctx->pc = 0x14fff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 30));
label_14fff4:
    // 0x14fff4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_14fff8:
    // 0x14fff8: 0x24639f18  addiu       $v1, $v1, -0x60E8
    ctx->pc = 0x14fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942488));
label_14fffc:
    // 0x14fffc: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x14fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_150000:
    // 0x150000: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x150000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_150004:
    // 0x150004: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x150004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_150008:
    // 0x150008: 0x24639f15  addiu       $v1, $v1, -0x60EB
    ctx->pc = 0x150008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942485));
label_15000c:
    // 0x15000c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15000cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_150010:
    // 0x150010: 0x10000093  b           . + 4 + (0x93 << 2)
label_150014:
    if (ctx->pc == 0x150014u) {
        ctx->pc = 0x150014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150010u;
        // 0x150014: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150018u;
        goto label_150018;
    }
    ctx->pc = 0x150010u;
    {
        const bool branch_taken_0x150010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150010u;
        // 0x150014: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150010) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x150018u;
label_150018:
    // 0x150018: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x150018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_15001c:
    // 0x15001c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_150020:
    // 0x150020: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x150020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150024:
    // 0x150024: 0x3066001f  andi        $a2, $v1, 0x1F
    ctx->pc = 0x150024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_150028:
    // 0x150028: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x150028u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_15002c:
    // 0x15002c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x15002cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_150030:
    // 0x150030: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_150034:
    if (ctx->pc == 0x150034u) {
        ctx->pc = 0x150034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150030u;
        // 0x150034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150038u;
        goto label_150038;
    }
    ctx->pc = 0x150030u;
    {
        const bool branch_taken_0x150030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150030u;
        // 0x150034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150030) {
            ctx->pc = 0x150068u;
            goto label_150068;
        }
    }
    ctx->pc = 0x150038u;
label_150038:
    // 0x150038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15003c:
    // 0x15003c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_150040:
    if (ctx->pc == 0x150040u) {
        ctx->pc = 0x150040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15003Cu;
        // 0x150040: 0x24820005  addiu       $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150044u;
        goto label_150044;
    }
    ctx->pc = 0x15003Cu;
    {
        const bool branch_taken_0x15003c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15003c) {
            ctx->pc = 0x150040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15003Cu;
            // 0x150040: 0x24820005  addiu       $v0, $a0, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15005Cu;
            goto label_15005c;
        }
    }
    ctx->pc = 0x150044u;
label_150044:
    // 0x150044: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_150048:
    if (ctx->pc == 0x150048u) {
        ctx->pc = 0x150048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150044u;
        // 0x150048: 0x24e20005  addiu       $v0, $a3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15004Cu;
        goto label_15004c;
    }
    ctx->pc = 0x150044u;
    {
        const bool branch_taken_0x150044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150044) {
            ctx->pc = 0x150048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150044u;
            // 0x150048: 0x24e20005  addiu       $v0, $a3, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150054u;
            goto label_150054;
        }
    }
    ctx->pc = 0x15004Cu;
label_15004c:
    // 0x15004c: 0x1000000b  b           . + 4 + (0xB << 2)
label_150050:
    if (ctx->pc == 0x150050u) {
        ctx->pc = 0x150050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15004Cu;
        // 0x150050: 0x24e20005  addiu       $v0, $a3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150054u;
        goto label_150054;
    }
    ctx->pc = 0x15004Cu;
    {
        const bool branch_taken_0x15004c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15004Cu;
        // 0x150050: 0x24e20005  addiu       $v0, $a3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15004c) {
            ctx->pc = 0x15007Cu;
            goto label_15007c;
        }
    }
    ctx->pc = 0x150054u;
label_150054:
    // 0x150054: 0x1000000a  b           . + 4 + (0xA << 2)
label_150058:
    if (ctx->pc == 0x150058u) {
        ctx->pc = 0x150058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150054u;
        // 0x150058: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15005Cu;
        goto label_15005c;
    }
    ctx->pc = 0x150054u;
    {
        const bool branch_taken_0x150054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150054u;
        // 0x150058: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150054) {
            ctx->pc = 0x150080u;
            goto label_150080;
        }
    }
    ctx->pc = 0x15005Cu;
label_15005c:
    // 0x15005c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15005cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_150060:
    // 0x150060: 0x10000007  b           . + 4 + (0x7 << 2)
label_150064:
    if (ctx->pc == 0x150064u) {
        ctx->pc = 0x150064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150060u;
        // 0x150064: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150068u;
        goto label_150068;
    }
    ctx->pc = 0x150060u;
    {
        const bool branch_taken_0x150060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150060u;
        // 0x150064: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150060) {
            ctx->pc = 0x150080u;
            goto label_150080;
        }
    }
    ctx->pc = 0x150068u;
label_150068:
    // 0x150068: 0x2483000a  addiu       $v1, $a0, 0xA
    ctx->pc = 0x150068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
label_15006c:
    // 0x15006c: 0x24e20005  addiu       $v0, $a3, 0x5
    ctx->pc = 0x15006cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
label_150070:
    // 0x150070: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x150070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_150074:
    // 0x150074: 0x10000002  b           . + 4 + (0x2 << 2)
label_150078:
    if (ctx->pc == 0x150078u) {
        ctx->pc = 0x150078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150074u;
        // 0x150078: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15007Cu;
        goto label_15007c;
    }
    ctx->pc = 0x150074u;
    {
        const bool branch_taken_0x150074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150074u;
        // 0x150078: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150074) {
            ctx->pc = 0x150080u;
            goto label_150080;
        }
    }
    ctx->pc = 0x15007Cu;
label_15007c:
    // 0x15007c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x15007cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_150080:
    // 0x150080: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x150080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_150084:
    // 0x150084: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x150084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_150088:
    // 0x150088: 0x50a2000c  beql        $a1, $v0, . + 4 + (0xC << 2)
label_15008c:
    if (ctx->pc == 0x15008Cu) {
        ctx->pc = 0x15008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150088u;
        // 0x15008c: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150090u;
        goto label_150090;
    }
    ctx->pc = 0x150088u;
    {
        const bool branch_taken_0x150088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x150088) {
            ctx->pc = 0x15008Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150088u;
            // 0x15008c: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1500BCu;
            goto label_1500bc;
        }
    }
    ctx->pc = 0x150090u;
label_150090:
    // 0x150090: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x150090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_150094:
    // 0x150094: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x150094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_150098:
    // 0x150098: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x150098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15009c:
    // 0x15009c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x15009cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1500a0:
    // 0x1500a0: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_1500a4:
    if (ctx->pc == 0x1500A4u) {
        ctx->pc = 0x1500A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500A0u;
        // 0x1500a4: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1500A8u;
        goto label_1500a8;
    }
    ctx->pc = 0x1500A0u;
    {
        const bool branch_taken_0x1500a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1500a0) {
            ctx->pc = 0x1500A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1500A0u;
            // 0x1500a4: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1500B0u;
            goto label_1500b0;
        }
    }
    ctx->pc = 0x1500A8u;
label_1500a8:
    // 0x1500a8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1500a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1500ac:
    // 0x1500ac: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1500acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1500b0:
    // 0x1500b0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1500b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1500b4:
    // 0x1500b4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1500b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1500b8:
    // 0x1500b8: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x1500b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1500bc:
    // 0x1500bc: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x1500bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1500c0:
    // 0x1500c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1500c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1500c4:
    // 0x1500c4: 0xc0533cc  jal         func_14CF30
label_1500c8:
    if (ctx->pc == 0x1500C8u) {
        ctx->pc = 0x1500C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500C4u;
        // 0x1500c8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1500CCu;
        goto label_1500cc;
    }
    ctx->pc = 0x1500C4u;
    SET_GPR_U32(ctx, 31, 0x1500CCu);
    ctx->pc = 0x1500C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500C4u;
    // 0x1500c8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF30u, 0x1500C4u, 0x1500CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500CCu;
label_1500cc:
    // 0x1500cc: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1500ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1500d0:
    // 0x1500d0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1500d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1500d4:
    // 0x1500d4: 0x56620003  bnel        $s3, $v0, . + 4 + (0x3 << 2)
label_1500d8:
    if (ctx->pc == 0x1500D8u) {
        ctx->pc = 0x1500D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500D4u;
        // 0x1500d8: 0x131980  sll         $v1, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1500DCu;
        goto label_1500dc;
    }
    ctx->pc = 0x1500D4u;
    {
        const bool branch_taken_0x1500d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1500d4) {
            ctx->pc = 0x1500D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1500D4u;
            // 0x1500d8: 0x131980  sll         $v1, $s3, 6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1500E4u;
            goto label_1500e4;
        }
    }
    ctx->pc = 0x1500DCu;
label_1500dc:
    // 0x1500dc: 0x10000060  b           . + 4 + (0x60 << 2)
label_1500e0:
    if (ctx->pc == 0x1500E0u) {
        ctx->pc = 0x1500E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500DCu;
        // 0x1500e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1500E4u;
        goto label_1500e4;
    }
    ctx->pc = 0x1500DCu;
    {
        const bool branch_taken_0x1500dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500DCu;
        // 0x1500e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500dc) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x1500E4u;
label_1500e4:
    // 0x1500e4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1500e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_1500e8:
    // 0x1500e8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1500e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1500ec:
    // 0x1500ec: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x1500ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1500f0:
    // 0x1500f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1500f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1500f4:
    // 0x1500f4: 0x24429f0c  addiu       $v0, $v0, -0x60F4
    ctx->pc = 0x1500f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942476));
label_1500f8:
    // 0x1500f8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1500f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1500fc:
    // 0x1500fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1500fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150100:
    // 0x150100: 0x391c0  sll         $s2, $v1, 7
    ctx->pc = 0x150100u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_150104:
    // 0x150104: 0xc052a80  jal         func_14AA00
label_150108:
    if (ctx->pc == 0x150108u) {
        ctx->pc = 0x150108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150104u;
        // 0x150108: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15010Cu;
        goto label_15010c;
    }
    ctx->pc = 0x150104u;
    SET_GPR_U32(ctx, 31, 0x15010Cu);
    ctx->pc = 0x150108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150104u;
    // 0x150108: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA00u, 0x150104u, 0x15010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15010Cu;
label_15010c:
    // 0x15010c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x15010cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_150110:
    // 0x150110: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x150110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_150114:
    // 0x150114: 0x24425dc4  addiu       $v0, $v0, 0x5DC4
    ctx->pc = 0x150114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24004));
label_150118:
    // 0x150118: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x150118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15011c:
    // 0x15011c: 0xc06e4a0  jal         func_1B9280
label_150120:
    if (ctx->pc == 0x150120u) {
        ctx->pc = 0x150120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15011Cu;
        // 0x150120: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150124u;
        goto label_150124;
    }
    ctx->pc = 0x15011Cu;
    SET_GPR_U32(ctx, 31, 0x150124u);
    ctx->pc = 0x150120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15011Cu;
    // 0x150120: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x15011Cu, 0x150124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150124u;
label_150124:
    // 0x150124: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x150124u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_150128:
    // 0x150128: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x150128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15012c:
    // 0x15012c: 0xc06d28c  jal         func_1B4A30
label_150130:
    if (ctx->pc == 0x150130u) {
        ctx->pc = 0x150130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15012Cu;
        // 0x150130: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150134u;
        goto label_150134;
    }
    ctx->pc = 0x15012Cu;
    SET_GPR_U32(ctx, 31, 0x150134u);
    ctx->pc = 0x150130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15012Cu;
    // 0x150130: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x15012Cu, 0x150134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150134u;
label_150134:
    // 0x150134: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x150134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_150138:
    // 0x150138: 0xc06e822  jal         func_1BA088
label_15013c:
    if (ctx->pc == 0x15013Cu) {
        ctx->pc = 0x15013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150138u;
        // 0x15013c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150140u;
        goto label_150140;
    }
    ctx->pc = 0x150138u;
    SET_GPR_U32(ctx, 31, 0x150140u);
    ctx->pc = 0x15013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150138u;
    // 0x15013c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x150138u, 0x150140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150140u;
label_150140:
    // 0x150140: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x150140u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_150144:
    // 0x150144: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x150144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_150148:
    // 0x150148: 0xc06d28c  jal         func_1B4A30
label_15014c:
    if (ctx->pc == 0x15014Cu) {
        ctx->pc = 0x15014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150148u;
        // 0x15014c: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150150u;
        goto label_150150;
    }
    ctx->pc = 0x150148u;
    SET_GPR_U32(ctx, 31, 0x150150u);
    ctx->pc = 0x15014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150148u;
    // 0x15014c: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x150148u, 0x150150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150150u;
label_150150:
    // 0x150150: 0x82060007  lb          $a2, 0x7($s0)
    ctx->pc = 0x150150u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_150154:
    // 0x150154: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x150154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_150158:
    // 0x150158: 0xc06e75a  jal         func_1B9D68
label_15015c:
    if (ctx->pc == 0x15015Cu) {
        ctx->pc = 0x15015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150158u;
        // 0x15015c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150160u;
        goto label_150160;
    }
    ctx->pc = 0x150158u;
    SET_GPR_U32(ctx, 31, 0x150160u);
    ctx->pc = 0x15015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150158u;
    // 0x15015c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x150158u, 0x150160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150160u;
label_150160:
    // 0x150160: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x150160u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_150164:
    // 0x150164: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x150164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_150168:
    // 0x150168: 0xc06d28c  jal         func_1B4A30
label_15016c:
    if (ctx->pc == 0x15016Cu) {
        ctx->pc = 0x15016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150168u;
        // 0x15016c: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150170u;
        goto label_150170;
    }
    ctx->pc = 0x150168u;
    SET_GPR_U32(ctx, 31, 0x150170u);
    ctx->pc = 0x15016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150168u;
    // 0x15016c: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A30u, 0x150168u, 0x150170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150170u;
label_150170:
    // 0x150170: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x150170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_150174:
    // 0x150174: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x150174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_150178:
    // 0x150178: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x150178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15017c:
    // 0x15017c: 0x24a5f2c0  addiu       $a1, $a1, -0xD40
    ctx->pc = 0x15017cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
label_150180:
    // 0x150180: 0xc06f098  jal         func_1BC260
label_150184:
    if (ctx->pc == 0x150184u) {
        ctx->pc = 0x150184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150180u;
        // 0x150184: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150188u;
        goto label_150188;
    }
    ctx->pc = 0x150180u;
    SET_GPR_U32(ctx, 31, 0x150188u);
    ctx->pc = 0x150184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150180u;
    // 0x150184: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC260u, 0x150180u, 0x150188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150188u;
label_150188:
    // 0x150188: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x150188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_15018c:
    // 0x15018c: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x15018cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_150190:
    // 0x150190: 0x24429f00  addiu       $v0, $v0, -0x6100
    ctx->pc = 0x150190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
label_150194:
    // 0x150194: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x150194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_150198:
    // 0x150198: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_15019c:
    if (ctx->pc == 0x15019Cu) {
        ctx->pc = 0x15019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150198u;
        // 0x15019c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1501A0u;
        goto label_1501a0;
    }
    ctx->pc = 0x150198u;
    {
        const bool branch_taken_0x150198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150198u;
        // 0x15019c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150198) {
            ctx->pc = 0x1501E8u;
            goto label_1501e8;
        }
    }
    ctx->pc = 0x1501A0u;
label_1501a0:
    // 0x1501a0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1501a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1501a4:
    // 0x1501a4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x1501a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_1501a8:
    // 0x1501a8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1501ac:
    if (ctx->pc == 0x1501ACu) {
        ctx->pc = 0x1501ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501A8u;
        // 0x1501ac: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1501B0u;
        goto label_1501b0;
    }
    ctx->pc = 0x1501A8u;
    {
        const bool branch_taken_0x1501a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501a8) {
            ctx->pc = 0x1501ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1501A8u;
            // 0x1501ac: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1501C8u;
            goto label_1501c8;
        }
    }
    ctx->pc = 0x1501B0u;
label_1501b0:
    // 0x1501b0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1501b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_1501b4:
    // 0x1501b4: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x1501b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_1501b8:
    // 0x1501b8: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x1501b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_1501bc:
    // 0x1501bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1501bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1501c0:
    // 0x1501c0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1501c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_1501c4:
    // 0x1501c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1501c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1501c8:
    // 0x1501c8: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x1501c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_1501cc:
    // 0x1501cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1501d0:
    if (ctx->pc == 0x1501D0u) {
        ctx->pc = 0x1501D4u;
        goto label_1501d4;
    }
    ctx->pc = 0x1501CCu;
    {
        const bool branch_taken_0x1501cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501cc) {
            ctx->pc = 0x1501E8u;
            goto label_1501e8;
        }
    }
    ctx->pc = 0x1501D4u;
label_1501d4:
    // 0x1501d4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1501d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_1501d8:
    // 0x1501d8: 0x948300ec  lhu         $v1, 0xEC($a0)
    ctx->pc = 0x1501d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
label_1501dc:
    // 0x1501dc: 0x24429f08  addiu       $v0, $v0, -0x60F8
    ctx->pc = 0x1501dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942472));
label_1501e0:
    // 0x1501e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1501e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1501e4:
    // 0x1501e4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1501e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_1501e8:
    // 0x1501e8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1501e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_1501ec:
    // 0x1501ec: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x1501ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
label_1501f0:
    // 0x1501f0: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x1501f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
label_1501f4:
    // 0x1501f4: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x1501f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_1501f8:
    // 0x1501f8: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1501f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1501fc:
    // 0x1501fc: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x1501fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_150200:
    // 0x150200: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x150200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_150204:
    // 0x150204: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x150204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_150208:
    // 0x150208: 0x24639f04  addiu       $v1, $v1, -0x60FC
    ctx->pc = 0x150208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942468));
label_15020c:
    // 0x15020c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x15020cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_150210:
    // 0x150210: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x150210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_150214:
    // 0x150214: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x150214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_150218:
    // 0x150218: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x150218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_15021c:
    // 0x15021c: 0x24639f0a  addiu       $v1, $v1, -0x60F6
    ctx->pc = 0x15021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942474));
label_150220:
    // 0x150220: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x150220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_150224:
    // 0x150224: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x150224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_150228:
    // 0x150228: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x150228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_15022c:
    // 0x15022c: 0x24639f16  addiu       $v1, $v1, -0x60EA
    ctx->pc = 0x15022cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942486));
label_150230:
    // 0x150230: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x150230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_150234:
    // 0x150234: 0xa07e0000  sb          $fp, 0x0($v1)
    ctx->pc = 0x150234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 30));
label_150238:
    // 0x150238: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x150238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_15023c:
    // 0x15023c: 0x24639f18  addiu       $v1, $v1, -0x60E8
    ctx->pc = 0x15023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942488));
label_150240:
    // 0x150240: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x150240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_150244:
    // 0x150244: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x150244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_150248:
    // 0x150248: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x150248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_15024c:
    // 0x15024c: 0x24639f15  addiu       $v1, $v1, -0x60EB
    ctx->pc = 0x15024cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942485));
label_150250:
    // 0x150250: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x150250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_150254:
    // 0x150254: 0x10000002  b           . + 4 + (0x2 << 2)
label_150258:
    if (ctx->pc == 0x150258u) {
        ctx->pc = 0x150258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150254u;
        // 0x150258: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15025Cu;
        goto label_15025c;
    }
    ctx->pc = 0x150254u;
    {
        const bool branch_taken_0x150254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150254u;
        // 0x150258: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150254) {
            ctx->pc = 0x150260u;
            goto label_150260;
        }
    }
    ctx->pc = 0x15025Cu;
label_15025c:
    // 0x15025c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_150260:
    // 0x150260: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x150260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_150264:
    // 0x150264: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x150264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_150268:
    // 0x150268: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x150268u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15026c:
    // 0x15026c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x15026cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_150270:
    // 0x150270: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x150270u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_150274:
    // 0x150274: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x150274u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_150278:
    // 0x150278: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x150278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15027c:
    // 0x15027c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15027cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_150280:
    // 0x150280: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x150280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_150284:
    // 0x150284: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_150288:
    // 0x150288: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15028c:
    // 0x15028c: 0x3e00008  jr          $ra
label_150290:
    if (ctx->pc == 0x150290u) {
        ctx->pc = 0x150290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15028Cu;
        // 0x150290: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150294u;
        goto label_150294;
    }
    ctx->pc = 0x15028Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15028Cu;
        // 0x150290: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15028Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150294u;
label_150294:
    // 0x150294: 0x0  nop
    ctx->pc = 0x150294u;
    // NOP
label_150298:
    // 0x150298: 0x0  nop
    ctx->pc = 0x150298u;
    // NOP
label_15029c:
    // 0x15029c: 0x0  nop
    ctx->pc = 0x15029cu;
    // NOP
}
