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

// Function: sub_0017A650
// Address: 0x17a650 - 0x17ae9c
void sub_0017A650_0x17a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A650_0x17a650");
#endif

    switch (ctx->pc) {
        case 0x17a650u: goto label_17a650;
        case 0x17a654u: goto label_17a654;
        case 0x17a658u: goto label_17a658;
        case 0x17a65cu: goto label_17a65c;
        case 0x17a660u: goto label_17a660;
        case 0x17a664u: goto label_17a664;
        case 0x17a668u: goto label_17a668;
        case 0x17a66cu: goto label_17a66c;
        case 0x17a670u: goto label_17a670;
        case 0x17a674u: goto label_17a674;
        case 0x17a678u: goto label_17a678;
        case 0x17a67cu: goto label_17a67c;
        case 0x17a680u: goto label_17a680;
        case 0x17a684u: goto label_17a684;
        case 0x17a688u: goto label_17a688;
        case 0x17a68cu: goto label_17a68c;
        case 0x17a690u: goto label_17a690;
        case 0x17a694u: goto label_17a694;
        case 0x17a698u: goto label_17a698;
        case 0x17a69cu: goto label_17a69c;
        case 0x17a6a0u: goto label_17a6a0;
        case 0x17a6a4u: goto label_17a6a4;
        case 0x17a6a8u: goto label_17a6a8;
        case 0x17a6acu: goto label_17a6ac;
        case 0x17a6b0u: goto label_17a6b0;
        case 0x17a6b4u: goto label_17a6b4;
        case 0x17a6b8u: goto label_17a6b8;
        case 0x17a6bcu: goto label_17a6bc;
        case 0x17a6c0u: goto label_17a6c0;
        case 0x17a6c4u: goto label_17a6c4;
        case 0x17a6c8u: goto label_17a6c8;
        case 0x17a6ccu: goto label_17a6cc;
        case 0x17a6d0u: goto label_17a6d0;
        case 0x17a6d4u: goto label_17a6d4;
        case 0x17a6d8u: goto label_17a6d8;
        case 0x17a6dcu: goto label_17a6dc;
        case 0x17a6e0u: goto label_17a6e0;
        case 0x17a6e4u: goto label_17a6e4;
        case 0x17a6e8u: goto label_17a6e8;
        case 0x17a6ecu: goto label_17a6ec;
        case 0x17a6f0u: goto label_17a6f0;
        case 0x17a6f4u: goto label_17a6f4;
        case 0x17a6f8u: goto label_17a6f8;
        case 0x17a6fcu: goto label_17a6fc;
        case 0x17a700u: goto label_17a700;
        case 0x17a704u: goto label_17a704;
        case 0x17a708u: goto label_17a708;
        case 0x17a70cu: goto label_17a70c;
        case 0x17a710u: goto label_17a710;
        case 0x17a714u: goto label_17a714;
        case 0x17a718u: goto label_17a718;
        case 0x17a71cu: goto label_17a71c;
        case 0x17a720u: goto label_17a720;
        case 0x17a724u: goto label_17a724;
        case 0x17a728u: goto label_17a728;
        case 0x17a72cu: goto label_17a72c;
        case 0x17a730u: goto label_17a730;
        case 0x17a734u: goto label_17a734;
        case 0x17a738u: goto label_17a738;
        case 0x17a73cu: goto label_17a73c;
        case 0x17a740u: goto label_17a740;
        case 0x17a744u: goto label_17a744;
        case 0x17a748u: goto label_17a748;
        case 0x17a74cu: goto label_17a74c;
        case 0x17a750u: goto label_17a750;
        case 0x17a754u: goto label_17a754;
        case 0x17a758u: goto label_17a758;
        case 0x17a75cu: goto label_17a75c;
        case 0x17a760u: goto label_17a760;
        case 0x17a764u: goto label_17a764;
        case 0x17a768u: goto label_17a768;
        case 0x17a76cu: goto label_17a76c;
        case 0x17a770u: goto label_17a770;
        case 0x17a774u: goto label_17a774;
        case 0x17a778u: goto label_17a778;
        case 0x17a77cu: goto label_17a77c;
        case 0x17a780u: goto label_17a780;
        case 0x17a784u: goto label_17a784;
        case 0x17a788u: goto label_17a788;
        case 0x17a78cu: goto label_17a78c;
        case 0x17a790u: goto label_17a790;
        case 0x17a794u: goto label_17a794;
        case 0x17a798u: goto label_17a798;
        case 0x17a79cu: goto label_17a79c;
        case 0x17a7a0u: goto label_17a7a0;
        case 0x17a7a4u: goto label_17a7a4;
        case 0x17a7a8u: goto label_17a7a8;
        case 0x17a7acu: goto label_17a7ac;
        case 0x17a7b0u: goto label_17a7b0;
        case 0x17a7b4u: goto label_17a7b4;
        case 0x17a7b8u: goto label_17a7b8;
        case 0x17a7bcu: goto label_17a7bc;
        case 0x17a7c0u: goto label_17a7c0;
        case 0x17a7c4u: goto label_17a7c4;
        case 0x17a7c8u: goto label_17a7c8;
        case 0x17a7ccu: goto label_17a7cc;
        case 0x17a7d0u: goto label_17a7d0;
        case 0x17a7d4u: goto label_17a7d4;
        case 0x17a7d8u: goto label_17a7d8;
        case 0x17a7dcu: goto label_17a7dc;
        case 0x17a7e0u: goto label_17a7e0;
        case 0x17a7e4u: goto label_17a7e4;
        case 0x17a7e8u: goto label_17a7e8;
        case 0x17a7ecu: goto label_17a7ec;
        case 0x17a7f0u: goto label_17a7f0;
        case 0x17a7f4u: goto label_17a7f4;
        case 0x17a7f8u: goto label_17a7f8;
        case 0x17a7fcu: goto label_17a7fc;
        case 0x17a800u: goto label_17a800;
        case 0x17a804u: goto label_17a804;
        case 0x17a808u: goto label_17a808;
        case 0x17a80cu: goto label_17a80c;
        case 0x17a810u: goto label_17a810;
        case 0x17a814u: goto label_17a814;
        case 0x17a818u: goto label_17a818;
        case 0x17a81cu: goto label_17a81c;
        case 0x17a820u: goto label_17a820;
        case 0x17a824u: goto label_17a824;
        case 0x17a828u: goto label_17a828;
        case 0x17a82cu: goto label_17a82c;
        case 0x17a830u: goto label_17a830;
        case 0x17a834u: goto label_17a834;
        case 0x17a838u: goto label_17a838;
        case 0x17a83cu: goto label_17a83c;
        case 0x17a840u: goto label_17a840;
        case 0x17a844u: goto label_17a844;
        case 0x17a848u: goto label_17a848;
        case 0x17a84cu: goto label_17a84c;
        case 0x17a850u: goto label_17a850;
        case 0x17a854u: goto label_17a854;
        case 0x17a858u: goto label_17a858;
        case 0x17a85cu: goto label_17a85c;
        case 0x17a860u: goto label_17a860;
        case 0x17a864u: goto label_17a864;
        case 0x17a868u: goto label_17a868;
        case 0x17a86cu: goto label_17a86c;
        case 0x17a870u: goto label_17a870;
        case 0x17a874u: goto label_17a874;
        case 0x17a878u: goto label_17a878;
        case 0x17a87cu: goto label_17a87c;
        case 0x17a880u: goto label_17a880;
        case 0x17a884u: goto label_17a884;
        case 0x17a888u: goto label_17a888;
        case 0x17a88cu: goto label_17a88c;
        case 0x17a890u: goto label_17a890;
        case 0x17a894u: goto label_17a894;
        case 0x17a898u: goto label_17a898;
        case 0x17a89cu: goto label_17a89c;
        case 0x17a8a0u: goto label_17a8a0;
        case 0x17a8a4u: goto label_17a8a4;
        case 0x17a8a8u: goto label_17a8a8;
        case 0x17a8acu: goto label_17a8ac;
        case 0x17a8b0u: goto label_17a8b0;
        case 0x17a8b4u: goto label_17a8b4;
        case 0x17a8b8u: goto label_17a8b8;
        case 0x17a8bcu: goto label_17a8bc;
        case 0x17a8c0u: goto label_17a8c0;
        case 0x17a8c4u: goto label_17a8c4;
        case 0x17a8c8u: goto label_17a8c8;
        case 0x17a8ccu: goto label_17a8cc;
        case 0x17a8d0u: goto label_17a8d0;
        case 0x17a8d4u: goto label_17a8d4;
        case 0x17a8d8u: goto label_17a8d8;
        case 0x17a8dcu: goto label_17a8dc;
        case 0x17a8e0u: goto label_17a8e0;
        case 0x17a8e4u: goto label_17a8e4;
        case 0x17a8e8u: goto label_17a8e8;
        case 0x17a8ecu: goto label_17a8ec;
        case 0x17a8f0u: goto label_17a8f0;
        case 0x17a8f4u: goto label_17a8f4;
        case 0x17a8f8u: goto label_17a8f8;
        case 0x17a8fcu: goto label_17a8fc;
        case 0x17a900u: goto label_17a900;
        case 0x17a904u: goto label_17a904;
        case 0x17a908u: goto label_17a908;
        case 0x17a90cu: goto label_17a90c;
        case 0x17a910u: goto label_17a910;
        case 0x17a914u: goto label_17a914;
        case 0x17a918u: goto label_17a918;
        case 0x17a91cu: goto label_17a91c;
        case 0x17a920u: goto label_17a920;
        case 0x17a924u: goto label_17a924;
        case 0x17a928u: goto label_17a928;
        case 0x17a92cu: goto label_17a92c;
        case 0x17a930u: goto label_17a930;
        case 0x17a934u: goto label_17a934;
        case 0x17a938u: goto label_17a938;
        case 0x17a93cu: goto label_17a93c;
        case 0x17a940u: goto label_17a940;
        case 0x17a944u: goto label_17a944;
        case 0x17a948u: goto label_17a948;
        case 0x17a94cu: goto label_17a94c;
        case 0x17a950u: goto label_17a950;
        case 0x17a954u: goto label_17a954;
        case 0x17a958u: goto label_17a958;
        case 0x17a95cu: goto label_17a95c;
        case 0x17a960u: goto label_17a960;
        case 0x17a964u: goto label_17a964;
        case 0x17a968u: goto label_17a968;
        case 0x17a96cu: goto label_17a96c;
        case 0x17a970u: goto label_17a970;
        case 0x17a974u: goto label_17a974;
        case 0x17a978u: goto label_17a978;
        case 0x17a97cu: goto label_17a97c;
        case 0x17a980u: goto label_17a980;
        case 0x17a984u: goto label_17a984;
        case 0x17a988u: goto label_17a988;
        case 0x17a98cu: goto label_17a98c;
        case 0x17a990u: goto label_17a990;
        case 0x17a994u: goto label_17a994;
        case 0x17a998u: goto label_17a998;
        case 0x17a99cu: goto label_17a99c;
        case 0x17a9a0u: goto label_17a9a0;
        case 0x17a9a4u: goto label_17a9a4;
        case 0x17a9a8u: goto label_17a9a8;
        case 0x17a9acu: goto label_17a9ac;
        case 0x17a9b0u: goto label_17a9b0;
        case 0x17a9b4u: goto label_17a9b4;
        case 0x17a9b8u: goto label_17a9b8;
        case 0x17a9bcu: goto label_17a9bc;
        case 0x17a9c0u: goto label_17a9c0;
        case 0x17a9c4u: goto label_17a9c4;
        case 0x17a9c8u: goto label_17a9c8;
        case 0x17a9ccu: goto label_17a9cc;
        case 0x17a9d0u: goto label_17a9d0;
        case 0x17a9d4u: goto label_17a9d4;
        case 0x17a9d8u: goto label_17a9d8;
        case 0x17a9dcu: goto label_17a9dc;
        case 0x17a9e0u: goto label_17a9e0;
        case 0x17a9e4u: goto label_17a9e4;
        case 0x17a9e8u: goto label_17a9e8;
        case 0x17a9ecu: goto label_17a9ec;
        case 0x17a9f0u: goto label_17a9f0;
        case 0x17a9f4u: goto label_17a9f4;
        case 0x17a9f8u: goto label_17a9f8;
        case 0x17a9fcu: goto label_17a9fc;
        case 0x17aa00u: goto label_17aa00;
        case 0x17aa04u: goto label_17aa04;
        case 0x17aa08u: goto label_17aa08;
        case 0x17aa0cu: goto label_17aa0c;
        case 0x17aa10u: goto label_17aa10;
        case 0x17aa14u: goto label_17aa14;
        case 0x17aa18u: goto label_17aa18;
        case 0x17aa1cu: goto label_17aa1c;
        case 0x17aa20u: goto label_17aa20;
        case 0x17aa24u: goto label_17aa24;
        case 0x17aa28u: goto label_17aa28;
        case 0x17aa2cu: goto label_17aa2c;
        case 0x17aa30u: goto label_17aa30;
        case 0x17aa34u: goto label_17aa34;
        case 0x17aa38u: goto label_17aa38;
        case 0x17aa3cu: goto label_17aa3c;
        case 0x17aa40u: goto label_17aa40;
        case 0x17aa44u: goto label_17aa44;
        case 0x17aa48u: goto label_17aa48;
        case 0x17aa4cu: goto label_17aa4c;
        case 0x17aa50u: goto label_17aa50;
        case 0x17aa54u: goto label_17aa54;
        case 0x17aa58u: goto label_17aa58;
        case 0x17aa5cu: goto label_17aa5c;
        case 0x17aa60u: goto label_17aa60;
        case 0x17aa64u: goto label_17aa64;
        case 0x17aa68u: goto label_17aa68;
        case 0x17aa6cu: goto label_17aa6c;
        case 0x17aa70u: goto label_17aa70;
        case 0x17aa74u: goto label_17aa74;
        case 0x17aa78u: goto label_17aa78;
        case 0x17aa7cu: goto label_17aa7c;
        case 0x17aa80u: goto label_17aa80;
        case 0x17aa84u: goto label_17aa84;
        case 0x17aa88u: goto label_17aa88;
        case 0x17aa8cu: goto label_17aa8c;
        case 0x17aa90u: goto label_17aa90;
        case 0x17aa94u: goto label_17aa94;
        case 0x17aa98u: goto label_17aa98;
        case 0x17aa9cu: goto label_17aa9c;
        case 0x17aaa0u: goto label_17aaa0;
        case 0x17aaa4u: goto label_17aaa4;
        case 0x17aaa8u: goto label_17aaa8;
        case 0x17aaacu: goto label_17aaac;
        case 0x17aab0u: goto label_17aab0;
        case 0x17aab4u: goto label_17aab4;
        case 0x17aab8u: goto label_17aab8;
        case 0x17aabcu: goto label_17aabc;
        case 0x17aac0u: goto label_17aac0;
        case 0x17aac4u: goto label_17aac4;
        case 0x17aac8u: goto label_17aac8;
        case 0x17aaccu: goto label_17aacc;
        case 0x17aad0u: goto label_17aad0;
        case 0x17aad4u: goto label_17aad4;
        case 0x17aad8u: goto label_17aad8;
        case 0x17aadcu: goto label_17aadc;
        case 0x17aae0u: goto label_17aae0;
        case 0x17aae4u: goto label_17aae4;
        case 0x17aae8u: goto label_17aae8;
        case 0x17aaecu: goto label_17aaec;
        case 0x17aaf0u: goto label_17aaf0;
        case 0x17aaf4u: goto label_17aaf4;
        case 0x17aaf8u: goto label_17aaf8;
        case 0x17aafcu: goto label_17aafc;
        case 0x17ab00u: goto label_17ab00;
        case 0x17ab04u: goto label_17ab04;
        case 0x17ab08u: goto label_17ab08;
        case 0x17ab0cu: goto label_17ab0c;
        case 0x17ab10u: goto label_17ab10;
        case 0x17ab14u: goto label_17ab14;
        case 0x17ab18u: goto label_17ab18;
        case 0x17ab1cu: goto label_17ab1c;
        case 0x17ab20u: goto label_17ab20;
        case 0x17ab24u: goto label_17ab24;
        case 0x17ab28u: goto label_17ab28;
        case 0x17ab2cu: goto label_17ab2c;
        case 0x17ab30u: goto label_17ab30;
        case 0x17ab34u: goto label_17ab34;
        case 0x17ab38u: goto label_17ab38;
        case 0x17ab3cu: goto label_17ab3c;
        case 0x17ab40u: goto label_17ab40;
        case 0x17ab44u: goto label_17ab44;
        case 0x17ab48u: goto label_17ab48;
        case 0x17ab4cu: goto label_17ab4c;
        case 0x17ab50u: goto label_17ab50;
        case 0x17ab54u: goto label_17ab54;
        case 0x17ab58u: goto label_17ab58;
        case 0x17ab5cu: goto label_17ab5c;
        case 0x17ab60u: goto label_17ab60;
        case 0x17ab64u: goto label_17ab64;
        case 0x17ab68u: goto label_17ab68;
        case 0x17ab6cu: goto label_17ab6c;
        case 0x17ab70u: goto label_17ab70;
        case 0x17ab74u: goto label_17ab74;
        case 0x17ab78u: goto label_17ab78;
        case 0x17ab7cu: goto label_17ab7c;
        case 0x17ab80u: goto label_17ab80;
        case 0x17ab84u: goto label_17ab84;
        case 0x17ab88u: goto label_17ab88;
        case 0x17ab8cu: goto label_17ab8c;
        case 0x17ab90u: goto label_17ab90;
        case 0x17ab94u: goto label_17ab94;
        case 0x17ab98u: goto label_17ab98;
        case 0x17ab9cu: goto label_17ab9c;
        case 0x17aba0u: goto label_17aba0;
        case 0x17aba4u: goto label_17aba4;
        case 0x17aba8u: goto label_17aba8;
        case 0x17abacu: goto label_17abac;
        case 0x17abb0u: goto label_17abb0;
        case 0x17abb4u: goto label_17abb4;
        case 0x17abb8u: goto label_17abb8;
        case 0x17abbcu: goto label_17abbc;
        case 0x17abc0u: goto label_17abc0;
        case 0x17abc4u: goto label_17abc4;
        case 0x17abc8u: goto label_17abc8;
        case 0x17abccu: goto label_17abcc;
        case 0x17abd0u: goto label_17abd0;
        case 0x17abd4u: goto label_17abd4;
        case 0x17abd8u: goto label_17abd8;
        case 0x17abdcu: goto label_17abdc;
        case 0x17abe0u: goto label_17abe0;
        case 0x17abe4u: goto label_17abe4;
        case 0x17abe8u: goto label_17abe8;
        case 0x17abecu: goto label_17abec;
        case 0x17abf0u: goto label_17abf0;
        case 0x17abf4u: goto label_17abf4;
        case 0x17abf8u: goto label_17abf8;
        case 0x17abfcu: goto label_17abfc;
        case 0x17ac00u: goto label_17ac00;
        case 0x17ac04u: goto label_17ac04;
        case 0x17ac08u: goto label_17ac08;
        case 0x17ac0cu: goto label_17ac0c;
        case 0x17ac10u: goto label_17ac10;
        case 0x17ac14u: goto label_17ac14;
        case 0x17ac18u: goto label_17ac18;
        case 0x17ac1cu: goto label_17ac1c;
        case 0x17ac20u: goto label_17ac20;
        case 0x17ac24u: goto label_17ac24;
        case 0x17ac28u: goto label_17ac28;
        case 0x17ac2cu: goto label_17ac2c;
        case 0x17ac30u: goto label_17ac30;
        case 0x17ac34u: goto label_17ac34;
        case 0x17ac38u: goto label_17ac38;
        case 0x17ac3cu: goto label_17ac3c;
        case 0x17ac40u: goto label_17ac40;
        case 0x17ac44u: goto label_17ac44;
        case 0x17ac48u: goto label_17ac48;
        case 0x17ac4cu: goto label_17ac4c;
        case 0x17ac50u: goto label_17ac50;
        case 0x17ac54u: goto label_17ac54;
        case 0x17ac58u: goto label_17ac58;
        case 0x17ac5cu: goto label_17ac5c;
        case 0x17ac60u: goto label_17ac60;
        case 0x17ac64u: goto label_17ac64;
        case 0x17ac68u: goto label_17ac68;
        case 0x17ac6cu: goto label_17ac6c;
        case 0x17ac70u: goto label_17ac70;
        case 0x17ac74u: goto label_17ac74;
        case 0x17ac78u: goto label_17ac78;
        case 0x17ac7cu: goto label_17ac7c;
        case 0x17ac80u: goto label_17ac80;
        case 0x17ac84u: goto label_17ac84;
        case 0x17ac88u: goto label_17ac88;
        case 0x17ac8cu: goto label_17ac8c;
        case 0x17ac90u: goto label_17ac90;
        case 0x17ac94u: goto label_17ac94;
        case 0x17ac98u: goto label_17ac98;
        case 0x17ac9cu: goto label_17ac9c;
        case 0x17aca0u: goto label_17aca0;
        case 0x17aca4u: goto label_17aca4;
        case 0x17aca8u: goto label_17aca8;
        case 0x17acacu: goto label_17acac;
        case 0x17acb0u: goto label_17acb0;
        case 0x17acb4u: goto label_17acb4;
        case 0x17acb8u: goto label_17acb8;
        case 0x17acbcu: goto label_17acbc;
        case 0x17acc0u: goto label_17acc0;
        case 0x17acc4u: goto label_17acc4;
        case 0x17acc8u: goto label_17acc8;
        case 0x17acccu: goto label_17accc;
        case 0x17acd0u: goto label_17acd0;
        case 0x17acd4u: goto label_17acd4;
        case 0x17acd8u: goto label_17acd8;
        case 0x17acdcu: goto label_17acdc;
        case 0x17ace0u: goto label_17ace0;
        case 0x17ace4u: goto label_17ace4;
        case 0x17ace8u: goto label_17ace8;
        case 0x17acecu: goto label_17acec;
        case 0x17acf0u: goto label_17acf0;
        case 0x17acf4u: goto label_17acf4;
        case 0x17acf8u: goto label_17acf8;
        case 0x17acfcu: goto label_17acfc;
        case 0x17ad00u: goto label_17ad00;
        case 0x17ad04u: goto label_17ad04;
        case 0x17ad08u: goto label_17ad08;
        case 0x17ad0cu: goto label_17ad0c;
        case 0x17ad10u: goto label_17ad10;
        case 0x17ad14u: goto label_17ad14;
        case 0x17ad18u: goto label_17ad18;
        case 0x17ad1cu: goto label_17ad1c;
        case 0x17ad20u: goto label_17ad20;
        case 0x17ad24u: goto label_17ad24;
        case 0x17ad28u: goto label_17ad28;
        case 0x17ad2cu: goto label_17ad2c;
        case 0x17ad30u: goto label_17ad30;
        case 0x17ad34u: goto label_17ad34;
        case 0x17ad38u: goto label_17ad38;
        case 0x17ad3cu: goto label_17ad3c;
        case 0x17ad40u: goto label_17ad40;
        case 0x17ad44u: goto label_17ad44;
        case 0x17ad48u: goto label_17ad48;
        case 0x17ad4cu: goto label_17ad4c;
        case 0x17ad50u: goto label_17ad50;
        case 0x17ad54u: goto label_17ad54;
        case 0x17ad58u: goto label_17ad58;
        case 0x17ad5cu: goto label_17ad5c;
        case 0x17ad60u: goto label_17ad60;
        case 0x17ad64u: goto label_17ad64;
        case 0x17ad68u: goto label_17ad68;
        case 0x17ad6cu: goto label_17ad6c;
        case 0x17ad70u: goto label_17ad70;
        case 0x17ad74u: goto label_17ad74;
        case 0x17ad78u: goto label_17ad78;
        case 0x17ad7cu: goto label_17ad7c;
        case 0x17ad80u: goto label_17ad80;
        case 0x17ad84u: goto label_17ad84;
        case 0x17ad88u: goto label_17ad88;
        case 0x17ad8cu: goto label_17ad8c;
        case 0x17ad90u: goto label_17ad90;
        case 0x17ad94u: goto label_17ad94;
        case 0x17ad98u: goto label_17ad98;
        case 0x17ad9cu: goto label_17ad9c;
        case 0x17ada0u: goto label_17ada0;
        case 0x17ada4u: goto label_17ada4;
        case 0x17ada8u: goto label_17ada8;
        case 0x17adacu: goto label_17adac;
        case 0x17adb0u: goto label_17adb0;
        case 0x17adb4u: goto label_17adb4;
        case 0x17adb8u: goto label_17adb8;
        case 0x17adbcu: goto label_17adbc;
        case 0x17adc0u: goto label_17adc0;
        case 0x17adc4u: goto label_17adc4;
        case 0x17adc8u: goto label_17adc8;
        case 0x17adccu: goto label_17adcc;
        case 0x17add0u: goto label_17add0;
        case 0x17add4u: goto label_17add4;
        case 0x17add8u: goto label_17add8;
        case 0x17addcu: goto label_17addc;
        case 0x17ade0u: goto label_17ade0;
        case 0x17ade4u: goto label_17ade4;
        case 0x17ade8u: goto label_17ade8;
        case 0x17adecu: goto label_17adec;
        case 0x17adf0u: goto label_17adf0;
        case 0x17adf4u: goto label_17adf4;
        case 0x17adf8u: goto label_17adf8;
        case 0x17adfcu: goto label_17adfc;
        case 0x17ae00u: goto label_17ae00;
        case 0x17ae04u: goto label_17ae04;
        case 0x17ae08u: goto label_17ae08;
        case 0x17ae0cu: goto label_17ae0c;
        case 0x17ae10u: goto label_17ae10;
        case 0x17ae14u: goto label_17ae14;
        case 0x17ae18u: goto label_17ae18;
        case 0x17ae1cu: goto label_17ae1c;
        case 0x17ae20u: goto label_17ae20;
        case 0x17ae24u: goto label_17ae24;
        case 0x17ae28u: goto label_17ae28;
        case 0x17ae2cu: goto label_17ae2c;
        case 0x17ae30u: goto label_17ae30;
        case 0x17ae34u: goto label_17ae34;
        case 0x17ae38u: goto label_17ae38;
        case 0x17ae3cu: goto label_17ae3c;
        case 0x17ae40u: goto label_17ae40;
        case 0x17ae44u: goto label_17ae44;
        case 0x17ae48u: goto label_17ae48;
        case 0x17ae4cu: goto label_17ae4c;
        case 0x17ae50u: goto label_17ae50;
        case 0x17ae54u: goto label_17ae54;
        case 0x17ae58u: goto label_17ae58;
        case 0x17ae5cu: goto label_17ae5c;
        case 0x17ae60u: goto label_17ae60;
        case 0x17ae64u: goto label_17ae64;
        case 0x17ae68u: goto label_17ae68;
        case 0x17ae6cu: goto label_17ae6c;
        case 0x17ae70u: goto label_17ae70;
        case 0x17ae74u: goto label_17ae74;
        case 0x17ae78u: goto label_17ae78;
        case 0x17ae7cu: goto label_17ae7c;
        case 0x17ae80u: goto label_17ae80;
        case 0x17ae84u: goto label_17ae84;
        case 0x17ae88u: goto label_17ae88;
        case 0x17ae8cu: goto label_17ae8c;
        case 0x17ae90u: goto label_17ae90;
        case 0x17ae94u: goto label_17ae94;
        case 0x17ae98u: goto label_17ae98;
        default: break;
    }

    ctx->pc = 0x17a650u;

