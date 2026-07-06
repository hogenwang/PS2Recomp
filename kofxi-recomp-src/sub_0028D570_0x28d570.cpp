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

// Function: sub_0028D570
// Address: 0x28d570 - 0x28dce8
void sub_0028D570_0x28d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D570_0x28d570");
#endif

    switch (ctx->pc) {
        case 0x28d570u: goto label_28d570;
        case 0x28d574u: goto label_28d574;
        case 0x28d578u: goto label_28d578;
        case 0x28d57cu: goto label_28d57c;
        case 0x28d580u: goto label_28d580;
        case 0x28d584u: goto label_28d584;
        case 0x28d588u: goto label_28d588;
        case 0x28d58cu: goto label_28d58c;
        case 0x28d590u: goto label_28d590;
        case 0x28d594u: goto label_28d594;
        case 0x28d598u: goto label_28d598;
        case 0x28d59cu: goto label_28d59c;
        case 0x28d5a0u: goto label_28d5a0;
        case 0x28d5a4u: goto label_28d5a4;
        case 0x28d5a8u: goto label_28d5a8;
        case 0x28d5acu: goto label_28d5ac;
        case 0x28d5b0u: goto label_28d5b0;
        case 0x28d5b4u: goto label_28d5b4;
        case 0x28d5b8u: goto label_28d5b8;
        case 0x28d5bcu: goto label_28d5bc;
        case 0x28d5c0u: goto label_28d5c0;
        case 0x28d5c4u: goto label_28d5c4;
        case 0x28d5c8u: goto label_28d5c8;
        case 0x28d5ccu: goto label_28d5cc;
        case 0x28d5d0u: goto label_28d5d0;
        case 0x28d5d4u: goto label_28d5d4;
        case 0x28d5d8u: goto label_28d5d8;
        case 0x28d5dcu: goto label_28d5dc;
        case 0x28d5e0u: goto label_28d5e0;
        case 0x28d5e4u: goto label_28d5e4;
        case 0x28d5e8u: goto label_28d5e8;
        case 0x28d5ecu: goto label_28d5ec;
        case 0x28d5f0u: goto label_28d5f0;
        case 0x28d5f4u: goto label_28d5f4;
        case 0x28d5f8u: goto label_28d5f8;
        case 0x28d5fcu: goto label_28d5fc;
        case 0x28d600u: goto label_28d600;
        case 0x28d604u: goto label_28d604;
        case 0x28d608u: goto label_28d608;
        case 0x28d60cu: goto label_28d60c;
        case 0x28d610u: goto label_28d610;
        case 0x28d614u: goto label_28d614;
        case 0x28d618u: goto label_28d618;
        case 0x28d61cu: goto label_28d61c;
        case 0x28d620u: goto label_28d620;
        case 0x28d624u: goto label_28d624;
        case 0x28d628u: goto label_28d628;
        case 0x28d62cu: goto label_28d62c;
        case 0x28d630u: goto label_28d630;
        case 0x28d634u: goto label_28d634;
        case 0x28d638u: goto label_28d638;
        case 0x28d63cu: goto label_28d63c;
        case 0x28d640u: goto label_28d640;
        case 0x28d644u: goto label_28d644;
        case 0x28d648u: goto label_28d648;
        case 0x28d64cu: goto label_28d64c;
        case 0x28d650u: goto label_28d650;
        case 0x28d654u: goto label_28d654;
        case 0x28d658u: goto label_28d658;
        case 0x28d65cu: goto label_28d65c;
        case 0x28d660u: goto label_28d660;
        case 0x28d664u: goto label_28d664;
        case 0x28d668u: goto label_28d668;
        case 0x28d66cu: goto label_28d66c;
        case 0x28d670u: goto label_28d670;
        case 0x28d674u: goto label_28d674;
        case 0x28d678u: goto label_28d678;
        case 0x28d67cu: goto label_28d67c;
        case 0x28d680u: goto label_28d680;
        case 0x28d684u: goto label_28d684;
        case 0x28d688u: goto label_28d688;
        case 0x28d68cu: goto label_28d68c;
        case 0x28d690u: goto label_28d690;
        case 0x28d694u: goto label_28d694;
        case 0x28d698u: goto label_28d698;
        case 0x28d69cu: goto label_28d69c;
        case 0x28d6a0u: goto label_28d6a0;
        case 0x28d6a4u: goto label_28d6a4;
        case 0x28d6a8u: goto label_28d6a8;
        case 0x28d6acu: goto label_28d6ac;
        case 0x28d6b0u: goto label_28d6b0;
        case 0x28d6b4u: goto label_28d6b4;
        case 0x28d6b8u: goto label_28d6b8;
        case 0x28d6bcu: goto label_28d6bc;
        case 0x28d6c0u: goto label_28d6c0;
        case 0x28d6c4u: goto label_28d6c4;
        case 0x28d6c8u: goto label_28d6c8;
        case 0x28d6ccu: goto label_28d6cc;
        case 0x28d6d0u: goto label_28d6d0;
        case 0x28d6d4u: goto label_28d6d4;
        case 0x28d6d8u: goto label_28d6d8;
        case 0x28d6dcu: goto label_28d6dc;
        case 0x28d6e0u: goto label_28d6e0;
        case 0x28d6e4u: goto label_28d6e4;
        case 0x28d6e8u: goto label_28d6e8;
        case 0x28d6ecu: goto label_28d6ec;
        case 0x28d6f0u: goto label_28d6f0;
        case 0x28d6f4u: goto label_28d6f4;
        case 0x28d6f8u: goto label_28d6f8;
        case 0x28d6fcu: goto label_28d6fc;
        case 0x28d700u: goto label_28d700;
        case 0x28d704u: goto label_28d704;
        case 0x28d708u: goto label_28d708;
        case 0x28d70cu: goto label_28d70c;
        case 0x28d710u: goto label_28d710;
        case 0x28d714u: goto label_28d714;
        case 0x28d718u: goto label_28d718;
        case 0x28d71cu: goto label_28d71c;
        case 0x28d720u: goto label_28d720;
        case 0x28d724u: goto label_28d724;
        case 0x28d728u: goto label_28d728;
        case 0x28d72cu: goto label_28d72c;
        case 0x28d730u: goto label_28d730;
        case 0x28d734u: goto label_28d734;
        case 0x28d738u: goto label_28d738;
        case 0x28d73cu: goto label_28d73c;
        case 0x28d740u: goto label_28d740;
        case 0x28d744u: goto label_28d744;
        case 0x28d748u: goto label_28d748;
        case 0x28d74cu: goto label_28d74c;
        case 0x28d750u: goto label_28d750;
        case 0x28d754u: goto label_28d754;
        case 0x28d758u: goto label_28d758;
        case 0x28d75cu: goto label_28d75c;
        case 0x28d760u: goto label_28d760;
        case 0x28d764u: goto label_28d764;
        case 0x28d768u: goto label_28d768;
        case 0x28d76cu: goto label_28d76c;
        case 0x28d770u: goto label_28d770;
        case 0x28d774u: goto label_28d774;
        case 0x28d778u: goto label_28d778;
        case 0x28d77cu: goto label_28d77c;
        case 0x28d780u: goto label_28d780;
        case 0x28d784u: goto label_28d784;
        case 0x28d788u: goto label_28d788;
        case 0x28d78cu: goto label_28d78c;
        case 0x28d790u: goto label_28d790;
        case 0x28d794u: goto label_28d794;
        case 0x28d798u: goto label_28d798;
        case 0x28d79cu: goto label_28d79c;
        case 0x28d7a0u: goto label_28d7a0;
        case 0x28d7a4u: goto label_28d7a4;
        case 0x28d7a8u: goto label_28d7a8;
        case 0x28d7acu: goto label_28d7ac;
        case 0x28d7b0u: goto label_28d7b0;
        case 0x28d7b4u: goto label_28d7b4;
        case 0x28d7b8u: goto label_28d7b8;
        case 0x28d7bcu: goto label_28d7bc;
        case 0x28d7c0u: goto label_28d7c0;
        case 0x28d7c4u: goto label_28d7c4;
        case 0x28d7c8u: goto label_28d7c8;
        case 0x28d7ccu: goto label_28d7cc;
        case 0x28d7d0u: goto label_28d7d0;
        case 0x28d7d4u: goto label_28d7d4;
        case 0x28d7d8u: goto label_28d7d8;
        case 0x28d7dcu: goto label_28d7dc;
        case 0x28d7e0u: goto label_28d7e0;
        case 0x28d7e4u: goto label_28d7e4;
        case 0x28d7e8u: goto label_28d7e8;
        case 0x28d7ecu: goto label_28d7ec;
        case 0x28d7f0u: goto label_28d7f0;
        case 0x28d7f4u: goto label_28d7f4;
        case 0x28d7f8u: goto label_28d7f8;
        case 0x28d7fcu: goto label_28d7fc;
        case 0x28d800u: goto label_28d800;
        case 0x28d804u: goto label_28d804;
        case 0x28d808u: goto label_28d808;
        case 0x28d80cu: goto label_28d80c;
        case 0x28d810u: goto label_28d810;
        case 0x28d814u: goto label_28d814;
        case 0x28d818u: goto label_28d818;
        case 0x28d81cu: goto label_28d81c;
        case 0x28d820u: goto label_28d820;
        case 0x28d824u: goto label_28d824;
        case 0x28d828u: goto label_28d828;
        case 0x28d82cu: goto label_28d82c;
        case 0x28d830u: goto label_28d830;
        case 0x28d834u: goto label_28d834;
        case 0x28d838u: goto label_28d838;
        case 0x28d83cu: goto label_28d83c;
        case 0x28d840u: goto label_28d840;
        case 0x28d844u: goto label_28d844;
        case 0x28d848u: goto label_28d848;
        case 0x28d84cu: goto label_28d84c;
        case 0x28d850u: goto label_28d850;
        case 0x28d854u: goto label_28d854;
        case 0x28d858u: goto label_28d858;
        case 0x28d85cu: goto label_28d85c;
        case 0x28d860u: goto label_28d860;
        case 0x28d864u: goto label_28d864;
        case 0x28d868u: goto label_28d868;
        case 0x28d86cu: goto label_28d86c;
        case 0x28d870u: goto label_28d870;
        case 0x28d874u: goto label_28d874;
        case 0x28d878u: goto label_28d878;
        case 0x28d87cu: goto label_28d87c;
        case 0x28d880u: goto label_28d880;
        case 0x28d884u: goto label_28d884;
        case 0x28d888u: goto label_28d888;
        case 0x28d88cu: goto label_28d88c;
        case 0x28d890u: goto label_28d890;
        case 0x28d894u: goto label_28d894;
        case 0x28d898u: goto label_28d898;
        case 0x28d89cu: goto label_28d89c;
        case 0x28d8a0u: goto label_28d8a0;
        case 0x28d8a4u: goto label_28d8a4;
        case 0x28d8a8u: goto label_28d8a8;
        case 0x28d8acu: goto label_28d8ac;
        case 0x28d8b0u: goto label_28d8b0;
        case 0x28d8b4u: goto label_28d8b4;
        case 0x28d8b8u: goto label_28d8b8;
        case 0x28d8bcu: goto label_28d8bc;
        case 0x28d8c0u: goto label_28d8c0;
        case 0x28d8c4u: goto label_28d8c4;
        case 0x28d8c8u: goto label_28d8c8;
        case 0x28d8ccu: goto label_28d8cc;
        case 0x28d8d0u: goto label_28d8d0;
        case 0x28d8d4u: goto label_28d8d4;
        case 0x28d8d8u: goto label_28d8d8;
        case 0x28d8dcu: goto label_28d8dc;
        case 0x28d8e0u: goto label_28d8e0;
        case 0x28d8e4u: goto label_28d8e4;
        case 0x28d8e8u: goto label_28d8e8;
        case 0x28d8ecu: goto label_28d8ec;
        case 0x28d8f0u: goto label_28d8f0;
        case 0x28d8f4u: goto label_28d8f4;
        case 0x28d8f8u: goto label_28d8f8;
        case 0x28d8fcu: goto label_28d8fc;
        case 0x28d900u: goto label_28d900;
        case 0x28d904u: goto label_28d904;
        case 0x28d908u: goto label_28d908;
        case 0x28d90cu: goto label_28d90c;
        case 0x28d910u: goto label_28d910;
        case 0x28d914u: goto label_28d914;
        case 0x28d918u: goto label_28d918;
        case 0x28d91cu: goto label_28d91c;
        case 0x28d920u: goto label_28d920;
        case 0x28d924u: goto label_28d924;
        case 0x28d928u: goto label_28d928;
        case 0x28d92cu: goto label_28d92c;
        case 0x28d930u: goto label_28d930;
        case 0x28d934u: goto label_28d934;
        case 0x28d938u: goto label_28d938;
        case 0x28d93cu: goto label_28d93c;
        case 0x28d940u: goto label_28d940;
        case 0x28d944u: goto label_28d944;
        case 0x28d948u: goto label_28d948;
        case 0x28d94cu: goto label_28d94c;
        case 0x28d950u: goto label_28d950;
        case 0x28d954u: goto label_28d954;
        case 0x28d958u: goto label_28d958;
        case 0x28d95cu: goto label_28d95c;
        case 0x28d960u: goto label_28d960;
        case 0x28d964u: goto label_28d964;
        case 0x28d968u: goto label_28d968;
        case 0x28d96cu: goto label_28d96c;
        case 0x28d970u: goto label_28d970;
        case 0x28d974u: goto label_28d974;
        case 0x28d978u: goto label_28d978;
        case 0x28d97cu: goto label_28d97c;
        case 0x28d980u: goto label_28d980;
        case 0x28d984u: goto label_28d984;
        case 0x28d988u: goto label_28d988;
        case 0x28d98cu: goto label_28d98c;
        case 0x28d990u: goto label_28d990;
        case 0x28d994u: goto label_28d994;
        case 0x28d998u: goto label_28d998;
        case 0x28d99cu: goto label_28d99c;
        case 0x28d9a0u: goto label_28d9a0;
        case 0x28d9a4u: goto label_28d9a4;
        case 0x28d9a8u: goto label_28d9a8;
        case 0x28d9acu: goto label_28d9ac;
        case 0x28d9b0u: goto label_28d9b0;
        case 0x28d9b4u: goto label_28d9b4;
        case 0x28d9b8u: goto label_28d9b8;
        case 0x28d9bcu: goto label_28d9bc;
        case 0x28d9c0u: goto label_28d9c0;
        case 0x28d9c4u: goto label_28d9c4;
        case 0x28d9c8u: goto label_28d9c8;
        case 0x28d9ccu: goto label_28d9cc;
        case 0x28d9d0u: goto label_28d9d0;
        case 0x28d9d4u: goto label_28d9d4;
        case 0x28d9d8u: goto label_28d9d8;
        case 0x28d9dcu: goto label_28d9dc;
        case 0x28d9e0u: goto label_28d9e0;
        case 0x28d9e4u: goto label_28d9e4;
        case 0x28d9e8u: goto label_28d9e8;
        case 0x28d9ecu: goto label_28d9ec;
        case 0x28d9f0u: goto label_28d9f0;
        case 0x28d9f4u: goto label_28d9f4;
        case 0x28d9f8u: goto label_28d9f8;
        case 0x28d9fcu: goto label_28d9fc;
        case 0x28da00u: goto label_28da00;
        case 0x28da04u: goto label_28da04;
        case 0x28da08u: goto label_28da08;
        case 0x28da0cu: goto label_28da0c;
        case 0x28da10u: goto label_28da10;
        case 0x28da14u: goto label_28da14;
        case 0x28da18u: goto label_28da18;
        case 0x28da1cu: goto label_28da1c;
        case 0x28da20u: goto label_28da20;
        case 0x28da24u: goto label_28da24;
        case 0x28da28u: goto label_28da28;
        case 0x28da2cu: goto label_28da2c;
        case 0x28da30u: goto label_28da30;
        case 0x28da34u: goto label_28da34;
        case 0x28da38u: goto label_28da38;
        case 0x28da3cu: goto label_28da3c;
        case 0x28da40u: goto label_28da40;
        case 0x28da44u: goto label_28da44;
        case 0x28da48u: goto label_28da48;
        case 0x28da4cu: goto label_28da4c;
        case 0x28da50u: goto label_28da50;
        case 0x28da54u: goto label_28da54;
        case 0x28da58u: goto label_28da58;
        case 0x28da5cu: goto label_28da5c;
        case 0x28da60u: goto label_28da60;
        case 0x28da64u: goto label_28da64;
        case 0x28da68u: goto label_28da68;
        case 0x28da6cu: goto label_28da6c;
        case 0x28da70u: goto label_28da70;
        case 0x28da74u: goto label_28da74;
        case 0x28da78u: goto label_28da78;
        case 0x28da7cu: goto label_28da7c;
        case 0x28da80u: goto label_28da80;
        case 0x28da84u: goto label_28da84;
        case 0x28da88u: goto label_28da88;
        case 0x28da8cu: goto label_28da8c;
        case 0x28da90u: goto label_28da90;
        case 0x28da94u: goto label_28da94;
        case 0x28da98u: goto label_28da98;
        case 0x28da9cu: goto label_28da9c;
        case 0x28daa0u: goto label_28daa0;
        case 0x28daa4u: goto label_28daa4;
        case 0x28daa8u: goto label_28daa8;
        case 0x28daacu: goto label_28daac;
        case 0x28dab0u: goto label_28dab0;
        case 0x28dab4u: goto label_28dab4;
        case 0x28dab8u: goto label_28dab8;
        case 0x28dabcu: goto label_28dabc;
        case 0x28dac0u: goto label_28dac0;
        case 0x28dac4u: goto label_28dac4;
        case 0x28dac8u: goto label_28dac8;
        case 0x28daccu: goto label_28dacc;
        case 0x28dad0u: goto label_28dad0;
        case 0x28dad4u: goto label_28dad4;
        case 0x28dad8u: goto label_28dad8;
        case 0x28dadcu: goto label_28dadc;
        case 0x28dae0u: goto label_28dae0;
        case 0x28dae4u: goto label_28dae4;
        case 0x28dae8u: goto label_28dae8;
        case 0x28daecu: goto label_28daec;
        case 0x28daf0u: goto label_28daf0;
        case 0x28daf4u: goto label_28daf4;
        case 0x28daf8u: goto label_28daf8;
        case 0x28dafcu: goto label_28dafc;
        case 0x28db00u: goto label_28db00;
        case 0x28db04u: goto label_28db04;
        case 0x28db08u: goto label_28db08;
        case 0x28db0cu: goto label_28db0c;
        case 0x28db10u: goto label_28db10;
        case 0x28db14u: goto label_28db14;
        case 0x28db18u: goto label_28db18;
        case 0x28db1cu: goto label_28db1c;
        case 0x28db20u: goto label_28db20;
        case 0x28db24u: goto label_28db24;
        case 0x28db28u: goto label_28db28;
        case 0x28db2cu: goto label_28db2c;
        case 0x28db30u: goto label_28db30;
        case 0x28db34u: goto label_28db34;
        case 0x28db38u: goto label_28db38;
        case 0x28db3cu: goto label_28db3c;
        case 0x28db40u: goto label_28db40;
        case 0x28db44u: goto label_28db44;
        case 0x28db48u: goto label_28db48;
        case 0x28db4cu: goto label_28db4c;
        case 0x28db50u: goto label_28db50;
        case 0x28db54u: goto label_28db54;
        case 0x28db58u: goto label_28db58;
        case 0x28db5cu: goto label_28db5c;
        case 0x28db60u: goto label_28db60;
        case 0x28db64u: goto label_28db64;
        case 0x28db68u: goto label_28db68;
        case 0x28db6cu: goto label_28db6c;
        case 0x28db70u: goto label_28db70;
        case 0x28db74u: goto label_28db74;
        case 0x28db78u: goto label_28db78;
        case 0x28db7cu: goto label_28db7c;
        case 0x28db80u: goto label_28db80;
        case 0x28db84u: goto label_28db84;
        case 0x28db88u: goto label_28db88;
        case 0x28db8cu: goto label_28db8c;
        case 0x28db90u: goto label_28db90;
        case 0x28db94u: goto label_28db94;
        case 0x28db98u: goto label_28db98;
        case 0x28db9cu: goto label_28db9c;
        case 0x28dba0u: goto label_28dba0;
        case 0x28dba4u: goto label_28dba4;
        case 0x28dba8u: goto label_28dba8;
        case 0x28dbacu: goto label_28dbac;
        case 0x28dbb0u: goto label_28dbb0;
        case 0x28dbb4u: goto label_28dbb4;
        case 0x28dbb8u: goto label_28dbb8;
        case 0x28dbbcu: goto label_28dbbc;
        case 0x28dbc0u: goto label_28dbc0;
        case 0x28dbc4u: goto label_28dbc4;
        case 0x28dbc8u: goto label_28dbc8;
        case 0x28dbccu: goto label_28dbcc;
        case 0x28dbd0u: goto label_28dbd0;
        case 0x28dbd4u: goto label_28dbd4;
        case 0x28dbd8u: goto label_28dbd8;
        case 0x28dbdcu: goto label_28dbdc;
        case 0x28dbe0u: goto label_28dbe0;
        case 0x28dbe4u: goto label_28dbe4;
        case 0x28dbe8u: goto label_28dbe8;
        case 0x28dbecu: goto label_28dbec;
        case 0x28dbf0u: goto label_28dbf0;
        case 0x28dbf4u: goto label_28dbf4;
        case 0x28dbf8u: goto label_28dbf8;
        case 0x28dbfcu: goto label_28dbfc;
        case 0x28dc00u: goto label_28dc00;
        case 0x28dc04u: goto label_28dc04;
        case 0x28dc08u: goto label_28dc08;
        case 0x28dc0cu: goto label_28dc0c;
        case 0x28dc10u: goto label_28dc10;
        case 0x28dc14u: goto label_28dc14;
        case 0x28dc18u: goto label_28dc18;
        case 0x28dc1cu: goto label_28dc1c;
        case 0x28dc20u: goto label_28dc20;
        case 0x28dc24u: goto label_28dc24;
        case 0x28dc28u: goto label_28dc28;
        case 0x28dc2cu: goto label_28dc2c;
        case 0x28dc30u: goto label_28dc30;
        case 0x28dc34u: goto label_28dc34;
        case 0x28dc38u: goto label_28dc38;
        case 0x28dc3cu: goto label_28dc3c;
        case 0x28dc40u: goto label_28dc40;
        case 0x28dc44u: goto label_28dc44;
        case 0x28dc48u: goto label_28dc48;
        case 0x28dc4cu: goto label_28dc4c;
        case 0x28dc50u: goto label_28dc50;
        case 0x28dc54u: goto label_28dc54;
        case 0x28dc58u: goto label_28dc58;
        case 0x28dc5cu: goto label_28dc5c;
        case 0x28dc60u: goto label_28dc60;
        case 0x28dc64u: goto label_28dc64;
        case 0x28dc68u: goto label_28dc68;
        case 0x28dc6cu: goto label_28dc6c;
        case 0x28dc70u: goto label_28dc70;
        case 0x28dc74u: goto label_28dc74;
        case 0x28dc78u: goto label_28dc78;
        case 0x28dc7cu: goto label_28dc7c;
        case 0x28dc80u: goto label_28dc80;
        case 0x28dc84u: goto label_28dc84;
        case 0x28dc88u: goto label_28dc88;
        case 0x28dc8cu: goto label_28dc8c;
        case 0x28dc90u: goto label_28dc90;
        case 0x28dc94u: goto label_28dc94;
        case 0x28dc98u: goto label_28dc98;
        case 0x28dc9cu: goto label_28dc9c;
        case 0x28dca0u: goto label_28dca0;
        case 0x28dca4u: goto label_28dca4;
        case 0x28dca8u: goto label_28dca8;
        case 0x28dcacu: goto label_28dcac;
        case 0x28dcb0u: goto label_28dcb0;
        case 0x28dcb4u: goto label_28dcb4;
        case 0x28dcb8u: goto label_28dcb8;
        case 0x28dcbcu: goto label_28dcbc;
        case 0x28dcc0u: goto label_28dcc0;
        case 0x28dcc4u: goto label_28dcc4;
        case 0x28dcc8u: goto label_28dcc8;
        case 0x28dcccu: goto label_28dccc;
        case 0x28dcd0u: goto label_28dcd0;
        case 0x28dcd4u: goto label_28dcd4;
        case 0x28dcd8u: goto label_28dcd8;
        case 0x28dcdcu: goto label_28dcdc;
        case 0x28dce0u: goto label_28dce0;
        case 0x28dce4u: goto label_28dce4;
        default: break;
    }

    ctx->pc = 0x28d570u;

