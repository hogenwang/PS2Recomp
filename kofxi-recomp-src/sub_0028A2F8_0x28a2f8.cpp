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

// Function: sub_0028A2F8
// Address: 0x28a2f8 - 0x28b148
void sub_0028A2F8_0x28a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A2F8_0x28a2f8");
#endif

    switch (ctx->pc) {
        case 0x28a2f8u: goto label_28a2f8;
        case 0x28a2fcu: goto label_28a2fc;
        case 0x28a300u: goto label_28a300;
        case 0x28a304u: goto label_28a304;
        case 0x28a308u: goto label_28a308;
        case 0x28a30cu: goto label_28a30c;
        case 0x28a310u: goto label_28a310;
        case 0x28a314u: goto label_28a314;
        case 0x28a318u: goto label_28a318;
        case 0x28a31cu: goto label_28a31c;
        case 0x28a320u: goto label_28a320;
        case 0x28a324u: goto label_28a324;
        case 0x28a328u: goto label_28a328;
        case 0x28a32cu: goto label_28a32c;
        case 0x28a330u: goto label_28a330;
        case 0x28a334u: goto label_28a334;
        case 0x28a338u: goto label_28a338;
        case 0x28a33cu: goto label_28a33c;
        case 0x28a340u: goto label_28a340;
        case 0x28a344u: goto label_28a344;
        case 0x28a348u: goto label_28a348;
        case 0x28a34cu: goto label_28a34c;
        case 0x28a350u: goto label_28a350;
        case 0x28a354u: goto label_28a354;
        case 0x28a358u: goto label_28a358;
        case 0x28a35cu: goto label_28a35c;
        case 0x28a360u: goto label_28a360;
        case 0x28a364u: goto label_28a364;
        case 0x28a368u: goto label_28a368;
        case 0x28a36cu: goto label_28a36c;
        case 0x28a370u: goto label_28a370;
        case 0x28a374u: goto label_28a374;
        case 0x28a378u: goto label_28a378;
        case 0x28a37cu: goto label_28a37c;
        case 0x28a380u: goto label_28a380;
        case 0x28a384u: goto label_28a384;
        case 0x28a388u: goto label_28a388;
        case 0x28a38cu: goto label_28a38c;
        case 0x28a390u: goto label_28a390;
        case 0x28a394u: goto label_28a394;
        case 0x28a398u: goto label_28a398;
        case 0x28a39cu: goto label_28a39c;
        case 0x28a3a0u: goto label_28a3a0;
        case 0x28a3a4u: goto label_28a3a4;
        case 0x28a3a8u: goto label_28a3a8;
        case 0x28a3acu: goto label_28a3ac;
        case 0x28a3b0u: goto label_28a3b0;
        case 0x28a3b4u: goto label_28a3b4;
        case 0x28a3b8u: goto label_28a3b8;
        case 0x28a3bcu: goto label_28a3bc;
        case 0x28a3c0u: goto label_28a3c0;
        case 0x28a3c4u: goto label_28a3c4;
        case 0x28a3c8u: goto label_28a3c8;
        case 0x28a3ccu: goto label_28a3cc;
        case 0x28a3d0u: goto label_28a3d0;
        case 0x28a3d4u: goto label_28a3d4;
        case 0x28a3d8u: goto label_28a3d8;
        case 0x28a3dcu: goto label_28a3dc;
        case 0x28a3e0u: goto label_28a3e0;
        case 0x28a3e4u: goto label_28a3e4;
        case 0x28a3e8u: goto label_28a3e8;
        case 0x28a3ecu: goto label_28a3ec;
        case 0x28a3f0u: goto label_28a3f0;
        case 0x28a3f4u: goto label_28a3f4;
        case 0x28a3f8u: goto label_28a3f8;
        case 0x28a3fcu: goto label_28a3fc;
        case 0x28a400u: goto label_28a400;
        case 0x28a404u: goto label_28a404;
        case 0x28a408u: goto label_28a408;
        case 0x28a40cu: goto label_28a40c;
        case 0x28a410u: goto label_28a410;
        case 0x28a414u: goto label_28a414;
        case 0x28a418u: goto label_28a418;
        case 0x28a41cu: goto label_28a41c;
        case 0x28a420u: goto label_28a420;
        case 0x28a424u: goto label_28a424;
        case 0x28a428u: goto label_28a428;
        case 0x28a42cu: goto label_28a42c;
        case 0x28a430u: goto label_28a430;
        case 0x28a434u: goto label_28a434;
        case 0x28a438u: goto label_28a438;
        case 0x28a43cu: goto label_28a43c;
        case 0x28a440u: goto label_28a440;
        case 0x28a444u: goto label_28a444;
        case 0x28a448u: goto label_28a448;
        case 0x28a44cu: goto label_28a44c;
        case 0x28a450u: goto label_28a450;
        case 0x28a454u: goto label_28a454;
        case 0x28a458u: goto label_28a458;
        case 0x28a45cu: goto label_28a45c;
        case 0x28a460u: goto label_28a460;
        case 0x28a464u: goto label_28a464;
        case 0x28a468u: goto label_28a468;
        case 0x28a46cu: goto label_28a46c;
        case 0x28a470u: goto label_28a470;
        case 0x28a474u: goto label_28a474;
        case 0x28a478u: goto label_28a478;
        case 0x28a47cu: goto label_28a47c;
        case 0x28a480u: goto label_28a480;
        case 0x28a484u: goto label_28a484;
        case 0x28a488u: goto label_28a488;
        case 0x28a48cu: goto label_28a48c;
        case 0x28a490u: goto label_28a490;
        case 0x28a494u: goto label_28a494;
        case 0x28a498u: goto label_28a498;
        case 0x28a49cu: goto label_28a49c;
        case 0x28a4a0u: goto label_28a4a0;
        case 0x28a4a4u: goto label_28a4a4;
        case 0x28a4a8u: goto label_28a4a8;
        case 0x28a4acu: goto label_28a4ac;
        case 0x28a4b0u: goto label_28a4b0;
        case 0x28a4b4u: goto label_28a4b4;
        case 0x28a4b8u: goto label_28a4b8;
        case 0x28a4bcu: goto label_28a4bc;
        case 0x28a4c0u: goto label_28a4c0;
        case 0x28a4c4u: goto label_28a4c4;
        case 0x28a4c8u: goto label_28a4c8;
        case 0x28a4ccu: goto label_28a4cc;
        case 0x28a4d0u: goto label_28a4d0;
        case 0x28a4d4u: goto label_28a4d4;
        case 0x28a4d8u: goto label_28a4d8;
        case 0x28a4dcu: goto label_28a4dc;
        case 0x28a4e0u: goto label_28a4e0;
        case 0x28a4e4u: goto label_28a4e4;
        case 0x28a4e8u: goto label_28a4e8;
        case 0x28a4ecu: goto label_28a4ec;
        case 0x28a4f0u: goto label_28a4f0;
        case 0x28a4f4u: goto label_28a4f4;
        case 0x28a4f8u: goto label_28a4f8;
        case 0x28a4fcu: goto label_28a4fc;
        case 0x28a500u: goto label_28a500;
        case 0x28a504u: goto label_28a504;
        case 0x28a508u: goto label_28a508;
        case 0x28a50cu: goto label_28a50c;
        case 0x28a510u: goto label_28a510;
        case 0x28a514u: goto label_28a514;
        case 0x28a518u: goto label_28a518;
        case 0x28a51cu: goto label_28a51c;
        case 0x28a520u: goto label_28a520;
        case 0x28a524u: goto label_28a524;
        case 0x28a528u: goto label_28a528;
        case 0x28a52cu: goto label_28a52c;
        case 0x28a530u: goto label_28a530;
        case 0x28a534u: goto label_28a534;
        case 0x28a538u: goto label_28a538;
        case 0x28a53cu: goto label_28a53c;
        case 0x28a540u: goto label_28a540;
        case 0x28a544u: goto label_28a544;
        case 0x28a548u: goto label_28a548;
        case 0x28a54cu: goto label_28a54c;
        case 0x28a550u: goto label_28a550;
        case 0x28a554u: goto label_28a554;
        case 0x28a558u: goto label_28a558;
        case 0x28a55cu: goto label_28a55c;
        case 0x28a560u: goto label_28a560;
        case 0x28a564u: goto label_28a564;
        case 0x28a568u: goto label_28a568;
        case 0x28a56cu: goto label_28a56c;
        case 0x28a570u: goto label_28a570;
        case 0x28a574u: goto label_28a574;
        case 0x28a578u: goto label_28a578;
        case 0x28a57cu: goto label_28a57c;
        case 0x28a580u: goto label_28a580;
        case 0x28a584u: goto label_28a584;
        case 0x28a588u: goto label_28a588;
        case 0x28a58cu: goto label_28a58c;
        case 0x28a590u: goto label_28a590;
        case 0x28a594u: goto label_28a594;
        case 0x28a598u: goto label_28a598;
        case 0x28a59cu: goto label_28a59c;
        case 0x28a5a0u: goto label_28a5a0;
        case 0x28a5a4u: goto label_28a5a4;
        case 0x28a5a8u: goto label_28a5a8;
        case 0x28a5acu: goto label_28a5ac;
        case 0x28a5b0u: goto label_28a5b0;
        case 0x28a5b4u: goto label_28a5b4;
        case 0x28a5b8u: goto label_28a5b8;
        case 0x28a5bcu: goto label_28a5bc;
        case 0x28a5c0u: goto label_28a5c0;
        case 0x28a5c4u: goto label_28a5c4;
        case 0x28a5c8u: goto label_28a5c8;
        case 0x28a5ccu: goto label_28a5cc;
        case 0x28a5d0u: goto label_28a5d0;
        case 0x28a5d4u: goto label_28a5d4;
        case 0x28a5d8u: goto label_28a5d8;
        case 0x28a5dcu: goto label_28a5dc;
        case 0x28a5e0u: goto label_28a5e0;
        case 0x28a5e4u: goto label_28a5e4;
        case 0x28a5e8u: goto label_28a5e8;
        case 0x28a5ecu: goto label_28a5ec;
        case 0x28a5f0u: goto label_28a5f0;
        case 0x28a5f4u: goto label_28a5f4;
        case 0x28a5f8u: goto label_28a5f8;
        case 0x28a5fcu: goto label_28a5fc;
        case 0x28a600u: goto label_28a600;
        case 0x28a604u: goto label_28a604;
        case 0x28a608u: goto label_28a608;
        case 0x28a60cu: goto label_28a60c;
        case 0x28a610u: goto label_28a610;
        case 0x28a614u: goto label_28a614;
        case 0x28a618u: goto label_28a618;
        case 0x28a61cu: goto label_28a61c;
        case 0x28a620u: goto label_28a620;
        case 0x28a624u: goto label_28a624;
        case 0x28a628u: goto label_28a628;
        case 0x28a62cu: goto label_28a62c;
        case 0x28a630u: goto label_28a630;
        case 0x28a634u: goto label_28a634;
        case 0x28a638u: goto label_28a638;
        case 0x28a63cu: goto label_28a63c;
        case 0x28a640u: goto label_28a640;
        case 0x28a644u: goto label_28a644;
        case 0x28a648u: goto label_28a648;
        case 0x28a64cu: goto label_28a64c;
        case 0x28a650u: goto label_28a650;
        case 0x28a654u: goto label_28a654;
        case 0x28a658u: goto label_28a658;
        case 0x28a65cu: goto label_28a65c;
        case 0x28a660u: goto label_28a660;
        case 0x28a664u: goto label_28a664;
        case 0x28a668u: goto label_28a668;
        case 0x28a66cu: goto label_28a66c;
        case 0x28a670u: goto label_28a670;
        case 0x28a674u: goto label_28a674;
        case 0x28a678u: goto label_28a678;
        case 0x28a67cu: goto label_28a67c;
        case 0x28a680u: goto label_28a680;
        case 0x28a684u: goto label_28a684;
        case 0x28a688u: goto label_28a688;
        case 0x28a68cu: goto label_28a68c;
        case 0x28a690u: goto label_28a690;
        case 0x28a694u: goto label_28a694;
        case 0x28a698u: goto label_28a698;
        case 0x28a69cu: goto label_28a69c;
        case 0x28a6a0u: goto label_28a6a0;
        case 0x28a6a4u: goto label_28a6a4;
        case 0x28a6a8u: goto label_28a6a8;
        case 0x28a6acu: goto label_28a6ac;
        case 0x28a6b0u: goto label_28a6b0;
        case 0x28a6b4u: goto label_28a6b4;
        case 0x28a6b8u: goto label_28a6b8;
        case 0x28a6bcu: goto label_28a6bc;
        case 0x28a6c0u: goto label_28a6c0;
        case 0x28a6c4u: goto label_28a6c4;
        case 0x28a6c8u: goto label_28a6c8;
        case 0x28a6ccu: goto label_28a6cc;
        case 0x28a6d0u: goto label_28a6d0;
        case 0x28a6d4u: goto label_28a6d4;
        case 0x28a6d8u: goto label_28a6d8;
        case 0x28a6dcu: goto label_28a6dc;
        case 0x28a6e0u: goto label_28a6e0;
        case 0x28a6e4u: goto label_28a6e4;
        case 0x28a6e8u: goto label_28a6e8;
        case 0x28a6ecu: goto label_28a6ec;
        case 0x28a6f0u: goto label_28a6f0;
        case 0x28a6f4u: goto label_28a6f4;
        case 0x28a6f8u: goto label_28a6f8;
        case 0x28a6fcu: goto label_28a6fc;
        case 0x28a700u: goto label_28a700;
        case 0x28a704u: goto label_28a704;
        case 0x28a708u: goto label_28a708;
        case 0x28a70cu: goto label_28a70c;
        case 0x28a710u: goto label_28a710;
        case 0x28a714u: goto label_28a714;
        case 0x28a718u: goto label_28a718;
        case 0x28a71cu: goto label_28a71c;
        case 0x28a720u: goto label_28a720;
        case 0x28a724u: goto label_28a724;
        case 0x28a728u: goto label_28a728;
        case 0x28a72cu: goto label_28a72c;
        case 0x28a730u: goto label_28a730;
        case 0x28a734u: goto label_28a734;
        case 0x28a738u: goto label_28a738;
        case 0x28a73cu: goto label_28a73c;
        case 0x28a740u: goto label_28a740;
        case 0x28a744u: goto label_28a744;
        case 0x28a748u: goto label_28a748;
        case 0x28a74cu: goto label_28a74c;
        case 0x28a750u: goto label_28a750;
        case 0x28a754u: goto label_28a754;
        case 0x28a758u: goto label_28a758;
        case 0x28a75cu: goto label_28a75c;
        case 0x28a760u: goto label_28a760;
        case 0x28a764u: goto label_28a764;
        case 0x28a768u: goto label_28a768;
        case 0x28a76cu: goto label_28a76c;
        case 0x28a770u: goto label_28a770;
        case 0x28a774u: goto label_28a774;
        case 0x28a778u: goto label_28a778;
        case 0x28a77cu: goto label_28a77c;
        case 0x28a780u: goto label_28a780;
        case 0x28a784u: goto label_28a784;
        case 0x28a788u: goto label_28a788;
        case 0x28a78cu: goto label_28a78c;
        case 0x28a790u: goto label_28a790;
        case 0x28a794u: goto label_28a794;
        case 0x28a798u: goto label_28a798;
        case 0x28a79cu: goto label_28a79c;
        case 0x28a7a0u: goto label_28a7a0;
        case 0x28a7a4u: goto label_28a7a4;
        case 0x28a7a8u: goto label_28a7a8;
        case 0x28a7acu: goto label_28a7ac;
        case 0x28a7b0u: goto label_28a7b0;
        case 0x28a7b4u: goto label_28a7b4;
        case 0x28a7b8u: goto label_28a7b8;
        case 0x28a7bcu: goto label_28a7bc;
        case 0x28a7c0u: goto label_28a7c0;
        case 0x28a7c4u: goto label_28a7c4;
        case 0x28a7c8u: goto label_28a7c8;
        case 0x28a7ccu: goto label_28a7cc;
        case 0x28a7d0u: goto label_28a7d0;
        case 0x28a7d4u: goto label_28a7d4;
        case 0x28a7d8u: goto label_28a7d8;
        case 0x28a7dcu: goto label_28a7dc;
        case 0x28a7e0u: goto label_28a7e0;
        case 0x28a7e4u: goto label_28a7e4;
        case 0x28a7e8u: goto label_28a7e8;
        case 0x28a7ecu: goto label_28a7ec;
        case 0x28a7f0u: goto label_28a7f0;
        case 0x28a7f4u: goto label_28a7f4;
        case 0x28a7f8u: goto label_28a7f8;
        case 0x28a7fcu: goto label_28a7fc;
        case 0x28a800u: goto label_28a800;
        case 0x28a804u: goto label_28a804;
        case 0x28a808u: goto label_28a808;
        case 0x28a80cu: goto label_28a80c;
        case 0x28a810u: goto label_28a810;
        case 0x28a814u: goto label_28a814;
        case 0x28a818u: goto label_28a818;
        case 0x28a81cu: goto label_28a81c;
        case 0x28a820u: goto label_28a820;
        case 0x28a824u: goto label_28a824;
        case 0x28a828u: goto label_28a828;
        case 0x28a82cu: goto label_28a82c;
        case 0x28a830u: goto label_28a830;
        case 0x28a834u: goto label_28a834;
        case 0x28a838u: goto label_28a838;
        case 0x28a83cu: goto label_28a83c;
        case 0x28a840u: goto label_28a840;
        case 0x28a844u: goto label_28a844;
        case 0x28a848u: goto label_28a848;
        case 0x28a84cu: goto label_28a84c;
        case 0x28a850u: goto label_28a850;
        case 0x28a854u: goto label_28a854;
        case 0x28a858u: goto label_28a858;
        case 0x28a85cu: goto label_28a85c;
        case 0x28a860u: goto label_28a860;
        case 0x28a864u: goto label_28a864;
        case 0x28a868u: goto label_28a868;
        case 0x28a86cu: goto label_28a86c;
        case 0x28a870u: goto label_28a870;
        case 0x28a874u: goto label_28a874;
        case 0x28a878u: goto label_28a878;
        case 0x28a87cu: goto label_28a87c;
        case 0x28a880u: goto label_28a880;
        case 0x28a884u: goto label_28a884;
        case 0x28a888u: goto label_28a888;
        case 0x28a88cu: goto label_28a88c;
        case 0x28a890u: goto label_28a890;
        case 0x28a894u: goto label_28a894;
        case 0x28a898u: goto label_28a898;
        case 0x28a89cu: goto label_28a89c;
        case 0x28a8a0u: goto label_28a8a0;
        case 0x28a8a4u: goto label_28a8a4;
        case 0x28a8a8u: goto label_28a8a8;
        case 0x28a8acu: goto label_28a8ac;
        case 0x28a8b0u: goto label_28a8b0;
        case 0x28a8b4u: goto label_28a8b4;
        case 0x28a8b8u: goto label_28a8b8;
        case 0x28a8bcu: goto label_28a8bc;
        case 0x28a8c0u: goto label_28a8c0;
        case 0x28a8c4u: goto label_28a8c4;
        case 0x28a8c8u: goto label_28a8c8;
        case 0x28a8ccu: goto label_28a8cc;
        case 0x28a8d0u: goto label_28a8d0;
        case 0x28a8d4u: goto label_28a8d4;
        case 0x28a8d8u: goto label_28a8d8;
        case 0x28a8dcu: goto label_28a8dc;
        case 0x28a8e0u: goto label_28a8e0;
        case 0x28a8e4u: goto label_28a8e4;
        case 0x28a8e8u: goto label_28a8e8;
        case 0x28a8ecu: goto label_28a8ec;
        case 0x28a8f0u: goto label_28a8f0;
        case 0x28a8f4u: goto label_28a8f4;
        case 0x28a8f8u: goto label_28a8f8;
        case 0x28a8fcu: goto label_28a8fc;
        case 0x28a900u: goto label_28a900;
        case 0x28a904u: goto label_28a904;
        case 0x28a908u: goto label_28a908;
        case 0x28a90cu: goto label_28a90c;
        case 0x28a910u: goto label_28a910;
        case 0x28a914u: goto label_28a914;
        case 0x28a918u: goto label_28a918;
        case 0x28a91cu: goto label_28a91c;
        case 0x28a920u: goto label_28a920;
        case 0x28a924u: goto label_28a924;
        case 0x28a928u: goto label_28a928;
        case 0x28a92cu: goto label_28a92c;
        case 0x28a930u: goto label_28a930;
        case 0x28a934u: goto label_28a934;
        case 0x28a938u: goto label_28a938;
        case 0x28a93cu: goto label_28a93c;
        case 0x28a940u: goto label_28a940;
        case 0x28a944u: goto label_28a944;
        case 0x28a948u: goto label_28a948;
        case 0x28a94cu: goto label_28a94c;
        case 0x28a950u: goto label_28a950;
        case 0x28a954u: goto label_28a954;
        case 0x28a958u: goto label_28a958;
        case 0x28a95cu: goto label_28a95c;
        case 0x28a960u: goto label_28a960;
        case 0x28a964u: goto label_28a964;
        case 0x28a968u: goto label_28a968;
        case 0x28a96cu: goto label_28a96c;
        case 0x28a970u: goto label_28a970;
        case 0x28a974u: goto label_28a974;
        case 0x28a978u: goto label_28a978;
        case 0x28a97cu: goto label_28a97c;
        case 0x28a980u: goto label_28a980;
        case 0x28a984u: goto label_28a984;
        case 0x28a988u: goto label_28a988;
        case 0x28a98cu: goto label_28a98c;
        case 0x28a990u: goto label_28a990;
        case 0x28a994u: goto label_28a994;
        case 0x28a998u: goto label_28a998;
        case 0x28a99cu: goto label_28a99c;
        case 0x28a9a0u: goto label_28a9a0;
        case 0x28a9a4u: goto label_28a9a4;
        case 0x28a9a8u: goto label_28a9a8;
        case 0x28a9acu: goto label_28a9ac;
        case 0x28a9b0u: goto label_28a9b0;
        case 0x28a9b4u: goto label_28a9b4;
        case 0x28a9b8u: goto label_28a9b8;
        case 0x28a9bcu: goto label_28a9bc;
        case 0x28a9c0u: goto label_28a9c0;
        case 0x28a9c4u: goto label_28a9c4;
        case 0x28a9c8u: goto label_28a9c8;
        case 0x28a9ccu: goto label_28a9cc;
        case 0x28a9d0u: goto label_28a9d0;
        case 0x28a9d4u: goto label_28a9d4;
        case 0x28a9d8u: goto label_28a9d8;
        case 0x28a9dcu: goto label_28a9dc;
        case 0x28a9e0u: goto label_28a9e0;
        case 0x28a9e4u: goto label_28a9e4;
        case 0x28a9e8u: goto label_28a9e8;
        case 0x28a9ecu: goto label_28a9ec;
        case 0x28a9f0u: goto label_28a9f0;
        case 0x28a9f4u: goto label_28a9f4;
        case 0x28a9f8u: goto label_28a9f8;
        case 0x28a9fcu: goto label_28a9fc;
        case 0x28aa00u: goto label_28aa00;
        case 0x28aa04u: goto label_28aa04;
        case 0x28aa08u: goto label_28aa08;
        case 0x28aa0cu: goto label_28aa0c;
        case 0x28aa10u: goto label_28aa10;
        case 0x28aa14u: goto label_28aa14;
        case 0x28aa18u: goto label_28aa18;
        case 0x28aa1cu: goto label_28aa1c;
        case 0x28aa20u: goto label_28aa20;
        case 0x28aa24u: goto label_28aa24;
        case 0x28aa28u: goto label_28aa28;
        case 0x28aa2cu: goto label_28aa2c;
        case 0x28aa30u: goto label_28aa30;
        case 0x28aa34u: goto label_28aa34;
        case 0x28aa38u: goto label_28aa38;
        case 0x28aa3cu: goto label_28aa3c;
        case 0x28aa40u: goto label_28aa40;
        case 0x28aa44u: goto label_28aa44;
        case 0x28aa48u: goto label_28aa48;
        case 0x28aa4cu: goto label_28aa4c;
        case 0x28aa50u: goto label_28aa50;
        case 0x28aa54u: goto label_28aa54;
        case 0x28aa58u: goto label_28aa58;
        case 0x28aa5cu: goto label_28aa5c;
        case 0x28aa60u: goto label_28aa60;
        case 0x28aa64u: goto label_28aa64;
        case 0x28aa68u: goto label_28aa68;
        case 0x28aa6cu: goto label_28aa6c;
        case 0x28aa70u: goto label_28aa70;
        case 0x28aa74u: goto label_28aa74;
        case 0x28aa78u: goto label_28aa78;
        case 0x28aa7cu: goto label_28aa7c;
        case 0x28aa80u: goto label_28aa80;
        case 0x28aa84u: goto label_28aa84;
        case 0x28aa88u: goto label_28aa88;
        case 0x28aa8cu: goto label_28aa8c;
        case 0x28aa90u: goto label_28aa90;
        case 0x28aa94u: goto label_28aa94;
        case 0x28aa98u: goto label_28aa98;
        case 0x28aa9cu: goto label_28aa9c;
        case 0x28aaa0u: goto label_28aaa0;
        case 0x28aaa4u: goto label_28aaa4;
        case 0x28aaa8u: goto label_28aaa8;
        case 0x28aaacu: goto label_28aaac;
        case 0x28aab0u: goto label_28aab0;
        case 0x28aab4u: goto label_28aab4;
        case 0x28aab8u: goto label_28aab8;
        case 0x28aabcu: goto label_28aabc;
        case 0x28aac0u: goto label_28aac0;
        case 0x28aac4u: goto label_28aac4;
        case 0x28aac8u: goto label_28aac8;
        case 0x28aaccu: goto label_28aacc;
        case 0x28aad0u: goto label_28aad0;
        case 0x28aad4u: goto label_28aad4;
        case 0x28aad8u: goto label_28aad8;
        case 0x28aadcu: goto label_28aadc;
        case 0x28aae0u: goto label_28aae0;
        case 0x28aae4u: goto label_28aae4;
        case 0x28aae8u: goto label_28aae8;
        case 0x28aaecu: goto label_28aaec;
        case 0x28aaf0u: goto label_28aaf0;
        case 0x28aaf4u: goto label_28aaf4;
        case 0x28aaf8u: goto label_28aaf8;
        case 0x28aafcu: goto label_28aafc;
        case 0x28ab00u: goto label_28ab00;
        case 0x28ab04u: goto label_28ab04;
        case 0x28ab08u: goto label_28ab08;
        case 0x28ab0cu: goto label_28ab0c;
        case 0x28ab10u: goto label_28ab10;
        case 0x28ab14u: goto label_28ab14;
        case 0x28ab18u: goto label_28ab18;
        case 0x28ab1cu: goto label_28ab1c;
        case 0x28ab20u: goto label_28ab20;
        case 0x28ab24u: goto label_28ab24;
        case 0x28ab28u: goto label_28ab28;
        case 0x28ab2cu: goto label_28ab2c;
        case 0x28ab30u: goto label_28ab30;
        case 0x28ab34u: goto label_28ab34;
        case 0x28ab38u: goto label_28ab38;
        case 0x28ab3cu: goto label_28ab3c;
        case 0x28ab40u: goto label_28ab40;
        case 0x28ab44u: goto label_28ab44;
        case 0x28ab48u: goto label_28ab48;
        case 0x28ab4cu: goto label_28ab4c;
        case 0x28ab50u: goto label_28ab50;
        case 0x28ab54u: goto label_28ab54;
        case 0x28ab58u: goto label_28ab58;
        case 0x28ab5cu: goto label_28ab5c;
        case 0x28ab60u: goto label_28ab60;
        case 0x28ab64u: goto label_28ab64;
        case 0x28ab68u: goto label_28ab68;
        case 0x28ab6cu: goto label_28ab6c;
        case 0x28ab70u: goto label_28ab70;
        case 0x28ab74u: goto label_28ab74;
        case 0x28ab78u: goto label_28ab78;
        case 0x28ab7cu: goto label_28ab7c;
        case 0x28ab80u: goto label_28ab80;
        case 0x28ab84u: goto label_28ab84;
        case 0x28ab88u: goto label_28ab88;
        case 0x28ab8cu: goto label_28ab8c;
        case 0x28ab90u: goto label_28ab90;
        case 0x28ab94u: goto label_28ab94;
        case 0x28ab98u: goto label_28ab98;
        case 0x28ab9cu: goto label_28ab9c;
        case 0x28aba0u: goto label_28aba0;
        case 0x28aba4u: goto label_28aba4;
        case 0x28aba8u: goto label_28aba8;
        case 0x28abacu: goto label_28abac;
        case 0x28abb0u: goto label_28abb0;
        case 0x28abb4u: goto label_28abb4;
        case 0x28abb8u: goto label_28abb8;
        case 0x28abbcu: goto label_28abbc;
        case 0x28abc0u: goto label_28abc0;
        case 0x28abc4u: goto label_28abc4;
        case 0x28abc8u: goto label_28abc8;
        case 0x28abccu: goto label_28abcc;
        case 0x28abd0u: goto label_28abd0;
        case 0x28abd4u: goto label_28abd4;
        case 0x28abd8u: goto label_28abd8;
        case 0x28abdcu: goto label_28abdc;
        case 0x28abe0u: goto label_28abe0;
        case 0x28abe4u: goto label_28abe4;
        case 0x28abe8u: goto label_28abe8;
        case 0x28abecu: goto label_28abec;
        case 0x28abf0u: goto label_28abf0;
        case 0x28abf4u: goto label_28abf4;
        case 0x28abf8u: goto label_28abf8;
        case 0x28abfcu: goto label_28abfc;
        case 0x28ac00u: goto label_28ac00;
        case 0x28ac04u: goto label_28ac04;
        case 0x28ac08u: goto label_28ac08;
        case 0x28ac0cu: goto label_28ac0c;
        case 0x28ac10u: goto label_28ac10;
        case 0x28ac14u: goto label_28ac14;
        case 0x28ac18u: goto label_28ac18;
        case 0x28ac1cu: goto label_28ac1c;
        case 0x28ac20u: goto label_28ac20;
        case 0x28ac24u: goto label_28ac24;
        case 0x28ac28u: goto label_28ac28;
        case 0x28ac2cu: goto label_28ac2c;
        case 0x28ac30u: goto label_28ac30;
        case 0x28ac34u: goto label_28ac34;
        case 0x28ac38u: goto label_28ac38;
        case 0x28ac3cu: goto label_28ac3c;
        case 0x28ac40u: goto label_28ac40;
        case 0x28ac44u: goto label_28ac44;
        case 0x28ac48u: goto label_28ac48;
        case 0x28ac4cu: goto label_28ac4c;
        case 0x28ac50u: goto label_28ac50;
        case 0x28ac54u: goto label_28ac54;
        case 0x28ac58u: goto label_28ac58;
        case 0x28ac5cu: goto label_28ac5c;
        case 0x28ac60u: goto label_28ac60;
        case 0x28ac64u: goto label_28ac64;
        case 0x28ac68u: goto label_28ac68;
        case 0x28ac6cu: goto label_28ac6c;
        case 0x28ac70u: goto label_28ac70;
        case 0x28ac74u: goto label_28ac74;
        case 0x28ac78u: goto label_28ac78;
        case 0x28ac7cu: goto label_28ac7c;
        case 0x28ac80u: goto label_28ac80;
        case 0x28ac84u: goto label_28ac84;
        case 0x28ac88u: goto label_28ac88;
        case 0x28ac8cu: goto label_28ac8c;
        case 0x28ac90u: goto label_28ac90;
        case 0x28ac94u: goto label_28ac94;
        case 0x28ac98u: goto label_28ac98;
        case 0x28ac9cu: goto label_28ac9c;
        case 0x28aca0u: goto label_28aca0;
        case 0x28aca4u: goto label_28aca4;
        case 0x28aca8u: goto label_28aca8;
        case 0x28acacu: goto label_28acac;
        case 0x28acb0u: goto label_28acb0;
        case 0x28acb4u: goto label_28acb4;
        case 0x28acb8u: goto label_28acb8;
        case 0x28acbcu: goto label_28acbc;
        case 0x28acc0u: goto label_28acc0;
        case 0x28acc4u: goto label_28acc4;
        case 0x28acc8u: goto label_28acc8;
        case 0x28acccu: goto label_28accc;
        case 0x28acd0u: goto label_28acd0;
        case 0x28acd4u: goto label_28acd4;
        case 0x28acd8u: goto label_28acd8;
        case 0x28acdcu: goto label_28acdc;
        case 0x28ace0u: goto label_28ace0;
        case 0x28ace4u: goto label_28ace4;
        case 0x28ace8u: goto label_28ace8;
        case 0x28acecu: goto label_28acec;
        case 0x28acf0u: goto label_28acf0;
        case 0x28acf4u: goto label_28acf4;
        case 0x28acf8u: goto label_28acf8;
        case 0x28acfcu: goto label_28acfc;
        case 0x28ad00u: goto label_28ad00;
        case 0x28ad04u: goto label_28ad04;
        case 0x28ad08u: goto label_28ad08;
        case 0x28ad0cu: goto label_28ad0c;
        case 0x28ad10u: goto label_28ad10;
        case 0x28ad14u: goto label_28ad14;
        case 0x28ad18u: goto label_28ad18;
        case 0x28ad1cu: goto label_28ad1c;
        case 0x28ad20u: goto label_28ad20;
        case 0x28ad24u: goto label_28ad24;
        case 0x28ad28u: goto label_28ad28;
        case 0x28ad2cu: goto label_28ad2c;
        case 0x28ad30u: goto label_28ad30;
        case 0x28ad34u: goto label_28ad34;
        case 0x28ad38u: goto label_28ad38;
        case 0x28ad3cu: goto label_28ad3c;
        case 0x28ad40u: goto label_28ad40;
        case 0x28ad44u: goto label_28ad44;
        case 0x28ad48u: goto label_28ad48;
        case 0x28ad4cu: goto label_28ad4c;
        case 0x28ad50u: goto label_28ad50;
        case 0x28ad54u: goto label_28ad54;
        case 0x28ad58u: goto label_28ad58;
        case 0x28ad5cu: goto label_28ad5c;
        case 0x28ad60u: goto label_28ad60;
        case 0x28ad64u: goto label_28ad64;
        case 0x28ad68u: goto label_28ad68;
        case 0x28ad6cu: goto label_28ad6c;
        case 0x28ad70u: goto label_28ad70;
        case 0x28ad74u: goto label_28ad74;
        case 0x28ad78u: goto label_28ad78;
        case 0x28ad7cu: goto label_28ad7c;
        case 0x28ad80u: goto label_28ad80;
        case 0x28ad84u: goto label_28ad84;
        case 0x28ad88u: goto label_28ad88;
        case 0x28ad8cu: goto label_28ad8c;
        case 0x28ad90u: goto label_28ad90;
        case 0x28ad94u: goto label_28ad94;
        case 0x28ad98u: goto label_28ad98;
        case 0x28ad9cu: goto label_28ad9c;
        case 0x28ada0u: goto label_28ada0;
        case 0x28ada4u: goto label_28ada4;
        case 0x28ada8u: goto label_28ada8;
        case 0x28adacu: goto label_28adac;
        case 0x28adb0u: goto label_28adb0;
        case 0x28adb4u: goto label_28adb4;
        case 0x28adb8u: goto label_28adb8;
        case 0x28adbcu: goto label_28adbc;
        case 0x28adc0u: goto label_28adc0;
        case 0x28adc4u: goto label_28adc4;
        case 0x28adc8u: goto label_28adc8;
        case 0x28adccu: goto label_28adcc;
        case 0x28add0u: goto label_28add0;
        case 0x28add4u: goto label_28add4;
        case 0x28add8u: goto label_28add8;
        case 0x28addcu: goto label_28addc;
        case 0x28ade0u: goto label_28ade0;
        case 0x28ade4u: goto label_28ade4;
        case 0x28ade8u: goto label_28ade8;
        case 0x28adecu: goto label_28adec;
        case 0x28adf0u: goto label_28adf0;
        case 0x28adf4u: goto label_28adf4;
        case 0x28adf8u: goto label_28adf8;
        case 0x28adfcu: goto label_28adfc;
        case 0x28ae00u: goto label_28ae00;
        case 0x28ae04u: goto label_28ae04;
        case 0x28ae08u: goto label_28ae08;
        case 0x28ae0cu: goto label_28ae0c;
        case 0x28ae10u: goto label_28ae10;
        case 0x28ae14u: goto label_28ae14;
        case 0x28ae18u: goto label_28ae18;
        case 0x28ae1cu: goto label_28ae1c;
        case 0x28ae20u: goto label_28ae20;
        case 0x28ae24u: goto label_28ae24;
        case 0x28ae28u: goto label_28ae28;
        case 0x28ae2cu: goto label_28ae2c;
        case 0x28ae30u: goto label_28ae30;
        case 0x28ae34u: goto label_28ae34;
        case 0x28ae38u: goto label_28ae38;
        case 0x28ae3cu: goto label_28ae3c;
        case 0x28ae40u: goto label_28ae40;
        case 0x28ae44u: goto label_28ae44;
        case 0x28ae48u: goto label_28ae48;
        case 0x28ae4cu: goto label_28ae4c;
        case 0x28ae50u: goto label_28ae50;
        case 0x28ae54u: goto label_28ae54;
        case 0x28ae58u: goto label_28ae58;
        case 0x28ae5cu: goto label_28ae5c;
        case 0x28ae60u: goto label_28ae60;
        case 0x28ae64u: goto label_28ae64;
        case 0x28ae68u: goto label_28ae68;
        case 0x28ae6cu: goto label_28ae6c;
        case 0x28ae70u: goto label_28ae70;
        case 0x28ae74u: goto label_28ae74;
        case 0x28ae78u: goto label_28ae78;
        case 0x28ae7cu: goto label_28ae7c;
        case 0x28ae80u: goto label_28ae80;
        case 0x28ae84u: goto label_28ae84;
        case 0x28ae88u: goto label_28ae88;
        case 0x28ae8cu: goto label_28ae8c;
        case 0x28ae90u: goto label_28ae90;
        case 0x28ae94u: goto label_28ae94;
        case 0x28ae98u: goto label_28ae98;
        case 0x28ae9cu: goto label_28ae9c;
        case 0x28aea0u: goto label_28aea0;
        case 0x28aea4u: goto label_28aea4;
        case 0x28aea8u: goto label_28aea8;
        case 0x28aeacu: goto label_28aeac;
        case 0x28aeb0u: goto label_28aeb0;
        case 0x28aeb4u: goto label_28aeb4;
        case 0x28aeb8u: goto label_28aeb8;
        case 0x28aebcu: goto label_28aebc;
        case 0x28aec0u: goto label_28aec0;
        case 0x28aec4u: goto label_28aec4;
        case 0x28aec8u: goto label_28aec8;
        case 0x28aeccu: goto label_28aecc;
        case 0x28aed0u: goto label_28aed0;
        case 0x28aed4u: goto label_28aed4;
        case 0x28aed8u: goto label_28aed8;
        case 0x28aedcu: goto label_28aedc;
        case 0x28aee0u: goto label_28aee0;
        case 0x28aee4u: goto label_28aee4;
        case 0x28aee8u: goto label_28aee8;
        case 0x28aeecu: goto label_28aeec;
        case 0x28aef0u: goto label_28aef0;
        case 0x28aef4u: goto label_28aef4;
        case 0x28aef8u: goto label_28aef8;
        case 0x28aefcu: goto label_28aefc;
        case 0x28af00u: goto label_28af00;
        case 0x28af04u: goto label_28af04;
        case 0x28af08u: goto label_28af08;
        case 0x28af0cu: goto label_28af0c;
        case 0x28af10u: goto label_28af10;
        case 0x28af14u: goto label_28af14;
        case 0x28af18u: goto label_28af18;
        case 0x28af1cu: goto label_28af1c;
        case 0x28af20u: goto label_28af20;
        case 0x28af24u: goto label_28af24;
        case 0x28af28u: goto label_28af28;
        case 0x28af2cu: goto label_28af2c;
        case 0x28af30u: goto label_28af30;
        case 0x28af34u: goto label_28af34;
        case 0x28af38u: goto label_28af38;
        case 0x28af3cu: goto label_28af3c;
        case 0x28af40u: goto label_28af40;
        case 0x28af44u: goto label_28af44;
        case 0x28af48u: goto label_28af48;
        case 0x28af4cu: goto label_28af4c;
        case 0x28af50u: goto label_28af50;
        case 0x28af54u: goto label_28af54;
        case 0x28af58u: goto label_28af58;
        case 0x28af5cu: goto label_28af5c;
        case 0x28af60u: goto label_28af60;
        case 0x28af64u: goto label_28af64;
        case 0x28af68u: goto label_28af68;
        case 0x28af6cu: goto label_28af6c;
        case 0x28af70u: goto label_28af70;
        case 0x28af74u: goto label_28af74;
        case 0x28af78u: goto label_28af78;
        case 0x28af7cu: goto label_28af7c;
        case 0x28af80u: goto label_28af80;
        case 0x28af84u: goto label_28af84;
        case 0x28af88u: goto label_28af88;
        case 0x28af8cu: goto label_28af8c;
        case 0x28af90u: goto label_28af90;
        case 0x28af94u: goto label_28af94;
        case 0x28af98u: goto label_28af98;
        case 0x28af9cu: goto label_28af9c;
        case 0x28afa0u: goto label_28afa0;
        case 0x28afa4u: goto label_28afa4;
        case 0x28afa8u: goto label_28afa8;
        case 0x28afacu: goto label_28afac;
        case 0x28afb0u: goto label_28afb0;
        case 0x28afb4u: goto label_28afb4;
        case 0x28afb8u: goto label_28afb8;
        case 0x28afbcu: goto label_28afbc;
        case 0x28afc0u: goto label_28afc0;
        case 0x28afc4u: goto label_28afc4;
        case 0x28afc8u: goto label_28afc8;
        case 0x28afccu: goto label_28afcc;
        case 0x28afd0u: goto label_28afd0;
        case 0x28afd4u: goto label_28afd4;
        case 0x28afd8u: goto label_28afd8;
        case 0x28afdcu: goto label_28afdc;
        case 0x28afe0u: goto label_28afe0;
        case 0x28afe4u: goto label_28afe4;
        case 0x28afe8u: goto label_28afe8;
        case 0x28afecu: goto label_28afec;
        case 0x28aff0u: goto label_28aff0;
        case 0x28aff4u: goto label_28aff4;
        case 0x28aff8u: goto label_28aff8;
        case 0x28affcu: goto label_28affc;
        case 0x28b000u: goto label_28b000;
        case 0x28b004u: goto label_28b004;
        case 0x28b008u: goto label_28b008;
        case 0x28b00cu: goto label_28b00c;
        case 0x28b010u: goto label_28b010;
        case 0x28b014u: goto label_28b014;
        case 0x28b018u: goto label_28b018;
        case 0x28b01cu: goto label_28b01c;
        case 0x28b020u: goto label_28b020;
        case 0x28b024u: goto label_28b024;
        case 0x28b028u: goto label_28b028;
        case 0x28b02cu: goto label_28b02c;
        case 0x28b030u: goto label_28b030;
        case 0x28b034u: goto label_28b034;
        case 0x28b038u: goto label_28b038;
        case 0x28b03cu: goto label_28b03c;
        case 0x28b040u: goto label_28b040;
        case 0x28b044u: goto label_28b044;
        case 0x28b048u: goto label_28b048;
        case 0x28b04cu: goto label_28b04c;
        case 0x28b050u: goto label_28b050;
        case 0x28b054u: goto label_28b054;
        case 0x28b058u: goto label_28b058;
        case 0x28b05cu: goto label_28b05c;
        case 0x28b060u: goto label_28b060;
        case 0x28b064u: goto label_28b064;
        case 0x28b068u: goto label_28b068;
        case 0x28b06cu: goto label_28b06c;
        case 0x28b070u: goto label_28b070;
        case 0x28b074u: goto label_28b074;
        case 0x28b078u: goto label_28b078;
        case 0x28b07cu: goto label_28b07c;
        case 0x28b080u: goto label_28b080;
        case 0x28b084u: goto label_28b084;
        case 0x28b088u: goto label_28b088;
        case 0x28b08cu: goto label_28b08c;
        case 0x28b090u: goto label_28b090;
        case 0x28b094u: goto label_28b094;
        case 0x28b098u: goto label_28b098;
        case 0x28b09cu: goto label_28b09c;
        case 0x28b0a0u: goto label_28b0a0;
        case 0x28b0a4u: goto label_28b0a4;
        case 0x28b0a8u: goto label_28b0a8;
        case 0x28b0acu: goto label_28b0ac;
        case 0x28b0b0u: goto label_28b0b0;
        case 0x28b0b4u: goto label_28b0b4;
        case 0x28b0b8u: goto label_28b0b8;
        case 0x28b0bcu: goto label_28b0bc;
        case 0x28b0c0u: goto label_28b0c0;
        case 0x28b0c4u: goto label_28b0c4;
        case 0x28b0c8u: goto label_28b0c8;
        case 0x28b0ccu: goto label_28b0cc;
        case 0x28b0d0u: goto label_28b0d0;
        case 0x28b0d4u: goto label_28b0d4;
        case 0x28b0d8u: goto label_28b0d8;
        case 0x28b0dcu: goto label_28b0dc;
        case 0x28b0e0u: goto label_28b0e0;
        case 0x28b0e4u: goto label_28b0e4;
        case 0x28b0e8u: goto label_28b0e8;
        case 0x28b0ecu: goto label_28b0ec;
        case 0x28b0f0u: goto label_28b0f0;
        case 0x28b0f4u: goto label_28b0f4;
        case 0x28b0f8u: goto label_28b0f8;
        case 0x28b0fcu: goto label_28b0fc;
        case 0x28b100u: goto label_28b100;
        case 0x28b104u: goto label_28b104;
        case 0x28b108u: goto label_28b108;
        case 0x28b10cu: goto label_28b10c;
        case 0x28b110u: goto label_28b110;
        case 0x28b114u: goto label_28b114;
        case 0x28b118u: goto label_28b118;
        case 0x28b11cu: goto label_28b11c;
        case 0x28b120u: goto label_28b120;
        case 0x28b124u: goto label_28b124;
        case 0x28b128u: goto label_28b128;
        case 0x28b12cu: goto label_28b12c;
        case 0x28b130u: goto label_28b130;
        case 0x28b134u: goto label_28b134;
        case 0x28b138u: goto label_28b138;
        case 0x28b13cu: goto label_28b13c;
        case 0x28b140u: goto label_28b140;
        case 0x28b144u: goto label_28b144;
        default: break;
    }

    ctx->pc = 0x28a2f8u;

