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

// Function: sub_0029E288
// Address: 0x29e288 - 0x29e9b0
void sub_0029E288_0x29e288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E288_0x29e288");
#endif

    switch (ctx->pc) {
        case 0x29e288u: goto label_29e288;
        case 0x29e28cu: goto label_29e28c;
        case 0x29e290u: goto label_29e290;
        case 0x29e294u: goto label_29e294;
        case 0x29e298u: goto label_29e298;
        case 0x29e29cu: goto label_29e29c;
        case 0x29e2a0u: goto label_29e2a0;
        case 0x29e2a4u: goto label_29e2a4;
        case 0x29e2a8u: goto label_29e2a8;
        case 0x29e2acu: goto label_29e2ac;
        case 0x29e2b0u: goto label_29e2b0;
        case 0x29e2b4u: goto label_29e2b4;
        case 0x29e2b8u: goto label_29e2b8;
        case 0x29e2bcu: goto label_29e2bc;
        case 0x29e2c0u: goto label_29e2c0;
        case 0x29e2c4u: goto label_29e2c4;
        case 0x29e2c8u: goto label_29e2c8;
        case 0x29e2ccu: goto label_29e2cc;
        case 0x29e2d0u: goto label_29e2d0;
        case 0x29e2d4u: goto label_29e2d4;
        case 0x29e2d8u: goto label_29e2d8;
        case 0x29e2dcu: goto label_29e2dc;
        case 0x29e2e0u: goto label_29e2e0;
        case 0x29e2e4u: goto label_29e2e4;
        case 0x29e2e8u: goto label_29e2e8;
        case 0x29e2ecu: goto label_29e2ec;
        case 0x29e2f0u: goto label_29e2f0;
        case 0x29e2f4u: goto label_29e2f4;
        case 0x29e2f8u: goto label_29e2f8;
        case 0x29e2fcu: goto label_29e2fc;
        case 0x29e300u: goto label_29e300;
        case 0x29e304u: goto label_29e304;
        case 0x29e308u: goto label_29e308;
        case 0x29e30cu: goto label_29e30c;
        case 0x29e310u: goto label_29e310;
        case 0x29e314u: goto label_29e314;
        case 0x29e318u: goto label_29e318;
        case 0x29e31cu: goto label_29e31c;
        case 0x29e320u: goto label_29e320;
        case 0x29e324u: goto label_29e324;
        case 0x29e328u: goto label_29e328;
        case 0x29e32cu: goto label_29e32c;
        case 0x29e330u: goto label_29e330;
        case 0x29e334u: goto label_29e334;
        case 0x29e338u: goto label_29e338;
        case 0x29e33cu: goto label_29e33c;
        case 0x29e340u: goto label_29e340;
        case 0x29e344u: goto label_29e344;
        case 0x29e348u: goto label_29e348;
        case 0x29e34cu: goto label_29e34c;
        case 0x29e350u: goto label_29e350;
        case 0x29e354u: goto label_29e354;
        case 0x29e358u: goto label_29e358;
        case 0x29e35cu: goto label_29e35c;
        case 0x29e360u: goto label_29e360;
        case 0x29e364u: goto label_29e364;
        case 0x29e368u: goto label_29e368;
        case 0x29e36cu: goto label_29e36c;
        case 0x29e370u: goto label_29e370;
        case 0x29e374u: goto label_29e374;
        case 0x29e378u: goto label_29e378;
        case 0x29e37cu: goto label_29e37c;
        case 0x29e380u: goto label_29e380;
        case 0x29e384u: goto label_29e384;
        case 0x29e388u: goto label_29e388;
        case 0x29e38cu: goto label_29e38c;
        case 0x29e390u: goto label_29e390;
        case 0x29e394u: goto label_29e394;
        case 0x29e398u: goto label_29e398;
        case 0x29e39cu: goto label_29e39c;
        case 0x29e3a0u: goto label_29e3a0;
        case 0x29e3a4u: goto label_29e3a4;
        case 0x29e3a8u: goto label_29e3a8;
        case 0x29e3acu: goto label_29e3ac;
        case 0x29e3b0u: goto label_29e3b0;
        case 0x29e3b4u: goto label_29e3b4;
        case 0x29e3b8u: goto label_29e3b8;
        case 0x29e3bcu: goto label_29e3bc;
        case 0x29e3c0u: goto label_29e3c0;
        case 0x29e3c4u: goto label_29e3c4;
        case 0x29e3c8u: goto label_29e3c8;
        case 0x29e3ccu: goto label_29e3cc;
        case 0x29e3d0u: goto label_29e3d0;
        case 0x29e3d4u: goto label_29e3d4;
        case 0x29e3d8u: goto label_29e3d8;
        case 0x29e3dcu: goto label_29e3dc;
        case 0x29e3e0u: goto label_29e3e0;
        case 0x29e3e4u: goto label_29e3e4;
        case 0x29e3e8u: goto label_29e3e8;
        case 0x29e3ecu: goto label_29e3ec;
        case 0x29e3f0u: goto label_29e3f0;
        case 0x29e3f4u: goto label_29e3f4;
        case 0x29e3f8u: goto label_29e3f8;
        case 0x29e3fcu: goto label_29e3fc;
        case 0x29e400u: goto label_29e400;
        case 0x29e404u: goto label_29e404;
        case 0x29e408u: goto label_29e408;
        case 0x29e40cu: goto label_29e40c;
        case 0x29e410u: goto label_29e410;
        case 0x29e414u: goto label_29e414;
        case 0x29e418u: goto label_29e418;
        case 0x29e41cu: goto label_29e41c;
        case 0x29e420u: goto label_29e420;
        case 0x29e424u: goto label_29e424;
        case 0x29e428u: goto label_29e428;
        case 0x29e42cu: goto label_29e42c;
        case 0x29e430u: goto label_29e430;
        case 0x29e434u: goto label_29e434;
        case 0x29e438u: goto label_29e438;
        case 0x29e43cu: goto label_29e43c;
        case 0x29e440u: goto label_29e440;
        case 0x29e444u: goto label_29e444;
        case 0x29e448u: goto label_29e448;
        case 0x29e44cu: goto label_29e44c;
        case 0x29e450u: goto label_29e450;
        case 0x29e454u: goto label_29e454;
        case 0x29e458u: goto label_29e458;
        case 0x29e45cu: goto label_29e45c;
        case 0x29e460u: goto label_29e460;
        case 0x29e464u: goto label_29e464;
        case 0x29e468u: goto label_29e468;
        case 0x29e46cu: goto label_29e46c;
        case 0x29e470u: goto label_29e470;
        case 0x29e474u: goto label_29e474;
        case 0x29e478u: goto label_29e478;
        case 0x29e47cu: goto label_29e47c;
        case 0x29e480u: goto label_29e480;
        case 0x29e484u: goto label_29e484;
        case 0x29e488u: goto label_29e488;
        case 0x29e48cu: goto label_29e48c;
        case 0x29e490u: goto label_29e490;
        case 0x29e494u: goto label_29e494;
        case 0x29e498u: goto label_29e498;
        case 0x29e49cu: goto label_29e49c;
        case 0x29e4a0u: goto label_29e4a0;
        case 0x29e4a4u: goto label_29e4a4;
        case 0x29e4a8u: goto label_29e4a8;
        case 0x29e4acu: goto label_29e4ac;
        case 0x29e4b0u: goto label_29e4b0;
        case 0x29e4b4u: goto label_29e4b4;
        case 0x29e4b8u: goto label_29e4b8;
        case 0x29e4bcu: goto label_29e4bc;
        case 0x29e4c0u: goto label_29e4c0;
        case 0x29e4c4u: goto label_29e4c4;
        case 0x29e4c8u: goto label_29e4c8;
        case 0x29e4ccu: goto label_29e4cc;
        case 0x29e4d0u: goto label_29e4d0;
        case 0x29e4d4u: goto label_29e4d4;
        case 0x29e4d8u: goto label_29e4d8;
        case 0x29e4dcu: goto label_29e4dc;
        case 0x29e4e0u: goto label_29e4e0;
        case 0x29e4e4u: goto label_29e4e4;
        case 0x29e4e8u: goto label_29e4e8;
        case 0x29e4ecu: goto label_29e4ec;
        case 0x29e4f0u: goto label_29e4f0;
        case 0x29e4f4u: goto label_29e4f4;
        case 0x29e4f8u: goto label_29e4f8;
        case 0x29e4fcu: goto label_29e4fc;
        case 0x29e500u: goto label_29e500;
        case 0x29e504u: goto label_29e504;
        case 0x29e508u: goto label_29e508;
        case 0x29e50cu: goto label_29e50c;
        case 0x29e510u: goto label_29e510;
        case 0x29e514u: goto label_29e514;
        case 0x29e518u: goto label_29e518;
        case 0x29e51cu: goto label_29e51c;
        case 0x29e520u: goto label_29e520;
        case 0x29e524u: goto label_29e524;
        case 0x29e528u: goto label_29e528;
        case 0x29e52cu: goto label_29e52c;
        case 0x29e530u: goto label_29e530;
        case 0x29e534u: goto label_29e534;
        case 0x29e538u: goto label_29e538;
        case 0x29e53cu: goto label_29e53c;
        case 0x29e540u: goto label_29e540;
        case 0x29e544u: goto label_29e544;
        case 0x29e548u: goto label_29e548;
        case 0x29e54cu: goto label_29e54c;
        case 0x29e550u: goto label_29e550;
        case 0x29e554u: goto label_29e554;
        case 0x29e558u: goto label_29e558;
        case 0x29e55cu: goto label_29e55c;
        case 0x29e560u: goto label_29e560;
        case 0x29e564u: goto label_29e564;
        case 0x29e568u: goto label_29e568;
        case 0x29e56cu: goto label_29e56c;
        case 0x29e570u: goto label_29e570;
        case 0x29e574u: goto label_29e574;
        case 0x29e578u: goto label_29e578;
        case 0x29e57cu: goto label_29e57c;
        case 0x29e580u: goto label_29e580;
        case 0x29e584u: goto label_29e584;
        case 0x29e588u: goto label_29e588;
        case 0x29e58cu: goto label_29e58c;
        case 0x29e590u: goto label_29e590;
        case 0x29e594u: goto label_29e594;
        case 0x29e598u: goto label_29e598;
        case 0x29e59cu: goto label_29e59c;
        case 0x29e5a0u: goto label_29e5a0;
        case 0x29e5a4u: goto label_29e5a4;
        case 0x29e5a8u: goto label_29e5a8;
        case 0x29e5acu: goto label_29e5ac;
        case 0x29e5b0u: goto label_29e5b0;
        case 0x29e5b4u: goto label_29e5b4;
        case 0x29e5b8u: goto label_29e5b8;
        case 0x29e5bcu: goto label_29e5bc;
        case 0x29e5c0u: goto label_29e5c0;
        case 0x29e5c4u: goto label_29e5c4;
        case 0x29e5c8u: goto label_29e5c8;
        case 0x29e5ccu: goto label_29e5cc;
        case 0x29e5d0u: goto label_29e5d0;
        case 0x29e5d4u: goto label_29e5d4;
        case 0x29e5d8u: goto label_29e5d8;
        case 0x29e5dcu: goto label_29e5dc;
        case 0x29e5e0u: goto label_29e5e0;
        case 0x29e5e4u: goto label_29e5e4;
        case 0x29e5e8u: goto label_29e5e8;
        case 0x29e5ecu: goto label_29e5ec;
        case 0x29e5f0u: goto label_29e5f0;
        case 0x29e5f4u: goto label_29e5f4;
        case 0x29e5f8u: goto label_29e5f8;
        case 0x29e5fcu: goto label_29e5fc;
        case 0x29e600u: goto label_29e600;
        case 0x29e604u: goto label_29e604;
        case 0x29e608u: goto label_29e608;
        case 0x29e60cu: goto label_29e60c;
        case 0x29e610u: goto label_29e610;
        case 0x29e614u: goto label_29e614;
        case 0x29e618u: goto label_29e618;
        case 0x29e61cu: goto label_29e61c;
        case 0x29e620u: goto label_29e620;
        case 0x29e624u: goto label_29e624;
        case 0x29e628u: goto label_29e628;
        case 0x29e62cu: goto label_29e62c;
        case 0x29e630u: goto label_29e630;
        case 0x29e634u: goto label_29e634;
        case 0x29e638u: goto label_29e638;
        case 0x29e63cu: goto label_29e63c;
        case 0x29e640u: goto label_29e640;
        case 0x29e644u: goto label_29e644;
        case 0x29e648u: goto label_29e648;
        case 0x29e64cu: goto label_29e64c;
        case 0x29e650u: goto label_29e650;
        case 0x29e654u: goto label_29e654;
        case 0x29e658u: goto label_29e658;
        case 0x29e65cu: goto label_29e65c;
        case 0x29e660u: goto label_29e660;
        case 0x29e664u: goto label_29e664;
        case 0x29e668u: goto label_29e668;
        case 0x29e66cu: goto label_29e66c;
        case 0x29e670u: goto label_29e670;
        case 0x29e674u: goto label_29e674;
        case 0x29e678u: goto label_29e678;
        case 0x29e67cu: goto label_29e67c;
        case 0x29e680u: goto label_29e680;
        case 0x29e684u: goto label_29e684;
        case 0x29e688u: goto label_29e688;
        case 0x29e68cu: goto label_29e68c;
        case 0x29e690u: goto label_29e690;
        case 0x29e694u: goto label_29e694;
        case 0x29e698u: goto label_29e698;
        case 0x29e69cu: goto label_29e69c;
        case 0x29e6a0u: goto label_29e6a0;
        case 0x29e6a4u: goto label_29e6a4;
        case 0x29e6a8u: goto label_29e6a8;
        case 0x29e6acu: goto label_29e6ac;
        case 0x29e6b0u: goto label_29e6b0;
        case 0x29e6b4u: goto label_29e6b4;
        case 0x29e6b8u: goto label_29e6b8;
        case 0x29e6bcu: goto label_29e6bc;
        case 0x29e6c0u: goto label_29e6c0;
        case 0x29e6c4u: goto label_29e6c4;
        case 0x29e6c8u: goto label_29e6c8;
        case 0x29e6ccu: goto label_29e6cc;
        case 0x29e6d0u: goto label_29e6d0;
        case 0x29e6d4u: goto label_29e6d4;
        case 0x29e6d8u: goto label_29e6d8;
        case 0x29e6dcu: goto label_29e6dc;
        case 0x29e6e0u: goto label_29e6e0;
        case 0x29e6e4u: goto label_29e6e4;
        case 0x29e6e8u: goto label_29e6e8;
        case 0x29e6ecu: goto label_29e6ec;
        case 0x29e6f0u: goto label_29e6f0;
        case 0x29e6f4u: goto label_29e6f4;
        case 0x29e6f8u: goto label_29e6f8;
        case 0x29e6fcu: goto label_29e6fc;
        case 0x29e700u: goto label_29e700;
        case 0x29e704u: goto label_29e704;
        case 0x29e708u: goto label_29e708;
        case 0x29e70cu: goto label_29e70c;
        case 0x29e710u: goto label_29e710;
        case 0x29e714u: goto label_29e714;
        case 0x29e718u: goto label_29e718;
        case 0x29e71cu: goto label_29e71c;
        case 0x29e720u: goto label_29e720;
        case 0x29e724u: goto label_29e724;
        case 0x29e728u: goto label_29e728;
        case 0x29e72cu: goto label_29e72c;
        case 0x29e730u: goto label_29e730;
        case 0x29e734u: goto label_29e734;
        case 0x29e738u: goto label_29e738;
        case 0x29e73cu: goto label_29e73c;
        case 0x29e740u: goto label_29e740;
        case 0x29e744u: goto label_29e744;
        case 0x29e748u: goto label_29e748;
        case 0x29e74cu: goto label_29e74c;
        case 0x29e750u: goto label_29e750;
        case 0x29e754u: goto label_29e754;
        case 0x29e758u: goto label_29e758;
        case 0x29e75cu: goto label_29e75c;
        case 0x29e760u: goto label_29e760;
        case 0x29e764u: goto label_29e764;
        case 0x29e768u: goto label_29e768;
        case 0x29e76cu: goto label_29e76c;
        case 0x29e770u: goto label_29e770;
        case 0x29e774u: goto label_29e774;
        case 0x29e778u: goto label_29e778;
        case 0x29e77cu: goto label_29e77c;
        case 0x29e780u: goto label_29e780;
        case 0x29e784u: goto label_29e784;
        case 0x29e788u: goto label_29e788;
        case 0x29e78cu: goto label_29e78c;
        case 0x29e790u: goto label_29e790;
        case 0x29e794u: goto label_29e794;
        case 0x29e798u: goto label_29e798;
        case 0x29e79cu: goto label_29e79c;
        case 0x29e7a0u: goto label_29e7a0;
        case 0x29e7a4u: goto label_29e7a4;
        case 0x29e7a8u: goto label_29e7a8;
        case 0x29e7acu: goto label_29e7ac;
        case 0x29e7b0u: goto label_29e7b0;
        case 0x29e7b4u: goto label_29e7b4;
        case 0x29e7b8u: goto label_29e7b8;
        case 0x29e7bcu: goto label_29e7bc;
        case 0x29e7c0u: goto label_29e7c0;
        case 0x29e7c4u: goto label_29e7c4;
        case 0x29e7c8u: goto label_29e7c8;
        case 0x29e7ccu: goto label_29e7cc;
        case 0x29e7d0u: goto label_29e7d0;
        case 0x29e7d4u: goto label_29e7d4;
        case 0x29e7d8u: goto label_29e7d8;
        case 0x29e7dcu: goto label_29e7dc;
        case 0x29e7e0u: goto label_29e7e0;
        case 0x29e7e4u: goto label_29e7e4;
        case 0x29e7e8u: goto label_29e7e8;
        case 0x29e7ecu: goto label_29e7ec;
        case 0x29e7f0u: goto label_29e7f0;
        case 0x29e7f4u: goto label_29e7f4;
        case 0x29e7f8u: goto label_29e7f8;
        case 0x29e7fcu: goto label_29e7fc;
        case 0x29e800u: goto label_29e800;
        case 0x29e804u: goto label_29e804;
        case 0x29e808u: goto label_29e808;
        case 0x29e80cu: goto label_29e80c;
        case 0x29e810u: goto label_29e810;
        case 0x29e814u: goto label_29e814;
        case 0x29e818u: goto label_29e818;
        case 0x29e81cu: goto label_29e81c;
        case 0x29e820u: goto label_29e820;
        case 0x29e824u: goto label_29e824;
        case 0x29e828u: goto label_29e828;
        case 0x29e82cu: goto label_29e82c;
        case 0x29e830u: goto label_29e830;
        case 0x29e834u: goto label_29e834;
        case 0x29e838u: goto label_29e838;
        case 0x29e83cu: goto label_29e83c;
        case 0x29e840u: goto label_29e840;
        case 0x29e844u: goto label_29e844;
        case 0x29e848u: goto label_29e848;
        case 0x29e84cu: goto label_29e84c;
        case 0x29e850u: goto label_29e850;
        case 0x29e854u: goto label_29e854;
        case 0x29e858u: goto label_29e858;
        case 0x29e85cu: goto label_29e85c;
        case 0x29e860u: goto label_29e860;
        case 0x29e864u: goto label_29e864;
        case 0x29e868u: goto label_29e868;
        case 0x29e86cu: goto label_29e86c;
        case 0x29e870u: goto label_29e870;
        case 0x29e874u: goto label_29e874;
        case 0x29e878u: goto label_29e878;
        case 0x29e87cu: goto label_29e87c;
        case 0x29e880u: goto label_29e880;
        case 0x29e884u: goto label_29e884;
        case 0x29e888u: goto label_29e888;
        case 0x29e88cu: goto label_29e88c;
        case 0x29e890u: goto label_29e890;
        case 0x29e894u: goto label_29e894;
        case 0x29e898u: goto label_29e898;
        case 0x29e89cu: goto label_29e89c;
        case 0x29e8a0u: goto label_29e8a0;
        case 0x29e8a4u: goto label_29e8a4;
        case 0x29e8a8u: goto label_29e8a8;
        case 0x29e8acu: goto label_29e8ac;
        case 0x29e8b0u: goto label_29e8b0;
        case 0x29e8b4u: goto label_29e8b4;
        case 0x29e8b8u: goto label_29e8b8;
        case 0x29e8bcu: goto label_29e8bc;
        case 0x29e8c0u: goto label_29e8c0;
        case 0x29e8c4u: goto label_29e8c4;
        case 0x29e8c8u: goto label_29e8c8;
        case 0x29e8ccu: goto label_29e8cc;
        case 0x29e8d0u: goto label_29e8d0;
        case 0x29e8d4u: goto label_29e8d4;
        case 0x29e8d8u: goto label_29e8d8;
        case 0x29e8dcu: goto label_29e8dc;
        case 0x29e8e0u: goto label_29e8e0;
        case 0x29e8e4u: goto label_29e8e4;
        case 0x29e8e8u: goto label_29e8e8;
        case 0x29e8ecu: goto label_29e8ec;
        case 0x29e8f0u: goto label_29e8f0;
        case 0x29e8f4u: goto label_29e8f4;
        case 0x29e8f8u: goto label_29e8f8;
        case 0x29e8fcu: goto label_29e8fc;
        case 0x29e900u: goto label_29e900;
        case 0x29e904u: goto label_29e904;
        case 0x29e908u: goto label_29e908;
        case 0x29e90cu: goto label_29e90c;
        case 0x29e910u: goto label_29e910;
        case 0x29e914u: goto label_29e914;
        case 0x29e918u: goto label_29e918;
        case 0x29e91cu: goto label_29e91c;
        case 0x29e920u: goto label_29e920;
        case 0x29e924u: goto label_29e924;
        case 0x29e928u: goto label_29e928;
        case 0x29e92cu: goto label_29e92c;
        case 0x29e930u: goto label_29e930;
        case 0x29e934u: goto label_29e934;
        case 0x29e938u: goto label_29e938;
        case 0x29e93cu: goto label_29e93c;
        case 0x29e940u: goto label_29e940;
        case 0x29e944u: goto label_29e944;
        case 0x29e948u: goto label_29e948;
        case 0x29e94cu: goto label_29e94c;
        case 0x29e950u: goto label_29e950;
        case 0x29e954u: goto label_29e954;
        case 0x29e958u: goto label_29e958;
        case 0x29e95cu: goto label_29e95c;
        case 0x29e960u: goto label_29e960;
        case 0x29e964u: goto label_29e964;
        case 0x29e968u: goto label_29e968;
        case 0x29e96cu: goto label_29e96c;
        case 0x29e970u: goto label_29e970;
        case 0x29e974u: goto label_29e974;
        case 0x29e978u: goto label_29e978;
        case 0x29e97cu: goto label_29e97c;
        case 0x29e980u: goto label_29e980;
        case 0x29e984u: goto label_29e984;
        case 0x29e988u: goto label_29e988;
        case 0x29e98cu: goto label_29e98c;
        case 0x29e990u: goto label_29e990;
        case 0x29e994u: goto label_29e994;
        case 0x29e998u: goto label_29e998;
        case 0x29e99cu: goto label_29e99c;
        case 0x29e9a0u: goto label_29e9a0;
        case 0x29e9a4u: goto label_29e9a4;
        case 0x29e9a8u: goto label_29e9a8;
        case 0x29e9acu: goto label_29e9ac;
        default: break;
    }

    ctx->pc = 0x29e288u;