label_17a650:
    // 0x17a650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17a654:
    // 0x17a654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17a658:
    // 0x17a658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a65c:
    // 0x17a65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a660:
    // 0x17a660: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x17a660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17a664:
    // 0x17a664: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x17a664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_17a668:
    // 0x17a668: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17a668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_17a66c:
    // 0x17a66c: 0x24423810  addiu       $v0, $v0, 0x3810
    ctx->pc = 0x17a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14352));
label_17a670:
    // 0x17a670: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17a670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17a674:
    // 0x17a674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a678:
    // 0x17a678: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17a67c:
    // 0x17a67c: 0x40f809  jalr        $v0
label_17a680:
    if (ctx->pc == 0x17A680u) {
        ctx->pc = 0x17A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A67Cu;
        // 0x17a680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A684u;
        goto label_17a684;
    }
    ctx->pc = 0x17A67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A684u);
        ctx->pc = 0x17A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A67Cu;
        // 0x17a680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A67Cu, 0x17A684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A684u;
label_17a684:
    // 0x17a684: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x17a684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_17a688:
    // 0x17a688: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x17a688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_17a68c:
    // 0x17a68c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17a68cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17a690:
    // 0x17a690: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x17a690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_17a694:
    // 0x17a694: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_17a698:
    if (ctx->pc == 0x17A698u) {
        ctx->pc = 0x17A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A694u;
        // 0x17a698: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A69Cu;
        goto label_17a69c;
    }
    ctx->pc = 0x17A694u;
    {
        const bool branch_taken_0x17a694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A694u;
        // 0x17a698: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a694) {
            ctx->pc = 0x17A664u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a664;
        }
    }
    ctx->pc = 0x17A69Cu;