label_28d570:
    // 0x28d570: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_28d574:
    // 0x28d574: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x28d574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_28d578:
    // 0x28d578: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28d578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_28d57c:
    // 0x28d57c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28d57cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d580:
    // 0x28d580: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28d580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_28d584:
    // 0x28d584: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x28d584u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28d588:
    // 0x28d588: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28d588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_28d58c:
    // 0x28d58c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28d58cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d590:
    // 0x28d590: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28d590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28d594:
    // 0x28d594: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28d594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28d598:
    // 0x28d598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28d59c:
    // 0x28d59c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28d59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d5a0:
    // 0x28d5a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_28d5a4:
    // 0x28d5a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28d5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d5a8:
    // 0x28d5a8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_28d5ac:
    if (ctx->pc == 0x28D5ACu) {
        ctx->pc = 0x28D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5A8u;
        // 0x28d5ac: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5B0u;
        goto label_28d5b0;
    }
    ctx->pc = 0x28D5A8u;
    {
        const bool branch_taken_0x28d5a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5A8u;
        // 0x28d5ac: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5a8) {
            ctx->pc = 0x28D5B8u;
            goto label_28d5b8;
        }
    }
    ctx->pc = 0x28D5B0u;
label_28d5b0:
    // 0x28d5b0: 0x1000005a  b           . + 4 + (0x5A << 2)