label_28a2f8:
    // 0x28a2f8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x28a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_28a2fc:
    // 0x28a2fc: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x28a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
label_28a300:
    // 0x28a300: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x28a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
label_28a304:
    // 0x28a304: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x28a304u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28a308:
    // 0x28a308: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x28a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
label_28a30c:
    // 0x28a30c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x28a30cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28a310:
    // 0x28a310: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x28a310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_28a314:
    // 0x28a314: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28a314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28a318:
    // 0x28a318: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x28a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_28a31c:
    // 0x28a31c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x28a31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28a320:
    // 0x28a320: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x28a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
label_28a324:
    // 0x28a324: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x28a324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
label_28a328:
    // 0x28a328: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x28a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_28a32c:
    // 0x28a32c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x28a32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_28a330:
    // 0x28a330: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x28a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_28a334:
    // 0x28a334: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x28a334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_28a338:
    // 0x28a338: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28a338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28a33c:
    // 0x28a33c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x28a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_28a340:
    // 0x28a340: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x28a340u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_28a344:
    // 0x28a344: 0xafa90048  sw          $t1, 0x48($sp)
    ctx->pc = 0x28a344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 9));
label_28a348:
    // 0x28a348: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28a348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28a34c:
    // 0x28a34c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28a350:
    if (ctx->pc == 0x28A350u) {
        ctx->pc = 0x28A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A34Cu;
        // 0x28a350: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A354u;
        goto label_28a354;
    }
    ctx->pc = 0x28A34Cu;
    {
        const bool branch_taken_0x28a34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A34Cu;
        // 0x28a350: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a34c) {
            ctx->pc = 0x28A35Cu;
            goto label_28a35c;
        }
    }
    ctx->pc = 0x28A354u;
