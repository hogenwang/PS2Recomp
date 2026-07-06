#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023A5B0
// Address: 0x23a5b0 - 0x23b460
void sub_0023A5B0_0x23a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A5B0_0x23a5b0");
#endif

    switch (ctx->pc) {
        case 0x23a5b0u: goto label_23a5b0;
        case 0x23a5b4u: goto label_23a5b4;
        case 0x23a5b8u: goto label_23a5b8;
        case 0x23a5bcu: goto label_23a5bc;
        case 0x23a5c0u: goto label_23a5c0;
        case 0x23a5c4u: goto label_23a5c4;
        case 0x23a5c8u: goto label_23a5c8;
        case 0x23a5ccu: goto label_23a5cc;
        case 0x23a5d0u: goto label_23a5d0;
        case 0x23a5d4u: goto label_23a5d4;
        case 0x23a5d8u: goto label_23a5d8;
        case 0x23a5dcu: goto label_23a5dc;
        case 0x23a5e0u: goto label_23a5e0;
        case 0x23a5e4u: goto label_23a5e4;
        case 0x23a5e8u: goto label_23a5e8;
        case 0x23a5ecu: goto label_23a5ec;
        case 0x23a5f0u: goto label_23a5f0;
        case 0x23a5f4u: goto label_23a5f4;
        case 0x23a5f8u: goto label_23a5f8;
        case 0x23a5fcu: goto label_23a5fc;
        case 0x23a600u: goto label_23a600;
        case 0x23a604u: goto label_23a604;
        case 0x23a608u: goto label_23a608;
        case 0x23a60cu: goto label_23a60c;
        case 0x23a610u: goto label_23a610;
        case 0x23a614u: goto label_23a614;
        case 0x23a618u: goto label_23a618;
        case 0x23a61cu: goto label_23a61c;
        case 0x23a620u: goto label_23a620;
        case 0x23a624u: goto label_23a624;
        case 0x23a628u: goto label_23a628;
        case 0x23a62cu: goto label_23a62c;
        case 0x23a630u: goto label_23a630;
        case 0x23a634u: goto label_23a634;
        case 0x23a638u: goto label_23a638;
        case 0x23a63cu: goto label_23a63c;
        case 0x23a640u: goto label_23a640;
        case 0x23a644u: goto label_23a644;
        case 0x23a648u: goto label_23a648;
        case 0x23a64cu: goto label_23a64c;
        case 0x23a650u: goto label_23a650;
        case 0x23a654u: goto label_23a654;
        case 0x23a658u: goto label_23a658;
        case 0x23a65cu: goto label_23a65c;
        case 0x23a660u: goto label_23a660;
        case 0x23a664u: goto label_23a664;
        case 0x23a668u: goto label_23a668;
        case 0x23a66cu: goto label_23a66c;
        case 0x23a670u: goto label_23a670;
        case 0x23a674u: goto label_23a674;
        case 0x23a678u: goto label_23a678;
        case 0x23a67cu: goto label_23a67c;
        case 0x23a680u: goto label_23a680;
        case 0x23a684u: goto label_23a684;
        case 0x23a688u: goto label_23a688;
        case 0x23a68cu: goto label_23a68c;
        case 0x23a690u: goto label_23a690;
        case 0x23a694u: goto label_23a694;
        case 0x23a698u: goto label_23a698;
        case 0x23a69cu: goto label_23a69c;
        case 0x23a6a0u: goto label_23a6a0;
        case 0x23a6a4u: goto label_23a6a4;
        case 0x23a6a8u: goto label_23a6a8;
        case 0x23a6acu: goto label_23a6ac;
        case 0x23a6b0u: goto label_23a6b0;
        case 0x23a6b4u: goto label_23a6b4;
        case 0x23a6b8u: goto label_23a6b8;
        case 0x23a6bcu: goto label_23a6bc;
        case 0x23a6c0u: goto label_23a6c0;
        case 0x23a6c4u: goto label_23a6c4;
        case 0x23a6c8u: goto label_23a6c8;
        case 0x23a6ccu: goto label_23a6cc;
        case 0x23a6d0u: goto label_23a6d0;
        case 0x23a6d4u: goto label_23a6d4;
        case 0x23a6d8u: goto label_23a6d8;
        case 0x23a6dcu: goto label_23a6dc;
        case 0x23a6e0u: goto label_23a6e0;
        case 0x23a6e4u: goto label_23a6e4;
        case 0x23a6e8u: goto label_23a6e8;
        case 0x23a6ecu: goto label_23a6ec;
        case 0x23a6f0u: goto label_23a6f0;
        case 0x23a6f4u: goto label_23a6f4;
        case 0x23a6f8u: goto label_23a6f8;
        case 0x23a6fcu: goto label_23a6fc;
        case 0x23a700u: goto label_23a700;
        case 0x23a704u: goto label_23a704;
        case 0x23a708u: goto label_23a708;
        case 0x23a70cu: goto label_23a70c;
        case 0x23a710u: goto label_23a710;
        case 0x23a714u: goto label_23a714;
        case 0x23a718u: goto label_23a718;
        case 0x23a71cu: goto label_23a71c;
        case 0x23a720u: goto label_23a720;
        case 0x23a724u: goto label_23a724;
        case 0x23a728u: goto label_23a728;
        case 0x23a72cu: goto label_23a72c;
        case 0x23a730u: goto label_23a730;
        case 0x23a734u: goto label_23a734;
        case 0x23a738u: goto label_23a738;
        case 0x23a73cu: goto label_23a73c;
        case 0x23a740u: goto label_23a740;
        case 0x23a744u: goto label_23a744;
        case 0x23a748u: goto label_23a748;
        case 0x23a74cu: goto label_23a74c;
        case 0x23a750u: goto label_23a750;
        case 0x23a754u: goto label_23a754;
        case 0x23a758u: goto label_23a758;
        case 0x23a75cu: goto label_23a75c;
        case 0x23a760u: goto label_23a760;
        case 0x23a764u: goto label_23a764;
        case 0x23a768u: goto label_23a768;
        case 0x23a76cu: goto label_23a76c;
        case 0x23a770u: goto label_23a770;
        case 0x23a774u: goto label_23a774;
        case 0x23a778u: goto label_23a778;
        case 0x23a77cu: goto label_23a77c;
        case 0x23a780u: goto label_23a780;
        case 0x23a784u: goto label_23a784;
        case 0x23a788u: goto label_23a788;
        case 0x23a78cu: goto label_23a78c;
        case 0x23a790u: goto label_23a790;
        case 0x23a794u: goto label_23a794;
        case 0x23a798u: goto label_23a798;
        case 0x23a79cu: goto label_23a79c;
        case 0x23a7a0u: goto label_23a7a0;
        case 0x23a7a4u: goto label_23a7a4;
        case 0x23a7a8u: goto label_23a7a8;
        case 0x23a7acu: goto label_23a7ac;
        case 0x23a7b0u: goto label_23a7b0;
        case 0x23a7b4u: goto label_23a7b4;
        case 0x23a7b8u: goto label_23a7b8;
        case 0x23a7bcu: goto label_23a7bc;
        case 0x23a7c0u: goto label_23a7c0;
        case 0x23a7c4u: goto label_23a7c4;
        case 0x23a7c8u: goto label_23a7c8;
        case 0x23a7ccu: goto label_23a7cc;
        case 0x23a7d0u: goto label_23a7d0;
        case 0x23a7d4u: goto label_23a7d4;
        case 0x23a7d8u: goto label_23a7d8;
        case 0x23a7dcu: goto label_23a7dc;
        case 0x23a7e0u: goto label_23a7e0;
        case 0x23a7e4u: goto label_23a7e4;
        case 0x23a7e8u: goto label_23a7e8;
        case 0x23a7ecu: goto label_23a7ec;
        case 0x23a7f0u: goto label_23a7f0;
        case 0x23a7f4u: goto label_23a7f4;
        case 0x23a7f8u: goto label_23a7f8;
        case 0x23a7fcu: goto label_23a7fc;
        case 0x23a800u: goto label_23a800;
        case 0x23a804u: goto label_23a804;
        case 0x23a808u: goto label_23a808;
        case 0x23a80cu: goto label_23a80c;
        case 0x23a810u: goto label_23a810;
        case 0x23a814u: goto label_23a814;
        case 0x23a818u: goto label_23a818;
        case 0x23a81cu: goto label_23a81c;
        case 0x23a820u: goto label_23a820;
        case 0x23a824u: goto label_23a824;
        case 0x23a828u: goto label_23a828;
        case 0x23a82cu: goto label_23a82c;
        case 0x23a830u: goto label_23a830;
        case 0x23a834u: goto label_23a834;
        case 0x23a838u: goto label_23a838;
        case 0x23a83cu: goto label_23a83c;
        case 0x23a840u: goto label_23a840;
        case 0x23a844u: goto label_23a844;
        case 0x23a848u: goto label_23a848;
        case 0x23a84cu: goto label_23a84c;
        case 0x23a850u: goto label_23a850;
        case 0x23a854u: goto label_23a854;
        case 0x23a858u: goto label_23a858;
        case 0x23a85cu: goto label_23a85c;
        case 0x23a860u: goto label_23a860;
        case 0x23a864u: goto label_23a864;
        case 0x23a868u: goto label_23a868;
        case 0x23a86cu: goto label_23a86c;
        case 0x23a870u: goto label_23a870;
        case 0x23a874u: goto label_23a874;
        case 0x23a878u: goto label_23a878;
        case 0x23a87cu: goto label_23a87c;
        case 0x23a880u: goto label_23a880;
        case 0x23a884u: goto label_23a884;
        case 0x23a888u: goto label_23a888;
        case 0x23a88cu: goto label_23a88c;
        case 0x23a890u: goto label_23a890;
        case 0x23a894u: goto label_23a894;
        case 0x23a898u: goto label_23a898;
        case 0x23a89cu: goto label_23a89c;
        case 0x23a8a0u: goto label_23a8a0;
        case 0x23a8a4u: goto label_23a8a4;
        case 0x23a8a8u: goto label_23a8a8;
        case 0x23a8acu: goto label_23a8ac;
        case 0x23a8b0u: goto label_23a8b0;
        case 0x23a8b4u: goto label_23a8b4;
        case 0x23a8b8u: goto label_23a8b8;
        case 0x23a8bcu: goto label_23a8bc;
        case 0x23a8c0u: goto label_23a8c0;
        case 0x23a8c4u: goto label_23a8c4;
        case 0x23a8c8u: goto label_23a8c8;
        case 0x23a8ccu: goto label_23a8cc;
        case 0x23a8d0u: goto label_23a8d0;
        case 0x23a8d4u: goto label_23a8d4;
        case 0x23a8d8u: goto label_23a8d8;
        case 0x23a8dcu: goto label_23a8dc;
        case 0x23a8e0u: goto label_23a8e0;
        case 0x23a8e4u: goto label_23a8e4;
        case 0x23a8e8u: goto label_23a8e8;
        case 0x23a8ecu: goto label_23a8ec;
        case 0x23a8f0u: goto label_23a8f0;
        case 0x23a8f4u: goto label_23a8f4;
        case 0x23a8f8u: goto label_23a8f8;
        case 0x23a8fcu: goto label_23a8fc;
        case 0x23a900u: goto label_23a900;
        case 0x23a904u: goto label_23a904;
        case 0x23a908u: goto label_23a908;
        case 0x23a90cu: goto label_23a90c;
        case 0x23a910u: goto label_23a910;
        case 0x23a914u: goto label_23a914;
        case 0x23a918u: goto label_23a918;
        case 0x23a91cu: goto label_23a91c;
        case 0x23a920u: goto label_23a920;
        case 0x23a924u: goto label_23a924;
        case 0x23a928u: goto label_23a928;
        case 0x23a92cu: goto label_23a92c;
        case 0x23a930u: goto label_23a930;
        case 0x23a934u: goto label_23a934;
        case 0x23a938u: goto label_23a938;
        case 0x23a93cu: goto label_23a93c;
        case 0x23a940u: goto label_23a940;
        case 0x23a944u: goto label_23a944;
        case 0x23a948u: goto label_23a948;
        case 0x23a94cu: goto label_23a94c;
        case 0x23a950u: goto label_23a950;
        case 0x23a954u: goto label_23a954;
        case 0x23a958u: goto label_23a958;
        case 0x23a95cu: goto label_23a95c;
        case 0x23a960u: goto label_23a960;
        case 0x23a964u: goto label_23a964;
        case 0x23a968u: goto label_23a968;
        case 0x23a96cu: goto label_23a96c;
        case 0x23a970u: goto label_23a970;
        case 0x23a974u: goto label_23a974;
        case 0x23a978u: goto label_23a978;
        case 0x23a97cu: goto label_23a97c;
        case 0x23a980u: goto label_23a980;
        case 0x23a984u: goto label_23a984;
        case 0x23a988u: goto label_23a988;
        case 0x23a98cu: goto label_23a98c;
        case 0x23a990u: goto label_23a990;
        case 0x23a994u: goto label_23a994;
        case 0x23a998u: goto label_23a998;
        case 0x23a99cu: goto label_23a99c;
        case 0x23a9a0u: goto label_23a9a0;
        case 0x23a9a4u: goto label_23a9a4;
        case 0x23a9a8u: goto label_23a9a8;
        case 0x23a9acu: goto label_23a9ac;
        case 0x23a9b0u: goto label_23a9b0;
        case 0x23a9b4u: goto label_23a9b4;
        case 0x23a9b8u: goto label_23a9b8;
        case 0x23a9bcu: goto label_23a9bc;
        case 0x23a9c0u: goto label_23a9c0;
        case 0x23a9c4u: goto label_23a9c4;
        case 0x23a9c8u: goto label_23a9c8;
        case 0x23a9ccu: goto label_23a9cc;
        case 0x23a9d0u: goto label_23a9d0;
        case 0x23a9d4u: goto label_23a9d4;
        case 0x23a9d8u: goto label_23a9d8;
        case 0x23a9dcu: goto label_23a9dc;
        case 0x23a9e0u: goto label_23a9e0;
        case 0x23a9e4u: goto label_23a9e4;
        case 0x23a9e8u: goto label_23a9e8;
        case 0x23a9ecu: goto label_23a9ec;
        case 0x23a9f0u: goto label_23a9f0;
        case 0x23a9f4u: goto label_23a9f4;
        case 0x23a9f8u: goto label_23a9f8;
        case 0x23a9fcu: goto label_23a9fc;
        case 0x23aa00u: goto label_23aa00;
        case 0x23aa04u: goto label_23aa04;
        case 0x23aa08u: goto label_23aa08;
        case 0x23aa0cu: goto label_23aa0c;
        case 0x23aa10u: goto label_23aa10;
        case 0x23aa14u: goto label_23aa14;
        case 0x23aa18u: goto label_23aa18;
        case 0x23aa1cu: goto label_23aa1c;
        case 0x23aa20u: goto label_23aa20;
        case 0x23aa24u: goto label_23aa24;
        case 0x23aa28u: goto label_23aa28;
        case 0x23aa2cu: goto label_23aa2c;
        case 0x23aa30u: goto label_23aa30;
        case 0x23aa34u: goto label_23aa34;
        case 0x23aa38u: goto label_23aa38;
        case 0x23aa3cu: goto label_23aa3c;
        case 0x23aa40u: goto label_23aa40;
        case 0x23aa44u: goto label_23aa44;
        case 0x23aa48u: goto label_23aa48;
        case 0x23aa4cu: goto label_23aa4c;
        case 0x23aa50u: goto label_23aa50;
        case 0x23aa54u: goto label_23aa54;
        case 0x23aa58u: goto label_23aa58;
        case 0x23aa5cu: goto label_23aa5c;
        case 0x23aa60u: goto label_23aa60;
        case 0x23aa64u: goto label_23aa64;
        case 0x23aa68u: goto label_23aa68;
        case 0x23aa6cu: goto label_23aa6c;
        case 0x23aa70u: goto label_23aa70;
        case 0x23aa74u: goto label_23aa74;
        case 0x23aa78u: goto label_23aa78;
        case 0x23aa7cu: goto label_23aa7c;
        case 0x23aa80u: goto label_23aa80;
        case 0x23aa84u: goto label_23aa84;
        case 0x23aa88u: goto label_23aa88;
        case 0x23aa8cu: goto label_23aa8c;
        case 0x23aa90u: goto label_23aa90;
        case 0x23aa94u: goto label_23aa94;
        case 0x23aa98u: goto label_23aa98;
        case 0x23aa9cu: goto label_23aa9c;
        case 0x23aaa0u: goto label_23aaa0;
        case 0x23aaa4u: goto label_23aaa4;
        case 0x23aaa8u: goto label_23aaa8;
        case 0x23aaacu: goto label_23aaac;
        case 0x23aab0u: goto label_23aab0;
        case 0x23aab4u: goto label_23aab4;
        case 0x23aab8u: goto label_23aab8;
        case 0x23aabcu: goto label_23aabc;
        case 0x23aac0u: goto label_23aac0;
        case 0x23aac4u: goto label_23aac4;
        case 0x23aac8u: goto label_23aac8;
        case 0x23aaccu: goto label_23aacc;
        case 0x23aad0u: goto label_23aad0;
        case 0x23aad4u: goto label_23aad4;
        case 0x23aad8u: goto label_23aad8;
        case 0x23aadcu: goto label_23aadc;
        case 0x23aae0u: goto label_23aae0;
        case 0x23aae4u: goto label_23aae4;
        case 0x23aae8u: goto label_23aae8;
        case 0x23aaecu: goto label_23aaec;
        case 0x23aaf0u: goto label_23aaf0;
        case 0x23aaf4u: goto label_23aaf4;
        case 0x23aaf8u: goto label_23aaf8;
        case 0x23aafcu: goto label_23aafc;
        case 0x23ab00u: goto label_23ab00;
        case 0x23ab04u: goto label_23ab04;
        case 0x23ab08u: goto label_23ab08;
        case 0x23ab0cu: goto label_23ab0c;
        case 0x23ab10u: goto label_23ab10;
        case 0x23ab14u: goto label_23ab14;
        case 0x23ab18u: goto label_23ab18;
        case 0x23ab1cu: goto label_23ab1c;
        case 0x23ab20u: goto label_23ab20;
        case 0x23ab24u: goto label_23ab24;
        case 0x23ab28u: goto label_23ab28;
        case 0x23ab2cu: goto label_23ab2c;
        case 0x23ab30u: goto label_23ab30;
        case 0x23ab34u: goto label_23ab34;
        case 0x23ab38u: goto label_23ab38;
        case 0x23ab3cu: goto label_23ab3c;
        case 0x23ab40u: goto label_23ab40;
        case 0x23ab44u: goto label_23ab44;
        case 0x23ab48u: goto label_23ab48;
        case 0x23ab4cu: goto label_23ab4c;
        case 0x23ab50u: goto label_23ab50;
        case 0x23ab54u: goto label_23ab54;
        case 0x23ab58u: goto label_23ab58;
        case 0x23ab5cu: goto label_23ab5c;
        case 0x23ab60u: goto label_23ab60;
        case 0x23ab64u: goto label_23ab64;
        case 0x23ab68u: goto label_23ab68;
        case 0x23ab6cu: goto label_23ab6c;
        case 0x23ab70u: goto label_23ab70;
        case 0x23ab74u: goto label_23ab74;
        case 0x23ab78u: goto label_23ab78;
        case 0x23ab7cu: goto label_23ab7c;
        case 0x23ab80u: goto label_23ab80;
        case 0x23ab84u: goto label_23ab84;
        case 0x23ab88u: goto label_23ab88;
        case 0x23ab8cu: goto label_23ab8c;
        case 0x23ab90u: goto label_23ab90;
        case 0x23ab94u: goto label_23ab94;
        case 0x23ab98u: goto label_23ab98;
        case 0x23ab9cu: goto label_23ab9c;
        case 0x23aba0u: goto label_23aba0;
        case 0x23aba4u: goto label_23aba4;
        case 0x23aba8u: goto label_23aba8;
        case 0x23abacu: goto label_23abac;
        case 0x23abb0u: goto label_23abb0;
        case 0x23abb4u: goto label_23abb4;
        case 0x23abb8u: goto label_23abb8;
        case 0x23abbcu: goto label_23abbc;
        case 0x23abc0u: goto label_23abc0;
        case 0x23abc4u: goto label_23abc4;
        case 0x23abc8u: goto label_23abc8;
        case 0x23abccu: goto label_23abcc;
        case 0x23abd0u: goto label_23abd0;
        case 0x23abd4u: goto label_23abd4;
        case 0x23abd8u: goto label_23abd8;
        case 0x23abdcu: goto label_23abdc;
        case 0x23abe0u: goto label_23abe0;
        case 0x23abe4u: goto label_23abe4;
        case 0x23abe8u: goto label_23abe8;
        case 0x23abecu: goto label_23abec;
        case 0x23abf0u: goto label_23abf0;
        case 0x23abf4u: goto label_23abf4;
        case 0x23abf8u: goto label_23abf8;
        case 0x23abfcu: goto label_23abfc;
        case 0x23ac00u: goto label_23ac00;
        case 0x23ac04u: goto label_23ac04;
        case 0x23ac08u: goto label_23ac08;
        case 0x23ac0cu: goto label_23ac0c;
        case 0x23ac10u: goto label_23ac10;
        case 0x23ac14u: goto label_23ac14;
        case 0x23ac18u: goto label_23ac18;
        case 0x23ac1cu: goto label_23ac1c;
        case 0x23ac20u: goto label_23ac20;
        case 0x23ac24u: goto label_23ac24;
        case 0x23ac28u: goto label_23ac28;
        case 0x23ac2cu: goto label_23ac2c;
        case 0x23ac30u: goto label_23ac30;
        case 0x23ac34u: goto label_23ac34;
        case 0x23ac38u: goto label_23ac38;
        case 0x23ac3cu: goto label_23ac3c;
        case 0x23ac40u: goto label_23ac40;
        case 0x23ac44u: goto label_23ac44;
        case 0x23ac48u: goto label_23ac48;
        case 0x23ac4cu: goto label_23ac4c;
        case 0x23ac50u: goto label_23ac50;
        case 0x23ac54u: goto label_23ac54;
        case 0x23ac58u: goto label_23ac58;
        case 0x23ac5cu: goto label_23ac5c;
        case 0x23ac60u: goto label_23ac60;
        case 0x23ac64u: goto label_23ac64;
        case 0x23ac68u: goto label_23ac68;
        case 0x23ac6cu: goto label_23ac6c;
        case 0x23ac70u: goto label_23ac70;
        case 0x23ac74u: goto label_23ac74;
        case 0x23ac78u: goto label_23ac78;
        case 0x23ac7cu: goto label_23ac7c;
        case 0x23ac80u: goto label_23ac80;
        case 0x23ac84u: goto label_23ac84;
        case 0x23ac88u: goto label_23ac88;
        case 0x23ac8cu: goto label_23ac8c;
        case 0x23ac90u: goto label_23ac90;
        case 0x23ac94u: goto label_23ac94;
        case 0x23ac98u: goto label_23ac98;
        case 0x23ac9cu: goto label_23ac9c;
        case 0x23aca0u: goto label_23aca0;
        case 0x23aca4u: goto label_23aca4;
        case 0x23aca8u: goto label_23aca8;
        case 0x23acacu: goto label_23acac;
        case 0x23acb0u: goto label_23acb0;
        case 0x23acb4u: goto label_23acb4;
        case 0x23acb8u: goto label_23acb8;
        case 0x23acbcu: goto label_23acbc;
        case 0x23acc0u: goto label_23acc0;
        case 0x23acc4u: goto label_23acc4;
        case 0x23acc8u: goto label_23acc8;
        case 0x23acccu: goto label_23accc;
        case 0x23acd0u: goto label_23acd0;
        case 0x23acd4u: goto label_23acd4;
        case 0x23acd8u: goto label_23acd8;
        case 0x23acdcu: goto label_23acdc;
        case 0x23ace0u: goto label_23ace0;
        case 0x23ace4u: goto label_23ace4;
        case 0x23ace8u: goto label_23ace8;
        case 0x23acecu: goto label_23acec;
        case 0x23acf0u: goto label_23acf0;
        case 0x23acf4u: goto label_23acf4;
        case 0x23acf8u: goto label_23acf8;
        case 0x23acfcu: goto label_23acfc;
        case 0x23ad00u: goto label_23ad00;
        case 0x23ad04u: goto label_23ad04;
        case 0x23ad08u: goto label_23ad08;
        case 0x23ad0cu: goto label_23ad0c;
        case 0x23ad10u: goto label_23ad10;
        case 0x23ad14u: goto label_23ad14;
        case 0x23ad18u: goto label_23ad18;
        case 0x23ad1cu: goto label_23ad1c;
        case 0x23ad20u: goto label_23ad20;
        case 0x23ad24u: goto label_23ad24;
        case 0x23ad28u: goto label_23ad28;
        case 0x23ad2cu: goto label_23ad2c;
        case 0x23ad30u: goto label_23ad30;
        case 0x23ad34u: goto label_23ad34;
        case 0x23ad38u: goto label_23ad38;
        case 0x23ad3cu: goto label_23ad3c;
        case 0x23ad40u: goto label_23ad40;
        case 0x23ad44u: goto label_23ad44;
        case 0x23ad48u: goto label_23ad48;
        case 0x23ad4cu: goto label_23ad4c;
        case 0x23ad50u: goto label_23ad50;
        case 0x23ad54u: goto label_23ad54;
        case 0x23ad58u: goto label_23ad58;
        case 0x23ad5cu: goto label_23ad5c;
        case 0x23ad60u: goto label_23ad60;
        case 0x23ad64u: goto label_23ad64;
        case 0x23ad68u: goto label_23ad68;
        case 0x23ad6cu: goto label_23ad6c;
        case 0x23ad70u: goto label_23ad70;
        case 0x23ad74u: goto label_23ad74;
        case 0x23ad78u: goto label_23ad78;
        case 0x23ad7cu: goto label_23ad7c;
        case 0x23ad80u: goto label_23ad80;
        case 0x23ad84u: goto label_23ad84;
        case 0x23ad88u: goto label_23ad88;
        case 0x23ad8cu: goto label_23ad8c;
        case 0x23ad90u: goto label_23ad90;
        case 0x23ad94u: goto label_23ad94;
        case 0x23ad98u: goto label_23ad98;
        case 0x23ad9cu: goto label_23ad9c;
        case 0x23ada0u: goto label_23ada0;
        case 0x23ada4u: goto label_23ada4;
        case 0x23ada8u: goto label_23ada8;
        case 0x23adacu: goto label_23adac;
        case 0x23adb0u: goto label_23adb0;
        case 0x23adb4u: goto label_23adb4;
        case 0x23adb8u: goto label_23adb8;
        case 0x23adbcu: goto label_23adbc;
        case 0x23adc0u: goto label_23adc0;
        case 0x23adc4u: goto label_23adc4;
        case 0x23adc8u: goto label_23adc8;
        case 0x23adccu: goto label_23adcc;
        case 0x23add0u: goto label_23add0;
        case 0x23add4u: goto label_23add4;
        case 0x23add8u: goto label_23add8;
        case 0x23addcu: goto label_23addc;
        case 0x23ade0u: goto label_23ade0;
        case 0x23ade4u: goto label_23ade4;
        case 0x23ade8u: goto label_23ade8;
        case 0x23adecu: goto label_23adec;
        case 0x23adf0u: goto label_23adf0;
        case 0x23adf4u: goto label_23adf4;
        case 0x23adf8u: goto label_23adf8;
        case 0x23adfcu: goto label_23adfc;
        case 0x23ae00u: goto label_23ae00;
        case 0x23ae04u: goto label_23ae04;
        case 0x23ae08u: goto label_23ae08;
        case 0x23ae0cu: goto label_23ae0c;
        case 0x23ae10u: goto label_23ae10;
        case 0x23ae14u: goto label_23ae14;
        case 0x23ae18u: goto label_23ae18;
        case 0x23ae1cu: goto label_23ae1c;
        case 0x23ae20u: goto label_23ae20;
        case 0x23ae24u: goto label_23ae24;
        case 0x23ae28u: goto label_23ae28;
        case 0x23ae2cu: goto label_23ae2c;
        case 0x23ae30u: goto label_23ae30;
        case 0x23ae34u: goto label_23ae34;
        case 0x23ae38u: goto label_23ae38;
        case 0x23ae3cu: goto label_23ae3c;
        case 0x23ae40u: goto label_23ae40;
        case 0x23ae44u: goto label_23ae44;
        case 0x23ae48u: goto label_23ae48;
        case 0x23ae4cu: goto label_23ae4c;
        case 0x23ae50u: goto label_23ae50;
        case 0x23ae54u: goto label_23ae54;
        case 0x23ae58u: goto label_23ae58;
        case 0x23ae5cu: goto label_23ae5c;
        case 0x23ae60u: goto label_23ae60;
        case 0x23ae64u: goto label_23ae64;
        case 0x23ae68u: goto label_23ae68;
        case 0x23ae6cu: goto label_23ae6c;
        case 0x23ae70u: goto label_23ae70;
        case 0x23ae74u: goto label_23ae74;
        case 0x23ae78u: goto label_23ae78;
        case 0x23ae7cu: goto label_23ae7c;
        case 0x23ae80u: goto label_23ae80;
        case 0x23ae84u: goto label_23ae84;
        case 0x23ae88u: goto label_23ae88;
        case 0x23ae8cu: goto label_23ae8c;
        case 0x23ae90u: goto label_23ae90;
        case 0x23ae94u: goto label_23ae94;
        case 0x23ae98u: goto label_23ae98;
        case 0x23ae9cu: goto label_23ae9c;
        case 0x23aea0u: goto label_23aea0;
        case 0x23aea4u: goto label_23aea4;
        case 0x23aea8u: goto label_23aea8;
        case 0x23aeacu: goto label_23aeac;
        case 0x23aeb0u: goto label_23aeb0;
        case 0x23aeb4u: goto label_23aeb4;
        case 0x23aeb8u: goto label_23aeb8;
        case 0x23aebcu: goto label_23aebc;
        case 0x23aec0u: goto label_23aec0;
        case 0x23aec4u: goto label_23aec4;
        case 0x23aec8u: goto label_23aec8;
        case 0x23aeccu: goto label_23aecc;
        case 0x23aed0u: goto label_23aed0;
        case 0x23aed4u: goto label_23aed4;
        case 0x23aed8u: goto label_23aed8;
        case 0x23aedcu: goto label_23aedc;
        case 0x23aee0u: goto label_23aee0;
        case 0x23aee4u: goto label_23aee4;
        case 0x23aee8u: goto label_23aee8;
        case 0x23aeecu: goto label_23aeec;
        case 0x23aef0u: goto label_23aef0;
        case 0x23aef4u: goto label_23aef4;
        case 0x23aef8u: goto label_23aef8;
        case 0x23aefcu: goto label_23aefc;
        case 0x23af00u: goto label_23af00;
        case 0x23af04u: goto label_23af04;
        case 0x23af08u: goto label_23af08;
        case 0x23af0cu: goto label_23af0c;
        case 0x23af10u: goto label_23af10;
        case 0x23af14u: goto label_23af14;
        case 0x23af18u: goto label_23af18;
        case 0x23af1cu: goto label_23af1c;
        case 0x23af20u: goto label_23af20;
        case 0x23af24u: goto label_23af24;
        case 0x23af28u: goto label_23af28;
        case 0x23af2cu: goto label_23af2c;
        case 0x23af30u: goto label_23af30;
        case 0x23af34u: goto label_23af34;
        case 0x23af38u: goto label_23af38;
        case 0x23af3cu: goto label_23af3c;
        case 0x23af40u: goto label_23af40;
        case 0x23af44u: goto label_23af44;
        case 0x23af48u: goto label_23af48;
        case 0x23af4cu: goto label_23af4c;
        case 0x23af50u: goto label_23af50;
        case 0x23af54u: goto label_23af54;
        case 0x23af58u: goto label_23af58;
        case 0x23af5cu: goto label_23af5c;
        case 0x23af60u: goto label_23af60;
        case 0x23af64u: goto label_23af64;
        case 0x23af68u: goto label_23af68;
        case 0x23af6cu: goto label_23af6c;
        case 0x23af70u: goto label_23af70;
        case 0x23af74u: goto label_23af74;
        case 0x23af78u: goto label_23af78;
        case 0x23af7cu: goto label_23af7c;
        case 0x23af80u: goto label_23af80;
        case 0x23af84u: goto label_23af84;
        case 0x23af88u: goto label_23af88;
        case 0x23af8cu: goto label_23af8c;
        case 0x23af90u: goto label_23af90;
        case 0x23af94u: goto label_23af94;
        case 0x23af98u: goto label_23af98;
        case 0x23af9cu: goto label_23af9c;
        case 0x23afa0u: goto label_23afa0;
        case 0x23afa4u: goto label_23afa4;
        case 0x23afa8u: goto label_23afa8;
        case 0x23afacu: goto label_23afac;
        case 0x23afb0u: goto label_23afb0;
        case 0x23afb4u: goto label_23afb4;
        case 0x23afb8u: goto label_23afb8;
        case 0x23afbcu: goto label_23afbc;
        case 0x23afc0u: goto label_23afc0;
        case 0x23afc4u: goto label_23afc4;
        case 0x23afc8u: goto label_23afc8;
        case 0x23afccu: goto label_23afcc;
        case 0x23afd0u: goto label_23afd0;
        case 0x23afd4u: goto label_23afd4;
        case 0x23afd8u: goto label_23afd8;
        case 0x23afdcu: goto label_23afdc;
        case 0x23afe0u: goto label_23afe0;
        case 0x23afe4u: goto label_23afe4;
        case 0x23afe8u: goto label_23afe8;
        case 0x23afecu: goto label_23afec;
        case 0x23aff0u: goto label_23aff0;
        case 0x23aff4u: goto label_23aff4;
        case 0x23aff8u: goto label_23aff8;
        case 0x23affcu: goto label_23affc;
        case 0x23b000u: goto label_23b000;
        case 0x23b004u: goto label_23b004;
        case 0x23b008u: goto label_23b008;
        case 0x23b00cu: goto label_23b00c;
        case 0x23b010u: goto label_23b010;
        case 0x23b014u: goto label_23b014;
        case 0x23b018u: goto label_23b018;
        case 0x23b01cu: goto label_23b01c;
        case 0x23b020u: goto label_23b020;
        case 0x23b024u: goto label_23b024;
        case 0x23b028u: goto label_23b028;
        case 0x23b02cu: goto label_23b02c;
        case 0x23b030u: goto label_23b030;
        case 0x23b034u: goto label_23b034;
        case 0x23b038u: goto label_23b038;
        case 0x23b03cu: goto label_23b03c;
        case 0x23b040u: goto label_23b040;
        case 0x23b044u: goto label_23b044;
        case 0x23b048u: goto label_23b048;
        case 0x23b04cu: goto label_23b04c;
        case 0x23b050u: goto label_23b050;
        case 0x23b054u: goto label_23b054;
        case 0x23b058u: goto label_23b058;
        case 0x23b05cu: goto label_23b05c;
        case 0x23b060u: goto label_23b060;
        case 0x23b064u: goto label_23b064;
        case 0x23b068u: goto label_23b068;
        case 0x23b06cu: goto label_23b06c;
        case 0x23b070u: goto label_23b070;
        case 0x23b074u: goto label_23b074;
        case 0x23b078u: goto label_23b078;
        case 0x23b07cu: goto label_23b07c;
        case 0x23b080u: goto label_23b080;
        case 0x23b084u: goto label_23b084;
        case 0x23b088u: goto label_23b088;
        case 0x23b08cu: goto label_23b08c;
        case 0x23b090u: goto label_23b090;
        case 0x23b094u: goto label_23b094;
        case 0x23b098u: goto label_23b098;
        case 0x23b09cu: goto label_23b09c;
        case 0x23b0a0u: goto label_23b0a0;
        case 0x23b0a4u: goto label_23b0a4;
        case 0x23b0a8u: goto label_23b0a8;
        case 0x23b0acu: goto label_23b0ac;
        case 0x23b0b0u: goto label_23b0b0;
        case 0x23b0b4u: goto label_23b0b4;
        case 0x23b0b8u: goto label_23b0b8;
        case 0x23b0bcu: goto label_23b0bc;
        case 0x23b0c0u: goto label_23b0c0;
        case 0x23b0c4u: goto label_23b0c4;
        case 0x23b0c8u: goto label_23b0c8;
        case 0x23b0ccu: goto label_23b0cc;
        case 0x23b0d0u: goto label_23b0d0;
        case 0x23b0d4u: goto label_23b0d4;
        case 0x23b0d8u: goto label_23b0d8;
        case 0x23b0dcu: goto label_23b0dc;
        case 0x23b0e0u: goto label_23b0e0;
        case 0x23b0e4u: goto label_23b0e4;
        case 0x23b0e8u: goto label_23b0e8;
        case 0x23b0ecu: goto label_23b0ec;
        case 0x23b0f0u: goto label_23b0f0;
        case 0x23b0f4u: goto label_23b0f4;
        case 0x23b0f8u: goto label_23b0f8;
        case 0x23b0fcu: goto label_23b0fc;
        case 0x23b100u: goto label_23b100;
        case 0x23b104u: goto label_23b104;
        case 0x23b108u: goto label_23b108;
        case 0x23b10cu: goto label_23b10c;
        case 0x23b110u: goto label_23b110;
        case 0x23b114u: goto label_23b114;
        case 0x23b118u: goto label_23b118;
        case 0x23b11cu: goto label_23b11c;
        case 0x23b120u: goto label_23b120;
        case 0x23b124u: goto label_23b124;
        case 0x23b128u: goto label_23b128;
        case 0x23b12cu: goto label_23b12c;
        case 0x23b130u: goto label_23b130;
        case 0x23b134u: goto label_23b134;
        case 0x23b138u: goto label_23b138;
        case 0x23b13cu: goto label_23b13c;
        case 0x23b140u: goto label_23b140;
        case 0x23b144u: goto label_23b144;
        case 0x23b148u: goto label_23b148;
        case 0x23b14cu: goto label_23b14c;
        case 0x23b150u: goto label_23b150;
        case 0x23b154u: goto label_23b154;
        case 0x23b158u: goto label_23b158;
        case 0x23b15cu: goto label_23b15c;
        case 0x23b160u: goto label_23b160;
        case 0x23b164u: goto label_23b164;
        case 0x23b168u: goto label_23b168;
        case 0x23b16cu: goto label_23b16c;
        case 0x23b170u: goto label_23b170;
        case 0x23b174u: goto label_23b174;
        case 0x23b178u: goto label_23b178;
        case 0x23b17cu: goto label_23b17c;
        case 0x23b180u: goto label_23b180;
        case 0x23b184u: goto label_23b184;
        case 0x23b188u: goto label_23b188;
        case 0x23b18cu: goto label_23b18c;
        case 0x23b190u: goto label_23b190;
        case 0x23b194u: goto label_23b194;
        case 0x23b198u: goto label_23b198;
        case 0x23b19cu: goto label_23b19c;
        case 0x23b1a0u: goto label_23b1a0;
        case 0x23b1a4u: goto label_23b1a4;
        case 0x23b1a8u: goto label_23b1a8;
        case 0x23b1acu: goto label_23b1ac;
        case 0x23b1b0u: goto label_23b1b0;
        case 0x23b1b4u: goto label_23b1b4;
        case 0x23b1b8u: goto label_23b1b8;
        case 0x23b1bcu: goto label_23b1bc;
        case 0x23b1c0u: goto label_23b1c0;
        case 0x23b1c4u: goto label_23b1c4;
        case 0x23b1c8u: goto label_23b1c8;
        case 0x23b1ccu: goto label_23b1cc;
        case 0x23b1d0u: goto label_23b1d0;
        case 0x23b1d4u: goto label_23b1d4;
        case 0x23b1d8u: goto label_23b1d8;
        case 0x23b1dcu: goto label_23b1dc;
        case 0x23b1e0u: goto label_23b1e0;
        case 0x23b1e4u: goto label_23b1e4;
        case 0x23b1e8u: goto label_23b1e8;
        case 0x23b1ecu: goto label_23b1ec;
        case 0x23b1f0u: goto label_23b1f0;
        case 0x23b1f4u: goto label_23b1f4;
        case 0x23b1f8u: goto label_23b1f8;
        case 0x23b1fcu: goto label_23b1fc;
        case 0x23b200u: goto label_23b200;
        case 0x23b204u: goto label_23b204;
        case 0x23b208u: goto label_23b208;
        case 0x23b20cu: goto label_23b20c;
        case 0x23b210u: goto label_23b210;
        case 0x23b214u: goto label_23b214;
        case 0x23b218u: goto label_23b218;
        case 0x23b21cu: goto label_23b21c;
        case 0x23b220u: goto label_23b220;
        case 0x23b224u: goto label_23b224;
        case 0x23b228u: goto label_23b228;
        case 0x23b22cu: goto label_23b22c;
        case 0x23b230u: goto label_23b230;
        case 0x23b234u: goto label_23b234;
        case 0x23b238u: goto label_23b238;
        case 0x23b23cu: goto label_23b23c;
        case 0x23b240u: goto label_23b240;
        case 0x23b244u: goto label_23b244;
        case 0x23b248u: goto label_23b248;
        case 0x23b24cu: goto label_23b24c;
        case 0x23b250u: goto label_23b250;
        case 0x23b254u: goto label_23b254;
        case 0x23b258u: goto label_23b258;
        case 0x23b25cu: goto label_23b25c;
        case 0x23b260u: goto label_23b260;
        case 0x23b264u: goto label_23b264;
        case 0x23b268u: goto label_23b268;
        case 0x23b26cu: goto label_23b26c;
        case 0x23b270u: goto label_23b270;
        case 0x23b274u: goto label_23b274;
        case 0x23b278u: goto label_23b278;
        case 0x23b27cu: goto label_23b27c;
        case 0x23b280u: goto label_23b280;
        case 0x23b284u: goto label_23b284;
        case 0x23b288u: goto label_23b288;
        case 0x23b28cu: goto label_23b28c;
        case 0x23b290u: goto label_23b290;
        case 0x23b294u: goto label_23b294;
        case 0x23b298u: goto label_23b298;
        case 0x23b29cu: goto label_23b29c;
        case 0x23b2a0u: goto label_23b2a0;
        case 0x23b2a4u: goto label_23b2a4;
        case 0x23b2a8u: goto label_23b2a8;
        case 0x23b2acu: goto label_23b2ac;
        case 0x23b2b0u: goto label_23b2b0;
        case 0x23b2b4u: goto label_23b2b4;
        case 0x23b2b8u: goto label_23b2b8;
        case 0x23b2bcu: goto label_23b2bc;
        case 0x23b2c0u: goto label_23b2c0;
        case 0x23b2c4u: goto label_23b2c4;
        case 0x23b2c8u: goto label_23b2c8;
        case 0x23b2ccu: goto label_23b2cc;
        case 0x23b2d0u: goto label_23b2d0;
        case 0x23b2d4u: goto label_23b2d4;
        case 0x23b2d8u: goto label_23b2d8;
        case 0x23b2dcu: goto label_23b2dc;
        case 0x23b2e0u: goto label_23b2e0;
        case 0x23b2e4u: goto label_23b2e4;
        case 0x23b2e8u: goto label_23b2e8;
        case 0x23b2ecu: goto label_23b2ec;
        case 0x23b2f0u: goto label_23b2f0;
        case 0x23b2f4u: goto label_23b2f4;
        case 0x23b2f8u: goto label_23b2f8;
        case 0x23b2fcu: goto label_23b2fc;
        case 0x23b300u: goto label_23b300;
        case 0x23b304u: goto label_23b304;
        case 0x23b308u: goto label_23b308;
        case 0x23b30cu: goto label_23b30c;
        case 0x23b310u: goto label_23b310;
        case 0x23b314u: goto label_23b314;
        case 0x23b318u: goto label_23b318;
        case 0x23b31cu: goto label_23b31c;
        case 0x23b320u: goto label_23b320;
        case 0x23b324u: goto label_23b324;
        case 0x23b328u: goto label_23b328;
        case 0x23b32cu: goto label_23b32c;
        case 0x23b330u: goto label_23b330;
        case 0x23b334u: goto label_23b334;
        case 0x23b338u: goto label_23b338;
        case 0x23b33cu: goto label_23b33c;
        case 0x23b340u: goto label_23b340;
        case 0x23b344u: goto label_23b344;
        case 0x23b348u: goto label_23b348;
        case 0x23b34cu: goto label_23b34c;
        case 0x23b350u: goto label_23b350;
        case 0x23b354u: goto label_23b354;
        case 0x23b358u: goto label_23b358;
        case 0x23b35cu: goto label_23b35c;
        case 0x23b360u: goto label_23b360;
        case 0x23b364u: goto label_23b364;
        case 0x23b368u: goto label_23b368;
        case 0x23b36cu: goto label_23b36c;
        case 0x23b370u: goto label_23b370;
        case 0x23b374u: goto label_23b374;
        case 0x23b378u: goto label_23b378;
        case 0x23b37cu: goto label_23b37c;
        case 0x23b380u: goto label_23b380;
        case 0x23b384u: goto label_23b384;
        case 0x23b388u: goto label_23b388;
        case 0x23b38cu: goto label_23b38c;
        case 0x23b390u: goto label_23b390;
        case 0x23b394u: goto label_23b394;
        case 0x23b398u: goto label_23b398;
        case 0x23b39cu: goto label_23b39c;
        case 0x23b3a0u: goto label_23b3a0;
        case 0x23b3a4u: goto label_23b3a4;
        case 0x23b3a8u: goto label_23b3a8;
        case 0x23b3acu: goto label_23b3ac;
        case 0x23b3b0u: goto label_23b3b0;
        case 0x23b3b4u: goto label_23b3b4;
        case 0x23b3b8u: goto label_23b3b8;
        case 0x23b3bcu: goto label_23b3bc;
        case 0x23b3c0u: goto label_23b3c0;
        case 0x23b3c4u: goto label_23b3c4;
        case 0x23b3c8u: goto label_23b3c8;
        case 0x23b3ccu: goto label_23b3cc;
        case 0x23b3d0u: goto label_23b3d0;
        case 0x23b3d4u: goto label_23b3d4;
        case 0x23b3d8u: goto label_23b3d8;
        case 0x23b3dcu: goto label_23b3dc;
        case 0x23b3e0u: goto label_23b3e0;
        case 0x23b3e4u: goto label_23b3e4;
        case 0x23b3e8u: goto label_23b3e8;
        case 0x23b3ecu: goto label_23b3ec;
        case 0x23b3f0u: goto label_23b3f0;
        case 0x23b3f4u: goto label_23b3f4;
        case 0x23b3f8u: goto label_23b3f8;
        case 0x23b3fcu: goto label_23b3fc;
        case 0x23b400u: goto label_23b400;
        case 0x23b404u: goto label_23b404;
        case 0x23b408u: goto label_23b408;
        case 0x23b40cu: goto label_23b40c;
        case 0x23b410u: goto label_23b410;
        case 0x23b414u: goto label_23b414;
        case 0x23b418u: goto label_23b418;
        case 0x23b41cu: goto label_23b41c;
        case 0x23b420u: goto label_23b420;
        case 0x23b424u: goto label_23b424;
        case 0x23b428u: goto label_23b428;
        case 0x23b42cu: goto label_23b42c;
        case 0x23b430u: goto label_23b430;
        case 0x23b434u: goto label_23b434;
        case 0x23b438u: goto label_23b438;
        case 0x23b43cu: goto label_23b43c;
        case 0x23b440u: goto label_23b440;
        case 0x23b444u: goto label_23b444;
        case 0x23b448u: goto label_23b448;
        case 0x23b44cu: goto label_23b44c;
        case 0x23b450u: goto label_23b450;
        case 0x23b454u: goto label_23b454;
        case 0x23b458u: goto label_23b458;
        case 0x23b45cu: goto label_23b45c;
        default: break;
    }

    ctx->pc = 0x23a5b0u;

