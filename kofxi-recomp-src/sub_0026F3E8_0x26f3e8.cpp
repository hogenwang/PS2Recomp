#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026F3E8
// Address: 0x26f3e8 - 0x26fae0
void sub_0026F3E8_0x26f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F3E8_0x26f3e8");
#endif

    switch (ctx->pc) {
        case 0x26f3e8u: goto label_26f3e8;
        case 0x26f3ecu: goto label_26f3ec;
        case 0x26f3f0u: goto label_26f3f0;
        case 0x26f3f4u: goto label_26f3f4;
        case 0x26f3f8u: goto label_26f3f8;
        case 0x26f3fcu: goto label_26f3fc;
        case 0x26f400u: goto label_26f400;
        case 0x26f404u: goto label_26f404;
        case 0x26f408u: goto label_26f408;
        case 0x26f40cu: goto label_26f40c;
        case 0x26f410u: goto label_26f410;
        case 0x26f414u: goto label_26f414;
        case 0x26f418u: goto label_26f418;
        case 0x26f41cu: goto label_26f41c;
        case 0x26f420u: goto label_26f420;
        case 0x26f424u: goto label_26f424;
        case 0x26f428u: goto label_26f428;
        case 0x26f42cu: goto label_26f42c;
        case 0x26f430u: goto label_26f430;
        case 0x26f434u: goto label_26f434;
        case 0x26f438u: goto label_26f438;
        case 0x26f43cu: goto label_26f43c;
        case 0x26f440u: goto label_26f440;
        case 0x26f444u: goto label_26f444;
        case 0x26f448u: goto label_26f448;
        case 0x26f44cu: goto label_26f44c;
        case 0x26f450u: goto label_26f450;
        case 0x26f454u: goto label_26f454;
        case 0x26f458u: goto label_26f458;
        case 0x26f45cu: goto label_26f45c;
        case 0x26f460u: goto label_26f460;
        case 0x26f464u: goto label_26f464;
        case 0x26f468u: goto label_26f468;
        case 0x26f46cu: goto label_26f46c;
        case 0x26f470u: goto label_26f470;
        case 0x26f474u: goto label_26f474;
        case 0x26f478u: goto label_26f478;
        case 0x26f47cu: goto label_26f47c;
        case 0x26f480u: goto label_26f480;
        case 0x26f484u: goto label_26f484;
        case 0x26f488u: goto label_26f488;
        case 0x26f48cu: goto label_26f48c;
        case 0x26f490u: goto label_26f490;
        case 0x26f494u: goto label_26f494;
        case 0x26f498u: goto label_26f498;
        case 0x26f49cu: goto label_26f49c;
        case 0x26f4a0u: goto label_26f4a0;
        case 0x26f4a4u: goto label_26f4a4;
        case 0x26f4a8u: goto label_26f4a8;
        case 0x26f4acu: goto label_26f4ac;
        case 0x26f4b0u: goto label_26f4b0;
        case 0x26f4b4u: goto label_26f4b4;
        case 0x26f4b8u: goto label_26f4b8;
        case 0x26f4bcu: goto label_26f4bc;
        case 0x26f4c0u: goto label_26f4c0;
        case 0x26f4c4u: goto label_26f4c4;
        case 0x26f4c8u: goto label_26f4c8;
        case 0x26f4ccu: goto label_26f4cc;
        case 0x26f4d0u: goto label_26f4d0;
        case 0x26f4d4u: goto label_26f4d4;
        case 0x26f4d8u: goto label_26f4d8;
        case 0x26f4dcu: goto label_26f4dc;
        case 0x26f4e0u: goto label_26f4e0;
        case 0x26f4e4u: goto label_26f4e4;
        case 0x26f4e8u: goto label_26f4e8;
        case 0x26f4ecu: goto label_26f4ec;
        case 0x26f4f0u: goto label_26f4f0;
        case 0x26f4f4u: goto label_26f4f4;
        case 0x26f4f8u: goto label_26f4f8;
        case 0x26f4fcu: goto label_26f4fc;
        case 0x26f500u: goto label_26f500;
        case 0x26f504u: goto label_26f504;
        case 0x26f508u: goto label_26f508;
        case 0x26f50cu: goto label_26f50c;
        case 0x26f510u: goto label_26f510;
        case 0x26f514u: goto label_26f514;
        case 0x26f518u: goto label_26f518;
        case 0x26f51cu: goto label_26f51c;
        case 0x26f520u: goto label_26f520;
        case 0x26f524u: goto label_26f524;
        case 0x26f528u: goto label_26f528;
        case 0x26f52cu: goto label_26f52c;
        case 0x26f530u: goto label_26f530;
        case 0x26f534u: goto label_26f534;
        case 0x26f538u: goto label_26f538;
        case 0x26f53cu: goto label_26f53c;
        case 0x26f540u: goto label_26f540;
        case 0x26f544u: goto label_26f544;
        case 0x26f548u: goto label_26f548;
        case 0x26f54cu: goto label_26f54c;
        case 0x26f550u: goto label_26f550;
        case 0x26f554u: goto label_26f554;
        case 0x26f558u: goto label_26f558;
        case 0x26f55cu: goto label_26f55c;
        case 0x26f560u: goto label_26f560;
        case 0x26f564u: goto label_26f564;
        case 0x26f568u: goto label_26f568;
        case 0x26f56cu: goto label_26f56c;
        case 0x26f570u: goto label_26f570;
        case 0x26f574u: goto label_26f574;
        case 0x26f578u: goto label_26f578;
        case 0x26f57cu: goto label_26f57c;
        case 0x26f580u: goto label_26f580;
        case 0x26f584u: goto label_26f584;
        case 0x26f588u: goto label_26f588;
        case 0x26f58cu: goto label_26f58c;
        case 0x26f590u: goto label_26f590;
        case 0x26f594u: goto label_26f594;
        case 0x26f598u: goto label_26f598;
        case 0x26f59cu: goto label_26f59c;
        case 0x26f5a0u: goto label_26f5a0;
        case 0x26f5a4u: goto label_26f5a4;
        case 0x26f5a8u: goto label_26f5a8;
        case 0x26f5acu: goto label_26f5ac;
        case 0x26f5b0u: goto label_26f5b0;
        case 0x26f5b4u: goto label_26f5b4;
        case 0x26f5b8u: goto label_26f5b8;
        case 0x26f5bcu: goto label_26f5bc;
        case 0x26f5c0u: goto label_26f5c0;
        case 0x26f5c4u: goto label_26f5c4;
        case 0x26f5c8u: goto label_26f5c8;
        case 0x26f5ccu: goto label_26f5cc;
        case 0x26f5d0u: goto label_26f5d0;
        case 0x26f5d4u: goto label_26f5d4;
        case 0x26f5d8u: goto label_26f5d8;
        case 0x26f5dcu: goto label_26f5dc;
        case 0x26f5e0u: goto label_26f5e0;
        case 0x26f5e4u: goto label_26f5e4;
        case 0x26f5e8u: goto label_26f5e8;
        case 0x26f5ecu: goto label_26f5ec;
        case 0x26f5f0u: goto label_26f5f0;
        case 0x26f5f4u: goto label_26f5f4;
        case 0x26f5f8u: goto label_26f5f8;
        case 0x26f5fcu: goto label_26f5fc;
        case 0x26f600u: goto label_26f600;
        case 0x26f604u: goto label_26f604;
        case 0x26f608u: goto label_26f608;
        case 0x26f60cu: goto label_26f60c;
        case 0x26f610u: goto label_26f610;
        case 0x26f614u: goto label_26f614;
        case 0x26f618u: goto label_26f618;
        case 0x26f61cu: goto label_26f61c;
        case 0x26f620u: goto label_26f620;
        case 0x26f624u: goto label_26f624;
        case 0x26f628u: goto label_26f628;
        case 0x26f62cu: goto label_26f62c;
        case 0x26f630u: goto label_26f630;
        case 0x26f634u: goto label_26f634;
        case 0x26f638u: goto label_26f638;
        case 0x26f63cu: goto label_26f63c;
        case 0x26f640u: goto label_26f640;
        case 0x26f644u: goto label_26f644;
        case 0x26f648u: goto label_26f648;
        case 0x26f64cu: goto label_26f64c;
        case 0x26f650u: goto label_26f650;
        case 0x26f654u: goto label_26f654;
        case 0x26f658u: goto label_26f658;
        case 0x26f65cu: goto label_26f65c;
        case 0x26f660u: goto label_26f660;
        case 0x26f664u: goto label_26f664;
        case 0x26f668u: goto label_26f668;
        case 0x26f66cu: goto label_26f66c;
        case 0x26f670u: goto label_26f670;
        case 0x26f674u: goto label_26f674;
        case 0x26f678u: goto label_26f678;
        case 0x26f67cu: goto label_26f67c;
        case 0x26f680u: goto label_26f680;
        case 0x26f684u: goto label_26f684;
        case 0x26f688u: goto label_26f688;
        case 0x26f68cu: goto label_26f68c;
        case 0x26f690u: goto label_26f690;
        case 0x26f694u: goto label_26f694;
        case 0x26f698u: goto label_26f698;
        case 0x26f69cu: goto label_26f69c;
        case 0x26f6a0u: goto label_26f6a0;
        case 0x26f6a4u: goto label_26f6a4;
        case 0x26f6a8u: goto label_26f6a8;
        case 0x26f6acu: goto label_26f6ac;
        case 0x26f6b0u: goto label_26f6b0;
        case 0x26f6b4u: goto label_26f6b4;
        case 0x26f6b8u: goto label_26f6b8;
        case 0x26f6bcu: goto label_26f6bc;
        case 0x26f6c0u: goto label_26f6c0;
        case 0x26f6c4u: goto label_26f6c4;
        case 0x26f6c8u: goto label_26f6c8;
        case 0x26f6ccu: goto label_26f6cc;
        case 0x26f6d0u: goto label_26f6d0;
        case 0x26f6d4u: goto label_26f6d4;
        case 0x26f6d8u: goto label_26f6d8;
        case 0x26f6dcu: goto label_26f6dc;
        case 0x26f6e0u: goto label_26f6e0;
        case 0x26f6e4u: goto label_26f6e4;
        case 0x26f6e8u: goto label_26f6e8;
        case 0x26f6ecu: goto label_26f6ec;
        case 0x26f6f0u: goto label_26f6f0;
        case 0x26f6f4u: goto label_26f6f4;
        case 0x26f6f8u: goto label_26f6f8;
        case 0x26f6fcu: goto label_26f6fc;
        case 0x26f700u: goto label_26f700;
        case 0x26f704u: goto label_26f704;
        case 0x26f708u: goto label_26f708;
        case 0x26f70cu: goto label_26f70c;
        case 0x26f710u: goto label_26f710;
        case 0x26f714u: goto label_26f714;
        case 0x26f718u: goto label_26f718;
        case 0x26f71cu: goto label_26f71c;
        case 0x26f720u: goto label_26f720;
        case 0x26f724u: goto label_26f724;
        case 0x26f728u: goto label_26f728;
        case 0x26f72cu: goto label_26f72c;
        case 0x26f730u: goto label_26f730;
        case 0x26f734u: goto label_26f734;
        case 0x26f738u: goto label_26f738;
        case 0x26f73cu: goto label_26f73c;
        case 0x26f740u: goto label_26f740;
        case 0x26f744u: goto label_26f744;
        case 0x26f748u: goto label_26f748;
        case 0x26f74cu: goto label_26f74c;
        case 0x26f750u: goto label_26f750;
        case 0x26f754u: goto label_26f754;
        case 0x26f758u: goto label_26f758;
        case 0x26f75cu: goto label_26f75c;
        case 0x26f760u: goto label_26f760;
        case 0x26f764u: goto label_26f764;
        case 0x26f768u: goto label_26f768;
        case 0x26f76cu: goto label_26f76c;
        case 0x26f770u: goto label_26f770;
        case 0x26f774u: goto label_26f774;
        case 0x26f778u: goto label_26f778;
        case 0x26f77cu: goto label_26f77c;
        case 0x26f780u: goto label_26f780;
        case 0x26f784u: goto label_26f784;
        case 0x26f788u: goto label_26f788;
        case 0x26f78cu: goto label_26f78c;
        case 0x26f790u: goto label_26f790;
        case 0x26f794u: goto label_26f794;
        case 0x26f798u: goto label_26f798;
        case 0x26f79cu: goto label_26f79c;
        case 0x26f7a0u: goto label_26f7a0;
        case 0x26f7a4u: goto label_26f7a4;
        case 0x26f7a8u: goto label_26f7a8;
        case 0x26f7acu: goto label_26f7ac;
        case 0x26f7b0u: goto label_26f7b0;
        case 0x26f7b4u: goto label_26f7b4;
        case 0x26f7b8u: goto label_26f7b8;
        case 0x26f7bcu: goto label_26f7bc;
        case 0x26f7c0u: goto label_26f7c0;
        case 0x26f7c4u: goto label_26f7c4;
        case 0x26f7c8u: goto label_26f7c8;
        case 0x26f7ccu: goto label_26f7cc;
        case 0x26f7d0u: goto label_26f7d0;
        case 0x26f7d4u: goto label_26f7d4;
        case 0x26f7d8u: goto label_26f7d8;
        case 0x26f7dcu: goto label_26f7dc;
        case 0x26f7e0u: goto label_26f7e0;
        case 0x26f7e4u: goto label_26f7e4;
        case 0x26f7e8u: goto label_26f7e8;
        case 0x26f7ecu: goto label_26f7ec;
        case 0x26f7f0u: goto label_26f7f0;
        case 0x26f7f4u: goto label_26f7f4;
        case 0x26f7f8u: goto label_26f7f8;
        case 0x26f7fcu: goto label_26f7fc;
        case 0x26f800u: goto label_26f800;
        case 0x26f804u: goto label_26f804;
        case 0x26f808u: goto label_26f808;
        case 0x26f80cu: goto label_26f80c;
        case 0x26f810u: goto label_26f810;
        case 0x26f814u: goto label_26f814;
        case 0x26f818u: goto label_26f818;
        case 0x26f81cu: goto label_26f81c;
        case 0x26f820u: goto label_26f820;
        case 0x26f824u: goto label_26f824;
        case 0x26f828u: goto label_26f828;
        case 0x26f82cu: goto label_26f82c;
        case 0x26f830u: goto label_26f830;
        case 0x26f834u: goto label_26f834;
        case 0x26f838u: goto label_26f838;
        case 0x26f83cu: goto label_26f83c;
        case 0x26f840u: goto label_26f840;
        case 0x26f844u: goto label_26f844;
        case 0x26f848u: goto label_26f848;
        case 0x26f84cu: goto label_26f84c;
        case 0x26f850u: goto label_26f850;
        case 0x26f854u: goto label_26f854;
        case 0x26f858u: goto label_26f858;
        case 0x26f85cu: goto label_26f85c;
        case 0x26f860u: goto label_26f860;
        case 0x26f864u: goto label_26f864;
        case 0x26f868u: goto label_26f868;
        case 0x26f86cu: goto label_26f86c;
        case 0x26f870u: goto label_26f870;
        case 0x26f874u: goto label_26f874;
        case 0x26f878u: goto label_26f878;
        case 0x26f87cu: goto label_26f87c;
        case 0x26f880u: goto label_26f880;
        case 0x26f884u: goto label_26f884;
        case 0x26f888u: goto label_26f888;
        case 0x26f88cu: goto label_26f88c;
        case 0x26f890u: goto label_26f890;
        case 0x26f894u: goto label_26f894;
        case 0x26f898u: goto label_26f898;
        case 0x26f89cu: goto label_26f89c;
        case 0x26f8a0u: goto label_26f8a0;
        case 0x26f8a4u: goto label_26f8a4;
        case 0x26f8a8u: goto label_26f8a8;
        case 0x26f8acu: goto label_26f8ac;
        case 0x26f8b0u: goto label_26f8b0;
        case 0x26f8b4u: goto label_26f8b4;
        case 0x26f8b8u: goto label_26f8b8;
        case 0x26f8bcu: goto label_26f8bc;
        case 0x26f8c0u: goto label_26f8c0;
        case 0x26f8c4u: goto label_26f8c4;
        case 0x26f8c8u: goto label_26f8c8;
        case 0x26f8ccu: goto label_26f8cc;
        case 0x26f8d0u: goto label_26f8d0;
        case 0x26f8d4u: goto label_26f8d4;
        case 0x26f8d8u: goto label_26f8d8;
        case 0x26f8dcu: goto label_26f8dc;
        case 0x26f8e0u: goto label_26f8e0;
        case 0x26f8e4u: goto label_26f8e4;
        case 0x26f8e8u: goto label_26f8e8;
        case 0x26f8ecu: goto label_26f8ec;
        case 0x26f8f0u: goto label_26f8f0;
        case 0x26f8f4u: goto label_26f8f4;
        case 0x26f8f8u: goto label_26f8f8;
        case 0x26f8fcu: goto label_26f8fc;
        case 0x26f900u: goto label_26f900;
        case 0x26f904u: goto label_26f904;
        case 0x26f908u: goto label_26f908;
        case 0x26f90cu: goto label_26f90c;
        case 0x26f910u: goto label_26f910;
        case 0x26f914u: goto label_26f914;
        case 0x26f918u: goto label_26f918;
        case 0x26f91cu: goto label_26f91c;
        case 0x26f920u: goto label_26f920;
        case 0x26f924u: goto label_26f924;
        case 0x26f928u: goto label_26f928;
        case 0x26f92cu: goto label_26f92c;
        case 0x26f930u: goto label_26f930;
        case 0x26f934u: goto label_26f934;
        case 0x26f938u: goto label_26f938;
        case 0x26f93cu: goto label_26f93c;
        case 0x26f940u: goto label_26f940;
        case 0x26f944u: goto label_26f944;
        case 0x26f948u: goto label_26f948;
        case 0x26f94cu: goto label_26f94c;
        case 0x26f950u: goto label_26f950;
        case 0x26f954u: goto label_26f954;
        case 0x26f958u: goto label_26f958;
        case 0x26f95cu: goto label_26f95c;
        case 0x26f960u: goto label_26f960;
        case 0x26f964u: goto label_26f964;
        case 0x26f968u: goto label_26f968;
        case 0x26f96cu: goto label_26f96c;
        case 0x26f970u: goto label_26f970;
        case 0x26f974u: goto label_26f974;
        case 0x26f978u: goto label_26f978;
        case 0x26f97cu: goto label_26f97c;
        case 0x26f980u: goto label_26f980;
        case 0x26f984u: goto label_26f984;
        case 0x26f988u: goto label_26f988;
        case 0x26f98cu: goto label_26f98c;
        case 0x26f990u: goto label_26f990;
        case 0x26f994u: goto label_26f994;
        case 0x26f998u: goto label_26f998;
        case 0x26f99cu: goto label_26f99c;
        case 0x26f9a0u: goto label_26f9a0;
        case 0x26f9a4u: goto label_26f9a4;
        case 0x26f9a8u: goto label_26f9a8;
        case 0x26f9acu: goto label_26f9ac;
        case 0x26f9b0u: goto label_26f9b0;
        case 0x26f9b4u: goto label_26f9b4;
        case 0x26f9b8u: goto label_26f9b8;
        case 0x26f9bcu: goto label_26f9bc;
        case 0x26f9c0u: goto label_26f9c0;
        case 0x26f9c4u: goto label_26f9c4;
        case 0x26f9c8u: goto label_26f9c8;
        case 0x26f9ccu: goto label_26f9cc;
        case 0x26f9d0u: goto label_26f9d0;
        case 0x26f9d4u: goto label_26f9d4;
        case 0x26f9d8u: goto label_26f9d8;
        case 0x26f9dcu: goto label_26f9dc;
        case 0x26f9e0u: goto label_26f9e0;
        case 0x26f9e4u: goto label_26f9e4;
        case 0x26f9e8u: goto label_26f9e8;
        case 0x26f9ecu: goto label_26f9ec;
        case 0x26f9f0u: goto label_26f9f0;
        case 0x26f9f4u: goto label_26f9f4;
        case 0x26f9f8u: goto label_26f9f8;
        case 0x26f9fcu: goto label_26f9fc;
        case 0x26fa00u: goto label_26fa00;
        case 0x26fa04u: goto label_26fa04;
        case 0x26fa08u: goto label_26fa08;
        case 0x26fa0cu: goto label_26fa0c;
        case 0x26fa10u: goto label_26fa10;
        case 0x26fa14u: goto label_26fa14;
        case 0x26fa18u: goto label_26fa18;
        case 0x26fa1cu: goto label_26fa1c;
        case 0x26fa20u: goto label_26fa20;
        case 0x26fa24u: goto label_26fa24;
        case 0x26fa28u: goto label_26fa28;
        case 0x26fa2cu: goto label_26fa2c;
        case 0x26fa30u: goto label_26fa30;
        case 0x26fa34u: goto label_26fa34;
        case 0x26fa38u: goto label_26fa38;
        case 0x26fa3cu: goto label_26fa3c;
        case 0x26fa40u: goto label_26fa40;
        case 0x26fa44u: goto label_26fa44;
        case 0x26fa48u: goto label_26fa48;
        case 0x26fa4cu: goto label_26fa4c;
        case 0x26fa50u: goto label_26fa50;
        case 0x26fa54u: goto label_26fa54;
        case 0x26fa58u: goto label_26fa58;
        case 0x26fa5cu: goto label_26fa5c;
        case 0x26fa60u: goto label_26fa60;
        case 0x26fa64u: goto label_26fa64;
        case 0x26fa68u: goto label_26fa68;
        case 0x26fa6cu: goto label_26fa6c;
        case 0x26fa70u: goto label_26fa70;
        case 0x26fa74u: goto label_26fa74;
        case 0x26fa78u: goto label_26fa78;
        case 0x26fa7cu: goto label_26fa7c;
        case 0x26fa80u: goto label_26fa80;
        case 0x26fa84u: goto label_26fa84;
        case 0x26fa88u: goto label_26fa88;
        case 0x26fa8cu: goto label_26fa8c;
        case 0x26fa90u: goto label_26fa90;
        case 0x26fa94u: goto label_26fa94;
        case 0x26fa98u: goto label_26fa98;
        case 0x26fa9cu: goto label_26fa9c;
        case 0x26faa0u: goto label_26faa0;
        case 0x26faa4u: goto label_26faa4;
        case 0x26faa8u: goto label_26faa8;
        case 0x26faacu: goto label_26faac;
        case 0x26fab0u: goto label_26fab0;
        case 0x26fab4u: goto label_26fab4;
        case 0x26fab8u: goto label_26fab8;
        case 0x26fabcu: goto label_26fabc;
        case 0x26fac0u: goto label_26fac0;
        case 0x26fac4u: goto label_26fac4;
        case 0x26fac8u: goto label_26fac8;
        case 0x26faccu: goto label_26facc;
        case 0x26fad0u: goto label_26fad0;
        case 0x26fad4u: goto label_26fad4;
        case 0x26fad8u: goto label_26fad8;
        case 0x26fadcu: goto label_26fadc;
        default: break;
    }

    ctx->pc = 0x26f3e8u;