label_28a354:
    // 0x28a354: 0x1000019f  b           . + 4 + (0x19F << 2)
label_28a358:
    if (ctx->pc == 0x28A358u) {
        ctx->pc = 0x28A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A354u;
        // 0x28a358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A35Cu;
        goto label_28a35c;
    }
    ctx->pc = 0x28A354u;
    {
        const bool branch_taken_0x28a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A354u;
        // 0x28a358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a354) {
            ctx->pc = 0x28A9D4u;
            goto label_28a9d4;
        }
    }
    ctx->pc = 0x28A35Cu;
label_28a35c:
    // 0x28a35c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x28a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_28a360:
    // 0x28a360: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x28a360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28a364:
    // 0x28a364: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_28a368:
    if (ctx->pc == 0x28A368u) {
        ctx->pc = 0x28A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A364u;
        // 0x28a368: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A36Cu;
        goto label_28a36c;
    }
    ctx->pc = 0x28A364u;
    {
        const bool branch_taken_0x28a364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A364u;
        // 0x28a368: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a364) {
            ctx->pc = 0x28A388u;
            goto label_28a388;
        }
    }
    ctx->pc = 0x28A36Cu;
label_28a36c:
    // 0x28a36c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a370:
    // 0x28a370: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_28a374:
    if (ctx->pc == 0x28A374u) {
        ctx->pc = 0x28A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A370u;
        // 0x28a374: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A378u;
        goto label_28a378;
    }
    ctx->pc = 0x28A370u;
    {
        const bool branch_taken_0x28a370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a370) {
            ctx->pc = 0x28A374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A370u;
            // 0x28a374: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A394u;
            goto label_28a394;
        }
    }
    ctx->pc = 0x28A378u;
label_28a378:
    // 0x28a378: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x28a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28a37c:
    // 0x28a37c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x28a37cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_28a380:
    // 0x28a380: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_28a384:
    if (ctx->pc == 0x28A384u) {
        ctx->pc = 0x28A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A380u;
        // 0x28a384: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A388u;
        goto label_28a388;
    }
    ctx->pc = 0x28A380u;
    {
        const bool branch_taken_0x28a380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a380) {
            ctx->pc = 0x28A384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A380u;
            // 0x28a384: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A394u;
            goto label_28a394;
        }
    }
    ctx->pc = 0x28A388u;
label_28a388:
    // 0x28a388: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x28a388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28a38c:
    // 0x28a38c: 0x1000000b  b           . + 4 + (0xB << 2)
label_28a390:
    if (ctx->pc == 0x28A390u) {
        ctx->pc = 0x28A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A38Cu;
        // 0x28a390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A394u;
        goto label_28a394;
    }
    ctx->pc = 0x28A38Cu;
    {
        const bool branch_taken_0x28a38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A38Cu;
        // 0x28a390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a38c) {
            ctx->pc = 0x28A3BCu;
            goto label_28a3bc;
        }
    }
    ctx->pc = 0x28A394u;
label_28a394:
    // 0x28a394: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_28a398:
    if (ctx->pc == 0x28A398u) {
        ctx->pc = 0x28A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A394u;
        // 0x28a398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A39Cu;
        goto label_28a39c;
    }
    ctx->pc = 0x28A394u;
    {
        const bool branch_taken_0x28a394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A394u;
        // 0x28a398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a394) {
            ctx->pc = 0x28A3B4u;
            goto label_28a3b4;
        }
    }
    ctx->pc = 0x28A39Cu;
label_28a39c:
    // 0x28a39c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_28a3a0:
    if (ctx->pc == 0x28A3A0u) {
        ctx->pc = 0x28A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A39Cu;
        // 0x28a3a0: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A3A4u;
        goto label_28a3a4;
    }
    ctx->pc = 0x28A39Cu;
    {
        const bool branch_taken_0x28a39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A39Cu;
        // 0x28a3a0: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a39c) {
            ctx->pc = 0x28A3E8u;
            goto label_28a3e8;
        }
    }
    ctx->pc = 0x28A3A4u;
label_28a3a4:
    // 0x28a3a4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x28a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_28a3a8:
    // 0x28a3a8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x28a3a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_28a3ac:
    // 0x28a3ac: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_28a3b0:
    if (ctx->pc == 0x28A3B0u) {
        ctx->pc = 0x28A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3ACu;
        // 0x28a3b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A3B4u;
        goto label_28a3b4;
    }
    ctx->pc = 0x28A3ACu;
    {
        const bool branch_taken_0x28a3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3ACu;
        // 0x28a3b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3ac) {
            ctx->pc = 0x28A3CCu;
            goto label_28a3cc;
        }
    }
    ctx->pc = 0x28A3B4u;
label_28a3b4:
    // 0x28a3b4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x28a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28a3b8:
    // 0x28a3b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28a3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a3bc:
    // 0x28a3bc: 0xc0a1b6a  jal         func_286DA8
label_28a3c0:
    if (ctx->pc == 0x28A3C0u) {
        ctx->pc = 0x28A3C4u;
        goto label_28a3c4;
    }
    ctx->pc = 0x28A3BCu;
    SET_GPR_U32(ctx, 31, 0x28A3C4u);
    ctx->pc = 0x286DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286DA8u, 0x28A3BCu, 0x28A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3C4u;
label_28a3c4:
    // 0x28a3c4: 0x10000183  b           . + 4 + (0x183 << 2)
label_28a3c8:
    if (ctx->pc == 0x28A3C8u) {
        ctx->pc = 0x28A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3C4u;
        // 0x28a3c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A3CCu;
        goto label_28a3cc;
    }
    ctx->pc = 0x28A3C4u;
    {
        const bool branch_taken_0x28a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3C4u;
        // 0x28a3c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3c4) {
            ctx->pc = 0x28A9D4u;
            goto label_28a9d4;
        }
    }
    ctx->pc = 0x28A3CCu;
label_28a3cc:
    // 0x28a3cc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_28a3d0:
    if (ctx->pc == 0x28A3D0u) {
        ctx->pc = 0x28A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3CCu;
        // 0x28a3d0: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A3D4u;
        goto label_28a3d4;
    }
    ctx->pc = 0x28A3CCu;
    {
        const bool branch_taken_0x28a3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3CCu;
        // 0x28a3d0: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3cc) {
            ctx->pc = 0x28A3E8u;
            goto label_28a3e8;
        }
    }
    ctx->pc = 0x28A3D4u;
label_28a3d4:
    // 0x28a3d4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x28a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28a3d8:
    // 0x28a3d8: 0xc0a1b1c  jal         func_286C70
label_28a3dc:
    if (ctx->pc == 0x28A3DCu) {
        ctx->pc = 0x28A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3D8u;
        // 0x28a3dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A3E0u;
        goto label_28a3e0;
    }
    ctx->pc = 0x28A3D8u;
    SET_GPR_U32(ctx, 31, 0x28A3E0u);
    ctx->pc = 0x28A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3D8u;
    // 0x28a3dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C70u, 0x28A3D8u, 0x28A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3E0u;
label_28a3e0:
    // 0x28a3e0: 0x1000017c  b           . + 4 + (0x17C << 2)
label_28a3e4:
    if (ctx->pc == 0x28A3E4u) {
        ctx->pc = 0x28A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3E0u;
        // 0x28a3e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A3E8u;
        goto label_28a3e8;
    }
    ctx->pc = 0x28A3E0u;
    {
        const bool branch_taken_0x28a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3E0u;
        // 0x28a3e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3e0) {
            ctx->pc = 0x28A9D4u;
            goto label_28a9d4;
        }
    }
    ctx->pc = 0x28A3E8u;
label_28a3e8:
    // 0x28a3e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_28a3ec:
    if (ctx->pc == 0x28A3ECu) {
        ctx->pc = 0x28A3F0u;
        goto label_28a3f0;
    }
    ctx->pc = 0x28A3E8u;
    {
        const bool branch_taken_0x28a3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a3e8) {
            ctx->pc = 0x28A3F8u;
            goto label_28a3f8;
        }
    }
    ctx->pc = 0x28A3F0u;
label_28a3f0:
    // 0x28a3f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_28a3f4:
    if (ctx->pc == 0x28A3F4u) {
        ctx->pc = 0x28A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3F0u;
        // 0x28a3f4: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A3F8u;
        goto label_28a3f8;
    }
    ctx->pc = 0x28A3F0u;
    {
        const bool branch_taken_0x28a3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A3F0u;
        // 0x28a3f4: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3f0) {
            ctx->pc = 0x28A420u;
            goto label_28a420;
        }
    }
    ctx->pc = 0x28A3F8u;
label_28a3f8:
    // 0x28a3f8: 0xc0a1ee8  jal         func_287BA0
label_28a3fc:
    if (ctx->pc == 0x28A3FCu) {
        ctx->pc = 0x28A400u;
        goto label_28a400;
    }
    ctx->pc = 0x28A3F8u;
    SET_GPR_U32(ctx, 31, 0x28A400u);
    ctx->pc = 0x287BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287BA0u, 0x28A3F8u, 0x28A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A400u;
label_28a400:
    // 0x28a400: 0x10400169  beqz        $v0, . + 4 + (0x169 << 2)
label_28a404:
    if (ctx->pc == 0x28A404u) {
        ctx->pc = 0x28A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A400u;
        // 0x28a404: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A408u;
        goto label_28a408;
    }
    ctx->pc = 0x28A400u;
    {
        const bool branch_taken_0x28a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A400u;
        // 0x28a404: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a400) {
            ctx->pc = 0x28A9A8u;
            goto label_28a9a8;
        }
    }
    ctx->pc = 0x28A408u;
label_28a408:
    // 0x28a408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28a408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a40c:
    // 0x28a40c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28a410:
    // 0x28a410: 0xc0a2c82  jal         func_28B208
label_28a414:
    if (ctx->pc == 0x28A414u) {
        ctx->pc = 0x28A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A410u;
        // 0x28a414: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A418u;
        goto label_28a418;
    }
    ctx->pc = 0x28A410u;
    SET_GPR_U32(ctx, 31, 0x28A418u);
    ctx->pc = 0x28A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A410u;
    // 0x28a414: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B208u, 0x28A410u, 0x28A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A418u;
label_28a418:
    // 0x28a418: 0x10400164  beqz        $v0, . + 4 + (0x164 << 2)
label_28a41c:
    if (ctx->pc == 0x28A41Cu) {
        ctx->pc = 0x28A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A418u;
        // 0x28a41c: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A420u;
        goto label_28a420;
    }
    ctx->pc = 0x28A418u;
    {
        const bool branch_taken_0x28a418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A418u;
        // 0x28a41c: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a418) {
            ctx->pc = 0x28A9ACu;
            goto label_28a9ac;
        }
    }
    ctx->pc = 0x28A420u;
label_28a420:
    // 0x28a420: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28a420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28a424:
    // 0x28a424: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x28a424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_28a428:
    // 0x28a428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a42c:
    // 0x28a42c: 0xc0a2614  jal         func_289850
label_28a430:
    if (ctx->pc == 0x28A430u) {
        ctx->pc = 0x28A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A42Cu;
        // 0x28a430: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A434u;
        goto label_28a434;
    }
    ctx->pc = 0x28A42Cu;
    SET_GPR_U32(ctx, 31, 0x28A434u);
    ctx->pc = 0x28A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A42Cu;
    // 0x28a430: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289850u, 0x28A42Cu, 0x28A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A434u;
label_28a434:
    // 0x28a434: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x28a434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_28a438:
    // 0x28a438: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x28a438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28a43c:
    // 0x28a43c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28a440:
    // 0x28a440: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x28a440u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_28a444:
    // 0x28a444: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x28a444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_28a448:
    // 0x28a448: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x28a448u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_28a44c:
    // 0x28a44c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x28a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_28a450:
    // 0x28a450: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x28a450u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_28a454:
    // 0x28a454: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x28a454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_28a458:
    // 0x28a458: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_28a45c:
    if (ctx->pc == 0x28A45Cu) {
        ctx->pc = 0x28A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A458u;
        // 0x28a45c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A460u;
        goto label_28a460;
    }
    ctx->pc = 0x28A458u;
    {
        const bool branch_taken_0x28a458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a458) {
            ctx->pc = 0x28A45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A458u;
            // 0x28a45c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A460u;
            goto label_28a460;
        }
    }
    ctx->pc = 0x28A460u;
label_28a460:
    // 0x28a460: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x28a460u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28a464:
    // 0x28a464: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x28a464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28a468:
    // 0x28a468: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x28a468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_28a46c:
    // 0x28a46c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28a470:
    // 0x28a470: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x28a470u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_28a474:
    // 0x28a474: 0x1812  mflo        $v1
    ctx->pc = 0x28a474u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_28a478:
    // 0x28a478: 0x14d10014  bne         $a2, $s1, . + 4 + (0x14 << 2)
label_28a47c:
    if (ctx->pc == 0x28A47Cu) {
        ctx->pc = 0x28A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A478u;
        // 0x28a47c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A480u;
        goto label_28a480;
    }
    ctx->pc = 0x28A478u;
    {
        const bool branch_taken_0x28a478 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x28A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A478u;
        // 0x28a47c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a478) {
            ctx->pc = 0x28A4CCu;
            goto label_28a4cc;
        }
    }
    ctx->pc = 0x28A480u;
label_28a480:
    // 0x28a480: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x28a480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_28a484:
    // 0x28a484: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x28a484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28a488:
    // 0x28a488: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x28a488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_28a48c:
    // 0x28a48c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28a490:
    // 0x28a490: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x28a490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_28a494:
    // 0x28a494: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x28a494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_28a498:
    // 0x28a498: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28a49c:
    // 0x28a49c: 0xdca2fff8  ld          $v0, -0x8($a1)
    ctx->pc = 0x28a49cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_28a4a0:
    // 0x28a4a0: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x28a4a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_28a4a4:
    // 0x28a4a4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x28a4a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_28a4a8:
    // 0x28a4a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28a4ac:
    if (ctx->pc == 0x28A4ACu) {
        ctx->pc = 0x28A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4A8u;
        // 0x28a4ac: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A4B0u;
        goto label_28a4b0;
    }
    ctx->pc = 0x28A4A8u;
    {
        const bool branch_taken_0x28a4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4A8u;
        // 0x28a4ac: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4a8) {
            ctx->pc = 0x28A4CCu;
            goto label_28a4cc;
        }
    }
    ctx->pc = 0x28A4B0u;