label_23a5b0:
    // 0x23a5b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_23a5b4:
    // 0x23a5b4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x23a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_23a5b8:
    // 0x23a5b8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x23a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_23a5bc:
    // 0x23a5bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x23a5bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23a5c0:
    // 0x23a5c0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x23a5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_23a5c4:
    // 0x23a5c4: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x23a5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_23a5c8:
    // 0x23a5c8: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x23a5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_23a5cc:
    // 0x23a5cc: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x23a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_23a5d0:
    // 0x23a5d0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x23a5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_23a5d4:
    // 0x23a5d4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x23a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_23a5d8:
    // 0x23a5d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x23a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_23a5dc:
    // 0x23a5dc: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x23a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
label_23a5e0:
    // 0x23a5e0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x23a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_23a5e4:
    // 0x23a5e4: 0x8cd60018  lw          $s6, 0x18($a2)
    ctx->pc = 0x23a5e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_23a5e8:
    // 0x23a5e8: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x23a5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
label_23a5ec:
    // 0x23a5ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_23a5f0:
    if (ctx->pc == 0x23A5F0u) {
        ctx->pc = 0x23A5F0u;
            // 0x23a5f0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A5F4u;
        goto label_23a5f4;
    }
    ctx->pc = 0x23A5ECu;
    {
        const bool branch_taken_0x23a5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A5ECu;
            // 0x23a5f0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5ec) {
            ctx->pc = 0x23A618u;
            goto label_23a618;
        }
    }
    ctx->pc = 0x23A5F4u;
label_23a5f4:
    // 0x23a5f4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23a5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23a5f8:
    // 0x23a5f8: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23a5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23a5fc:
    // 0x23a5fc: 0x24a55308  addiu       $a1, $a1, 0x5308
    ctx->pc = 0x23a5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21256));
label_23a600:
    // 0x23a600: 0x26a60014  addiu       $a2, $s5, 0x14
    ctx->pc = 0x23a600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_23a604:
    // 0x23a604: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x23a604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23a608:
    // 0x23a608: 0xc08b5ac  jal         func_22D6B0
label_23a60c:
    if (ctx->pc == 0x23A60Cu) {
        ctx->pc = 0x23A60Cu;
            // 0x23a60c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23A610u;
        goto label_23a610;
    }
    ctx->pc = 0x23A608u;
    SET_GPR_U32(ctx, 31, 0x23A610u);
    ctx->pc = 0x23A60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A608u;
            // 0x23a60c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A610u; }
        if (ctx->pc != 0x23A610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A610u; }
        if (ctx->pc != 0x23A610u) { return; }
    }
    ctx->pc = 0x23A610u;