label_17a69c:
    // 0x17a69c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x17a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_17a6a0:
    // 0x17a6a0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17a6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17a6a4:
    // 0x17a6a4: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x17a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
label_17a6a8:
    // 0x17a6a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a6ac:
    // 0x17a6ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a6b0:
    // 0x17a6b0: 0x3e00008  jr          $ra
label_17a6b4:
    if (ctx->pc == 0x17A6B4u) {
        ctx->pc = 0x17A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6B0u;
        // 0x17a6b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A6B8u;
        goto label_17a6b8;
    }
    ctx->pc = 0x17A6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6B0u;
        // 0x17a6b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A6B8u;
label_17a6b8:
    // 0x17a6b8: 0x0  nop
    ctx->pc = 0x17a6b8u;
    // NOP
label_17a6bc:
    // 0x17a6bc: 0x0  nop
    ctx->pc = 0x17a6bcu;
    // NOP
label_17a6c0:
    // 0x17a6c0: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x17a6c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17a6c4:
    // 0x17a6c4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x17a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_17a6c8:
    // 0x17a6c8: 0x3e00008  jr          $ra
label_17a6cc:
    if (ctx->pc == 0x17A6CCu) {
        ctx->pc = 0x17A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6C8u;
        // 0x17a6cc: 0xa0a30019  sb          $v1, 0x19($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 25), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A6D0u;
        goto label_17a6d0;
    }
    ctx->pc = 0x17A6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6C8u;
        // 0x17a6cc: 0xa0a30019  sb          $v1, 0x19($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 25), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A6D0u;
label_17a6d0:
    // 0x17a6d0: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x17a6d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17a6d4:
    // 0x17a6d4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x17a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_17a6d8:
    // 0x17a6d8: 0x3e00008  jr          $ra
label_17a6dc:
    if (ctx->pc == 0x17A6DCu) {
        ctx->pc = 0x17A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6D8u;
        // 0x17a6dc: 0xa4a30020  sh          $v1, 0x20($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A6E0u;
        goto label_17a6e0;
    }
    ctx->pc = 0x17A6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6D8u;
        // 0x17a6dc: 0xa4a30020  sh          $v1, 0x20($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A6E0u;
label_17a6e0:
    // 0x17a6e0: 0x84870002  lh          $a3, 0x2($a0)
    ctx->pc = 0x17a6e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17a6e4:
    // 0x17a6e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_17a6e8:
    // 0x17a6e8: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x17a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
label_17a6ec:
    // 0x17a6ec: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x17a6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_17a6f0:
    // 0x17a6f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17a6f4:
    // 0x17a6f4: 0x73b00  sll         $a3, $a3, 12
    ctx->pc = 0x17a6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
label_17a6f8:
    // 0x17a6f8: 0xaca7001c  sw          $a3, 0x1C($a1)
    ctx->pc = 0x17a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 7));
label_17a6fc:
    // 0x17a6fc: 0x84870004  lh          $a3, 0x4($a0)
    ctx->pc = 0x17a6fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17a700:
    // 0x17a700: 0xa4a70034  sh          $a3, 0x34($a1)
    ctx->pc = 0x17a700u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 7));
label_17a704:
    // 0x17a704: 0x84870006  lh          $a3, 0x6($a0)
    ctx->pc = 0x17a704u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_17a708:
    // 0x17a708: 0xa4a70036  sh          $a3, 0x36($a1)
    ctx->pc = 0x17a708u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 54), (uint16_t)GPR_U32(ctx, 7));
label_17a70c:
    // 0x17a70c: 0x84870008  lh          $a3, 0x8($a0)
    ctx->pc = 0x17a70cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_17a710:
    // 0x17a710: 0xa4a70038  sh          $a3, 0x38($a1)
    ctx->pc = 0x17a710u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 7));
label_17a714:
    // 0x17a714: 0x8487000a  lh          $a3, 0xA($a0)
    ctx->pc = 0x17a714u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_17a718:
    // 0x17a718: 0xa4a7003a  sh          $a3, 0x3A($a1)
    ctx->pc = 0x17a718u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 58), (uint16_t)GPR_U32(ctx, 7));
label_17a71c:
    // 0x17a71c: 0x84870010  lh          $a3, 0x10($a0)
    ctx->pc = 0x17a71cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
label_17a720:
    // 0x17a720: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x17a720u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a724:
    // 0x17a724: 0x0  nop
    ctx->pc = 0x17a724u;
    // NOP
label_17a728:
    // 0x17a728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17a728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17a72c:
    // 0x17a72c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x17a72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_17a730:
    // 0x17a730: 0x84870012  lh          $a3, 0x12($a0)
    ctx->pc = 0x17a730u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
label_17a734:
    // 0x17a734: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x17a734u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a738:
    // 0x17a738: 0x0  nop
    ctx->pc = 0x17a738u;
    // NOP
label_17a73c:
    // 0x17a73c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17a73cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17a740:
    // 0x17a740: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x17a740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_17a744:
    // 0x17a744: 0x84870014  lh          $a3, 0x14($a0)
    ctx->pc = 0x17a744u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_17a748:
    // 0x17a748: 0xa4a70046  sh          $a3, 0x46($a1)
    ctx->pc = 0x17a748u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 70), (uint16_t)GPR_U32(ctx, 7));
label_17a74c:
    // 0x17a74c: 0x84870016  lh          $a3, 0x16($a0)
    ctx->pc = 0x17a74cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
label_17a750:
    // 0x17a750: 0xa4a70048  sh          $a3, 0x48($a1)
    ctx->pc = 0x17a750u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 72), (uint16_t)GPR_U32(ctx, 7));
label_17a754:
    // 0x17a754: 0x84870018  lh          $a3, 0x18($a0)
    ctx->pc = 0x17a754u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_17a758:
    // 0x17a758: 0xa0a700ac  sb          $a3, 0xAC($a1)
    ctx->pc = 0x17a758u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 172), (uint8_t)GPR_U32(ctx, 7));
label_17a75c:
    // 0x17a75c: 0x8487001a  lh          $a3, 0x1A($a0)
    ctx->pc = 0x17a75cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
label_17a760:
    // 0x17a760: 0xaca700b0  sw          $a3, 0xB0($a1)
    ctx->pc = 0x17a760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 7));
label_17a764:
    // 0x17a764: 0x8487001c  lh          $a3, 0x1C($a0)
    ctx->pc = 0x17a764u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_17a768:
    // 0x17a768: 0xa4a70040  sh          $a3, 0x40($a1)
    ctx->pc = 0x17a768u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 64), (uint16_t)GPR_U32(ctx, 7));
label_17a76c:
    // 0x17a76c: 0x8487001e  lh          $a3, 0x1E($a0)
    ctx->pc = 0x17a76cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_17a770:
    // 0x17a770: 0xa4a70042  sh          $a3, 0x42($a1)
    ctx->pc = 0x17a770u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 66), (uint16_t)GPR_U32(ctx, 7));
label_17a774:
    // 0x17a774: 0x84870020  lh          $a3, 0x20($a0)
    ctx->pc = 0x17a774u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
label_17a778:
    // 0x17a778: 0xa4a7003c  sh          $a3, 0x3C($a1)
    ctx->pc = 0x17a778u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 60), (uint16_t)GPR_U32(ctx, 7));