label_26f3e8:
    // 0x26f3e8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x26f3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_26f3ec:
    // 0x26f3ec: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x26f3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_26f3f0:
    // 0x26f3f0: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x26f3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_26f3f4:
    // 0x26f3f4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x26f3f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_26f3f8:
    // 0x26f3f8: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x26f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_26f3fc:
    // 0x26f3fc: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x26f3fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26f400:
    // 0x26f400: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x26f400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_26f404:
    // 0x26f404: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x26f404u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26f408:
    // 0x26f408: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x26f408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_26f40c:
    // 0x26f40c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26f40cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f410:
    // 0x26f410: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x26f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_26f414:
    // 0x26f414: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x26f414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_26f418:
    // 0x26f418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26f418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26f41c:
    // 0x26f41c: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x26f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
label_26f420:
    // 0x26f420: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26f420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26f424:
    // 0x26f424: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x26f424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_26f428:
    // 0x26f428: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26f428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26f42c:
    // 0x26f42c: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x26f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_26f430:
    // 0x26f430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f434:
    // 0x26f434: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x26f434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_26f438:
    // 0x26f438: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x26f438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_26f43c:
    // 0x26f43c: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x26f43cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_26f440:
    // 0x26f440: 0xc0973ba  jal         func_25CEE8
label_26f444:
    if (ctx->pc == 0x26F444u) {
        ctx->pc = 0x26F444u;
            // 0x26f444: 0xafa70048  sw          $a3, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
        ctx->pc = 0x26F448u;
        goto label_26f448;
    }
    ctx->pc = 0x26F440u;
    SET_GPR_U32(ctx, 31, 0x26F448u);
    ctx->pc = 0x26F444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F440u;
            // 0x26f444: 0xafa70048  sw          $a3, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (runtime->hasFunction(0x25CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F448u; }
        if (ctx->pc != 0x26F448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEE8_0x25cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F448u; }
        if (ctx->pc != 0x26F448u) { return; }
    }
    ctx->pc = 0x26F448u;
label_26f448:
    // 0x26f448: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26f448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f44c:
    // 0x26f44c: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
label_26f450:
    if (ctx->pc == 0x26F450u) {
        ctx->pc = 0x26F450u;
            // 0x26f450: 0x26130004  addiu       $s3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x26F454u;
        goto label_26f454;
    }
    ctx->pc = 0x26F44Cu;
    {
        const bool branch_taken_0x26f44c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x26F450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F44Cu;
            // 0x26f450: 0x26130004  addiu       $s3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f44c) {
            ctx->pc = 0x26F474u;
            goto label_26f474;
        }
    }
    ctx->pc = 0x26F454u;
label_26f454:
    // 0x26f454: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26f454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26f458:
    // 0x26f458: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26f458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26f45c:
    // 0x26f45c: 0xc08b5ac  jal         func_22D6B0
label_26f460:
    if (ctx->pc == 0x26F460u) {
        ctx->pc = 0x26F460u;
            // 0x26f460: 0x24a59760  addiu       $a1, $a1, -0x68A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
        ctx->pc = 0x26F464u;
        goto label_26f464;
    }
    ctx->pc = 0x26F45Cu;
    SET_GPR_U32(ctx, 31, 0x26F464u);
    ctx->pc = 0x26F460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F45Cu;
            // 0x26f460: 0x24a59760  addiu       $a1, $a1, -0x68A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F464u; }
        if (ctx->pc != 0x26F464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F464u; }
        if (ctx->pc != 0x26F464u) { return; }
    }
    ctx->pc = 0x26F464u;
label_26f464:
    // 0x26f464: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x26f464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_26f468:
    // 0x26f468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26f46c:
    // 0x26f46c: 0x10000086  b           . + 4 + (0x86 << 2)
label_26f470:
    if (ctx->pc == 0x26F470u) {
        ctx->pc = 0x26F470u;
            // 0x26f470: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x26F474u;
        goto label_26f474;
    }
    ctx->pc = 0x26F46Cu;
    {
        const bool branch_taken_0x26f46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F46Cu;
            // 0x26f470: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f46c) {
            ctx->pc = 0x26F688u;
            goto label_26f688;
        }
    }
    ctx->pc = 0x26F474u;
label_26f474:
    // 0x26f474: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26f474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f478:
    // 0x26f478: 0xc099f30  jal         func_267CC0
label_26f47c:
    if (ctx->pc == 0x26F47Cu) {
        ctx->pc = 0x26F47Cu;
            // 0x26f47c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F480u;
        goto label_26f480;
    }
    ctx->pc = 0x26F478u;
    SET_GPR_U32(ctx, 31, 0x26F480u);
    ctx->pc = 0x26F47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F478u;
            // 0x26f47c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267CC0u;
    if (runtime->hasFunction(0x267CC0u)) {
        auto targetFn = runtime->lookupFunction(0x267CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F480u; }
        if (ctx->pc != 0x26F480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267CC0_0x267cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F480u; }
        if (ctx->pc != 0x26F480u) { return; }
    }
    ctx->pc = 0x26F480u;
label_26f480:
    // 0x26f480: 0x440006f  bltz        $v0, . + 4 + (0x6F << 2)