label_23a610:
    // 0x23a610: 0x1000032b  b           . + 4 + (0x32B << 2)
label_23a614:
    if (ctx->pc == 0x23A614u) {
        ctx->pc = 0x23A614u;
            // 0x23a614: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23A618u;
        goto label_23a618;
    }
    ctx->pc = 0x23A610u;
    {
        const bool branch_taken_0x23a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A610u;
            // 0x23a614: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a610) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23A618u;
label_23a618:
    // 0x23a618: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x23a618u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23a61c:
    // 0x23a61c: 0x26a30164  addiu       $v1, $s5, 0x164
    ctx->pc = 0x23a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 356));
label_23a620:
    // 0x23a620: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23a620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23a624:
    // 0x23a624: 0x26be0014  addiu       $fp, $s5, 0x14
    ctx->pc = 0x23a624u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_23a628:
    // 0x23a628: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x23a628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_23a62c:
    // 0x23a62c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23a630:
    // 0x23a630: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x23a630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23a634:
    // 0x23a634: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23a638:
    // 0x23a638: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23a638u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23a63c:
    // 0x23a63c: 0x8c970008  lw          $s7, 0x8($a0)
    ctx->pc = 0x23a63cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23a640:
    // 0x23a640: 0x26105330  addiu       $s0, $s0, 0x5330
    ctx->pc = 0x23a640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21296));
label_23a644:
    // 0x23a644: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23a644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23a648:
    // 0x23a648: 0xc09038e  jal         func_240E38
label_23a64c:
    if (ctx->pc == 0x23A64Cu) {
        ctx->pc = 0x23A64Cu;
            // 0x23a64c: 0xafbe0020  sw          $fp, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
        ctx->pc = 0x23A650u;
        goto label_23a650;
    }
    ctx->pc = 0x23A648u;
    SET_GPR_U32(ctx, 31, 0x23A650u);
    ctx->pc = 0x23A64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A648u;
            // 0x23a64c: 0xafbe0020  sw          $fp, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (runtime->hasFunction(0x240E38u)) {
        auto targetFn = runtime->lookupFunction(0x240E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A650u; }
        if (ctx->pc != 0x23A650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240E38_0x240e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A650u; }
        if (ctx->pc != 0x23A650u) { return; }
    }
    ctx->pc = 0x23A650u;
label_23a650:
    // 0x23a650: 0x92e40000  lbu         $a0, 0x0($s7)
    ctx->pc = 0x23a650u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23a654:
    // 0x23a654: 0xc0902ac  jal         func_240AB0
label_23a658:
    if (ctx->pc == 0x23A658u) {
        ctx->pc = 0x23A658u;
            // 0x23a658: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A65Cu;
        goto label_23a65c;
    }
    ctx->pc = 0x23A654u;
    SET_GPR_U32(ctx, 31, 0x23A65Cu);
    ctx->pc = 0x23A658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A654u;
            // 0x23a658: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240AB0u;
    if (runtime->hasFunction(0x240AB0u)) {
        auto targetFn = runtime->lookupFunction(0x240AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A65Cu; }
        if (ctx->pc != 0x23A65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240AB0_0x240ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A65Cu; }
        if (ctx->pc != 0x23A65Cu) { return; }
    }
    ctx->pc = 0x23A65Cu;
label_23a65c:
    // 0x23a65c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23a65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a660:
    // 0x23a660: 0x92e40003  lbu         $a0, 0x3($s7)
    ctx->pc = 0x23a660u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3)));
label_23a664:
    // 0x23a664: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x23a664u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
label_23a668:
    // 0x23a668: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x23a668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23a66c:
    // 0x23a66c: 0x92f10001  lbu         $s1, 0x1($s7)
    ctx->pc = 0x23a66cu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23a670:
    // 0x23a670: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23a670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23a674:
    // 0x23a674: 0xc08b60c  jal         func_22D830
label_23a678:
    if (ctx->pc == 0x23A678u) {
        ctx->pc = 0x23A678u;
            // 0x23a678: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x23A67Cu;
        goto label_23a67c;
    }
    ctx->pc = 0x23A674u;
    SET_GPR_U32(ctx, 31, 0x23A67Cu);
    ctx->pc = 0x23A678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A674u;
            // 0x23a678: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A67Cu; }
        if (ctx->pc != 0x23A67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A67Cu; }
        if (ctx->pc != 0x23A67Cu) { return; }
    }
    ctx->pc = 0x23A67Cu;
label_23a67c:
    // 0x23a67c: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23a67cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23a680:
    // 0x23a680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23a680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a684:
    // 0x23a684: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x23a684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a688:
    // 0x23a688: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x23a688u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a68c:
    // 0x23a68c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x23a68cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23a690:
    // 0x23a690: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x23a690u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a694:
    // 0x23a694: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23a694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23a698:
    // 0x23a698: 0xc08b5ac  jal         func_22D6B0
label_23a69c:
    if (ctx->pc == 0x23A69Cu) {
        ctx->pc = 0x23A69Cu;
            // 0x23a69c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A6A0u;
        goto label_23a6a0;
    }
    ctx->pc = 0x23A698u;
    SET_GPR_U32(ctx, 31, 0x23A6A0u);
    ctx->pc = 0x23A69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A698u;
            // 0x23a69c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6A0u; }
        if (ctx->pc != 0x23A6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6A0u; }
        if (ctx->pc != 0x23A6A0u) { return; }
    }
    ctx->pc = 0x23A6A0u;
label_23a6a0:
    // 0x23a6a0: 0x2ac20005  slti        $v0, $s6, 0x5
    ctx->pc = 0x23a6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
label_23a6a4:
    // 0x23a6a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23a6a8:
    if (ctx->pc == 0x23A6A8u) {
        ctx->pc = 0x23A6A8u;
            // 0x23a6a8: 0x26f00004  addiu       $s0, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->pc = 0x23A6ACu;
        goto label_23a6ac;
    }
    ctx->pc = 0x23A6A4u;
    {
        const bool branch_taken_0x23a6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A6A4u;
            // 0x23a6a8: 0x26f00004  addiu       $s0, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6a4) {
            ctx->pc = 0x23A6C4u;
            goto label_23a6c4;
        }
    }
    ctx->pc = 0x23A6ACu;
label_23a6ac:
    // 0x23a6ac: 0x26c5fffc  addiu       $a1, $s6, -0x4
    ctx->pc = 0x23a6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
label_23a6b0:
    // 0x23a6b0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x23a6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_23a6b4:
    // 0x23a6b4: 0xc090404  jal         func_241010
label_23a6b8:
    if (ctx->pc == 0x23A6B8u) {
        ctx->pc = 0x23A6B8u;
            // 0x23a6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A6BCu;
        goto label_23a6bc;
    }
    ctx->pc = 0x23A6B4u;
    SET_GPR_U32(ctx, 31, 0x23A6BCu);
    ctx->pc = 0x23A6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A6B4u;
            // 0x23a6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241010u;
    if (runtime->hasFunction(0x241010u)) {
        auto targetFn = runtime->lookupFunction(0x241010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6BCu; }
        if (ctx->pc != 0x23A6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241010_0x241010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6BCu; }
        if (ctx->pc != 0x23A6BCu) { return; }
    }
    ctx->pc = 0x23A6BCu;
label_23a6bc:
    // 0x23a6bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_23a6c0:
    if (ctx->pc == 0x23A6C0u) {
        ctx->pc = 0x23A6C0u;
            // 0x23a6c0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23A6C4u;
        goto label_23a6c4;
    }
    ctx->pc = 0x23A6BCu;
    {
        const bool branch_taken_0x23a6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A6BCu;
            // 0x23a6c0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6bc) {
            ctx->pc = 0x23A6C8u;
            goto label_23a6c8;
        }
    }
    ctx->pc = 0x23A6C4u;
label_23a6c4:
    // 0x23a6c4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23a6c8:
    // 0x23a6c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23a6cc:
    // 0x23a6cc: 0xc08b5ac  jal         func_22D6B0
label_23a6d0:
    if (ctx->pc == 0x23A6D0u) {
        ctx->pc = 0x23A6D0u;
            // 0x23a6d0: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
        ctx->pc = 0x23A6D4u;
        goto label_23a6d4;
    }
    ctx->pc = 0x23A6CCu;
    SET_GPR_U32(ctx, 31, 0x23A6D4u);
    ctx->pc = 0x23A6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A6CCu;
            // 0x23a6d0: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6D4u; }
        if (ctx->pc != 0x23A6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6D4u; }
        if (ctx->pc != 0x23A6D4u) { return; }
    }
    ctx->pc = 0x23A6D4u;
label_23a6d4:
    // 0x23a6d4: 0x92e40003  lbu         $a0, 0x3($s7)
    ctx->pc = 0x23a6d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3)));
label_23a6d8:
    // 0x23a6d8: 0x92e20002  lbu         $v0, 0x2($s7)
    ctx->pc = 0x23a6d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
label_23a6dc:
    // 0x23a6dc: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x23a6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23a6e0:
    // 0x23a6e0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23a6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23a6e4:
    // 0x23a6e4: 0xc08b60c  jal         func_22D830
label_23a6e8:
    if (ctx->pc == 0x23A6E8u) {
        ctx->pc = 0x23A6E8u;
            // 0x23a6e8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x23A6ECu;
        goto label_23a6ec;
    }
    ctx->pc = 0x23A6E4u;
    SET_GPR_U32(ctx, 31, 0x23A6ECu);
    ctx->pc = 0x23A6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A6E4u;
            // 0x23a6e8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6ECu; }
        if (ctx->pc != 0x23A6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6ECu; }
        if (ctx->pc != 0x23A6ECu) { return; }
    }
    ctx->pc = 0x23A6ECu;
label_23a6ec:
    // 0x23a6ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23a6ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a6f0:
    // 0x23a6f0: 0x76102a  slt         $v0, $v1, $s6
    ctx->pc = 0x23a6f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_23a6f4:
    // 0x23a6f4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_23a6f8:
    if (ctx->pc == 0x23A6F8u) {
        ctx->pc = 0x23A6F8u;
            // 0x23a6f8: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A6FCu;
        goto label_23a6fc;
    }
    ctx->pc = 0x23A6F4u;
    {
        const bool branch_taken_0x23a6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a6f4) {
            ctx->pc = 0x23A6F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23A6F4u;
            // 0x23a6f8: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23A6FCu;
            goto label_23a6fc;
        }
    }
    ctx->pc = 0x23A6FCu;
label_23a6fc:
    // 0x23a6fc: 0x92e80000  lbu         $t0, 0x0($s7)
    ctx->pc = 0x23a6fcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23a700:
    // 0x23a700: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x23a700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23a704:
    // 0x23a704: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x23a704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_23a708:
    // 0x23a708: 0x104002d4  beqz        $v0, . + 4 + (0x2D4 << 2)
label_23a70c:
    if (ctx->pc == 0x23A70Cu) {
        ctx->pc = 0x23A70Cu;
            // 0x23a70c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23A710u;
        goto label_23a710;
    }
    ctx->pc = 0x23A708u;
    {
        const bool branch_taken_0x23a708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A708u;
            // 0x23a70c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a708) {
            ctx->pc = 0x23B25Cu;
            goto label_23b25c;
        }
    }
    ctx->pc = 0x23A710u;
label_23a710:
    // 0x23a710: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23a714:
    // 0x23a714: 0x24425580  addiu       $v0, $v0, 0x5580
    ctx->pc = 0x23a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21888));
label_23a718:
    // 0x23a718: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23a71c:
    // 0x23a71c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a720:
    // 0x23a720: 0x800008  jr          $a0
label_23a724:
    if (ctx->pc == 0x23A724u) {
        ctx->pc = 0x23A728u;
        goto label_23a728;
    }
    ctx->pc = 0x23A720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A728u: goto label_23a728;
            case 0x23A8F0u: goto label_23a8f0;
            case 0x23AA74u: goto label_23aa74;
            case 0x23ABDCu: goto label_23abdc;
            case 0x23ACE8u: goto label_23ace8;
            case 0x23ADF0u: goto label_23adf0;
            case 0x23AEA4u: goto label_23aea4;
            case 0x23B068u: goto label_23b068;
            case 0x23B080u: goto label_23b080;
            case 0x23B1D4u: goto label_23b1d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23A728u;
label_23a728:
    // 0x23a728: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x23a728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
label_23a72c:
    // 0x23a72c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23a730:
    if (ctx->pc == 0x23A730u) {
        ctx->pc = 0x23A730u;
            // 0x23a730: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23A734u;
        goto label_23a734;
    }
    ctx->pc = 0x23A72Cu;
    {
        const bool branch_taken_0x23a72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A72Cu;
            // 0x23a730: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a72c) {
            ctx->pc = 0x23A754u;
            goto label_23a754;
        }
    }
    ctx->pc = 0x23A734u;
label_23a734:
    // 0x23a734: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23a734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23a738:
    // 0x23a738: 0x24a55358  addiu       $a1, $a1, 0x5358
    ctx->pc = 0x23a738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21336));
label_23a73c:
    // 0x23a73c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23a73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23a740:
    // 0x23a740: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x23a740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23a744:
    // 0x23a744: 0xc08b5ac  jal         func_22D6B0
label_23a748:
    if (ctx->pc == 0x23A748u) {
        ctx->pc = 0x23A748u;
            // 0x23a748: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23A74Cu;
        goto label_23a74c;
    }
    ctx->pc = 0x23A744u;
    SET_GPR_U32(ctx, 31, 0x23A74Cu);
    ctx->pc = 0x23A748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A744u;
            // 0x23a748: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A74Cu; }
        if (ctx->pc != 0x23A74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A74Cu; }
        if (ctx->pc != 0x23A74Cu) { return; }
    }
    ctx->pc = 0x23A74Cu;
label_23a74c:
    // 0x23a74c: 0x100002d9  b           . + 4 + (0x2D9 << 2)
label_23a750:
    if (ctx->pc == 0x23A750u) {
        ctx->pc = 0x23A750u;
            // 0x23a750: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23A754u;
        goto label_23a754;
    }
    ctx->pc = 0x23A74Cu;
    {
        const bool branch_taken_0x23a74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A74Cu;
            // 0x23a750: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a74c) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23A754u;
label_23a754:
    // 0x23a754: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x23a754u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23a758:
    // 0x23a758: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23a758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23a75c:
    // 0x23a75c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x23a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23a760:
    // 0x23a760: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23a760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23a764:
    // 0x23a764: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23a768:
    // 0x23a768: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23a768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23a76c:
    // 0x23a76c: 0x10830134  beq         $a0, $v1, . + 4 + (0x134 << 2)
label_23a770:
    if (ctx->pc == 0x23A770u) {
        ctx->pc = 0x23A770u;
            // 0x23a770: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x23A774u;
        goto label_23a774;
    }
    ctx->pc = 0x23A76Cu;
    {
        const bool branch_taken_0x23a76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23A770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A76Cu;
            // 0x23a770: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a76c) {
            ctx->pc = 0x23AC40u;
            goto label_23ac40;
        }
    }
    ctx->pc = 0x23A774u;
label_23a774:
    // 0x23a774: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_23a778:
    if (ctx->pc == 0x23A778u) {
        ctx->pc = 0x23A778u;
            // 0x23a778: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->pc = 0x23A77Cu;
        goto label_23a77c;
    }
    ctx->pc = 0x23A774u;
    {
        const bool branch_taken_0x23a774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a774) {
            ctx->pc = 0x23A778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23A774u;
            // 0x23a778: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23A794u;
            goto label_23a794;
        }
    }
    ctx->pc = 0x23A77Cu;
label_23a77c:
    // 0x23a77c: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x23a77cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_23a780:
    // 0x23a780: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23a784:
    if (ctx->pc == 0x23A784u) {
        ctx->pc = 0x23A784u;
            // 0x23a784: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x23A788u;
        goto label_23a788;
    }
    ctx->pc = 0x23A780u;
    {
        const bool branch_taken_0x23a780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A780u;
            // 0x23a784: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a780) {
            ctx->pc = 0x23A790u;
            goto label_23a790;
        }
    }
    ctx->pc = 0x23A788u;
label_23a788:
    // 0x23a788: 0x104002cd  beqz        $v0, . + 4 + (0x2CD << 2)
label_23a78c:
    if (ctx->pc == 0x23A78Cu) {
        ctx->pc = 0x23A78Cu;
            // 0x23a78c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23A790u;
        goto label_23a790;
    }
    ctx->pc = 0x23A788u;
    {
        const bool branch_taken_0x23a788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A788u;
            // 0x23a78c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a788) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23A790u;
label_23a790:
    // 0x23a790: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x23a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_23a794:
    // 0x23a794: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23a794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23a798:
    // 0x23a798: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23a798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23a79c:
    // 0x23a79c: 0x40f809  jalr        $v0
label_23a7a0:
    if (ctx->pc == 0x23A7A0u) {
        ctx->pc = 0x23A7A0u;
            // 0x23a7a0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A7A4u;
        goto label_23a7a4;
    }
    ctx->pc = 0x23A79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A7A4u);
        ctx->pc = 0x23A7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A79Cu;
            // 0x23a7a0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A7A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A7A4u; }
            if (ctx->pc != 0x23A7A4u) { return; }
        }
        }
    }
    ctx->pc = 0x23A7A4u;
label_23a7a4:
    // 0x23a7a4: 0x92850002  lbu         $a1, 0x2($s4)
    ctx->pc = 0x23a7a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23a7a8:
    // 0x23a7a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a7ac:
    // 0x23a7ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23a7b0:
    // 0x23a7b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23a7b4:
    // 0x23a7b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23a7b8:
    // 0x23a7b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23a7bc:
    // 0x23a7bc: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x23a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_23a7c0:
    // 0x23a7c0: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x23a7c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_23a7c4:
    // 0x23a7c4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_23a7c8:
    if (ctx->pc == 0x23A7C8u) {
        ctx->pc = 0x23A7C8u;
            // 0x23a7c8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23A7CCu;
        goto label_23a7cc;
    }
    ctx->pc = 0x23A7C4u;
    {
        const bool branch_taken_0x23a7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A7C4u;
            // 0x23a7c8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7c4) {
            ctx->pc = 0x23A8A0u;
            goto label_23a8a0;
        }
    }
    ctx->pc = 0x23A7CCu;
label_23a7cc:
    // 0x23a7cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23a7d0:
    // 0x23a7d0: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x23a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
label_23a7d4:
    // 0x23a7d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23a7d8:
    // 0x23a7d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a7dc:
    // 0x23a7dc: 0x800008  jr          $a0
label_23a7e0:
    if (ctx->pc == 0x23A7E0u) {
        ctx->pc = 0x23A7E4u;
        goto label_23a7e4;
    }
    ctx->pc = 0x23A7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A7E4u: goto label_23a7e4;
            case 0x23A7FCu: goto label_23a7fc;
            case 0x23A80Cu: goto label_23a80c;
            case 0x23A86Cu: goto label_23a86c;
            case 0x23A8A0u: goto label_23a8a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23A7E4u;
label_23a7e4:
    // 0x23a7e4: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x23a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_23a7e8:
    // 0x23a7e8: 0x40f809  jalr        $v0
label_23a7ec:
    if (ctx->pc == 0x23A7ECu) {
        ctx->pc = 0x23A7ECu;
            // 0x23a7ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A7F0u;
        goto label_23a7f0;
    }
    ctx->pc = 0x23A7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A7F0u);
        ctx->pc = 0x23A7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A7E8u;
            // 0x23a7ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A7F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A7F0u; }
            if (ctx->pc != 0x23A7F0u) { return; }
        }
        }
    }
    ctx->pc = 0x23A7F0u;
label_23a7f0:
    // 0x23a7f0: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x23a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_23a7f4:
    // 0x23a7f4: 0x60f809  jalr        $v1
label_23a7f8:
    if (ctx->pc == 0x23A7F8u) {
        ctx->pc = 0x23A7F8u;
            // 0x23a7f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A7FCu;
        goto label_23a7fc;
    }
    ctx->pc = 0x23A7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23A7FCu);
        ctx->pc = 0x23A7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A7F4u;
            // 0x23a7f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A7FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A7FCu; }
            if (ctx->pc != 0x23A7FCu) { return; }
        }
        }
    }
    ctx->pc = 0x23A7FCu;
label_23a7fc:
    // 0x23a7fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23a800:
    // 0x23a800: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x23a800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23a804:
    // 0x23a804: 0x10000014  b           . + 4 + (0x14 << 2)
label_23a808:
    if (ctx->pc == 0x23A808u) {
        ctx->pc = 0x23A808u;
            // 0x23a808: 0x50300a  movz        $a2, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->pc = 0x23A80Cu;
        goto label_23a80c;
    }
    ctx->pc = 0x23A804u;
    {
        const bool branch_taken_0x23a804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A804u;
            // 0x23a808: 0x50300a  movz        $a2, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a804) {
            ctx->pc = 0x23A858u;
            goto label_23a858;
        }
    }
    ctx->pc = 0x23A80Cu;
label_23a80c:
    // 0x23a80c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23a810:
    // 0x23a810: 0x244250a8  addiu       $v0, $v0, 0x50A8
    ctx->pc = 0x23a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20648));
label_23a814:
    // 0x23a814: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
label_23a818:
    if (ctx->pc == 0x23A818u) {
        ctx->pc = 0x23A818u;
            // 0x23a818: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23A81Cu;
        goto label_23a81c;
    }
    ctx->pc = 0x23A814u;
    {
        const bool branch_taken_0x23a814 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A814u;
            // 0x23a818: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a814) {
            ctx->pc = 0x23A828u;
            goto label_23a828;
        }
    }
    ctx->pc = 0x23A81Cu;
label_23a81c:
    // 0x23a81c: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x23a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
label_23a820:
    // 0x23a820: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
label_23a824:
    if (ctx->pc == 0x23A824u) {
        ctx->pc = 0x23A824u;
            // 0x23a824: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x23A828u;
        goto label_23a828;
    }
    ctx->pc = 0x23A820u;
    {
        const bool branch_taken_0x23a820 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A820u;
            // 0x23a824: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a820) {
            ctx->pc = 0x23A834u;
            goto label_23a834;
        }
    }
    ctx->pc = 0x23A828u;
label_23a828:
    // 0x23a828: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23a828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23a82c:
    // 0x23a82c: 0x10000002  b           . + 4 + (0x2 << 2)
label_23a830:
    if (ctx->pc == 0x23A830u) {
        ctx->pc = 0x23A830u;
            // 0x23a830: 0x8ea302d8  lw          $v1, 0x2D8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 728)));
        ctx->pc = 0x23A834u;
        goto label_23a834;
    }
    ctx->pc = 0x23A82Cu;
    {
        const bool branch_taken_0x23a82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A82Cu;
            // 0x23a830: 0x8ea302d8  lw          $v1, 0x2D8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a82c) {
            ctx->pc = 0x23A838u;
            goto label_23a838;
        }
    }
    ctx->pc = 0x23A834u;
label_23a834:
    // 0x23a834: 0x8ea302ac  lw          $v1, 0x2AC($s5)
    ctx->pc = 0x23a834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 684)));
label_23a838:
    // 0x23a838: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_23a83c:
    // 0x23a83c: 0xac430180  sw          $v1, 0x180($v0)
    ctx->pc = 0x23a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 3));
label_23a840:
    // 0x23a840: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_23a844:
    // 0x23a844: 0x40f809  jalr        $v0
label_23a848:
    if (ctx->pc == 0x23A848u) {
        ctx->pc = 0x23A848u;
            // 0x23a848: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A84Cu;
        goto label_23a84c;
    }
    ctx->pc = 0x23A844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A84Cu);
        ctx->pc = 0x23A848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A844u;
            // 0x23a848: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A84Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A84Cu; }
            if (ctx->pc != 0x23A84Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23A84Cu;
label_23a84c:
    // 0x23a84c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23a850:
    // 0x23a850: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x23a850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23a854:
    // 0x23a854: 0x70300a  movz        $a2, $v1, $s0
    ctx->pc = 0x23a854u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_23a858:
    // 0x23a858: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23a85c:
    // 0x23a85c: 0xc08eef2  jal         func_23BBC8
label_23a860:
    if (ctx->pc == 0x23A860u) {
        ctx->pc = 0x23A860u;
            // 0x23a860: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A864u;
        goto label_23a864;
    }
    ctx->pc = 0x23A85Cu;
    SET_GPR_U32(ctx, 31, 0x23A864u);
    ctx->pc = 0x23A860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A85Cu;
            // 0x23a860: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (runtime->hasFunction(0x23BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x23BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A864u; }
        if (ctx->pc != 0x23A864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023BBC8_0x23bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A864u; }
        if (ctx->pc != 0x23A864u) { return; }
    }
    ctx->pc = 0x23A864u;
label_23a864:
    // 0x23a864: 0x10000296  b           . + 4 + (0x296 << 2)
label_23a868:
    if (ctx->pc == 0x23A868u) {
        ctx->pc = 0x23A868u;
            // 0x23a868: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23A86Cu;
        goto label_23a86c;
    }
    ctx->pc = 0x23A864u;
    {
        const bool branch_taken_0x23a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A864u;
            // 0x23a868: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a864) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23A86Cu;
label_23a86c:
    // 0x23a86c: 0x12000146  beqz        $s0, . + 4 + (0x146 << 2)
label_23a870:
    if (ctx->pc == 0x23A870u) {
        ctx->pc = 0x23A870u;
            // 0x23a870: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A874u;
        goto label_23a874;
    }
    ctx->pc = 0x23A86Cu;
    {
        const bool branch_taken_0x23a86c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A86Cu;
            // 0x23a870: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a86c) {
            ctx->pc = 0x23AD88u;
            goto label_23ad88;
        }
    }
    ctx->pc = 0x23A874u;