label_29e288:
    // 0x29e288: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29e288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29e28c:
    // 0x29e28c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_29e290:
    // 0x29e290: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x29e290u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e294:
    // 0x29e294: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x29e294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e298:
    // 0x29e298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e29c:
    // 0x29e29c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29e2a0:
    // 0x29e2a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29e2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e2a4:
    // 0x29e2a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29e2a8:
    // 0x29e2a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29e2ac:
    // 0x29e2ac: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x29e2acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_29e2b0:
    // 0x29e2b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29e2b4:
    // 0x29e2b4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x29e2b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e2b8:
    // 0x29e2b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29e2bc:
    // 0x29e2bc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29e2bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e2c0:
    // 0x29e2c0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29e2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29e2c4:
    // 0x29e2c4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x29e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_29e2c8:
    // 0x29e2c8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x29e2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_29e2cc:
    // 0x29e2cc: 0xc0a7888  jal         func_29E220
label_29e2d0:
    if (ctx->pc == 0x29E2D0u) {
        ctx->pc = 0x29E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2CCu;
        // 0x29e2d0: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E2D4u;
        goto label_29e2d4;
    }
    ctx->pc = 0x29E2CCu;
    SET_GPR_U32(ctx, 31, 0x29E2D4u);
    ctx->pc = 0x29E2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E2CCu;
    // 0x29e2d0: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E220u, 0x29E2CCu, 0x29E2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E2D4u;