label_26f484:
    if (ctx->pc == 0x26F484u) {
        ctx->pc = 0x26F484u;
            // 0x26f484: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x26F488u;
        goto label_26f488;
    }
    ctx->pc = 0x26F480u;
    {
        const bool branch_taken_0x26f480 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26F484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F480u;
            // 0x26f484: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f480) {
            ctx->pc = 0x26F640u;
            goto label_26f640;
        }
    }
    ctx->pc = 0x26F488u;
label_26f488:
    // 0x26f488: 0xc09bb96  jal         func_26EE58
label_26f48c:
    if (ctx->pc == 0x26F48Cu) {
        ctx->pc = 0x26F48Cu;
            // 0x26f48c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F490u;
        goto label_26f490;
    }
    ctx->pc = 0x26F488u;
    SET_GPR_U32(ctx, 31, 0x26F490u);
    ctx->pc = 0x26F48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F488u;
            // 0x26f48c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EE58u;
    if (runtime->hasFunction(0x26EE58u)) {
        auto targetFn = runtime->lookupFunction(0x26EE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F490u; }
        if (ctx->pc != 0x26F490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026EE58_0x26ee58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F490u; }
        if (ctx->pc != 0x26F490u) { return; }
    }
    ctx->pc = 0x26F490u;
label_26f490:
    // 0x26f490: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_26f494:
    if (ctx->pc == 0x26F494u) {
        ctx->pc = 0x26F494u;
            // 0x26f494: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F498u;
        goto label_26f498;
    }
    ctx->pc = 0x26F490u;
    {
        const bool branch_taken_0x26f490 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26F494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F490u;
            // 0x26f494: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f490) {
            ctx->pc = 0x26F4A0u;
            goto label_26f4a0;
        }
    }
    ctx->pc = 0x26F498u;
label_26f498:
    // 0x26f498: 0x10000069  b           . + 4 + (0x69 << 2)
label_26f49c:
    if (ctx->pc == 0x26F49Cu) {
        ctx->pc = 0x26F49Cu;
            // 0x26f49c: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x26F4A0u;
        goto label_26f4a0;
    }
    ctx->pc = 0x26F498u;
    {
        const bool branch_taken_0x26f498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F498u;
            // 0x26f49c: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f498) {
            ctx->pc = 0x26F640u;
            goto label_26f640;
        }
    }
    ctx->pc = 0x26F4A0u;
label_26f4a0:
    // 0x26f4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f4a4:
    // 0x26f4a4: 0xc049cb6  jal         func_1272D8
label_26f4a8:
    if (ctx->pc == 0x26F4A8u) {
        ctx->pc = 0x26F4A8u;
            // 0x26f4a8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->pc = 0x26F4ACu;
        goto label_26f4ac;
    }
    ctx->pc = 0x26F4A4u;
    SET_GPR_U32(ctx, 31, 0x26F4ACu);
    ctx->pc = 0x26F4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4A4u;
            // 0x26f4a8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4ACu; }
        if (ctx->pc != 0x26F4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4ACu; }
        if (ctx->pc != 0x26F4ACu) { return; }
    }
    ctx->pc = 0x26F4ACu;
label_26f4ac:
    // 0x26f4ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_26f4b0:
    // 0x26f4b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26f4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26f4b4:
    // 0x26f4b4: 0x24779570  addiu       $s7, $v1, -0x6A90
    ctx->pc = 0x26f4b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940016));
label_26f4b8:
    // 0x26f4b8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26f4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_26f4bc:
    // 0x26f4bc: 0xc04a966  jal         func_12A598
label_26f4c0:
    if (ctx->pc == 0x26F4C0u) {
        ctx->pc = 0x26F4C0u;
            // 0x26f4c0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F4C4u;
        goto label_26f4c4;
    }
    ctx->pc = 0x26F4BCu;
    SET_GPR_U32(ctx, 31, 0x26F4C4u);
    ctx->pc = 0x26F4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4BCu;
            // 0x26f4c0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4C4u; }
        if (ctx->pc != 0x26F4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4C4u; }
        if (ctx->pc != 0x26F4C4u) { return; }
    }
    ctx->pc = 0x26F4C4u;
label_26f4c4:
    // 0x26f4c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26f4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26f4c8:
    // 0x26f4c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26f4cc:
    // 0x26f4cc: 0xc04a966  jal         func_12A598
label_26f4d0:
    if (ctx->pc == 0x26F4D0u) {
        ctx->pc = 0x26F4D0u;
            // 0x26f4d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x26F4D4u;
        goto label_26f4d4;
    }
    ctx->pc = 0x26F4CCu;
    SET_GPR_U32(ctx, 31, 0x26F4D4u);
    ctx->pc = 0x26F4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4CCu;
            // 0x26f4d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4D4u; }
        if (ctx->pc != 0x26F4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4D4u; }
        if (ctx->pc != 0x26F4D4u) { return; }
    }
    ctx->pc = 0x26F4D4u;
label_26f4d4:
    // 0x26f4d4: 0x92236b11  lbu         $v1, 0x6B11($s1)
    ctx->pc = 0x26f4d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27409)));
label_26f4d8:
    // 0x26f4d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_26f4dc:
    if (ctx->pc == 0x26F4DCu) {
        ctx->pc = 0x26F4DCu;
            // 0x26f4dc: 0x26226b11  addiu       $v0, $s1, 0x6B11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 27409));
        ctx->pc = 0x26F4E0u;
        goto label_26f4e0;
    }
    ctx->pc = 0x26F4D8u;
    {
        const bool branch_taken_0x26f4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4D8u;
            // 0x26f4dc: 0x26226b11  addiu       $v0, $s1, 0x6B11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 27409));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4d8) {
            ctx->pc = 0x26F4F0u;
            goto label_26f4f0;
        }
    }
    ctx->pc = 0x26F4E0u;
label_26f4e0:
    // 0x26f4e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26f4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f4e4:
    // 0x26f4e4: 0xc04a83e  jal         func_12A0F8
label_26f4e8:
    if (ctx->pc == 0x26F4E8u) {
        ctx->pc = 0x26F4E8u;
            // 0x26f4e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x26F4ECu;
        goto label_26f4ec;
    }
    ctx->pc = 0x26F4E4u;
    SET_GPR_U32(ctx, 31, 0x26F4ECu);
    ctx->pc = 0x26F4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4E4u;
            // 0x26f4e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4ECu; }
        if (ctx->pc != 0x26F4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4ECu; }
        if (ctx->pc != 0x26F4ECu) { return; }
    }
    ctx->pc = 0x26F4ECu;
label_26f4ec:
    // 0x26f4ec: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x26f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_26f4f0:
    // 0x26f4f0: 0x92226a11  lbu         $v0, 0x6A11($s1)
    ctx->pc = 0x26f4f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27153)));
label_26f4f4:
    // 0x26f4f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26f4f8:
    if (ctx->pc == 0x26F4F8u) {
        ctx->pc = 0x26F4F8u;
            // 0x26f4f8: 0x26226a11  addiu       $v0, $s1, 0x6A11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 27153));
        ctx->pc = 0x26F4FCu;
        goto label_26f4fc;
    }
    ctx->pc = 0x26F4F4u;
    {
        const bool branch_taken_0x26f4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4F4u;
            // 0x26f4f8: 0x26226a11  addiu       $v0, $s1, 0x6A11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 27153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4f4) {
            ctx->pc = 0x26F50Cu;
            goto label_26f50c;
        }
    }
    ctx->pc = 0x26F4FCu;
label_26f4fc:
    // 0x26f4fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26f4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f500:
    // 0x26f500: 0xc04a83e  jal         func_12A0F8
label_26f504:
    if (ctx->pc == 0x26F504u) {
        ctx->pc = 0x26F504u;
            // 0x26f504: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x26F508u;
        goto label_26f508;
    }
    ctx->pc = 0x26F500u;
    SET_GPR_U32(ctx, 31, 0x26F508u);
    ctx->pc = 0x26F504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F500u;
            // 0x26f504: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F508u; }
        if (ctx->pc != 0x26F508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F508u; }
        if (ctx->pc != 0x26F508u) { return; }
    }
    ctx->pc = 0x26F508u;
label_26f508:
    // 0x26f508: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x26f508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_26f50c:
    // 0x26f50c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f510:
    // 0x26f510: 0x34058034  ori         $a1, $zero, 0x8034
    ctx->pc = 0x26f510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32820);
label_26f514:
    // 0x26f514: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26f514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_26f518:
    // 0x26f518: 0x34a5696e  ori         $a1, $a1, 0x696E
    ctx->pc = 0x26f518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26990);
label_26f51c:
    // 0x26f51c: 0xc097bf2  jal         func_25EFC8
label_26f520:
    if (ctx->pc == 0x26F520u) {
        ctx->pc = 0x26F520u;
            // 0x26f520: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F524u;
        goto label_26f524;
    }
    ctx->pc = 0x26F51Cu;
    SET_GPR_U32(ctx, 31, 0x26F524u);
    ctx->pc = 0x26F520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F51Cu;
            // 0x26f520: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F524u; }
        if (ctx->pc != 0x26F524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F524u; }
        if (ctx->pc != 0x26F524u) { return; }
    }
    ctx->pc = 0x26F524u;
label_26f524:
    // 0x26f524: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_26f528:
    if (ctx->pc == 0x26F528u) {
        ctx->pc = 0x26F528u;
            // 0x26f528: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x26F52Cu;
        goto label_26f52c;
    }
    ctx->pc = 0x26F524u;
    {
        const bool branch_taken_0x26f524 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26f524) {
            ctx->pc = 0x26F528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F524u;
            // 0x26f528: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F544u;
            goto label_26f544;
        }
    }
    ctx->pc = 0x26F52Cu;
label_26f52c:
    // 0x26f52c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26f530:
    // 0x26f530: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26f534:
    // 0x26f534: 0xc08b5ac  jal         func_22D6B0
label_26f538:
    if (ctx->pc == 0x26F538u) {
        ctx->pc = 0x26F538u;
            // 0x26f538: 0x24a597a0  addiu       $a1, $a1, -0x6860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940576));
        ctx->pc = 0x26F53Cu;
        goto label_26f53c;
    }
    ctx->pc = 0x26F534u;
    SET_GPR_U32(ctx, 31, 0x26F53Cu);
    ctx->pc = 0x26F538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F534u;
            // 0x26f538: 0x24a597a0  addiu       $a1, $a1, -0x6860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F53Cu; }
        if (ctx->pc != 0x26F53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F53Cu; }
        if (ctx->pc != 0x26F53Cu) { return; }
    }
    ctx->pc = 0x26F53Cu;
label_26f53c:
    // 0x26f53c: 0x10000040  b           . + 4 + (0x40 << 2)
label_26f540:
    if (ctx->pc == 0x26F540u) {
        ctx->pc = 0x26F540u;
            // 0x26f540: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x26F544u;
        goto label_26f544;
    }
    ctx->pc = 0x26F53Cu;
    {
        const bool branch_taken_0x26f53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F53Cu;
            // 0x26f540: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f53c) {
            ctx->pc = 0x26F640u;
            goto label_26f640;
        }
    }
    ctx->pc = 0x26F544u;
label_26f544:
    // 0x26f544: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26f544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26f548:
    // 0x26f548: 0xc099d5a  jal         func_267568
label_26f54c:
    if (ctx->pc == 0x26F54Cu) {
        ctx->pc = 0x26F54Cu;
            // 0x26f54c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F550u;
        goto label_26f550;
    }
    ctx->pc = 0x26F548u;
    SET_GPR_U32(ctx, 31, 0x26F550u);
    ctx->pc = 0x26F54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F548u;
            // 0x26f54c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267568u;
    if (runtime->hasFunction(0x267568u)) {
        auto targetFn = runtime->lookupFunction(0x267568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F550u; }
        if (ctx->pc != 0x26F550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267568_0x267568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F550u; }
        if (ctx->pc != 0x26F550u) { return; }
    }
    ctx->pc = 0x26F550u;
label_26f550:
    // 0x26f550: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_26f554:
    if (ctx->pc == 0x26F554u) {
        ctx->pc = 0x26F554u;
            // 0x26f554: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26F558u;
        goto label_26f558;
    }
    ctx->pc = 0x26F550u;
    {
        const bool branch_taken_0x26f550 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26F554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F550u;
            // 0x26f554: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f550) {
            ctx->pc = 0x26F56Cu;
            goto label_26f56c;
        }
    }
    ctx->pc = 0x26F558u;
label_26f558:
    // 0x26f558: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26f558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26f55c:
    // 0x26f55c: 0xc08b5ac  jal         func_22D6B0
label_26f560:
    if (ctx->pc == 0x26F560u) {
        ctx->pc = 0x26F560u;
            // 0x26f560: 0x24a597e0  addiu       $a1, $a1, -0x6820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940640));
        ctx->pc = 0x26F564u;
        goto label_26f564;
    }
    ctx->pc = 0x26F55Cu;
    SET_GPR_U32(ctx, 31, 0x26F564u);
    ctx->pc = 0x26F560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F55Cu;
            // 0x26f560: 0x24a597e0  addiu       $a1, $a1, -0x6820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F564u; }
        if (ctx->pc != 0x26F564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F564u; }
        if (ctx->pc != 0x26F564u) { return; }
    }
    ctx->pc = 0x26F564u;
label_26f564:
    // 0x26f564: 0x10000036  b           . + 4 + (0x36 << 2)
label_26f568:
    if (ctx->pc == 0x26F568u) {
        ctx->pc = 0x26F568u;
            // 0x26f568: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x26F56Cu;
        goto label_26f56c;
    }
    ctx->pc = 0x26F564u;
    {
        const bool branch_taken_0x26f564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F564u;
            // 0x26f568: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f564) {
            ctx->pc = 0x26F640u;
            goto label_26f640;
        }
    }
    ctx->pc = 0x26F56Cu;
label_26f56c:
    // 0x26f56c: 0xc098552  jal         func_261548
label_26f570:
    if (ctx->pc == 0x26F570u) {
        ctx->pc = 0x26F570u;
            // 0x26f570: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x26F574u;
        goto label_26f574;
    }
    ctx->pc = 0x26F56Cu;
    SET_GPR_U32(ctx, 31, 0x26F574u);
    ctx->pc = 0x26F570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F56Cu;
            // 0x26f570: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F574u; }
        if (ctx->pc != 0x26F574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F574u; }
        if (ctx->pc != 0x26F574u) { return; }
    }
    ctx->pc = 0x26F574u;