label_28a4b0:
    // 0x28a4b0: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x28a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_28a4b4:
    // 0x28a4b4: 0xafb3005c  sw          $s3, 0x5C($sp)
    ctx->pc = 0x28a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
label_28a4b8:
    // 0x28a4b8: 0x11a080  sll         $s4, $s1, 2
    ctx->pc = 0x28a4b8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28a4bc:
    // 0x28a4bc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x28a4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_28a4c0:
    // 0x28a4c0: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x28a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
label_28a4c4:
    // 0x28a4c4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_28a4c8:
    if (ctx->pc == 0x28A4C8u) {
        ctx->pc = 0x28A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4C4u;
        // 0x28a4c8: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A4CCu;
        goto label_28a4cc;
    }
    ctx->pc = 0x28A4C4u;
    {
        const bool branch_taken_0x28a4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4C4u;
        // 0x28a4c8: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4c4) {
            ctx->pc = 0x28A5F8u;
            goto label_28a5f8;
        }
    }
    ctx->pc = 0x28A4CCu;
label_28a4cc:
    // 0x28a4cc: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x28a4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28a4d0:
    // 0x28a4d0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_28a4d4:
    if (ctx->pc == 0x28A4D4u) {
        ctx->pc = 0x28A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4D0u;
        // 0x28a4d4: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A4D8u;
        goto label_28a4d8;
    }
    ctx->pc = 0x28A4D0u;
    {
        const bool branch_taken_0x28a4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4D0u;
        // 0x28a4d4: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4d0) {
            ctx->pc = 0x28A570u;
            goto label_28a570;
        }
    }
    ctx->pc = 0x28A4D8u;
label_28a4d8:
    // 0x28a4d8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x28a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_28a4dc:
    // 0x28a4dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28a4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a4e0:
    // 0x28a4e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28a4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a4e4:
    // 0x28a4e4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x28a4e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28a4e8:
    // 0x28a4e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28a4ec:
    // 0x28a4ec: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x28a4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_28a4f0:
    // 0x28a4f0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x28a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_28a4f4:
    // 0x28a4f4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28a4f8:
    // 0x28a4f8: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x28a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_28a4fc:
    // 0x28a4fc: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x28a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_28a500:
    // 0x28a500: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x28a500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_28a504:
    // 0x28a504: 0xc0a1a4e  jal         func_286938
label_28a508:
    if (ctx->pc == 0x28A508u) {
        ctx->pc = 0x28A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A504u;
        // 0x28a508: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A50Cu;
        goto label_28a50c;
    }
    ctx->pc = 0x28A504u;
    SET_GPR_U32(ctx, 31, 0x28A50Cu);
    ctx->pc = 0x28A508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A504u;
    // 0x28a508: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286938u, 0x28A504u, 0x28A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A50Cu;
label_28a50c:
    // 0x28a50c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28a510:
    // 0x28a510: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
label_28a514:
    if (ctx->pc == 0x28A514u) {
        ctx->pc = 0x28A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A510u;
        // 0x28a514: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A518u;
        goto label_28a518;
    }
    ctx->pc = 0x28A510u;
    {
        const bool branch_taken_0x28a510 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A510u;
        // 0x28a514: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a510) {
            ctx->pc = 0x28A5D8u;
            goto label_28a5d8;
        }
    }
    ctx->pc = 0x28A518u;
label_28a518:
    // 0x28a518: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x28a518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_28a51c:
    // 0x28a51c: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x28a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_28a520:
    // 0x28a520: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x28a520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_28a524:
    // 0x28a524: 0x28a50002  slti        $a1, $a1, 0x2
    ctx->pc = 0x28a524u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_28a528:
    // 0x28a528: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x28a528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_28a52c:
    // 0x28a52c: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x28a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
label_28a530:
    // 0x28a530: 0x11a080  sll         $s4, $s1, 2
    ctx->pc = 0x28a530u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28a534:
    // 0x28a534: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x28a534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_28a538:
    // 0x28a538: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x28a538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28a53c:
    // 0x28a53c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x28a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28a540:
    // 0x28a540: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28a540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28a544:
    // 0x28a544: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x28a544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28a548:
    // 0x28a548: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28a548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28a54c:
    // 0x28a54c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x28a54cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_28a550:
    // 0x28a550: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28a550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_28a554:
    // 0x28a554: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x28a554u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_28a558:
    // 0x28a558: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28a55c:
    // 0x28a55c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x28a55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28a560:
    // 0x28a560: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_28a564:
    if (ctx->pc == 0x28A564u) {
        ctx->pc = 0x28A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A560u;
        // 0x28a564: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A568u;
        goto label_28a568;
    }
    ctx->pc = 0x28A560u;
    {
        const bool branch_taken_0x28a560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A560u;
        // 0x28a564: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a560) {
            ctx->pc = 0x28A538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a538;
        }
    }
    ctx->pc = 0x28A568u;
label_28a568:
    // 0x28a568: 0x10000024  b           . + 4 + (0x24 << 2)
label_28a56c:
    if (ctx->pc == 0x28A56Cu) {
        ctx->pc = 0x28A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A568u;
        // 0x28a56c: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A570u;
        goto label_28a570;
    }
    ctx->pc = 0x28A568u;
    {
        const bool branch_taken_0x28a568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A568u;
        // 0x28a56c: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a568) {
            ctx->pc = 0x28A5FCu;
            goto label_28a5fc;
        }
    }
    ctx->pc = 0x28A570u;
label_28a570:
    // 0x28a570: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x28a570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_28a574:
    // 0x28a574: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x28a574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_28a578:
    // 0x28a578: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a57c:
    // 0x28a57c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28a57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28a580:
    // 0x28a580: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28a580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28a584:
    // 0x28a584: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x28a584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28a588:
    // 0x28a588: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28a58c:
    // 0x28a58c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x28a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_28a590:
    // 0x28a590: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_28a594:
    // 0x28a594: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x28a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_28a598:
    // 0x28a598: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x28a598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_28a59c:
    // 0x28a59c: 0xc0a18ea  jal         func_2863A8
label_28a5a0:
    if (ctx->pc == 0x28A5A0u) {
        ctx->pc = 0x28A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A59Cu;
        // 0x28a5a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A5A4u;
        goto label_28a5a4;
    }
    ctx->pc = 0x28A59Cu;
    SET_GPR_U32(ctx, 31, 0x28A5A4u);
    ctx->pc = 0x28A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A59Cu;
    // 0x28a5a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2863A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2863A8u, 0x28A59Cu, 0x28A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5A4u;
label_28a5a4:
    // 0x28a5a4: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
label_28a5a8:
    if (ctx->pc == 0x28A5A8u) {
        ctx->pc = 0x28A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5A4u;
        // 0x28a5a8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A5ACu;
        goto label_28a5ac;
    }
    ctx->pc = 0x28A5A4u;
    {
        const bool branch_taken_0x28a5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5A4u;
        // 0x28a5a8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5a4) {
            ctx->pc = 0x28A9A8u;
            goto label_28a9a8;
        }
    }
    ctx->pc = 0x28A5ACu;
label_28a5ac:
    // 0x28a5ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28a5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a5b0:
    // 0x28a5b0: 0xc0a1a4e  jal         func_286938
label_28a5b4:
    if (ctx->pc == 0x28A5B4u) {
        ctx->pc = 0x28A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5B0u;
        // 0x28a5b4: 0x11a080  sll         $s4, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A5B8u;
        goto label_28a5b8;
    }
    ctx->pc = 0x28A5B0u;
    SET_GPR_U32(ctx, 31, 0x28A5B8u);
    ctx->pc = 0x28A5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5B0u;
    // 0x28a5b4: 0x11a080  sll         $s4, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286938u, 0x28A5B0u, 0x28A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5B8u;
label_28a5b8:
    // 0x28a5b8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x28a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_28a5bc:
    // 0x28a5bc: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x28a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_28a5c0:
    // 0x28a5c0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x28a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_28a5c4:
    // 0x28a5c4: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x28a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
label_28a5c8:
    // 0x28a5c8: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x28a5c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_28a5cc:
    // 0x28a5cc: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x28a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_28a5d0:
    // 0x28a5d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_28a5d4:
    if (ctx->pc == 0x28A5D4u) {
        ctx->pc = 0x28A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5D0u;
        // 0x28a5d4: 0xafa3006c  sw          $v1, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A5D8u;
        goto label_28a5d8;
    }
    ctx->pc = 0x28A5D0u;
    {
        const bool branch_taken_0x28a5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5D0u;
        // 0x28a5d4: 0xafa3006c  sw          $v1, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5d0) {
            ctx->pc = 0x28A5F8u;
            goto label_28a5f8;
        }
    }
    ctx->pc = 0x28A5D8u;
label_28a5d8:
    // 0x28a5d8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x28a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_28a5dc:
    // 0x28a5dc: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x28a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_28a5e0:
    // 0x28a5e0: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x28a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_28a5e4:
    // 0x28a5e4: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x28a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_28a5e8:
    // 0x28a5e8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x28a5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_28a5ec:
    // 0x28a5ec: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x28a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
label_28a5f0:
    // 0x28a5f0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x28a5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_28a5f4:
    // 0x28a5f4: 0x11a080  sll         $s4, $s1, 2
    ctx->pc = 0x28a5f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28a5f8:
    // 0x28a5f8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x28a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_28a5fc:
    // 0x28a5fc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x28a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_28a600:
    // 0x28a600: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x28a600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_28a604:
    // 0x28a604: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28a608:
    // 0x28a608: 0x445018  mult        $t2, $v0, $a0
    ctx->pc = 0x28a608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_28a60c:
    // 0x28a60c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x28a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_28a610:
    // 0x28a610: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28a614:
    // 0x28a614: 0xb15818  mult        $t3, $a1, $s1
    ctx->pc = 0x28a614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_28a618:
    // 0x28a618: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x28a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_28a61c:
    // 0x28a61c: 0x70721818  mult1       $v1, $v1, $s2
    ctx->pc = 0x28a61cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28a620:
    // 0x28a620: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x28a620u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_28a624:
    // 0x28a624: 0x70444818  mult1       $t1, $v0, $a0
    ctx->pc = 0x28a624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_28a628:
    // 0x28a628: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x28a628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_28a62c:
    // 0x28a62c: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x28a62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_28a630:
    // 0x28a630: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x28a630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_28a634:
    // 0x28a634: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x28a634u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_28a638:
    // 0x28a638: 0x24680005  addiu       $t0, $v1, 0x5
    ctx->pc = 0x28a638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_28a63c:
    // 0x28a63c: 0x2ea9021  addu        $s2, $s7, $t2
    ctx->pc = 0x28a63cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 10)));
label_28a640:
    // 0x28a640: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x28a640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_28a644:
    // 0x28a644: 0xe8382a  slt         $a3, $a3, $t0
    ctx->pc = 0x28a644u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_28a648:
    // 0x28a648: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x28a648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_28a64c:
    // 0x28a64c: 0x107180b  movn        $v1, $t0, $a3
    ctx->pc = 0x28a64cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
label_28a650:
    // 0x28a650: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x28a650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28a654:
    // 0x28a654: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_28a658:
    // 0x28a658: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x28a658u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_28a65c:
    // 0x28a65c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x28a65cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_28a660:
    // 0x28a660: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x28a660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_28a664:
    // 0x28a664: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x28a664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_28a668:
    // 0x28a668: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x28a668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_28a66c:
    // 0x28a66c: 0x2e9f021  addu        $fp, $s7, $t1
    ctx->pc = 0x28a66cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
label_28a670:
    // 0x28a670: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x28a670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_28a674:
    // 0x28a674: 0x2e69821  addu        $s3, $s7, $a2
    ctx->pc = 0x28a674u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
label_28a678:
    // 0x28a678: 0x91202a  slt         $a0, $a0, $s1
    ctx->pc = 0x28a678u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28a67c:
    // 0x28a67c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_28a680:
    if (ctx->pc == 0x28A680u) {
        ctx->pc = 0x28A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A67Cu;
        // 0x28a680: 0x1638021  addu        $s0, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A684u;
        goto label_28a684;
    }
    ctx->pc = 0x28A67Cu;
    {
        const bool branch_taken_0x28a67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A67Cu;
        // 0x28a680: 0x1638021  addu        $s0, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a67c) {
            ctx->pc = 0x28A690u;
            goto label_28a690;
        }
    }
    ctx->pc = 0x28A684u;
label_28a684:
    // 0x28a684: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28a684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28a688:
    // 0x28a688: 0xc0a1ada  jal         func_286B68
label_28a68c:
    if (ctx->pc == 0x28A68Cu) {
        ctx->pc = 0x28A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A688u;
        // 0x28a68c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A690u;
        goto label_28a690;
    }
    ctx->pc = 0x28A688u;
    SET_GPR_U32(ctx, 31, 0x28A690u);
    ctx->pc = 0x28A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A688u;
    // 0x28a68c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x28A688u, 0x28A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A690u;
label_28a690:
    // 0x28a690: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x28a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_28a694:
    // 0x28a694: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x28a694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_28a698:
    // 0x28a698: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28a69c:
    if (ctx->pc == 0x28A69Cu) {
        ctx->pc = 0x28A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A698u;
        // 0x28a69c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6A0u;
        goto label_28a6a0;
    }
    ctx->pc = 0x28A698u;
    {
        const bool branch_taken_0x28a698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A698u;
        // 0x28a69c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a698) {
            ctx->pc = 0x28A6A8u;
            goto label_28a6a8;
        }
    }
    ctx->pc = 0x28A6A0u;
label_28a6a0:
    // 0x28a6a0: 0xc0a1ada  jal         func_286B68
label_28a6a4:
    if (ctx->pc == 0x28A6A4u) {
        ctx->pc = 0x28A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6A0u;
        // 0x28a6a4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6A8u;
        goto label_28a6a8;
    }
    ctx->pc = 0x28A6A0u;
    SET_GPR_U32(ctx, 31, 0x28A6A8u);
    ctx->pc = 0x28A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6A0u;
    // 0x28a6a4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x28A6A0u, 0x28A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6A8u;
label_28a6a8:
    // 0x28a6a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x28a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_28a6ac:
    // 0x28a6ac: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x28a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_28a6b0:
    // 0x28a6b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_28a6b4:
    // 0x28a6b4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x28a6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_28a6b8:
    // 0x28a6b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28a6bc:
    if (ctx->pc == 0x28A6BCu) {
        ctx->pc = 0x28A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6B8u;
        // 0x28a6bc: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6C0u;
        goto label_28a6c0;
    }
    ctx->pc = 0x28A6B8u;
    {
        const bool branch_taken_0x28a6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6B8u;
        // 0x28a6bc: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6b8) {
            ctx->pc = 0x28A6C8u;
            goto label_28a6c8;
        }
    }
    ctx->pc = 0x28A6C0u;
label_28a6c0:
    // 0x28a6c0: 0xc0a1ada  jal         func_286B68
label_28a6c4:
    if (ctx->pc == 0x28A6C4u) {
        ctx->pc = 0x28A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6C0u;
        // 0x28a6c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6C8u;
        goto label_28a6c8;
    }
    ctx->pc = 0x28A6C0u;
    SET_GPR_U32(ctx, 31, 0x28A6C8u);
    ctx->pc = 0x28A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6C0u;
    // 0x28a6c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x28A6C0u, 0x28A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6C8u;
label_28a6c8:
    // 0x28a6c8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28a6cc:
    // 0x28a6cc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x28a6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_28a6d0:
    // 0x28a6d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28a6d4:
    if (ctx->pc == 0x28A6D4u) {
        ctx->pc = 0x28A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6D0u;
        // 0x28a6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6D8u;
        goto label_28a6d8;
    }
    ctx->pc = 0x28A6D0u;
    {
        const bool branch_taken_0x28a6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6D0u;
        // 0x28a6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6d0) {
            ctx->pc = 0x28A6E0u;
            goto label_28a6e0;
        }
    }
    ctx->pc = 0x28A6D8u;
label_28a6d8:
    // 0x28a6d8: 0xc0a1ada  jal         func_286B68
label_28a6dc:
    if (ctx->pc == 0x28A6DCu) {
        ctx->pc = 0x28A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6D8u;
        // 0x28a6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6E0u;
        goto label_28a6e0;
    }
    ctx->pc = 0x28A6D8u;
    SET_GPR_U32(ctx, 31, 0x28A6E0u);
    ctx->pc = 0x28A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6D8u;
    // 0x28a6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x28A6D8u, 0x28A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6E0u;
label_28a6e0:
    // 0x28a6e0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x28a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28a6e4:
    // 0x28a6e4: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x28a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_28a6e8:
    // 0x28a6e8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x28a6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_28a6ec:
    // 0x28a6ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_28a6f0:
    if (ctx->pc == 0x28A6F0u) {
        ctx->pc = 0x28A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6ECu;
        // 0x28a6f0: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6F4u;
        goto label_28a6f4;
    }
    ctx->pc = 0x28A6ECu;
    {
        const bool branch_taken_0x28a6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6ECu;
        // 0x28a6f0: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6ec) {
            ctx->pc = 0x28A700u;
            goto label_28a700;
        }
    }
    ctx->pc = 0x28A6F4u;
label_28a6f4:
    // 0x28a6f4: 0xc0a1ada  jal         func_286B68
label_28a6f8:
    if (ctx->pc == 0x28A6F8u) {
        ctx->pc = 0x28A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6F4u;
        // 0x28a6f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6FCu;
        goto label_28a6fc;
    }
    ctx->pc = 0x28A6F4u;
    SET_GPR_U32(ctx, 31, 0x28A6FCu);
    ctx->pc = 0x28A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6F4u;
    // 0x28a6f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x28A6F4u, 0x28A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6FCu;
label_28a6fc:
    // 0x28a6fc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x28a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28a700:
    // 0x28a700: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28a700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a704:
    // 0x28a704: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28a708:
    // 0x28a708: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x28a708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a70c:
    // 0x28a70c: 0xdc760048  ld          $s6, 0x48($v1)
    ctx->pc = 0x28a70cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 3), 72)));
label_28a710:
    // 0x28a710: 0x8c750020  lw          $s5, 0x20($v1)
    ctx->pc = 0x28a710u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_28a714:
    // 0x28a714: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x28a714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28a718:
    // 0x28a718: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28a718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_28a71c:
    // 0x28a71c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x28a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_28a720:
    // 0x28a720: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x28a720u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28a724:
    // 0x28a724: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x28a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_28a728:
    // 0x28a728: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x28a728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28a72c:
    // 0x28a72c: 0x8fde0000  lw          $fp, 0x0($fp)
    ctx->pc = 0x28a72cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_28a730:
    // 0x28a730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a734:
    // 0x28a734: 0xc0a1f6c  jal         func_287DB0
label_28a738:
    if (ctx->pc == 0x28A738u) {
        ctx->pc = 0x28A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A734u;
        // 0x28a738: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A73Cu;
        goto label_28a73c;
    }
    ctx->pc = 0x28A734u;
    SET_GPR_U32(ctx, 31, 0x28A73Cu);
    ctx->pc = 0x28A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A734u;
    // 0x28a738: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287DB0u, 0x28A734u, 0x28A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A73Cu;
label_28a73c:
    // 0x28a73c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x28a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28a740:
    // 0x28a740: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a744:
    // 0x28a744: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28a744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28a748:
    // 0x28a748: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28a748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a74c:
    // 0x28a74c: 0xc0a2848  jal         func_28A120
label_28a750:
    if (ctx->pc == 0x28A750u) {
        ctx->pc = 0x28A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A74Cu;
        // 0x28a750: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A754u;
        goto label_28a754;
    }
    ctx->pc = 0x28A74Cu;
    SET_GPR_U32(ctx, 31, 0x28A754u);
    ctx->pc = 0x28A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A74Cu;
    // 0x28a750: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28A74Cu, 0x28A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A754u;
label_28a754:
    // 0x28a754: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x28a754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_28a758:
    // 0x28a758: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_28a75c:
    if (ctx->pc == 0x28A75Cu) {
        ctx->pc = 0x28A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A758u;
        // 0x28a75c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A760u;
        goto label_28a760;
    }
    ctx->pc = 0x28A758u;
    {
        const bool branch_taken_0x28a758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A758u;
        // 0x28a75c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a758) {
            ctx->pc = 0x28A7F4u;
            goto label_28a7f4;
        }
    }
    ctx->pc = 0x28A760u;
label_28a760:
    // 0x28a760: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x28a760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28a764:
    // 0x28a764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a768:
    // 0x28a768: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28a768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a76c:
    // 0x28a76c: 0xc0a207c  jal         func_2881F0
label_28a770:
    if (ctx->pc == 0x28A770u) {
        ctx->pc = 0x28A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A76Cu;
        // 0x28a770: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A774u;
        goto label_28a774;
    }
    ctx->pc = 0x28A76Cu;
    SET_GPR_U32(ctx, 31, 0x28A774u);
    ctx->pc = 0x28A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A76Cu;
    // 0x28a770: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2881F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2881F0u, 0x28A76Cu, 0x28A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A774u;