label_28d5b4:
    if (ctx->pc == 0x28D5B4u) {
        ctx->pc = 0x28D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5B0u;
        // 0x28d5b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5B8u;
        goto label_28d5b8;
    }
    ctx->pc = 0x28D5B0u;
    {
        const bool branch_taken_0x28d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5B0u;
        // 0x28d5b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5b0) {
            ctx->pc = 0x28D71Cu;
            goto label_28d71c;
        }
    }
    ctx->pc = 0x28D5B8u;
label_28d5b8:
    // 0x28d5b8: 0xc0a2e20  jal         func_28B880
label_28d5bc:
    if (ctx->pc == 0x28D5BCu) {
        ctx->pc = 0x28D5C0u;
        goto label_28d5c0;
    }
    ctx->pc = 0x28D5B8u;
    SET_GPR_U32(ctx, 31, 0x28D5C0u);
    ctx->pc = 0x28B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B880u, 0x28D5B8u, 0x28D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5C0u;
label_28d5c0:
    // 0x28d5c0: 0xc0a13de  jal         func_284F78
label_28d5c4:
    if (ctx->pc == 0x28D5C4u) {
        ctx->pc = 0x28D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5C0u;
        // 0x28d5c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5C8u;
        goto label_28d5c8;
    }
    ctx->pc = 0x28D5C0u;
    SET_GPR_U32(ctx, 31, 0x28D5C8u);
    ctx->pc = 0x28D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D5C0u;
    // 0x28d5c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F78u, 0x28D5C0u, 0x28D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5C8u;
label_28d5c8:
    // 0x28d5c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28d5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d5cc:
    // 0x28d5cc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_28d5d0:
    if (ctx->pc == 0x28D5D0u) {
        ctx->pc = 0x28D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5CCu;
        // 0x28d5d0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5D4u;
        goto label_28d5d4;
    }
    ctx->pc = 0x28D5CCu;
    {
        const bool branch_taken_0x28d5cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5CCu;
        // 0x28d5d0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5cc) {
            ctx->pc = 0x28D5ECu;
            goto label_28d5ec;
        }
    }
    ctx->pc = 0x28D5D4u;
label_28d5d4:
    // 0x28d5d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d5d8:
    // 0x28d5d8: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x28d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_28d5dc:
    // 0x28d5dc: 0xc0a1558  jal         func_285560
label_28d5e0:
    if (ctx->pc == 0x28D5E0u) {
        ctx->pc = 0x28D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5DCu;
        // 0x28d5e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5E4u;
        goto label_28d5e4;
    }
    ctx->pc = 0x28D5DCu;
    SET_GPR_U32(ctx, 31, 0x28D5E4u);
    ctx->pc = 0x28D5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D5DCu;
    // 0x28d5e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x28D5DCu, 0x28D5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5E4u;
label_28d5e4:
    // 0x28d5e4: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_28d5e8:
    if (ctx->pc == 0x28D5E8u) {
        ctx->pc = 0x28D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5E4u;
        // 0x28d5e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5ECu;
        goto label_28d5ec;
    }
    ctx->pc = 0x28D5E4u;
    {
        const bool branch_taken_0x28d5e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5E4u;
        // 0x28d5e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5e4) {
            ctx->pc = 0x28D5FCu;
            goto label_28d5fc;
        }
    }
    ctx->pc = 0x28D5ECu;
label_28d5ec:
    // 0x28d5ec: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x28d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_28d5f0:
    // 0x28d5f0: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x28d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_28d5f4:
    // 0x28d5f4: 0x10000032  b           . + 4 + (0x32 << 2)
label_28d5f8:
    if (ctx->pc == 0x28D5F8u) {
        ctx->pc = 0x28D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5F4u;
        // 0x28d5f8: 0x24060802  addiu       $a2, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D5FCu;
        goto label_28d5fc;
    }
    ctx->pc = 0x28D5F4u;
    {
        const bool branch_taken_0x28d5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5F4u;
        // 0x28d5f8: 0x24060802  addiu       $a2, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5f4) {
            ctx->pc = 0x28D6C0u;
            goto label_28d6c0;
        }
    }
    ctx->pc = 0x28D5FCu;
label_28d5fc:
    // 0x28d5fc: 0x16a20025  bne         $s5, $v0, . + 4 + (0x25 << 2)
label_28d600:
    if (ctx->pc == 0x28D600u) {
        ctx->pc = 0x28D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5FCu;
        // 0x28d600: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D604u;
        goto label_28d604;
    }
    ctx->pc = 0x28D5FCu;
    {
        const bool branch_taken_0x28d5fc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5FCu;
        // 0x28d600: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5fc) {
            ctx->pc = 0x28D694u;
            goto label_28d694;
        }
    }
    ctx->pc = 0x28D604u;
label_28d604:
    // 0x28d604: 0x1000000f  b           . + 4 + (0xF << 2)
label_28d608:
    if (ctx->pc == 0x28D608u) {
        ctx->pc = 0x28D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D604u;
        // 0x28d608: 0x2413006c  addiu       $s3, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D60Cu;
        goto label_28d60c;
    }
    ctx->pc = 0x28D604u;
    {
        const bool branch_taken_0x28d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D604u;
        // 0x28d608: 0x2413006c  addiu       $s3, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d604) {
            ctx->pc = 0x28D644u;
            goto label_28d644;
        }
    }
    ctx->pc = 0x28D60Cu;
label_28d60c:
    // 0x28d60c: 0x0  nop
    ctx->pc = 0x28d60cu;
    // NOP
label_28d610:
    // 0x28d610: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x28d610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_28d614:
    // 0x28d614: 0x24060809  addiu       $a2, $zero, 0x809
    ctx->pc = 0x28d614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
label_28d618:
    // 0x28d618: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d61c:
    // 0x28d61c: 0xc0a5648  jal         func_295920
label_28d620:
    if (ctx->pc == 0x28D620u) {
        ctx->pc = 0x28D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D61Cu;
        // 0x28d620: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D624u;
        goto label_28d624;
    }
    ctx->pc = 0x28D61Cu;
    SET_GPR_U32(ctx, 31, 0x28D624u);
    ctx->pc = 0x28D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D61Cu;
    // 0x28d620: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28D61Cu, 0x28D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D624u;
label_28d624:
    // 0x28d624: 0x10000034  b           . + 4 + (0x34 << 2)
label_28d628:
    if (ctx->pc == 0x28D628u) {
        ctx->pc = 0x28D62Cu;
        goto label_28d62c;
    }
    ctx->pc = 0x28D624u;
    {
        const bool branch_taken_0x28d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d624) {
            ctx->pc = 0x28D6F8u;
            goto label_28d6f8;
        }
    }
    ctx->pc = 0x28D62Cu;
label_28d62c:
    // 0x28d62c: 0xc0aff4a  jal         func_2BFD28
label_28d630:
    if (ctx->pc == 0x28D630u) {
        ctx->pc = 0x28D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D62Cu;
        // 0x28d630: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D634u;
        goto label_28d634;
    }
    ctx->pc = 0x28D62Cu;
    SET_GPR_U32(ctx, 31, 0x28D634u);
    ctx->pc = 0x28D630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D62Cu;
    // 0x28d630: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD28u, 0x28D62Cu, 0x28D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D634u;
label_28d634:
    // 0x28d634: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_28d638:
    if (ctx->pc == 0x28D638u) {
        ctx->pc = 0x28D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D634u;
        // 0x28d638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D63Cu;
        goto label_28d63c;
    }
    ctx->pc = 0x28D634u;
    {
        const bool branch_taken_0x28d634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D634u;
        // 0x28d638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d634) {
            ctx->pc = 0x28D6F8u;
            goto label_28d6f8;
        }
    }
    ctx->pc = 0x28D63Cu;
label_28d63c:
    // 0x28d63c: 0xc0b1608  jal         func_2C5820
label_28d640:
    if (ctx->pc == 0x28D640u) {
        ctx->pc = 0x28D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D63Cu;
        // 0x28d640: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D644u;
        goto label_28d644;
    }
    ctx->pc = 0x28D63Cu;
    SET_GPR_U32(ctx, 31, 0x28D644u);
    ctx->pc = 0x28D640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D63Cu;
    // 0x28d640: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5820u, 0x28D63Cu, 0x28D644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D644u;
label_28d644:
    // 0x28d644: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d648:
    // 0x28d648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d64c:
    // 0x28d64c: 0xc0a744c  jal         func_29D130
label_28d650:
    if (ctx->pc == 0x28D650u) {
        ctx->pc = 0x28D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D64Cu;
        // 0x28d650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D654u;
        goto label_28d654;
    }
    ctx->pc = 0x28D64Cu;
    SET_GPR_U32(ctx, 31, 0x28D654u);
    ctx->pc = 0x28D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D64Cu;
    // 0x28d650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D130u, 0x28D64Cu, 0x28D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D654u;
label_28d654:
    // 0x28d654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d658:
    // 0x28d658: 0x5620fff4  bnel        $s1, $zero, . + 4 + (-0xC << 2)
label_28d65c:
    if (ctx->pc == 0x28D65Cu) {
        ctx->pc = 0x28D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D658u;
        // 0x28d65c: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D660u;
        goto label_28d660;
    }
    ctx->pc = 0x28D658u;
    {
        const bool branch_taken_0x28d658 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d658) {
            ctx->pc = 0x28D65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D658u;
            // 0x28d65c: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D62Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d62c;
        }
    }
    ctx->pc = 0x28D660u;
label_28d660:
    // 0x28d660: 0xc0a56cc  jal         func_295B30
label_28d664:
    if (ctx->pc == 0x28D664u) {
        ctx->pc = 0x28D668u;
        goto label_28d668;
    }
    ctx->pc = 0x28D660u;
    SET_GPR_U32(ctx, 31, 0x28D668u);
    ctx->pc = 0x295B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B30u, 0x28D660u, 0x28D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D668u;
label_28d668:
    // 0x28d668: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x28d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_28d66c:
    // 0x28d66c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28d66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_28d670:
    // 0x28d670: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28d670u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_28d674:
    // 0x28d674: 0x1453ffe6  bne         $v0, $s3, . + 4 + (-0x1A << 2)
label_28d678:
    if (ctx->pc == 0x28D678u) {
        ctx->pc = 0x28D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D674u;
        // 0x28d678: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D67Cu;
        goto label_28d67c;
    }
    ctx->pc = 0x28D674u;
    {
        const bool branch_taken_0x28d674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x28D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D674u;
        // 0x28d678: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d674) {
            ctx->pc = 0x28D610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d610;
        }
    }
    ctx->pc = 0x28D67Cu;
label_28d67c:
    // 0x28d67c: 0x1a00ffe5  blez        $s0, . + 4 + (-0x1B << 2)