label_26f574:
    // 0x26f574: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26f574u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f578:
    // 0x26f578: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
label_26f57c:
    if (ctx->pc == 0x26F57Cu) {
        ctx->pc = 0x26F57Cu;
            // 0x26f57c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F580u;
        goto label_26f580;
    }
    ctx->pc = 0x26F578u;
    {
        const bool branch_taken_0x26f578 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F578u;
            // 0x26f57c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f578) {
            ctx->pc = 0x26F598u;
            goto label_26f598;
        }
    }
    ctx->pc = 0x26F580u;
label_26f580:
    // 0x26f580: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26f580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26f584:
    // 0x26f584: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26f584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26f588:
    // 0x26f588: 0xc08b5ac  jal         func_22D6B0
label_26f58c:
    if (ctx->pc == 0x26F58Cu) {
        ctx->pc = 0x26F58Cu;
            // 0x26f58c: 0x24a59820  addiu       $a1, $a1, -0x67E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940704));
        ctx->pc = 0x26F590u;
        goto label_26f590;
    }
    ctx->pc = 0x26F588u;
    SET_GPR_U32(ctx, 31, 0x26F590u);
    ctx->pc = 0x26F58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F588u;
            // 0x26f58c: 0x24a59820  addiu       $a1, $a1, -0x67E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F590u; }
        if (ctx->pc != 0x26F590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F590u; }
        if (ctx->pc != 0x26F590u) { return; }
    }
    ctx->pc = 0x26F590u;
label_26f590:
    // 0x26f590: 0x1000002c  b           . + 4 + (0x2C << 2)
label_26f594:
    if (ctx->pc == 0x26F594u) {
        ctx->pc = 0x26F594u;
            // 0x26f594: 0xae160050  sw          $s6, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 22));
        ctx->pc = 0x26F598u;
        goto label_26f598;
    }
    ctx->pc = 0x26F590u;
    {
        const bool branch_taken_0x26f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F590u;
            // 0x26f594: 0xae160050  sw          $s6, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f590) {
            ctx->pc = 0x26F644u;
            goto label_26f644;
        }
    }
    ctx->pc = 0x26F598u;
label_26f598:
    // 0x26f598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f59c:
    // 0x26f59c: 0xc049cb6  jal         func_1272D8
label_26f5a0:
    if (ctx->pc == 0x26F5A0u) {
        ctx->pc = 0x26F5A0u;
            // 0x26f5a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x26F5A4u;
        goto label_26f5a4;
    }
    ctx->pc = 0x26F59Cu;
    SET_GPR_U32(ctx, 31, 0x26F5A4u);
    ctx->pc = 0x26F5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F59Cu;
            // 0x26f5a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5A4u; }
        if (ctx->pc != 0x26F5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5A4u; }
        if (ctx->pc != 0x26F5A4u) { return; }
    }
    ctx->pc = 0x26F5A4u;
label_26f5a4:
    // 0x26f5a4: 0xae9e0004  sw          $fp, 0x4($s4)
    ctx->pc = 0x26f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 30));
label_26f5a8:
    // 0x26f5a8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x26f5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_26f5ac:
    // 0x26f5ac: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x26f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_26f5b0:
    // 0x26f5b0: 0x24c69850  addiu       $a2, $a2, -0x67B0
    ctx->pc = 0x26f5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940752));
label_26f5b4:
    // 0x26f5b4: 0xae900008  sw          $s0, 0x8($s4)
    ctx->pc = 0x26f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 16));
label_26f5b8:
    // 0x26f5b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26f5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f5bc:
    // 0x26f5bc: 0xc0985b8  jal         func_2616E0
label_26f5c0:
    if (ctx->pc == 0x26F5C0u) {
        ctx->pc = 0x26F5C0u;
            // 0x26f5c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26F5C4u;
        goto label_26f5c4;
    }
    ctx->pc = 0x26F5BCu;
    SET_GPR_U32(ctx, 31, 0x26F5C4u);
    ctx->pc = 0x26F5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5BCu;
            // 0x26f5c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (runtime->hasFunction(0x2616E0u)) {
        auto targetFn = runtime->lookupFunction(0x2616E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5C4u; }
        if (ctx->pc != 0x26F5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002616E0_0x2616e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5C4u; }
        if (ctx->pc != 0x26F5C4u) { return; }
    }
    ctx->pc = 0x26F5C4u;
label_26f5c4:
    // 0x26f5c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26f5c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f5c8:
    // 0x26f5c8: 0x6a30007  bgezl       $s5, . + 4 + (0x7 << 2)
label_26f5cc:
    if (ctx->pc == 0x26F5CCu) {
        ctx->pc = 0x26F5CCu;
            // 0x26f5cc: 0xae95000c  sw          $s5, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 21));
        ctx->pc = 0x26F5D0u;
        goto label_26f5d0;
    }
    ctx->pc = 0x26F5C8u;
    {
        const bool branch_taken_0x26f5c8 = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x26f5c8) {
            ctx->pc = 0x26F5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5C8u;
            // 0x26f5cc: 0xae95000c  sw          $s5, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F5E8u;
            goto label_26f5e8;
        }
    }
    ctx->pc = 0x26F5D0u;
label_26f5d0:
    // 0x26f5d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26f5d4:
    // 0x26f5d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26f5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26f5d8:
    // 0x26f5d8: 0xc08b5ac  jal         func_22D6B0
label_26f5dc:
    if (ctx->pc == 0x26F5DCu) {
        ctx->pc = 0x26F5DCu;
            // 0x26f5dc: 0x24a59868  addiu       $a1, $a1, -0x6798 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940776));
        ctx->pc = 0x26F5E0u;
        goto label_26f5e0;
    }
    ctx->pc = 0x26F5D8u;
    SET_GPR_U32(ctx, 31, 0x26F5E0u);
    ctx->pc = 0x26F5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5D8u;
            // 0x26f5dc: 0x24a59868  addiu       $a1, $a1, -0x6798 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5E0u; }
        if (ctx->pc != 0x26F5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5E0u; }
        if (ctx->pc != 0x26F5E0u) { return; }
    }
    ctx->pc = 0x26F5E0u;
label_26f5e0:
    // 0x26f5e0: 0x10000017  b           . + 4 + (0x17 << 2)
label_26f5e4:
    if (ctx->pc == 0x26F5E4u) {
        ctx->pc = 0x26F5E4u;
            // 0x26f5e4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x26F5E8u;
        goto label_26f5e8;
    }
    ctx->pc = 0x26F5E0u;
    {
        const bool branch_taken_0x26f5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5E0u;
            // 0x26f5e4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5e0) {
            ctx->pc = 0x26F640u;
            goto label_26f640;
        }
    }
    ctx->pc = 0x26F5E8u;
label_26f5e8:
    // 0x26f5e8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
label_26f5ec:
    // 0x26f5ec: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x26f5ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
label_26f5f0:
    // 0x26f5f0: 0x2484f6b8  addiu       $a0, $a0, -0x948
    ctx->pc = 0x26f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964920));
label_26f5f4:
    // 0x26f5f4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x26f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26f5f8:
    // 0x26f5f8: 0x25299898  addiu       $t1, $t1, -0x6768
    ctx->pc = 0x26f5f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940824));
label_26f5fc:
    // 0x26f5fc: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x26f5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_26f600:
    // 0x26f600: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x26f600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f604:
    // 0x26f604: 0xc0985d0  jal         func_261740
label_26f608:
    if (ctx->pc == 0x26F608u) {
        ctx->pc = 0x26F608u;
            // 0x26f608: 0x8fa70048  lw          $a3, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x26F60Cu;
        goto label_26f60c;
    }
    ctx->pc = 0x26F604u;
    SET_GPR_U32(ctx, 31, 0x26F60Cu);
    ctx->pc = 0x26F608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F604u;
            // 0x26f608: 0x8fa70048  lw          $a3, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261740u;
    if (runtime->hasFunction(0x261740u)) {
        auto targetFn = runtime->lookupFunction(0x261740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F60Cu; }
        if (ctx->pc != 0x26F60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261740_0x261740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F60Cu; }
        if (ctx->pc != 0x26F60Cu) { return; }
    }
    ctx->pc = 0x26F60Cu;
label_26f60c:
    // 0x26f60c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26f60cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f610:
    // 0x26f610: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
label_26f614:
    if (ctx->pc == 0x26F614u) {
        ctx->pc = 0x26F614u;
            // 0x26f614: 0x3c030027  lui         $v1, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
        ctx->pc = 0x26F618u;
        goto label_26f618;
    }
    ctx->pc = 0x26F610u;
    {
        const bool branch_taken_0x26f610 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x26F614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F610u;
            // 0x26f614: 0x3c030027  lui         $v1, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f610) {
            ctx->pc = 0x26F62Cu;
            goto label_26f62c;
        }
    }
    ctx->pc = 0x26F618u;
label_26f618:
    // 0x26f618: 0xae140048  sw          $s4, 0x48($s0)
    ctx->pc = 0x26f618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 20));
label_26f61c:
    // 0x26f61c: 0x2463f9d0  addiu       $v1, $v1, -0x630
    ctx->pc = 0x26f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965712));
label_26f620:
    // 0x26f620: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x26f620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26f624:
    // 0x26f624: 0x10000018  b           . + 4 + (0x18 << 2)
label_26f628:
    if (ctx->pc == 0x26F628u) {
        ctx->pc = 0x26F628u;
            // 0x26f628: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x26F62Cu;
        goto label_26f62c;
    }
    ctx->pc = 0x26F624u;
    {
        const bool branch_taken_0x26f624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F624u;
            // 0x26f628: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f624) {
            ctx->pc = 0x26F688u;
            goto label_26f688;
        }
    }
    ctx->pc = 0x26F62Cu;
label_26f62c:
    // 0x26f62c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26f62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26f630:
    // 0x26f630: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26f630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26f634:
    // 0x26f634: 0xc08b5ac  jal         func_22D6B0
label_26f638:
    if (ctx->pc == 0x26F638u) {
        ctx->pc = 0x26F638u;
            // 0x26f638: 0x24a598b8  addiu       $a1, $a1, -0x6748 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940856));
        ctx->pc = 0x26F63Cu;
        goto label_26f63c;
    }
    ctx->pc = 0x26F634u;
    SET_GPR_U32(ctx, 31, 0x26F63Cu);
    ctx->pc = 0x26F638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F634u;
            // 0x26f638: 0x24a598b8  addiu       $a1, $a1, -0x6748 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F63Cu; }
        if (ctx->pc != 0x26F63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F63Cu; }
        if (ctx->pc != 0x26F63Cu) { return; }
    }
    ctx->pc = 0x26F63Cu;
label_26f63c:
    // 0x26f63c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x26f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_26f640:
    // 0x26f640: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x26f640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_26f644:
    // 0x26f644: 0x6c00003  bltz        $s6, . + 4 + (0x3 << 2)
label_26f648:
    if (ctx->pc == 0x26F648u) {
        ctx->pc = 0x26F64Cu;
        goto label_26f64c;
    }
    ctx->pc = 0x26F644u;
    {
        const bool branch_taken_0x26f644 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x26f644) {
            ctx->pc = 0x26F654u;
            goto label_26f654;
        }
    }
    ctx->pc = 0x26F64Cu;
label_26f64c:
    // 0x26f64c: 0xc04329c  jal         func_10CA70
label_26f650:
    if (ctx->pc == 0x26F650u) {
        ctx->pc = 0x26F650u;
            // 0x26f650: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F654u;
        goto label_26f654;
    }
    ctx->pc = 0x26F64Cu;
    SET_GPR_U32(ctx, 31, 0x26F654u);
    ctx->pc = 0x26F650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F64Cu;
            // 0x26f650: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (runtime->hasFunction(0x10CA70u)) {
        auto targetFn = runtime->lookupFunction(0x10CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F654u; }
        if (ctx->pc != 0x26F654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F654u; }
        if (ctx->pc != 0x26F654u) { return; }
    }
    ctx->pc = 0x26F654u;
label_26f654:
    // 0x26f654: 0x6a00003  bltz        $s5, . + 4 + (0x3 << 2)
label_26f658:
    if (ctx->pc == 0x26F658u) {
        ctx->pc = 0x26F65Cu;
        goto label_26f65c;
    }
    ctx->pc = 0x26F654u;
    {
        const bool branch_taken_0x26f654 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x26f654) {
            ctx->pc = 0x26F664u;
            goto label_26f664;
        }
    }
    ctx->pc = 0x26F65Cu;
label_26f65c:
    // 0x26f65c: 0xc04331c  jal         func_10CC70
label_26f660:
    if (ctx->pc == 0x26F660u) {
        ctx->pc = 0x26F660u;
            // 0x26f660: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F664u;
        goto label_26f664;
    }
    ctx->pc = 0x26F65Cu;
    SET_GPR_U32(ctx, 31, 0x26F664u);
    ctx->pc = 0x26F660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F65Cu;
            // 0x26f660: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F664u; }
        if (ctx->pc != 0x26F664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F664u; }
        if (ctx->pc != 0x26F664u) { return; }
    }
    ctx->pc = 0x26F664u;
label_26f664:
    // 0x26f664: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_26f668:
    if (ctx->pc == 0x26F668u) {
        ctx->pc = 0x26F66Cu;
        goto label_26f66c;
    }
    ctx->pc = 0x26F664u;
    {
        const bool branch_taken_0x26f664 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f664) {
            ctx->pc = 0x26F674u;
            goto label_26f674;
        }
    }
    ctx->pc = 0x26F66Cu;
label_26f66c:
    // 0x26f66c: 0xc098560  jal         func_261580
label_26f670:
    if (ctx->pc == 0x26F670u) {
        ctx->pc = 0x26F670u;
            // 0x26f670: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F674u;
        goto label_26f674;
    }
    ctx->pc = 0x26F66Cu;
    SET_GPR_U32(ctx, 31, 0x26F674u);
    ctx->pc = 0x26F670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F66Cu;
            // 0x26f670: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F674u; }
        if (ctx->pc != 0x26F674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F674u; }
        if (ctx->pc != 0x26F674u) { return; }
    }
    ctx->pc = 0x26F674u;
label_26f674:
    // 0x26f674: 0xc09bbda  jal         func_26EF68