label_28a774:
    // 0x28a774: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x28a774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a778:
    // 0x28a778: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x28a778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28a77c:
    // 0x28a77c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a780:
    // 0x28a780: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28a780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28a784:
    // 0x28a784: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28a784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a788:
    // 0x28a788: 0xc0a2848  jal         func_28A120
label_28a78c:
    if (ctx->pc == 0x28A78Cu) {
        ctx->pc = 0x28A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A788u;
        // 0x28a78c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A790u;
        goto label_28a790;
    }
    ctx->pc = 0x28A788u;
    SET_GPR_U32(ctx, 31, 0x28A790u);
    ctx->pc = 0x28A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A788u;
    // 0x28a78c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28A788u, 0x28A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A790u;
label_28a790:
    // 0x28a790: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x28a790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_28a794:
    // 0x28a794: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x28a794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_28a798:
    // 0x28a798: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_28a79c:
    if (ctx->pc == 0x28A79Cu) {
        ctx->pc = 0x28A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A798u;
        // 0x28a79c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A7A0u;
        goto label_28a7a0;
    }
    ctx->pc = 0x28A798u;
    {
        const bool branch_taken_0x28a798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A798u;
        // 0x28a79c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a798) {
            ctx->pc = 0x28A7F0u;
            goto label_28a7f0;
        }
    }
    ctx->pc = 0x28A7A0u;
label_28a7a0:
    // 0x28a7a0: 0x2492ffff  addiu       $s2, $a0, -0x1
    ctx->pc = 0x28a7a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_28a7a4:
    // 0x28a7a4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x28a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28a7a8:
    // 0x28a7a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a7ac:
    // 0x28a7ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x28a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_28a7b0:
    // 0x28a7b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28a7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a7b4:
    // 0x28a7b4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x28a7b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28a7b8:
    // 0x28a7b8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x28a7b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a7bc:
    // 0x28a7bc: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x28a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_28a7c0:
    // 0x28a7c0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x28a7c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_28a7c4:
    // 0x28a7c4: 0xc0a1f6c  jal         func_287DB0
label_28a7c8:
    if (ctx->pc == 0x28A7C8u) {
        ctx->pc = 0x28A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7C4u;
        // 0x28a7c8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A7CCu;
        goto label_28a7cc;
    }
    ctx->pc = 0x28A7C4u;
    SET_GPR_U32(ctx, 31, 0x28A7CCu);
    ctx->pc = 0x28A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7C4u;
    // 0x28a7c8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287DB0u, 0x28A7C4u, 0x28A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7CCu;
label_28a7cc:
    // 0x28a7cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x28a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28a7d0:
    // 0x28a7d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a7d4:
    // 0x28a7d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28a7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28a7d8:
    // 0x28a7d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28a7d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a7dc:
    // 0x28a7dc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x28a7dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28a7e0:
    // 0x28a7e0: 0xc0a2848  jal         func_28A120
label_28a7e4:
    if (ctx->pc == 0x28A7E4u) {
        ctx->pc = 0x28A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7E0u;
        // 0x28a7e4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A7E8u;
        goto label_28a7e8;
    }
    ctx->pc = 0x28A7E0u;
    SET_GPR_U32(ctx, 31, 0x28A7E8u);
    ctx->pc = 0x28A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7E0u;
    // 0x28a7e4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28A7E0u, 0x28A7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7E8u;
label_28a7e8:
    // 0x28a7e8: 0x5640ffef  bnel        $s2, $zero, . + 4 + (-0x11 << 2)
label_28a7ec:
    if (ctx->pc == 0x28A7ECu) {
        ctx->pc = 0x28A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7E8u;
        // 0x28a7ec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A7F0u;
        goto label_28a7f0;
    }
    ctx->pc = 0x28A7E8u;
    {
        const bool branch_taken_0x28a7e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a7e8) {
            ctx->pc = 0x28A7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A7E8u;
            // 0x28a7ec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A7A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a7a8;
        }
    }
    ctx->pc = 0x28A7F0u;
label_28a7f0:
    // 0x28a7f0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x28a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28a7f4:
    // 0x28a7f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28a7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28a7f8:
    // 0x28a7f8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x28a7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_28a7fc:
    // 0x28a7fc: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x28a7fcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_28a800:
    // 0x28a800: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28a800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28a804:
    // 0x28a804: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x28a804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_28a808:
    // 0x28a808: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x28a808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28a80c:
    // 0x28a80c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x28a80cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_28a810:
    // 0x28a810: 0x90700000  lbu         $s0, 0x0($v1)
    ctx->pc = 0x28a810u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_28a814:
    // 0x28a814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28a814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28a818:
    // 0x28a818: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x28a818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_28a81c:
    // 0x28a81c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x28a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_28a820:
    // 0x28a820: 0xc049c48  jal         func_127120
label_28a824:
    if (ctx->pc == 0x28A824u) {
        ctx->pc = 0x28A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A820u;
        // 0x28a824: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A828u;
        goto label_28a828;
    }
    ctx->pc = 0x28A820u;
    SET_GPR_U32(ctx, 31, 0x28A828u);
    ctx->pc = 0x28A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A820u;
    // 0x28a824: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x28A820u, 0x28A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A828u;
label_28a828:
    // 0x28a828: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
label_28a82c:
    if (ctx->pc == 0x28A82Cu) {
        ctx->pc = 0x28A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A828u;
        // 0x28a82c: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A830u;
        goto label_28a830;
    }
    ctx->pc = 0x28A828u;
    {
        const bool branch_taken_0x28a828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A828u;
        // 0x28a82c: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a828) {
            ctx->pc = 0x28A944u;
            goto label_28a944;
        }
    }
    ctx->pc = 0x28A830u;
label_28a830:
    // 0x28a830: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_28a834:
    if (ctx->pc == 0x28A834u) {
        ctx->pc = 0x28A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A830u;
        // 0x28a834: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A838u;
        goto label_28a838;
    }
    ctx->pc = 0x28A830u;
    {
        const bool branch_taken_0x28a830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A830u;
        // 0x28a834: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a830) {
            ctx->pc = 0x28A878u;
            goto label_28a878;
        }
    }
    ctx->pc = 0x28A838u;
label_28a838:
    // 0x28a838: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x28a838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28a83c:
    // 0x28a83c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a840:
    // 0x28a840: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28a840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28a844:
    // 0x28a844: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28a844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a848:
    // 0x28a848: 0xc0a207c  jal         func_2881F0
label_28a84c:
    if (ctx->pc == 0x28A84Cu) {
        ctx->pc = 0x28A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A848u;
        // 0x28a84c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A850u;
        goto label_28a850;
    }
    ctx->pc = 0x28A848u;
    SET_GPR_U32(ctx, 31, 0x28A850u);
    ctx->pc = 0x28A84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A848u;
    // 0x28a84c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2881F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2881F0u, 0x28A848u, 0x28A850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A850u;
label_28a850:
    // 0x28a850: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x28a850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_28a854:
    // 0x28a854: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28a854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28a858:
    // 0x28a858: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a85c:
    // 0x28a85c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28a85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28a860:
    // 0x28a860: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28a860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a864:
    // 0x28a864: 0xc0a2848  jal         func_28A120
label_28a868:
    if (ctx->pc == 0x28A868u) {
        ctx->pc = 0x28A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A864u;
        // 0x28a868: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A86Cu;
        goto label_28a86c;
    }
    ctx->pc = 0x28A864u;
    SET_GPR_U32(ctx, 31, 0x28A86Cu);
    ctx->pc = 0x28A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A864u;
    // 0x28a868: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28A864u, 0x28A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A86Cu;
label_28a86c:
    // 0x28a86c: 0x1640fff4  bnez        $s2, . + 4 + (-0xC << 2)
label_28a870:
    if (ctx->pc == 0x28A870u) {
        ctx->pc = 0x28A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A86Cu;
        // 0x28a870: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A874u;
        goto label_28a874;
    }
    ctx->pc = 0x28A86Cu;
    {
        const bool branch_taken_0x28a86c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A86Cu;
        // 0x28a870: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a86c) {
            ctx->pc = 0x28A840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a840;
        }
    }
    ctx->pc = 0x28A874u;
label_28a874:
    // 0x28a874: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28a878:
    // 0x28a878: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x28a878u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28a87c:
    // 0x28a87c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28a880:
    // 0x28a880: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28a880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_28a884:
    // 0x28a884: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x28a884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28a888:
    // 0x28a888: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x28a888u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28a88c:
    // 0x28a88c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_28a890:
    if (ctx->pc == 0x28A890u) {
        ctx->pc = 0x28A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A88Cu;
        // 0x28a890: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A894u;
        goto label_28a894;
    }
    ctx->pc = 0x28A88Cu;
    {
        const bool branch_taken_0x28a88c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A88Cu;
        // 0x28a890: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a88c) {
            ctx->pc = 0x28A89Cu;
            goto label_28a89c;
        }
    }
    ctx->pc = 0x28A894u;
label_28a894:
    // 0x28a894: 0x5200002b  beql        $s0, $zero, . + 4 + (0x2B << 2)
label_28a898:
    if (ctx->pc == 0x28A898u) {
        ctx->pc = 0x28A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A894u;
        // 0x28a898: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A89Cu;
        goto label_28a89c;
    }
    ctx->pc = 0x28A894u;
    {
        const bool branch_taken_0x28a894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a894) {
            ctx->pc = 0x28A898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A894u;
            // 0x28a898: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A944u;
            goto label_28a944;
        }
    }
    ctx->pc = 0x28A89Cu;
label_28a89c:
    // 0x28a89c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_28a8a0:
    if (ctx->pc == 0x28A8A0u) {
        ctx->pc = 0x28A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A89Cu;
        // 0x28a8a0: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A8A4u;
        goto label_28a8a4;
    }
    ctx->pc = 0x28A89Cu;
    {
        const bool branch_taken_0x28a89c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A89Cu;
        // 0x28a8a0: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a89c) {
            ctx->pc = 0x28A8B0u;
            goto label_28a8b0;
        }
    }
    ctx->pc = 0x28A8A4u;
label_28a8a4:
    // 0x28a8a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a8a8:
    // 0x28a8a8: 0x10e40017  beq         $a3, $a0, . + 4 + (0x17 << 2)
label_28a8ac:
    if (ctx->pc == 0x28A8ACu) {
        ctx->pc = 0x28A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8A8u;
        // 0x28a8ac: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A8B0u;
        goto label_28a8b0;
    }
    ctx->pc = 0x28A8A8u;
    {
        const bool branch_taken_0x28a8a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x28A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8A8u;
        // 0x28a8ac: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8a8) {
            ctx->pc = 0x28A908u;
            goto label_28a908;
        }
    }
    ctx->pc = 0x28A8B0u;
label_28a8b0:
    // 0x28a8b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a8b4:
    // 0x28a8b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28a8b8:
    // 0x28a8b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28a8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28a8bc:
    // 0x28a8bc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x28a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_28a8c0:
    // 0x28a8c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28a8c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a8c4:
    // 0x28a8c4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x28a8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28a8c8:
    // 0x28a8c8: 0xc0a1f6c  jal         func_287DB0
label_28a8cc:
    if (ctx->pc == 0x28A8CCu) {
        ctx->pc = 0x28A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8C8u;
        // 0x28a8cc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A8D0u;
        goto label_28a8d0;
    }
    ctx->pc = 0x28A8C8u;
    SET_GPR_U32(ctx, 31, 0x28A8D0u);
    ctx->pc = 0x28A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8C8u;
    // 0x28a8cc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287DB0u, 0x28A8C8u, 0x28A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8D0u;
label_28a8d0:
    // 0x28a8d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28a8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28a8d4:
    // 0x28a8d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a8d8:
    // 0x28a8d8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28a8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28a8dc:
    // 0x28a8dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28a8dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a8e0:
    // 0x28a8e0: 0xc0a2848  jal         func_28A120
label_28a8e4:
    if (ctx->pc == 0x28A8E4u) {
        ctx->pc = 0x28A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8E0u;
        // 0x28a8e4: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A8E8u;
        goto label_28a8e8;
    }
    ctx->pc = 0x28A8E0u;
    SET_GPR_U32(ctx, 31, 0x28A8E8u);
    ctx->pc = 0x28A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8E0u;
    // 0x28a8e4: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28A8E0u, 0x28A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8E8u;
label_28a8e8:
    // 0x28a8e8: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x28a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_28a8ec:
    // 0x28a8ec: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x28a8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_28a8f0:
    // 0x28a8f0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_28a8f4:
    if (ctx->pc == 0x28A8F4u) {
        ctx->pc = 0x28A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8F0u;
        // 0x28a8f4: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A8F8u;
        goto label_28a8f8;
    }
    ctx->pc = 0x28A8F0u;
    {
        const bool branch_taken_0x28a8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8F0u;
        // 0x28a8f4: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8f0) {
            ctx->pc = 0x28A9ACu;
            goto label_28a9ac;
        }
    }
    ctx->pc = 0x28A8F8u;
label_28a8f8:
    // 0x28a8f8: 0x1600ffcd  bnez        $s0, . + 4 + (-0x33 << 2)
label_28a8fc:
    if (ctx->pc == 0x28A8FCu) {
        ctx->pc = 0x28A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8F8u;
        // 0x28a8fc: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A900u;
        goto label_28a900;
    }
    ctx->pc = 0x28A8F8u;
    {
        const bool branch_taken_0x28a8f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8F8u;
        // 0x28a8fc: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8f8) {
            ctx->pc = 0x28A830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a830;
        }
    }
    ctx->pc = 0x28A900u;
label_28a900:
    // 0x28a900: 0x10000011  b           . + 4 + (0x11 << 2)
label_28a904:
    if (ctx->pc == 0x28A904u) {
        ctx->pc = 0x28A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A900u;
        // 0x28a904: 0x223102a  slt         $v0, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A908u;
        goto label_28a908;
    }
    ctx->pc = 0x28A900u;
    {
        const bool branch_taken_0x28a900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A900u;
        // 0x28a904: 0x223102a  slt         $v0, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a900) {
            ctx->pc = 0x28A948u;
            goto label_28a948;
        }
    }
    ctx->pc = 0x28A908u;
label_28a908:
    // 0x28a908: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28a908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a90c:
    // 0x28a90c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28a90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a910:
    // 0x28a910: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x28a910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a914:
    // 0x28a914: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x28a914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28a918:
    // 0x28a918: 0xc0a1f6c  jal         func_287DB0
label_28a91c:
    if (ctx->pc == 0x28A91Cu) {
        ctx->pc = 0x28A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A918u;
        // 0x28a91c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A920u;
        goto label_28a920;
    }
    ctx->pc = 0x28A918u;
    SET_GPR_U32(ctx, 31, 0x28A920u);
    ctx->pc = 0x28A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A918u;
    // 0x28a91c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287DB0u, 0x28A918u, 0x28A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A920u;
label_28a920:
    // 0x28a920: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x28a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28a924:
    // 0x28a924: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a928:
    // 0x28a928: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28a928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28a92c:
    // 0x28a92c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x28a92cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28a930:
    // 0x28a930: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28a930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28a934:
    // 0x28a934: 0xc0a2848  jal         func_28A120
label_28a938:
    if (ctx->pc == 0x28A938u) {
        ctx->pc = 0x28A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A934u;
        // 0x28a938: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A93Cu;
        goto label_28a93c;
    }
    ctx->pc = 0x28A934u;
    SET_GPR_U32(ctx, 31, 0x28A93Cu);
    ctx->pc = 0x28A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A934u;
    // 0x28a938: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28A934u, 0x28A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A93Cu;
label_28a93c:
    // 0x28a93c: 0x10000015  b           . + 4 + (0x15 << 2)
label_28a940:
    if (ctx->pc == 0x28A940u) {
        ctx->pc = 0x28A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A93Cu;
        // 0x28a940: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A944u;
        goto label_28a944;
    }
    ctx->pc = 0x28A93Cu;
    {
        const bool branch_taken_0x28a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A93Cu;
        // 0x28a940: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a93c) {
            ctx->pc = 0x28A994u;
            goto label_28a994;
        }
    }
    ctx->pc = 0x28A944u;
label_28a944:
    // 0x28a944: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x28a944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28a948:
    // 0x28a948: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_28a94c:
    if (ctx->pc == 0x28A94Cu) {
        ctx->pc = 0x28A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A948u;
        // 0x28a94c: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A950u;
        goto label_28a950;
    }
    ctx->pc = 0x28A948u;
    {
        const bool branch_taken_0x28a948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A948u;
        // 0x28a94c: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a948) {
            ctx->pc = 0x28A974u;
            goto label_28a974;
        }
    }
    ctx->pc = 0x28A950u;
label_28a950:
    // 0x28a950: 0x719023  subu        $s2, $v1, $s1
    ctx->pc = 0x28a950u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_28a954:
    // 0x28a954: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x28a954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_28a958:
    // 0x28a958: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x28a958u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_28a95c:
    // 0x28a95c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x28a95cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_28a960:
    // 0x28a960: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x28a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28a964:
    // 0x28a964: 0x0  nop
    ctx->pc = 0x28a964u;
    // NOP
label_28a968:
    // 0x28a968: 0x0  nop
    ctx->pc = 0x28a968u;
    // NOP
label_28a96c:
    // 0x28a96c: 0x1640fffa  bnez        $s2, . + 4 + (-0x6 << 2)
label_28a970:
    if (ctx->pc == 0x28A970u) {
        ctx->pc = 0x28A974u;
        goto label_28a974;
    }
    ctx->pc = 0x28A96Cu;
    {
        const bool branch_taken_0x28a96c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a96c) {
            ctx->pc = 0x28A958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a958;
        }
    }
    ctx->pc = 0x28A974u;
label_28a974:
    // 0x28a974: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x28a974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28a978:
    // 0x28a978: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28a978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28a97c:
    // 0x28a97c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x28a97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28a980:
    // 0x28a980: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28a980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a984:
    // 0x28a984: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x28a984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28a988:
    // 0x28a988: 0xc0a2848  jal         func_28A120
label_28a98c:
    if (ctx->pc == 0x28A98Cu) {
        ctx->pc = 0x28A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A988u;
        // 0x28a98c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A990u;
        goto label_28a990;
    }
    ctx->pc = 0x28A988u;
    SET_GPR_U32(ctx, 31, 0x28A990u);
    ctx->pc = 0x28A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A988u;
    // 0x28a98c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28A988u, 0x28A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A990u;
label_28a990:
    // 0x28a990: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x28a990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28a994:
    // 0x28a994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a998:
    // 0x28a998: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x28a998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
label_28a99c:
    // 0x28a99c: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x28a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_28a9a0:
    // 0x28a9a0: 0xc0a1a72  jal         func_2869C8
label_28a9a4:
    if (ctx->pc == 0x28A9A4u) {
        ctx->pc = 0x28A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9A0u;
        // 0x28a9a4: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9A8u;
        goto label_28a9a8;
    }
    ctx->pc = 0x28A9A0u;
    SET_GPR_U32(ctx, 31, 0x28A9A8u);
    ctx->pc = 0x28A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9A0u;
    // 0x28a9a4: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2869C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2869C8u, 0x28A9A0u, 0x28A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9A8u;
label_28a9a8:
    // 0x28a9a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x28a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28a9ac:
    // 0x28a9ac: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_28a9b0:
    if (ctx->pc == 0x28A9B0u) {
        ctx->pc = 0x28A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9ACu;
        // 0x28a9b0: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9B4u;
        goto label_28a9b4;
    }
    ctx->pc = 0x28A9ACu;
    {
        const bool branch_taken_0x28a9ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9ACu;
        // 0x28a9b0: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9ac) {
            ctx->pc = 0x28A9CCu;
            goto label_28a9cc;
        }
    }
    ctx->pc = 0x28A9B4u;
label_28a9b4:
    // 0x28a9b4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x28a9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28a9b8:
    // 0x28a9b8: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_28a9bc:
    if (ctx->pc == 0x28A9BCu) {
        ctx->pc = 0x28A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9B8u;
        // 0x28a9bc: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9C0u;
        goto label_28a9c0;
    }
    ctx->pc = 0x28A9B8u;
    {
        const bool branch_taken_0x28a9b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a9b8) {
            ctx->pc = 0x28A9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A9B8u;
            // 0x28a9bc: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A9D0u;
            goto label_28a9d0;
        }
    }
    ctx->pc = 0x28A9C0u;
label_28a9c0:
    // 0x28a9c0: 0xc0a1f0c  jal         func_287C30
label_28a9c4:
    if (ctx->pc == 0x28A9C4u) {
        ctx->pc = 0x28A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9C0u;
        // 0x28a9c4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9C8u;
        goto label_28a9c8;
    }
    ctx->pc = 0x28A9C0u;
    SET_GPR_U32(ctx, 31, 0x28A9C8u);
    ctx->pc = 0x28A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9C0u;
    // 0x28a9c4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C30u, 0x28A9C0u, 0x28A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9C8u;