label_23a874:
    // 0x23a874: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23a874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23a878:
    // 0x23a878: 0xc08eef2  jal         func_23BBC8
label_23a87c:
    if (ctx->pc == 0x23A87Cu) {
        ctx->pc = 0x23A87Cu;
            // 0x23a87c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x23A880u;
        goto label_23a880;
    }
    ctx->pc = 0x23A878u;
    SET_GPR_U32(ctx, 31, 0x23A880u);
    ctx->pc = 0x23A87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A878u;
            // 0x23a87c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (runtime->hasFunction(0x23BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x23BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A880u; }
        if (ctx->pc != 0x23A880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023BBC8_0x23bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A880u; }
        if (ctx->pc != 0x23A880u) { return; }
    }
    ctx->pc = 0x23A880u;
label_23a880:
    // 0x23a880: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23a880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23a884:
    // 0x23a884: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23a884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23a888:
    // 0x23a888: 0x24a55380  addiu       $a1, $a1, 0x5380
    ctx->pc = 0x23a888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21376));
label_23a88c:
    // 0x23a88c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23a88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23a890:
    // 0x23a890: 0xc08b5ac  jal         func_22D6B0
label_23a894:
    if (ctx->pc == 0x23A894u) {
        ctx->pc = 0x23A894u;
            // 0x23a894: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23A898u;
        goto label_23a898;
    }
    ctx->pc = 0x23A890u;
    SET_GPR_U32(ctx, 31, 0x23A898u);
    ctx->pc = 0x23A894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A890u;
            // 0x23a894: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A898u; }
        if (ctx->pc != 0x23A898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A898u; }
        if (ctx->pc != 0x23A898u) { return; }
    }
    ctx->pc = 0x23A898u;
label_23a898:
    // 0x23a898: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_23a89c:
    if (ctx->pc == 0x23A89Cu) {
        ctx->pc = 0x23A89Cu;
            // 0x23a89c: 0x8e820028  lw          $v0, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->pc = 0x23A8A0u;
        goto label_23a8a0;
    }
    ctx->pc = 0x23A898u;
    {
        const bool branch_taken_0x23a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A898u;
            // 0x23a89c: 0x8e820028  lw          $v0, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a898) {
            ctx->pc = 0x23AFB8u;
            goto label_23afb8;
        }
    }
    ctx->pc = 0x23A8A0u;
label_23a8a0:
    // 0x23a8a0: 0x92e40000  lbu         $a0, 0x0($s7)
    ctx->pc = 0x23a8a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23a8a4:
    // 0x23a8a4: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23a8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23a8a8:
    // 0x23a8a8: 0xc0902ac  jal         func_240AB0
label_23a8ac:
    if (ctx->pc == 0x23A8ACu) {
        ctx->pc = 0x23A8ACu;
            // 0x23a8ac: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->pc = 0x23A8B0u;
        goto label_23a8b0;
    }
    ctx->pc = 0x23A8A8u;
    SET_GPR_U32(ctx, 31, 0x23A8B0u);
    ctx->pc = 0x23A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A8A8u;
            // 0x23a8ac: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240AB0u;
    if (runtime->hasFunction(0x240AB0u)) {
        auto targetFn = runtime->lookupFunction(0x240AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A8B0u; }
        if (ctx->pc != 0x23A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240AB0_0x240ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A8B0u; }
        if (ctx->pc != 0x23A8B0u) { return; }
    }
    ctx->pc = 0x23A8B0u;
label_23a8b0:
    // 0x23a8b0: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x23a8b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23a8b4:
    // 0x23a8b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23a8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a8b8:
    // 0x23a8b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x23a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23a8bc:
    // 0x23a8bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23a8c0:
    // 0x23a8c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x23a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23a8c4:
    // 0x23a8c4: 0xc09038e  jal         func_240E38
label_23a8c8:
    if (ctx->pc == 0x23A8C8u) {
        ctx->pc = 0x23A8C8u;
            // 0x23a8c8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x23A8CCu;
        goto label_23a8cc;
    }
    ctx->pc = 0x23A8C4u;
    SET_GPR_U32(ctx, 31, 0x23A8CCu);
    ctx->pc = 0x23A8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A8C4u;
            // 0x23a8c8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (runtime->hasFunction(0x240E38u)) {
        auto targetFn = runtime->lookupFunction(0x240E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A8CCu; }
        if (ctx->pc != 0x23A8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240E38_0x240e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A8CCu; }
        if (ctx->pc != 0x23A8CCu) { return; }
    }
    ctx->pc = 0x23A8CCu;
label_23a8cc:
    // 0x23a8cc: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23a8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23a8d0:
    // 0x23a8d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23a8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a8d4:
    // 0x23a8d4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23a8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23a8d8:
    // 0x23a8d8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23a8d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23a8dc:
    // 0x23a8dc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23a8dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a8e0:
    // 0x23a8e0: 0xc08b5ac  jal         func_22D6B0
label_23a8e4:
    if (ctx->pc == 0x23A8E4u) {
        ctx->pc = 0x23A8E4u;
            // 0x23a8e4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23A8E8u;
        goto label_23a8e8;
    }
    ctx->pc = 0x23A8E0u;
    SET_GPR_U32(ctx, 31, 0x23A8E8u);
    ctx->pc = 0x23A8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A8E0u;
            // 0x23a8e4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A8E8u; }
        if (ctx->pc != 0x23A8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A8E8u; }
        if (ctx->pc != 0x23A8E8u) { return; }
    }
    ctx->pc = 0x23A8E8u;
label_23a8e8:
    // 0x23a8e8: 0x10000272  b           . + 4 + (0x272 << 2)
label_23a8ec:
    if (ctx->pc == 0x23A8ECu) {
        ctx->pc = 0x23A8ECu;
            // 0x23a8ec: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23A8F0u;
        goto label_23a8f0;
    }
    ctx->pc = 0x23A8E8u;
    {
        const bool branch_taken_0x23a8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A8E8u;
            // 0x23a8ec: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8e8) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23A8F0u;
label_23a8f0:
    // 0x23a8f0: 0x92850002  lbu         $a1, 0x2($s4)
    ctx->pc = 0x23a8f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23a8f4:
    // 0x23a8f4: 0x26a20178  addiu       $v0, $s5, 0x178
    ctx->pc = 0x23a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 376));
label_23a8f8:
    // 0x23a8f8: 0x92e40001  lbu         $a0, 0x1($s7)
    ctx->pc = 0x23a8f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23a8fc:
    // 0x23a8fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23a900:
    // 0x23a900: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23a900u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_23a904:
    // 0x23a904: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_23a908:
    if (ctx->pc == 0x23A908u) {
        ctx->pc = 0x23A908u;
            // 0x23a908: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A90Cu;
        goto label_23a90c;
    }
    ctx->pc = 0x23A904u;
    {
        const bool branch_taken_0x23a904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23A908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A904u;
            // 0x23a908: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a904) {
            ctx->pc = 0x23A930u;
            goto label_23a930;
        }
    }
    ctx->pc = 0x23A90Cu;
label_23a90c:
    // 0x23a90c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23a90cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23a910:
    // 0x23a910: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23a910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23a914:
    // 0x23a914: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23a914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23a918:
    // 0x23a918: 0x24a553b0  addiu       $a1, $a1, 0x53B0
    ctx->pc = 0x23a918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21424));
label_23a91c:
    // 0x23a91c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23a91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23a920:
    // 0x23a920: 0xc08b5ac  jal         func_22D6B0
label_23a924:
    if (ctx->pc == 0x23A924u) {
        ctx->pc = 0x23A924u;
            // 0x23a924: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23A928u;
        goto label_23a928;
    }
    ctx->pc = 0x23A920u;
    SET_GPR_U32(ctx, 31, 0x23A928u);
    ctx->pc = 0x23A924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A920u;
            // 0x23a924: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A928u; }
        if (ctx->pc != 0x23A928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A928u; }
        if (ctx->pc != 0x23A928u) { return; }
    }
    ctx->pc = 0x23A928u;
label_23a928:
    // 0x23a928: 0x10000262  b           . + 4 + (0x262 << 2)
label_23a92c:
    if (ctx->pc == 0x23A92Cu) {
        ctx->pc = 0x23A92Cu;
            // 0x23a92c: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23A930u;
        goto label_23a930;
    }
    ctx->pc = 0x23A928u;
    {
        const bool branch_taken_0x23a928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A928u;
            // 0x23a92c: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a928) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23A930u;
label_23a930:
    // 0x23a930: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23a930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23a934:
    // 0x23a934: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23a934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23a938:
    // 0x23a938: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23a938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23a93c:
    // 0x23a93c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23a940:
    // 0x23a940: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x23a940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_23a944:
    // 0x23a944: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x23a944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23a948:
    // 0x23a948: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_23a94c:
    if (ctx->pc == 0x23A94Cu) {
        ctx->pc = 0x23A94Cu;
            // 0x23a94c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23A950u;
        goto label_23a950;
    }
    ctx->pc = 0x23A948u;
    {
        const bool branch_taken_0x23a948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A948u;
            // 0x23a94c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a948) {
            ctx->pc = 0x23AA24u;
            goto label_23aa24;
        }
    }
    ctx->pc = 0x23A950u;
label_23a950:
    // 0x23a950: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23a954:
    // 0x23a954: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x23a954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_23a958:
    // 0x23a958: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23a95c:
    // 0x23a95c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a960:
    // 0x23a960: 0x800008  jr          $a0
label_23a964:
    if (ctx->pc == 0x23A964u) {
        ctx->pc = 0x23A968u;
        goto label_23a968;
    }
    ctx->pc = 0x23A960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A968u: goto label_23a968;
            case 0x23A9A0u: goto label_23a9a0;
            case 0x23A9ACu: goto label_23a9ac;
            case 0x23A9C0u: goto label_23a9c0;
            case 0x23AC40u: goto label_23ac40;
            case 0x23B2BCu: goto label_23b2bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23A968u;
label_23a968:
    // 0x23a968: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23a96c:
    // 0x23a96c: 0x244250a8  addiu       $v0, $v0, 0x50A8
    ctx->pc = 0x23a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20648));
label_23a970:
    // 0x23a970: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
label_23a974:
    if (ctx->pc == 0x23A974u) {
        ctx->pc = 0x23A974u;
            // 0x23a974: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23A978u;
        goto label_23a978;
    }
    ctx->pc = 0x23A970u;
    {
        const bool branch_taken_0x23a970 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A970u;
            // 0x23a974: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a970) {
            ctx->pc = 0x23A984u;
            goto label_23a984;
        }
    }
    ctx->pc = 0x23A978u;
label_23a978:
    // 0x23a978: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x23a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
label_23a97c:
    // 0x23a97c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
label_23a980:
    if (ctx->pc == 0x23A980u) {
        ctx->pc = 0x23A980u;
            // 0x23a980: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x23A984u;
        goto label_23a984;
    }
    ctx->pc = 0x23A97Cu;
    {
        const bool branch_taken_0x23a97c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A97Cu;
            // 0x23a980: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a97c) {
            ctx->pc = 0x23A990u;
            goto label_23a990;
        }
    }
    ctx->pc = 0x23A984u;
label_23a984:
    // 0x23a984: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23a984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23a988:
    // 0x23a988: 0x10000002  b           . + 4 + (0x2 << 2)
label_23a98c:
    if (ctx->pc == 0x23A98Cu) {
        ctx->pc = 0x23A98Cu;
            // 0x23a98c: 0x8ea302d8  lw          $v1, 0x2D8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 728)));
        ctx->pc = 0x23A990u;
        goto label_23a990;
    }
    ctx->pc = 0x23A988u;
    {
        const bool branch_taken_0x23a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A988u;
            // 0x23a98c: 0x8ea302d8  lw          $v1, 0x2D8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a988) {
            ctx->pc = 0x23A994u;
            goto label_23a994;
        }
    }
    ctx->pc = 0x23A990u;
label_23a990:
    // 0x23a990: 0x8ea302ac  lw          $v1, 0x2AC($s5)
    ctx->pc = 0x23a990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 684)));
label_23a994:
    // 0x23a994: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_23a998:
    // 0x23a998: 0x100000fb  b           . + 4 + (0xFB << 2)
label_23a99c:
    if (ctx->pc == 0x23A99Cu) {
        ctx->pc = 0x23A99Cu;
            // 0x23a99c: 0xac430180  sw          $v1, 0x180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 3));
        ctx->pc = 0x23A9A0u;
        goto label_23a9a0;
    }
    ctx->pc = 0x23A998u;
    {
        const bool branch_taken_0x23a998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A998u;
            // 0x23a99c: 0xac430180  sw          $v1, 0x180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a998) {
            ctx->pc = 0x23AD88u;
            goto label_23ad88;
        }
    }
    ctx->pc = 0x23A9A0u;
label_23a9a0:
    // 0x23a9a0: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x23a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_23a9a4:
    // 0x23a9a4: 0x40f809  jalr        $v0
label_23a9a8:
    if (ctx->pc == 0x23A9A8u) {
        ctx->pc = 0x23A9A8u;
            // 0x23a9a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A9ACu;
        goto label_23a9ac;
    }
    ctx->pc = 0x23A9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A9ACu);
        ctx->pc = 0x23A9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A9A4u;
            // 0x23a9a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A9ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A9ACu; }
            if (ctx->pc != 0x23A9ACu) { return; }
        }
        }
    }
    ctx->pc = 0x23A9ACu;
label_23a9ac:
    // 0x23a9ac: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x23a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_23a9b0:
    // 0x23a9b0: 0x40f809  jalr        $v0
label_23a9b4:
    if (ctx->pc == 0x23A9B4u) {
        ctx->pc = 0x23A9B4u;
            // 0x23a9b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A9B8u;
        goto label_23a9b8;
    }
    ctx->pc = 0x23A9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A9B8u);
        ctx->pc = 0x23A9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A9B0u;
            // 0x23a9b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A9B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A9B8u; }
            if (ctx->pc != 0x23A9B8u) { return; }
        }
        }
    }
    ctx->pc = 0x23A9B8u;
label_23a9b8:
    // 0x23a9b8: 0x10000192  b           . + 4 + (0x192 << 2)
label_23a9bc:
    if (ctx->pc == 0x23A9BCu) {
        ctx->pc = 0x23A9BCu;
            // 0x23a9bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A9C0u;
        goto label_23a9c0;
    }
    ctx->pc = 0x23A9B8u;
    {
        const bool branch_taken_0x23a9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A9B8u;
            // 0x23a9bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9b8) {
            ctx->pc = 0x23B004u;
            goto label_23b004;
        }
    }
    ctx->pc = 0x23A9C0u;
label_23a9c0:
    // 0x23a9c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23a9c4:
    // 0x23a9c4: 0x244250a8  addiu       $v0, $v0, 0x50A8
    ctx->pc = 0x23a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20648));
label_23a9c8:
    // 0x23a9c8: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
label_23a9cc:
    if (ctx->pc == 0x23A9CCu) {
        ctx->pc = 0x23A9CCu;
            // 0x23a9cc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x23A9D0u;
        goto label_23a9d0;
    }
    ctx->pc = 0x23A9C8u;
    {
        const bool branch_taken_0x23a9c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A9C8u;
            // 0x23a9cc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9c8) {
            ctx->pc = 0x23A9E0u;
            goto label_23a9e0;
        }
    }
    ctx->pc = 0x23A9D0u;
label_23a9d0:
    // 0x23a9d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23a9d4:
    // 0x23a9d4: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x23a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
label_23a9d8:
    // 0x23a9d8: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
label_23a9dc:
    if (ctx->pc == 0x23A9DCu) {
        ctx->pc = 0x23A9DCu;
            // 0x23a9dc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x23A9E0u;
        goto label_23a9e0;
    }
    ctx->pc = 0x23A9D8u;
    {
        const bool branch_taken_0x23a9d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A9D8u;
            // 0x23a9dc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9d8) {
            ctx->pc = 0x23A9E8u;
            goto label_23a9e8;
        }
    }
    ctx->pc = 0x23A9E0u;
label_23a9e0:
    // 0x23a9e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_23a9e4:
    if (ctx->pc == 0x23A9E4u) {
        ctx->pc = 0x23A9E4u;
            // 0x23a9e4: 0x8ea302d8  lw          $v1, 0x2D8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 728)));
        ctx->pc = 0x23A9E8u;
        goto label_23a9e8;
    }
    ctx->pc = 0x23A9E0u;
    {
        const bool branch_taken_0x23a9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A9E0u;
            // 0x23a9e4: 0x8ea302d8  lw          $v1, 0x2D8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9e0) {
            ctx->pc = 0x23A9ECu;
            goto label_23a9ec;
        }
    }
    ctx->pc = 0x23A9E8u;
label_23a9e8:
    // 0x23a9e8: 0x8ea302ac  lw          $v1, 0x2AC($s5)
    ctx->pc = 0x23a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 684)));
label_23a9ec:
    // 0x23a9ec: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_23a9f0:
    // 0x23a9f0: 0xac430180  sw          $v1, 0x180($v0)
    ctx->pc = 0x23a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 3));
label_23a9f4:
    // 0x23a9f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23a9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23a9f8:
    // 0x23a9f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23a9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23a9fc:
    // 0x23a9fc: 0xc08eef2  jal         func_23BBC8
label_23aa00:
    if (ctx->pc == 0x23AA00u) {
        ctx->pc = 0x23AA00u;
            // 0x23aa00: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x23AA04u;
        goto label_23aa04;
    }
    ctx->pc = 0x23A9FCu;
    SET_GPR_U32(ctx, 31, 0x23AA04u);
    ctx->pc = 0x23AA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A9FCu;
            // 0x23aa00: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (runtime->hasFunction(0x23BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x23BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AA04u; }
        if (ctx->pc != 0x23AA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023BBC8_0x23bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AA04u; }
        if (ctx->pc != 0x23AA04u) { return; }
    }
    ctx->pc = 0x23AA04u;
label_23aa04:
    // 0x23aa04: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23aa04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23aa08:
    // 0x23aa08: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23aa08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23aa0c:
    // 0x23aa0c: 0x24a55380  addiu       $a1, $a1, 0x5380
    ctx->pc = 0x23aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21376));
label_23aa10:
    // 0x23aa10: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23aa10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23aa14:
    // 0x23aa14: 0xc08b5ac  jal         func_22D6B0
label_23aa18:
    if (ctx->pc == 0x23AA18u) {
        ctx->pc = 0x23AA18u;
            // 0x23aa18: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23AA1Cu;
        goto label_23aa1c;
    }
    ctx->pc = 0x23AA14u;
    SET_GPR_U32(ctx, 31, 0x23AA1Cu);
    ctx->pc = 0x23AA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA14u;
            // 0x23aa18: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AA1Cu; }
        if (ctx->pc != 0x23AA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AA1Cu; }
        if (ctx->pc != 0x23AA1Cu) { return; }
    }
    ctx->pc = 0x23AA1Cu;
label_23aa1c:
    // 0x23aa1c: 0x10000166  b           . + 4 + (0x166 << 2)
label_23aa20:
    if (ctx->pc == 0x23AA20u) {
        ctx->pc = 0x23AA20u;
            // 0x23aa20: 0x8e820028  lw          $v0, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->pc = 0x23AA24u;
        goto label_23aa24;
    }
    ctx->pc = 0x23AA1Cu;
    {
        const bool branch_taken_0x23aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA1Cu;
            // 0x23aa20: 0x8e820028  lw          $v0, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa1c) {
            ctx->pc = 0x23AFB8u;
            goto label_23afb8;
        }
    }
    ctx->pc = 0x23AA24u;
label_23aa24:
    // 0x23aa24: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23aa24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23aa28:
    // 0x23aa28: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23aa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23aa2c:
    // 0x23aa2c: 0xc0902ac  jal         func_240AB0
label_23aa30:
    if (ctx->pc == 0x23AA30u) {
        ctx->pc = 0x23AA30u;
            // 0x23aa30: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->pc = 0x23AA34u;
        goto label_23aa34;
    }
    ctx->pc = 0x23AA2Cu;
    SET_GPR_U32(ctx, 31, 0x23AA34u);
    ctx->pc = 0x23AA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA2Cu;
            // 0x23aa30: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240AB0u;
    if (runtime->hasFunction(0x240AB0u)) {
        auto targetFn = runtime->lookupFunction(0x240AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AA34u; }
        if (ctx->pc != 0x23AA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240AB0_0x240ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AA34u; }
        if (ctx->pc != 0x23AA34u) { return; }
    }
    ctx->pc = 0x23AA34u;
label_23aa34:
    // 0x23aa34: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x23aa34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23aa38:
    // 0x23aa38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23aa38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23aa3c:
    // 0x23aa3c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23aa40:
    // 0x23aa40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23aa44:
    // 0x23aa44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x23aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23aa48:
    // 0x23aa48: 0xc09038e  jal         func_240E38
label_23aa4c:
    if (ctx->pc == 0x23AA4Cu) {
        ctx->pc = 0x23AA4Cu;
            // 0x23aa4c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x23AA50u;
        goto label_23aa50;
    }
    ctx->pc = 0x23AA48u;
    SET_GPR_U32(ctx, 31, 0x23AA50u);
    ctx->pc = 0x23AA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA48u;
            // 0x23aa4c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (runtime->hasFunction(0x240E38u)) {
        auto targetFn = runtime->lookupFunction(0x240E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AA50u; }
        if (ctx->pc != 0x23AA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240E38_0x240e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AA50u; }
        if (ctx->pc != 0x23AA50u) { return; }
    }
    ctx->pc = 0x23AA50u;
label_23aa50:
    // 0x23aa50: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23aa50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23aa54:
    // 0x23aa54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23aa54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23aa58:
    // 0x23aa58: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23aa58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23aa5c:
    // 0x23aa5c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23aa5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23aa60:
    // 0x23aa60: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23aa60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23aa64:
    // 0x23aa64: 0xc08b5ac  jal         func_22D6B0
label_23aa68:
    if (ctx->pc == 0x23AA68u) {
        ctx->pc = 0x23AA68u;
            // 0x23aa68: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23AA6Cu;
        goto label_23aa6c;
    }
    ctx->pc = 0x23AA64u;
    SET_GPR_U32(ctx, 31, 0x23AA6Cu);
    ctx->pc = 0x23AA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA64u;
            // 0x23aa68: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AA6Cu; }
        if (ctx->pc != 0x23AA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AA6Cu; }
        if (ctx->pc != 0x23AA6Cu) { return; }
    }
    ctx->pc = 0x23AA6Cu;
label_23aa6c:
    // 0x23aa6c: 0x10000211  b           . + 4 + (0x211 << 2)
label_23aa70:
    if (ctx->pc == 0x23AA70u) {
        ctx->pc = 0x23AA70u;
            // 0x23aa70: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23AA74u;
        goto label_23aa74;
    }
    ctx->pc = 0x23AA6Cu;
    {
        const bool branch_taken_0x23aa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA6Cu;
            // 0x23aa70: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa6c) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23AA74u;
label_23aa74:
    // 0x23aa74: 0x92840002  lbu         $a0, 0x2($s4)
    ctx->pc = 0x23aa74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23aa78:
    // 0x23aa78: 0x26a30178  addiu       $v1, $s5, 0x178
    ctx->pc = 0x23aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 376));
label_23aa7c:
    // 0x23aa7c: 0x92e50001  lbu         $a1, 0x1($s7)
    ctx->pc = 0x23aa7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23aa80:
    // 0x23aa80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23aa84:
    // 0x23aa84: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x23aa84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_23aa88:
    // 0x23aa88: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_23aa8c:
    if (ctx->pc == 0x23AA8Cu) {
        ctx->pc = 0x23AA8Cu;
            // 0x23aa8c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23AA90u;
        goto label_23aa90;
    }
    ctx->pc = 0x23AA88u;
    {
        const bool branch_taken_0x23aa88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23AA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA88u;
            // 0x23aa8c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa88) {
            ctx->pc = 0x23AAB4u;
            goto label_23aab4;
        }
    }
    ctx->pc = 0x23AA90u;
label_23aa90:
    // 0x23aa90: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23aa90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23aa94:
    // 0x23aa94: 0x92e80001  lbu         $t0, 0x1($s7)
    ctx->pc = 0x23aa94u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23aa98:
    // 0x23aa98: 0x24a553b0  addiu       $a1, $a1, 0x53B0
    ctx->pc = 0x23aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21424));
label_23aa9c:
    // 0x23aa9c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23aa9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23aaa0:
    // 0x23aaa0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23aaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23aaa4:
    // 0x23aaa4: 0xc08b5ac  jal         func_22D6B0
label_23aaa8:
    if (ctx->pc == 0x23AAA8u) {
        ctx->pc = 0x23AAA8u;
            // 0x23aaa8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23AAACu;
        goto label_23aaac;
    }
    ctx->pc = 0x23AAA4u;
    SET_GPR_U32(ctx, 31, 0x23AAACu);
    ctx->pc = 0x23AAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAA4u;
            // 0x23aaa8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AAACu; }
        if (ctx->pc != 0x23AAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AAACu; }
        if (ctx->pc != 0x23AAACu) { return; }
    }
    ctx->pc = 0x23AAACu;