label_29e2d4:
    // 0x29e2d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29e2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e2d8:
    // 0x29e2d8: 0x128f02  srl         $s1, $s2, 28
    ctx->pc = 0x29e2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
label_29e2dc:
    // 0x29e2dc: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_29e2e0:
    if (ctx->pc == 0x29E2E0u) {
        ctx->pc = 0x29E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2DCu;
        // 0x29e2e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E2E4u;
        goto label_29e2e4;
    }
    ctx->pc = 0x29E2DCu;
    {
        const bool branch_taken_0x29e2dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e2dc) {
            ctx->pc = 0x29E2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E2DCu;
            // 0x29e2e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E330u;
            goto label_29e330;
        }
    }
    ctx->pc = 0x29E2E4u;
label_29e2e4:
    // 0x29e2e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_29e2e8:
    // 0x29e2e8: 0x245e6870  addiu       $fp, $v0, 0x6870
    ctx->pc = 0x29e2e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 26736));
label_29e2ec:
    // 0x29e2ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29e2f0:
    // 0x29e2f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29e2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29e2f4:
    // 0x29e2f4: 0x721807  srav        $v1, $s2, $v1
    ctx->pc = 0x29e2f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
label_29e2f8:
    // 0x29e2f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29e2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29e2fc:
    // 0x29e2fc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x29e2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_29e300:
    // 0x29e300: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29e300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29e304:
    // 0x29e304: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29e304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29e308:
    // 0x29e308: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x29e308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29e30c:
    // 0x29e30c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x29e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_29e310:
    // 0x29e310: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x29e310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29e314:
    // 0x29e314: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29e318:
    // 0x29e318: 0x40f809  jalr        $v0