label_28a9c8:
    // 0x28a9c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_28a9cc:
    // 0x28a9cc: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x28a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_28a9d0:
    // 0x28a9d0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x28a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_28a9d4:
    // 0x28a9d4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x28a9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_28a9d8:
    // 0x28a9d8: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x28a9d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_28a9dc:
    // 0x28a9dc: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x28a9dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_28a9e0:
    // 0x28a9e0: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x28a9e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_28a9e4:
    // 0x28a9e4: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x28a9e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_28a9e8:
    // 0x28a9e8: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x28a9e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_28a9ec:
    // 0x28a9ec: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x28a9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_28a9f0:
    // 0x28a9f0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x28a9f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28a9f4:
    // 0x28a9f4: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x28a9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28a9f8:
    // 0x28a9f8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x28a9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28a9fc:
    // 0x28a9fc: 0x3e00008  jr          $ra
label_28aa00:
    if (ctx->pc == 0x28AA00u) {
        ctx->pc = 0x28AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9FCu;
        // 0x28aa00: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA04u;
        goto label_28aa04;
    }
    ctx->pc = 0x28A9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9FCu;
        // 0x28aa00: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AA04u;
label_28aa04:
    // 0x28aa04: 0x0  nop
    ctx->pc = 0x28aa04u;
    // NOP
label_28aa08:
    // 0x28aa08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_28aa0c:
    // 0x28aa0c: 0x3e00008  jr          $ra
label_28aa10:
    if (ctx->pc == 0x28AA10u) {
        ctx->pc = 0x28AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA0Cu;
        // 0x28aa10: 0x2442a7c0  addiu       $v0, $v0, -0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA14u;
        goto label_28aa14;
    }
    ctx->pc = 0x28AA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA0Cu;
        // 0x28aa10: 0x2442a7c0  addiu       $v0, $v0, -0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AA14u;
label_28aa14:
    // 0x28aa14: 0x0  nop
    ctx->pc = 0x28aa14u;
    // NOP
label_28aa18:
    // 0x28aa18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28aa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28aa1c:
    // 0x28aa1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28aa20:
    // 0x28aa20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_28aa24:
    // 0x28aa24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28aa24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28aa28:
    // 0x28aa28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28aa2c:
    // 0x28aa2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28aa2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28aa30:
    // 0x28aa30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28aa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28aa34:
    // 0x28aa34: 0xc0a8bf6  jal         func_2A2FD8
label_28aa38:
    if (ctx->pc == 0x28AA38u) {
        ctx->pc = 0x28AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA34u;
        // 0x28aa38: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA3Cu;
        goto label_28aa3c;
    }
    ctx->pc = 0x28AA34u;
    SET_GPR_U32(ctx, 31, 0x28AA3Cu);
    ctx->pc = 0x28AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA34u;
    // 0x28aa38: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x28AA34u, 0x28AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA3Cu;
label_28aa3c:
    // 0x28aa3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28aa3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28aa40:
    // 0x28aa40: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_28aa44:
    if (ctx->pc == 0x28AA44u) {
        ctx->pc = 0x28AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA40u;
        // 0x28aa44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA48u;
        goto label_28aa48;
    }
    ctx->pc = 0x28AA40u;
    {
        const bool branch_taken_0x28aa40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA40u;
        // 0x28aa44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa40) {
            ctx->pc = 0x28AA50u;
            goto label_28aa50;
        }
    }
    ctx->pc = 0x28AA48u;
label_28aa48:
    // 0x28aa48: 0x1000000d  b           . + 4 + (0xD << 2)
label_28aa4c:
    if (ctx->pc == 0x28AA4Cu) {
        ctx->pc = 0x28AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA48u;
        // 0x28aa4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA50u;
        goto label_28aa50;
    }
    ctx->pc = 0x28AA48u;
    {
        const bool branch_taken_0x28aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA48u;
        // 0x28aa4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa48) {
            ctx->pc = 0x28AA80u;
            goto label_28aa80;
        }
    }
    ctx->pc = 0x28AA50u;
label_28aa50:
    // 0x28aa50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28aa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28aa54:
    // 0x28aa54: 0xc049cb6  jal         func_1272D8
label_28aa58:
    if (ctx->pc == 0x28AA58u) {
        ctx->pc = 0x28AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA54u;
        // 0x28aa58: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA5Cu;
        goto label_28aa5c;
    }
    ctx->pc = 0x28AA54u;
    SET_GPR_U32(ctx, 31, 0x28AA5Cu);
    ctx->pc = 0x28AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA54u;
    // 0x28aa58: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x28AA54u, 0x28AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA5Cu;
label_28aa5c:
    // 0x28aa5c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x28aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_28aa60:
    // 0x28aa60: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x28aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_28aa64:
    // 0x28aa64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28aa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28aa68:
    // 0x28aa68: 0xc0a1efa  jal         func_287BE8
label_28aa6c:
    if (ctx->pc == 0x28AA6Cu) {
        ctx->pc = 0x28AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA68u;
        // 0x28aa6c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA70u;
        goto label_28aa70;
    }
    ctx->pc = 0x28AA68u;
    SET_GPR_U32(ctx, 31, 0x28AA70u);
    ctx->pc = 0x28AA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA68u;
    // 0x28aa6c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287BE8u, 0x28AA68u, 0x28AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA70u;
label_28aa70:
    // 0x28aa70: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x28aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_28aa74:
    // 0x28aa74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28aa74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28aa78:
    // 0x28aa78: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x28aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_28aa7c:
    // 0x28aa7c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x28aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_28aa80:
    // 0x28aa80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28aa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28aa84:
    // 0x28aa84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28aa84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28aa88:
    // 0x28aa88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28aa88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28aa8c:
    // 0x28aa8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28aa8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28aa90:
    // 0x28aa90: 0x3e00008  jr          $ra
label_28aa94:
    if (ctx->pc == 0x28AA94u) {
        ctx->pc = 0x28AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA90u;
        // 0x28aa94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA98u;
        goto label_28aa98;
    }
    ctx->pc = 0x28AA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA90u;
        // 0x28aa94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AA98u;
label_28aa98:
    // 0x28aa98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28aa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28aa9c:
    // 0x28aa9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28aa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28aaa0:
    // 0x28aaa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28aaa4:
    // 0x28aaa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28aaa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28aaa8:
    // 0x28aaa8: 0xc0a1f0c  jal         func_287C30
label_28aaac:
    if (ctx->pc == 0x28AAACu) {
        ctx->pc = 0x28AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAA8u;
        // 0x28aaac: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAB0u;
        goto label_28aab0;
    }
    ctx->pc = 0x28AAA8u;
    SET_GPR_U32(ctx, 31, 0x28AAB0u);
    ctx->pc = 0x28AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAA8u;
    // 0x28aaac: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C30u, 0x28AAA8u, 0x28AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAB0u;
label_28aab0:
    // 0x28aab0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x28aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_28aab4:
    // 0x28aab4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_28aab8:
    if (ctx->pc == 0x28AAB8u) {
        ctx->pc = 0x28AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAB4u;
        // 0x28aab8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AABCu;
        goto label_28aabc;
    }
    ctx->pc = 0x28AAB4u;
    {
        const bool branch_taken_0x28aab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aab4) {
            ctx->pc = 0x28AAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AAB4u;
            // 0x28aab8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AAC8u;
            goto label_28aac8;
        }
    }
    ctx->pc = 0x28AABCu;
label_28aabc:
    // 0x28aabc: 0xc0a8c0a  jal         func_2A3028
label_28aac0:
    if (ctx->pc == 0x28AAC0u) {
        ctx->pc = 0x28AAC4u;
        goto label_28aac4;
    }
    ctx->pc = 0x28AABCu;
    SET_GPR_U32(ctx, 31, 0x28AAC4u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x28AABCu, 0x28AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAC4u;
label_28aac4:
    // 0x28aac4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x28aac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_28aac8:
    // 0x28aac8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_28aacc:
    if (ctx->pc == 0x28AACCu) {
        ctx->pc = 0x28AAD0u;
        goto label_28aad0;
    }
    ctx->pc = 0x28AAC8u;
    {
        const bool branch_taken_0x28aac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aac8) {
            ctx->pc = 0x28AAD8u;
            goto label_28aad8;
        }
    }
    ctx->pc = 0x28AAD0u;
label_28aad0:
    // 0x28aad0: 0xc0a8c0a  jal         func_2A3028
label_28aad4:
    if (ctx->pc == 0x28AAD4u) {
        ctx->pc = 0x28AAD8u;
        goto label_28aad8;
    }
    ctx->pc = 0x28AAD0u;
    SET_GPR_U32(ctx, 31, 0x28AAD8u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x28AAD0u, 0x28AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAD8u;
label_28aad8:
    // 0x28aad8: 0xc0a8c0a  jal         func_2A3028
label_28aadc:
    if (ctx->pc == 0x28AADCu) {
        ctx->pc = 0x28AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAD8u;
        // 0x28aadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAE0u;
        goto label_28aae0;
    }
    ctx->pc = 0x28AAD8u;
    SET_GPR_U32(ctx, 31, 0x28AAE0u);
    ctx->pc = 0x28AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAD8u;
    // 0x28aadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x28AAD8u, 0x28AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAE0u;
label_28aae0:
    // 0x28aae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28aae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28aae4:
    // 0x28aae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28aae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28aae8:
    // 0x28aae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28aae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28aaec:
    // 0x28aaec: 0x3e00008  jr          $ra
label_28aaf0:
    if (ctx->pc == 0x28AAF0u) {
        ctx->pc = 0x28AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAECu;
        // 0x28aaf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAF4u;
        goto label_28aaf4;
    }
    ctx->pc = 0x28AAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAECu;
        // 0x28aaf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AAF4u;
label_28aaf4:
    // 0x28aaf4: 0x0  nop
    ctx->pc = 0x28aaf4u;
    // NOP
label_28aaf8:
    // 0x28aaf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28aaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28aafc:
    // 0x28aafc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x28aafcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28ab00:
    // 0x28ab00: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x28ab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_28ab04:
    // 0x28ab04: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x28ab04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28ab08:
    // 0x28ab08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28ab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_28ab0c:
    // 0x28ab0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28ab0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ab10:
    // 0x28ab10: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_28ab14:
    // 0x28ab14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28ab14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28ab18:
    // 0x28ab18: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x28ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_28ab1c:
    // 0x28ab1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ab20:
    // 0x28ab20: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
label_28ab24:
    if (ctx->pc == 0x28AB24u) {
        ctx->pc = 0x28AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB20u;
        // 0x28ab24: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB28u;
        goto label_28ab28;
    }
    ctx->pc = 0x28AB20u;
    {
        const bool branch_taken_0x28ab20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x28AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB20u;
        // 0x28ab24: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab20) {
            ctx->pc = 0x28AB70u;
            goto label_28ab70;
        }
    }
    ctx->pc = 0x28AB28u;
label_28ab28:
    // 0x28ab28: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x28ab28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_28ab2c:
    // 0x28ab2c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x28ab2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28ab30:
    // 0x28ab30: 0xc0a2c82  jal         func_28B208
label_28ab34:
    if (ctx->pc == 0x28AB34u) {
        ctx->pc = 0x28AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB30u;
        // 0x28ab34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB38u;
        goto label_28ab38;
    }
    ctx->pc = 0x28AB30u;
    SET_GPR_U32(ctx, 31, 0x28AB38u);
    ctx->pc = 0x28AB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB30u;
    // 0x28ab34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B208u, 0x28AB30u, 0x28AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB38u;
label_28ab38:
    // 0x28ab38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28ab38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ab3c:
    // 0x28ab3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28ab40:
    // 0x28ab40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28ab44:
    // 0x28ab44: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x28ab44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28ab48:
    // 0x28ab48: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x28ab48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_28ab4c:
    // 0x28ab4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_28ab50:
    if (ctx->pc == 0x28AB50u) {
        ctx->pc = 0x28AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB4Cu;
        // 0x28ab50: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB54u;
        goto label_28ab54;
    }
    ctx->pc = 0x28AB4Cu;
    {
        const bool branch_taken_0x28ab4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB4Cu;
        // 0x28ab50: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab4c) {
            ctx->pc = 0x28AB68u;
            goto label_28ab68;
        }
    }
    ctx->pc = 0x28AB54u;
label_28ab54:
    // 0x28ab54: 0xc0a1a4e  jal         func_286938
label_28ab58:
    if (ctx->pc == 0x28AB58u) {
        ctx->pc = 0x28AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB54u;
        // 0x28ab58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB5Cu;
        goto label_28ab5c;
    }
    ctx->pc = 0x28AB54u;
    SET_GPR_U32(ctx, 31, 0x28AB5Cu);
    ctx->pc = 0x28AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB54u;
    // 0x28ab58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286938u, 0x28AB54u, 0x28AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB5Cu;
label_28ab5c:
    // 0x28ab5c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x28ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_28ab60:
    // 0x28ab60: 0xc0a1a4e  jal         func_286938
label_28ab64:
    if (ctx->pc == 0x28AB64u) {
        ctx->pc = 0x28AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB60u;
        // 0x28ab64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB68u;
        goto label_28ab68;
    }
    ctx->pc = 0x28AB60u;
    SET_GPR_U32(ctx, 31, 0x28AB68u);
    ctx->pc = 0x28AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB60u;
    // 0x28ab64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286938u, 0x28AB60u, 0x28AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB68u;
label_28ab68:
    // 0x28ab68: 0x1000001c  b           . + 4 + (0x1C << 2)
label_28ab6c:
    if (ctx->pc == 0x28AB6Cu) {
        ctx->pc = 0x28AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB68u;
        // 0x28ab6c: 0x2e620001  sltiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB70u;
        goto label_28ab70;
    }
    ctx->pc = 0x28AB68u;
    {
        const bool branch_taken_0x28ab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB68u;
        // 0x28ab6c: 0x2e620001  sltiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab68) {
            ctx->pc = 0x28ABDCu;
            goto label_28abdc;
        }
    }
    ctx->pc = 0x28AB70u;
label_28ab70:
    // 0x28ab70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28ab74:
    // 0x28ab74: 0x14c20019  bne         $a2, $v0, . + 4 + (0x19 << 2)
label_28ab78:
    if (ctx->pc == 0x28AB78u) {
        ctx->pc = 0x28AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB74u;
        // 0x28ab78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB7Cu;
        goto label_28ab7c;
    }
    ctx->pc = 0x28AB74u;
    {
        const bool branch_taken_0x28ab74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x28AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB74u;
        // 0x28ab78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab74) {
            ctx->pc = 0x28ABDCu;
            goto label_28abdc;
        }
    }
    ctx->pc = 0x28AB7Cu;
label_28ab7c:
    // 0x28ab7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ab7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ab80:
    // 0x28ab80: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x28ab80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28ab84:
    // 0x28ab84: 0xc0a2614  jal         func_289850
label_28ab88:
    if (ctx->pc == 0x28AB88u) {
        ctx->pc = 0x28AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB84u;
        // 0x28ab88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB8Cu;
        goto label_28ab8c;
    }
    ctx->pc = 0x28AB84u;
    SET_GPR_U32(ctx, 31, 0x28AB8Cu);
    ctx->pc = 0x28AB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB84u;
    // 0x28ab88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289850u, 0x28AB84u, 0x28AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB8Cu;
label_28ab8c:
    // 0x28ab8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ab8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ab90:
    // 0x28ab90: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x28ab90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_28ab94:
    // 0x28ab94: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_28ab98:
    if (ctx->pc == 0x28AB98u) {
        ctx->pc = 0x28AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB94u;
        // 0x28ab98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB9Cu;
        goto label_28ab9c;
    }
    ctx->pc = 0x28AB94u;
    {
        const bool branch_taken_0x28ab94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB94u;
        // 0x28ab98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab94) {
            ctx->pc = 0x28ABDCu;
            goto label_28abdc;
        }
    }
    ctx->pc = 0x28AB9Cu;
label_28ab9c:
    // 0x28ab9c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x28ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_28aba0:
    // 0x28aba0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_28aba4:
    if (ctx->pc == 0x28ABA4u) {
        ctx->pc = 0x28ABA8u;
        goto label_28aba8;
    }
    ctx->pc = 0x28ABA0u;
    {
        const bool branch_taken_0x28aba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aba0) {
            ctx->pc = 0x28ABB0u;
            goto label_28abb0;
        }
    }
    ctx->pc = 0x28ABA8u;
label_28aba8:
    // 0x28aba8: 0xc0a8c0a  jal         func_2A3028
label_28abac:
    if (ctx->pc == 0x28ABACu) {
        ctx->pc = 0x28ABB0u;
        goto label_28abb0;
    }
    ctx->pc = 0x28ABA8u;
    SET_GPR_U32(ctx, 31, 0x28ABB0u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x28ABA8u, 0x28ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABB0u;
label_28abb0:
    // 0x28abb0: 0xc0a8bf6  jal         func_2A2FD8
label_28abb4:
    if (ctx->pc == 0x28ABB4u) {
        ctx->pc = 0x28ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABB0u;
        // 0x28abb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABB8u;
        goto label_28abb8;
    }
    ctx->pc = 0x28ABB0u;
    SET_GPR_U32(ctx, 31, 0x28ABB8u);
    ctx->pc = 0x28ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABB0u;
    // 0x28abb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x28ABB0u, 0x28ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABB8u;
label_28abb8:
    // 0x28abb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_28abbc:
    if (ctx->pc == 0x28ABBCu) {
        ctx->pc = 0x28ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABB8u;
        // 0x28abbc: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABC0u;
        goto label_28abc0;
    }
    ctx->pc = 0x28ABB8u;
    {
        const bool branch_taken_0x28abb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABB8u;
        // 0x28abbc: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abb8) {
            ctx->pc = 0x28ABD8u;
            goto label_28abd8;
        }
    }
    ctx->pc = 0x28ABC0u;
label_28abc0:
    // 0x28abc0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x28abc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28abc4:
    // 0x28abc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28abc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28abc8:
    // 0x28abc8: 0xc049c48  jal         func_127120
label_28abcc:
    if (ctx->pc == 0x28ABCCu) {
        ctx->pc = 0x28ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABC8u;
        // 0x28abcc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABD0u;
        goto label_28abd0;
    }
    ctx->pc = 0x28ABC8u;
    SET_GPR_U32(ctx, 31, 0x28ABD0u);
    ctx->pc = 0x28ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABC8u;
    // 0x28abcc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x28ABC8u, 0x28ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABD0u;
label_28abd0:
    // 0x28abd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_28abd4:
    if (ctx->pc == 0x28ABD4u) {
        ctx->pc = 0x28ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABD0u;
        // 0x28abd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABD8u;
        goto label_28abd8;
    }
    ctx->pc = 0x28ABD0u;
    {
        const bool branch_taken_0x28abd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABD0u;
        // 0x28abd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abd0) {
            ctx->pc = 0x28ABDCu;
            goto label_28abdc;
        }
    }
    ctx->pc = 0x28ABD8u;
label_28abd8:
    // 0x28abd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28abdc:
    // 0x28abdc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28abdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28abe0:
    // 0x28abe0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x28abe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28abe4:
    // 0x28abe4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x28abe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28abe8:
    // 0x28abe8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28abe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28abec:
    // 0x28abec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28abecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28abf0:
    // 0x28abf0: 0x3e00008  jr          $ra
label_28abf4:
    if (ctx->pc == 0x28ABF4u) {
        ctx->pc = 0x28ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABF0u;
        // 0x28abf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABF8u;
        goto label_28abf8;
    }
    ctx->pc = 0x28ABF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABF0u;
        // 0x28abf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ABF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ABF8u;
label_28abf8:
    // 0x28abf8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x28abf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_28abfc:
    // 0x28abfc: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x28abfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_28ac00:
    // 0x28ac00: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x28ac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_28ac04:
    // 0x28ac04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28ac04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ac08:
    // 0x28ac08: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x28ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_28ac0c:
    // 0x28ac0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28ac0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ac10:
    // 0x28ac10: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x28ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_28ac14:
    // 0x28ac14: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x28ac14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28ac18:
    // 0x28ac18: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x28ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
label_28ac1c:
    // 0x28ac1c: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x28ac1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
label_28ac20:
    // 0x28ac20: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x28ac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
label_28ac24:
    // 0x28ac24: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x28ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
label_28ac28:
    // 0x28ac28: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x28ac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
label_28ac2c:
    // 0x28ac2c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x28ac2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_28ac30:
    // 0x28ac30: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x28ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_28ac34:
    // 0x28ac34: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x28ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
label_28ac38:
    // 0x28ac38: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x28ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_28ac3c:
    // 0x28ac3c: 0x24490020  addiu       $t1, $v0, 0x20
    ctx->pc = 0x28ac3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_28ac40:
    // 0x28ac40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x28ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28ac44:
    // 0x28ac44: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x28ac44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_28ac48:
    // 0x28ac48: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x28ac48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
label_28ac4c:
    // 0x28ac4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x28ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28ac50:
    // 0x28ac50: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x28ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_28ac54:
    // 0x28ac54: 0x8c520024  lw          $s2, 0x24($v0)
    ctx->pc = 0x28ac54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_28ac58:
    // 0x28ac58: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x28ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_28ac5c:
    // 0x28ac5c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x28ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28ac60:
    // 0x28ac60: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x28ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_28ac64:
    // 0x28ac64: 0x1512000d  bne         $t0, $s2, . + 4 + (0xD << 2)