label_23aaac:
    // 0x23aaac: 0x10000201  b           . + 4 + (0x201 << 2)
label_23aab0:
    if (ctx->pc == 0x23AAB0u) {
        ctx->pc = 0x23AAB0u;
            // 0x23aab0: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23AAB4u;
        goto label_23aab4;
    }
    ctx->pc = 0x23AAACu;
    {
        const bool branch_taken_0x23aaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAACu;
            // 0x23aab0: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aaac) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23AAB4u;
label_23aab4:
    // 0x23aab4: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x23aab4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23aab8:
    // 0x23aab8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23aabc:
    // 0x23aabc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_23aac0:
    if (ctx->pc == 0x23AAC0u) {
        ctx->pc = 0x23AAC0u;
            // 0x23aac0: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->pc = 0x23AAC4u;
        goto label_23aac4;
    }
    ctx->pc = 0x23AABCu;
    {
        const bool branch_taken_0x23aabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23aabc) {
            ctx->pc = 0x23AAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AABCu;
            // 0x23aac0: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AAE0u;
            goto label_23aae0;
        }
    }
    ctx->pc = 0x23AAC4u;
label_23aac4:
    // 0x23aac4: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x23aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_23aac8:
    // 0x23aac8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23aac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23aacc:
    // 0x23aacc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23aaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23aad0:
    // 0x23aad0: 0x40f809  jalr        $v0
label_23aad4:
    if (ctx->pc == 0x23AAD4u) {
        ctx->pc = 0x23AAD4u;
            // 0x23aad4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AAD8u;
        goto label_23aad8;
    }
    ctx->pc = 0x23AAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AAD8u);
        ctx->pc = 0x23AAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAD0u;
            // 0x23aad4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AAD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AAD8u; }
            if (ctx->pc != 0x23AAD8u) { return; }
        }
        }
    }
    ctx->pc = 0x23AAD8u;
label_23aad8:
    // 0x23aad8: 0x10000006  b           . + 4 + (0x6 << 2)
label_23aadc:
    if (ctx->pc == 0x23AADCu) {
        ctx->pc = 0x23AADCu;
            // 0x23aadc: 0x92850002  lbu         $a1, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->pc = 0x23AAE0u;
        goto label_23aae0;
    }
    ctx->pc = 0x23AAD8u;
    {
        const bool branch_taken_0x23aad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAD8u;
            // 0x23aadc: 0x92850002  lbu         $a1, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aad8) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x23AAE0u;
label_23aae0:
    // 0x23aae0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23aae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23aae4:
    // 0x23aae4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23aae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23aae8:
    // 0x23aae8: 0x40f809  jalr        $v0
label_23aaec:
    if (ctx->pc == 0x23AAECu) {
        ctx->pc = 0x23AAECu;
            // 0x23aaec: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AAF0u;
        goto label_23aaf0;
    }
    ctx->pc = 0x23AAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AAF0u);
        ctx->pc = 0x23AAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAE8u;
            // 0x23aaec: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AAF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AAF0u; }
            if (ctx->pc != 0x23AAF0u) { return; }
        }
        }
    }
    ctx->pc = 0x23AAF0u;
label_23aaf0:
    // 0x23aaf0: 0x92850002  lbu         $a1, 0x2($s4)
    ctx->pc = 0x23aaf0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23aaf4:
    // 0x23aaf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23aaf8:
    // 0x23aaf8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23aafc:
    // 0x23aafc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23ab00:
    // 0x23ab00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23ab04:
    // 0x23ab04: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x23ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_23ab08:
    // 0x23ab08: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x23ab08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23ab0c:
    // 0x23ab0c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_23ab10:
    if (ctx->pc == 0x23AB10u) {
        ctx->pc = 0x23AB10u;
            // 0x23ab10: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23AB14u;
        goto label_23ab14;
    }
    ctx->pc = 0x23AB0Cu;
    {
        const bool branch_taken_0x23ab0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB0Cu;
            // 0x23ab10: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab0c) {
            ctx->pc = 0x23AB8Cu;
            goto label_23ab8c;
        }
    }
    ctx->pc = 0x23AB14u;
label_23ab14:
    // 0x23ab14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23ab18:
    // 0x23ab18: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x23ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_23ab1c:
    // 0x23ab1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23ab20:
    // 0x23ab20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ab24:
    // 0x23ab24: 0x800008  jr          $a0
label_23ab28:
    if (ctx->pc == 0x23AB28u) {
        ctx->pc = 0x23AB2Cu;
        goto label_23ab2c;
    }
    ctx->pc = 0x23AB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AB2Cu: goto label_23ab2c;
            case 0x23AB68u: goto label_23ab68;
            case 0x23AB74u: goto label_23ab74;
            case 0x23AC40u: goto label_23ac40;
            case 0x23B2BCu: goto label_23b2bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23AB2Cu;
label_23ab2c:
    // 0x23ab2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23ab30:
    // 0x23ab30: 0x244250a8  addiu       $v0, $v0, 0x50A8
    ctx->pc = 0x23ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20648));
label_23ab34:
    // 0x23ab34: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
label_23ab38:
    if (ctx->pc == 0x23AB38u) {
        ctx->pc = 0x23AB38u;
            // 0x23ab38: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x23AB3Cu;
        goto label_23ab3c;
    }
    ctx->pc = 0x23AB34u;
    {
        const bool branch_taken_0x23ab34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x23AB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB34u;
            // 0x23ab38: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab34) {
            ctx->pc = 0x23AB4Cu;
            goto label_23ab4c;
        }
    }
    ctx->pc = 0x23AB3Cu;
label_23ab3c:
    // 0x23ab3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23ab40:
    // 0x23ab40: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x23ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
label_23ab44:
    // 0x23ab44: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
label_23ab48:
    if (ctx->pc == 0x23AB48u) {
        ctx->pc = 0x23AB48u;
            // 0x23ab48: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x23AB4Cu;
        goto label_23ab4c;
    }
    ctx->pc = 0x23AB44u;
    {
        const bool branch_taken_0x23ab44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23AB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB44u;
            // 0x23ab48: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab44) {
            ctx->pc = 0x23AB54u;
            goto label_23ab54;
        }
    }
    ctx->pc = 0x23AB4Cu;
label_23ab4c:
    // 0x23ab4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_23ab50:
    if (ctx->pc == 0x23AB50u) {
        ctx->pc = 0x23AB50u;
            // 0x23ab50: 0x8ea302d8  lw          $v1, 0x2D8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 728)));
        ctx->pc = 0x23AB54u;
        goto label_23ab54;
    }
    ctx->pc = 0x23AB4Cu;
    {
        const bool branch_taken_0x23ab4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB4Cu;
            // 0x23ab50: 0x8ea302d8  lw          $v1, 0x2D8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab4c) {
            ctx->pc = 0x23AB58u;
            goto label_23ab58;
        }
    }
    ctx->pc = 0x23AB54u;
label_23ab54:
    // 0x23ab54: 0x8ea302ac  lw          $v1, 0x2AC($s5)
    ctx->pc = 0x23ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 684)));
label_23ab58:
    // 0x23ab58: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_23ab5c:
    // 0x23ab5c: 0xac430180  sw          $v1, 0x180($v0)
    ctx->pc = 0x23ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 3));
label_23ab60:
    // 0x23ab60: 0x10000115  b           . + 4 + (0x115 << 2)
label_23ab64:
    if (ctx->pc == 0x23AB64u) {
        ctx->pc = 0x23AB64u;
            // 0x23ab64: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->pc = 0x23AB68u;
        goto label_23ab68;
    }
    ctx->pc = 0x23AB60u;
    {
        const bool branch_taken_0x23ab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB60u;
            // 0x23ab64: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab60) {
            ctx->pc = 0x23AFB8u;
            goto label_23afb8;
        }
    }
    ctx->pc = 0x23AB68u;
label_23ab68:
    // 0x23ab68: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x23ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_23ab6c:
    // 0x23ab6c: 0x40f809  jalr        $v0
label_23ab70:
    if (ctx->pc == 0x23AB70u) {
        ctx->pc = 0x23AB70u;
            // 0x23ab70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AB74u;
        goto label_23ab74;
    }
    ctx->pc = 0x23AB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AB74u);
        ctx->pc = 0x23AB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB6Cu;
            // 0x23ab70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AB74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AB74u; }
            if (ctx->pc != 0x23AB74u) { return; }
        }
        }
    }
    ctx->pc = 0x23AB74u;
label_23ab74:
    // 0x23ab74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ab74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ab78:
    // 0x23ab78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ab78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23ab7c:
    // 0x23ab7c: 0xc08eef2  jal         func_23BBC8
label_23ab80:
    if (ctx->pc == 0x23AB80u) {
        ctx->pc = 0x23AB80u;
            // 0x23ab80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x23AB84u;
        goto label_23ab84;
    }
    ctx->pc = 0x23AB7Cu;
    SET_GPR_U32(ctx, 31, 0x23AB84u);
    ctx->pc = 0x23AB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB7Cu;
            // 0x23ab80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (runtime->hasFunction(0x23BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x23BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB84u; }
        if (ctx->pc != 0x23AB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023BBC8_0x23bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB84u; }
        if (ctx->pc != 0x23AB84u) { return; }
    }
    ctx->pc = 0x23AB84u;
label_23ab84:
    // 0x23ab84: 0x1000010c  b           . + 4 + (0x10C << 2)
label_23ab88:
    if (ctx->pc == 0x23AB88u) {
        ctx->pc = 0x23AB88u;
            // 0x23ab88: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->pc = 0x23AB8Cu;
        goto label_23ab8c;
    }
    ctx->pc = 0x23AB84u;
    {
        const bool branch_taken_0x23ab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB84u;
            // 0x23ab88: 0x8e820038  lw          $v0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab84) {
            ctx->pc = 0x23AFB8u;
            goto label_23afb8;
        }
    }
    ctx->pc = 0x23AB8Cu;
label_23ab8c:
    // 0x23ab8c: 0x92e40000  lbu         $a0, 0x0($s7)
    ctx->pc = 0x23ab8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23ab90:
    // 0x23ab90: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ab90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ab94:
    // 0x23ab94: 0xc0902ac  jal         func_240AB0
label_23ab98:
    if (ctx->pc == 0x23AB98u) {
        ctx->pc = 0x23AB98u;
            // 0x23ab98: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->pc = 0x23AB9Cu;
        goto label_23ab9c;
    }
    ctx->pc = 0x23AB94u;
    SET_GPR_U32(ctx, 31, 0x23AB9Cu);
    ctx->pc = 0x23AB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB94u;
            // 0x23ab98: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240AB0u;
    if (runtime->hasFunction(0x240AB0u)) {
        auto targetFn = runtime->lookupFunction(0x240AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB9Cu; }
        if (ctx->pc != 0x23AB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240AB0_0x240ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB9Cu; }
        if (ctx->pc != 0x23AB9Cu) { return; }
    }
    ctx->pc = 0x23AB9Cu;
label_23ab9c:
    // 0x23ab9c: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x23ab9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23aba0:
    // 0x23aba0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23aba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23aba4:
    // 0x23aba4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23aba8:
    // 0x23aba8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23abac:
    // 0x23abac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x23abacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23abb0:
    // 0x23abb0: 0xc09038e  jal         func_240E38
label_23abb4:
    if (ctx->pc == 0x23ABB4u) {
        ctx->pc = 0x23ABB4u;
            // 0x23abb4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x23ABB8u;
        goto label_23abb8;
    }
    ctx->pc = 0x23ABB0u;
    SET_GPR_U32(ctx, 31, 0x23ABB8u);
    ctx->pc = 0x23ABB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ABB0u;
            // 0x23abb4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (runtime->hasFunction(0x240E38u)) {
        auto targetFn = runtime->lookupFunction(0x240E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ABB8u; }
        if (ctx->pc != 0x23ABB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240E38_0x240e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ABB8u; }
        if (ctx->pc != 0x23ABB8u) { return; }
    }
    ctx->pc = 0x23ABB8u;
label_23abb8:
    // 0x23abb8: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23abb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23abbc:
    // 0x23abbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23abbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23abc0:
    // 0x23abc0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23abc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23abc4:
    // 0x23abc4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23abc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23abc8:
    // 0x23abc8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23abc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23abcc:
    // 0x23abcc: 0xc08b5ac  jal         func_22D6B0
label_23abd0:
    if (ctx->pc == 0x23ABD0u) {
        ctx->pc = 0x23ABD0u;
            // 0x23abd0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23ABD4u;
        goto label_23abd4;
    }
    ctx->pc = 0x23ABCCu;
    SET_GPR_U32(ctx, 31, 0x23ABD4u);
    ctx->pc = 0x23ABD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ABCCu;
            // 0x23abd0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ABD4u; }
        if (ctx->pc != 0x23ABD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ABD4u; }
        if (ctx->pc != 0x23ABD4u) { return; }
    }
    ctx->pc = 0x23ABD4u;
label_23abd4:
    // 0x23abd4: 0x100001b7  b           . + 4 + (0x1B7 << 2)
label_23abd8:
    if (ctx->pc == 0x23ABD8u) {
        ctx->pc = 0x23ABD8u;
            // 0x23abd8: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23ABDCu;
        goto label_23abdc;
    }
    ctx->pc = 0x23ABD4u;
    {
        const bool branch_taken_0x23abd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ABD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ABD4u;
            // 0x23abd8: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abd4) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23ABDCu;
label_23abdc:
    // 0x23abdc: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x23abdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23abe0:
    // 0x23abe0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23abe4:
    // 0x23abe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23abe8:
    // 0x23abe8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23abec:
    // 0x23abec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23abecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23abf0:
    // 0x23abf0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x23abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_23abf4:
    // 0x23abf4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x23abf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23abf8:
    // 0x23abf8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_23abfc:
    if (ctx->pc == 0x23ABFCu) {
        ctx->pc = 0x23ABFCu;
            // 0x23abfc: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23AC00u;
        goto label_23ac00;
    }
    ctx->pc = 0x23ABF8u;
    {
        const bool branch_taken_0x23abf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ABFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ABF8u;
            // 0x23abfc: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abf8) {
            ctx->pc = 0x23AC98u;
            goto label_23ac98;
        }
    }
    ctx->pc = 0x23AC00u;
label_23ac00:
    // 0x23ac00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23ac04:
    // 0x23ac04: 0x24425610  addiu       $v0, $v0, 0x5610
    ctx->pc = 0x23ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22032));
label_23ac08:
    // 0x23ac08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23ac0c:
    // 0x23ac0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ac10:
    // 0x23ac10: 0x800008  jr          $a0
label_23ac14:
    if (ctx->pc == 0x23AC14u) {
        ctx->pc = 0x23AC18u;
        goto label_23ac18;
    }
    ctx->pc = 0x23AC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AC18u: goto label_23ac18;
            case 0x23AC28u: goto label_23ac28;
            case 0x23AC64u: goto label_23ac64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23AC18u;
label_23ac18:
    // 0x23ac18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ac1c:
    // 0x23ac1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ac1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23ac20:
    // 0x23ac20: 0xc08eef2  jal         func_23BBC8
label_23ac24:
    if (ctx->pc == 0x23AC24u) {
        ctx->pc = 0x23AC24u;
            // 0x23ac24: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23AC28u;
        goto label_23ac28;
    }
    ctx->pc = 0x23AC20u;
    SET_GPR_U32(ctx, 31, 0x23AC28u);
    ctx->pc = 0x23AC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC20u;
            // 0x23ac24: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (runtime->hasFunction(0x23BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x23BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC28u; }
        if (ctx->pc != 0x23AC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023BBC8_0x23bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC28u; }
        if (ctx->pc != 0x23AC28u) { return; }
    }
    ctx->pc = 0x23AC28u;
label_23ac28:
    // 0x23ac28: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23ac28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23ac2c:
    // 0x23ac2c: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23ac2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23ac30:
    // 0x23ac30: 0x24a553d8  addiu       $a1, $a1, 0x53D8
    ctx->pc = 0x23ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21464));
label_23ac34:
    // 0x23ac34: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23ac34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23ac38:
    // 0x23ac38: 0xc08b5ac  jal         func_22D6B0
label_23ac3c:
    if (ctx->pc == 0x23AC3Cu) {
        ctx->pc = 0x23AC3Cu;
            // 0x23ac3c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23AC40u;
        goto label_23ac40;
    }
    ctx->pc = 0x23AC38u;
    SET_GPR_U32(ctx, 31, 0x23AC40u);
    ctx->pc = 0x23AC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC38u;
            // 0x23ac3c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC40u; }
        if (ctx->pc != 0x23AC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC40u; }
        if (ctx->pc != 0x23AC40u) { return; }
    }
    ctx->pc = 0x23AC40u;
label_23ac40:
    // 0x23ac40: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x23ac40u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_23ac44:
    // 0x23ac44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23ac44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23ac48:
    // 0x23ac48: 0x92e70001  lbu         $a3, 0x1($s7)
    ctx->pc = 0x23ac48u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23ac4c:
    // 0x23ac4c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x23ac4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23ac50:
    // 0x23ac50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23ac50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ac54:
    // 0x23ac54: 0xc08e8be  jal         func_23A2F8
label_23ac58:
    if (ctx->pc == 0x23AC58u) {
        ctx->pc = 0x23AC58u;
            // 0x23ac58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AC5Cu;
        goto label_23ac5c;
    }
    ctx->pc = 0x23AC54u;
    SET_GPR_U32(ctx, 31, 0x23AC5Cu);
    ctx->pc = 0x23AC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC54u;
            // 0x23ac58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (runtime->hasFunction(0x23A2F8u)) {
        auto targetFn = runtime->lookupFunction(0x23A2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC5Cu; }
        if (ctx->pc != 0x23AC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A2F8_0x23a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC5Cu; }
        if (ctx->pc != 0x23AC5Cu) { return; }
    }
    ctx->pc = 0x23AC5Cu;
label_23ac5c:
    // 0x23ac5c: 0x10000198  b           . + 4 + (0x198 << 2)
label_23ac60:
    if (ctx->pc == 0x23AC60u) {
        ctx->pc = 0x23AC60u;
            // 0x23ac60: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23AC64u;
        goto label_23ac64;
    }
    ctx->pc = 0x23AC5Cu;
    {
        const bool branch_taken_0x23ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC5Cu;
            // 0x23ac60: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac5c) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23AC64u;
label_23ac64:
    // 0x23ac64: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x23ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_23ac68:
    // 0x23ac68: 0x60f809  jalr        $v1
label_23ac6c:
    if (ctx->pc == 0x23AC6Cu) {
        ctx->pc = 0x23AC6Cu;
            // 0x23ac6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AC70u;
        goto label_23ac70;
    }
    ctx->pc = 0x23AC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23AC70u);
        ctx->pc = 0x23AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC68u;
            // 0x23ac6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AC70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AC70u; }
            if (ctx->pc != 0x23AC70u) { return; }
        }
        }
    }
    ctx->pc = 0x23AC70u;
label_23ac70:
    // 0x23ac70: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x23ac70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23ac74:
    // 0x23ac74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ac78:
    // 0x23ac78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ac78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23ac7c:
    // 0x23ac7c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x23ac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23ac80:
    // 0x23ac80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23ac84:
    // 0x23ac84: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x23ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_23ac88:
    // 0x23ac88: 0xc08eef2  jal         func_23BBC8
label_23ac8c:
    if (ctx->pc == 0x23AC8Cu) {
        ctx->pc = 0x23AC8Cu;
            // 0x23ac8c: 0xac400180  sw          $zero, 0x180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
        ctx->pc = 0x23AC90u;
        goto label_23ac90;
    }
    ctx->pc = 0x23AC88u;
    SET_GPR_U32(ctx, 31, 0x23AC90u);
    ctx->pc = 0x23AC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC88u;
            // 0x23ac8c: 0xac400180  sw          $zero, 0x180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (runtime->hasFunction(0x23BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x23BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC90u; }
        if (ctx->pc != 0x23AC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023BBC8_0x23bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC90u; }
        if (ctx->pc != 0x23AC90u) { return; }
    }
    ctx->pc = 0x23AC90u;
label_23ac90:
    // 0x23ac90: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_23ac94:
    if (ctx->pc == 0x23AC94u) {
        ctx->pc = 0x23AC94u;
            // 0x23ac94: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23AC98u;
        goto label_23ac98;
    }
    ctx->pc = 0x23AC90u;
    {
        const bool branch_taken_0x23ac90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC90u;
            // 0x23ac94: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac90) {
            ctx->pc = 0x23AC2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23ac2c;
        }
    }
    ctx->pc = 0x23AC98u;
label_23ac98:
    // 0x23ac98: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ac98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ac9c:
    // 0x23ac9c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23ac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23aca0:
    // 0x23aca0: 0xc0902ac  jal         func_240AB0
label_23aca4:
    if (ctx->pc == 0x23ACA4u) {
        ctx->pc = 0x23ACA4u;
            // 0x23aca4: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->pc = 0x23ACA8u;
        goto label_23aca8;
    }
    ctx->pc = 0x23ACA0u;
    SET_GPR_U32(ctx, 31, 0x23ACA8u);
    ctx->pc = 0x23ACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ACA0u;
            // 0x23aca4: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240AB0u;
    if (runtime->hasFunction(0x240AB0u)) {
        auto targetFn = runtime->lookupFunction(0x240AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ACA8u; }
        if (ctx->pc != 0x23ACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240AB0_0x240ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ACA8u; }
        if (ctx->pc != 0x23ACA8u) { return; }
    }
    ctx->pc = 0x23ACA8u;
label_23aca8:
    // 0x23aca8: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x23aca8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23acac:
    // 0x23acac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23acacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23acb0:
    // 0x23acb0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23acb4:
    // 0x23acb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23acb8:
    // 0x23acb8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x23acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23acbc:
    // 0x23acbc: 0xc09038e  jal         func_240E38
label_23acc0:
    if (ctx->pc == 0x23ACC0u) {
        ctx->pc = 0x23ACC0u;
            // 0x23acc0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x23ACC4u;
        goto label_23acc4;
    }
    ctx->pc = 0x23ACBCu;
    SET_GPR_U32(ctx, 31, 0x23ACC4u);
    ctx->pc = 0x23ACC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ACBCu;
            // 0x23acc0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (runtime->hasFunction(0x240E38u)) {
        auto targetFn = runtime->lookupFunction(0x240E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ACC4u; }
        if (ctx->pc != 0x23ACC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240E38_0x240e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ACC4u; }
        if (ctx->pc != 0x23ACC4u) { return; }
    }
    ctx->pc = 0x23ACC4u;
label_23acc4:
    // 0x23acc4: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23acc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23acc8:
    // 0x23acc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23acc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23accc:
    // 0x23accc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23acccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23acd0:
    // 0x23acd0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23acd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23acd4:
    // 0x23acd4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23acd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23acd8:
    // 0x23acd8: 0xc08b5ac  jal         func_22D6B0
label_23acdc:
    if (ctx->pc == 0x23ACDCu) {
        ctx->pc = 0x23ACDCu;
            // 0x23acdc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23ACE0u;
        goto label_23ace0;
    }
    ctx->pc = 0x23ACD8u;
    SET_GPR_U32(ctx, 31, 0x23ACE0u);
    ctx->pc = 0x23ACDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ACD8u;
            // 0x23acdc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ACE0u; }
        if (ctx->pc != 0x23ACE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ACE0u; }
        if (ctx->pc != 0x23ACE0u) { return; }
    }
    ctx->pc = 0x23ACE0u;
label_23ace0:
    // 0x23ace0: 0x10000174  b           . + 4 + (0x174 << 2)
label_23ace4:
    if (ctx->pc == 0x23ACE4u) {
        ctx->pc = 0x23ACE4u;
            // 0x23ace4: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23ACE8u;
        goto label_23ace8;
    }
    ctx->pc = 0x23ACE0u;
    {
        const bool branch_taken_0x23ace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ACE0u;
            // 0x23ace4: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ace0) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23ACE8u;
label_23ace8:
    // 0x23ace8: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x23ace8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23acec:
    // 0x23acec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23acecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23acf0:
    // 0x23acf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23acf4:
    // 0x23acf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23acf8:
    // 0x23acf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23acfc:
    // 0x23acfc: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x23acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_23ad00:
    // 0x23ad00: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x23ad00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23ad04:
    // 0x23ad04: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_23ad08:
    if (ctx->pc == 0x23AD08u) {
        ctx->pc = 0x23AD08u;
            // 0x23ad08: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23AD0Cu;
        goto label_23ad0c;
    }
    ctx->pc = 0x23AD04u;
    {
        const bool branch_taken_0x23ad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD04u;
            // 0x23ad08: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad04) {
            ctx->pc = 0x23ADA0u;
            goto label_23ada0;
        }
    }
    ctx->pc = 0x23AD0Cu;
label_23ad0c:
    // 0x23ad0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23ad10:
    // 0x23ad10: 0x24425630  addiu       $v0, $v0, 0x5630
    ctx->pc = 0x23ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22064));
label_23ad14:
    // 0x23ad14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23ad18:
    // 0x23ad18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ad1c:
    // 0x23ad1c: 0x800008  jr          $a0
label_23ad20:
    if (ctx->pc == 0x23AD20u) {
        ctx->pc = 0x23AD24u;
        goto label_23ad24;
    }
    ctx->pc = 0x23AD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AD24u: goto label_23ad24;
            case 0x23AD40u: goto label_23ad40;
            case 0x23AD70u: goto label_23ad70;
            case 0x23B000u: goto label_23b000;
            case 0x23B2BCu: goto label_23b2bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23AD24u;