label_26f678:
    if (ctx->pc == 0x26F678u) {
        ctx->pc = 0x26F678u;
            // 0x26f678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F67Cu;
        goto label_26f67c;
    }
    ctx->pc = 0x26F674u;
    SET_GPR_U32(ctx, 31, 0x26F67Cu);
    ctx->pc = 0x26F678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F674u;
            // 0x26f678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EF68u;
    if (runtime->hasFunction(0x26EF68u)) {
        auto targetFn = runtime->lookupFunction(0x26EF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F67Cu; }
        if (ctx->pc != 0x26F67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026EF68_0x26ef68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F67Cu; }
        if (ctx->pc != 0x26F67Cu) { return; }
    }
    ctx->pc = 0x26F67Cu;
label_26f67c:
    // 0x26f67c: 0xc097c9e  jal         func_25F278
label_26f680:
    if (ctx->pc == 0x26F680u) {
        ctx->pc = 0x26F680u;
            // 0x26f680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F684u;
        goto label_26f684;
    }
    ctx->pc = 0x26F67Cu;
    SET_GPR_U32(ctx, 31, 0x26F684u);
    ctx->pc = 0x26F680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F67Cu;
            // 0x26f680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F684u; }
        if (ctx->pc != 0x26F684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F684u; }
        if (ctx->pc != 0x26F684u) { return; }
    }
    ctx->pc = 0x26F684u;
label_26f684:
    // 0x26f684: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26f684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26f688:
    // 0x26f688: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x26f688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_26f68c:
    // 0x26f68c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x26f68cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_26f690:
    // 0x26f690: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x26f690u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_26f694:
    // 0x26f694: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x26f694u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_26f698:
    // 0x26f698: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x26f698u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26f69c:
    // 0x26f69c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x26f69cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_26f6a0:
    // 0x26f6a0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x26f6a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26f6a4:
    // 0x26f6a4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x26f6a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26f6a8:
    // 0x26f6a8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x26f6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26f6ac:
    // 0x26f6ac: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x26f6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26f6b0:
    // 0x26f6b0: 0x3e00008  jr          $ra
label_26f6b4:
    if (ctx->pc == 0x26F6B4u) {
        ctx->pc = 0x26F6B4u;
            // 0x26f6b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x26F6B8u;
        goto label_26f6b8;
    }
    ctx->pc = 0x26F6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6B0u;
            // 0x26f6b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F6B8u;
label_26f6b8:
    // 0x26f6b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26f6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_26f6bc:
    // 0x26f6bc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x26f6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_26f6c0:
    // 0x26f6c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26f6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_26f6c4:
    // 0x26f6c4: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x26f6c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_26f6c8:
    // 0x26f6c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26f6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_26f6cc:
    // 0x26f6cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26f6ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26f6d0:
    // 0x26f6d0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26f6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_26f6d4:
    // 0x26f6d4: 0x26c49570  addiu       $a0, $s6, -0x6A90
    ctx->pc = 0x26f6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940016));
label_26f6d8:
    // 0x26f6d8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x26f6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_26f6dc:
    // 0x26f6dc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26f6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_26f6e0:
    // 0x26f6e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26f6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_26f6e4:
    // 0x26f6e4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26f6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_26f6e8:
    // 0x26f6e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26f6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26f6ec:
    // 0x26f6ec: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x26f6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_26f6f0:
    // 0x26f6f0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x26f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_26f6f4:
    // 0x26f6f4: 0x40f809  jalr        $v0
label_26f6f8:
    if (ctx->pc == 0x26F6F8u) {
        ctx->pc = 0x26F6F8u;
            // 0x26f6f8: 0x8e530004  lw          $s3, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x26F6FCu;
        goto label_26f6fc;
    }
    ctx->pc = 0x26F6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F6FCu);
        ctx->pc = 0x26F6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6F4u;
            // 0x26f6f8: 0x8e530004  lw          $s3, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26F6FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26F6FCu; }
            if (ctx->pc != 0x26F6FCu) { return; }
        }
        }
    }
    ctx->pc = 0x26F6FCu;
label_26f6fc:
    // 0x26f6fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26f6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f700:
    // 0x26f700: 0x1620000f  bnez        $s1, . + 4 + (0xF << 2)
label_26f704:
    if (ctx->pc == 0x26F704u) {
        ctx->pc = 0x26F708u;
        goto label_26f708;
    }
    ctx->pc = 0x26F700u;
    {
        const bool branch_taken_0x26f700 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f700) {
            ctx->pc = 0x26F740u;
            goto label_26f740;
        }
    }
    ctx->pc = 0x26F708u;
label_26f708:
    // 0x26f708: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x26f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_26f70c:
    // 0x26f70c: 0x40f809  jalr        $v0
label_26f710:
    if (ctx->pc == 0x26F710u) {
        ctx->pc = 0x26F714u;
        goto label_26f714;
    }
    ctx->pc = 0x26F70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F714u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x26F714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26F714u; }
            if (ctx->pc != 0x26F714u) { return; }
        }
        }
    }
    ctx->pc = 0x26F714u;
label_26f714:
    // 0x26f714: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_26f718:
    if (ctx->pc == 0x26F718u) {
        ctx->pc = 0x26F71Cu;
        goto label_26f71c;
    }
    ctx->pc = 0x26F714u;
    {
        const bool branch_taken_0x26f714 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f714) {
            ctx->pc = 0x26F740u;
            goto label_26f740;
        }
    }
    ctx->pc = 0x26F71Cu;
label_26f71c:
    // 0x26f71c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x26f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_26f720:
    // 0x26f720: 0x40f809  jalr        $v0
label_26f724:
    if (ctx->pc == 0x26F724u) {
        ctx->pc = 0x26F728u;
        goto label_26f728;
    }
    ctx->pc = 0x26F720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F728u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x26F728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26F728u; }
            if (ctx->pc != 0x26F728u) { return; }
        }
        }
    }
    ctx->pc = 0x26F728u;
label_26f728:
    // 0x26f728: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x26f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_26f72c:
    // 0x26f72c: 0x40f809  jalr        $v0
label_26f730:
    if (ctx->pc == 0x26F730u) {
        ctx->pc = 0x26F730u;
            // 0x26f730: 0x26c49570  addiu       $a0, $s6, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940016));
        ctx->pc = 0x26F734u;
        goto label_26f734;
    }
    ctx->pc = 0x26F72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F734u);
        ctx->pc = 0x26F730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F72Cu;
            // 0x26f730: 0x26c49570  addiu       $a0, $s6, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940016));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26F734u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26F734u; }
            if (ctx->pc != 0x26F734u) { return; }
        }
        }
    }
    ctx->pc = 0x26F734u;
label_26f734:
    // 0x26f734: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26f734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f738:
    // 0x26f738: 0x5220fff9  beql        $s1, $zero, . + 4 + (-0x7 << 2)
label_26f73c:
    if (ctx->pc == 0x26F73Cu) {
        ctx->pc = 0x26F73Cu;
            // 0x26f73c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x26F740u;
        goto label_26f740;
    }
    ctx->pc = 0x26F738u;
    {
        const bool branch_taken_0x26f738 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f738) {
            ctx->pc = 0x26F73Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F738u;
            // 0x26f73c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26f720;
        }
    }
    ctx->pc = 0x26F740u;
label_26f740:
    // 0x26f740: 0xc09bbf8  jal         func_26EFE0
label_26f744:
    if (ctx->pc == 0x26F744u) {
        ctx->pc = 0x26F744u;
            // 0x26f744: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F748u;
        goto label_26f748;
    }
    ctx->pc = 0x26F740u;
    SET_GPR_U32(ctx, 31, 0x26F748u);
    ctx->pc = 0x26F744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F740u;
            // 0x26f744: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EFE0u;
    if (runtime->hasFunction(0x26EFE0u)) {
        auto targetFn = runtime->lookupFunction(0x26EFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F748u; }
        if (ctx->pc != 0x26F748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026EFE0_0x26efe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F748u; }
        if (ctx->pc != 0x26F748u) { return; }
    }
    ctx->pc = 0x26F748u;
label_26f748:
    // 0x26f748: 0x440004f  bltz        $v0, . + 4 + (0x4F << 2)
label_26f74c:
    if (ctx->pc == 0x26F74Cu) {
        ctx->pc = 0x26F74Cu;
            // 0x26f74c: 0x26d49570  addiu       $s4, $s6, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940016));
        ctx->pc = 0x26F750u;
        goto label_26f750;
    }
    ctx->pc = 0x26F748u;
    {
        const bool branch_taken_0x26f748 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26F74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F748u;
            // 0x26f74c: 0x26d49570  addiu       $s4, $s6, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f748) {
            ctx->pc = 0x26F888u;
            goto label_26f888;
        }
    }
    ctx->pc = 0x26F750u;
label_26f750:
    // 0x26f750: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x26f750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26f754:
    // 0x26f754: 0xc099cba  jal         func_2672E8
label_26f758:
    if (ctx->pc == 0x26F758u) {
        ctx->pc = 0x26F758u;
            // 0x26f758: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F75Cu;
        goto label_26f75c;
    }
    ctx->pc = 0x26F754u;
    SET_GPR_U32(ctx, 31, 0x26F75Cu);
    ctx->pc = 0x26F758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F754u;
            // 0x26f758: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2672E8u;
    if (runtime->hasFunction(0x2672E8u)) {
        auto targetFn = runtime->lookupFunction(0x2672E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F75Cu; }
        if (ctx->pc != 0x26F75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002672E8_0x2672e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F75Cu; }
        if (ctx->pc != 0x26F75Cu) { return; }
    }
    ctx->pc = 0x26F75Cu;
label_26f75c:
    // 0x26f75c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_26f760:
    if (ctx->pc == 0x26F760u) {
        ctx->pc = 0x26F760u;
            // 0x26f760: 0x2417ffff  addiu       $s7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x26F764u;
        goto label_26f764;
    }
    ctx->pc = 0x26F75Cu;
    {
        const bool branch_taken_0x26f75c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26F760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F75Cu;
            // 0x26f760: 0x2417ffff  addiu       $s7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f75c) {
            ctx->pc = 0x26F76Cu;
            goto label_26f76c;
        }
    }
    ctx->pc = 0x26F764u;
label_26f764:
    // 0x26f764: 0x10000049  b           . + 4 + (0x49 << 2)
label_26f768:
    if (ctx->pc == 0x26F768u) {
        ctx->pc = 0x26F768u;
            // 0x26f768: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x26F76Cu;
        goto label_26f76c;
    }
    ctx->pc = 0x26F764u;
    {
        const bool branch_taken_0x26f764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F764u;
            // 0x26f768: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f764) {
            ctx->pc = 0x26F88Cu;
            goto label_26f88c;
        }
    }
    ctx->pc = 0x26F76Cu;
label_26f76c:
    // 0x26f76c: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x26f76cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
label_26f770:
    // 0x26f770: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x26f770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26f774:
    // 0x26f774: 0x0  nop
    ctx->pc = 0x26f774u;
    // NOP
label_26f778:
    // 0x26f778: 0xc099cf0  jal         func_2673C0
label_26f77c:
    if (ctx->pc == 0x26F77Cu) {
        ctx->pc = 0x26F77Cu;
            // 0x26f77c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F780u;
        goto label_26f780;
    }
    ctx->pc = 0x26F778u;
    SET_GPR_U32(ctx, 31, 0x26F780u);
    ctx->pc = 0x26F77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F778u;
            // 0x26f77c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2673C0u;
    if (runtime->hasFunction(0x2673C0u)) {
        auto targetFn = runtime->lookupFunction(0x2673C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F780u; }
        if (ctx->pc != 0x26F780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002673C0_0x2673c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F780u; }
        if (ctx->pc != 0x26F780u) { return; }
    }
    ctx->pc = 0x26F780u;
label_26f780:
    // 0x26f780: 0x4420042  bltzl       $v0, . + 4 + (0x42 << 2)
label_26f784:
    if (ctx->pc == 0x26F784u) {
        ctx->pc = 0x26F784u;
            // 0x26f784: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->pc = 0x26F788u;
        goto label_26f788;
    }
    ctx->pc = 0x26F780u;
    {
        const bool branch_taken_0x26f780 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26f780) {
            ctx->pc = 0x26F784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F780u;
            // 0x26f784: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F88Cu;
            goto label_26f88c;
        }
    }
    ctx->pc = 0x26F788u;
label_26f788:
    // 0x26f788: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_26f78c:
    if (ctx->pc == 0x26F78Cu) {
        ctx->pc = 0x26F78Cu;
            // 0x26f78c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F790u;
        goto label_26f790;
    }
    ctx->pc = 0x26F788u;
    {
        const bool branch_taken_0x26f788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F788u;
            // 0x26f78c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f788) {
            ctx->pc = 0x26F874u;
            goto label_26f874;
        }
    }
    ctx->pc = 0x26F790u;
label_26f790:
    // 0x26f790: 0xc099ebe  jal         func_267AF8
label_26f794:
    if (ctx->pc == 0x26F794u) {
        ctx->pc = 0x26F794u;
            // 0x26f794: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F798u;
        goto label_26f798;
    }
    ctx->pc = 0x26F790u;
    SET_GPR_U32(ctx, 31, 0x26F798u);
    ctx->pc = 0x26F794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F790u;
            // 0x26f794: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267AF8u;
    if (runtime->hasFunction(0x267AF8u)) {
        auto targetFn = runtime->lookupFunction(0x267AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F798u; }
        if (ctx->pc != 0x26F798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267AF8_0x267af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F798u; }
        if (ctx->pc != 0x26F798u) { return; }
    }
    ctx->pc = 0x26F798u;
label_26f798:
    // 0x26f798: 0x442003c  bltzl       $v0, . + 4 + (0x3C << 2)
label_26f79c:
    if (ctx->pc == 0x26F79Cu) {
        ctx->pc = 0x26F79Cu;
            // 0x26f79c: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->pc = 0x26F7A0u;
        goto label_26f7a0;
    }
    ctx->pc = 0x26F798u;
    {
        const bool branch_taken_0x26f798 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26f798) {
            ctx->pc = 0x26F79Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F798u;
            // 0x26f79c: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F88Cu;
            goto label_26f88c;
        }
    }
    ctx->pc = 0x26F7A0u;