label_17a77c:
    // 0x17a77c: 0x84870022  lh          $a3, 0x22($a0)
    ctx->pc = 0x17a77cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
label_17a780:
    // 0x17a780: 0xa4a7003e  sh          $a3, 0x3E($a1)
    ctx->pc = 0x17a780u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 7));
label_17a784:
    // 0x17a784: 0xa0a00018  sb          $zero, 0x18($a1)
    ctx->pc = 0x17a784u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 0));
label_17a788:
    // 0x17a788: 0xa0a00044  sb          $zero, 0x44($a1)
    ctx->pc = 0x17a788u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 68), (uint8_t)GPR_U32(ctx, 0));
label_17a78c:
    // 0x17a78c: 0xa0a00045  sb          $zero, 0x45($a1)
    ctx->pc = 0x17a78cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 69), (uint8_t)GPR_U32(ctx, 0));
label_17a790:
    // 0x17a790: 0x90a70019  lbu         $a3, 0x19($a1)
    ctx->pc = 0x17a790u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 25)));
label_17a794:
    // 0x17a794: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x17a794u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_17a798:
    // 0x17a798: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x17a798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_17a79c:
    // 0x17a79c: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x17a79cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_17a7a0:
    // 0x17a7a0: 0x8ca700b8  lw          $a3, 0xB8($a1)
    ctx->pc = 0x17a7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
label_17a7a4:
    // 0x17a7a4: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x17a7a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_17a7a8:
    // 0x17a7a8: 0xaca600b8  sw          $a2, 0xB8($a1)
    ctx->pc = 0x17a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 6));
label_17a7ac:
    // 0x17a7ac: 0x90a50019  lbu         $a1, 0x19($a1)
    ctx->pc = 0x17a7acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 25)));
label_17a7b0:
    // 0x17a7b0: 0x9063b570  lbu         $v1, -0x4A90($v1)
    ctx->pc = 0x17a7b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948208)));
label_17a7b4:
    // 0x17a7b4: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
label_17a7b8:
    if (ctx->pc == 0x17A7B8u) {
        ctx->pc = 0x17A7BCu;
        goto label_17a7bc;
    }
    ctx->pc = 0x17A7B4u;
    {
        const bool branch_taken_0x17a7b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x17a7b4) {
            ctx->pc = 0x17A800u;
            goto label_17a800;
        }
    }
    ctx->pc = 0x17A7BCu;
label_17a7bc:
    // 0x17a7bc: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x17a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_17a7c0:
    // 0x17a7c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17a7c4:
    // 0x17a7c4: 0xa065b570  sb          $a1, -0x4A90($v1)
    ctx->pc = 0x17a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948208), (uint8_t)GPR_U32(ctx, 5));
label_17a7c8:
    // 0x17a7c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17a7cc:
    // 0x17a7cc: 0x9066b570  lbu         $a2, -0x4A90($v1)
    ctx->pc = 0x17a7ccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948208)));
label_17a7d0:
    // 0x17a7d0: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
label_17a7d4:
    if (ctx->pc == 0x17A7D4u) {
        ctx->pc = 0x17A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7D0u;
        // 0x17a7d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A7D8u;
        goto label_17a7d8;
    }
    ctx->pc = 0x17A7D0u;
    {
        const bool branch_taken_0x17a7d0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x17A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7D0u;
        // 0x17a7d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7d0) {
            ctx->pc = 0x17A800u;
            goto label_17a800;
        }
    }
    ctx->pc = 0x17A7D8u;
label_17a7d8:
    // 0x17a7d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17a7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a7dc:
    // 0x17a7dc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x17a7dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_17a7e0:
    // 0x17a7e0: 0x54650004  bnel        $v1, $a1, . + 4 + (0x4 << 2)
label_17a7e4:
    if (ctx->pc == 0x17A7E4u) {
        ctx->pc = 0x17A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7E0u;
        // 0x17a7e4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A7E8u;
        goto label_17a7e8;
    }
    ctx->pc = 0x17A7E0u;
    {
        const bool branch_taken_0x17a7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x17a7e0) {
            ctx->pc = 0x17A7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A7E0u;
            // 0x17a7e4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A7F4u;
            goto label_17a7f4;
        }
    }
    ctx->pc = 0x17A7E8u;
label_17a7e8:
    // 0x17a7e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_17a7ec:
    // 0x17a7ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_17a7f0:
    if (ctx->pc == 0x17A7F0u) {
        ctx->pc = 0x17A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7ECu;
        // 0x17a7f0: 0xa047b570  sb          $a3, -0x4A90($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294948208), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A7F4u;
        goto label_17a7f4;
    }
    ctx->pc = 0x17A7ECu;
    {
        const bool branch_taken_0x17a7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7ECu;
        // 0x17a7f0: 0xa047b570  sb          $a3, -0x4A90($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294948208), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7ec) {
            ctx->pc = 0x17A800u;
            goto label_17a800;
        }
    }
    ctx->pc = 0x17A7F4u;
label_17a7f4:
    // 0x17a7f4: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x17a7f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_17a7f8:
    // 0x17a7f8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_17a7fc:
    if (ctx->pc == 0x17A7FCu) {
        ctx->pc = 0x17A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7F8u;
        // 0x17a7fc: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A800u;
        goto label_17a800;
    }
    ctx->pc = 0x17A7F8u;
    {
        const bool branch_taken_0x17a7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7F8u;
        // 0x17a7fc: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7f8) {
            ctx->pc = 0x17A7DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a7dc;
        }
    }
    ctx->pc = 0x17A800u;
label_17a800:
    // 0x17a800: 0x24820024  addiu       $v0, $a0, 0x24
    ctx->pc = 0x17a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_17a804:
    // 0x17a804: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17a804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a808:
    // 0x17a808: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17a808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17a80c:
    // 0x17a80c: 0x3e00008  jr          $ra
label_17a810:
    if (ctx->pc == 0x17A810u) {
        ctx->pc = 0x17A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A80Cu;
        // 0x17a810: 0xa064b578  sb          $a0, -0x4A88($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294948216), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A814u;
        goto label_17a814;
    }
    ctx->pc = 0x17A80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A80Cu;
        // 0x17a810: 0xa064b578  sb          $a0, -0x4A88($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294948216), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A814u;
label_17a814:
    // 0x17a814: 0x0  nop
    ctx->pc = 0x17a814u;
    // NOP
label_17a818:
    // 0x17a818: 0x0  nop
    ctx->pc = 0x17a818u;
    // NOP
label_17a81c:
    // 0x17a81c: 0x0  nop
    ctx->pc = 0x17a81cu;
    // NOP
label_17a820:
    // 0x17a820: 0x84a60038  lh          $a2, 0x38($a1)
    ctx->pc = 0x17a820u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
label_17a824:
    // 0x17a824: 0x24820006  addiu       $v0, $a0, 0x6
    ctx->pc = 0x17a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
label_17a828:
    // 0x17a828: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x17a828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17a82c:
    // 0x17a82c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_17a830:
    // 0x17a830: 0xa4a30038  sh          $v1, 0x38($a1)
    ctx->pc = 0x17a830u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 3));
label_17a834:
    // 0x17a834: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x17a834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17a838:
    // 0x17a838: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x17a838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a83c:
    // 0x17a83c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17a83cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17a840:
    // 0x17a840: 0x0  nop
    ctx->pc = 0x17a840u;
    // NOP
label_17a844:
    // 0x17a844: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17a844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17a848:
    // 0x17a848: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17a848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17a84c:
    // 0x17a84c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x17a84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_17a850:
    // 0x17a850: 0x84a60034  lh          $a2, 0x34($a1)
    ctx->pc = 0x17a850u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 52)));
label_17a854:
    // 0x17a854: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x17a854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17a858:
    // 0x17a858: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17a858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_17a85c:
    // 0x17a85c: 0xa4a30034  sh          $v1, 0x34($a1)
    ctx->pc = 0x17a85cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 3));
label_17a860:
    // 0x17a860: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x17a860u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17a864:
    // 0x17a864: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x17a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a868:
    // 0x17a868: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17a868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17a86c:
    // 0x17a86c: 0x0  nop
    ctx->pc = 0x17a86cu;
    // NOP
label_17a870:
    // 0x17a870: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17a870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17a874:
    // 0x17a874: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17a874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17a878:
    // 0x17a878: 0x3e00008  jr          $ra
label_17a87c:
    if (ctx->pc == 0x17A87Cu) {
        ctx->pc = 0x17A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A878u;
        // 0x17a87c: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A880u;
        goto label_17a880;
    }
    ctx->pc = 0x17A878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A878u;
        // 0x17a87c: 0xe4a00028  swc1        $f0, 0x28($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A880u;
label_17a880:
    // 0x17a880: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x17a880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17a884:
    // 0x17a884: 0x2482000a  addiu       $v0, $a0, 0xA
    ctx->pc = 0x17a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
label_17a888:
    // 0x17a888: 0xa4a30046  sh          $v1, 0x46($a1)
    ctx->pc = 0x17a888u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 70), (uint16_t)GPR_U32(ctx, 3));
label_17a88c:
    // 0x17a88c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x17a88cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17a890:
    // 0x17a890: 0xa4a30048  sh          $v1, 0x48($a1)
    ctx->pc = 0x17a890u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 72), (uint16_t)GPR_U32(ctx, 3));
label_17a894:
    // 0x17a894: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x17a894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_17a898:
    // 0x17a898: 0xa4a3003c  sh          $v1, 0x3C($a1)
    ctx->pc = 0x17a898u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 60), (uint16_t)GPR_U32(ctx, 3));
label_17a89c:
    // 0x17a89c: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x17a89cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_17a8a0:
    // 0x17a8a0: 0x3e00008  jr          $ra
label_17a8a4:
    if (ctx->pc == 0x17A8A4u) {
        ctx->pc = 0x17A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8A0u;
        // 0x17a8a4: 0xa4a3003e  sh          $v1, 0x3E($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A8A8u;
        goto label_17a8a8;
    }
    ctx->pc = 0x17A8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8A0u;
        // 0x17a8a4: 0xa4a3003e  sh          $v1, 0x3E($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A8A8u;
label_17a8a8:
    // 0x17a8a8: 0x0  nop
    ctx->pc = 0x17a8a8u;
    // NOP
label_17a8ac:
    // 0x17a8ac: 0x0  nop
    ctx->pc = 0x17a8acu;
    // NOP
label_17a8b0:
    // 0x17a8b0: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x17a8b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17a8b4:
    // 0x17a8b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17a8b8:
    // 0x17a8b8: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x17a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_17a8bc:
    // 0x17a8bc: 0x2463b581  addiu       $v1, $v1, -0x4A7F
    ctx->pc = 0x17a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948225));
label_17a8c0:
    // 0x17a8c0: 0xa0a600ac  sb          $a2, 0xAC($a1)
    ctx->pc = 0x17a8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 172), (uint8_t)GPR_U32(ctx, 6));
label_17a8c4:
    // 0x17a8c4: 0x90a40019  lbu         $a0, 0x19($a1)
    ctx->pc = 0x17a8c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 25)));
label_17a8c8:
    // 0x17a8c8: 0x90a600ac  lbu         $a2, 0xAC($a1)
    ctx->pc = 0x17a8c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 172)));
label_17a8cc:
    // 0x17a8cc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x17a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_17a8d0:
    // 0x17a8d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17a8d4:
    // 0x17a8d4: 0x3e00008  jr          $ra
label_17a8d8:
    if (ctx->pc == 0x17A8D8u) {
        ctx->pc = 0x17A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8D4u;
        // 0x17a8d8: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A8DCu;
        goto label_17a8dc;
    }
    ctx->pc = 0x17A8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8D4u;
        // 0x17a8d8: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A8DCu;
label_17a8dc:
    // 0x17a8dc: 0x0  nop
    ctx->pc = 0x17a8dcu;
    // NOP
label_17a8e0:
    // 0x17a8e0: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x17a8e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17a8e4:
    // 0x17a8e4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x17a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_17a8e8:
    // 0x17a8e8: 0x3e00008  jr          $ra