label_23ad24:
    // 0x23ad24: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x23ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_23ad28:
    // 0x23ad28: 0x40f809  jalr        $v0
label_23ad2c:
    if (ctx->pc == 0x23AD2Cu) {
        ctx->pc = 0x23AD2Cu;
            // 0x23ad2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AD30u;
        goto label_23ad30;
    }
    ctx->pc = 0x23AD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AD30u);
        ctx->pc = 0x23AD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD28u;
            // 0x23ad2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AD30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AD30u; }
            if (ctx->pc != 0x23AD30u) { return; }
        }
        }
    }
    ctx->pc = 0x23AD30u;
label_23ad30:
    // 0x23ad30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ad34:
    // 0x23ad34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ad34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23ad38:
    // 0x23ad38: 0x10000007  b           . + 4 + (0x7 << 2)
label_23ad3c:
    if (ctx->pc == 0x23AD3Cu) {
        ctx->pc = 0x23AD3Cu;
            // 0x23ad3c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x23AD40u;
        goto label_23ad40;
    }
    ctx->pc = 0x23AD38u;
    {
        const bool branch_taken_0x23ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD38u;
            // 0x23ad3c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad38) {
            ctx->pc = 0x23AD58u;
            goto label_23ad58;
        }
    }
    ctx->pc = 0x23AD40u;
label_23ad40:
    // 0x23ad40: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x23ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_23ad44:
    // 0x23ad44: 0x40f809  jalr        $v0
label_23ad48:
    if (ctx->pc == 0x23AD48u) {
        ctx->pc = 0x23AD48u;
            // 0x23ad48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AD4Cu;
        goto label_23ad4c;
    }
    ctx->pc = 0x23AD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AD4Cu);
        ctx->pc = 0x23AD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD44u;
            // 0x23ad48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AD4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AD4Cu; }
            if (ctx->pc != 0x23AD4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23AD4Cu;
label_23ad4c:
    // 0x23ad4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ad4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ad50:
    // 0x23ad50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ad50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23ad54:
    // 0x23ad54: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23ad54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23ad58:
    // 0x23ad58: 0xc08eef2  jal         func_23BBC8
label_23ad5c:
    if (ctx->pc == 0x23AD5Cu) {
        ctx->pc = 0x23AD60u;
        goto label_23ad60;
    }
    ctx->pc = 0x23AD58u;
    SET_GPR_U32(ctx, 31, 0x23AD60u);
    ctx->pc = 0x23BBC8u;
    if (runtime->hasFunction(0x23BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x23BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD60u; }
        if (ctx->pc != 0x23AD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023BBC8_0x23bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD60u; }
        if (ctx->pc != 0x23AD60u) { return; }
    }
    ctx->pc = 0x23AD60u;
label_23ad60:
    // 0x23ad60: 0xc08f512  jal         func_23D448
label_23ad64:
    if (ctx->pc == 0x23AD64u) {
        ctx->pc = 0x23AD64u;
            // 0x23ad64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AD68u;
        goto label_23ad68;
    }
    ctx->pc = 0x23AD60u;
    SET_GPR_U32(ctx, 31, 0x23AD68u);
    ctx->pc = 0x23AD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD60u;
            // 0x23ad64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D448u;
    if (runtime->hasFunction(0x23D448u)) {
        auto targetFn = runtime->lookupFunction(0x23D448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD68u; }
        if (ctx->pc != 0x23AD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023D448_0x23d448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD68u; }
        if (ctx->pc != 0x23AD68u) { return; }
    }
    ctx->pc = 0x23AD68u;
label_23ad68:
    // 0x23ad68: 0x10000155  b           . + 4 + (0x155 << 2)
label_23ad6c:
    if (ctx->pc == 0x23AD6Cu) {
        ctx->pc = 0x23AD6Cu;
            // 0x23ad6c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23AD70u;
        goto label_23ad70;
    }
    ctx->pc = 0x23AD68u;
    {
        const bool branch_taken_0x23ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD68u;
            // 0x23ad6c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad68) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23AD70u;
label_23ad70:
    // 0x23ad70: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x23ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_23ad74:
    // 0x23ad74: 0x40f809  jalr        $v0
label_23ad78:
    if (ctx->pc == 0x23AD78u) {
        ctx->pc = 0x23AD78u;
            // 0x23ad78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AD7Cu;
        goto label_23ad7c;
    }
    ctx->pc = 0x23AD74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AD7Cu);
        ctx->pc = 0x23AD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD74u;
            // 0x23ad78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AD7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AD7Cu; }
            if (ctx->pc != 0x23AD7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23AD7Cu;
label_23ad7c:
    // 0x23ad7c: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x23ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_23ad80:
    // 0x23ad80: 0x60f809  jalr        $v1
label_23ad84:
    if (ctx->pc == 0x23AD84u) {
        ctx->pc = 0x23AD84u;
            // 0x23ad84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AD88u;
        goto label_23ad88;
    }
    ctx->pc = 0x23AD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23AD88u);
        ctx->pc = 0x23AD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD80u;
            // 0x23ad84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AD88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AD88u; }
            if (ctx->pc != 0x23AD88u) { return; }
        }
        }
    }
    ctx->pc = 0x23AD88u;
label_23ad88:
    // 0x23ad88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ad88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ad8c:
    // 0x23ad8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ad8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23ad90:
    // 0x23ad90: 0xc08eef2  jal         func_23BBC8
label_23ad94:
    if (ctx->pc == 0x23AD94u) {
        ctx->pc = 0x23AD94u;
            // 0x23ad94: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23AD98u;
        goto label_23ad98;
    }
    ctx->pc = 0x23AD90u;
    SET_GPR_U32(ctx, 31, 0x23AD98u);
    ctx->pc = 0x23AD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD90u;
            // 0x23ad94: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (runtime->hasFunction(0x23BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x23BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD98u; }
        if (ctx->pc != 0x23AD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023BBC8_0x23bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AD98u; }
        if (ctx->pc != 0x23AD98u) { return; }
    }
    ctx->pc = 0x23AD98u;
label_23ad98:
    // 0x23ad98: 0x10000149  b           . + 4 + (0x149 << 2)
label_23ad9c:
    if (ctx->pc == 0x23AD9Cu) {
        ctx->pc = 0x23AD9Cu;
            // 0x23ad9c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23ADA0u;
        goto label_23ada0;
    }
    ctx->pc = 0x23AD98u;
    {
        const bool branch_taken_0x23ad98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD98u;
            // 0x23ad9c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad98) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23ADA0u;
label_23ada0:
    // 0x23ada0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ada0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ada4:
    // 0x23ada4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23ada4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23ada8:
    // 0x23ada8: 0xc0902ac  jal         func_240AB0
label_23adac:
    if (ctx->pc == 0x23ADACu) {
        ctx->pc = 0x23ADACu;
            // 0x23adac: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->pc = 0x23ADB0u;
        goto label_23adb0;
    }
    ctx->pc = 0x23ADA8u;
    SET_GPR_U32(ctx, 31, 0x23ADB0u);
    ctx->pc = 0x23ADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ADA8u;
            // 0x23adac: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240AB0u;
    if (runtime->hasFunction(0x240AB0u)) {
        auto targetFn = runtime->lookupFunction(0x240AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADB0u; }
        if (ctx->pc != 0x23ADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240AB0_0x240ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADB0u; }
        if (ctx->pc != 0x23ADB0u) { return; }
    }
    ctx->pc = 0x23ADB0u;
label_23adb0:
    // 0x23adb0: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x23adb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23adb4:
    // 0x23adb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23adb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23adb8:
    // 0x23adb8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23adbc:
    // 0x23adbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23adc0:
    // 0x23adc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x23adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23adc4:
    // 0x23adc4: 0xc09038e  jal         func_240E38
label_23adc8:
    if (ctx->pc == 0x23ADC8u) {
        ctx->pc = 0x23ADC8u;
            // 0x23adc8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x23ADCCu;
        goto label_23adcc;
    }
    ctx->pc = 0x23ADC4u;
    SET_GPR_U32(ctx, 31, 0x23ADCCu);
    ctx->pc = 0x23ADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ADC4u;
            // 0x23adc8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (runtime->hasFunction(0x240E38u)) {
        auto targetFn = runtime->lookupFunction(0x240E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADCCu; }
        if (ctx->pc != 0x23ADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240E38_0x240e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADCCu; }
        if (ctx->pc != 0x23ADCCu) { return; }
    }
    ctx->pc = 0x23ADCCu;
label_23adcc:
    // 0x23adcc: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23adccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23add0:
    // 0x23add0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23add0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23add4:
    // 0x23add4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23add4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23add8:
    // 0x23add8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23add8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23addc:
    // 0x23addc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23addcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ade0:
    // 0x23ade0: 0xc08b5ac  jal         func_22D6B0
label_23ade4:
    if (ctx->pc == 0x23ADE4u) {
        ctx->pc = 0x23ADE4u;
            // 0x23ade4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23ADE8u;
        goto label_23ade8;
    }
    ctx->pc = 0x23ADE0u;
    SET_GPR_U32(ctx, 31, 0x23ADE8u);
    ctx->pc = 0x23ADE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ADE0u;
            // 0x23ade4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADE8u; }
        if (ctx->pc != 0x23ADE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADE8u; }
        if (ctx->pc != 0x23ADE8u) { return; }
    }
    ctx->pc = 0x23ADE8u;
label_23ade8:
    // 0x23ade8: 0x10000132  b           . + 4 + (0x132 << 2)
label_23adec:
    if (ctx->pc == 0x23ADECu) {
        ctx->pc = 0x23ADECu;
            // 0x23adec: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23ADF0u;
        goto label_23adf0;
    }
    ctx->pc = 0x23ADE8u;
    {
        const bool branch_taken_0x23ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ADECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ADE8u;
            // 0x23adec: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ade8) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23ADF0u;
label_23adf0:
    // 0x23adf0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23adf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23adf4:
    // 0x23adf4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23adf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23adf8:
    // 0x23adf8: 0xc0902ac  jal         func_240AB0
label_23adfc:
    if (ctx->pc == 0x23ADFCu) {
        ctx->pc = 0x23ADFCu;
            // 0x23adfc: 0x261053f8  addiu       $s0, $s0, 0x53F8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21496));
        ctx->pc = 0x23AE00u;
        goto label_23ae00;
    }
    ctx->pc = 0x23ADF8u;
    SET_GPR_U32(ctx, 31, 0x23AE00u);
    ctx->pc = 0x23ADFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ADF8u;
            // 0x23adfc: 0x261053f8  addiu       $s0, $s0, 0x53F8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240AB0u;
    if (runtime->hasFunction(0x240AB0u)) {
        auto targetFn = runtime->lookupFunction(0x240AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE00u; }
        if (ctx->pc != 0x23AE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240AB0_0x240ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE00u; }
        if (ctx->pc != 0x23AE00u) { return; }
    }
    ctx->pc = 0x23AE00u;
label_23ae00:
    // 0x23ae00: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23ae00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23ae04:
    // 0x23ae04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23ae04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ae08:
    // 0x23ae08: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23ae08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23ae0c:
    // 0x23ae0c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23ae0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ae10:
    // 0x23ae10: 0xc08b5ac  jal         func_22D6B0
label_23ae14:
    if (ctx->pc == 0x23AE14u) {
        ctx->pc = 0x23AE14u;
            // 0x23ae14: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23AE18u;
        goto label_23ae18;
    }
    ctx->pc = 0x23AE10u;
    SET_GPR_U32(ctx, 31, 0x23AE18u);
    ctx->pc = 0x23AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE10u;
            // 0x23ae14: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE18u; }
        if (ctx->pc != 0x23AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE18u; }
        if (ctx->pc != 0x23AE18u) { return; }
    }
    ctx->pc = 0x23AE18u;
label_23ae18:
    // 0x23ae18: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x23ae18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23ae1c:
    // 0x23ae1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ae20:
    // 0x23ae20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23ae24:
    // 0x23ae24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23ae28:
    // 0x23ae28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23ae2c:
    // 0x23ae2c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x23ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_23ae30:
    // 0x23ae30: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x23ae30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23ae34:
    // 0x23ae34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23ae38:
    if (ctx->pc == 0x23AE38u) {
        ctx->pc = 0x23AE38u;
            // 0x23ae38: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23AE3Cu;
        goto label_23ae3c;
    }
    ctx->pc = 0x23AE34u;
    {
        const bool branch_taken_0x23ae34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE34u;
            // 0x23ae38: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae34) {
            ctx->pc = 0x23AE54u;
            goto label_23ae54;
        }
    }
    ctx->pc = 0x23AE3Cu;
label_23ae3c:
    // 0x23ae3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23ae40:
    // 0x23ae40: 0x24425650  addiu       $v0, $v0, 0x5650
    ctx->pc = 0x23ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22096));
label_23ae44:
    // 0x23ae44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23ae48:
    // 0x23ae48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ae48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ae4c:
    // 0x23ae4c: 0x800008  jr          $a0
label_23ae50:
    if (ctx->pc == 0x23AE50u) {
        ctx->pc = 0x23AE54u;
        goto label_23ae54;
    }
    ctx->pc = 0x23AE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B000u: goto label_23b000;
            case 0x23B2BCu: goto label_23b2bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23AE54u;
label_23ae54:
    // 0x23ae54: 0x92e40000  lbu         $a0, 0x0($s7)
    ctx->pc = 0x23ae54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23ae58:
    // 0x23ae58: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23ae58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23ae5c:
    // 0x23ae5c: 0xc0902ac  jal         func_240AB0
label_23ae60:
    if (ctx->pc == 0x23AE60u) {
        ctx->pc = 0x23AE60u;
            // 0x23ae60: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->pc = 0x23AE64u;
        goto label_23ae64;
    }
    ctx->pc = 0x23AE5Cu;
    SET_GPR_U32(ctx, 31, 0x23AE64u);
    ctx->pc = 0x23AE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE5Cu;
            // 0x23ae60: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240AB0u;
    if (runtime->hasFunction(0x240AB0u)) {
        auto targetFn = runtime->lookupFunction(0x240AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE64u; }
        if (ctx->pc != 0x23AE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240AB0_0x240ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE64u; }
        if (ctx->pc != 0x23AE64u) { return; }
    }
    ctx->pc = 0x23AE64u;
label_23ae64:
    // 0x23ae64: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x23ae64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23ae68:
    // 0x23ae68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23ae68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ae6c:
    // 0x23ae6c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x23ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23ae70:
    // 0x23ae70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23ae74:
    // 0x23ae74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x23ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23ae78:
    // 0x23ae78: 0xc09038e  jal         func_240E38
label_23ae7c:
    if (ctx->pc == 0x23AE7Cu) {
        ctx->pc = 0x23AE7Cu;
            // 0x23ae7c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x23AE80u;
        goto label_23ae80;
    }
    ctx->pc = 0x23AE78u;
    SET_GPR_U32(ctx, 31, 0x23AE80u);
    ctx->pc = 0x23AE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE78u;
            // 0x23ae7c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (runtime->hasFunction(0x240E38u)) {
        auto targetFn = runtime->lookupFunction(0x240E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE80u; }
        if (ctx->pc != 0x23AE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240E38_0x240e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE80u; }
        if (ctx->pc != 0x23AE80u) { return; }
    }
    ctx->pc = 0x23AE80u;
label_23ae80:
    // 0x23ae80: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23ae80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23ae84:
    // 0x23ae84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23ae84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ae88:
    // 0x23ae88: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x23ae88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23ae8c:
    // 0x23ae8c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23ae8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ae90:
    // 0x23ae90: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23ae90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ae94:
    // 0x23ae94: 0xc08b5ac  jal         func_22D6B0
label_23ae98:
    if (ctx->pc == 0x23AE98u) {
        ctx->pc = 0x23AE98u;
            // 0x23ae98: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23AE9Cu;
        goto label_23ae9c;
    }
    ctx->pc = 0x23AE94u;
    SET_GPR_U32(ctx, 31, 0x23AE9Cu);
    ctx->pc = 0x23AE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE94u;
            // 0x23ae98: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE9Cu; }
        if (ctx->pc != 0x23AE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE9Cu; }
        if (ctx->pc != 0x23AE9Cu) { return; }
    }
    ctx->pc = 0x23AE9Cu;
label_23ae9c:
    // 0x23ae9c: 0x10000105  b           . + 4 + (0x105 << 2)
label_23aea0:
    if (ctx->pc == 0x23AEA0u) {
        ctx->pc = 0x23AEA0u;
            // 0x23aea0: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23AEA4u;
        goto label_23aea4;
    }
    ctx->pc = 0x23AE9Cu;
    {
        const bool branch_taken_0x23ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE9Cu;
            // 0x23aea0: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae9c) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23AEA4u;
label_23aea4:
    // 0x23aea4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x23aea4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_23aea8:
    // 0x23aea8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x23aea8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_23aeac:
    // 0x23aeac: 0x8ce5fe90  lw          $a1, -0x170($a3)
    ctx->pc = 0x23aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294966928)));
label_23aeb0:
    // 0x23aeb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23aeb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23aeb4:
    // 0x23aeb4: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x23aeb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_23aeb8:
    // 0x23aeb8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_23aebc:
    // 0x23aebc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x23aebcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_23aec0:
    // 0x23aec0: 0x828025  or          $s0, $a0, $v0
    ctx->pc = 0x23aec0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23aec4:
    // 0x23aec4: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
label_23aec8:
    if (ctx->pc == 0x23AEC8u) {
        ctx->pc = 0x23AEC8u;
            // 0x23aec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AECCu;
        goto label_23aecc;
    }
    ctx->pc = 0x23AEC4u;
    {
        const bool branch_taken_0x23aec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x23AEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEC4u;
            // 0x23aec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aec4) {
            ctx->pc = 0x23AED8u;
            goto label_23aed8;
        }
    }
    ctx->pc = 0x23AECCu;
label_23aecc:
    // 0x23aecc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23aeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23aed0:
    // 0x23aed0: 0x1000000d  b           . + 4 + (0xD << 2)
label_23aed4:
    if (ctx->pc == 0x23AED4u) {
        ctx->pc = 0x23AED4u;
            // 0x23aed4: 0x3c16003f  lui         $s6, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23AED8u;
        goto label_23aed8;
    }
    ctx->pc = 0x23AED0u;
    {
        const bool branch_taken_0x23aed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AED0u;
            // 0x23aed4: 0x3c16003f  lui         $s6, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aed0) {
            ctx->pc = 0x23AF08u;
            goto label_23af08;
        }
    }
    ctx->pc = 0x23AED8u;
label_23aed8:
    // 0x23aed8: 0x3c16003f  lui         $s6, 0x3F
    ctx->pc = 0x23aed8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)63 << 16));
label_23aedc:
    // 0x23aedc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23aedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23aee0:
    // 0x23aee0: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x23aee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
label_23aee4:
    // 0x23aee4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23aee8:
    if (ctx->pc == 0x23AEE8u) {
        ctx->pc = 0x23AEE8u;
            // 0x23aee8: 0x24e2fe90  addiu       $v0, $a3, -0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966928));
        ctx->pc = 0x23AEECu;
        goto label_23aeec;
    }
    ctx->pc = 0x23AEE4u;
    {
        const bool branch_taken_0x23aee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEE4u;
            // 0x23aee8: 0x24e2fe90  addiu       $v0, $a3, -0x170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aee4) {
            ctx->pc = 0x23AF08u;
            goto label_23af08;
        }
    }
    ctx->pc = 0x23AEECu;
label_23aeec:
    // 0x23aeec: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x23aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_23aef0:
    // 0x23aef0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23aef4:
    // 0x23aef4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23aef8:
    // 0x23aef8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x23aef8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_23aefc:
    // 0x23aefc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_23af00:
    if (ctx->pc == 0x23AF00u) {
        ctx->pc = 0x23AF00u;
            // 0x23af00: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x23AF04u;
        goto label_23af04;
    }
    ctx->pc = 0x23AEFCu;
    {
        const bool branch_taken_0x23aefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x23AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEFCu;
            // 0x23af00: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aefc) {
            ctx->pc = 0x23AEE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23aee0;
        }
    }
    ctx->pc = 0x23AF04u;
label_23af04:
    // 0x23af04: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x23af04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23af08:
    // 0x23af08: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23af08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23af0c:
    // 0x23af0c: 0xc0902ac  jal         func_240AB0
label_23af10:
    if (ctx->pc == 0x23AF10u) {
        ctx->pc = 0x23AF10u;
            // 0x23af10: 0x2e320001  sltiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x23AF14u;
        goto label_23af14;
    }
    ctx->pc = 0x23AF0Cu;
    SET_GPR_U32(ctx, 31, 0x23AF14u);
    ctx->pc = 0x23AF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF0Cu;
            // 0x23af10: 0x2e320001  sltiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x240AB0u;
    if (runtime->hasFunction(0x240AB0u)) {
        auto targetFn = runtime->lookupFunction(0x240AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AF14u; }
        if (ctx->pc != 0x23AF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240AB0_0x240ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AF14u; }
        if (ctx->pc != 0x23AF14u) { return; }
    }
    ctx->pc = 0x23AF14u;
label_23af14:
    // 0x23af14: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_23af18:
    if (ctx->pc == 0x23AF18u) {
        ctx->pc = 0x23AF18u;
            // 0x23af18: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AF1Cu;
        goto label_23af1c;
    }
    ctx->pc = 0x23AF14u;
    {
        const bool branch_taken_0x23af14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF14u;
            // 0x23af18: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af14) {
            ctx->pc = 0x23AF3Cu;
            goto label_23af3c;
        }
    }
    ctx->pc = 0x23AF1Cu;
label_23af1c:
    // 0x23af1c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x23af1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23af20:
    // 0x23af20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23af24:
    // 0x23af24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23af24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23af28:
    // 0x23af28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23af2c:
    // 0x23af2c: 0xc09038e  jal         func_240E38
label_23af30:
    if (ctx->pc == 0x23AF30u) {
        ctx->pc = 0x23AF30u;
            // 0x23af30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x23AF34u;
        goto label_23af34;
    }
    ctx->pc = 0x23AF2Cu;
    SET_GPR_U32(ctx, 31, 0x23AF34u);
    ctx->pc = 0x23AF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF2Cu;
            // 0x23af30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (runtime->hasFunction(0x240E38u)) {
        auto targetFn = runtime->lookupFunction(0x240E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AF34u; }
        if (ctx->pc != 0x23AF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240E38_0x240e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AF34u; }
        if (ctx->pc != 0x23AF34u) { return; }
    }
    ctx->pc = 0x23AF34u;
label_23af34:
    // 0x23af34: 0x10000003  b           . + 4 + (0x3 << 2)
label_23af38:
    if (ctx->pc == 0x23AF38u) {
        ctx->pc = 0x23AF38u;
            // 0x23af38: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AF3Cu;
        goto label_23af3c;
    }
    ctx->pc = 0x23AF34u;
    {
        const bool branch_taken_0x23af34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF34u;
            // 0x23af38: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af34) {
            ctx->pc = 0x23AF44u;
            goto label_23af44;
        }
    }
    ctx->pc = 0x23AF3Cu;
label_23af3c:
    // 0x23af3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23af40:
    // 0x23af40: 0x24435438  addiu       $v1, $v0, 0x5438
    ctx->pc = 0x23af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21560));
label_23af44:
    // 0x23af44: 0x2408002b  addiu       $t0, $zero, 0x2B
    ctx->pc = 0x23af44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_23af48:
    // 0x23af48: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23af48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_23af4c:
    // 0x23af4c: 0x26c55440  addiu       $a1, $s6, 0x5440
    ctx->pc = 0x23af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 21568));
label_23af50:
    // 0x23af50: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_23af54:
    if (ctx->pc == 0x23AF54u) {
        ctx->pc = 0x23AF54u;
            // 0x23af54: 0x52400b  movn        $t0, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->pc = 0x23AF58u;
        goto label_23af58;
    }
    ctx->pc = 0x23AF50u;
    {
        const bool branch_taken_0x23af50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF50u;
            // 0x23af54: 0x52400b  movn        $t0, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af50) {
            ctx->pc = 0x23AF60u;
            goto label_23af60;
        }
    }
    ctx->pc = 0x23AF58u;
label_23af58:
    // 0x23af58: 0x10000003  b           . + 4 + (0x3 << 2)
label_23af5c:
    if (ctx->pc == 0x23AF5Cu) {
        ctx->pc = 0x23AF5Cu;
            // 0x23af5c: 0x8e2b0004  lw          $t3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x23AF60u;
        goto label_23af60;
    }
    ctx->pc = 0x23AF58u;
    {
        const bool branch_taken_0x23af58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF58u;
            // 0x23af5c: 0x8e2b0004  lw          $t3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af58) {
            ctx->pc = 0x23AF68u;
            goto label_23af68;
        }
    }
    ctx->pc = 0x23AF60u;
label_23af60:
    // 0x23af60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23af60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23af64:
    // 0x23af64: 0x244b5470  addiu       $t3, $v0, 0x5470
    ctx->pc = 0x23af64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 21616));
label_23af68:
    // 0x23af68: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23af68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23af6c:
    // 0x23af6c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x23af6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23af70:
    // 0x23af70: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x23af70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23af74:
    // 0x23af74: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x23af74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23af78:
    // 0x23af78: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x23af78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_23af7c:
    // 0x23af7c: 0xc08b5ac  jal         func_22D6B0