label_29e31c:
    if (ctx->pc == 0x29E31Cu) {
        ctx->pc = 0x29E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E318u;
        // 0x29e31c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E320u;
        goto label_29e320;
    }
    ctx->pc = 0x29E318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29E320u);
        ctx->pc = 0x29E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E318u;
        // 0x29e31c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E318u, 0x29E320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29E320u;
label_29e320:
    // 0x29e320: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x29e320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e324:
    // 0x29e324: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_29e328:
    if (ctx->pc == 0x29E328u) {
        ctx->pc = 0x29E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E324u;
        // 0x29e328: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E32Cu;
        goto label_29e32c;
    }
    ctx->pc = 0x29E324u;
    {
        const bool branch_taken_0x29e324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E324u;
        // 0x29e328: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e324) {
            ctx->pc = 0x29E2F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e2f0;
        }
    }
    ctx->pc = 0x29E32Cu;
label_29e32c:
    // 0x29e32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e330:
    // 0x29e330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e334:
    // 0x29e334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29e338:
    // 0x29e338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e33c:
    // 0x29e33c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e33cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29e340:
    // 0x29e340: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e344:
    // 0x29e344: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e344u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29e348:
    // 0x29e348: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29e348u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e34c:
    // 0x29e34c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29e34cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29e350:
    // 0x29e350: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x29e350u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29e354:
    // 0x29e354: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x29e354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_29e358:
    // 0x29e358: 0x3e00008  jr          $ra
label_29e35c:
    if (ctx->pc == 0x29E35Cu) {
        ctx->pc = 0x29E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E358u;
        // 0x29e35c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E360u;
        goto label_29e360;
    }
    ctx->pc = 0x29E358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E358u;
        // 0x29e35c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E360u;
label_29e360:
    // 0x29e360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29e364:
    // 0x29e364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e368:
    // 0x29e368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e36c:
    // 0x29e36c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29e370:
    // 0x29e370: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e374:
    // 0x29e374: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e378:
    // 0x29e378: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29e37c:
    // 0x29e37c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29e380:
    // 0x29e380: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29e380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e384:
    // 0x29e384: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29e388:
    // 0x29e388: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29e388u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e38c:
    // 0x29e38c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29e390:
    // 0x29e390: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29e390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e394:
    // 0x29e394: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_29e398:
    if (ctx->pc == 0x29E398u) {
        ctx->pc = 0x29E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E394u;
        // 0x29e398: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E39Cu;
        goto label_29e39c;
    }
    ctx->pc = 0x29E394u;
    {
        const bool branch_taken_0x29e394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E394u;
        // 0x29e398: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e394) {
            ctx->pc = 0x29E3D8u;
            goto label_29e3d8;
        }
    }
    ctx->pc = 0x29E39Cu;
label_29e39c:
    // 0x29e39c: 0x3c1209f8  lui         $s2, 0x9F8
    ctx->pc = 0x29e39cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2552 << 16));
label_29e3a0:
    // 0x29e3a0: 0x3652ed17  ori         $s2, $s2, 0xED17
    ctx->pc = 0x29e3a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)60695);
label_29e3a4:
    // 0x29e3a4: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x29e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_29e3a8:
    // 0x29e3a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29e3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29e3ac:
    // 0x29e3ac: 0xc0a7878  jal         func_29E1E0
label_29e3b0:
    if (ctx->pc == 0x29E3B0u) {
        ctx->pc = 0x29E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3ACu;
        // 0x29e3b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E3B4u;
        goto label_29e3b4;
    }
    ctx->pc = 0x29E3ACu;
    SET_GPR_U32(ctx, 31, 0x29E3B4u);
    ctx->pc = 0x29E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E3ACu;
    // 0x29e3b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29E3ACu, 0x29E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E3B4u;
label_29e3b4:
    // 0x29e3b4: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_29e3b8:
    if (ctx->pc == 0x29E3B8u) {
        ctx->pc = 0x29E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3B4u;
        // 0x29e3b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E3BCu;
        goto label_29e3bc;
    }
    ctx->pc = 0x29E3B4u;
    {
        const bool branch_taken_0x29e3b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29e3b4) {
            ctx->pc = 0x29E3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E3B4u;
            // 0x29e3b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E3CCu;
            goto label_29e3cc;
        }
    }
    ctx->pc = 0x29E3BCu;
label_29e3bc:
    // 0x29e3bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29e3c0:
    // 0x29e3c0: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x29e3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_29e3c4:
    // 0x29e3c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29e3c8:
    // 0x29e3c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29e3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29e3cc:
    // 0x29e3cc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e3d0:
    // 0x29e3d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_29e3d4:
    if (ctx->pc == 0x29E3D4u) {
        ctx->pc = 0x29E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3D0u;
        // 0x29e3d4: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E3D8u;
        goto label_29e3d8;
    }
    ctx->pc = 0x29E3D0u;
    {
        const bool branch_taken_0x29e3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3D0u;
        // 0x29e3d4: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3d0) {
            ctx->pc = 0x29E3A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e3a8;
        }
    }
    ctx->pc = 0x29E3D8u;
label_29e3d8:
    // 0x29e3d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e3d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e3dc:
    // 0x29e3dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e3e0:
    // 0x29e3e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e3e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29e3e4:
    // 0x29e3e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e3e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e3e8:
    // 0x29e3e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e3e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29e3ec:
    // 0x29e3ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e3ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e3f0:
    // 0x29e3f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e3f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29e3f4:
    // 0x29e3f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29e3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e3f8:
    // 0x29e3f8: 0x3e00008  jr          $ra
label_29e3fc:
    if (ctx->pc == 0x29E3FCu) {
        ctx->pc = 0x29E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3F8u;
        // 0x29e3fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E400u;
        goto label_29e400;
    }
    ctx->pc = 0x29E3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3F8u;
        // 0x29e3fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E400u;
label_29e400:
    // 0x29e400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29e404:
    // 0x29e404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e408:
    // 0x29e408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e40c:
    // 0x29e40c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29e410:
    // 0x29e410: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e414:
    // 0x29e414: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e418:
    // 0x29e418: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29e41c:
    // 0x29e41c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29e420:
    // 0x29e420: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29e420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e424:
    // 0x29e424: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29e428:
    // 0x29e428: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29e428u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e42c:
    // 0x29e42c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29e430:
    // 0x29e430: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29e430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e434:
    // 0x29e434: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_29e438:
    if (ctx->pc == 0x29E438u) {
        ctx->pc = 0x29E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E434u;
        // 0x29e438: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E43Cu;
        goto label_29e43c;
    }
    ctx->pc = 0x29E434u;
    {
        const bool branch_taken_0x29e434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E434u;
        // 0x29e438: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e434) {
            ctx->pc = 0x29E478u;
            goto label_29e478;
        }
    }
    ctx->pc = 0x29E43Cu;