label_17a8ec:
    if (ctx->pc == 0x17A8ECu) {
        ctx->pc = 0x17A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8E8u;
        // 0x17a8ec: 0xaca300b0  sw          $v1, 0xB0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A8F0u;
        goto label_17a8f0;
    }
    ctx->pc = 0x17A8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8E8u;
        // 0x17a8ec: 0xaca300b0  sw          $v1, 0xB0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A8F0u;
label_17a8f0:
    // 0x17a8f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17a8f4:
    // 0x17a8f4: 0x240700d8  addiu       $a3, $zero, 0xD8
    ctx->pc = 0x17a8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_17a8f8:
    // 0x17a8f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17a8fc:
    // 0x17a8fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a8fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a900:
    // 0x17a900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17a904:
    // 0x17a904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17a908:
    // 0x17a908: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17a908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a90c:
    // 0x17a90c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a910:
    // 0x17a910: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17a910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17a914:
    // 0x17a914: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x17a914u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17a918:
    // 0x17a918: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x17a918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_17a91c:
    // 0x17a91c: 0x24a5e6d8  addiu       $a1, $a1, -0x1928
    ctx->pc = 0x17a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960856));
label_17a920:
    // 0x17a920: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x17a920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_17a924:
    // 0x17a924: 0xc0556d4  jal         func_155B50
label_17a928:
    if (ctx->pc == 0x17A928u) {
        ctx->pc = 0x17A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A924u;
        // 0x17a928: 0x24846760  addiu       $a0, $a0, 0x6760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A92Cu;
        goto label_17a92c;
    }
    ctx->pc = 0x17A924u;
    SET_GPR_U32(ctx, 31, 0x17A92Cu);
    ctx->pc = 0x17A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A924u;
    // 0x17a928: 0x24846760  addiu       $a0, $a0, 0x6760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x17A924u, 0x17A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A92Cu;
label_17a92c:
    // 0x17a92c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x17a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_17a930:
    // 0x17a930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a934:
    // 0x17a934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a938:
    // 0x17a938: 0xc067d64  jal         func_19F590
label_17a93c:
    if (ctx->pc == 0x17A93Cu) {
        ctx->pc = 0x17A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A938u;
        // 0x17a93c: 0x240600d8  addiu       $a2, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A940u;
        goto label_17a940;
    }
    ctx->pc = 0x17A938u;
    SET_GPR_U32(ctx, 31, 0x17A940u);
    ctx->pc = 0x17A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A938u;
    // 0x17a93c: 0x240600d8  addiu       $a2, $zero, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x17A938u, 0x17A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A940u;
label_17a940:
    // 0x17a940: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x17a940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_17a944:
    // 0x17a944: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17a944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17a948:
    // 0x17a948: 0x2463a240  addiu       $v1, $v1, -0x5DC0
    ctx->pc = 0x17a948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943296));
label_17a94c:
    // 0x17a94c: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x17a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_17a950:
    // 0x17a950: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17a950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_17a954:
    // 0x17a954: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17a954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17a958:
    // 0x17a958: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x17a958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_17a95c:
    // 0x17a95c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x17a95cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17a960:
    // 0x17a960: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x17a960u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
label_17a964:
    // 0x17a964: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17a964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17a968:
    // 0x17a968: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x17a968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_17a96c:
    // 0x17a96c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x17a96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_17a970:
    // 0x17a970: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x17a970u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_17a974:
    // 0x17a974: 0x24a40100  addiu       $a0, $a1, 0x100
    ctx->pc = 0x17a974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_17a978:
    // 0x17a978: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x17a978u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_17a97c:
    // 0x17a97c: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x17a97cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_17a980:
    // 0x17a980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17a980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17a984:
    // 0x17a984: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x17a984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_17a988:
    // 0x17a988: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17a988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17a98c:
    // 0x17a98c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x17a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_17a990:
    // 0x17a990: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17a990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17a994:
    // 0x17a994: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x17a994u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_17a998:
    // 0x17a998: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x17a998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_17a99c:
    // 0x17a99c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x17a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_17a9a0:
    // 0x17a9a0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x17a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_17a9a4:
    // 0x17a9a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17a9a8:
    // 0x17a9a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a9a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a9ac:
    // 0x17a9ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a9b0:
    // 0x17a9b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a9b4:
    // 0x17a9b4: 0x3e00008  jr          $ra
label_17a9b8:
    if (ctx->pc == 0x17A9B8u) {
        ctx->pc = 0x17A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9B4u;
        // 0x17a9b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A9BCu;
        goto label_17a9bc;
    }
    ctx->pc = 0x17A9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9B4u;
        // 0x17a9b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A9BCu;
label_17a9bc:
    // 0x17a9bc: 0x0  nop
    ctx->pc = 0x17a9bcu;
    // NOP
label_17a9c0:
    // 0x17a9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17a9c4:
    // 0x17a9c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_17a9c8:
    // 0x17a9c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17a9cc:
    // 0x17a9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a9d0:
    // 0x17a9d0: 0x8c42af68  lw          $v0, -0x5098($v0)
    ctx->pc = 0x17a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946664)));
label_17a9d4:
    // 0x17a9d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17a9d8:
    if (ctx->pc == 0x17A9D8u) {
        ctx->pc = 0x17A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9D4u;
        // 0x17a9d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A9DCu;
        goto label_17a9dc;
    }
    ctx->pc = 0x17A9D4u;
    {
        const bool branch_taken_0x17a9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9D4u;
        // 0x17a9d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9d4) {
            ctx->pc = 0x17A9E4u;
            goto label_17a9e4;
        }
    }
    ctx->pc = 0x17A9DCu;
label_17a9dc:
    // 0x17a9dc: 0xc05d974  jal         func_1765D0
label_17a9e0:
    if (ctx->pc == 0x17A9E0u) {
        ctx->pc = 0x17A9E4u;
        goto label_17a9e4;
    }
    ctx->pc = 0x17A9DCu;
    SET_GPR_U32(ctx, 31, 0x17A9E4u);
    ctx->pc = 0x1765D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765D0u, 0x17A9DCu, 0x17A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A9E4u;
label_17a9e4:
    // 0x17a9e4: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x17a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_17a9e8:
    // 0x17a9e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a9ec:
    // 0x17a9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a9f0:
    // 0x17a9f0: 0x3e00008  jr          $ra
label_17a9f4:
    if (ctx->pc == 0x17A9F4u) {
        ctx->pc = 0x17A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9F0u;
        // 0x17a9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A9F8u;
        goto label_17a9f8;
    }
    ctx->pc = 0x17A9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9F0u;
        // 0x17a9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A9F8u;
label_17a9f8:
    // 0x17a9f8: 0x0  nop
    ctx->pc = 0x17a9f8u;
    // NOP
label_17a9fc:
    // 0x17a9fc: 0x0  nop
    ctx->pc = 0x17a9fcu;
    // NOP
label_17aa00:
    // 0x17aa00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17aa04:
    // 0x17aa04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17aa08:
    // 0x17aa08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17aa0c:
    // 0x17aa0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17aa10:
    // 0x17aa10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17aa10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17aa14:
    // 0x17aa14: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x17aa14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_17aa18:
    // 0x17aa18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17aa18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17aa1c:
    // 0x17aa1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17aa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17aa20:
    // 0x17aa20: 0xc0538fc  jal         func_14E3F0
label_17aa24:
    if (ctx->pc == 0x17AA24u) {
        ctx->pc = 0x17AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA20u;
        // 0x17aa24: 0x34440400  ori         $a0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA28u;
        goto label_17aa28;
    }
    ctx->pc = 0x17AA20u;
    SET_GPR_U32(ctx, 31, 0x17AA28u);
    ctx->pc = 0x17AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA20u;
    // 0x17aa24: 0x34440400  ori         $a0, $v0, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x17AA20u, 0x17AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA28u;
label_17aa28:
    // 0x17aa28: 0xa20200be  sb          $v0, 0xBE($s0)
    ctx->pc = 0x17aa28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 190), (uint8_t)GPR_U32(ctx, 2));
label_17aa2c:
    // 0x17aa2c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x17aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_17aa30:
    // 0x17aa30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17aa30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17aa34:
    // 0x17aa34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17aa34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17aa38:
    // 0x17aa38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17aa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17aa3c:
    // 0x17aa3c: 0x3e00008  jr          $ra
label_17aa40:
    if (ctx->pc == 0x17AA40u) {
        ctx->pc = 0x17AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA3Cu;
        // 0x17aa40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA44u;
        goto label_17aa44;
    }
    ctx->pc = 0x17AA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA3Cu;
        // 0x17aa40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AA44u;
label_17aa44:
    // 0x17aa44: 0x0  nop
    ctx->pc = 0x17aa44u;
    // NOP
label_17aa48:
    // 0x17aa48: 0x0  nop
    ctx->pc = 0x17aa48u;
    // NOP
label_17aa4c:
    // 0x17aa4c: 0x0  nop
    ctx->pc = 0x17aa4cu;
    // NOP
label_17aa50:
    // 0x17aa50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17aa54:
    // 0x17aa54: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_17aa58:
    // 0x17aa58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17aa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17aa5c:
    // 0x17aa5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17aa60:
    // 0x17aa60: 0x8042a218  lb          $v0, -0x5DE8($v0)
    ctx->pc = 0x17aa60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943256)));
label_17aa64:
    // 0x17aa64: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x17aa64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17aa68:
    // 0x17aa68: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_17aa6c:
    if (ctx->pc == 0x17AA6Cu) {
        ctx->pc = 0x17AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA68u;
        // 0x17aa6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA70u;
        goto label_17aa70;
    }
    ctx->pc = 0x17AA68u;
    {
        const bool branch_taken_0x17aa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA68u;
        // 0x17aa6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa68) {
            ctx->pc = 0x17AA94u;
            goto label_17aa94;
        }
    }
    ctx->pc = 0x17AA70u;
label_17aa70:
    // 0x17aa70: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x17aa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_17aa74:
    // 0x17aa74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17aa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17aa78:
    // 0x17aa78: 0xc0538fc  jal         func_14E3F0
label_17aa7c:
    if (ctx->pc == 0x17AA7Cu) {
        ctx->pc = 0x17AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA78u;
        // 0x17aa7c: 0x34440700  ori         $a0, $v0, 0x700 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA80u;
        goto label_17aa80;
    }
    ctx->pc = 0x17AA78u;
    SET_GPR_U32(ctx, 31, 0x17AA80u);
    ctx->pc = 0x17AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA78u;
    // 0x17aa7c: 0x34440700  ori         $a0, $v0, 0x700 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x17AA78u, 0x17AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA80u;
label_17aa80:
    // 0x17aa80: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x17aa80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_17aa84:
    // 0x17aa84: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17aa88:
    // 0x17aa88: 0x2463b600  addiu       $v1, $v1, -0x4A00
    ctx->pc = 0x17aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948352));
label_17aa8c:
    // 0x17aa8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17aa90:
    // 0x17aa90: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x17aa90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_17aa94:
    // 0x17aa94: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x17aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17aa98:
    // 0x17aa98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17aa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17aa9c:
    // 0x17aa9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17aa9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17aaa0:
    // 0x17aaa0: 0x3e00008  jr          $ra
label_17aaa4:
    if (ctx->pc == 0x17AAA4u) {
        ctx->pc = 0x17AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAA0u;
        // 0x17aaa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AAA8u;
        goto label_17aaa8;
    }
    ctx->pc = 0x17AAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAA0u;
        // 0x17aaa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AAA8u;
label_17aaa8:
    // 0x17aaa8: 0x0  nop
    ctx->pc = 0x17aaa8u;
    // NOP
label_17aaac:
    // 0x17aaac: 0x0  nop
    ctx->pc = 0x17aaacu;
    // NOP
label_17aab0:
    // 0x17aab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17aab4:
    // 0x17aab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17aab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17aab8:
    // 0x17aab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17aab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17aabc:
    // 0x17aabc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17aac0:
    // 0x17aac0: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x17aac0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_17aac4:
    // 0x17aac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17aac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17aac8:
    // 0x17aac8: 0xc0538fc  jal         func_14E3F0