label_23af80:
    if (ctx->pc == 0x23AF80u) {
        ctx->pc = 0x23AF80u;
            // 0x23af80: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23AF84u;
        goto label_23af84;
    }
    ctx->pc = 0x23AF7Cu;
    SET_GPR_U32(ctx, 31, 0x23AF84u);
    ctx->pc = 0x23AF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF7Cu;
            // 0x23af80: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AF84u; }
        if (ctx->pc != 0x23AF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AF84u; }
        if (ctx->pc != 0x23AF84u) { return; }
    }
    ctx->pc = 0x23AF84u;
label_23af84:
    // 0x23af84: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
label_23af88:
    if (ctx->pc == 0x23AF88u) {
        ctx->pc = 0x23AF88u;
            // 0x23af88: 0x92820002  lbu         $v0, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->pc = 0x23AF8Cu;
        goto label_23af8c;
    }
    ctx->pc = 0x23AF84u;
    {
        const bool branch_taken_0x23af84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23af84) {
            ctx->pc = 0x23AF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF84u;
            // 0x23af88: 0x92820002  lbu         $v0, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AFC8u;
            goto label_23afc8;
        }
    }
    ctx->pc = 0x23AF8Cu;
label_23af8c:
    // 0x23af8c: 0x5640000e  bnel        $s2, $zero, . + 4 + (0xE << 2)
label_23af90:
    if (ctx->pc == 0x23AF90u) {
        ctx->pc = 0x23AF90u;
            // 0x23af90: 0x92820002  lbu         $v0, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->pc = 0x23AF94u;
        goto label_23af94;
    }
    ctx->pc = 0x23AF8Cu;
    {
        const bool branch_taken_0x23af8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x23af8c) {
            ctx->pc = 0x23AF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF8Cu;
            // 0x23af90: 0x92820002  lbu         $v0, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AFC8u;
            goto label_23afc8;
        }
    }
    ctx->pc = 0x23AF94u;
label_23af94:
    // 0x23af94: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x23af94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23af98:
    // 0x23af98: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23af98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23af9c:
    // 0x23af9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23afa0:
    // 0x23afa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23afa4:
    // 0x23afa4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23afa8:
    // 0x23afa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23afac:
    // 0x23afac: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_23afb0:
    if (ctx->pc == 0x23AFB0u) {
        ctx->pc = 0x23AFB0u;
            // 0x23afb0: 0x92820002  lbu         $v0, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->pc = 0x23AFB4u;
        goto label_23afb4;
    }
    ctx->pc = 0x23AFACu;
    {
        const bool branch_taken_0x23afac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23afac) {
            ctx->pc = 0x23AFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFACu;
            // 0x23afb0: 0x92820002  lbu         $v0, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AFC8u;
            goto label_23afc8;
        }
    }
    ctx->pc = 0x23AFB4u;
label_23afb4:
    // 0x23afb4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x23afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_23afb8:
    // 0x23afb8: 0x40f809  jalr        $v0
label_23afbc:
    if (ctx->pc == 0x23AFBCu) {
        ctx->pc = 0x23AFBCu;
            // 0x23afbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AFC0u;
        goto label_23afc0;
    }
    ctx->pc = 0x23AFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AFC0u);
        ctx->pc = 0x23AFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFB8u;
            // 0x23afbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AFC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AFC0u; }
            if (ctx->pc != 0x23AFC0u) { return; }
        }
        }
    }
    ctx->pc = 0x23AFC0u;
label_23afc0:
    // 0x23afc0: 0x100000bf  b           . + 4 + (0xBF << 2)
label_23afc4:
    if (ctx->pc == 0x23AFC4u) {
        ctx->pc = 0x23AFC4u;
            // 0x23afc4: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23AFC8u;
        goto label_23afc8;
    }
    ctx->pc = 0x23AFC0u;
    {
        const bool branch_taken_0x23afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFC0u;
            // 0x23afc4: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afc0) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23AFC8u;
label_23afc8:
    // 0x23afc8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x23afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23afcc:
    // 0x23afcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23afccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23afd0:
    // 0x23afd0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23afd4:
    // 0x23afd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23afd8:
    // 0x23afd8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x23afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_23afdc:
    // 0x23afdc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x23afdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23afe0:
    // 0x23afe0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_23afe4:
    if (ctx->pc == 0x23AFE4u) {
        ctx->pc = 0x23AFE4u;
            // 0x23afe4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23AFE8u;
        goto label_23afe8;
    }
    ctx->pc = 0x23AFE0u;
    {
        const bool branch_taken_0x23afe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFE0u;
            // 0x23afe4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afe0) {
            ctx->pc = 0x23B018u;
            goto label_23b018;
        }
    }
    ctx->pc = 0x23AFE8u;
label_23afe8:
    // 0x23afe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23afec:
    // 0x23afec: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x23afecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_23aff0:
    // 0x23aff0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23aff4:
    // 0x23aff4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23aff8:
    // 0x23aff8: 0x800008  jr          $a0
label_23affc:
    if (ctx->pc == 0x23AFFCu) {
        ctx->pc = 0x23B000u;
        goto label_23b000;
    }
    ctx->pc = 0x23AFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B000u: goto label_23b000;
            case 0x23B2BCu: goto label_23b2bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B000u;
label_23b000:
    // 0x23b000: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b004:
    // 0x23b004: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23b004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23b008:
    // 0x23b008: 0xc08eef2  jal         func_23BBC8
label_23b00c:
    if (ctx->pc == 0x23B00Cu) {
        ctx->pc = 0x23B00Cu;
            // 0x23b00c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23B010u;
        goto label_23b010;
    }
    ctx->pc = 0x23B008u;
    SET_GPR_U32(ctx, 31, 0x23B010u);
    ctx->pc = 0x23B00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B008u;
            // 0x23b00c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (runtime->hasFunction(0x23BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x23BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B010u; }
        if (ctx->pc != 0x23B010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023BBC8_0x23bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B010u; }
        if (ctx->pc != 0x23B010u) { return; }
    }
    ctx->pc = 0x23B010u;
label_23b010:
    // 0x23b010: 0x100000ab  b           . + 4 + (0xAB << 2)
label_23b014:
    if (ctx->pc == 0x23B014u) {
        ctx->pc = 0x23B014u;
            // 0x23b014: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23B018u;
        goto label_23b018;
    }
    ctx->pc = 0x23B010u;
    {
        const bool branch_taken_0x23b010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B010u;
            // 0x23b014: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b010) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23B018u;
label_23b018:
    // 0x23b018: 0x92e40000  lbu         $a0, 0x0($s7)
    ctx->pc = 0x23b018u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_23b01c:
    // 0x23b01c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23b01cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23b020:
    // 0x23b020: 0xc0902ac  jal         func_240AB0
label_23b024:
    if (ctx->pc == 0x23B024u) {
        ctx->pc = 0x23B024u;
            // 0x23b024: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->pc = 0x23B028u;
        goto label_23b028;
    }
    ctx->pc = 0x23B020u;
    SET_GPR_U32(ctx, 31, 0x23B028u);
    ctx->pc = 0x23B024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B020u;
            // 0x23b024: 0x26105390  addiu       $s0, $s0, 0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240AB0u;
    if (runtime->hasFunction(0x240AB0u)) {
        auto targetFn = runtime->lookupFunction(0x240AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B028u; }
        if (ctx->pc != 0x23B028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240AB0_0x240ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B028u; }
        if (ctx->pc != 0x23B028u) { return; }
    }
    ctx->pc = 0x23B028u;
label_23b028:
    // 0x23b028: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23b028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b02c:
    // 0x23b02c: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x23b02cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23b030:
    // 0x23b030: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x23b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23b034:
    // 0x23b034: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b038:
    // 0x23b038: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23b038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23b03c:
    // 0x23b03c: 0xc09038e  jal         func_240E38
label_23b040:
    if (ctx->pc == 0x23B040u) {
        ctx->pc = 0x23B040u;
            // 0x23b040: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x23B044u;
        goto label_23b044;
    }
    ctx->pc = 0x23B03Cu;
    SET_GPR_U32(ctx, 31, 0x23B044u);
    ctx->pc = 0x23B040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B03Cu;
            // 0x23b040: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (runtime->hasFunction(0x240E38u)) {
        auto targetFn = runtime->lookupFunction(0x240E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B044u; }
        if (ctx->pc != 0x23B044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240E38_0x240e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B044u; }
        if (ctx->pc != 0x23B044u) { return; }
    }
    ctx->pc = 0x23B044u;
label_23b044:
    // 0x23b044: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23b044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23b048:
    // 0x23b048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b04c:
    // 0x23b04c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23b04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23b050:
    // 0x23b050: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x23b050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b054:
    // 0x23b054: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x23b054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b058:
    // 0x23b058: 0xc08b5ac  jal         func_22D6B0
label_23b05c:
    if (ctx->pc == 0x23B05Cu) {
        ctx->pc = 0x23B05Cu;
            // 0x23b05c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23B060u;
        goto label_23b060;
    }
    ctx->pc = 0x23B058u;
    SET_GPR_U32(ctx, 31, 0x23B060u);
    ctx->pc = 0x23B05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B058u;
            // 0x23b05c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B060u; }
        if (ctx->pc != 0x23B060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B060u; }
        if (ctx->pc != 0x23B060u) { return; }
    }
    ctx->pc = 0x23B060u;
label_23b060:
    // 0x23b060: 0x10000094  b           . + 4 + (0x94 << 2)
label_23b064:
    if (ctx->pc == 0x23B064u) {
        ctx->pc = 0x23B064u;
            // 0x23b064: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23B068u;
        goto label_23b068;
    }
    ctx->pc = 0x23B060u;
    {
        const bool branch_taken_0x23b060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B060u;
            // 0x23b064: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b060) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23B068u;
label_23b068:
    // 0x23b068: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x23b068u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_23b06c:
    // 0x23b06c: 0x3402c021  ori         $v0, $zero, 0xC021
    ctx->pc = 0x23b06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
label_23b070:
    // 0x23b070: 0x1462007b  bne         $v1, $v0, . + 4 + (0x7B << 2)
label_23b074:
    if (ctx->pc == 0x23B074u) {
        ctx->pc = 0x23B074u;
            // 0x23b074: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23B078u;
        goto label_23b078;
    }
    ctx->pc = 0x23B070u;
    {
        const bool branch_taken_0x23b070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B070u;
            // 0x23b074: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b070) {
            ctx->pc = 0x23B260u;
            goto label_23b260;
        }
    }
    ctx->pc = 0x23B078u;
label_23b078:
    // 0x23b078: 0x10000091  b           . + 4 + (0x91 << 2)
label_23b07c:
    if (ctx->pc == 0x23B07Cu) {
        ctx->pc = 0x23B07Cu;
            // 0x23b07c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23B080u;
        goto label_23b080;
    }
    ctx->pc = 0x23B078u;
    {
        const bool branch_taken_0x23b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B078u;
            // 0x23b07c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b078) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23B080u;
label_23b080:
    // 0x23b080: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x23b080u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_23b084:
    // 0x23b084: 0x3402c021  ori         $v0, $zero, 0xC021
    ctx->pc = 0x23b084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
label_23b088:
    // 0x23b088: 0x14620075  bne         $v1, $v0, . + 4 + (0x75 << 2)
label_23b08c:
    if (ctx->pc == 0x23B08Cu) {
        ctx->pc = 0x23B08Cu;
            // 0x23b08c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23B090u;
        goto label_23b090;
    }
    ctx->pc = 0x23B088u;
    {
        const bool branch_taken_0x23b088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B088u;
            // 0x23b08c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b088) {
            ctx->pc = 0x23B260u;
            goto label_23b260;
        }
    }
    ctx->pc = 0x23B090u;
label_23b090:
    // 0x23b090: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x23b090u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23b094:
    // 0x23b094: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23b098:
    // 0x23b098: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23b098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23b09c:
    // 0x23b09c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b0a0:
    // 0x23b0a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b0a4:
    // 0x23b0a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23b0a8:
    // 0x23b0a8: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_23b0ac:
    if (ctx->pc == 0x23B0ACu) {
        ctx->pc = 0x23B0ACu;
            // 0x23b0ac: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23B0B0u;
        goto label_23b0b0;
    }
    ctx->pc = 0x23B0A8u;
    {
        const bool branch_taken_0x23b0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23B0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0A8u;
            // 0x23b0ac: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0a8) {
            ctx->pc = 0x23B0C8u;
            goto label_23b0c8;
        }
    }
    ctx->pc = 0x23B0B0u;
label_23b0b0:
    // 0x23b0b0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23b0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23b0b4:
    // 0x23b0b4: 0x24a55478  addiu       $a1, $a1, 0x5478
    ctx->pc = 0x23b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21624));
label_23b0b8:
    // 0x23b0b8: 0xc08b5ac  jal         func_22D6B0
label_23b0bc:
    if (ctx->pc == 0x23B0BCu) {
        ctx->pc = 0x23B0BCu;
            // 0x23b0bc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23B0C0u;
        goto label_23b0c0;
    }
    ctx->pc = 0x23B0B8u;
    SET_GPR_U32(ctx, 31, 0x23B0C0u);
    ctx->pc = 0x23B0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0B8u;
            // 0x23b0bc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B0C0u; }
        if (ctx->pc != 0x23B0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B0C0u; }
        if (ctx->pc != 0x23B0C0u) { return; }
    }
    ctx->pc = 0x23B0C0u;
label_23b0c0:
    // 0x23b0c0: 0x1000007c  b           . + 4 + (0x7C << 2)
label_23b0c4:
    if (ctx->pc == 0x23B0C4u) {
        ctx->pc = 0x23B0C4u;
            // 0x23b0c4: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23B0C8u;
        goto label_23b0c8;
    }
    ctx->pc = 0x23B0C0u;
    {
        const bool branch_taken_0x23b0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0C0u;
            // 0x23b0c4: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0c0) {
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23B0C8u;
label_23b0c8:
    // 0x23b0c8: 0x2ac20008  slti        $v0, $s6, 0x8
    ctx->pc = 0x23b0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)8) ? 1 : 0);
label_23b0cc:
    // 0x23b0cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23b0d0:
    if (ctx->pc == 0x23B0D0u) {
        ctx->pc = 0x23B0D0u;
            // 0x23b0d0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23B0D4u;
        goto label_23b0d4;
    }
    ctx->pc = 0x23B0CCu;
    {
        const bool branch_taken_0x23b0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0CCu;
            // 0x23b0d0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0cc) {
            ctx->pc = 0x23B0E0u;
            goto label_23b0e0;
        }
    }
    ctx->pc = 0x23B0D4u;
label_23b0d4:
    // 0x23b0d4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23b0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23b0d8:
    // 0x23b0d8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_23b0dc:
    if (ctx->pc == 0x23B0DCu) {
        ctx->pc = 0x23B0DCu;
            // 0x23b0dc: 0x24a554a0  addiu       $a1, $a1, 0x54A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21664));
        ctx->pc = 0x23B0E0u;
        goto label_23b0e0;
    }
    ctx->pc = 0x23B0D8u;
    {
        const bool branch_taken_0x23b0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0D8u;
            // 0x23b0dc: 0x24a554a0  addiu       $a1, $a1, 0x54A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0d8) {
            ctx->pc = 0x23B208u;
            goto label_23b208;
        }
    }
    ctx->pc = 0x23B0E0u;
label_23b0e0:
    // 0x23b0e0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x23b0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23b0e4:
    // 0x23b0e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b0e8:
    // 0x23b0e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b0ec:
    // 0x23b0ec: 0xc08b538  jal         func_22D4E0
label_23b0f0:
    if (ctx->pc == 0x23B0F0u) {
        ctx->pc = 0x23B0F0u;
            // 0x23b0f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23B0F4u;
        goto label_23b0f4;
    }
    ctx->pc = 0x23B0ECu;
    SET_GPR_U32(ctx, 31, 0x23B0F4u);
    ctx->pc = 0x23B0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0ECu;
            // 0x23b0f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B0F4u; }
        if (ctx->pc != 0x23B0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B0F4u; }
        if (ctx->pc != 0x23B0F4u) { return; }
    }
    ctx->pc = 0x23B0F4u;
label_23b0f4:
    // 0x23b0f4: 0xc08b5fe  jal         func_22D7F8
label_23b0f8:
    if (ctx->pc == 0x23B0F8u) {
        ctx->pc = 0x23B0F8u;
            // 0x23b0f8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x23B0FCu;
        goto label_23b0fc;
    }
    ctx->pc = 0x23B0F4u;
    SET_GPR_U32(ctx, 31, 0x23B0FCu);
    ctx->pc = 0x23B0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0F4u;
            // 0x23b0f8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (runtime->hasFunction(0x22D7F8u)) {
        auto targetFn = runtime->lookupFunction(0x22D7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B0FCu; }
        if (ctx->pc != 0x23B0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D7F8_0x22d7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B0FCu; }
        if (ctx->pc != 0x23B0FCu) { return; }
    }
    ctx->pc = 0x23B0FCu;
label_23b0fc:
    // 0x23b0fc: 0x8ea40274  lw          $a0, 0x274($s5)
    ctx->pc = 0x23b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 628)));
label_23b100:
    // 0x23b100: 0x1444001e  bne         $v0, $a0, . + 4 + (0x1E << 2)
label_23b104:
    if (ctx->pc == 0x23B104u) {
        ctx->pc = 0x23B104u;
            // 0x23b104: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23B108u;
        goto label_23b108;
    }
    ctx->pc = 0x23B100u;
    {
        const bool branch_taken_0x23b100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x23B104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B100u;
            // 0x23b104: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b100) {
            ctx->pc = 0x23B17Cu;
            goto label_23b17c;
        }
    }
    ctx->pc = 0x23B108u;
label_23b108:
    // 0x23b108: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23b108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23b10c:
    // 0x23b10c: 0x24a554d8  addiu       $a1, $a1, 0x54D8
    ctx->pc = 0x23b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21720));
label_23b110:
    // 0x23b110: 0xc08b5ac  jal         func_22D6B0
label_23b114:
    if (ctx->pc == 0x23B114u) {
        ctx->pc = 0x23B114u;
            // 0x23b114: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23B118u;
        goto label_23b118;
    }
    ctx->pc = 0x23B110u;
    SET_GPR_U32(ctx, 31, 0x23B118u);
    ctx->pc = 0x23B114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B110u;
            // 0x23b114: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B118u; }
        if (ctx->pc != 0x23B118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B118u; }
        if (ctx->pc != 0x23B118u) { return; }
    }
    ctx->pc = 0x23B118u;
label_23b118:
    // 0x23b118: 0xc08d4e4  jal         func_235390
label_23b11c:
    if (ctx->pc == 0x23B11Cu) {
        ctx->pc = 0x23B11Cu;
            // 0x23b11c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B120u;
        goto label_23b120;
    }
    ctx->pc = 0x23B118u;
    SET_GPR_U32(ctx, 31, 0x23B120u);
    ctx->pc = 0x23B11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B118u;
            // 0x23b11c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235390u;
    if (runtime->hasFunction(0x235390u)) {
        auto targetFn = runtime->lookupFunction(0x235390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B120u; }
        if (ctx->pc != 0x23B120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235390_0x235390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B120u; }
        if (ctx->pc != 0x23B120u) { return; }
    }
    ctx->pc = 0x23B120u;
label_23b120:
    // 0x23b120: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23b120u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23b124:
    // 0x23b124: 0x8ea40114  lw          $a0, 0x114($s5)
    ctx->pc = 0x23b124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_23b128:
    // 0x23b128: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_23b12c:
    if (ctx->pc == 0x23B12Cu) {
        ctx->pc = 0x23B12Cu;
            // 0x23b12c: 0x26105060  addiu       $s0, $s0, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20576));
        ctx->pc = 0x23B130u;
        goto label_23b130;
    }
    ctx->pc = 0x23B128u;
    {
        const bool branch_taken_0x23b128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b128) {
            ctx->pc = 0x23B12Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B128u;
            // 0x23b12c: 0x26105060  addiu       $s0, $s0, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20576));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B15Cu;
            goto label_23b15c;
        }
    }
    ctx->pc = 0x23B130u;
label_23b130:
    // 0x23b130: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23b134:
    // 0x23b134: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_23b138:
    if (ctx->pc == 0x23B138u) {
        ctx->pc = 0x23B138u;
            // 0x23b138: 0xaea20114  sw          $v0, 0x114($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x23B13Cu;
        goto label_23b13c;
    }
    ctx->pc = 0x23B134u;
    {
        const bool branch_taken_0x23b134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B134u;
            // 0x23b138: 0xaea20114  sw          $v0, 0x114($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b134) {
            ctx->pc = 0x23B140u;
            goto label_23b140;
        }
    }
    ctx->pc = 0x23B13Cu;
label_23b13c:
    // 0x23b13c: 0xaea00118  sw          $zero, 0x118($s5)
    ctx->pc = 0x23b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 280), GPR_U32(ctx, 0));
label_23b140:
    // 0x23b140: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x23b140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_23b144:
    // 0x23b144: 0x8ea2011c  lw          $v0, 0x11C($s5)
    ctx->pc = 0x23b144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 284)));
label_23b148:
    // 0x23b148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23b148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23b14c:
    // 0x23b14c: 0xc08a9d6  jal         func_22A758
label_23b150:
    if (ctx->pc == 0x23B150u) {
        ctx->pc = 0x23B150u;
            // 0x23b150: 0xaea2011c  sw          $v0, 0x11C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x23B154u;
        goto label_23b154;
    }
    ctx->pc = 0x23B14Cu;
    SET_GPR_U32(ctx, 31, 0x23B154u);
    ctx->pc = 0x23B150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B14Cu;
            // 0x23b150: 0xaea2011c  sw          $v0, 0x11C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B154u; }
        if (ctx->pc != 0x23B154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B154u; }
        if (ctx->pc != 0x23B154u) { return; }
    }
    ctx->pc = 0x23B154u;
label_23b154:
    // 0x23b154: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_23b158:
    if (ctx->pc == 0x23B158u) {
        ctx->pc = 0x23B158u;
            // 0x23b158: 0x8ea40114  lw          $a0, 0x114($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
        ctx->pc = 0x23B15Cu;
        goto label_23b15c;
    }
    ctx->pc = 0x23B154u;
    {
        const bool branch_taken_0x23b154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B154u;
            // 0x23b158: 0x8ea40114  lw          $a0, 0x114($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b154) {
            ctx->pc = 0x23B128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b128;
        }
    }
    ctx->pc = 0x23B15Cu;
label_23b15c:
    // 0x23b15c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x23b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23b160:
    // 0x23b160: 0x40f809  jalr        $v0
label_23b164:
    if (ctx->pc == 0x23B164u) {
        ctx->pc = 0x23B164u;
            // 0x23b164: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B168u;
        goto label_23b168;
    }
    ctx->pc = 0x23B160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B168u);
        ctx->pc = 0x23B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B160u;
            // 0x23b164: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23B168u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23B168u; }
            if (ctx->pc != 0x23B168u) { return; }
        }
        }
    }
    ctx->pc = 0x23B168u;
label_23b168:
    // 0x23b168: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23b16c:
    // 0x23b16c: 0x60f809  jalr        $v1
label_23b170:
    if (ctx->pc == 0x23B170u) {
        ctx->pc = 0x23B170u;
            // 0x23b170: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B174u;
        goto label_23b174;
    }
    ctx->pc = 0x23B16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23B174u);
        ctx->pc = 0x23B170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B16Cu;
            // 0x23b170: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23B174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23B174u; }
            if (ctx->pc != 0x23B174u) { return; }
        }
        }
    }
    ctx->pc = 0x23B174u;
label_23b174:
    // 0x23b174: 0x10000052  b           . + 4 + (0x52 << 2)
label_23b178:
    if (ctx->pc == 0x23B178u) {
        ctx->pc = 0x23B178u;
            // 0x23b178: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23B17Cu;
        goto label_23b17c;
    }
    ctx->pc = 0x23B174u;
    {
        const bool branch_taken_0x23b174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B174u;
            // 0x23b178: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b174) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23B17Cu;
label_23b17c:
    // 0x23b17c: 0xc08a254  jal         func_228950
label_23b180:
    if (ctx->pc == 0x23B180u) {
        ctx->pc = 0x23B184u;
        goto label_23b184;
    }
    ctx->pc = 0x23B17Cu;
    SET_GPR_U32(ctx, 31, 0x23B184u);
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B184u; }
        if (ctx->pc != 0x23B184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B184u; }
        if (ctx->pc != 0x23B184u) { return; }
    }
    ctx->pc = 0x23B184u;
label_23b184:
    // 0x23b184: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x23b184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_23b188:
    // 0x23b188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23b188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b18c:
    // 0x23b18c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b190:
    // 0x23b190: 0xc08b538  jal         func_22D4E0
label_23b194:
    if (ctx->pc == 0x23B194u) {
        ctx->pc = 0x23B194u;
            // 0x23b194: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23B198u;
        goto label_23b198;
    }
    ctx->pc = 0x23B190u;
    SET_GPR_U32(ctx, 31, 0x23B198u);
    ctx->pc = 0x23B194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B190u;
            // 0x23b194: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B198u; }
        if (ctx->pc != 0x23B198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B198u; }
        if (ctx->pc != 0x23B198u) { return; }
    }
    ctx->pc = 0x23B198u;