label_28d680:
    if (ctx->pc == 0x28D680u) {
        ctx->pc = 0x28D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D67Cu;
        // 0x28d680: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D684u;
        goto label_28d684;
    }
    ctx->pc = 0x28D67Cu;
    {
        const bool branch_taken_0x28d67c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D67Cu;
        // 0x28d680: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d67c) {
            ctx->pc = 0x28D614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d614;
        }
    }
    ctx->pc = 0x28D684u;
label_28d684:
    // 0x28d684: 0xc0a56b6  jal         func_295AD8
label_28d688:
    if (ctx->pc == 0x28D688u) {
        ctx->pc = 0x28D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D684u;
        // 0x28d688: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D68Cu;
        goto label_28d68c;
    }
    ctx->pc = 0x28D684u;
    SET_GPR_U32(ctx, 31, 0x28D68Cu);
    ctx->pc = 0x28D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D684u;
    // 0x28d688: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AD8u, 0x28D684u, 0x28D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D68Cu;
label_28d68c:
    // 0x28d68c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_28d690:
    if (ctx->pc == 0x28D690u) {
        ctx->pc = 0x28D694u;
        goto label_28d694;
    }
    ctx->pc = 0x28D68Cu;
    {
        const bool branch_taken_0x28d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d68c) {
            ctx->pc = 0x28D6F8u;
            goto label_28d6f8;
        }
    }
    ctx->pc = 0x28D694u;
label_28d694:
    // 0x28d694: 0x16a20013  bne         $s5, $v0, . + 4 + (0x13 << 2)
label_28d698:
    if (ctx->pc == 0x28D698u) {
        ctx->pc = 0x28D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D694u;
        // 0x28d698: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D69Cu;
        goto label_28d69c;
    }
    ctx->pc = 0x28D694u;
    {
        const bool branch_taken_0x28d694 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D694u;
        // 0x28d698: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d694) {
            ctx->pc = 0x28D6E4u;
            goto label_28d6e4;
        }
    }
    ctx->pc = 0x28D69Cu;
label_28d69c:
    // 0x28d69c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d6a0:
    // 0x28d6a0: 0xc0b00f2  jal         func_2C03C8
label_28d6a4:
    if (ctx->pc == 0x28D6A4u) {
        ctx->pc = 0x28D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6A0u;
        // 0x28d6a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D6A8u;
        goto label_28d6a8;
    }
    ctx->pc = 0x28D6A0u;
    SET_GPR_U32(ctx, 31, 0x28D6A8u);
    ctx->pc = 0x28D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D6A0u;
    // 0x28d6a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C03C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C03C8u, 0x28D6A0u, 0x28D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6A8u;
label_28d6a8:
    // 0x28d6a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d6ac:
    // 0x28d6ac: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
label_28d6b0:
    if (ctx->pc == 0x28D6B0u) {
        ctx->pc = 0x28D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6ACu;
        // 0x28d6b0: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D6B4u;
        goto label_28d6b4;
    }
    ctx->pc = 0x28D6ACu;
    {
        const bool branch_taken_0x28d6ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d6ac) {
            ctx->pc = 0x28D6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D6ACu;
            // 0x28d6b0: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D6D4u;
            goto label_28d6d4;
        }
    }
    ctx->pc = 0x28D6B4u;
label_28d6b4:
    // 0x28d6b4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x28d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_28d6b8:
    // 0x28d6b8: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x28d6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_28d6bc:
    // 0x28d6bc: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x28d6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_28d6c0:
    // 0x28d6c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d6c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d6c4:
    // 0x28d6c4: 0xc0a5648  jal         func_295920
label_28d6c8:
    if (ctx->pc == 0x28D6C8u) {
        ctx->pc = 0x28D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6C4u;
        // 0x28d6c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D6CCu;
        goto label_28d6cc;
    }
    ctx->pc = 0x28D6C4u;
    SET_GPR_U32(ctx, 31, 0x28D6CCu);
    ctx->pc = 0x28D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D6C4u;
    // 0x28d6c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28D6C4u, 0x28D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6CCu;
label_28d6cc:
    // 0x28d6cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_28d6d0:
    if (ctx->pc == 0x28D6D0u) {
        ctx->pc = 0x28D6D4u;
        goto label_28d6d4;
    }
    ctx->pc = 0x28D6CCu;
    {
        const bool branch_taken_0x28d6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d6cc) {
            ctx->pc = 0x28D6F8u;
            goto label_28d6f8;
        }
    }
    ctx->pc = 0x28D6D4u;
label_28d6d4:
    // 0x28d6d4: 0xc0aff4a  jal         func_2BFD28
label_28d6d8:
    if (ctx->pc == 0x28D6D8u) {
        ctx->pc = 0x28D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6D4u;
        // 0x28d6d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D6DCu;
        goto label_28d6dc;
    }
    ctx->pc = 0x28D6D4u;
    SET_GPR_U32(ctx, 31, 0x28D6DCu);
    ctx->pc = 0x28D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D6D4u;
    // 0x28d6d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD28u, 0x28D6D4u, 0x28D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6DCu;
label_28d6dc:
    // 0x28d6dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_28d6e0:
    if (ctx->pc == 0x28D6E0u) {
        ctx->pc = 0x28D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6DCu;
        // 0x28d6e0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D6E4u;
        goto label_28d6e4;
    }
    ctx->pc = 0x28D6DCu;
    {
        const bool branch_taken_0x28d6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6DCu;
        // 0x28d6e0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6dc) {
            ctx->pc = 0x28D6F8u;
            goto label_28d6f8;
        }
    }
    ctx->pc = 0x28D6E4u;
label_28d6e4:
    // 0x28d6e4: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x28d6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_28d6e8:
    // 0x28d6e8: 0x2406009a  addiu       $a2, $zero, 0x9A
    ctx->pc = 0x28d6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_28d6ec:
    // 0x28d6ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d6ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d6f0:
    // 0x28d6f0: 0xc0a5648  jal         func_295920
label_28d6f4:
    if (ctx->pc == 0x28D6F4u) {
        ctx->pc = 0x28D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6F0u;
        // 0x28d6f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D6F8u;
        goto label_28d6f8;
    }
    ctx->pc = 0x28D6F0u;
    SET_GPR_U32(ctx, 31, 0x28D6F8u);
    ctx->pc = 0x28D6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D6F0u;
    // 0x28d6f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28D6F0u, 0x28D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6F8u;
label_28d6f8:
    // 0x28d6f8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_28d6fc:
    if (ctx->pc == 0x28D6FCu) {
        ctx->pc = 0x28D700u;
        goto label_28d700;
    }
    ctx->pc = 0x28D6F8u;
    {
        const bool branch_taken_0x28d6f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d6f8) {
            ctx->pc = 0x28D708u;
            goto label_28d708;
        }
    }
    ctx->pc = 0x28D700u;
label_28d700:
    // 0x28d700: 0xc0b1608  jal         func_2C5820
label_28d704:
    if (ctx->pc == 0x28D704u) {
        ctx->pc = 0x28D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D700u;
        // 0x28d704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D708u;
        goto label_28d708;
    }
    ctx->pc = 0x28D700u;
    SET_GPR_U32(ctx, 31, 0x28D708u);
    ctx->pc = 0x28D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D700u;
    // 0x28d704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5820u, 0x28D700u, 0x28D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D708u;
label_28d708:
    // 0x28d708: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_28d70c:
    if (ctx->pc == 0x28D70Cu) {
        ctx->pc = 0x28D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D708u;
        // 0x28d70c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D710u;
        goto label_28d710;
    }
    ctx->pc = 0x28D708u;
    {
        const bool branch_taken_0x28d708 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D708u;
        // 0x28d70c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d708) {
            ctx->pc = 0x28D71Cu;
            goto label_28d71c;
        }
    }
    ctx->pc = 0x28D710u;
label_28d710:
    // 0x28d710: 0xc0a1430  jal         func_2850C0
label_28d714:
    if (ctx->pc == 0x28D714u) {
        ctx->pc = 0x28D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D710u;
        // 0x28d714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D718u;
        goto label_28d718;
    }
    ctx->pc = 0x28D710u;
    SET_GPR_U32(ctx, 31, 0x28D718u);
    ctx->pc = 0x28D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D710u;
    // 0x28d714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x28D710u, 0x28D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D718u;
label_28d718:
    // 0x28d718: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x28d718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28d71c:
    // 0x28d71c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28d71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28d720:
    // 0x28d720: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x28d720u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28d724:
    // 0x28d724: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28d724u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28d728:
    // 0x28d728: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28d728u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28d72c:
    // 0x28d72c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28d72cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28d730:
    // 0x28d730: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28d730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28d734:
    // 0x28d734: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28d734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28d738:
    // 0x28d738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28d73c:
    // 0x28d73c: 0x3e00008  jr          $ra
label_28d740:
    if (ctx->pc == 0x28D740u) {
        ctx->pc = 0x28D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D73Cu;
        // 0x28d740: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D744u;
        goto label_28d744;
    }
    ctx->pc = 0x28D73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D73Cu;
        // 0x28d740: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D744u;
label_28d744:
    // 0x28d744: 0x0  nop
    ctx->pc = 0x28d744u;
    // NOP
label_28d748:
    // 0x28d748: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28d748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_28d74c:
    // 0x28d74c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x28d74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_28d750:
    // 0x28d750: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28d750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_28d754:
    // 0x28d754: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28d754u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d758:
    // 0x28d758: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28d758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_28d75c:
    // 0x28d75c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x28d75cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28d760:
    // 0x28d760: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28d760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_28d764:
    // 0x28d764: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28d764u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d768:
    // 0x28d768: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28d768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28d76c:
    // 0x28d76c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28d76cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28d770:
    // 0x28d770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28d774:
    // 0x28d774: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28d774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d778:
    // 0x28d778: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28d778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_28d77c:
    // 0x28d77c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28d77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d780:
    // 0x28d780: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_28d784:
    if (ctx->pc == 0x28D784u) {
        ctx->pc = 0x28D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D780u;
        // 0x28d784: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D788u;
        goto label_28d788;
    }
    ctx->pc = 0x28D780u;
    {
        const bool branch_taken_0x28d780 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D780u;
        // 0x28d784: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d780) {
            ctx->pc = 0x28D790u;
            goto label_28d790;
        }
    }
    ctx->pc = 0x28D788u;
label_28d788:
    // 0x28d788: 0x1000005a  b           . + 4 + (0x5A << 2)
label_28d78c:
    if (ctx->pc == 0x28D78Cu) {
        ctx->pc = 0x28D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D788u;
        // 0x28d78c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D790u;
        goto label_28d790;
    }
    ctx->pc = 0x28D788u;
    {
        const bool branch_taken_0x28d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D788u;
        // 0x28d78c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d788) {
            ctx->pc = 0x28D8F4u;
            goto label_28d8f4;
        }
    }
    ctx->pc = 0x28D790u;
label_28d790:
    // 0x28d790: 0xc0a2e20  jal         func_28B880
label_28d794:
    if (ctx->pc == 0x28D794u) {
        ctx->pc = 0x28D798u;
        goto label_28d798;
    }
    ctx->pc = 0x28D790u;
    SET_GPR_U32(ctx, 31, 0x28D798u);
    ctx->pc = 0x28B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B880u, 0x28D790u, 0x28D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D798u;
label_28d798:
    // 0x28d798: 0xc0a13de  jal         func_284F78
label_28d79c:
    if (ctx->pc == 0x28D79Cu) {
        ctx->pc = 0x28D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D798u;
        // 0x28d79c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D7A0u;
        goto label_28d7a0;
    }
    ctx->pc = 0x28D798u;
    SET_GPR_U32(ctx, 31, 0x28D7A0u);
    ctx->pc = 0x28D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D798u;
    // 0x28d79c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F78u, 0x28D798u, 0x28D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7A0u;
label_28d7a0:
    // 0x28d7a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28d7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d7a4:
    // 0x28d7a4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_28d7a8:
    if (ctx->pc == 0x28D7A8u) {
        ctx->pc = 0x28D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7A4u;
        // 0x28d7a8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D7ACu;
        goto label_28d7ac;
    }
    ctx->pc = 0x28D7A4u;
    {
        const bool branch_taken_0x28d7a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7A4u;
        // 0x28d7a8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7a4) {
            ctx->pc = 0x28D7C4u;
            goto label_28d7c4;
        }
    }
    ctx->pc = 0x28D7ACu;