label_17aacc:
    if (ctx->pc == 0x17AACCu) {
        ctx->pc = 0x17AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAC8u;
        // 0x17aacc: 0x34440100  ori         $a0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AAD0u;
        goto label_17aad0;
    }
    ctx->pc = 0x17AAC8u;
    SET_GPR_U32(ctx, 31, 0x17AAD0u);
    ctx->pc = 0x17AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AAC8u;
    // 0x17aacc: 0x34440100  ori         $a0, $v0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x17AAC8u, 0x17AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AAD0u;
label_17aad0:
    // 0x17aad0: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x17aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17aad4:
    // 0x17aad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17aad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17aad8:
    // 0x17aad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17aad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17aadc:
    // 0x17aadc: 0x3e00008  jr          $ra
label_17aae0:
    if (ctx->pc == 0x17AAE0u) {
        ctx->pc = 0x17AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AADCu;
        // 0x17aae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AAE4u;
        goto label_17aae4;
    }
    ctx->pc = 0x17AADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AADCu;
        // 0x17aae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AAE4u;
label_17aae4:
    // 0x17aae4: 0x0  nop
    ctx->pc = 0x17aae4u;
    // NOP
label_17aae8:
    // 0x17aae8: 0x0  nop
    ctx->pc = 0x17aae8u;
    // NOP
label_17aaec:
    // 0x17aaec: 0x0  nop
    ctx->pc = 0x17aaecu;
    // NOP
label_17aaf0:
    // 0x17aaf0: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x17aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_17aaf4:
    // 0x17aaf4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17aaf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17aaf8:
    // 0x17aaf8: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x17aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
label_17aafc:
    // 0x17aafc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x17aafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_17ab00:
    // 0x17ab00: 0x3e00008  jr          $ra
label_17ab04:
    if (ctx->pc == 0x17AB04u) {
        ctx->pc = 0x17AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB00u;
        // 0x17ab04: 0xaca300b8  sw          $v1, 0xB8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AB08u;
        goto label_17ab08;
    }
    ctx->pc = 0x17AB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB00u;
        // 0x17ab04: 0xaca300b8  sw          $v1, 0xB8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AB08u;
label_17ab08:
    // 0x17ab08: 0x0  nop
    ctx->pc = 0x17ab08u;
    // NOP
label_17ab0c:
    // 0x17ab0c: 0x0  nop
    ctx->pc = 0x17ab0cu;
    // NOP
label_17ab10:
    // 0x17ab10: 0x3e00008  jr          $ra
label_17ab14:
    if (ctx->pc == 0x17AB14u) {
        ctx->pc = 0x17AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB10u;
        // 0x17ab14: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AB18u;
        goto label_17ab18;
    }
    ctx->pc = 0x17AB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB10u;
        // 0x17ab14: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AB18u;
label_17ab18:
    // 0x17ab18: 0x0  nop
    ctx->pc = 0x17ab18u;
    // NOP
label_17ab1c:
    // 0x17ab1c: 0x0  nop
    ctx->pc = 0x17ab1cu;
    // NOP
label_17ab20:
    // 0x17ab20: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x17ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
label_17ab24:
    // 0x17ab24: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x17ab24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
label_17ab28:
    // 0x17ab28: 0x24c6b580  addiu       $a2, $a2, -0x4A80
    ctx->pc = 0x17ab28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948224));
label_17ab2c:
    // 0x17ab2c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_17ab30:
    // 0x17ab30: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x17ab30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_17ab34:
    // 0x17ab34: 0xaca300b8  sw          $v1, 0xB8($a1)
    ctx->pc = 0x17ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 3));
label_17ab38:
    // 0x17ab38: 0x90a30019  lbu         $v1, 0x19($a1)
    ctx->pc = 0x17ab38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 25)));
label_17ab3c:
    // 0x17ab3c: 0x9042b570  lbu         $v0, -0x4A90($v0)
    ctx->pc = 0x17ab3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948208)));
label_17ab40:
    // 0x17ab40: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x17ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_17ab44:
    // 0x17ab44: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17ab44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_17ab48:
    // 0x17ab48: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x17ab48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_17ab4c:
    // 0x17ab4c: 0x90a30019  lbu         $v1, 0x19($a1)
    ctx->pc = 0x17ab4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 25)));
label_17ab50:
    // 0x17ab50: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_17ab54:
    if (ctx->pc == 0x17AB54u) {
        ctx->pc = 0x17AB58u;
        goto label_17ab58;
    }
    ctx->pc = 0x17AB50u;
    {
        const bool branch_taken_0x17ab50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ab50) {
            ctx->pc = 0x17ABA0u;
            goto label_17aba0;
        }
    }
    ctx->pc = 0x17AB58u;
label_17ab58:
    // 0x17ab58: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x17ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17ab5c:
    // 0x17ab5c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_17ab60:
    // 0x17ab60: 0xa043b570  sb          $v1, -0x4A90($v0)
    ctx->pc = 0x17ab60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948208), (uint8_t)GPR_U32(ctx, 3));
label_17ab64:
    // 0x17ab64: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_17ab68:
    // 0x17ab68: 0x9043b570  lbu         $v1, -0x4A90($v0)
    ctx->pc = 0x17ab68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948208)));
label_17ab6c:
    // 0x17ab6c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_17ab70:
    if (ctx->pc == 0x17AB70u) {
        ctx->pc = 0x17AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB6Cu;
        // 0x17ab70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AB74u;
        goto label_17ab74;
    }
    ctx->pc = 0x17AB6Cu;
    {
        const bool branch_taken_0x17ab6c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB6Cu;
        // 0x17ab70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab6c) {
            ctx->pc = 0x17ABA0u;
            goto label_17aba0;
        }
    }
    ctx->pc = 0x17AB74u;
label_17ab74:
    // 0x17ab74: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x17ab74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_17ab78:
    // 0x17ab78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17ab78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17ab7c:
    // 0x17ab7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17ab7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_17ab80:
    // 0x17ab80: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_17ab84:
    if (ctx->pc == 0x17AB84u) {
        ctx->pc = 0x17AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB80u;
        // 0x17ab84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AB88u;
        goto label_17ab88;
    }
    ctx->pc = 0x17AB80u;
    {
        const bool branch_taken_0x17ab80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ab80) {
            ctx->pc = 0x17AB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AB80u;
            // 0x17ab84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AB94u;
            goto label_17ab94;
        }
    }
    ctx->pc = 0x17AB88u;
label_17ab88:
    // 0x17ab88: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_17ab8c:
    // 0x17ab8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_17ab90:
    if (ctx->pc == 0x17AB90u) {
        ctx->pc = 0x17AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB8Cu;
        // 0x17ab90: 0xa045b570  sb          $a1, -0x4A90($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294948208), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AB94u;
        goto label_17ab94;
    }
    ctx->pc = 0x17AB8Cu;
    {
        const bool branch_taken_0x17ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB8Cu;
        // 0x17ab90: 0xa045b570  sb          $a1, -0x4A90($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294948208), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab8c) {
            ctx->pc = 0x17ABA0u;
            goto label_17aba0;
        }
    }
    ctx->pc = 0x17AB94u;
label_17ab94:
    // 0x17ab94: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x17ab94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17ab98:
    // 0x17ab98: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_17ab9c:
    if (ctx->pc == 0x17AB9Cu) {
        ctx->pc = 0x17AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB98u;
        // 0x17ab9c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ABA0u;
        goto label_17aba0;
    }
    ctx->pc = 0x17AB98u;
    {
        const bool branch_taken_0x17ab98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB98u;
        // 0x17ab9c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab98) {
            ctx->pc = 0x17AB74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17ab74;
        }
    }
    ctx->pc = 0x17ABA0u;
label_17aba0:
    // 0x17aba0: 0x3e00008  jr          $ra
label_17aba4:
    if (ctx->pc == 0x17ABA4u) {
        ctx->pc = 0x17ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABA0u;
        // 0x17aba4: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ABA8u;
        goto label_17aba8;
    }
    ctx->pc = 0x17ABA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABA0u;
        // 0x17aba4: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ABA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ABA8u;
label_17aba8:
    // 0x17aba8: 0x0  nop
    ctx->pc = 0x17aba8u;
    // NOP
label_17abac:
    // 0x17abac: 0x0  nop
    ctx->pc = 0x17abacu;
    // NOP
label_17abb0:
    // 0x17abb0: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x17abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_17abb4:
    // 0x17abb4: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x17abb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
label_17abb8:
    // 0x17abb8: 0x84880004  lh          $t0, 0x4($a0)
    ctx->pc = 0x17abb8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17abbc:
    // 0x17abbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17abc0:
    // 0x17abc0: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x17abc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_17abc4:
    // 0x17abc4: 0x24e7b580  addiu       $a3, $a3, -0x4A80
    ctx->pc = 0x17abc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948224));
label_17abc8:
    // 0x17abc8: 0x24a300c0  addiu       $v1, $a1, 0xC0
    ctx->pc = 0x17abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_17abcc:
    // 0x17abcc: 0xa4a80034  sh          $t0, 0x34($a1)
    ctx->pc = 0x17abccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 8));
label_17abd0:
    // 0x17abd0: 0x84880006  lh          $t0, 0x6($a0)
    ctx->pc = 0x17abd0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_17abd4:
    // 0x17abd4: 0xa4a80036  sh          $t0, 0x36($a1)
    ctx->pc = 0x17abd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 54), (uint16_t)GPR_U32(ctx, 8));
label_17abd8:
    // 0x17abd8: 0x84880008  lh          $t0, 0x8($a0)
    ctx->pc = 0x17abd8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_17abdc:
    // 0x17abdc: 0xa4a80038  sh          $t0, 0x38($a1)
    ctx->pc = 0x17abdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 8));
label_17abe0:
    // 0x17abe0: 0x8488000a  lh          $t0, 0xA($a0)
    ctx->pc = 0x17abe0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_17abe4:
    // 0x17abe4: 0xa4a8003a  sh          $t0, 0x3A($a1)
    ctx->pc = 0x17abe4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 58), (uint16_t)GPR_U32(ctx, 8));
label_17abe8:
    // 0x17abe8: 0x8488000c  lh          $t0, 0xC($a0)
    ctx->pc = 0x17abe8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_17abec:
    // 0x17abec: 0xa4a80030  sh          $t0, 0x30($a1)
    ctx->pc = 0x17abecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 8));
label_17abf0:
    // 0x17abf0: 0x8488000e  lh          $t0, 0xE($a0)
    ctx->pc = 0x17abf0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_17abf4:
    // 0x17abf4: 0xa4a80032  sh          $t0, 0x32($a1)
    ctx->pc = 0x17abf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 8));
label_17abf8:
    // 0x17abf8: 0x84880010  lh          $t0, 0x10($a0)
    ctx->pc = 0x17abf8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
label_17abfc:
    // 0x17abfc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x17abfcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ac00:
    // 0x17ac00: 0x0  nop
    ctx->pc = 0x17ac00u;
    // NOP
label_17ac04:
    // 0x17ac04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17ac04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17ac08:
    // 0x17ac08: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x17ac08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_17ac0c:
    // 0x17ac0c: 0x84880012  lh          $t0, 0x12($a0)
    ctx->pc = 0x17ac0cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
label_17ac10:
    // 0x17ac10: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x17ac10u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ac14:
    // 0x17ac14: 0x0  nop
    ctx->pc = 0x17ac14u;
    // NOP
label_17ac18:
    // 0x17ac18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17ac18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17ac1c:
    // 0x17ac1c: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x17ac1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_17ac20:
    // 0x17ac20: 0x84880014  lh          $t0, 0x14($a0)
    ctx->pc = 0x17ac20u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_17ac24:
    // 0x17ac24: 0xa4a80046  sh          $t0, 0x46($a1)
    ctx->pc = 0x17ac24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 70), (uint16_t)GPR_U32(ctx, 8));
label_17ac28:
    // 0x17ac28: 0x84880016  lh          $t0, 0x16($a0)
    ctx->pc = 0x17ac28u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
label_17ac2c:
    // 0x17ac2c: 0xa4a80048  sh          $t0, 0x48($a1)
    ctx->pc = 0x17ac2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 72), (uint16_t)GPR_U32(ctx, 8));
label_17ac30:
    // 0x17ac30: 0x84880018  lh          $t0, 0x18($a0)
    ctx->pc = 0x17ac30u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_17ac34:
    // 0x17ac34: 0xa0a800ac  sb          $t0, 0xAC($a1)
    ctx->pc = 0x17ac34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 172), (uint8_t)GPR_U32(ctx, 8));