label_28ac68:
    if (ctx->pc == 0x28AC68u) {
        ctx->pc = 0x28AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC64u;
        // 0x28ac68: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC6Cu;
        goto label_28ac6c;
    }
    ctx->pc = 0x28AC64u;
    {
        const bool branch_taken_0x28ac64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 18));
        ctx->pc = 0x28AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC64u;
        // 0x28ac68: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac64) {
            ctx->pc = 0x28AC9Cu;
            goto label_28ac9c;
        }
    }
    ctx->pc = 0x28AC6Cu;
label_28ac6c:
    // 0x28ac6c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x28ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_28ac70:
    // 0x28ac70: 0x1298c0  sll         $s3, $s2, 3
    ctx->pc = 0x28ac70u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28ac74:
    // 0x28ac74: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x28ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28ac78:
    // 0x28ac78: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x28ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_28ac7c:
    // 0x28ac7c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x28ac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_28ac80:
    // 0x28ac80: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x28ac80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_28ac84:
    // 0x28ac84: 0xdca2fff8  ld          $v0, -0x8($a1)
    ctx->pc = 0x28ac84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_28ac88:
    // 0x28ac88: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x28ac88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_28ac8c:
    // 0x28ac8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_28ac90:
    if (ctx->pc == 0x28AC90u) {
        ctx->pc = 0x28AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC8Cu;
        // 0x28ac90: 0x112102a  slt         $v0, $t0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC94u;
        goto label_28ac94;
    }
    ctx->pc = 0x28AC8Cu;
    {
        const bool branch_taken_0x28ac8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC8Cu;
        // 0x28ac90: 0x112102a  slt         $v0, $t0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac8c) {
            ctx->pc = 0x28ACA0u;
            goto label_28aca0;
        }
    }
    ctx->pc = 0x28AC94u;
label_28ac94:
    // 0x28ac94: 0x10000020  b           . + 4 + (0x20 << 2)
label_28ac98:
    if (ctx->pc == 0x28AC98u) {
        ctx->pc = 0x28AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC94u;
        // 0x28ac98: 0xafa60054  sw          $a2, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC9Cu;
        goto label_28ac9c;
    }
    ctx->pc = 0x28AC94u;
    {
        const bool branch_taken_0x28ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC94u;
        // 0x28ac98: 0xafa60054  sw          $a2, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac94) {
            ctx->pc = 0x28AD18u;
            goto label_28ad18;
        }
    }
    ctx->pc = 0x28AC9Cu;
label_28ac9c:
    // 0x28ac9c: 0x112102a  slt         $v0, $t0, $s2
    ctx->pc = 0x28ac9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_28aca0:
    // 0x28aca0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_28aca4:
    if (ctx->pc == 0x28ACA4u) {
        ctx->pc = 0x28ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACA0u;
        // 0x28aca4: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACA8u;
        goto label_28aca8;
    }
    ctx->pc = 0x28ACA0u;
    {
        const bool branch_taken_0x28aca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACA0u;
        // 0x28aca4: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aca0) {
            ctx->pc = 0x28ACECu;
            goto label_28acec;
        }
    }
    ctx->pc = 0x28ACA8u;
label_28aca8:
    // 0x28aca8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x28aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_28acac:
    // 0x28acac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x28acacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28acb0:
    // 0x28acb0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x28acb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28acb4:
    // 0x28acb4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x28acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28acb8:
    // 0x28acb8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_28acbc:
    // 0x28acbc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x28acbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28acc0:
    // 0x28acc0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x28acc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_28acc4:
    // 0x28acc4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x28acc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28acc8:
    // 0x28acc8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_28accc:
    // 0x28accc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28acd0:
    // 0x28acd0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x28acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_28acd4:
    // 0x28acd4: 0xc0a18ea  jal         func_2863A8
label_28acd8:
    if (ctx->pc == 0x28ACD8u) {
        ctx->pc = 0x28ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACD4u;
        // 0x28acd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACDCu;
        goto label_28acdc;
    }
    ctx->pc = 0x28ACD4u;
    SET_GPR_U32(ctx, 31, 0x28ACDCu);
    ctx->pc = 0x28ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ACD4u;
    // 0x28acd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2863A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2863A8u, 0x28ACD4u, 0x28ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACDCu;
label_28acdc:
    // 0x28acdc: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
label_28ace0:
    if (ctx->pc == 0x28ACE0u) {
        ctx->pc = 0x28ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACDCu;
        // 0x28ace0: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACE4u;
        goto label_28ace4;
    }
    ctx->pc = 0x28ACDCu;
    {
        const bool branch_taken_0x28acdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACDCu;
        // 0x28ace0: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acdc) {
            ctx->pc = 0x28B0E4u;
            goto label_28b0e4;
        }
    }
    ctx->pc = 0x28ACE4u;
label_28ace4:
    // 0x28ace4: 0x1000000d  b           . + 4 + (0xD << 2)
label_28ace8:
    if (ctx->pc == 0x28ACE8u) {
        ctx->pc = 0x28ACECu;
        goto label_28acec;
    }
    ctx->pc = 0x28ACE4u;
    {
        const bool branch_taken_0x28ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ace4) {
            ctx->pc = 0x28AD1Cu;
            goto label_28ad1c;
        }
    }
    ctx->pc = 0x28ACECu;
label_28acec:
    // 0x28acec: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x28acecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_28acf0:
    // 0x28acf0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x28acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28acf4:
    // 0x28acf4: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x28acf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28acf8:
    // 0x28acf8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x28acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28acfc:
    // 0x28acfc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_28ad00:
    // 0x28ad00: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x28ad00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28ad04:
    // 0x28ad04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_28ad08:
    // 0x28ad08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28ad0c:
    // 0x28ad0c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x28ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_28ad10:
    // 0x28ad10: 0xc0a1b1c  jal         func_286C70
label_28ad14:
    if (ctx->pc == 0x28AD14u) {
        ctx->pc = 0x28AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD10u;
        // 0x28ad14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD18u;
        goto label_28ad18;
    }
    ctx->pc = 0x28AD10u;
    SET_GPR_U32(ctx, 31, 0x28AD18u);
    ctx->pc = 0x28AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD10u;
    // 0x28ad14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C70u, 0x28AD10u, 0x28AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD18u;
label_28ad18:
    // 0x28ad18: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x28ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_28ad1c:
    // 0x28ad1c: 0xc0a1a4e  jal         func_286938
label_28ad20:
    if (ctx->pc == 0x28AD20u) {
        ctx->pc = 0x28AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD1Cu;
        // 0x28ad20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD24u;
        goto label_28ad24;
    }
    ctx->pc = 0x28AD1Cu;
    SET_GPR_U32(ctx, 31, 0x28AD24u);
    ctx->pc = 0x28AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD1Cu;
    // 0x28ad20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286938u, 0x28AD1Cu, 0x28AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD24u;
label_28ad24:
    // 0x28ad24: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_28ad28:
    if (ctx->pc == 0x28AD28u) {
        ctx->pc = 0x28AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD24u;
        // 0x28ad28: 0x8fa70048  lw          $a3, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD2Cu;
        goto label_28ad2c;
    }
    ctx->pc = 0x28AD24u;
    {
        const bool branch_taken_0x28ad24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD24u;
        // 0x28ad28: 0x8fa70048  lw          $a3, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad24) {
            ctx->pc = 0x28AD5Cu;
            goto label_28ad5c;
        }
    }
    ctx->pc = 0x28AD2Cu;
label_28ad2c:
    // 0x28ad2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ad2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ad30:
    // 0x28ad30: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x28ad30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_28ad34:
    // 0x28ad34: 0xc0a2614  jal         func_289850
label_28ad38:
    if (ctx->pc == 0x28AD38u) {
        ctx->pc = 0x28AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD34u;
        // 0x28ad38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD3Cu;
        goto label_28ad3c;
    }
    ctx->pc = 0x28AD34u;
    SET_GPR_U32(ctx, 31, 0x28AD3Cu);
    ctx->pc = 0x28AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD34u;
    // 0x28ad38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289850u, 0x28AD34u, 0x28AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD3Cu;
label_28ad3c:
    // 0x28ad3c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x28ad3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_28ad40:
    // 0x28ad40: 0x144000e9  bnez        $v0, . + 4 + (0xE9 << 2)
label_28ad44:
    if (ctx->pc == 0x28AD44u) {
        ctx->pc = 0x28AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD40u;
        // 0x28ad44: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD48u;
        goto label_28ad48;
    }
    ctx->pc = 0x28AD40u;
    {
        const bool branch_taken_0x28ad40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD40u;
        // 0x28ad44: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad40) {
            ctx->pc = 0x28B0E8u;
            goto label_28b0e8;
        }
    }
    ctx->pc = 0x28AD48u;
label_28ad48:
    // 0x28ad48: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x28ad48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28ad4c:
    // 0x28ad4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28ad50:
    // 0x28ad50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28ad54:
    // 0x28ad54: 0x10000006  b           . + 4 + (0x6 << 2)
label_28ad58:
    if (ctx->pc == 0x28AD58u) {
        ctx->pc = 0x28AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD54u;
        // 0x28ad58: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD5Cu;
        goto label_28ad5c;
    }
    ctx->pc = 0x28AD54u;
    {
        const bool branch_taken_0x28ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD54u;
        // 0x28ad58: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad54) {
            ctx->pc = 0x28AD70u;
            goto label_28ad70;
        }
    }
    ctx->pc = 0x28AD5Cu;
label_28ad5c:
    // 0x28ad5c: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x28ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_28ad60:
    // 0x28ad60: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_28ad64:
    if (ctx->pc == 0x28AD64u) {
        ctx->pc = 0x28AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD60u;
        // 0x28ad64: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD68u;
        goto label_28ad68;
    }
    ctx->pc = 0x28AD60u;
    {
        const bool branch_taken_0x28ad60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ad60) {
            ctx->pc = 0x28AD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AD60u;
            // 0x28ad64: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AD70u;
            goto label_28ad70;
        }
    }
    ctx->pc = 0x28AD68u;
label_28ad68:
    // 0x28ad68: 0x100000eb  b           . + 4 + (0xEB << 2)
label_28ad6c:
    if (ctx->pc == 0x28AD6Cu) {
        ctx->pc = 0x28AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD68u;
        // 0x28ad6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD70u;
        goto label_28ad70;
    }
    ctx->pc = 0x28AD68u;
    {
        const bool branch_taken_0x28ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD68u;
        // 0x28ad6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad68) {
            ctx->pc = 0x28B118u;
            goto label_28b118;
        }
    }
    ctx->pc = 0x28AD70u;
label_28ad70:
    // 0x28ad70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x28ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28ad74:
    // 0x28ad74: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x28ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_28ad78:
    // 0x28ad78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28ad7c:
    // 0x28ad7c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x28ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28ad80:
    // 0x28ad80: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x28ad80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_28ad84:
    // 0x28ad84: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x28ad84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_28ad88:
    // 0x28ad88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28ad8c:
    // 0x28ad8c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x28ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_28ad90:
    // 0x28ad90: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x28ad90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_28ad94:
    // 0x28ad94: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x28ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28ad98:
    // 0x28ad98: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x28ad98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_28ad9c:
    // 0x28ad9c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x28ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_28ada0:
    // 0x28ada0: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x28ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_28ada4:
    // 0x28ada4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x28ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28ada8:
    // 0x28ada8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_28adac:
    // 0x28adac: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x28adacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_28adb0:
    // 0x28adb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_28adb4:
    if (ctx->pc == 0x28ADB4u) {
        ctx->pc = 0x28ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADB0u;
        // 0x28adb4: 0xa48021  addu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADB8u;
        goto label_28adb8;
    }
    ctx->pc = 0x28ADB0u;
    {
        const bool branch_taken_0x28adb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADB0u;
        // 0x28adb4: 0xa48021  addu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adb0) {
            ctx->pc = 0x28ADC4u;
            goto label_28adc4;
        }
    }
    ctx->pc = 0x28ADB8u;
label_28adb8:
    // 0x28adb8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x28adb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28adbc:
    // 0x28adbc: 0xc0a1ada  jal         func_286B68
label_28adc0:
    if (ctx->pc == 0x28ADC0u) {
        ctx->pc = 0x28ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADBCu;
        // 0x28adc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADC4u;
        goto label_28adc4;
    }
    ctx->pc = 0x28ADBCu;
    SET_GPR_U32(ctx, 31, 0x28ADC4u);
    ctx->pc = 0x28ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADBCu;
    // 0x28adc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x28ADBCu, 0x28ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADC4u;
label_28adc4:
    // 0x28adc4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x28adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_28adc8:
    // 0x28adc8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x28adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28adcc:
    // 0x28adcc: 0x24830006  addiu       $v1, $a0, 0x6
    ctx->pc = 0x28adccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
label_28add0:
    // 0x28add0: 0x2432818  mult        $a1, $s2, $v1
    ctx->pc = 0x28add0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_28add4:
    // 0x28add4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x28add4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_28add8:
    // 0x28add8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_28addc:
    if (ctx->pc == 0x28ADDCu) {
        ctx->pc = 0x28ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADD8u;
        // 0x28addc: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADE0u;
        goto label_28ade0;
    }
    ctx->pc = 0x28ADD8u;
    {
        const bool branch_taken_0x28add8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADD8u;
        // 0x28addc: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28add8) {
            ctx->pc = 0x28ADECu;
            goto label_28adec;
        }
    }
    ctx->pc = 0x28ADE0u;
label_28ade0:
    // 0x28ade0: 0xc0a1ada  jal         func_286B68
label_28ade4:
    if (ctx->pc == 0x28ADE4u) {
        ctx->pc = 0x28ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADE0u;
        // 0x28ade4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADE8u;
        goto label_28ade8;
    }
    ctx->pc = 0x28ADE0u;
    SET_GPR_U32(ctx, 31, 0x28ADE8u);
    ctx->pc = 0x28ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADE0u;
    // 0x28ade4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x28ADE0u, 0x28ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADE8u;
label_28ade8:
    // 0x28ade8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x28ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_28adec:
    // 0x28adec: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x28adecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28adf0:
    // 0x28adf0: 0x2422818  mult        $a1, $s2, $v0
    ctx->pc = 0x28adf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_28adf4:
    // 0x28adf4: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x28adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_28adf8:
    // 0x28adf8: 0x283f021  addu        $fp, $s4, $v1
    ctx->pc = 0x28adf8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_28adfc:
    // 0x28adfc: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x28adfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_28ae00:
    // 0x28ae00: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x28ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_28ae04:
    // 0x28ae04: 0x284a821  addu        $s5, $s4, $a0
    ctx->pc = 0x28ae04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_28ae08:
    // 0x28ae08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28ae08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28ae0c:
    // 0x28ae0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28ae0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ae10:
    // 0x28ae10: 0xb41021  addu        $v0, $a1, $s4
    ctx->pc = 0x28ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_28ae14:
    // 0x28ae14: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x28ae14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ae18:
    // 0x28ae18: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28ae18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_28ae1c:
    // 0x28ae1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x28ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_28ae20:
    // 0x28ae20: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x28ae20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28ae24:
    // 0x28ae24: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x28ae24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_28ae28:
    // 0x28ae28: 0x8c560020  lw          $s6, 0x20($v0)
    ctx->pc = 0x28ae28u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_28ae2c:
    // 0x28ae2c: 0xc0a1f6c  jal         func_287DB0
label_28ae30:
    if (ctx->pc == 0x28AE30u) {
        ctx->pc = 0x28AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE2Cu;
        // 0x28ae30: 0xdc570048  ld          $s7, 0x48($v0) (Delay Slot)
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE34u;
        goto label_28ae34;
    }
    ctx->pc = 0x28AE2Cu;
    SET_GPR_U32(ctx, 31, 0x28AE34u);
    ctx->pc = 0x28AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE2Cu;
    // 0x28ae30: 0xdc570048  ld          $s7, 0x48($v0) (Delay Slot)
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287DB0u, 0x28AE2Cu, 0x28AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE34u;
label_28ae34:
    // 0x28ae34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x28ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28ae38:
    // 0x28ae38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28ae38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28ae3c:
    // 0x28ae3c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28ae3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28ae40:
    // 0x28ae40: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28ae40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ae44:
    // 0x28ae44: 0xc0a2848  jal         func_28A120
label_28ae48:
    if (ctx->pc == 0x28AE48u) {
        ctx->pc = 0x28AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE44u;
        // 0x28ae48: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE4Cu;
        goto label_28ae4c;
    }
    ctx->pc = 0x28AE44u;
    SET_GPR_U32(ctx, 31, 0x28AE4Cu);
    ctx->pc = 0x28AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE44u;
    // 0x28ae48: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28AE44u, 0x28AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE4Cu;
label_28ae4c:
    // 0x28ae4c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x28ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_28ae50:
    // 0x28ae50: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x28ae50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_28ae54:
    // 0x28ae54: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_28ae58:
    if (ctx->pc == 0x28AE58u) {
        ctx->pc = 0x28AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE54u;
        // 0x28ae58: 0x1298c0  sll         $s3, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE5Cu;
        goto label_28ae5c;
    }
    ctx->pc = 0x28AE54u;
    {
        const bool branch_taken_0x28ae54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE54u;
        // 0x28ae58: 0x1298c0  sll         $s3, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae54) {
            ctx->pc = 0x28AF08u;
            goto label_28af08;
        }
    }
    ctx->pc = 0x28AE5Cu;
label_28ae5c:
    // 0x28ae5c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x28ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28ae60:
    // 0x28ae60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28ae64:
    // 0x28ae64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28ae64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ae68:
    // 0x28ae68: 0xc0a207c  jal         func_2881F0
label_28ae6c:
    if (ctx->pc == 0x28AE6Cu) {
        ctx->pc = 0x28AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE68u;
        // 0x28ae6c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE70u;
        goto label_28ae70;
    }
    ctx->pc = 0x28AE68u;
    SET_GPR_U32(ctx, 31, 0x28AE70u);
    ctx->pc = 0x28AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE68u;
    // 0x28ae6c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2881F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2881F0u, 0x28AE68u, 0x28AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE70u;
label_28ae70:
    // 0x28ae70: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28ae70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ae74:
    // 0x28ae74: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x28ae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28ae78:
    // 0x28ae78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28ae78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28ae7c:
    // 0x28ae7c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28ae7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28ae80:
    // 0x28ae80: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28ae80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ae84:
    // 0x28ae84: 0xc0a2848  jal         func_28A120
label_28ae88:
    if (ctx->pc == 0x28AE88u) {
        ctx->pc = 0x28AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE84u;
        // 0x28ae88: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE8Cu;
        goto label_28ae8c;
    }
    ctx->pc = 0x28AE84u;
    SET_GPR_U32(ctx, 31, 0x28AE8Cu);
    ctx->pc = 0x28AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE84u;
    // 0x28ae88: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28AE84u, 0x28AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE8Cu;
label_28ae8c:
    // 0x28ae8c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x28ae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_28ae90:
    // 0x28ae90: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x28ae90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_28ae94:
    // 0x28ae94: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_28ae98:
    if (ctx->pc == 0x28AE98u) {
        ctx->pc = 0x28AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE94u;
        // 0x28ae98: 0x1298c0  sll         $s3, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE9Cu;
        goto label_28ae9c;
    }
    ctx->pc = 0x28AE94u;
    {
        const bool branch_taken_0x28ae94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE94u;
        // 0x28ae98: 0x1298c0  sll         $s3, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae94) {
            ctx->pc = 0x28AF08u;
            goto label_28af08;
        }
    }
    ctx->pc = 0x28AE9Cu;
label_28ae9c:
    // 0x28ae9c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x28ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_28aea0:
    // 0x28aea0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28aea4:
    // 0x28aea4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28aea8:
    // 0x28aea8: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x28aea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_28aeac:
    // 0x28aeac: 0x3a24821  addu        $t1, $sp, $v0
    ctx->pc = 0x28aeacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_28aeb0:
    // 0x28aeb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28aeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28aeb4:
    // 0x28aeb4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x28aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_28aeb8:
    // 0x28aeb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28aeb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28aebc:
    // 0x28aebc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x28aebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28aec0:
    // 0x28aec0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x28aec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28aec4:
    // 0x28aec4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x28aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_28aec8:
    // 0x28aec8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28aec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28aecc:
    // 0x28aecc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28aed0:
    // 0x28aed0: 0xc0a1f6c  jal         func_287DB0
label_28aed4:
    if (ctx->pc == 0x28AED4u) {
        ctx->pc = 0x28AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AED0u;
        // 0x28aed4: 0x8d250000  lw          $a1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AED8u;
        goto label_28aed8;
    }
    ctx->pc = 0x28AED0u;
    SET_GPR_U32(ctx, 31, 0x28AED8u);
    ctx->pc = 0x28AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AED0u;
    // 0x28aed4: 0x8d250000  lw          $a1, 0x0($t1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287DB0u, 0x28AED0u, 0x28AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AED8u;