label_29e43c:
    // 0x29e43c: 0x3c12a951  lui         $s2, 0xA951
    ctx->pc = 0x29e43cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43345 << 16));
label_29e440:
    // 0x29e440: 0x365228c3  ori         $s2, $s2, 0x28C3
    ctx->pc = 0x29e440u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)10435);
label_29e444:
    // 0x29e444: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x29e444u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_29e448:
    // 0x29e448: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29e448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29e44c:
    // 0x29e44c: 0xc0a7878  jal         func_29E1E0
label_29e450:
    if (ctx->pc == 0x29E450u) {
        ctx->pc = 0x29E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E44Cu;
        // 0x29e450: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E454u;
        goto label_29e454;
    }
    ctx->pc = 0x29E44Cu;
    SET_GPR_U32(ctx, 31, 0x29E454u);
    ctx->pc = 0x29E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E44Cu;
    // 0x29e450: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29E44Cu, 0x29E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E454u;
label_29e454:
    // 0x29e454: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_29e458:
    if (ctx->pc == 0x29E458u) {
        ctx->pc = 0x29E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E454u;
        // 0x29e458: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E45Cu;
        goto label_29e45c;
    }
    ctx->pc = 0x29E454u;
    {
        const bool branch_taken_0x29e454 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29e454) {
            ctx->pc = 0x29E458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E454u;
            // 0x29e458: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E46Cu;
            goto label_29e46c;
        }
    }
    ctx->pc = 0x29E45Cu;
label_29e45c:
    // 0x29e45c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29e460:
    // 0x29e460: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x29e460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_29e464:
    // 0x29e464: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29e464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29e468:
    // 0x29e468: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29e468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29e46c:
    // 0x29e46c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e470:
    // 0x29e470: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_29e474:
    if (ctx->pc == 0x29E474u) {
        ctx->pc = 0x29E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E470u;
        // 0x29e474: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E478u;
        goto label_29e478;
    }
    ctx->pc = 0x29E470u;
    {
        const bool branch_taken_0x29e470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E470u;
        // 0x29e474: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e470) {
            ctx->pc = 0x29E448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e448;
        }
    }
    ctx->pc = 0x29E478u;
label_29e478:
    // 0x29e478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e47c:
    // 0x29e47c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e480:
    // 0x29e480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29e484:
    // 0x29e484: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e488:
    // 0x29e488: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e488u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29e48c:
    // 0x29e48c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e48cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e490:
    // 0x29e490: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e490u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29e494:
    // 0x29e494: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29e494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e498:
    // 0x29e498: 0x3e00008  jr          $ra
label_29e49c:
    if (ctx->pc == 0x29E49Cu) {
        ctx->pc = 0x29E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E498u;
        // 0x29e49c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E4A0u;
        goto label_29e4a0;
    }
    ctx->pc = 0x29E498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E498u;
        // 0x29e49c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E4A0u;
label_29e4a0:
    // 0x29e4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29e4a4:
    // 0x29e4a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e4a8:
    // 0x29e4a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e4ac:
    // 0x29e4ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29e4b0:
    // 0x29e4b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e4b4:
    // 0x29e4b4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e4b8:
    // 0x29e4b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29e4bc:
    // 0x29e4bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29e4c0:
    // 0x29e4c0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29e4c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e4c4:
    // 0x29e4c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29e4c8:
    // 0x29e4c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29e4c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e4cc:
    // 0x29e4cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29e4d0:
    // 0x29e4d0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x29e4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e4d4:
    // 0x29e4d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_29e4d8:
    if (ctx->pc == 0x29E4D8u) {
        ctx->pc = 0x29E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4D4u;
        // 0x29e4d8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E4DCu;
        goto label_29e4dc;
    }
    ctx->pc = 0x29E4D4u;
    {
        const bool branch_taken_0x29e4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4D4u;
        // 0x29e4d8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4d4) {
            ctx->pc = 0x29E524u;
            goto label_29e524;
        }
    }
    ctx->pc = 0x29E4DCu;
label_29e4dc:
    // 0x29e4dc: 0x2415e000  addiu       $s5, $zero, -0x2000
    ctx->pc = 0x29e4dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
label_29e4e0:
    // 0x29e4e0: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x29e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_29e4e4:
    // 0x29e4e4: 0x0  nop
    ctx->pc = 0x29e4e4u;
    // NOP
label_29e4e8:
    // 0x29e4e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29e4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29e4ec:
    // 0x29e4ec: 0xc0a7878  jal         func_29E1E0
label_29e4f0:
    if (ctx->pc == 0x29E4F0u) {
        ctx->pc = 0x29E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4ECu;
        // 0x29e4f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E4F4u;
        goto label_29e4f4;
    }
    ctx->pc = 0x29E4ECu;
    SET_GPR_U32(ctx, 31, 0x29E4F4u);
    ctx->pc = 0x29E4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E4ECu;
    // 0x29e4f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29E4ECu, 0x29E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E4F4u;
label_29e4f4:
    // 0x29e4f4: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_29e4f8:
    if (ctx->pc == 0x29E4F8u) {
        ctx->pc = 0x29E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4F4u;
        // 0x29e4f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E4FCu;
        goto label_29e4fc;
    }
    ctx->pc = 0x29E4F4u;
    {
        const bool branch_taken_0x29e4f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29e4f4) {
            ctx->pc = 0x29E4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E4F4u;
            // 0x29e4f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E518u;
            goto label_29e518;
        }
    }
    ctx->pc = 0x29E4FCu;
label_29e4fc:
    // 0x29e4fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29e500:
    // 0x29e500: 0x31340  sll         $v0, $v1, 13
    ctx->pc = 0x29e500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
label_29e504:
    // 0x29e504: 0x31cc2  srl         $v1, $v1, 19
    ctx->pc = 0x29e504u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 19));
label_29e508:
    // 0x29e508: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x29e508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_29e50c:
    // 0x29e50c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29e50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29e510:
    // 0x29e510: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29e510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29e514:
    // 0x29e514: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29e514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29e518:
    // 0x29e518: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e51c:
    // 0x29e51c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_29e520:
    if (ctx->pc == 0x29E520u) {
        ctx->pc = 0x29E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E51Cu;
        // 0x29e520: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E524u;
        goto label_29e524;
    }
    ctx->pc = 0x29E51Cu;
    {
        const bool branch_taken_0x29e51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E51Cu;
        // 0x29e520: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e51c) {
            ctx->pc = 0x29E4E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e4e8;
        }
    }
    ctx->pc = 0x29E524u;
label_29e524:
    // 0x29e524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e528:
    // 0x29e528: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e52c:
    // 0x29e52c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e52cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29e530:
    // 0x29e530: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e534:
    // 0x29e534: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e534u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29e538:
    // 0x29e538: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e53c:
    // 0x29e53c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e53cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29e540:
    // 0x29e540: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29e540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e544:
    // 0x29e544: 0x3e00008  jr          $ra
label_29e548:
    if (ctx->pc == 0x29E548u) {
        ctx->pc = 0x29E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E544u;
        // 0x29e548: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E54Cu;
        goto label_29e54c;
    }
    ctx->pc = 0x29E544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E544u;
        // 0x29e548: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E54Cu;
label_29e54c:
    // 0x29e54c: 0x0  nop
    ctx->pc = 0x29e54cu;
    // NOP
label_29e550:
    // 0x29e550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29e554:
    // 0x29e554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e558:
    // 0x29e558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e55c:
    // 0x29e55c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29e560:
    // 0x29e560: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e564:
    // 0x29e564: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e568:
    // 0x29e568: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29e56c:
    // 0x29e56c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29e570:
    // 0x29e570: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29e570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e574:
    // 0x29e574: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29e578:
    // 0x29e578: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29e578u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e57c:
    // 0x29e57c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29e580:
    // 0x29e580: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x29e580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e584:
    // 0x29e584: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_29e588:
    if (ctx->pc == 0x29E588u) {
        ctx->pc = 0x29E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E584u;
        // 0x29e588: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E58Cu;
        goto label_29e58c;
    }
    ctx->pc = 0x29E584u;
    {
        const bool branch_taken_0x29e584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E584u;
        // 0x29e588: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e584) {
            ctx->pc = 0x29E5D4u;
            goto label_29e5d4;
        }
    }
    ctx->pc = 0x29E58Cu;