label_17ac38:
    // 0x17ac38: 0x8488001a  lh          $t0, 0x1A($a0)
    ctx->pc = 0x17ac38u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
label_17ac3c:
    // 0x17ac3c: 0xaca800c4  sw          $t0, 0xC4($a1)
    ctx->pc = 0x17ac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 8));
label_17ac40:
    // 0x17ac40: 0x8488001c  lh          $t0, 0x1C($a0)
    ctx->pc = 0x17ac40u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_17ac44:
    // 0x17ac44: 0xa0a800c8  sb          $t0, 0xC8($a1)
    ctx->pc = 0x17ac44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 200), (uint8_t)GPR_U32(ctx, 8));
label_17ac48:
    // 0x17ac48: 0x8488001e  lh          $t0, 0x1E($a0)
    ctx->pc = 0x17ac48u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_17ac4c:
    // 0x17ac4c: 0xa0a800c9  sb          $t0, 0xC9($a1)
    ctx->pc = 0x17ac4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 201), (uint8_t)GPR_U32(ctx, 8));
label_17ac50:
    // 0x17ac50: 0x84880020  lh          $t0, 0x20($a0)
    ctx->pc = 0x17ac50u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
label_17ac54:
    // 0x17ac54: 0xa0a800ca  sb          $t0, 0xCA($a1)
    ctx->pc = 0x17ac54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 202), (uint8_t)GPR_U32(ctx, 8));
label_17ac58:
    // 0x17ac58: 0x84880022  lh          $t0, 0x22($a0)
    ctx->pc = 0x17ac58u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
label_17ac5c:
    // 0x17ac5c: 0xa0a800cb  sb          $t0, 0xCB($a1)
    ctx->pc = 0x17ac5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 203), (uint8_t)GPR_U32(ctx, 8));
label_17ac60:
    // 0x17ac60: 0x84880024  lh          $t0, 0x24($a0)
    ctx->pc = 0x17ac60u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
label_17ac64:
    // 0x17ac64: 0xa0a800cc  sb          $t0, 0xCC($a1)
    ctx->pc = 0x17ac64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 204), (uint8_t)GPR_U32(ctx, 8));
label_17ac68:
    // 0x17ac68: 0x84880026  lh          $t0, 0x26($a0)
    ctx->pc = 0x17ac68u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
label_17ac6c:
    // 0x17ac6c: 0xa0a800cd  sb          $t0, 0xCD($a1)
    ctx->pc = 0x17ac6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 205), (uint8_t)GPR_U32(ctx, 8));
label_17ac70:
    // 0x17ac70: 0x84880028  lh          $t0, 0x28($a0)
    ctx->pc = 0x17ac70u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
label_17ac74:
    // 0x17ac74: 0xaca800b0  sw          $t0, 0xB0($a1)
    ctx->pc = 0x17ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 8));
label_17ac78:
    // 0x17ac78: 0x8488002a  lh          $t0, 0x2A($a0)
    ctx->pc = 0x17ac78u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_17ac7c:
    // 0x17ac7c: 0xa4a80040  sh          $t0, 0x40($a1)
    ctx->pc = 0x17ac7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 64), (uint16_t)GPR_U32(ctx, 8));
label_17ac80:
    // 0x17ac80: 0x8488002c  lh          $t0, 0x2C($a0)
    ctx->pc = 0x17ac80u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
label_17ac84:
    // 0x17ac84: 0xa4a80042  sh          $t0, 0x42($a1)
    ctx->pc = 0x17ac84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 66), (uint16_t)GPR_U32(ctx, 8));
label_17ac88:
    // 0x17ac88: 0x8488002e  lh          $t0, 0x2E($a0)
    ctx->pc = 0x17ac88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
label_17ac8c:
    // 0x17ac8c: 0xa4a8003c  sh          $t0, 0x3C($a1)
    ctx->pc = 0x17ac8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 60), (uint16_t)GPR_U32(ctx, 8));
label_17ac90:
    // 0x17ac90: 0x84880030  lh          $t0, 0x30($a0)
    ctx->pc = 0x17ac90u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
label_17ac94:
    // 0x17ac94: 0xa4a8003e  sh          $t0, 0x3E($a1)
    ctx->pc = 0x17ac94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 8));
label_17ac98:
    // 0x17ac98: 0xa0a20018  sb          $v0, 0x18($a1)
    ctx->pc = 0x17ac98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 2));
label_17ac9c:
    // 0x17ac9c: 0xa0a00044  sb          $zero, 0x44($a1)
    ctx->pc = 0x17ac9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 68), (uint8_t)GPR_U32(ctx, 0));
label_17aca0:
    // 0x17aca0: 0xa0a00045  sb          $zero, 0x45($a1)
    ctx->pc = 0x17aca0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 69), (uint8_t)GPR_U32(ctx, 0));
label_17aca4:
    // 0x17aca4: 0x8ca800b8  lw          $t0, 0xB8($a1)
    ctx->pc = 0x17aca4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
label_17aca8:
    // 0x17aca8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x17aca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_17acac:
    // 0x17acac: 0xaca600b8  sw          $a2, 0xB8($a1)
    ctx->pc = 0x17acacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 6));
label_17acb0:
    // 0x17acb0: 0x90a80019  lbu         $t0, 0x19($a1)
    ctx->pc = 0x17acb0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 25)));
label_17acb4:
    // 0x17acb4: 0x84a6003c  lh          $a2, 0x3C($a1)
    ctx->pc = 0x17acb4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
label_17acb8:
    // 0x17acb8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x17acb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_17acbc:
    // 0x17acbc: 0x28c601e0  slti        $a2, $a2, 0x1E0
    ctx->pc = 0x17acbcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)480) ? 1 : 0);
label_17acc0:
    // 0x17acc0: 0x14c00022  bnez        $a2, . + 4 + (0x22 << 2)
label_17acc4:
    if (ctx->pc == 0x17ACC4u) {
        ctx->pc = 0x17ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACC0u;
        // 0x17acc4: 0xe83821  addu        $a3, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ACC8u;
        goto label_17acc8;
    }
    ctx->pc = 0x17ACC0u;
    {
        const bool branch_taken_0x17acc0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACC0u;
        // 0x17acc4: 0xe83821  addu        $a3, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acc0) {
            ctx->pc = 0x17AD4Cu;
            goto label_17ad4c;
        }
    }
    ctx->pc = 0x17ACC8u;
label_17acc8:
    // 0x17acc8: 0x84a6003e  lh          $a2, 0x3E($a1)
    ctx->pc = 0x17acc8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
label_17accc:
    // 0x17accc: 0x28c60280  slti        $a2, $a2, 0x280
    ctx->pc = 0x17acccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)640) ? 1 : 0);
label_17acd0:
    // 0x17acd0: 0x54c0001f  bnel        $a2, $zero, . + 4 + (0x1F << 2)
label_17acd4:
    if (ctx->pc == 0x17ACD4u) {
        ctx->pc = 0x17ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACD0u;
        // 0x17acd4: 0x24820032  addiu       $v0, $a0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ACD8u;
        goto label_17acd8;
    }
    ctx->pc = 0x17ACD0u;
    {
        const bool branch_taken_0x17acd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17acd0) {
            ctx->pc = 0x17ACD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17ACD0u;
            // 0x17acd4: 0x24820032  addiu       $v0, $a0, 0x32 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AD50u;
            goto label_17ad50;
        }
    }
    ctx->pc = 0x17ACD8u;
label_17acd8:
    // 0x17acd8: 0x90660008  lbu         $a2, 0x8($v1)
    ctx->pc = 0x17acd8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_17acdc:
    // 0x17acdc: 0x14c0001b  bnez        $a2, . + 4 + (0x1B << 2)
label_17ace0:
    if (ctx->pc == 0x17ACE0u) {
        ctx->pc = 0x17ACE4u;
        goto label_17ace4;
    }
    ctx->pc = 0x17ACDCu;
    {
        const bool branch_taken_0x17acdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17acdc) {
            ctx->pc = 0x17AD4Cu;
            goto label_17ad4c;
        }
    }
    ctx->pc = 0x17ACE4u;
label_17ace4:
    // 0x17ace4: 0x90660009  lbu         $a2, 0x9($v1)
    ctx->pc = 0x17ace4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
label_17ace8:
    // 0x17ace8: 0x14c00018  bnez        $a2, . + 4 + (0x18 << 2)
label_17acec:
    if (ctx->pc == 0x17ACECu) {
        ctx->pc = 0x17ACF0u;
        goto label_17acf0;
    }
    ctx->pc = 0x17ACE8u;
    {
        const bool branch_taken_0x17ace8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ace8) {
            ctx->pc = 0x17AD4Cu;
            goto label_17ad4c;
        }
    }
    ctx->pc = 0x17ACF0u;
label_17acf0:
    // 0x17acf0: 0x9066000a  lbu         $a2, 0xA($v1)
    ctx->pc = 0x17acf0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
label_17acf4:
    // 0x17acf4: 0x14c00015  bnez        $a2, . + 4 + (0x15 << 2)
label_17acf8:
    if (ctx->pc == 0x17ACF8u) {
        ctx->pc = 0x17ACFCu;
        goto label_17acfc;
    }
    ctx->pc = 0x17ACF4u;
    {
        const bool branch_taken_0x17acf4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17acf4) {
            ctx->pc = 0x17AD4Cu;
            goto label_17ad4c;
        }
    }
    ctx->pc = 0x17ACFCu;
label_17acfc:
    // 0x17acfc: 0x9066000b  lbu         $a2, 0xB($v1)
    ctx->pc = 0x17acfcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
label_17ad00:
    // 0x17ad00: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
label_17ad04:
    if (ctx->pc == 0x17AD04u) {
        ctx->pc = 0x17AD08u;
        goto label_17ad08;
    }
    ctx->pc = 0x17AD00u;
    {
        const bool branch_taken_0x17ad00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ad00) {
            ctx->pc = 0x17AD4Cu;
            goto label_17ad4c;
        }
    }
    ctx->pc = 0x17AD08u;
label_17ad08:
    // 0x17ad08: 0x9066000c  lbu         $a2, 0xC($v1)
    ctx->pc = 0x17ad08u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
label_17ad0c:
    // 0x17ad0c: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
label_17ad10:
    if (ctx->pc == 0x17AD10u) {
        ctx->pc = 0x17AD14u;
        goto label_17ad14;
    }
    ctx->pc = 0x17AD0Cu;
    {
        const bool branch_taken_0x17ad0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ad0c) {
            ctx->pc = 0x17AD4Cu;
            goto label_17ad4c;
        }
    }
    ctx->pc = 0x17AD14u;
label_17ad14:
    // 0x17ad14: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x17ad14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
label_17ad18:
    // 0x17ad18: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_17ad1c:
    if (ctx->pc == 0x17AD1Cu) {
        ctx->pc = 0x17AD20u;
        goto label_17ad20;
    }
    ctx->pc = 0x17AD18u;
    {
        const bool branch_taken_0x17ad18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ad18) {
            ctx->pc = 0x17AD4Cu;
            goto label_17ad4c;
        }
    }
    ctx->pc = 0x17AD20u;
label_17ad20:
    // 0x17ad20: 0x90a600ac  lbu         $a2, 0xAC($a1)
    ctx->pc = 0x17ad20u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 172)));
label_17ad24:
    // 0x17ad24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17ad28:
    // 0x17ad28: 0x9063b570  lbu         $v1, -0x4A90($v1)
    ctx->pc = 0x17ad28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948208)));
label_17ad2c:
    // 0x17ad2c: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x17ad2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
label_17ad30:
    // 0x17ad30: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x17ad30u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_17ad34:
    // 0x17ad34: 0x90a50019  lbu         $a1, 0x19($a1)
    ctx->pc = 0x17ad34u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 25)));
label_17ad38:
    // 0x17ad38: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x17ad38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_17ad3c:
    // 0x17ad3c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17ad40:
    if (ctx->pc == 0x17AD40u) {
        ctx->pc = 0x17AD44u;
        goto label_17ad44;
    }
    ctx->pc = 0x17AD3Cu;
    {
        const bool branch_taken_0x17ad3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ad3c) {
            ctx->pc = 0x17AD4Cu;
            goto label_17ad4c;
        }
    }
    ctx->pc = 0x17AD44u;