label_26f7a0:
    // 0x26f7a0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_26f7a4:
    if (ctx->pc == 0x26F7A4u) {
        ctx->pc = 0x26F7A4u;
            // 0x26f7a4: 0x26d39570  addiu       $s3, $s6, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940016));
        ctx->pc = 0x26F7A8u;
        goto label_26f7a8;
    }
    ctx->pc = 0x26F7A0u;
    {
        const bool branch_taken_0x26f7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f7a0) {
            ctx->pc = 0x26F7A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7A0u;
            // 0x26f7a4: 0x26d39570  addiu       $s3, $s6, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940016));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F824u;
            goto label_26f824;
        }
    }
    ctx->pc = 0x26F7A8u;
label_26f7a8:
    // 0x26f7a8: 0xc04332c  jal         func_10CCB0
label_26f7ac:
    if (ctx->pc == 0x26F7ACu) {
        ctx->pc = 0x26F7ACu;
            // 0x26f7ac: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x26F7B0u;
        goto label_26f7b0;
    }
    ctx->pc = 0x26F7A8u;
    SET_GPR_U32(ctx, 31, 0x26F7B0u);
    ctx->pc = 0x26F7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7A8u;
            // 0x26f7ac: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7B0u; }
        if (ctx->pc != 0x26F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7B0u; }
        if (ctx->pc != 0x26F7B0u) { return; }
    }
    ctx->pc = 0x26F7B0u;
label_26f7b0:
    // 0x26f7b0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_26f7b4:
    // 0x26f7b4: 0x50430068  beql        $v0, $v1, . + 4 + (0x68 << 2)
label_26f7b8:
    if (ctx->pc == 0x26F7B8u) {
        ctx->pc = 0x26F7B8u;
            // 0x26f7b8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F7BCu;
        goto label_26f7bc;
    }
    ctx->pc = 0x26F7B4u;
    {
        const bool branch_taken_0x26f7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f7b4) {
            ctx->pc = 0x26F7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7B4u;
            // 0x26f7b8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F958u;
            goto label_26f958;
        }
    }
    ctx->pc = 0x26F7BCu;
label_26f7bc:
    // 0x26f7bc: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_26f7c0:
    if (ctx->pc == 0x26F7C0u) {
        ctx->pc = 0x26F7C0u;
            // 0x26f7c0: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->pc = 0x26F7C4u;
        goto label_26f7c4;
    }
    ctx->pc = 0x26F7BCu;
    {
        const bool branch_taken_0x26f7bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7BCu;
            // 0x26f7c0: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7bc) {
            ctx->pc = 0x26F814u;
            goto label_26f814;
        }
    }
    ctx->pc = 0x26F7C4u;
label_26f7c4:
    // 0x26f7c4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x26f7c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_26f7c8:
    // 0x26f7c8: 0x16770012  bne         $s3, $s7, . + 4 + (0x12 << 2)
label_26f7cc:
    if (ctx->pc == 0x26F7CCu) {
        ctx->pc = 0x26F7CCu;
            // 0x26f7cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F7D0u;
        goto label_26f7d0;
    }
    ctx->pc = 0x26F7C8u;
    {
        const bool branch_taken_0x26f7c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        ctx->pc = 0x26F7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7C8u;
            // 0x26f7cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7c8) {
            ctx->pc = 0x26F814u;
            goto label_26f814;
        }
    }
    ctx->pc = 0x26F7D0u;
label_26f7d0:
    // 0x26f7d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x26f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26f7d4:
    // 0x26f7d4: 0xc09bc16  jal         func_26F058
label_26f7d8:
    if (ctx->pc == 0x26F7D8u) {
        ctx->pc = 0x26F7D8u;
            // 0x26f7d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F7DCu;
        goto label_26f7dc;
    }
    ctx->pc = 0x26F7D4u;
    SET_GPR_U32(ctx, 31, 0x26F7DCu);
    ctx->pc = 0x26F7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7D4u;
            // 0x26f7d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F058u;
    if (runtime->hasFunction(0x26F058u)) {
        auto targetFn = runtime->lookupFunction(0x26F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7DCu; }
        if (ctx->pc != 0x26F7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F058_0x26f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7DCu; }
        if (ctx->pc != 0x26F7DCu) { return; }
    }
    ctx->pc = 0x26F7DCu;
label_26f7dc:
    // 0x26f7dc: 0x440004b  bltz        $v0, . + 4 + (0x4B << 2)
label_26f7e0:
    if (ctx->pc == 0x26F7E0u) {
        ctx->pc = 0x26F7E0u;
            // 0x26f7e0: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x26F7E4u;
        goto label_26f7e4;
    }
    ctx->pc = 0x26F7DCu;
    {
        const bool branch_taken_0x26f7dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26F7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7DCu;
            // 0x26f7e0: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7dc) {
            ctx->pc = 0x26F90Cu;
            goto label_26f90c;
        }
    }
    ctx->pc = 0x26F7E4u;
label_26f7e4:
    // 0x26f7e4: 0x442005c  bltzl       $v0, . + 4 + (0x5C << 2)
label_26f7e8:
    if (ctx->pc == 0x26F7E8u) {
        ctx->pc = 0x26F7E8u;
            // 0x26f7e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F7ECu;
        goto label_26f7ec;
    }
    ctx->pc = 0x26F7E4u;
    {
        const bool branch_taken_0x26f7e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26f7e4) {
            ctx->pc = 0x26F7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7E4u;
            // 0x26f7e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F958u;
            goto label_26f958;
        }
    }
    ctx->pc = 0x26F7ECu;
label_26f7ec:
    // 0x26f7ec: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x26f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_26f7f0:
    // 0x26f7f0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x26f7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_26f7f4:
    // 0x26f7f4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x26f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_26f7f8:
    // 0x26f7f8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x26f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26f7fc:
    // 0x26f7fc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x26f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_26f800:
    // 0x26f800: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x26f800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_26f804:
    // 0x26f804: 0x40f809  jalr        $v0
label_26f808:
    if (ctx->pc == 0x26F808u) {
        ctx->pc = 0x26F808u;
            // 0x26f808: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x26F80Cu;
        goto label_26f80c;
    }
    ctx->pc = 0x26F804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F80Cu);
        ctx->pc = 0x26F808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F804u;
            // 0x26f808: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26F80Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26F80Cu; }
            if (ctx->pc != 0x26F80Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26F80Cu;
label_26f80c:
    // 0x26f80c: 0x10000052  b           . + 4 + (0x52 << 2)
label_26f810:
    if (ctx->pc == 0x26F810u) {
        ctx->pc = 0x26F810u;
            // 0x26f810: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F814u;
        goto label_26f814;
    }
    ctx->pc = 0x26F80Cu;
    {
        const bool branch_taken_0x26f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F80Cu;
            // 0x26f810: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f80c) {
            ctx->pc = 0x26F958u;
            goto label_26f958;
        }
    }
    ctx->pc = 0x26F814u;
label_26f814:
    // 0x26f814: 0xc043736  jal         func_10DCD8
label_26f818:
    if (ctx->pc == 0x26F818u) {
        ctx->pc = 0x26F818u;
            // 0x26f818: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->pc = 0x26F81Cu;
        goto label_26f81c;
    }
    ctx->pc = 0x26F814u;
    SET_GPR_U32(ctx, 31, 0x26F81Cu);
    ctx->pc = 0x26F818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F814u;
            // 0x26f818: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (runtime->hasFunction(0x10DCD8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F81Cu; }
        if (ctx->pc != 0x26F81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010DCD8_0x10dcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F81Cu; }
        if (ctx->pc != 0x26F81Cu) { return; }
    }
    ctx->pc = 0x26F81Cu;
label_26f81c:
    // 0x26f81c: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
label_26f820:
    if (ctx->pc == 0x26F820u) {
        ctx->pc = 0x26F820u;
            // 0x26f820: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F824u;
        goto label_26f824;
    }
    ctx->pc = 0x26F81Cu;
    {
        const bool branch_taken_0x26f81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F81Cu;
            // 0x26f820: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f81c) {
            ctx->pc = 0x26F778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26f778;
        }
    }
    ctx->pc = 0x26F824u;
label_26f824:
    // 0x26f824: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x26f824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26f828:
    // 0x26f828: 0xc099de4  jal         func_267790
label_26f82c:
    if (ctx->pc == 0x26F82Cu) {
        ctx->pc = 0x26F82Cu;
            // 0x26f82c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F830u;
        goto label_26f830;
    }
    ctx->pc = 0x26F828u;
    SET_GPR_U32(ctx, 31, 0x26F830u);
    ctx->pc = 0x26F82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F828u;
            // 0x26f82c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267790u;
    if (runtime->hasFunction(0x267790u)) {
        auto targetFn = runtime->lookupFunction(0x267790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F830u; }
        if (ctx->pc != 0x26F830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267790_0x267790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F830u; }
        if (ctx->pc != 0x26F830u) { return; }
    }
    ctx->pc = 0x26F830u;
label_26f830:
    // 0x26f830: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_26f834:
    if (ctx->pc == 0x26F834u) {
        ctx->pc = 0x26F834u;
            // 0x26f834: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F838u;
        goto label_26f838;
    }
    ctx->pc = 0x26F830u;
    {
        const bool branch_taken_0x26f830 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26f830) {
            ctx->pc = 0x26F834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F830u;
            // 0x26f834: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F840u;
            goto label_26f840;
        }
    }
    ctx->pc = 0x26F838u;
label_26f838:
    // 0x26f838: 0x10000014  b           . + 4 + (0x14 << 2)
label_26f83c:
    if (ctx->pc == 0x26F83Cu) {
        ctx->pc = 0x26F83Cu;
            // 0x26f83c: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x26F840u;
        goto label_26f840;
    }
    ctx->pc = 0x26F838u;
    {
        const bool branch_taken_0x26f838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F838u;
            // 0x26f83c: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f838) {
            ctx->pc = 0x26F88Cu;
            goto label_26f88c;
        }
    }
    ctx->pc = 0x26F840u;
label_26f840:
    // 0x26f840: 0xc099e0e  jal         func_267838
label_26f844:
    if (ctx->pc == 0x26F844u) {
        ctx->pc = 0x26F844u;
            // 0x26f844: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F848u;
        goto label_26f848;
    }
    ctx->pc = 0x26F840u;
    SET_GPR_U32(ctx, 31, 0x26F848u);
    ctx->pc = 0x26F844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F840u;
            // 0x26f844: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267838u;
    if (runtime->hasFunction(0x267838u)) {
        auto targetFn = runtime->lookupFunction(0x267838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F848u; }
        if (ctx->pc != 0x26F848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267838_0x267838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F848u; }
        if (ctx->pc != 0x26F848u) { return; }
    }
    ctx->pc = 0x26F848u;
label_26f848:
    // 0x26f848: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_26f84c:
    if (ctx->pc == 0x26F84Cu) {
        ctx->pc = 0x26F84Cu;
            // 0x26f84c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F850u;
        goto label_26f850;
    }
    ctx->pc = 0x26F848u;
    {
        const bool branch_taken_0x26f848 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26f848) {
            ctx->pc = 0x26F84Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F848u;
            // 0x26f84c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F858u;
            goto label_26f858;
        }
    }
    ctx->pc = 0x26F850u;
label_26f850:
    // 0x26f850: 0x1000000e  b           . + 4 + (0xE << 2)
label_26f854:
    if (ctx->pc == 0x26F854u) {
        ctx->pc = 0x26F854u;
            // 0x26f854: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x26F858u;
        goto label_26f858;
    }
    ctx->pc = 0x26F850u;
    {
        const bool branch_taken_0x26f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F850u;
            // 0x26f854: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f850) {
            ctx->pc = 0x26F88Cu;
            goto label_26f88c;
        }
    }
    ctx->pc = 0x26F858u;
label_26f858:
    // 0x26f858: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26f858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26f85c:
    // 0x26f85c: 0xc099e6a  jal         func_2679A8
label_26f860:
    if (ctx->pc == 0x26F860u) {
        ctx->pc = 0x26F860u;
            // 0x26f860: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x26F864u;
        goto label_26f864;
    }
    ctx->pc = 0x26F85Cu;
    SET_GPR_U32(ctx, 31, 0x26F864u);
    ctx->pc = 0x26F860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F85Cu;
            // 0x26f860: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2679A8u;
    if (runtime->hasFunction(0x2679A8u)) {
        auto targetFn = runtime->lookupFunction(0x2679A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F864u; }
        if (ctx->pc != 0x26F864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002679A8_0x2679a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F864u; }
        if (ctx->pc != 0x26F864u) { return; }
    }
    ctx->pc = 0x26F864u;
label_26f864:
    // 0x26f864: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
label_26f868:
    if (ctx->pc == 0x26F868u) {
        ctx->pc = 0x26F868u;
            // 0x26f868: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x26F86Cu;
        goto label_26f86c;
    }
    ctx->pc = 0x26F864u;
    {
        const bool branch_taken_0x26f864 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26f864) {
            ctx->pc = 0x26F868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F864u;
            // 0x26f868: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F898u;
            goto label_26f898;
        }
    }
    ctx->pc = 0x26F86Cu;
label_26f86c:
    // 0x26f86c: 0x10000007  b           . + 4 + (0x7 << 2)
label_26f870:
    if (ctx->pc == 0x26F870u) {
        ctx->pc = 0x26F870u;
            // 0x26f870: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->pc = 0x26F874u;
        goto label_26f874;
    }
    ctx->pc = 0x26F86Cu;
    {
        const bool branch_taken_0x26f86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F86Cu;
            // 0x26f870: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f86c) {
            ctx->pc = 0x26F88Cu;
            goto label_26f88c;
        }
    }
    ctx->pc = 0x26F874u;
label_26f874:
    // 0x26f874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26f874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f878:
    // 0x26f878: 0xc09bc16  jal         func_26F058
label_26f87c:
    if (ctx->pc == 0x26F87Cu) {
        ctx->pc = 0x26F87Cu;
            // 0x26f87c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F880u;
        goto label_26f880;
    }
    ctx->pc = 0x26F878u;
    SET_GPR_U32(ctx, 31, 0x26F880u);
    ctx->pc = 0x26F87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F878u;
            // 0x26f87c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F058u;
    if (runtime->hasFunction(0x26F058u)) {
        auto targetFn = runtime->lookupFunction(0x26F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F880u; }
        if (ctx->pc != 0x26F880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F058_0x26f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F880u; }
        if (ctx->pc != 0x26F880u) { return; }
    }
    ctx->pc = 0x26F880u;