label_29e58c:
    // 0x29e58c: 0x2415ff00  addiu       $s5, $zero, -0x100
    ctx->pc = 0x29e58cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_29e590:
    // 0x29e590: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x29e590u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_29e594:
    // 0x29e594: 0x0  nop
    ctx->pc = 0x29e594u;
    // NOP
label_29e598:
    // 0x29e598: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29e598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29e59c:
    // 0x29e59c: 0xc0a7878  jal         func_29E1E0
label_29e5a0:
    if (ctx->pc == 0x29E5A0u) {
        ctx->pc = 0x29E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E59Cu;
        // 0x29e5a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5A4u;
        goto label_29e5a4;
    }
    ctx->pc = 0x29E59Cu;
    SET_GPR_U32(ctx, 31, 0x29E5A4u);
    ctx->pc = 0x29E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E59Cu;
    // 0x29e5a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29E59Cu, 0x29E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5A4u;
label_29e5a4:
    // 0x29e5a4: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_29e5a8:
    if (ctx->pc == 0x29E5A8u) {
        ctx->pc = 0x29E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5A4u;
        // 0x29e5a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5ACu;
        goto label_29e5ac;
    }
    ctx->pc = 0x29E5A4u;
    {
        const bool branch_taken_0x29e5a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29e5a4) {
            ctx->pc = 0x29E5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E5A4u;
            // 0x29e5a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E5C8u;
            goto label_29e5c8;
        }
    }
    ctx->pc = 0x29E5ACu;
label_29e5ac:
    // 0x29e5ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29e5b0:
    // 0x29e5b0: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x29e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_29e5b4:
    // 0x29e5b4: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x29e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
label_29e5b8:
    // 0x29e5b8: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x29e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_29e5bc:
    // 0x29e5bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29e5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29e5c0:
    // 0x29e5c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29e5c4:
    // 0x29e5c4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29e5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29e5c8:
    // 0x29e5c8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e5c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e5cc:
    // 0x29e5cc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_29e5d0:
    if (ctx->pc == 0x29E5D0u) {
        ctx->pc = 0x29E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5CCu;
        // 0x29e5d0: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5D4u;
        goto label_29e5d4;
    }
    ctx->pc = 0x29E5CCu;
    {
        const bool branch_taken_0x29e5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5CCu;
        // 0x29e5d0: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5cc) {
            ctx->pc = 0x29E598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e598;
        }
    }
    ctx->pc = 0x29E5D4u;
label_29e5d4:
    // 0x29e5d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e5d8:
    // 0x29e5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e5dc:
    // 0x29e5dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e5dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29e5e0:
    // 0x29e5e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e5e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e5e4:
    // 0x29e5e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e5e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29e5e8:
    // 0x29e5e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e5e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e5ec:
    // 0x29e5ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e5ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29e5f0:
    // 0x29e5f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29e5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e5f4:
    // 0x29e5f4: 0x3e00008  jr          $ra
label_29e5f8:
    if (ctx->pc == 0x29E5F8u) {
        ctx->pc = 0x29E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5F4u;
        // 0x29e5f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E5FCu;
        goto label_29e5fc;
    }
    ctx->pc = 0x29E5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5F4u;
        // 0x29e5f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E5FCu;
label_29e5fc:
    // 0x29e5fc: 0x0  nop
    ctx->pc = 0x29e5fcu;
    // NOP
label_29e600:
    // 0x29e600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29e604:
    // 0x29e604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e608:
    // 0x29e608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e60c:
    // 0x29e60c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29e610:
    // 0x29e610: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e614:
    // 0x29e614: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e618:
    // 0x29e618: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29e61c:
    // 0x29e61c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29e620:
    // 0x29e620: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29e620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e624:
    // 0x29e624: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29e628:
    // 0x29e628: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29e628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e62c:
    // 0x29e62c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29e630:
    // 0x29e630: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x29e630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e634:
    // 0x29e634: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29e638:
    // 0x29e638: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_29e63c:
    if (ctx->pc == 0x29E63Cu) {
        ctx->pc = 0x29E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E638u;
        // 0x29e63c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E640u;
        goto label_29e640;
    }
    ctx->pc = 0x29E638u;
    {
        const bool branch_taken_0x29e638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E638u;
        // 0x29e63c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e638) {
            ctx->pc = 0x29E6A8u;
            goto label_29e6a8;
        }
    }
    ctx->pc = 0x29E640u;
label_29e640:
    // 0x29e640: 0x3c1600ff  lui         $s6, 0xFF
    ctx->pc = 0x29e640u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)255 << 16));
label_29e644:
    // 0x29e644: 0x3c15ff00  lui         $s5, 0xFF00
    ctx->pc = 0x29e644u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65280 << 16));
label_29e648:
    // 0x29e648: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x29e648u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_29e64c:
    // 0x29e64c: 0x0  nop
    ctx->pc = 0x29e64cu;
    // NOP
label_29e650:
    // 0x29e650: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29e650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29e654:
    // 0x29e654: 0xc0a7878  jal         func_29E1E0
label_29e658:
    if (ctx->pc == 0x29E658u) {
        ctx->pc = 0x29E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E654u;
        // 0x29e658: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E65Cu;
        goto label_29e65c;
    }
    ctx->pc = 0x29E654u;
    SET_GPR_U32(ctx, 31, 0x29E65Cu);
    ctx->pc = 0x29E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E654u;
    // 0x29e658: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29E654u, 0x29E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E65Cu;
label_29e65c:
    // 0x29e65c: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
label_29e660:
    if (ctx->pc == 0x29E660u) {
        ctx->pc = 0x29E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E65Cu;
        // 0x29e660: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E664u;
        goto label_29e664;
    }
    ctx->pc = 0x29E65Cu;
    {
        const bool branch_taken_0x29e65c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29e65c) {
            ctx->pc = 0x29E660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E65Cu;
            // 0x29e660: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E69Cu;
            goto label_29e69c;
        }
    }
    ctx->pc = 0x29E664u;
label_29e664:
    // 0x29e664: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29e664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29e668:
    // 0x29e668: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x29e668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_29e66c:
    // 0x29e66c: 0x32203  sra         $a0, $v1, 8
    ctx->pc = 0x29e66cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 8));
label_29e670:
    // 0x29e670: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x29e670u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_29e674:
    // 0x29e674: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x29e674u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_29e678:
    // 0x29e678: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x29e678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_29e67c:
    // 0x29e67c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x29e67cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_29e680:
    // 0x29e680: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x29e680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_29e684:
    // 0x29e684: 0xb52824  and         $a1, $a1, $s5
    ctx->pc = 0x29e684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
label_29e688:
    // 0x29e688: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x29e688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_29e68c:
    // 0x29e68c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x29e68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_29e690:
    // 0x29e690: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29e690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29e694:
    // 0x29e694: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29e694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29e698:
    // 0x29e698: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29e698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29e69c:
    // 0x29e69c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e6a0:
    // 0x29e6a0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_29e6a4:
    if (ctx->pc == 0x29E6A4u) {
        ctx->pc = 0x29E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6A0u;
        // 0x29e6a4: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E6A8u;
        goto label_29e6a8;
    }
    ctx->pc = 0x29E6A0u;
    {
        const bool branch_taken_0x29e6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6A0u;
        // 0x29e6a4: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e6a0) {
            ctx->pc = 0x29E650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e650;
        }
    }
    ctx->pc = 0x29E6A8u;
label_29e6a8:
    // 0x29e6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e6ac:
    // 0x29e6ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e6b0:
    // 0x29e6b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e6b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29e6b4:
    // 0x29e6b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e6b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e6b8:
    // 0x29e6b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e6b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29e6bc:
    // 0x29e6bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e6bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e6c0:
    // 0x29e6c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e6c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29e6c4:
    // 0x29e6c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29e6c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e6c8:
    // 0x29e6c8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29e6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29e6cc:
    // 0x29e6cc: 0x3e00008  jr          $ra
label_29e6d0:
    if (ctx->pc == 0x29E6D0u) {
        ctx->pc = 0x29E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6CCu;
        // 0x29e6d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E6D4u;
        goto label_29e6d4;
    }
    ctx->pc = 0x29E6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6CCu;
        // 0x29e6d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E6D4u;