label_17ad44:
    // 0x17ad44: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_17ad48:
    // 0x17ad48: 0xa045b570  sb          $a1, -0x4A90($v0)
    ctx->pc = 0x17ad48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948208), (uint8_t)GPR_U32(ctx, 5));
label_17ad4c:
    // 0x17ad4c: 0x24820032  addiu       $v0, $a0, 0x32
    ctx->pc = 0x17ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 50));
label_17ad50:
    // 0x17ad50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17ad54:
    // 0x17ad54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ad58:
    // 0x17ad58: 0x3e00008  jr          $ra
label_17ad5c:
    if (ctx->pc == 0x17AD5Cu) {
        ctx->pc = 0x17AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD58u;
        // 0x17ad5c: 0xa064b578  sb          $a0, -0x4A88($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294948216), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AD60u;
        goto label_17ad60;
    }
    ctx->pc = 0x17AD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD58u;
        // 0x17ad5c: 0xa064b578  sb          $a0, -0x4A88($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294948216), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AD60u;
label_17ad60:
    // 0x17ad60: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x17ad60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_17ad64:
    // 0x17ad64: 0x24820024  addiu       $v0, $a0, 0x24
    ctx->pc = 0x17ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_17ad68:
    // 0x17ad68: 0x84890004  lh          $t1, 0x4($a0)
    ctx->pc = 0x17ad68u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17ad6c:
    // 0x17ad6c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x17ad6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17ad70:
    // 0x17ad70: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x17ad70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_17ad74:
    // 0x17ad74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17ad74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ad78:
    // 0x17ad78: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_17ad7c:
    // 0x17ad7c: 0xa4a90034  sh          $t1, 0x34($a1)
    ctx->pc = 0x17ad7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 9));
label_17ad80:
    // 0x17ad80: 0x84890006  lh          $t1, 0x6($a0)
    ctx->pc = 0x17ad80u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_17ad84:
    // 0x17ad84: 0xa4a90036  sh          $t1, 0x36($a1)
    ctx->pc = 0x17ad84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 54), (uint16_t)GPR_U32(ctx, 9));
label_17ad88:
    // 0x17ad88: 0x84890008  lh          $t1, 0x8($a0)
    ctx->pc = 0x17ad88u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_17ad8c:
    // 0x17ad8c: 0xa4a90038  sh          $t1, 0x38($a1)
    ctx->pc = 0x17ad8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 9));
label_17ad90:
    // 0x17ad90: 0x8489000a  lh          $t1, 0xA($a0)
    ctx->pc = 0x17ad90u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_17ad94:
    // 0x17ad94: 0xa4a9003a  sh          $t1, 0x3A($a1)
    ctx->pc = 0x17ad94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 58), (uint16_t)GPR_U32(ctx, 9));
label_17ad98:
    // 0x17ad98: 0x8489000c  lh          $t1, 0xC($a0)
    ctx->pc = 0x17ad98u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_17ad9c:
    // 0x17ad9c: 0xa4a90030  sh          $t1, 0x30($a1)
    ctx->pc = 0x17ad9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 9));
label_17ada0:
    // 0x17ada0: 0x8489000e  lh          $t1, 0xE($a0)
    ctx->pc = 0x17ada0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_17ada4:
    // 0x17ada4: 0xa4a90032  sh          $t1, 0x32($a1)
    ctx->pc = 0x17ada4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 9));
label_17ada8:
    // 0x17ada8: 0x84890014  lh          $t1, 0x14($a0)
    ctx->pc = 0x17ada8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_17adac:
    // 0x17adac: 0xa4a90046  sh          $t1, 0x46($a1)
    ctx->pc = 0x17adacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 70), (uint16_t)GPR_U32(ctx, 9));
label_17adb0:
    // 0x17adb0: 0x84890016  lh          $t1, 0x16($a0)
    ctx->pc = 0x17adb0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
label_17adb4:
    // 0x17adb4: 0xa4a90048  sh          $t1, 0x48($a1)
    ctx->pc = 0x17adb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 72), (uint16_t)GPR_U32(ctx, 9));
label_17adb8:
    // 0x17adb8: 0x84890018  lh          $t1, 0x18($a0)
    ctx->pc = 0x17adb8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_17adbc:
    // 0x17adbc: 0xa0a900ac  sb          $t1, 0xAC($a1)
    ctx->pc = 0x17adbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 172), (uint8_t)GPR_U32(ctx, 9));
label_17adc0:
    // 0x17adc0: 0x8489001a  lh          $t1, 0x1A($a0)
    ctx->pc = 0x17adc0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
label_17adc4:
    // 0x17adc4: 0xa0a900d0  sb          $t1, 0xD0($a1)
    ctx->pc = 0x17adc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 208), (uint8_t)GPR_U32(ctx, 9));
label_17adc8:
    // 0x17adc8: 0x8489001c  lh          $t1, 0x1C($a0)
    ctx->pc = 0x17adc8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_17adcc:
    // 0x17adcc: 0xa0a900d1  sb          $t1, 0xD1($a1)
    ctx->pc = 0x17adccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 209), (uint8_t)GPR_U32(ctx, 9));
label_17add0:
    // 0x17add0: 0x8489001e  lh          $t1, 0x1E($a0)
    ctx->pc = 0x17add0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_17add4:
    // 0x17add4: 0xa0a900d2  sb          $t1, 0xD2($a1)
    ctx->pc = 0x17add4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 210), (uint8_t)GPR_U32(ctx, 9));
label_17add8:
    // 0x17add8: 0x84890020  lh          $t1, 0x20($a0)
    ctx->pc = 0x17add8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
label_17addc:
    // 0x17addc: 0xa4a9003c  sh          $t1, 0x3C($a1)
    ctx->pc = 0x17addcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 60), (uint16_t)GPR_U32(ctx, 9));
label_17ade0:
    // 0x17ade0: 0x84840022  lh          $a0, 0x22($a0)
    ctx->pc = 0x17ade0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
label_17ade4:
    // 0x17ade4: 0xa4a4003e  sh          $a0, 0x3E($a1)
    ctx->pc = 0x17ade4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 4));
label_17ade8:
    // 0x17ade8: 0xa0a80018  sb          $t0, 0x18($a1)
    ctx->pc = 0x17ade8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 8));
label_17adec:
    // 0x17adec: 0xa0a00044  sb          $zero, 0x44($a1)
    ctx->pc = 0x17adecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 68), (uint8_t)GPR_U32(ctx, 0));
label_17adf0:
    // 0x17adf0: 0xa0a00045  sb          $zero, 0x45($a1)
    ctx->pc = 0x17adf0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 69), (uint8_t)GPR_U32(ctx, 0));
label_17adf4:
    // 0x17adf4: 0x84a40032  lh          $a0, 0x32($a1)
    ctx->pc = 0x17adf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
label_17adf8:
    // 0x17adf8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x17adf8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_17adfc:
    // 0x17adfc: 0xa4a400d4  sh          $a0, 0xD4($a1)
    ctx->pc = 0x17adfcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 212), (uint16_t)GPR_U32(ctx, 4));
label_17ae00:
    // 0x17ae00: 0x84a80038  lh          $t0, 0x38($a1)
    ctx->pc = 0x17ae00u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
label_17ae04:
    // 0x17ae04: 0x94a400d4  lhu         $a0, 0xD4($a1)
    ctx->pc = 0x17ae04u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 212)));
label_17ae08:
    // 0x17ae08: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x17ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_17ae0c:
    // 0x17ae0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17ae0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ae10:
    // 0x17ae10: 0x0  nop
    ctx->pc = 0x17ae10u;
    // NOP
label_17ae14:
    // 0x17ae14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17ae14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17ae18:
    // 0x17ae18: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x17ae18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_17ae1c:
    // 0x17ae1c: 0x84a80034  lh          $t0, 0x34($a1)
    ctx->pc = 0x17ae1cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 52)));
label_17ae20:
    // 0x17ae20: 0x94a400d4  lhu         $a0, 0xD4($a1)
    ctx->pc = 0x17ae20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 212)));
label_17ae24:
    // 0x17ae24: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x17ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_17ae28:
    // 0x17ae28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17ae28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ae2c:
    // 0x17ae2c: 0x0  nop
    ctx->pc = 0x17ae2cu;
    // NOP
label_17ae30:
    // 0x17ae30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17ae30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17ae34:
    // 0x17ae34: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x17ae34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_17ae38:
    // 0x17ae38: 0x8ca400b8  lw          $a0, 0xB8($a1)
    ctx->pc = 0x17ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
label_17ae3c:
    // 0x17ae3c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x17ae3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_17ae40:
    // 0x17ae40: 0xaca400b8  sw          $a0, 0xB8($a1)
    ctx->pc = 0x17ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 4));
label_17ae44:
    // 0x17ae44: 0x3e00008  jr          $ra
label_17ae48:
    if (ctx->pc == 0x17AE48u) {
        ctx->pc = 0x17AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE44u;
        // 0x17ae48: 0xa066b578  sb          $a2, -0x4A88($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294948216), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE4Cu;
        goto label_17ae4c;
    }
    ctx->pc = 0x17AE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE44u;
        // 0x17ae48: 0xa066b578  sb          $a2, -0x4A88($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294948216), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AE4Cu;
label_17ae4c:
    // 0x17ae4c: 0x0  nop
    ctx->pc = 0x17ae4cu;
    // NOP
label_17ae50:
    // 0x17ae50: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x17ae50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17ae54:
    // 0x17ae54: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x17ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_17ae58:
    // 0x17ae58: 0x3e00008  jr          $ra
label_17ae5c:
    if (ctx->pc == 0x17AE5Cu) {
        ctx->pc = 0x17AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE58u;
        // 0x17ae5c: 0xa0a30044  sb          $v1, 0x44($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 68), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE60u;
        goto label_17ae60;
    }
    ctx->pc = 0x17AE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE58u;
        // 0x17ae5c: 0xa0a30044  sb          $v1, 0x44($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 68), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AE60u;
label_17ae60:
    // 0x17ae60: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x17ae60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17ae64:
    // 0x17ae64: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x17ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_17ae68:
    // 0x17ae68: 0x3e00008  jr          $ra
label_17ae6c:
    if (ctx->pc == 0x17AE6Cu) {
        ctx->pc = 0x17AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE68u;
        // 0x17ae6c: 0xa0a30045  sb          $v1, 0x45($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 69), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE70u;
        goto label_17ae70;
    }
    ctx->pc = 0x17AE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE68u;
        // 0x17ae6c: 0xa0a30045  sb          $v1, 0x45($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 69), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AE70u;
label_17ae70:
    // 0x17ae70: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x17ae70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17ae74:
    // 0x17ae74: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x17ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_17ae78:
    // 0x17ae78: 0x3e00008  jr          $ra
label_17ae7c:
    if (ctx->pc == 0x17AE7Cu) {
        ctx->pc = 0x17AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE78u;
        // 0x17ae7c: 0xa0a300c0  sb          $v1, 0xC0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 192), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE80u;
        goto label_17ae80;
    }
    ctx->pc = 0x17AE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE78u;
        // 0x17ae7c: 0xa0a300c0  sb          $v1, 0xC0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 192), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AE80u;
label_17ae80:
    // 0x17ae80: 0x3e00008  jr          $ra
label_17ae84:
    if (ctx->pc == 0x17AE84u) {
        ctx->pc = 0x17AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE80u;
        // 0x17ae84: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE88u;
        goto label_17ae88;
    }
    ctx->pc = 0x17AE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE80u;
        // 0x17ae84: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AE88u;
label_17ae88:
    // 0x17ae88: 0x0  nop
    ctx->pc = 0x17ae88u;
    // NOP
label_17ae8c:
    // 0x17ae8c: 0x0  nop
    ctx->pc = 0x17ae8cu;
    // NOP
label_17ae90:
    // 0x17ae90: 0x8ca5001c  lw          $a1, 0x1C($a1)
    ctx->pc = 0x17ae90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_17ae94:
    // 0x17ae94: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x17ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_17ae98:
    // 0x17ae98: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    if (ctx->pc == 0x17ae98u) { ctx->pc = 0x17ae9cu; }
}