label_28d7ac:
    // 0x28d7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d7b0:
    // 0x28d7b0: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x28d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_28d7b4:
    // 0x28d7b4: 0xc0a1558  jal         func_285560
label_28d7b8:
    if (ctx->pc == 0x28D7B8u) {
        ctx->pc = 0x28D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7B4u;
        // 0x28d7b8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D7BCu;
        goto label_28d7bc;
    }
    ctx->pc = 0x28D7B4u;
    SET_GPR_U32(ctx, 31, 0x28D7BCu);
    ctx->pc = 0x28D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7B4u;
    // 0x28d7b8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x28D7B4u, 0x28D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7BCu;
label_28d7bc:
    // 0x28d7bc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_28d7c0:
    if (ctx->pc == 0x28D7C0u) {
        ctx->pc = 0x28D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7BCu;
        // 0x28d7c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D7C4u;
        goto label_28d7c4;
    }
    ctx->pc = 0x28D7BCu;
    {
        const bool branch_taken_0x28d7bc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7BCu;
        // 0x28d7c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7bc) {
            ctx->pc = 0x28D7D4u;
            goto label_28d7d4;
        }
    }
    ctx->pc = 0x28D7C4u;
label_28d7c4:
    // 0x28d7c4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x28d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_28d7c8:
    // 0x28d7c8: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x28d7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_28d7cc:
    // 0x28d7cc: 0x10000032  b           . + 4 + (0x32 << 2)
label_28d7d0:
    if (ctx->pc == 0x28D7D0u) {
        ctx->pc = 0x28D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7CCu;
        // 0x28d7d0: 0x24060802  addiu       $a2, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D7D4u;
        goto label_28d7d4;
    }
    ctx->pc = 0x28D7CCu;
    {
        const bool branch_taken_0x28d7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7CCu;
        // 0x28d7d0: 0x24060802  addiu       $a2, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7cc) {
            ctx->pc = 0x28D898u;
            goto label_28d898;
        }
    }
    ctx->pc = 0x28D7D4u;
label_28d7d4:
    // 0x28d7d4: 0x16a20025  bne         $s5, $v0, . + 4 + (0x25 << 2)
label_28d7d8:
    if (ctx->pc == 0x28D7D8u) {
        ctx->pc = 0x28D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7D4u;
        // 0x28d7d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D7DCu;
        goto label_28d7dc;
    }
    ctx->pc = 0x28D7D4u;
    {
        const bool branch_taken_0x28d7d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7D4u;
        // 0x28d7d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7d4) {
            ctx->pc = 0x28D86Cu;
            goto label_28d86c;
        }
    }
    ctx->pc = 0x28D7DCu;
label_28d7dc:
    // 0x28d7dc: 0x1000000f  b           . + 4 + (0xF << 2)
label_28d7e0:
    if (ctx->pc == 0x28D7E0u) {
        ctx->pc = 0x28D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7DCu;
        // 0x28d7e0: 0x2413006c  addiu       $s3, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D7E4u;
        goto label_28d7e4;
    }
    ctx->pc = 0x28D7DCu;
    {
        const bool branch_taken_0x28d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7DCu;
        // 0x28d7e0: 0x2413006c  addiu       $s3, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7dc) {
            ctx->pc = 0x28D81Cu;
            goto label_28d81c;
        }
    }
    ctx->pc = 0x28D7E4u;
label_28d7e4:
    // 0x28d7e4: 0x0  nop
    ctx->pc = 0x28d7e4u;
    // NOP
label_28d7e8:
    // 0x28d7e8: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x28d7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_28d7ec:
    // 0x28d7ec: 0x24060809  addiu       $a2, $zero, 0x809
    ctx->pc = 0x28d7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
label_28d7f0:
    // 0x28d7f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d7f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d7f4:
    // 0x28d7f4: 0xc0a5648  jal         func_295920
label_28d7f8:
    if (ctx->pc == 0x28D7F8u) {
        ctx->pc = 0x28D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7F4u;
        // 0x28d7f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D7FCu;
        goto label_28d7fc;
    }
    ctx->pc = 0x28D7F4u;
    SET_GPR_U32(ctx, 31, 0x28D7FCu);
    ctx->pc = 0x28D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7F4u;
    // 0x28d7f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28D7F4u, 0x28D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7FCu;
label_28d7fc:
    // 0x28d7fc: 0x10000034  b           . + 4 + (0x34 << 2)
label_28d800:
    if (ctx->pc == 0x28D800u) {
        ctx->pc = 0x28D804u;
        goto label_28d804;
    }
    ctx->pc = 0x28D7FCu;
    {
        const bool branch_taken_0x28d7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d7fc) {
            ctx->pc = 0x28D8D0u;
            goto label_28d8d0;
        }
    }
    ctx->pc = 0x28D804u;
label_28d804:
    // 0x28d804: 0xc0aff92  jal         func_2BFE48
label_28d808:
    if (ctx->pc == 0x28D808u) {
        ctx->pc = 0x28D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D804u;
        // 0x28d808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D80Cu;
        goto label_28d80c;
    }
    ctx->pc = 0x28D804u;
    SET_GPR_U32(ctx, 31, 0x28D80Cu);
    ctx->pc = 0x28D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D804u;
    // 0x28d808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFE48u, 0x28D804u, 0x28D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D80Cu;
label_28d80c:
    // 0x28d80c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_28d810:
    if (ctx->pc == 0x28D810u) {
        ctx->pc = 0x28D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D80Cu;
        // 0x28d810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D814u;
        goto label_28d814;
    }
    ctx->pc = 0x28D80Cu;
    {
        const bool branch_taken_0x28d80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D80Cu;
        // 0x28d810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d80c) {
            ctx->pc = 0x28D8D0u;
            goto label_28d8d0;
        }
    }
    ctx->pc = 0x28D814u;
label_28d814:
    // 0x28d814: 0xc0b1080  jal         func_2C4200
label_28d818:
    if (ctx->pc == 0x28D818u) {
        ctx->pc = 0x28D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D814u;
        // 0x28d818: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D81Cu;
        goto label_28d81c;
    }
    ctx->pc = 0x28D814u;
    SET_GPR_U32(ctx, 31, 0x28D81Cu);
    ctx->pc = 0x28D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D814u;
    // 0x28d818: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4200u, 0x28D814u, 0x28D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D81Cu;
label_28d81c:
    // 0x28d81c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d820:
    // 0x28d820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d824:
    // 0x28d824: 0xc0a745a  jal         func_29D168
label_28d828:
    if (ctx->pc == 0x28D828u) {
        ctx->pc = 0x28D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D824u;
        // 0x28d828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D82Cu;
        goto label_28d82c;
    }
    ctx->pc = 0x28D824u;
    SET_GPR_U32(ctx, 31, 0x28D82Cu);
    ctx->pc = 0x28D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D824u;
    // 0x28d828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D168u, 0x28D824u, 0x28D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D82Cu;
label_28d82c:
    // 0x28d82c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d830:
    // 0x28d830: 0x5620fff4  bnel        $s1, $zero, . + 4 + (-0xC << 2)
label_28d834:
    if (ctx->pc == 0x28D834u) {
        ctx->pc = 0x28D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D830u;
        // 0x28d834: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D838u;
        goto label_28d838;
    }
    ctx->pc = 0x28D830u;
    {
        const bool branch_taken_0x28d830 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d830) {
            ctx->pc = 0x28D834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D830u;
            // 0x28d834: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d804;
        }
    }
    ctx->pc = 0x28D838u;
label_28d838:
    // 0x28d838: 0xc0a56cc  jal         func_295B30
label_28d83c:
    if (ctx->pc == 0x28D83Cu) {
        ctx->pc = 0x28D840u;
        goto label_28d840;
    }
    ctx->pc = 0x28D838u;
    SET_GPR_U32(ctx, 31, 0x28D840u);
    ctx->pc = 0x295B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B30u, 0x28D838u, 0x28D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D840u;
label_28d840:
    // 0x28d840: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x28d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_28d844:
    // 0x28d844: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28d844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_28d848:
    // 0x28d848: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28d848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_28d84c:
    // 0x28d84c: 0x1453ffe6  bne         $v0, $s3, . + 4 + (-0x1A << 2)
label_28d850:
    if (ctx->pc == 0x28D850u) {
        ctx->pc = 0x28D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D84Cu;
        // 0x28d850: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D854u;
        goto label_28d854;
    }
    ctx->pc = 0x28D84Cu;
    {
        const bool branch_taken_0x28d84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x28D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D84Cu;
        // 0x28d850: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d84c) {
            ctx->pc = 0x28D7E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d7e8;
        }
    }
    ctx->pc = 0x28D854u;
label_28d854:
    // 0x28d854: 0x1a00ffe5  blez        $s0, . + 4 + (-0x1B << 2)
label_28d858:
    if (ctx->pc == 0x28D858u) {
        ctx->pc = 0x28D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D854u;
        // 0x28d858: 0x240500e1  addiu       $a1, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D85Cu;
        goto label_28d85c;
    }
    ctx->pc = 0x28D854u;
    {
        const bool branch_taken_0x28d854 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D854u;
        // 0x28d858: 0x240500e1  addiu       $a1, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d854) {
            ctx->pc = 0x28D7ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d7ec;
        }
    }
    ctx->pc = 0x28D85Cu;
label_28d85c:
    // 0x28d85c: 0xc0a56b6  jal         func_295AD8
label_28d860:
    if (ctx->pc == 0x28D860u) {
        ctx->pc = 0x28D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D85Cu;
        // 0x28d860: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D864u;
        goto label_28d864;
    }
    ctx->pc = 0x28D85Cu;
    SET_GPR_U32(ctx, 31, 0x28D864u);
    ctx->pc = 0x28D860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D85Cu;
    // 0x28d860: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AD8u, 0x28D85Cu, 0x28D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D864u;
label_28d864:
    // 0x28d864: 0x1000001a  b           . + 4 + (0x1A << 2)
label_28d868:
    if (ctx->pc == 0x28D868u) {
        ctx->pc = 0x28D86Cu;
        goto label_28d86c;
    }
    ctx->pc = 0x28D864u;
    {
        const bool branch_taken_0x28d864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d864) {
            ctx->pc = 0x28D8D0u;
            goto label_28d8d0;
        }
    }
    ctx->pc = 0x28D86Cu;
label_28d86c:
    // 0x28d86c: 0x16a20013  bne         $s5, $v0, . + 4 + (0x13 << 2)
label_28d870:
    if (ctx->pc == 0x28D870u) {
        ctx->pc = 0x28D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D86Cu;
        // 0x28d870: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D874u;
        goto label_28d874;
    }
    ctx->pc = 0x28D86Cu;
    {
        const bool branch_taken_0x28d86c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D86Cu;
        // 0x28d870: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d86c) {
            ctx->pc = 0x28D8BCu;
            goto label_28d8bc;
        }
    }
    ctx->pc = 0x28D874u;
label_28d874:
    // 0x28d874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d878:
    // 0x28d878: 0xc0b00fe  jal         func_2C03F8
label_28d87c:
    if (ctx->pc == 0x28D87Cu) {
        ctx->pc = 0x28D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D878u;
        // 0x28d87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D880u;
        goto label_28d880;
    }
    ctx->pc = 0x28D878u;
    SET_GPR_U32(ctx, 31, 0x28D880u);
    ctx->pc = 0x28D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D878u;
    // 0x28d87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C03F8u, 0x28D878u, 0x28D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D880u;
label_28d880:
    // 0x28d880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d884:
    // 0x28d884: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
label_28d888:
    if (ctx->pc == 0x28D888u) {
        ctx->pc = 0x28D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D884u;
        // 0x28d888: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D88Cu;
        goto label_28d88c;
    }
    ctx->pc = 0x28D884u;
    {
        const bool branch_taken_0x28d884 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d884) {
            ctx->pc = 0x28D888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D884u;
            // 0x28d888: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D8ACu;
            goto label_28d8ac;
        }
    }
    ctx->pc = 0x28D88Cu;
label_28d88c:
    // 0x28d88c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x28d88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_28d890:
    // 0x28d890: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x28d890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_28d894:
    // 0x28d894: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x28d894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_28d898:
    // 0x28d898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d89c:
    // 0x28d89c: 0xc0a5648  jal         func_295920