label_26f880:
    // 0x26f880: 0x10000022  b           . + 4 + (0x22 << 2)
label_26f884:
    if (ctx->pc == 0x26F884u) {
        ctx->pc = 0x26F884u;
            // 0x26f884: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x26F888u;
        goto label_26f888;
    }
    ctx->pc = 0x26F880u;
    {
        const bool branch_taken_0x26f880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F880u;
            // 0x26f884: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f880) {
            ctx->pc = 0x26F90Cu;
            goto label_26f90c;
        }
    }
    ctx->pc = 0x26F888u;
label_26f888:
    // 0x26f888: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x26f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_26f88c:
    // 0x26f88c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x26f88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_26f890:
    // 0x26f890: 0x1000001d  b           . + 4 + (0x1D << 2)
label_26f894:
    if (ctx->pc == 0x26F894u) {
        ctx->pc = 0x26F894u;
            // 0x26f894: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x26F898u;
        goto label_26f898;
    }
    ctx->pc = 0x26F890u;
    {
        const bool branch_taken_0x26f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F890u;
            // 0x26f894: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f890) {
            ctx->pc = 0x26F908u;
            goto label_26f908;
        }
    }
    ctx->pc = 0x26F898u;
label_26f898:
    // 0x26f898: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
label_26f89c:
    if (ctx->pc == 0x26F89Cu) {
        ctx->pc = 0x26F89Cu;
            // 0x26f89c: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->pc = 0x26F8A0u;
        goto label_26f8a0;
    }
    ctx->pc = 0x26F898u;
    {
        const bool branch_taken_0x26f898 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26F89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F898u;
            // 0x26f89c: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f898) {
            ctx->pc = 0x26F8E0u;
            goto label_26f8e0;
        }
    }
    ctx->pc = 0x26F8A0u;
label_26f8a0:
    // 0x26f8a0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x26f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_26f8a4:
    // 0x26f8a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26f8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_26f8a8:
    // 0x26f8a8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x26f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_26f8ac:
    // 0x26f8ac: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x26f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_26f8b0:
    // 0x26f8b0: 0x40f809  jalr        $v0
label_26f8b4:
    if (ctx->pc == 0x26F8B4u) {
        ctx->pc = 0x26F8B8u;
        goto label_26f8b8;
    }
    ctx->pc = 0x26F8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F8B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x26F8B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26F8B8u; }
            if (ctx->pc != 0x26F8B8u) { return; }
        }
        }
    }
    ctx->pc = 0x26F8B8u;
label_26f8b8:
    // 0x26f8b8: 0x1000000a  b           . + 4 + (0xA << 2)
label_26f8bc:
    if (ctx->pc == 0x26F8BCu) {
        ctx->pc = 0x26F8BCu;
            // 0x26f8bc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F8C0u;
        goto label_26f8c0;
    }
    ctx->pc = 0x26F8B8u;
    {
        const bool branch_taken_0x26f8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8B8u;
            // 0x26f8bc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8b8) {
            ctx->pc = 0x26F8E4u;
            goto label_26f8e4;
        }
    }
    ctx->pc = 0x26F8C0u;
label_26f8c0:
    // 0x26f8c0: 0xc04332c  jal         func_10CCB0
label_26f8c4:
    if (ctx->pc == 0x26F8C4u) {
        ctx->pc = 0x26F8C4u;
            // 0x26f8c4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x26F8C8u;
        goto label_26f8c8;
    }
    ctx->pc = 0x26F8C0u;
    SET_GPR_U32(ctx, 31, 0x26F8C8u);
    ctx->pc = 0x26F8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8C0u;
            // 0x26f8c4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F8C8u; }
        if (ctx->pc != 0x26F8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F8C8u; }
        if (ctx->pc != 0x26F8C8u) { return; }
    }
    ctx->pc = 0x26F8C8u;
label_26f8c8:
    // 0x26f8c8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_26f8cc:
    // 0x26f8cc: 0x50430022  beql        $v0, $v1, . + 4 + (0x22 << 2)
label_26f8d0:
    if (ctx->pc == 0x26F8D0u) {
        ctx->pc = 0x26F8D0u;
            // 0x26f8d0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F8D4u;
        goto label_26f8d4;
    }
    ctx->pc = 0x26F8CCu;
    {
        const bool branch_taken_0x26f8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f8cc) {
            ctx->pc = 0x26F8D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8CCu;
            // 0x26f8d0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F958u;
            goto label_26f958;
        }
    }
    ctx->pc = 0x26F8D4u;
label_26f8d4:
    // 0x26f8d4: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x26f8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_26f8d8:
    // 0x26f8d8: 0xc043736  jal         func_10DCD8
label_26f8dc:
    if (ctx->pc == 0x26F8DCu) {
        ctx->pc = 0x26F8DCu;
            // 0x26f8dc: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->pc = 0x26F8E0u;
        goto label_26f8e0;
    }
    ctx->pc = 0x26F8D8u;
    SET_GPR_U32(ctx, 31, 0x26F8E0u);
    ctx->pc = 0x26F8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8D8u;
            // 0x26f8dc: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (runtime->hasFunction(0x10DCD8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F8E0u; }
        if (ctx->pc != 0x26F8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010DCD8_0x10dcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F8E0u; }
        if (ctx->pc != 0x26F8E0u) { return; }
    }
    ctx->pc = 0x26F8E0u;
label_26f8e0:
    // 0x26f8e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x26f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26f8e4:
    // 0x26f8e4: 0xc099cf0  jal         func_2673C0
label_26f8e8:
    if (ctx->pc == 0x26F8E8u) {
        ctx->pc = 0x26F8E8u;
            // 0x26f8e8: 0x26c59570  addiu       $a1, $s6, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940016));
        ctx->pc = 0x26F8ECu;
        goto label_26f8ec;
    }
    ctx->pc = 0x26F8E4u;
    SET_GPR_U32(ctx, 31, 0x26F8ECu);
    ctx->pc = 0x26F8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8E4u;
            // 0x26f8e8: 0x26c59570  addiu       $a1, $s6, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2673C0u;
    if (runtime->hasFunction(0x2673C0u)) {
        auto targetFn = runtime->lookupFunction(0x2673C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F8ECu; }
        if (ctx->pc != 0x26F8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002673C0_0x2673c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F8ECu; }
        if (ctx->pc != 0x26F8ECu) { return; }
    }
    ctx->pc = 0x26F8ECu;
label_26f8ec:
    // 0x26f8ec: 0x442ffe7  bltzl       $v0, . + 4 + (-0x19 << 2)
label_26f8f0:
    if (ctx->pc == 0x26F8F0u) {
        ctx->pc = 0x26F8F0u;
            // 0x26f8f0: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->pc = 0x26F8F4u;
        goto label_26f8f4;
    }
    ctx->pc = 0x26F8ECu;
    {
        const bool branch_taken_0x26f8ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26f8ec) {
            ctx->pc = 0x26F8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8ECu;
            // 0x26f8f0: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F88Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26f88c;
        }
    }
    ctx->pc = 0x26F8F4u;
label_26f8f4:
    // 0x26f8f4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_26f8f8:
    if (ctx->pc == 0x26F8F8u) {
        ctx->pc = 0x26F8F8u;
            // 0x26f8f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F8FCu;
        goto label_26f8fc;
    }
    ctx->pc = 0x26F8F4u;
    {
        const bool branch_taken_0x26f8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8F4u;
            // 0x26f8f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8f4) {
            ctx->pc = 0x26F8C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26f8c0;
        }
    }
    ctx->pc = 0x26F8FCu;
label_26f8fc:
    // 0x26f8fc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x26f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26f900:
    // 0x26f900: 0xc09bc16  jal         func_26F058
label_26f904:
    if (ctx->pc == 0x26F904u) {
        ctx->pc = 0x26F904u;
            // 0x26f904: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F908u;
        goto label_26f908;
    }
    ctx->pc = 0x26F900u;
    SET_GPR_U32(ctx, 31, 0x26F908u);
    ctx->pc = 0x26F904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F900u;
            // 0x26f904: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F058u;
    if (runtime->hasFunction(0x26F058u)) {
        auto targetFn = runtime->lookupFunction(0x26F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F908u; }
        if (ctx->pc != 0x26F908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F058_0x26f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F908u; }
        if (ctx->pc != 0x26F908u) { return; }
    }
    ctx->pc = 0x26F908u;
label_26f908:
    // 0x26f908: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x26f908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_26f90c:
    // 0x26f90c: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_26f910:
    if (ctx->pc == 0x26F910u) {
        ctx->pc = 0x26F910u;
            // 0x26f910: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F914u;
        goto label_26f914;
    }
    ctx->pc = 0x26F90Cu;
    {
        const bool branch_taken_0x26f90c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26f90c) {
            ctx->pc = 0x26F910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F90Cu;
            // 0x26f910: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F958u;
            goto label_26f958;
        }
    }
    ctx->pc = 0x26F914u;
label_26f914:
    // 0x26f914: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x26f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_26f918:
    // 0x26f918: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x26f918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_26f91c:
    // 0x26f91c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26f91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_26f920:
    // 0x26f920: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x26f920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26f924:
    // 0x26f924: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x26f924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_26f928:
    // 0x26f928: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x26f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_26f92c:
    // 0x26f92c: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
label_26f930:
    if (ctx->pc == 0x26F930u) {
        ctx->pc = 0x26F930u;
            // 0x26f930: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F934u;
        goto label_26f934;
    }
    ctx->pc = 0x26F92Cu;
    {
        const bool branch_taken_0x26f92c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26f92c) {
            ctx->pc = 0x26F930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26F92Cu;
            // 0x26f930: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26F958u;
            goto label_26f958;
        }
    }
    ctx->pc = 0x26F934u;
label_26f934:
    // 0x26f934: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x26f934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_26f938:
    // 0x26f938: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x26f938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_26f93c:
    // 0x26f93c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x26f93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_26f940:
    // 0x26f940: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x26f940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26f944:
    // 0x26f944: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x26f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_26f948:
    // 0x26f948: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26f948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_26f94c:
    // 0x26f94c: 0x40f809  jalr        $v0
label_26f950:
    if (ctx->pc == 0x26F950u) {
        ctx->pc = 0x26F950u;
            // 0x26f950: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x26F954u;
        goto label_26f954;
    }
    ctx->pc = 0x26F94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F954u);
        ctx->pc = 0x26F950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F94Cu;
            // 0x26f950: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26F954u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26F954u; }
            if (ctx->pc != 0x26F954u) { return; }
        }
        }
    }
    ctx->pc = 0x26F954u;
label_26f954:
    // 0x26f954: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x26f954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26f958:
    // 0x26f958: 0xc099d46  jal         func_267518
label_26f95c:
    if (ctx->pc == 0x26F95Cu) {
        ctx->pc = 0x26F95Cu;
            // 0x26f95c: 0x26c59570  addiu       $a1, $s6, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940016));
        ctx->pc = 0x26F960u;
        goto label_26f960;
    }
    ctx->pc = 0x26F958u;
    SET_GPR_U32(ctx, 31, 0x26F960u);
    ctx->pc = 0x26F95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F958u;
            // 0x26f95c: 0x26c59570  addiu       $a1, $s6, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267518u;
    if (runtime->hasFunction(0x267518u)) {
        auto targetFn = runtime->lookupFunction(0x267518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F960u; }
        if (ctx->pc != 0x26F960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267518_0x267518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F960u; }
        if (ctx->pc != 0x26F960u) { return; }
    }
    ctx->pc = 0x26F960u;
label_26f960:
    // 0x26f960: 0xc09bbda  jal         func_26EF68
label_26f964:
    if (ctx->pc == 0x26F964u) {
        ctx->pc = 0x26F964u;
            // 0x26f964: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26F968u;
        goto label_26f968;
    }
    ctx->pc = 0x26F960u;
    SET_GPR_U32(ctx, 31, 0x26F968u);
    ctx->pc = 0x26F964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F960u;
            // 0x26f964: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EF68u;
    if (runtime->hasFunction(0x26EF68u)) {
        auto targetFn = runtime->lookupFunction(0x26EF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F968u; }
        if (ctx->pc != 0x26F968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026EF68_0x26ef68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F968u; }
        if (ctx->pc != 0x26F968u) { return; }
    }
    ctx->pc = 0x26F968u;
label_26f968:
    // 0x26f968: 0xc09bc82  jal         func_26F208
label_26f96c:
    if (ctx->pc == 0x26F96Cu) {
        ctx->pc = 0x26F96Cu;
            // 0x26f96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F970u;
        goto label_26f970;
    }
    ctx->pc = 0x26F968u;
    SET_GPR_U32(ctx, 31, 0x26F970u);
    ctx->pc = 0x26F96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F968u;
            // 0x26f96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F208u;
    if (runtime->hasFunction(0x26F208u)) {
        auto targetFn = runtime->lookupFunction(0x26F208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F970u; }
        if (ctx->pc != 0x26F970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F208_0x26f208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F970u; }
        if (ctx->pc != 0x26F970u) { return; }
    }
    ctx->pc = 0x26F970u;
label_26f970:
    // 0x26f970: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x26f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_26f974:
    // 0x26f974: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_26f978:
    if (ctx->pc == 0x26F978u) {
        ctx->pc = 0x26F978u;
            // 0x26f978: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->pc = 0x26F97Cu;
        goto label_26f97c;
    }
    ctx->pc = 0x26F974u;
    {
        const bool branch_taken_0x26f974 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26F978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F974u;
            // 0x26f978: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f974) {
            ctx->pc = 0x26F990u;
            goto label_26f990;
        }
    }
    ctx->pc = 0x26F97Cu;
label_26f97c:
    // 0x26f97c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x26f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_26f980:
    // 0x26f980: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x26f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_26f984:
    // 0x26f984: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26f984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_26f988:
    // 0x26f988: 0x40f809  jalr        $v0