label_23b198:
    // 0x23b198: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23b198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23b19c:
    // 0x23b19c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23b19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23b1a0:
    // 0x23b1a0: 0x24a554e8  addiu       $a1, $a1, 0x54E8
    ctx->pc = 0x23b1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21736));
label_23b1a4:
    // 0x23b1a4: 0xc08b5ac  jal         func_22D6B0
label_23b1a8:
    if (ctx->pc == 0x23B1A8u) {
        ctx->pc = 0x23B1A8u;
            // 0x23b1a8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23B1ACu;
        goto label_23b1ac;
    }
    ctx->pc = 0x23B1A4u;
    SET_GPR_U32(ctx, 31, 0x23B1ACu);
    ctx->pc = 0x23B1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1A4u;
            // 0x23b1a8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B1ACu; }
        if (ctx->pc != 0x23B1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B1ACu; }
        if (ctx->pc != 0x23B1ACu) { return; }
    }
    ctx->pc = 0x23B1ACu;
label_23b1ac:
    // 0x23b1ac: 0x26c8fffc  addiu       $t0, $s6, -0x4
    ctx->pc = 0x23b1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
label_23b1b0:
    // 0x23b1b0: 0x92e70001  lbu         $a3, 0x1($s7)
    ctx->pc = 0x23b1b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23b1b4:
    // 0x23b1b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23b1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23b1b8:
    // 0x23b1b8: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x23b1b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_23b1bc:
    // 0x23b1bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x23b1bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b1c0:
    // 0x23b1c0: 0x3405c021  ori         $a1, $zero, 0xC021
    ctx->pc = 0x23b1c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
label_23b1c4:
    // 0x23b1c4: 0xc08e8be  jal         func_23A2F8
label_23b1c8:
    if (ctx->pc == 0x23B1C8u) {
        ctx->pc = 0x23B1C8u;
            // 0x23b1c8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x23B1CCu;
        goto label_23b1cc;
    }
    ctx->pc = 0x23B1C4u;
    SET_GPR_U32(ctx, 31, 0x23B1CCu);
    ctx->pc = 0x23B1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1C4u;
            // 0x23b1c8: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (runtime->hasFunction(0x23A2F8u)) {
        auto targetFn = runtime->lookupFunction(0x23A2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B1CCu; }
        if (ctx->pc != 0x23B1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A2F8_0x23a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B1CCu; }
        if (ctx->pc != 0x23B1CCu) { return; }
    }
    ctx->pc = 0x23B1CCu;
label_23b1cc:
    // 0x23b1cc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_23b1d0:
    if (ctx->pc == 0x23B1D0u) {
        ctx->pc = 0x23B1D0u;
            // 0x23b1d0: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23B1D4u;
        goto label_23b1d4;
    }
    ctx->pc = 0x23B1CCu;
    {
        const bool branch_taken_0x23b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1CCu;
            // 0x23b1d0: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1cc) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23B1D4u;
label_23b1d4:
    // 0x23b1d4: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x23b1d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_23b1d8:
    // 0x23b1d8: 0x3402c021  ori         $v0, $zero, 0xC021
    ctx->pc = 0x23b1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
label_23b1dc:
    // 0x23b1dc: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
label_23b1e0:
    if (ctx->pc == 0x23B1E0u) {
        ctx->pc = 0x23B1E0u;
            // 0x23b1e0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23B1E4u;
        goto label_23b1e4;
    }
    ctx->pc = 0x23B1DCu;
    {
        const bool branch_taken_0x23b1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1DCu;
            // 0x23b1e0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1dc) {
            ctx->pc = 0x23B260u;
            goto label_23b260;
        }
    }
    ctx->pc = 0x23B1E4u;
label_23b1e4:
    // 0x23b1e4: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x23b1e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_23b1e8:
    // 0x23b1e8: 0x92a202a0  lbu         $v0, 0x2A0($s5)
    ctx->pc = 0x23b1e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 672)));
label_23b1ec:
    // 0x23b1ec: 0x54620031  bnel        $v1, $v0, . + 4 + (0x31 << 2)
label_23b1f0:
    if (ctx->pc == 0x23B1F0u) {
        ctx->pc = 0x23B1F0u;
            // 0x23b1f0: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->pc = 0x23B1F4u;
        goto label_23b1f4;
    }
    ctx->pc = 0x23B1ECu;
    {
        const bool branch_taken_0x23b1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b1ec) {
            ctx->pc = 0x23B1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1ECu;
            // 0x23b1f0: 0xdea20060  ld          $v0, 0x60($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B2B4u;
            goto label_23b2b4;
        }
    }
    ctx->pc = 0x23B1F4u;
label_23b1f4:
    // 0x23b1f4: 0x2ac20008  slti        $v0, $s6, 0x8
    ctx->pc = 0x23b1f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)8) ? 1 : 0);
label_23b1f8:
    // 0x23b1f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23b1fc:
    if (ctx->pc == 0x23B1FCu) {
        ctx->pc = 0x23B1FCu;
            // 0x23b1fc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23B200u;
        goto label_23b200;
    }
    ctx->pc = 0x23B1F8u;
    {
        const bool branch_taken_0x23b1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1F8u;
            // 0x23b1fc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1f8) {
            ctx->pc = 0x23B21Cu;
            goto label_23b21c;
        }
    }
    ctx->pc = 0x23B200u;
label_23b200:
    // 0x23b200: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23b200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23b204:
    // 0x23b204: 0x24a55510  addiu       $a1, $a1, 0x5510
    ctx->pc = 0x23b204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21776));
label_23b208:
    // 0x23b208: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x23b208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23b20c:
    // 0x23b20c: 0xc08b5ac  jal         func_22D6B0
label_23b210:
    if (ctx->pc == 0x23B210u) {
        ctx->pc = 0x23B210u;
            // 0x23b210: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23B214u;
        goto label_23b214;
    }
    ctx->pc = 0x23B20Cu;
    SET_GPR_U32(ctx, 31, 0x23B214u);
    ctx->pc = 0x23B210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B20Cu;
            // 0x23b210: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B214u; }
        if (ctx->pc != 0x23B214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B214u; }
        if (ctx->pc != 0x23B214u) { return; }
    }
    ctx->pc = 0x23B214u;
label_23b214:
    // 0x23b214: 0x1000002a  b           . + 4 + (0x2A << 2)
label_23b218:
    if (ctx->pc == 0x23B218u) {
        ctx->pc = 0x23B218u;
            // 0x23b218: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23B21Cu;
        goto label_23b21c;
    }
    ctx->pc = 0x23B214u;
    {
        const bool branch_taken_0x23b214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B214u;
            // 0x23b218: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b214) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23B21Cu;
label_23b21c:
    // 0x23b21c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23b21cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23b220:
    // 0x23b220: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23b220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23b224:
    // 0x23b224: 0x24a55548  addiu       $a1, $a1, 0x5548
    ctx->pc = 0x23b224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21832));
label_23b228:
    // 0x23b228: 0xc08b5ac  jal         func_22D6B0
label_23b22c:
    if (ctx->pc == 0x23B22Cu) {
        ctx->pc = 0x23B22Cu;
            // 0x23b22c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23B230u;
        goto label_23b230;
    }
    ctx->pc = 0x23B228u;
    SET_GPR_U32(ctx, 31, 0x23B230u);
    ctx->pc = 0x23B22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B228u;
            // 0x23b22c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B230u; }
        if (ctx->pc != 0x23B230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B230u; }
        if (ctx->pc != 0x23B230u) { return; }
    }
    ctx->pc = 0x23B230u;
label_23b230:
    // 0x23b230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b234:
    // 0x23b234: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23b234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23b238:
    // 0x23b238: 0xc08b538  jal         func_22D4E0
label_23b23c:
    if (ctx->pc == 0x23B23Cu) {
        ctx->pc = 0x23B23Cu;
            // 0x23b23c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23B240u;
        goto label_23b240;
    }
    ctx->pc = 0x23B238u;
    SET_GPR_U32(ctx, 31, 0x23B240u);
    ctx->pc = 0x23B23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B238u;
            // 0x23b23c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B240u; }
        if (ctx->pc != 0x23B240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B240u; }
        if (ctx->pc != 0x23B240u) { return; }
    }
    ctx->pc = 0x23B240u;
label_23b240:
    // 0x23b240: 0xc08b5fe  jal         func_22D7F8
label_23b244:
    if (ctx->pc == 0x23B244u) {
        ctx->pc = 0x23B244u;
            // 0x23b244: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x23B248u;
        goto label_23b248;
    }
    ctx->pc = 0x23B240u;
    SET_GPR_U32(ctx, 31, 0x23B248u);
    ctx->pc = 0x23B244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B240u;
            // 0x23b244: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (runtime->hasFunction(0x22D7F8u)) {
        auto targetFn = runtime->lookupFunction(0x22D7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B248u; }
        if (ctx->pc != 0x23B248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D7F8_0x22d7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B248u; }
        if (ctx->pc != 0x23B248u) { return; }
    }
    ctx->pc = 0x23B248u;
label_23b248:
    // 0x23b248: 0x8ea30274  lw          $v1, 0x274($s5)
    ctx->pc = 0x23b248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 628)));
label_23b24c:
    // 0x23b24c: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
label_23b250:
    if (ctx->pc == 0x23B250u) {
        ctx->pc = 0x23B250u;
            // 0x23b250: 0xa6a00134  sh          $zero, 0x134($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 308), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x23B254u;
        goto label_23b254;
    }
    ctx->pc = 0x23B24Cu;
    {
        const bool branch_taken_0x23b24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23b24c) {
            ctx->pc = 0x23B250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B24Cu;
            // 0x23b250: 0xa6a00134  sh          $zero, 0x134($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 308), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B2BCu;
            goto label_23b2bc;
        }
    }
    ctx->pc = 0x23B254u;
label_23b254:
    // 0x23b254: 0x1000001a  b           . + 4 + (0x1A << 2)
label_23b258:
    if (ctx->pc == 0x23B258u) {
        ctx->pc = 0x23B258u;
            // 0x23b258: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x23B25Cu;
        goto label_23b25c;
    }
    ctx->pc = 0x23B254u;
    {
        const bool branch_taken_0x23b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B254u;
            // 0x23b258: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b254) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23B25Cu;
label_23b25c:
    // 0x23b25c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23b260:
    // 0x23b260: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x23b260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23b264:
    // 0x23b264: 0x24a55560  addiu       $a1, $a1, 0x5560
    ctx->pc = 0x23b264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21856));
label_23b268:
    // 0x23b268: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23b268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23b26c:
    // 0x23b26c: 0xc08b5ac  jal         func_22D6B0
label_23b270:
    if (ctx->pc == 0x23B270u) {
        ctx->pc = 0x23B270u;
            // 0x23b270: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23B274u;
        goto label_23b274;
    }
    ctx->pc = 0x23B26Cu;
    SET_GPR_U32(ctx, 31, 0x23B274u);
    ctx->pc = 0x23B270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B26Cu;
            // 0x23b270: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B274u; }
        if (ctx->pc != 0x23B274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B274u; }
        if (ctx->pc != 0x23B274u) { return; }
    }
    ctx->pc = 0x23B274u;
label_23b274:
    // 0x23b274: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x23b274u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_23b278:
    // 0x23b278: 0x26a30138  addiu       $v1, $s5, 0x138
    ctx->pc = 0x23b278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 312));
label_23b27c:
    // 0x23b27c: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x23b27cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_23b280:
    // 0x23b280: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x23b280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23b284:
    // 0x23b284: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b288:
    // 0x23b288: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23b288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23b28c:
    // 0x23b28c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b290:
    // 0x23b290: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x23b290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23b294:
    // 0x23b294: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x23b294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b298:
    // 0x23b298: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23b298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23b29c:
    // 0x23b29c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x23b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_23b2a0:
    // 0x23b2a0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x23b2a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_23b2a4:
    // 0x23b2a4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23b2a8:
    // 0x23b2a8: 0xc08e8be  jal         func_23A2F8
label_23b2ac:
    if (ctx->pc == 0x23B2ACu) {
        ctx->pc = 0x23B2ACu;
            // 0x23b2ac: 0x94480018  lhu         $t0, 0x18($v0) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x23B2B0u;
        goto label_23b2b0;
    }
    ctx->pc = 0x23B2A8u;
    SET_GPR_U32(ctx, 31, 0x23B2B0u);
    ctx->pc = 0x23B2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B2A8u;
            // 0x23b2ac: 0x94480018  lhu         $t0, 0x18($v0) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (runtime->hasFunction(0x23A2F8u)) {
        auto targetFn = runtime->lookupFunction(0x23A2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B2B0u; }
        if (ctx->pc != 0x23B2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A2F8_0x23a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B2B0u; }
        if (ctx->pc != 0x23B2B0u) { return; }
    }
    ctx->pc = 0x23B2B0u;
label_23b2b0:
    // 0x23b2b0: 0xdea20060  ld          $v0, 0x60($s5)
    ctx->pc = 0x23b2b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 96)));
label_23b2b4:
    // 0x23b2b4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x23b2b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_23b2b8:
    // 0x23b2b8: 0xfea20060  sd          $v0, 0x60($s5)
    ctx->pc = 0x23b2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 96), GPR_U64(ctx, 2));
label_23b2bc:
    // 0x23b2bc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x23b2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_23b2c0:
    // 0x23b2c0: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x23b2c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23b2c4:
    // 0x23b2c4: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x23b2c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23b2c8:
    // 0x23b2c8: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x23b2c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23b2cc:
    // 0x23b2cc: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x23b2ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23b2d0:
    // 0x23b2d0: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x23b2d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23b2d4:
    // 0x23b2d4: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x23b2d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23b2d8:
    // 0x23b2d8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x23b2d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b2dc:
    // 0x23b2dc: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x23b2dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b2e0:
    // 0x23b2e0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x23b2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b2e4:
    // 0x23b2e4: 0x3e00008  jr          $ra
label_23b2e8:
    if (ctx->pc == 0x23B2E8u) {
        ctx->pc = 0x23B2E8u;
            // 0x23b2e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x23B2ECu;
        goto label_23b2ec;
    }
    ctx->pc = 0x23B2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B2E4u;
            // 0x23b2e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B2ECu;
label_23b2ec:
    // 0x23b2ec: 0x0  nop
    ctx->pc = 0x23b2ecu;
    // NOP
label_23b2f0:
    // 0x23b2f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23b2f4:
    // 0x23b2f4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23b2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_23b2f8:
    // 0x23b2f8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23b2fc:
    // 0x23b2fc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x23b2fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b300:
    // 0x23b300: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_23b304:
    // 0x23b304: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23b308:
    // 0x23b308: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23b30c:
    // 0x23b30c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23b30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b310:
    // 0x23b310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23b314:
    // 0x23b314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23b314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b318:
    // 0x23b318: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23b318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_23b31c:
    // 0x23b31c: 0x26330164  addiu       $s3, $s1, 0x164
    ctx->pc = 0x23b31cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
label_23b320:
    // 0x23b320: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23b320u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23b324:
    // 0x23b324: 0x26340014  addiu       $s4, $s1, 0x14
    ctx->pc = 0x23b324u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_23b328:
    // 0x23b328: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x23b328u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_23b32c:
    // 0x23b32c: 0x26105690  addiu       $s0, $s0, 0x5690
    ctx->pc = 0x23b32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22160));
label_23b330:
    // 0x23b330: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b334:
    // 0x23b334: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23b334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_23b338:
    // 0x23b338: 0xc09038e  jal         func_240E38
label_23b33c:
    if (ctx->pc == 0x23B33Cu) {
        ctx->pc = 0x23B33Cu;
            // 0x23b33c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x23B340u;
        goto label_23b340;
    }
    ctx->pc = 0x23B338u;
    SET_GPR_U32(ctx, 31, 0x23B340u);
    ctx->pc = 0x23B33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B338u;
            // 0x23b33c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (runtime->hasFunction(0x240E38u)) {
        auto targetFn = runtime->lookupFunction(0x240E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B340u; }
        if (ctx->pc != 0x23B340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240E38_0x240e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B340u; }
        if (ctx->pc != 0x23B340u) { return; }
    }
    ctx->pc = 0x23B340u;
label_23b340:
    // 0x23b340: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x23b340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23b344:
    // 0x23b344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b348:
    // 0x23b348: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23b348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b34c:
    // 0x23b34c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23b350:
    // 0x23b350: 0xc08b5ac  jal         func_22D6B0
label_23b354:
    if (ctx->pc == 0x23B354u) {
        ctx->pc = 0x23B354u;
            // 0x23b354: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B358u;
        goto label_23b358;
    }
    ctx->pc = 0x23B350u;
    SET_GPR_U32(ctx, 31, 0x23B358u);
    ctx->pc = 0x23B354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B350u;
            // 0x23b354: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B358u; }
        if (ctx->pc != 0x23B358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B358u; }
        if (ctx->pc != 0x23B358u) { return; }
    }
    ctx->pc = 0x23B358u;
label_23b358:
    // 0x23b358: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x23b358u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_23b35c:
    // 0x23b35c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x23b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b360:
    // 0x23b360: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x23b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_23b364:
    // 0x23b364: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23b368:
    // 0x23b368: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23b36c:
    if (ctx->pc == 0x23B36Cu) {
        ctx->pc = 0x23B36Cu;
            // 0x23b36c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B370u;
        goto label_23b370;
    }
    ctx->pc = 0x23B368u;
    {
        const bool branch_taken_0x23b368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b368) {
            ctx->pc = 0x23B36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B368u;
            // 0x23b36c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B380u;
            goto label_23b380;
        }
    }
    ctx->pc = 0x23B370u;
label_23b370:
    // 0x23b370: 0x1055000e  beq         $v0, $s5, . + 4 + (0xE << 2)
label_23b374:
    if (ctx->pc == 0x23B374u) {
        ctx->pc = 0x23B374u;
            // 0x23b374: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23B378u;
        goto label_23b378;
    }
    ctx->pc = 0x23B370u;
    {
        const bool branch_taken_0x23b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x23B374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B370u;
            // 0x23b374: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b370) {
            ctx->pc = 0x23B3ACu;
            goto label_23b3ac;
        }
    }
    ctx->pc = 0x23B378u;
label_23b378:
    // 0x23b378: 0x10000026  b           . + 4 + (0x26 << 2)
label_23b37c:
    if (ctx->pc == 0x23B37Cu) {
        ctx->pc = 0x23B37Cu;
            // 0x23b37c: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23B380u;
        goto label_23b380;
    }
    ctx->pc = 0x23B378u;
    {
        const bool branch_taken_0x23b378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B378u;
            // 0x23b37c: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b378) {
            ctx->pc = 0x23B414u;
            goto label_23b414;
        }
    }
    ctx->pc = 0x23B380u;
label_23b380:
    // 0x23b380: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23b380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b384:
    // 0x23b384: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23b384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23b388:
    // 0x23b388: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23b388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23b38c:
    // 0x23b38c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23b38cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b390:
    // 0x23b390: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b390u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b394:
    // 0x23b394: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b394u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b398:
    // 0x23b398: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b39c:
    // 0x23b39c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b39cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b3a0:
    // 0x23b3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b3a4:
    // 0x23b3a4: 0x808eef2  j           func_23BBC8
label_23b3a8:
    if (ctx->pc == 0x23B3A8u) {
        ctx->pc = 0x23B3A8u;
            // 0x23b3a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x23B3ACu;
        goto label_23b3ac;
    }
    ctx->pc = 0x23B3A4u;
    ctx->pc = 0x23B3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B3A4u;
            // 0x23b3a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (runtime->hasFunction(0x23BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x23BBC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x23B3ACu;
label_23b3ac:
    // 0x23b3ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23b3b0:
    // 0x23b3b0: 0x244250a8  addiu       $v0, $v0, 0x50A8
    ctx->pc = 0x23b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20648));
label_23b3b4:
    // 0x23b3b4: 0x52420006  beql        $s2, $v0, . + 4 + (0x6 << 2)
label_23b3b8:
    if (ctx->pc == 0x23B3B8u) {
        ctx->pc = 0x23B3B8u;
            // 0x23b3b8: 0x8e2302d8  lw          $v1, 0x2D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
        ctx->pc = 0x23B3BCu;
        goto label_23b3bc;
    }
    ctx->pc = 0x23B3B4u;
    {
        const bool branch_taken_0x23b3b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x23b3b4) {
            ctx->pc = 0x23B3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B3B4u;
            // 0x23b3b8: 0x8e2302d8  lw          $v1, 0x2D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B3D0u;
            goto label_23b3d0;
        }
    }
    ctx->pc = 0x23B3BCu;
label_23b3bc:
    // 0x23b3bc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_23b3c0:
    // 0x23b3c0: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x23b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
label_23b3c4:
    // 0x23b3c4: 0x56420002  bnel        $s2, $v0, . + 4 + (0x2 << 2)
label_23b3c8:
    if (ctx->pc == 0x23B3C8u) {
        ctx->pc = 0x23B3C8u;
            // 0x23b3c8: 0x8e2302ac  lw          $v1, 0x2AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
        ctx->pc = 0x23B3CCu;
        goto label_23b3cc;
    }
    ctx->pc = 0x23B3C4u;
    {
        const bool branch_taken_0x23b3c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b3c4) {
            ctx->pc = 0x23B3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B3C4u;
            // 0x23b3c8: 0x8e2302ac  lw          $v1, 0x2AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B3D0u;
            goto label_23b3d0;
        }
    }
    ctx->pc = 0x23B3CCu;
label_23b3cc:
    // 0x23b3cc: 0x8e2302d8  lw          $v1, 0x2D8($s1)
    ctx->pc = 0x23b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
label_23b3d0:
    // 0x23b3d0: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x23b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_23b3d4:
    // 0x23b3d4: 0xac430180  sw          $v1, 0x180($v0)
    ctx->pc = 0x23b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 3));
label_23b3d8:
    // 0x23b3d8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x23b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_23b3dc:
    // 0x23b3dc: 0x40f809  jalr        $v0
label_23b3e0:
    if (ctx->pc == 0x23B3E0u) {
        ctx->pc = 0x23B3E0u;
            // 0x23b3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B3E4u;
        goto label_23b3e4;
    }
    ctx->pc = 0x23B3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B3E4u);
        ctx->pc = 0x23B3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B3DCu;
            // 0x23b3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23B3E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23B3E4u; }
            if (ctx->pc != 0x23B3E4u) { return; }
        }
        }
    }
    ctx->pc = 0x23B3E4u;
label_23b3e4:
    // 0x23b3e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23b3e8:
    // 0x23b3e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23b3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b3ec:
    // 0x23b3ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23b3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23b3f0:
    // 0x23b3f0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x23b3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23b3f4:
    // 0x23b3f4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23b3f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b3f8:
    // 0x23b3f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b3f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b3fc:
    // 0x23b3fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b3fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b400:
    // 0x23b400: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b404:
    // 0x23b404: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b408:
    // 0x23b408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b40c:
    // 0x23b40c: 0x808eef2  j           func_23BBC8
label_23b410:
    if (ctx->pc == 0x23B410u) {
        ctx->pc = 0x23B410u;
            // 0x23b410: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x23B414u;
        goto label_23b414;
    }
    ctx->pc = 0x23B40Cu;
    ctx->pc = 0x23B410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B40Cu;
            // 0x23b410: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BBC8u;
    if (runtime->hasFunction(0x23BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x23BBC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0023BBC8_0x23bbc8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x23B414u;
label_23b414:
    // 0x23b414: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23b414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_23b418:
    // 0x23b418: 0x261056a0  addiu       $s0, $s0, 0x56A0
    ctx->pc = 0x23b418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22176));
label_23b41c:
    // 0x23b41c: 0xc09038e  jal         func_240E38
label_23b420:
    if (ctx->pc == 0x23B420u) {
        ctx->pc = 0x23B420u;
            // 0x23b420: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x23B424u;
        goto label_23b424;
    }
    ctx->pc = 0x23B41Cu;
    SET_GPR_U32(ctx, 31, 0x23B424u);
    ctx->pc = 0x23B420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B41Cu;
            // 0x23b420: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240E38u;
    if (runtime->hasFunction(0x240E38u)) {
        auto targetFn = runtime->lookupFunction(0x240E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B424u; }
        if (ctx->pc != 0x23B424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240E38_0x240e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B424u; }
        if (ctx->pc != 0x23B424u) { return; }
    }
    ctx->pc = 0x23B424u;
label_23b424:
    // 0x23b424: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x23b424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23b428:
    // 0x23b428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23b428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23b42c:
    // 0x23b42c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23b42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b430:
    // 0x23b430: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23b430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23b434:
    // 0x23b434: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23b434u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b438:
    // 0x23b438: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23b438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b43c:
    // 0x23b43c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23b43cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b440:
    // 0x23b440: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23b440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23b444:
    // 0x23b444: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23b444u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b448:
    // 0x23b448: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b44c:
    // 0x23b44c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23b44cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b450:
    // 0x23b450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b454:
    // 0x23b454: 0x808b5ac  j           func_22D6B0
label_23b458:
    if (ctx->pc == 0x23B458u) {
        ctx->pc = 0x23B458u;
            // 0x23b458: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x23B45Cu;
        goto label_23b45c;
    }
    ctx->pc = 0x23B454u;
    ctx->pc = 0x23B458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B454u;
            // 0x23b458: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x23B45Cu;
label_23b45c:
    // 0x23b45c: 0x0  nop
    ctx->pc = 0x23b45cu;
    // NOP
    ctx->pc = 0x23b460u;
}