label_28d8a0:
    if (ctx->pc == 0x28D8A0u) {
        ctx->pc = 0x28D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D89Cu;
        // 0x28d8a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D8A4u;
        goto label_28d8a4;
    }
    ctx->pc = 0x28D89Cu;
    SET_GPR_U32(ctx, 31, 0x28D8A4u);
    ctx->pc = 0x28D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D89Cu;
    // 0x28d8a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28D89Cu, 0x28D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8A4u;
label_28d8a4:
    // 0x28d8a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_28d8a8:
    if (ctx->pc == 0x28D8A8u) {
        ctx->pc = 0x28D8ACu;
        goto label_28d8ac;
    }
    ctx->pc = 0x28D8A4u;
    {
        const bool branch_taken_0x28d8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d8a4) {
            ctx->pc = 0x28D8D0u;
            goto label_28d8d0;
        }
    }
    ctx->pc = 0x28D8ACu;
label_28d8ac:
    // 0x28d8ac: 0xc0aff92  jal         func_2BFE48
label_28d8b0:
    if (ctx->pc == 0x28D8B0u) {
        ctx->pc = 0x28D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8ACu;
        // 0x28d8b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D8B4u;
        goto label_28d8b4;
    }
    ctx->pc = 0x28D8ACu;
    SET_GPR_U32(ctx, 31, 0x28D8B4u);
    ctx->pc = 0x28D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D8ACu;
    // 0x28d8b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFE48u, 0x28D8ACu, 0x28D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8B4u;
label_28d8b4:
    // 0x28d8b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_28d8b8:
    if (ctx->pc == 0x28D8B8u) {
        ctx->pc = 0x28D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8B4u;
        // 0x28d8b8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D8BCu;
        goto label_28d8bc;
    }
    ctx->pc = 0x28D8B4u;
    {
        const bool branch_taken_0x28d8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8B4u;
        // 0x28d8b8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8b4) {
            ctx->pc = 0x28D8D0u;
            goto label_28d8d0;
        }
    }
    ctx->pc = 0x28D8BCu;
label_28d8bc:
    // 0x28d8bc: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x28d8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_28d8c0:
    // 0x28d8c0: 0x2406009a  addiu       $a2, $zero, 0x9A
    ctx->pc = 0x28d8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_28d8c4:
    // 0x28d8c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d8c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d8c8:
    // 0x28d8c8: 0xc0a5648  jal         func_295920
label_28d8cc:
    if (ctx->pc == 0x28D8CCu) {
        ctx->pc = 0x28D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8C8u;
        // 0x28d8cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D8D0u;
        goto label_28d8d0;
    }
    ctx->pc = 0x28D8C8u;
    SET_GPR_U32(ctx, 31, 0x28D8D0u);
    ctx->pc = 0x28D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D8C8u;
    // 0x28d8cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28D8C8u, 0x28D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8D0u;
label_28d8d0:
    // 0x28d8d0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_28d8d4:
    if (ctx->pc == 0x28D8D4u) {
        ctx->pc = 0x28D8D8u;
        goto label_28d8d8;
    }
    ctx->pc = 0x28D8D0u;
    {
        const bool branch_taken_0x28d8d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d8d0) {
            ctx->pc = 0x28D8E0u;
            goto label_28d8e0;
        }
    }
    ctx->pc = 0x28D8D8u;
label_28d8d8:
    // 0x28d8d8: 0xc0b1080  jal         func_2C4200
label_28d8dc:
    if (ctx->pc == 0x28D8DCu) {
        ctx->pc = 0x28D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8D8u;
        // 0x28d8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D8E0u;
        goto label_28d8e0;
    }
    ctx->pc = 0x28D8D8u;
    SET_GPR_U32(ctx, 31, 0x28D8E0u);
    ctx->pc = 0x28D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D8D8u;
    // 0x28d8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4200u, 0x28D8D8u, 0x28D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8E0u;
label_28d8e0:
    // 0x28d8e0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_28d8e4:
    if (ctx->pc == 0x28D8E4u) {
        ctx->pc = 0x28D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8E0u;
        // 0x28d8e4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D8E8u;
        goto label_28d8e8;
    }
    ctx->pc = 0x28D8E0u;
    {
        const bool branch_taken_0x28d8e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8E0u;
        // 0x28d8e4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8e0) {
            ctx->pc = 0x28D8F4u;
            goto label_28d8f4;
        }
    }
    ctx->pc = 0x28D8E8u;
label_28d8e8:
    // 0x28d8e8: 0xc0a1430  jal         func_2850C0
label_28d8ec:
    if (ctx->pc == 0x28D8ECu) {
        ctx->pc = 0x28D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8E8u;
        // 0x28d8ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D8F0u;
        goto label_28d8f0;
    }
    ctx->pc = 0x28D8E8u;
    SET_GPR_U32(ctx, 31, 0x28D8F0u);
    ctx->pc = 0x28D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D8E8u;
    // 0x28d8ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x28D8E8u, 0x28D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8F0u;
label_28d8f0:
    // 0x28d8f0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x28d8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28d8f4:
    // 0x28d8f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28d8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28d8f8:
    // 0x28d8f8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x28d8f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28d8fc:
    // 0x28d8fc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28d8fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28d900:
    // 0x28d900: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28d900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28d904:
    // 0x28d904: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28d904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28d908:
    // 0x28d908: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28d908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28d90c:
    // 0x28d90c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28d90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28d910:
    // 0x28d910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28d914:
    // 0x28d914: 0x3e00008  jr          $ra
label_28d918:
    if (ctx->pc == 0x28D918u) {
        ctx->pc = 0x28D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D914u;
        // 0x28d918: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D91Cu;
        goto label_28d91c;
    }
    ctx->pc = 0x28D914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D914u;
        // 0x28d918: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D91Cu;
label_28d91c:
    // 0x28d91c: 0x0  nop
    ctx->pc = 0x28d91cu;
    // NOP
label_28d920:
    // 0x28d920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28d920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28d924:
    // 0x28d924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28d928:
    // 0x28d928: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28d928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28d92c:
    // 0x28d92c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28d92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28d930:
    // 0x28d930: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28d934:
    // 0x28d934: 0xc0afc50  jal         func_2BF140
label_28d938:
    if (ctx->pc == 0x28D938u) {
        ctx->pc = 0x28D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D934u;
        // 0x28d938: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D93Cu;
        goto label_28d93c;
    }
    ctx->pc = 0x28D934u;
    SET_GPR_U32(ctx, 31, 0x28D93Cu);
    ctx->pc = 0x28D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D934u;
    // 0x28d938: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF140u, 0x28D934u, 0x28D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D93Cu;
label_28d93c:
    // 0x28d93c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d940:
    // 0x28d940: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_28d944:
    if (ctx->pc == 0x28D944u) {
        ctx->pc = 0x28D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D940u;
        // 0x28d944: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D948u;
        goto label_28d948;
    }
    ctx->pc = 0x28D940u;
    {
        const bool branch_taken_0x28d940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D940u;
        // 0x28d944: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d940) {
            ctx->pc = 0x28D970u;
            goto label_28d970;
        }
    }
    ctx->pc = 0x28D948u;
label_28d948:
    // 0x28d948: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_28d94c:
    if (ctx->pc == 0x28D94Cu) {
        ctx->pc = 0x28D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D948u;
        // 0x28d94c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D950u;
        goto label_28d950;
    }
    ctx->pc = 0x28D948u;
    {
        const bool branch_taken_0x28d948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D948u;
        // 0x28d94c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d948) {
            ctx->pc = 0x28D974u;
            goto label_28d974;
        }
    }
    ctx->pc = 0x28D950u;
label_28d950:
    // 0x28d950: 0x9c820000  lwu         $v0, 0x0($a0)
    ctx->pc = 0x28d950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28d954:
    // 0x28d954: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28d954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d958:
    // 0x28d958: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x28d958u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_28d95c:
    // 0x28d95c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x28d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_28d960:
    // 0x28d960: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x28d960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_28d964:
    // 0x28d964: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28d964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_28d968:
    // 0x28d968: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28d968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28d96c:
    // 0x28d96c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28d96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28d970:
    // 0x28d970: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28d974:
    // 0x28d974: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28d974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28d978:
    // 0x28d978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28d97c:
    // 0x28d97c: 0x3e00008  jr          $ra
label_28d980:
    if (ctx->pc == 0x28D980u) {
        ctx->pc = 0x28D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D97Cu;
        // 0x28d980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D984u;
        goto label_28d984;
    }
    ctx->pc = 0x28D97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D97Cu;
        // 0x28d980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D984u;
label_28d984:
    // 0x28d984: 0x0  nop
    ctx->pc = 0x28d984u;
    // NOP
label_28d988:
    // 0x28d988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28d988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28d98c:
    // 0x28d98c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x28d98cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28d990:
    // 0x28d990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28d994:
    // 0x28d994: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28d998:
    if (ctx->pc == 0x28D998u) {
        ctx->pc = 0x28D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D994u;
        // 0x28d998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D99Cu;
        goto label_28d99c;
    }
    ctx->pc = 0x28D994u;
    {
        const bool branch_taken_0x28d994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D994u;
        // 0x28d998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d994) {
            ctx->pc = 0x28D9A8u;
            goto label_28d9a8;
        }
    }
    ctx->pc = 0x28D99Cu;
label_28d99c:
    // 0x28d99c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x28d99cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28d9a0:
    // 0x28d9a0: 0x60f809  jalr        $v1
label_28d9a4:
    if (ctx->pc == 0x28D9A4u) {
        ctx->pc = 0x28D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9A0u;
        // 0x28d9a4: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D9A8u;
        goto label_28d9a8;
    }
    ctx->pc = 0x28D9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28D9A8u);
        ctx->pc = 0x28D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9A0u;
        // 0x28d9a4: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D9A0u, 0x28D9A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D9A8u;
label_28d9a8:
    // 0x28d9a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28d9ac:
    // 0x28d9ac: 0x3e00008  jr          $ra
label_28d9b0:
    if (ctx->pc == 0x28D9B0u) {
        ctx->pc = 0x28D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9ACu;
        // 0x28d9b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D9B4u;
        goto label_28d9b4;
    }
    ctx->pc = 0x28D9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9ACu;
        // 0x28d9b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D9B4u;
label_28d9b4:
    // 0x28d9b4: 0x0  nop
    ctx->pc = 0x28d9b4u;
    // NOP
label_28d9b8:
    // 0x28d9b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28d9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_28d9bc:
    // 0x28d9bc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x28d9bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28d9c0:
    // 0x28d9c0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x28d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_28d9c4:
    // 0x28d9c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x28d9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28d9c8:
    // 0x28d9c8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x28d9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_28d9cc:
    // 0x28d9cc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x28d9ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_28d9d0:
    // 0x28d9d0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x28d9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_28d9d4:
    // 0x28d9d4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28d9d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28d9d8:
    // 0x28d9d8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x28d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_28d9dc:
    // 0x28d9dc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x28d9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28d9e0:
    // 0x28d9e0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28d9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_28d9e4:
    // 0x28d9e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d9e8:
    // 0x28d9e8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x28d9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28d9ec:
    // 0x28d9ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28d9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28d9f0:
    // 0x28d9f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_28d9f4:
    // 0x28d9f4: 0xc0b0022  jal         func_2C0088
label_28d9f8:
    if (ctx->pc == 0x28D9F8u) {
        ctx->pc = 0x28D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9F4u;
        // 0x28d9f8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D9FCu;
        goto label_28d9fc;
    }
    ctx->pc = 0x28D9F4u;
    SET_GPR_U32(ctx, 31, 0x28D9FCu);
    ctx->pc = 0x28D9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9F4u;
    // 0x28d9f8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0088u, 0x28D9F4u, 0x28D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D9FCu;
label_28d9fc:
    // 0x28d9fc: 0xc0ac05a  jal         func_2B0168
label_28da00:
    if (ctx->pc == 0x28DA00u) {
        ctx->pc = 0x28DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9FCu;
        // 0x28da00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA04u;
        goto label_28da04;
    }
    ctx->pc = 0x28D9FCu;
    SET_GPR_U32(ctx, 31, 0x28DA04u);
    ctx->pc = 0x28DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9FCu;
    // 0x28da00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0168u, 0x28D9FCu, 0x28DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA04u;