label_26f98c:
    if (ctx->pc == 0x26F98Cu) {
        ctx->pc = 0x26F98Cu;
            // 0x26f98c: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x26F990u;
        goto label_26f990;
    }
    ctx->pc = 0x26F988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F990u);
        ctx->pc = 0x26F98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F988u;
            // 0x26f98c: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26F990u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26F990u; }
            if (ctx->pc != 0x26F990u) { return; }
        }
        }
    }
    ctx->pc = 0x26F990u;
label_26f990:
    // 0x26f990: 0xc0432d4  jal         func_10CB50
label_26f994:
    if (ctx->pc == 0x26F994u) {
        ctx->pc = 0x26F998u;
        goto label_26f998;
    }
    ctx->pc = 0x26F990u;
    SET_GPR_U32(ctx, 31, 0x26F998u);
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F998u; }
        if (ctx->pc != 0x26F998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F998u; }
        if (ctx->pc != 0x26F998u) { return; }
    }
    ctx->pc = 0x26F998u;
label_26f998:
    // 0x26f998: 0xc097360  jal         func_25CD80
label_26f99c:
    if (ctx->pc == 0x26F99Cu) {
        ctx->pc = 0x26F99Cu;
            // 0x26f99c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26F9A0u;
        goto label_26f9a0;
    }
    ctx->pc = 0x26F998u;
    SET_GPR_U32(ctx, 31, 0x26F9A0u);
    ctx->pc = 0x26F99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F998u;
            // 0x26f99c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CD80u;
    if (runtime->hasFunction(0x25CD80u)) {
        auto targetFn = runtime->lookupFunction(0x25CD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F9A0u; }
        if (ctx->pc != 0x26F9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD80_0x25cd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F9A0u; }
        if (ctx->pc != 0x26F9A0u) { return; }
    }
    ctx->pc = 0x26F9A0u;
label_26f9a0:
    // 0x26f9a0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26f9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26f9a4:
    // 0x26f9a4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x26f9a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26f9a8:
    // 0x26f9a8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x26f9a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26f9ac:
    // 0x26f9ac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26f9acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26f9b0:
    // 0x26f9b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26f9b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26f9b4:
    // 0x26f9b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26f9b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26f9b8:
    // 0x26f9b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26f9b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26f9bc:
    // 0x26f9bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26f9bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26f9c0:
    // 0x26f9c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26f9c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26f9c4:
    // 0x26f9c4: 0x80432a8  j           func_10CAA0
label_26f9c8:
    if (ctx->pc == 0x26F9C8u) {
        ctx->pc = 0x26F9C8u;
            // 0x26f9c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x26F9CCu;
        goto label_26f9cc;
    }
    ctx->pc = 0x26F9C4u;
    ctx->pc = 0x26F9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9C4u;
            // 0x26f9c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    if (runtime->hasFunction(0x10CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x26F9CCu;
label_26f9cc:
    // 0x26f9cc: 0x0  nop
    ctx->pc = 0x26f9ccu;
    // NOP
label_26f9d0:
    // 0x26f9d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26f9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_26f9d4:
    // 0x26f9d4: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x26f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_26f9d8:
    // 0x26f9d8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x26f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_26f9dc:
    // 0x26f9dc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26f9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_26f9e0:
    // 0x26f9e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26f9e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26f9e4:
    // 0x26f9e4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x26f9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_26f9e8:
    // 0x26f9e8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x26f9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_26f9ec:
    // 0x26f9ec: 0x14c2000a  bne         $a2, $v0, . + 4 + (0xA << 2)
label_26f9f0:
    if (ctx->pc == 0x26F9F0u) {
        ctx->pc = 0x26F9F0u;
            // 0x26f9f0: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->pc = 0x26F9F4u;
        goto label_26f9f4;
    }
    ctx->pc = 0x26F9ECu;
    {
        const bool branch_taken_0x26f9ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x26F9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9ECu;
            // 0x26f9f0: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9ec) {
            ctx->pc = 0x26FA18u;
            goto label_26fa18;
        }
    }
    ctx->pc = 0x26F9F4u;
label_26f9f4:
    // 0x26f9f4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x26f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_26f9f8:
    // 0x26f9f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26f9fc:
    if (ctx->pc == 0x26F9FCu) {
        ctx->pc = 0x26F9FCu;
            // 0x26f9fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x26FA00u;
        goto label_26fa00;
    }
    ctx->pc = 0x26F9F8u;
    {
        const bool branch_taken_0x26f9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9F8u;
            // 0x26f9fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9f8) {
            ctx->pc = 0x26FA18u;
            goto label_26fa18;
        }
    }
    ctx->pc = 0x26FA00u;
label_26fa00:
    // 0x26fa00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26fa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26fa04:
    // 0x26fa04: 0xc0973ba  jal         func_25CEE8
label_26fa08:
    if (ctx->pc == 0x26FA08u) {
        ctx->pc = 0x26FA08u;
            // 0x26fa08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26FA0Cu;
        goto label_26fa0c;
    }
    ctx->pc = 0x26FA04u;
    SET_GPR_U32(ctx, 31, 0x26FA0Cu);
    ctx->pc = 0x26FA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA04u;
            // 0x26fa08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (runtime->hasFunction(0x25CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA0Cu; }
        if (ctx->pc != 0x26FA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEE8_0x25cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA0Cu; }
        if (ctx->pc != 0x26FA0Cu) { return; }
    }
    ctx->pc = 0x26FA0Cu;
label_26fa0c:
    // 0x26fa0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fa0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fa10:
    // 0x26fa10: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_26fa14:
    if (ctx->pc == 0x26FA14u) {
        ctx->pc = 0x26FA14u;
            // 0x26fa14: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26FA18u;
        goto label_26fa18;
    }
    ctx->pc = 0x26FA10u;
    {
        const bool branch_taken_0x26fa10 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x26FA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA10u;
            // 0x26fa14: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa10) {
            ctx->pc = 0x26FA20u;
            goto label_26fa20;
        }
    }
    ctx->pc = 0x26FA18u;
label_26fa18:
    // 0x26fa18: 0x1000002a  b           . + 4 + (0x2A << 2)
label_26fa1c:
    if (ctx->pc == 0x26FA1Cu) {
        ctx->pc = 0x26FA1Cu;
            // 0x26fa1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x26FA20u;
        goto label_26fa20;
    }
    ctx->pc = 0x26FA18u;
    {
        const bool branch_taken_0x26fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA18u;
            // 0x26fa1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa18) {
            ctx->pc = 0x26FAC4u;
            goto label_26fac4;
        }
    }
    ctx->pc = 0x26FA20u;
label_26fa20:
    // 0x26fa20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fa24:
    // 0x26fa24: 0x24539570  addiu       $s3, $v0, -0x6A90
    ctx->pc = 0x26fa24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
label_26fa28:
    // 0x26fa28: 0xc099cf0  jal         func_2673C0
label_26fa2c:
    if (ctx->pc == 0x26FA2Cu) {
        ctx->pc = 0x26FA2Cu;
            // 0x26fa2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26FA30u;
        goto label_26fa30;
    }
    ctx->pc = 0x26FA28u;
    SET_GPR_U32(ctx, 31, 0x26FA30u);
    ctx->pc = 0x26FA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA28u;
            // 0x26fa2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2673C0u;
    if (runtime->hasFunction(0x2673C0u)) {
        auto targetFn = runtime->lookupFunction(0x2673C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA30u; }
        if (ctx->pc != 0x26FA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002673C0_0x2673c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA30u; }
        if (ctx->pc != 0x26FA30u) { return; }
    }
    ctx->pc = 0x26FA30u;
label_26fa30:
    // 0x26fa30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26fa30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fa34:
    // 0x26fa34: 0x6200020  bltz        $s1, . + 4 + (0x20 << 2)
label_26fa38:
    if (ctx->pc == 0x26FA38u) {
        ctx->pc = 0x26FA38u;
            // 0x26fa38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26FA3Cu;
        goto label_26fa3c;
    }
    ctx->pc = 0x26FA34u;
    {
        const bool branch_taken_0x26fa34 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x26FA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA34u;
            // 0x26fa38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa34) {
            ctx->pc = 0x26FAB8u;
            goto label_26fab8;
        }
    }
    ctx->pc = 0x26FA3Cu;
label_26fa3c:
    // 0x26fa3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fa40:
    // 0x26fa40: 0xc049cb6  jal         func_1272D8
label_26fa44:
    if (ctx->pc == 0x26FA44u) {
        ctx->pc = 0x26FA44u;
            // 0x26fa44: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x26FA48u;
        goto label_26fa48;
    }
    ctx->pc = 0x26FA40u;
    SET_GPR_U32(ctx, 31, 0x26FA48u);
    ctx->pc = 0x26FA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA40u;
            // 0x26fa44: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA48u; }
        if (ctx->pc != 0x26FA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA48u; }
        if (ctx->pc != 0x26FA48u) { return; }
    }
    ctx->pc = 0x26FA48u;
label_26fa48:
    // 0x26fa48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26fa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26fa4c:
    // 0x26fa4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26fa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26fa50:
    // 0x26fa50: 0xc04a966  jal         func_12A598
label_26fa54:
    if (ctx->pc == 0x26FA54u) {
        ctx->pc = 0x26FA54u;
            // 0x26fa54: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x26FA58u;
        goto label_26fa58;
    }
    ctx->pc = 0x26FA50u;
    SET_GPR_U32(ctx, 31, 0x26FA58u);
    ctx->pc = 0x26FA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA50u;
            // 0x26fa54: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA58u; }
        if (ctx->pc != 0x26FA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA58u; }
        if (ctx->pc != 0x26FA58u) { return; }
    }
    ctx->pc = 0x26FA58u;
label_26fa58:
    // 0x26fa58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fa5c:
    // 0x26fa5c: 0x3405c014  ori         $a1, $zero, 0xC014
    ctx->pc = 0x26fa5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49172);
label_26fa60:
    // 0x26fa60: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26fa60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_26fa64:
    // 0x26fa64: 0x34a56970  ori         $a1, $a1, 0x6970
    ctx->pc = 0x26fa64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26992);
label_26fa68:
    // 0x26fa68: 0xc097bf2  jal         func_25EFC8
label_26fa6c:
    if (ctx->pc == 0x26FA6Cu) {
        ctx->pc = 0x26FA6Cu;
            // 0x26fa6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26FA70u;
        goto label_26fa70;
    }
    ctx->pc = 0x26FA68u;
    SET_GPR_U32(ctx, 31, 0x26FA70u);
    ctx->pc = 0x26FA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA68u;
            // 0x26fa6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA70u; }
        if (ctx->pc != 0x26FA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA70u; }
        if (ctx->pc != 0x26FA70u) { return; }
    }
    ctx->pc = 0x26FA70u;
label_26fa70:
    // 0x26fa70: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
label_26fa74:
    if (ctx->pc == 0x26FA74u) {
        ctx->pc = 0x26FA74u;
            // 0x26fa74: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x26FA78u;
        goto label_26fa78;
    }
    ctx->pc = 0x26FA70u;
    {
        const bool branch_taken_0x26fa70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26FA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA70u;
            // 0x26fa74: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa70) {
            ctx->pc = 0x26FAB8u;
            goto label_26fab8;
        }
    }
    ctx->pc = 0x26FA78u;
label_26fa78:
    // 0x26fa78: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x26fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_26fa7c:
    // 0x26fa7c: 0x24421a40  addiu       $v0, $v0, 0x1A40
    ctx->pc = 0x26fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6720));
label_26fa80:
    // 0x26fa80: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x26fa80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_26fa84:
    // 0x26fa84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26fa88:
    // 0x26fa88: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x26fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_26fa8c:
    // 0x26fa8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26fa90:
    // 0x26fa90: 0x24841b90  addiu       $a0, $a0, 0x1B90
    ctx->pc = 0x26fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7056));
label_26fa94:
    // 0x26fa94: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x26fa94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_26fa98:
    // 0x26fa98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26fa98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26fa9c:
    // 0x26fa9c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x26fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_26faa0:
    // 0x26faa0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x26faa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_26faa4:
    // 0x26faa4: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x26faa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_26faa8:
    // 0x26faa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26faa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26faac:
    // 0x26faac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x26faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_26fab0:
    // 0x26fab0: 0xc099ee0  jal         func_267B80
label_26fab4:
    if (ctx->pc == 0x26FAB4u) {
        ctx->pc = 0x26FAB4u;
            // 0x26fab4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x26FAB8u;
        goto label_26fab8;
    }
    ctx->pc = 0x26FAB0u;
    SET_GPR_U32(ctx, 31, 0x26FAB8u);
    ctx->pc = 0x26FAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAB0u;
            // 0x26fab4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267B80u;
    if (runtime->hasFunction(0x267B80u)) {
        auto targetFn = runtime->lookupFunction(0x267B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAB8u; }
        if (ctx->pc != 0x26FAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267B80_0x267b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAB8u; }
        if (ctx->pc != 0x26FAB8u) { return; }
    }
    ctx->pc = 0x26FAB8u;
label_26fab8:
    // 0x26fab8: 0xc097c9e  jal         func_25F278
label_26fabc:
    if (ctx->pc == 0x26FABCu) {
        ctx->pc = 0x26FABCu;
            // 0x26fabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26FAC0u;
        goto label_26fac0;
    }
    ctx->pc = 0x26FAB8u;
    SET_GPR_U32(ctx, 31, 0x26FAC0u);
    ctx->pc = 0x26FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAB8u;
            // 0x26fabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAC0u; }
        if (ctx->pc != 0x26FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAC0u; }
        if (ctx->pc != 0x26FAC0u) { return; }
    }
    ctx->pc = 0x26FAC0u;
label_26fac0:
    // 0x26fac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26fac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fac4:
    // 0x26fac4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26fac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26fac8:
    // 0x26fac8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x26fac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26facc:
    // 0x26facc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x26faccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26fad0:
    // 0x26fad0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x26fad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26fad4:
    // 0x26fad4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x26fad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26fad8:
    // 0x26fad8: 0x3e00008  jr          $ra
label_26fadc:
    if (ctx->pc == 0x26FADCu) {
        ctx->pc = 0x26FADCu;
            // 0x26fadc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x26FAE0u;
        goto label_fallthrough_0x26fad8;
    }
    ctx->pc = 0x26FAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAD8u;
            // 0x26fadc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26fad8:
    ctx->pc = 0x26FAE0u;
    ctx->pc = 0x26fae0u;
}