label_29e6d4:
    // 0x29e6d4: 0x0  nop
    ctx->pc = 0x29e6d4u;
    // NOP
label_29e6d8:
    // 0x29e6d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29e6dc:
    // 0x29e6dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e6e0:
    // 0x29e6e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e6e4:
    // 0x29e6e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29e6e8:
    // 0x29e6e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e6e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e6ec:
    // 0x29e6ec: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e6ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e6f0:
    // 0x29e6f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29e6f4:
    // 0x29e6f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29e6f8:
    // 0x29e6f8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29e6f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e6fc:
    // 0x29e6fc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29e700:
    // 0x29e700: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29e700u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e704:
    // 0x29e704: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29e708:
    // 0x29e708: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29e708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e70c:
    // 0x29e70c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29e70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29e710:
    // 0x29e710: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_29e714:
    if (ctx->pc == 0x29E714u) {
        ctx->pc = 0x29E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E710u;
        // 0x29e714: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E718u;
        goto label_29e718;
    }
    ctx->pc = 0x29E710u;
    {
        const bool branch_taken_0x29e710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E710u;
        // 0x29e714: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e710) {
            ctx->pc = 0x29E768u;
            goto label_29e768;
        }
    }
    ctx->pc = 0x29E718u;
label_29e718:
    // 0x29e718: 0x3c1209f8  lui         $s2, 0x9F8
    ctx->pc = 0x29e718u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2552 << 16));
label_29e71c:
    // 0x29e71c: 0x2416e000  addiu       $s6, $zero, -0x2000
    ctx->pc = 0x29e71cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
label_29e720:
    // 0x29e720: 0x3652ed17  ori         $s2, $s2, 0xED17
    ctx->pc = 0x29e720u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)60695);
label_29e724:
    // 0x29e724: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x29e724u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_29e728:
    // 0x29e728: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29e728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29e72c:
    // 0x29e72c: 0xc0a7878  jal         func_29E1E0
label_29e730:
    if (ctx->pc == 0x29E730u) {
        ctx->pc = 0x29E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E72Cu;
        // 0x29e730: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E734u;
        goto label_29e734;
    }
    ctx->pc = 0x29E72Cu;
    SET_GPR_U32(ctx, 31, 0x29E734u);
    ctx->pc = 0x29E730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E72Cu;
    // 0x29e730: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29E72Cu, 0x29E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E734u;
label_29e734:
    // 0x29e734: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
label_29e738:
    if (ctx->pc == 0x29E738u) {
        ctx->pc = 0x29E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E734u;
        // 0x29e738: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E73Cu;
        goto label_29e73c;
    }
    ctx->pc = 0x29E734u;
    {
        const bool branch_taken_0x29e734 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29e734) {
            ctx->pc = 0x29E738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E734u;
            // 0x29e738: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E75Cu;
            goto label_29e75c;
        }
    }
    ctx->pc = 0x29E73Cu;
label_29e73c:
    // 0x29e73c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29e740:
    // 0x29e740: 0x31340  sll         $v0, $v1, 13
    ctx->pc = 0x29e740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
label_29e744:
    // 0x29e744: 0x31cc2  srl         $v1, $v1, 19
    ctx->pc = 0x29e744u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 19));
label_29e748:
    // 0x29e748: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x29e748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_29e74c:
    // 0x29e74c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29e74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29e750:
    // 0x29e750: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x29e750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_29e754:
    // 0x29e754: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29e754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29e758:
    // 0x29e758: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29e758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29e75c:
    // 0x29e75c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e760:
    // 0x29e760: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_29e764:
    if (ctx->pc == 0x29E764u) {
        ctx->pc = 0x29E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E760u;
        // 0x29e764: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E768u;
        goto label_29e768;
    }
    ctx->pc = 0x29E760u;
    {
        const bool branch_taken_0x29e760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E760u;
        // 0x29e764: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e760) {
            ctx->pc = 0x29E728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e728;
        }
    }
    ctx->pc = 0x29E768u;
label_29e768:
    // 0x29e768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e76c:
    // 0x29e76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e770:
    // 0x29e770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29e774:
    // 0x29e774: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e778:
    // 0x29e778: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e778u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29e77c:
    // 0x29e77c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e77cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e780:
    // 0x29e780: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e780u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29e784:
    // 0x29e784: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29e784u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e788:
    // 0x29e788: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29e788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29e78c:
    // 0x29e78c: 0x3e00008  jr          $ra
label_29e790:
    if (ctx->pc == 0x29E790u) {
        ctx->pc = 0x29E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E78Cu;
        // 0x29e790: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E794u;
        goto label_29e794;
    }
    ctx->pc = 0x29E78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E78Cu;
        // 0x29e790: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E794u;
label_29e794:
    // 0x29e794: 0x0  nop
    ctx->pc = 0x29e794u;
    // NOP
label_29e798:
    // 0x29e798: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29e798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29e79c:
    // 0x29e79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e7a0:
    // 0x29e7a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e7a4:
    // 0x29e7a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29e7a8:
    // 0x29e7a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e7ac:
    // 0x29e7ac: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e7b0:
    // 0x29e7b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29e7b4:
    // 0x29e7b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29e7b8:
    // 0x29e7b8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29e7b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e7bc:
    // 0x29e7bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29e7c0:
    // 0x29e7c0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29e7c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e7c4:
    // 0x29e7c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29e7c8:
    // 0x29e7c8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29e7c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e7cc:
    // 0x29e7cc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29e7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29e7d0:
    // 0x29e7d0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29e7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_29e7d4:
    // 0x29e7d4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x29e7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_29e7d8:
    // 0x29e7d8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_29e7dc:
    if (ctx->pc == 0x29E7DCu) {
        ctx->pc = 0x29E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7D8u;
        // 0x29e7dc: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E7E0u;
        goto label_29e7e0;
    }
    ctx->pc = 0x29E7D8u;
    {
        const bool branch_taken_0x29e7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7D8u;
        // 0x29e7dc: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7d8) {
            ctx->pc = 0x29E864u;
            goto label_29e864;
        }
    }
    ctx->pc = 0x29E7E0u;
label_29e7e0:
    // 0x29e7e0: 0x3c12a951  lui         $s2, 0xA951
    ctx->pc = 0x29e7e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43345 << 16));
label_29e7e4:
    // 0x29e7e4: 0x241eff00  addiu       $fp, $zero, -0x100
    ctx->pc = 0x29e7e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_29e7e8:
    // 0x29e7e8: 0x365228c3  ori         $s2, $s2, 0x28C3
    ctx->pc = 0x29e7e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)10435);
label_29e7ec:
    // 0x29e7ec: 0x3c1700ff  lui         $s7, 0xFF
    ctx->pc = 0x29e7ecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)255 << 16));
label_29e7f0:
    // 0x29e7f0: 0x3c16ff00  lui         $s6, 0xFF00
    ctx->pc = 0x29e7f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65280 << 16));
label_29e7f4:
    // 0x29e7f4: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x29e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_29e7f8:
    // 0x29e7f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29e7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29e7fc:
    // 0x29e7fc: 0xc0a7878  jal         func_29E1E0
label_29e800:
    if (ctx->pc == 0x29E800u) {
        ctx->pc = 0x29E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7FCu;
        // 0x29e800: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E804u;
        goto label_29e804;
    }
    ctx->pc = 0x29E7FCu;
    SET_GPR_U32(ctx, 31, 0x29E804u);
    ctx->pc = 0x29E800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E7FCu;
    // 0x29e800: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29E7FCu, 0x29E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E804u;
label_29e804:
    // 0x29e804: 0x58400014  blezl       $v0, . + 4 + (0x14 << 2)
label_29e808:
    if (ctx->pc == 0x29E808u) {
        ctx->pc = 0x29E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E804u;
        // 0x29e808: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E80Cu;
        goto label_29e80c;
    }
    ctx->pc = 0x29E804u;
    {
        const bool branch_taken_0x29e804 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29e804) {
            ctx->pc = 0x29E808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E804u;
            // 0x29e808: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E858u;
            goto label_29e858;
        }
    }
    ctx->pc = 0x29E80Cu;
label_29e80c:
    // 0x29e80c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29e810:
    // 0x29e810: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x29e810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_29e814:
    // 0x29e814: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x29e814u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
label_29e818:
    // 0x29e818: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x29e818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
label_29e81c:
    // 0x29e81c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29e81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29e820:
    // 0x29e820: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x29e820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_29e824:
    // 0x29e824: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x29e824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_29e828:
    // 0x29e828: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x29e828u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