label_28da04:
    // 0x28da04: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28da08:
    if (ctx->pc == 0x28DA08u) {
        ctx->pc = 0x28DA0Cu;
        goto label_28da0c;
    }
    ctx->pc = 0x28DA04u;
    {
        const bool branch_taken_0x28da04 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28da04) {
            ctx->pc = 0x28DA20u;
            goto label_28da20;
        }
    }
    ctx->pc = 0x28DA0Cu;
label_28da0c:
    // 0x28da0c: 0xc0ac05a  jal         func_2B0168
label_28da10:
    if (ctx->pc == 0x28DA10u) {
        ctx->pc = 0x28DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA0Cu;
        // 0x28da10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA14u;
        goto label_28da14;
    }
    ctx->pc = 0x28DA0Cu;
    SET_GPR_U32(ctx, 31, 0x28DA14u);
    ctx->pc = 0x28DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA0Cu;
    // 0x28da10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0168u, 0x28DA0Cu, 0x28DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA14u;
label_28da14:
    // 0x28da14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28da14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28da18:
    // 0x28da18: 0xc0b006a  jal         func_2C01A8
label_28da1c:
    if (ctx->pc == 0x28DA1Cu) {
        ctx->pc = 0x28DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA18u;
        // 0x28da1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA20u;
        goto label_28da20;
    }
    ctx->pc = 0x28DA18u;
    SET_GPR_U32(ctx, 31, 0x28DA20u);
    ctx->pc = 0x28DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA18u;
    // 0x28da1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C01A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C01A8u, 0x28DA18u, 0x28DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA20u;
label_28da20:
    // 0x28da20: 0xc0abe32  jal         func_2AF8C8
label_28da24:
    if (ctx->pc == 0x28DA24u) {
        ctx->pc = 0x28DA28u;
        goto label_28da28;
    }
    ctx->pc = 0x28DA20u;
    SET_GPR_U32(ctx, 31, 0x28DA28u);
    ctx->pc = 0x2AF8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF8C8u, 0x28DA20u, 0x28DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA28u;
label_28da28:
    // 0x28da28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28da28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28da2c:
    // 0x28da2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28da2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28da30:
    // 0x28da30: 0xc0afffe  jal         func_2BFFF8
label_28da34:
    if (ctx->pc == 0x28DA34u) {
        ctx->pc = 0x28DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA30u;
        // 0x28da34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA38u;
        goto label_28da38;
    }
    ctx->pc = 0x28DA30u;
    SET_GPR_U32(ctx, 31, 0x28DA38u);
    ctx->pc = 0x28DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA30u;
    // 0x28da34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFFF8u, 0x28DA30u, 0x28DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA38u;
label_28da38:
    // 0x28da38: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_28da3c:
    if (ctx->pc == 0x28DA3Cu) {
        ctx->pc = 0x28DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA38u;
        // 0x28da3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA40u;
        goto label_28da40;
    }
    ctx->pc = 0x28DA38u;
    {
        const bool branch_taken_0x28da38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA38u;
        // 0x28da3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da38) {
            ctx->pc = 0x28DA50u;
            goto label_28da50;
        }
    }
    ctx->pc = 0x28DA40u;
label_28da40:
    // 0x28da40: 0x240f809  jalr        $s2
label_28da44:
    if (ctx->pc == 0x28DA44u) {
        ctx->pc = 0x28DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA40u;
        // 0x28da44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA48u;
        goto label_28da48;
    }
    ctx->pc = 0x28DA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x28DA48u);
        ctx->pc = 0x28DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA40u;
        // 0x28da44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DA40u, 0x28DA48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28DA48u;
label_28da48:
    // 0x28da48: 0x10000004  b           . + 4 + (0x4 << 2)
label_28da4c:
    if (ctx->pc == 0x28DA4Cu) {
        ctx->pc = 0x28DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA48u;
        // 0x28da4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA50u;
        goto label_28da50;
    }
    ctx->pc = 0x28DA48u;
    {
        const bool branch_taken_0x28da48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA48u;
        // 0x28da4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da48) {
            ctx->pc = 0x28DA5Cu;
            goto label_28da5c;
        }
    }
    ctx->pc = 0x28DA50u;
label_28da50:
    // 0x28da50: 0xc0b054c  jal         func_2C1530
label_28da54:
    if (ctx->pc == 0x28DA54u) {
        ctx->pc = 0x28DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA50u;
        // 0x28da54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA58u;
        goto label_28da58;
    }
    ctx->pc = 0x28DA50u;
    SET_GPR_U32(ctx, 31, 0x28DA58u);
    ctx->pc = 0x28DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA50u;
    // 0x28da54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1530u, 0x28DA50u, 0x28DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA58u;
label_28da58:
    // 0x28da58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28da58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28da5c:
    // 0x28da5c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_28da60:
    if (ctx->pc == 0x28DA60u) {
        ctx->pc = 0x28DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA5Cu;
        // 0x28da60: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA64u;
        goto label_28da64;
    }
    ctx->pc = 0x28DA5Cu;
    {
        const bool branch_taken_0x28da5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA5Cu;
        // 0x28da60: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da5c) {
            ctx->pc = 0x28DA68u;
            goto label_28da68;
        }
    }
    ctx->pc = 0x28DA64u;
label_28da64:
    // 0x28da64: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x28da64u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
label_28da68:
    // 0x28da68: 0xc0b0050  jal         func_2C0140
label_28da6c:
    if (ctx->pc == 0x28DA6Cu) {
        ctx->pc = 0x28DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA68u;
        // 0x28da6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA70u;
        goto label_28da70;
    }
    ctx->pc = 0x28DA68u;
    SET_GPR_U32(ctx, 31, 0x28DA70u);
    ctx->pc = 0x28DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA68u;
    // 0x28da6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0140u, 0x28DA68u, 0x28DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA70u;
label_28da70:
    // 0x28da70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28da70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28da74:
    // 0x28da74: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28da74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28da78:
    // 0x28da78: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x28da78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28da7c:
    // 0x28da7c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x28da7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28da80:
    // 0x28da80: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x28da80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28da84:
    // 0x28da84: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x28da84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28da88:
    // 0x28da88: 0x3e00008  jr          $ra
label_28da8c:
    if (ctx->pc == 0x28DA8Cu) {
        ctx->pc = 0x28DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA88u;
        // 0x28da8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA90u;
        goto label_28da90;
    }
    ctx->pc = 0x28DA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA88u;
        // 0x28da8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DA90u;
label_28da90:
    // 0x28da90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28da90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28da94:
    // 0x28da94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28da98:
    // 0x28da98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28da98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28da9c:
    // 0x28da9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28da9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28daa0:
    // 0x28daa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28daa4:
    // 0x28daa4: 0xc0afd7a  jal         func_2BF5E8
label_28daa8:
    if (ctx->pc == 0x28DAA8u) {
        ctx->pc = 0x28DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAA4u;
        // 0x28daa8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAACu;
        goto label_28daac;
    }
    ctx->pc = 0x28DAA4u;
    SET_GPR_U32(ctx, 31, 0x28DAACu);
    ctx->pc = 0x28DAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAA4u;
    // 0x28daa8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF5E8u, 0x28DAA4u, 0x28DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAACu;
label_28daac:
    // 0x28daac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28daacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28dab0:
    // 0x28dab0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_28dab4:
    if (ctx->pc == 0x28DAB4u) {
        ctx->pc = 0x28DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB0u;
        // 0x28dab4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAB8u;
        goto label_28dab8;
    }
    ctx->pc = 0x28DAB0u;
    {
        const bool branch_taken_0x28dab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB0u;
        // 0x28dab4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dab0) {
            ctx->pc = 0x28DAE0u;
            goto label_28dae0;
        }
    }
    ctx->pc = 0x28DAB8u;
label_28dab8:
    // 0x28dab8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_28dabc:
    if (ctx->pc == 0x28DABCu) {
        ctx->pc = 0x28DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB8u;
        // 0x28dabc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAC0u;
        goto label_28dac0;
    }
    ctx->pc = 0x28DAB8u;
    {
        const bool branch_taken_0x28dab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB8u;
        // 0x28dabc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dab8) {
            ctx->pc = 0x28DAE4u;
            goto label_28dae4;
        }
    }
    ctx->pc = 0x28DAC0u;
label_28dac0:
    // 0x28dac0: 0x9c820000  lwu         $v0, 0x0($a0)
    ctx->pc = 0x28dac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28dac4:
    // 0x28dac4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28dac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28dac8:
    // 0x28dac8: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x28dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_28dacc:
    // 0x28dacc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x28daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_28dad0:
    // 0x28dad0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x28dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_28dad4:
    // 0x28dad4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_28dad8:
    // 0x28dad8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28dadc:
    // 0x28dadc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28dadcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28dae0:
    // 0x28dae0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28dae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28dae4:
    // 0x28dae4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28dae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28dae8:
    // 0x28dae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28dae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28daec:
    // 0x28daec: 0x3e00008  jr          $ra
label_28daf0:
    if (ctx->pc == 0x28DAF0u) {
        ctx->pc = 0x28DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAECu;
        // 0x28daf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAF4u;
        goto label_28daf4;
    }
    ctx->pc = 0x28DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAECu;
        // 0x28daf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DAF4u;
label_28daf4:
    // 0x28daf4: 0x0  nop
    ctx->pc = 0x28daf4u;
    // NOP
label_28daf8:
    // 0x28daf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28daf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28dafc:
    // 0x28dafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28dafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28db00:
    // 0x28db00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28db00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28db04:
    // 0x28db04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28db04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28db08:
    // 0x28db08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28db0c:
    // 0x28db0c: 0xc0afd76  jal         func_2BF5D8
label_28db10:
    if (ctx->pc == 0x28DB10u) {
        ctx->pc = 0x28DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB0Cu;
        // 0x28db10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DB14u;
        goto label_28db14;
    }
    ctx->pc = 0x28DB0Cu;
    SET_GPR_U32(ctx, 31, 0x28DB14u);
    ctx->pc = 0x28DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB0Cu;
    // 0x28db10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF5D8u, 0x28DB0Cu, 0x28DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB14u;
label_28db14:
    // 0x28db14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28db14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28db18:
    // 0x28db18: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_28db1c:
    if (ctx->pc == 0x28DB1Cu) {
        ctx->pc = 0x28DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB18u;
        // 0x28db1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DB20u;
        goto label_28db20;
    }
    ctx->pc = 0x28DB18u;
    {
        const bool branch_taken_0x28db18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB18u;
        // 0x28db1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db18) {
            ctx->pc = 0x28DB48u;
            goto label_28db48;
        }
    }
    ctx->pc = 0x28DB20u;
label_28db20:
    // 0x28db20: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_28db24:
    if (ctx->pc == 0x28DB24u) {
        ctx->pc = 0x28DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB20u;
        // 0x28db24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DB28u;
        goto label_28db28;
    }
    ctx->pc = 0x28DB20u;
    {
        const bool branch_taken_0x28db20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB20u;
        // 0x28db24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db20) {
            ctx->pc = 0x28DB4Cu;
            goto label_28db4c;
        }
    }
    ctx->pc = 0x28DB28u;
label_28db28:
    // 0x28db28: 0x9c820000  lwu         $v0, 0x0($a0)
    ctx->pc = 0x28db28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28db2c:
    // 0x28db2c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28db2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28db30:
    // 0x28db30: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x28db30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_28db34:
    // 0x28db34: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x28db34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_28db38:
    // 0x28db38: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x28db38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_28db3c:
    // 0x28db3c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_28db40:
    // 0x28db40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28db40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28db44:
    // 0x28db44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28db44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28db48:
    // 0x28db48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28db48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28db4c:
    // 0x28db4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28db4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28db50:
    // 0x28db50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28db50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28db54:
    // 0x28db54: 0x3e00008  jr          $ra
label_28db58:
    if (ctx->pc == 0x28DB58u) {
        ctx->pc = 0x28DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB54u;
        // 0x28db58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DB5Cu;
        goto label_28db5c;
    }
    ctx->pc = 0x28DB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB54u;
        // 0x28db58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DB5Cu;
label_28db5c:
    // 0x28db5c: 0x0  nop
    ctx->pc = 0x28db5cu;
    // NOP
label_28db60:
    // 0x28db60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28db60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28db64:
    // 0x28db64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28db68:
    // 0x28db68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28db68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28db6c:
    // 0x28db6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28db6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28db70:
    // 0x28db70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28db70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_28db74:
    // 0x28db74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28db74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28db78:
    // 0x28db78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28db7c:
    // 0x28db7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28db7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28db80:
    // 0x28db80: 0xc0a07f8  jal         func_281FE0