label_28aed8:
    // 0x28aed8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28aedc:
    // 0x28aedc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28aedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28aee0:
    // 0x28aee0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28aee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28aee4:
    // 0x28aee4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28aee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28aee8:
    // 0x28aee8: 0xc0a2848  jal         func_28A120
label_28aeec:
    if (ctx->pc == 0x28AEECu) {
        ctx->pc = 0x28AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEE8u;
        // 0x28aeec: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEF0u;
        goto label_28aef0;
    }
    ctx->pc = 0x28AEE8u;
    SET_GPR_U32(ctx, 31, 0x28AEF0u);
    ctx->pc = 0x28AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AEE8u;
    // 0x28aeec: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28AEE8u, 0x28AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEF0u;
label_28aef0:
    // 0x28aef0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x28aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_28aef4:
    // 0x28aef4: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x28aef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28aef8:
    // 0x28aef8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_28aefc:
    if (ctx->pc == 0x28AEFCu) {
        ctx->pc = 0x28AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEF8u;
        // 0x28aefc: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF00u;
        goto label_28af00;
    }
    ctx->pc = 0x28AEF8u;
    {
        const bool branch_taken_0x28aef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEF8u;
        // 0x28aefc: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aef8) {
            ctx->pc = 0x28AEA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28aea0;
        }
    }
    ctx->pc = 0x28AF00u;
label_28af00:
    // 0x28af00: 0x10000002  b           . + 4 + (0x2 << 2)
label_28af04:
    if (ctx->pc == 0x28AF04u) {
        ctx->pc = 0x28AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF00u;
        // 0x28af04: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF08u;
        goto label_28af08;
    }
    ctx->pc = 0x28AF00u;
    {
        const bool branch_taken_0x28af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF00u;
        // 0x28af04: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af00) {
            ctx->pc = 0x28AF0Cu;
            goto label_28af0c;
        }
    }
    ctx->pc = 0x28AF08u;
label_28af08:
    // 0x28af08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x28af08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28af0c:
    // 0x28af0c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28af0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28af10:
    // 0x28af10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28af10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28af14:
    // 0x28af14: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x28af14u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_28af18:
    // 0x28af18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28af1c:
    // 0x28af1c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x28af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_28af20:
    // 0x28af20: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x28af20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28af24:
    // 0x28af24: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x28af24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_28af28:
    // 0x28af28: 0x90700000  lbu         $s0, 0x0($v1)
    ctx->pc = 0x28af28u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_28af2c:
    // 0x28af2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28af30:
    // 0x28af30: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x28af30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_28af34:
    // 0x28af34: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x28af34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_28af38:
    // 0x28af38: 0xc049c48  jal         func_127120
label_28af3c:
    if (ctx->pc == 0x28AF3Cu) {
        ctx->pc = 0x28AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF38u;
        // 0x28af3c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF40u;
        goto label_28af40;
    }
    ctx->pc = 0x28AF38u;
    SET_GPR_U32(ctx, 31, 0x28AF40u);
    ctx->pc = 0x28AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF38u;
    // 0x28af3c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x28AF38u, 0x28AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF40u;
label_28af40:
    // 0x28af40: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
label_28af44:
    if (ctx->pc == 0x28AF44u) {
        ctx->pc = 0x28AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF40u;
        // 0x28af44: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF48u;
        goto label_28af48;
    }
    ctx->pc = 0x28AF40u;
    {
        const bool branch_taken_0x28af40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF40u;
        // 0x28af44: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af40) {
            ctx->pc = 0x28B080u;
            goto label_28b080;
        }
    }
    ctx->pc = 0x28AF48u;
label_28af48:
    // 0x28af48: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_28af4c:
    if (ctx->pc == 0x28AF4Cu) {
        ctx->pc = 0x28AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF48u;
        // 0x28af4c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF50u;
        goto label_28af50;
    }
    ctx->pc = 0x28AF48u;
    {
        const bool branch_taken_0x28af48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF48u;
        // 0x28af4c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af48) {
            ctx->pc = 0x28AF90u;
            goto label_28af90;
        }
    }
    ctx->pc = 0x28AF50u;
label_28af50:
    // 0x28af50: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28af50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28af54:
    // 0x28af54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28af54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28af58:
    // 0x28af58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28af58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28af5c:
    // 0x28af5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28af5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28af60:
    // 0x28af60: 0xc0a207c  jal         func_2881F0
label_28af64:
    if (ctx->pc == 0x28AF64u) {
        ctx->pc = 0x28AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF60u;
        // 0x28af64: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF68u;
        goto label_28af68;
    }
    ctx->pc = 0x28AF60u;
    SET_GPR_U32(ctx, 31, 0x28AF68u);
    ctx->pc = 0x28AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF60u;
    // 0x28af64: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2881F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2881F0u, 0x28AF60u, 0x28AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF68u;
label_28af68:
    // 0x28af68: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28af68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_28af6c:
    // 0x28af6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28af6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28af70:
    // 0x28af70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28af70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28af74:
    // 0x28af74: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28af74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28af78:
    // 0x28af78: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28af78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28af7c:
    // 0x28af7c: 0xc0a2848  jal         func_28A120
label_28af80:
    if (ctx->pc == 0x28AF80u) {
        ctx->pc = 0x28AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF7Cu;
        // 0x28af80: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF84u;
        goto label_28af84;
    }
    ctx->pc = 0x28AF7Cu;
    SET_GPR_U32(ctx, 31, 0x28AF84u);
    ctx->pc = 0x28AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF7Cu;
    // 0x28af80: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28AF7Cu, 0x28AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF84u;
label_28af84:
    // 0x28af84: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_28af88:
    if (ctx->pc == 0x28AF88u) {
        ctx->pc = 0x28AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF84u;
        // 0x28af88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF8Cu;
        goto label_28af8c;
    }
    ctx->pc = 0x28AF84u;
    {
        const bool branch_taken_0x28af84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF84u;
        // 0x28af88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af84) {
            ctx->pc = 0x28AF58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28af58;
        }
    }
    ctx->pc = 0x28AF8Cu;
label_28af8c:
    // 0x28af8c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28af90:
    // 0x28af90: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x28af90u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28af94:
    // 0x28af94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28af98:
    // 0x28af98: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28af98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_28af9c:
    // 0x28af9c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x28af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28afa0:
    // 0x28afa0: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x28afa0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28afa4:
    // 0x28afa4: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_28afa8:
    if (ctx->pc == 0x28AFA8u) {
        ctx->pc = 0x28AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFA4u;
        // 0x28afa8: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFACu;
        goto label_28afac;
    }
    ctx->pc = 0x28AFA4u;
    {
        const bool branch_taken_0x28afa4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFA4u;
        // 0x28afa8: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afa4) {
            ctx->pc = 0x28AFB4u;
            goto label_28afb4;
        }
    }
    ctx->pc = 0x28AFACu;
label_28afac:
    // 0x28afac: 0x52000034  beql        $s0, $zero, . + 4 + (0x34 << 2)
label_28afb0:
    if (ctx->pc == 0x28AFB0u) {
        ctx->pc = 0x28AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFACu;
        // 0x28afb0: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFB4u;
        goto label_28afb4;
    }
    ctx->pc = 0x28AFACu;
    {
        const bool branch_taken_0x28afac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28afac) {
            ctx->pc = 0x28AFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AFACu;
            // 0x28afb0: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B080u;
            goto label_28b080;
        }
    }
    ctx->pc = 0x28AFB4u;
label_28afb4:
    // 0x28afb4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_28afb8:
    if (ctx->pc == 0x28AFB8u) {
        ctx->pc = 0x28AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFB4u;
        // 0x28afb8: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFBCu;
        goto label_28afbc;
    }
    ctx->pc = 0x28AFB4u;
    {
        const bool branch_taken_0x28afb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFB4u;
        // 0x28afb8: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afb4) {
            ctx->pc = 0x28AFC8u;
            goto label_28afc8;
        }
    }
    ctx->pc = 0x28AFBCu;
label_28afbc:
    // 0x28afbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28afc0:
    // 0x28afc0: 0x10e2001d  beq         $a3, $v0, . + 4 + (0x1D << 2)
label_28afc4:
    if (ctx->pc == 0x28AFC4u) {
        ctx->pc = 0x28AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFC0u;
        // 0x28afc4: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFC8u;
        goto label_28afc8;
    }
    ctx->pc = 0x28AFC0u;
    {
        const bool branch_taken_0x28afc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x28AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFC0u;
        // 0x28afc4: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afc0) {
            ctx->pc = 0x28B038u;
            goto label_28b038;
        }
    }
    ctx->pc = 0x28AFC8u;
label_28afc8:
    // 0x28afc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28afc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28afcc:
    // 0x28afcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28afccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28afd0:
    // 0x28afd0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28afd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28afd4:
    // 0x28afd4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x28afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_28afd8:
    // 0x28afd8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28afd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28afdc:
    // 0x28afdc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x28afdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28afe0:
    // 0x28afe0: 0xc0a1f6c  jal         func_287DB0
label_28afe4:
    if (ctx->pc == 0x28AFE4u) {
        ctx->pc = 0x28AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFE0u;
        // 0x28afe4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFE8u;
        goto label_28afe8;
    }
    ctx->pc = 0x28AFE0u;
    SET_GPR_U32(ctx, 31, 0x28AFE8u);
    ctx->pc = 0x28AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFE0u;
    // 0x28afe4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287DB0u, 0x28AFE0u, 0x28AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFE8u;
label_28afe8:
    // 0x28afe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28afe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28afec:
    // 0x28afec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28afecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28aff0:
    // 0x28aff0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28aff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28aff4:
    // 0x28aff4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28aff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28aff8:
    // 0x28aff8: 0xc0a2848  jal         func_28A120
label_28affc:
    if (ctx->pc == 0x28AFFCu) {
        ctx->pc = 0x28AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFF8u;
        // 0x28affc: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B000u;
        goto label_28b000;
    }
    ctx->pc = 0x28AFF8u;
    SET_GPR_U32(ctx, 31, 0x28B000u);
    ctx->pc = 0x28AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFF8u;
    // 0x28affc: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28AFF8u, 0x28B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B000u;
label_28b000:
    // 0x28b000: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x28b000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_28b004:
    // 0x28b004: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_28b008:
    if (ctx->pc == 0x28B008u) {
        ctx->pc = 0x28B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B004u;
        // 0x28b008: 0x8fa60060  lw          $a2, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B00Cu;
        goto label_28b00c;
    }
    ctx->pc = 0x28B004u;
    {
        const bool branch_taken_0x28b004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B004u;
        // 0x28b008: 0x8fa60060  lw          $a2, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b004) {
            ctx->pc = 0x28B078u;
            goto label_28b078;
        }
    }
    ctx->pc = 0x28B00Cu;
label_28b00c:
    // 0x28b00c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x28b00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_28b010:
    // 0x28b010: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28b010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b014:
    // 0x28b014: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x28b014u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28b018:
    // 0x28b018: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28b018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_28b01c:
    // 0x28b01c: 0x40f809  jalr        $v0
label_28b020:
    if (ctx->pc == 0x28B020u) {
        ctx->pc = 0x28B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B01Cu;
        // 0x28b020: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B024u;
        goto label_28b024;
    }
    ctx->pc = 0x28B01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28B024u);
        ctx->pc = 0x28B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B01Cu;
        // 0x28b020: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B01Cu, 0x28B024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B024u;
label_28b024:
    // 0x28b024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28b024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b028:
    // 0x28b028: 0x1620002f  bnez        $s1, . + 4 + (0x2F << 2)
label_28b02c:
    if (ctx->pc == 0x28B02Cu) {
        ctx->pc = 0x28B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B028u;
        // 0x28b02c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B030u;
        goto label_28b030;
    }
    ctx->pc = 0x28B028u;
    {
        const bool branch_taken_0x28b028 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B028u;
        // 0x28b02c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b028) {
            ctx->pc = 0x28B0E8u;
            goto label_28b0e8;
        }
    }
    ctx->pc = 0x28B030u;
label_28b030:
    // 0x28b030: 0x10000011  b           . + 4 + (0x11 << 2)
label_28b034:
    if (ctx->pc == 0x28B034u) {
        ctx->pc = 0x28B038u;
        goto label_28b038;
    }
    ctx->pc = 0x28B030u;
    {
        const bool branch_taken_0x28b030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b030) {
            ctx->pc = 0x28B078u;
            goto label_28b078;
        }
    }
    ctx->pc = 0x28B038u;
label_28b038:
    // 0x28b038: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x28b038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_28b03c:
    // 0x28b03c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28b03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b040:
    // 0x28b040: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28b040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b044:
    // 0x28b044: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x28b044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b048:
    // 0x28b048: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x28b048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b04c:
    // 0x28b04c: 0xc0a1f6c  jal         func_287DB0
label_28b050:
    if (ctx->pc == 0x28B050u) {
        ctx->pc = 0x28B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B04Cu;
        // 0x28b050: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B054u;
        goto label_28b054;
    }
    ctx->pc = 0x28B04Cu;
    SET_GPR_U32(ctx, 31, 0x28B054u);
    ctx->pc = 0x28B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B04Cu;
    // 0x28b050: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287DB0u, 0x28B04Cu, 0x28B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B054u;
label_28b054:
    // 0x28b054: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x28b054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28b058:
    // 0x28b058: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28b058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28b05c:
    // 0x28b05c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x28b05cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28b060:
    // 0x28b060: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28b060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b064:
    // 0x28b064: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x28b064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28b068:
    // 0x28b068: 0xc0a2848  jal         func_28A120
label_28b06c:
    if (ctx->pc == 0x28B06Cu) {
        ctx->pc = 0x28B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B068u;
        // 0x28b06c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B070u;
        goto label_28b070;
    }
    ctx->pc = 0x28B068u;
    SET_GPR_U32(ctx, 31, 0x28B070u);
    ctx->pc = 0x28B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B068u;
    // 0x28b06c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28B068u, 0x28B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B070u;
label_28b070:
    // 0x28b070: 0x10000018  b           . + 4 + (0x18 << 2)
label_28b074:
    if (ctx->pc == 0x28B074u) {
        ctx->pc = 0x28B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B070u;
        // 0x28b074: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B078u;
        goto label_28b078;
    }
    ctx->pc = 0x28B070u;
    {
        const bool branch_taken_0x28b070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B070u;
        // 0x28b074: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b070) {
            ctx->pc = 0x28B0D4u;
            goto label_28b0d4;
        }
    }
    ctx->pc = 0x28B078u;
label_28b078:
    // 0x28b078: 0x1600ffb3  bnez        $s0, . + 4 + (-0x4D << 2)
label_28b07c:
    if (ctx->pc == 0x28B07Cu) {
        ctx->pc = 0x28B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B078u;
        // 0x28b07c: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B080u;
        goto label_28b080;
    }
    ctx->pc = 0x28B078u;
    {
        const bool branch_taken_0x28b078 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B078u;
        // 0x28b07c: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b078) {
            ctx->pc = 0x28AF48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28af48;
        }
    }
    ctx->pc = 0x28B080u;
label_28b080:
    // 0x28b080: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x28b080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28b084:
    // 0x28b084: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_28b088:
    if (ctx->pc == 0x28B088u) {
        ctx->pc = 0x28B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B084u;
        // 0x28b088: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B08Cu;
        goto label_28b08c;
    }
    ctx->pc = 0x28B084u;
    {
        const bool branch_taken_0x28b084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B084u;
        // 0x28b088: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b084) {
            ctx->pc = 0x28B0B4u;
            goto label_28b0b4;
        }
    }
    ctx->pc = 0x28B08Cu;
label_28b08c:
    // 0x28b08c: 0x728823  subu        $s1, $v1, $s2
    ctx->pc = 0x28b08cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_28b090:
    // 0x28b090: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x28b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_28b094:
    // 0x28b094: 0x0  nop
    ctx->pc = 0x28b094u;
    // NOP
label_28b098:
    // 0x28b098: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x28b098u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_28b09c:
    // 0x28b09c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28b09cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_28b0a0:
    // 0x28b0a0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x28b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28b0a4:
    // 0x28b0a4: 0x0  nop
    ctx->pc = 0x28b0a4u;
    // NOP
label_28b0a8:
    // 0x28b0a8: 0x0  nop
    ctx->pc = 0x28b0a8u;
    // NOP
label_28b0ac:
    // 0x28b0ac: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_28b0b0:
    if (ctx->pc == 0x28B0B0u) {
        ctx->pc = 0x28B0B4u;
        goto label_28b0b4;
    }
    ctx->pc = 0x28B0ACu;
    {
        const bool branch_taken_0x28b0ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b0ac) {
            ctx->pc = 0x28B098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b098;
        }
    }
    ctx->pc = 0x28B0B4u;
label_28b0b4:
    // 0x28b0b4: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x28b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28b0b8:
    // 0x28b0b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28b0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b0bc:
    // 0x28b0bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28b0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28b0c0:
    // 0x28b0c0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x28b0c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28b0c4:
    // 0x28b0c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28b0c8:
    // 0x28b0c8: 0xc0a2848  jal         func_28A120
label_28b0cc:
    if (ctx->pc == 0x28B0CCu) {
        ctx->pc = 0x28B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0C8u;
        // 0x28b0cc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0D0u;
        goto label_28b0d0;
    }
    ctx->pc = 0x28B0C8u;
    SET_GPR_U32(ctx, 31, 0x28B0D0u);
    ctx->pc = 0x28B0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B0C8u;
    // 0x28b0cc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A120u, 0x28B0C8u, 0x28B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B0D0u;
label_28b0d0:
    // 0x28b0d0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x28b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28b0d4:
    // 0x28b0d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28b0d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b0d8:
    // 0x28b0d8: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x28b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_28b0dc:
    // 0x28b0dc: 0xc0a1a72  jal         func_2869C8
label_28b0e0:
    if (ctx->pc == 0x28B0E0u) {
        ctx->pc = 0x28B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0DCu;
        // 0x28b0e0: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0E4u;
        goto label_28b0e4;
    }
    ctx->pc = 0x28B0DCu;
    SET_GPR_U32(ctx, 31, 0x28B0E4u);
    ctx->pc = 0x28B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B0DCu;
    // 0x28b0e0: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2869C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2869C8u, 0x28B0DCu, 0x28B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B0E4u;
label_28b0e4:
    // 0x28b0e4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x28b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_28b0e8:
    // 0x28b0e8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_28b0ec:
    if (ctx->pc == 0x28B0ECu) {
        ctx->pc = 0x28B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0E8u;
        // 0x28b0ec: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0F0u;
        goto label_28b0f0;
    }
    ctx->pc = 0x28B0E8u;
    {
        const bool branch_taken_0x28b0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0E8u;
        // 0x28b0ec: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0e8) {
            ctx->pc = 0x28B108u;
            goto label_28b108;
        }
    }
    ctx->pc = 0x28B0F0u;
label_28b0f0:
    // 0x28b0f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b0f4:
    // 0x28b0f4: 0x40f809  jalr        $v0
label_28b0f8:
    if (ctx->pc == 0x28B0F8u) {
        ctx->pc = 0x28B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0F4u;
        // 0x28b0f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0FCu;
        goto label_28b0fc;
    }
    ctx->pc = 0x28B0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28B0FCu);
        ctx->pc = 0x28B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0F4u;
        // 0x28b0f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B0F4u, 0x28B0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B0FCu;
label_28b0fc:
    // 0x28b0fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28b0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b100:
    // 0x28b100: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_28b104:
    if (ctx->pc == 0x28B104u) {
        ctx->pc = 0x28B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B100u;
        // 0x28b104: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B108u;
        goto label_28b108;
    }
    ctx->pc = 0x28B100u;
    {
        const bool branch_taken_0x28b100 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B100u;
        // 0x28b104: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b100) {
            ctx->pc = 0x28B0E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b0e8;
        }
    }
    ctx->pc = 0x28B108u;
label_28b108:
    // 0x28b108: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x28b108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_28b10c:
    // 0x28b10c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x28b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28b110:
    // 0x28b110: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x28b110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_28b114:
    // 0x28b114: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28b114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28b118:
    // 0x28b118: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x28b118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_28b11c:
    // 0x28b11c: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x28b11cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_28b120:
    // 0x28b120: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x28b120u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_28b124:
    // 0x28b124: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x28b124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_28b128:
    // 0x28b128: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x28b128u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_28b12c:
    // 0x28b12c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x28b12cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_28b130:
    // 0x28b130: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x28b130u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_28b134:
    // 0x28b134: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x28b134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28b138:
    // 0x28b138: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x28b138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28b13c:
    // 0x28b13c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x28b13cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28b140:
    // 0x28b140: 0x3e00008  jr          $ra
label_28b144:
    if (ctx->pc == 0x28B144u) {
        ctx->pc = 0x28B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B140u;
        // 0x28b144: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B148u;
        goto label_fallthrough_0x28b140;
    }
    ctx->pc = 0x28B140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B140u;
        // 0x28b144: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28b140:
    ctx->pc = 0x28B148u;
}