label_29e82c:
    // 0x29e82c: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x29e82cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_29e830:
    // 0x29e830: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x29e830u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_29e834:
    // 0x29e834: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x29e834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
label_29e838:
    // 0x29e838: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x29e838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_29e83c:
    // 0x29e83c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29e83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_29e840:
    // 0x29e840: 0xb62824  and         $a1, $a1, $s6
    ctx->pc = 0x29e840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 22));
label_29e844:
    // 0x29e844: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x29e844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_29e848:
    // 0x29e848: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x29e848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_29e84c:
    // 0x29e84c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29e84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29e850:
    // 0x29e850: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x29e850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_29e854:
    // 0x29e854: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29e854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29e858:
    // 0x29e858: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e85c:
    // 0x29e85c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_29e860:
    if (ctx->pc == 0x29E860u) {
        ctx->pc = 0x29E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E85Cu;
        // 0x29e860: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E864u;
        goto label_29e864;
    }
    ctx->pc = 0x29E85Cu;
    {
        const bool branch_taken_0x29e85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E85Cu;
        // 0x29e860: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e85c) {
            ctx->pc = 0x29E7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e7f8;
        }
    }
    ctx->pc = 0x29E864u;
label_29e864:
    // 0x29e864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e868:
    // 0x29e868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e86c:
    // 0x29e86c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29e870:
    // 0x29e870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e874:
    // 0x29e874: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29e878:
    // 0x29e878: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e87c:
    // 0x29e87c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e87cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29e880:
    // 0x29e880: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29e880u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e884:
    // 0x29e884: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29e884u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29e888:
    // 0x29e888: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x29e888u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29e88c:
    // 0x29e88c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x29e88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_29e890:
    // 0x29e890: 0x3e00008  jr          $ra
label_29e894:
    if (ctx->pc == 0x29E894u) {
        ctx->pc = 0x29E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E890u;
        // 0x29e894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E898u;
        goto label_29e898;
    }
    ctx->pc = 0x29E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E890u;
        // 0x29e894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E898u;
label_29e898:
    // 0x29e898: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29e89c:
    // 0x29e89c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e8a0:
    // 0x29e8a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e8a4:
    // 0x29e8a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29e8a8:
    // 0x29e8a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e8ac:
    // 0x29e8ac: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e8acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e8b0:
    // 0x29e8b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29e8b4:
    // 0x29e8b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29e8b8:
    // 0x29e8b8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29e8b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e8bc:
    // 0x29e8bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29e8c0:
    // 0x29e8c0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29e8c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e8c4:
    // 0x29e8c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29e8c8:
    // 0x29e8c8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29e8c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e8cc:
    // 0x29e8cc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_29e8d0:
    // 0x29e8d0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_29e8d4:
    // 0x29e8d4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x29e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_29e8d8:
    // 0x29e8d8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_29e8dc:
    if (ctx->pc == 0x29E8DCu) {
        ctx->pc = 0x29E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8D8u;
        // 0x29e8dc: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8E0u;
        goto label_29e8e0;
    }
    ctx->pc = 0x29E8D8u;
    {
        const bool branch_taken_0x29e8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8D8u;
        // 0x29e8dc: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e8d8) {
            ctx->pc = 0x29E978u;
            goto label_29e978;
        }
    }
    ctx->pc = 0x29E8E0u;
label_29e8e0:
    // 0x29e8e0: 0x3c1209f8  lui         $s2, 0x9F8
    ctx->pc = 0x29e8e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2552 << 16));
label_29e8e4:
    // 0x29e8e4: 0x3c1eff00  lui         $fp, 0xFF00
    ctx->pc = 0x29e8e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65280 << 16));
label_29e8e8:
    // 0x29e8e8: 0x2417e000  addiu       $s7, $zero, -0x2000
    ctx->pc = 0x29e8e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
label_29e8ec:
    // 0x29e8ec: 0x2416ff00  addiu       $s6, $zero, -0x100
    ctx->pc = 0x29e8ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_29e8f0:
    // 0x29e8f0: 0x3652ed17  ori         $s2, $s2, 0xED17
    ctx->pc = 0x29e8f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)60695);
label_29e8f4:
    // 0x29e8f4: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x29e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_29e8f8:
    // 0x29e8f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29e8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29e8fc:
    // 0x29e8fc: 0xc0a7878  jal         func_29E1E0
label_29e900:
    if (ctx->pc == 0x29E900u) {
        ctx->pc = 0x29E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8FCu;
        // 0x29e900: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E904u;
        goto label_29e904;
    }
    ctx->pc = 0x29E8FCu;
    SET_GPR_U32(ctx, 31, 0x29E904u);
    ctx->pc = 0x29E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E8FCu;
    // 0x29e900: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E1E0u, 0x29E8FCu, 0x29E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E904u;
label_29e904:
    // 0x29e904: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_29e908:
    if (ctx->pc == 0x29E908u) {
        ctx->pc = 0x29E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E904u;
        // 0x29e908: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E90Cu;
        goto label_29e90c;
    }
    ctx->pc = 0x29E904u;
    {
        const bool branch_taken_0x29e904 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29e904) {
            ctx->pc = 0x29E908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E904u;
            // 0x29e908: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E96Cu;
            goto label_29e96c;
        }
    }
    ctx->pc = 0x29E90Cu;
label_29e90c:
    // 0x29e90c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29e910:
    // 0x29e910: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x29e910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_29e914:
    // 0x29e914: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x29e914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_29e918:
    // 0x29e918: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x29e918u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
label_29e91c:
    // 0x29e91c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x29e91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_29e920:
    // 0x29e920: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x29e920u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_29e924:
    // 0x29e924: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29e924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29e928:
    // 0x29e928: 0xbe2824  and         $a1, $a1, $fp
    ctx->pc = 0x29e928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 30));
label_29e92c:
    // 0x29e92c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29e92cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_29e930:
    // 0x29e930: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x29e930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_29e934:
    // 0x29e934: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x29e934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_29e938:
    // 0x29e938: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x29e938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_29e93c:
    // 0x29e93c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x29e93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_29e940:
    // 0x29e940: 0x41b40  sll         $v1, $a0, 13
    ctx->pc = 0x29e940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_29e944:
    // 0x29e944: 0x424c2  srl         $a0, $a0, 19
    ctx->pc = 0x29e944u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 19));
label_29e948:
    // 0x29e948: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x29e948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
label_29e94c:
    // 0x29e94c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29e94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_29e950:
    // 0x29e950: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x29e950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_29e954:
    // 0x29e954: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x29e954u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
label_29e958:
    // 0x29e958: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x29e958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_29e95c:
    // 0x29e95c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29e95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29e960:
    // 0x29e960: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x29e960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_29e964:
    // 0x29e964: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29e964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29e968:
    // 0x29e968: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29e968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29e96c:
    // 0x29e96c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x29e96cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29e970:
    // 0x29e970: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_29e974:
    if (ctx->pc == 0x29E974u) {
        ctx->pc = 0x29E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E970u;
        // 0x29e974: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E978u;
        goto label_29e978;
    }
    ctx->pc = 0x29E970u;
    {
        const bool branch_taken_0x29e970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E970u;
        // 0x29e974: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e970) {
            ctx->pc = 0x29E8F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e8f8;
        }
    }
    ctx->pc = 0x29E978u;
label_29e978:
    // 0x29e978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e97c:
    // 0x29e97c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e980:
    // 0x29e980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29e984:
    // 0x29e984: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e988:
    // 0x29e988: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29e98c:
    // 0x29e98c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e98cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e990:
    // 0x29e990: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e990u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29e994:
    // 0x29e994: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29e994u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e998:
    // 0x29e998: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29e998u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29e99c:
    // 0x29e99c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x29e99cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29e9a0:
    // 0x29e9a0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x29e9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_29e9a4:
    // 0x29e9a4: 0x3e00008  jr          $ra
label_29e9a8:
    if (ctx->pc == 0x29E9A8u) {
        ctx->pc = 0x29E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9A4u;
        // 0x29e9a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E9ACu;
        goto label_29e9ac;
    }
    ctx->pc = 0x29E9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9A4u;
        // 0x29e9a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E9ACu;
label_29e9ac:
    // 0x29e9ac: 0x0  nop
    ctx->pc = 0x29e9acu;
    // NOP
}