label_28db84:
    if (ctx->pc == 0x28DB84u) {
        ctx->pc = 0x28DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB80u;
        // 0x28db84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DB88u;
        goto label_28db88;
    }
    ctx->pc = 0x28DB80u;
    SET_GPR_U32(ctx, 31, 0x28DB88u);
    ctx->pc = 0x28DB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB80u;
    // 0x28db84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281FE0u, 0x28DB80u, 0x28DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB88u;
label_28db88:
    // 0x28db88: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_28db8c:
    if (ctx->pc == 0x28DB8Cu) {
        ctx->pc = 0x28DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB88u;
        // 0x28db8c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DB90u;
        goto label_28db90;
    }
    ctx->pc = 0x28DB88u;
    {
        const bool branch_taken_0x28db88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB88u;
        // 0x28db8c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db88) {
            ctx->pc = 0x28DBC4u;
            goto label_28dbc4;
        }
    }
    ctx->pc = 0x28DB90u;
label_28db90:
    // 0x28db90: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_28db94:
    if (ctx->pc == 0x28DB94u) {
        ctx->pc = 0x28DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB90u;
        // 0x28db94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DB98u;
        goto label_28db98;
    }
    ctx->pc = 0x28DB90u;
    {
        const bool branch_taken_0x28db90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB90u;
        // 0x28db94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db90) {
            ctx->pc = 0x28DBC8u;
            goto label_28dbc8;
        }
    }
    ctx->pc = 0x28DB98u;
label_28db98:
    // 0x28db98: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_28db9c:
    // 0x28db9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28dba0:
    if (ctx->pc == 0x28DBA0u) {
        ctx->pc = 0x28DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB9Cu;
        // 0x28dba0: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DBA4u;
        goto label_28dba4;
    }
    ctx->pc = 0x28DB9Cu;
    {
        const bool branch_taken_0x28db9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB9Cu;
        // 0x28dba0: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db9c) {
            ctx->pc = 0x28DBC0u;
            goto label_28dbc0;
        }
    }
    ctx->pc = 0x28DBA4u;
label_28dba4:
    // 0x28dba4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28dba8:
    // 0x28dba8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x28dba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28dbac:
    // 0x28dbac: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x28dbacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_28dbb0:
    // 0x28dbb0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_28dbb4:
    // 0x28dbb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28dbb8:
    // 0x28dbb8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x28dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_28dbbc:
    // 0x28dbbc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x28dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_28dbc0:
    // 0x28dbc0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28dbc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28dbc4:
    // 0x28dbc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28dbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28dbc8:
    // 0x28dbc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28dbc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28dbcc:
    // 0x28dbcc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28dbccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28dbd0:
    // 0x28dbd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28dbd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28dbd4:
    // 0x28dbd4: 0x3e00008  jr          $ra
label_28dbd8:
    if (ctx->pc == 0x28DBD8u) {
        ctx->pc = 0x28DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBD4u;
        // 0x28dbd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DBDCu;
        goto label_28dbdc;
    }
    ctx->pc = 0x28DBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBD4u;
        // 0x28dbd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DBDCu;
label_28dbdc:
    // 0x28dbdc: 0x0  nop
    ctx->pc = 0x28dbdcu;
    // NOP
label_28dbe0:
    // 0x28dbe0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_28dbe4:
    if (ctx->pc == 0x28DBE4u) {
        ctx->pc = 0x28DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBE0u;
        // 0x28dbe4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DBE8u;
        goto label_28dbe8;
    }
    ctx->pc = 0x28DBE0u;
    {
        const bool branch_taken_0x28dbe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBE0u;
        // 0x28dbe4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbe0) {
            ctx->pc = 0x28DC0Cu;
            goto label_28dc0c;
        }
    }
    ctx->pc = 0x28DBE8u;
label_28dbe8:
    // 0x28dbe8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_28dbec:
    // 0x28dbec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28dbecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28dbf0:
    // 0x28dbf0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x28dbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_28dbf4:
    // 0x28dbf4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_28dbf8:
    // 0x28dbf8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x28dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_28dbfc:
    // 0x28dbfc: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x28dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_28dc00:
    // 0x28dc00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_28dc04:
    // 0x28dc04: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_28dc08:
    // 0x28dc08: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x28dc08u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
label_28dc0c:
    // 0x28dc0c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_28dc10:
    if (ctx->pc == 0x28DC10u) {
        ctx->pc = 0x28DC14u;
        goto label_28dc14;
    }
    ctx->pc = 0x28DC0Cu;
    {
        const bool branch_taken_0x28dc0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc0c) {
            ctx->pc = 0x28DC3Cu;
            goto label_28dc3c;
        }
    }
    ctx->pc = 0x28DC14u;
label_28dc14:
    // 0x28dc14: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x28dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_28dc18:
    // 0x28dc18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28dc18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28dc1c:
    // 0x28dc1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_28dc20:
    // 0x28dc20: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x28dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_28dc24:
    // 0x28dc24: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x28dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_28dc28:
    // 0x28dc28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_28dc2c:
    // 0x28dc2c: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x28dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_28dc30:
    // 0x28dc30: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x28dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_28dc34:
    // 0x28dc34: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x28dc34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28dc38:
    // 0x28dc38: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x28dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
label_28dc3c:
    // 0x28dc3c: 0x3e00008  jr          $ra
label_28dc40:
    if (ctx->pc == 0x28DC40u) {
        ctx->pc = 0x28DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC3Cu;
        // 0x28dc40: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DC44u;
        goto label_28dc44;
    }
    ctx->pc = 0x28DC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC3Cu;
        // 0x28dc40: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DC44u;
label_28dc44:
    // 0x28dc44: 0x0  nop
    ctx->pc = 0x28dc44u;
    // NOP
label_28dc48:
    // 0x28dc48: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x28dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
label_28dc4c:
    // 0x28dc4c: 0x3e00008  jr          $ra
label_28dc50:
    if (ctx->pc == 0x28DC50u) {
        ctx->pc = 0x28DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC4Cu;
        // 0x28dc50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DC54u;
        goto label_28dc54;
    }
    ctx->pc = 0x28DC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC4Cu;
        // 0x28dc50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DC54u;
label_28dc54:
    // 0x28dc54: 0x0  nop
    ctx->pc = 0x28dc54u;
    // NOP
label_28dc58:
    // 0x28dc58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28dc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28dc5c:
    // 0x28dc5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28dc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28dc60:
    // 0x28dc60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_28dc64:
    // 0x28dc64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28dc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28dc68:
    // 0x28dc68: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28dc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28dc6c:
    // 0x28dc6c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x28dc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28dc70:
    // 0x28dc70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28dc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28dc74:
    // 0x28dc74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28dc78:
    // 0x28dc78: 0xc0b11f0  jal         func_2C47C0
label_28dc7c:
    if (ctx->pc == 0x28DC7Cu) {
        ctx->pc = 0x28DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC78u;
        // 0x28dc7c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DC80u;
        goto label_28dc80;
    }
    ctx->pc = 0x28DC78u;
    SET_GPR_U32(ctx, 31, 0x28DC80u);
    ctx->pc = 0x28DC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC78u;
    // 0x28dc7c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C47C0u, 0x28DC78u, 0x28DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC80u;
label_28dc80:
    // 0x28dc80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28dc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28dc84:
    // 0x28dc84: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_28dc88:
    if (ctx->pc == 0x28DC88u) {
        ctx->pc = 0x28DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC84u;
        // 0x28dc88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DC8Cu;
        goto label_28dc8c;
    }
    ctx->pc = 0x28DC84u;
    {
        const bool branch_taken_0x28dc84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC84u;
        // 0x28dc88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc84) {
            ctx->pc = 0x28DCD0u;
            goto label_28dcd0;
        }
    }
    ctx->pc = 0x28DC8Cu;
label_28dc8c:
    // 0x28dc8c: 0xc0b132a  jal         func_2C4CA8
label_28dc90:
    if (ctx->pc == 0x28DC90u) {
        ctx->pc = 0x28DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC8Cu;
        // 0x28dc90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DC94u;
        goto label_28dc94;
    }
    ctx->pc = 0x28DC8Cu;
    SET_GPR_U32(ctx, 31, 0x28DC94u);
    ctx->pc = 0x28DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC8Cu;
    // 0x28dc90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4CA8u, 0x28DC8Cu, 0x28DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC94u;
label_28dc94:
    // 0x28dc94: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_28dc98:
    if (ctx->pc == 0x28DC98u) {
        ctx->pc = 0x28DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC94u;
        // 0x28dc98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DC9Cu;
        goto label_28dc9c;
    }
    ctx->pc = 0x28DC94u;
    {
        const bool branch_taken_0x28dc94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC94u;
        // 0x28dc98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc94) {
            ctx->pc = 0x28DCC4u;
            goto label_28dcc4;
        }
    }
    ctx->pc = 0x28DC9Cu;
label_28dc9c:
    // 0x28dc9c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_28dca0:
    if (ctx->pc == 0x28DCA0u) {
        ctx->pc = 0x28DCA4u;
        goto label_28dca4;
    }
    ctx->pc = 0x28DC9Cu;
    {
        const bool branch_taken_0x28dc9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc9c) {
            ctx->pc = 0x28DCC4u;
            goto label_28dcc4;
        }
    }
    ctx->pc = 0x28DCA4u;
label_28dca4:
    // 0x28dca4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28dca8:
    // 0x28dca8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_28dcac:
    if (ctx->pc == 0x28DCACu) {
        ctx->pc = 0x28DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCA8u;
        // 0x28dcac: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DCB0u;
        goto label_28dcb0;
    }
    ctx->pc = 0x28DCA8u;
    {
        const bool branch_taken_0x28dca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dca8) {
            ctx->pc = 0x28DCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DCA8u;
            // 0x28dcac: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DCBCu;
            goto label_28dcbc;
        }
    }
    ctx->pc = 0x28DCB0u;
label_28dcb0:
    // 0x28dcb0: 0xc0a3d02  jal         func_28F408
label_28dcb4:
    if (ctx->pc == 0x28DCB4u) {
        ctx->pc = 0x28DCB8u;
        goto label_28dcb8;
    }
    ctx->pc = 0x28DCB0u;
    SET_GPR_U32(ctx, 31, 0x28DCB8u);
    ctx->pc = 0x28F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F408u, 0x28DCB0u, 0x28DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCB8u;
label_28dcb8:
    // 0x28dcb8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x28dcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_28dcbc:
    // 0x28dcbc: 0xc0a3d38  jal         func_28F4E0
label_28dcc0:
    if (ctx->pc == 0x28DCC0u) {
        ctx->pc = 0x28DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCBCu;
        // 0x28dcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DCC4u;
        goto label_28dcc4;
    }
    ctx->pc = 0x28DCBCu;
    SET_GPR_U32(ctx, 31, 0x28DCC4u);
    ctx->pc = 0x28DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DCBCu;
    // 0x28dcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F4E0u, 0x28DCBCu, 0x28DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCC4u;
label_28dcc4:
    // 0x28dcc4: 0xc0b1284  jal         func_2C4A10
label_28dcc8:
    if (ctx->pc == 0x28DCC8u) {
        ctx->pc = 0x28DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCC4u;
        // 0x28dcc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DCCCu;
        goto label_28dccc;
    }
    ctx->pc = 0x28DCC4u;
    SET_GPR_U32(ctx, 31, 0x28DCCCu);
    ctx->pc = 0x28DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DCC4u;
    // 0x28dcc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4A10u, 0x28DCC4u, 0x28DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCCCu;
label_28dccc:
    // 0x28dccc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28dcccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28dcd0:
    // 0x28dcd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28dcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28dcd4:
    // 0x28dcd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28dcd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28dcd8:
    // 0x28dcd8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28dcd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28dcdc:
    // 0x28dcdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28dcdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28dce0:
    // 0x28dce0: 0x3e00008  jr          $ra
label_28dce4:
    if (ctx->pc == 0x28DCE4u) {
        ctx->pc = 0x28DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCE0u;
        // 0x28dce4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DCE8u;
        goto label_fallthrough_0x28dce0;
    }
    ctx->pc = 0x28DCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCE0u;
        // 0x28dce4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28dce0:
    ctx->pc = 0x28DCE8u;
}
